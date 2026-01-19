/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkBinaryPackfileWriter::`RTTI Complete Object Locator'; // "??_R4hkBinaryPackfileWriter@@6B@"
// hkBinaryPackfileWriter::`RTTI Class Hierarchy Descriptor'; // "??_R3hkBinaryPackfileWriter@@8"
// hkBinaryPackfileWriter::`RTTI Base Class Array'; // "??_R2hkBinaryPackfileWriter@@8"
// hkBinaryPackfileWriter::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkBinaryPackfileWriter@@8"
// const hkSubStreamWriter::`RTTI Complete Object Locator'; // "??_R4hkSubStreamWriter@@6B@"
// hkSubStreamWriter::`RTTI Class Hierarchy Descriptor'; // "??_R3hkSubStreamWriter@@8"
// hkSubStreamWriter::`RTTI Base Class Array'; // "??_R2hkSubStreamWriter@@8"
// hkSubStreamWriter::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkSubStreamWriter@@8"
// public: static char const *const hkBinaryPackfileWriter::SECTION_TAG_CLASSNAMES; // "?SECTION_TAG_CLASSNAMES@hkBinaryPackfileWriter@@2PBDB"
// class hkBinaryPackfileWriter::`RTTI Type Descriptor'; // "??_R0?AVhkBinaryPackfileWriter@@@8"
// class hkSubStreamWriter::`RTTI Type Descriptor'; // "??_R0?AVhkSubStreamWriter@@@8"

// public: hkBinaryPackfileWriter::hkBinaryPackfileWriter(void);
// public: virtual hkBinaryPackfileWriter::~hkBinaryPackfileWriter(void);
// private: void hkBinaryPackfileWriter::fillSectionTags(struct hkBinaryPackfileWriter::SaveContext &);
// private: void hkBinaryPackfileWriter::writeClassName(struct hkBinaryPackfileWriter::SaveContext &, class hkClass const &, int);
// private: void hkBinaryPackfileWriter::writeAllObjects(struct hkBinaryPackfileWriter::SaveContext &);
// void padUp(class hkStreamWriter *, int);
// private: void hkBinaryPackfileWriter::doDeferredWrites(struct hkBinaryPackfileWriter::SaveContext &, int);
// public: virtual enum hkResult hkBinaryPackfileWriter::save(class hkStreamWriter *, struct hkPackfileWriter::Options const &);
// void saveFileHeader(class hkPlatformObjectWriter &, class hkStreamWriter *, struct hkPackfileWriter::Options const &, int);
// merged_846E7068;
// public: hkRelocationInfo::hkRelocationInfo(void);
// public: void hkRelocationInfo::addLocal(int, int);
// public: hkRelocationInfo::Local::Local(int, int);
// public: hkStringMap<int>::~hkStringMap<int>(void);
// public: struct hkStructureLayout::LayoutRules const & hkStructureLayout::getRules(void) const;
// public: hkSubStreamWriter::hkSubStreamWriter(class hkStreamWriter *);
// public: virtual class hkBool hkSubStreamWriter::isOk(void) const;
// public: virtual int hkSubStreamWriter::write(void const *, int);
// public: virtual void hkSubStreamWriter::flush(void);
// public: virtual class hkBool hkSubStreamWriter::seekTellSupported(void) const;
// public: virtual enum hkResult hkSubStreamWriter::seek(int, enum hkStreamWriter::SeekWhence);
// public: virtual int hkSubStreamWriter::tell(void) const;
// merged_846E7498;
// public: virtual hkSubStreamWriter::~hkSubStreamWriter(void);
// public: hkBinaryPackfileWriter::SaveContext::SaveContext(struct hkPackfileWriter::Options const &);
// public: hkPackfileHeader::hkPackfileHeader(void);
// public: hkBinaryPackfileWriter::SaveContext::~SaveContext(void);
// public: enum hkResult hkPointerMap<void const *, int, struct hkContainerHeapAllocator>::get(void const *, int *) const;
// public: class Dummy * hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::getIterator(void) const;
// public: void const * hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::getKey(class Dummy *) const;
// public: char const * hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::getValue(class Dummy *) const;
// public: class Dummy * hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::getNext(class Dummy *) const;
// public: class hkBool hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::isValid(class Dummy *) const;
// public: hkStringMap<int>::hkStringMap<int>(void);
// public: void hkStringMap<int>::insert(char const *, int);
// public: class hkBool hkStringMap<int>::hasKey(char const *) const;
// public: int hkStringMap<int>::getWithDefault(char const *, int) const;
// public: hkArray<struct hkRelocationInfo::Local, struct hkContainerHeapAllocator>::hkArray<struct hkRelocationInfo::Local, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkRelocationInfo::Local, struct hkContainerHeapAllocator>::pushBack(struct hkRelocationInfo::Local const &);
// public: hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>::hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>::setSize(int);
// public: hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator>::hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>::hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>(void);
// public: struct hkRelocationInfo::Import & hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkArray<class hkPackfileSectionHeader, struct hkContainerHeapAllocator>::hkArray<class hkPackfileSectionHeader, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkPackfileSectionHeader, struct hkContainerHeapAllocator>::setSize(int);
// public: hkArray<struct `anonymous namespace'::WriteLocation, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::WriteLocation, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct `anonymous namespace'::WriteLocation, struct hkContainerHeapAllocator>::setSize(int);
// public: hkArray<class hkRelocationInfo, struct hkContainerHeapAllocator>::hkArray<class hkRelocationInfo, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkRelocationInfo, struct hkContainerHeapAllocator>::setSize(int);
// public: hkInplaceArray<char, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<char, 32, struct hkContainerHeapAllocator>(void);
// public: void hkArray<unsigned int, struct hkContainerHeapAllocator>::setSize(int, unsigned int const &);
// public: hkArrayBase<struct hkRelocationInfo::Local>::hkArrayBase<struct hkRelocationInfo::Local>(void);
// public: struct hkRelocationInfo::Local & hkArrayBase<struct hkRelocationInfo::Local>::operator[](int);
// public: int hkArrayBase<struct hkRelocationInfo::Local>::getSize(void) const;
// public: void hkArrayBase<struct hkRelocationInfo::Local>::_pushBack(class hkMemoryAllocator &, struct hkRelocationInfo::Local const &);
// public: struct hkRelocationInfo::Local * hkArrayBase<struct hkRelocationInfo::Local>::begin(void);
// public: hkArrayBase<struct hkRelocationInfo::Global>::hkArrayBase<struct hkRelocationInfo::Global>(void);
// public: struct hkRelocationInfo::Global const & hkArrayBase<struct hkRelocationInfo::Global>::operator[](int) const;
// public: struct hkRelocationInfo::Global & hkArrayBase<struct hkRelocationInfo::Global>::operator[](int);
// public: int hkArrayBase<struct hkRelocationInfo::Global>::getSize(void) const;
// public: void hkArrayBase<struct hkRelocationInfo::Global>::removeAt(int);
// public: void hkArrayBase<struct hkRelocationInfo::Global>::_setSize(class hkMemoryAllocator &, int);
// public: void hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator> &);
// public: hkArrayBase<struct hkRelocationInfo::Finish>::hkArrayBase<struct hkRelocationInfo::Finish>(void);
// public: struct hkRelocationInfo::Finish const & hkArrayBase<struct hkRelocationInfo::Finish>::operator[](int) const;
// public: int hkArrayBase<struct hkRelocationInfo::Finish>::getSize(void) const;
// public: void hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator> &);
// public: hkArrayBase<struct hkRelocationInfo::Import>::hkArrayBase<struct hkRelocationInfo::Import>(void);
// public: struct hkRelocationInfo::Import & hkArrayBase<struct hkRelocationInfo::Import>::operator[](int);
// public: int hkArrayBase<struct hkRelocationInfo::Import>::getSize(void) const;
// public: struct hkRelocationInfo::Import & hkArrayBase<struct hkRelocationInfo::Import>::_expandOne(class hkMemoryAllocator &);
// public: void hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator> &);
// public: hkArrayBase<class hkPackfileSectionHeader>::hkArrayBase<class hkPackfileSectionHeader>(void);
// public: class hkPackfileSectionHeader & hkArrayBase<class hkPackfileSectionHeader>::operator[](int);
// public: int hkArrayBase<class hkPackfileSectionHeader>::getSize(void) const;
// public: void hkArrayBase<class hkPackfileSectionHeader>::_setSize(class hkMemoryAllocator &, int);
// public: class hkPackfileSectionHeader * hkArrayBase<class hkPackfileSectionHeader>::begin(void);
// public: hkArray<class hkPackfileSectionHeader, struct hkContainerHeapAllocator>::~hkArray<class hkPackfileSectionHeader, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkPackfileSectionHeader>::~hkArrayBase<class hkPackfileSectionHeader>(void);
// public: hkArrayBase<struct `anonymous namespace'::WriteLocation>::hkArrayBase<struct `anonymous namespace'::WriteLocation>(void);
// public: struct `anonymous namespace'::WriteLocation & hkArrayBase<struct `anonymous namespace'::WriteLocation>::operator[](int);
// public: void hkArrayBase<struct `anonymous namespace'::WriteLocation>::_setSize(class hkMemoryAllocator &, int);
// public: hkArray<struct `anonymous namespace'::WriteLocation, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::WriteLocation, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct `anonymous namespace'::WriteLocation>::~hkArrayBase<struct `anonymous namespace'::WriteLocation>(void);
// public: hkArrayBase<class hkRelocationInfo>::hkArrayBase<class hkRelocationInfo>(void);
// public: class hkRelocationInfo & hkArrayBase<class hkRelocationInfo>::operator[](int);
// public: void hkArrayBase<class hkRelocationInfo>::_setSize(class hkMemoryAllocator &, int);
// public: hkArray<class hkRelocationInfo, struct hkContainerHeapAllocator>::~hkArray<class hkRelocationInfo, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkRelocationInfo>::~hkArrayBase<class hkRelocationInfo>(void);
// public: hkInplaceArray<char, 32, struct hkContainerHeapAllocator>::hkInplaceArray<char, 32, struct hkContainerHeapAllocator>(int);
// int `anonymous namespace'::getArraySizeInBytes<class hkPackfileSectionHeader>(class hkArray<class hkPackfileSectionHeader, struct hkContainerHeapAllocator> const &);
// public: void hkArrayBase<unsigned int>::_setSize(class hkMemoryAllocator &, int, unsigned int const &);
// public: void hkArray<class hkPackfileSectionHeader, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct `anonymous namespace'::WriteLocation, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkRelocationInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<struct hkRelocationInfo::Local>::getCapacity(void) const;
// public: static void hkArrayUtil::constructWithCopy<struct hkRelocationInfo::Local>(struct hkRelocationInfo::Local *, int, struct hkRelocationInfo::Local const &, struct hkTraitBool<1>);
// public: void hkArrayBase<struct hkRelocationInfo::Global>::_reserve(class hkMemoryAllocator &, int);
// public: int hkArrayBase<struct hkRelocationInfo::Global>::getCapacity(void) const;
// public: static void hkArrayUtil::destruct<struct hkRelocationInfo::Global>(struct hkRelocationInfo::Global *, int, struct hkTraitBool<1>);
// void hkMemUtil::memCpyOneAligned<16, 4>(void *, void const *);
// public: static void hkArrayUtil::construct<struct hkRelocationInfo::Global>(struct hkRelocationInfo::Global *, int, struct hkTraitBool<1>);
// public: int hkArrayBase<struct hkRelocationInfo::Import>::getCapacity(void) const;
// public: static void hkArrayUtil::construct<struct hkRelocationInfo::Import>(struct hkRelocationInfo::Import *, int, struct hkTraitBool<1>);
// public: void hkArrayBase<class hkPackfileSectionHeader>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class hkPackfileSectionHeader>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<class hkPackfileSectionHeader>(class hkPackfileSectionHeader *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<class hkPackfileSectionHeader>(class hkPackfileSectionHeader *, int, struct hkTraitBool<0>);
// public: hkPackfileSectionHeader::hkPackfileSectionHeader(void);
// public: void hkArrayBase<struct `anonymous namespace'::WriteLocation>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct `anonymous namespace'::WriteLocation>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct `anonymous namespace'::WriteLocation>(struct `anonymous namespace'::WriteLocation *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct `anonymous namespace'::WriteLocation>(struct `anonymous namespace'::WriteLocation *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<class hkRelocationInfo>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class hkRelocationInfo>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<class hkRelocationInfo>(class hkRelocationInfo *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<class hkRelocationInfo>(class hkRelocationInfo *, int, struct hkTraitBool<0>);
// public: void * hkRelocationInfo::`scalar deleting destructor'(unsigned int);
// public: static void hkRelocationInfo::operator delete(void *);
// public: int hkArrayBase<class hkPackfileSectionHeader>::getCapacity(void) const;
// public: void hkArrayBase<class hkPackfileSectionHeader>::clear(void);
// public: int hkArrayBase<struct `anonymous namespace'::WriteLocation>::getCapacity(void) const;
// public: void hkArrayBase<struct `anonymous namespace'::WriteLocation>::clear(void);
// public: int hkArrayBase<class hkRelocationInfo>::getCapacity(void) const;
// public: void hkArrayBase<class hkRelocationInfo>::clear(void);

//public: hkBinaryPackfileWriter::hkBinaryPackfileWriter(void)
//{
//    mangled_ppc("??0hkBinaryPackfileWriter@@QAA@XZ");
//};

//public: virtual hkBinaryPackfileWriter::~hkBinaryPackfileWriter(void)
//{
//    mangled_ppc("??1hkBinaryPackfileWriter@@UAA@XZ");
//};

//private: void hkBinaryPackfileWriter::fillSectionTags(struct hkBinaryPackfileWriter::SaveContext &)
//{
//    mangled_ppc("?fillSectionTags@hkBinaryPackfileWriter@@AAAXAAUSaveContext@1@@Z");
//};

//private: void hkBinaryPackfileWriter::writeClassName(struct hkBinaryPackfileWriter::SaveContext &, class hkClass const &, int)
//{
//    mangled_ppc("?writeClassName@hkBinaryPackfileWriter@@AAAXAAUSaveContext@1@ABVhkClass@@H@Z");
//};

//private: void hkBinaryPackfileWriter::writeAllObjects(struct hkBinaryPackfileWriter::SaveContext &)
//{
//    mangled_ppc("?writeAllObjects@hkBinaryPackfileWriter@@AAAXAAUSaveContext@1@@Z");
//};

//void padUp(class hkStreamWriter *, int)
//{
//    mangled_ppc("?padUp@@YAXPAVhkStreamWriter@@H@Z");
//};

//private: void hkBinaryPackfileWriter::doDeferredWrites(struct hkBinaryPackfileWriter::SaveContext &, int)
//{
//    mangled_ppc("?doDeferredWrites@hkBinaryPackfileWriter@@AAAXAAUSaveContext@1@H@Z");
//};

//public: virtual enum hkResult hkBinaryPackfileWriter::save(class hkStreamWriter *, struct hkPackfileWriter::Options const &)
//{
//    mangled_ppc("?save@hkBinaryPackfileWriter@@UAA?AW4hkResult@@PAVhkStreamWriter@@ABUOptions@hkPackfileWriter@@@Z");
//};

//void saveFileHeader(class hkPlatformObjectWriter &, class hkStreamWriter *, struct hkPackfileWriter::Options const &, int)
//{
//    mangled_ppc("?saveFileHeader@@YAXAAVhkPlatformObjectWriter@@PAVhkStreamWriter@@ABUOptions@hkPackfileWriter@@H@Z");
//};

//merged_846E7068
//{
//    mangled_ppc("merged_846E7068");
//};

//public: hkRelocationInfo::hkRelocationInfo(void)
//{
//    mangled_ppc("??0hkRelocationInfo@@QAA@XZ");
//};

//public: void hkRelocationInfo::addLocal(int, int)
//{
//    mangled_ppc("?addLocal@hkRelocationInfo@@QAAXHH@Z");
//};

//public: hkRelocationInfo::Local::Local(int, int)
//{
//    mangled_ppc("??0Local@hkRelocationInfo@@QAA@HH@Z");
//};

//public: hkStringMap<int>::~hkStringMap<int>(void)
//{
//    mangled_ppc("??1?$hkStringMap@H@@QAA@XZ");
//};

//public: struct hkStructureLayout::LayoutRules const & hkStructureLayout::getRules(void) const
//{
//    mangled_ppc("?getRules@hkStructureLayout@@QBAABULayoutRules@1@XZ");
//};

//public: hkSubStreamWriter::hkSubStreamWriter(class hkStreamWriter *)
//{
//    mangled_ppc("??0hkSubStreamWriter@@QAA@PAVhkStreamWriter@@@Z");
//};

//public: virtual class hkBool hkSubStreamWriter::isOk(void) const
//{
//    mangled_ppc("?isOk@hkSubStreamWriter@@UBA?AVhkBool@@XZ");
//};

//public: virtual int hkSubStreamWriter::write(void const *, int)
//{
//    mangled_ppc("?write@hkSubStreamWriter@@UAAHPBXH@Z");
//};

//public: virtual void hkSubStreamWriter::flush(void)
//{
//    mangled_ppc("?flush@hkSubStreamWriter@@UAAXXZ");
//};

//public: virtual class hkBool hkSubStreamWriter::seekTellSupported(void) const
//{
//    mangled_ppc("?seekTellSupported@hkSubStreamWriter@@UBA?AVhkBool@@XZ");
//};

//public: virtual enum hkResult hkSubStreamWriter::seek(int, enum hkStreamWriter::SeekWhence)
//{
//    mangled_ppc("?seek@hkSubStreamWriter@@UAA?AW4hkResult@@HW4SeekWhence@hkStreamWriter@@@Z");
//};

//public: virtual int hkSubStreamWriter::tell(void) const
//{
//    mangled_ppc("?tell@hkSubStreamWriter@@UBAHXZ");
//};

//merged_846E7498
//{
//    mangled_ppc("merged_846E7498");
//};

//public: virtual hkSubStreamWriter::~hkSubStreamWriter(void)
//{
//    mangled_ppc("??1hkSubStreamWriter@@UAA@XZ");
//};

//public: hkBinaryPackfileWriter::SaveContext::SaveContext(struct hkPackfileWriter::Options const &)
//{
//    mangled_ppc("??0SaveContext@hkBinaryPackfileWriter@@QAA@ABUOptions@hkPackfileWriter@@@Z");
//};

//public: hkPackfileHeader::hkPackfileHeader(void)
//{
//    mangled_ppc("??0hkPackfileHeader@@QAA@XZ");
//};

//public: hkBinaryPackfileWriter::SaveContext::~SaveContext(void)
//{
//    mangled_ppc("??1SaveContext@hkBinaryPackfileWriter@@QAA@XZ");
//};

//public: enum hkResult hkPointerMap<void const *, int, struct hkContainerHeapAllocator>::get(void const *, int *) const
//{
//    mangled_ppc("?get@?$hkPointerMap@PBXHUhkContainerHeapAllocator@@@@QBA?AW4hkResult@@PBXPAH@Z");
//};

//public: class Dummy * hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkPointerMap@PBXPBDUhkContainerHeapAllocator@@@@QBAPAVDummy@@XZ");
//};

//public: void const * hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkPointerMap@PBXPBDUhkContainerHeapAllocator@@@@QBAPBXPAVDummy@@@Z");
//};

//public: char const * hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkPointerMap@PBXPBDUhkContainerHeapAllocator@@@@QBAPBDPAVDummy@@@Z");
//};

//public: class Dummy * hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkPointerMap@PBXPBDUhkContainerHeapAllocator@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkPointerMap@PBXPBDUhkContainerHeapAllocator@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: hkStringMap<int>::hkStringMap<int>(void)
//{
//    mangled_ppc("??0?$hkStringMap@H@@QAA@XZ");
//};

//public: void hkStringMap<int>::insert(char const *, int)
//{
//    mangled_ppc("?insert@?$hkStringMap@H@@QAAXPBDH@Z");
//};

//public: class hkBool hkStringMap<int>::hasKey(char const *) const
//{
//    mangled_ppc("?hasKey@?$hkStringMap@H@@QBA?AVhkBool@@PBD@Z");
//};

//public: int hkStringMap<int>::getWithDefault(char const *, int) const
//{
//    mangled_ppc("?getWithDefault@?$hkStringMap@H@@QBAHPBDH@Z");
//};

//public: hkArray<struct hkRelocationInfo::Local, struct hkContainerHeapAllocator>::hkArray<struct hkRelocationInfo::Local, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@ULocal@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkRelocationInfo::Local, struct hkContainerHeapAllocator>::pushBack(struct hkRelocationInfo::Local const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@ULocal@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAAXABULocal@hkRelocationInfo@@@Z");
//};

//public: hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>::hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UGlobal@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UGlobal@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator>::hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UFinish@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>::hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UImport@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct hkRelocationInfo::Import & hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UImport@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAAAAUImport@hkRelocationInfo@@XZ");
//};

//public: hkArray<class hkPackfileSectionHeader, struct hkContainerHeapAllocator>::hkArray<class hkPackfileSectionHeader, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@VhkPackfileSectionHeader@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkPackfileSectionHeader, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@VhkPackfileSectionHeader@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArray<struct `anonymous namespace'::WriteLocation, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::WriteLocation, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UWriteLocation@?A0x61534137@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct `anonymous namespace'::WriteLocation, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UWriteLocation@?A0x61534137@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArray<class hkRelocationInfo, struct hkContainerHeapAllocator>::hkArray<class hkRelocationInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@VhkRelocationInfo@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkRelocationInfo, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@VhkRelocationInfo@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkInplaceArray<char, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<char, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@D$0CA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<unsigned int, struct hkContainerHeapAllocator>::setSize(int, unsigned int const &)
//{
//    mangled_ppc("?setSize@?$hkArray@IUhkContainerHeapAllocator@@@@QAAXHABI@Z");
//};

//public: hkArrayBase<struct hkRelocationInfo::Local>::hkArrayBase<struct hkRelocationInfo::Local>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@ULocal@hkRelocationInfo@@@@QAA@XZ");
//};

//public: struct hkRelocationInfo::Local & hkArrayBase<struct hkRelocationInfo::Local>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@ULocal@hkRelocationInfo@@@@QAAAAULocal@hkRelocationInfo@@H@Z");
//};

//public: int hkArrayBase<struct hkRelocationInfo::Local>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@ULocal@hkRelocationInfo@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkRelocationInfo::Local>::_pushBack(class hkMemoryAllocator &, struct hkRelocationInfo::Local const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@ULocal@hkRelocationInfo@@@@QAAXAAVhkMemoryAllocator@@ABULocal@hkRelocationInfo@@@Z");
//};

//public: struct hkRelocationInfo::Local * hkArrayBase<struct hkRelocationInfo::Local>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@ULocal@hkRelocationInfo@@@@QAAPAULocal@hkRelocationInfo@@XZ");
//};

//public: hkArrayBase<struct hkRelocationInfo::Global>::hkArrayBase<struct hkRelocationInfo::Global>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UGlobal@hkRelocationInfo@@@@QAA@XZ");
//};

//public: struct hkRelocationInfo::Global const & hkArrayBase<struct hkRelocationInfo::Global>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UGlobal@hkRelocationInfo@@@@QBAABUGlobal@hkRelocationInfo@@H@Z");
//};

//public: struct hkRelocationInfo::Global & hkArrayBase<struct hkRelocationInfo::Global>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UGlobal@hkRelocationInfo@@@@QAAAAUGlobal@hkRelocationInfo@@H@Z");
//};

//public: int hkArrayBase<struct hkRelocationInfo::Global>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UGlobal@hkRelocationInfo@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkRelocationInfo::Global>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@UGlobal@hkRelocationInfo@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkRelocationInfo::Global>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UGlobal@hkRelocationInfo@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkRelocationInfo::Global, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkArray@UGlobal@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

//public: hkArrayBase<struct hkRelocationInfo::Finish>::hkArrayBase<struct hkRelocationInfo::Finish>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UFinish@hkRelocationInfo@@@@QAA@XZ");
//};

//public: struct hkRelocationInfo::Finish const & hkArrayBase<struct hkRelocationInfo::Finish>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UFinish@hkRelocationInfo@@@@QBAABUFinish@hkRelocationInfo@@H@Z");
//};

//public: int hkArrayBase<struct hkRelocationInfo::Finish>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UFinish@hkRelocationInfo@@@@QBAHXZ");
//};

//public: void hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkRelocationInfo::Finish, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkArray@UFinish@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

//public: hkArrayBase<struct hkRelocationInfo::Import>::hkArrayBase<struct hkRelocationInfo::Import>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UImport@hkRelocationInfo@@@@QAA@XZ");
//};

//public: struct hkRelocationInfo::Import & hkArrayBase<struct hkRelocationInfo::Import>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UImport@hkRelocationInfo@@@@QAAAAUImport@hkRelocationInfo@@H@Z");
//};

//public: int hkArrayBase<struct hkRelocationInfo::Import>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UImport@hkRelocationInfo@@@@QBAHXZ");
//};

//public: struct hkRelocationInfo::Import & hkArrayBase<struct hkRelocationInfo::Import>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UImport@hkRelocationInfo@@@@QAAAAUImport@hkRelocationInfo@@AAVhkMemoryAllocator@@@Z");
//};

//public: void hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkRelocationInfo::Import, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkArray@UImport@hkRelocationInfo@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

//public: hkArrayBase<class hkPackfileSectionHeader>::hkArrayBase<class hkPackfileSectionHeader>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@VhkPackfileSectionHeader@@@@QAA@XZ");
//};

//public: class hkPackfileSectionHeader & hkArrayBase<class hkPackfileSectionHeader>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@VhkPackfileSectionHeader@@@@QAAAAVhkPackfileSectionHeader@@H@Z");
//};

//public: int hkArrayBase<class hkPackfileSectionHeader>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@VhkPackfileSectionHeader@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkPackfileSectionHeader>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@VhkPackfileSectionHeader@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: class hkPackfileSectionHeader * hkArrayBase<class hkPackfileSectionHeader>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@VhkPackfileSectionHeader@@@@QAAPAVhkPackfileSectionHeader@@XZ");
//};

//public: hkArray<class hkPackfileSectionHeader, struct hkContainerHeapAllocator>::~hkArray<class hkPackfileSectionHeader, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@VhkPackfileSectionHeader@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkPackfileSectionHeader>::~hkArrayBase<class hkPackfileSectionHeader>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@VhkPackfileSectionHeader@@@@QAA@XZ");
//};

//public: hkArrayBase<struct `anonymous namespace'::WriteLocation>::hkArrayBase<struct `anonymous namespace'::WriteLocation>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UWriteLocation@?A0x61534137@@@@QAA@XZ");
//};

//public: struct `anonymous namespace'::WriteLocation & hkArrayBase<struct `anonymous namespace'::WriteLocation>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UWriteLocation@?A0x61534137@@@@QAAAAUWriteLocation@?A0x61534137@@H@Z");
//};

//public: void hkArrayBase<struct `anonymous namespace'::WriteLocation>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UWriteLocation@?A0x61534137@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct `anonymous namespace'::WriteLocation, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::WriteLocation, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UWriteLocation@?A0x61534137@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct `anonymous namespace'::WriteLocation>::~hkArrayBase<struct `anonymous namespace'::WriteLocation>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UWriteLocation@?A0x61534137@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkRelocationInfo>::hkArrayBase<class hkRelocationInfo>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@VhkRelocationInfo@@@@QAA@XZ");
//};

//public: class hkRelocationInfo & hkArrayBase<class hkRelocationInfo>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@VhkRelocationInfo@@@@QAAAAVhkRelocationInfo@@H@Z");
//};

//public: void hkArrayBase<class hkRelocationInfo>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@VhkRelocationInfo@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<class hkRelocationInfo, struct hkContainerHeapAllocator>::~hkArray<class hkRelocationInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@VhkRelocationInfo@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkRelocationInfo>::~hkArrayBase<class hkRelocationInfo>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@VhkRelocationInfo@@@@QAA@XZ");
//};

//public: hkInplaceArray<char, 32, struct hkContainerHeapAllocator>::hkInplaceArray<char, 32, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@D$0CA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//int `anonymous namespace'::getArraySizeInBytes<class hkPackfileSectionHeader>(class hkArray<class hkPackfileSectionHeader, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$getArraySizeInBytes@VhkPackfileSectionHeader@@@?A0x61534137@@YAHABV?$hkArray@VhkPackfileSectionHeader@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkArrayBase<unsigned int>::_setSize(class hkMemoryAllocator &, int, unsigned int const &)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@I@@QAAXAAVhkMemoryAllocator@@HABI@Z");
//};

//public: void hkArray<class hkPackfileSectionHeader, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@VhkPackfileSectionHeader@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct `anonymous namespace'::WriteLocation, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UWriteLocation@?A0x61534137@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkRelocationInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@VhkRelocationInfo@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkRelocationInfo::Local>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@ULocal@hkRelocationInfo@@@@QBAHXZ");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkRelocationInfo::Local>(struct hkRelocationInfo::Local *, int, struct hkRelocationInfo::Local const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@ULocal@hkRelocationInfo@@@hkArrayUtil@@SAXPAULocal@hkRelocationInfo@@HABU12@U?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<struct hkRelocationInfo::Global>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UGlobal@hkRelocationInfo@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: int hkArrayBase<struct hkRelocationInfo::Global>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UGlobal@hkRelocationInfo@@@@QBAHXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkRelocationInfo::Global>(struct hkRelocationInfo::Global *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@UGlobal@hkRelocationInfo@@@hkArrayUtil@@SAXPAUGlobal@hkRelocationInfo@@HU?$hkTraitBool@$00@@@Z");
//};

//void hkMemUtil::memCpyOneAligned<16, 4>(void *, void const *)
//{
//    mangled_ppc("??$memCpyOneAligned@$0BA@$03@hkMemUtil@@YAXPAXPBX@Z");
//};

//public: static void hkArrayUtil::construct<struct hkRelocationInfo::Global>(struct hkRelocationInfo::Global *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@UGlobal@hkRelocationInfo@@@hkArrayUtil@@SAXPAUGlobal@hkRelocationInfo@@HU?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<struct hkRelocationInfo::Import>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UImport@hkRelocationInfo@@@@QBAHXZ");
//};

//public: static void hkArrayUtil::construct<struct hkRelocationInfo::Import>(struct hkRelocationInfo::Import *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@UImport@hkRelocationInfo@@@hkArrayUtil@@SAXPAUImport@hkRelocationInfo@@HU?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<class hkPackfileSectionHeader>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@VhkPackfileSectionHeader@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class hkPackfileSectionHeader>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@VhkPackfileSectionHeader@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<class hkPackfileSectionHeader>(class hkPackfileSectionHeader *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@VhkPackfileSectionHeader@@@hkArrayUtil@@SAXPAVhkPackfileSectionHeader@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkPackfileSectionHeader>(class hkPackfileSectionHeader *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@VhkPackfileSectionHeader@@@hkArrayUtil@@SAXPAVhkPackfileSectionHeader@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkPackfileSectionHeader::hkPackfileSectionHeader(void)
//{
//    mangled_ppc("??0hkPackfileSectionHeader@@QAA@XZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::WriteLocation>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UWriteLocation@?A0x61534137@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct `anonymous namespace'::WriteLocation>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UWriteLocation@?A0x61534137@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct `anonymous namespace'::WriteLocation>(struct `anonymous namespace'::WriteLocation *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UWriteLocation@?A0x61534137@@@hkArrayUtil@@SAXPAUWriteLocation@?A0x61534137@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct `anonymous namespace'::WriteLocation>(struct `anonymous namespace'::WriteLocation *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UWriteLocation@?A0x61534137@@@hkArrayUtil@@SAXPAUWriteLocation@?A0x61534137@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<class hkRelocationInfo>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@VhkRelocationInfo@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class hkRelocationInfo>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@VhkRelocationInfo@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<class hkRelocationInfo>(class hkRelocationInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@VhkRelocationInfo@@@hkArrayUtil@@SAXPAVhkRelocationInfo@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkRelocationInfo>(class hkRelocationInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@VhkRelocationInfo@@@hkArrayUtil@@SAXPAVhkRelocationInfo@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void * hkRelocationInfo::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GhkRelocationInfo@@QAAPAXI@Z");
//};

//public: static void hkRelocationInfo::operator delete(void *)
//{
//    mangled_ppc("??3hkRelocationInfo@@SAXPAX@Z");
//};

//public: int hkArrayBase<class hkPackfileSectionHeader>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@VhkPackfileSectionHeader@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkPackfileSectionHeader>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@VhkPackfileSectionHeader@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct `anonymous namespace'::WriteLocation>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UWriteLocation@?A0x61534137@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::WriteLocation>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UWriteLocation@?A0x61534137@@@@QAAXXZ");
//};

//public: int hkArrayBase<class hkRelocationInfo>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@VhkRelocationInfo@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkRelocationInfo>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@VhkRelocationInfo@@@@QAAXXZ");
//};

