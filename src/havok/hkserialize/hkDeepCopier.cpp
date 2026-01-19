/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void * hkDeepCopier::deepCopy(void const *, class hkClass const &, class hkPointerMap<void const *, void *, struct hkContainerHeapAllocator> *, class hkVtableClassRegistry *, class hkTypeInfoRegistry *, class hkFlags<enum hkObjectCopier::ObjectCopierFlagBits, unsigned int>);
// public: `anonymous namespace'::Copy::Copy(int, void *, char const *);
// public: int hkPointerMap<void const *, void *, struct hkContainerHeapAllocator>::insert(void const *, void *);
// public: class hkBool hkPointerMap<void const *, void *, struct hkContainerHeapAllocator>::hasKey(void const *) const;
// public: void * hkPointerMap<void const *, void *, struct hkContainerHeapAllocator>::getWithDefault(void const *, void *) const;
// public: hkArray<struct `anonymous namespace'::Copy, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::Copy, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct `anonymous namespace'::Copy, struct hkContainerHeapAllocator>::pushBack(struct `anonymous namespace'::Copy const &);
// public: hkArrayBase<struct `anonymous namespace'::Copy>::hkArrayBase<struct `anonymous namespace'::Copy>(void);
// public: struct `anonymous namespace'::Copy & hkArrayBase<struct `anonymous namespace'::Copy>::operator[](int);
// public: int hkArrayBase<struct `anonymous namespace'::Copy>::getSize(void) const;
// public: void hkArrayBase<struct `anonymous namespace'::Copy>::_pushBack(class hkMemoryAllocator &, struct `anonymous namespace'::Copy const &);
// public: hkArray<struct `anonymous namespace'::Copy, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::Copy, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct `anonymous namespace'::Copy>::~hkArrayBase<struct `anonymous namespace'::Copy>(void);
// public: void hkArray<struct `anonymous namespace'::Copy, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<struct `anonymous namespace'::Copy>::getCapacity(void) const;
// public: void hkArrayBase<struct `anonymous namespace'::Copy>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<struct `anonymous namespace'::Copy>(struct `anonymous namespace'::Copy *, int, struct `anonymous namespace'::Copy const &, struct hkTraitBool<0>);
// public: void hkArrayBase<struct `anonymous namespace'::Copy>::clear(void);
// public: static void hkArrayUtil::destruct<struct `anonymous namespace'::Copy>(struct `anonymous namespace'::Copy *, int, struct hkTraitBool<0>);

//void * hkDeepCopier::deepCopy(void const *, class hkClass const &, class hkPointerMap<void const *, void *, struct hkContainerHeapAllocator> *, class hkVtableClassRegistry *, class hkTypeInfoRegistry *, class hkFlags<enum hkObjectCopier::ObjectCopierFlagBits, unsigned int>)
//{
//    mangled_ppc("?deepCopy@hkDeepCopier@@YAPAXPBXABVhkClass@@PAV?$hkPointerMap@PBXPAXUhkContainerHeapAllocator@@@@PAVhkVtableClassRegistry@@PAVhkTypeInfoRegistry@@V?$hkFlags@W4ObjectCopierFlagBits@hkObjectCopier@@I@@@Z");
//};

//public: `anonymous namespace'::Copy::Copy(int, void *, char const *)
//{
//    mangled_ppc("??0Copy@?A0x7dac1e4b@@QAA@HPAXPBD@Z");
//};

//public: int hkPointerMap<void const *, void *, struct hkContainerHeapAllocator>::insert(void const *, void *)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PBXPAXUhkContainerHeapAllocator@@@@QAAHPBXPAX@Z");
//};

//public: class hkBool hkPointerMap<void const *, void *, struct hkContainerHeapAllocator>::hasKey(void const *) const
//{
//    mangled_ppc("?hasKey@?$hkPointerMap@PBXPAXUhkContainerHeapAllocator@@@@QBA?AVhkBool@@PBX@Z");
//};

//public: void * hkPointerMap<void const *, void *, struct hkContainerHeapAllocator>::getWithDefault(void const *, void *) const
//{
//    mangled_ppc("?getWithDefault@?$hkPointerMap@PBXPAXUhkContainerHeapAllocator@@@@QBAPAXPBXPAX@Z");
//};

//public: hkArray<struct `anonymous namespace'::Copy, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::Copy, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UCopy@?A0x7dac1e4b@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct `anonymous namespace'::Copy, struct hkContainerHeapAllocator>::pushBack(struct `anonymous namespace'::Copy const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UCopy@?A0x7dac1e4b@@UhkContainerHeapAllocator@@@@QAAXABUCopy@?A0x7dac1e4b@@@Z");
//};

//public: hkArrayBase<struct `anonymous namespace'::Copy>::hkArrayBase<struct `anonymous namespace'::Copy>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UCopy@?A0x7dac1e4b@@@@QAA@XZ");
//};

//public: struct `anonymous namespace'::Copy & hkArrayBase<struct `anonymous namespace'::Copy>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UCopy@?A0x7dac1e4b@@@@QAAAAUCopy@?A0x7dac1e4b@@H@Z");
//};

//public: int hkArrayBase<struct `anonymous namespace'::Copy>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UCopy@?A0x7dac1e4b@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::Copy>::_pushBack(class hkMemoryAllocator &, struct `anonymous namespace'::Copy const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UCopy@?A0x7dac1e4b@@@@QAAXAAVhkMemoryAllocator@@ABUCopy@?A0x7dac1e4b@@@Z");
//};

//public: hkArray<struct `anonymous namespace'::Copy, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::Copy, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UCopy@?A0x7dac1e4b@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct `anonymous namespace'::Copy>::~hkArrayBase<struct `anonymous namespace'::Copy>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UCopy@?A0x7dac1e4b@@@@QAA@XZ");
//};

//public: void hkArray<struct `anonymous namespace'::Copy, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UCopy@?A0x7dac1e4b@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct `anonymous namespace'::Copy>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UCopy@?A0x7dac1e4b@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::Copy>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UCopy@?A0x7dac1e4b@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct `anonymous namespace'::Copy>(struct `anonymous namespace'::Copy *, int, struct `anonymous namespace'::Copy const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UCopy@?A0x7dac1e4b@@@hkArrayUtil@@SAXPAUCopy@?A0x7dac1e4b@@HABU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<struct `anonymous namespace'::Copy>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UCopy@?A0x7dac1e4b@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct `anonymous namespace'::Copy>(struct `anonymous namespace'::Copy *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UCopy@?A0x7dac1e4b@@@hkArrayUtil@@SAXPAUCopy@?A0x7dac1e4b@@HU?$hkTraitBool@$0A@@@@Z");
//};

