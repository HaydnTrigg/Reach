/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkPackfileWriter::`RTTI Complete Object Locator'; // "??_R4hkPackfileWriter@@6B@"
// public: static char const *const hkPackfileWriter::SECTION_TAG_DATA; // "?SECTION_TAG_DATA@hkPackfileWriter@@2PBDB"
// public: static char const *const hkPackfileWriter::SECTION_TAG_TYPES; // "?SECTION_TAG_TYPES@hkPackfileWriter@@2PBDB"

// public: hkPackfileWriter::hkPackfileWriter(void);
// public: virtual hkPackfileWriter::~hkPackfileWriter(void);
// public: virtual void hkPackfileWriter::setContentsWithRegistry(void const *, class hkClass const &, class hkVtableClassRegistry const *, class hkPackfileWriter::AddObjectListener *);
// public: virtual void hkPackfileWriter::setContents(void const *, class hkClass const &, class hkPackfileWriter::AddObjectListener *);
// public: virtual void hkPackfileWriter::addImport(void const *, char const *);
// public: virtual void hkPackfileWriter::addExport(void const *, char const *);
// protected: unsigned int hkPackfileWriter::sectionTagToIndex(char const *);
// protected: unsigned int hkPackfileWriter::findSectionFor(void const *, class hkClass const &, char const *);
// protected: void hkPackfileWriter::addPendingWrite(void const *, class hkClass const &, void const *, class hkClass const &, char const *);
// protected: int hkPackfileWriter::notDuplicateMetaData(void const *, class hkClass const *);
// protected: void hkPackfileWriter::addObject(void const *, class hkClass const &, class hkVtableClassRegistry const *, class hkPackfileWriter::AddObjectListener *, char const *);
// class hkClass const * getExactClass(void const *, class hkClass const &, class hkVtableClassRegistry const *);
// void chasePointers(void const *, class hkClass const &, class hkRelocationInfo &);
// public: virtual void hkPackfileWriter::addSection(char const *);
// public: virtual void hkPackfileWriter::setSectionForPointer(void const *, char const *);
// public: virtual void hkPackfileWriter::setSectionForClass(class hkClass const &, char const *);
// public: static void hkPackfileWriter::getCurrentVersion(char *, int);
// merged_846F5020;
// public: hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::~hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>(void);
// public: hkStringMap<class hkClassEnum const *>::~hkStringMap<class hkClassEnum const *>(void);
// public: hkPointerMap<void const *, void const *, struct hkContainerHeapAllocator>::~hkPointerMap<void const *, void const *, struct hkContainerHeapAllocator>(void);
// public: hkPointerMap<void const *, unsigned int, struct hkContainerHeapAllocator>::~hkPointerMap<void const *, unsigned int, struct hkContainerHeapAllocator>(void);
// public: hkStringMap<unsigned int>::~hkStringMap<unsigned int>(void);
// public: hkSerializeMultiMap<void const *, int>::~hkSerializeMultiMap<void const *, int>(void);
// public: virtual hkOffsetOnlyStreamWriter::~hkOffsetOnlyStreamWriter(void);
// public: hkArray<struct hkPackfileWriter::PendingWrite, struct hkContainerHeapAllocator>::hkArray<struct hkPackfileWriter::PendingWrite, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkPackfileWriter::PendingWrite, struct hkContainerHeapAllocator>::pushBack(struct hkPackfileWriter::PendingWrite const &);
// public: class hkBool hkPointerMap<void const *, int, struct hkContainerHeapAllocator>::hasKey(void const *) const;
// public: hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>(void);
// public: hkStringMap<class hkClassEnum const *>::hkStringMap<class hkClassEnum const *>(void);
// public: void hkStringMap<class hkClassEnum const *>::insert(char const *, class hkClassEnum const *);
// public: class hkClassEnum const * hkStringMap<class hkClassEnum const *>::getWithDefault(char const *, class hkClassEnum const *) const;
// public: hkPointerMap<void const *, void const *, struct hkContainerHeapAllocator>::hkPointerMap<void const *, void const *, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<void const *, void const *, struct hkContainerHeapAllocator>::insert(void const *, void const *);
// public: hkArray<char *, struct hkContainerHeapAllocator>::hkArray<char *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<char *, struct hkContainerHeapAllocator>::pushBack(char *const &);
// public: enum hkResult hkStringMap<int>::get(char const *, int *) const;
// public: hkArray<struct hkVariant, struct hkContainerHeapAllocator>::hkArray<struct hkVariant, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkVariant, struct hkContainerHeapAllocator>::pushBack(struct hkVariant const &);
// public: hkPointerMap<void const *, unsigned int, struct hkContainerHeapAllocator>::hkPointerMap<void const *, unsigned int, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<void const *, unsigned int, struct hkContainerHeapAllocator>::insert(void const *, unsigned int);
// public: class hkBool hkPointerMap<void const *, unsigned int, struct hkContainerHeapAllocator>::hasKey(void const *) const;
// public: unsigned int hkPointerMap<void const *, unsigned int, struct hkContainerHeapAllocator>::getWithDefault(void const *, unsigned int) const;
// public: hkStringMap<unsigned int>::hkStringMap<unsigned int>(void);
// public: void hkStringMap<unsigned int>::insert(char const *, unsigned int);
// public: unsigned int hkStringMap<unsigned int>::getWithDefault(char const *, unsigned int) const;
// public: hkSerializeMultiMap<void const *, int>::hkSerializeMultiMap<void const *, int>(void);
// public: hkArray<struct hkSerializeMultiMap<void const *, int>::Value, struct hkContainerHeapAllocator>::hkArray<struct hkSerializeMultiMap<void const *, int>::Value, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkPackfileWriter::PendingWrite>::hkArrayBase<struct hkPackfileWriter::PendingWrite>(void);
// public: void hkArrayBase<struct hkPackfileWriter::PendingWrite>::_pushBack(class hkMemoryAllocator &, struct hkPackfileWriter::PendingWrite const &);
// public: hkArray<struct hkPackfileWriter::PendingWrite, struct hkContainerHeapAllocator>::~hkArray<struct hkPackfileWriter::PendingWrite, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkPackfileWriter::PendingWrite>::~hkArrayBase<struct hkPackfileWriter::PendingWrite>(void);
// public: hkArrayBase<char *>::hkArrayBase<char *>(void);
// public: void hkArrayBase<char *>::_pushBack(class hkMemoryAllocator &, char *const &);
// public: hkArray<char *, struct hkContainerHeapAllocator>::~hkArray<char *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<char *>::~hkArrayBase<char *>(void);
// public: hkArrayBase<struct hkVariant>::hkArrayBase<struct hkVariant>(void);
// public: void hkArrayBase<struct hkVariant>::_pushBack(class hkMemoryAllocator &, struct hkVariant const &);
// public: hkArray<struct hkVariant, struct hkContainerHeapAllocator>::~hkArray<struct hkVariant, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkVariant>::~hkArrayBase<struct hkVariant>(void);
// public: hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>::hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>(void);
// public: hkArray<struct hkSerializeMultiMap<void const *, int>::Value, struct hkContainerHeapAllocator>::~hkArray<struct hkSerializeMultiMap<void const *, int>::Value, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>::~hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>(void);
// public: int hkSerializeMultiMap<void const *, int>::insert(void const *, int const &);
// public: void hkArray<struct hkPackfileWriter::PendingWrite, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<char *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkVariant, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkSerializeMultiMap<void const *, int>::Value, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<struct hkPackfileWriter::PendingWrite>::getCapacity(void) const;
// public: void hkArrayBase<struct hkPackfileWriter::PendingWrite>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<struct hkPackfileWriter::PendingWrite>(struct hkPackfileWriter::PendingWrite *, int, struct hkPackfileWriter::PendingWrite const &, struct hkTraitBool<0>);
// public: int hkArrayBase<char *>::getCapacity(void) const;
// public: void hkArrayBase<char *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<char *>(char **, int, char *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<struct hkVariant>::getCapacity(void) const;
// public: void hkArrayBase<struct hkVariant>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<struct hkVariant>(struct hkVariant *, int, struct hkVariant const &, struct hkTraitBool<1>);
// public: void hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>::_clearAndDeallocate(class hkMemoryAllocator &);
// protected: int hkSerializeMultiMap<void const *, int>::getFreeIndex(void);
// public: struct hkSerializeMultiMap<void const *, int>::Value & hkArray<struct hkSerializeMultiMap<void const *, int>::Value, struct hkContainerHeapAllocator>::expandOne(void);
// public: void hkArrayBase<struct hkPackfileWriter::PendingWrite>::clear(void);
// public: void hkArrayBase<char *>::clear(void);
// public: void hkArrayBase<struct hkVariant>::clear(void);
// public: int hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>::getSize(void) const;
// public: int hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>::getCapacity(void) const;
// public: void hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>::clear(void);
// public: struct hkSerializeMultiMap<void const *, int>::Value & hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>::_expandOne(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkPackfileWriter::PendingWrite>(struct hkPackfileWriter::PendingWrite *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::destruct<char *>(char **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<struct hkVariant>(struct hkVariant *, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<struct hkSerializeMultiMap<void const *, int>::Value>(struct hkSerializeMultiMap<void const *, int>::Value *, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::construct<struct hkSerializeMultiMap<void const *, int>::Value>(struct hkSerializeMultiMap<void const *, int>::Value *, int, struct hkTraitBool<1>);

//public: hkPackfileWriter::hkPackfileWriter(void)
//{
//    mangled_ppc("??0hkPackfileWriter@@QAA@XZ");
//};

//public: virtual hkPackfileWriter::~hkPackfileWriter(void)
//{
//    mangled_ppc("??1hkPackfileWriter@@UAA@XZ");
//};

//public: virtual void hkPackfileWriter::setContentsWithRegistry(void const *, class hkClass const &, class hkVtableClassRegistry const *, class hkPackfileWriter::AddObjectListener *)
//{
//    mangled_ppc("?setContentsWithRegistry@hkPackfileWriter@@UAAXPBXABVhkClass@@PBVhkVtableClassRegistry@@PAVAddObjectListener@1@@Z");
//};

//public: virtual void hkPackfileWriter::setContents(void const *, class hkClass const &, class hkPackfileWriter::AddObjectListener *)
//{
//    mangled_ppc("?setContents@hkPackfileWriter@@UAAXPBXABVhkClass@@PAVAddObjectListener@1@@Z");
//};

//public: virtual void hkPackfileWriter::addImport(void const *, char const *)
//{
//    mangled_ppc("?addImport@hkPackfileWriter@@UAAXPBXPBD@Z");
//};

//public: virtual void hkPackfileWriter::addExport(void const *, char const *)
//{
//    mangled_ppc("?addExport@hkPackfileWriter@@UAAXPBXPBD@Z");
//};

//protected: unsigned int hkPackfileWriter::sectionTagToIndex(char const *)
//{
//    mangled_ppc("?sectionTagToIndex@hkPackfileWriter@@IAAIPBD@Z");
//};

//protected: unsigned int hkPackfileWriter::findSectionFor(void const *, class hkClass const &, char const *)
//{
//    mangled_ppc("?findSectionFor@hkPackfileWriter@@IAAIPBXABVhkClass@@PBD@Z");
//};

//protected: void hkPackfileWriter::addPendingWrite(void const *, class hkClass const &, void const *, class hkClass const &, char const *)
//{
//    mangled_ppc("?addPendingWrite@hkPackfileWriter@@IAAXPBXABVhkClass@@01PBD@Z");
//};

//protected: int hkPackfileWriter::notDuplicateMetaData(void const *, class hkClass const *)
//{
//    mangled_ppc("?notDuplicateMetaData@hkPackfileWriter@@IAAHPBXPBVhkClass@@@Z");
//};

//protected: void hkPackfileWriter::addObject(void const *, class hkClass const &, class hkVtableClassRegistry const *, class hkPackfileWriter::AddObjectListener *, char const *)
//{
//    mangled_ppc("?addObject@hkPackfileWriter@@IAAXPBXABVhkClass@@PBVhkVtableClassRegistry@@PAVAddObjectListener@1@PBD@Z");
//};

//class hkClass const * getExactClass(void const *, class hkClass const &, class hkVtableClassRegistry const *)
//{
//    mangled_ppc("?getExactClass@@YAPBVhkClass@@PBXABV1@PBVhkVtableClassRegistry@@@Z");
//};

//void chasePointers(void const *, class hkClass const &, class hkRelocationInfo &)
//{
//    mangled_ppc("?chasePointers@@YAXPBXABVhkClass@@AAVhkRelocationInfo@@@Z");
//};

//public: virtual void hkPackfileWriter::addSection(char const *)
//{
//    mangled_ppc("?addSection@hkPackfileWriter@@UAAXPBD@Z");
//};

//public: virtual void hkPackfileWriter::setSectionForPointer(void const *, char const *)
//{
//    mangled_ppc("?setSectionForPointer@hkPackfileWriter@@UAAXPBXPBD@Z");
//};

//public: virtual void hkPackfileWriter::setSectionForClass(class hkClass const &, char const *)
//{
//    mangled_ppc("?setSectionForClass@hkPackfileWriter@@UAAXABVhkClass@@PBD@Z");
//};

//public: static void hkPackfileWriter::getCurrentVersion(char *, int)
//{
//    mangled_ppc("?getCurrentVersion@hkPackfileWriter@@SAXPADH@Z");
//};

//merged_846F5020
//{
//    mangled_ppc("merged_846F5020");
//};

//public: hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::~hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PBXPBDUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkStringMap<class hkClassEnum const *>::~hkStringMap<class hkClassEnum const *>(void)
//{
//    mangled_ppc("??1?$hkStringMap@PBVhkClassEnum@@@@QAA@XZ");
//};

//public: hkPointerMap<void const *, void const *, struct hkContainerHeapAllocator>::~hkPointerMap<void const *, void const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PBXPBXUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkPointerMap<void const *, unsigned int, struct hkContainerHeapAllocator>::~hkPointerMap<void const *, unsigned int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PBXIUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkStringMap<unsigned int>::~hkStringMap<unsigned int>(void)
//{
//    mangled_ppc("??1?$hkStringMap@I@@QAA@XZ");
//};

//public: hkSerializeMultiMap<void const *, int>::~hkSerializeMultiMap<void const *, int>(void)
//{
//    mangled_ppc("??1?$hkSerializeMultiMap@PBXH@@QAA@XZ");
//};

//public: virtual hkOffsetOnlyStreamWriter::~hkOffsetOnlyStreamWriter(void)
//{
//    mangled_ppc("??1hkOffsetOnlyStreamWriter@@UAA@XZ");
//};

//public: hkArray<struct hkPackfileWriter::PendingWrite, struct hkContainerHeapAllocator>::hkArray<struct hkPackfileWriter::PendingWrite, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UPendingWrite@hkPackfileWriter@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkPackfileWriter::PendingWrite, struct hkContainerHeapAllocator>::pushBack(struct hkPackfileWriter::PendingWrite const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UPendingWrite@hkPackfileWriter@@UhkContainerHeapAllocator@@@@QAAXABUPendingWrite@hkPackfileWriter@@@Z");
//};

//public: class hkBool hkPointerMap<void const *, int, struct hkContainerHeapAllocator>::hasKey(void const *) const
//{
//    mangled_ppc("?hasKey@?$hkPointerMap@PBXHUhkContainerHeapAllocator@@@@QBA?AVhkBool@@PBX@Z");
//};

//public: hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>::hkPointerMap<void const *, char const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PBXPBDUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkStringMap<class hkClassEnum const *>::hkStringMap<class hkClassEnum const *>(void)
//{
//    mangled_ppc("??0?$hkStringMap@PBVhkClassEnum@@@@QAA@XZ");
//};

//public: void hkStringMap<class hkClassEnum const *>::insert(char const *, class hkClassEnum const *)
//{
//    mangled_ppc("?insert@?$hkStringMap@PBVhkClassEnum@@@@QAAXPBDPBVhkClassEnum@@@Z");
//};

//public: class hkClassEnum const * hkStringMap<class hkClassEnum const *>::getWithDefault(char const *, class hkClassEnum const *) const
//{
//    mangled_ppc("?getWithDefault@?$hkStringMap@PBVhkClassEnum@@@@QBAPBVhkClassEnum@@PBDPBV2@@Z");
//};

//public: hkPointerMap<void const *, void const *, struct hkContainerHeapAllocator>::hkPointerMap<void const *, void const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PBXPBXUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<void const *, void const *, struct hkContainerHeapAllocator>::insert(void const *, void const *)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PBXPBXUhkContainerHeapAllocator@@@@QAAHPBX0@Z");
//};

//public: hkArray<char *, struct hkContainerHeapAllocator>::hkArray<char *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PADUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<char *, struct hkContainerHeapAllocator>::pushBack(char *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PADUhkContainerHeapAllocator@@@@QAAXABQAD@Z");
//};

//public: enum hkResult hkStringMap<int>::get(char const *, int *) const
//{
//    mangled_ppc("?get@?$hkStringMap@H@@QBA?AW4hkResult@@PBDPAH@Z");
//};

//public: hkArray<struct hkVariant, struct hkContainerHeapAllocator>::hkArray<struct hkVariant, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UhkVariant@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkVariant, struct hkContainerHeapAllocator>::pushBack(struct hkVariant const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UhkVariant@@UhkContainerHeapAllocator@@@@QAAXABUhkVariant@@@Z");
//};

//public: hkPointerMap<void const *, unsigned int, struct hkContainerHeapAllocator>::hkPointerMap<void const *, unsigned int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PBXIUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<void const *, unsigned int, struct hkContainerHeapAllocator>::insert(void const *, unsigned int)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PBXIUhkContainerHeapAllocator@@@@QAAHPBXI@Z");
//};

//public: class hkBool hkPointerMap<void const *, unsigned int, struct hkContainerHeapAllocator>::hasKey(void const *) const
//{
//    mangled_ppc("?hasKey@?$hkPointerMap@PBXIUhkContainerHeapAllocator@@@@QBA?AVhkBool@@PBX@Z");
//};

//public: unsigned int hkPointerMap<void const *, unsigned int, struct hkContainerHeapAllocator>::getWithDefault(void const *, unsigned int) const
//{
//    mangled_ppc("?getWithDefault@?$hkPointerMap@PBXIUhkContainerHeapAllocator@@@@QBAIPBXI@Z");
//};

//public: hkStringMap<unsigned int>::hkStringMap<unsigned int>(void)
//{
//    mangled_ppc("??0?$hkStringMap@I@@QAA@XZ");
//};

//public: void hkStringMap<unsigned int>::insert(char const *, unsigned int)
//{
//    mangled_ppc("?insert@?$hkStringMap@I@@QAAXPBDI@Z");
//};

//public: unsigned int hkStringMap<unsigned int>::getWithDefault(char const *, unsigned int) const
//{
//    mangled_ppc("?getWithDefault@?$hkStringMap@I@@QBAIPBDI@Z");
//};

//public: hkSerializeMultiMap<void const *, int>::hkSerializeMultiMap<void const *, int>(void)
//{
//    mangled_ppc("??0?$hkSerializeMultiMap@PBXH@@QAA@XZ");
//};

//public: hkArray<struct hkSerializeMultiMap<void const *, int>::Value, struct hkContainerHeapAllocator>::hkArray<struct hkSerializeMultiMap<void const *, int>::Value, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UValue@?$hkSerializeMultiMap@PBXH@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkPackfileWriter::PendingWrite>::hkArrayBase<struct hkPackfileWriter::PendingWrite>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UPendingWrite@hkPackfileWriter@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkPackfileWriter::PendingWrite>::_pushBack(class hkMemoryAllocator &, struct hkPackfileWriter::PendingWrite const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UPendingWrite@hkPackfileWriter@@@@QAAXAAVhkMemoryAllocator@@ABUPendingWrite@hkPackfileWriter@@@Z");
//};

//public: hkArray<struct hkPackfileWriter::PendingWrite, struct hkContainerHeapAllocator>::~hkArray<struct hkPackfileWriter::PendingWrite, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UPendingWrite@hkPackfileWriter@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkPackfileWriter::PendingWrite>::~hkArrayBase<struct hkPackfileWriter::PendingWrite>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UPendingWrite@hkPackfileWriter@@@@QAA@XZ");
//};

//public: hkArrayBase<char *>::hkArrayBase<char *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAD@@QAA@XZ");
//};

//public: void hkArrayBase<char *>::_pushBack(class hkMemoryAllocator &, char *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAD@@QAAXAAVhkMemoryAllocator@@ABQAD@Z");
//};

//public: hkArray<char *, struct hkContainerHeapAllocator>::~hkArray<char *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PADUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<char *>::~hkArrayBase<char *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAD@@QAA@XZ");
//};

//public: hkArrayBase<struct hkVariant>::hkArrayBase<struct hkVariant>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkVariant@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkVariant>::_pushBack(class hkMemoryAllocator &, struct hkVariant const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UhkVariant@@@@QAAXAAVhkMemoryAllocator@@ABUhkVariant@@@Z");
//};

//public: hkArray<struct hkVariant, struct hkContainerHeapAllocator>::~hkArray<struct hkVariant, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkVariant@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkVariant>::~hkArrayBase<struct hkVariant>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkVariant@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>::hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBXH@@@@QAA@XZ");
//};

//public: hkArray<struct hkSerializeMultiMap<void const *, int>::Value, struct hkContainerHeapAllocator>::~hkArray<struct hkSerializeMultiMap<void const *, int>::Value, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UValue@?$hkSerializeMultiMap@PBXH@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>::~hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBXH@@@@QAA@XZ");
//};

//public: int hkSerializeMultiMap<void const *, int>::insert(void const *, int const &)
//{
//    mangled_ppc("?insert@?$hkSerializeMultiMap@PBXH@@QAAHPBXABH@Z");
//};

//public: void hkArray<struct hkPackfileWriter::PendingWrite, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UPendingWrite@hkPackfileWriter@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<char *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PADUhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkVariant, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkVariant@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkSerializeMultiMap<void const *, int>::Value, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UValue@?$hkSerializeMultiMap@PBXH@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkPackfileWriter::PendingWrite>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UPendingWrite@hkPackfileWriter@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkPackfileWriter::PendingWrite>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UPendingWrite@hkPackfileWriter@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkPackfileWriter::PendingWrite>(struct hkPackfileWriter::PendingWrite *, int, struct hkPackfileWriter::PendingWrite const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UPendingWrite@hkPackfileWriter@@@hkArrayUtil@@SAXPAUPendingWrite@hkPackfileWriter@@HABU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<char *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAD@@QBAHXZ");
//};

//public: void hkArrayBase<char *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAD@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<char *>(char **, int, char *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAD@hkArrayUtil@@SAXPAPADHABQADU?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<struct hkVariant>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkVariant@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkVariant>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkVariant@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkVariant>(struct hkVariant *, int, struct hkVariant const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@UhkVariant@@@hkArrayUtil@@SAXPAUhkVariant@@HABU1@U?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBXH@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//protected: int hkSerializeMultiMap<void const *, int>::getFreeIndex(void)
//{
//    mangled_ppc("?getFreeIndex@?$hkSerializeMultiMap@PBXH@@IAAHXZ");
//};

//public: struct hkSerializeMultiMap<void const *, int>::Value & hkArray<struct hkSerializeMultiMap<void const *, int>::Value, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UValue@?$hkSerializeMultiMap@PBXH@@UhkContainerHeapAllocator@@@@QAAAAUValue@?$hkSerializeMultiMap@PBXH@@XZ");
//};

//public: void hkArrayBase<struct hkPackfileWriter::PendingWrite>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UPendingWrite@hkPackfileWriter@@@@QAAXXZ");
//};

//public: void hkArrayBase<char *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAD@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkVariant>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkVariant@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBXH@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBXH@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBXH@@@@QAAXXZ");
//};

//public: struct hkSerializeMultiMap<void const *, int>::Value & hkArrayBase<struct hkSerializeMultiMap<void const *, int>::Value>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBXH@@@@QAAAAUValue@?$hkSerializeMultiMap@PBXH@@AAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkPackfileWriter::PendingWrite>(struct hkPackfileWriter::PendingWrite *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UPendingWrite@hkPackfileWriter@@@hkArrayUtil@@SAXPAUPendingWrite@hkPackfileWriter@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::destruct<char *>(char **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAD@hkArrayUtil@@SAXPAPADHU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkVariant>(struct hkVariant *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@UhkVariant@@@hkArrayUtil@@SAXPAUhkVariant@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkSerializeMultiMap<void const *, int>::Value>(struct hkSerializeMultiMap<void const *, int>::Value *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@UValue@?$hkSerializeMultiMap@PBXH@@@hkArrayUtil@@SAXPAUValue@?$hkSerializeMultiMap@PBXH@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkSerializeMultiMap<void const *, int>::Value>(struct hkSerializeMultiMap<void const *, int>::Value *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@UValue@?$hkSerializeMultiMap@PBXH@@@hkArrayUtil@@SAXPAUValue@?$hkSerializeMultiMap@PBXH@@HU?$hkTraitBool@$00@@@Z");
//};

