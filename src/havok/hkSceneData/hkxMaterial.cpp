/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: virtual hkxMaterial::~hkxMaterial(void);
// public: void hkxMaterial::sortTextureStageOrder(void);
// public: int hkArrayBase<struct hkxMaterial::TextureStage>::getSize(void) const;
// public: struct hkxMaterial::TextureStage * hkArrayBase<struct hkxMaterial::TextureStage>::begin(void);
// public: hkArray<struct hkxMaterial::TextureStage, struct hkContainerHeapAllocator>::~hkArray<struct hkxMaterial::TextureStage, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkxMaterial::TextureStage>::~hkArrayBase<struct hkxMaterial::TextureStage>(void);
// public: hkArray<class hkRefPtr<class hkxMaterial>, struct hkContainerHeapAllocator>::~hkArray<class hkRefPtr<class hkxMaterial>, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkRefPtr<class hkxMaterial> >::~hkArrayBase<class hkRefPtr<class hkxMaterial> >(void);
// void hkAlgorithm::heapSort<struct hkxMaterial::TextureStage, class _texStageLessFn>(struct hkxMaterial::TextureStage *, int, class _texStageLessFn);
// public: hkxMaterial::TextureStage::TextureStage(struct hkxMaterial::TextureStage const &);
// public: struct hkxMaterial::TextureStage & hkxMaterial::TextureStage::operator=(struct hkxMaterial::TextureStage const &);
// public: void hkArray<struct hkxMaterial::TextureStage, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkRefPtr<class hkxMaterial>, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<struct hkxMaterial::TextureStage>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class hkRefPtr<class hkxMaterial> >::_clearAndDeallocate(class hkMemoryAllocator &);
// void hkAlgorithm::downHeap<struct hkxMaterial::TextureStage, class _texStageLessFn>(struct hkxMaterial::TextureStage *, int, int, class _texStageLessFn);
// public: class hkBool _texStageLessFn::operator()(struct hkxMaterial::TextureStage const &, struct hkxMaterial::TextureStage const &);
// public: enum hkxMaterial::TextureType hkEnum<enum hkxMaterial::TextureType, int>::operator enum hkxMaterial::TextureType(void) const;
// public: class hkBool hkEnum<enum hkxMaterial::TextureType, int>::operator==(enum hkxMaterial::TextureType) const;
// public: int hkArrayBase<struct hkxMaterial::TextureStage>::getCapacity(void) const;
// public: void hkArrayBase<struct hkxMaterial::TextureStage>::clear(void);
// public: int hkArrayBase<class hkRefPtr<class hkxMaterial> >::getCapacity(void) const;
// public: void hkArrayBase<class hkRefPtr<class hkxMaterial> >::clear(void);
// public: static void hkArrayUtil::destruct<struct hkxMaterial::TextureStage>(struct hkxMaterial::TextureStage *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::destruct<class hkRefPtr<class hkxMaterial> >(class hkRefPtr<class hkxMaterial> *, int, struct hkTraitBool<0>);
// public: void * hkRefPtr<class hkxMaterial>::`scalar deleting destructor'(unsigned int);
// public: static void hkRefPtr<class hkxMaterial>::operator delete(void *);

//public: virtual hkxMaterial::~hkxMaterial(void)
//{
//    mangled_ppc("??1hkxMaterial@@UAA@XZ");
//};

//public: void hkxMaterial::sortTextureStageOrder(void)
//{
//    mangled_ppc("?sortTextureStageOrder@hkxMaterial@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkxMaterial::TextureStage>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UTextureStage@hkxMaterial@@@@QBAHXZ");
//};

//public: struct hkxMaterial::TextureStage * hkArrayBase<struct hkxMaterial::TextureStage>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@UTextureStage@hkxMaterial@@@@QAAPAUTextureStage@hkxMaterial@@XZ");
//};

//public: hkArray<struct hkxMaterial::TextureStage, struct hkContainerHeapAllocator>::~hkArray<struct hkxMaterial::TextureStage, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UTextureStage@hkxMaterial@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkxMaterial::TextureStage>::~hkArrayBase<struct hkxMaterial::TextureStage>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UTextureStage@hkxMaterial@@@@QAA@XZ");
//};

//public: hkArray<class hkRefPtr<class hkxMaterial>, struct hkContainerHeapAllocator>::~hkArray<class hkRefPtr<class hkxMaterial>, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@V?$hkRefPtr@VhkxMaterial@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkRefPtr<class hkxMaterial> >::~hkArrayBase<class hkRefPtr<class hkxMaterial> >(void)
//{
//    mangled_ppc("??1?$hkArrayBase@V?$hkRefPtr@VhkxMaterial@@@@@@QAA@XZ");
//};

//void hkAlgorithm::heapSort<struct hkxMaterial::TextureStage, class _texStageLessFn>(struct hkxMaterial::TextureStage *, int, class _texStageLessFn)
//{
//    mangled_ppc("??$heapSort@UTextureStage@hkxMaterial@@V_texStageLessFn@@@hkAlgorithm@@YAXPAUTextureStage@hkxMaterial@@HV_texStageLessFn@@@Z");
//};

//public: hkxMaterial::TextureStage::TextureStage(struct hkxMaterial::TextureStage const &)
//{
//    mangled_ppc("??0TextureStage@hkxMaterial@@QAA@ABU01@@Z");
//};

//public: struct hkxMaterial::TextureStage & hkxMaterial::TextureStage::operator=(struct hkxMaterial::TextureStage const &)
//{
//    mangled_ppc("??4TextureStage@hkxMaterial@@QAAAAU01@ABU01@@Z");
//};

//public: void hkArray<struct hkxMaterial::TextureStage, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UTextureStage@hkxMaterial@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkRefPtr<class hkxMaterial>, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@V?$hkRefPtr@VhkxMaterial@@@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkxMaterial::TextureStage>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UTextureStage@hkxMaterial@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class hkRefPtr<class hkxMaterial> >::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@V?$hkRefPtr@VhkxMaterial@@@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//void hkAlgorithm::downHeap<struct hkxMaterial::TextureStage, class _texStageLessFn>(struct hkxMaterial::TextureStage *, int, int, class _texStageLessFn)
//{
//    mangled_ppc("??$downHeap@UTextureStage@hkxMaterial@@V_texStageLessFn@@@hkAlgorithm@@YAXPAUTextureStage@hkxMaterial@@HHV_texStageLessFn@@@Z");
//};

//public: class hkBool _texStageLessFn::operator()(struct hkxMaterial::TextureStage const &, struct hkxMaterial::TextureStage const &)
//{
//    mangled_ppc("??R_texStageLessFn@@QAA?AVhkBool@@ABUTextureStage@hkxMaterial@@0@Z");
//};

//public: enum hkxMaterial::TextureType hkEnum<enum hkxMaterial::TextureType, int>::operator enum hkxMaterial::TextureType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4TextureType@hkxMaterial@@H@@QBA?AW4TextureType@hkxMaterial@@XZ");
//};

//public: class hkBool hkEnum<enum hkxMaterial::TextureType, int>::operator==(enum hkxMaterial::TextureType) const
//{
//    mangled_ppc("??8?$hkEnum@W4TextureType@hkxMaterial@@H@@QBA?AVhkBool@@W4TextureType@hkxMaterial@@@Z");
//};

//public: int hkArrayBase<struct hkxMaterial::TextureStage>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UTextureStage@hkxMaterial@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkxMaterial::TextureStage>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UTextureStage@hkxMaterial@@@@QAAXXZ");
//};

//public: int hkArrayBase<class hkRefPtr<class hkxMaterial> >::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@V?$hkRefPtr@VhkxMaterial@@@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkRefPtr<class hkxMaterial> >::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@V?$hkRefPtr@VhkxMaterial@@@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkxMaterial::TextureStage>(struct hkxMaterial::TextureStage *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UTextureStage@hkxMaterial@@@hkArrayUtil@@SAXPAUTextureStage@hkxMaterial@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkRefPtr<class hkxMaterial> >(class hkRefPtr<class hkxMaterial> *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@V?$hkRefPtr@VhkxMaterial@@@@@hkArrayUtil@@SAXPAV?$hkRefPtr@VhkxMaterial@@@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void * hkRefPtr<class hkxMaterial>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$hkRefPtr@VhkxMaterial@@@@QAAPAXI@Z");
//};

//public: static void hkRefPtr<class hkxMaterial>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkRefPtr@VhkxMaterial@@@@SAXPAX@Z");
//};

