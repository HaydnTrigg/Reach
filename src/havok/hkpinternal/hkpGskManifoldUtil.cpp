/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// hkGskManifold_removePoint;
// void hkGskManifold_verify(struct hkpGskManifold const &);
// void hkGskManifold_garbageCollect(struct hkpGskManifold &);
// hkGskManifold_verifyAndGetPoints;
// int hkGskManifold_convertFeature(struct hkpGskManifoldWork const &, struct hkpGskManifold::ContactPoint const &, struct hkGskManifoldConvertOut &);
// int hkGskManifold_convertPointPoint(struct hkpGskManifoldWork const &, struct hkpGskManifold::ContactPoint const &, struct hkGskManifoldConvertOut &);
// int hkGskManifold_convertPointEdge(struct hkpGskManifoldWork const &, struct hkpGskManifold::ContactPoint const &, struct hkGskManifoldConvertOut &);
// int hkGskManifold_convertEdgePoint(struct hkpGskManifoldWork const &, struct hkpGskManifold::ContactPoint const &, struct hkGskManifoldConvertOut &);
// int hkGskManifold_convertPointFace(struct hkpGskManifoldWork const &, struct hkpGskManifold::ContactPoint const &, struct hkGskManifoldConvertOut &);
// int hkGskManifold_convertFacePoint(struct hkpGskManifoldWork const &, struct hkpGskManifold::ContactPoint const &, struct hkGskManifoldConvertOut &);
// int hkGskManifold_convertEdgeEdge(struct hkpGskManifoldWork const &, struct hkpGskManifold::ContactPoint const &, struct hkGskManifoldConvertOut &);
// hkGskManifold_doesPointExistAndResort;
// hkGskManifold_addPoint;
// int hkGskManifold_findRedundant5thPoint(struct hkpProcessCdPoint *);
// hkGskManifold_cleanup;
// void hkGskManifold_downshiftVertices(struct hkpGskManifold &, int, int);
// public: class hkVector4const & hkpGskManifoldWork::getVertexA(unsigned int) const;
// public: class hkVector4const & hkpGskManifoldWork::getVertexB(unsigned int) const;
// void hkVector4Util::dot3_1vs4(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4&);
// void hkVector4Util::dot3_2vs2(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4&);
// public: unsigned short hkpGskManifold::getVertexId(struct hkpGskManifold::ContactPoint const &, int) const;
// public: void hkpGskManifold::ContactPoint::zeroVerts(void);
// void hkGskManifold_upShiftVertices(struct hkpGskManifold &, int, int);
// class hkpCdVertex const * hkAddByteOffsetConst<class hkpCdVertex>(class hkpCdVertex const *, long);
// void hkAlgorithm::swap<struct hkpGskManifold::ContactPoint>(struct hkpGskManifold::ContactPoint &, struct hkpGskManifold::ContactPoint &);

//hkGskManifold_removePoint
//{
//    mangled_ppc("hkGskManifold_removePoint");
//};

//void hkGskManifold_verify(struct hkpGskManifold const &)
//{
//    mangled_ppc("?hkGskManifold_verify@@YAXABUhkpGskManifold@@@Z");
//};

//void hkGskManifold_garbageCollect(struct hkpGskManifold &)
//{
//    mangled_ppc("?hkGskManifold_garbageCollect@@YAXAAUhkpGskManifold@@@Z");
//};

//hkGskManifold_verifyAndGetPoints
//{
//    mangled_ppc("hkGskManifold_verifyAndGetPoints");
//};

//int hkGskManifold_convertFeature(struct hkpGskManifoldWork const &, struct hkpGskManifold::ContactPoint const &, struct hkGskManifoldConvertOut &)
//{
//    mangled_ppc("?hkGskManifold_convertFeature@@YAHABUhkpGskManifoldWork@@ABUContactPoint@hkpGskManifold@@AAUhkGskManifoldConvertOut@@@Z");
//};

//int hkGskManifold_convertPointPoint(struct hkpGskManifoldWork const &, struct hkpGskManifold::ContactPoint const &, struct hkGskManifoldConvertOut &)
//{
//    mangled_ppc("?hkGskManifold_convertPointPoint@@YAHABUhkpGskManifoldWork@@ABUContactPoint@hkpGskManifold@@AAUhkGskManifoldConvertOut@@@Z");
//};

//int hkGskManifold_convertPointEdge(struct hkpGskManifoldWork const &, struct hkpGskManifold::ContactPoint const &, struct hkGskManifoldConvertOut &)
//{
//    mangled_ppc("?hkGskManifold_convertPointEdge@@YAHABUhkpGskManifoldWork@@ABUContactPoint@hkpGskManifold@@AAUhkGskManifoldConvertOut@@@Z");
//};

//int hkGskManifold_convertEdgePoint(struct hkpGskManifoldWork const &, struct hkpGskManifold::ContactPoint const &, struct hkGskManifoldConvertOut &)
//{
//    mangled_ppc("?hkGskManifold_convertEdgePoint@@YAHABUhkpGskManifoldWork@@ABUContactPoint@hkpGskManifold@@AAUhkGskManifoldConvertOut@@@Z");
//};

//int hkGskManifold_convertPointFace(struct hkpGskManifoldWork const &, struct hkpGskManifold::ContactPoint const &, struct hkGskManifoldConvertOut &)
//{
//    mangled_ppc("?hkGskManifold_convertPointFace@@YAHABUhkpGskManifoldWork@@ABUContactPoint@hkpGskManifold@@AAUhkGskManifoldConvertOut@@@Z");
//};

//int hkGskManifold_convertFacePoint(struct hkpGskManifoldWork const &, struct hkpGskManifold::ContactPoint const &, struct hkGskManifoldConvertOut &)
//{
//    mangled_ppc("?hkGskManifold_convertFacePoint@@YAHABUhkpGskManifoldWork@@ABUContactPoint@hkpGskManifold@@AAUhkGskManifoldConvertOut@@@Z");
//};

//int hkGskManifold_convertEdgeEdge(struct hkpGskManifoldWork const &, struct hkpGskManifold::ContactPoint const &, struct hkGskManifoldConvertOut &)
//{
//    mangled_ppc("?hkGskManifold_convertEdgeEdge@@YAHABUhkpGskManifoldWork@@ABUContactPoint@hkpGskManifold@@AAUhkGskManifoldConvertOut@@@Z");
//};

//hkGskManifold_doesPointExistAndResort
//{
//    mangled_ppc("hkGskManifold_doesPointExistAndResort");
//};

//hkGskManifold_addPoint
//{
//    mangled_ppc("hkGskManifold_addPoint");
//};

//int hkGskManifold_findRedundant5thPoint(struct hkpProcessCdPoint *)
//{
//    mangled_ppc("?hkGskManifold_findRedundant5thPoint@@YAHPAUhkpProcessCdPoint@@@Z");
//};

//hkGskManifold_cleanup
//{
//    mangled_ppc("hkGskManifold_cleanup");
//};

//void hkGskManifold_downshiftVertices(struct hkpGskManifold &, int, int)
//{
//    mangled_ppc("?hkGskManifold_downshiftVertices@@YAXAAUhkpGskManifold@@HH@Z");
//};

//public: class hkVector4const & hkpGskManifoldWork::getVertexA(unsigned int) const
//{
//    mangled_ppc("?getVertexA@hkpGskManifoldWork@@QBAABVhkVector4@@I@Z");
//};

//public: class hkVector4const & hkpGskManifoldWork::getVertexB(unsigned int) const
//{
//    mangled_ppc("?getVertexB@hkpGskManifoldWork@@QBAABVhkVector4@@I@Z");
//};

//void hkVector4Util::dot3_1vs4(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4&)
//{
//    mangled_ppc("?dot3_1vs4@hkVector4Util@@YAXABVhkVector4@@0000AAV2@@Z");
//};

//void hkVector4Util::dot3_2vs2(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4&)
//{
//    mangled_ppc("?dot3_2vs2@hkVector4Util@@YAXABVhkVector4@@000AAV2@@Z");
//};

//public: unsigned short hkpGskManifold::getVertexId(struct hkpGskManifold::ContactPoint const &, int) const
//{
//    mangled_ppc("?getVertexId@hkpGskManifold@@QBAGABUContactPoint@1@H@Z");
//};

//public: void hkpGskManifold::ContactPoint::zeroVerts(void)
//{
//    mangled_ppc("?zeroVerts@ContactPoint@hkpGskManifold@@QAAXXZ");
//};

//void hkGskManifold_upShiftVertices(struct hkpGskManifold &, int, int)
//{
//    mangled_ppc("?hkGskManifold_upShiftVertices@@YAXAAUhkpGskManifold@@HH@Z");
//};

//class hkpCdVertex const * hkAddByteOffsetConst<class hkpCdVertex>(class hkpCdVertex const *, long)
//{
//    mangled_ppc("??$hkAddByteOffsetConst@VhkpCdVertex@@@@YAPBVhkpCdVertex@@PBV0@J@Z");
//};

//void hkAlgorithm::swap<struct hkpGskManifold::ContactPoint>(struct hkpGskManifold::ContactPoint &, struct hkpGskManifold::ContactPoint &)
//{
//    mangled_ppc("??$swap@UContactPoint@hkpGskManifold@@@hkAlgorithm@@YAXAAUContactPoint@hkpGskManifold@@0@Z");
//};

