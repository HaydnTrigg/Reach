/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void hkpConvexPenetrationUtil::findBestProjection(class hkVector4const &, class hkVector4const &, struct hkpWingedEdge::Vertex &, float &);
// public: static void hkpConvexPenetrationUtil::codeBegin(void);
// public: void hkpConvexPenetrationUtil::getPointForSimplex(class hkVector4const &, struct hkpWingedEdge::Vertex &);
// public: void hkpConvexPenetrationUtil::addPointToSimplex(struct hkpWingedEdge::Vertex const &);
// public: enum hkResult hkpConvexPenetrationUtil::tryToExpandPolytope(class hkpWingedEdge &, struct hkpWingedEdge::Triangle *, struct hkpWingedEdge::Vertex *, enum hkpGskStatus &);
// public: void hkpConvexPenetrationUtil::convertResultToFeature(class hkpWingedEdge &, struct hkpWingedEdge::Triangle *, struct hkpGskOut &);
// public: enum hkResult hkpConvexPenetrationUtil::builtTetrahedron(struct hkpGskOut &, enum hkpGskStatus &);
// public: enum hkpGskStatus hkpConvexPenetrationUtil::calculatePenetrationDepth(struct hkpGskOut &);
// void randomVector(int, float, float, class hkVector4&);
// float rand01(int);
// public: static void hkpConvexPenetrationUtil::codeEnd(void);
// enum hkpGskStatus hkCalculatePenetrationDepth(class hkpConvexShape const *, class hkpConvexShape const *, class hkTransform const &, float, class hkpCdVertex *, class hkpCdVertex *, class hkVector4*, int, struct hkpGskOut &);
// enum hkResult hkCalcMultiPenetrationDepth(class hkTransform const &, class hkpConvexShape const *, class hkpConvexShape const **, int, class hkTransform const &, class hkContactPoint **);
// public: hkpWingedEdge::Vertex::Vertex(void);
// public: struct hkpWingedEdge::Vertex & hkpWingedEdge::Vertex::operator=(struct hkpWingedEdge::Vertex const &);
// public: enum hkpWingedEdge::WingedEdgeStatus hkpWingedEdge::findVisibilityBoundaryEdges(struct hkpWingedEdge::Triangle *, class hkVector4const &, class hkPadSpu<int> &, class hkPadSpu<struct hkpWingedEdge::Edge *> &);
// public: enum hkpWingedEdge::Triangle::TriangleState hkpWingedEdge::Triangle::calcStateAndUpdateTolerance(class hkVector4const &, class hkPadSpu<float> &, class hkPadSpu<float> &) const;
// public: float hkpWingedEdge::Triangle::calculateDistanceToTriangle(class hkVector4const &) const;
// public: void hkpWingedEdge::initialiseVibisilityTolerance(void);
// public: int hkpWingedEdge::numFreeTriangles(void);
// protected: class hkBool hkpConvexPenetrationUtil::case0To1(struct hkpGskOut &);
// protected: void hkpConvexPenetrationUtil::case1To2(void);
// protected: void hkpConvexPenetrationUtil::case2To3(void);
// protected: enum hkResult hkpConvexPenetrationUtil::case3To4(class hkVector4const &);
// public: struct hkpWingedEdge::Triangle * hkpWingedEdge::findTriangleOnNearestPlane(void);
// public: class hkBool hkpWingedEdge::hasFreeVertex(void);
// public: void hkpWingedEdge::init(class hkpCdVertex const *, class hkpCdVertex const *, class hkVector4const *);
// public: struct hkpWingedEdge::Vertex * hkpWingedEdge::allocateVertex(void);
// public: hkpWingedEdge::hkpWingedEdge(void);
// public: void hkpConvexPenetrationUtil::init(class hkpConvexShape const *, class hkpConvexShape const *, class hkTransform const &, float, class hkpCdVertex *, class hkpCdVertex *, class hkVector4*, int);
// public: hkpConvexPenetrationUtil::hkpConvexPenetrationUtil(void);
// public: hkPadSpu<struct hkpWingedEdge::Edge *>::hkPadSpu<struct hkpWingedEdge::Edge *>(void);
// public: void hkPadSpu<struct hkpWingedEdge::Edge *>::operator=(struct hkpWingedEdge::Edge *);
// public: struct hkpWingedEdge::Edge * hkPadSpu<struct hkpWingedEdge::Edge *>::operator struct hkpWingedEdge::Edge *(void) const;
// public: hkPadSpu<class hkpCdVertex *>::hkPadSpu<class hkpCdVertex *>(void);
// public: void hkPadSpu<class hkpCdVertex *>::operator=(class hkpCdVertex *);
// public: class hkpCdVertex * hkPadSpu<class hkpCdVertex *>::operator class hkpCdVertex *(void) const;
// public: struct hkpWingedEdge::Edge * hkPadSpu<struct hkpWingedEdge::Edge *>::val(void) const;
// public: class hkpCdVertex * hkPadSpu<class hkpCdVertex *>::val(void) const;
// public: struct hkCalcMultiPenetrationDepthWork & hkFixedArray<struct hkCalcMultiPenetrationDepthWork>::operator[](int);
// public: hkLocalBuffer<struct hkCalcMultiPenetrationDepthWork>::hkLocalBuffer<struct hkCalcMultiPenetrationDepthWork>(int, char const *);
// public: hkLocalBuffer<struct hkCalcMultiPenetrationDepthWork>::~hkLocalBuffer<struct hkCalcMultiPenetrationDepthWork>(void);
// protected: hkFixedArray<struct hkCalcMultiPenetrationDepthWork>::hkFixedArray<struct hkCalcMultiPenetrationDepthWork>(void);
// public: void hkPadSpu<struct hkCalcMultiPenetrationDepthWork *>::operator=(struct hkCalcMultiPenetrationDepthWork *);
// public: struct hkCalcMultiPenetrationDepthWork * hkPadSpu<struct hkCalcMultiPenetrationDepthWork *>::val(void) const;
// public: struct hkCalcMultiPenetrationDepthWork * hkPadSpu<struct hkCalcMultiPenetrationDepthWork *>::operator struct hkCalcMultiPenetrationDepthWork *(void) const;
// public: hkPadSpu<struct hkCalcMultiPenetrationDepthWork *>::hkPadSpu<struct hkCalcMultiPenetrationDepthWork *>(void);
// struct hkCalcMultiPenetrationDepthWork * hkAllocateStack<struct hkCalcMultiPenetrationDepthWork>(int, char const *);
// void hkDeallocateStack<struct hkCalcMultiPenetrationDepthWork>(struct hkCalcMultiPenetrationDepthWork *);

//public: void hkpConvexPenetrationUtil::findBestProjection(class hkVector4const &, class hkVector4const &, struct hkpWingedEdge::Vertex &, float &)
//{
//    mangled_ppc("?findBestProjection@hkpConvexPenetrationUtil@@QAAXABVhkVector4@@0AAUVertex@hkpWingedEdge@@AAM@Z");
//};

//public: static void hkpConvexPenetrationUtil::codeBegin(void)
//{
//    mangled_ppc("?codeBegin@hkpConvexPenetrationUtil@@SAXXZ");
//};

//public: void hkpConvexPenetrationUtil::getPointForSimplex(class hkVector4const &, struct hkpWingedEdge::Vertex &)
//{
//    mangled_ppc("?getPointForSimplex@hkpConvexPenetrationUtil@@QAAXABVhkVector4@@AAUVertex@hkpWingedEdge@@@Z");
//};

//public: void hkpConvexPenetrationUtil::addPointToSimplex(struct hkpWingedEdge::Vertex const &)
//{
//    mangled_ppc("?addPointToSimplex@hkpConvexPenetrationUtil@@QAAXABUVertex@hkpWingedEdge@@@Z");
//};

//public: enum hkResult hkpConvexPenetrationUtil::tryToExpandPolytope(class hkpWingedEdge &, struct hkpWingedEdge::Triangle *, struct hkpWingedEdge::Vertex *, enum hkpGskStatus &)
//{
//    mangled_ppc("?tryToExpandPolytope@hkpConvexPenetrationUtil@@QAA?AW4hkResult@@AAVhkpWingedEdge@@PAUTriangle@3@PAUVertex@3@AAW4hkpGskStatus@@@Z");
//};

//public: void hkpConvexPenetrationUtil::convertResultToFeature(class hkpWingedEdge &, struct hkpWingedEdge::Triangle *, struct hkpGskOut &)
//{
//    mangled_ppc("?convertResultToFeature@hkpConvexPenetrationUtil@@QAAXAAVhkpWingedEdge@@PAUTriangle@2@AAUhkpGskOut@@@Z");
//};

//public: enum hkResult hkpConvexPenetrationUtil::builtTetrahedron(struct hkpGskOut &, enum hkpGskStatus &)
//{
//    mangled_ppc("?builtTetrahedron@hkpConvexPenetrationUtil@@QAA?AW4hkResult@@AAUhkpGskOut@@AAW4hkpGskStatus@@@Z");
//};

//public: enum hkpGskStatus hkpConvexPenetrationUtil::calculatePenetrationDepth(struct hkpGskOut &)
//{
//    mangled_ppc("?calculatePenetrationDepth@hkpConvexPenetrationUtil@@QAA?AW4hkpGskStatus@@AAUhkpGskOut@@@Z");
//};

//void randomVector(int, float, float, class hkVector4&)
//{
//    mangled_ppc("?randomVector@@YAXHMMAAVhkVector4@@@Z");
//};

//float rand01(int)
//{
//    mangled_ppc("?rand01@@YAMH@Z");
//};

//public: static void hkpConvexPenetrationUtil::codeEnd(void)
//{
//    mangled_ppc("?codeEnd@hkpConvexPenetrationUtil@@SAXXZ");
//};

//enum hkpGskStatus hkCalculatePenetrationDepth(class hkpConvexShape const *, class hkpConvexShape const *, class hkTransform const &, float, class hkpCdVertex *, class hkpCdVertex *, class hkVector4*, int, struct hkpGskOut &)
//{
//    mangled_ppc("?hkCalculatePenetrationDepth@@YA?AW4hkpGskStatus@@PBVhkpConvexShape@@0ABVhkTransform@@MPAVhkpCdVertex@@2PAVhkVector4@@HAAUhkpGskOut@@@Z");
//};

//enum hkResult hkCalcMultiPenetrationDepth(class hkTransform const &, class hkpConvexShape const *, class hkpConvexShape const **, int, class hkTransform const &, class hkContactPoint **)
//{
//    mangled_ppc("?hkCalcMultiPenetrationDepth@@YA?AW4hkResult@@ABVhkTransform@@PBVhkpConvexShape@@PAPBV3@H0PAPAVhkContactPoint@@@Z");
//};

//public: hkpWingedEdge::Vertex::Vertex(void)
//{
//    mangled_ppc("??0Vertex@hkpWingedEdge@@QAA@XZ");
//};

//public: struct hkpWingedEdge::Vertex & hkpWingedEdge::Vertex::operator=(struct hkpWingedEdge::Vertex const &)
//{
//    mangled_ppc("??4Vertex@hkpWingedEdge@@QAAAAU01@ABU01@@Z");
//};

//public: enum hkpWingedEdge::WingedEdgeStatus hkpWingedEdge::findVisibilityBoundaryEdges(struct hkpWingedEdge::Triangle *, class hkVector4const &, class hkPadSpu<int> &, class hkPadSpu<struct hkpWingedEdge::Edge *> &)
//{
//    mangled_ppc("?findVisibilityBoundaryEdges@hkpWingedEdge@@QAA?AW4WingedEdgeStatus@1@PAUTriangle@1@ABVhkVector4@@AAV?$hkPadSpu@H@@AAV?$hkPadSpu@PAUEdge@hkpWingedEdge@@@@@Z");
//};

//public: enum hkpWingedEdge::Triangle::TriangleState hkpWingedEdge::Triangle::calcStateAndUpdateTolerance(class hkVector4const &, class hkPadSpu<float> &, class hkPadSpu<float> &) const
//{
//    mangled_ppc("?calcStateAndUpdateTolerance@Triangle@hkpWingedEdge@@QBA?AW4TriangleState@12@ABVhkVector4@@AAV?$hkPadSpu@M@@1@Z");
//};

//public: float hkpWingedEdge::Triangle::calculateDistanceToTriangle(class hkVector4const &) const
//{
//    mangled_ppc("?calculateDistanceToTriangle@Triangle@hkpWingedEdge@@QBAMABVhkVector4@@@Z");
//};

//public: void hkpWingedEdge::initialiseVibisilityTolerance(void)
//{
//    mangled_ppc("?initialiseVibisilityTolerance@hkpWingedEdge@@QAAXXZ");
//};

//public: int hkpWingedEdge::numFreeTriangles(void)
//{
//    mangled_ppc("?numFreeTriangles@hkpWingedEdge@@QAAHXZ");
//};

//protected: class hkBool hkpConvexPenetrationUtil::case0To1(struct hkpGskOut &)
//{
//    mangled_ppc("?case0To1@hkpConvexPenetrationUtil@@IAA?AVhkBool@@AAUhkpGskOut@@@Z");
//};

//protected: void hkpConvexPenetrationUtil::case1To2(void)
//{
//    mangled_ppc("?case1To2@hkpConvexPenetrationUtil@@IAAXXZ");
//};

//protected: void hkpConvexPenetrationUtil::case2To3(void)
//{
//    mangled_ppc("?case2To3@hkpConvexPenetrationUtil@@IAAXXZ");
//};

//protected: enum hkResult hkpConvexPenetrationUtil::case3To4(class hkVector4const &)
//{
//    mangled_ppc("?case3To4@hkpConvexPenetrationUtil@@IAA?AW4hkResult@@ABVhkVector4@@@Z");
//};

//public: struct hkpWingedEdge::Triangle * hkpWingedEdge::findTriangleOnNearestPlane(void)
//{
//    mangled_ppc("?findTriangleOnNearestPlane@hkpWingedEdge@@QAAPAUTriangle@1@XZ");
//};

//public: class hkBool hkpWingedEdge::hasFreeVertex(void)
//{
//    mangled_ppc("?hasFreeVertex@hkpWingedEdge@@QAA?AVhkBool@@XZ");
//};

//public: void hkpWingedEdge::init(class hkpCdVertex const *, class hkpCdVertex const *, class hkVector4const *)
//{
//    mangled_ppc("?init@hkpWingedEdge@@QAAXPBVhkpCdVertex@@0PBVhkVector4@@@Z");
//};

//public: struct hkpWingedEdge::Vertex * hkpWingedEdge::allocateVertex(void)
//{
//    mangled_ppc("?allocateVertex@hkpWingedEdge@@QAAPAUVertex@1@XZ");
//};

//public: hkpWingedEdge::hkpWingedEdge(void)
//{
//    mangled_ppc("??0hkpWingedEdge@@QAA@XZ");
//};

//public: void hkpConvexPenetrationUtil::init(class hkpConvexShape const *, class hkpConvexShape const *, class hkTransform const &, float, class hkpCdVertex *, class hkpCdVertex *, class hkVector4*, int)
//{
//    mangled_ppc("?init@hkpConvexPenetrationUtil@@QAAXPBVhkpConvexShape@@0ABVhkTransform@@MPAVhkpCdVertex@@2PAVhkVector4@@H@Z");
//};

//public: hkpConvexPenetrationUtil::hkpConvexPenetrationUtil(void)
//{
//    mangled_ppc("??0hkpConvexPenetrationUtil@@QAA@XZ");
//};

//public: hkPadSpu<struct hkpWingedEdge::Edge *>::hkPadSpu<struct hkpWingedEdge::Edge *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAUEdge@hkpWingedEdge@@@@QAA@XZ");
//};

//public: void hkPadSpu<struct hkpWingedEdge::Edge *>::operator=(struct hkpWingedEdge::Edge *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAUEdge@hkpWingedEdge@@@@QAAXPAUEdge@hkpWingedEdge@@@Z");
//};

//public: struct hkpWingedEdge::Edge * hkPadSpu<struct hkpWingedEdge::Edge *>::operator struct hkpWingedEdge::Edge *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAUEdge@hkpWingedEdge@@@@QBAPAUEdge@hkpWingedEdge@@XZ");
//};

//public: hkPadSpu<class hkpCdVertex *>::hkPadSpu<class hkpCdVertex *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAVhkpCdVertex@@@@QAA@XZ");
//};

//public: void hkPadSpu<class hkpCdVertex *>::operator=(class hkpCdVertex *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAVhkpCdVertex@@@@QAAXPAVhkpCdVertex@@@Z");
//};

//public: class hkpCdVertex * hkPadSpu<class hkpCdVertex *>::operator class hkpCdVertex *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAVhkpCdVertex@@@@QBAPAVhkpCdVertex@@XZ");
//};

//public: struct hkpWingedEdge::Edge * hkPadSpu<struct hkpWingedEdge::Edge *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAUEdge@hkpWingedEdge@@@@QBAPAUEdge@hkpWingedEdge@@XZ");
//};

//public: class hkpCdVertex * hkPadSpu<class hkpCdVertex *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAVhkpCdVertex@@@@QBAPAVhkpCdVertex@@XZ");
//};

//public: struct hkCalcMultiPenetrationDepthWork & hkFixedArray<struct hkCalcMultiPenetrationDepthWork>::operator[](int)
//{
//    mangled_ppc("??A?$hkFixedArray@UhkCalcMultiPenetrationDepthWork@@@@QAAAAUhkCalcMultiPenetrationDepthWork@@H@Z");
//};

//public: hkLocalBuffer<struct hkCalcMultiPenetrationDepthWork>::hkLocalBuffer<struct hkCalcMultiPenetrationDepthWork>(int, char const *)
//{
//    mangled_ppc("??0?$hkLocalBuffer@UhkCalcMultiPenetrationDepthWork@@@@QAA@HPBD@Z");
//};

//public: hkLocalBuffer<struct hkCalcMultiPenetrationDepthWork>::~hkLocalBuffer<struct hkCalcMultiPenetrationDepthWork>(void)
//{
//    mangled_ppc("??1?$hkLocalBuffer@UhkCalcMultiPenetrationDepthWork@@@@QAA@XZ");
//};

//protected: hkFixedArray<struct hkCalcMultiPenetrationDepthWork>::hkFixedArray<struct hkCalcMultiPenetrationDepthWork>(void)
//{
//    mangled_ppc("??0?$hkFixedArray@UhkCalcMultiPenetrationDepthWork@@@@IAA@XZ");
//};

//public: void hkPadSpu<struct hkCalcMultiPenetrationDepthWork *>::operator=(struct hkCalcMultiPenetrationDepthWork *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAUhkCalcMultiPenetrationDepthWork@@@@QAAXPAUhkCalcMultiPenetrationDepthWork@@@Z");
//};

//public: struct hkCalcMultiPenetrationDepthWork * hkPadSpu<struct hkCalcMultiPenetrationDepthWork *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAUhkCalcMultiPenetrationDepthWork@@@@QBAPAUhkCalcMultiPenetrationDepthWork@@XZ");
//};

//public: struct hkCalcMultiPenetrationDepthWork * hkPadSpu<struct hkCalcMultiPenetrationDepthWork *>::operator struct hkCalcMultiPenetrationDepthWork *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAUhkCalcMultiPenetrationDepthWork@@@@QBAPAUhkCalcMultiPenetrationDepthWork@@XZ");
//};

//public: hkPadSpu<struct hkCalcMultiPenetrationDepthWork *>::hkPadSpu<struct hkCalcMultiPenetrationDepthWork *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAUhkCalcMultiPenetrationDepthWork@@@@QAA@XZ");
//};

//struct hkCalcMultiPenetrationDepthWork * hkAllocateStack<struct hkCalcMultiPenetrationDepthWork>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@UhkCalcMultiPenetrationDepthWork@@@@YAPAUhkCalcMultiPenetrationDepthWork@@HPBD@Z");
//};

//void hkDeallocateStack<struct hkCalcMultiPenetrationDepthWork>(struct hkCalcMultiPenetrationDepthWork *)
//{
//    mangled_ppc("??$hkDeallocateStack@UhkCalcMultiPenetrationDepthWork@@@@YAXPAUhkCalcMultiPenetrationDepthWork@@@Z");
//};

