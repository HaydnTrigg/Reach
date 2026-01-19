/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static void hkTreeBundleRayCastUtil::startWorldRayCastWithAutoBundleJobs(class hkVector4const *, class hkVector4const *, int, float, float, struct hkpWorldRayCastJob *, class hkJobQueue *, class hkJobThreadPool *, struct hkpWorldRayCastOutput *, bool);
// public: static void hkTreeBundleRayCastUtil::splitToOctant(class hkVector4const *, class hkVector4const *, int, class hkVector4*, class hkSimdReal *, class hkArray<int, struct hkContainerHeapAllocator> *, int *);
// void writeCommands(class hkLocalArray<struct int4> const &, class hkVector4const *, class hkVector4const *, struct hkpWorldRayCastOutput *, struct hkpWorldRayCastCommand *, int &, struct hkpWorldRayCastBundleCommand *, int &);
// public: static void hkTreeBundleRayCastUtil::autoBundleFromList(int *, int, class hkVector4const *, class hkVector4const *, int, float, float, struct hkpWorldRayCastOutput *, struct hkpWorldRayCastCommand *, int &, struct hkpWorldRayCastBundleCommand *, int &);
// public: static void hkTreeBundleRayCastUtil::autoBundleScanAll(int, class hkVector4const *, class hkVector4const *, int, float, float, struct hkpWorldRayCastOutput *, struct hkpWorldRayCastCommand *, int &, struct hkpWorldRayCastBundleCommand *, int &);
// private: static bool hkTreeBundleRayCastUtil::similaritiy(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, float, float);
// public: hkpWorldRayCastWithAutoBundleJob::hkpWorldRayCastWithAutoBundleJob(void);
// public: class hkSimdReal hkVector4::fastNormalizeWithLength3(void);
// public: int const & int4::operator[](int) const;
// public: int int4::getSize(void) const;
// public: int4::int4(void);
// public: int & int4::operator[](int);
// public: void int4::pushBack(int);
// public: bool int4::isFull(void) const;
// public: hkLocalArray<struct int4>::hkLocalArray<struct int4>(int);
// public: hkLocalArray<struct int4>::~hkLocalArray<struct int4>(void);
// public: class hkBool hkLocalArray<struct int4>::wasReallocated(void) const;
// public: hkArray<struct int4, struct hkContainerHeapAllocator>::hkArray<struct int4, struct hkContainerHeapAllocator>(void);
// public: class hkArray<int, struct hkContainerHeapAllocator> * hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::begin(void);
// public: hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(int);
// public: class hkSimdReal * hkArrayBase<class hkSimdReal>::begin(void);
// public: hkArray<class hkSimdReal, struct hkContainerHeapAllocator>::hkArray<class hkSimdReal, struct hkContainerHeapAllocator>(int);
// public: hkArray<class hkSimdReal, struct hkContainerHeapAllocator>::~hkArray<class hkSimdReal, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct int4>::hkArrayBase<struct int4>(void);
// public: struct int4const & hkArrayBase<struct int4>::operator[](int) const;
// public: struct int4& hkArrayBase<struct int4>::operator[](int);
// public: int hkArrayBase<struct int4>::getSize(void) const;
// public: void hkArrayBase<struct int4>::clear(void);
// public: void hkArrayBase<struct int4>::pushBackUnchecked(struct int4const &);
// public: hkArray<struct int4, struct hkContainerHeapAllocator>::~hkArray<struct int4, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct int4>::~hkArrayBase<struct int4>(void);
// struct int4* hkAllocateStack<struct int4>(int, char const *);
// void hkDeallocateStack<struct int4>(struct int4*);
// public: void hkArray<class hkSimdReal, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct int4, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::setOwnedData(class hkArray<int, struct hkContainerHeapAllocator> *, int, int);
// public: hkArrayBase<class hkSimdReal>::hkArrayBase<class hkSimdReal>(void);
// public: hkArrayBase<class hkSimdReal>::~hkArrayBase<class hkSimdReal>(void);
// public: void hkArrayBase<class hkSimdReal>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class hkSimdReal>::setOwnedData(class hkSimdReal *, int, int);
// public: static void hkArrayUtil::construct<class hkSimdReal>(class hkSimdReal *, int, struct hkTraitBool<0>);
// public: int hkArrayBase<struct int4>::getCapacity(void) const;
// public: void hkArrayBase<struct int4>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct int4>(struct int4*, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::constructWithCopy<struct int4>(struct int4*, int, struct int4const &, struct hkTraitBool<0>);
// public: int hkArrayBase<class hkSimdReal>::getCapacity(void) const;
// public: void hkArrayBase<class hkSimdReal>::clear(void);
// public: static void hkArrayUtil::destruct<class hkSimdReal>(class hkSimdReal *, int, struct hkTraitBool<0>);

//public: static void hkTreeBundleRayCastUtil::startWorldRayCastWithAutoBundleJobs(class hkVector4const *, class hkVector4const *, int, float, float, struct hkpWorldRayCastJob *, class hkJobQueue *, class hkJobThreadPool *, struct hkpWorldRayCastOutput *, bool)
//{
//    mangled_ppc("?startWorldRayCastWithAutoBundleJobs@hkTreeBundleRayCastUtil@@SAXPBVhkVector4@@0HMMPAUhkpWorldRayCastJob@@PAVhkJobQueue@@PAVhkJobThreadPool@@PAUhkpWorldRayCastOutput@@_N@Z");
//};

//public: static void hkTreeBundleRayCastUtil::splitToOctant(class hkVector4const *, class hkVector4const *, int, class hkVector4*, class hkSimdReal *, class hkArray<int, struct hkContainerHeapAllocator> *, int *)
//{
//    mangled_ppc("?splitToOctant@hkTreeBundleRayCastUtil@@SAXPBVhkVector4@@0HPAV2@PAVhkSimdReal@@PAV?$hkArray@HUhkContainerHeapAllocator@@@@PAH@Z");
//};

//void writeCommands(class hkLocalArray<struct int4> const &, class hkVector4const *, class hkVector4const *, struct hkpWorldRayCastOutput *, struct hkpWorldRayCastCommand *, int &, struct hkpWorldRayCastBundleCommand *, int &)
//{
//    mangled_ppc("?writeCommands@@YAXABV?$hkLocalArray@Uint4@@@@PBVhkVector4@@1PAUhkpWorldRayCastOutput@@PAUhkpWorldRayCastCommand@@AAHPAUhkpWorldRayCastBundleCommand@@4@Z");
//};

//public: static void hkTreeBundleRayCastUtil::autoBundleFromList(int *, int, class hkVector4const *, class hkVector4const *, int, float, float, struct hkpWorldRayCastOutput *, struct hkpWorldRayCastCommand *, int &, struct hkpWorldRayCastBundleCommand *, int &)
//{
//    mangled_ppc("?autoBundleFromList@hkTreeBundleRayCastUtil@@SAXPAHHPBVhkVector4@@1HMMPAUhkpWorldRayCastOutput@@PAUhkpWorldRayCastCommand@@AAHPAUhkpWorldRayCastBundleCommand@@4@Z");
//};

//public: static void hkTreeBundleRayCastUtil::autoBundleScanAll(int, class hkVector4const *, class hkVector4const *, int, float, float, struct hkpWorldRayCastOutput *, struct hkpWorldRayCastCommand *, int &, struct hkpWorldRayCastBundleCommand *, int &)
//{
//    mangled_ppc("?autoBundleScanAll@hkTreeBundleRayCastUtil@@SAXHPBVhkVector4@@0HMMPAUhkpWorldRayCastOutput@@PAUhkpWorldRayCastCommand@@AAHPAUhkpWorldRayCastBundleCommand@@3@Z");
//};

//private: static bool hkTreeBundleRayCastUtil::similaritiy(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, float, float)
//{
//    mangled_ppc("?similaritiy@hkTreeBundleRayCastUtil@@CA_NABVhkVector4@@00000MM@Z");
//};

//public: hkpWorldRayCastWithAutoBundleJob::hkpWorldRayCastWithAutoBundleJob(void)
//{
//    mangled_ppc("??0hkpWorldRayCastWithAutoBundleJob@@QAA@XZ");
//};

//public: class hkSimdReal hkVector4::fastNormalizeWithLength3(void)
//{
//    mangled_ppc("?fastNormalizeWithLength3@hkVector4@@QAA?AVhkSimdReal@@XZ");
//};

//public: int const & int4::operator[](int) const
//{
//    mangled_ppc("??Aint4@@QBAABHH@Z");
//};

//public: int int4::getSize(void) const
//{
//    mangled_ppc("?getSize@int4@@QBAHXZ");
//};

//public: int4::int4(void)
//{
//    mangled_ppc("??0int4@@QAA@XZ");
//};

//public: int & int4::operator[](int)
//{
//    mangled_ppc("??Aint4@@QAAAAHH@Z");
//};

//public: void int4::pushBack(int)
//{
//    mangled_ppc("?pushBack@int4@@QAAXH@Z");
//};

//public: bool int4::isFull(void) const
//{
//    mangled_ppc("?isFull@int4@@QBA_NXZ");
//};

//public: hkLocalArray<struct int4>::hkLocalArray<struct int4>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@Uint4@@@@QAA@H@Z");
//};

//public: hkLocalArray<struct int4>::~hkLocalArray<struct int4>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@Uint4@@@@QAA@XZ");
//};

//public: class hkBool hkLocalArray<struct int4>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@Uint4@@@@QBA?AVhkBool@@XZ");
//};

//public: hkArray<struct int4, struct hkContainerHeapAllocator>::hkArray<struct int4, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@Uint4@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: class hkArray<int, struct hkContainerHeapAllocator> * hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@V?$hkArray@HUhkContainerHeapAllocator@@@@@@QAAPAV?$hkArray@HUhkContainerHeapAllocator@@@@XZ");
//};

//public: hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>::hkArray<class hkArray<int, struct hkContainerHeapAllocator>, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkArray@V?$hkArray@HUhkContainerHeapAllocator@@@@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: class hkSimdReal * hkArrayBase<class hkSimdReal>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@VhkSimdReal@@@@QAAPAVhkSimdReal@@XZ");
//};

//public: hkArray<class hkSimdReal, struct hkContainerHeapAllocator>::hkArray<class hkSimdReal, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkArray@VhkSimdReal@@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkArray<class hkSimdReal, struct hkContainerHeapAllocator>::~hkArray<class hkSimdReal, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@VhkSimdReal@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct int4>::hkArrayBase<struct int4>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@Uint4@@@@QAA@XZ");
//};

//public: struct int4const & hkArrayBase<struct int4>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@Uint4@@@@QBAABUint4@@H@Z");
//};

//public: struct int4& hkArrayBase<struct int4>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@Uint4@@@@QAAAAUint4@@H@Z");
//};

//public: int hkArrayBase<struct int4>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@Uint4@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct int4>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@Uint4@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct int4>::pushBackUnchecked(struct int4const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@Uint4@@@@QAAXABUint4@@@Z");
//};

//public: hkArray<struct int4, struct hkContainerHeapAllocator>::~hkArray<struct int4, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@Uint4@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct int4>::~hkArrayBase<struct int4>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@Uint4@@@@QAA@XZ");
//};

//struct int4* hkAllocateStack<struct int4>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@Uint4@@@@YAPAUint4@@HPBD@Z");
//};

//void hkDeallocateStack<struct int4>(struct int4*)
//{
//    mangled_ppc("??$hkDeallocateStack@Uint4@@@@YAXPAUint4@@@Z");
//};

//public: void hkArray<class hkSimdReal, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@VhkSimdReal@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct int4, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@Uint4@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkArray<int, struct hkContainerHeapAllocator> >::setOwnedData(class hkArray<int, struct hkContainerHeapAllocator> *, int, int)
//{
//    mangled_ppc("?setOwnedData@?$hkArrayBase@V?$hkArray@HUhkContainerHeapAllocator@@@@@@QAAXPAV?$hkArray@HUhkContainerHeapAllocator@@@@HH@Z");
//};

//public: hkArrayBase<class hkSimdReal>::hkArrayBase<class hkSimdReal>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@VhkSimdReal@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkSimdReal>::~hkArrayBase<class hkSimdReal>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@VhkSimdReal@@@@QAA@XZ");
//};

//public: void hkArrayBase<class hkSimdReal>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@VhkSimdReal@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class hkSimdReal>::setOwnedData(class hkSimdReal *, int, int)
//{
//    mangled_ppc("?setOwnedData@?$hkArrayBase@VhkSimdReal@@@@QAAXPAVhkSimdReal@@HH@Z");
//};

//public: static void hkArrayUtil::construct<class hkSimdReal>(class hkSimdReal *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@VhkSimdReal@@@hkArrayUtil@@SAXPAVhkSimdReal@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<struct int4>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@Uint4@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct int4>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@Uint4@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct int4>(struct int4*, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@Uint4@@@hkArrayUtil@@SAXPAUint4@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct int4>(struct int4*, int, struct int4const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@Uint4@@@hkArrayUtil@@SAXPAUint4@@HABU1@U?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<class hkSimdReal>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@VhkSimdReal@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkSimdReal>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@VhkSimdReal@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<class hkSimdReal>(class hkSimdReal *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@VhkSimdReal@@@hkArrayUtil@@SAXPAVhkSimdReal@@HU?$hkTraitBool@$0A@@@@Z");
//};

