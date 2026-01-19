/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkpExtendedMeshShape::`vftable'{for `hkpShapeContainer'}; // "??_7hkpExtendedMeshShape@@6BhkpShapeContainer@@@"
// const hkpExtendedMeshShape::`vftable'{for `hkpShape'}; // "??_7hkpExtendedMeshShape@@6BhkpShape@@@"
// const hkpExtendedMeshShape::`RTTI Complete Object Locator'{for `hkpShape'}; // "??_R4hkpExtendedMeshShape@@6BhkpShape@@@"
// const hkpExtendedMeshShape::`RTTI Complete Object Locator'{for `hkpShapeContainer'}; // "??_R4hkpExtendedMeshShape@@6BhkpShapeContainer@@@"
// public: static float hkpExtendedMeshShape::m_triangleDengeneracyTolerance; // "?m_triangleDengeneracyTolerance@hkpExtendedMeshShape@@2MA"

// public: hkpExtendedMeshShape::hkpExtendedMeshShape(float, int);
// public: hkpExtendedMeshShape::hkpExtendedMeshShape(class hkpMeshShape const *);
// public: virtual hkpExtendedMeshShape::~hkpExtendedMeshShape(void);
// public: hkpExtendedMeshShape::hkpExtendedMeshShape(class hkFinishLoadedObjectFlag);
// public: virtual void hkpExtendedMeshShape::setWeldingInfo(unsigned int, short);
// public: virtual void hkpExtendedMeshShape::initWeldingInfo(enum hkpWeldingUtility::WeldingType);
// public: virtual int hkpExtendedMeshShape::getNumChildShapes(void) const;
// public: virtual unsigned int hkpExtendedMeshShape::getFirstKey(void) const;
// public: virtual unsigned int hkpExtendedMeshShape::getNextKey(unsigned int) const;
// protected: int hkpExtendedMeshShape::_getNumChildShapesInTrianglesSubpart(struct hkpExtendedMeshShape::TrianglesSubpart const &, int) const;
// protected: int hkpExtendedMeshShape::_getNumChildShapesInShapesSubpart(struct hkpExtendedMeshShape::ShapesSubpart const &) const;
// public: virtual class hkpShape const * hkpExtendedMeshShape::getChildShape(unsigned int, char (&)[512]) const;
// public: class hkpMeshMaterial const * hkpExtendedMeshShape::getMeshMaterial(unsigned int) const;
// public: virtual unsigned int hkpExtendedMeshShape::getCollisionFilterInfo(unsigned int) const;
// public: virtual void hkpExtendedMeshShape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const;
// public: void hkpExtendedMeshShape::recalcAabbExtents(void);
// void calcAabbExtents(struct hkpExtendedMeshShape::TrianglesSubpart const &, class hkVector4&, class hkAabb &);
// void addToAabb(class hkAabb &, class hkTransform const &, float const *, class hkVector4const &);
// void calcAabbExtents(struct hkpExtendedMeshShape::ShapesSubpart const &, class hkAabb &);
// public: void hkpExtendedMeshShape::setScaling(class hkVector4const &);
// protected: void hkpExtendedMeshShape::assertTrianglesSubpartValidity(struct hkpExtendedMeshShape::TrianglesSubpart const &);
// protected: void hkpExtendedMeshShape::assertShapesSubpartValidity(struct hkpExtendedMeshShape::ShapesSubpart const &);
// public: virtual void hkpExtendedMeshShape::addTrianglesSubpart(struct hkpExtendedMeshShape::TrianglesSubpart const &);
// public: virtual int hkpExtendedMeshShape::addShapesSubpart(struct hkpExtendedMeshShape::ShapesSubpart const &);
// public: hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart(class hkFinishLoadedObjectFlag);
// public: hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart(class hkpConvexShape const *const *, int, class hkVector4const &);
// public: hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart(class hkpConvexShape const *const *, int, class hkTransform const &);
// public: hkpExtendedMeshShape::ShapesSubpart::~ShapesSubpart(void);
// public: virtual int hkpExtendedMeshShape::calcSizeForSpu(struct hkpShape::CalcSizeForSpuInput const &, int) const;
// protected: struct hkpExtendedMeshShape::TrianglesSubpart * hkpExtendedMeshShape::expandOneTriangleSubparts(void);
// protected: struct hkpExtendedMeshShape::ShapesSubpart * hkpExtendedMeshShape::expandOneShapesSubparts(void);
// protected: void hkpExtendedMeshShape::freeTriangleSubparts(void);
// protected: void hkpExtendedMeshShape::freeShapesSubparts(void);
// public: hkpExtendedMeshShape::TrianglesSubpart::TrianglesSubpart(void);
// public: hkpExtendedMeshShape::Subpart::Subpart(enum hkpExtendedMeshShape::SubpartType);
// merged_83FC8540;
// public: int hkpExtendedMeshShape::getSubPartIndex(unsigned int) const;
// public: int hkpExtendedMeshShape::getTerminalIndexInSubPart(unsigned int) const;
// public: void hkpTriangleShape::setType(void);
// public: void hkpTriangleShape::setExtrusion(class hkVector4const &);
// public: int hkpExtendedMeshShape::ShapesSubpart::getFlags(void) const;
// public: class hkVector4const & hkpExtendedMeshShape::ShapesSubpart::getTranslation(void) const;
// public: class hkQuaternion const & hkpExtendedMeshShape::ShapesSubpart::getRotation(void) const;
// public: void hkpExtendedMeshShape::ShapesSubpart::setFlags(int);
// public: enum hkpMeshShape::MeshShapeIndexStridingType hkEnum<enum hkpMeshShape::MeshShapeIndexStridingType, signed char>::operator enum hkpMeshShape::MeshShapeIndexStridingType(void) const;
// public: void hkEnum<enum hkpExtendedMeshShape::SubpartType, signed char>::operator=(enum hkpExtendedMeshShape::SubpartType);
// public: hkTransform::hkTransform(class hkQuaternion const &, class hkVector4const &);
// public: void hkEnum<enum hkpExtendedMeshShape::MaterialIndexStridingType, signed char>::operator=(enum hkpExtendedMeshShape::MaterialIndexStridingType);
// public: enum hkpExtendedMeshShape::IndexStridingType hkEnum<enum hkpExtendedMeshShape::IndexStridingType, signed char>::operator enum hkpExtendedMeshShape::IndexStridingType(void) const;
// public: void hkEnum<enum hkpExtendedMeshShape::IndexStridingType, signed char>::operator=(enum hkpExtendedMeshShape::IndexStridingType);
// public: hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>::hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>(void);
// public: hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>::hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag);
// public: class hkRefPtr<class hkpConvexShape> * hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>::expandBy(int);
// public: hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>::hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>::hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag);
// public: void hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>::setSize(int);
// public: struct hkpExtendedMeshShape::TrianglesSubpart * hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>::expandBy(int);
// public: hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>::hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>::hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag);
// public: struct hkpExtendedMeshShape::ShapesSubpart * hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>::expandBy(int);
// public: hkArrayBase<class hkRefPtr<class hkpConvexShape> >::hkArrayBase<class hkRefPtr<class hkpConvexShape> >(class hkFinishLoadedObjectFlag);
// public: hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>(class hkFinishLoadedObjectFlag);
// public: hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>(class hkFinishLoadedObjectFlag);
// public: hkArrayBase<class hkRefPtr<class hkpConvexShape> >::hkArrayBase<class hkRefPtr<class hkpConvexShape> >(void);
// public: class hkRefPtr<class hkpConvexShape> const & hkArrayBase<class hkRefPtr<class hkpConvexShape> >::operator[](int) const;
// public: class hkRefPtr<class hkpConvexShape> * hkArrayBase<class hkRefPtr<class hkpConvexShape> >::_expandBy(class hkMemoryAllocator &, int);
// public: class hkRefPtr<class hkpConvexShape> * hkArrayBase<class hkRefPtr<class hkpConvexShape> >::begin(void);
// public: hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>::~hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkRefPtr<class hkpConvexShape> >::~hkArrayBase<class hkRefPtr<class hkpConvexShape> >(void);
// public: hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>(void);
// public: void hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::_setSize(class hkMemoryAllocator &, int);
// public: struct hkpExtendedMeshShape::TrianglesSubpart * hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::_expandBy(class hkMemoryAllocator &, int);
// public: struct hkpExtendedMeshShape::TrianglesSubpart const * hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::begin(void) const;
// public: struct hkpExtendedMeshShape::TrianglesSubpart * hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::begin(void);
// public: void hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::setOwnedData(struct hkpExtendedMeshShape::TrianglesSubpart *, int, int);
// public: hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>::~hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::~hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>(void);
// public: hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>(void);
// public: struct hkpExtendedMeshShape::ShapesSubpart * hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::_expandBy(class hkMemoryAllocator &, int);
// public: struct hkpExtendedMeshShape::ShapesSubpart const * hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::begin(void) const;
// public: hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>::~hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::~hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>(void);
// void hkMemUtil::memCpyOneAligned<96, 16>(void *, void const *);
// struct hkpExtendedMeshShape::TrianglesSubpart const * hkGetArrayElemWithByteStridingHalfCacheSize<struct hkpExtendedMeshShape::TrianglesSubpart>(struct hkpExtendedMeshShape::TrianglesSubpart const *, int, int, int, bool);
// public: static void hkString::memCpy16<96>(void *, void const *);
// void const * hkGetArrayElemWithByteStridingHalfCacheSize<void>(void const *, int, int, int, bool);
// unsigned short const * hkGetArrayElemWithByteStriding<unsigned short>(unsigned short const *, int, int, int, bool);
// struct hkpExtendedMeshShape::ShapesSubpart const * hkGetArrayElemWithByteStridingHalfCacheSize<struct hkpExtendedMeshShape::ShapesSubpart>(struct hkpExtendedMeshShape::ShapesSubpart const *, int, int, int, bool);
// public: static void hkString::memCpy16<64>(void *, void const *);
// public: void hkRefPtr<class hkpConvexShape>::operator=(class hkpConvexShape *);
// public: class hkpConvexShape * hkRefPtr<class hkpConvexShape>::operator->(void) const;
// class hkRefPtr<class hkpConvexShape> const * hkGetArrayElemWithByteStriding<class hkRefPtr<class hkpConvexShape> >(class hkRefPtr<class hkpConvexShape> const *, int, int, int, bool);
// struct hkpExtendedMeshShape::Subpart const * hkGetArrayElemWithByteStridingHalfCacheSize<struct hkpExtendedMeshShape::Subpart>(struct hkpExtendedMeshShape::Subpart const *, int, int, int, bool);
// void const * hkGetArrayElemWithByteStriding<void>(void const *, int, int, int, bool);
// class hkpMeshMaterial const * hkGetArrayElemWithByteStriding<class hkpMeshMaterial>(class hkpMeshMaterial const *, int, int, int, bool);
// public: void hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<class hkRefPtr<class hkpConvexShape> >::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::construct<class hkRefPtr<class hkpConvexShape> >(class hkRefPtr<class hkpConvexShape> *, int, struct hkTraitBool<0>);
// public: int hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::clear(void);
// public: void hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct hkpExtendedMeshShape::TrianglesSubpart>(struct hkpExtendedMeshShape::TrianglesSubpart *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkpExtendedMeshShape::TrianglesSubpart>(struct hkpExtendedMeshShape::TrianglesSubpart *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::construct<struct hkpExtendedMeshShape::ShapesSubpart>(struct hkpExtendedMeshShape::ShapesSubpart *, int, struct hkTraitBool<0>);
// public: hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart(void);
// public: void hkArrayBase<class hkRefPtr<class hkpConvexShape> >::clear(void);
// public: hkRefPtr<class hkpConvexShape>::hkRefPtr<class hkpConvexShape>(void);
// public: int hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::getCapacity(void) const;
// [thunk]: public: virtual void * hkpExtendedMeshShape::`vector deleting destructor'(unsigned int);

//public: hkpExtendedMeshShape::hkpExtendedMeshShape(float, int)
//{
//    mangled_ppc("??0hkpExtendedMeshShape@@QAA@MH@Z");
//};

//public: hkpExtendedMeshShape::hkpExtendedMeshShape(class hkpMeshShape const *)
//{
//    mangled_ppc("??0hkpExtendedMeshShape@@QAA@PBVhkpMeshShape@@@Z");
//};

//public: virtual hkpExtendedMeshShape::~hkpExtendedMeshShape(void)
//{
//    mangled_ppc("??1hkpExtendedMeshShape@@UAA@XZ");
//};

//public: hkpExtendedMeshShape::hkpExtendedMeshShape(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkpExtendedMeshShape@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: virtual void hkpExtendedMeshShape::setWeldingInfo(unsigned int, short)
//{
//    mangled_ppc("?setWeldingInfo@hkpExtendedMeshShape@@UAAXIF@Z");
//};

//public: virtual void hkpExtendedMeshShape::initWeldingInfo(enum hkpWeldingUtility::WeldingType)
//{
//    mangled_ppc("?initWeldingInfo@hkpExtendedMeshShape@@UAAXW4WeldingType@hkpWeldingUtility@@@Z");
//};

//public: virtual int hkpExtendedMeshShape::getNumChildShapes(void) const
//{
//    mangled_ppc("?getNumChildShapes@hkpExtendedMeshShape@@UBAHXZ");
//};

//public: virtual unsigned int hkpExtendedMeshShape::getFirstKey(void) const
//{
//    mangled_ppc("?getFirstKey@hkpExtendedMeshShape@@UBAIXZ");
//};

//public: virtual unsigned int hkpExtendedMeshShape::getNextKey(unsigned int) const
//{
//    mangled_ppc("?getNextKey@hkpExtendedMeshShape@@UBAII@Z");
//};

//protected: int hkpExtendedMeshShape::_getNumChildShapesInTrianglesSubpart(struct hkpExtendedMeshShape::TrianglesSubpart const &, int) const
//{
//    mangled_ppc("?_getNumChildShapesInTrianglesSubpart@hkpExtendedMeshShape@@IBAHABUTrianglesSubpart@1@H@Z");
//};

//protected: int hkpExtendedMeshShape::_getNumChildShapesInShapesSubpart(struct hkpExtendedMeshShape::ShapesSubpart const &) const
//{
//    mangled_ppc("?_getNumChildShapesInShapesSubpart@hkpExtendedMeshShape@@IBAHABUShapesSubpart@1@@Z");
//};

//public: virtual class hkpShape const * hkpExtendedMeshShape::getChildShape(unsigned int, char (&)[512]) const
//{
//    mangled_ppc("?getChildShape@hkpExtendedMeshShape@@UBAPBVhkpShape@@IAAY0CAA@D@Z");
//};

//public: class hkpMeshMaterial const * hkpExtendedMeshShape::getMeshMaterial(unsigned int) const
//{
//    mangled_ppc("?getMeshMaterial@hkpExtendedMeshShape@@QBAPBVhkpMeshMaterial@@I@Z");
//};

//public: virtual unsigned int hkpExtendedMeshShape::getCollisionFilterInfo(unsigned int) const
//{
//    mangled_ppc("?getCollisionFilterInfo@hkpExtendedMeshShape@@UBAII@Z");
//};

//public: virtual void hkpExtendedMeshShape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const
//{
//    mangled_ppc("?getAabbImpl@hkpExtendedMeshShape@@UBAXABVhkTransform@@MAAVhkAabb@@@Z");
//};

//public: void hkpExtendedMeshShape::recalcAabbExtents(void)
//{
//    mangled_ppc("?recalcAabbExtents@hkpExtendedMeshShape@@QAAXXZ");
//};

//void calcAabbExtents(struct hkpExtendedMeshShape::TrianglesSubpart const &, class hkVector4&, class hkAabb &)
//{
//    mangled_ppc("?calcAabbExtents@@YAXABUTrianglesSubpart@hkpExtendedMeshShape@@AAVhkVector4@@AAVhkAabb@@@Z");
//};

//void addToAabb(class hkAabb &, class hkTransform const &, float const *, class hkVector4const &)
//{
//    mangled_ppc("?addToAabb@@YAXAAVhkAabb@@ABVhkTransform@@PBMABVhkVector4@@@Z");
//};

//void calcAabbExtents(struct hkpExtendedMeshShape::ShapesSubpart const &, class hkAabb &)
//{
//    mangled_ppc("?calcAabbExtents@@YAXABUShapesSubpart@hkpExtendedMeshShape@@AAVhkAabb@@@Z");
//};

//public: void hkpExtendedMeshShape::setScaling(class hkVector4const &)
//{
//    mangled_ppc("?setScaling@hkpExtendedMeshShape@@QAAXABVhkVector4@@@Z");
//};

//protected: void hkpExtendedMeshShape::assertTrianglesSubpartValidity(struct hkpExtendedMeshShape::TrianglesSubpart const &)
//{
//    mangled_ppc("?assertTrianglesSubpartValidity@hkpExtendedMeshShape@@IAAXABUTrianglesSubpart@1@@Z");
//};

//protected: void hkpExtendedMeshShape::assertShapesSubpartValidity(struct hkpExtendedMeshShape::ShapesSubpart const &)
//{
//    mangled_ppc("?assertShapesSubpartValidity@hkpExtendedMeshShape@@IAAXABUShapesSubpart@1@@Z");
//};

//public: virtual void hkpExtendedMeshShape::addTrianglesSubpart(struct hkpExtendedMeshShape::TrianglesSubpart const &)
//{
//    mangled_ppc("?addTrianglesSubpart@hkpExtendedMeshShape@@UAAXABUTrianglesSubpart@1@@Z");
//};

//public: virtual int hkpExtendedMeshShape::addShapesSubpart(struct hkpExtendedMeshShape::ShapesSubpart const &)
//{
//    mangled_ppc("?addShapesSubpart@hkpExtendedMeshShape@@UAAHABUShapesSubpart@1@@Z");
//};

//public: hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0ShapesSubpart@hkpExtendedMeshShape@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart(class hkpConvexShape const *const *, int, class hkVector4const &)
//{
//    mangled_ppc("??0ShapesSubpart@hkpExtendedMeshShape@@QAA@PBQBVhkpConvexShape@@HABVhkVector4@@@Z");
//};

//public: hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart(class hkpConvexShape const *const *, int, class hkTransform const &)
//{
//    mangled_ppc("??0ShapesSubpart@hkpExtendedMeshShape@@QAA@PBQBVhkpConvexShape@@HABVhkTransform@@@Z");
//};

//public: hkpExtendedMeshShape::ShapesSubpart::~ShapesSubpart(void)
//{
//    mangled_ppc("??1ShapesSubpart@hkpExtendedMeshShape@@QAA@XZ");
//};

//public: virtual int hkpExtendedMeshShape::calcSizeForSpu(struct hkpShape::CalcSizeForSpuInput const &, int) const
//{
//    mangled_ppc("?calcSizeForSpu@hkpExtendedMeshShape@@UBAHABUCalcSizeForSpuInput@hkpShape@@H@Z");
//};

//protected: struct hkpExtendedMeshShape::TrianglesSubpart * hkpExtendedMeshShape::expandOneTriangleSubparts(void)
//{
//    mangled_ppc("?expandOneTriangleSubparts@hkpExtendedMeshShape@@IAAPAUTrianglesSubpart@1@XZ");
//};

//protected: struct hkpExtendedMeshShape::ShapesSubpart * hkpExtendedMeshShape::expandOneShapesSubparts(void)
//{
//    mangled_ppc("?expandOneShapesSubparts@hkpExtendedMeshShape@@IAAPAUShapesSubpart@1@XZ");
//};

//protected: void hkpExtendedMeshShape::freeTriangleSubparts(void)
//{
//    mangled_ppc("?freeTriangleSubparts@hkpExtendedMeshShape@@IAAXXZ");
//};

//protected: void hkpExtendedMeshShape::freeShapesSubparts(void)
//{
//    mangled_ppc("?freeShapesSubparts@hkpExtendedMeshShape@@IAAXXZ");
//};

//public: hkpExtendedMeshShape::TrianglesSubpart::TrianglesSubpart(void)
//{
//    mangled_ppc("??0TrianglesSubpart@hkpExtendedMeshShape@@QAA@XZ");
//};

//public: hkpExtendedMeshShape::Subpart::Subpart(enum hkpExtendedMeshShape::SubpartType)
//{
//    mangled_ppc("??0Subpart@hkpExtendedMeshShape@@QAA@W4SubpartType@1@@Z");
//};

//merged_83FC8540
//{
//    mangled_ppc("merged_83FC8540");
//};

//public: int hkpExtendedMeshShape::getSubPartIndex(unsigned int) const
//{
//    mangled_ppc("?getSubPartIndex@hkpExtendedMeshShape@@QBAHI@Z");
//};

//public: int hkpExtendedMeshShape::getTerminalIndexInSubPart(unsigned int) const
//{
//    mangled_ppc("?getTerminalIndexInSubPart@hkpExtendedMeshShape@@QBAHI@Z");
//};

//public: void hkpTriangleShape::setType(void)
//{
//    mangled_ppc("?setType@hkpTriangleShape@@QAAXXZ");
//};

//public: void hkpTriangleShape::setExtrusion(class hkVector4const &)
//{
//    mangled_ppc("?setExtrusion@hkpTriangleShape@@QAAXABVhkVector4@@@Z");
//};

//public: int hkpExtendedMeshShape::ShapesSubpart::getFlags(void) const
//{
//    mangled_ppc("?getFlags@ShapesSubpart@hkpExtendedMeshShape@@QBAHXZ");
//};

//public: class hkVector4const & hkpExtendedMeshShape::ShapesSubpart::getTranslation(void) const
//{
//    mangled_ppc("?getTranslation@ShapesSubpart@hkpExtendedMeshShape@@QBAABVhkVector4@@XZ");
//};

//public: class hkQuaternion const & hkpExtendedMeshShape::ShapesSubpart::getRotation(void) const
//{
//    mangled_ppc("?getRotation@ShapesSubpart@hkpExtendedMeshShape@@QBAABVhkQuaternion@@XZ");
//};

//public: void hkpExtendedMeshShape::ShapesSubpart::setFlags(int)
//{
//    mangled_ppc("?setFlags@ShapesSubpart@hkpExtendedMeshShape@@QAAXH@Z");
//};

//public: enum hkpMeshShape::MeshShapeIndexStridingType hkEnum<enum hkpMeshShape::MeshShapeIndexStridingType, signed char>::operator enum hkpMeshShape::MeshShapeIndexStridingType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4MeshShapeIndexStridingType@hkpMeshShape@@C@@QBA?AW4MeshShapeIndexStridingType@hkpMeshShape@@XZ");
//};

//public: void hkEnum<enum hkpExtendedMeshShape::SubpartType, signed char>::operator=(enum hkpExtendedMeshShape::SubpartType)
//{
//    mangled_ppc("??4?$hkEnum@W4SubpartType@hkpExtendedMeshShape@@C@@QAAXW4SubpartType@hkpExtendedMeshShape@@@Z");
//};

//public: hkTransform::hkTransform(class hkQuaternion const &, class hkVector4const &)
//{
//    mangled_ppc("??0hkTransform@@QAA@ABVhkQuaternion@@ABVhkVector4@@@Z");
//};

//public: void hkEnum<enum hkpExtendedMeshShape::MaterialIndexStridingType, signed char>::operator=(enum hkpExtendedMeshShape::MaterialIndexStridingType)
//{
//    mangled_ppc("??4?$hkEnum@W4MaterialIndexStridingType@hkpExtendedMeshShape@@C@@QAAXW4MaterialIndexStridingType@hkpExtendedMeshShape@@@Z");
//};

//public: enum hkpExtendedMeshShape::IndexStridingType hkEnum<enum hkpExtendedMeshShape::IndexStridingType, signed char>::operator enum hkpExtendedMeshShape::IndexStridingType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4IndexStridingType@hkpExtendedMeshShape@@C@@QBA?AW4IndexStridingType@hkpExtendedMeshShape@@XZ");
//};

//public: void hkEnum<enum hkpExtendedMeshShape::IndexStridingType, signed char>::operator=(enum hkpExtendedMeshShape::IndexStridingType)
//{
//    mangled_ppc("??4?$hkEnum@W4IndexStridingType@hkpExtendedMeshShape@@C@@QAAXW4IndexStridingType@hkpExtendedMeshShape@@@Z");
//};

//public: hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>::hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@V?$hkRefPtr@VhkpConvexShape@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>::hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArray@V?$hkRefPtr@VhkpConvexShape@@@@UhkContainerHeapAllocator@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: class hkRefPtr<class hkpConvexShape> * hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>::expandBy(int)
//{
//    mangled_ppc("?expandBy@?$hkArray@V?$hkRefPtr@VhkpConvexShape@@@@UhkContainerHeapAllocator@@@@QAAPAV?$hkRefPtr@VhkpConvexShape@@@@H@Z");
//};

//public: hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>::hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UTrianglesSubpart@hkpExtendedMeshShape@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>::hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArray@UTrianglesSubpart@hkpExtendedMeshShape@@UhkContainerHeapAllocator@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: void hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UTrianglesSubpart@hkpExtendedMeshShape@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UTrianglesSubpart@hkpExtendedMeshShape@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: struct hkpExtendedMeshShape::TrianglesSubpart * hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>::expandBy(int)
//{
//    mangled_ppc("?expandBy@?$hkArray@UTrianglesSubpart@hkpExtendedMeshShape@@UhkContainerHeapAllocator@@@@QAAPAUTrianglesSubpart@hkpExtendedMeshShape@@H@Z");
//};

//public: hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>::hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UShapesSubpart@hkpExtendedMeshShape@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>::hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArray@UShapesSubpart@hkpExtendedMeshShape@@UhkContainerHeapAllocator@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: struct hkpExtendedMeshShape::ShapesSubpart * hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>::expandBy(int)
//{
//    mangled_ppc("?expandBy@?$hkArray@UShapesSubpart@hkpExtendedMeshShape@@UhkContainerHeapAllocator@@@@QAAPAUShapesSubpart@hkpExtendedMeshShape@@H@Z");
//};

//public: hkArrayBase<class hkRefPtr<class hkpConvexShape> >::hkArrayBase<class hkRefPtr<class hkpConvexShape> >(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArrayBase@V?$hkRefPtr@VhkpConvexShape@@@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArrayBase@UTrianglesSubpart@hkpExtendedMeshShape@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArrayBase@UShapesSubpart@hkpExtendedMeshShape@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkArrayBase<class hkRefPtr<class hkpConvexShape> >::hkArrayBase<class hkRefPtr<class hkpConvexShape> >(void)
//{
//    mangled_ppc("??0?$hkArrayBase@V?$hkRefPtr@VhkpConvexShape@@@@@@QAA@XZ");
//};

//public: class hkRefPtr<class hkpConvexShape> const & hkArrayBase<class hkRefPtr<class hkpConvexShape> >::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@V?$hkRefPtr@VhkpConvexShape@@@@@@QBAABV?$hkRefPtr@VhkpConvexShape@@@@H@Z");
//};

//public: class hkRefPtr<class hkpConvexShape> * hkArrayBase<class hkRefPtr<class hkpConvexShape> >::_expandBy(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_expandBy@?$hkArrayBase@V?$hkRefPtr@VhkpConvexShape@@@@@@QAAPAV?$hkRefPtr@VhkpConvexShape@@@@AAVhkMemoryAllocator@@H@Z");
//};

//public: class hkRefPtr<class hkpConvexShape> * hkArrayBase<class hkRefPtr<class hkpConvexShape> >::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@V?$hkRefPtr@VhkpConvexShape@@@@@@QAAPAV?$hkRefPtr@VhkpConvexShape@@@@XZ");
//};

//public: hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>::~hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@V?$hkRefPtr@VhkpConvexShape@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkRefPtr<class hkpConvexShape> >::~hkArrayBase<class hkRefPtr<class hkpConvexShape> >(void)
//{
//    mangled_ppc("??1?$hkArrayBase@V?$hkRefPtr@VhkpConvexShape@@@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UTrianglesSubpart@hkpExtendedMeshShape@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UTrianglesSubpart@hkpExtendedMeshShape@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UTrianglesSubpart@hkpExtendedMeshShape@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkpExtendedMeshShape::TrianglesSubpart * hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::_expandBy(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_expandBy@?$hkArrayBase@UTrianglesSubpart@hkpExtendedMeshShape@@@@QAAPAUTrianglesSubpart@hkpExtendedMeshShape@@AAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkpExtendedMeshShape::TrianglesSubpart const * hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UTrianglesSubpart@hkpExtendedMeshShape@@@@QBAPBUTrianglesSubpart@hkpExtendedMeshShape@@XZ");
//};

//public: struct hkpExtendedMeshShape::TrianglesSubpart * hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@UTrianglesSubpart@hkpExtendedMeshShape@@@@QAAPAUTrianglesSubpart@hkpExtendedMeshShape@@XZ");
//};

//public: void hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::setOwnedData(struct hkpExtendedMeshShape::TrianglesSubpart *, int, int)
//{
//    mangled_ppc("?setOwnedData@?$hkArrayBase@UTrianglesSubpart@hkpExtendedMeshShape@@@@QAAXPAUTrianglesSubpart@hkpExtendedMeshShape@@HH@Z");
//};

//public: hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>::~hkArray<struct hkpExtendedMeshShape::TrianglesSubpart, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UTrianglesSubpart@hkpExtendedMeshShape@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::~hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UTrianglesSubpart@hkpExtendedMeshShape@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UShapesSubpart@hkpExtendedMeshShape@@@@QAA@XZ");
//};

//public: struct hkpExtendedMeshShape::ShapesSubpart * hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::_expandBy(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_expandBy@?$hkArrayBase@UShapesSubpart@hkpExtendedMeshShape@@@@QAAPAUShapesSubpart@hkpExtendedMeshShape@@AAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkpExtendedMeshShape::ShapesSubpart const * hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UShapesSubpart@hkpExtendedMeshShape@@@@QBAPBUShapesSubpart@hkpExtendedMeshShape@@XZ");
//};

//public: hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>::~hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UShapesSubpart@hkpExtendedMeshShape@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::~hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UShapesSubpart@hkpExtendedMeshShape@@@@QAA@XZ");
//};

//void hkMemUtil::memCpyOneAligned<96, 16>(void *, void const *)
//{
//    mangled_ppc("??$memCpyOneAligned@$0GA@$0BA@@hkMemUtil@@YAXPAXPBX@Z");
//};

//struct hkpExtendedMeshShape::TrianglesSubpart const * hkGetArrayElemWithByteStridingHalfCacheSize<struct hkpExtendedMeshShape::TrianglesSubpart>(struct hkpExtendedMeshShape::TrianglesSubpart const *, int, int, int, bool)
//{
//    mangled_ppc("??$hkGetArrayElemWithByteStridingHalfCacheSize@UTrianglesSubpart@hkpExtendedMeshShape@@@@YAPBUTrianglesSubpart@hkpExtendedMeshShape@@PBU01@HHH_N@Z");
//};

//public: static void hkString::memCpy16<96>(void *, void const *)
//{
//    mangled_ppc("??$memCpy16@$0GA@@hkString@@SAXPAXPBX@Z");
//};

//void const * hkGetArrayElemWithByteStridingHalfCacheSize<void>(void const *, int, int, int, bool)
//{
//    mangled_ppc("??$hkGetArrayElemWithByteStridingHalfCacheSize@X@@YAPBXPBXHHH_N@Z");
//};

//unsigned short const * hkGetArrayElemWithByteStriding<unsigned short>(unsigned short const *, int, int, int, bool)
//{
//    mangled_ppc("??$hkGetArrayElemWithByteStriding@G@@YAPBGPBGHHH_N@Z");
//};

//struct hkpExtendedMeshShape::ShapesSubpart const * hkGetArrayElemWithByteStridingHalfCacheSize<struct hkpExtendedMeshShape::ShapesSubpart>(struct hkpExtendedMeshShape::ShapesSubpart const *, int, int, int, bool)
//{
//    mangled_ppc("??$hkGetArrayElemWithByteStridingHalfCacheSize@UShapesSubpart@hkpExtendedMeshShape@@@@YAPBUShapesSubpart@hkpExtendedMeshShape@@PBU01@HHH_N@Z");
//};

//public: static void hkString::memCpy16<64>(void *, void const *)
//{
//    mangled_ppc("??$memCpy16@$0EA@@hkString@@SAXPAXPBX@Z");
//};

//public: void hkRefPtr<class hkpConvexShape>::operator=(class hkpConvexShape *)
//{
//    mangled_ppc("??4?$hkRefPtr@VhkpConvexShape@@@@QAAXPAVhkpConvexShape@@@Z");
//};

//public: class hkpConvexShape * hkRefPtr<class hkpConvexShape>::operator->(void) const
//{
//    mangled_ppc("??C?$hkRefPtr@VhkpConvexShape@@@@QBAPAVhkpConvexShape@@XZ");
//};

//class hkRefPtr<class hkpConvexShape> const * hkGetArrayElemWithByteStriding<class hkRefPtr<class hkpConvexShape> >(class hkRefPtr<class hkpConvexShape> const *, int, int, int, bool)
//{
//    mangled_ppc("??$hkGetArrayElemWithByteStriding@V?$hkRefPtr@VhkpConvexShape@@@@@@YAPBV?$hkRefPtr@VhkpConvexShape@@@@PBV0@HHH_N@Z");
//};

//struct hkpExtendedMeshShape::Subpart const * hkGetArrayElemWithByteStridingHalfCacheSize<struct hkpExtendedMeshShape::Subpart>(struct hkpExtendedMeshShape::Subpart const *, int, int, int, bool)
//{
//    mangled_ppc("??$hkGetArrayElemWithByteStridingHalfCacheSize@USubpart@hkpExtendedMeshShape@@@@YAPBUSubpart@hkpExtendedMeshShape@@PBU01@HHH_N@Z");
//};

//void const * hkGetArrayElemWithByteStriding<void>(void const *, int, int, int, bool)
//{
//    mangled_ppc("??$hkGetArrayElemWithByteStriding@X@@YAPBXPBXHHH_N@Z");
//};

//class hkpMeshMaterial const * hkGetArrayElemWithByteStriding<class hkpMeshMaterial>(class hkpMeshMaterial const *, int, int, int, bool)
//{
//    mangled_ppc("??$hkGetArrayElemWithByteStriding@VhkpMeshMaterial@@@@YAPBVhkpMeshMaterial@@PBV0@HHH_N@Z");
//};

//public: void hkArray<class hkRefPtr<class hkpConvexShape>, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@V?$hkRefPtr@VhkpConvexShape@@@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkpExtendedMeshShape::ShapesSubpart, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UShapesSubpart@hkpExtendedMeshShape@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkRefPtr<class hkpConvexShape> >::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@V?$hkRefPtr@VhkpConvexShape@@@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkRefPtr<class hkpConvexShape> >(class hkRefPtr<class hkpConvexShape> *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@V?$hkRefPtr@VhkpConvexShape@@@@@hkArrayUtil@@SAXPAV?$hkRefPtr@VhkpConvexShape@@@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UTrianglesSubpart@hkpExtendedMeshShape@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UTrianglesSubpart@hkpExtendedMeshShape@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkpExtendedMeshShape::TrianglesSubpart>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UTrianglesSubpart@hkpExtendedMeshShape@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpExtendedMeshShape::TrianglesSubpart>(struct hkpExtendedMeshShape::TrianglesSubpart *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UTrianglesSubpart@hkpExtendedMeshShape@@@hkArrayUtil@@SAXPAUTrianglesSubpart@hkpExtendedMeshShape@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpExtendedMeshShape::TrianglesSubpart>(struct hkpExtendedMeshShape::TrianglesSubpart *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UTrianglesSubpart@hkpExtendedMeshShape@@@hkArrayUtil@@SAXPAUTrianglesSubpart@hkpExtendedMeshShape@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UShapesSubpart@hkpExtendedMeshShape@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UShapesSubpart@hkpExtendedMeshShape@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpExtendedMeshShape::ShapesSubpart>(struct hkpExtendedMeshShape::ShapesSubpart *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UShapesSubpart@hkpExtendedMeshShape@@@hkArrayUtil@@SAXPAUShapesSubpart@hkpExtendedMeshShape@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart(void)
//{
//    mangled_ppc("??0ShapesSubpart@hkpExtendedMeshShape@@QAA@XZ");
//};

//public: void hkArrayBase<class hkRefPtr<class hkpConvexShape> >::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@V?$hkRefPtr@VhkpConvexShape@@@@@@QAAXXZ");
//};

//public: hkRefPtr<class hkpConvexShape>::hkRefPtr<class hkpConvexShape>(void)
//{
//    mangled_ppc("??0?$hkRefPtr@VhkpConvexShape@@@@QAA@XZ");
//};

//public: int hkArrayBase<struct hkpExtendedMeshShape::ShapesSubpart>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UShapesSubpart@hkpExtendedMeshShape@@@@QBAHXZ");
//};

//[thunk]: public: virtual void * hkpExtendedMeshShape::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpExtendedMeshShape@@WBA@AAPAXI@Z");
//};

