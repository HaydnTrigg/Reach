/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned int const (*const `void __cdecl calcCurDist(int, class hkVector4&, class hkp3AxisSweep::hkpBpEndPoint const *, class hkVector4&, class hkVector4&)'::`2'::compmask)[4]; // "?compmask@?1??calcCurDist@@YAXHAAVhkVector4@@PBVhkpBpEndPoint@hkp3AxisSweep@@00@Z@4QAY03$$CBIA"
// unsigned int const *const const `void __cdecl calcCurDist(int, class hkVector4&, class hkp3AxisSweep::hkpBpEndPoint const *, class hkVector4&, class hkVector4&)'::`2'::mask; // "?mask@?1??calcCurDist@@YAXHAAVhkVector4@@PBVhkpBpEndPoint@hkp3AxisSweep@@00@Z@4QBIB"
// unsigned int const *const const `int __cdecl getMinComponent(class hkVector4const &, float &)'::`2'::index; // "?index@?1??getMinComponent@@YAHABVhkVector4@@AAM@Z@4QBIB"
// const hkp3AxisSweep::`RTTI Complete Object Locator'; // "??_R4hkp3AxisSweep@@6B@"
// hkp3AxisSweep::`RTTI Class Hierarchy Descriptor'; // "??_R3hkp3AxisSweep@@8"
// hkp3AxisSweep::`RTTI Base Class Array'; // "??_R2hkp3AxisSweep@@8"
// hkp3AxisSweep::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkp3AxisSweep@@8"
// hkpBroadPhase::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpBroadPhase@@8"
// hkpBroadPhase::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpBroadPhase@@8"
// hkpBroadPhase::`RTTI Base Class Array'; // "??_R2hkpBroadPhase@@8"
// public: static unsigned int *hkp3AxisSweep::OneMask; // "?OneMask@hkp3AxisSweep@@2PAIA"
// public: static struct __vector4hkp3AxisSweep::MaxVal; // "?MaxVal@hkp3AxisSweep@@2U__vector4@@A"
// public: static class hkpBroadPhase * (__cdecl *hkpBroadPhase::m_defaultCreationFunction)(class hkVector4const &, class hkVector4const &, int); // "?m_defaultCreationFunction@hkpBroadPhase@@2P6APAV1@ABVhkVector4@@0H@ZA"
// class hkp3AxisSweep::`RTTI Type Descriptor'; // "??_R0?AVhkp3AxisSweep@@@8"
// class hkpBroadPhase::`RTTI Type Descriptor'; // "??_R0?AVhkpBroadPhase@@@8"
// public: static int const *const const hkp3AxisSweep::hkpBpNode::s_memberOffsets; // "?s_memberOffsets@hkpBpNode@hkp3AxisSweep@@2QBHB"

// public: virtual enum hkpBroadPhase::BroadPhaseType hkp3AxisSweep::getType(void) const;
// public: static void __fastcall hkp3AxisSweep::beginOverlap(class hkp3AxisSweep::hkpBpNode &, class hkp3AxisSweep::hkpBpNode &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: static void __fastcall hkp3AxisSweep::endOverlap(class hkp3AxisSweep::hkpBpNode &, class hkp3AxisSweep::hkpBpNode &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: static void __fastcall hkp3AxisSweep::beginOverlapCheckMarker(class hkp3AxisSweep::hkpBpMarker *, class hkp3AxisSweep::hkpBpNode &, int, class hkp3AxisSweep::hkpBpNode &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: static void __fastcall hkp3AxisSweep::endOverlapCheckMarker(class hkp3AxisSweep::hkpBpMarker *, class hkp3AxisSweep::hkpBpNode &, int, class hkp3AxisSweep::hkpBpNode &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: void hkp3AxisSweep::_fixDeterministicOrderAfterNodeIdWasDecreased(int);
// public: virtual void hkp3AxisSweep::updateAabbs(class hkpBroadPhaseHandle **const, class hkAabb const *, int, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: virtual void hkp3AxisSweep::updateAabbsUint32(class hkpBroadPhaseHandle **const, struct hkAabbUint32const *, int, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// unsigned int add1SaturateAndSetLowBit(unsigned int);
// public: hkp3AxisSweep::hkp3AxisSweep(class hkVector4const &, class hkVector4const &, int);
// public: virtual hkp3AxisSweep::~hkp3AxisSweep(void);
// public: virtual void hkp3AxisSweep::set32BitOffsetAndScale(class hkVector4const &, class hkVector4const &, class hkVector4const &);
// public: void hkp3AxisSweep::hkpBpAxis::mergeBatch(class hkp3AxisSweep::hkpBpNode *, int, int, int, class hkp3AxisSweep::hkpBpEndPoint *);
// public: void hkp3AxisSweep::hkpBpAxis::insert(class hkp3AxisSweep::hkpBpNode *, int, unsigned short, unsigned short, unsigned short &, unsigned short &);
// public: void hkp3AxisSweep::hkpBpAxis::remove(int, int);
// protected: void hkp3AxisSweep::updateNodesAfterInsert(class hkp3AxisSweep::hkpBpNode *, int, class hkp3AxisSweep::hkpBpNode &);
// public: void hkp3AxisSweep::collide1Axis(class hkp3AxisSweep::hkpBpNode const *, int, class hkp3AxisSweep::hkpBpNode const *, int, enum hkp3AxisSweep::MarkerHandling, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: void hkp3AxisSweep::collide1Axis(class hkp3AxisSweep::hkpBpNode const *, int, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// protected: void hkp3AxisSweep::updateNodesAfterBatchTailInsert(class hkp3AxisSweep::hkpBpNode *, int, int, int *);
// protected: void hkp3AxisSweep::updateNodesAfterDelete(class hkp3AxisSweep::hkpBpNode *, int, class hkp3AxisSweep::hkpBpNode &);
// protected: void hkp3AxisSweep::setBitsBasedOnXInterval(int, int, class hkp3AxisSweep::hkpBpNode const &, unsigned short, unsigned int *) const;
// void memclear16(void *, int);
// void staticFlipBit(unsigned int *, int);
// void staticClearBit(unsigned int *, int);
// public: virtual void hkp3AxisSweep::reQuerySingleObject(class hkpBroadPhaseHandle const *, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &) const;
// public: virtual bool hkp3AxisSweep::areAabbsOverlapping(class hkpBroadPhaseHandle const *, class hkpBroadPhaseHandle const *) const;
// public: virtual void hkp3AxisSweep::addObject(class hkpBroadPhaseHandle *, struct hkAabbUint32const &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: virtual void hkp3AxisSweep::addObject(class hkpBroadPhaseHandle *, class hkAabb const &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: virtual void hkp3AxisSweep::removeObject(class hkpBroadPhaseHandle *, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: int hkp3AxisSweep::hkpBpAxis::insertTail(class hkp3AxisSweep::hkpBpNode *, int, class hkp3AxisSweep::hkpBpEndPoint *, int);
// public: virtual void hkp3AxisSweep::addObjectBatch(class hkArray<class hkpBroadPhaseHandle *, struct hkContainerHeapAllocator> &, class hkArray<class hkAabb, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: virtual void hkp3AxisSweep::removeObjectBatch(class hkArray<class hkpBroadPhaseHandle *, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: virtual int hkp3AxisSweep::getNumObjects(void) const;
// public: virtual void hkp3AxisSweep::getAllAabbs(class hkArray<class hkAabb, struct hkContainerHeapAllocator> &) const;
// public: virtual void hkp3AxisSweep::getAabb(class hkpBroadPhaseHandle const *, class hkAabb &) const;
// public: virtual void hkp3AxisSweep::getExtents(class hkVector4&, class hkVector4&) const;
// public: void hkp3AxisSweep::checkConsistency(void);
// public: class hkp3AxisSweep::hkpBpEndPoint const * hkp3AxisSweep::hkpBpAxis::find(class hkp3AxisSweep::hkpBpEndPoint const *, class hkp3AxisSweep::hkpBpEndPoint const *, unsigned short) const;
// unsigned short getEpValue(class hkp3AxisSweep::hkpBpEndPoint const *);
// protected: void hkp3AxisSweep::queryBatchAabbSub(unsigned int const *, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkBool) const;
// int staticIsBitSet(unsigned int const *, int);
// public: virtual void hkp3AxisSweep::querySingleAabb(class hkAabb const &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &) const;
// public: virtual void hkp3AxisSweep::querySingleAabbWithCollector(class hkAabb const &, class hkpBroadPhaseCastCollector *) const;
// public: virtual int hkp3AxisSweep::getAabbCacheSize(void) const;
// public: virtual void hkp3AxisSweep::calcAabbCache(class hkAabb const &, char *) const;
// public: virtual void hkp3AxisSweep::calcAabbCache(class hkArray<class hkpCollidable *, struct hkContainerHeapAllocator> const &, char *) const;
// protected: void hkp3AxisSweep::calcAabbCacheInternal(class hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator> const &, char *) const;
// public: virtual void hkp3AxisSweep::defragment(void);
// public: virtual void hkp3AxisSweep::castRay(struct hkpBroadPhase::hkpCastRayInput const &, class hkpBroadPhaseCastCollector *, int) const;
// public: virtual void hkp3AxisSweep::castAabb(struct hkpBroadPhase::hkpCastAabbInput const &, class hkpBroadPhaseCastCollector &) const;
// protected: void hkp3AxisSweep::getAabbFromNode(class hkp3AxisSweep::hkpBpNode const &, class hkAabb &) const;
// public: virtual void hkp3AxisSweep::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// public: virtual void hkp3AxisSweep::shiftAllObjects(class hkVector4const &, class hkVector4&, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: virtual void hkp3AxisSweep::shiftBroadPhase(class hkVector4const &, class hkVector4&, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: class hkAabb const & hkp3AxisSweep::getOriginalAabb(void) const;
// class hkpBroadPhase * hk3AxisSweep16CreateBroadPhase(class hkVector4const &, class hkVector4const &, int);
// public: virtual void hkp3AxisSweep::checkDeterminism(void);
// public: int hkp3AxisSweep::hkpBpNode::isMarker(void) const;
// public: class hkp3AxisSweep::hkpBpMarker & hkp3AxisSweep::hkpBpNode::getMarker(class hkp3AxisSweep::hkpBpMarker *) const;
// public: void hkp3AxisSweep::_convertAabbToInt(class hkAabb const &, struct hkAabbUint32&) const;
// public: static void hkp3AxisSweep::_convertAabbToInt(class hkAabb const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, struct hkAabbUint32&);
// void hkVector4Util::convertToUint16WithClip(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, union hkIntUnion64&);
// public: void hkp3AxisSweep::updateAabb(class hkpBroadPhaseHandle *, struct hkAabbUint32const &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: void hkp3AxisSweep::convertAabbToBroadPhaseResolution(struct hkAabbUint32const &, struct hkAabbUint32&);
// public: static void * hkp3AxisSweep::hkpBpMarker::operator new(unsigned int, void *);
// public: hkp3AxisSweep::hkpBpAxis::hkpBpAxis(void);
// merged_83F89610;
// public: hkp3AxisSweep::hkpBpMarker::hkpBpMarker(void);
// public: int hkp3AxisSweep::getNumMarkers(void) const;
// public: hkp3AxisSweep::hkpBpAxis::~hkpBpAxis(void);
// public: void * hkp3AxisSweep::hkpBpMarker::`scalar deleting destructor'(unsigned int);
// public: static void hkp3AxisSweep::hkpBpMarker::operator delete(void *);
// public: hkp3AxisSweep::hkpBpMarker::~hkpBpMarker(void);
// public: void hkp3AxisSweep::hkpBpNode::setElem(int, int, int);
// public: int hkp3AxisSweep::hkpBpEndPoint::isMaxPoint(void) const;
// void hkVector4Util::exitMmx(void);
// public: unsigned int hkp3AxisSweep::hkpBpNode::yzDisjoint(class hkp3AxisSweep::hkpBpNode const &) const;
// public: int hkp3AxisSweep::hkpBpNode::xyDisjoint(class hkp3AxisSweep::hkpBpNode const &) const;
// protected: void hkp3AxisSweep::querySingleAabbAddObject(class hkpBroadPhaseHandle *, int, unsigned int const *, class hkp3AxisSweep::hkpBpNode &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &) const;
// void hkVector4Util::convertAabbToUint32(class hkAabb const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, struct hkAabbUint32&);
// void hkVector4Util::convertToUint32WithClip(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, unsigned int *);
// protected: void hkp3AxisSweep::querySingleAabbRemoveObject(class hkpBroadPhaseHandle *, int, unsigned int const *, class hkp3AxisSweep::hkpBpNode &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &) const;
// public: class hkSimdReal hkVector4::length4(void) const;
// void hkMath::prefetch128(void const *);
// public: class hkBool hkBool::operator!=(bool) const;
// public: unsigned short & hkp3AxisSweep::hkpBpNode::getMin(int);
// public: unsigned short & hkp3AxisSweep::hkpBpNode::getMax(int);
// protected: void hkp3AxisSweep::addNodePair(class hkp3AxisSweep::hkpBpNode const *, class hkp3AxisSweep::hkpBpNode const *, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkBool) const;
// protected: void hkp3AxisSweep::_querySingleAabb(class hkAabb const &, enum hkp3AxisSweep::hkpBpQuerySingleType, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> *, class hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator> *, class hkpBroadPhaseCastCollector *) const;
// protected: void hkp3AxisSweep::querySingleAabbSub(class hkpBroadPhaseHandle *, unsigned int const *, class hkp3AxisSweep::hkpBpNode &, enum hkp3AxisSweep::hkpBpQuerySingleType, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> *, class hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator> *, class hkpBroadPhaseCastCollector *) const;
// public: hkp3AxisSweep::hkpBpAxis::hkpBpAxis(class hkp3AxisSweep::hkpBpEndPoint *, int);
// public: static void * hkp3AxisSweep::hkpBpAxis::operator new(unsigned int, void *);
// public: void hkp3AxisSweep::convertVectorToInt(class hkVector4const &, unsigned int *) const;
// void calcCurDist(int, class hkVector4&, class hkp3AxisSweep::hkpBpEndPoint const *, class hkVector4&, class hkVector4&);
// int getMinComponent(class hkVector4const &, float &);
// public: int hkVector4::allLessThan3(class hkVector4const &) const;
// public: static void * hkpBroadPhase::operator new(unsigned int);
// public: void hkArray<unsigned short, struct hkContainerHeapAllocator>::pushBack(unsigned short const &);
// public: void hkArray<unsigned short, struct hkContainerHeapAllocator>::setSize(int);
// public: hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>::hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>(void);
// public: hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>::hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>(class hkp3AxisSweep::hkpBpEndPoint *, int, int);
// public: void hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>::setSize(int);
// public: hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>::hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>::setSize(int);
// public: class hkp3AxisSweep::hkpBpNode & hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>::expandOne(void);
// public: class hkp3AxisSweep::hkpBpNode * hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>::expandBy(int);
// public: hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator>::hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator>::pushBack(class hkpBroadPhaseHandlePair const &);
// public: class hkpBroadPhaseHandlePair & hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator>::expandOne(void);
// public: void hkArray<class hkAabb, struct hkContainerHeapAllocator>::reserveExactly(int);
// public: hkLocalArray<class hkp3AxisSweep::hkpBpNode const *>::hkLocalArray<class hkp3AxisSweep::hkpBpNode const *>(int);
// public: hkLocalArray<class hkp3AxisSweep::hkpBpNode const *>::~hkLocalArray<class hkp3AxisSweep::hkpBpNode const *>(void);
// public: hkLocalArray<int>::hkLocalArray<int>(int);
// public: hkLocalArray<int>::~hkLocalArray<int>(void);
// public: hkInplaceArray<unsigned short, 256, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned short, 256, struct hkContainerHeapAllocator>(void);
// public: class hkBool hkLocalArray<class hkp3AxisSweep::hkpBpNode const *>::wasReallocated(void) const;
// public: hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator>::hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator>(void);
// public: class hkBool hkLocalArray<int>::wasReallocated(void) const;
// public: void hkArrayBase<unsigned short>::removeAt(int);
// public: int hkArrayBase<unsigned short>::indexOf(unsigned short const &, int, int) const;
// public: void hkArrayBase<unsigned short>::_pushBack(class hkMemoryAllocator &, unsigned short const &);
// public: void hkArrayBase<unsigned short>::_setSize(class hkMemoryAllocator &, int);
// public: unsigned short * hkArrayBase<unsigned short>::begin(void);
// public: hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>(class hkp3AxisSweep::hkpBpEndPoint *, int, int);
// public: hkAabb::hkAabb(class hkVector4const &, class hkVector4const &);
// public: hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>(void);
// public: class hkp3AxisSweep::hkpBpEndPoint const & hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::operator[](int) const;
// public: int hkAabb::containsPoint(class hkVector4const &) const;
// public: class hkp3AxisSweep::hkpBpEndPoint & hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::operator[](int);
// public: class hkp3AxisSweep::hkpBpEndPoint const & hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::back(void) const;
// public: int hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::getSize(void) const;
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::pushBackUnchecked(class hkp3AxisSweep::hkpBpEndPoint const &);
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::_setSize(class hkMemoryAllocator &, int);
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::setSizeUnchecked(int);
// public: class hkp3AxisSweep::hkpBpEndPoint const * hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::begin(void) const;
// public: class hkp3AxisSweep::hkpBpEndPoint * hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::begin(void);
// public: class hkp3AxisSweep::hkpBpEndPoint const * hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::end(void) const;
// public: class hkp3AxisSweep::hkpBpEndPoint * hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::end(void);
// public: hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>::~hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::~hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>(void);
// public: hkArrayBase<class hkp3AxisSweep::hkpBpNode>::hkArrayBase<class hkp3AxisSweep::hkpBpNode>(void);
// public: class hkp3AxisSweep::hkpBpNode const & hkArrayBase<class hkp3AxisSweep::hkpBpNode>::operator[](int) const;
// public: class hkp3AxisSweep::hkpBpNode & hkArrayBase<class hkp3AxisSweep::hkpBpNode>::operator[](int);
// public: int hkArrayBase<class hkp3AxisSweep::hkpBpNode>::getSize(void) const;
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode>::_setSize(class hkMemoryAllocator &, int);
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode>::setSizeUnchecked(int);
// public: class hkp3AxisSweep::hkpBpNode & hkArrayBase<class hkp3AxisSweep::hkpBpNode>::_expandOne(class hkMemoryAllocator &);
// public: class hkp3AxisSweep::hkpBpNode * hkArrayBase<class hkp3AxisSweep::hkpBpNode>::_expandBy(class hkMemoryAllocator &, int);
// public: class hkp3AxisSweep::hkpBpNode const * hkArrayBase<class hkp3AxisSweep::hkpBpNode>::begin(void) const;
// public: class hkp3AxisSweep::hkpBpNode * hkArrayBase<class hkp3AxisSweep::hkpBpNode>::begin(void);
// public: class hkp3AxisSweep::hkpBpNode * hkArrayBase<class hkp3AxisSweep::hkpBpNode>::end(void);
// public: hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>::~hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkp3AxisSweep::hkpBpNode>::~hkArrayBase<class hkp3AxisSweep::hkpBpNode>(void);
// unsigned short * hkAddByteOffset<unsigned short>(unsigned short *, long);
// class hkp3AxisSweep::hkpBpMarker * hkAddByteOffset<class hkp3AxisSweep::hkpBpMarker>(class hkp3AxisSweep::hkpBpMarker *, long);
// public: hkArrayBase<class hkpBroadPhaseHandlePair>::hkArrayBase<class hkpBroadPhaseHandlePair>(void);
// public: class hkBool hkArrayBase<class hkpBroadPhaseHandlePair>::isEmpty(void) const;
// public: void hkArrayBase<class hkpBroadPhaseHandlePair>::_pushBack(class hkMemoryAllocator &, class hkpBroadPhaseHandlePair const &);
// public: class hkpBroadPhaseHandlePair & hkArrayBase<class hkpBroadPhaseHandlePair>::_expandOne(class hkMemoryAllocator &);
// void _fixDeterministicAxisOrderAfterNodeIdWasDecreased<0>(class hkp3AxisSweep *, class hkp3AxisSweep::hkpBpNode *, class hkp3AxisSweep::hkpBpNode &, unsigned int);
// void _fixDeterministicAxisOrderAfterNodeIdWasDecreased<1>(class hkp3AxisSweep *, class hkp3AxisSweep::hkpBpNode *, class hkp3AxisSweep::hkpBpNode &, unsigned int);
// void _fixDeterministicAxisOrderAfterNodeIdWasDecreased<2>(class hkp3AxisSweep *, class hkp3AxisSweep::hkpBpNode *, class hkp3AxisSweep::hkpBpNode &, unsigned int);
// void _updateAxis<0, 1>(class hkp3AxisSweep *, class hkp3AxisSweep::hkpBpNode *, class hkp3AxisSweep::hkpBpNode &, unsigned int, unsigned int, unsigned int, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: static int hkp3AxisSweep::hkpBpEndPoint::isMaxPoint(int);
// public: int hkp3AxisSweep::hkpBpNode::xzDisjoint(class hkp3AxisSweep::hkpBpNode const &) const;
// void _updateAxis<1, 0>(class hkp3AxisSweep *, class hkp3AxisSweep::hkpBpNode *, class hkp3AxisSweep::hkpBpNode &, unsigned int, unsigned int, unsigned int, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// void _updateAxis<2, 0>(class hkp3AxisSweep *, class hkp3AxisSweep::hkpBpNode *, class hkp3AxisSweep::hkpBpNode &, unsigned int, unsigned int, unsigned int, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// class hkp3AxisSweep::hkpBpMarker * hkAllocate<class hkp3AxisSweep::hkpBpMarker>(int, int);
// void hkDeallocate<class hkp3AxisSweep::hkpBpMarker>(class hkp3AxisSweep::hkpBpMarker *);
// void hkp3AxisSweep_scanList<1>(class hkp3AxisSweep::hkpBpNode const &, unsigned int *, class hkp3AxisSweep::hkpBpNode &volatile, class hkp3AxisSweep::hkpBpMarker *, enum hkp3AxisSweep::MarkerHandling, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// void hkp3AxisSweep_scanList<0>(class hkp3AxisSweep::hkpBpNode const &, unsigned int *, class hkp3AxisSweep::hkpBpNode &volatile, class hkp3AxisSweep::hkpBpMarker *, enum hkp3AxisSweep::MarkerHandling, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// unsigned int * hkAllocateStack<unsigned int>(int, char const *);
// void hkDeallocateStack<unsigned int>(unsigned int *);
// public: unsigned int * hkFixedArray<unsigned int>::begin(void);
// public: hkLocalBuffer<unsigned int>::hkLocalBuffer<unsigned int>(int, char const *);
// public: hkLocalBuffer<unsigned int>::~hkLocalBuffer<unsigned int>(void);
// public: void hkArrayBase<class hkAabb>::_reserveExactly(class hkMemoryAllocator &, int);
// public: class hkpBroadPhaseHandle *& hkArrayBase<class hkpBroadPhaseHandle *>::operator[](int);
// public: int hkArrayBase<class hkpBroadPhaseHandle *>::getSize(void) const;
// public: hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerTempAllocator>::hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerTempAllocator>(int);
// public: hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerTempAllocator>::~hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerTempAllocator>(void);
// public: hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>(void);
// public: class hkp3AxisSweep::hkpBpNode const *& hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::operator[](int);
// public: int hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::getSize(void) const;
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::clear(void);
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::pushBackUnchecked(class hkp3AxisSweep::hkpBpNode const *const &);
// public: class hkp3AxisSweep::hkpBpNode const *const * hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::begin(void) const;
// public: hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator>::~hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::~hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>(void);
// void hkAlgorithm::quickSort<class hkp3AxisSweep::hkpBpEndPoint>(class hkp3AxisSweep::hkpBpEndPoint *, int);
// public: void hkp3AxisSweep::hkpBpAxis::mergeRest<0>(class hkp3AxisSweep::hkpBpNode *, int, class hkp3AxisSweep::hkpBpEndPoint *, int);
// public: void hkp3AxisSweep::hkpBpAxis::mergeRest<1>(class hkp3AxisSweep::hkpBpNode *, int, class hkp3AxisSweep::hkpBpEndPoint *, int);
// public: void hkp3AxisSweep::hkpBpAxis::mergeRest<2>(class hkp3AxisSweep::hkpBpNode *, int, class hkp3AxisSweep::hkpBpEndPoint *, int);
// public: hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerTempAllocator>::hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerTempAllocator>(int);
// public: hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerTempAllocator>::~hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerTempAllocator>(void);
// public: struct hkRadixSort::SortData16& hkArrayBase<struct hkRadixSort::SortData16>::operator[](int);
// public: struct hkRadixSort::SortData16* hkArrayBase<struct hkRadixSort::SortData16>::begin(void);
// public: hkArray<struct hkRadixSort::SortData16, struct hkContainerTempAllocator>::hkArray<struct hkRadixSort::SortData16, struct hkContainerTempAllocator>(int);
// public: hkArray<struct hkRadixSort::SortData16, struct hkContainerTempAllocator>::~hkArray<struct hkRadixSort::SortData16, struct hkContainerTempAllocator>(void);
// public: class hkp3AxisSweep::hkpBpNode & hkFixedArray<class hkp3AxisSweep::hkpBpNode>::operator[](int);
// public: class hkp3AxisSweep::hkpBpNode * hkFixedArray<class hkp3AxisSweep::hkpBpNode>::begin(void);
// public: hkLocalBuffer<class hkp3AxisSweep::hkpBpNode>::hkLocalBuffer<class hkp3AxisSweep::hkpBpNode>(int, char const *);
// public: hkLocalBuffer<class hkp3AxisSweep::hkpBpNode>::~hkLocalBuffer<class hkp3AxisSweep::hkpBpNode>(void);
// public: struct hkRadixSort::SortData16& hkFixedArray<struct hkRadixSort::SortData16>::operator[](int);
// public: struct hkRadixSort::SortData16* hkFixedArray<struct hkRadixSort::SortData16>::begin(void);
// public: hkLocalBuffer<struct hkRadixSort::SortData16>::hkLocalBuffer<struct hkRadixSort::SortData16>(int, char const *);
// public: hkLocalBuffer<struct hkRadixSort::SortData16>::~hkLocalBuffer<struct hkRadixSort::SortData16>(void);
// unsigned short hkMath::min2<unsigned short>(unsigned short, unsigned short);
// unsigned short hkMath::max2<unsigned short>(unsigned short, unsigned short);
// public: void hkArrayBase<int>::pushBackUnchecked(int const &);
// public: int & hkFixedArray<int>::operator[](int);
// public: hkLocalBuffer<int>::hkLocalBuffer<int>(int, char const *);
// public: hkLocalBuffer<int>::~hkLocalBuffer<int>(void);
// public: void hkp3AxisSweep::hkpBpAxis::removeBatch<0>(class hkp3AxisSweep::hkpBpNode *, class hkFixedArray<int> const &);
// public: void hkp3AxisSweep::hkpBpAxis::removeBatch<1>(class hkp3AxisSweep::hkpBpNode *, class hkFixedArray<int> const &);
// public: void hkp3AxisSweep::hkpBpAxis::removeBatch<2>(class hkp3AxisSweep::hkpBpNode *, class hkFixedArray<int> const &);
// void hkAlgorithm::swap<class hkp3AxisSweep::hkpBpNode const *>(class hkp3AxisSweep::hkpBpNode const *&, class hkp3AxisSweep::hkpBpNode const *&);
// public: hkInplaceArray<unsigned short, 256, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned short, 256, struct hkContainerHeapAllocator>(int);
// public: class hkpCollidable *const & hkArrayBase<class hkpCollidable *>::operator[](int) const;
// public: int hkArrayBase<class hkpCollidable *>::getSize(void) const;
// public: struct ValueIntPair<unsigned short> & hkFixedArray<struct ValueIntPair<unsigned short> >::operator[](int);
// public: hkLocalBuffer<struct ValueIntPair<unsigned short> >::hkLocalBuffer<struct ValueIntPair<unsigned short> >(int, char const *);
// public: hkLocalBuffer<struct ValueIntPair<unsigned short> >::~hkLocalBuffer<struct ValueIntPair<unsigned short> >(void);
// void hkAlgorithm::quickSort<struct ValueIntPair<unsigned short> >(struct ValueIntPair<unsigned short> *, int);
// public: unsigned char * hkFixedArray<unsigned char>::begin(void);
// public: hkLocalBuffer<unsigned char>::hkLocalBuffer<unsigned char>(int, char const *);
// public: hkLocalBuffer<unsigned char>::~hkLocalBuffer<unsigned char>(void);
// public: float & hkFixedArray<float>::operator[](int);
// public: hkLocalBuffer<float>::hkLocalBuffer<float>(int, char const *);
// public: hkLocalBuffer<float>::~hkLocalBuffer<float>(void);
// class hkpBroadPhaseCastCollector * hkAddByteOffset<class hkpBroadPhaseCastCollector>(class hkpBroadPhaseCastCollector *, long);
// class hkp3AxisSweep::hkpBpEndPoint const * hkAddByteOffsetConst<class hkp3AxisSweep::hkpBpEndPoint>(class hkp3AxisSweep::hkpBpEndPoint const *, long);
// void hkAlgorithm::swap<class hkp3AxisSweep::hkpBpEndPoint const *>(class hkp3AxisSweep::hkpBpEndPoint const *&, class hkp3AxisSweep::hkpBpEndPoint const *&);
// void hkAlgorithm::swap<unsigned int>(unsigned int &, unsigned int &);
// public: void hkStatisticsCollector::addArray<class hkp3AxisSweep::hkpBpNode>(char const *, class hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<class hkp3AxisSweep::hkpBpEndPoint>(char const *, class hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<unsigned short>(char const *, class hkArray<unsigned short, struct hkContainerHeapAllocator> const &);
// class hkp3AxisSweep::hkpBpNode const ** hkAllocateStack<class hkp3AxisSweep::hkpBpNode const *>(int, char const *);
// void hkDeallocateStack<class hkp3AxisSweep::hkpBpNode const *>(class hkp3AxisSweep::hkpBpNode const **);
// int * hkAllocateStack<int>(int, char const *);
// void hkDeallocateStack<int>(int *);
// public: hkArray<unsigned short, struct hkContainerHeapAllocator>::hkArray<unsigned short, struct hkContainerHeapAllocator>(unsigned short *, int, int);
// public: void hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// protected: hkFixedArray<unsigned int>::hkFixedArray<unsigned int>(void);
// public: void hkPadSpu<unsigned int *>::operator=(unsigned int *);
// public: unsigned int * hkPadSpu<unsigned int *>::val(void) const;
// public: unsigned int * hkPadSpu<unsigned int *>::operator unsigned int *(void) const;
// public: void hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerTempAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerTempAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkRadixSort::SortData16, struct hkContainerTempAllocator>::clearAndDeallocate(void);
// protected: hkFixedArray<class hkp3AxisSweep::hkpBpNode>::hkFixedArray<class hkp3AxisSweep::hkpBpNode>(void);
// public: void hkPadSpu<class hkp3AxisSweep::hkpBpNode *>::operator=(class hkp3AxisSweep::hkpBpNode *);
// public: class hkp3AxisSweep::hkpBpNode * hkPadSpu<class hkp3AxisSweep::hkpBpNode *>::val(void) const;
// public: class hkp3AxisSweep::hkpBpNode * hkPadSpu<class hkp3AxisSweep::hkpBpNode *>::operator class hkp3AxisSweep::hkpBpNode *(void) const;
// protected: hkFixedArray<struct hkRadixSort::SortData16>::hkFixedArray<struct hkRadixSort::SortData16>(void);
// public: void hkPadSpu<struct hkRadixSort::SortData16*>::operator=(struct hkRadixSort::SortData16*);
// public: struct hkRadixSort::SortData16* hkPadSpu<struct hkRadixSort::SortData16*>::val(void) const;
// public: struct hkRadixSort::SortData16* hkPadSpu<struct hkRadixSort::SortData16*>::operator struct hkRadixSort::SortData16*(void) const;
// protected: hkFixedArray<int>::hkFixedArray<int>(void);
// public: void hkPadSpu<int *>::operator=(int *);
// public: int * hkPadSpu<int *>::val(void) const;
// public: int * hkPadSpu<int *>::operator int *(void) const;
// protected: hkFixedArray<struct ValueIntPair<unsigned short> >::hkFixedArray<struct ValueIntPair<unsigned short> >(void);
// public: void hkPadSpu<struct ValueIntPair<unsigned short> *>::operator=(struct ValueIntPair<unsigned short> *);
// public: struct ValueIntPair<unsigned short> * hkPadSpu<struct ValueIntPair<unsigned short> *>::val(void) const;
// public: struct ValueIntPair<unsigned short> * hkPadSpu<struct ValueIntPair<unsigned short> *>::operator struct ValueIntPair<unsigned short> *(void) const;
// protected: hkFixedArray<unsigned char>::hkFixedArray<unsigned char>(void);
// public: void hkPadSpu<unsigned char *>::operator=(unsigned char *);
// public: unsigned char * hkPadSpu<unsigned char *>::val(void) const;
// public: unsigned char * hkPadSpu<unsigned char *>::operator unsigned char *(void) const;
// protected: hkFixedArray<float>::hkFixedArray<float>(void);
// public: void hkPadSpu<float *>::operator=(float *);
// public: float * hkPadSpu<float *>::val(void) const;
// public: float * hkPadSpu<float *>::operator float *(void) const;
// public: hkPadSpu<unsigned int *>::hkPadSpu<unsigned int *>(void);
// public: hkPadSpu<class hkp3AxisSweep::hkpBpNode *>::hkPadSpu<class hkp3AxisSweep::hkpBpNode *>(void);
// public: hkPadSpu<struct hkRadixSort::SortData16*>::hkPadSpu<struct hkRadixSort::SortData16*>(void);
// public: hkPadSpu<int *>::hkPadSpu<int *>(void);
// public: hkPadSpu<struct ValueIntPair<unsigned short> *>::hkPadSpu<struct ValueIntPair<unsigned short> *>(void);
// public: hkPadSpu<unsigned char *>::hkPadSpu<unsigned char *>(void);
// public: hkPadSpu<float *>::hkPadSpu<float *>(void);
// public: hkArrayBase<unsigned short>::hkArrayBase<unsigned short>(unsigned short *, int, int);
// public: void hkArrayBase<unsigned short>::_reserve(class hkMemoryAllocator &, int);
// void hkMemUtil::memCpyOneAligned<2, 2>(void *, void const *);
// public: static void hkArrayUtil::constructWithCopy<unsigned short>(unsigned short *, int, unsigned short const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::construct<unsigned short>(unsigned short *, int, struct hkTraitBool<1>);
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::setOwnedData(class hkp3AxisSweep::hkpBpEndPoint *, int, int);
// public: static void hkArrayUtil::constructWithCopy<class hkp3AxisSweep::hkpBpEndPoint>(class hkp3AxisSweep::hkpBpEndPoint *, int, class hkp3AxisSweep::hkpBpEndPoint const &, struct hkTraitBool<0>);
// public: static void hkArrayUtil::destruct<class hkp3AxisSweep::hkpBpEndPoint>(class hkp3AxisSweep::hkpBpEndPoint *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<class hkp3AxisSweep::hkpBpEndPoint>(class hkp3AxisSweep::hkpBpEndPoint *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode>::setOwnedData(class hkp3AxisSweep::hkpBpNode *, int, int);
// public: static void hkArrayUtil::destruct<class hkp3AxisSweep::hkpBpNode>(class hkp3AxisSweep::hkpBpNode *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<class hkp3AxisSweep::hkpBpNode>(class hkp3AxisSweep::hkpBpNode *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::constructWithCopy<class hkpBroadPhaseHandlePair>(class hkpBroadPhaseHandlePair *, int, class hkpBroadPhaseHandlePair const &, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<class hkpBroadPhaseHandlePair>(class hkpBroadPhaseHandlePair *, int, struct hkTraitBool<0>);
// public: unsigned short & hkp3AxisSweep::hkpBpNode::_getMin<0>(void);
// public: unsigned short & hkp3AxisSweep::hkpBpNode::_getMax<0>(void);
// public: unsigned short & hkp3AxisSweep::hkpBpNode::_getMin<1>(void);
// public: unsigned short & hkp3AxisSweep::hkpBpNode::_getMax<1>(void);
// public: unsigned short & hkp3AxisSweep::hkpBpNode::_getMin<2>(void);
// public: unsigned short & hkp3AxisSweep::hkpBpNode::_getMax<2>(void);
// void hkp3AxisSweep_appendPair<1>(class hkp3AxisSweep::hkpBpNode const &, class hkp3AxisSweep::hkpBpNode const &, class hkp3AxisSweep::hkpBpMarker *, enum hkp3AxisSweep::MarkerHandling, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// void hkp3AxisSweep_appendPair<0>(class hkp3AxisSweep::hkpBpNode const &, class hkp3AxisSweep::hkpBpNode const &, class hkp3AxisSweep::hkpBpMarker *, enum hkp3AxisSweep::MarkerHandling, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &);
// public: int hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::getCapacity(void) const;
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<class hkp3AxisSweep::hkpBpNode const *>(class hkp3AxisSweep::hkpBpNode const **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<class hkp3AxisSweep::hkpBpNode const *>(class hkp3AxisSweep::hkpBpNode const **, int, class hkp3AxisSweep::hkpBpNode const *const &, struct hkTraitBool<1>);
// void hkAlgorithm::quickSort<class hkp3AxisSweep::hkpBpEndPoint, class hkAlgorithm::less<class hkp3AxisSweep::hkpBpEndPoint> >(class hkp3AxisSweep::hkpBpEndPoint *, int, class hkAlgorithm::less<class hkp3AxisSweep::hkpBpEndPoint>);
// public: hkArrayBase<struct hkRadixSort::SortData16>::hkArrayBase<struct hkRadixSort::SortData16>(void);
// public: hkArrayBase<struct hkRadixSort::SortData16>::~hkArrayBase<struct hkRadixSort::SortData16>(void);
// public: void hkArrayBase<struct hkRadixSort::SortData16>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkRadixSort::SortData16>::setOwnedData(struct hkRadixSort::SortData16*, int, int);
// public: static void hkArrayUtil::construct<struct hkRadixSort::SortData16>(struct hkRadixSort::SortData16*, int, struct hkTraitBool<0>);
// class hkp3AxisSweep::hkpBpNode * hkAllocateStack<class hkp3AxisSweep::hkpBpNode>(int, char const *);
// void hkDeallocateStack<class hkp3AxisSweep::hkpBpNode>(class hkp3AxisSweep::hkpBpNode *);
// struct hkRadixSort::SortData16* hkAllocateStack<struct hkRadixSort::SortData16>(int, char const *);
// void hkDeallocateStack<struct hkRadixSort::SortData16>(struct hkRadixSort::SortData16*);
// public: int const & hkFixedArray<int>::operator[](int) const;
// struct ValueIntPair<unsigned short> * hkAllocateStack<struct ValueIntPair<unsigned short> >(int, char const *);
// void hkDeallocateStack<struct ValueIntPair<unsigned short> >(struct ValueIntPair<unsigned short> *);
// void hkAlgorithm::quickSort<struct ValueIntPair<unsigned short>, class hkAlgorithm::less<struct ValueIntPair<unsigned short> > >(struct ValueIntPair<unsigned short> *, int, class hkAlgorithm::less<struct ValueIntPair<unsigned short> >);
// unsigned char * hkAllocateStack<unsigned char>(int, char const *);
// void hkDeallocateStack<unsigned char>(unsigned char *);
// float * hkAllocateStack<float>(int, char const *);
// void hkDeallocateStack<float>(float *);
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::clear(void);
// public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode>::clear(void);
// void hkAlgorithm::quickSortRecursive<class hkp3AxisSweep::hkpBpEndPoint, class hkAlgorithm::less<class hkp3AxisSweep::hkpBpEndPoint> >(class hkp3AxisSweep::hkpBpEndPoint *, int, int, class hkAlgorithm::less<class hkp3AxisSweep::hkpBpEndPoint>);
// public: int hkArrayBase<struct hkRadixSort::SortData16>::getCapacity(void) const;
// public: void hkArrayBase<struct hkRadixSort::SortData16>::clear(void);
// void hkAlgorithm::quickSortRecursive<struct ValueIntPair<unsigned short>, class hkAlgorithm::less<struct ValueIntPair<unsigned short> > >(struct ValueIntPair<unsigned short> *, int, int, class hkAlgorithm::less<struct ValueIntPair<unsigned short> >);
// public: int hkAlgorithm::less<class hkp3AxisSweep::hkpBpEndPoint>::operator()(class hkp3AxisSweep::hkpBpEndPoint const &, class hkp3AxisSweep::hkpBpEndPoint const &);
// public: class hkBool hkp3AxisSweep::hkpBpEndPoint::operator<(class hkp3AxisSweep::hkpBpEndPoint const &) const;
// public: int hkAlgorithm::less<struct ValueIntPair<unsigned short> >::operator()(struct ValueIntPair<unsigned short> const &, struct ValueIntPair<unsigned short> const &);
// public: class hkBool ValueIntPair<unsigned short>::operator<(struct ValueIntPair<unsigned short> const &) const;
// public: static void hkArrayUtil::destruct<struct hkRadixSort::SortData16>(struct hkRadixSort::SortData16*, int, struct hkTraitBool<0>);

//public: virtual enum hkpBroadPhase::BroadPhaseType hkp3AxisSweep::getType(void) const
//{
//    mangled_ppc("?getType@hkp3AxisSweep@@UBA?AW4BroadPhaseType@hkpBroadPhase@@XZ");
//};

//public: static void __fastcall hkp3AxisSweep::beginOverlap(class hkp3AxisSweep::hkpBpNode &, class hkp3AxisSweep::hkpBpNode &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?beginOverlap@hkp3AxisSweep@@SIXAAVhkpBpNode@1@0AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static void __fastcall hkp3AxisSweep::endOverlap(class hkp3AxisSweep::hkpBpNode &, class hkp3AxisSweep::hkpBpNode &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?endOverlap@hkp3AxisSweep@@SIXAAVhkpBpNode@1@0AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static void __fastcall hkp3AxisSweep::beginOverlapCheckMarker(class hkp3AxisSweep::hkpBpMarker *, class hkp3AxisSweep::hkpBpNode &, int, class hkp3AxisSweep::hkpBpNode &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?beginOverlapCheckMarker@hkp3AxisSweep@@SIXPAVhkpBpMarker@1@AAVhkpBpNode@1@H1AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static void __fastcall hkp3AxisSweep::endOverlapCheckMarker(class hkp3AxisSweep::hkpBpMarker *, class hkp3AxisSweep::hkpBpNode &, int, class hkp3AxisSweep::hkpBpNode &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?endOverlapCheckMarker@hkp3AxisSweep@@SIXPAVhkpBpMarker@1@AAVhkpBpNode@1@H1AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkp3AxisSweep::_fixDeterministicOrderAfterNodeIdWasDecreased(int)
//{
//    mangled_ppc("?_fixDeterministicOrderAfterNodeIdWasDecreased@hkp3AxisSweep@@QAAXH@Z");
//};

//public: virtual void hkp3AxisSweep::updateAabbs(class hkpBroadPhaseHandle **const, class hkAabb const *, int, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?updateAabbs@hkp3AxisSweep@@UAAXQAPAVhkpBroadPhaseHandle@@PBVhkAabb@@HAAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@2@Z");
//};

//public: virtual void hkp3AxisSweep::updateAabbsUint32(class hkpBroadPhaseHandle **const, struct hkAabbUint32const *, int, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?updateAabbsUint32@hkp3AxisSweep@@UAAXQAPAVhkpBroadPhaseHandle@@PBUhkAabbUint32@@HAAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@2@Z");
//};

//unsigned int add1SaturateAndSetLowBit(unsigned int)
//{
//    mangled_ppc("?add1SaturateAndSetLowBit@@YAII@Z");
//};

//public: hkp3AxisSweep::hkp3AxisSweep(class hkVector4const &, class hkVector4const &, int)
//{
//    mangled_ppc("??0hkp3AxisSweep@@QAA@ABVhkVector4@@0H@Z");
//};

//public: virtual hkp3AxisSweep::~hkp3AxisSweep(void)
//{
//    mangled_ppc("??1hkp3AxisSweep@@UAA@XZ");
//};

//public: virtual void hkp3AxisSweep::set32BitOffsetAndScale(class hkVector4const &, class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?set32BitOffsetAndScale@hkp3AxisSweep@@UAAXABVhkVector4@@00@Z");
//};

//public: void hkp3AxisSweep::hkpBpAxis::mergeBatch(class hkp3AxisSweep::hkpBpNode *, int, int, int, class hkp3AxisSweep::hkpBpEndPoint *)
//{
//    mangled_ppc("?mergeBatch@hkpBpAxis@hkp3AxisSweep@@QAAXPAVhkpBpNode@2@HHHPAVhkpBpEndPoint@2@@Z");
//};

//public: void hkp3AxisSweep::hkpBpAxis::insert(class hkp3AxisSweep::hkpBpNode *, int, unsigned short, unsigned short, unsigned short &, unsigned short &)
//{
//    mangled_ppc("?insert@hkpBpAxis@hkp3AxisSweep@@QAAXPAVhkpBpNode@2@HGGAAG1@Z");
//};

//public: void hkp3AxisSweep::hkpBpAxis::remove(int, int)
//{
//    mangled_ppc("?remove@hkpBpAxis@hkp3AxisSweep@@QAAXHH@Z");
//};

//protected: void hkp3AxisSweep::updateNodesAfterInsert(class hkp3AxisSweep::hkpBpNode *, int, class hkp3AxisSweep::hkpBpNode &)
//{
//    mangled_ppc("?updateNodesAfterInsert@hkp3AxisSweep@@IAAXPAVhkpBpNode@1@HAAV21@@Z");
//};

//public: void hkp3AxisSweep::collide1Axis(class hkp3AxisSweep::hkpBpNode const *, int, class hkp3AxisSweep::hkpBpNode const *, int, enum hkp3AxisSweep::MarkerHandling, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?collide1Axis@hkp3AxisSweep@@QAAXPBVhkpBpNode@1@H0HW4MarkerHandling@1@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkp3AxisSweep::collide1Axis(class hkp3AxisSweep::hkpBpNode const *, int, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?collide1Axis@hkp3AxisSweep@@QAAXPBVhkpBpNode@1@HAAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//protected: void hkp3AxisSweep::updateNodesAfterBatchTailInsert(class hkp3AxisSweep::hkpBpNode *, int, int, int *)
//{
//    mangled_ppc("?updateNodesAfterBatchTailInsert@hkp3AxisSweep@@IAAXPAVhkpBpNode@1@HHPAH@Z");
//};

//protected: void hkp3AxisSweep::updateNodesAfterDelete(class hkp3AxisSweep::hkpBpNode *, int, class hkp3AxisSweep::hkpBpNode &)
//{
//    mangled_ppc("?updateNodesAfterDelete@hkp3AxisSweep@@IAAXPAVhkpBpNode@1@HAAV21@@Z");
//};

//protected: void hkp3AxisSweep::setBitsBasedOnXInterval(int, int, class hkp3AxisSweep::hkpBpNode const &, unsigned short, unsigned int *) const
//{
//    mangled_ppc("?setBitsBasedOnXInterval@hkp3AxisSweep@@IBAXHHABVhkpBpNode@1@GPAI@Z");
//};

//void memclear16(void *, int)
//{
//    mangled_ppc("?memclear16@@YAXPAXH@Z");
//};

//void staticFlipBit(unsigned int *, int)
//{
//    mangled_ppc("?staticFlipBit@@YAXPAIH@Z");
//};

//void staticClearBit(unsigned int *, int)
//{
//    mangled_ppc("?staticClearBit@@YAXPAIH@Z");
//};

//public: virtual void hkp3AxisSweep::reQuerySingleObject(class hkpBroadPhaseHandle const *, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?reQuerySingleObject@hkp3AxisSweep@@UBAXPBVhkpBroadPhaseHandle@@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual bool hkp3AxisSweep::areAabbsOverlapping(class hkpBroadPhaseHandle const *, class hkpBroadPhaseHandle const *) const
//{
//    mangled_ppc("?areAabbsOverlapping@hkp3AxisSweep@@UBA_NPBVhkpBroadPhaseHandle@@0@Z");
//};

//public: virtual void hkp3AxisSweep::addObject(class hkpBroadPhaseHandle *, struct hkAabbUint32const &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?addObject@hkp3AxisSweep@@UAAXPAVhkpBroadPhaseHandle@@ABUhkAabbUint32@@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void hkp3AxisSweep::addObject(class hkpBroadPhaseHandle *, class hkAabb const &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?addObject@hkp3AxisSweep@@UAAXPAVhkpBroadPhaseHandle@@ABVhkAabb@@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void hkp3AxisSweep::removeObject(class hkpBroadPhaseHandle *, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?removeObject@hkp3AxisSweep@@UAAXPAVhkpBroadPhaseHandle@@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: int hkp3AxisSweep::hkpBpAxis::insertTail(class hkp3AxisSweep::hkpBpNode *, int, class hkp3AxisSweep::hkpBpEndPoint *, int)
//{
//    mangled_ppc("?insertTail@hkpBpAxis@hkp3AxisSweep@@QAAHPAVhkpBpNode@2@HPAVhkpBpEndPoint@2@H@Z");
//};

//public: virtual void hkp3AxisSweep::addObjectBatch(class hkArray<class hkpBroadPhaseHandle *, struct hkContainerHeapAllocator> &, class hkArray<class hkAabb, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?addObjectBatch@hkp3AxisSweep@@UAAXAAV?$hkArray@PAVhkpBroadPhaseHandle@@UhkContainerHeapAllocator@@@@AAV?$hkArray@VhkAabb@@UhkContainerHeapAllocator@@@@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void hkp3AxisSweep::removeObjectBatch(class hkArray<class hkpBroadPhaseHandle *, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?removeObjectBatch@hkp3AxisSweep@@UAAXAAV?$hkArray@PAVhkpBroadPhaseHandle@@UhkContainerHeapAllocator@@@@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual int hkp3AxisSweep::getNumObjects(void) const
//{
//    mangled_ppc("?getNumObjects@hkp3AxisSweep@@UBAHXZ");
//};

//public: virtual void hkp3AxisSweep::getAllAabbs(class hkArray<class hkAabb, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?getAllAabbs@hkp3AxisSweep@@UBAXAAV?$hkArray@VhkAabb@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void hkp3AxisSweep::getAabb(class hkpBroadPhaseHandle const *, class hkAabb &) const
//{
//    mangled_ppc("?getAabb@hkp3AxisSweep@@UBAXPBVhkpBroadPhaseHandle@@AAVhkAabb@@@Z");
//};

//public: virtual void hkp3AxisSweep::getExtents(class hkVector4&, class hkVector4&) const
//{
//    mangled_ppc("?getExtents@hkp3AxisSweep@@UBAXAAVhkVector4@@0@Z");
//};

//public: void hkp3AxisSweep::checkConsistency(void)
//{
//    mangled_ppc("?checkConsistency@hkp3AxisSweep@@QAAXXZ");
//};

//public: class hkp3AxisSweep::hkpBpEndPoint const * hkp3AxisSweep::hkpBpAxis::find(class hkp3AxisSweep::hkpBpEndPoint const *, class hkp3AxisSweep::hkpBpEndPoint const *, unsigned short) const
//{
//    mangled_ppc("?find@hkpBpAxis@hkp3AxisSweep@@QBAPBVhkpBpEndPoint@2@PBV32@0G@Z");
//};

//unsigned short getEpValue(class hkp3AxisSweep::hkpBpEndPoint const *)
//{
//    mangled_ppc("?getEpValue@@YAGPBVhkpBpEndPoint@hkp3AxisSweep@@@Z");
//};

//protected: void hkp3AxisSweep::queryBatchAabbSub(unsigned int const *, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkBool) const
//{
//    mangled_ppc("?queryBatchAabbSub@hkp3AxisSweep@@IBAXPBIAAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@VhkBool@@@Z");
//};

//int staticIsBitSet(unsigned int const *, int)
//{
//    mangled_ppc("?staticIsBitSet@@YAHPBIH@Z");
//};

//public: virtual void hkp3AxisSweep::querySingleAabb(class hkAabb const &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?querySingleAabb@hkp3AxisSweep@@UBAXABVhkAabb@@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void hkp3AxisSweep::querySingleAabbWithCollector(class hkAabb const &, class hkpBroadPhaseCastCollector *) const
//{
//    mangled_ppc("?querySingleAabbWithCollector@hkp3AxisSweep@@UBAXABVhkAabb@@PAVhkpBroadPhaseCastCollector@@@Z");
//};

//public: virtual int hkp3AxisSweep::getAabbCacheSize(void) const
//{
//    mangled_ppc("?getAabbCacheSize@hkp3AxisSweep@@UBAHXZ");
//};

//public: virtual void hkp3AxisSweep::calcAabbCache(class hkAabb const &, char *) const
//{
//    mangled_ppc("?calcAabbCache@hkp3AxisSweep@@UBAXABVhkAabb@@PAD@Z");
//};

//public: virtual void hkp3AxisSweep::calcAabbCache(class hkArray<class hkpCollidable *, struct hkContainerHeapAllocator> const &, char *) const
//{
//    mangled_ppc("?calcAabbCache@hkp3AxisSweep@@UBAXABV?$hkArray@PAVhkpCollidable@@UhkContainerHeapAllocator@@@@PAD@Z");
//};

//protected: void hkp3AxisSweep::calcAabbCacheInternal(class hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator> const &, char *) const
//{
//    mangled_ppc("?calcAabbCacheInternal@hkp3AxisSweep@@IBAXABV?$hkArray@PBVhkpBpNode@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@PAD@Z");
//};

//public: virtual void hkp3AxisSweep::defragment(void)
//{
//    mangled_ppc("?defragment@hkp3AxisSweep@@UAAXXZ");
//};

//public: virtual void hkp3AxisSweep::castRay(struct hkpBroadPhase::hkpCastRayInput const &, class hkpBroadPhaseCastCollector *, int) const
//{
//    mangled_ppc("?castRay@hkp3AxisSweep@@UBAXABUhkpCastRayInput@hkpBroadPhase@@PAVhkpBroadPhaseCastCollector@@H@Z");
//};

//public: virtual void hkp3AxisSweep::castAabb(struct hkpBroadPhase::hkpCastAabbInput const &, class hkpBroadPhaseCastCollector &) const
//{
//    mangled_ppc("?castAabb@hkp3AxisSweep@@UBAXABUhkpCastAabbInput@hkpBroadPhase@@AAVhkpBroadPhaseCastCollector@@@Z");
//};

//protected: void hkp3AxisSweep::getAabbFromNode(class hkp3AxisSweep::hkpBpNode const &, class hkAabb &) const
//{
//    mangled_ppc("?getAabbFromNode@hkp3AxisSweep@@IBAXABVhkpBpNode@1@AAVhkAabb@@@Z");
//};

//public: virtual void hkp3AxisSweep::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkp3AxisSweep@@UBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//public: virtual void hkp3AxisSweep::shiftAllObjects(class hkVector4const &, class hkVector4&, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?shiftAllObjects@hkp3AxisSweep@@UAAXABVhkVector4@@AAV2@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void hkp3AxisSweep::shiftBroadPhase(class hkVector4const &, class hkVector4&, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?shiftBroadPhase@hkp3AxisSweep@@UAAXABVhkVector4@@AAV2@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: class hkAabb const & hkp3AxisSweep::getOriginalAabb(void) const
//{
//    mangled_ppc("?getOriginalAabb@hkp3AxisSweep@@QBAABVhkAabb@@XZ");
//};

//class hkpBroadPhase * hk3AxisSweep16CreateBroadPhase(class hkVector4const &, class hkVector4const &, int)
//{
//    mangled_ppc("?hk3AxisSweep16CreateBroadPhase@@YAPAVhkpBroadPhase@@ABVhkVector4@@0H@Z");
//};

//public: virtual void hkp3AxisSweep::checkDeterminism(void)
//{
//    mangled_ppc("?checkDeterminism@hkp3AxisSweep@@UAAXXZ");
//};

//public: int hkp3AxisSweep::hkpBpNode::isMarker(void) const
//{
//    mangled_ppc("?isMarker@hkpBpNode@hkp3AxisSweep@@QBAHXZ");
//};

//public: class hkp3AxisSweep::hkpBpMarker & hkp3AxisSweep::hkpBpNode::getMarker(class hkp3AxisSweep::hkpBpMarker *) const
//{
//    mangled_ppc("?getMarker@hkpBpNode@hkp3AxisSweep@@QBAAAVhkpBpMarker@2@PAV32@@Z");
//};

//public: void hkp3AxisSweep::_convertAabbToInt(class hkAabb const &, struct hkAabbUint32&) const
//{
//    mangled_ppc("?_convertAabbToInt@hkp3AxisSweep@@QBAXABVhkAabb@@AAUhkAabbUint32@@@Z");
//};

//public: static void hkp3AxisSweep::_convertAabbToInt(class hkAabb const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, struct hkAabbUint32&)
//{
//    mangled_ppc("?_convertAabbToInt@hkp3AxisSweep@@SAXABVhkAabb@@ABVhkVector4@@11AAUhkAabbUint32@@@Z");
//};

//void hkVector4Util::convertToUint16WithClip(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, union hkIntUnion64&)
//{
//    mangled_ppc("?convertToUint16WithClip@hkVector4Util@@YAXABVhkVector4@@0000AAThkIntUnion64@@@Z");
//};

//public: void hkp3AxisSweep::updateAabb(class hkpBroadPhaseHandle *, struct hkAabbUint32const &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?updateAabb@hkp3AxisSweep@@QAAXPAVhkpBroadPhaseHandle@@ABUhkAabbUint32@@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@2@Z");
//};

//public: void hkp3AxisSweep::convertAabbToBroadPhaseResolution(struct hkAabbUint32const &, struct hkAabbUint32&)
//{
//    mangled_ppc("?convertAabbToBroadPhaseResolution@hkp3AxisSweep@@QAAXABUhkAabbUint32@@AAU2@@Z");
//};

//public: static void * hkp3AxisSweep::hkpBpMarker::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkpBpMarker@hkp3AxisSweep@@SAPAXIPAX@Z");
//};

//public: hkp3AxisSweep::hkpBpAxis::hkpBpAxis(void)
//{
//    mangled_ppc("??0hkpBpAxis@hkp3AxisSweep@@QAA@XZ");
//};

//merged_83F89610
//{
//    mangled_ppc("merged_83F89610");
//};

//public: hkp3AxisSweep::hkpBpMarker::hkpBpMarker(void)
//{
//    mangled_ppc("??0hkpBpMarker@hkp3AxisSweep@@QAA@XZ");
//};

//public: int hkp3AxisSweep::getNumMarkers(void) const
//{
//    mangled_ppc("?getNumMarkers@hkp3AxisSweep@@QBAHXZ");
//};

//public: hkp3AxisSweep::hkpBpAxis::~hkpBpAxis(void)
//{
//    mangled_ppc("??1hkpBpAxis@hkp3AxisSweep@@QAA@XZ");
//};

//public: void * hkp3AxisSweep::hkpBpMarker::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GhkpBpMarker@hkp3AxisSweep@@QAAPAXI@Z");
//};

//public: static void hkp3AxisSweep::hkpBpMarker::operator delete(void *)
//{
//    mangled_ppc("??3hkpBpMarker@hkp3AxisSweep@@SAXPAX@Z");
//};

//public: hkp3AxisSweep::hkpBpMarker::~hkpBpMarker(void)
//{
//    mangled_ppc("??1hkpBpMarker@hkp3AxisSweep@@QAA@XZ");
//};

//public: void hkp3AxisSweep::hkpBpNode::setElem(int, int, int)
//{
//    mangled_ppc("?setElem@hkpBpNode@hkp3AxisSweep@@QAAXHHH@Z");
//};

//public: int hkp3AxisSweep::hkpBpEndPoint::isMaxPoint(void) const
//{
//    mangled_ppc("?isMaxPoint@hkpBpEndPoint@hkp3AxisSweep@@QBAHXZ");
//};

//void hkVector4Util::exitMmx(void)
//{
//    mangled_ppc("?exitMmx@hkVector4Util@@YAXXZ");
//};

//public: unsigned int hkp3AxisSweep::hkpBpNode::yzDisjoint(class hkp3AxisSweep::hkpBpNode const &) const
//{
//    mangled_ppc("?yzDisjoint@hkpBpNode@hkp3AxisSweep@@QBAIABV12@@Z");
//};

//public: int hkp3AxisSweep::hkpBpNode::xyDisjoint(class hkp3AxisSweep::hkpBpNode const &) const
//{
//    mangled_ppc("?xyDisjoint@hkpBpNode@hkp3AxisSweep@@QBAHABV12@@Z");
//};

//protected: void hkp3AxisSweep::querySingleAabbAddObject(class hkpBroadPhaseHandle *, int, unsigned int const *, class hkp3AxisSweep::hkpBpNode &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?querySingleAabbAddObject@hkp3AxisSweep@@IBAXPAVhkpBroadPhaseHandle@@HPBIAAVhkpBpNode@1@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//void hkVector4Util::convertAabbToUint32(class hkAabb const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, struct hkAabbUint32&)
//{
//    mangled_ppc("?convertAabbToUint32@hkVector4Util@@YAXABVhkAabb@@ABVhkVector4@@11AAUhkAabbUint32@@@Z");
//};

//void hkVector4Util::convertToUint32WithClip(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, unsigned int *)
//{
//    mangled_ppc("?convertToUint32WithClip@hkVector4Util@@YAXABVhkVector4@@0000PAI@Z");
//};

//protected: void hkp3AxisSweep::querySingleAabbRemoveObject(class hkpBroadPhaseHandle *, int, unsigned int const *, class hkp3AxisSweep::hkpBpNode &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?querySingleAabbRemoveObject@hkp3AxisSweep@@IBAXPAVhkpBroadPhaseHandle@@HPBIAAVhkpBpNode@1@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: class hkSimdReal hkVector4::length4(void) const
//{
//    mangled_ppc("?length4@hkVector4@@QBA?AVhkSimdReal@@XZ");
//};

//void hkMath::prefetch128(void const *)
//{
//    mangled_ppc("?prefetch128@hkMath@@YAXPBX@Z");
//};

//public: class hkBool hkBool::operator!=(bool) const
//{
//    mangled_ppc("??9hkBool@@QBA?AV0@_N@Z");
//};

//public: unsigned short & hkp3AxisSweep::hkpBpNode::getMin(int)
//{
//    mangled_ppc("?getMin@hkpBpNode@hkp3AxisSweep@@QAAAAGH@Z");
//};

//public: unsigned short & hkp3AxisSweep::hkpBpNode::getMax(int)
//{
//    mangled_ppc("?getMax@hkpBpNode@hkp3AxisSweep@@QAAAAGH@Z");
//};

//protected: void hkp3AxisSweep::addNodePair(class hkp3AxisSweep::hkpBpNode const *, class hkp3AxisSweep::hkpBpNode const *, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkBool) const
//{
//    mangled_ppc("?addNodePair@hkp3AxisSweep@@IBAXPBVhkpBpNode@1@0AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@VhkBool@@@Z");
//};

//protected: void hkp3AxisSweep::_querySingleAabb(class hkAabb const &, enum hkp3AxisSweep::hkpBpQuerySingleType, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> *, class hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator> *, class hkpBroadPhaseCastCollector *) const
//{
//    mangled_ppc("?_querySingleAabb@hkp3AxisSweep@@IBAXABVhkAabb@@W4hkpBpQuerySingleType@1@PAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@PAV?$hkArray@PBVhkpBpNode@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@PAVhkpBroadPhaseCastCollector@@@Z");
//};

//protected: void hkp3AxisSweep::querySingleAabbSub(class hkpBroadPhaseHandle *, unsigned int const *, class hkp3AxisSweep::hkpBpNode &, enum hkp3AxisSweep::hkpBpQuerySingleType, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> *, class hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator> *, class hkpBroadPhaseCastCollector *) const
//{
//    mangled_ppc("?querySingleAabbSub@hkp3AxisSweep@@IBAXPAVhkpBroadPhaseHandle@@PBIAAVhkpBpNode@1@W4hkpBpQuerySingleType@1@PAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@PAV?$hkArray@PBVhkpBpNode@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@PAVhkpBroadPhaseCastCollector@@@Z");
//};

//public: hkp3AxisSweep::hkpBpAxis::hkpBpAxis(class hkp3AxisSweep::hkpBpEndPoint *, int)
//{
//    mangled_ppc("??0hkpBpAxis@hkp3AxisSweep@@QAA@PAVhkpBpEndPoint@1@H@Z");
//};

//public: static void * hkp3AxisSweep::hkpBpAxis::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkpBpAxis@hkp3AxisSweep@@SAPAXIPAX@Z");
//};

//public: void hkp3AxisSweep::convertVectorToInt(class hkVector4const &, unsigned int *) const
//{
//    mangled_ppc("?convertVectorToInt@hkp3AxisSweep@@QBAXABVhkVector4@@PAI@Z");
//};

//void calcCurDist(int, class hkVector4&, class hkp3AxisSweep::hkpBpEndPoint const *, class hkVector4&, class hkVector4&)
//{
//    mangled_ppc("?calcCurDist@@YAXHAAVhkVector4@@PBVhkpBpEndPoint@hkp3AxisSweep@@00@Z");
//};

//int getMinComponent(class hkVector4const &, float &)
//{
//    mangled_ppc("?getMinComponent@@YAHABVhkVector4@@AAM@Z");
//};

//public: int hkVector4::allLessThan3(class hkVector4const &) const
//{
//    mangled_ppc("?allLessThan3@hkVector4@@QBAHABV1@@Z");
//};

//public: static void * hkpBroadPhase::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpBroadPhase@@SAPAXI@Z");
//};

//public: void hkArray<unsigned short, struct hkContainerHeapAllocator>::pushBack(unsigned short const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@GUhkContainerHeapAllocator@@@@QAAXABG@Z");
//};

//public: void hkArray<unsigned short, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@GUhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>::hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@VhkpBpEndPoint@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>::hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>(class hkp3AxisSweep::hkpBpEndPoint *, int, int)
//{
//    mangled_ppc("??0?$hkArray@VhkpBpEndPoint@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAA@PAVhkpBpEndPoint@hkp3AxisSweep@@HH@Z");
//};

//public: void hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@VhkpBpEndPoint@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>::hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@VhkpBpNode@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@VhkpBpNode@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: class hkp3AxisSweep::hkpBpNode & hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@VhkpBpNode@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAAAAVhkpBpNode@hkp3AxisSweep@@XZ");
//};

//public: class hkp3AxisSweep::hkpBpNode * hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>::expandBy(int)
//{
//    mangled_ppc("?expandBy@?$hkArray@VhkpBpNode@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAAPAVhkpBpNode@hkp3AxisSweep@@H@Z");
//};

//public: hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator>::hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator>::pushBack(class hkpBroadPhaseHandlePair const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@QAAXABVhkpBroadPhaseHandlePair@@@Z");
//};

//public: class hkpBroadPhaseHandlePair & hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@QAAAAVhkpBroadPhaseHandlePair@@XZ");
//};

//public: void hkArray<class hkAabb, struct hkContainerHeapAllocator>::reserveExactly(int)
//{
//    mangled_ppc("?reserveExactly@?$hkArray@VhkAabb@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkLocalArray<class hkp3AxisSweep::hkpBpNode const *>::hkLocalArray<class hkp3AxisSweep::hkpBpNode const *>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@PBVhkpBpNode@hkp3AxisSweep@@@@QAA@H@Z");
//};

//public: hkLocalArray<class hkp3AxisSweep::hkpBpNode const *>::~hkLocalArray<class hkp3AxisSweep::hkpBpNode const *>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@PBVhkpBpNode@hkp3AxisSweep@@@@QAA@XZ");
//};

//public: hkLocalArray<int>::hkLocalArray<int>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@H@@QAA@H@Z");
//};

//public: hkLocalArray<int>::~hkLocalArray<int>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@H@@QAA@XZ");
//};

//public: hkInplaceArray<unsigned short, 256, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned short, 256, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@G$0BAA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: class hkBool hkLocalArray<class hkp3AxisSweep::hkpBpNode const *>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@PBVhkpBpNode@hkp3AxisSweep@@@@QBA?AVhkBool@@XZ");
//};

//public: hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator>::hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PBVhkpBpNode@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: class hkBool hkLocalArray<int>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@H@@QBA?AVhkBool@@XZ");
//};

//public: void hkArrayBase<unsigned short>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@G@@QAAXH@Z");
//};

//public: int hkArrayBase<unsigned short>::indexOf(unsigned short const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@G@@QBAHABGHH@Z");
//};

//public: void hkArrayBase<unsigned short>::_pushBack(class hkMemoryAllocator &, unsigned short const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@G@@QAAXAAVhkMemoryAllocator@@ABG@Z");
//};

//public: void hkArrayBase<unsigned short>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@G@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: unsigned short * hkArrayBase<unsigned short>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@G@@QAAPAGXZ");
//};

//public: hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>(class hkp3AxisSweep::hkpBpEndPoint *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QAA@PAVhkpBpEndPoint@hkp3AxisSweep@@HH@Z");
//};

//public: hkAabb::hkAabb(class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("??0hkAabb@@QAA@ABVhkVector4@@0@Z");
//};

//public: hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QAA@XZ");
//};

//public: class hkp3AxisSweep::hkpBpEndPoint const & hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QBAABVhkpBpEndPoint@hkp3AxisSweep@@H@Z");
//};

//public: int hkAabb::containsPoint(class hkVector4const &) const
//{
//    mangled_ppc("?containsPoint@hkAabb@@QBAHABVhkVector4@@@Z");
//};

//public: class hkp3AxisSweep::hkpBpEndPoint & hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QAAAAVhkpBpEndPoint@hkp3AxisSweep@@H@Z");
//};

//public: class hkp3AxisSweep::hkpBpEndPoint const & hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::back(void) const
//{
//    mangled_ppc("?back@?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QBAABVhkpBpEndPoint@hkp3AxisSweep@@XZ");
//};

//public: int hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::pushBackUnchecked(class hkp3AxisSweep::hkpBpEndPoint const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QAAXABVhkpBpEndPoint@hkp3AxisSweep@@@Z");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::setSizeUnchecked(int)
//{
//    mangled_ppc("?setSizeUnchecked@?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QAAXH@Z");
//};

//public: class hkp3AxisSweep::hkpBpEndPoint const * hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QBAPBVhkpBpEndPoint@hkp3AxisSweep@@XZ");
//};

//public: class hkp3AxisSweep::hkpBpEndPoint * hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QAAPAVhkpBpEndPoint@hkp3AxisSweep@@XZ");
//};

//public: class hkp3AxisSweep::hkpBpEndPoint const * hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::end(void) const
//{
//    mangled_ppc("?end@?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QBAPBVhkpBpEndPoint@hkp3AxisSweep@@XZ");
//};

//public: class hkp3AxisSweep::hkpBpEndPoint * hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::end(void)
//{
//    mangled_ppc("?end@?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QAAPAVhkpBpEndPoint@hkp3AxisSweep@@XZ");
//};

//public: hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>::~hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@VhkpBpEndPoint@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::~hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkp3AxisSweep::hkpBpNode>::hkArrayBase<class hkp3AxisSweep::hkpBpNode>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QAA@XZ");
//};

//public: class hkp3AxisSweep::hkpBpNode const & hkArrayBase<class hkp3AxisSweep::hkpBpNode>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QBAABVhkpBpNode@hkp3AxisSweep@@H@Z");
//};

//public: class hkp3AxisSweep::hkpBpNode & hkArrayBase<class hkp3AxisSweep::hkpBpNode>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QAAAAVhkpBpNode@hkp3AxisSweep@@H@Z");
//};

//public: int hkArrayBase<class hkp3AxisSweep::hkpBpNode>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode>::setSizeUnchecked(int)
//{
//    mangled_ppc("?setSizeUnchecked@?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QAAXH@Z");
//};

//public: class hkp3AxisSweep::hkpBpNode & hkArrayBase<class hkp3AxisSweep::hkpBpNode>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QAAAAVhkpBpNode@hkp3AxisSweep@@AAVhkMemoryAllocator@@@Z");
//};

//public: class hkp3AxisSweep::hkpBpNode * hkArrayBase<class hkp3AxisSweep::hkpBpNode>::_expandBy(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_expandBy@?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QAAPAVhkpBpNode@hkp3AxisSweep@@AAVhkMemoryAllocator@@H@Z");
//};

//public: class hkp3AxisSweep::hkpBpNode const * hkArrayBase<class hkp3AxisSweep::hkpBpNode>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QBAPBVhkpBpNode@hkp3AxisSweep@@XZ");
//};

//public: class hkp3AxisSweep::hkpBpNode * hkArrayBase<class hkp3AxisSweep::hkpBpNode>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QAAPAVhkpBpNode@hkp3AxisSweep@@XZ");
//};

//public: class hkp3AxisSweep::hkpBpNode * hkArrayBase<class hkp3AxisSweep::hkpBpNode>::end(void)
//{
//    mangled_ppc("?end@?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QAAPAVhkpBpNode@hkp3AxisSweep@@XZ");
//};

//public: hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>::~hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@VhkpBpNode@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkp3AxisSweep::hkpBpNode>::~hkArrayBase<class hkp3AxisSweep::hkpBpNode>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QAA@XZ");
//};

//unsigned short * hkAddByteOffset<unsigned short>(unsigned short *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@G@@YAPAGPAGJ@Z");
//};

//class hkp3AxisSweep::hkpBpMarker * hkAddByteOffset<class hkp3AxisSweep::hkpBpMarker>(class hkp3AxisSweep::hkpBpMarker *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@VhkpBpMarker@hkp3AxisSweep@@@@YAPAVhkpBpMarker@hkp3AxisSweep@@PAV01@J@Z");
//};

//public: hkArrayBase<class hkpBroadPhaseHandlePair>::hkArrayBase<class hkpBroadPhaseHandlePair>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@VhkpBroadPhaseHandlePair@@@@QAA@XZ");
//};

//public: class hkBool hkArrayBase<class hkpBroadPhaseHandlePair>::isEmpty(void) const
//{
//    mangled_ppc("?isEmpty@?$hkArrayBase@VhkpBroadPhaseHandlePair@@@@QBA?AVhkBool@@XZ");
//};

//public: void hkArrayBase<class hkpBroadPhaseHandlePair>::_pushBack(class hkMemoryAllocator &, class hkpBroadPhaseHandlePair const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@VhkpBroadPhaseHandlePair@@@@QAAXAAVhkMemoryAllocator@@ABVhkpBroadPhaseHandlePair@@@Z");
//};

//public: class hkpBroadPhaseHandlePair & hkArrayBase<class hkpBroadPhaseHandlePair>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@VhkpBroadPhaseHandlePair@@@@QAAAAVhkpBroadPhaseHandlePair@@AAVhkMemoryAllocator@@@Z");
//};

//void _fixDeterministicAxisOrderAfterNodeIdWasDecreased<0>(class hkp3AxisSweep *, class hkp3AxisSweep::hkpBpNode *, class hkp3AxisSweep::hkpBpNode &, unsigned int)
//{
//    mangled_ppc("??$_fixDeterministicAxisOrderAfterNodeIdWasDecreased@$0A@@@YAXPAVhkp3AxisSweep@@PAVhkpBpNode@0@AAV10@I@Z");
//};

//void _fixDeterministicAxisOrderAfterNodeIdWasDecreased<1>(class hkp3AxisSweep *, class hkp3AxisSweep::hkpBpNode *, class hkp3AxisSweep::hkpBpNode &, unsigned int)
//{
//    mangled_ppc("??$_fixDeterministicAxisOrderAfterNodeIdWasDecreased@$00@@YAXPAVhkp3AxisSweep@@PAVhkpBpNode@0@AAV10@I@Z");
//};

//void _fixDeterministicAxisOrderAfterNodeIdWasDecreased<2>(class hkp3AxisSweep *, class hkp3AxisSweep::hkpBpNode *, class hkp3AxisSweep::hkpBpNode &, unsigned int)
//{
//    mangled_ppc("??$_fixDeterministicAxisOrderAfterNodeIdWasDecreased@$01@@YAXPAVhkp3AxisSweep@@PAVhkpBpNode@0@AAV10@I@Z");
//};

//void _updateAxis<0, 1>(class hkp3AxisSweep *, class hkp3AxisSweep::hkpBpNode *, class hkp3AxisSweep::hkpBpNode &, unsigned int, unsigned int, unsigned int, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("??$_updateAxis@$0A@$00@@YAXPAVhkp3AxisSweep@@PAVhkpBpNode@0@AAV10@IIIAAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@3@Z");
//};

//public: static int hkp3AxisSweep::hkpBpEndPoint::isMaxPoint(int)
//{
//    mangled_ppc("?isMaxPoint@hkpBpEndPoint@hkp3AxisSweep@@SAHH@Z");
//};

//public: int hkp3AxisSweep::hkpBpNode::xzDisjoint(class hkp3AxisSweep::hkpBpNode const &) const
//{
//    mangled_ppc("?xzDisjoint@hkpBpNode@hkp3AxisSweep@@QBAHABV12@@Z");
//};

//void _updateAxis<1, 0>(class hkp3AxisSweep *, class hkp3AxisSweep::hkpBpNode *, class hkp3AxisSweep::hkpBpNode &, unsigned int, unsigned int, unsigned int, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("??$_updateAxis@$00$0A@@@YAXPAVhkp3AxisSweep@@PAVhkpBpNode@0@AAV10@IIIAAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@3@Z");
//};

//void _updateAxis<2, 0>(class hkp3AxisSweep *, class hkp3AxisSweep::hkpBpNode *, class hkp3AxisSweep::hkpBpNode &, unsigned int, unsigned int, unsigned int, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("??$_updateAxis@$01$0A@@@YAXPAVhkp3AxisSweep@@PAVhkpBpNode@0@AAV10@IIIAAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@3@Z");
//};

//class hkp3AxisSweep::hkpBpMarker * hkAllocate<class hkp3AxisSweep::hkpBpMarker>(int, int)
//{
//    mangled_ppc("??$hkAllocate@VhkpBpMarker@hkp3AxisSweep@@@@YAPAVhkpBpMarker@hkp3AxisSweep@@HH@Z");
//};

//void hkDeallocate<class hkp3AxisSweep::hkpBpMarker>(class hkp3AxisSweep::hkpBpMarker *)
//{
//    mangled_ppc("??$hkDeallocate@VhkpBpMarker@hkp3AxisSweep@@@@YAXPAVhkpBpMarker@hkp3AxisSweep@@@Z");
//};

//void hkp3AxisSweep_scanList<1>(class hkp3AxisSweep::hkpBpNode const &, unsigned int *, class hkp3AxisSweep::hkpBpNode &volatile, class hkp3AxisSweep::hkpBpMarker *, enum hkp3AxisSweep::MarkerHandling, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("??$hkp3AxisSweep_scanList@$00@@YAXABVhkpBpNode@hkp3AxisSweep@@PIBV01@PAVhkpBpMarker@1@W4MarkerHandling@1@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//void hkp3AxisSweep_scanList<0>(class hkp3AxisSweep::hkpBpNode const &, unsigned int *, class hkp3AxisSweep::hkpBpNode &volatile, class hkp3AxisSweep::hkpBpMarker *, enum hkp3AxisSweep::MarkerHandling, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("??$hkp3AxisSweep_scanList@$0A@@@YAXABVhkpBpNode@hkp3AxisSweep@@PIBV01@PAVhkpBpMarker@1@W4MarkerHandling@1@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//unsigned int * hkAllocateStack<unsigned int>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@I@@YAPAIHPBD@Z");
//};

//void hkDeallocateStack<unsigned int>(unsigned int *)
//{
//    mangled_ppc("??$hkDeallocateStack@I@@YAXPAI@Z");
//};

//public: unsigned int * hkFixedArray<unsigned int>::begin(void)
//{
//    mangled_ppc("?begin@?$hkFixedArray@I@@QAAPAIXZ");
//};

//public: hkLocalBuffer<unsigned int>::hkLocalBuffer<unsigned int>(int, char const *)
//{
//    mangled_ppc("??0?$hkLocalBuffer@I@@QAA@HPBD@Z");
//};

//public: hkLocalBuffer<unsigned int>::~hkLocalBuffer<unsigned int>(void)
//{
//    mangled_ppc("??1?$hkLocalBuffer@I@@QAA@XZ");
//};

//public: void hkArrayBase<class hkAabb>::_reserveExactly(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserveExactly@?$hkArrayBase@VhkAabb@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: class hkpBroadPhaseHandle *& hkArrayBase<class hkpBroadPhaseHandle *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpBroadPhaseHandle@@@@QAAAAPAVhkpBroadPhaseHandle@@H@Z");
//};

//public: int hkArrayBase<class hkpBroadPhaseHandle *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpBroadPhaseHandle@@@@QBAHXZ");
//};

//public: hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerTempAllocator>::hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerTempAllocator>(int)
//{
//    mangled_ppc("??0?$hkArray@VhkpBpEndPoint@hkp3AxisSweep@@UhkContainerTempAllocator@@@@QAA@H@Z");
//};

//public: hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerTempAllocator>::~hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@VhkpBpEndPoint@hkp3AxisSweep@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PBVhkpBpNode@hkp3AxisSweep@@@@QAA@XZ");
//};

//public: class hkp3AxisSweep::hkpBpNode const *& hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PBVhkpBpNode@hkp3AxisSweep@@@@QAAAAPBVhkpBpNode@hkp3AxisSweep@@H@Z");
//};

//public: int hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PBVhkpBpNode@hkp3AxisSweep@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PBVhkpBpNode@hkp3AxisSweep@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::pushBackUnchecked(class hkp3AxisSweep::hkpBpNode const *const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@PBVhkpBpNode@hkp3AxisSweep@@@@QAAXABQBVhkpBpNode@hkp3AxisSweep@@@Z");
//};

//public: class hkp3AxisSweep::hkpBpNode const *const * hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PBVhkpBpNode@hkp3AxisSweep@@@@QBAPBQBVhkpBpNode@hkp3AxisSweep@@XZ");
//};

//public: hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator>::~hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PBVhkpBpNode@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::~hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PBVhkpBpNode@hkp3AxisSweep@@@@QAA@XZ");
//};

//void hkAlgorithm::quickSort<class hkp3AxisSweep::hkpBpEndPoint>(class hkp3AxisSweep::hkpBpEndPoint *, int)
//{
//    mangled_ppc("??$quickSort@VhkpBpEndPoint@hkp3AxisSweep@@@hkAlgorithm@@YAXPAVhkpBpEndPoint@hkp3AxisSweep@@H@Z");
//};

//public: void hkp3AxisSweep::hkpBpAxis::mergeRest<0>(class hkp3AxisSweep::hkpBpNode *, int, class hkp3AxisSweep::hkpBpEndPoint *, int)
//{
//    mangled_ppc("??$mergeRest@$0A@@hkpBpAxis@hkp3AxisSweep@@QAAXPAVhkpBpNode@1@HPAVhkpBpEndPoint@1@H@Z");
//};

//public: void hkp3AxisSweep::hkpBpAxis::mergeRest<1>(class hkp3AxisSweep::hkpBpNode *, int, class hkp3AxisSweep::hkpBpEndPoint *, int)
//{
//    mangled_ppc("??$mergeRest@$00@hkpBpAxis@hkp3AxisSweep@@QAAXPAVhkpBpNode@1@HPAVhkpBpEndPoint@1@H@Z");
//};

//public: void hkp3AxisSweep::hkpBpAxis::mergeRest<2>(class hkp3AxisSweep::hkpBpNode *, int, class hkp3AxisSweep::hkpBpEndPoint *, int)
//{
//    mangled_ppc("??$mergeRest@$01@hkpBpAxis@hkp3AxisSweep@@QAAXPAVhkpBpNode@1@HPAVhkpBpEndPoint@1@H@Z");
//};

//public: hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerTempAllocator>::hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerTempAllocator>(int)
//{
//    mangled_ppc("??0?$hkArray@VhkpBpNode@hkp3AxisSweep@@UhkContainerTempAllocator@@@@QAA@H@Z");
//};

//public: hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerTempAllocator>::~hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@VhkpBpNode@hkp3AxisSweep@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: struct hkRadixSort::SortData16& hkArrayBase<struct hkRadixSort::SortData16>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@USortData16@hkRadixSort@@@@QAAAAUSortData16@hkRadixSort@@H@Z");
//};

//public: struct hkRadixSort::SortData16* hkArrayBase<struct hkRadixSort::SortData16>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@USortData16@hkRadixSort@@@@QAAPAUSortData16@hkRadixSort@@XZ");
//};

//public: hkArray<struct hkRadixSort::SortData16, struct hkContainerTempAllocator>::hkArray<struct hkRadixSort::SortData16, struct hkContainerTempAllocator>(int)
//{
//    mangled_ppc("??0?$hkArray@USortData16@hkRadixSort@@UhkContainerTempAllocator@@@@QAA@H@Z");
//};

//public: hkArray<struct hkRadixSort::SortData16, struct hkContainerTempAllocator>::~hkArray<struct hkRadixSort::SortData16, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@USortData16@hkRadixSort@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: class hkp3AxisSweep::hkpBpNode & hkFixedArray<class hkp3AxisSweep::hkpBpNode>::operator[](int)
//{
//    mangled_ppc("??A?$hkFixedArray@VhkpBpNode@hkp3AxisSweep@@@@QAAAAVhkpBpNode@hkp3AxisSweep@@H@Z");
//};

//public: class hkp3AxisSweep::hkpBpNode * hkFixedArray<class hkp3AxisSweep::hkpBpNode>::begin(void)
//{
//    mangled_ppc("?begin@?$hkFixedArray@VhkpBpNode@hkp3AxisSweep@@@@QAAPAVhkpBpNode@hkp3AxisSweep@@XZ");
//};

//public: hkLocalBuffer<class hkp3AxisSweep::hkpBpNode>::hkLocalBuffer<class hkp3AxisSweep::hkpBpNode>(int, char const *)
//{
//    mangled_ppc("??0?$hkLocalBuffer@VhkpBpNode@hkp3AxisSweep@@@@QAA@HPBD@Z");
//};

//public: hkLocalBuffer<class hkp3AxisSweep::hkpBpNode>::~hkLocalBuffer<class hkp3AxisSweep::hkpBpNode>(void)
//{
//    mangled_ppc("??1?$hkLocalBuffer@VhkpBpNode@hkp3AxisSweep@@@@QAA@XZ");
//};

//public: struct hkRadixSort::SortData16& hkFixedArray<struct hkRadixSort::SortData16>::operator[](int)
//{
//    mangled_ppc("??A?$hkFixedArray@USortData16@hkRadixSort@@@@QAAAAUSortData16@hkRadixSort@@H@Z");
//};

//public: struct hkRadixSort::SortData16* hkFixedArray<struct hkRadixSort::SortData16>::begin(void)
//{
//    mangled_ppc("?begin@?$hkFixedArray@USortData16@hkRadixSort@@@@QAAPAUSortData16@hkRadixSort@@XZ");
//};

//public: hkLocalBuffer<struct hkRadixSort::SortData16>::hkLocalBuffer<struct hkRadixSort::SortData16>(int, char const *)
//{
//    mangled_ppc("??0?$hkLocalBuffer@USortData16@hkRadixSort@@@@QAA@HPBD@Z");
//};

//public: hkLocalBuffer<struct hkRadixSort::SortData16>::~hkLocalBuffer<struct hkRadixSort::SortData16>(void)
//{
//    mangled_ppc("??1?$hkLocalBuffer@USortData16@hkRadixSort@@@@QAA@XZ");
//};

//unsigned short hkMath::min2<unsigned short>(unsigned short, unsigned short)
//{
//    mangled_ppc("??$min2@G@hkMath@@YAGGG@Z");
//};

//unsigned short hkMath::max2<unsigned short>(unsigned short, unsigned short)
//{
//    mangled_ppc("??$max2@G@hkMath@@YAGGG@Z");
//};

//public: void hkArrayBase<int>::pushBackUnchecked(int const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@H@@QAAXABH@Z");
//};

//public: int & hkFixedArray<int>::operator[](int)
//{
//    mangled_ppc("??A?$hkFixedArray@H@@QAAAAHH@Z");
//};

//public: hkLocalBuffer<int>::hkLocalBuffer<int>(int, char const *)
//{
//    mangled_ppc("??0?$hkLocalBuffer@H@@QAA@HPBD@Z");
//};

//public: hkLocalBuffer<int>::~hkLocalBuffer<int>(void)
//{
//    mangled_ppc("??1?$hkLocalBuffer@H@@QAA@XZ");
//};

//public: void hkp3AxisSweep::hkpBpAxis::removeBatch<0>(class hkp3AxisSweep::hkpBpNode *, class hkFixedArray<int> const &)
//{
//    mangled_ppc("??$removeBatch@$0A@@hkpBpAxis@hkp3AxisSweep@@QAAXPAVhkpBpNode@1@ABV?$hkFixedArray@H@@@Z");
//};

//public: void hkp3AxisSweep::hkpBpAxis::removeBatch<1>(class hkp3AxisSweep::hkpBpNode *, class hkFixedArray<int> const &)
//{
//    mangled_ppc("??$removeBatch@$00@hkpBpAxis@hkp3AxisSweep@@QAAXPAVhkpBpNode@1@ABV?$hkFixedArray@H@@@Z");
//};

//public: void hkp3AxisSweep::hkpBpAxis::removeBatch<2>(class hkp3AxisSweep::hkpBpNode *, class hkFixedArray<int> const &)
//{
//    mangled_ppc("??$removeBatch@$01@hkpBpAxis@hkp3AxisSweep@@QAAXPAVhkpBpNode@1@ABV?$hkFixedArray@H@@@Z");
//};

//void hkAlgorithm::swap<class hkp3AxisSweep::hkpBpNode const *>(class hkp3AxisSweep::hkpBpNode const *&, class hkp3AxisSweep::hkpBpNode const *&)
//{
//    mangled_ppc("??$swap@PBVhkpBpNode@hkp3AxisSweep@@@hkAlgorithm@@YAXAAPBVhkpBpNode@hkp3AxisSweep@@0@Z");
//};

//public: hkInplaceArray<unsigned short, 256, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned short, 256, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@G$0BAA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: class hkpCollidable *const & hkArrayBase<class hkpCollidable *>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpCollidable@@@@QBAABQAVhkpCollidable@@H@Z");
//};

//public: int hkArrayBase<class hkpCollidable *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpCollidable@@@@QBAHXZ");
//};

//public: struct ValueIntPair<unsigned short> & hkFixedArray<struct ValueIntPair<unsigned short> >::operator[](int)
//{
//    mangled_ppc("??A?$hkFixedArray@U?$ValueIntPair@G@@@@QAAAAU?$ValueIntPair@G@@H@Z");
//};

//public: hkLocalBuffer<struct ValueIntPair<unsigned short> >::hkLocalBuffer<struct ValueIntPair<unsigned short> >(int, char const *)
//{
//    mangled_ppc("??0?$hkLocalBuffer@U?$ValueIntPair@G@@@@QAA@HPBD@Z");
//};

//public: hkLocalBuffer<struct ValueIntPair<unsigned short> >::~hkLocalBuffer<struct ValueIntPair<unsigned short> >(void)
//{
//    mangled_ppc("??1?$hkLocalBuffer@U?$ValueIntPair@G@@@@QAA@XZ");
//};

//void hkAlgorithm::quickSort<struct ValueIntPair<unsigned short> >(struct ValueIntPair<unsigned short> *, int)
//{
//    mangled_ppc("??$quickSort@U?$ValueIntPair@G@@@hkAlgorithm@@YAXPAU?$ValueIntPair@G@@H@Z");
//};

//public: unsigned char * hkFixedArray<unsigned char>::begin(void)
//{
//    mangled_ppc("?begin@?$hkFixedArray@E@@QAAPAEXZ");
//};

//public: hkLocalBuffer<unsigned char>::hkLocalBuffer<unsigned char>(int, char const *)
//{
//    mangled_ppc("??0?$hkLocalBuffer@E@@QAA@HPBD@Z");
//};

//public: hkLocalBuffer<unsigned char>::~hkLocalBuffer<unsigned char>(void)
//{
//    mangled_ppc("??1?$hkLocalBuffer@E@@QAA@XZ");
//};

//public: float & hkFixedArray<float>::operator[](int)
//{
//    mangled_ppc("??A?$hkFixedArray@M@@QAAAAMH@Z");
//};

//public: hkLocalBuffer<float>::hkLocalBuffer<float>(int, char const *)
//{
//    mangled_ppc("??0?$hkLocalBuffer@M@@QAA@HPBD@Z");
//};

//public: hkLocalBuffer<float>::~hkLocalBuffer<float>(void)
//{
//    mangled_ppc("??1?$hkLocalBuffer@M@@QAA@XZ");
//};

//class hkpBroadPhaseCastCollector * hkAddByteOffset<class hkpBroadPhaseCastCollector>(class hkpBroadPhaseCastCollector *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@VhkpBroadPhaseCastCollector@@@@YAPAVhkpBroadPhaseCastCollector@@PAV0@J@Z");
//};

//class hkp3AxisSweep::hkpBpEndPoint const * hkAddByteOffsetConst<class hkp3AxisSweep::hkpBpEndPoint>(class hkp3AxisSweep::hkpBpEndPoint const *, long)
//{
//    mangled_ppc("??$hkAddByteOffsetConst@VhkpBpEndPoint@hkp3AxisSweep@@@@YAPBVhkpBpEndPoint@hkp3AxisSweep@@PBV01@J@Z");
//};

//void hkAlgorithm::swap<class hkp3AxisSweep::hkpBpEndPoint const *>(class hkp3AxisSweep::hkpBpEndPoint const *&, class hkp3AxisSweep::hkpBpEndPoint const *&)
//{
//    mangled_ppc("??$swap@PBVhkpBpEndPoint@hkp3AxisSweep@@@hkAlgorithm@@YAXAAPBVhkpBpEndPoint@hkp3AxisSweep@@0@Z");
//};

//void hkAlgorithm::swap<unsigned int>(unsigned int &, unsigned int &)
//{
//    mangled_ppc("??$swap@I@hkAlgorithm@@YAXAAI0@Z");
//};

//public: void hkStatisticsCollector::addArray<class hkp3AxisSweep::hkpBpNode>(char const *, class hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@VhkpBpNode@hkp3AxisSweep@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@VhkpBpNode@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<class hkp3AxisSweep::hkpBpEndPoint>(char const *, class hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@VhkpBpEndPoint@hkp3AxisSweep@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@VhkpBpEndPoint@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<unsigned short>(char const *, class hkArray<unsigned short, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@G@hkStatisticsCollector@@QAAXPBDABV?$hkArray@GUhkContainerHeapAllocator@@@@@Z");
//};

//class hkp3AxisSweep::hkpBpNode const ** hkAllocateStack<class hkp3AxisSweep::hkpBpNode const *>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@PBVhkpBpNode@hkp3AxisSweep@@@@YAPAPBVhkpBpNode@hkp3AxisSweep@@HPBD@Z");
//};

//void hkDeallocateStack<class hkp3AxisSweep::hkpBpNode const *>(class hkp3AxisSweep::hkpBpNode const **)
//{
//    mangled_ppc("??$hkDeallocateStack@PBVhkpBpNode@hkp3AxisSweep@@@@YAXPAPBVhkpBpNode@hkp3AxisSweep@@@Z");
//};

//int * hkAllocateStack<int>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@H@@YAPAHHPBD@Z");
//};

//void hkDeallocateStack<int>(int *)
//{
//    mangled_ppc("??$hkDeallocateStack@H@@YAXPAH@Z");
//};

//public: hkArray<unsigned short, struct hkContainerHeapAllocator>::hkArray<unsigned short, struct hkContainerHeapAllocator>(unsigned short *, int, int)
//{
//    mangled_ppc("??0?$hkArray@GUhkContainerHeapAllocator@@@@QAA@PAGHH@Z");
//};

//public: void hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@VhkpBpEndPoint@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@VhkpBpNode@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//protected: hkFixedArray<unsigned int>::hkFixedArray<unsigned int>(void)
//{
//    mangled_ppc("??0?$hkFixedArray@I@@IAA@XZ");
//};

//public: void hkPadSpu<unsigned int *>::operator=(unsigned int *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAI@@QAAXPAI@Z");
//};

//public: unsigned int * hkPadSpu<unsigned int *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAI@@QBAPAIXZ");
//};

//public: unsigned int * hkPadSpu<unsigned int *>::operator unsigned int *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAI@@QBAPAIXZ");
//};

//public: void hkArray<class hkp3AxisSweep::hkpBpEndPoint, struct hkContainerTempAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@VhkpBpEndPoint@hkp3AxisSweep@@UhkContainerTempAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkp3AxisSweep::hkpBpNode const *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PBVhkpBpNode@hkp3AxisSweep@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkp3AxisSweep::hkpBpNode, struct hkContainerTempAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@VhkpBpNode@hkp3AxisSweep@@UhkContainerTempAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkRadixSort::SortData16, struct hkContainerTempAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@USortData16@hkRadixSort@@UhkContainerTempAllocator@@@@QAAXXZ");
//};

//protected: hkFixedArray<class hkp3AxisSweep::hkpBpNode>::hkFixedArray<class hkp3AxisSweep::hkpBpNode>(void)
//{
//    mangled_ppc("??0?$hkFixedArray@VhkpBpNode@hkp3AxisSweep@@@@IAA@XZ");
//};

//public: void hkPadSpu<class hkp3AxisSweep::hkpBpNode *>::operator=(class hkp3AxisSweep::hkpBpNode *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAVhkpBpNode@hkp3AxisSweep@@@@QAAXPAVhkpBpNode@hkp3AxisSweep@@@Z");
//};

//public: class hkp3AxisSweep::hkpBpNode * hkPadSpu<class hkp3AxisSweep::hkpBpNode *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAVhkpBpNode@hkp3AxisSweep@@@@QBAPAVhkpBpNode@hkp3AxisSweep@@XZ");
//};

//public: class hkp3AxisSweep::hkpBpNode * hkPadSpu<class hkp3AxisSweep::hkpBpNode *>::operator class hkp3AxisSweep::hkpBpNode *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAVhkpBpNode@hkp3AxisSweep@@@@QBAPAVhkpBpNode@hkp3AxisSweep@@XZ");
//};

//protected: hkFixedArray<struct hkRadixSort::SortData16>::hkFixedArray<struct hkRadixSort::SortData16>(void)
//{
//    mangled_ppc("??0?$hkFixedArray@USortData16@hkRadixSort@@@@IAA@XZ");
//};

//public: void hkPadSpu<struct hkRadixSort::SortData16*>::operator=(struct hkRadixSort::SortData16*)
//{
//    mangled_ppc("??4?$hkPadSpu@PAUSortData16@hkRadixSort@@@@QAAXPAUSortData16@hkRadixSort@@@Z");
//};

//public: struct hkRadixSort::SortData16* hkPadSpu<struct hkRadixSort::SortData16*>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAUSortData16@hkRadixSort@@@@QBAPAUSortData16@hkRadixSort@@XZ");
//};

//public: struct hkRadixSort::SortData16* hkPadSpu<struct hkRadixSort::SortData16*>::operator struct hkRadixSort::SortData16*(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAUSortData16@hkRadixSort@@@@QBAPAUSortData16@hkRadixSort@@XZ");
//};

//protected: hkFixedArray<int>::hkFixedArray<int>(void)
//{
//    mangled_ppc("??0?$hkFixedArray@H@@IAA@XZ");
//};

//public: void hkPadSpu<int *>::operator=(int *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAH@@QAAXPAH@Z");
//};

//public: int * hkPadSpu<int *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAH@@QBAPAHXZ");
//};

//public: int * hkPadSpu<int *>::operator int *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAH@@QBAPAHXZ");
//};

//protected: hkFixedArray<struct ValueIntPair<unsigned short> >::hkFixedArray<struct ValueIntPair<unsigned short> >(void)
//{
//    mangled_ppc("??0?$hkFixedArray@U?$ValueIntPair@G@@@@IAA@XZ");
//};

//public: void hkPadSpu<struct ValueIntPair<unsigned short> *>::operator=(struct ValueIntPair<unsigned short> *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAU?$ValueIntPair@G@@@@QAAXPAU?$ValueIntPair@G@@@Z");
//};

//public: struct ValueIntPair<unsigned short> * hkPadSpu<struct ValueIntPair<unsigned short> *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAU?$ValueIntPair@G@@@@QBAPAU?$ValueIntPair@G@@XZ");
//};

//public: struct ValueIntPair<unsigned short> * hkPadSpu<struct ValueIntPair<unsigned short> *>::operator struct ValueIntPair<unsigned short> *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAU?$ValueIntPair@G@@@@QBAPAU?$ValueIntPair@G@@XZ");
//};

//protected: hkFixedArray<unsigned char>::hkFixedArray<unsigned char>(void)
//{
//    mangled_ppc("??0?$hkFixedArray@E@@IAA@XZ");
//};

//public: void hkPadSpu<unsigned char *>::operator=(unsigned char *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAE@@QAAXPAE@Z");
//};

//public: unsigned char * hkPadSpu<unsigned char *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAE@@QBAPAEXZ");
//};

//public: unsigned char * hkPadSpu<unsigned char *>::operator unsigned char *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAE@@QBAPAEXZ");
//};

//protected: hkFixedArray<float>::hkFixedArray<float>(void)
//{
//    mangled_ppc("??0?$hkFixedArray@M@@IAA@XZ");
//};

//public: void hkPadSpu<float *>::operator=(float *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAM@@QAAXPAM@Z");
//};

//public: float * hkPadSpu<float *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAM@@QBAPAMXZ");
//};

//public: float * hkPadSpu<float *>::operator float *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAM@@QBAPAMXZ");
//};

//public: hkPadSpu<unsigned int *>::hkPadSpu<unsigned int *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAI@@QAA@XZ");
//};

//public: hkPadSpu<class hkp3AxisSweep::hkpBpNode *>::hkPadSpu<class hkp3AxisSweep::hkpBpNode *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAVhkpBpNode@hkp3AxisSweep@@@@QAA@XZ");
//};

//public: hkPadSpu<struct hkRadixSort::SortData16*>::hkPadSpu<struct hkRadixSort::SortData16*>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAUSortData16@hkRadixSort@@@@QAA@XZ");
//};

//public: hkPadSpu<int *>::hkPadSpu<int *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAH@@QAA@XZ");
//};

//public: hkPadSpu<struct ValueIntPair<unsigned short> *>::hkPadSpu<struct ValueIntPair<unsigned short> *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAU?$ValueIntPair@G@@@@QAA@XZ");
//};

//public: hkPadSpu<unsigned char *>::hkPadSpu<unsigned char *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAE@@QAA@XZ");
//};

//public: hkPadSpu<float *>::hkPadSpu<float *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAM@@QAA@XZ");
//};

//public: hkArrayBase<unsigned short>::hkArrayBase<unsigned short>(unsigned short *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@G@@QAA@PAGHH@Z");
//};

//public: void hkArrayBase<unsigned short>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@G@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//void hkMemUtil::memCpyOneAligned<2, 2>(void *, void const *)
//{
//    mangled_ppc("??$memCpyOneAligned@$01$01@hkMemUtil@@YAXPAXPBX@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<unsigned short>(unsigned short *, int, unsigned short const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@G@hkArrayUtil@@SAXPAGHABGU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::construct<unsigned short>(unsigned short *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@G@hkArrayUtil@@SAXPAGHU?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::setOwnedData(class hkp3AxisSweep::hkpBpEndPoint *, int, int)
//{
//    mangled_ppc("?setOwnedData@?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QAAXPAVhkpBpEndPoint@hkp3AxisSweep@@HH@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkp3AxisSweep::hkpBpEndPoint>(class hkp3AxisSweep::hkpBpEndPoint *, int, class hkp3AxisSweep::hkpBpEndPoint const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@VhkpBpEndPoint@hkp3AxisSweep@@@hkArrayUtil@@SAXPAVhkpBpEndPoint@hkp3AxisSweep@@HABV12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkp3AxisSweep::hkpBpEndPoint>(class hkp3AxisSweep::hkpBpEndPoint *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@VhkpBpEndPoint@hkp3AxisSweep@@@hkArrayUtil@@SAXPAVhkpBpEndPoint@hkp3AxisSweep@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkp3AxisSweep::hkpBpEndPoint>(class hkp3AxisSweep::hkpBpEndPoint *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@VhkpBpEndPoint@hkp3AxisSweep@@@hkArrayUtil@@SAXPAVhkpBpEndPoint@hkp3AxisSweep@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode>::setOwnedData(class hkp3AxisSweep::hkpBpNode *, int, int)
//{
//    mangled_ppc("?setOwnedData@?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QAAXPAVhkpBpNode@hkp3AxisSweep@@HH@Z");
//};

//public: static void hkArrayUtil::destruct<class hkp3AxisSweep::hkpBpNode>(class hkp3AxisSweep::hkpBpNode *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@VhkpBpNode@hkp3AxisSweep@@@hkArrayUtil@@SAXPAVhkpBpNode@hkp3AxisSweep@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkp3AxisSweep::hkpBpNode>(class hkp3AxisSweep::hkpBpNode *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@VhkpBpNode@hkp3AxisSweep@@@hkArrayUtil@@SAXPAVhkpBpNode@hkp3AxisSweep@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpBroadPhaseHandlePair>(class hkpBroadPhaseHandlePair *, int, class hkpBroadPhaseHandlePair const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@VhkpBroadPhaseHandlePair@@@hkArrayUtil@@SAXPAVhkpBroadPhaseHandlePair@@HABV1@U?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkpBroadPhaseHandlePair>(class hkpBroadPhaseHandlePair *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@VhkpBroadPhaseHandlePair@@@hkArrayUtil@@SAXPAVhkpBroadPhaseHandlePair@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: unsigned short & hkp3AxisSweep::hkpBpNode::_getMin<0>(void)
//{
//    mangled_ppc("??$_getMin@$0A@@hkpBpNode@hkp3AxisSweep@@QAAAAGXZ");
//};

//public: unsigned short & hkp3AxisSweep::hkpBpNode::_getMax<0>(void)
//{
//    mangled_ppc("??$_getMax@$0A@@hkpBpNode@hkp3AxisSweep@@QAAAAGXZ");
//};

//public: unsigned short & hkp3AxisSweep::hkpBpNode::_getMin<1>(void)
//{
//    mangled_ppc("??$_getMin@$00@hkpBpNode@hkp3AxisSweep@@QAAAAGXZ");
//};

//public: unsigned short & hkp3AxisSweep::hkpBpNode::_getMax<1>(void)
//{
//    mangled_ppc("??$_getMax@$00@hkpBpNode@hkp3AxisSweep@@QAAAAGXZ");
//};

//public: unsigned short & hkp3AxisSweep::hkpBpNode::_getMin<2>(void)
//{
//    mangled_ppc("??$_getMin@$01@hkpBpNode@hkp3AxisSweep@@QAAAAGXZ");
//};

//public: unsigned short & hkp3AxisSweep::hkpBpNode::_getMax<2>(void)
//{
//    mangled_ppc("??$_getMax@$01@hkpBpNode@hkp3AxisSweep@@QAAAAGXZ");
//};

//void hkp3AxisSweep_appendPair<1>(class hkp3AxisSweep::hkpBpNode const &, class hkp3AxisSweep::hkpBpNode const &, class hkp3AxisSweep::hkpBpMarker *, enum hkp3AxisSweep::MarkerHandling, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("??$hkp3AxisSweep_appendPair@$00@@YAXABVhkpBpNode@hkp3AxisSweep@@0PAVhkpBpMarker@1@W4MarkerHandling@1@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//void hkp3AxisSweep_appendPair<0>(class hkp3AxisSweep::hkpBpNode const &, class hkp3AxisSweep::hkpBpNode const &, class hkp3AxisSweep::hkpBpMarker *, enum hkp3AxisSweep::MarkerHandling, class hkArray<class hkpBroadPhaseHandlePair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("??$hkp3AxisSweep_appendPair@$0A@@@YAXABVhkpBpNode@hkp3AxisSweep@@0PAVhkpBpMarker@1@W4MarkerHandling@1@AAV?$hkArray@VhkpBroadPhaseHandlePair@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: int hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PBVhkpBpNode@hkp3AxisSweep@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode const *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PBVhkpBpNode@hkp3AxisSweep@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkp3AxisSweep::hkpBpNode const *>(class hkp3AxisSweep::hkpBpNode const **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PBVhkpBpNode@hkp3AxisSweep@@@hkArrayUtil@@SAXPAPBVhkpBpNode@hkp3AxisSweep@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkp3AxisSweep::hkpBpNode const *>(class hkp3AxisSweep::hkpBpNode const **, int, class hkp3AxisSweep::hkpBpNode const *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PBVhkpBpNode@hkp3AxisSweep@@@hkArrayUtil@@SAXPAPBVhkpBpNode@hkp3AxisSweep@@HABQBV12@U?$hkTraitBool@$00@@@Z");
//};

//void hkAlgorithm::quickSort<class hkp3AxisSweep::hkpBpEndPoint, class hkAlgorithm::less<class hkp3AxisSweep::hkpBpEndPoint> >(class hkp3AxisSweep::hkpBpEndPoint *, int, class hkAlgorithm::less<class hkp3AxisSweep::hkpBpEndPoint>)
//{
//    mangled_ppc("??$quickSort@VhkpBpEndPoint@hkp3AxisSweep@@V?$less@VhkpBpEndPoint@hkp3AxisSweep@@@hkAlgorithm@@@hkAlgorithm@@YAXPAVhkpBpEndPoint@hkp3AxisSweep@@HV?$less@VhkpBpEndPoint@hkp3AxisSweep@@@0@@Z");
//};

//public: hkArrayBase<struct hkRadixSort::SortData16>::hkArrayBase<struct hkRadixSort::SortData16>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@USortData16@hkRadixSort@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkRadixSort::SortData16>::~hkArrayBase<struct hkRadixSort::SortData16>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@USortData16@hkRadixSort@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkRadixSort::SortData16>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@USortData16@hkRadixSort@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkRadixSort::SortData16>::setOwnedData(struct hkRadixSort::SortData16*, int, int)
//{
//    mangled_ppc("?setOwnedData@?$hkArrayBase@USortData16@hkRadixSort@@@@QAAXPAUSortData16@hkRadixSort@@HH@Z");
//};

//public: static void hkArrayUtil::construct<struct hkRadixSort::SortData16>(struct hkRadixSort::SortData16*, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@USortData16@hkRadixSort@@@hkArrayUtil@@SAXPAUSortData16@hkRadixSort@@HU?$hkTraitBool@$0A@@@@Z");
//};

//class hkp3AxisSweep::hkpBpNode * hkAllocateStack<class hkp3AxisSweep::hkpBpNode>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@VhkpBpNode@hkp3AxisSweep@@@@YAPAVhkpBpNode@hkp3AxisSweep@@HPBD@Z");
//};

//void hkDeallocateStack<class hkp3AxisSweep::hkpBpNode>(class hkp3AxisSweep::hkpBpNode *)
//{
//    mangled_ppc("??$hkDeallocateStack@VhkpBpNode@hkp3AxisSweep@@@@YAXPAVhkpBpNode@hkp3AxisSweep@@@Z");
//};

//struct hkRadixSort::SortData16* hkAllocateStack<struct hkRadixSort::SortData16>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@USortData16@hkRadixSort@@@@YAPAUSortData16@hkRadixSort@@HPBD@Z");
//};

//void hkDeallocateStack<struct hkRadixSort::SortData16>(struct hkRadixSort::SortData16*)
//{
//    mangled_ppc("??$hkDeallocateStack@USortData16@hkRadixSort@@@@YAXPAUSortData16@hkRadixSort@@@Z");
//};

//public: int const & hkFixedArray<int>::operator[](int) const
//{
//    mangled_ppc("??A?$hkFixedArray@H@@QBAABHH@Z");
//};

//struct ValueIntPair<unsigned short> * hkAllocateStack<struct ValueIntPair<unsigned short> >(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@U?$ValueIntPair@G@@@@YAPAU?$ValueIntPair@G@@HPBD@Z");
//};

//void hkDeallocateStack<struct ValueIntPair<unsigned short> >(struct ValueIntPair<unsigned short> *)
//{
//    mangled_ppc("??$hkDeallocateStack@U?$ValueIntPair@G@@@@YAXPAU?$ValueIntPair@G@@@Z");
//};

//void hkAlgorithm::quickSort<struct ValueIntPair<unsigned short>, class hkAlgorithm::less<struct ValueIntPair<unsigned short> > >(struct ValueIntPair<unsigned short> *, int, class hkAlgorithm::less<struct ValueIntPair<unsigned short> >)
//{
//    mangled_ppc("??$quickSort@U?$ValueIntPair@G@@V?$less@U?$ValueIntPair@G@@@hkAlgorithm@@@hkAlgorithm@@YAXPAU?$ValueIntPair@G@@HV?$less@U?$ValueIntPair@G@@@0@@Z");
//};

//unsigned char * hkAllocateStack<unsigned char>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@E@@YAPAEHPBD@Z");
//};

//void hkDeallocateStack<unsigned char>(unsigned char *)
//{
//    mangled_ppc("??$hkDeallocateStack@E@@YAXPAE@Z");
//};

//float * hkAllocateStack<float>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@M@@YAPAMHPBD@Z");
//};

//void hkDeallocateStack<float>(float *)
//{
//    mangled_ppc("??$hkDeallocateStack@M@@YAXPAM@Z");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpEndPoint>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@VhkpBpEndPoint@hkp3AxisSweep@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkp3AxisSweep::hkpBpNode>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@VhkpBpNode@hkp3AxisSweep@@@@QAAXXZ");
//};

//void hkAlgorithm::quickSortRecursive<class hkp3AxisSweep::hkpBpEndPoint, class hkAlgorithm::less<class hkp3AxisSweep::hkpBpEndPoint> >(class hkp3AxisSweep::hkpBpEndPoint *, int, int, class hkAlgorithm::less<class hkp3AxisSweep::hkpBpEndPoint>)
//{
//    mangled_ppc("??$quickSortRecursive@VhkpBpEndPoint@hkp3AxisSweep@@V?$less@VhkpBpEndPoint@hkp3AxisSweep@@@hkAlgorithm@@@hkAlgorithm@@YAXPAVhkpBpEndPoint@hkp3AxisSweep@@HHV?$less@VhkpBpEndPoint@hkp3AxisSweep@@@0@@Z");
//};

//public: int hkArrayBase<struct hkRadixSort::SortData16>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@USortData16@hkRadixSort@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkRadixSort::SortData16>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@USortData16@hkRadixSort@@@@QAAXXZ");
//};

//void hkAlgorithm::quickSortRecursive<struct ValueIntPair<unsigned short>, class hkAlgorithm::less<struct ValueIntPair<unsigned short> > >(struct ValueIntPair<unsigned short> *, int, int, class hkAlgorithm::less<struct ValueIntPair<unsigned short> >)
//{
//    mangled_ppc("??$quickSortRecursive@U?$ValueIntPair@G@@V?$less@U?$ValueIntPair@G@@@hkAlgorithm@@@hkAlgorithm@@YAXPAU?$ValueIntPair@G@@HHV?$less@U?$ValueIntPair@G@@@0@@Z");
//};

//public: int hkAlgorithm::less<class hkp3AxisSweep::hkpBpEndPoint>::operator()(class hkp3AxisSweep::hkpBpEndPoint const &, class hkp3AxisSweep::hkpBpEndPoint const &)
//{
//    mangled_ppc("??R?$less@VhkpBpEndPoint@hkp3AxisSweep@@@hkAlgorithm@@QAAHABVhkpBpEndPoint@hkp3AxisSweep@@0@Z");
//};

//public: class hkBool hkp3AxisSweep::hkpBpEndPoint::operator<(class hkp3AxisSweep::hkpBpEndPoint const &) const
//{
//    mangled_ppc("??MhkpBpEndPoint@hkp3AxisSweep@@QBA?AVhkBool@@ABV01@@Z");
//};

//public: int hkAlgorithm::less<struct ValueIntPair<unsigned short> >::operator()(struct ValueIntPair<unsigned short> const &, struct ValueIntPair<unsigned short> const &)
//{
//    mangled_ppc("??R?$less@U?$ValueIntPair@G@@@hkAlgorithm@@QAAHABU?$ValueIntPair@G@@0@Z");
//};

//public: class hkBool ValueIntPair<unsigned short>::operator<(struct ValueIntPair<unsigned short> const &) const
//{
//    mangled_ppc("??M?$ValueIntPair@G@@QBA?AVhkBool@@ABU0@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkRadixSort::SortData16>(struct hkRadixSort::SortData16*, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@USortData16@hkRadixSort@@@hkArrayUtil@@SAXPAUSortData16@hkRadixSort@@HU?$hkTraitBool@$0A@@@@Z");
//};

