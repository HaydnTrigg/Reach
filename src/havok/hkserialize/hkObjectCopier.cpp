/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkObjectCopier::`RTTI Complete Object Locator'; // "??_R4hkObjectCopier@@6B@"

// bool `anonymous namespace'::inRange(int, int, int);
// public: hkObjectCopier::hkObjectCopier(class hkStructureLayout const &, class hkStructureLayout const &, class hkFlags<enum hkObjectCopier::ObjectCopierFlagBits, unsigned int>);
// public: virtual hkObjectCopier::~hkObjectCopier(void);
// private: void hkObjectCopier::writeZero(class hkOArchive &, class hkClassMember const &);
// int objectCopier_calcCArraySize(class hkClassMember const &);
// protected: virtual int hkObjectCopier::areMembersCompatible(class hkClassMember const &, class hkClassMember const &);
// private: int hkObjectCopier::saveBody(void const *, class hkClass const &, class hkOArchive &, class hkClass const &);
// void writeUlongArray(class hkOArchive &, int, int, void const *);
// void writePodArray(class hkOArchive &, enum hkClassMember::Type, int, int, void const *);
// enum hkResult applyDefaultsFor(class hkClass const &, class hkClassMember const &, int, class hkStreamWriter *);
// private: void hkObjectCopier::saveExtras(void const *, class hkClass const &, class hkOArchive &, class hkClass const &, int, class hkRelocationInfo &, int);
// void objectCopierPadUp(class hkStreamWriter *, int);
// enum hkResult saveCstring(char const *, int, class hkOArchive &, class hkRelocationInfo &);
// public: virtual enum hkResult hkObjectCopier::copyObject(void const *, class hkClass const &, class hkStreamWriter *, class hkClass const &, class hkRelocationInfo &);
// merged_84753D60;
// public: void hkRelocationInfo::addGlobal(int, void *, class hkClass const *, int);
// public: hkRelocationInfo::Global::Global(int, void *, class hkClass const *, int);
// public: void hkRelocationInfo::addFinish(int, char const *);
// public: hkRelocationInfo::Finish::Finish(int, char const *);
// public: unsigned int hkFlags<enum hkObjectCopier::ObjectCopierFlagBits, unsigned int>::get(unsigned int) const;
// public: void hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>::pushBack(struct hkRelocationInfo::Global const &);
// public: void hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator>::pushBack(struct hkRelocationInfo::Finish const &);
// public: void hkArrayBase<struct hkRelocationInfo::Global>::_pushBack(class hkMemoryAllocator &, struct hkRelocationInfo::Global const &);
// public: struct hkRelocationInfo::Finish & hkArrayBase<struct hkRelocationInfo::Finish>::operator[](int);
// public: void hkArrayBase<struct hkRelocationInfo::Finish>::_pushBack(class hkMemoryAllocator &, struct hkRelocationInfo::Finish const &);
// public: unsigned __int64& hkFixedArray<unsigned __int64>::operator[](int);
// public: unsigned __int64* hkFixedArray<unsigned __int64>::begin(void);
// public: hkLocalBuffer<unsigned __int64>::hkLocalBuffer<unsigned __int64>(int, char const *);
// public: hkLocalBuffer<unsigned __int64>::~hkLocalBuffer<unsigned __int64>(void);
// int `anonymous namespace'::min2<int>(int, int);
// protected: hkFixedArray<unsigned __int64>::hkFixedArray<unsigned __int64>(void);
// public: void hkPadSpu<unsigned __int64*>::operator=(unsigned __int64*);
// public: unsigned __int64* hkPadSpu<unsigned __int64*>::val(void) const;
// public: unsigned __int64* hkPadSpu<unsigned __int64*>::operator unsigned __int64*(void) const;
// public: hkPadSpu<unsigned __int64*>::hkPadSpu<unsigned __int64*>(void);
// public: static void hkArrayUtil::constructWithCopy<struct hkRelocationInfo::Global>(struct hkRelocationInfo::Global *, int, struct hkRelocationInfo::Global const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkRelocationInfo::Finish>(struct hkRelocationInfo::Finish *, int, struct hkRelocationInfo::Finish const &, struct hkTraitBool<1>);
// unsigned __int64* hkAllocateStack<unsigned __int64>(int, char const *);
// void hkDeallocateStack<unsigned __int64>(unsigned __int64*);

//bool `anonymous namespace'::inRange(int, int, int)
//{
//    mangled_ppc("?inRange@?A0xd16c28af@@YA_NHHH@Z");
//};

//public: hkObjectCopier::hkObjectCopier(class hkStructureLayout const &, class hkStructureLayout const &, class hkFlags<enum hkObjectCopier::ObjectCopierFlagBits, unsigned int>)
//{
//    mangled_ppc("??0hkObjectCopier@@QAA@ABVhkStructureLayout@@0V?$hkFlags@W4ObjectCopierFlagBits@hkObjectCopier@@I@@@Z");
//};

//public: virtual hkObjectCopier::~hkObjectCopier(void)
//{
//    mangled_ppc("??1hkObjectCopier@@UAA@XZ");
//};

//private: void hkObjectCopier::writeZero(class hkOArchive &, class hkClassMember const &)
//{
//    mangled_ppc("?writeZero@hkObjectCopier@@AAAXAAVhkOArchive@@ABVhkClassMember@@@Z");
//};

//int objectCopier_calcCArraySize(class hkClassMember const &)
//{
//    mangled_ppc("?objectCopier_calcCArraySize@@YAHABVhkClassMember@@@Z");
//};

//protected: virtual int hkObjectCopier::areMembersCompatible(class hkClassMember const &, class hkClassMember const &)
//{
//    mangled_ppc("?areMembersCompatible@hkObjectCopier@@MAAHABVhkClassMember@@0@Z");
//};

//private: int hkObjectCopier::saveBody(void const *, class hkClass const &, class hkOArchive &, class hkClass const &)
//{
//    mangled_ppc("?saveBody@hkObjectCopier@@AAAHPBXABVhkClass@@AAVhkOArchive@@1@Z");
//};

//void writeUlongArray(class hkOArchive &, int, int, void const *)
//{
//    mangled_ppc("?writeUlongArray@@YAXAAVhkOArchive@@HHPBX@Z");
//};

//void writePodArray(class hkOArchive &, enum hkClassMember::Type, int, int, void const *)
//{
//    mangled_ppc("?writePodArray@@YAXAAVhkOArchive@@W4Type@hkClassMember@@HHPBX@Z");
//};

//enum hkResult applyDefaultsFor(class hkClass const &, class hkClassMember const &, int, class hkStreamWriter *)
//{
//    mangled_ppc("?applyDefaultsFor@@YA?AW4hkResult@@ABVhkClass@@ABVhkClassMember@@HPAVhkStreamWriter@@@Z");
//};

//private: void hkObjectCopier::saveExtras(void const *, class hkClass const &, class hkOArchive &, class hkClass const &, int, class hkRelocationInfo &, int)
//{
//    mangled_ppc("?saveExtras@hkObjectCopier@@AAAXPBXABVhkClass@@AAVhkOArchive@@1HAAVhkRelocationInfo@@H@Z");
//};

//void objectCopierPadUp(class hkStreamWriter *, int)
//{
//    mangled_ppc("?objectCopierPadUp@@YAXPAVhkStreamWriter@@H@Z");
//};

//enum hkResult saveCstring(char const *, int, class hkOArchive &, class hkRelocationInfo &)
//{
//    mangled_ppc("?saveCstring@@YA?AW4hkResult@@PBDHAAVhkOArchive@@AAVhkRelocationInfo@@@Z");
//};

//public: virtual enum hkResult hkObjectCopier::copyObject(void const *, class hkClass const &, class hkStreamWriter *, class hkClass const &, class hkRelocationInfo &)
//{
//    mangled_ppc("?copyObject@hkObjectCopier@@UAA?AW4hkResult@@PBXABVhkClass@@PAVhkStreamWriter@@1AAVhkRelocationInfo@@@Z");
//};

//merged_84753D60
//{
//    mangled_ppc("merged_84753D60");
//};

//public: void hkRelocationInfo::addGlobal(int, void *, class hkClass const *, int)
//{
//    mangled_ppc("?addGlobal@hkRelocationInfo@@QAAXHPAXPBVhkClass@@H@Z");
//};

//public: hkRelocationInfo::Global::Global(int, void *, class hkClass const *, int)
//{
//    mangled_ppc("??0Global@hkRelocationInfo@@QAA@HPAXPBVhkClass@@H@Z");
//};

//public: void hkRelocationInfo::addFinish(int, char const *)
//{
//    mangled_ppc("?addFinish@hkRelocationInfo@@QAAXHPBD@Z");
//};

//public: hkRelocationInfo::Finish::Finish(int, char const *)
//{
//    mangled_ppc("??0Finish@hkRelocationInfo@@QAA@HPBD@Z");
//};

//public: unsigned int hkFlags<enum hkObjectCopier::ObjectCopierFlagBits, unsigned int>::get(unsigned int) const
//{
//    mangled_ppc("?get@?$hkFlags@W4ObjectCopierFlagBits@hkObjectCopier@@I@@QBAII@Z");
//};

//public: void hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>::pushBack(struct hkRelocationInfo::Global const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UGlobal@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAAXABUGlobal@hkRelocationInfo@@@Z");
//};

//public: void hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator>::pushBack(struct hkRelocationInfo::Finish const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UFinish@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAAXABUFinish@hkRelocationInfo@@@Z");
//};

//public: void hkArrayBase<struct hkRelocationInfo::Global>::_pushBack(class hkMemoryAllocator &, struct hkRelocationInfo::Global const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UGlobal@hkRelocationInfo@@@@QAAXAAVhkMemoryAllocator@@ABUGlobal@hkRelocationInfo@@@Z");
//};

//public: struct hkRelocationInfo::Finish & hkArrayBase<struct hkRelocationInfo::Finish>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UFinish@hkRelocationInfo@@@@QAAAAUFinish@hkRelocationInfo@@H@Z");
//};

//public: void hkArrayBase<struct hkRelocationInfo::Finish>::_pushBack(class hkMemoryAllocator &, struct hkRelocationInfo::Finish const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UFinish@hkRelocationInfo@@@@QAAXAAVhkMemoryAllocator@@ABUFinish@hkRelocationInfo@@@Z");
//};

//public: unsigned __int64& hkFixedArray<unsigned __int64>::operator[](int)
//{
//    mangled_ppc("??A?$hkFixedArray@_K@@QAAAA_KH@Z");
//};

//public: unsigned __int64* hkFixedArray<unsigned __int64>::begin(void)
//{
//    mangled_ppc("?begin@?$hkFixedArray@_K@@QAAPA_KXZ");
//};

//public: hkLocalBuffer<unsigned __int64>::hkLocalBuffer<unsigned __int64>(int, char const *)
//{
//    mangled_ppc("??0?$hkLocalBuffer@_K@@QAA@HPBD@Z");
//};

//public: hkLocalBuffer<unsigned __int64>::~hkLocalBuffer<unsigned __int64>(void)
//{
//    mangled_ppc("??1?$hkLocalBuffer@_K@@QAA@XZ");
//};

//int `anonymous namespace'::min2<int>(int, int)
//{
//    mangled_ppc("??$min2@H@?A0xd16c28af@@YAHHH@Z");
//};

//protected: hkFixedArray<unsigned __int64>::hkFixedArray<unsigned __int64>(void)
//{
//    mangled_ppc("??0?$hkFixedArray@_K@@IAA@XZ");
//};

//public: void hkPadSpu<unsigned __int64*>::operator=(unsigned __int64*)
//{
//    mangled_ppc("??4?$hkPadSpu@PA_K@@QAAXPA_K@Z");
//};

//public: unsigned __int64* hkPadSpu<unsigned __int64*>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PA_K@@QBAPA_KXZ");
//};

//public: unsigned __int64* hkPadSpu<unsigned __int64*>::operator unsigned __int64*(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PA_K@@QBAPA_KXZ");
//};

//public: hkPadSpu<unsigned __int64*>::hkPadSpu<unsigned __int64*>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PA_K@@QAA@XZ");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkRelocationInfo::Global>(struct hkRelocationInfo::Global *, int, struct hkRelocationInfo::Global const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@UGlobal@hkRelocationInfo@@@hkArrayUtil@@SAXPAUGlobal@hkRelocationInfo@@HABU12@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkRelocationInfo::Finish>(struct hkRelocationInfo::Finish *, int, struct hkRelocationInfo::Finish const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@UFinish@hkRelocationInfo@@@hkArrayUtil@@SAXPAUFinish@hkRelocationInfo@@HABU12@U?$hkTraitBool@$00@@@Z");
//};

//unsigned __int64* hkAllocateStack<unsigned __int64>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@_K@@YAPA_KHPBD@Z");
//};

//void hkDeallocateStack<unsigned __int64>(unsigned __int64*)
//{
//    mangled_ppc("??$hkDeallocateStack@_K@@YAXPA_K@Z");
//};

