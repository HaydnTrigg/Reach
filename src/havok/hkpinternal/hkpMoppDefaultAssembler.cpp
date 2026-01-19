/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkpMoppDefaultAssembler::`RTTI Complete Object Locator'; // "??_R4hkpMoppDefaultAssembler@@6B@"
// hkpMoppDefaultAssembler::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpMoppDefaultAssembler@@8"
// hkpMoppDefaultAssembler::`RTTI Base Class Array'; // "??_R2hkpMoppDefaultAssembler@@8"
// hkpMoppDefaultAssembler::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpMoppDefaultAssembler@@8"
// hkpMoppAssembler::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpMoppAssembler@@8"
// hkpMoppAssembler::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpMoppAssembler@@8"
// hkpMoppAssembler::`RTTI Base Class Array'; // "??_R2hkpMoppAssembler@@8"
// const hkpMoppAssembler::`RTTI Complete Object Locator'; // "??_R4hkpMoppAssembler@@6B@"
// class hkpMoppDefaultAssembler::`RTTI Type Descriptor'; // "??_R0?AVhkpMoppDefaultAssembler@@@8"
// class hkpMoppAssembler::`RTTI Type Descriptor'; // "??_R0?AVhkpMoppAssembler@@@8"

// public: void hkpMoppDefaultAssembler::updateParams(struct hkpMoppAssembler::hkpMoppAssemblerParams const &);
// public: hkpMoppDefaultAssembler::hkpMoppDefaultAssembler(struct hkpMoppAssembler::hkpMoppAssemblerParams const &, class hkpMoppCodeGenerator *, class hkpMoppMediator *);
// public: virtual hkpMoppDefaultAssembler::~hkpMoppDefaultAssembler(void);
// protected: void hkpMoppDefaultAssembler::releaseNode(class hkpMoppTreeNode *);
// protected: class hkBool hkpMoppDefaultAssembler::shouldAssemble(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &);
// protected: int hkpMoppDefaultAssembler::calcRescaleBits(class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &);
// protected: void hkpMoppDefaultAssembler::recalcRescale(class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &, class hkpMoppAssemblerRescaleCommand &);
// protected: int hkpMoppDefaultAssembler::preCalcScale(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &);
// protected: void hkpMoppDefaultAssembler::fixScale(class hkpMoppTreeNode *);
// protected: void hkpMoppDefaultAssembler::calcTermCut(class hkpMoppTreeNode *, class hkpMoppAssemblerCutInfo &);
// protected: void hkpMoppDefaultAssembler::preCalcCutPositions(class hkpMoppTreeNode *, class hkpMoppAssemblerCutInfo const &, class hkpMoppAssemblerCutInfo &);
// protected: void hkpMoppDefaultAssembler::initTopDown(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &, class hkpMoppAssemblerRescaleCommand &);
// protected: int hkpMoppDefaultAssembler::assemblesubNode(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &);
// public: int hkpMoppDefaultAssembler::calcChunkPoints(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &, class hkArray<unsigned int, struct hkContainerHeapAllocator> &);
// public: int hkpMoppDefaultAssembler::calcTerminalIdsForChunks(class hkpMoppTreeNode *, int, int);
// public: void hkpMoppDefaultAssembler::assembleSubNodeIntoChunks(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &, int, class hkArray<unsigned int, struct hkContainerHeapAllocator> &);
// int copyCodeAndEmbedTerminals(struct hkpMoppCompilerChunkInfo *, class hkpMoppCodeGenerator *, class hkpMoppCodeGenerator *, class hkArray<unsigned int, struct hkContainerHeapAllocator> &);
// void copyJumpCommandInfo(class hkArray<struct hkpMoppCodeGenerator::JumpCommandInfo, struct hkContainerHeapAllocator> &, class hkArray<struct hkpMoppCodeGenerator::JumpCommandInfo, struct hkContainerHeapAllocator> &, int);
// protected: void hkpMoppDefaultAssembler::calcReoffset(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &);
// protected: void hkpMoppDefaultAssembler::addProperty(int, int);
// protected: int hkpMoppDefaultAssembler::addJumpChunk(int);
// protected: int hkpMoppDefaultAssembler::addDataOffset(int, int);
// protected: void hkpMoppDefaultAssembler::addRescale(class hkpMoppAssemblerRescaleCommand const &);
// protected: void hkpMoppDefaultAssembler::addTermIdOffset(unsigned int);
// protected: void hkpMoppDefaultAssembler::addCut(class hkpMoppTreeNode const *, class hkpMoppAssemblerNodeInfo const &);
// protected: void hkpMoppDefaultAssembler::addSplit(int, int, enum HK_MOPP_SPLIT_DIRECTIONS, int, int);
// protected: void hkpMoppDefaultAssembler::checkAndAddProperties(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &);
// protected: int hkpMoppDefaultAssembler::addTerminals(class hkpMoppTreeTerminal *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo const &);
// protected: void hkpMoppDefaultAssembler::addJump(unsigned int);
// protected: enum HK_MOPP_SPLIT_DIRECTIONS hkpMoppDefaultAssembler::getSplitCode(class hkVector4const &);
// protected: void hkpMoppDefaultAssembler::findPlanes(class hkpMoppTreeInternalNode const *, class hkpMoppAssemblerNodeInfo const &, int &, int &);
// public: virtual void hkpMoppDefaultAssembler::getScaleInfo(class hkpMoppTreeNode *, struct hkpMoppCode::CodeInfo *);
// protected: int hkpMoppDefaultAssembler::assembleCutAndTerminalCommand(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &);
// protected: int hkpMoppDefaultAssembler::assembleNonTerminalCommand(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &, class hkpMoppAssemblerRescaleCommand &);
// protected: int hkpMoppDefaultAssembler::assembleJumpChunkCommand(class hkpMoppTreeNode *);
// public: virtual void hkpMoppDefaultAssembler::assemble(class hkpMoppTreeNode *, class hkpMoppNodeMgr *, int);
// public: hkpMoppAssembler::hkpMoppAssembler(void);
// merged_8480A598;
// public: static void hkpMoppAssembler::operator delete(void *);
// public: virtual hkpMoppAssembler::~hkpMoppAssembler(void);
// public: virtual int hkpMoppDefaultAssembler::getNumSplittingPlaneDirections(void) const;
// public: virtual struct hkpMoppSplittingPlaneDirection const * hkpMoppDefaultAssembler::getSplittingPlaneDirections(void) const;
// merged_8480A6B0;
// public: class hkpMoppTreeInternalNode * hkpMoppTreeNode::toNode(void);
// public: hkpMoppAssemblerRescaleCommand::hkpMoppAssemblerRescaleCommand(void);
// public: int hkpMoppAssemblerNodeInfo::calcSignificantBits(unsigned int);
// public: hkpMoppAssemblerNodeInfo::hkpMoppAssemblerNodeInfo(class hkpMoppAssemblerNodeInfo const &, class hkpMoppTreeNode const *, struct hkpMoppCode::CodeInfo const &);
// protected: void hkpMoppAssemblerNodeInfo::updateOffsetAndSpread(class hkpMoppTreeNode const *);
// protected: void hkpMoppAssemblerNodeInfo::updateExtents(class hkpMoppTreeNode const *, struct hkpMoppCode::CodeInfo const &);
// public: void hkpMoppAssemblerNodeInfo::calcMaxExtentsSignificantBits(void);
// public: int hkpMoppAssemblerNodeInfo::getMaxExtentFixedPoint(void);
// protected: class hkBool hkpMoppDefaultAssembler::shouldRescale(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &);
// public: class hkVector4const & hkpMoppBasicNode::getPlaneNormal(void) const;
// public: hkpMoppAssemblerCutInfo::hkpMoppAssemblerCutInfo(class hkpMoppAssemblerCutInfo const &, class hkpMoppTreeNode const *, struct hkpMoppCode::CodeInfo const &);
// public: void hkpMoppAssemblerCutInfo::calcPossibleCutPlanes(void);
// protected: void hkpMoppDefaultAssembler::updateMaxCutPlanePosition(class hkpMoppTreeNode *, enum HK_MOPP_SPLIT_DIRECTIONS, int);
// protected: void hkpMoppDefaultAssembler::updateMinCutPlanePosition(class hkpMoppTreeNode *, enum HK_MOPP_SPLIT_DIRECTIONS, int);
// public: class hkpMoppTreeTerminal * hkpMoppTreeNode::toTerminal(void);
// public: void hkpMoppCodeGenerator::undo(int);
// public: static void * hkpMoppCodeGenerator::operator new(unsigned int);
// public: void hkpMoppCodeGenerator::pad(int);
// public: void hkpMoppCodeGenerator::addCode(int);
// public: void hkpMoppCodeGenerator::addCommand8(int, int);
// public: void hkpMoppCodeGenerator::addCommand16(int, int);
// public: void hkpMoppCodeGenerator::addCommand32(int, unsigned int);
// public: void hkpMoppCodeGenerator::addParam24(int);
// public: void hkpMoppCodeGenerator::addCommand5(int, int);
// public: void hkpMoppCodeGenerator::addCommand24(int, int);
// public: void hkpMoppCode::CodeInfo::setScale(float);
// public: hkpMoppAssemblerNodeInfo::hkpMoppAssemblerNodeInfo(class hkpMoppTreeNode const *, struct hkpMoppCode::CodeInfo const &);
// public: hkpMoppAssemblerCutInfo::hkpMoppAssemblerCutInfo(class hkpMoppTreeNode const *, struct hkpMoppCode::CodeInfo const &);
// public: void hkEnum<enum hkpMoppAssemblerData::hkpRescaleCommandType, signed char>::operator=(enum hkpMoppAssemblerData::hkpRescaleCommandType);
// public: class hkBool hkEnum<enum hkpMoppAssemblerData::hkpRescaleCommandType, signed char>::operator==(enum hkpMoppAssemblerData::hkpRescaleCommandType) const;
// public: enum hkpMoppAssemblerData::hkpCutCommandType hkEnum<enum hkpMoppAssemblerData::hkpCutCommandType, signed char>::operator enum hkpMoppAssemblerData::hkpCutCommandType(void) const;
// public: void hkEnum<enum hkpMoppAssemblerData::hkpCutCommandType, signed char>::operator=(enum hkpMoppAssemblerData::hkpCutCommandType);
// public: class hkBool hkEnum<enum hkpMoppAssemblerData::hkpCutCommandType, signed char>::operator==(enum hkpMoppAssemblerData::hkpCutCommandType) const;
// public: struct hkpMoppCodeReindexedTerminal & hkArray<struct hkpMoppCodeReindexedTerminal, struct hkContainerHeapAllocator>::expandOne(void);
// public: struct hkpMoppCompilerChunkInfo::Chunk & hkArray<struct hkpMoppCompilerChunkInfo::Chunk, struct hkContainerHeapAllocator>::expandOne(void);
// public: struct hkpMoppCodeGenerator::JumpCommandInfo & hkArray<struct hkpMoppCodeGenerator::JumpCommandInfo, struct hkContainerHeapAllocator>::expandOne(void);
// public: void hkArray<unsigned int, struct hkContainerHeapAllocator>::insertAt(int, unsigned int const *, int);
// public: struct hkpMoppCodeReindexedTerminal & hkArrayBase<struct hkpMoppCodeReindexedTerminal>::_expandOne(class hkMemoryAllocator &);
// public: struct hkpMoppCompilerChunkInfo::Chunk & hkArrayBase<struct hkpMoppCompilerChunkInfo::Chunk>::_expandOne(class hkMemoryAllocator &);
// public: struct hkpMoppSplittingPlaneDirection const & hkArrayBase<struct hkpMoppSplittingPlaneDirection>::operator[](int) const;
// public: struct hkpMoppSplittingPlaneDirection & hkArrayBase<struct hkpMoppSplittingPlaneDirection>::operator[](int);
// public: hkArray<struct hkpMoppSplittingPlaneDirection, struct hkContainerHeapAllocator>::hkArray<struct hkpMoppSplittingPlaneDirection, struct hkContainerHeapAllocator>(int);
// public: hkArray<struct hkpMoppSplittingPlaneDirection, struct hkContainerHeapAllocator>::~hkArray<struct hkpMoppSplittingPlaneDirection, struct hkContainerHeapAllocator>(void);
// public: struct hkpMoppCodeGenerator::JumpCommandInfo & hkArrayBase<struct hkpMoppCodeGenerator::JumpCommandInfo>::_expandOne(class hkMemoryAllocator &);
// public: void hkArrayBase<unsigned int>::_insertAt(class hkMemoryAllocator &, int, unsigned int const *, int);
// public: void hkArray<struct hkpMoppSplittingPlaneDirection, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: static void hkArrayUtil::construct<struct hkpMoppCodeReindexedTerminal>(struct hkpMoppCodeReindexedTerminal *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkpMoppCompilerChunkInfo::Chunk>(struct hkpMoppCompilerChunkInfo::Chunk *, int, struct hkTraitBool<0>);
// public: hkArrayBase<struct hkpMoppSplittingPlaneDirection>::hkArrayBase<struct hkpMoppSplittingPlaneDirection>(void);
// public: hkArrayBase<struct hkpMoppSplittingPlaneDirection>::~hkArrayBase<struct hkpMoppSplittingPlaneDirection>(void);
// public: void hkArrayBase<struct hkpMoppSplittingPlaneDirection>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkpMoppSplittingPlaneDirection>::setOwnedData(struct hkpMoppSplittingPlaneDirection *, int, int);
// public: static void hkArrayUtil::construct<struct hkpMoppSplittingPlaneDirection>(struct hkpMoppSplittingPlaneDirection *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkpMoppCodeGenerator::JumpCommandInfo>(struct hkpMoppCodeGenerator::JumpCommandInfo *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<unsigned int>::_spliceInto(class hkMemoryAllocator &, int, int, unsigned int const *, int);
// public: int hkArrayBase<struct hkpMoppSplittingPlaneDirection>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpMoppSplittingPlaneDirection>::clear(void);
// public: static void hkArrayUtil::constructWithArray<unsigned int>(unsigned int *, int, unsigned int const *, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<struct hkpMoppSplittingPlaneDirection>(struct hkpMoppSplittingPlaneDirection *, int, struct hkTraitBool<0>);

//public: void hkpMoppDefaultAssembler::updateParams(struct hkpMoppAssembler::hkpMoppAssemblerParams const &)
//{
//    mangled_ppc("?updateParams@hkpMoppDefaultAssembler@@QAAXABUhkpMoppAssemblerParams@hkpMoppAssembler@@@Z");
//};

//public: hkpMoppDefaultAssembler::hkpMoppDefaultAssembler(struct hkpMoppAssembler::hkpMoppAssemblerParams const &, class hkpMoppCodeGenerator *, class hkpMoppMediator *)
//{
//    mangled_ppc("??0hkpMoppDefaultAssembler@@QAA@ABUhkpMoppAssemblerParams@hkpMoppAssembler@@PAVhkpMoppCodeGenerator@@PAVhkpMoppMediator@@@Z");
//};

//public: virtual hkpMoppDefaultAssembler::~hkpMoppDefaultAssembler(void)
//{
//    mangled_ppc("??1hkpMoppDefaultAssembler@@UAA@XZ");
//};

//protected: void hkpMoppDefaultAssembler::releaseNode(class hkpMoppTreeNode *)
//{
//    mangled_ppc("?releaseNode@hkpMoppDefaultAssembler@@IAAXPAVhkpMoppTreeNode@@@Z");
//};

//protected: class hkBool hkpMoppDefaultAssembler::shouldAssemble(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &)
//{
//    mangled_ppc("?shouldAssemble@hkpMoppDefaultAssembler@@IAA?AVhkBool@@PAVhkpMoppTreeNode@@ABVhkpMoppAssemblerNodeInfo@@@Z");
//};

//protected: int hkpMoppDefaultAssembler::calcRescaleBits(class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &)
//{
//    mangled_ppc("?calcRescaleBits@hkpMoppDefaultAssembler@@IAAHABVhkpMoppAssemblerNodeInfo@@AAV2@@Z");
//};

//protected: void hkpMoppDefaultAssembler::recalcRescale(class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &, class hkpMoppAssemblerRescaleCommand &)
//{
//    mangled_ppc("?recalcRescale@hkpMoppDefaultAssembler@@IAAXABVhkpMoppAssemblerNodeInfo@@AAV2@AAVhkpMoppAssemblerRescaleCommand@@@Z");
//};

//protected: int hkpMoppDefaultAssembler::preCalcScale(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &)
//{
//    mangled_ppc("?preCalcScale@hkpMoppDefaultAssembler@@IAAHPAVhkpMoppTreeNode@@ABVhkpMoppAssemblerNodeInfo@@AAV3@@Z");
//};

//protected: void hkpMoppDefaultAssembler::fixScale(class hkpMoppTreeNode *)
//{
//    mangled_ppc("?fixScale@hkpMoppDefaultAssembler@@IAAXPAVhkpMoppTreeNode@@@Z");
//};

//protected: void hkpMoppDefaultAssembler::calcTermCut(class hkpMoppTreeNode *, class hkpMoppAssemblerCutInfo &)
//{
//    mangled_ppc("?calcTermCut@hkpMoppDefaultAssembler@@IAAXPAVhkpMoppTreeNode@@AAVhkpMoppAssemblerCutInfo@@@Z");
//};

//protected: void hkpMoppDefaultAssembler::preCalcCutPositions(class hkpMoppTreeNode *, class hkpMoppAssemblerCutInfo const &, class hkpMoppAssemblerCutInfo &)
//{
//    mangled_ppc("?preCalcCutPositions@hkpMoppDefaultAssembler@@IAAXPAVhkpMoppTreeNode@@ABVhkpMoppAssemblerCutInfo@@AAV3@@Z");
//};

//protected: void hkpMoppDefaultAssembler::initTopDown(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &, class hkpMoppAssemblerRescaleCommand &)
//{
//    mangled_ppc("?initTopDown@hkpMoppDefaultAssembler@@IAAXPAVhkpMoppTreeNode@@ABVhkpMoppAssemblerNodeInfo@@AAV3@AAVhkpMoppAssemblerRescaleCommand@@@Z");
//};

//protected: int hkpMoppDefaultAssembler::assemblesubNode(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &)
//{
//    mangled_ppc("?assemblesubNode@hkpMoppDefaultAssembler@@IAAHPAVhkpMoppTreeNode@@ABVhkpMoppAssemblerNodeInfo@@AAV3@@Z");
//};

//public: int hkpMoppDefaultAssembler::calcChunkPoints(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &, class hkArray<unsigned int, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?calcChunkPoints@hkpMoppDefaultAssembler@@QAAHPAVhkpMoppTreeNode@@ABVhkpMoppAssemblerNodeInfo@@AAV3@AAV?$hkArray@IUhkContainerHeapAllocator@@@@@Z");
//};

//public: int hkpMoppDefaultAssembler::calcTerminalIdsForChunks(class hkpMoppTreeNode *, int, int)
//{
//    mangled_ppc("?calcTerminalIdsForChunks@hkpMoppDefaultAssembler@@QAAHPAVhkpMoppTreeNode@@HH@Z");
//};

//public: void hkpMoppDefaultAssembler::assembleSubNodeIntoChunks(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &, int, class hkArray<unsigned int, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?assembleSubNodeIntoChunks@hkpMoppDefaultAssembler@@QAAXPAVhkpMoppTreeNode@@ABVhkpMoppAssemblerNodeInfo@@AAV3@HAAV?$hkArray@IUhkContainerHeapAllocator@@@@@Z");
//};

//int copyCodeAndEmbedTerminals(struct hkpMoppCompilerChunkInfo *, class hkpMoppCodeGenerator *, class hkpMoppCodeGenerator *, class hkArray<unsigned int, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?copyCodeAndEmbedTerminals@@YAHPAUhkpMoppCompilerChunkInfo@@PAVhkpMoppCodeGenerator@@1AAV?$hkArray@IUhkContainerHeapAllocator@@@@@Z");
//};

//void copyJumpCommandInfo(class hkArray<struct hkpMoppCodeGenerator::JumpCommandInfo, struct hkContainerHeapAllocator> &, class hkArray<struct hkpMoppCodeGenerator::JumpCommandInfo, struct hkContainerHeapAllocator> &, int)
//{
//    mangled_ppc("?copyJumpCommandInfo@@YAXAAV?$hkArray@UJumpCommandInfo@hkpMoppCodeGenerator@@UhkContainerHeapAllocator@@@@0H@Z");
//};

//protected: void hkpMoppDefaultAssembler::calcReoffset(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &)
//{
//    mangled_ppc("?calcReoffset@hkpMoppDefaultAssembler@@IAAXPAVhkpMoppTreeNode@@ABVhkpMoppAssemblerNodeInfo@@AAV3@@Z");
//};

//protected: void hkpMoppDefaultAssembler::addProperty(int, int)
//{
//    mangled_ppc("?addProperty@hkpMoppDefaultAssembler@@IAAXHH@Z");
//};

//protected: int hkpMoppDefaultAssembler::addJumpChunk(int)
//{
//    mangled_ppc("?addJumpChunk@hkpMoppDefaultAssembler@@IAAHH@Z");
//};

//protected: int hkpMoppDefaultAssembler::addDataOffset(int, int)
//{
//    mangled_ppc("?addDataOffset@hkpMoppDefaultAssembler@@IAAHHH@Z");
//};

//protected: void hkpMoppDefaultAssembler::addRescale(class hkpMoppAssemblerRescaleCommand const &)
//{
//    mangled_ppc("?addRescale@hkpMoppDefaultAssembler@@IAAXABVhkpMoppAssemblerRescaleCommand@@@Z");
//};

//protected: void hkpMoppDefaultAssembler::addTermIdOffset(unsigned int)
//{
//    mangled_ppc("?addTermIdOffset@hkpMoppDefaultAssembler@@IAAXI@Z");
//};

//protected: void hkpMoppDefaultAssembler::addCut(class hkpMoppTreeNode const *, class hkpMoppAssemblerNodeInfo const &)
//{
//    mangled_ppc("?addCut@hkpMoppDefaultAssembler@@IAAXPBVhkpMoppTreeNode@@ABVhkpMoppAssemblerNodeInfo@@@Z");
//};

//protected: void hkpMoppDefaultAssembler::addSplit(int, int, enum HK_MOPP_SPLIT_DIRECTIONS, int, int)
//{
//    mangled_ppc("?addSplit@hkpMoppDefaultAssembler@@IAAXHHW4HK_MOPP_SPLIT_DIRECTIONS@@HH@Z");
//};

//protected: void hkpMoppDefaultAssembler::checkAndAddProperties(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &)
//{
//    mangled_ppc("?checkAndAddProperties@hkpMoppDefaultAssembler@@IAAXPAVhkpMoppTreeNode@@ABVhkpMoppAssemblerNodeInfo@@AAV3@@Z");
//};

//protected: int hkpMoppDefaultAssembler::addTerminals(class hkpMoppTreeTerminal *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo const &)
//{
//    mangled_ppc("?addTerminals@hkpMoppDefaultAssembler@@IAAHPAVhkpMoppTreeTerminal@@ABVhkpMoppAssemblerNodeInfo@@1@Z");
//};

//protected: void hkpMoppDefaultAssembler::addJump(unsigned int)
//{
//    mangled_ppc("?addJump@hkpMoppDefaultAssembler@@IAAXI@Z");
//};

//protected: enum HK_MOPP_SPLIT_DIRECTIONS hkpMoppDefaultAssembler::getSplitCode(class hkVector4const &)
//{
//    mangled_ppc("?getSplitCode@hkpMoppDefaultAssembler@@IAA?AW4HK_MOPP_SPLIT_DIRECTIONS@@ABVhkVector4@@@Z");
//};

//protected: void hkpMoppDefaultAssembler::findPlanes(class hkpMoppTreeInternalNode const *, class hkpMoppAssemblerNodeInfo const &, int &, int &)
//{
//    mangled_ppc("?findPlanes@hkpMoppDefaultAssembler@@IAAXPBVhkpMoppTreeInternalNode@@ABVhkpMoppAssemblerNodeInfo@@AAH2@Z");
//};

//public: virtual void hkpMoppDefaultAssembler::getScaleInfo(class hkpMoppTreeNode *, struct hkpMoppCode::CodeInfo *)
//{
//    mangled_ppc("?getScaleInfo@hkpMoppDefaultAssembler@@UAAXPAVhkpMoppTreeNode@@PAUCodeInfo@hkpMoppCode@@@Z");
//};

//protected: int hkpMoppDefaultAssembler::assembleCutAndTerminalCommand(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &)
//{
//    mangled_ppc("?assembleCutAndTerminalCommand@hkpMoppDefaultAssembler@@IAAHPAVhkpMoppTreeNode@@ABVhkpMoppAssemblerNodeInfo@@AAV3@@Z");
//};

//protected: int hkpMoppDefaultAssembler::assembleNonTerminalCommand(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &, class hkpMoppAssemblerRescaleCommand &)
//{
//    mangled_ppc("?assembleNonTerminalCommand@hkpMoppDefaultAssembler@@IAAHPAVhkpMoppTreeNode@@ABVhkpMoppAssemblerNodeInfo@@AAV3@AAVhkpMoppAssemblerRescaleCommand@@@Z");
//};

//protected: int hkpMoppDefaultAssembler::assembleJumpChunkCommand(class hkpMoppTreeNode *)
//{
//    mangled_ppc("?assembleJumpChunkCommand@hkpMoppDefaultAssembler@@IAAHPAVhkpMoppTreeNode@@@Z");
//};

//public: virtual void hkpMoppDefaultAssembler::assemble(class hkpMoppTreeNode *, class hkpMoppNodeMgr *, int)
//{
//    mangled_ppc("?assemble@hkpMoppDefaultAssembler@@UAAXPAVhkpMoppTreeNode@@PAVhkpMoppNodeMgr@@H@Z");
//};

//public: hkpMoppAssembler::hkpMoppAssembler(void)
//{
//    mangled_ppc("??0hkpMoppAssembler@@QAA@XZ");
//};

//merged_8480A598
//{
//    mangled_ppc("merged_8480A598");
//};

//public: static void hkpMoppAssembler::operator delete(void *)
//{
//    mangled_ppc("??3hkpMoppAssembler@@SAXPAX@Z");
//};

//public: virtual hkpMoppAssembler::~hkpMoppAssembler(void)
//{
//    mangled_ppc("??1hkpMoppAssembler@@UAA@XZ");
//};

//public: virtual int hkpMoppDefaultAssembler::getNumSplittingPlaneDirections(void) const
//{
//    mangled_ppc("?getNumSplittingPlaneDirections@hkpMoppDefaultAssembler@@UBAHXZ");
//};

//public: virtual struct hkpMoppSplittingPlaneDirection const * hkpMoppDefaultAssembler::getSplittingPlaneDirections(void) const
//{
//    mangled_ppc("?getSplittingPlaneDirections@hkpMoppDefaultAssembler@@UBAPBUhkpMoppSplittingPlaneDirection@@XZ");
//};

//merged_8480A6B0
//{
//    mangled_ppc("merged_8480A6B0");
//};

//public: class hkpMoppTreeInternalNode * hkpMoppTreeNode::toNode(void)
//{
//    mangled_ppc("?toNode@hkpMoppTreeNode@@QAAPAVhkpMoppTreeInternalNode@@XZ");
//};

//public: hkpMoppAssemblerRescaleCommand::hkpMoppAssemblerRescaleCommand(void)
//{
//    mangled_ppc("??0hkpMoppAssemblerRescaleCommand@@QAA@XZ");
//};

//public: int hkpMoppAssemblerNodeInfo::calcSignificantBits(unsigned int)
//{
//    mangled_ppc("?calcSignificantBits@hkpMoppAssemblerNodeInfo@@QAAHI@Z");
//};

//public: hkpMoppAssemblerNodeInfo::hkpMoppAssemblerNodeInfo(class hkpMoppAssemblerNodeInfo const &, class hkpMoppTreeNode const *, struct hkpMoppCode::CodeInfo const &)
//{
//    mangled_ppc("??0hkpMoppAssemblerNodeInfo@@QAA@ABV0@PBVhkpMoppTreeNode@@ABUCodeInfo@hkpMoppCode@@@Z");
//};

//protected: void hkpMoppAssemblerNodeInfo::updateOffsetAndSpread(class hkpMoppTreeNode const *)
//{
//    mangled_ppc("?updateOffsetAndSpread@hkpMoppAssemblerNodeInfo@@IAAXPBVhkpMoppTreeNode@@@Z");
//};

//protected: void hkpMoppAssemblerNodeInfo::updateExtents(class hkpMoppTreeNode const *, struct hkpMoppCode::CodeInfo const &)
//{
//    mangled_ppc("?updateExtents@hkpMoppAssemblerNodeInfo@@IAAXPBVhkpMoppTreeNode@@ABUCodeInfo@hkpMoppCode@@@Z");
//};

//public: void hkpMoppAssemblerNodeInfo::calcMaxExtentsSignificantBits(void)
//{
//    mangled_ppc("?calcMaxExtentsSignificantBits@hkpMoppAssemblerNodeInfo@@QAAXXZ");
//};

//public: int hkpMoppAssemblerNodeInfo::getMaxExtentFixedPoint(void)
//{
//    mangled_ppc("?getMaxExtentFixedPoint@hkpMoppAssemblerNodeInfo@@QAAHXZ");
//};

//protected: class hkBool hkpMoppDefaultAssembler::shouldRescale(class hkpMoppTreeNode *, class hkpMoppAssemblerNodeInfo const &, class hkpMoppAssemblerNodeInfo &)
//{
//    mangled_ppc("?shouldRescale@hkpMoppDefaultAssembler@@IAA?AVhkBool@@PAVhkpMoppTreeNode@@ABVhkpMoppAssemblerNodeInfo@@AAV4@@Z");
//};

//public: class hkVector4const & hkpMoppBasicNode::getPlaneNormal(void) const
//{
//    mangled_ppc("?getPlaneNormal@hkpMoppBasicNode@@QBAABVhkVector4@@XZ");
//};

//public: hkpMoppAssemblerCutInfo::hkpMoppAssemblerCutInfo(class hkpMoppAssemblerCutInfo const &, class hkpMoppTreeNode const *, struct hkpMoppCode::CodeInfo const &)
//{
//    mangled_ppc("??0hkpMoppAssemblerCutInfo@@QAA@ABV0@PBVhkpMoppTreeNode@@ABUCodeInfo@hkpMoppCode@@@Z");
//};

//public: void hkpMoppAssemblerCutInfo::calcPossibleCutPlanes(void)
//{
//    mangled_ppc("?calcPossibleCutPlanes@hkpMoppAssemblerCutInfo@@QAAXXZ");
//};

//protected: void hkpMoppDefaultAssembler::updateMaxCutPlanePosition(class hkpMoppTreeNode *, enum HK_MOPP_SPLIT_DIRECTIONS, int)
//{
//    mangled_ppc("?updateMaxCutPlanePosition@hkpMoppDefaultAssembler@@IAAXPAVhkpMoppTreeNode@@W4HK_MOPP_SPLIT_DIRECTIONS@@H@Z");
//};

//protected: void hkpMoppDefaultAssembler::updateMinCutPlanePosition(class hkpMoppTreeNode *, enum HK_MOPP_SPLIT_DIRECTIONS, int)
//{
//    mangled_ppc("?updateMinCutPlanePosition@hkpMoppDefaultAssembler@@IAAXPAVhkpMoppTreeNode@@W4HK_MOPP_SPLIT_DIRECTIONS@@H@Z");
//};

//public: class hkpMoppTreeTerminal * hkpMoppTreeNode::toTerminal(void)
//{
//    mangled_ppc("?toTerminal@hkpMoppTreeNode@@QAAPAVhkpMoppTreeTerminal@@XZ");
//};

//public: void hkpMoppCodeGenerator::undo(int)
//{
//    mangled_ppc("?undo@hkpMoppCodeGenerator@@QAAXH@Z");
//};

//public: static void * hkpMoppCodeGenerator::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpMoppCodeGenerator@@SAPAXI@Z");
//};

//public: void hkpMoppCodeGenerator::pad(int)
//{
//    mangled_ppc("?pad@hkpMoppCodeGenerator@@QAAXH@Z");
//};

//public: void hkpMoppCodeGenerator::addCode(int)
//{
//    mangled_ppc("?addCode@hkpMoppCodeGenerator@@QAAXH@Z");
//};

//public: void hkpMoppCodeGenerator::addCommand8(int, int)
//{
//    mangled_ppc("?addCommand8@hkpMoppCodeGenerator@@QAAXHH@Z");
//};

//public: void hkpMoppCodeGenerator::addCommand16(int, int)
//{
//    mangled_ppc("?addCommand16@hkpMoppCodeGenerator@@QAAXHH@Z");
//};

//public: void hkpMoppCodeGenerator::addCommand32(int, unsigned int)
//{
//    mangled_ppc("?addCommand32@hkpMoppCodeGenerator@@QAAXHI@Z");
//};

//public: void hkpMoppCodeGenerator::addParam24(int)
//{
//    mangled_ppc("?addParam24@hkpMoppCodeGenerator@@QAAXH@Z");
//};

//public: void hkpMoppCodeGenerator::addCommand5(int, int)
//{
//    mangled_ppc("?addCommand5@hkpMoppCodeGenerator@@QAAXHH@Z");
//};

//public: void hkpMoppCodeGenerator::addCommand24(int, int)
//{
//    mangled_ppc("?addCommand24@hkpMoppCodeGenerator@@QAAXHH@Z");
//};

//public: void hkpMoppCode::CodeInfo::setScale(float)
//{
//    mangled_ppc("?setScale@CodeInfo@hkpMoppCode@@QAAXM@Z");
//};

//public: hkpMoppAssemblerNodeInfo::hkpMoppAssemblerNodeInfo(class hkpMoppTreeNode const *, struct hkpMoppCode::CodeInfo const &)
//{
//    mangled_ppc("??0hkpMoppAssemblerNodeInfo@@QAA@PBVhkpMoppTreeNode@@ABUCodeInfo@hkpMoppCode@@@Z");
//};

//public: hkpMoppAssemblerCutInfo::hkpMoppAssemblerCutInfo(class hkpMoppTreeNode const *, struct hkpMoppCode::CodeInfo const &)
//{
//    mangled_ppc("??0hkpMoppAssemblerCutInfo@@QAA@PBVhkpMoppTreeNode@@ABUCodeInfo@hkpMoppCode@@@Z");
//};

//public: void hkEnum<enum hkpMoppAssemblerData::hkpRescaleCommandType, signed char>::operator=(enum hkpMoppAssemblerData::hkpRescaleCommandType)
//{
//    mangled_ppc("??4?$hkEnum@W4hkpRescaleCommandType@hkpMoppAssemblerData@@C@@QAAXW4hkpRescaleCommandType@hkpMoppAssemblerData@@@Z");
//};

//public: class hkBool hkEnum<enum hkpMoppAssemblerData::hkpRescaleCommandType, signed char>::operator==(enum hkpMoppAssemblerData::hkpRescaleCommandType) const
//{
//    mangled_ppc("??8?$hkEnum@W4hkpRescaleCommandType@hkpMoppAssemblerData@@C@@QBA?AVhkBool@@W4hkpRescaleCommandType@hkpMoppAssemblerData@@@Z");
//};

//public: enum hkpMoppAssemblerData::hkpCutCommandType hkEnum<enum hkpMoppAssemblerData::hkpCutCommandType, signed char>::operator enum hkpMoppAssemblerData::hkpCutCommandType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4hkpCutCommandType@hkpMoppAssemblerData@@C@@QBA?AW4hkpCutCommandType@hkpMoppAssemblerData@@XZ");
//};

//public: void hkEnum<enum hkpMoppAssemblerData::hkpCutCommandType, signed char>::operator=(enum hkpMoppAssemblerData::hkpCutCommandType)
//{
//    mangled_ppc("??4?$hkEnum@W4hkpCutCommandType@hkpMoppAssemblerData@@C@@QAAXW4hkpCutCommandType@hkpMoppAssemblerData@@@Z");
//};

//public: class hkBool hkEnum<enum hkpMoppAssemblerData::hkpCutCommandType, signed char>::operator==(enum hkpMoppAssemblerData::hkpCutCommandType) const
//{
//    mangled_ppc("??8?$hkEnum@W4hkpCutCommandType@hkpMoppAssemblerData@@C@@QBA?AVhkBool@@W4hkpCutCommandType@hkpMoppAssemblerData@@@Z");
//};

//public: struct hkpMoppCodeReindexedTerminal & hkArray<struct hkpMoppCodeReindexedTerminal, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UhkpMoppCodeReindexedTerminal@@UhkContainerHeapAllocator@@@@QAAAAUhkpMoppCodeReindexedTerminal@@XZ");
//};

//public: struct hkpMoppCompilerChunkInfo::Chunk & hkArray<struct hkpMoppCompilerChunkInfo::Chunk, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UChunk@hkpMoppCompilerChunkInfo@@UhkContainerHeapAllocator@@@@QAAAAUChunk@hkpMoppCompilerChunkInfo@@XZ");
//};

//public: struct hkpMoppCodeGenerator::JumpCommandInfo & hkArray<struct hkpMoppCodeGenerator::JumpCommandInfo, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UJumpCommandInfo@hkpMoppCodeGenerator@@UhkContainerHeapAllocator@@@@QAAAAUJumpCommandInfo@hkpMoppCodeGenerator@@XZ");
//};

//public: void hkArray<unsigned int, struct hkContainerHeapAllocator>::insertAt(int, unsigned int const *, int)
//{
//    mangled_ppc("?insertAt@?$hkArray@IUhkContainerHeapAllocator@@@@QAAXHPBIH@Z");
//};

//public: struct hkpMoppCodeReindexedTerminal & hkArrayBase<struct hkpMoppCodeReindexedTerminal>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UhkpMoppCodeReindexedTerminal@@@@QAAAAUhkpMoppCodeReindexedTerminal@@AAVhkMemoryAllocator@@@Z");
//};

//public: struct hkpMoppCompilerChunkInfo::Chunk & hkArrayBase<struct hkpMoppCompilerChunkInfo::Chunk>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UChunk@hkpMoppCompilerChunkInfo@@@@QAAAAUChunk@hkpMoppCompilerChunkInfo@@AAVhkMemoryAllocator@@@Z");
//};

//public: struct hkpMoppSplittingPlaneDirection const & hkArrayBase<struct hkpMoppSplittingPlaneDirection>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UhkpMoppSplittingPlaneDirection@@@@QBAABUhkpMoppSplittingPlaneDirection@@H@Z");
//};

//public: struct hkpMoppSplittingPlaneDirection & hkArrayBase<struct hkpMoppSplittingPlaneDirection>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UhkpMoppSplittingPlaneDirection@@@@QAAAAUhkpMoppSplittingPlaneDirection@@H@Z");
//};

//public: hkArray<struct hkpMoppSplittingPlaneDirection, struct hkContainerHeapAllocator>::hkArray<struct hkpMoppSplittingPlaneDirection, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkArray@UhkpMoppSplittingPlaneDirection@@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkArray<struct hkpMoppSplittingPlaneDirection, struct hkContainerHeapAllocator>::~hkArray<struct hkpMoppSplittingPlaneDirection, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkpMoppSplittingPlaneDirection@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct hkpMoppCodeGenerator::JumpCommandInfo & hkArrayBase<struct hkpMoppCodeGenerator::JumpCommandInfo>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UJumpCommandInfo@hkpMoppCodeGenerator@@@@QAAAAUJumpCommandInfo@hkpMoppCodeGenerator@@AAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<unsigned int>::_insertAt(class hkMemoryAllocator &, int, unsigned int const *, int)
//{
//    mangled_ppc("?_insertAt@?$hkArrayBase@I@@QAAXAAVhkMemoryAllocator@@HPBIH@Z");
//};

//public: void hkArray<struct hkpMoppSplittingPlaneDirection, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkpMoppSplittingPlaneDirection@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::construct<struct hkpMoppCodeReindexedTerminal>(struct hkpMoppCodeReindexedTerminal *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkpMoppCodeReindexedTerminal@@@hkArrayUtil@@SAXPAUhkpMoppCodeReindexedTerminal@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpMoppCompilerChunkInfo::Chunk>(struct hkpMoppCompilerChunkInfo::Chunk *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UChunk@hkpMoppCompilerChunkInfo@@@hkArrayUtil@@SAXPAUChunk@hkpMoppCompilerChunkInfo@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkArrayBase<struct hkpMoppSplittingPlaneDirection>::hkArrayBase<struct hkpMoppSplittingPlaneDirection>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkpMoppSplittingPlaneDirection@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpMoppSplittingPlaneDirection>::~hkArrayBase<struct hkpMoppSplittingPlaneDirection>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkpMoppSplittingPlaneDirection@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkpMoppSplittingPlaneDirection>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkpMoppSplittingPlaneDirection@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkpMoppSplittingPlaneDirection>::setOwnedData(struct hkpMoppSplittingPlaneDirection *, int, int)
//{
//    mangled_ppc("?setOwnedData@?$hkArrayBase@UhkpMoppSplittingPlaneDirection@@@@QAAXPAUhkpMoppSplittingPlaneDirection@@HH@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpMoppSplittingPlaneDirection>(struct hkpMoppSplittingPlaneDirection *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkpMoppSplittingPlaneDirection@@@hkArrayUtil@@SAXPAUhkpMoppSplittingPlaneDirection@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpMoppCodeGenerator::JumpCommandInfo>(struct hkpMoppCodeGenerator::JumpCommandInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UJumpCommandInfo@hkpMoppCodeGenerator@@@hkArrayUtil@@SAXPAUJumpCommandInfo@hkpMoppCodeGenerator@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<unsigned int>::_spliceInto(class hkMemoryAllocator &, int, int, unsigned int const *, int)
//{
//    mangled_ppc("?_spliceInto@?$hkArrayBase@I@@QAAXAAVhkMemoryAllocator@@HHPBIH@Z");
//};

//public: int hkArrayBase<struct hkpMoppSplittingPlaneDirection>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkpMoppSplittingPlaneDirection@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpMoppSplittingPlaneDirection>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkpMoppSplittingPlaneDirection@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::constructWithArray<unsigned int>(unsigned int *, int, unsigned int const *, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithArray@I@hkArrayUtil@@SAXPAIHPBIU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpMoppSplittingPlaneDirection>(struct hkpMoppSplittingPlaneDirection *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkpMoppSplittingPlaneDirection@@@hkArrayUtil@@SAXPAUhkpMoppSplittingPlaneDirection@@HU?$hkTraitBool@$0A@@@@Z");
//};

