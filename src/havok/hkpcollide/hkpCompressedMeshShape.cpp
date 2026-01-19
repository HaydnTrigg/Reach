/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkpCompressedMeshShape::`vftable'{for `hkpShapeContainer'}; // "??_7hkpCompressedMeshShape@@6BhkpShapeContainer@@@"
// const hkpCompressedMeshShape::`vftable'{for `hkpShape'}; // "??_7hkpCompressedMeshShape@@6BhkpShape@@@"
// const hkpCompressedMeshShape::`RTTI Complete Object Locator'{for `hkpShape'}; // "??_R4hkpCompressedMeshShape@@6BhkpShape@@@"
// hkpCompressedMeshShape::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpCompressedMeshShape@@8"
// hkpCompressedMeshShape::`RTTI Base Class Array'; // "??_R2hkpCompressedMeshShape@@8"
// hkpCompressedMeshShape::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpCompressedMeshShape@@8"
// const hkpCompressedMeshShape::`RTTI Complete Object Locator'{for `hkpShapeContainer'}; // "??_R4hkpCompressedMeshShape@@6BhkpShapeContainer@@@"
// class hkpCompressedMeshShape::`RTTI Type Descriptor'; // "??_R0?AVhkpCompressedMeshShape@@@8"
// struct hkpConvexVerticesShape::FourVectors *rotatedVertices; // "?rotatedVertices@@3PAUFourVectors@hkpConvexVerticesShape@@A"

// public: hkpCompressedMeshShape::hkpCompressedMeshShape(float);
// public: hkpCompressedMeshShape::hkpCompressedMeshShape(class hkFinishLoadedObjectFlag);
// public: int hkpCompressedMeshShape::Chunk::getNextIndex(int, int &) const;
// public: virtual unsigned int hkpCompressedMeshShape::getFirstKey(void) const;
// public: virtual unsigned int hkpCompressedMeshShape::getNextKey(unsigned int) const;
// public: void hkpCompressedMeshShape::getChunkAabb(class hkpCompressedMeshShape::Chunk const &, class hkAabb &);
// public: virtual void hkpCompressedMeshShape::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// public: virtual int hkpCompressedMeshShape::calcSizeForSpu(struct hkpShape::CalcSizeForSpuInput const &, int) const;
// void calculateAabb(class hkArray<unsigned short, struct hkContainerHeapAllocator> const &, class hkVector4const &, float, class hkAabb &);
// public: void hkpCompressedMeshShape::Chunk::calcAabb(float, class hkAabb &) const;
// public: void hkpCompressedMeshShape::Chunk::getTriangle(int, int, int, float, class hkVector4&, class hkVector4&, class hkVector4&) const;
// public: int hkpCompressedMeshShape::Chunk::getNumTriangles(void);
// public: void hkpCompressedMeshShape::recalcAabb(class hkAabb &);
// public: int hkpCompressedMeshShape::isValidShapeKey(unsigned int);
// public: virtual void hkpCompressedMeshShape::setWeldingInfo(unsigned int, short);
// public: virtual void hkpCompressedMeshShape::initWeldingInfo(enum hkpWeldingUtility::WeldingType);
// public: class hkpMeshMaterial const * hkpCompressedMeshShape::getMaterial(unsigned int);
// public: void hkpCompressedMeshShape::Chunk::getTriangle(int, float, class hkVector4&, class hkVector4&, class hkVector4&) const;
// public: void hkpCompressedMeshShape::ConvexPiece::getVertices(float, class hkTransform const &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const;
// public: virtual void hkpCompressedMeshShape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const;
// public: virtual class hkpShape const * hkpCompressedMeshShape::getChildShape(unsigned int, char (&)[512]) const;
// merged_83FCC7D0;
// public: virtual hkpCompressedMeshShape::~hkpCompressedMeshShape(void);
// public: hkEnum<enum hkpCompressedMeshShape::MaterialType, unsigned char>::hkEnum<enum hkpCompressedMeshShape::MaterialType, unsigned char>(void);
// public: enum hkpCompressedMeshShape::MaterialType hkEnum<enum hkpCompressedMeshShape::MaterialType, unsigned char>::operator enum hkpCompressedMeshShape::MaterialType(void) const;
// public: hkArray<class hkTransform, struct hkContainerHeapAllocator>::hkArray<class hkTransform, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkpCompressedMeshShape::BigTriangle, struct hkContainerHeapAllocator>::hkArray<struct hkpCompressedMeshShape::BigTriangle, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkpCompressedMeshShape::BigTriangle, struct hkContainerHeapAllocator>::hkArray<struct hkpCompressedMeshShape::BigTriangle, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag);
// public: hkArray<class hkpCompressedMeshShape::Chunk, struct hkContainerHeapAllocator>::hkArray<class hkpCompressedMeshShape::Chunk, struct hkContainerHeapAllocator>(void);
// public: hkArray<class hkpCompressedMeshShape::Chunk, struct hkContainerHeapAllocator>::hkArray<class hkpCompressedMeshShape::Chunk, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag);
// public: hkArray<struct hkpCompressedMeshShape::ConvexPiece, struct hkContainerHeapAllocator>::hkArray<struct hkpCompressedMeshShape::ConvexPiece, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkpCompressedMeshShape::ConvexPiece, struct hkContainerHeapAllocator>::hkArray<struct hkpCompressedMeshShape::ConvexPiece, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag);
// public: hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>(class hkFinishLoadedObjectFlag);
// public: hkArrayBase<class hkpCompressedMeshShape::Chunk>::hkArrayBase<class hkpCompressedMeshShape::Chunk>(class hkFinishLoadedObjectFlag);
// public: hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>(class hkFinishLoadedObjectFlag);
// public: hkArrayBase<class hkTransform>::hkArrayBase<class hkTransform>(void);
// public: class hkTransform const & hkArrayBase<class hkTransform>::operator[](int) const;
// public: class hkTransform & hkArrayBase<class hkTransform>::operator[](int);
// public: hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>(void);
// public: struct hkpCompressedMeshShape::BigTriangle & hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::operator[](int);
// public: int hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::getSize(void) const;
// public: hkArray<struct hkpCompressedMeshShape::BigTriangle, struct hkContainerHeapAllocator>::~hkArray<struct hkpCompressedMeshShape::BigTriangle, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::~hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>(void);
// public: hkArrayBase<class hkpCompressedMeshShape::Chunk>::hkArrayBase<class hkpCompressedMeshShape::Chunk>(void);
// public: class hkpCompressedMeshShape::Chunk const & hkArrayBase<class hkpCompressedMeshShape::Chunk>::operator[](int) const;
// public: class hkpCompressedMeshShape::Chunk & hkArrayBase<class hkpCompressedMeshShape::Chunk>::operator[](int);
// public: int hkArrayBase<class hkpCompressedMeshShape::Chunk>::getSize(void) const;
// public: hkArray<class hkpCompressedMeshShape::Chunk, struct hkContainerHeapAllocator>::~hkArray<class hkpCompressedMeshShape::Chunk, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpCompressedMeshShape::Chunk>::~hkArrayBase<class hkpCompressedMeshShape::Chunk>(void);
// public: hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>(void);
// public: struct hkpCompressedMeshShape::ConvexPiece const & hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::operator[](int) const;
// public: int hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::getSize(void) const;
// public: hkArray<struct hkpCompressedMeshShape::ConvexPiece, struct hkContainerHeapAllocator>::~hkArray<struct hkpCompressedMeshShape::ConvexPiece, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::~hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>(void);
// public: void hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::setOwnedData(struct hkpConvexVerticesShape::FourVectors *, int, int);
// class hkpMeshMaterial * hkAddByteOffset<class hkpMeshMaterial>(class hkpMeshMaterial *, long);
// public: void hkArray<struct hkpCompressedMeshShape::BigTriangle, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpCompressedMeshShape::Chunk, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkpCompressedMeshShape::ConvexPiece, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class hkpCompressedMeshShape::Chunk>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: int hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::clear(void);
// public: int hkArrayBase<class hkpCompressedMeshShape::Chunk>::getCapacity(void) const;
// public: void hkArrayBase<class hkpCompressedMeshShape::Chunk>::clear(void);
// public: int hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::clear(void);
// public: static void hkArrayUtil::destruct<struct hkpCompressedMeshShape::BigTriangle>(struct hkpCompressedMeshShape::BigTriangle *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::destruct<class hkpCompressedMeshShape::Chunk>(class hkpCompressedMeshShape::Chunk *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::destruct<struct hkpCompressedMeshShape::ConvexPiece>(struct hkpCompressedMeshShape::ConvexPiece *, int, struct hkTraitBool<0>);
// [thunk]: public: virtual void * hkpCompressedMeshShape::`vector deleting destructor'(unsigned int);

//public: hkpCompressedMeshShape::hkpCompressedMeshShape(float)
//{
//    mangled_ppc("??0hkpCompressedMeshShape@@QAA@M@Z");
//};

//public: hkpCompressedMeshShape::hkpCompressedMeshShape(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkpCompressedMeshShape@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: int hkpCompressedMeshShape::Chunk::getNextIndex(int, int &) const
//{
//    mangled_ppc("?getNextIndex@Chunk@hkpCompressedMeshShape@@QBAHHAAH@Z");
//};

//public: virtual unsigned int hkpCompressedMeshShape::getFirstKey(void) const
//{
//    mangled_ppc("?getFirstKey@hkpCompressedMeshShape@@UBAIXZ");
//};

//public: virtual unsigned int hkpCompressedMeshShape::getNextKey(unsigned int) const
//{
//    mangled_ppc("?getNextKey@hkpCompressedMeshShape@@UBAII@Z");
//};

//public: void hkpCompressedMeshShape::getChunkAabb(class hkpCompressedMeshShape::Chunk const &, class hkAabb &)
//{
//    mangled_ppc("?getChunkAabb@hkpCompressedMeshShape@@QAAXABVChunk@1@AAVhkAabb@@@Z");
//};

//public: virtual void hkpCompressedMeshShape::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkpCompressedMeshShape@@UBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//public: virtual int hkpCompressedMeshShape::calcSizeForSpu(struct hkpShape::CalcSizeForSpuInput const &, int) const
//{
//    mangled_ppc("?calcSizeForSpu@hkpCompressedMeshShape@@UBAHABUCalcSizeForSpuInput@hkpShape@@H@Z");
//};

//void calculateAabb(class hkArray<unsigned short, struct hkContainerHeapAllocator> const &, class hkVector4const &, float, class hkAabb &)
//{
//    mangled_ppc("?calculateAabb@@YAXABV?$hkArray@GUhkContainerHeapAllocator@@@@ABVhkVector4@@MAAVhkAabb@@@Z");
//};

//public: void hkpCompressedMeshShape::Chunk::calcAabb(float, class hkAabb &) const
//{
//    mangled_ppc("?calcAabb@Chunk@hkpCompressedMeshShape@@QBAXMAAVhkAabb@@@Z");
//};

//public: void hkpCompressedMeshShape::Chunk::getTriangle(int, int, int, float, class hkVector4&, class hkVector4&, class hkVector4&) const
//{
//    mangled_ppc("?getTriangle@Chunk@hkpCompressedMeshShape@@QBAXHHHMAAVhkVector4@@00@Z");
//};

//public: int hkpCompressedMeshShape::Chunk::getNumTriangles(void)
//{
//    mangled_ppc("?getNumTriangles@Chunk@hkpCompressedMeshShape@@QAAHXZ");
//};

//public: void hkpCompressedMeshShape::recalcAabb(class hkAabb &)
//{
//    mangled_ppc("?recalcAabb@hkpCompressedMeshShape@@QAAXAAVhkAabb@@@Z");
//};

//public: int hkpCompressedMeshShape::isValidShapeKey(unsigned int)
//{
//    mangled_ppc("?isValidShapeKey@hkpCompressedMeshShape@@QAAHI@Z");
//};

//public: virtual void hkpCompressedMeshShape::setWeldingInfo(unsigned int, short)
//{
//    mangled_ppc("?setWeldingInfo@hkpCompressedMeshShape@@UAAXIF@Z");
//};

//public: virtual void hkpCompressedMeshShape::initWeldingInfo(enum hkpWeldingUtility::WeldingType)
//{
//    mangled_ppc("?initWeldingInfo@hkpCompressedMeshShape@@UAAXW4WeldingType@hkpWeldingUtility@@@Z");
//};

//public: class hkpMeshMaterial const * hkpCompressedMeshShape::getMaterial(unsigned int)
//{
//    mangled_ppc("?getMaterial@hkpCompressedMeshShape@@QAAPBVhkpMeshMaterial@@I@Z");
//};

//public: void hkpCompressedMeshShape::Chunk::getTriangle(int, float, class hkVector4&, class hkVector4&, class hkVector4&) const
//{
//    mangled_ppc("?getTriangle@Chunk@hkpCompressedMeshShape@@QBAXHMAAVhkVector4@@00@Z");
//};

//public: void hkpCompressedMeshShape::ConvexPiece::getVertices(float, class hkTransform const &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?getVertices@ConvexPiece@hkpCompressedMeshShape@@QBAXMABVhkTransform@@AAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void hkpCompressedMeshShape::getAabbImpl(class hkTransform const &, float, class hkAabb &) const
//{
//    mangled_ppc("?getAabbImpl@hkpCompressedMeshShape@@UBAXABVhkTransform@@MAAVhkAabb@@@Z");
//};

//public: virtual class hkpShape const * hkpCompressedMeshShape::getChildShape(unsigned int, char (&)[512]) const
//{
//    mangled_ppc("?getChildShape@hkpCompressedMeshShape@@UBAPBVhkpShape@@IAAY0CAA@D@Z");
//};

//merged_83FCC7D0
//{
//    mangled_ppc("merged_83FCC7D0");
//};

//public: virtual hkpCompressedMeshShape::~hkpCompressedMeshShape(void)
//{
//    mangled_ppc("??1hkpCompressedMeshShape@@UAA@XZ");
//};

//public: hkEnum<enum hkpCompressedMeshShape::MaterialType, unsigned char>::hkEnum<enum hkpCompressedMeshShape::MaterialType, unsigned char>(void)
//{
//    mangled_ppc("??0?$hkEnum@W4MaterialType@hkpCompressedMeshShape@@E@@QAA@XZ");
//};

//public: enum hkpCompressedMeshShape::MaterialType hkEnum<enum hkpCompressedMeshShape::MaterialType, unsigned char>::operator enum hkpCompressedMeshShape::MaterialType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4MaterialType@hkpCompressedMeshShape@@E@@QBA?AW4MaterialType@hkpCompressedMeshShape@@XZ");
//};

//public: hkArray<class hkTransform, struct hkContainerHeapAllocator>::hkArray<class hkTransform, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@VhkTransform@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkpCompressedMeshShape::BigTriangle, struct hkContainerHeapAllocator>::hkArray<struct hkpCompressedMeshShape::BigTriangle, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UBigTriangle@hkpCompressedMeshShape@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkpCompressedMeshShape::BigTriangle, struct hkContainerHeapAllocator>::hkArray<struct hkpCompressedMeshShape::BigTriangle, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArray@UBigTriangle@hkpCompressedMeshShape@@UhkContainerHeapAllocator@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkArray<class hkpCompressedMeshShape::Chunk, struct hkContainerHeapAllocator>::hkArray<class hkpCompressedMeshShape::Chunk, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@VChunk@hkpCompressedMeshShape@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<class hkpCompressedMeshShape::Chunk, struct hkContainerHeapAllocator>::hkArray<class hkpCompressedMeshShape::Chunk, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArray@VChunk@hkpCompressedMeshShape@@UhkContainerHeapAllocator@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkArray<struct hkpCompressedMeshShape::ConvexPiece, struct hkContainerHeapAllocator>::hkArray<struct hkpCompressedMeshShape::ConvexPiece, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UConvexPiece@hkpCompressedMeshShape@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkpCompressedMeshShape::ConvexPiece, struct hkContainerHeapAllocator>::hkArray<struct hkpCompressedMeshShape::ConvexPiece, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArray@UConvexPiece@hkpCompressedMeshShape@@UhkContainerHeapAllocator@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArrayBase@UBigTriangle@hkpCompressedMeshShape@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkArrayBase<class hkpCompressedMeshShape::Chunk>::hkArrayBase<class hkpCompressedMeshShape::Chunk>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArrayBase@VChunk@hkpCompressedMeshShape@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArrayBase@UConvexPiece@hkpCompressedMeshShape@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkArrayBase<class hkTransform>::hkArrayBase<class hkTransform>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@VhkTransform@@@@QAA@XZ");
//};

//public: class hkTransform const & hkArrayBase<class hkTransform>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@VhkTransform@@@@QBAABVhkTransform@@H@Z");
//};

//public: class hkTransform & hkArrayBase<class hkTransform>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@VhkTransform@@@@QAAAAVhkTransform@@H@Z");
//};

//public: hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UBigTriangle@hkpCompressedMeshShape@@@@QAA@XZ");
//};

//public: struct hkpCompressedMeshShape::BigTriangle & hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UBigTriangle@hkpCompressedMeshShape@@@@QAAAAUBigTriangle@hkpCompressedMeshShape@@H@Z");
//};

//public: int hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UBigTriangle@hkpCompressedMeshShape@@@@QBAHXZ");
//};

//public: hkArray<struct hkpCompressedMeshShape::BigTriangle, struct hkContainerHeapAllocator>::~hkArray<struct hkpCompressedMeshShape::BigTriangle, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UBigTriangle@hkpCompressedMeshShape@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::~hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UBigTriangle@hkpCompressedMeshShape@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpCompressedMeshShape::Chunk>::hkArrayBase<class hkpCompressedMeshShape::Chunk>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@VChunk@hkpCompressedMeshShape@@@@QAA@XZ");
//};

//public: class hkpCompressedMeshShape::Chunk const & hkArrayBase<class hkpCompressedMeshShape::Chunk>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@VChunk@hkpCompressedMeshShape@@@@QBAABVChunk@hkpCompressedMeshShape@@H@Z");
//};

//public: class hkpCompressedMeshShape::Chunk & hkArrayBase<class hkpCompressedMeshShape::Chunk>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@VChunk@hkpCompressedMeshShape@@@@QAAAAVChunk@hkpCompressedMeshShape@@H@Z");
//};

//public: int hkArrayBase<class hkpCompressedMeshShape::Chunk>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@VChunk@hkpCompressedMeshShape@@@@QBAHXZ");
//};

//public: hkArray<class hkpCompressedMeshShape::Chunk, struct hkContainerHeapAllocator>::~hkArray<class hkpCompressedMeshShape::Chunk, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@VChunk@hkpCompressedMeshShape@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpCompressedMeshShape::Chunk>::~hkArrayBase<class hkpCompressedMeshShape::Chunk>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@VChunk@hkpCompressedMeshShape@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UConvexPiece@hkpCompressedMeshShape@@@@QAA@XZ");
//};

//public: struct hkpCompressedMeshShape::ConvexPiece const & hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UConvexPiece@hkpCompressedMeshShape@@@@QBAABUConvexPiece@hkpCompressedMeshShape@@H@Z");
//};

//public: int hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UConvexPiece@hkpCompressedMeshShape@@@@QBAHXZ");
//};

//public: hkArray<struct hkpCompressedMeshShape::ConvexPiece, struct hkContainerHeapAllocator>::~hkArray<struct hkpCompressedMeshShape::ConvexPiece, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UConvexPiece@hkpCompressedMeshShape@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::~hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UConvexPiece@hkpCompressedMeshShape@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkpConvexVerticesShape::FourVectors>::setOwnedData(struct hkpConvexVerticesShape::FourVectors *, int, int)
//{
//    mangled_ppc("?setOwnedData@?$hkArrayBase@UFourVectors@hkpConvexVerticesShape@@@@QAAXPAUFourVectors@hkpConvexVerticesShape@@HH@Z");
//};

//class hkpMeshMaterial * hkAddByteOffset<class hkpMeshMaterial>(class hkpMeshMaterial *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@VhkpMeshMaterial@@@@YAPAVhkpMeshMaterial@@PAV0@J@Z");
//};

//public: void hkArray<struct hkpCompressedMeshShape::BigTriangle, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UBigTriangle@hkpCompressedMeshShape@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpCompressedMeshShape::Chunk, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@VChunk@hkpCompressedMeshShape@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkpCompressedMeshShape::ConvexPiece, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UConvexPiece@hkpCompressedMeshShape@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UBigTriangle@hkpCompressedMeshShape@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class hkpCompressedMeshShape::Chunk>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@VChunk@hkpCompressedMeshShape@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UConvexPiece@hkpCompressedMeshShape@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: int hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UBigTriangle@hkpCompressedMeshShape@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpCompressedMeshShape::BigTriangle>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UBigTriangle@hkpCompressedMeshShape@@@@QAAXXZ");
//};

//public: int hkArrayBase<class hkpCompressedMeshShape::Chunk>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@VChunk@hkpCompressedMeshShape@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpCompressedMeshShape::Chunk>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@VChunk@hkpCompressedMeshShape@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UConvexPiece@hkpCompressedMeshShape@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpCompressedMeshShape::ConvexPiece>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UConvexPiece@hkpCompressedMeshShape@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkpCompressedMeshShape::BigTriangle>(struct hkpCompressedMeshShape::BigTriangle *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UBigTriangle@hkpCompressedMeshShape@@@hkArrayUtil@@SAXPAUBigTriangle@hkpCompressedMeshShape@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpCompressedMeshShape::Chunk>(class hkpCompressedMeshShape::Chunk *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@VChunk@hkpCompressedMeshShape@@@hkArrayUtil@@SAXPAVChunk@hkpCompressedMeshShape@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpCompressedMeshShape::ConvexPiece>(struct hkpCompressedMeshShape::ConvexPiece *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UConvexPiece@hkpCompressedMeshShape@@@hkArrayUtil@@SAXPAUConvexPiece@hkpCompressedMeshShape@@HU?$hkTraitBool@$0A@@@@Z");
//};

//[thunk]: public: virtual void * hkpCompressedMeshShape::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpCompressedMeshShape@@WBA@AAPAXI@Z");
//};

