/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkKdTreeBuilderSparseWriter::hkKdTreeBuilderSparseWriter(void);
// public: void hkKdTreeBuilderSparseWriter::putProjEntToMainMemory(struct hkKdTreeProjectedEntry *, int, struct hkKdTreeProjectedEntry const &);
// public: void hkKdTreeBuilderSparseWriter::putNodeToMainMemory(class hkKdTreeNode *, int, class hkKdTreeNode &);
// protected: void hkKdTreeBuilderSparseWriter::flush(void);
// void initializeIterator(struct hkKdTreeProjectedEntry const *&, struct hkKdTreeProjectedEntry const *);
// void reinitializeIterator(struct hkKdTreeProjectedEntry const *&, struct hkKdTreeProjectedEntry const *);
// void initializeIterator(unsigned int *&, struct hkKdTreeProjectedEntry &, struct hkKdTreeProjectedEntry *);
// void hkGetExtentFromBounds(struct hkKdTreeProjectedEntry const &, class hkVector4&);
// void hkString_memClear128Exactly(void *);
// void WRITE_NODE_WITH_MANAGER(class hkKdTreeNode *, int, class hkKdTreeNode &, class hkKdTreeBuilderSparseWriter *);
// void WRITE_PROJ_ENT_WITH_MANAGER(struct hkKdTreeProjectedEntry *, int, struct hkKdTreeProjectedEntry const &, class hkKdTreeBuilderSparseWriter *);
// public: static enum hkSplitPrimitivesStatus hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::splitPrimitives(struct hkKdTreeBuildInput::WorkingSet const &, int, int, struct hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::SplitPrimitivesResults &, int &, struct hkKdTreeBuildInput::WorkingSet &, struct hkKdTreeProjectedEntry const &, class hkVector4Comparison const &);
// public: struct __vector4 hkIntVector::operator struct __vector4(void) const;
// public: void hkIntVector::setAddSaturateU32(class hkIntVector, class hkIntVector);
// public: void hkIntVector::setSubSaturateU32(class hkIntVector, class hkIntVector);
// public: void hkIntVector::setShiftRight32(class hkIntVector, class hkIntVector);
// public: void hkIntVector::convertFromF32toU32(class hkVector4const &);
// public: void hkIntVector::loadAligned(unsigned int const *);
// public: void hkIntVector::select32(class hkIntVector, class hkIntVector, class hkVector4Comparison const &);
// public: void hkIntVector::loadUnaligned4(unsigned int const *);
// void hkGetDeltaSurfaceArea(class hkVector4const &, class hkVector4&, class hkVector4&);
// unsigned int getMinIndexAndDoShuffle(class hkVector4const &, class hkVector4&, class hkVector4&, class hkVector4&);
// public: void hkIntVector::setMergeHigh32(class hkIntVector, class hkIntVector);
// void hkGetNumLeadingZero(class hkIntVector &, class hkIntVector);
// public: struct __vector4& hkIntVector::getQuad(void);
// public: struct __vector4const & hkIntVector::getQuad(void) const;
// int _nlz(unsigned short);
// public: void hkIntVector::splatImmediate32<0>(void);
// public: void hkIntVector::splatImmediate32<1>(void);
// public: void hkIntVector::splatImmediate32<2>(void);
// public: void hkIntVector::splatImmediate32<3>(void);
// public: static int hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::buildTreeRecursive(struct hkKdTreeBuildInput::BuildRecursiveInput const &, struct hkKdTreeBuildInput::TreeStream *, struct hkKdTreeProjectedEntry *, int &, int &);
// public: void hkKdTreeNode::setSplit(int, unsigned short, unsigned short);
// public: static void hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::checkBuildRecursiveInput(struct hkKdTreeBuildInput::BuildRecursiveInput const &);
// public: static enum hkSplitPrimitivesStatus hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::splitPrimitivesExactly(struct hkKdTreeBuildInput::WorkingSet const &, int, int, struct hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::SplitPrimitivesResults &, struct hkKdTreeBuildInput::WorkingSet &, struct hkKdTreeProjectedEntry const &);
// public: static void hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::splitTreeBuilding(struct hkKdTreeBuildInput::WorkingSet const &, class hkKdTreeNode *, int, int, struct hkKdTreeBuildInput::BuildRecursiveInput *, int *const, struct hkKdTreeProjectedEntry const &);
// public: static void hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::writeEmptyLeaf(class hkKdTreeNode *, int, class hkKdTreeBuilderSparseWriter *);
// public: static void hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::writeSinglePrimitiveToLeaf(class hkKdTreeNode *, struct hkKdTreeProjectedEntry *, struct hkKdTreeProjectedEntry *, int, int, class hkKdTreeBuilderSparseWriter *);
// public: void hkKdTreeNode::setNumPrimitivesInLeaf(unsigned int);
// public: void hkKdTreeNode::setPrimitiveId(unsigned long);
// public: static int hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::writeMultiplePrimitivesToLeaf(unsigned int *, class hkKdTreeNode &, struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, int, int, int, class hkKdTreeBuilderSparseWriter *);
// public: void hkIntVector::splatImmediate32<13>(void);
// public: void hkIntVector::setShiftRight32<10>(class hkIntVector);
// public: void hkIntVector::splatImmediate32<10>(void);
// public: static void hkString::memClear16(void *, int);

//public: hkKdTreeBuilderSparseWriter::hkKdTreeBuilderSparseWriter(void)
//{
//    mangled_ppc("??0hkKdTreeBuilderSparseWriter@@QAA@XZ");
//};

//public: void hkKdTreeBuilderSparseWriter::putProjEntToMainMemory(struct hkKdTreeProjectedEntry *, int, struct hkKdTreeProjectedEntry const &)
//{
//    mangled_ppc("?putProjEntToMainMemory@hkKdTreeBuilderSparseWriter@@QAAXPAUhkKdTreeProjectedEntry@@HABU2@@Z");
//};

//public: void hkKdTreeBuilderSparseWriter::putNodeToMainMemory(class hkKdTreeNode *, int, class hkKdTreeNode &)
//{
//    mangled_ppc("?putNodeToMainMemory@hkKdTreeBuilderSparseWriter@@QAAXPAVhkKdTreeNode@@HAAV2@@Z");
//};

//protected: void hkKdTreeBuilderSparseWriter::flush(void)
//{
//    mangled_ppc("?flush@hkKdTreeBuilderSparseWriter@@IAAXXZ");
//};

//void initializeIterator(struct hkKdTreeProjectedEntry const *&, struct hkKdTreeProjectedEntry const *)
//{
//    mangled_ppc("?initializeIterator@@YAXAAPBUhkKdTreeProjectedEntry@@PBU1@@Z");
//};

//void reinitializeIterator(struct hkKdTreeProjectedEntry const *&, struct hkKdTreeProjectedEntry const *)
//{
//    mangled_ppc("?reinitializeIterator@@YAXAAPBUhkKdTreeProjectedEntry@@PBU1@@Z");
//};

//void initializeIterator(unsigned int *&, struct hkKdTreeProjectedEntry &, struct hkKdTreeProjectedEntry *)
//{
//    mangled_ppc("?initializeIterator@@YAXAAPIAUhkKdTreeProjectedEntry@@PAU1@@Z");
//};

//void hkGetExtentFromBounds(struct hkKdTreeProjectedEntry const &, class hkVector4&)
//{
//    mangled_ppc("?hkGetExtentFromBounds@@YAXABUhkKdTreeProjectedEntry@@AAVhkVector4@@@Z");
//};

//void hkString_memClear128Exactly(void *)
//{
//    mangled_ppc("?hkString_memClear128Exactly@@YAXPAX@Z");
//};

//void WRITE_NODE_WITH_MANAGER(class hkKdTreeNode *, int, class hkKdTreeNode &, class hkKdTreeBuilderSparseWriter *)
//{
//    mangled_ppc("?WRITE_NODE_WITH_MANAGER@@YAXPAVhkKdTreeNode@@HAAV1@PAVhkKdTreeBuilderSparseWriter@@@Z");
//};

//void WRITE_PROJ_ENT_WITH_MANAGER(struct hkKdTreeProjectedEntry *, int, struct hkKdTreeProjectedEntry const &, class hkKdTreeBuilderSparseWriter *)
//{
//    mangled_ppc("?WRITE_PROJ_ENT_WITH_MANAGER@@YAXPAUhkKdTreeProjectedEntry@@HABU1@PAVhkKdTreeBuilderSparseWriter@@@Z");
//};

//public: static enum hkSplitPrimitivesStatus hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::splitPrimitives(struct hkKdTreeBuildInput::WorkingSet const &, int, int, struct hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::SplitPrimitivesResults &, int &, struct hkKdTreeBuildInput::WorkingSet &, struct hkKdTreeProjectedEntry const &, class hkVector4Comparison const &)
//{
//    mangled_ppc("?splitPrimitives@?$hkKdTreeBuilder@PBUhkKdTreeProjectedEntry@@PIAU1@$0A@@@SA?AW4hkSplitPrimitivesStatus@@ABUWorkingSet@hkKdTreeBuildInput@@HHAAUSplitPrimitivesResults@1@AAHAAU34@ABUhkKdTreeProjectedEntry@@ABVhkVector4Comparison@@@Z");
//};

//public: struct __vector4 hkIntVector::operator struct __vector4(void) const
//{
//    mangled_ppc("??BhkIntVector@@QBA?AU__vector4@@XZ");
//};

//public: void hkIntVector::setAddSaturateU32(class hkIntVector, class hkIntVector)
//{
//    mangled_ppc("?setAddSaturateU32@hkIntVector@@QAAXV1@0@Z");
//};

//public: void hkIntVector::setSubSaturateU32(class hkIntVector, class hkIntVector)
//{
//    mangled_ppc("?setSubSaturateU32@hkIntVector@@QAAXV1@0@Z");
//};

//public: void hkIntVector::setShiftRight32(class hkIntVector, class hkIntVector)
//{
//    mangled_ppc("?setShiftRight32@hkIntVector@@QAAXV1@0@Z");
//};

//public: void hkIntVector::convertFromF32toU32(class hkVector4const &)
//{
//    mangled_ppc("?convertFromF32toU32@hkIntVector@@QAAXABVhkVector4@@@Z");
//};

//public: void hkIntVector::loadAligned(unsigned int const *)
//{
//    mangled_ppc("?loadAligned@hkIntVector@@QAAXPBI@Z");
//};

//public: void hkIntVector::select32(class hkIntVector, class hkIntVector, class hkVector4Comparison const &)
//{
//    mangled_ppc("?select32@hkIntVector@@QAAXV1@0ABVhkVector4Comparison@@@Z");
//};

//public: void hkIntVector::loadUnaligned4(unsigned int const *)
//{
//    mangled_ppc("?loadUnaligned4@hkIntVector@@QAAXPBI@Z");
//};

//void hkGetDeltaSurfaceArea(class hkVector4const &, class hkVector4&, class hkVector4&)
//{
//    mangled_ppc("?hkGetDeltaSurfaceArea@@YAXABVhkVector4@@AAV1@1@Z");
//};

//unsigned int getMinIndexAndDoShuffle(class hkVector4const &, class hkVector4&, class hkVector4&, class hkVector4&)
//{
//    mangled_ppc("?getMinIndexAndDoShuffle@@YAIABVhkVector4@@AAV1@11@Z");
//};

//public: void hkIntVector::setMergeHigh32(class hkIntVector, class hkIntVector)
//{
//    mangled_ppc("?setMergeHigh32@hkIntVector@@QAAXV1@0@Z");
//};

//void hkGetNumLeadingZero(class hkIntVector &, class hkIntVector)
//{
//    mangled_ppc("?hkGetNumLeadingZero@@YAXAAVhkIntVector@@V1@@Z");
//};

//public: struct __vector4& hkIntVector::getQuad(void)
//{
//    mangled_ppc("?getQuad@hkIntVector@@QAAAAU__vector4@@XZ");
//};

//public: struct __vector4const & hkIntVector::getQuad(void) const
//{
//    mangled_ppc("?getQuad@hkIntVector@@QBAABU__vector4@@XZ");
//};

//int _nlz(unsigned short)
//{
//    mangled_ppc("?_nlz@@YAHG@Z");
//};

//public: void hkIntVector::splatImmediate32<0>(void)
//{
//    mangled_ppc("??$splatImmediate32@$0A@@hkIntVector@@QAAXXZ");
//};

//public: void hkIntVector::splatImmediate32<1>(void)
//{
//    mangled_ppc("??$splatImmediate32@$00@hkIntVector@@QAAXXZ");
//};

//public: void hkIntVector::splatImmediate32<2>(void)
//{
//    mangled_ppc("??$splatImmediate32@$01@hkIntVector@@QAAXXZ");
//};

//public: void hkIntVector::splatImmediate32<3>(void)
//{
//    mangled_ppc("??$splatImmediate32@$02@hkIntVector@@QAAXXZ");
//};

//public: static int hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::buildTreeRecursive(struct hkKdTreeBuildInput::BuildRecursiveInput const &, struct hkKdTreeBuildInput::TreeStream *, struct hkKdTreeProjectedEntry *, int &, int &)
//{
//    mangled_ppc("?buildTreeRecursive@?$hkKdTreeBuilder@PBUhkKdTreeProjectedEntry@@PIAU1@$0A@@@SAHABUBuildRecursiveInput@hkKdTreeBuildInput@@PAUTreeStream@3@PAUhkKdTreeProjectedEntry@@AAH3@Z");
//};

//public: void hkKdTreeNode::setSplit(int, unsigned short, unsigned short)
//{
//    mangled_ppc("?setSplit@hkKdTreeNode@@QAAXHGG@Z");
//};

//public: static void hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::checkBuildRecursiveInput(struct hkKdTreeBuildInput::BuildRecursiveInput const &)
//{
//    mangled_ppc("?checkBuildRecursiveInput@?$hkKdTreeBuilder@PBUhkKdTreeProjectedEntry@@PIAU1@$0A@@@SAXABUBuildRecursiveInput@hkKdTreeBuildInput@@@Z");
//};

//public: static enum hkSplitPrimitivesStatus hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::splitPrimitivesExactly(struct hkKdTreeBuildInput::WorkingSet const &, int, int, struct hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::SplitPrimitivesResults &, struct hkKdTreeBuildInput::WorkingSet &, struct hkKdTreeProjectedEntry const &)
//{
//    mangled_ppc("?splitPrimitivesExactly@?$hkKdTreeBuilder@PBUhkKdTreeProjectedEntry@@PIAU1@$0A@@@SA?AW4hkSplitPrimitivesStatus@@ABUWorkingSet@hkKdTreeBuildInput@@HHAAUSplitPrimitivesResults@1@AAU34@ABUhkKdTreeProjectedEntry@@@Z");
//};

//public: static void hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::splitTreeBuilding(struct hkKdTreeBuildInput::WorkingSet const &, class hkKdTreeNode *, int, int, struct hkKdTreeBuildInput::BuildRecursiveInput *, int *const, struct hkKdTreeProjectedEntry const &)
//{
//    mangled_ppc("?splitTreeBuilding@?$hkKdTreeBuilder@PBUhkKdTreeProjectedEntry@@PIAU1@$0A@@@SAXABUWorkingSet@hkKdTreeBuildInput@@PAVhkKdTreeNode@@HHPAUBuildRecursiveInput@3@QAHABUhkKdTreeProjectedEntry@@@Z");
//};

//public: static void hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::writeEmptyLeaf(class hkKdTreeNode *, int, class hkKdTreeBuilderSparseWriter *)
//{
//    mangled_ppc("?writeEmptyLeaf@?$hkKdTreeBuilder@PBUhkKdTreeProjectedEntry@@PIAU1@$0A@@@SAXPAVhkKdTreeNode@@HPAVhkKdTreeBuilderSparseWriter@@@Z");
//};

//public: static void hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::writeSinglePrimitiveToLeaf(class hkKdTreeNode *, struct hkKdTreeProjectedEntry *, struct hkKdTreeProjectedEntry *, int, int, class hkKdTreeBuilderSparseWriter *)
//{
//    mangled_ppc("?writeSinglePrimitiveToLeaf@?$hkKdTreeBuilder@PBUhkKdTreeProjectedEntry@@PIAU1@$0A@@@SAXPAVhkKdTreeNode@@PAUhkKdTreeProjectedEntry@@1HHPAVhkKdTreeBuilderSparseWriter@@@Z");
//};

//public: void hkKdTreeNode::setNumPrimitivesInLeaf(unsigned int)
//{
//    mangled_ppc("?setNumPrimitivesInLeaf@hkKdTreeNode@@QAAXI@Z");
//};

//public: void hkKdTreeNode::setPrimitiveId(unsigned long)
//{
//    mangled_ppc("?setPrimitiveId@hkKdTreeNode@@QAAXK@Z");
//};

//public: static int hkKdTreeBuilder<struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, 0>::writeMultiplePrimitivesToLeaf(unsigned int *, class hkKdTreeNode &, struct hkKdTreeProjectedEntry const *, unsigned int *, struct hkKdTreeProjectedEntry &, int, int, int, class hkKdTreeBuilderSparseWriter *)
//{
//    mangled_ppc("?writeMultiplePrimitivesToLeaf@?$hkKdTreeBuilder@PBUhkKdTreeProjectedEntry@@PIAU1@$0A@@@SAHPIAVhkKdTreeNode@@PBUhkKdTreeProjectedEntry@@PIAU3@HHHPAVhkKdTreeBuilderSparseWriter@@@Z");
//};

//public: void hkIntVector::splatImmediate32<13>(void)
//{
//    mangled_ppc("??$splatImmediate32@$0N@@hkIntVector@@QAAXXZ");
//};

//public: void hkIntVector::setShiftRight32<10>(class hkIntVector)
//{
//    mangled_ppc("??$setShiftRight32@$09@hkIntVector@@QAAXV0@@Z");
//};

//public: void hkIntVector::splatImmediate32<10>(void)
//{
//    mangled_ppc("??$splatImmediate32@$09@hkIntVector@@QAAXXZ");
//};

//public: static void hkString::memClear16(void *, int)
//{
//    mangled_ppc("?memClear16@hkString@@SAXPAXH@Z");
//};

