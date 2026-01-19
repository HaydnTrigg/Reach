/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkRelocationInfo::~hkRelocationInfo(void);
// public: void hkRelocationInfo::applyLocalAndGlobal(void *);
// public: void hkRelocationInfo::addImport(int, char const *);
// public: void * hkStorageStringMap<int, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int);
// public: hkRelocationInfo::Import::Import(int, char const *);
// public: hkStorageStringMap<int, struct hkContainerHeapAllocator>::hkStorageStringMap<int, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>::pushBack(struct hkRelocationInfo::Import const &);
// public: static void * hkStorageStringMap<int, struct hkContainerHeapAllocator>::operator new(unsigned int);
// public: static void hkStorageStringMap<int, struct hkContainerHeapAllocator>::operator delete(void *);
// public: hkStorageStringMap<int, struct hkContainerHeapAllocator>::~hkStorageStringMap<int, struct hkContainerHeapAllocator>(void);
// public: char const * hkStorageStringMap<int, struct hkContainerHeapAllocator>::insert(char const *, int);
// public: void hkStorageStringMap<int, struct hkContainerHeapAllocator>::clear(void);
// public: class Dummy * hkStringMap<int>::findKey(char const *) const;
// public: char const * hkStringMap<int>::getKey(class Dummy *) const;
// public: void hkStringMap<int>::setValue(class Dummy *, int);
// public: class hkBool hkStringMap<int>::isValid(class Dummy *) const;
// public: class Dummy * hkStringMap<int>::getIterator(void) const;
// public: class Dummy * hkStringMap<int>::getNext(class Dummy *) const;
// public: void hkStringMap<int>::clear(void);
// public: hkArray<struct hkRelocationInfo::Local, struct hkContainerHeapAllocator>::~hkArray<struct hkRelocationInfo::Local, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkRelocationInfo::Local>::~hkArrayBase<struct hkRelocationInfo::Local>(void);
// public: hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>::~hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkRelocationInfo::Global>::~hkArrayBase<struct hkRelocationInfo::Global>(void);
// public: hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator>::~hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkRelocationInfo::Finish>::~hkArrayBase<struct hkRelocationInfo::Finish>(void);
// public: void hkArrayBase<struct hkRelocationInfo::Import>::_pushBack(class hkMemoryAllocator &, struct hkRelocationInfo::Import const &);
// public: hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>::~hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkRelocationInfo::Import>::~hkArrayBase<struct hkRelocationInfo::Import>(void);
// public: void hkArray<struct hkRelocationInfo::Local, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<struct hkRelocationInfo::Local>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkRelocationInfo::Local>::clear(void);
// public: static void hkArrayUtil::destruct<struct hkRelocationInfo::Local>(struct hkRelocationInfo::Local *, int, struct hkTraitBool<1>);
// public: void hkArrayBase<struct hkRelocationInfo::Global>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkRelocationInfo::Global>::clear(void);
// public: void hkArrayBase<struct hkRelocationInfo::Finish>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkRelocationInfo::Finish>::clear(void);
// public: int hkArrayBase<struct hkRelocationInfo::Finish>::getCapacity(void) const;
// public: static void hkArrayUtil::destruct<struct hkRelocationInfo::Finish>(struct hkRelocationInfo::Finish *, int, struct hkTraitBool<1>);
// public: void hkArrayBase<struct hkRelocationInfo::Import>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkRelocationInfo::Import>::clear(void);
// public: static void hkArrayUtil::destruct<struct hkRelocationInfo::Import>(struct hkRelocationInfo::Import *, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkRelocationInfo::Import>(struct hkRelocationInfo::Import *, int, struct hkRelocationInfo::Import const &, struct hkTraitBool<1>);

//public: hkRelocationInfo::~hkRelocationInfo(void)
//{
//    mangled_ppc("??1hkRelocationInfo@@QAA@XZ");
//};

//public: void hkRelocationInfo::applyLocalAndGlobal(void *)
//{
//    mangled_ppc("?applyLocalAndGlobal@hkRelocationInfo@@QAAXPAX@Z");
//};

//public: void hkRelocationInfo::addImport(int, char const *)
//{
//    mangled_ppc("?addImport@hkRelocationInfo@@QAAXHPBD@Z");
//};

//public: void * hkStorageStringMap<int, struct hkContainerHeapAllocator>::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_G?$hkStorageStringMap@HUhkContainerHeapAllocator@@@@QAAPAXI@Z");
//};

//public: hkRelocationInfo::Import::Import(int, char const *)
//{
//    mangled_ppc("??0Import@hkRelocationInfo@@QAA@HPBD@Z");
//};

//public: hkStorageStringMap<int, struct hkContainerHeapAllocator>::hkStorageStringMap<int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkStorageStringMap@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>::pushBack(struct hkRelocationInfo::Import const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UImport@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAAXABUImport@hkRelocationInfo@@@Z");
//};

//public: static void * hkStorageStringMap<int, struct hkContainerHeapAllocator>::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkStorageStringMap@HUhkContainerHeapAllocator@@@@SAPAXI@Z");
//};

//public: static void hkStorageStringMap<int, struct hkContainerHeapAllocator>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkStorageStringMap@HUhkContainerHeapAllocator@@@@SAXPAX@Z");
//};

//public: hkStorageStringMap<int, struct hkContainerHeapAllocator>::~hkStorageStringMap<int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkStorageStringMap@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: char const * hkStorageStringMap<int, struct hkContainerHeapAllocator>::insert(char const *, int)
//{
//    mangled_ppc("?insert@?$hkStorageStringMap@HUhkContainerHeapAllocator@@@@QAAPBDPBDH@Z");
//};

//public: void hkStorageStringMap<int, struct hkContainerHeapAllocator>::clear(void)
//{
//    mangled_ppc("?clear@?$hkStorageStringMap@HUhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: class Dummy * hkStringMap<int>::findKey(char const *) const
//{
//    mangled_ppc("?findKey@?$hkStringMap@H@@QBAPAVDummy@@PBD@Z");
//};

//public: char const * hkStringMap<int>::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkStringMap@H@@QBAPBDPAVDummy@@@Z");
//};

//public: void hkStringMap<int>::setValue(class Dummy *, int)
//{
//    mangled_ppc("?setValue@?$hkStringMap@H@@QAAXPAVDummy@@H@Z");
//};

//public: class hkBool hkStringMap<int>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkStringMap@H@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: class Dummy * hkStringMap<int>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkStringMap@H@@QBAPAVDummy@@XZ");
//};

//public: class Dummy * hkStringMap<int>::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkStringMap@H@@QBAPAVDummy@@PAV2@@Z");
//};

//public: void hkStringMap<int>::clear(void)
//{
//    mangled_ppc("?clear@?$hkStringMap@H@@QAAXXZ");
//};

//public: hkArray<struct hkRelocationInfo::Local, struct hkContainerHeapAllocator>::~hkArray<struct hkRelocationInfo::Local, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@ULocal@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkRelocationInfo::Local>::~hkArrayBase<struct hkRelocationInfo::Local>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@ULocal@hkRelocationInfo@@@@QAA@XZ");
//};

//public: hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>::~hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UGlobal@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkRelocationInfo::Global>::~hkArrayBase<struct hkRelocationInfo::Global>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UGlobal@hkRelocationInfo@@@@QAA@XZ");
//};

//public: hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator>::~hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UFinish@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkRelocationInfo::Finish>::~hkArrayBase<struct hkRelocationInfo::Finish>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UFinish@hkRelocationInfo@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkRelocationInfo::Import>::_pushBack(class hkMemoryAllocator &, struct hkRelocationInfo::Import const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UImport@hkRelocationInfo@@@@QAAXAAVhkMemoryAllocator@@ABUImport@hkRelocationInfo@@@Z");
//};

//public: hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>::~hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UImport@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkRelocationInfo::Import>::~hkArrayBase<struct hkRelocationInfo::Import>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UImport@hkRelocationInfo@@@@QAA@XZ");
//};

//public: void hkArray<struct hkRelocationInfo::Local, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@ULocal@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UGlobal@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UFinish@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UImport@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkRelocationInfo::Local>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@ULocal@hkRelocationInfo@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkRelocationInfo::Local>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@ULocal@hkRelocationInfo@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkRelocationInfo::Local>(struct hkRelocationInfo::Local *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@ULocal@hkRelocationInfo@@@hkArrayUtil@@SAXPAULocal@hkRelocationInfo@@HU?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<struct hkRelocationInfo::Global>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UGlobal@hkRelocationInfo@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkRelocationInfo::Global>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UGlobal@hkRelocationInfo@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkRelocationInfo::Finish>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UFinish@hkRelocationInfo@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkRelocationInfo::Finish>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UFinish@hkRelocationInfo@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkRelocationInfo::Finish>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UFinish@hkRelocationInfo@@@@QBAHXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkRelocationInfo::Finish>(struct hkRelocationInfo::Finish *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@UFinish@hkRelocationInfo@@@hkArrayUtil@@SAXPAUFinish@hkRelocationInfo@@HU?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<struct hkRelocationInfo::Import>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UImport@hkRelocationInfo@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkRelocationInfo::Import>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UImport@hkRelocationInfo@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkRelocationInfo::Import>(struct hkRelocationInfo::Import *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@UImport@hkRelocationInfo@@@hkArrayUtil@@SAXPAUImport@hkRelocationInfo@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkRelocationInfo::Import>(struct hkRelocationInfo::Import *, int, struct hkRelocationInfo::Import const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@UImport@hkRelocationInfo@@@hkArrayUtil@@SAXPAUImport@hkRelocationInfo@@HABU12@U?$hkTraitBool@$00@@@Z");
//};

