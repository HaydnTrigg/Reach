/* ---------- headers */

#include "havok\hkpinternal\hkpMoppDefaultSplitter.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkpMoppDefaultSplitter::`RTTI Complete Object Locator'; // "??_R4hkpMoppDefaultSplitter@@6B@"
// hkpMoppDefaultSplitter::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpMoppDefaultSplitter@@8"
// hkpMoppDefaultSplitter::`RTTI Base Class Array'; // "??_R2hkpMoppDefaultSplitter@@8"
// hkpMoppDefaultSplitter::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpMoppDefaultSplitter@@8"
// hkpMoppSplitter::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpMoppSplitter@@8"
// hkpMoppSplitter::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpMoppSplitter@@8"
// hkpMoppSplitter::`RTTI Base Class Array'; // "??_R2hkpMoppSplitter@@8"
// hkpMoppNodeMgr::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpMoppNodeMgr@@8"
// hkpMoppNodeMgr::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpMoppNodeMgr@@8"
// hkpMoppNodeMgr::`RTTI Base Class Array'; // "??_R2hkpMoppNodeMgr@@8"
// const hkpMoppSplitter::`RTTI Complete Object Locator'; // "??_R4hkpMoppSplitter@@6B@"
// const hkpMoppNodeMgr::`RTTI Complete Object Locator'; // "??_R4hkpMoppNodeMgr@@6B@"
// class hkpMoppDefaultSplitter::`RTTI Type Descriptor'; // "??_R0?AVhkpMoppDefaultSplitter@@@8"
// class hkpMoppSplitter::`RTTI Type Descriptor'; // "??_R0?AVhkpMoppSplitter@@@8"
// class hkpMoppNodeMgr::`RTTI Type Descriptor'; // "??_R0?AVhkpMoppNodeMgr@@@8"

// public: hkpMoppDefaultSplitter::hkpMoppDefaultSplitter(void);
// public: virtual hkpMoppDefaultSplitter::~hkpMoppDefaultSplitter(void);
// private: void hkpMoppDefaultSplitter::findSplittingPlanePositions(class hkpMoppBasicNode *, struct hkpMoppSplittingPlaneDirection const *, struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const &, struct hkpMoppExtent const &, int);
// private: void hkpMoppDefaultSplitter::groupPrimitives(struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const &, class hkpMoppBasicNode *, int, struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray &, struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray &);
// private: class hkpMoppTreeTerminal * hkpMoppDefaultSplitter::createTerminal(class hkpMoppTreeInternalNode *, struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const &);
// private: class hkpMoppTreeInternalNode * hkpMoppDefaultSplitter::createNode(void);
// private: void hkpMoppDefaultSplitter::resortAxis(class hkpMoppTreeInternalNode const *, int *, float *);
// private: class hkpMoppTreeNode * hkpMoppDefaultSplitter::split(class hkpMoppTreeInternalNode *, struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const &, enum hkpMoppDefaultSplitter::hkpMoppDsSide, int);
// protected: virtual void hkpMoppDefaultSplitter::releaseNode(class hkpMoppTreeNode *);
// protected: virtual int hkpMoppDefaultSplitter::getFreeNodes(void);
// public: virtual class hkpMoppTreeNode * hkpMoppDefaultSplitter::buildTree(class hkpMoppMediator *, class hkpMoppCostFunction *, class hkpMoppAssembler *, struct hkpMoppSplitter::hkpMoppSplitParams const &, struct hkpMoppSplitter::hkpMoppScratchArea &);
// public: hkpMoppSplitter::hkpMoppSplitter(void);
// merged_8480DEB8;
// public: virtual hkpMoppSplitter::~hkpMoppSplitter(void);
// public: hkpMoppNodeMgr::hkpMoppNodeMgr(void);
// public: virtual hkpMoppNodeMgr::~hkpMoppNodeMgr(void);
// merged_8480DFA0;
// merged_8480DFE8;
// public: static void hkpMoppDefaultSplitter::operator delete(void *);
// public: void hkpMoppDefaultSplitter::hkpMoppMaxList::removeElementsLessThan(float);
// public: void hkpMoppDefaultSplitter::hkpMoppMaxList::removeOverflowElements(int);
// public: void hkpMoppDefaultSplitter::hkpMoppMaxList::removeAllElements(void);
// private: void hkpMoppDefaultSplitter::checkplaneLeftPos(int, class hkpMoppBasicNode *, int &, struct hkpMoppCostFunction::hkpPlanesParams &, struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const &);
// public: float hkpMoppCostFunction::costPlaneRight(struct hkpMoppCostFunction::hkpPlaneRightParams const &);
// public: float hkpMoppCostFunction::directionCost(struct hkpMoppCostFunction::hkpPlaneRightParams const &);
// protected: float hkpMoppCostFunction::costUnbalancedPlaneRight(struct hkpMoppCostFunction::hkpPlaneRightParams const &);
// protected: float hkpMoppCostFunction::costprimitiveIdSpread(struct hkpMoppCostFunction::hkpPlaneRightParams const &);
// public: float hkpMoppCostFunction::extraCostPlaneLeft(struct hkpMoppCostFunction::hkpPlanesParams const &);
// protected: float hkpMoppCostFunction::costPrimitiveSplits(struct hkpMoppCostFunction::hkpPlanesParams const &);
// protected: float hkpMoppCostFunction::costPlaneDistance(struct hkpMoppCostFunction::hkpPlanesParams const &);
// protected: float hkpMoppCostFunction::costNumUnBalanced(struct hkpMoppCostFunction::hkpPlanesParams const &);
// protected: float hkpMoppCostFunction::costUnbalancedPlaneLeft(struct hkpMoppCostFunction::hkpPlanesParams const &);
// public: void hkpMoppDefaultSplitter::hkpMoppMaxList::addElement(struct hkpMoppCompilerPrimitive *);
// public: struct hkpMoppCompilerPrimitive * hkpMoppDefaultSplitter::hkpMoppMaxList::elementAt(int);
// public: struct hkpMoppCompilerPrimitive * hkpMoppDefaultSplitter::hkpMoppMaxList::getLastRemovedElement(void);
// public: int hkpMoppDefaultSplitter::hkpMoppMaxList::size(void);
// private: int hkpMoppDefaultSplitter::findPosition(class hkpMoppBasicNode *, struct hkpMoppCompilerPrimitive *);
// private: void hkpMoppDefaultSplitter::sortLeftAndRight(int, class hkpMoppBasicNode *, int, int &, int &, struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&);
// private: void hkpMoppDefaultSplitter::distributeMiddle(struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&, class hkpMoppBasicNode const *);
// public: void hkpMoppTreeNode::init(void);
// public: void hkpMoppAssemblerData::init(void);
// private: void hkpMoppDefaultSplitter::calculateMaxMinId(struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const &, class hkpMoppTreeNode *);
// private: static float hkpMoppDefaultSplitter::calcAxisLengthCost(float, float);
// public: hkpMoppDefaultSplitter::hkpMoppMaxList::hkpMoppMaxList(int);
// public: hkpMoppDefaultSplitter::hkpMoppMaxList::~hkpMoppMaxList(void);
// public: hkpFreeList<class hkpMoppTreeInternalNode *>::hkpFreeList<class hkpMoppTreeInternalNode *>(void);
// public: void hkpFreeList<class hkpMoppTreeInternalNode *>::addElem(class hkpMoppTreeInternalNode *);
// public: class hkpMoppTreeInternalNode * hkpFreeList<class hkpMoppTreeInternalNode *>::getElem(void);
// public: void hkpFreeList<class hkpMoppTreeInternalNode *>::reset(void);
// public: int hkpFreeList<class hkpMoppTreeInternalNode *>::getNumFreeElems(void);
// public: hkpFreeList<class hkpMoppTreeTerminal *>::hkpFreeList<class hkpMoppTreeTerminal *>(void);
// public: void hkpFreeList<class hkpMoppTreeTerminal *>::addElem(class hkpMoppTreeTerminal *);
// public: class hkpMoppTreeTerminal * hkpFreeList<class hkpMoppTreeTerminal *>::getElem(void);
// public: void hkpFreeList<class hkpMoppTreeTerminal *>::reset(void);
// public: int hkpFreeList<class hkpMoppTreeTerminal *>::getNumFreeElems(void);
// struct hkpMoppCompilerPrimitive ** hkAllocate<struct hkpMoppCompilerPrimitive *>(int, int);
// void hkDeallocate<struct hkpMoppCompilerPrimitive *>(struct hkpMoppCompilerPrimitive **);
// void hkAlgorithm::quickSort<struct hkpMoppCompilerPrimitive>(struct hkpMoppCompilerPrimitive *, int);
// void hkAlgorithm::quickSort<struct hkpMoppCompilerPrimitive, class hkAlgorithm::less<struct hkpMoppCompilerPrimitive> >(struct hkpMoppCompilerPrimitive *, int, class hkAlgorithm::less<struct hkpMoppCompilerPrimitive>);
// void hkAlgorithm::quickSortRecursive<struct hkpMoppCompilerPrimitive, class hkAlgorithm::less<struct hkpMoppCompilerPrimitive> >(struct hkpMoppCompilerPrimitive *, int, int, class hkAlgorithm::less<struct hkpMoppCompilerPrimitive>);
// public: int hkAlgorithm::less<struct hkpMoppCompilerPrimitive>::operator()(struct hkpMoppCompilerPrimitive const &, struct hkpMoppCompilerPrimitive const &);
// public: class hkBool hkpMoppCompilerPrimitive::operator<(struct hkpMoppCompilerPrimitive const &) const;

//public: hkpMoppDefaultSplitter::hkpMoppDefaultSplitter(void)
//{
//    mangled_ppc("??0hkpMoppDefaultSplitter@@QAA@XZ");
//};

//public: virtual hkpMoppDefaultSplitter::~hkpMoppDefaultSplitter(void)
//{
//    mangled_ppc("??1hkpMoppDefaultSplitter@@UAA@XZ");
//};

//private: void hkpMoppDefaultSplitter::findSplittingPlanePositions(class hkpMoppBasicNode *, struct hkpMoppSplittingPlaneDirection const *, struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const &, struct hkpMoppExtent const &, int)
//{
//    mangled_ppc("?findSplittingPlanePositions@hkpMoppDefaultSplitter@@AAAXPAVhkpMoppBasicNode@@PBUhkpMoppSplittingPlaneDirection@@ABUhkpMoppPrimitiveArray@1@ABUhkpMoppExtent@@H@Z");
//};

//private: void hkpMoppDefaultSplitter::groupPrimitives(struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const &, class hkpMoppBasicNode *, int, struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray &, struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray &)
//{
//    mangled_ppc("?groupPrimitives@hkpMoppDefaultSplitter@@AAAXABUhkpMoppPrimitiveArray@1@PAVhkpMoppBasicNode@@HAAU21@2@Z");
//};

//private: class hkpMoppTreeTerminal * hkpMoppDefaultSplitter::createTerminal(class hkpMoppTreeInternalNode *, struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const &)
//{
//    mangled_ppc("?createTerminal@hkpMoppDefaultSplitter@@AAAPAVhkpMoppTreeTerminal@@PAVhkpMoppTreeInternalNode@@ABUhkpMoppPrimitiveArray@1@@Z");
//};

//private: class hkpMoppTreeInternalNode * hkpMoppDefaultSplitter::createNode(void)
//{
//    mangled_ppc("?createNode@hkpMoppDefaultSplitter@@AAAPAVhkpMoppTreeInternalNode@@XZ");
//};

//private: void hkpMoppDefaultSplitter::resortAxis(class hkpMoppTreeInternalNode const *, int *, float *)
//{
//    mangled_ppc("?resortAxis@hkpMoppDefaultSplitter@@AAAXPBVhkpMoppTreeInternalNode@@PAHPAM@Z");
//};

//private: class hkpMoppTreeNode * hkpMoppDefaultSplitter::split(class hkpMoppTreeInternalNode *, struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const &, enum hkpMoppDefaultSplitter::hkpMoppDsSide, int)
//{
//    mangled_ppc("?split@hkpMoppDefaultSplitter@@AAAPAVhkpMoppTreeNode@@PAVhkpMoppTreeInternalNode@@ABUhkpMoppPrimitiveArray@1@W4hkpMoppDsSide@1@H@Z");
//};

//protected: virtual void hkpMoppDefaultSplitter::releaseNode(class hkpMoppTreeNode *)
//{
//    mangled_ppc("?releaseNode@hkpMoppDefaultSplitter@@MAAXPAVhkpMoppTreeNode@@@Z");
//};

//protected: virtual int hkpMoppDefaultSplitter::getFreeNodes(void)
//{
//    mangled_ppc("?getFreeNodes@hkpMoppDefaultSplitter@@MAAHXZ");
//};

//public: virtual class hkpMoppTreeNode * hkpMoppDefaultSplitter::buildTree(class hkpMoppMediator *, class hkpMoppCostFunction *, class hkpMoppAssembler *, struct hkpMoppSplitter::hkpMoppSplitParams const &, struct hkpMoppSplitter::hkpMoppScratchArea &)
//{
//    mangled_ppc("?buildTree@hkpMoppDefaultSplitter@@UAAPAVhkpMoppTreeNode@@PAVhkpMoppMediator@@PAVhkpMoppCostFunction@@PAVhkpMoppAssembler@@ABUhkpMoppSplitParams@hkpMoppSplitter@@AAUhkpMoppScratchArea@7@@Z");
//};

//public: hkpMoppSplitter::hkpMoppSplitter(void)
//{
//    mangled_ppc("??0hkpMoppSplitter@@QAA@XZ");
//};

//merged_8480DEB8
//{
//    mangled_ppc("merged_8480DEB8");
//};

//public: virtual hkpMoppSplitter::~hkpMoppSplitter(void)
//{
//    mangled_ppc("??1hkpMoppSplitter@@UAA@XZ");
//};

//public: hkpMoppNodeMgr::hkpMoppNodeMgr(void)
//{
//    mangled_ppc("??0hkpMoppNodeMgr@@QAA@XZ");
//};

//public: virtual hkpMoppNodeMgr::~hkpMoppNodeMgr(void)
//{
//    mangled_ppc("??1hkpMoppNodeMgr@@UAA@XZ");
//};

//merged_8480DFA0
//{
//    mangled_ppc("merged_8480DFA0");
//};

//merged_8480DFE8
//{
//    mangled_ppc("merged_8480DFE8");
//};

//public: static void hkpMoppDefaultSplitter::operator delete(void *)
//{
//    mangled_ppc("??3hkpMoppDefaultSplitter@@SAXPAX@Z");
//};

//public: void hkpMoppDefaultSplitter::hkpMoppMaxList::removeElementsLessThan(float)
//{
//    mangled_ppc("?removeElementsLessThan@hkpMoppMaxList@hkpMoppDefaultSplitter@@QAAXM@Z");
//};

//public: void hkpMoppDefaultSplitter::hkpMoppMaxList::removeOverflowElements(int)
//{
//    mangled_ppc("?removeOverflowElements@hkpMoppMaxList@hkpMoppDefaultSplitter@@QAAXH@Z");
//};

//public: void hkpMoppDefaultSplitter::hkpMoppMaxList::removeAllElements(void)
//{
//    mangled_ppc("?removeAllElements@hkpMoppMaxList@hkpMoppDefaultSplitter@@QAAXXZ");
//};

//private: void hkpMoppDefaultSplitter::checkplaneLeftPos(int, class hkpMoppBasicNode *, int &, struct hkpMoppCostFunction::hkpPlanesParams &, struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const &)
//{
//    mangled_ppc("?checkplaneLeftPos@hkpMoppDefaultSplitter@@AAAXHPAVhkpMoppBasicNode@@AAHAAUhkpPlanesParams@hkpMoppCostFunction@@ABUhkpMoppPrimitiveArray@1@@Z");
//};

//public: float hkpMoppCostFunction::costPlaneRight(struct hkpMoppCostFunction::hkpPlaneRightParams const &)
//{
//    mangled_ppc("?costPlaneRight@hkpMoppCostFunction@@QAAMABUhkpPlaneRightParams@1@@Z");
//};

//public: float hkpMoppCostFunction::directionCost(struct hkpMoppCostFunction::hkpPlaneRightParams const &)
//{
//    mangled_ppc("?directionCost@hkpMoppCostFunction@@QAAMABUhkpPlaneRightParams@1@@Z");
//};

//protected: float hkpMoppCostFunction::costUnbalancedPlaneRight(struct hkpMoppCostFunction::hkpPlaneRightParams const &)
//{
//    mangled_ppc("?costUnbalancedPlaneRight@hkpMoppCostFunction@@IAAMABUhkpPlaneRightParams@1@@Z");
//};

//protected: float hkpMoppCostFunction::costprimitiveIdSpread(struct hkpMoppCostFunction::hkpPlaneRightParams const &)
//{
//    mangled_ppc("?costprimitiveIdSpread@hkpMoppCostFunction@@IAAMABUhkpPlaneRightParams@1@@Z");
//};

//public: float hkpMoppCostFunction::extraCostPlaneLeft(struct hkpMoppCostFunction::hkpPlanesParams const &)
//{
//    mangled_ppc("?extraCostPlaneLeft@hkpMoppCostFunction@@QAAMABUhkpPlanesParams@1@@Z");
//};

//protected: float hkpMoppCostFunction::costPrimitiveSplits(struct hkpMoppCostFunction::hkpPlanesParams const &)
//{
//    mangled_ppc("?costPrimitiveSplits@hkpMoppCostFunction@@IAAMABUhkpPlanesParams@1@@Z");
//};

//protected: float hkpMoppCostFunction::costPlaneDistance(struct hkpMoppCostFunction::hkpPlanesParams const &)
//{
//    mangled_ppc("?costPlaneDistance@hkpMoppCostFunction@@IAAMABUhkpPlanesParams@1@@Z");
//};

//protected: float hkpMoppCostFunction::costNumUnBalanced(struct hkpMoppCostFunction::hkpPlanesParams const &)
//{
//    mangled_ppc("?costNumUnBalanced@hkpMoppCostFunction@@IAAMABUhkpPlanesParams@1@@Z");
//};

//protected: float hkpMoppCostFunction::costUnbalancedPlaneLeft(struct hkpMoppCostFunction::hkpPlanesParams const &)
//{
//    mangled_ppc("?costUnbalancedPlaneLeft@hkpMoppCostFunction@@IAAMABUhkpPlanesParams@1@@Z");
//};

//public: void hkpMoppDefaultSplitter::hkpMoppMaxList::addElement(struct hkpMoppCompilerPrimitive *)
//{
//    mangled_ppc("?addElement@hkpMoppMaxList@hkpMoppDefaultSplitter@@QAAXPAUhkpMoppCompilerPrimitive@@@Z");
//};

//public: struct hkpMoppCompilerPrimitive * hkpMoppDefaultSplitter::hkpMoppMaxList::elementAt(int)
//{
//    mangled_ppc("?elementAt@hkpMoppMaxList@hkpMoppDefaultSplitter@@QAAPAUhkpMoppCompilerPrimitive@@H@Z");
//};

//public: struct hkpMoppCompilerPrimitive * hkpMoppDefaultSplitter::hkpMoppMaxList::getLastRemovedElement(void)
//{
//    mangled_ppc("?getLastRemovedElement@hkpMoppMaxList@hkpMoppDefaultSplitter@@QAAPAUhkpMoppCompilerPrimitive@@XZ");
//};

//public: int hkpMoppDefaultSplitter::hkpMoppMaxList::size(void)
//{
//    mangled_ppc("?size@hkpMoppMaxList@hkpMoppDefaultSplitter@@QAAHXZ");
//};

//private: int hkpMoppDefaultSplitter::findPosition(class hkpMoppBasicNode *, struct hkpMoppCompilerPrimitive *)
//{
//    mangled_ppc("?findPosition@hkpMoppDefaultSplitter@@AAAHPAVhkpMoppBasicNode@@PAUhkpMoppCompilerPrimitive@@@Z");
//};

//private: void hkpMoppDefaultSplitter::sortLeftAndRight(int, class hkpMoppBasicNode *, int, int &, int &, struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&)
//{
//    mangled_ppc("?sortLeftAndRight@hkpMoppDefaultSplitter@@AAAXHPAVhkpMoppBasicNode@@HAAH1AAPAUhkpMoppCompilerPrimitive@@222@Z");
//};

//private: void hkpMoppDefaultSplitter::distributeMiddle(struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&, struct hkpMoppCompilerPrimitive *&, class hkpMoppBasicNode const *)
//{
//    mangled_ppc("?distributeMiddle@hkpMoppDefaultSplitter@@AAAXAAPAUhkpMoppCompilerPrimitive@@00000PBVhkpMoppBasicNode@@@Z");
//};

//public: void hkpMoppTreeNode::init(void)
//{
//    mangled_ppc("?init@hkpMoppTreeNode@@QAAXXZ");
//};

//public: void hkpMoppAssemblerData::init(void)
//{
//    mangled_ppc("?init@hkpMoppAssemblerData@@QAAXXZ");
//};

//private: void hkpMoppDefaultSplitter::calculateMaxMinId(struct hkpMoppDefaultSplitter::hkpMoppPrimitiveArray const &, class hkpMoppTreeNode *)
//{
//    mangled_ppc("?calculateMaxMinId@hkpMoppDefaultSplitter@@AAAXABUhkpMoppPrimitiveArray@1@PAVhkpMoppTreeNode@@@Z");
//};

//private: static float hkpMoppDefaultSplitter::calcAxisLengthCost(float, float)
//{
//    mangled_ppc("?calcAxisLengthCost@hkpMoppDefaultSplitter@@CAMMM@Z");
//};

//public: hkpMoppDefaultSplitter::hkpMoppMaxList::hkpMoppMaxList(int)
//{
//    mangled_ppc("??0hkpMoppMaxList@hkpMoppDefaultSplitter@@QAA@H@Z");
//};

//public: hkpMoppDefaultSplitter::hkpMoppMaxList::~hkpMoppMaxList(void)
//{
//    mangled_ppc("??1hkpMoppMaxList@hkpMoppDefaultSplitter@@QAA@XZ");
//};

//public: hkpFreeList<class hkpMoppTreeInternalNode *>::hkpFreeList<class hkpMoppTreeInternalNode *>(void)
//{
//    mangled_ppc("??0?$hkpFreeList@PAVhkpMoppTreeInternalNode@@@@QAA@XZ");
//};

//public: void hkpFreeList<class hkpMoppTreeInternalNode *>::addElem(class hkpMoppTreeInternalNode *)
//{
//    mangled_ppc("?addElem@?$hkpFreeList@PAVhkpMoppTreeInternalNode@@@@QAAXPAVhkpMoppTreeInternalNode@@@Z");
//};

//public: class hkpMoppTreeInternalNode * hkpFreeList<class hkpMoppTreeInternalNode *>::getElem(void)
//{
//    mangled_ppc("?getElem@?$hkpFreeList@PAVhkpMoppTreeInternalNode@@@@QAAPAVhkpMoppTreeInternalNode@@XZ");
//};

//public: void hkpFreeList<class hkpMoppTreeInternalNode *>::reset(void)
//{
//    mangled_ppc("?reset@?$hkpFreeList@PAVhkpMoppTreeInternalNode@@@@QAAXXZ");
//};

//public: int hkpFreeList<class hkpMoppTreeInternalNode *>::getNumFreeElems(void)
//{
//    mangled_ppc("?getNumFreeElems@?$hkpFreeList@PAVhkpMoppTreeInternalNode@@@@QAAHXZ");
//};

//public: hkpFreeList<class hkpMoppTreeTerminal *>::hkpFreeList<class hkpMoppTreeTerminal *>(void)
//{
//    mangled_ppc("??0?$hkpFreeList@PAVhkpMoppTreeTerminal@@@@QAA@XZ");
//};

//public: void hkpFreeList<class hkpMoppTreeTerminal *>::addElem(class hkpMoppTreeTerminal *)
//{
//    mangled_ppc("?addElem@?$hkpFreeList@PAVhkpMoppTreeTerminal@@@@QAAXPAVhkpMoppTreeTerminal@@@Z");
//};

//public: class hkpMoppTreeTerminal * hkpFreeList<class hkpMoppTreeTerminal *>::getElem(void)
//{
//    mangled_ppc("?getElem@?$hkpFreeList@PAVhkpMoppTreeTerminal@@@@QAAPAVhkpMoppTreeTerminal@@XZ");
//};

//public: void hkpFreeList<class hkpMoppTreeTerminal *>::reset(void)
//{
//    mangled_ppc("?reset@?$hkpFreeList@PAVhkpMoppTreeTerminal@@@@QAAXXZ");
//};

//public: int hkpFreeList<class hkpMoppTreeTerminal *>::getNumFreeElems(void)
//{
//    mangled_ppc("?getNumFreeElems@?$hkpFreeList@PAVhkpMoppTreeTerminal@@@@QAAHXZ");
//};

//struct hkpMoppCompilerPrimitive ** hkAllocate<struct hkpMoppCompilerPrimitive *>(int, int)
//{
//    mangled_ppc("??$hkAllocate@PAUhkpMoppCompilerPrimitive@@@@YAPAPAUhkpMoppCompilerPrimitive@@HH@Z");
//};

//void hkDeallocate<struct hkpMoppCompilerPrimitive *>(struct hkpMoppCompilerPrimitive **)
//{
//    mangled_ppc("??$hkDeallocate@PAUhkpMoppCompilerPrimitive@@@@YAXPAPAUhkpMoppCompilerPrimitive@@@Z");
//};

//void hkAlgorithm::quickSort<struct hkpMoppCompilerPrimitive>(struct hkpMoppCompilerPrimitive *, int)
//{
//    mangled_ppc("??$quickSort@UhkpMoppCompilerPrimitive@@@hkAlgorithm@@YAXPAUhkpMoppCompilerPrimitive@@H@Z");
//};

//void hkAlgorithm::quickSort<struct hkpMoppCompilerPrimitive, class hkAlgorithm::less<struct hkpMoppCompilerPrimitive> >(struct hkpMoppCompilerPrimitive *, int, class hkAlgorithm::less<struct hkpMoppCompilerPrimitive>)
//{
//    mangled_ppc("??$quickSort@UhkpMoppCompilerPrimitive@@V?$less@UhkpMoppCompilerPrimitive@@@hkAlgorithm@@@hkAlgorithm@@YAXPAUhkpMoppCompilerPrimitive@@HV?$less@UhkpMoppCompilerPrimitive@@@0@@Z");
//};

//void hkAlgorithm::quickSortRecursive<struct hkpMoppCompilerPrimitive, class hkAlgorithm::less<struct hkpMoppCompilerPrimitive> >(struct hkpMoppCompilerPrimitive *, int, int, class hkAlgorithm::less<struct hkpMoppCompilerPrimitive>)
//{
//    mangled_ppc("??$quickSortRecursive@UhkpMoppCompilerPrimitive@@V?$less@UhkpMoppCompilerPrimitive@@@hkAlgorithm@@@hkAlgorithm@@YAXPAUhkpMoppCompilerPrimitive@@HHV?$less@UhkpMoppCompilerPrimitive@@@0@@Z");
//};

//public: int hkAlgorithm::less<struct hkpMoppCompilerPrimitive>::operator()(struct hkpMoppCompilerPrimitive const &, struct hkpMoppCompilerPrimitive const &)
//{
//    mangled_ppc("??R?$less@UhkpMoppCompilerPrimitive@@@hkAlgorithm@@QAAHABUhkpMoppCompilerPrimitive@@0@Z");
//};

//public: class hkBool hkpMoppCompilerPrimitive::operator<(struct hkpMoppCompilerPrimitive const &) const
//{
//    mangled_ppc("??MhkpMoppCompilerPrimitive@@QBA?AVhkBool@@ABU0@@Z");
//};

