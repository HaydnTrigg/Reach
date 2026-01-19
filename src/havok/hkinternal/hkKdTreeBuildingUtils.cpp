/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static void hkKdTreeBuildingUtils::allocateBuffers(struct hkKdTreeBuildInput::WorkingSet &, int);
// public: static void hkKdTreeBuildingUtils::deallocateBuffers(struct hkKdTreeBuildInput::WorkingSet &, int);
// public: static void hkKdTreeBuildingUtils::buildTree(struct hkKdTreeBuildInput::WorkingSet &, class hkKdTree *);
// public: static void hkKdTreeBuildingUtils::buildTree(struct hkKdTreeBuildInput::WorkingSet &, class hkKdTreeNode *, struct hkKdTreeProjectedEntry *, int, int, int, int &);
// public: static void hkKdTreeBuildingUtils::completeDistributedBuild(class hkKdTree *, int, int *, int *);
// public: static void hkKdTreeBuildingUtils::projectPrimitives(unsigned int *, class hkKdTreeBuildInput::Mediator &, int, int, unsigned int *, struct hkKdTreeProjectedEntry &);
// public: static void hkKdTreeBuildingUtils::buildTreeDistributed(class hkKdTreeBuildInput::Mediator &, class hkKdTree *);
// public: void hkKdTreeProjectedEntry::operator=(struct hkKdTreeProjectedEntry const &);
// public: void hkKdTreeProjectedEntry::reset(void);
// public: hkKdTreeBuildInput::BuildRecursiveInput::BuildRecursiveInput(void);
// public: hkKdTreeBuilderSparseWriter::~hkKdTreeBuilderSparseWriter(void);
// public: void hkKdTreeNode::setLeftAndRightByteOffset(unsigned long);
// public: void hkKdTreeProjectedEntry::setPrimitiveId(unsigned long);
// public: class hkArray<class hkKdTreeNode, struct hkContainerHeapAllocator> & hkKdTree::getNodes(void);
// public: hkArray<struct hkKdTreeProjectedEntry, struct hkContainerHeapAllocator>::hkArray<struct hkKdTreeProjectedEntry, struct hkContainerHeapAllocator>(int);
// struct hkKdTreeProjectedEntry * hkAllocateChunk<struct hkKdTreeProjectedEntry>(int, int);
// void hkDeallocateChunk<struct hkKdTreeProjectedEntry>(struct hkKdTreeProjectedEntry *, int, int);
// public: void hkArrayBase<struct hkKdTreeProjectedEntry>::setOwnedData(struct hkKdTreeProjectedEntry *, int, int);

//public: static void hkKdTreeBuildingUtils::allocateBuffers(struct hkKdTreeBuildInput::WorkingSet &, int)
//{
//    mangled_ppc("?allocateBuffers@hkKdTreeBuildingUtils@@SAXAAUWorkingSet@hkKdTreeBuildInput@@H@Z");
//};

//public: static void hkKdTreeBuildingUtils::deallocateBuffers(struct hkKdTreeBuildInput::WorkingSet &, int)
//{
//    mangled_ppc("?deallocateBuffers@hkKdTreeBuildingUtils@@SAXAAUWorkingSet@hkKdTreeBuildInput@@H@Z");
//};

//public: static void hkKdTreeBuildingUtils::buildTree(struct hkKdTreeBuildInput::WorkingSet &, class hkKdTree *)
//{
//    mangled_ppc("?buildTree@hkKdTreeBuildingUtils@@SAXAAUWorkingSet@hkKdTreeBuildInput@@PAVhkKdTree@@@Z");
//};

//public: static void hkKdTreeBuildingUtils::buildTree(struct hkKdTreeBuildInput::WorkingSet &, class hkKdTreeNode *, struct hkKdTreeProjectedEntry *, int, int, int, int &)
//{
//    mangled_ppc("?buildTree@hkKdTreeBuildingUtils@@SAXAAUWorkingSet@hkKdTreeBuildInput@@PAVhkKdTreeNode@@PAUhkKdTreeProjectedEntry@@HHHAAH@Z");
//};

//public: static void hkKdTreeBuildingUtils::completeDistributedBuild(class hkKdTree *, int, int *, int *)
//{
//    mangled_ppc("?completeDistributedBuild@hkKdTreeBuildingUtils@@SAXPAVhkKdTree@@HPAH1@Z");
//};

//public: static void hkKdTreeBuildingUtils::projectPrimitives(unsigned int *, class hkKdTreeBuildInput::Mediator &, int, int, unsigned int *, struct hkKdTreeProjectedEntry &)
//{
//    mangled_ppc("?projectPrimitives@hkKdTreeBuildingUtils@@SAXPIAVMediator@hkKdTreeBuildInput@@HHPIAUhkKdTreeProjectedEntry@@@Z");
//};

//public: static void hkKdTreeBuildingUtils::buildTreeDistributed(class hkKdTreeBuildInput::Mediator &, class hkKdTree *)
//{
//    mangled_ppc("?buildTreeDistributed@hkKdTreeBuildingUtils@@SAXAAVMediator@hkKdTreeBuildInput@@PAVhkKdTree@@@Z");
//};

//public: void hkKdTreeProjectedEntry::operator=(struct hkKdTreeProjectedEntry const &)
//{
//    mangled_ppc("??4hkKdTreeProjectedEntry@@QAAXABU0@@Z");
//};

//public: void hkKdTreeProjectedEntry::reset(void)
//{
//    mangled_ppc("?reset@hkKdTreeProjectedEntry@@QAAXXZ");
//};

//public: hkKdTreeBuildInput::BuildRecursiveInput::BuildRecursiveInput(void)
//{
//    mangled_ppc("??0BuildRecursiveInput@hkKdTreeBuildInput@@QAA@XZ");
//};

//public: hkKdTreeBuilderSparseWriter::~hkKdTreeBuilderSparseWriter(void)
//{
//    mangled_ppc("??1hkKdTreeBuilderSparseWriter@@QAA@XZ");
//};

//public: void hkKdTreeNode::setLeftAndRightByteOffset(unsigned long)
//{
//    mangled_ppc("?setLeftAndRightByteOffset@hkKdTreeNode@@QAAXK@Z");
//};

//public: void hkKdTreeProjectedEntry::setPrimitiveId(unsigned long)
//{
//    mangled_ppc("?setPrimitiveId@hkKdTreeProjectedEntry@@QAAXK@Z");
//};

//public: class hkArray<class hkKdTreeNode, struct hkContainerHeapAllocator> & hkKdTree::getNodes(void)
//{
//    mangled_ppc("?getNodes@hkKdTree@@QAAAAV?$hkArray@VhkKdTreeNode@@UhkContainerHeapAllocator@@@@XZ");
//};

//public: hkArray<struct hkKdTreeProjectedEntry, struct hkContainerHeapAllocator>::hkArray<struct hkKdTreeProjectedEntry, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkArray@UhkKdTreeProjectedEntry@@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//struct hkKdTreeProjectedEntry * hkAllocateChunk<struct hkKdTreeProjectedEntry>(int, int)
//{
//    mangled_ppc("??$hkAllocateChunk@UhkKdTreeProjectedEntry@@@@YAPAUhkKdTreeProjectedEntry@@HH@Z");
//};

//void hkDeallocateChunk<struct hkKdTreeProjectedEntry>(struct hkKdTreeProjectedEntry *, int, int)
//{
//    mangled_ppc("??$hkDeallocateChunk@UhkKdTreeProjectedEntry@@@@YAXPAUhkKdTreeProjectedEntry@@HH@Z");
//};

//public: void hkArrayBase<struct hkKdTreeProjectedEntry>::setOwnedData(struct hkKdTreeProjectedEntry *, int, int)
//{
//    mangled_ppc("?setOwnedData@?$hkArrayBase@UhkKdTreeProjectedEntry@@@@QAAXPAUhkKdTreeProjectedEntry@@HH@Z");
//};

