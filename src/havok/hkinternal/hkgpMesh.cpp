/* ---------- headers */

#include "havok\hkinternal\hkgpMesh.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkgpMesh::`RTTI Complete Object Locator'; // "??_R4hkgpMesh@@6B@"
// hkgpMesh::`RTTI Class Hierarchy Descriptor'; // "??_R3hkgpMesh@@8"
// hkgpMesh::`RTTI Base Class Array'; // "??_R2hkgpMesh@@8"
// hkgpMesh::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkgpMesh@@8"
// hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@?$hkgpAbstractMesh@UEdge@hkgpMeshBase@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@8"
// hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>::`RTTI Class Hierarchy Descriptor'; // "??_R3?$hkgpAbstractMesh@UEdge@hkgpMeshBase@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@8"
// hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>::`RTTI Base Class Array'; // "??_R2?$hkgpAbstractMesh@UEdge@hkgpMeshBase@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@8"
// const hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>::`RTTI Complete Object Locator'; // "??_R4?$hkgpAbstractMesh@UEdge@hkgpMeshBase@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@6B@"
// const hkgpMesh::NearestFeaturePolicy::`RTTI Complete Object Locator'; // "??_R4NearestFeaturePolicy@hkgpMesh@@6B@"
// hkgpMesh::NearestFeaturePolicy::`RTTI Class Hierarchy Descriptor'; // "??_R3NearestFeaturePolicy@hkgpMesh@@8"
// hkgpMesh::NearestFeaturePolicy::`RTTI Base Class Array'; // "??_R2NearestFeaturePolicy@hkgpMesh@@8"
// hkgpMesh::NearestFeaturePolicy::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@NearestFeaturePolicy@hkgpMesh@@8"
// const hkgpMesh::WeldingPolicy::`RTTI Complete Object Locator'; // "??_R4WeldingPolicy@hkgpMesh@@6B@"
// hkgpMesh::WeldingPolicy::`RTTI Class Hierarchy Descriptor'; // "??_R3WeldingPolicy@hkgpMesh@@8"
// hkgpMesh::WeldingPolicy::`RTTI Base Class Array'; // "??_R2WeldingPolicy@hkgpMesh@@8"
// hkgpMesh::WeldingPolicy::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@WeldingPolicy@hkgpMesh@@8"
// const hkgpMesh::PrismPolicy::`RTTI Complete Object Locator'; // "??_R4PrismPolicy@hkgpMesh@@6B@"
// hkgpMesh::PrismPolicy::`RTTI Class Hierarchy Descriptor'; // "??_R3PrismPolicy@hkgpMesh@@8"
// hkgpMesh::PrismPolicy::`RTTI Base Class Array'; // "??_R2PrismPolicy@hkgpMesh@@8"
// hkgpMesh::PrismPolicy::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@PrismPolicy@hkgpMesh@@8"
// const hkgpMesh::IConvexOverlap::IConvexShape::`RTTI Complete Object Locator'; // "??_R4IConvexShape@IConvexOverlap@hkgpMesh@@6B@"
// hkgpMesh::IConvexOverlap::IConvexShape::`RTTI Class Hierarchy Descriptor'; // "??_R3IConvexShape@IConvexOverlap@hkgpMesh@@8"
// hkgpMesh::IConvexOverlap::IConvexShape::`RTTI Base Class Array'; // "??_R2IConvexShape@IConvexOverlap@hkgpMesh@@8"
// hkgpMesh::IConvexOverlap::IConvexShape::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@IConvexShape@IConvexOverlap@hkgpMesh@@8"
// const hkgpMesh::CollideShapeTriangle::`RTTI Complete Object Locator'; // "??_R4CollideShapeTriangle@hkgpMesh@@6B@"
// hkgpMesh::CollideShapeTriangle::`RTTI Class Hierarchy Descriptor'; // "??_R3CollideShapeTriangle@hkgpMesh@@8"
// hkgpMesh::CollideShapeTriangle::`RTTI Base Class Array'; // "??_R2CollideShapeTriangle@hkgpMesh@@8"
// hkgpMesh::CollideShapeTriangle::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@CollideShapeTriangle@hkgpMesh@@8"
// const hkgpMesh::TriangleShape::`RTTI Complete Object Locator'; // "??_R4TriangleShape@hkgpMesh@@6B@"
// hkgpMesh::TriangleShape::`RTTI Class Hierarchy Descriptor'; // "??_R3TriangleShape@hkgpMesh@@8"
// hkgpMesh::TriangleShape::`RTTI Base Class Array'; // "??_R2TriangleShape@hkgpMesh@@8"
// hkgpMesh::TriangleShape::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@TriangleShape@hkgpMesh@@8"
// const hkgpMesh::ExtrudeShape::`RTTI Complete Object Locator'; // "??_R4ExtrudeShape@hkgpMesh@@6B@"
// hkgpMesh::ExtrudeShape::`RTTI Class Hierarchy Descriptor'; // "??_R3ExtrudeShape@hkgpMesh@@8"
// hkgpMesh::ExtrudeShape::`RTTI Base Class Array'; // "??_R2ExtrudeShape@hkgpMesh@@8"
// hkgpMesh::ExtrudeShape::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@ExtrudeShape@hkgpMesh@@8"
// const hkgpMesh::ConvexHullShape::`RTTI Complete Object Locator'; // "??_R4ConvexHullShape@hkgpMesh@@6B@"
// hkgpMesh::ConvexHullShape::`RTTI Class Hierarchy Descriptor'; // "??_R3ConvexHullShape@hkgpMesh@@8"
// hkgpMesh::ConvexHullShape::`RTTI Base Class Array'; // "??_R2ConvexHullShape@hkgpMesh@@8"
// hkgpMesh::ConvexHullShape::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@ConvexHullShape@hkgpMesh@@8"
// const hkgpMesh::PrismShape<1>::`RTTI Complete Object Locator'; // "??_R4?$PrismShape@$00@hkgpMesh@@6B@"
// hkgpMesh::PrismShape<1>::`RTTI Class Hierarchy Descriptor'; // "??_R3?$PrismShape@$00@hkgpMesh@@8"
// hkgpMesh::PrismShape<1>::`RTTI Base Class Array'; // "??_R2?$PrismShape@$00@hkgpMesh@@8"
// hkgpMesh::PrismShape<1>::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@?$PrismShape@$00@hkgpMesh@@8"
// const hkgpMesh::PrismShape<2>::`RTTI Complete Object Locator'; // "??_R4?$PrismShape@$01@hkgpMesh@@6B@"
// hkgpMesh::PrismShape<2>::`RTTI Class Hierarchy Descriptor'; // "??_R3?$PrismShape@$01@hkgpMesh@@8"
// hkgpMesh::PrismShape<2>::`RTTI Base Class Array'; // "??_R2?$PrismShape@$01@hkgpMesh@@8"
// hkgpMesh::PrismShape<2>::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@?$PrismShape@$01@hkgpMesh@@8"
// const hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::`RTTI Complete Object Locator'; // "??_R4?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@6B@"
// hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::`RTTI Class Hierarchy Descriptor'; // "??_R3?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@8"
// hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::`RTTI Base Class Array'; // "??_R2?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@8"
// hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@8"
// hkgpTriangulatorBase::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkgpTriangulatorBase@@8"
// hkgpTriangulatorBase::`RTTI Class Hierarchy Descriptor'; // "??_R3hkgpTriangulatorBase@@8"
// hkgpTriangulatorBase::`RTTI Base Class Array'; // "??_R2hkgpTriangulatorBase@@8"
// const hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>::`RTTI Complete Object Locator'; // "??_R4?$hkgpAbstractMesh@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@6B@"
// hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>::`RTTI Class Hierarchy Descriptor'; // "??_R3?$hkgpAbstractMesh@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@8"
// hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>::`RTTI Base Class Array'; // "??_R2?$hkgpAbstractMesh@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@8"
// hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@?$hkgpAbstractMesh@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@8"
// const hkgpTriangulatorBase::`RTTI Complete Object Locator'; // "??_R4hkgpTriangulatorBase@@6B@"
// class hkgpMesh::`RTTI Type Descriptor'; // "??_R0?AVhkgpMesh@@@8"
// class hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>::`RTTI Type Descriptor'; // "??_R0?AV?$hkgpAbstractMesh@UEdge@hkgpMeshBase@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@@8"
// struct hkgpMesh::NearestFeaturePolicy::`RTTI Type Descriptor'; // "??_R0?AUNearestFeaturePolicy@hkgpMesh@@@8"
// struct hkgpMesh::WeldingPolicy::`RTTI Type Descriptor'; // "??_R0?AUWeldingPolicy@hkgpMesh@@@8"
// struct hkgpMesh::PrismPolicy::`RTTI Type Descriptor'; // "??_R0?AUPrismPolicy@hkgpMesh@@@8"
// class hkgpMesh::IConvexOverlap::IConvexShape::`RTTI Type Descriptor'; // "??_R0?AVIConvexShape@IConvexOverlap@hkgpMesh@@@8"
// struct hkgpMesh::CollideShapeTriangle::`RTTI Type Descriptor'; // "??_R0?AUCollideShapeTriangle@hkgpMesh@@@8"
// struct hkgpMesh::TriangleShape::`RTTI Type Descriptor'; // "??_R0?AUTriangleShape@hkgpMesh@@@8"
// class hkgpMesh::ExtrudeShape::`RTTI Type Descriptor'; // "??_R0?AVExtrudeShape@hkgpMesh@@@8"
// struct hkgpMesh::ConvexHullShape::`RTTI Type Descriptor'; // "??_R0?AUConvexHullShape@hkgpMesh@@@8"
// class hkgpMesh::PrismShape<1>::`RTTI Type Descriptor'; // "??_R0?AV?$PrismShape@$00@hkgpMesh@@@8"
// class hkgpMesh::PrismShape<2>::`RTTI Type Descriptor'; // "??_R0?AV?$PrismShape@$01@hkgpMesh@@@8"
// class hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::`RTTI Type Descriptor'; // "??_R0?AV?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@8"
// class hkgpTriangulatorBase::`RTTI Type Descriptor'; // "??_R0?AVhkgpTriangulatorBase@@@8"
// class hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>::`RTTI Type Descriptor'; // "??_R0?AV?$hkgpAbstractMesh@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@@8"
// struct hkgpMeshBase::Edge const `public: static struct hkgpMeshBase::Edge const & __cdecl hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::null(void)'::`2'::e; // "?e@?1??null@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@SAABUEdge@hkgpMeshBase@@XZ@4U45@B"
// `public: static struct hkgpMeshBase::Edge const & __cdecl hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::null(void)'::`2'::`local static guard'{2}; // "??_B?1??null@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@SAABUEdge@hkgpMeshBase@@XZ@51"
// struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const `public: static struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const & __cdecl hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::null(void)'::`2'::e; // "?e@?1??null@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@SAABUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ@4U45@B"
// `public: static struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const & __cdecl hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::null(void)'::`2'::`local static guard'{2}; // "??_B?1??null@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@SAABUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ@51"

// public: hkgpMesh::hkgpMesh(void);
// public: virtual hkgpMesh::~hkgpMesh(void);
// public: void hkgpMesh::reset(void);
// public: bool hkgpMesh::isClosedManifold(void) const;
// public: class hkAabb hkgpMesh::getBoundingBox(void) const;
// public: class hkVector4 hkgpMesh::getSupportingVertex(class hkVector4const &) const;
// public: class hkVector4 hkgpMesh::getCenter(struct hkgpMeshBase::Triangle const *) const;
// public: class hkVector4 hkgpMesh::getCenter(void) const;
// public: bool hkgpMesh::setPlane(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4&, bool);
// public: bool hkgpMesh::setPlane(struct hkgpMeshBase::Triangle const *, class hkVector4&, bool);
// public: bool hkgpMesh::updatePlane(struct hkgpMeshBase::Triangle *);
// public: int hkgpMesh::fetchPositions(class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const;
// public: int hkgpMesh::floodFillDetachedParts(void);
// public: int hkgpMesh::countParts(void) const;
// public: int hkgpMesh::explodeParts(class hkArray<class hkgpMesh *, struct hkContainerHeapAllocator> &, bool, bool) const;
// public: int hkgpMesh::setDistanceToPlane(class hkVector4const &, int);
// public: void hkgpMesh::updatePlaneEquations(void);
// public: void hkgpMesh::transform(class hkTransform const &);
// public: void hkgpMesh::scale(class hkVector4const &);
// public: void hkgpMesh::rotate(class hkRotation const &);
// public: void hkgpMesh::rotate(class hkQuaternion const &);
// public: void hkgpMesh::translate(class hkVector4const &);
// public: struct hkgpMesh::Ring * hkgpMesh::createRing(struct hkgpMeshBase::Edge) const;
// public: struct hkgpMesh::sResult hkgpMesh::cut(class hkVector4const &, bool);
// public: int hkgpMesh::segregateVerticesBasedOnPartId(void);
// public: void hkgpMesh::collapseEdge(struct hkgpMeshBase::Edge, bool);
// public: struct hkgpMeshBase::Edge hkgpMesh::splitEdge(struct hkgpMeshBase::Edge, class hkVector4const &, bool);
// public: void hkgpMesh::splitTriangle(struct hkgpMeshBase::Triangle *, class hkVector4const &, bool);
// public: void hkgpMesh::replaceVertex(struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *);
// public: struct hkgpMesh::sResult hkgpMesh::cutAndCap(class hkVector4const &);
// public: bool hkgpMesh::resolveVoid(struct hkgpMeshBase::Edge, struct hkgpMeshBase::Edge);
// public: void hkgpMesh::simplify(struct hkgpMesh::SimplifyConfig const &);
// public: struct hkgpMesh::sResult hkgpMesh::cutAndCap(class hkVector4const &, class hkArray<class hkgpMesh *, struct hkContainerHeapAllocator> &, float, float) const;
// public: void hkgpMesh::locate(class hkVector4const &, struct hkgpMesh::Location &) const;
// public: float hkgpMesh::squaredDistanceToPoint(class hkVector4const &, class hkVector4&, bool *) const;
// public: float hkgpMesh::getVolume(void) const;
// public: class hkgpConvexHull * hkgpMesh::getConvexHull(void) const;
// public: float hkgpMesh::getConvexHullVolume(void) const;
// public: class hkgpMesh * hkgpMesh::clone(void) const;
// public: void hkgpMesh::append(class hkgpMesh *);
// public: void hkgpMesh::invalidateConvexHull(void);
// public: bool hkgpMesh::rebuildConvexHull(void);
// public: void hkgpMesh::rebuildTrianglesTree(void);
// public: void hkgpMesh::appendToGeometry(struct hkGeometry &, bool) const;
// public: void hkgpMesh::appendFromGeometry(struct hkGeometry const &);
// public: void hkgpMesh::appendFromGeometry(struct hkGeometry const &, class hkVector4const &);
// public: void hkgpMesh::appendFromConvexHull(class hkgpConvexHull const *);
// public: void hkgpMesh::setPartId(int);
// public: void hkgpMesh::setVerticesData(int, float);
// public: void hkgpMesh::setVerticesTag(int);
// public: void hkgpMesh::assignVertexNormals(void);
// public: void hkgpMesh::fetchAreaSortedTriangles(class hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator> &, bool) const;
// public: void hkgpMesh::appendConcaveEdges(float, float, class hkgpMesh const *);
// public: class hkgpMesh * hkgpMesh::createOffset(float, int) const;
// public: bool hkgpMesh::checkOverlap(class hkgpMesh::IConvexOverlap::IConvexShape *, float, float *, bool) const;
// public: float hkgpMesh::calculateOverlap(class hkgpMesh::IConvexOverlap::IConvexShape *, bool) const;
// public: bool hkgpMesh::checkOverlap(class hkgpMesh::IConvexOverlap::IConvexShape *, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> const &, float) const;
// public: bool hkgpMesh::checkOverlap(class hkgpMesh::IConvexOverlap::IConvexShape *, class hkArray<struct hkgpMesh::SelfConvexShape *, struct hkContainerHeapAllocator> const &, float) const;
// public: bool hkgpMesh::checkOverlap(class hkgpMesh::IConvexOverlap::IConvexShape *, class hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int> const &, float) const;
// public: void hkgpMesh::enumOverlaps(class hkgpMesh::IConvexOverlap::IConvexShape *, class hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator> &) const;
// public: bool hkgpMesh::isConcave(struct hkgpMeshBase::Edge, float) const;
// public: static float hkgpMesh::tetrahedronVolume6(struct hkgpMeshBase::Edge);
// public: struct hkgpMeshBase::Triangle * hkgpMesh::createTriangle(struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *);
// public: struct hkgpMeshBase::Edge hkgpMesh::findEdge(struct hkgpMeshBase::Vertex const *, struct hkgpMeshBase::Vertex const *) const;
// public: struct hkgpMeshBase::Edge hkgpMesh::flipEdge(struct hkgpMeshBase::Edge) const;
// public: int hkgpMesh::buildPlaneIndices(float, float);
// public: void hkgpMesh::setPartIdsAsPlaneIndices(void);
// public: static bool hkgpMesh::clipTriangles(class hkgpMesh *, struct hkgpMeshBase::Triangle *, class hkgpMesh *, struct hkgpMeshBase::Triangle *, float);
// public: static bool hkgpMesh::hasPosition(struct hkgpMeshBase::Triangle const *, class hkVector4const &);
// public: void hkgpMesh::removeTriangle(struct hkgpMeshBase::Triangle *);
// public: class hkgpMesh * hkgpMesh::trim(class hkgpConvexHull const *);
// public: void hkgpMesh::sortTrianglesByArea(float);
// public: float hkgpMesh::normalize(class hkVector4&, class hkVector4&, float);
// public: float hkgpMesh::projectPointOnSurface(float, class hkVector4&, int) const;
// public: void hkgpMesh::generateSurfaceSamples(struct hkgpMesh::SurfaceSamplingConfig const &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const;
// public: void hkgpMesh::generateConcaveEdges(float, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const;
// public: void hkgpMesh::generateEmptySpaceSamples(int, float, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &, bool) const;
// public: int hkgpMesh::removeOrphanVertices(void);
// public: int hkgpMesh::removeButterflies(int);
// public: void hkgpMesh::reportBadAreaTriangle(class hkVector4const &, class hkVector4const &, class hkVector4const &);
// public: void hkgpMesh::reportBadEdgeLength(class hkVector4const &, class hkVector4const &);
// public: void hkgpMesh::reportDuplicatedEdge(class hkVector4const &, class hkVector4const &);
// public: void hkgpMesh::reportInvalidEdgeWinding(class hkVector4const &, class hkVector4const &);
// public: bool hkgpMesh::hasValidTopology(bool) const;
// merged_847C2BD0;
// public: static void hkgpMesh::operator delete(void *);
// public: hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>::hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>(void);
// merged_847C2CC8;
// public: hkgpMeshBase::Edge::Edge(struct hkgpMeshBase::Triangle *, unsigned int);
// public: hkgpMeshBase::Edge::Edge(unsigned long);
// public: static void * hkgpMesh::operator new(unsigned int);
// public: hkgpMesh::SimplifyConfig::SimplifyConfig(void);
// public: void * hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int);
// public: hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>(void);
// public: static void * hkgpMesh::Ring::operator new(unsigned int);
// public: hkgpMesh::Ring::Ring(void);
// public: void * hkgpMesh::Ring::`scalar deleting destructor'(unsigned int);
// public: static void hkgpMesh::Ring::operator delete(void *);
// public: hkgpMesh::Ring::~Ring(void);
// public: hkgpMeshBase::Vertex::Vertex(void);
// public: hkgpAbstractMeshDefinitions::Vertex<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex>::Vertex<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex>(void);
// public: hkgpMesh::sResult::sResult(enum hkgpMesh::eResult);
// public: hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>(void);
// public: void * hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int);
// public: struct hkgpMesh::sResult & hkgpMesh::sResult::operator=(enum hkgpMesh::eResult);
// public: bool hkgpMesh::sResult::operator bool(void) const;
// public: static void hkgpMesh::createPlanarProjection(class hkVector4const &, bool, class hkRotation &);
// public: bool hkgpMesh::hasVoids(void) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex & hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::operator=(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &);
// public: hkPointerMap<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long, struct hkContainerHeapAllocator>(void);
// public: hkgpMeshBase::Triangle::Triangle(void);
// public: hkgpMeshBase::Triangle::~Triangle(void);
// public: struct hkgpAbstractMeshDefinitions::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase> & hkgpAbstractMeshDefinitions::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase>::operator=(struct hkgpAbstractMeshDefinitions::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase> const &);
// public: bool hkgpMesh::FanEdgeCollector::hasNakedEdges(void) const;
// public: void hkgpMesh::FanEdgeCollector::setVerticesTag(int) const;
// public: void hkgpMesh::FanEdgeCollector::incVerticesTag(int) const;
// public: int hkgpMesh::FanEdgeCollector::countVerticesTag(int) const;
// public: hkgpMesh::CollapseMetric::CollapseMetric(class hkgpMesh *, class hkVector4const &);
// public: hkgpMesh::FanEdgeCollector::FanEdgeCollector(void);
// public: hkgpMesh::FanEdgeCollector::~FanEdgeCollector(void);
// public: hkgpMesh::sResult::sResult(void);
// public: hkgpMesh::NearestFeaturePolicy::NearestFeaturePolicy(class hkVector4const &, float);
// public: virtual float hkgpMesh::NearestFeaturePolicy::addLeaf(struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node const *);
// public: hkgpMesh::Location::Location(void);
// merged_847C3950;
// public: static void hkgpMesh::NearestFeaturePolicy::operator delete(void *);
// public: virtual hkgpMesh::NearestFeaturePolicy::~NearestFeaturePolicy(void);
// public: struct hkgpMesh::Location & hkgpMesh::Location::operator=(struct hkgpMesh::Location const &);
// public: void hkAabb::expandBy(class hkSimdReal const &);
// public: static float hkAabbUtil::getOuterRadius(class hkAabb const &);
// public: hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>(void);
// public: hkgpMesh::SingleEdge::SingleEdge(struct hkgpMeshBase::Vertex const *, struct hkgpMeshBase::Vertex const *);
// public: hkgpMesh::WeldingPolicy::WeldingPolicy(class hkVector4const &, float);
// merged_847C3C48;
// public: static void hkgpMesh::WeldingPolicy::operator delete(void *);
// public: virtual hkgpMesh::WeldingPolicy::~WeldingPolicy(void);
// public: int hkgpMesh::SingleEdge::hash(void) const;
// public: virtual float hkgpMesh::WeldingPolicy::addLeaf(struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node const *);
// public: class hkVector4& hkgpMeshBase::Triangle::position(int);
// public: hkgpMesh::PrismPolicy::PrismPolicy(void);
// public: virtual bool hkgpMesh::PrismPolicy::addHit(struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *, struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *);
// public: virtual hkgpMesh::PrismShape<1>::~PrismShape<1>(void);
// public: virtual hkgpMesh::IConvexOverlap::IConvexShape::~IConvexShape(void);
// public: virtual int hkgpMesh::IConvexOverlap::IConvexShape::getMaxIndex(void) const;
// merged_847C4158;
// public: virtual hkgpMesh::PrismPolicy::~PrismPolicy(void);
// public: virtual hkgpMesh::PrismShape<2>::~PrismShape<2>(void);
// merged_847C41F0;
// public: hkgpMesh::CollideShapeTriangle::CollideShapeTriangle(void);
// merged_847C4300;
// public: static void hkgpMesh::CollideShapeTriangle::operator delete(void *);
// public: virtual hkgpMesh::CollideShapeTriangle::~CollideShapeTriangle(void);
// public: virtual float hkgpMesh::CollideShapeTriangle::addLeaf(struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node const *);
// public: hkgpMesh::TriangleShape::TriangleShape(struct hkgpMeshBase::Triangle *);
// public: hkgpMesh::IConvexOverlap::IConvexShape::IConvexShape(void);
// merged_847C4680;
// public: static void hkgpMesh::TriangleShape::operator delete(void *);
// public: virtual hkgpMesh::TriangleShape::~TriangleShape(void);
// public: hkgpMesh::ExtrudeShape::ExtrudeShape(struct hkgpMeshBase::Triangle *, float);
// merged_847C4930;
// public: static void hkgpMesh::ExtrudeShape::operator delete(void *);
// public: virtual hkgpMesh::ExtrudeShape::~ExtrudeShape(void);
// public: virtual void hkgpMesh::ExtrudeShape::getSupportingVertex(class hkVector4const &, class hkVector4&) const;
// public: virtual class hkAabb hkgpMesh::ExtrudeShape::getBoundingBox(void) const;
// public: virtual void hkgpMesh::TriangleShape::getSupportingVertex(class hkVector4const &, class hkVector4&) const;
// public: virtual class hkAabb hkgpMesh::TriangleShape::getBoundingBox(void) const;
// public: hkgpMesh::ConvexHullShape::ConvexHullShape(class hkgpConvexHull const *);
// public: virtual int hkgpMesh::ConvexHullShape::getMaxIndex(void) const;
// merged_847C4DC0;
// public: static void hkgpMesh::ConvexHullShape::operator delete(void *);
// public: virtual hkgpMesh::ConvexHullShape::~ConvexHullShape(void);
// public: virtual void hkgpMesh::ConvexHullShape::getSupportingVertex(class hkVector4const &, class hkVector4&) const;
// public: virtual class hkAabb hkgpMesh::ConvexHullShape::getBoundingBox(void) const;
// public: static float hkgpMesh::distanceToPlane(class hkVector4const &, class hkVector4const &);
// public: static float hkgpMesh::snap(float, float);
// public: class hkVector4const & hkgpMeshBase::Triangle::position(int) const;
// public: static float hkgpMesh::getTwiceArea(struct hkgpMeshBase::Triangle const *);
// public: static void hkGeometryProcessing::getVertex(class hkAabb const &, int, class hkVector4&);
// public: struct hkgpMeshBase::Vertex *& hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item::next(void);
// public: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item::Item(void);
// public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>(void);
// public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::~Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>(void);
// public: void hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::setVertices(struct hkgpMeshBase::Vertex *const &, struct hkgpMeshBase::Vertex *const &, struct hkgpMeshBase::Vertex *const &);
// public: struct hkgpMeshBase::Vertex * hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::vertex(int) const;
// public: struct hkgpMeshBase::Vertex *& hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::vertex(int);
// public: unsigned long & hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::link(int);
// public: struct hkgpMeshBase::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::Item::next(void) const;
// public: struct hkgpMeshBase::Triangle *& hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::Item::next(void);
// public: static struct hkgpMeshBase::Edge const & hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::null(void);
// public: hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>(struct hkgpMeshBase::Triangle *, unsigned int);
// public: hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>(unsigned long);
// public: struct hkgpMeshBase::Edge hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::next(void) const;
// public: struct hkgpMeshBase::Edge hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::prev(void) const;
// public: struct hkgpMeshBase::Edge hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::link(void) const;
// public: struct hkgpMeshBase::Edge hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::nextCcw(void) const;
// public: struct hkgpMeshBase::Triangle * hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::triangle(void) const;
// public: unsigned long hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::uid(void) const;
// public: struct hkgpMeshBase::Vertex *& hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::start(void) const;
// public: struct hkgpMeshBase::Vertex *& hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::end(void) const;
// public: struct hkgpMeshBase::Vertex *& hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::apex(void) const;
// public: bool hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::isValid(void) const;
// public: bool hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::isMaster(void) const;
// public: bool hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::isNaked(void) const;
// public: bool hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::isBound(void) const;
// public: bool hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::canBind(struct hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *> const &) const;
// public: bool hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::operator==(struct hkgpMeshBase::Edge const &) const;
// public: bool hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::operator!=(struct hkgpMeshBase::Edge const &) const;
// public: static void hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>::operator delete(void *);
// public: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >(void);
// public: struct hkgpMeshBase::Vertex * hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::getFirst(void) const;
// public: int hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::getSize(void) const;
// public: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >(void);
// public: struct hkgpMeshBase::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::getFirst(void) const;
// public: int hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::getSize(void) const;
// public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::operator==(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &) const;
// public: struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item & hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item::operator=(struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item const &);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::getFirst(void) const;
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::Edge(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle *, unsigned int);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::link(void) const;
// public: unsigned long hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::uid(void) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *& hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::start(void) const;
// public: hkArray<struct hkgpMesh::Ring::Segment, struct hkContainerHeapAllocator>::hkArray<struct hkgpMesh::Ring::Segment, struct hkContainerHeapAllocator>(void);
// public: struct hkgpMesh::Ring::Segment & hkArray<struct hkgpMesh::Ring::Segment, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkInplaceArray<struct hkgpMeshBase::Edge, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkgpMeshBase::Edge, 16, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>::hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>::pushBack(struct hkgpMeshBase::Edge const &);
// public: void hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>::reserve(int);
// public: hkInplaceArray<struct hkGeometryProcessing::TransposedVectors, 2, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkGeometryProcessing::TransposedVectors, 2, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::setSize(int, struct hkgpMeshBase::Vertex *const &);
// public: static void * hkArrayBase<struct hkgpMeshBase::Vertex *>::operator new(unsigned int);
// public: static void hkArrayBase<struct hkgpMeshBase::Vertex *>::operator delete(void *);
// public: hkgpMesh::PrismShape<1>::PrismShape<1>(struct hkgpMeshBase::Triangle *);
// public: hkArray<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::hkArray<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::setSize(int);
// public: hkArray<class hkgpMesh *, struct hkContainerHeapAllocator>::hkArray<class hkgpMesh *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkgpMesh *, struct hkContainerHeapAllocator>::pushBack(class hkgpMesh *const &);
// public: class hkgpMesh ** hkArray<class hkgpMesh *, struct hkContainerHeapAllocator>::expandBy(int);
// public: static void * hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::operator new(unsigned int);
// public: static void hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::operator delete(void *);
// public: hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::insert(struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *);
// public: struct hkgpMeshBase::Vertex * hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::getWithDefault(struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *) const;
// public: hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::pushBack(struct hkgpMeshBase::Triangle *const &);
// public: void hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::reserveExactly(int);
// public: hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::insert(struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *);
// public: class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> * hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::getWithDefault(struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *) const;
// public: class Dummy * hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::getIterator(void) const;
// public: class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> * hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::getValue(class Dummy *) const;
// public: class Dummy * hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::getNext(class Dummy *) const;
// public: class hkBool hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::isValid(class Dummy *) const;
// public: hkArray<struct hkgpMesh::Ring *, struct hkContainerHeapAllocator>::hkArray<struct hkgpMesh::Ring *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkgpMesh::Ring *, struct hkContainerHeapAllocator>::pushBack(struct hkgpMesh::Ring *const &);
// public: hkPointerMap<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long, struct hkContainerHeapAllocator>::insert(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long);
// public: unsigned long hkPointerMap<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long, struct hkContainerHeapAllocator>::getWithDefault(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long) const;
// public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::isValid(void) const;
// public: enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType, int>::operator enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType(void) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *& hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::vertex(int);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle *& hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::Item::next(void);
// public: class hkAabb & hkArray<class hkAabb, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>::insert(struct hkgpMeshBase::Vertex *, int);
// public: int hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>::getWithDefault(struct hkgpMeshBase::Vertex *, int) const;
// public: int hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>::getSize(void) const;
// public: void hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>::reserve(int);
// public: hkGeometryProcessing::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>(void);
// public: hkGeometryProcessing::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::~HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>(void);
// public: hkgpMesh::PrismShape<2>::PrismShape<2>(struct hkgpMeshBase::Triangle *);
// public: hkArray<struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *, struct hkContainerHeapAllocator>::hkArray<struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::NodePair, struct hkContainerHeapAllocator>::hkArray<struct hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::NodePair, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<class hkVector4, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkVector4, 32, struct hkContainerHeapAllocator>(void);
// merged_847C6B80;
// merged_847C6BC8;
// public: static bool hkgpAbstractMeshDefinitions::Vertex<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex>::isOrdered(struct hkgpMeshBase::Vertex const *, struct hkgpMeshBase::Vertex const *);
// public: int hkgpMeshBase::Vertex::compare(struct hkgpMeshBase::Vertex const &) const;
// public: hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>(void);
// public: void hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::invalidate(void);
// public: bool hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::hasReferences(void) const;
// public: hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>(void);
// public: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::Item::Item(void);
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::Edge(unsigned long);
// public: hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle *, unsigned int);
// public: static void hkgpMesh::PrismShape<1>::operator delete(void *);
// public: class hkBool hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType, int>::operator==(enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType) const;
// public: unsigned long & hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::link(int);
// public: hkArray<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::hkArray<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(void);
// public: static void hkgpMesh::PrismShape<2>::operator delete(void *);
// public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void);
// public: unsigned long hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::link(int) const;
// public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void);
// public: hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>(unsigned long);
// public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(void);
// public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(void);
// protected: static unsigned int hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::ip1mod3(unsigned int);
// protected: static unsigned int hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::ip2mod3(unsigned int);
// public: void hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::bind(struct hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *> const &) const;
// public: void hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::bindSides(void) const;
// public: void hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::unbind(void) const;
// public: struct hkgpMeshBase::Vertex * hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::allocate(struct hkgpMeshBase::Vertex const &);
// public: void hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::release(struct hkgpMeshBase::Vertex *);
// public: struct hkgpMeshBase::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::allocate(struct hkgpMeshBase::Triangle const &);
// public: void hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::release(struct hkgpMeshBase::Triangle *);
// public: void hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::moveUp(struct hkgpMeshBase::Triangle *);
// public: virtual hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>::~hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>(void);
// public: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::~List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >(void);
// public: hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::~PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::~hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(void);
// public: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::~List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >(void);
// public: hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::~PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::~hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(void);
// public: void hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>::reset(void);
// public: enum hkgpAbstractMeshDefinitions::Error hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>::checkTopology(bool) const;
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>(void);
// public: virtual hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::~hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>(void);
// public: virtual hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>::~hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>(void);
// public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::reset(bool);
// public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::setDomain(class hkVector4const &, class hkVector4const &, float, bool);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::transform(class hkVector4const &) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::insertVertex(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &, bool);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::insertEdge(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &, bool, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> const *);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::locateExistingEdge(int, int, int, int) const;
// public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::partition(void);
// public: hkArrayBase<struct hkgpMesh::Ring::Segment>::hkArrayBase<struct hkgpMesh::Ring::Segment>(void);
// public: struct hkgpMesh::Ring::Segment & hkArrayBase<struct hkgpMesh::Ring::Segment>::operator[](int);
// public: struct hkgpMesh::Ring::Segment & hkArrayBase<struct hkgpMesh::Ring::Segment>::back(void);
// public: int hkArrayBase<struct hkgpMesh::Ring::Segment>::getSize(void) const;
// public: void hkArrayBase<struct hkgpMesh::Ring::Segment>::clear(void);
// public: struct hkgpMesh::Ring::Segment & hkArrayBase<struct hkgpMesh::Ring::Segment>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<struct hkgpMesh::Ring::Segment, struct hkContainerHeapAllocator>::~hkArray<struct hkgpMesh::Ring::Segment, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkgpMesh::Ring::Segment>::~hkArrayBase<struct hkgpMesh::Ring::Segment>(void);
// public: hkArrayBase<struct hkgpMeshBase::Edge>::hkArrayBase<struct hkgpMeshBase::Edge>(void);
// public: struct hkgpMeshBase::Edge const & hkArrayBase<struct hkgpMeshBase::Edge>::operator[](int) const;
// public: struct hkgpMeshBase::Edge & hkArrayBase<struct hkgpMeshBase::Edge>::operator[](int);
// public: struct hkgpMeshBase::Edge & hkArrayBase<struct hkgpMeshBase::Edge>::back(void);
// public: int hkArrayBase<struct hkgpMeshBase::Edge>::getSize(void) const;
// public: void hkArrayBase<struct hkgpMeshBase::Edge>::clear(void);
// public: void hkArrayBase<struct hkgpMeshBase::Edge>::popBack(int);
// public: void hkArrayBase<struct hkgpMeshBase::Edge>::_pushBack(class hkMemoryAllocator &, struct hkgpMeshBase::Edge const &);
// public: void hkArrayBase<struct hkgpMeshBase::Edge>::_reserve(class hkMemoryAllocator &, int);
// public: hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>::~hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkgpMeshBase::Edge>::~hkArrayBase<struct hkgpMeshBase::Edge>(void);
// public: hkInplaceArray<struct hkgpMeshBase::Edge, 16, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkgpMeshBase::Edge, 16, struct hkContainerHeapAllocator>(int);
// public: hkgpMeshBase::Edge::Edge(void);
// public: hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>(void);
// public: hkInplaceArray<struct hkGeometryProcessing::TransposedVectors, 2, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkGeometryProcessing::TransposedVectors, 2, struct hkContainerHeapAllocator>(int);
// public: hkArrayBase<struct hkgpMeshBase::Vertex *>::hkArrayBase<struct hkgpMeshBase::Vertex *>(void);
// public: struct hkgpMeshBase::Vertex *& hkArrayBase<struct hkgpMeshBase::Vertex *>::operator[](int);
// public: int hkArrayBase<struct hkgpMeshBase::Vertex *>::getSize(void) const;
// public: void hkArrayBase<struct hkgpMeshBase::Vertex *>::_setSize(class hkMemoryAllocator &, int, struct hkgpMeshBase::Vertex *const &);
// public: hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::~hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkgpMeshBase::Vertex *>::~hkArrayBase<struct hkgpMeshBase::Vertex *>(void);
// public: struct hkgpMeshBase::Triangle * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node::getLeafData<struct hkgpMeshBase::Triangle *>(void) const;
// public: virtual void hkgpMesh::PrismShape<1>::getSupportingVertex(class hkVector4const &, class hkVector4&) const;
// public: virtual class hkAabb hkgpMesh::PrismShape<1>::getBoundingBox(void) const;
// public: struct hkgpMeshBase::Vertex * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node::getLeafData<struct hkgpMeshBase::Vertex *>(void) const;
// public: int hkgpMesh::floodFill<struct hkgpMesh::FloodFillDetachedPartsPolicy>(struct hkgpMesh::FloodFillDetachedPartsPolicy &);
// public: bool hkgpMesh::FloodFillDetachedPartsPolicy::canCrossEdge(class hkgpMesh *, struct hkgpMeshBase::Edge const &) const;
// public: hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>(void);
// public: class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *& hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::operator[](int);
// public: void hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::_setSize(class hkMemoryAllocator &, int);
// public: hkArray<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::~hkArray<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::~hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>(void);
// public: hkArrayBase<class hkgpMesh *>::hkArrayBase<class hkgpMesh *>(void);
// public: class hkgpMesh *& hkArrayBase<class hkgpMesh *>::operator[](int);
// public: int hkArrayBase<class hkgpMesh *>::getSize(void) const;
// public: void hkArrayBase<class hkgpMesh *>::_pushBack(class hkMemoryAllocator &, class hkgpMesh *const &);
// public: class hkgpMesh ** hkArrayBase<class hkgpMesh *>::_expandBy(class hkMemoryAllocator &, int);
// public: hkArray<class hkgpMesh *, struct hkContainerHeapAllocator>::~hkArray<class hkgpMesh *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkgpMesh *>::~hkArrayBase<class hkgpMesh *>(void);
// public: hkArrayBase<struct hkgpMeshBase::Triangle *>::hkArrayBase<struct hkgpMeshBase::Triangle *>(void);
// public: struct hkgpMeshBase::Triangle *& hkArrayBase<struct hkgpMeshBase::Triangle *>::operator[](int);
// public: int hkArrayBase<struct hkgpMeshBase::Triangle *>::getSize(void) const;
// public: void hkArrayBase<struct hkgpMeshBase::Triangle *>::clear(void);
// public: int hkArrayBase<struct hkgpMeshBase::Triangle *>::indexOf(struct hkgpMeshBase::Triangle *const &, int, int) const;
// public: void hkArrayBase<struct hkgpMeshBase::Triangle *>::_pushBack(class hkMemoryAllocator &, struct hkgpMeshBase::Triangle *const &);
// public: void hkArrayBase<struct hkgpMeshBase::Triangle *>::pushBackUnchecked(struct hkgpMeshBase::Triangle *const &);
// public: void hkArrayBase<struct hkgpMeshBase::Triangle *>::_reserveExactly(class hkMemoryAllocator &, int);
// public: hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::~hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkgpMeshBase::Triangle *>::~hkArrayBase<struct hkgpMeshBase::Triangle *>(void);
// public: void hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::applyFan<struct hkgpMesh::CollapseEdgePolicy>(struct hkgpMesh::CollapseEdgePolicy &) const;
// public: bool hkgpMesh::CollapseEdgePolicy::operator()(struct hkgpMeshBase::Edge const &) const;
// public: hkArrayBase<struct hkgpMesh::Ring *>::hkArrayBase<struct hkgpMesh::Ring *>(void);
// public: struct hkgpMesh::Ring *& hkArrayBase<struct hkgpMesh::Ring *>::operator[](int);
// public: int hkArrayBase<struct hkgpMesh::Ring *>::getSize(void) const;
// public: void hkArrayBase<struct hkgpMesh::Ring *>::clear(void);
// public: void hkArrayBase<struct hkgpMesh::Ring *>::removeAt(int);
// public: void hkArrayBase<struct hkgpMesh::Ring *>::_pushBack(class hkMemoryAllocator &, struct hkgpMesh::Ring *const &);
// public: hkArray<struct hkgpMesh::Ring *, struct hkContainerHeapAllocator>::~hkArray<struct hkgpMesh::Ring *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkgpMesh::Ring *>::~hkArrayBase<struct hkgpMesh::Ring *>(void);
// void hkAlgorithm::swap<struct hkgpMeshBase::Edge>(struct hkgpMeshBase::Edge &, struct hkgpMeshBase::Edge &);
// public: void hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::applyFan<struct hkgpMesh::CollapseMetric>(struct hkgpMesh::CollapseMetric &) const;
// public: bool hkgpMesh::CollapseMetric::operator()(struct hkgpMeshBase::Edge);
// public: void hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::applyFan<struct hkgpMesh::FanEdgeCollector>(struct hkgpMesh::FanEdgeCollector &) const;
// public: bool hkgpMesh::FanEdgeCollector::operator()(struct hkgpMeshBase::Edge const &);
// public: class hkAabb & hkArrayBase<class hkAabb>::back(void);
// public: void hkArrayBase<class hkAabb>::popBack(int);
// public: class hkAabb & hkArrayBase<class hkAabb>::_expandOne(class hkMemoryAllocator &);
// public: hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >(void);
// public: hkArray<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::~hkArray<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::~hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >(void);
// public: void hkGeometryProcessing::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::setBucketsCount(int);
// public: struct hkgpMesh::SingleEdge * hkGeometryProcessing::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::find(int, struct hkgpMesh::SingleEdge const &);
// public: struct hkgpMesh::SingleEdge * hkGeometryProcessing::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::insert(int, struct hkgpMesh::SingleEdge const &);
// void hkAlgorithm::quickSort<struct hkgpMeshBase::Triangle *, struct hkgpMesh::SortByArea>(struct hkgpMeshBase::Triangle **, int, struct hkgpMesh::SortByArea);
// public: virtual void hkgpMesh::PrismShape<2>::getSupportingVertex(class hkVector4const &, class hkVector4&) const;
// public: virtual class hkAabb hkgpMesh::PrismShape<2>::getBoundingBox(void) const;
// public: struct hkgpMesh::SelfConvexShape *const & hkArrayBase<struct hkgpMesh::SelfConvexShape *>::operator[](int) const;
// public: int hkArrayBase<struct hkgpMesh::SelfConvexShape *>::getSize(void) const;
// public: hkArrayBase<struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *>::hkArrayBase<struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *>(void);
// public: struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *& hkArrayBase<struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *>::operator[](int);
// public: class hkgpMesh::IConvexOverlap::IConvexShape * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node::getLeafData<class hkgpMesh::IConvexOverlap::IConvexShape *>(void) const;
// public: hkArrayBase<struct hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::NodePair>::hkArrayBase<struct hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::NodePair>(void);
// public: int hkArrayBase<struct hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::NodePair>::getSize(void) const;
// public: hkInplaceArray<class hkVector4, 32, struct hkContainerHeapAllocator>::hkInplaceArray<class hkVector4, 32, struct hkContainerHeapAllocator>(int);
// public: hkPointerMap<struct hkgpMeshBase::Triangle *, struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpMeshBase::Triangle *, struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>(void);
// merged_847CC798;
// merged_847CC7E0;
// public: hkgpTriangulatorBase::hkgpTriangulatorBase(void);
// public: virtual hkgpTriangulatorBase::~hkgpTriangulatorBase(void);
// public: hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>::hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>(void);
// merged_847CC8E8;
// public: struct hkgpMeshBase::Vertex * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::allocate(struct hkgpMeshBase::Vertex const &);
// public: static void * hkgpMeshBase::Vertex::operator new(unsigned int, void *);
// public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: struct hkgpMeshBase::Vertex *& hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item::prev(void);
// public: struct hkgpMeshBase::Triangle * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::allocate(struct hkgpMeshBase::Triangle const &);
// public: static void * hkgpMeshBase::Triangle::operator new(unsigned int, void *);
// public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: struct hkgpMeshBase::Triangle *& hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::Item::prev(void);
// public: struct hkgpMeshBase::Edge hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::turnCcw(void) const;
// public: struct hkgpMeshBase::Edge hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::turnCw(void) const;
// public: struct hkgpMeshBase::Edge hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::self(void) const;
// public: static void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::operator delete(void *);
// public: static void hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>::operator delete(void *);
// public: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >(void);
// public: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >(void);
// public: hkInplaceArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, 64, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, 64, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkContainerHeapAllocator>::pushBack(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &);
// public: bool hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::isConstrained(void) const;
// public: static struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const & hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::null(void);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle * hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::triangle(void) const;
// public: bool hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::isValid(void) const;
// public: hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkgpMesh::Ring::Segment, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>::hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>(struct hkgpMeshBase::Edge *, int, int);
// public: void hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArray<struct hkGeometryProcessing::TransposedVectors, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::TransposedVectors, struct hkContainerHeapAllocator>(struct hkGeometryProcessing::TransposedVectors *, int, int);
// public: void hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkgpMesh *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: class hkBool hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::hasKey(struct hkgpMeshBase::Vertex *) const;
// public: int hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::getSize(void) const;
// public: void hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkgpMesh::Ring *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkGeometryProcessing::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::clear(void);
// public: class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> & hkGeometryProcessing::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::lookupBucket(int);
// public: void hkArray<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::setSize(int);
// public: hkPointerMap<struct hkgpMeshBase::Triangle *, struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpMeshBase::Triangle *, struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<struct hkgpMeshBase::Triangle *, struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::insert(struct hkgpMeshBase::Triangle *, struct hkgpMeshBase::Triangle *);
// public: class hkBool hkPointerMap<struct hkgpMeshBase::Triangle *, struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::hasKey(struct hkgpMeshBase::Triangle *) const;
// public: class hkBool hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType, int>::operator==(enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType) const;
// public: struct hkgpMesh::SingleEdge & hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkgpMeshBase::Vertex::Vertex(struct hkgpMeshBase::Vertex const &);
// public: hkgpMeshBase::Triangle::Triangle(struct hkgpMeshBase::Triangle const &);
// public: hkgpAbstractMeshDefinitions::Vertex<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex>::Vertex<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex>(struct hkgpAbstractMeshDefinitions::Vertex<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex> const &);
// public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>(struct hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *> const &);
// protected: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item::Item(struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item const &);
// protected: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::Item::Item(struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::Item const &);
// public: hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>(void);
// public: hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>(void);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::master(void) const;
// public: int hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::index(void) const;
// public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void);
// public: bool hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::isMaster(void) const;
// public: static bool hkgpAbstractMeshDefinitions::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase>::isOrdered(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *& hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::end(void) const;
// public: bool hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::isNaked(void) const;
// public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::compare(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &) const;
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::release(struct hkgpMeshBase::Vertex *);
// public: void hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::clear(void);
// private: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Item * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::allocateItem(void);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::release(struct hkgpMeshBase::Triangle *);
// public: void hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::clear(void);
// private: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Item * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::allocateItem(void);
// public: void hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::reset(void);
// public: void hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::reset(void);
// public: void hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>::reset(void);
// public: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::~List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >(void);
// public: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::~List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >(void);
// public: hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::~PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>(void);
// public: class hkVector4 hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::transformUnquantized(class hkVector4const &) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::quantize(class hkVector4const &) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::insertVertex(int, int, bool);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::insertEdge(int, int, int, int, bool, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> const *);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::locateVertex(int, int) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::locateExistingEdge(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex * hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::newVertex(int, int, int);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle * hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::newTriangle(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *);
// public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::destroyEdgeDataHashTable(void);
// public: hkInplaceArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, 64, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, 64, struct hkContainerHeapAllocator>(int);
// public: hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::~PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>(void);
// public: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::clear(void);
// public: hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkContainerHeapAllocator>::~hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkContainerHeapAllocator>(void);
// protected: static unsigned int hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::ip1mod3(unsigned int);
// public: void hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::bind(struct hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *> const &) const;
// void hkAlgorithm::swap<class hkInplaceArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, 64, struct hkContainerHeapAllocator> *>(class hkInplaceArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, 64, struct hkContainerHeapAllocator> *&, class hkInplaceArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, 64, struct hkContainerHeapAllocator> *&);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge & hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::back(void);
// public: int hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::getSize(void) const;
// public: void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::clear(void);
// public: void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::popBack(int);
// public: void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::_pushBack(class hkMemoryAllocator &, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &);
// public: int hkArrayBase<struct hkgpMesh::Ring::Segment>::getCapacity(void) const;
// public: void hkArrayBase<struct hkgpMesh::Ring::Segment>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkgpMesh::Ring::Segment>(struct hkgpMesh::Ring::Segment *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkgpMesh::Ring::Segment>(struct hkgpMesh::Ring::Segment *, int, struct hkTraitBool<0>);
// public: hkArrayBase<struct hkgpMeshBase::Edge>::hkArrayBase<struct hkgpMeshBase::Edge>(struct hkgpMeshBase::Edge *, int, int);
// public: int hkArrayBase<struct hkgpMeshBase::Edge>::getCapacity(void) const;
// public: void hkArrayBase<struct hkgpMeshBase::Edge>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkgpMeshBase::Edge>(struct hkgpMeshBase::Edge *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::constructWithCopy<struct hkgpMeshBase::Edge>(struct hkgpMeshBase::Edge *, int, struct hkgpMeshBase::Edge const &, struct hkTraitBool<0>);
// public: hkArrayBase<struct hkGeometryProcessing::TransposedVectors>::hkArrayBase<struct hkGeometryProcessing::TransposedVectors>(struct hkGeometryProcessing::TransposedVectors *, int, int);
// public: void hkArrayBase<struct hkgpMeshBase::Vertex *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkgpMeshBase::Vertex *>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct hkgpMeshBase::Vertex *>(struct hkgpMeshBase::Vertex **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkgpMeshBase::Vertex *>(struct hkgpMeshBase::Vertex **, int, struct hkgpMeshBase::Vertex *const &, struct hkTraitBool<1>);
// public: class hkVector4 hkgpMesh::PrismShape<1>::getVertex(int) const;
// public: void hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>(class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::construct<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>(class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> **, int, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkgpMesh *>::getCapacity(void) const;
// public: void hkArrayBase<class hkgpMesh *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class hkgpMesh *>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::constructWithCopy<class hkgpMesh *>(class hkgpMesh **, int, class hkgpMesh *const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::construct<class hkgpMesh *>(class hkgpMesh **, int, struct hkTraitBool<1>);
// public: int hkArrayBase<struct hkgpMeshBase::Triangle *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkgpMeshBase::Triangle *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkgpMeshBase::Triangle *>(struct hkgpMeshBase::Triangle **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkgpMeshBase::Triangle *>(struct hkgpMeshBase::Triangle **, int, struct hkgpMeshBase::Triangle *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<struct hkgpMesh::Ring *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkgpMesh::Ring *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkgpMesh::Ring *>(struct hkgpMesh::Ring **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkgpMesh::Ring *>(struct hkgpMesh::Ring **, int, struct hkgpMesh::Ring *const &, struct hkTraitBool<1>);
// public: class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> & hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::operator[](int);
// public: int hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::getSize(void) const;
// public: void hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::clear(void);
// public: void hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::_setSize(class hkMemoryAllocator &, int);
// public: struct hkgpMesh::SingleEdge & hkArrayBase<struct hkgpMesh::SingleEdge>::operator[](int);
// public: int hkArrayBase<struct hkgpMesh::SingleEdge>::getSize(void) const;
// public: void hkArrayBase<struct hkgpMesh::SingleEdge>::clear(void);
// public: int hkArrayBase<struct hkgpMesh::SingleEdge>::indexOf(struct hkgpMesh::SingleEdge const &, int, int) const;
// public: bool hkgpMesh::SingleEdge::operator==(struct hkgpMesh::SingleEdge const &) const;
// public: struct hkgpMesh::SingleEdge & hkArrayBase<struct hkgpMesh::SingleEdge>::_expandOne(class hkMemoryAllocator &);
// void hkAlgorithm::quickSortRecursive<struct hkgpMeshBase::Triangle *, struct hkgpMesh::SortByArea>(struct hkgpMeshBase::Triangle **, int, int, struct hkgpMesh::SortByArea);
// public: bool hkgpMesh::SortByArea::operator()(struct hkgpMeshBase::Triangle const *, struct hkgpMeshBase::Triangle const *) const;
// public: class hkVector4 hkgpMesh::PrismShape<2>::getVertex(int) const;
// public: hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::~PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>(void);
// public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::~hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>(void);
// public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(void);
// public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::~hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(void);
// public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(void);
// public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::~hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(void);
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::Edge(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &);
// public: void * hkgpMeshBase::Triangle::`scalar deleting destructor'(unsigned int);
// public: static void hkgpMeshBase::Triangle::operator delete(void *);
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::Vertex(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &);
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle::~Triangle(void);
// public: void * hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int);
// public: hkgpMesh::Ring::Segment::Segment(void);
// public: hkgpAbstractMeshDefinitions::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase>::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase>(struct hkgpAbstractMeshDefinitions::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase> const &);
// public: bool hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::needRelease(void) const;
// public: bool hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::needRelease(void) const;
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::Vertex(void);
// public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::isBoundary(void) const;
// public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::isEqual(int, int) const;
// public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// protected: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item::Item(struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item const &);
// public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkContainerHeapAllocator>::hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkContainerHeapAllocator>(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge *, int, int);
// public: void hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::Edge(void);
// public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::setConstrained(void) const;
// public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::turnCcwInPlace(void);
// public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::turnCwInPlace(void);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::next(void) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::prev(void) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::nextCw(void) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::nextCcw(void) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::prevCcw(void) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *& hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::apex(void) const;
// public: bool hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::canBind(struct hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *> const &) const;
// public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::Insertion(enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &);
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle::Triangle(void);
// public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::~Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>(void);
// public: void hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::setVertices(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *const &, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *const &, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *const &);
// public: class hkBool hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType, int>::operator!=(enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType) const;
// public: static void hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::operator delete(void *);
// public: hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::~HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>(void);
// public: hkgpAbstractMeshDefinitions::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase>::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase>(void);
// public: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item::Item(void);
// public: hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>(void);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::turnCcw(void) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::turnCw(void) const;
// public: hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType, int>::hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType, int>(enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType);
// public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>(void);
// public: void hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::invalidate(void);
// public: bool hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::hasReferences(void) const;
// public: unsigned long hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::link(int) const;
// public: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::Item::Item(void);
// public: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::operator[](int);
// public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::getSize(void) const;
// public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::clear(void);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::removeAt(int);
// private: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::allocateNewPool(void);
// private: void hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::releasePool(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *) const;
// public: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::operator[](int);
// public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::getSize(void) const;
// public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::clear(void);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::removeAt(int);
// private: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::allocateNewPool(void);
// private: void hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::releasePool(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *) const;
// public: void hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::reset(void);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::allocate(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle const &);
// public: void hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::reset(void);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex * hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::allocate(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &);
// public: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::clear(void);
// public: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::clear(void);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::insertVertex(int, int, bool, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location const &, bool);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::locateVertex(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, int, int) const;
// public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::setEdgeData(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> const &);
// public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::setRoot(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle *);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::conformEdge(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle * hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::getRoot(int, int) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::locateExistingVertex(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *) const;
// public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::orientation(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *);
// public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::orientation(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &, int, int);
// public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::orientation(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *);
// public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::orientation(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, int, int);
// public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::orientation(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, int, int, int, int);
// public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::checkOrientation(int, int, int, int);
// public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::clamp(int, int, int);
// public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::round(float);
// public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::sameBoundary(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *);
// protected: static unsigned int hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::ip2mod3(unsigned int);
// public: hkArray<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::~hkArray<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(void);
// private: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::releasePool(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *) const;
// public: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::operator[](int);
// public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::getSize(void) const;
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::clear(void);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge *, int, int);
// public: hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::~hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>(void);
// public: int hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::getCapacity(void) const;
// public: void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::constructWithCopy<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge *, int, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &, struct hkTraitBool<0>);
// public: int hkArrayBase<struct hkgpMeshBase::Vertex *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkgpMeshBase::Vertex *>::clear(void);
// public: int hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::getCapacity(void) const;
// public: void hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::clear(void);
// public: void hkArrayBase<class hkgpMesh *>::clear(void);
// public: int hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::getCapacity(void) const;
// public: void hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >(class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >(class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>);
// public: int hkArrayBase<struct hkgpMesh::SingleEdge>::getCapacity(void) const;
// public: static void hkArrayUtil::destruct<struct hkgpMesh::SingleEdge>(struct hkgpMesh::SingleEdge *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkgpMesh::SingleEdge>(struct hkgpMesh::SingleEdge *, int, struct hkTraitBool<0>);
// public: hkgpMesh::SingleEdge::SingleEdge(void);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::canFlip(void) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::flip(void) const;
// public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::operator=(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &);
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataValue::~EdgeDataValue(void);
// public: void * hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int);
// public: hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>::~DefaultEdgeData<struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::pushBack(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &);
// public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::pushBack(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::allocate(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &);
// public: bool hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::needRelease(void) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *& hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item::next(void);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *& hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item::prev(void);
// public: int hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::getSize(void) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::allocate(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle const &);
// public: bool hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::needRelease(void) const;
// public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::getAndClearConstraint(void) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::prevCw(void) const;
// public: bool hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::isBound(void) const;
// public: struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::allocate(void);
// public: void hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>::appendOrReplace(struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> const &);
// public: hkInplaceArray<unsigned long, 4, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned long, 4, struct hkContainerHeapAllocator>(void);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle *& hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::Item::prev(void);
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::Location(enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &);
// public: enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType, int>::operator enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType(void) const;
// public: hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>(void);
// public: static void hkArrayBase<struct hkgpMesh::SingleEdge>::operator delete(void *);
// public: static void * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool::operator new(unsigned int, void *);
// public: static void * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool::operator new(unsigned int, void *);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox * hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::find(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox * hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::insert(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &);
// public: void hkArray<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataValue::EdgeDataValue(void);
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle::Triangle(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle const &);
// public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>(struct hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *> const &);
// public: static void * hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::operator new(unsigned int, void *);
// public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::clrConstrained(void) const;
// public: static void * hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>::operator new(unsigned int, void *);
// public: hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>::DefaultEdgeData<struct hkContainerHeapAllocator>(void);
// public: static void * hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle::operator new(unsigned int, void *);
// protected: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::Item::Item(struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::Item const &);
// public: hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType, int>::hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType, int>(enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType);
// public: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::back(void);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::_pushBack(class hkMemoryAllocator &, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &);
// public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkTraitBool<1>);
// public: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::back(void);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::_pushBack(class hkMemoryAllocator &, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &);
// public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkTraitBool<1>);
// public: void hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::release(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle *);
// private: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Item * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::allocateItem(void);
// private: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::releasePool(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *) const;
// public: void hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::release(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *);
// private: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Item * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::allocateItem(void);
// private: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::releasePool(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *) const;
// public: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::operator[](int);
// public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::getSize(void) const;
// public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::clear(void);
// public: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::operator[](int);
// public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::getSize(void) const;
// public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::clear(void);
// public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::flushConform(void);
// public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::orientation(int, int, int, int, int, int);
// public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::rootIndex(int, int);
// public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::backupBothEdgeData(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataValue *const);
// public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::restoreBothEdgeData(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataValue const *const);
// public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::createEdgeDataHashTable(void);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::flip(void) const;
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox::EdgeDataBox(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &);
// public: unsigned long hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox::getHash(void) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox * hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::find(int, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox * hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::insert(int, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &);
// private: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Item * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::allocateItem(void);
// public: hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::~hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >(void);
// public: void hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::_clearAndDeallocate(class hkMemoryAllocator &);
// public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::getCapacity(void) const;
// public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkTraitBool<1>);
// public: unsigned long const & hkArrayBase<unsigned long>::operator[](int) const;
// public: static void hkArrayUtil::destruct<class hkgpMesh *>(class hkgpMesh **, int, struct hkTraitBool<1>);
// public: hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::~hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkgpMesh::SingleEdge>::hkArrayBase<struct hkgpMesh::SingleEdge>(void);
// public: hkArrayBase<struct hkgpMesh::SingleEdge>::~hkArrayBase<struct hkgpMesh::SingleEdge>(void);
// public: hkInplaceArray<unsigned long, 4, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned long, 4, struct hkContainerHeapAllocator>(int);
// public: struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> & hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>::operator=(struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> const &);
// public: unsigned long hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::pack(void) const;
// public: hkArray<unsigned long, struct hkContainerHeapAllocator>::hkArray<unsigned long, struct hkContainerHeapAllocator>(unsigned long *, int, int);
// public: void hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: static void * hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::operator new(unsigned int, void *);
// public: hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>(int);
// public: class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> & hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::lookupBucket(int);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox & hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkArray<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::hkArray<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(void);
// public: static void hkArrayUtil::constructWithCopy<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &, struct hkTraitBool<1>);
// public: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::release(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle *);
// private: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::allocateNewPool(void);
// public: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::release(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *);
// private: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::allocateNewPool(void);
// public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkTraitBool<1>);
// public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::isConform(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &);
// public: struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> const * hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::getEdgeData(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &) const;
// public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::clearEdgeData(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &);
// public: void hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::setBucketsCount(int);
// public: static unsigned long hkGeometryProcessing::makeHash<unsigned long, unsigned long>(unsigned long, unsigned long);
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox & hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::operator[](int);
// public: int hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::getSize(void) const;
// public: int hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::indexOf(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &, int, int) const;
// public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox & hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::_expandOne(class hkMemoryAllocator &);
// private: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::allocateNewPool(void);
// public: hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >(void);
// public: class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> & hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::operator[](int);
// public: int hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::getSize(void) const;
// public: int hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::getCapacity(void) const;
// public: void hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::clear(void);
// public: hkArrayBase<unsigned long>::hkArrayBase<unsigned long>(unsigned long *, int, int);
// public: void hkArrayBase<struct hkgpMesh::SingleEdge>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: class hkArray<unsigned long, struct hkContainerHeapAllocator> & hkInplaceArray<unsigned long, 4, struct hkContainerHeapAllocator>::operator=(class hkInplaceArray<unsigned long, 4, struct hkContainerHeapAllocator> const &);
// public: void * hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle::`scalar deleting destructor'(unsigned int);
// public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::pushBack(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &);
// public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::pushBack(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &);
// public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::pushBack(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *const &);
// public: static void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle::operator delete(void *);
// public: void hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::clear(void);
// public: void hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::remove(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &);
// public: void hkArray<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::setSize(int);
// public: static void * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool::operator new(unsigned int, void *);
// public: static void * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool::operator new(unsigned int, void *);
// public: static void * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool::operator new(unsigned int, void *);
// public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::isConform(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *);
// public: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::back(void);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::removeAt(int);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::_pushBack(class hkMemoryAllocator &, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &);
// public: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::back(void);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::removeAt(int);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::_pushBack(class hkMemoryAllocator &, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &);
// public: void hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::remove(int, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &);
// public: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::release(struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> *);
// public: int hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::getCapacity(void) const;
// public: void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::clear(void);
// public: void hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::_setSize(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::construct<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox *, int, struct hkTraitBool<0>);
// public: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::back(void);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::_pushBack(class hkMemoryAllocator &, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *const &);
// public: static void hkArrayUtil::destruct<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >(class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>);
// public: class hkArray<unsigned long, struct hkContainerHeapAllocator> & hkArray<unsigned long, struct hkContainerHeapAllocator>::operator=(class hkArray<unsigned long, struct hkContainerHeapAllocator> const &);
// public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox::operator==(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &) const;
// public: void * hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int);
// public: void * hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int);
// public: static void hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>::operator delete(void *);
// public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox::EdgeDataBox(void);
// public: static void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::operator delete(void *);
// public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::incircle(int, int, int, int, int, int, int, int);
// public: static void hkArrayUtil::constructWithCopy<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &, struct hkTraitBool<1>);
// public: void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::removeAt(int);
// public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::removeAt(int);
// public: static void hkArrayUtil::destruct<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::construct<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >(class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::constructWithCopy<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *const &, struct hkTraitBool<1>);
// public: hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::~hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>(void);
// protected: class hkArrayBase<unsigned long> & hkArrayBase<unsigned long>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<unsigned long> const &, struct hkTraitBool<1>);
// public: hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>(void);
// public: hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::~hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>(void);
// public: void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayBase<unsigned long>::copy(unsigned long *, unsigned long const *, int);

//public: hkgpMesh::hkgpMesh(void)
//{
//    mangled_ppc("??0hkgpMesh@@QAA@XZ");
//};

//public: virtual hkgpMesh::~hkgpMesh(void)
//{
//    mangled_ppc("??1hkgpMesh@@UAA@XZ");
//};

//public: void hkgpMesh::reset(void)
//{
//    mangled_ppc("?reset@hkgpMesh@@QAAXXZ");
//};

//public: bool hkgpMesh::isClosedManifold(void) const
//{
//    mangled_ppc("?isClosedManifold@hkgpMesh@@QBA_NXZ");
//};

//public: class hkAabb hkgpMesh::getBoundingBox(void) const
//{
//    mangled_ppc("?getBoundingBox@hkgpMesh@@QBA?AVhkAabb@@XZ");
//};

//public: class hkVector4 hkgpMesh::getSupportingVertex(class hkVector4const &) const
//{
//    mangled_ppc("?getSupportingVertex@hkgpMesh@@QBA?AVhkVector4@@ABV2@@Z");
//};

//public: class hkVector4 hkgpMesh::getCenter(struct hkgpMeshBase::Triangle const *) const
//{
//    mangled_ppc("?getCenter@hkgpMesh@@QBA?AVhkVector4@@PBUTriangle@hkgpMeshBase@@@Z");
//};

//public: class hkVector4 hkgpMesh::getCenter(void) const
//{
//    mangled_ppc("?getCenter@hkgpMesh@@QBA?AVhkVector4@@XZ");
//};

//public: bool hkgpMesh::setPlane(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4&, bool)
//{
//    mangled_ppc("?setPlane@hkgpMesh@@QAA_NABVhkVector4@@00AAV2@_N@Z");
//};

//public: bool hkgpMesh::setPlane(struct hkgpMeshBase::Triangle const *, class hkVector4&, bool)
//{
//    mangled_ppc("?setPlane@hkgpMesh@@QAA_NPBUTriangle@hkgpMeshBase@@AAVhkVector4@@_N@Z");
//};

//public: bool hkgpMesh::updatePlane(struct hkgpMeshBase::Triangle *)
//{
//    mangled_ppc("?updatePlane@hkgpMesh@@QAA_NPAUTriangle@hkgpMeshBase@@@Z");
//};

//public: int hkgpMesh::fetchPositions(class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?fetchPositions@hkgpMesh@@QBAHAAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: int hkgpMesh::floodFillDetachedParts(void)
//{
//    mangled_ppc("?floodFillDetachedParts@hkgpMesh@@QAAHXZ");
//};

//public: int hkgpMesh::countParts(void) const
//{
//    mangled_ppc("?countParts@hkgpMesh@@QBAHXZ");
//};

//public: int hkgpMesh::explodeParts(class hkArray<class hkgpMesh *, struct hkContainerHeapAllocator> &, bool, bool) const
//{
//    mangled_ppc("?explodeParts@hkgpMesh@@QBAHAAV?$hkArray@PAVhkgpMesh@@UhkContainerHeapAllocator@@@@_N1@Z");
//};

//public: int hkgpMesh::setDistanceToPlane(class hkVector4const &, int)
//{
//    mangled_ppc("?setDistanceToPlane@hkgpMesh@@QAAHABVhkVector4@@H@Z");
//};

//public: void hkgpMesh::updatePlaneEquations(void)
//{
//    mangled_ppc("?updatePlaneEquations@hkgpMesh@@QAAXXZ");
//};

//public: void hkgpMesh::transform(class hkTransform const &)
//{
//    mangled_ppc("?transform@hkgpMesh@@QAAXABVhkTransform@@@Z");
//};

//public: void hkgpMesh::scale(class hkVector4const &)
//{
//    mangled_ppc("?scale@hkgpMesh@@QAAXABVhkVector4@@@Z");
//};

//public: void hkgpMesh::rotate(class hkRotation const &)
//{
//    mangled_ppc("?rotate@hkgpMesh@@QAAXABVhkRotation@@@Z");
//};

//public: void hkgpMesh::rotate(class hkQuaternion const &)
//{
//    mangled_ppc("?rotate@hkgpMesh@@QAAXABVhkQuaternion@@@Z");
//};

//public: void hkgpMesh::translate(class hkVector4const &)
//{
//    mangled_ppc("?translate@hkgpMesh@@QAAXABVhkVector4@@@Z");
//};

//public: struct hkgpMesh::Ring * hkgpMesh::createRing(struct hkgpMeshBase::Edge) const
//{
//    mangled_ppc("?createRing@hkgpMesh@@QBAPAURing@1@UEdge@hkgpMeshBase@@@Z");
//};

//public: struct hkgpMesh::sResult hkgpMesh::cut(class hkVector4const &, bool)
//{
//    mangled_ppc("?cut@hkgpMesh@@QAA?AUsResult@1@ABVhkVector4@@_N@Z");
//};

//public: int hkgpMesh::segregateVerticesBasedOnPartId(void)
//{
//    mangled_ppc("?segregateVerticesBasedOnPartId@hkgpMesh@@QAAHXZ");
//};

//public: void hkgpMesh::collapseEdge(struct hkgpMeshBase::Edge, bool)
//{
//    mangled_ppc("?collapseEdge@hkgpMesh@@QAAXUEdge@hkgpMeshBase@@_N@Z");
//};

//public: struct hkgpMeshBase::Edge hkgpMesh::splitEdge(struct hkgpMeshBase::Edge, class hkVector4const &, bool)
//{
//    mangled_ppc("?splitEdge@hkgpMesh@@QAA?AUEdge@hkgpMeshBase@@U23@ABVhkVector4@@_N@Z");
//};

//public: void hkgpMesh::splitTriangle(struct hkgpMeshBase::Triangle *, class hkVector4const &, bool)
//{
//    mangled_ppc("?splitTriangle@hkgpMesh@@QAAXPAUTriangle@hkgpMeshBase@@ABVhkVector4@@_N@Z");
//};

//public: void hkgpMesh::replaceVertex(struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *)
//{
//    mangled_ppc("?replaceVertex@hkgpMesh@@QAAXPAUVertex@hkgpMeshBase@@0@Z");
//};

//public: struct hkgpMesh::sResult hkgpMesh::cutAndCap(class hkVector4const &)
//{
//    mangled_ppc("?cutAndCap@hkgpMesh@@QAA?AUsResult@1@ABVhkVector4@@@Z");
//};

//public: bool hkgpMesh::resolveVoid(struct hkgpMeshBase::Edge, struct hkgpMeshBase::Edge)
//{
//    mangled_ppc("?resolveVoid@hkgpMesh@@QAA_NUEdge@hkgpMeshBase@@0@Z");
//};

//public: void hkgpMesh::simplify(struct hkgpMesh::SimplifyConfig const &)
//{
//    mangled_ppc("?simplify@hkgpMesh@@QAAXABUSimplifyConfig@1@@Z");
//};

//public: struct hkgpMesh::sResult hkgpMesh::cutAndCap(class hkVector4const &, class hkArray<class hkgpMesh *, struct hkContainerHeapAllocator> &, float, float) const
//{
//    mangled_ppc("?cutAndCap@hkgpMesh@@QBA?AUsResult@1@ABVhkVector4@@AAV?$hkArray@PAVhkgpMesh@@UhkContainerHeapAllocator@@@@MM@Z");
//};

//public: void hkgpMesh::locate(class hkVector4const &, struct hkgpMesh::Location &) const
//{
//    mangled_ppc("?locate@hkgpMesh@@QBAXABVhkVector4@@AAULocation@1@@Z");
//};

//public: float hkgpMesh::squaredDistanceToPoint(class hkVector4const &, class hkVector4&, bool *) const
//{
//    mangled_ppc("?squaredDistanceToPoint@hkgpMesh@@QBAMABVhkVector4@@AAV2@PA_N@Z");
//};

//public: float hkgpMesh::getVolume(void) const
//{
//    mangled_ppc("?getVolume@hkgpMesh@@QBAMXZ");
//};

//public: class hkgpConvexHull * hkgpMesh::getConvexHull(void) const
//{
//    mangled_ppc("?getConvexHull@hkgpMesh@@QBAPAVhkgpConvexHull@@XZ");
//};

//public: float hkgpMesh::getConvexHullVolume(void) const
//{
//    mangled_ppc("?getConvexHullVolume@hkgpMesh@@QBAMXZ");
//};

//public: class hkgpMesh * hkgpMesh::clone(void) const
//{
//    mangled_ppc("?clone@hkgpMesh@@QBAPAV1@XZ");
//};

//public: void hkgpMesh::append(class hkgpMesh *)
//{
//    mangled_ppc("?append@hkgpMesh@@QAAXPAV1@@Z");
//};

//public: void hkgpMesh::invalidateConvexHull(void)
//{
//    mangled_ppc("?invalidateConvexHull@hkgpMesh@@QAAXXZ");
//};

//public: bool hkgpMesh::rebuildConvexHull(void)
//{
//    mangled_ppc("?rebuildConvexHull@hkgpMesh@@QAA_NXZ");
//};

//public: void hkgpMesh::rebuildTrianglesTree(void)
//{
//    mangled_ppc("?rebuildTrianglesTree@hkgpMesh@@QAAXXZ");
//};

//public: void hkgpMesh::appendToGeometry(struct hkGeometry &, bool) const
//{
//    mangled_ppc("?appendToGeometry@hkgpMesh@@QBAXAAUhkGeometry@@_N@Z");
//};

//public: void hkgpMesh::appendFromGeometry(struct hkGeometry const &)
//{
//    mangled_ppc("?appendFromGeometry@hkgpMesh@@QAAXABUhkGeometry@@@Z");
//};

//public: void hkgpMesh::appendFromGeometry(struct hkGeometry const &, class hkVector4const &)
//{
//    mangled_ppc("?appendFromGeometry@hkgpMesh@@QAAXABUhkGeometry@@ABVhkVector4@@@Z");
//};

//public: void hkgpMesh::appendFromConvexHull(class hkgpConvexHull const *)
//{
//    mangled_ppc("?appendFromConvexHull@hkgpMesh@@QAAXPBVhkgpConvexHull@@@Z");
//};

//public: void hkgpMesh::setPartId(int)
//{
//    mangled_ppc("?setPartId@hkgpMesh@@QAAXH@Z");
//};

//public: void hkgpMesh::setVerticesData(int, float)
//{
//    mangled_ppc("?setVerticesData@hkgpMesh@@QAAXHM@Z");
//};

//public: void hkgpMesh::setVerticesTag(int)
//{
//    mangled_ppc("?setVerticesTag@hkgpMesh@@QAAXH@Z");
//};

//public: void hkgpMesh::assignVertexNormals(void)
//{
//    mangled_ppc("?assignVertexNormals@hkgpMesh@@QAAXXZ");
//};

//public: void hkgpMesh::fetchAreaSortedTriangles(class hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator> &, bool) const
//{
//    mangled_ppc("?fetchAreaSortedTriangles@hkgpMesh@@QBAXAAV?$hkArray@PAUTriangle@hkgpMeshBase@@UhkContainerHeapAllocator@@@@_N@Z");
//};

//public: void hkgpMesh::appendConcaveEdges(float, float, class hkgpMesh const *)
//{
//    mangled_ppc("?appendConcaveEdges@hkgpMesh@@QAAXMMPBV1@@Z");
//};

//public: class hkgpMesh * hkgpMesh::createOffset(float, int) const
//{
//    mangled_ppc("?createOffset@hkgpMesh@@QBAPAV1@MH@Z");
//};

//public: bool hkgpMesh::checkOverlap(class hkgpMesh::IConvexOverlap::IConvexShape *, float, float *, bool) const
//{
//    mangled_ppc("?checkOverlap@hkgpMesh@@QBA_NPAVIConvexShape@IConvexOverlap@1@MPAM_N@Z");
//};

//public: float hkgpMesh::calculateOverlap(class hkgpMesh::IConvexOverlap::IConvexShape *, bool) const
//{
//    mangled_ppc("?calculateOverlap@hkgpMesh@@QBAMPAVIConvexShape@IConvexOverlap@1@_N@Z");
//};

//public: bool hkgpMesh::checkOverlap(class hkgpMesh::IConvexOverlap::IConvexShape *, class hkArray<class hkgpConvexHull *, struct hkContainerHeapAllocator> const &, float) const
//{
//    mangled_ppc("?checkOverlap@hkgpMesh@@QBA_NPAVIConvexShape@IConvexOverlap@1@ABV?$hkArray@PAVhkgpConvexHull@@UhkContainerHeapAllocator@@@@M@Z");
//};

//public: bool hkgpMesh::checkOverlap(class hkgpMesh::IConvexOverlap::IConvexShape *, class hkArray<struct hkgpMesh::SelfConvexShape *, struct hkContainerHeapAllocator> const &, float) const
//{
//    mangled_ppc("?checkOverlap@hkgpMesh@@QBA_NPAVIConvexShape@IConvexOverlap@1@ABV?$hkArray@PAUSelfConvexShape@hkgpMesh@@UhkContainerHeapAllocator@@@@M@Z");
//};

//public: bool hkgpMesh::checkOverlap(class hkgpMesh::IConvexOverlap::IConvexShape *, class hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int> const &, float) const
//{
//    mangled_ppc("?checkOverlap@hkgpMesh@@QBA_NPAVIConvexShape@IConvexOverlap@1@ABV?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@M@Z");
//};

//public: void hkgpMesh::enumOverlaps(class hkgpMesh::IConvexOverlap::IConvexShape *, class hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?enumOverlaps@hkgpMesh@@QBAXPAVIConvexShape@IConvexOverlap@1@AAV?$hkArray@PAUTriangle@hkgpMeshBase@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: bool hkgpMesh::isConcave(struct hkgpMeshBase::Edge, float) const
//{
//    mangled_ppc("?isConcave@hkgpMesh@@QBA_NUEdge@hkgpMeshBase@@M@Z");
//};

//public: static float hkgpMesh::tetrahedronVolume6(struct hkgpMeshBase::Edge)
//{
//    mangled_ppc("?tetrahedronVolume6@hkgpMesh@@SAMUEdge@hkgpMeshBase@@@Z");
//};

//public: struct hkgpMeshBase::Triangle * hkgpMesh::createTriangle(struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *)
//{
//    mangled_ppc("?createTriangle@hkgpMesh@@QAAPAUTriangle@hkgpMeshBase@@PAUVertex@3@00@Z");
//};

//public: struct hkgpMeshBase::Edge hkgpMesh::findEdge(struct hkgpMeshBase::Vertex const *, struct hkgpMeshBase::Vertex const *) const
//{
//    mangled_ppc("?findEdge@hkgpMesh@@QBA?AUEdge@hkgpMeshBase@@PBUVertex@3@0@Z");
//};

//public: struct hkgpMeshBase::Edge hkgpMesh::flipEdge(struct hkgpMeshBase::Edge) const
//{
//    mangled_ppc("?flipEdge@hkgpMesh@@QBA?AUEdge@hkgpMeshBase@@U23@@Z");
//};

//public: int hkgpMesh::buildPlaneIndices(float, float)
//{
//    mangled_ppc("?buildPlaneIndices@hkgpMesh@@QAAHMM@Z");
//};

//public: void hkgpMesh::setPartIdsAsPlaneIndices(void)
//{
//    mangled_ppc("?setPartIdsAsPlaneIndices@hkgpMesh@@QAAXXZ");
//};

//public: static bool hkgpMesh::clipTriangles(class hkgpMesh *, struct hkgpMeshBase::Triangle *, class hkgpMesh *, struct hkgpMeshBase::Triangle *, float)
//{
//    mangled_ppc("?clipTriangles@hkgpMesh@@SA_NPAV1@PAUTriangle@hkgpMeshBase@@01M@Z");
//};

//public: static bool hkgpMesh::hasPosition(struct hkgpMeshBase::Triangle const *, class hkVector4const &)
//{
//    mangled_ppc("?hasPosition@hkgpMesh@@SA_NPBUTriangle@hkgpMeshBase@@ABVhkVector4@@@Z");
//};

//public: void hkgpMesh::removeTriangle(struct hkgpMeshBase::Triangle *)
//{
//    mangled_ppc("?removeTriangle@hkgpMesh@@QAAXPAUTriangle@hkgpMeshBase@@@Z");
//};

//public: class hkgpMesh * hkgpMesh::trim(class hkgpConvexHull const *)
//{
//    mangled_ppc("?trim@hkgpMesh@@QAAPAV1@PBVhkgpConvexHull@@@Z");
//};

//public: void hkgpMesh::sortTrianglesByArea(float)
//{
//    mangled_ppc("?sortTrianglesByArea@hkgpMesh@@QAAXM@Z");
//};

//public: float hkgpMesh::normalize(class hkVector4&, class hkVector4&, float)
//{
//    mangled_ppc("?normalize@hkgpMesh@@QAAMAAVhkVector4@@0M@Z");
//};

//public: float hkgpMesh::projectPointOnSurface(float, class hkVector4&, int) const
//{
//    mangled_ppc("?projectPointOnSurface@hkgpMesh@@QBAMMAAVhkVector4@@H@Z");
//};

//public: void hkgpMesh::generateSurfaceSamples(struct hkgpMesh::SurfaceSamplingConfig const &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?generateSurfaceSamples@hkgpMesh@@QBAXABUSurfaceSamplingConfig@1@AAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkgpMesh::generateConcaveEdges(float, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?generateConcaveEdges@hkgpMesh@@QBAXMAAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkgpMesh::generateEmptySpaceSamples(int, float, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &, bool) const
//{
//    mangled_ppc("?generateEmptySpaceSamples@hkgpMesh@@QBAXHMAAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@_N@Z");
//};

//public: int hkgpMesh::removeOrphanVertices(void)
//{
//    mangled_ppc("?removeOrphanVertices@hkgpMesh@@QAAHXZ");
//};

//public: int hkgpMesh::removeButterflies(int)
//{
//    mangled_ppc("?removeButterflies@hkgpMesh@@QAAHH@Z");
//};

//public: void hkgpMesh::reportBadAreaTriangle(class hkVector4const &, class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?reportBadAreaTriangle@hkgpMesh@@QAAXABVhkVector4@@00@Z");
//};

//public: void hkgpMesh::reportBadEdgeLength(class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?reportBadEdgeLength@hkgpMesh@@QAAXABVhkVector4@@0@Z");
//};

//public: void hkgpMesh::reportDuplicatedEdge(class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?reportDuplicatedEdge@hkgpMesh@@QAAXABVhkVector4@@0@Z");
//};

//public: void hkgpMesh::reportInvalidEdgeWinding(class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?reportInvalidEdgeWinding@hkgpMesh@@QAAXABVhkVector4@@0@Z");
//};

//public: bool hkgpMesh::hasValidTopology(bool) const
//{
//    mangled_ppc("?hasValidTopology@hkgpMesh@@QBA_N_N@Z");
//};

//merged_847C2BD0
//{
//    mangled_ppc("merged_847C2BD0");
//};

//public: static void hkgpMesh::operator delete(void *)
//{
//    mangled_ppc("??3hkgpMesh@@SAXPAX@Z");
//};

//public: hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>::hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkgpAbstractMesh@UEdge@hkgpMeshBase@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//merged_847C2CC8
//{
//    mangled_ppc("merged_847C2CC8");
//};

//public: hkgpMeshBase::Edge::Edge(struct hkgpMeshBase::Triangle *, unsigned int)
//{
//    mangled_ppc("??0Edge@hkgpMeshBase@@QAA@PAUTriangle@1@I@Z");
//};

//public: hkgpMeshBase::Edge::Edge(unsigned long)
//{
//    mangled_ppc("??0Edge@hkgpMeshBase@@QAA@K@Z");
//};

//public: static void * hkgpMesh::operator new(unsigned int)
//{
//    mangled_ppc("??2hkgpMesh@@SAPAXI@Z");
//};

//public: hkgpMesh::SimplifyConfig::SimplifyConfig(void)
//{
//    mangled_ppc("??0SimplifyConfig@hkgpMesh@@QAA@XZ");
//};

//public: void * hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@QAAPAXI@Z");
//};

//public: hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: static void * hkgpMesh::Ring::operator new(unsigned int)
//{
//    mangled_ppc("??2Ring@hkgpMesh@@SAPAXI@Z");
//};

//public: hkgpMesh::Ring::Ring(void)
//{
//    mangled_ppc("??0Ring@hkgpMesh@@QAA@XZ");
//};

//public: void * hkgpMesh::Ring::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GRing@hkgpMesh@@QAAPAXI@Z");
//};

//public: static void hkgpMesh::Ring::operator delete(void *)
//{
//    mangled_ppc("??3Ring@hkgpMesh@@SAXPAX@Z");
//};

//public: hkgpMesh::Ring::~Ring(void)
//{
//    mangled_ppc("??1Ring@hkgpMesh@@QAA@XZ");
//};

//public: hkgpMeshBase::Vertex::Vertex(void)
//{
//    mangled_ppc("??0Vertex@hkgpMeshBase@@QAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::Vertex<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex>::Vertex<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex>(void)
//{
//    mangled_ppc("??0?$Vertex@U0hkgpMeshBase@@UBaseVertex@1@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkgpMesh::sResult::sResult(enum hkgpMesh::eResult)
//{
//    mangled_ppc("??0sResult@hkgpMesh@@QAA@W4eResult@1@@Z");
//};

//public: hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAV?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void * hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAAPAXI@Z");
//};

//public: struct hkgpMesh::sResult & hkgpMesh::sResult::operator=(enum hkgpMesh::eResult)
//{
//    mangled_ppc("??4sResult@hkgpMesh@@QAAAAU01@W4eResult@1@@Z");
//};

//public: bool hkgpMesh::sResult::operator bool(void) const
//{
//    mangled_ppc("??BsResult@hkgpMesh@@QBA_NXZ");
//};

//public: static void hkgpMesh::createPlanarProjection(class hkVector4const &, bool, class hkRotation &)
//{
//    mangled_ppc("?createPlanarProjection@hkgpMesh@@SAXABVhkVector4@@_NAAVhkRotation@@@Z");
//};

//public: bool hkgpMesh::hasVoids(void) const
//{
//    mangled_ppc("?hasVoids@hkgpMesh@@QBA_NXZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex & hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::operator=(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &)
//{
//    mangled_ppc("??4Vertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAAAU01@ABU01@@Z");
//};

//public: hkPointerMap<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@KUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkgpMeshBase::Triangle::Triangle(void)
//{
//    mangled_ppc("??0Triangle@hkgpMeshBase@@QAA@XZ");
//};

//public: hkgpMeshBase::Triangle::~Triangle(void)
//{
//    mangled_ppc("??1Triangle@hkgpMeshBase@@QAA@XZ");
//};

//public: struct hkgpAbstractMeshDefinitions::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase> & hkgpAbstractMeshDefinitions::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase>::operator=(struct hkgpAbstractMeshDefinitions::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase> const &)
//{
//    mangled_ppc("??4?$Vertex@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@@hkgpAbstractMeshDefinitions@@QAAAAU01@ABU01@@Z");
//};

//public: bool hkgpMesh::FanEdgeCollector::hasNakedEdges(void) const
//{
//    mangled_ppc("?hasNakedEdges@FanEdgeCollector@hkgpMesh@@QBA_NXZ");
//};

//public: void hkgpMesh::FanEdgeCollector::setVerticesTag(int) const
//{
//    mangled_ppc("?setVerticesTag@FanEdgeCollector@hkgpMesh@@QBAXH@Z");
//};

//public: void hkgpMesh::FanEdgeCollector::incVerticesTag(int) const
//{
//    mangled_ppc("?incVerticesTag@FanEdgeCollector@hkgpMesh@@QBAXH@Z");
//};

//public: int hkgpMesh::FanEdgeCollector::countVerticesTag(int) const
//{
//    mangled_ppc("?countVerticesTag@FanEdgeCollector@hkgpMesh@@QBAHH@Z");
//};

//public: hkgpMesh::CollapseMetric::CollapseMetric(class hkgpMesh *, class hkVector4const &)
//{
//    mangled_ppc("??0CollapseMetric@hkgpMesh@@QAA@PAV1@ABVhkVector4@@@Z");
//};

//public: hkgpMesh::FanEdgeCollector::FanEdgeCollector(void)
//{
//    mangled_ppc("??0FanEdgeCollector@hkgpMesh@@QAA@XZ");
//};

//public: hkgpMesh::FanEdgeCollector::~FanEdgeCollector(void)
//{
//    mangled_ppc("??1FanEdgeCollector@hkgpMesh@@QAA@XZ");
//};

//public: hkgpMesh::sResult::sResult(void)
//{
//    mangled_ppc("??0sResult@hkgpMesh@@QAA@XZ");
//};

//public: hkgpMesh::NearestFeaturePolicy::NearestFeaturePolicy(class hkVector4const &, float)
//{
//    mangled_ppc("??0NearestFeaturePolicy@hkgpMesh@@QAA@ABVhkVector4@@M@Z");
//};

//public: virtual float hkgpMesh::NearestFeaturePolicy::addLeaf(struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node const *)
//{
//    mangled_ppc("?addLeaf@NearestFeaturePolicy@hkgpMesh@@UAAMPBUNode@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@@Z");
//};

//public: hkgpMesh::Location::Location(void)
//{
//    mangled_ppc("??0Location@hkgpMesh@@QAA@XZ");
//};

//merged_847C3950
//{
//    mangled_ppc("merged_847C3950");
//};

//public: static void hkgpMesh::NearestFeaturePolicy::operator delete(void *)
//{
//    mangled_ppc("??3NearestFeaturePolicy@hkgpMesh@@SAXPAX@Z");
//};

//public: virtual hkgpMesh::NearestFeaturePolicy::~NearestFeaturePolicy(void)
//{
//    mangled_ppc("??1NearestFeaturePolicy@hkgpMesh@@UAA@XZ");
//};

//public: struct hkgpMesh::Location & hkgpMesh::Location::operator=(struct hkgpMesh::Location const &)
//{
//    mangled_ppc("??4Location@hkgpMesh@@QAAAAU01@ABU01@@Z");
//};

//public: void hkAabb::expandBy(class hkSimdReal const &)
//{
//    mangled_ppc("?expandBy@hkAabb@@QAAXABVhkSimdReal@@@Z");
//};

//public: static float hkAabbUtil::getOuterRadius(class hkAabb const &)
//{
//    mangled_ppc("?getOuterRadius@hkAabbUtil@@SAMABVhkAabb@@@Z");
//};

//public: hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PAUVertex@hkgpMeshBase@@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkgpMesh::SingleEdge::SingleEdge(struct hkgpMeshBase::Vertex const *, struct hkgpMeshBase::Vertex const *)
//{
//    mangled_ppc("??0SingleEdge@hkgpMesh@@QAA@PBUVertex@hkgpMeshBase@@0@Z");
//};

//public: hkgpMesh::WeldingPolicy::WeldingPolicy(class hkVector4const &, float)
//{
//    mangled_ppc("??0WeldingPolicy@hkgpMesh@@QAA@ABVhkVector4@@M@Z");
//};

//merged_847C3C48
//{
//    mangled_ppc("merged_847C3C48");
//};

//public: static void hkgpMesh::WeldingPolicy::operator delete(void *)
//{
//    mangled_ppc("??3WeldingPolicy@hkgpMesh@@SAXPAX@Z");
//};

//public: virtual hkgpMesh::WeldingPolicy::~WeldingPolicy(void)
//{
//    mangled_ppc("??1WeldingPolicy@hkgpMesh@@UAA@XZ");
//};

//public: int hkgpMesh::SingleEdge::hash(void) const
//{
//    mangled_ppc("?hash@SingleEdge@hkgpMesh@@QBAHXZ");
//};

//public: virtual float hkgpMesh::WeldingPolicy::addLeaf(struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node const *)
//{
//    mangled_ppc("?addLeaf@WeldingPolicy@hkgpMesh@@UAAMPBUNode@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@@Z");
//};

//public: class hkVector4& hkgpMeshBase::Triangle::position(int)
//{
//    mangled_ppc("?position@Triangle@hkgpMeshBase@@QAAAAVhkVector4@@H@Z");
//};

//public: hkgpMesh::PrismPolicy::PrismPolicy(void)
//{
//    mangled_ppc("??0PrismPolicy@hkgpMesh@@QAA@XZ");
//};

//public: virtual bool hkgpMesh::PrismPolicy::addHit(struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *, struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *)
//{
//    mangled_ppc("?addHit@PrismPolicy@hkgpMesh@@UAA_NPAUNode@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@0@Z");
//};

//public: virtual hkgpMesh::PrismShape<1>::~PrismShape<1>(void)
//{
//    mangled_ppc("??1?$PrismShape@$00@hkgpMesh@@UAA@XZ");
//};

//public: virtual hkgpMesh::IConvexOverlap::IConvexShape::~IConvexShape(void)
//{
//    mangled_ppc("??1IConvexShape@IConvexOverlap@hkgpMesh@@UAA@XZ");
//};

//public: virtual int hkgpMesh::IConvexOverlap::IConvexShape::getMaxIndex(void) const
//{
//    mangled_ppc("?getMaxIndex@IConvexShape@IConvexOverlap@hkgpMesh@@UBAHXZ");
//};

//merged_847C4158
//{
//    mangled_ppc("merged_847C4158");
//};

//public: virtual hkgpMesh::PrismPolicy::~PrismPolicy(void)
//{
//    mangled_ppc("??1PrismPolicy@hkgpMesh@@UAA@XZ");
//};

//public: virtual hkgpMesh::PrismShape<2>::~PrismShape<2>(void)
//{
//    mangled_ppc("??1?$PrismShape@$01@hkgpMesh@@UAA@XZ");
//};

//merged_847C41F0
//{
//    mangled_ppc("merged_847C41F0");
//};

//public: hkgpMesh::CollideShapeTriangle::CollideShapeTriangle(void)
//{
//    mangled_ppc("??0CollideShapeTriangle@hkgpMesh@@QAA@XZ");
//};

//merged_847C4300
//{
//    mangled_ppc("merged_847C4300");
//};

//public: static void hkgpMesh::CollideShapeTriangle::operator delete(void *)
//{
//    mangled_ppc("??3CollideShapeTriangle@hkgpMesh@@SAXPAX@Z");
//};

//public: virtual hkgpMesh::CollideShapeTriangle::~CollideShapeTriangle(void)
//{
//    mangled_ppc("??1CollideShapeTriangle@hkgpMesh@@UAA@XZ");
//};

//public: virtual float hkgpMesh::CollideShapeTriangle::addLeaf(struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node const *)
//{
//    mangled_ppc("?addLeaf@CollideShapeTriangle@hkgpMesh@@UAAMPBUNode@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@@Z");
//};

//public: hkgpMesh::TriangleShape::TriangleShape(struct hkgpMeshBase::Triangle *)
//{
//    mangled_ppc("??0TriangleShape@hkgpMesh@@QAA@PAUTriangle@hkgpMeshBase@@@Z");
//};

//public: hkgpMesh::IConvexOverlap::IConvexShape::IConvexShape(void)
//{
//    mangled_ppc("??0IConvexShape@IConvexOverlap@hkgpMesh@@QAA@XZ");
//};

//merged_847C4680
//{
//    mangled_ppc("merged_847C4680");
//};

//public: static void hkgpMesh::TriangleShape::operator delete(void *)
//{
//    mangled_ppc("??3TriangleShape@hkgpMesh@@SAXPAX@Z");
//};

//public: virtual hkgpMesh::TriangleShape::~TriangleShape(void)
//{
//    mangled_ppc("??1TriangleShape@hkgpMesh@@UAA@XZ");
//};

//public: hkgpMesh::ExtrudeShape::ExtrudeShape(struct hkgpMeshBase::Triangle *, float)
//{
//    mangled_ppc("??0ExtrudeShape@hkgpMesh@@QAA@PAUTriangle@hkgpMeshBase@@M@Z");
//};

//merged_847C4930
//{
//    mangled_ppc("merged_847C4930");
//};

//public: static void hkgpMesh::ExtrudeShape::operator delete(void *)
//{
//    mangled_ppc("??3ExtrudeShape@hkgpMesh@@SAXPAX@Z");
//};

//public: virtual hkgpMesh::ExtrudeShape::~ExtrudeShape(void)
//{
//    mangled_ppc("??1ExtrudeShape@hkgpMesh@@UAA@XZ");
//};

//public: virtual void hkgpMesh::ExtrudeShape::getSupportingVertex(class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("?getSupportingVertex@ExtrudeShape@hkgpMesh@@UBAXABVhkVector4@@AAV3@@Z");
//};

//public: virtual class hkAabb hkgpMesh::ExtrudeShape::getBoundingBox(void) const
//{
//    mangled_ppc("?getBoundingBox@ExtrudeShape@hkgpMesh@@UBA?AVhkAabb@@XZ");
//};

//public: virtual void hkgpMesh::TriangleShape::getSupportingVertex(class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("?getSupportingVertex@TriangleShape@hkgpMesh@@UBAXABVhkVector4@@AAV3@@Z");
//};

//public: virtual class hkAabb hkgpMesh::TriangleShape::getBoundingBox(void) const
//{
//    mangled_ppc("?getBoundingBox@TriangleShape@hkgpMesh@@UBA?AVhkAabb@@XZ");
//};

//public: hkgpMesh::ConvexHullShape::ConvexHullShape(class hkgpConvexHull const *)
//{
//    mangled_ppc("??0ConvexHullShape@hkgpMesh@@QAA@PBVhkgpConvexHull@@@Z");
//};

//public: virtual int hkgpMesh::ConvexHullShape::getMaxIndex(void) const
//{
//    mangled_ppc("?getMaxIndex@ConvexHullShape@hkgpMesh@@UBAHXZ");
//};

//merged_847C4DC0
//{
//    mangled_ppc("merged_847C4DC0");
//};

//public: static void hkgpMesh::ConvexHullShape::operator delete(void *)
//{
//    mangled_ppc("??3ConvexHullShape@hkgpMesh@@SAXPAX@Z");
//};

//public: virtual hkgpMesh::ConvexHullShape::~ConvexHullShape(void)
//{
//    mangled_ppc("??1ConvexHullShape@hkgpMesh@@UAA@XZ");
//};

//public: virtual void hkgpMesh::ConvexHullShape::getSupportingVertex(class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("?getSupportingVertex@ConvexHullShape@hkgpMesh@@UBAXABVhkVector4@@AAV3@@Z");
//};

//public: virtual class hkAabb hkgpMesh::ConvexHullShape::getBoundingBox(void) const
//{
//    mangled_ppc("?getBoundingBox@ConvexHullShape@hkgpMesh@@UBA?AVhkAabb@@XZ");
//};

//public: static float hkgpMesh::distanceToPlane(class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?distanceToPlane@hkgpMesh@@SAMABVhkVector4@@0@Z");
//};

//public: static float hkgpMesh::snap(float, float)
//{
//    mangled_ppc("?snap@hkgpMesh@@SAMMM@Z");
//};

//public: class hkVector4const & hkgpMeshBase::Triangle::position(int) const
//{
//    mangled_ppc("?position@Triangle@hkgpMeshBase@@QBAABVhkVector4@@H@Z");
//};

//public: static float hkgpMesh::getTwiceArea(struct hkgpMeshBase::Triangle const *)
//{
//    mangled_ppc("?getTwiceArea@hkgpMesh@@SAMPBUTriangle@hkgpMeshBase@@@Z");
//};

//public: static void hkGeometryProcessing::getVertex(class hkAabb const &, int, class hkVector4&)
//{
//    mangled_ppc("?getVertex@hkGeometryProcessing@@SAXABVhkAabb@@HAAVhkVector4@@@Z");
//};

//public: struct hkgpMeshBase::Vertex *& hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item::next(void)
//{
//    mangled_ppc("?next@Item@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAAAPAUVertex@hkgpMeshBase@@XZ");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item::Item(void)
//{
//    mangled_ppc("??0Item@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>(void)
//{
//    mangled_ppc("??0?$Triangle@U0hkgpMeshBase@@UBaseTriangle@1@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::~Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>(void)
//{
//    mangled_ppc("??1?$Triangle@U0hkgpMeshBase@@UBaseTriangle@1@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: void hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::setVertices(struct hkgpMeshBase::Vertex *const &, struct hkgpMeshBase::Vertex *const &, struct hkgpMeshBase::Vertex *const &)
//{
//    mangled_ppc("?setVertices@?$Triangle@U0hkgpMeshBase@@UBaseTriangle@1@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAAXABQAUVertex@hkgpMeshBase@@00@Z");
//};

//public: struct hkgpMeshBase::Vertex * hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::vertex(int) const
//{
//    mangled_ppc("?vertex@?$Triangle@U0hkgpMeshBase@@UBaseTriangle@1@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QBAPAUVertex@hkgpMeshBase@@H@Z");
//};

//public: struct hkgpMeshBase::Vertex *& hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::vertex(int)
//{
//    mangled_ppc("?vertex@?$Triangle@U0hkgpMeshBase@@UBaseTriangle@1@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAAAAPAUVertex@hkgpMeshBase@@H@Z");
//};

//public: unsigned long & hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::link(int)
//{
//    mangled_ppc("?link@?$Triangle@U0hkgpMeshBase@@UBaseTriangle@1@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAAAAKH@Z");
//};

//public: struct hkgpMeshBase::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::Item::next(void) const
//{
//    mangled_ppc("?next@Item@?$List@UTriangle@hkgpMeshBase@@UBaseTriangle@2@U?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QBAPAUTriangle@hkgpMeshBase@@XZ");
//};

//public: struct hkgpMeshBase::Triangle *& hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::Item::next(void)
//{
//    mangled_ppc("?next@Item@?$List@UTriangle@hkgpMeshBase@@UBaseTriangle@2@U?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAAAPAUTriangle@hkgpMeshBase@@XZ");
//};

//public: static struct hkgpMeshBase::Edge const & hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::null(void)
//{
//    mangled_ppc("?null@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@SAABUEdge@hkgpMeshBase@@XZ");
//};

//public: hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>(struct hkgpMeshBase::Triangle *, unsigned int)
//{
//    mangled_ppc("??0?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QAA@PAUTriangle@hkgpMeshBase@@I@Z");
//};

//public: hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>(unsigned long)
//{
//    mangled_ppc("??0?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QAA@K@Z");
//};

//public: struct hkgpMeshBase::Edge hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::next(void) const
//{
//    mangled_ppc("?next@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@hkgpMeshBase@@XZ");
//};

//public: struct hkgpMeshBase::Edge hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::prev(void) const
//{
//    mangled_ppc("?prev@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@hkgpMeshBase@@XZ");
//};

//public: struct hkgpMeshBase::Edge hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::link(void) const
//{
//    mangled_ppc("?link@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@hkgpMeshBase@@XZ");
//};

//public: struct hkgpMeshBase::Edge hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::nextCcw(void) const
//{
//    mangled_ppc("?nextCcw@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@hkgpMeshBase@@XZ");
//};

//public: struct hkgpMeshBase::Triangle * hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::triangle(void) const
//{
//    mangled_ppc("?triangle@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAPAUTriangle@hkgpMeshBase@@XZ");
//};

//public: unsigned long hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::uid(void) const
//{
//    mangled_ppc("?uid@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAKXZ");
//};

//public: struct hkgpMeshBase::Vertex *& hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::start(void) const
//{
//    mangled_ppc("?start@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAAAPAUVertex@hkgpMeshBase@@XZ");
//};

//public: struct hkgpMeshBase::Vertex *& hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::end(void) const
//{
//    mangled_ppc("?end@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAAAPAUVertex@hkgpMeshBase@@XZ");
//};

//public: struct hkgpMeshBase::Vertex *& hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::apex(void) const
//{
//    mangled_ppc("?apex@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAAAPAUVertex@hkgpMeshBase@@XZ");
//};

//public: bool hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::isValid(void) const
//{
//    mangled_ppc("?isValid@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NXZ");
//};

//public: bool hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::isMaster(void) const
//{
//    mangled_ppc("?isMaster@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NXZ");
//};

//public: bool hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::isNaked(void) const
//{
//    mangled_ppc("?isNaked@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NXZ");
//};

//public: bool hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::isBound(void) const
//{
//    mangled_ppc("?isBound@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NXZ");
//};

//public: bool hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::canBind(struct hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *> const &) const
//{
//    mangled_ppc("?canBind@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NABU12@@Z");
//};

//public: bool hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::operator==(struct hkgpMeshBase::Edge const &) const
//{
//    mangled_ppc("??8?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NABUEdge@hkgpMeshBase@@@Z");
//};

//public: bool hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::operator!=(struct hkgpMeshBase::Edge const &) const
//{
//    mangled_ppc("??9?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NABUEdge@hkgpMeshBase@@@Z");
//};

//public: static void hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkgpAbstractMesh@UEdge@hkgpMeshBase@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@SAXPAX@Z");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??0?$List@UVertex@hkgpMeshBase@@UItem@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: struct hkgpMeshBase::Vertex * hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::getFirst(void) const
//{
//    mangled_ppc("?getFirst@?$List@UVertex@hkgpMeshBase@@UItem@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QBAPAUVertex@hkgpMeshBase@@XZ");
//};

//public: int hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$List@UVertex@hkgpMeshBase@@UItem@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QBAHXZ");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??0?$List@UTriangle@hkgpMeshBase@@UItem@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: struct hkgpMeshBase::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::getFirst(void) const
//{
//    mangled_ppc("?getFirst@?$List@UTriangle@hkgpMeshBase@@UItem@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QBAPAUTriangle@hkgpMeshBase@@XZ");
//};

//public: int hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$List@UTriangle@hkgpMeshBase@@UItem@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QBAHXZ");
//};

//public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::operator==(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &) const
//{
//    mangled_ppc("??8Vertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBAHABU01@@Z");
//};

//public: struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item & hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item::operator=(struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item const &)
//{
//    mangled_ppc("??4Item@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAAAU012@ABU012@@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::getFirst(void) const
//{
//    mangled_ppc("?getFirst@?$List@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UItem@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QBAPAUTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::Edge(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle *, unsigned int)
//{
//    mangled_ppc("??0Edge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@PAUTriangle@1@I@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::link(void) const
//{
//    mangled_ppc("?link@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: unsigned long hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::uid(void) const
//{
//    mangled_ppc("?uid@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAKXZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *& hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::start(void) const
//{
//    mangled_ppc("?start@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAAAPAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: hkArray<struct hkgpMesh::Ring::Segment, struct hkContainerHeapAllocator>::hkArray<struct hkgpMesh::Ring::Segment, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@USegment@Ring@hkgpMesh@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct hkgpMesh::Ring::Segment & hkArray<struct hkgpMesh::Ring::Segment, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@USegment@Ring@hkgpMesh@@UhkContainerHeapAllocator@@@@QAAAAUSegment@Ring@hkgpMesh@@XZ");
//};

//public: hkInplaceArray<struct hkgpMeshBase::Edge, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkgpMeshBase::Edge, 16, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@UEdge@hkgpMeshBase@@$0BA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>::hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UEdge@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>::pushBack(struct hkgpMeshBase::Edge const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UEdge@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAAXABUEdge@hkgpMeshBase@@@Z");
//};

//public: void hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@UEdge@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkInplaceArray<struct hkGeometryProcessing::TransposedVectors, 2, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkGeometryProcessing::TransposedVectors, 2, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@UTransposedVectors@hkGeometryProcessing@@$01UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::setSize(int, struct hkgpMeshBase::Vertex *const &)
//{
//    mangled_ppc("?setSize@?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAAXHABQAUVertex@hkgpMeshBase@@@Z");
//};

//public: static void * hkArrayBase<struct hkgpMeshBase::Vertex *>::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkArrayBase@PAUVertex@hkgpMeshBase@@@@SAPAXI@Z");
//};

//public: static void hkArrayBase<struct hkgpMeshBase::Vertex *>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkArrayBase@PAUVertex@hkgpMeshBase@@@@SAXPAX@Z");
//};

//public: hkgpMesh::PrismShape<1>::PrismShape<1>(struct hkgpMeshBase::Triangle *)
//{
//    mangled_ppc("??0?$PrismShape@$00@hkgpMesh@@QAA@PAUTriangle@hkgpMeshBase@@@Z");
//};

//public: hkArray<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::hkArray<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@PAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArray<class hkgpMesh *, struct hkContainerHeapAllocator>::hkArray<class hkgpMesh *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkgpMesh@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkgpMesh *, struct hkContainerHeapAllocator>::pushBack(class hkgpMesh *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkgpMesh@@UhkContainerHeapAllocator@@@@QAAXABQAVhkgpMesh@@@Z");
//};

//public: class hkgpMesh ** hkArray<class hkgpMesh *, struct hkContainerHeapAllocator>::expandBy(int)
//{
//    mangled_ppc("?expandBy@?$hkArray@PAVhkgpMesh@@UhkContainerHeapAllocator@@@@QAAPAPAVhkgpMesh@@H@Z");
//};

//public: static void * hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@SAPAXI@Z");
//};

//public: static void hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@SAXPAX@Z");
//};

//public: hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::insert(struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@QAAHPAUVertex@hkgpMeshBase@@0@Z");
//};

//public: struct hkgpMeshBase::Vertex * hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::getWithDefault(struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *) const
//{
//    mangled_ppc("?getWithDefault@?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@QBAPAUVertex@hkgpMeshBase@@PAU23@0@Z");
//};

//public: hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUTriangle@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::pushBack(struct hkgpMeshBase::Triangle *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUTriangle@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAAXABQAUTriangle@hkgpMeshBase@@@Z");
//};

//public: void hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::reserveExactly(int)
//{
//    mangled_ppc("?reserveExactly@?$hkArray@PAUTriangle@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAV?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::insert(struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAV?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAAHPAUVertex@hkgpMeshBase@@PAV?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> * hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::getWithDefault(struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *) const
//{
//    mangled_ppc("?getWithDefault@?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAV?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QBAPAV?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@PAUVertex@hkgpMeshBase@@PAV2@@Z");
//};

//public: class Dummy * hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAV?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QBAPAVDummy@@XZ");
//};

//public: class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> * hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAV?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QBAPAV?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@PAVDummy@@@Z");
//};

//public: class Dummy * hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAV?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkPointerMap<struct hkgpMeshBase::Vertex *, class hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAV?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: hkArray<struct hkgpMesh::Ring *, struct hkContainerHeapAllocator>::hkArray<struct hkgpMesh::Ring *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAURing@hkgpMesh@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkgpMesh::Ring *, struct hkContainerHeapAllocator>::pushBack(struct hkgpMesh::Ring *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAURing@hkgpMesh@@UhkContainerHeapAllocator@@@@QAAXABQAURing@hkgpMesh@@@Z");
//};

//public: hkPointerMap<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@KUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long, struct hkContainerHeapAllocator>::insert(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@KUhkContainerHeapAllocator@@@@QAAHPAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@K@Z");
//};

//public: unsigned long hkPointerMap<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long, struct hkContainerHeapAllocator>::getWithDefault(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, unsigned long) const
//{
//    mangled_ppc("?getWithDefault@?$hkPointerMap@PAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@KUhkContainerHeapAllocator@@@@QBAKPAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@K@Z");
//};

//public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::isValid(void) const
//{
//    mangled_ppc("?isValid@Insertion@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBAHXZ");
//};

//public: enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType, int>::operator enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4eType@Insertion@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@H@@QBA?AW4eType@Insertion@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *& hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::vertex(int)
//{
//    mangled_ppc("?vertex@?$Triangle@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UTriangleBase@hkgpTriangulatorBase@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAAAAPAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@H@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle *& hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::Item::next(void)
//{
//    mangled_ppc("?next@Item@?$List@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UTriangleBase@hkgpTriangulatorBase@@U?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAAAPAUTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: class hkAabb & hkArray<class hkAabb, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@VhkAabb@@UhkContainerHeapAllocator@@@@QAAAAVhkAabb@@XZ");
//};

//public: hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PAUVertex@hkgpMeshBase@@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>::insert(struct hkgpMeshBase::Vertex *, int)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PAUVertex@hkgpMeshBase@@HUhkContainerHeapAllocator@@@@QAAHPAUVertex@hkgpMeshBase@@H@Z");
//};

//public: int hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>::getWithDefault(struct hkgpMeshBase::Vertex *, int) const
//{
//    mangled_ppc("?getWithDefault@?$hkPointerMap@PAUVertex@hkgpMeshBase@@HUhkContainerHeapAllocator@@@@QBAHPAUVertex@hkgpMeshBase@@H@Z");
//};

//public: int hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkPointerMap@PAUVertex@hkgpMeshBase@@HUhkContainerHeapAllocator@@@@QBAHXZ");
//};

//public: void hkPointerMap<struct hkgpMeshBase::Vertex *, int, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkPointerMap@PAUVertex@hkgpMeshBase@@HUhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkGeometryProcessing::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$HashTable@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: hkGeometryProcessing::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::~HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$HashTable@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: hkgpMesh::PrismShape<2>::PrismShape<2>(struct hkgpMeshBase::Triangle *)
//{
//    mangled_ppc("??0?$PrismShape@$01@hkgpMesh@@QAA@PAUTriangle@hkgpMeshBase@@@Z");
//};

//public: hkArray<struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *, struct hkContainerHeapAllocator>::hkArray<struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUNode@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::NodePair, struct hkContainerHeapAllocator>::hkArray<struct hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::NodePair, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UNodePair@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@I@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<class hkVector4, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkVector4, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@VhkVector4@@$0CA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//merged_847C6B80
//{
//    mangled_ppc("merged_847C6B80");
//};

//merged_847C6BC8
//{
//    mangled_ppc("merged_847C6BC8");
//};

//public: static bool hkgpAbstractMeshDefinitions::Vertex<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex>::isOrdered(struct hkgpMeshBase::Vertex const *, struct hkgpMeshBase::Vertex const *)
//{
//    mangled_ppc("?isOrdered@?$Vertex@U0hkgpMeshBase@@UBaseVertex@1@@hkgpAbstractMeshDefinitions@@SA_NPBUVertex@hkgpMeshBase@@0@Z");
//};

//public: int hkgpMeshBase::Vertex::compare(struct hkgpMeshBase::Vertex const &) const
//{
//    mangled_ppc("?compare@Vertex@hkgpMeshBase@@QBAHABU12@@Z");
//};

//public: hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: void hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::invalidate(void)
//{
//    mangled_ppc("?invalidate@?$Triangle@U0hkgpMeshBase@@UBaseTriangle@1@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAAXXZ");
//};

//public: bool hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::hasReferences(void) const
//{
//    mangled_ppc("?hasReferences@?$Triangle@U0hkgpMeshBase@@UBaseTriangle@1@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QBA_NXZ");
//};

//public: hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::Item::Item(void)
//{
//    mangled_ppc("??0Item@?$List@UTriangle@hkgpMeshBase@@UBaseTriangle@2@U?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::Edge(unsigned long)
//{
//    mangled_ppc("??0Edge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@K@Z");
//};

//public: hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle *, unsigned int)
//{
//    mangled_ppc("??0?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QAA@PAUTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@I@Z");
//};

//public: static void hkgpMesh::PrismShape<1>::operator delete(void *)
//{
//    mangled_ppc("??3?$PrismShape@$00@hkgpMesh@@SAXPAX@Z");
//};

//public: class hkBool hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType, int>::operator==(enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType) const
//{
//    mangled_ppc("??8?$hkEnum@W4eType@Insertion@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@H@@QBA?AVhkBool@@W4eType@Insertion@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@Z");
//};

//public: unsigned long & hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::link(int)
//{
//    mangled_ppc("?link@?$Triangle@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UTriangleBase@hkgpTriangulatorBase@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAAAAKH@Z");
//};

//public: hkArray<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::hkArray<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@V?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: static void hkgpMesh::PrismShape<2>::operator delete(void *)
//{
//    mangled_ppc("??3?$PrismShape@$01@hkgpMesh@@SAXPAX@Z");
//};

//public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: unsigned long hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::link(int) const
//{
//    mangled_ppc("?link@?$Triangle@U0hkgpMeshBase@@UBaseTriangle@1@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QBAKH@Z");
//};

//public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>(unsigned long)
//{
//    mangled_ppc("??0?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QAA@K@Z");
//};

//public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAA@XZ");
//};

//protected: static unsigned int hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::ip1mod3(unsigned int)
//{
//    mangled_ppc("?ip1mod3@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@KAII@Z");
//};

//protected: static unsigned int hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::ip2mod3(unsigned int)
//{
//    mangled_ppc("?ip2mod3@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@KAII@Z");
//};

//public: void hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::bind(struct hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *> const &) const
//{
//    mangled_ppc("?bind@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAXABU12@@Z");
//};

//public: void hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::bindSides(void) const
//{
//    mangled_ppc("?bindSides@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAXXZ");
//};

//public: void hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::unbind(void) const
//{
//    mangled_ppc("?unbind@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAXXZ");
//};

//public: struct hkgpMeshBase::Vertex * hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::allocate(struct hkgpMeshBase::Vertex const &)
//{
//    mangled_ppc("?allocate@?$List@UVertex@hkgpMeshBase@@UItem@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAPAUVertex@hkgpMeshBase@@ABU34@@Z");
//};

//public: void hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::release(struct hkgpMeshBase::Vertex *)
//{
//    mangled_ppc("?release@?$List@UVertex@hkgpMeshBase@@UItem@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAXPAUVertex@hkgpMeshBase@@@Z");
//};

//public: struct hkgpMeshBase::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::allocate(struct hkgpMeshBase::Triangle const &)
//{
//    mangled_ppc("?allocate@?$List@UTriangle@hkgpMeshBase@@UItem@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAPAUTriangle@hkgpMeshBase@@ABU34@@Z");
//};

//public: void hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::release(struct hkgpMeshBase::Triangle *)
//{
//    mangled_ppc("?release@?$List@UTriangle@hkgpMeshBase@@UItem@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAXPAUTriangle@hkgpMeshBase@@@Z");
//};

//public: void hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::moveUp(struct hkgpMeshBase::Triangle *)
//{
//    mangled_ppc("?moveUp@?$List@UTriangle@hkgpMeshBase@@UItem@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAXPAUTriangle@hkgpMeshBase@@@Z");
//};

//public: virtual hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>::~hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkgpAbstractMesh@UEdge@hkgpMeshBase@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@UAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::~List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??1?$List@UVertex@hkgpMeshBase@@UItem@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::~PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::~hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::~List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??1?$List@UTriangle@hkgpMeshBase@@UItem@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::~PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::~hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAA@XZ");
//};

//public: void hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>::reset(void)
//{
//    mangled_ppc("?reset@?$hkgpAbstractMesh@UEdge@hkgpMeshBase@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: enum hkgpAbstractMeshDefinitions::Error hkgpAbstractMesh<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkContainerHeapAllocator>::checkTopology(bool) const
//{
//    mangled_ppc("?checkTopology@?$hkgpAbstractMesh@UEdge@hkgpMeshBase@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@QBA?AW4Error@hkgpAbstractMeshDefinitions@@_N@Z");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>(void)
//{
//    mangled_ppc("??0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@XZ");
//};

//public: virtual hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::~hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>(void)
//{
//    mangled_ppc("??1?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UAA@XZ");
//};

//public: virtual hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>::~hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkgpAbstractMesh@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@UAA@XZ");
//};

//public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::reset(bool)
//{
//    mangled_ppc("?reset@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAX_N@Z");
//};

//public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::setDomain(class hkVector4const &, class hkVector4const &, float, bool)
//{
//    mangled_ppc("?setDomain@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAXABVhkVector4@@0M_N@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::transform(class hkVector4const &) const
//{
//    mangled_ppc("?transform@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBA?AUVertex@1@ABVhkVector4@@@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::insertVertex(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &, bool)
//{
//    mangled_ppc("?insertVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA?AUInsertion@1@ABUVertex@1@_N@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::insertEdge(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &, bool, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> const *)
//{
//    mangled_ppc("?insertEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA?AUInsertion@1@ABUVertex@1@0_NPBU?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::locateExistingEdge(int, int, int, int) const
//{
//    mangled_ppc("?locateExistingEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBA?AUEdge@1@HHHH@Z");
//};

//public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::partition(void)
//{
//    mangled_ppc("?partition@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAHXZ");
//};

//public: hkArrayBase<struct hkgpMesh::Ring::Segment>::hkArrayBase<struct hkgpMesh::Ring::Segment>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@USegment@Ring@hkgpMesh@@@@QAA@XZ");
//};

//public: struct hkgpMesh::Ring::Segment & hkArrayBase<struct hkgpMesh::Ring::Segment>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@USegment@Ring@hkgpMesh@@@@QAAAAUSegment@Ring@hkgpMesh@@H@Z");
//};

//public: struct hkgpMesh::Ring::Segment & hkArrayBase<struct hkgpMesh::Ring::Segment>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@USegment@Ring@hkgpMesh@@@@QAAAAUSegment@Ring@hkgpMesh@@XZ");
//};

//public: int hkArrayBase<struct hkgpMesh::Ring::Segment>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@USegment@Ring@hkgpMesh@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpMesh::Ring::Segment>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@USegment@Ring@hkgpMesh@@@@QAAXXZ");
//};

//public: struct hkgpMesh::Ring::Segment & hkArrayBase<struct hkgpMesh::Ring::Segment>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@USegment@Ring@hkgpMesh@@@@QAAAAUSegment@Ring@hkgpMesh@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<struct hkgpMesh::Ring::Segment, struct hkContainerHeapAllocator>::~hkArray<struct hkgpMesh::Ring::Segment, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@USegment@Ring@hkgpMesh@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkgpMesh::Ring::Segment>::~hkArrayBase<struct hkgpMesh::Ring::Segment>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@USegment@Ring@hkgpMesh@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkgpMeshBase::Edge>::hkArrayBase<struct hkgpMeshBase::Edge>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UEdge@hkgpMeshBase@@@@QAA@XZ");
//};

//public: struct hkgpMeshBase::Edge const & hkArrayBase<struct hkgpMeshBase::Edge>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UEdge@hkgpMeshBase@@@@QBAABUEdge@hkgpMeshBase@@H@Z");
//};

//public: struct hkgpMeshBase::Edge & hkArrayBase<struct hkgpMeshBase::Edge>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UEdge@hkgpMeshBase@@@@QAAAAUEdge@hkgpMeshBase@@H@Z");
//};

//public: struct hkgpMeshBase::Edge & hkArrayBase<struct hkgpMeshBase::Edge>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@UEdge@hkgpMeshBase@@@@QAAAAUEdge@hkgpMeshBase@@XZ");
//};

//public: int hkArrayBase<struct hkgpMeshBase::Edge>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UEdge@hkgpMeshBase@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpMeshBase::Edge>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UEdge@hkgpMeshBase@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkgpMeshBase::Edge>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@UEdge@hkgpMeshBase@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkgpMeshBase::Edge>::_pushBack(class hkMemoryAllocator &, struct hkgpMeshBase::Edge const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UEdge@hkgpMeshBase@@@@QAAXAAVhkMemoryAllocator@@ABUEdge@hkgpMeshBase@@@Z");
//};

//public: void hkArrayBase<struct hkgpMeshBase::Edge>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UEdge@hkgpMeshBase@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>::~hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UEdge@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkgpMeshBase::Edge>::~hkArrayBase<struct hkgpMeshBase::Edge>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UEdge@hkgpMeshBase@@@@QAA@XZ");
//};

//public: hkInplaceArray<struct hkgpMeshBase::Edge, 16, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkgpMeshBase::Edge, 16, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@UEdge@hkgpMeshBase@@$0BA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkgpMeshBase::Edge::Edge(void)
//{
//    mangled_ppc("??0Edge@hkgpMeshBase@@QAA@XZ");
//};

//public: hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>(void)
//{
//    mangled_ppc("??0?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QAA@XZ");
//};

//public: hkInplaceArray<struct hkGeometryProcessing::TransposedVectors, 2, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkGeometryProcessing::TransposedVectors, 2, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@UTransposedVectors@hkGeometryProcessing@@$01UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkArrayBase<struct hkgpMeshBase::Vertex *>::hkArrayBase<struct hkgpMeshBase::Vertex *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUVertex@hkgpMeshBase@@@@QAA@XZ");
//};

//public: struct hkgpMeshBase::Vertex *& hkArrayBase<struct hkgpMeshBase::Vertex *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUVertex@hkgpMeshBase@@@@QAAAAPAUVertex@hkgpMeshBase@@H@Z");
//};

//public: int hkArrayBase<struct hkgpMeshBase::Vertex *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUVertex@hkgpMeshBase@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpMeshBase::Vertex *>::_setSize(class hkMemoryAllocator &, int, struct hkgpMeshBase::Vertex *const &)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@PAUVertex@hkgpMeshBase@@@@QAAXAAVhkMemoryAllocator@@HABQAUVertex@hkgpMeshBase@@@Z");
//};

//public: hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::~hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkgpMeshBase::Vertex *>::~hkArrayBase<struct hkgpMeshBase::Vertex *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUVertex@hkgpMeshBase@@@@QAA@XZ");
//};

//public: struct hkgpMeshBase::Triangle * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node::getLeafData<struct hkgpMeshBase::Triangle *>(void) const
//{
//    mangled_ppc("??$getLeafData@PAUTriangle@hkgpMeshBase@@@Node@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@QBAPAUTriangle@hkgpMeshBase@@XZ");
//};

//public: virtual void hkgpMesh::PrismShape<1>::getSupportingVertex(class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("?getSupportingVertex@?$PrismShape@$00@hkgpMesh@@UBAXABVhkVector4@@AAV3@@Z");
//};

//public: virtual class hkAabb hkgpMesh::PrismShape<1>::getBoundingBox(void) const
//{
//    mangled_ppc("?getBoundingBox@?$PrismShape@$00@hkgpMesh@@UBA?AVhkAabb@@XZ");
//};

//public: struct hkgpMeshBase::Vertex * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node::getLeafData<struct hkgpMeshBase::Vertex *>(void) const
//{
//    mangled_ppc("??$getLeafData@PAUVertex@hkgpMeshBase@@@Node@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@QBAPAUVertex@hkgpMeshBase@@XZ");
//};

//public: int hkgpMesh::floodFill<struct hkgpMesh::FloodFillDetachedPartsPolicy>(struct hkgpMesh::FloodFillDetachedPartsPolicy &)
//{
//    mangled_ppc("??$floodFill@UFloodFillDetachedPartsPolicy@hkgpMesh@@@hkgpMesh@@QAAHAAUFloodFillDetachedPartsPolicy@0@@Z");
//};

//public: bool hkgpMesh::FloodFillDetachedPartsPolicy::canCrossEdge(class hkgpMesh *, struct hkgpMeshBase::Edge const &) const
//{
//    mangled_ppc("?canCrossEdge@FloodFillDetachedPartsPolicy@hkgpMesh@@QBA_NPAV2@ABUEdge@hkgpMeshBase@@@Z");
//};

//public: hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@@@QAA@XZ");
//};

//public: class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *& hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@@@QAAAAPAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@H@Z");
//};

//public: void hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@PAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::~hkArray<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::~hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkgpMesh *>::hkArrayBase<class hkgpMesh *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkgpMesh@@@@QAA@XZ");
//};

//public: class hkgpMesh *& hkArrayBase<class hkgpMesh *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkgpMesh@@@@QAAAAPAVhkgpMesh@@H@Z");
//};

//public: int hkArrayBase<class hkgpMesh *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkgpMesh@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkgpMesh *>::_pushBack(class hkMemoryAllocator &, class hkgpMesh *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkgpMesh@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkgpMesh@@@Z");
//};

//public: class hkgpMesh ** hkArrayBase<class hkgpMesh *>::_expandBy(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_expandBy@?$hkArrayBase@PAVhkgpMesh@@@@QAAPAPAVhkgpMesh@@AAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<class hkgpMesh *, struct hkContainerHeapAllocator>::~hkArray<class hkgpMesh *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkgpMesh@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkgpMesh *>::~hkArrayBase<class hkgpMesh *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkgpMesh@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkgpMeshBase::Triangle *>::hkArrayBase<struct hkgpMeshBase::Triangle *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUTriangle@hkgpMeshBase@@@@QAA@XZ");
//};

//public: struct hkgpMeshBase::Triangle *& hkArrayBase<struct hkgpMeshBase::Triangle *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUTriangle@hkgpMeshBase@@@@QAAAAPAUTriangle@hkgpMeshBase@@H@Z");
//};

//public: int hkArrayBase<struct hkgpMeshBase::Triangle *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUTriangle@hkgpMeshBase@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpMeshBase::Triangle *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUTriangle@hkgpMeshBase@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkgpMeshBase::Triangle *>::indexOf(struct hkgpMeshBase::Triangle *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAUTriangle@hkgpMeshBase@@@@QBAHABQAUTriangle@hkgpMeshBase@@HH@Z");
//};

//public: void hkArrayBase<struct hkgpMeshBase::Triangle *>::_pushBack(class hkMemoryAllocator &, struct hkgpMeshBase::Triangle *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUTriangle@hkgpMeshBase@@@@QAAXAAVhkMemoryAllocator@@ABQAUTriangle@hkgpMeshBase@@@Z");
//};

//public: void hkArrayBase<struct hkgpMeshBase::Triangle *>::pushBackUnchecked(struct hkgpMeshBase::Triangle *const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@PAUTriangle@hkgpMeshBase@@@@QAAXABQAUTriangle@hkgpMeshBase@@@Z");
//};

//public: void hkArrayBase<struct hkgpMeshBase::Triangle *>::_reserveExactly(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserveExactly@?$hkArrayBase@PAUTriangle@hkgpMeshBase@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::~hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUTriangle@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkgpMeshBase::Triangle *>::~hkArrayBase<struct hkgpMeshBase::Triangle *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUTriangle@hkgpMeshBase@@@@QAA@XZ");
//};

//public: void hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::applyFan<struct hkgpMesh::CollapseEdgePolicy>(struct hkgpMesh::CollapseEdgePolicy &) const
//{
//    mangled_ppc("??$applyFan@UCollapseEdgePolicy@hkgpMesh@@@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAXAAUCollapseEdgePolicy@hkgpMesh@@@Z");
//};

//public: bool hkgpMesh::CollapseEdgePolicy::operator()(struct hkgpMeshBase::Edge const &) const
//{
//    mangled_ppc("??RCollapseEdgePolicy@hkgpMesh@@QBA_NABUEdge@hkgpMeshBase@@@Z");
//};

//public: hkArrayBase<struct hkgpMesh::Ring *>::hkArrayBase<struct hkgpMesh::Ring *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAURing@hkgpMesh@@@@QAA@XZ");
//};

//public: struct hkgpMesh::Ring *& hkArrayBase<struct hkgpMesh::Ring *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAURing@hkgpMesh@@@@QAAAAPAURing@hkgpMesh@@H@Z");
//};

//public: int hkArrayBase<struct hkgpMesh::Ring *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAURing@hkgpMesh@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpMesh::Ring *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAURing@hkgpMesh@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkgpMesh::Ring *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAURing@hkgpMesh@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkgpMesh::Ring *>::_pushBack(class hkMemoryAllocator &, struct hkgpMesh::Ring *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAURing@hkgpMesh@@@@QAAXAAVhkMemoryAllocator@@ABQAURing@hkgpMesh@@@Z");
//};

//public: hkArray<struct hkgpMesh::Ring *, struct hkContainerHeapAllocator>::~hkArray<struct hkgpMesh::Ring *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAURing@hkgpMesh@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkgpMesh::Ring *>::~hkArrayBase<struct hkgpMesh::Ring *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAURing@hkgpMesh@@@@QAA@XZ");
//};

//void hkAlgorithm::swap<struct hkgpMeshBase::Edge>(struct hkgpMeshBase::Edge &, struct hkgpMeshBase::Edge &)
//{
//    mangled_ppc("??$swap@UEdge@hkgpMeshBase@@@hkAlgorithm@@YAXAAUEdge@hkgpMeshBase@@0@Z");
//};

//public: void hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::applyFan<struct hkgpMesh::CollapseMetric>(struct hkgpMesh::CollapseMetric &) const
//{
//    mangled_ppc("??$applyFan@UCollapseMetric@hkgpMesh@@@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAXAAUCollapseMetric@hkgpMesh@@@Z");
//};

//public: bool hkgpMesh::CollapseMetric::operator()(struct hkgpMeshBase::Edge)
//{
//    mangled_ppc("??RCollapseMetric@hkgpMesh@@QAA_NUEdge@hkgpMeshBase@@@Z");
//};

//public: void hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::applyFan<struct hkgpMesh::FanEdgeCollector>(struct hkgpMesh::FanEdgeCollector &) const
//{
//    mangled_ppc("??$applyFan@UFanEdgeCollector@hkgpMesh@@@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAXAAUFanEdgeCollector@hkgpMesh@@@Z");
//};

//public: bool hkgpMesh::FanEdgeCollector::operator()(struct hkgpMeshBase::Edge const &)
//{
//    mangled_ppc("??RFanEdgeCollector@hkgpMesh@@QAA_NABUEdge@hkgpMeshBase@@@Z");
//};

//public: class hkAabb & hkArrayBase<class hkAabb>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@VhkAabb@@@@QAAAAVhkAabb@@XZ");
//};

//public: void hkArrayBase<class hkAabb>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@VhkAabb@@@@QAAXH@Z");
//};

//public: class hkAabb & hkArrayBase<class hkAabb>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@VhkAabb@@@@QAAAAVhkAabb@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??0?$hkArrayBase@V?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@@@QAA@XZ");
//};

//public: hkArray<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::~hkArray<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@V?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::~hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??1?$hkArrayBase@V?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@@@QAA@XZ");
//};

//public: void hkGeometryProcessing::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::setBucketsCount(int)
//{
//    mangled_ppc("?setBucketsCount@?$HashTable@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXH@Z");
//};

//public: struct hkgpMesh::SingleEdge * hkGeometryProcessing::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::find(int, struct hkgpMesh::SingleEdge const &)
//{
//    mangled_ppc("?find@?$HashTable@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAPAUSingleEdge@hkgpMesh@@HABU34@@Z");
//};

//public: struct hkgpMesh::SingleEdge * hkGeometryProcessing::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::insert(int, struct hkgpMesh::SingleEdge const &)
//{
//    mangled_ppc("?insert@?$HashTable@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAPAUSingleEdge@hkgpMesh@@HABU34@@Z");
//};

//void hkAlgorithm::quickSort<struct hkgpMeshBase::Triangle *, struct hkgpMesh::SortByArea>(struct hkgpMeshBase::Triangle **, int, struct hkgpMesh::SortByArea)
//{
//    mangled_ppc("??$quickSort@PAUTriangle@hkgpMeshBase@@USortByArea@hkgpMesh@@@hkAlgorithm@@YAXPAPAUTriangle@hkgpMeshBase@@HUSortByArea@hkgpMesh@@@Z");
//};

//public: virtual void hkgpMesh::PrismShape<2>::getSupportingVertex(class hkVector4const &, class hkVector4&) const
//{
//    mangled_ppc("?getSupportingVertex@?$PrismShape@$01@hkgpMesh@@UBAXABVhkVector4@@AAV3@@Z");
//};

//public: virtual class hkAabb hkgpMesh::PrismShape<2>::getBoundingBox(void) const
//{
//    mangled_ppc("?getBoundingBox@?$PrismShape@$01@hkgpMesh@@UBA?AVhkAabb@@XZ");
//};

//public: struct hkgpMesh::SelfConvexShape *const & hkArrayBase<struct hkgpMesh::SelfConvexShape *>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@PAUSelfConvexShape@hkgpMesh@@@@QBAABQAUSelfConvexShape@hkgpMesh@@H@Z");
//};

//public: int hkArrayBase<struct hkgpMesh::SelfConvexShape *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUSelfConvexShape@hkgpMesh@@@@QBAHXZ");
//};

//public: hkArrayBase<struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *>::hkArrayBase<struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUNode@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@@@QAA@XZ");
//};

//public: struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *& hkArrayBase<struct hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUNode@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@@@QAAAAPAUNode@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@H@Z");
//};

//public: class hkgpMesh::IConvexOverlap::IConvexShape * hkAabbTree<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::Node::getLeafData<class hkgpMesh::IConvexOverlap::IConvexShape *>(void) const
//{
//    mangled_ppc("??$getLeafData@PAVIConvexShape@IConvexOverlap@hkgpMesh@@@Node@?$hkAabbTree@UhkAabbTreeAabb@hkAabbTreeData@@I@@QBAPAVIConvexShape@IConvexOverlap@hkgpMesh@@XZ");
//};

//public: hkArrayBase<struct hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::NodePair>::hkArrayBase<struct hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::NodePair>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UNodePair@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@I@@@@QAA@XZ");
//};

//public: int hkArrayBase<struct hkAabbTreeQueryUtils<struct hkAabbTreeData::hkAabbTreeAabb, unsigned int>::NodePair>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UNodePair@?$hkAabbTreeQueryUtils@UhkAabbTreeAabb@hkAabbTreeData@@I@@@@QBAHXZ");
//};

//public: hkInplaceArray<class hkVector4, 32, struct hkContainerHeapAllocator>::hkInplaceArray<class hkVector4, 32, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@VhkVector4@@$0CA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkPointerMap<struct hkgpMeshBase::Triangle *, struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkgpMeshBase::Triangle *, struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PAUTriangle@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//merged_847CC798
//{
//    mangled_ppc("merged_847CC798");
//};

//merged_847CC7E0
//{
//    mangled_ppc("merged_847CC7E0");
//};

//public: hkgpTriangulatorBase::hkgpTriangulatorBase(void)
//{
//    mangled_ppc("??0hkgpTriangulatorBase@@QAA@XZ");
//};

//public: virtual hkgpTriangulatorBase::~hkgpTriangulatorBase(void)
//{
//    mangled_ppc("??1hkgpTriangulatorBase@@UAA@XZ");
//};

//public: hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>::hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkgpAbstractMesh@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//merged_847CC8E8
//{
//    mangled_ppc("merged_847CC8E8");
//};

//public: struct hkgpMeshBase::Vertex * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::allocate(struct hkgpMeshBase::Vertex const &)
//{
//    mangled_ppc("?allocate@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAPAUVertex@hkgpMeshBase@@ABU34@@Z");
//};

//public: static void * hkgpMeshBase::Vertex::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Vertex@hkgpMeshBase@@SAPAXIPAX@Z");
//};

//public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: struct hkgpMeshBase::Vertex *& hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item::prev(void)
//{
//    mangled_ppc("?prev@Item@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAAAPAUVertex@hkgpMeshBase@@XZ");
//};

//public: struct hkgpMeshBase::Triangle * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::allocate(struct hkgpMeshBase::Triangle const &)
//{
//    mangled_ppc("?allocate@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAPAUTriangle@hkgpMeshBase@@ABU34@@Z");
//};

//public: static void * hkgpMeshBase::Triangle::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Triangle@hkgpMeshBase@@SAPAXIPAX@Z");
//};

//public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: struct hkgpMeshBase::Triangle *& hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::Item::prev(void)
//{
//    mangled_ppc("?prev@Item@?$List@UTriangle@hkgpMeshBase@@UBaseTriangle@2@U?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAAAPAUTriangle@hkgpMeshBase@@XZ");
//};

//public: struct hkgpMeshBase::Edge hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::turnCcw(void) const
//{
//    mangled_ppc("?turnCcw@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@hkgpMeshBase@@XZ");
//};

//public: struct hkgpMeshBase::Edge hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::turnCw(void) const
//{
//    mangled_ppc("?turnCw@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@hkgpMeshBase@@XZ");
//};

//public: struct hkgpMeshBase::Edge hkgpTopology::Edge<struct hkgpMeshBase::Edge, struct hkgpMeshBase::Vertex, struct hkgpMeshBase::Triangle, struct hkgpMeshBase::Vertex *>::self(void) const
//{
//    mangled_ppc("?self@?$Edge@U0hkgpMeshBase@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@hkgpMeshBase@@XZ");
//};

//public: static void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAXPAX@Z");
//};

//public: static void hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkgpAbstractMesh@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@SAXPAX@Z");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??0?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UItem@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??0?$List@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UItem@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkInplaceArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, 64, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, 64, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0EA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkContainerHeapAllocator>::pushBack(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@QAAXABUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@Z");
//};

//public: bool hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::isConstrained(void) const
//{
//    mangled_ppc("?isConstrained@Edge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBA_NXZ");
//};

//public: static struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const & hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::null(void)
//{
//    mangled_ppc("?null@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@SAABUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle * hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::triangle(void) const
//{
//    mangled_ppc("?triangle@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAPAUTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: bool hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::isValid(void) const
//{
//    mangled_ppc("?isValid@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NXZ");
//};

//public: hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: void hkArray<struct hkgpMesh::Ring::Segment, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@USegment@Ring@hkgpMesh@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>::hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>(struct hkgpMeshBase::Edge *, int, int)
//{
//    mangled_ppc("??0?$hkArray@UEdge@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAA@PAUEdge@hkgpMeshBase@@HH@Z");
//};

//public: void hkArray<struct hkgpMeshBase::Edge, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UEdge@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArray<struct hkGeometryProcessing::TransposedVectors, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::TransposedVectors, struct hkContainerHeapAllocator>(struct hkGeometryProcessing::TransposedVectors *, int, int)
//{
//    mangled_ppc("??0?$hkArray@UTransposedVectors@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@PAUTransposedVectors@hkGeometryProcessing@@HH@Z");
//};

//public: void hkArray<struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUVertex@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkgpMesh *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkgpMesh@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: class hkBool hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::hasKey(struct hkgpMeshBase::Vertex *) const
//{
//    mangled_ppc("?hasKey@?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@QBA?AVhkBool@@PAUVertex@hkgpMeshBase@@@Z");
//};

//public: int hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@QBAHXZ");
//};

//public: void hkArray<struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUTriangle@hkgpMeshBase@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkgpMesh::Ring *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAURing@hkgpMesh@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkGeometryProcessing::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::clear(void)
//{
//    mangled_ppc("?clear@?$HashTable@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXXZ");
//};

//public: class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> & hkGeometryProcessing::HashTable<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::lookupBucket(int)
//{
//    mangled_ppc("?lookupBucket@?$HashTable@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAAAV?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@H@Z");
//};

//public: void hkArray<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@V?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@V?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkPointerMap<struct hkgpMeshBase::Triangle *, struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::hkPointerMap<struct hkgpMeshBase::Triangle *, struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PAUTriangle@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<struct hkgpMeshBase::Triangle *, struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::insert(struct hkgpMeshBase::Triangle *, struct hkgpMeshBase::Triangle *)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PAUTriangle@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@QAAHPAUTriangle@hkgpMeshBase@@0@Z");
//};

//public: class hkBool hkPointerMap<struct hkgpMeshBase::Triangle *, struct hkgpMeshBase::Triangle *, struct hkContainerHeapAllocator>::hasKey(struct hkgpMeshBase::Triangle *) const
//{
//    mangled_ppc("?hasKey@?$hkPointerMap@PAUTriangle@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@QBA?AVhkBool@@PAUTriangle@hkgpMeshBase@@@Z");
//};

//public: class hkBool hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType, int>::operator==(enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType) const
//{
//    mangled_ppc("??8?$hkEnum@W4eType@Location@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@H@@QBA?AVhkBool@@W4eType@Location@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@Z");
//};

//public: struct hkgpMesh::SingleEdge & hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@QAAAAUSingleEdge@hkgpMesh@@XZ");
//};

//public: hkgpMeshBase::Vertex::Vertex(struct hkgpMeshBase::Vertex const &)
//{
//    mangled_ppc("??0Vertex@hkgpMeshBase@@QAA@ABU01@@Z");
//};

//public: hkgpMeshBase::Triangle::Triangle(struct hkgpMeshBase::Triangle const &)
//{
//    mangled_ppc("??0Triangle@hkgpMeshBase@@QAA@ABU01@@Z");
//};

//public: hkgpAbstractMeshDefinitions::Vertex<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex>::Vertex<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex>(struct hkgpAbstractMeshDefinitions::Vertex<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex> const &)
//{
//    mangled_ppc("??0?$Vertex@U0hkgpMeshBase@@UBaseVertex@1@@hkgpAbstractMeshDefinitions@@QAA@ABU01@@Z");
//};

//public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *>(struct hkgpAbstractMeshDefinitions::Triangle<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkgpMeshBase::Vertex *> const &)
//{
//    mangled_ppc("??0?$Triangle@U0hkgpMeshBase@@UBaseTriangle@1@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAA@ABU01@@Z");
//};

//protected: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item::Item(struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item const &)
//{
//    mangled_ppc("??0Item@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@IAA@ABU012@@Z");
//};

//protected: hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::Item::Item(struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpMeshBase::BaseTriangle, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::Item const &)
//{
//    mangled_ppc("??0Item@?$List@UTriangle@hkgpMeshBase@@UBaseTriangle@2@U?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@IAA@ABU012@@Z");
//};

//public: hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::master(void) const
//{
//    mangled_ppc("?master@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: int hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::index(void) const
//{
//    mangled_ppc("?index@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAHXZ");
//};

//public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: bool hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::isMaster(void) const
//{
//    mangled_ppc("?isMaster@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NXZ");
//};

//public: static bool hkgpAbstractMeshDefinitions::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase>::isOrdered(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *)
//{
//    mangled_ppc("?isOrdered@?$Vertex@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@@hkgpAbstractMeshDefinitions@@SA_NPBUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@0@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *& hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::end(void) const
//{
//    mangled_ppc("?end@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAAAPAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: bool hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::isNaked(void) const
//{
//    mangled_ppc("?isNaked@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NXZ");
//};

//public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::compare(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &) const
//{
//    mangled_ppc("?compare@Vertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBAHABU12@@Z");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::release(struct hkgpMeshBase::Vertex *)
//{
//    mangled_ppc("?release@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXPAUVertex@hkgpMeshBase@@@Z");
//};

//public: void hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::clear(void)
//{
//    mangled_ppc("?clear@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXXZ");
//};

//private: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Item * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::allocateItem(void)
//{
//    mangled_ppc("?allocateItem@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@AAAPAUItem@12@XZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::release(struct hkgpMeshBase::Triangle *)
//{
//    mangled_ppc("?release@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXPAUTriangle@hkgpMeshBase@@@Z");
//};

//public: void hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::clear(void)
//{
//    mangled_ppc("?clear@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXXZ");
//};

//private: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Item * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::allocateItem(void)
//{
//    mangled_ppc("?allocateItem@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@AAAPAUItem@12@XZ");
//};

//public: void hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::reset(void)
//{
//    mangled_ppc("?reset@?$List@UVertex@hkgpMeshBase@@UItem@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAXXZ");
//};

//public: void hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpMeshBase::Vertex, struct hkgpMeshBase::BaseVertex, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator> >::reset(void)
//{
//    mangled_ppc("?reset@?$List@UTriangle@hkgpMeshBase@@UItem@?$List@UVertex@hkgpMeshBase@@UBaseVertex@2@U?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAXXZ");
//};

//public: void hkgpAbstractMesh<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkContainerHeapAllocator>::reset(void)
//{
//    mangled_ppc("?reset@?$hkgpAbstractMesh@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@2@UTriangle@2@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::~List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??1?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UItem@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::~List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??1?$List@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UItem@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::~PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: class hkVector4 hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::transformUnquantized(class hkVector4const &) const
//{
//    mangled_ppc("?transformUnquantized@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBA?AVhkVector4@@ABV2@@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::quantize(class hkVector4const &) const
//{
//    mangled_ppc("?quantize@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBA?AUVertex@1@ABVhkVector4@@@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::insertVertex(int, int, bool)
//{
//    mangled_ppc("?insertVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA?AUInsertion@1@HH_N@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::insertEdge(int, int, int, int, bool, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> const *)
//{
//    mangled_ppc("?insertEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA?AUInsertion@1@HHHH_NPBU?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::locateVertex(int, int) const
//{
//    mangled_ppc("?locateVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBA?AULocation@1@HH@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::locateExistingEdge(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *) const
//{
//    mangled_ppc("?locateExistingEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBA?AUEdge@1@U21@PBUVertex@1@1@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex * hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::newVertex(int, int, int)
//{
//    mangled_ppc("?newVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAPAUVertex@1@HHH@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle * hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::newTriangle(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *)
//{
//    mangled_ppc("?newTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAPAUTriangle@1@PAUVertex@1@00@Z");
//};

//public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::destroyEdgeDataHashTable(void)
//{
//    mangled_ppc("?destroyEdgeDataHashTable@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAXXZ");
//};

//public: hkInplaceArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, 64, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, 64, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0EA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::~PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::clear(void)
//{
//    mangled_ppc("?clear@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXXZ");
//};

//public: hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkContainerHeapAllocator>::~hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//protected: static unsigned int hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::ip1mod3(unsigned int)
//{
//    mangled_ppc("?ip1mod3@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@KAII@Z");
//};

//public: void hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::bind(struct hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *> const &) const
//{
//    mangled_ppc("?bind@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAXABU12@@Z");
//};

//void hkAlgorithm::swap<class hkInplaceArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, 64, struct hkContainerHeapAllocator> *>(class hkInplaceArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, 64, struct hkContainerHeapAllocator> *&, class hkInplaceArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, 64, struct hkContainerHeapAllocator> *&)
//{
//    mangled_ppc("??$swap@PAV?$hkInplaceArray@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0EA@UhkContainerHeapAllocator@@@@@hkAlgorithm@@YAXAAPAV?$hkInplaceArray@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0EA@UhkContainerHeapAllocator@@@@0@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge & hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QAAAAUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: int hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::_pushBack(class hkMemoryAllocator &, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QAAXAAVhkMemoryAllocator@@ABUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@Z");
//};

//public: int hkArrayBase<struct hkgpMesh::Ring::Segment>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@USegment@Ring@hkgpMesh@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpMesh::Ring::Segment>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@USegment@Ring@hkgpMesh@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkgpMesh::Ring::Segment>(struct hkgpMesh::Ring::Segment *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@USegment@Ring@hkgpMesh@@@hkArrayUtil@@SAXPAUSegment@Ring@hkgpMesh@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkgpMesh::Ring::Segment>(struct hkgpMesh::Ring::Segment *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@USegment@Ring@hkgpMesh@@@hkArrayUtil@@SAXPAUSegment@Ring@hkgpMesh@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkArrayBase<struct hkgpMeshBase::Edge>::hkArrayBase<struct hkgpMeshBase::Edge>(struct hkgpMeshBase::Edge *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@UEdge@hkgpMeshBase@@@@QAA@PAUEdge@hkgpMeshBase@@HH@Z");
//};

//public: int hkArrayBase<struct hkgpMeshBase::Edge>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UEdge@hkgpMeshBase@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpMeshBase::Edge>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UEdge@hkgpMeshBase@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkgpMeshBase::Edge>(struct hkgpMeshBase::Edge *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UEdge@hkgpMeshBase@@@hkArrayUtil@@SAXPAUEdge@hkgpMeshBase@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkgpMeshBase::Edge>(struct hkgpMeshBase::Edge *, int, struct hkgpMeshBase::Edge const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UEdge@hkgpMeshBase@@@hkArrayUtil@@SAXPAUEdge@hkgpMeshBase@@HABU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: hkArrayBase<struct hkGeometryProcessing::TransposedVectors>::hkArrayBase<struct hkGeometryProcessing::TransposedVectors>(struct hkGeometryProcessing::TransposedVectors *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@UTransposedVectors@hkGeometryProcessing@@@@QAA@PAUTransposedVectors@hkGeometryProcessing@@HH@Z");
//};

//public: void hkArrayBase<struct hkgpMeshBase::Vertex *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUVertex@hkgpMeshBase@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkgpMeshBase::Vertex *>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@PAUVertex@hkgpMeshBase@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkgpMeshBase::Vertex *>(struct hkgpMeshBase::Vertex **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUVertex@hkgpMeshBase@@@hkArrayUtil@@SAXPAPAUVertex@hkgpMeshBase@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkgpMeshBase::Vertex *>(struct hkgpMeshBase::Vertex **, int, struct hkgpMeshBase::Vertex *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUVertex@hkgpMeshBase@@@hkArrayUtil@@SAXPAPAUVertex@hkgpMeshBase@@HABQAU12@U?$hkTraitBool@$00@@@Z");
//};

//public: class hkVector4 hkgpMesh::PrismShape<1>::getVertex(int) const
//{
//    mangled_ppc("?getVertex@?$PrismShape@$00@hkgpMesh@@QBA?AVhkVector4@@H@Z");
//};

//public: void hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@PAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>(class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@@hkArrayUtil@@SAXPAPAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>(class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@PAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@@hkArrayUtil@@SAXPAPAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@HU?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkgpMesh *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkgpMesh@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkgpMesh *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkgpMesh@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class hkgpMesh *>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@PAVhkgpMesh@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkgpMesh *>(class hkgpMesh **, int, class hkgpMesh *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkgpMesh@@@hkArrayUtil@@SAXPAPAVhkgpMesh@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkgpMesh *>(class hkgpMesh **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@PAVhkgpMesh@@@hkArrayUtil@@SAXPAPAVhkgpMesh@@HU?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<struct hkgpMeshBase::Triangle *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUTriangle@hkgpMeshBase@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpMeshBase::Triangle *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUTriangle@hkgpMeshBase@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkgpMeshBase::Triangle *>(struct hkgpMeshBase::Triangle **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUTriangle@hkgpMeshBase@@@hkArrayUtil@@SAXPAPAUTriangle@hkgpMeshBase@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkgpMeshBase::Triangle *>(struct hkgpMeshBase::Triangle **, int, struct hkgpMeshBase::Triangle *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUTriangle@hkgpMeshBase@@@hkArrayUtil@@SAXPAPAUTriangle@hkgpMeshBase@@HABQAU12@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<struct hkgpMesh::Ring *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAURing@hkgpMesh@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpMesh::Ring *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAURing@hkgpMesh@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkgpMesh::Ring *>(struct hkgpMesh::Ring **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAURing@hkgpMesh@@@hkArrayUtil@@SAXPAPAURing@hkgpMesh@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkgpMesh::Ring *>(struct hkgpMesh::Ring **, int, struct hkgpMesh::Ring *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAURing@hkgpMesh@@@hkArrayUtil@@SAXPAPAURing@hkgpMesh@@HABQAU12@U?$hkTraitBool@$00@@@Z");
//};

//public: class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> & hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@V?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@@@QAAAAV?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@H@Z");
//};

//public: int hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@V?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@V?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@V?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@V?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkgpMesh::SingleEdge & hkArrayBase<struct hkgpMesh::SingleEdge>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@USingleEdge@hkgpMesh@@@@QAAAAUSingleEdge@hkgpMesh@@H@Z");
//};

//public: int hkArrayBase<struct hkgpMesh::SingleEdge>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@USingleEdge@hkgpMesh@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpMesh::SingleEdge>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@USingleEdge@hkgpMesh@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkgpMesh::SingleEdge>::indexOf(struct hkgpMesh::SingleEdge const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@USingleEdge@hkgpMesh@@@@QBAHABUSingleEdge@hkgpMesh@@HH@Z");
//};

//public: bool hkgpMesh::SingleEdge::operator==(struct hkgpMesh::SingleEdge const &) const
//{
//    mangled_ppc("??8SingleEdge@hkgpMesh@@QBA_NABU01@@Z");
//};

//public: struct hkgpMesh::SingleEdge & hkArrayBase<struct hkgpMesh::SingleEdge>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@USingleEdge@hkgpMesh@@@@QAAAAUSingleEdge@hkgpMesh@@AAVhkMemoryAllocator@@@Z");
//};

//void hkAlgorithm::quickSortRecursive<struct hkgpMeshBase::Triangle *, struct hkgpMesh::SortByArea>(struct hkgpMeshBase::Triangle **, int, int, struct hkgpMesh::SortByArea)
//{
//    mangled_ppc("??$quickSortRecursive@PAUTriangle@hkgpMeshBase@@USortByArea@hkgpMesh@@@hkAlgorithm@@YAXPAPAUTriangle@hkgpMeshBase@@HHUSortByArea@hkgpMesh@@@Z");
//};

//public: bool hkgpMesh::SortByArea::operator()(struct hkgpMeshBase::Triangle const *, struct hkgpMeshBase::Triangle const *) const
//{
//    mangled_ppc("??RSortByArea@hkgpMesh@@QBA_NPBUTriangle@hkgpMeshBase@@0@Z");
//};

//public: class hkVector4 hkgpMesh::PrismShape<2>::getVertex(int) const
//{
//    mangled_ppc("?getVertex@?$PrismShape@$01@hkgpMesh@@QBA?AVhkVector4@@H@Z");
//};

//public: hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::~PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::~hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::~hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::~hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::~hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAA@XZ");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::Edge(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &)
//{
//    mangled_ppc("??0Edge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@ABU01@@Z");
//};

//public: void * hkgpMeshBase::Triangle::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GTriangle@hkgpMeshBase@@QAAPAXI@Z");
//};

//public: static void hkgpMeshBase::Triangle::operator delete(void *)
//{
//    mangled_ppc("??3Triangle@hkgpMeshBase@@SAXPAX@Z");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::Vertex(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &)
//{
//    mangled_ppc("??0Vertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@ABU01@@Z");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle::~Triangle(void)
//{
//    mangled_ppc("??1Triangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@XZ");
//};

//public: void * hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$HashTable@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAPAXI@Z");
//};

//public: hkgpMesh::Ring::Segment::Segment(void)
//{
//    mangled_ppc("??0Segment@Ring@hkgpMesh@@QAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase>::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase>(struct hkgpAbstractMeshDefinitions::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase> const &)
//{
//    mangled_ppc("??0?$Vertex@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@@hkgpAbstractMeshDefinitions@@QAA@ABU01@@Z");
//};

//public: bool hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::needRelease(void) const
//{
//    mangled_ppc("?needRelease@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QBA_NXZ");
//};

//public: bool hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::needRelease(void) const
//{
//    mangled_ppc("?needRelease@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QBA_NXZ");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::Vertex(void)
//{
//    mangled_ppc("??0Vertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@XZ");
//};

//public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::isBoundary(void) const
//{
//    mangled_ppc("?isBoundary@Vertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBAHXZ");
//};

//public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::isEqual(int, int) const
//{
//    mangled_ppc("?isEqual@Vertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBAHHH@Z");
//};

//public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//protected: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item::Item(struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item const &)
//{
//    mangled_ppc("??0Item@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@IAA@ABU012@@Z");
//};

//public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkContainerHeapAllocator>::hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkContainerHeapAllocator>(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge *, int, int)
//{
//    mangled_ppc("??0?$hkArray@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@QAA@PAUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@HH@Z");
//};

//public: void hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::Edge(void)
//{
//    mangled_ppc("??0Edge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@XZ");
//};

//public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::setConstrained(void) const
//{
//    mangled_ppc("?setConstrained@Edge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBAXXZ");
//};

//public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::turnCcwInPlace(void)
//{
//    mangled_ppc("?turnCcwInPlace@Edge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAXXZ");
//};

//public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::turnCwInPlace(void)
//{
//    mangled_ppc("?turnCwInPlace@Edge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAXXZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::next(void) const
//{
//    mangled_ppc("?next@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::prev(void) const
//{
//    mangled_ppc("?prev@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::nextCw(void) const
//{
//    mangled_ppc("?nextCw@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::nextCcw(void) const
//{
//    mangled_ppc("?nextCcw@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::prevCcw(void) const
//{
//    mangled_ppc("?prevCcw@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *& hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::apex(void) const
//{
//    mangled_ppc("?apex@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBAAAPAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: bool hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::canBind(struct hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *> const &) const
//{
//    mangled_ppc("?canBind@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NABU12@@Z");
//};

//public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::Insertion(enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &)
//{
//    mangled_ppc("??0Insertion@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@W4eType@01@ABUEdge@1@@Z");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle::Triangle(void)
//{
//    mangled_ppc("??0Triangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::~Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>(void)
//{
//    mangled_ppc("??1?$Triangle@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UTriangleBase@hkgpTriangulatorBase@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: void hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::setVertices(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *const &, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *const &, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *const &)
//{
//    mangled_ppc("?setVertices@?$Triangle@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UTriangleBase@hkgpTriangulatorBase@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAAXABQAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@00@Z");
//};

//public: class hkBool hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType, int>::operator!=(enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType) const
//{
//    mangled_ppc("??9?$hkEnum@W4eType@Location@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@H@@QBA?AVhkBool@@W4eType@Location@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@Z");
//};

//public: static void hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::operator delete(void *)
//{
//    mangled_ppc("??3?$HashTable@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@SAXPAX@Z");
//};

//public: hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::~HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$HashTable@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase>::Vertex<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase>(void)
//{
//    mangled_ppc("??0?$Vertex@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item::Item(void)
//{
//    mangled_ppc("??0Item@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>(void)
//{
//    mangled_ppc("??0?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QAA@XZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::turnCcw(void) const
//{
//    mangled_ppc("?turnCcw@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::turnCw(void) const
//{
//    mangled_ppc("?turnCw@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType, int>::hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType, int>(enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion::eType)
//{
//    mangled_ppc("??0?$hkEnum@W4eType@Insertion@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@H@@QAA@W4eType@Insertion@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@Z");
//};

//public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>(void)
//{
//    mangled_ppc("??0?$Triangle@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UTriangleBase@hkgpTriangulatorBase@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: void hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::invalidate(void)
//{
//    mangled_ppc("?invalidate@?$Triangle@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UTriangleBase@hkgpTriangulatorBase@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAAXXZ");
//};

//public: bool hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::hasReferences(void) const
//{
//    mangled_ppc("?hasReferences@?$Triangle@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UTriangleBase@hkgpTriangulatorBase@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QBA_NXZ");
//};

//public: unsigned long hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::link(int) const
//{
//    mangled_ppc("?link@?$Triangle@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UTriangleBase@hkgpTriangulatorBase@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QBAKH@Z");
//};

//public: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::Item::Item(void)
//{
//    mangled_ppc("??0Item@?$List@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UTriangleBase@hkgpTriangulatorBase@@U?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAA@XZ");
//};

//public: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAAAPAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@H@Z");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXH@Z");
//};

//private: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::allocateNewPool(void)
//{
//    mangled_ppc("?allocateNewPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@AAAPAUPool@12@XZ");
//};

//private: void hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::releasePool(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *) const
//{
//    mangled_ppc("?releasePool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@ABAXPAUPool@12@@Z");
//};

//public: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAAAPAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@H@Z");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXH@Z");
//};

//private: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::allocateNewPool(void)
//{
//    mangled_ppc("?allocateNewPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@AAAPAUPool@12@XZ");
//};

//private: void hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::releasePool(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *) const
//{
//    mangled_ppc("?releasePool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@ABAXPAUPool@12@@Z");
//};

//public: void hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::reset(void)
//{
//    mangled_ppc("?reset@?$List@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UItem@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAXXZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle * hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::allocate(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle const &)
//{
//    mangled_ppc("?allocate@?$List@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UItem@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAPAUTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@ABU34@@Z");
//};

//public: void hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::reset(void)
//{
//    mangled_ppc("?reset@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UItem@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAXXZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex * hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::allocate(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &)
//{
//    mangled_ppc("?allocate@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UItem@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAPAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@ABU34@@Z");
//};

//public: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::clear(void)
//{
//    mangled_ppc("?clear@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXXZ");
//};

//public: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::clear(void)
//{
//    mangled_ppc("?clear@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXXZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Insertion hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::insertVertex(int, int, bool, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location const &, bool)
//{
//    mangled_ppc("?insertVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA?AUInsertion@1@HH_NABULocation@1@0@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::locateVertex(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, int, int) const
//{
//    mangled_ppc("?locateVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBA?AULocation@1@UEdge@1@HH@Z");
//};

//public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::setEdgeData(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?setEdgeData@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAXABUEdge@1@ABU?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@@Z");
//};

//public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::setRoot(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle *)
//{
//    mangled_ppc("?setRoot@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAXPAUTriangle@1@@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::conformEdge(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &)
//{
//    mangled_ppc("?conformEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA?AUEdge@1@ABU21@@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle * hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::getRoot(int, int) const
//{
//    mangled_ppc("?getRoot@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBAPAUTriangle@1@HH@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::locateExistingVertex(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *) const
//{
//    mangled_ppc("?locateExistingVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBA?AUEdge@1@U21@PBUVertex@1@@Z");
//};

//public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::orientation(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *)
//{
//    mangled_ppc("?orientation@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAHABUEdge@1@PBUVertex@1@@Z");
//};

//public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::orientation(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &, int, int)
//{
//    mangled_ppc("?orientation@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAHABUEdge@1@HH@Z");
//};

//public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::orientation(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *)
//{
//    mangled_ppc("?orientation@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAHPBUVertex@1@00@Z");
//};

//public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::orientation(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, int, int)
//{
//    mangled_ppc("?orientation@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAHPBUVertex@1@0HH@Z");
//};

//public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::orientation(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, int, int, int, int)
//{
//    mangled_ppc("?orientation@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAHPBUVertex@1@HHHH@Z");
//};

//public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::checkOrientation(int, int, int, int)
//{
//    mangled_ppc("?checkOrientation@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAHHHHH@Z");
//};

//public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::clamp(int, int, int)
//{
//    mangled_ppc("?clamp@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAHHHH@Z");
//};

//public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::round(float)
//{
//    mangled_ppc("?round@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAHM@Z");
//};

//public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::sameBoundary(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *)
//{
//    mangled_ppc("?sameBoundary@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAHPBUVertex@1@0@Z");
//};

//protected: static unsigned int hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::ip2mod3(unsigned int)
//{
//    mangled_ppc("?ip2mod3@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@KAII@Z");
//};

//public: hkArray<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::~hkArray<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@V?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//private: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::releasePool(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *) const
//{
//    mangled_ppc("?releasePool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@ABAXPAUPool@12@@Z");
//};

//public: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAAAPAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@H@Z");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QAA@PAUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@HH@Z");
//};

//public: hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::~hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QAA@XZ");
//};

//public: int hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@hkArrayUtil@@SAXPAUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge>(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge *, int, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@hkArrayUtil@@SAXPAUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@HABU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<struct hkgpMeshBase::Vertex *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUVertex@hkgpMeshBase@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpMeshBase::Vertex *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUVertex@hkgpMeshBase@@@@QAAXXZ");
//};

//public: int hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkPointerMap<struct hkgpMeshBase::Vertex *, struct hkgpMeshBase::Vertex *, struct hkContainerHeapAllocator> *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAV?$hkPointerMap@PAUVertex@hkgpMeshBase@@PAU12@UhkContainerHeapAllocator@@@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkgpMesh *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkgpMesh@@@@QAAXXZ");
//};

//public: int hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@V?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@V?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >(class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@V?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@@hkArrayUtil@@SAXPAV?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> >(class hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@V?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@@hkArrayUtil@@SAXPAV?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<struct hkgpMesh::SingleEdge>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@USingleEdge@hkgpMesh@@@@QBAHXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkgpMesh::SingleEdge>(struct hkgpMesh::SingleEdge *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@USingleEdge@hkgpMesh@@@hkArrayUtil@@SAXPAUSingleEdge@hkgpMesh@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkgpMesh::SingleEdge>(struct hkgpMesh::SingleEdge *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@USingleEdge@hkgpMesh@@@hkArrayUtil@@SAXPAUSingleEdge@hkgpMesh@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkgpMesh::SingleEdge::SingleEdge(void)
//{
//    mangled_ppc("??0SingleEdge@hkgpMesh@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::canFlip(void) const
//{
//    mangled_ppc("?canFlip@Edge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBAHXZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::flip(void) const
//{
//    mangled_ppc("?flip@Edge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBA?AU12@XZ");
//};

//public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::operator=(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &)
//{
//    mangled_ppc("??4Edge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAXABU01@@Z");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataValue::~EdgeDataValue(void)
//{
//    mangled_ppc("??1EdgeDataValue@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@XZ");
//};

//public: void * hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@QAAPAXI@Z");
//};

//public: hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>::~DefaultEdgeData<struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@QAA@XZ");
//};

//public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::pushBack(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAAXABQAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@Z");
//};

//public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::pushBack(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAAXABQAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::allocate(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const &)
//{
//    mangled_ppc("?allocate@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAPAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@ABU34@@Z");
//};

//public: bool hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::needRelease(void) const
//{
//    mangled_ppc("?needRelease@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QBA_NXZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *& hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item::next(void)
//{
//    mangled_ppc("?next@Item@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAAAPAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *& hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item::prev(void)
//{
//    mangled_ppc("?prev@Item@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAAAPAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: int hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$List@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UItem@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QBAHXZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::allocate(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle const &)
//{
//    mangled_ppc("?allocate@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAPAUTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@ABU34@@Z");
//};

//public: bool hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::needRelease(void) const
//{
//    mangled_ppc("?needRelease@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QBA_NXZ");
//};

//public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::getAndClearConstraint(void) const
//{
//    mangled_ppc("?getAndClearConstraint@Edge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBAHXZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::prevCw(void) const
//{
//    mangled_ppc("?prevCw@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: bool hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::isBound(void) const
//{
//    mangled_ppc("?isBound@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA_NXZ");
//};

//public: struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::allocate(void)
//{
//    mangled_ppc("?allocate@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAPAU?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@XZ");
//};

//public: void hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>::appendOrReplace(struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?appendOrReplace@?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@QAAXABU12@@Z");
//};

//public: hkInplaceArray<unsigned long, 4, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned long, 4, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@K$03UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle *& hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::Item::prev(void)
//{
//    mangled_ppc("?prev@Item@?$List@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UTriangleBase@hkgpTriangulatorBase@@U?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAAAPAUTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::Location(enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &)
//{
//    mangled_ppc("??0Location@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@W4eType@01@ABUEdge@1@@Z");
//};

//public: enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType, int>::operator enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4eType@Location@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@H@@QBA?AW4eType@Location@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: static void hkArrayBase<struct hkgpMesh::SingleEdge>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkArrayBase@USingleEdge@hkgpMesh@@@@SAXPAX@Z");
//};

//public: static void * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Pool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@SAPAXIPAX@Z");
//};

//public: static void * hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Pool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@SAPAXIPAX@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox * hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::find(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &)
//{
//    mangled_ppc("?find@?$HashTable@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAPAUEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@ABU34@@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox * hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::insert(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &)
//{
//    mangled_ppc("?insert@?$HashTable@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAPAUEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@ABU34@@Z");
//};

//public: void hkArray<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@V?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataValue::EdgeDataValue(void)
//{
//    mangled_ppc("??0EdgeDataValue@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@XZ");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle::Triangle(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle const &)
//{
//    mangled_ppc("??0Triangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@ABU01@@Z");
//};

//public: hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>(struct hkgpAbstractMeshDefinitions::Triangle<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *> const &)
//{
//    mangled_ppc("??0?$Triangle@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UTriangleBase@hkgpTriangulatorBase@@PAUVertex@1@@hkgpAbstractMeshDefinitions@@QAA@ABU01@@Z");
//};

//public: static void * hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Vertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAPAXIPAX@Z");
//};

//public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge::clrConstrained(void) const
//{
//    mangled_ppc("?clrConstrained@Edge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBAXXZ");
//};

//public: static void * hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@SAPAXIPAX@Z");
//};

//public: hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>::DefaultEdgeData<struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@QAA@XZ");
//};

//public: static void * hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Triangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAPAXIPAX@Z");
//};

//protected: hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::Item::Item(struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorBase::TriangleBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::Item const &)
//{
//    mangled_ppc("??0Item@?$List@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UTriangleBase@hkgpTriangulatorBase@@U?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@IAA@ABU012@@Z");
//};

//public: hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType, int>::hkEnum<enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType, int>(enum hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Location::eType)
//{
//    mangled_ppc("??0?$hkEnum@W4eType@Location@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@H@@QAA@W4eType@Location@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@Z");
//};

//public: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAAAPAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@XZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::_pushBack(class hkMemoryAllocator &, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXAAVhkMemoryAllocator@@ABQAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkArrayUtil@@SAXPAPAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@HU?$hkTraitBool@$00@@@Z");
//};

//public: struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAAAPAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@XZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::_pushBack(class hkMemoryAllocator &, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXAAVhkMemoryAllocator@@ABQAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkArrayUtil@@SAXPAPAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@HU?$hkTraitBool@$00@@@Z");
//};

//public: void hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator> >::release(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle *)
//{
//    mangled_ppc("?release@?$List@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UItem@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAXPAUTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@Z");
//};

//private: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Item * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::allocateItem(void)
//{
//    mangled_ppc("?allocateItem@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@AAAPAUItem@12@XZ");
//};

//private: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::releasePool(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *) const
//{
//    mangled_ppc("?releasePool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@ABAXPAUPool@12@@Z");
//};

//public: void hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpAbstractMeshDefinitions::List<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorBase::VertexBase, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::Item, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator> >::release(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *)
//{
//    mangled_ppc("?release@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UItem@?$List@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertexBase@hkgpTriangulatorBase@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@U?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkgpAbstractMeshDefinitions@@QAAXPAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@Z");
//};

//private: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Item * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::allocateItem(void)
//{
//    mangled_ppc("?allocateItem@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@AAAPAUItem@12@XZ");
//};

//private: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::releasePool(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *) const
//{
//    mangled_ppc("?releasePool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@ABAXPAUPool@12@@Z");
//};

//public: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAAAPAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@H@Z");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXXZ");
//};

//public: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAAAPAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@H@Z");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXXZ");
//};

//public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::flushConform(void)
//{
//    mangled_ppc("?flushConform@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAXXZ");
//};

//public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::orientation(int, int, int, int, int, int)
//{
//    mangled_ppc("?orientation@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAHHHHHHH@Z");
//};

//public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::rootIndex(int, int)
//{
//    mangled_ppc("?rootIndex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAHHH@Z");
//};

//public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::backupBothEdgeData(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataValue *const)
//{
//    mangled_ppc("?backupBothEdgeData@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAXUEdge@1@QAUEdgeDataValue@1@@Z");
//};

//public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::restoreBothEdgeData(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataValue const *const)
//{
//    mangled_ppc("?restoreBothEdgeData@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAXUEdge@1@QBUEdgeDataValue@1@@Z");
//};

//public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::createEdgeDataHashTable(void)
//{
//    mangled_ppc("?createEdgeDataHashTable@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAXXZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge hkgpTopology::Edge<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *>::flip(void) const
//{
//    mangled_ppc("?flip@?$Edge@U0?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UVertex@1@UTriangle@1@PAU21@@hkgpTopology@@QBA?AUEdge@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox::EdgeDataBox(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &)
//{
//    mangled_ppc("??0EdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@ABUEdge@1@@Z");
//};

//public: unsigned long hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox::getHash(void) const
//{
//    mangled_ppc("?getHash@EdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBAKXZ");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox * hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::find(int, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &)
//{
//    mangled_ppc("?find@?$HashTable@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAPAUEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@HABU34@@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox * hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::insert(int, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &)
//{
//    mangled_ppc("?insert@?$HashTable@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAPAUEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@HABU34@@Z");
//};

//private: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Item * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::allocateItem(void)
//{
//    mangled_ppc("?allocateItem@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@AAAPAUItem@12@XZ");
//};

//public: hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::~hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??1?$hkArrayBase@V?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@@@QAA@XZ");
//};

//public: void hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@V?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: int hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QBAHXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkArrayUtil@@SAXPAPAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@HU?$hkTraitBool@$00@@@Z");
//};

//public: unsigned long const & hkArrayBase<unsigned long>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@K@@QBAABKH@Z");
//};

//public: static void hkArrayUtil::destruct<class hkgpMesh *>(class hkgpMesh **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkgpMesh@@@hkArrayUtil@@SAXPAPAVhkgpMesh@@HU?$hkTraitBool@$00@@@Z");
//};

//public: hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::~hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkgpMesh::SingleEdge>::hkArrayBase<struct hkgpMesh::SingleEdge>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@USingleEdge@hkgpMesh@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkgpMesh::SingleEdge>::~hkArrayBase<struct hkgpMesh::SingleEdge>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@USingleEdge@hkgpMesh@@@@QAA@XZ");
//};

//public: hkInplaceArray<unsigned long, 4, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned long, 4, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@K$03UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> & hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>::operator=(struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@QAAAAU01@ABU01@@Z");
//};

//public: unsigned long hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex::pack(void) const
//{
//    mangled_ppc("?pack@Vertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBAKXZ");
//};

//public: hkArray<unsigned long, struct hkContainerHeapAllocator>::hkArray<unsigned long, struct hkContainerHeapAllocator>(unsigned long *, int, int)
//{
//    mangled_ppc("??0?$hkArray@KUhkContainerHeapAllocator@@@@QAA@PAKHH@Z");
//};

//public: void hkArray<struct hkgpMesh::SingleEdge, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@USingleEdge@hkgpMesh@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: static void * hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$HashTable@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@SAPAXIPAX@Z");
//};

//public: hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$HashTable@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAA@H@Z");
//};

//public: class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> & hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::lookupBucket(int)
//{
//    mangled_ppc("?lookupBucket@?$HashTable@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAAAV?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@H@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox & hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@QAAAAUEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@XZ");
//};

//public: hkArray<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::hkArray<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@V?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkArrayUtil@@SAXPAPAUPool@?$PoolAllocator@UVertex@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@HABQAU123@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkGeometryProcessing::PoolAllocator<struct hkgpMeshBase::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkArrayUtil@@SAXPAPAUPool@?$PoolAllocator@UTriangle@hkgpMeshBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@HABQAU123@U?$hkTraitBool@$00@@@Z");
//};

//public: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::release(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle *)
//{
//    mangled_ppc("?release@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXPAUTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@Z");
//};

//private: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::allocateNewPool(void)
//{
//    mangled_ppc("?allocateNewPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@AAAPAUPool@12@XZ");
//};

//public: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::release(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex *)
//{
//    mangled_ppc("?release@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXPAUVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@Z");
//};

//private: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::allocateNewPool(void)
//{
//    mangled_ppc("?allocateNewPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@AAAPAUPool@12@XZ");
//};

//public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkArrayUtil@@SAXPAPAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkArrayUtil@@SAXPAPAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::isConform(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &)
//{
//    mangled_ppc("?isConform@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAHABUEdge@1@@Z");
//};

//public: struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> const * hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::getEdgeData(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &) const
//{
//    mangled_ppc("?getEdgeData@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBAPBU?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@ABUEdge@1@@Z");
//};

//public: void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::clearEdgeData(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Edge const &)
//{
//    mangled_ppc("?clearEdgeData@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAXABUEdge@1@@Z");
//};

//public: void hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::setBucketsCount(int)
//{
//    mangled_ppc("?setBucketsCount@?$HashTable@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXH@Z");
//};

//public: static unsigned long hkGeometryProcessing::makeHash<unsigned long, unsigned long>(unsigned long, unsigned long)
//{
//    mangled_ppc("??$makeHash@KK@hkGeometryProcessing@@SAKKK@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox & hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QAAAAUEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@H@Z");
//};

//public: int hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::indexOf(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QBAHABUEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@HH@Z");
//};

//public: struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox & hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QAAAAUEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@AAVhkMemoryAllocator@@@Z");
//};

//private: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::allocateNewPool(void)
//{
//    mangled_ppc("?allocateNewPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@AAAPAUPool@12@XZ");
//};

//public: hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >(void)
//{
//    mangled_ppc("??0?$hkArrayBase@V?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@@@QAA@XZ");
//};

//public: class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> & hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@V?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@@@QAAAAV?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@H@Z");
//};

//public: int hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@V?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@@@QBAHXZ");
//};

//public: int hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@V?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@V?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@@@QAAXXZ");
//};

//public: hkArrayBase<unsigned long>::hkArrayBase<unsigned long>(unsigned long *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@K@@QAA@PAKHH@Z");
//};

//public: void hkArrayBase<struct hkgpMesh::SingleEdge>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@USingleEdge@hkgpMesh@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: class hkArray<unsigned long, struct hkContainerHeapAllocator> & hkInplaceArray<unsigned long, 4, struct hkContainerHeapAllocator>::operator=(class hkInplaceArray<unsigned long, 4, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkInplaceArray@K$03UhkContainerHeapAllocator@@@@QAAAAV?$hkArray@KUhkContainerHeapAllocator@@@@ABV0@@Z");
//};

//public: void * hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAAPAXI@Z");
//};

//public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::pushBack(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAAXABQAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@Z");
//};

//public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::pushBack(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAAXABQAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@Z");
//};

//public: void hkArray<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *, struct hkContainerHeapAllocator>::pushBack(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@UhkContainerHeapAllocator@@@@QAAXABQAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@Z");
//};

//public: static void hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle::operator delete(void *)
//{
//    mangled_ppc("??3Triangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAXPAX@Z");
//};

//public: void hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::clear(void)
//{
//    mangled_ppc("?clear@?$HashTable@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXXZ");
//};

//public: void hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::remove(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &)
//{
//    mangled_ppc("?remove@?$HashTable@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXABUEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@Z");
//};

//public: void hkArray<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@V?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: static void * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Pool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@SAPAXIPAX@Z");
//};

//public: static void * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Pool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@SAPAXIPAX@Z");
//};

//public: static void * hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Pool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@SAPAXIPAX@Z");
//};

//public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::isConform(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex const *)
//{
//    mangled_ppc("?isConform@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAHPBUVertex@1@000@Z");
//};

//public: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAAAPAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@XZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>::_pushBack(class hkMemoryAllocator &, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXAAVhkMemoryAllocator@@ABQAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@Z");
//};

//public: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAAAPAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@XZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>::_pushBack(class hkMemoryAllocator &, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXAAVhkMemoryAllocator@@ABQAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@Z");
//};

//public: void hkGeometryProcessing::HashTable<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::remove(int, struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &)
//{
//    mangled_ppc("?remove@?$HashTable@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXHABUEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@Z");
//};

//public: void hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::release(struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator> *)
//{
//    mangled_ppc("?release@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@QAAXPAU?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@@Z");
//};

//public: int hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@V?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::construct<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@hkArrayUtil@@SAXPAUEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *& hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAAAPAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@XZ");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::_pushBack(class hkMemoryAllocator &, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXAAVhkMemoryAllocator@@ABQAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >(class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@V?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@@hkArrayUtil@@SAXPAV?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: class hkArray<unsigned long, struct hkContainerHeapAllocator> & hkArray<unsigned long, struct hkContainerHeapAllocator>::operator=(class hkArray<unsigned long, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@KUhkContainerHeapAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//public: int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox::operator==(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox const &) const
//{
//    mangled_ppc("??8EdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QBAHABU01@@Z");
//};

//public: void * hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@QAAPAXI@Z");
//};

//public: void * hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@QAAPAXI@Z");
//};

//public: static void hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>::operator delete(void *)
//{
//    mangled_ppc("??3?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@SAXPAX@Z");
//};

//public: hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox::EdgeDataBox(void)
//{
//    mangled_ppc("??0EdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@QAA@XZ");
//};

//public: static void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkArrayBase@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@SAXPAX@Z");
//};

//public: static int hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::incircle(int, int, int, int, int, int, int, int)
//{
//    mangled_ppc("?incircle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@SAHHHHHHHHH@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Triangle, 32, struct hkContainerHeapAllocator>::Pool *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkArrayUtil@@SAXPAPAUPool@?$PoolAllocator@UTriangle@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@HABQAU123@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::Vertex, 32, struct hkContainerHeapAllocator>::Pool *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkArrayUtil@@SAXPAPAUPool@?$PoolAllocator@UVertex@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@HABQAU123@U?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@@QAAXH@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>(struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@hkArrayUtil@@SAXPAUEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@V?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::construct<class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> >(class hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator> *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@V?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@@hkArrayUtil@@SAXPAV?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *>(struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool **, int, struct hkGeometryProcessing::PoolAllocator<struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, 32, struct hkContainerHeapAllocator>::Pool *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@@hkArrayUtil@@SAXPAPAUPool@?$PoolAllocator@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@hkgpTriangulatorBase@@$0CA@UhkContainerHeapAllocator@@@hkGeometryProcessing@@HABQAU123@U?$hkTraitBool@$00@@@Z");
//};

//public: hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::~hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//protected: class hkArrayBase<unsigned long> & hkArrayBase<unsigned long>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<unsigned long> const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@K@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$00@@@Z");
//};

//public: hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::~hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkgpTriangulatorType<struct hkgpTriangulatorBase::VertexBase, struct hkgpTriangulatorBase::TriangleBase, struct hkgpTriangulatorBase::DefaultEdgeData<struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator, -1>::EdgeDataBox>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UEdgeDataBox@?$hkgpTriangulatorType@UVertexBase@hkgpTriangulatorBase@@UTriangleBase@2@U?$DefaultEdgeData@UhkContainerHeapAllocator@@@2@UhkContainerHeapAllocator@@$0?0@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayBase<unsigned long>::copy(unsigned long *, unsigned long const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@K@@SAXPAKPBKH@Z");
//};

