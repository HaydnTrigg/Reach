/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkVersionPatchManager::`RTTI Complete Object Locator'; // "??_R4hkVersionPatchManager@@6B@"
// hkVersionPatchManager::`RTTI Class Hierarchy Descriptor'; // "??_R3hkVersionPatchManager@@8"
// hkVersionPatchManager::`RTTI Base Class Array'; // "??_R2hkVersionPatchManager@@8"
// hkVersionPatchManager::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkVersionPatchManager@@8"
// hkSingleton<class hkVersionPatchManager>::`RTTI Base Class Descriptor at (8, -1, 0, 64)'; // "??_R17?0A@EA@?$hkSingleton@VhkVersionPatchManager@@@@8"
// hkSingleton<class hkVersionPatchManager>::`RTTI Class Hierarchy Descriptor'; // "??_R3?$hkSingleton@VhkVersionPatchManager@@@@8"
// hkSingleton<class hkVersionPatchManager>::`RTTI Base Class Array'; // "??_R2?$hkSingleton@VhkVersionPatchManager@@@@8"
// hkSingleton<class hkVersionPatchManager>::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@?$hkSingleton@VhkVersionPatchManager@@@@8"
// class hkVersionPatchManager::`RTTI Type Descriptor'; // "??_R0?AVhkVersionPatchManager@@@8"
// class hkSingleton<class hkVersionPatchManager>::`RTTI Type Descriptor'; // "??_R0?AV?$hkSingleton@VhkVersionPatchManager@@@@@8"
// public: static class hkVersionPatchManager *hkSingleton<class hkVersionPatchManager>::s_instance; // "?s_instance@?$hkSingleton@VhkVersionPatchManager@@@@2PAVhkVersionPatchManager@@A"

// public: hkVersionPatchManager::UidFromClassVersion::~UidFromClassVersion(void);
// public: unsigned __int64 hkVersionPatchManager::UidFromClassVersion::get(char const *, int) const;
// public: char const * hkVersionPatchManager::UidFromClassVersion::getName(unsigned __int64) const;
// public: int hkVersionPatchManager::UidFromClassVersion::getVersion(unsigned __int64) const;
// private: char const * hkVersionPatchManager::UidFromClassVersion::cache(char const *) const;
// public: hkVersionPatchManager::hkVersionPatchManager(void);
// public: virtual hkVersionPatchManager::~hkVersionPatchManager(void);
// public: class hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator> const & hkVersionPatchManager::getPatches(void) const;
// public: unsigned __int64 hkVersionPatchManager::getUid(char const *, int) const;
// public: char const * hkVersionPatchManager::getClassName(unsigned __int64) const;
// public: int hkVersionPatchManager::getClassVersion(unsigned __int64) const;
// int isValidPatch(struct hkVersionPatchManager::PatchInfo const *);
// public: int hkVersionPatchManager::findLastPatchIndexForUid(unsigned __int64, int) const;
// public: enum hkResult hkVersionPatchManager::recomputePatchDependencies(void) const;
// int walkDependencies(int, class hkArray<int, struct hkContainerHeapAllocator> &, class hkSerializeMultiMap<int, int> const &, int, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator> const &);
// char const * reportPendingDependencies(class hkArray<int, struct hkContainerHeapAllocator> const &, class hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator> const &, class hkStringBuf &);
// int findPatchIndexInDependencies(int, int, class hkSerializeMultiMap<int, int> const &, class hkPointerMap<int, int, struct hkContainerHeapAllocator> &);
// private: enum hkResult hkVersionPatchManager::preparePatches(class hkDataWorldDict &, class hkClassNameRegistry const &, class hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator> &) const;
// void setAllDependeciesToDo(struct HeapArray<struct UidItem> &, char const *, int, class hkDataWorldDict const &, class hkVersionPatchManager const &, class hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator> const &, class hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator> const &);
// int equalOriginalClass(class hkDataClass const &, class hkDataClass const &, class hkStringMap<int> &);
// int getSerializableDeclaredMembersNum(class hkArrayBase<struct hkDataClass::MemberInfo> &);
// public: enum hkResult hkVersionPatchManager::applyPatches(class hkDataWorldDict &, class hkClassNameRegistry const *) const;
// public: enum hkResult hkVersionPatchManager::applyPatchesDebug(class hkDataWorldDict &) const;
// enum hkResult applyPatchesFinally(class hkDataWorldDict &, class hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator> const &);
// public: void hkVersionPatchManager::addPatch(struct hkVersionPatchManager::PatchInfo const *);
// class hkReferencedObject * hkVersionPatchManagercreate(void);
// public: static void * hkVersionPatchManager::UidFromClassVersion::operator new(unsigned int);
// merged_847401B0;
// public: hkVersionPatchManager::UidFromClassVersion::UidFromClassVersion(void);
// public: hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>::~hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>(void);
// public: void * hkVersionPatchManager::UidFromClassVersion::`scalar deleting destructor'(unsigned int);
// public: static void hkVersionPatchManager::UidFromClassVersion::operator delete(void *);
// public: hkSerializeMultiMap<unsigned __int64, int>::~hkSerializeMultiMap<unsigned __int64, int>(void);
// public: hkSerializeMultiMap<char const *, int>::~hkSerializeMultiMap<char const *, int>(void);
// public: hkSerializeMultiMap<int, int>::~hkSerializeMultiMap<int, int>(void);
// public: struct hkVersionPatchManager::PatchInfo const * hkVersionPatchManager::getPatch(int) const;
// public: HeapArray<struct UidItem>::HeapArray<struct UidItem>(void);
// public: HeapArray<struct UidItem>::~HeapArray<struct UidItem>(void);
// public: hkStringMap<class hkDataClassImpl *>::~hkStringMap<class hkDataClassImpl *>(void);
// protected: hkSingleton<class hkVersionPatchManager>::hkSingleton<class hkVersionPatchManager>(void);
// public: hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>::hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>::pushBack(struct hkVersionPatchManager::PatchInfo const *const &);
// public: void hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>::setSize(int);
// public: hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>::hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>::insert(unsigned __int64, int);
// public: class hkBool hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>::hasKey(unsigned __int64) const;
// public: int hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>::getSize(void) const;
// public: void hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>::clear(void);
// public: int hkStringMap<int>::getOrInsert(char const *, int);
// public: int hkStringMap<int>::getSize(void) const;
// public: void hkArray<int, struct hkContainerHeapAllocator>::setSize(int, int const &);
// public: hkSerializeMultiMap<int, int>::hkSerializeMultiMap<int, int>(void);
// public: int const & hkSerializeMultiMap<int, int>::getValue(int) const;
// public: int hkSerializeMultiMap<int, int>::getNextIndex(int) const;
// public: class hkBool hkPointerMap<int, int, struct hkContainerHeapAllocator>::hasKey(int) const;
// public: class Dummy * hkPointerMap<int, int, struct hkContainerHeapAllocator>::getIterator(void) const;
// public: int hkPointerMap<int, int, struct hkContainerHeapAllocator>::getKey(class Dummy *) const;
// public: class Dummy * hkPointerMap<int, int, struct hkContainerHeapAllocator>::getNext(class Dummy *) const;
// public: class hkBool hkPointerMap<int, int, struct hkContainerHeapAllocator>::isValid(class Dummy *) const;
// public: hkSerializeMultiMap<unsigned __int64, int>::hkSerializeMultiMap<unsigned __int64, int>(void);
// public: int const & hkSerializeMultiMap<unsigned __int64, int>::getValue(int) const;
// public: int hkSerializeMultiMap<unsigned __int64, int>::getNextIndex(int) const;
// public: hkSerializeMultiMap<char const *, int>::hkSerializeMultiMap<char const *, int>(void);
// public: int const & hkSerializeMultiMap<char const *, int>::getValue(int) const;
// public: int hkSerializeMultiMap<char const *, int>::getNextIndex(int) const;
// public: void HeapArray<struct UidItem>::insert(struct UidItem const &);
// public: bool UidItem::operator<(struct UidItem) const;
// public: struct UidItem const & HeapArray<struct UidItem>::top(void) const;
// public: int HeapArray<struct UidItem>::getSize(void) const;
// public: void HeapArray<struct UidItem>::popTop(void);
// public: bool HeapArray<struct UidItem>::hasElement(struct UidItem const &);
// public: bool UidItem::operator==(struct UidItem) const;
// public: hkArray<struct UidItem, struct hkContainerHeapAllocator>::hkArray<struct UidItem, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct `anonymous namespace'::ClassVersion, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::ClassVersion, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct `anonymous namespace'::ClassVersion, struct hkContainerHeapAllocator>::reserveExactly(int);
// public: hkStringMap<class hkDataClassImpl *>::hkStringMap<class hkDataClassImpl *>(void);
// public: void hkStringMap<class hkDataClassImpl *>::insert(char const *, class hkDataClassImpl *);
// public: class hkDataClassImpl * hkStringMap<class hkDataClassImpl *>::getWithDefault(char const *, class hkDataClassImpl *) const;
// public: enum hkResult hkStringMap<class hkDataClassImpl *>::remove(char const *);
// public: class Dummy * hkStringMap<class hkDataClassImpl *>::getIterator(void) const;
// public: class hkDataClassImpl * hkStringMap<class hkDataClassImpl *>::getValue(class Dummy *) const;
// public: class Dummy * hkStringMap<class hkDataClassImpl *>::getNext(class Dummy *) const;
// public: class hkBool hkStringMap<class hkDataClassImpl *>::isValid(class Dummy *) const;
// public: hkArray<struct hkSerializeMultiMap<int, int>::Value, struct hkContainerHeapAllocator>::hkArray<struct hkSerializeMultiMap<int, int>::Value, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkSerializeMultiMap<unsigned __int64, int>::Value, struct hkContainerHeapAllocator>::hkArray<struct hkSerializeMultiMap<unsigned __int64, int>::Value, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkSerializeMultiMap<char const *, int>::Value, struct hkContainerHeapAllocator>::hkArray<struct hkSerializeMultiMap<char const *, int>::Value, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct UidItem, struct hkContainerHeapAllocator>::pushBack(struct UidItem const &);
// public: void hkArray<struct UidItem, struct hkContainerHeapAllocator>::insertAt(int, struct UidItem const &);
// public: hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>(void);
// public: struct hkVersionPatchManager::PatchInfo const *const & hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::operator[](int) const;
// public: struct hkVersionPatchManager::PatchInfo const *& hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::operator[](int);
// public: int hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::getSize(void) const;
// public: void hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::clear(void);
// public: void hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::_pushBack(class hkMemoryAllocator &, struct hkVersionPatchManager::PatchInfo const *const &);
// public: void hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::_setSize(class hkMemoryAllocator &, int);
// public: hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>::~hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::~hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>(void);
// public: void hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator> &);
// public: hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>(void);
// public: struct hkSerializeMultiMap<int, int>::Value const & hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::operator[](int) const;
// public: hkArray<struct hkSerializeMultiMap<int, int>::Value, struct hkContainerHeapAllocator>::~hkArray<struct hkSerializeMultiMap<int, int>::Value, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::~hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>(void);
// public: int hkSerializeMultiMap<int, int>::getFirstIndex(int) const;
// public: int hkSerializeMultiMap<int, int>::insert(int, int const &);
// public: hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>(void);
// public: struct hkSerializeMultiMap<unsigned __int64, int>::Value const & hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::operator[](int) const;
// public: hkArray<struct hkSerializeMultiMap<unsigned __int64, int>::Value, struct hkContainerHeapAllocator>::~hkArray<struct hkSerializeMultiMap<unsigned __int64, int>::Value, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::~hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>(void);
// public: int hkSerializeMultiMap<unsigned __int64, int>::getFirstIndex(unsigned __int64) const;
// public: int hkSerializeMultiMap<unsigned __int64, int>::insert(unsigned __int64, int const &);
// public: hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>(void);
// public: struct hkSerializeMultiMap<char const *, int>::Value const & hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::operator[](int) const;
// public: hkArray<struct hkSerializeMultiMap<char const *, int>::Value, struct hkContainerHeapAllocator>::~hkArray<struct hkSerializeMultiMap<char const *, int>::Value, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::~hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>(void);
// public: int hkSerializeMultiMap<char const *, int>::getFirstIndex(char const *) const;
// public: int hkSerializeMultiMap<char const *, int>::insert(char const *, int const &);
// public: hkArrayBase<struct UidItem>::hkArrayBase<struct UidItem>(void);
// public: struct UidItem const & hkArrayBase<struct UidItem>::operator[](int) const;
// public: struct UidItem & hkArrayBase<struct UidItem>::operator[](int);
// public: int hkArrayBase<struct UidItem>::getSize(void) const;
// public: void hkArrayBase<struct UidItem>::removeAtAndCopy(int);
// public: void hkArrayBase<struct UidItem>::_pushBack(class hkMemoryAllocator &, struct UidItem const &);
// public: void hkArrayBase<struct UidItem>::_insertAt(class hkMemoryAllocator &, int, struct UidItem const &);
// public: hkArray<struct UidItem, struct hkContainerHeapAllocator>::~hkArray<struct UidItem, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct UidItem>::~hkArrayBase<struct UidItem>(void);
// public: hkArrayBase<struct `anonymous namespace'::ClassVersion>::hkArrayBase<struct `anonymous namespace'::ClassVersion>(void);
// public: struct `anonymous namespace'::ClassVersion & hkArrayBase<struct `anonymous namespace'::ClassVersion>::operator[](int);
// public: int hkArrayBase<struct `anonymous namespace'::ClassVersion>::getSize(void) const;
// public: int hkArrayBase<struct `anonymous namespace'::ClassVersion>::indexOf(struct `anonymous namespace'::ClassVersion const &, int, int) const;
// public: int `anonymous namespace'::ClassVersion::operator==(struct `anonymous namespace'::ClassVersion const &);
// public: void hkArrayBase<struct `anonymous namespace'::ClassVersion>::pushBackUnchecked(struct `anonymous namespace'::ClassVersion const &);
// public: void hkArrayBase<struct `anonymous namespace'::ClassVersion>::_reserveExactly(class hkMemoryAllocator &, int);
// public: hkArray<struct `anonymous namespace'::ClassVersion, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::ClassVersion, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct `anonymous namespace'::ClassVersion>::~hkArrayBase<struct `anonymous namespace'::ClassVersion>(void);
// public: void hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkSerializeMultiMap<int, int>::Value, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkSerializeMultiMap<unsigned __int64, int>::Value, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkSerializeMultiMap<char const *, int>::Value, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::getWithDefault(char const *, int) const;
// public: void hkArray<struct UidItem, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct `anonymous namespace'::ClassVersion, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct hkVersionPatchManager::PatchInfo const *>(struct hkVersionPatchManager::PatchInfo const **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkVersionPatchManager::PatchInfo const *>(struct hkVersionPatchManager::PatchInfo const **, int, struct hkVersionPatchManager::PatchInfo const *const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::construct<struct hkVersionPatchManager::PatchInfo const *>(struct hkVersionPatchManager::PatchInfo const **, int, struct hkTraitBool<1>);
// public: struct hkSerializeMultiMap<int, int>::Value & hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::operator[](int);
// public: void hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::_clearAndDeallocate(class hkMemoryAllocator &);
// protected: int hkSerializeMultiMap<int, int>::getFreeIndex(void);
// public: struct hkSerializeMultiMap<unsigned __int64, int>::Value & hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::operator[](int);
// public: void hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::_clearAndDeallocate(class hkMemoryAllocator &);
// protected: int hkSerializeMultiMap<unsigned __int64, int>::getFreeIndex(void);
// public: struct hkSerializeMultiMap<char const *, int>::Value & hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::operator[](int);
// public: void hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::_clearAndDeallocate(class hkMemoryAllocator &);
// protected: int hkSerializeMultiMap<char const *, int>::getFreeIndex(void);
// public: int hkArrayBase<struct UidItem>::getCapacity(void) const;
// public: void hkArrayBase<struct UidItem>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct UidItem>::_insertAt(class hkMemoryAllocator &, int, struct UidItem const *, int);
// public: static void hkArrayUtil::destruct<struct UidItem>(struct UidItem *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::constructWithCopy<struct UidItem>(struct UidItem *, int, struct UidItem const &, struct hkTraitBool<0>);
// public: int hkArrayBase<struct `anonymous namespace'::ClassVersion>::getCapacity(void) const;
// public: void hkArrayBase<struct `anonymous namespace'::ClassVersion>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<struct `anonymous namespace'::ClassVersion>(struct `anonymous namespace'::ClassVersion *, int, struct `anonymous namespace'::ClassVersion const &, struct hkTraitBool<0>);
// public: struct hkSerializeMultiMap<int, int>::Value & hkArray<struct hkSerializeMultiMap<int, int>::Value, struct hkContainerHeapAllocator>::expandOne(void);
// public: struct hkSerializeMultiMap<unsigned __int64, int>::Value & hkArray<struct hkSerializeMultiMap<unsigned __int64, int>::Value, struct hkContainerHeapAllocator>::expandOne(void);
// public: struct hkSerializeMultiMap<char const *, int>::Value & hkArray<struct hkSerializeMultiMap<char const *, int>::Value, struct hkContainerHeapAllocator>::expandOne(void);
// public: int hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::getSize(void) const;
// public: int hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::getCapacity(void) const;
// public: void hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::clear(void);
// public: struct hkSerializeMultiMap<int, int>::Value & hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::_expandOne(class hkMemoryAllocator &);
// public: int hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::getSize(void) const;
// public: int hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::getCapacity(void) const;
// public: void hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::clear(void);
// public: struct hkSerializeMultiMap<unsigned __int64, int>::Value & hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::_expandOne(class hkMemoryAllocator &);
// public: int hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::getSize(void) const;
// public: int hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::getCapacity(void) const;
// public: void hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::clear(void);
// public: struct hkSerializeMultiMap<char const *, int>::Value & hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::_expandOne(class hkMemoryAllocator &);
// public: void hkArrayBase<struct UidItem>::clear(void);
// public: void hkArrayBase<struct UidItem>::_spliceInto(class hkMemoryAllocator &, int, int, struct UidItem const *, int);
// public: void hkArrayBase<struct `anonymous namespace'::ClassVersion>::clear(void);
// public: static void hkArrayUtil::destruct<struct hkSerializeMultiMap<int, int>::Value>(struct hkSerializeMultiMap<int, int>::Value *, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::construct<struct hkSerializeMultiMap<int, int>::Value>(struct hkSerializeMultiMap<int, int>::Value *, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<struct hkSerializeMultiMap<unsigned __int64, int>::Value>(struct hkSerializeMultiMap<unsigned __int64, int>::Value *, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::construct<struct hkSerializeMultiMap<unsigned __int64, int>::Value>(struct hkSerializeMultiMap<unsigned __int64, int>::Value *, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<struct hkSerializeMultiMap<char const *, int>::Value>(struct hkSerializeMultiMap<char const *, int>::Value *, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::construct<struct hkSerializeMultiMap<char const *, int>::Value>(struct hkSerializeMultiMap<char const *, int>::Value *, int, struct hkTraitBool<1>);
// public: void hkArrayBase<struct UidItem>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::constructWithArray<struct UidItem>(struct UidItem *, int, struct UidItem const *, struct hkTraitBool<0>);
// public: static void hkArrayUtil::destruct<struct `anonymous namespace'::ClassVersion>(struct `anonymous namespace'::ClassVersion *, int, struct hkTraitBool<0>);

//public: hkVersionPatchManager::UidFromClassVersion::~UidFromClassVersion(void)
//{
//    mangled_ppc("??1UidFromClassVersion@hkVersionPatchManager@@QAA@XZ");
//};

//public: unsigned __int64 hkVersionPatchManager::UidFromClassVersion::get(char const *, int) const
//{
//    mangled_ppc("?get@UidFromClassVersion@hkVersionPatchManager@@QBA_KPBDH@Z");
//};

//public: char const * hkVersionPatchManager::UidFromClassVersion::getName(unsigned __int64) const
//{
//    mangled_ppc("?getName@UidFromClassVersion@hkVersionPatchManager@@QBAPBD_K@Z");
//};

//public: int hkVersionPatchManager::UidFromClassVersion::getVersion(unsigned __int64) const
//{
//    mangled_ppc("?getVersion@UidFromClassVersion@hkVersionPatchManager@@QBAH_K@Z");
//};

//private: char const * hkVersionPatchManager::UidFromClassVersion::cache(char const *) const
//{
//    mangled_ppc("?cache@UidFromClassVersion@hkVersionPatchManager@@ABAPBDPBD@Z");
//};

//public: hkVersionPatchManager::hkVersionPatchManager(void)
//{
//    mangled_ppc("??0hkVersionPatchManager@@QAA@XZ");
//};

//public: virtual hkVersionPatchManager::~hkVersionPatchManager(void)
//{
//    mangled_ppc("??1hkVersionPatchManager@@UAA@XZ");
//};

//public: class hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator> const & hkVersionPatchManager::getPatches(void) const
//{
//    mangled_ppc("?getPatches@hkVersionPatchManager@@QBAABV?$hkArray@PBUPatchInfo@hkVersionPatchManager@@UhkContainerHeapAllocator@@@@XZ");
//};

//public: unsigned __int64 hkVersionPatchManager::getUid(char const *, int) const
//{
//    mangled_ppc("?getUid@hkVersionPatchManager@@QBA_KPBDH@Z");
//};

//public: char const * hkVersionPatchManager::getClassName(unsigned __int64) const
//{
//    mangled_ppc("?getClassName@hkVersionPatchManager@@QBAPBD_K@Z");
//};

//public: int hkVersionPatchManager::getClassVersion(unsigned __int64) const
//{
//    mangled_ppc("?getClassVersion@hkVersionPatchManager@@QBAH_K@Z");
//};

//int isValidPatch(struct hkVersionPatchManager::PatchInfo const *)
//{
//    mangled_ppc("?isValidPatch@@YAHPBUPatchInfo@hkVersionPatchManager@@@Z");
//};

//public: int hkVersionPatchManager::findLastPatchIndexForUid(unsigned __int64, int) const
//{
//    mangled_ppc("?findLastPatchIndexForUid@hkVersionPatchManager@@QBAH_KH@Z");
//};

//public: enum hkResult hkVersionPatchManager::recomputePatchDependencies(void) const
//{
//    mangled_ppc("?recomputePatchDependencies@hkVersionPatchManager@@QBA?AW4hkResult@@XZ");
//};

//int walkDependencies(int, class hkArray<int, struct hkContainerHeapAllocator> &, class hkSerializeMultiMap<int, int> const &, int, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?walkDependencies@@YAHHAAV?$hkArray@HUhkContainerHeapAllocator@@@@ABV?$hkSerializeMultiMap@HH@@H0ABV?$hkArray@PBUPatchInfo@hkVersionPatchManager@@UhkContainerHeapAllocator@@@@@Z");
//};

//char const * reportPendingDependencies(class hkArray<int, struct hkContainerHeapAllocator> const &, class hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator> const &, class hkStringBuf &)
//{
//    mangled_ppc("?reportPendingDependencies@@YAPBDABV?$hkArray@HUhkContainerHeapAllocator@@@@ABV?$hkArray@PBUPatchInfo@hkVersionPatchManager@@UhkContainerHeapAllocator@@@@AAVhkStringBuf@@@Z");
//};

//int findPatchIndexInDependencies(int, int, class hkSerializeMultiMap<int, int> const &, class hkPointerMap<int, int, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?findPatchIndexInDependencies@@YAHHHABV?$hkSerializeMultiMap@HH@@AAV?$hkPointerMap@HHUhkContainerHeapAllocator@@@@@Z");
//};

//private: enum hkResult hkVersionPatchManager::preparePatches(class hkDataWorldDict &, class hkClassNameRegistry const &, class hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?preparePatches@hkVersionPatchManager@@ABA?AW4hkResult@@AAVhkDataWorldDict@@ABVhkClassNameRegistry@@AAV?$hkArray@PBUPatchInfo@hkVersionPatchManager@@UhkContainerHeapAllocator@@@@@Z");
//};

//void setAllDependeciesToDo(struct HeapArray<struct UidItem> &, char const *, int, class hkDataWorldDict const &, class hkVersionPatchManager const &, class hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator> const &, class hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?setAllDependeciesToDo@@YAXAAU?$HeapArray@UUidItem@@@@PBDHABVhkDataWorldDict@@ABVhkVersionPatchManager@@ABV?$hkPointerMap@_KHUhkContainerHeapAllocator@@@@4@Z");
//};

//int equalOriginalClass(class hkDataClass const &, class hkDataClass const &, class hkStringMap<int> &)
//{
//    mangled_ppc("?equalOriginalClass@@YAHABVhkDataClass@@0AAV?$hkStringMap@H@@@Z");
//};

//int getSerializableDeclaredMembersNum(class hkArrayBase<struct hkDataClass::MemberInfo> &)
//{
//    mangled_ppc("?getSerializableDeclaredMembersNum@@YAHAAV?$hkArrayBase@UMemberInfo@hkDataClass@@@@@Z");
//};

//public: enum hkResult hkVersionPatchManager::applyPatches(class hkDataWorldDict &, class hkClassNameRegistry const *) const
//{
//    mangled_ppc("?applyPatches@hkVersionPatchManager@@QBA?AW4hkResult@@AAVhkDataWorldDict@@PBVhkClassNameRegistry@@@Z");
//};

//public: enum hkResult hkVersionPatchManager::applyPatchesDebug(class hkDataWorldDict &) const
//{
//    mangled_ppc("?applyPatchesDebug@hkVersionPatchManager@@QBA?AW4hkResult@@AAVhkDataWorldDict@@@Z");
//};

//enum hkResult applyPatchesFinally(class hkDataWorldDict &, class hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?applyPatchesFinally@@YA?AW4hkResult@@AAVhkDataWorldDict@@ABV?$hkArray@PBUPatchInfo@hkVersionPatchManager@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkVersionPatchManager::addPatch(struct hkVersionPatchManager::PatchInfo const *)
//{
//    mangled_ppc("?addPatch@hkVersionPatchManager@@QAAXPBUPatchInfo@1@@Z");
//};

//class hkReferencedObject * hkVersionPatchManagercreate(void)
//{
//    mangled_ppc("?hkVersionPatchManagercreate@@YAPAVhkReferencedObject@@XZ");
//};

//public: static void * hkVersionPatchManager::UidFromClassVersion::operator new(unsigned int)
//{
//    mangled_ppc("??2UidFromClassVersion@hkVersionPatchManager@@SAPAXI@Z");
//};

//merged_847401B0
//{
//    mangled_ppc("merged_847401B0");
//};

//public: hkVersionPatchManager::UidFromClassVersion::UidFromClassVersion(void)
//{
//    mangled_ppc("??0UidFromClassVersion@hkVersionPatchManager@@QAA@XZ");
//};

//public: hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>::~hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@_KHUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void * hkVersionPatchManager::UidFromClassVersion::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GUidFromClassVersion@hkVersionPatchManager@@QAAPAXI@Z");
//};

//public: static void hkVersionPatchManager::UidFromClassVersion::operator delete(void *)
//{
//    mangled_ppc("??3UidFromClassVersion@hkVersionPatchManager@@SAXPAX@Z");
//};

//public: hkSerializeMultiMap<unsigned __int64, int>::~hkSerializeMultiMap<unsigned __int64, int>(void)
//{
//    mangled_ppc("??1?$hkSerializeMultiMap@_KH@@QAA@XZ");
//};

//public: hkSerializeMultiMap<char const *, int>::~hkSerializeMultiMap<char const *, int>(void)
//{
//    mangled_ppc("??1?$hkSerializeMultiMap@PBDH@@QAA@XZ");
//};

//public: hkSerializeMultiMap<int, int>::~hkSerializeMultiMap<int, int>(void)
//{
//    mangled_ppc("??1?$hkSerializeMultiMap@HH@@QAA@XZ");
//};

//public: struct hkVersionPatchManager::PatchInfo const * hkVersionPatchManager::getPatch(int) const
//{
//    mangled_ppc("?getPatch@hkVersionPatchManager@@QBAPBUPatchInfo@1@H@Z");
//};

//public: HeapArray<struct UidItem>::HeapArray<struct UidItem>(void)
//{
//    mangled_ppc("??0?$HeapArray@UUidItem@@@@QAA@XZ");
//};

//public: HeapArray<struct UidItem>::~HeapArray<struct UidItem>(void)
//{
//    mangled_ppc("??1?$HeapArray@UUidItem@@@@QAA@XZ");
//};

//public: hkStringMap<class hkDataClassImpl *>::~hkStringMap<class hkDataClassImpl *>(void)
//{
//    mangled_ppc("??1?$hkStringMap@PAVhkDataClassImpl@@@@QAA@XZ");
//};

//protected: hkSingleton<class hkVersionPatchManager>::hkSingleton<class hkVersionPatchManager>(void)
//{
//    mangled_ppc("??0?$hkSingleton@VhkVersionPatchManager@@@@IAA@XZ");
//};

//public: hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>::hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PBUPatchInfo@hkVersionPatchManager@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>::pushBack(struct hkVersionPatchManager::PatchInfo const *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PBUPatchInfo@hkVersionPatchManager@@UhkContainerHeapAllocator@@@@QAAXABQBUPatchInfo@hkVersionPatchManager@@@Z");
//};

//public: void hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@PBUPatchInfo@hkVersionPatchManager@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>::hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@_KHUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>::insert(unsigned __int64, int)
//{
//    mangled_ppc("?insert@?$hkPointerMap@_KHUhkContainerHeapAllocator@@@@QAAH_KH@Z");
//};

//public: class hkBool hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>::hasKey(unsigned __int64) const
//{
//    mangled_ppc("?hasKey@?$hkPointerMap@_KHUhkContainerHeapAllocator@@@@QBA?AVhkBool@@_K@Z");
//};

//public: int hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkPointerMap@_KHUhkContainerHeapAllocator@@@@QBAHXZ");
//};

//public: void hkPointerMap<unsigned __int64, int, struct hkContainerHeapAllocator>::clear(void)
//{
//    mangled_ppc("?clear@?$hkPointerMap@_KHUhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkStringMap<int>::getOrInsert(char const *, int)
//{
//    mangled_ppc("?getOrInsert@?$hkStringMap@H@@QAAHPBDH@Z");
//};

//public: int hkStringMap<int>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkStringMap@H@@QBAHXZ");
//};

//public: void hkArray<int, struct hkContainerHeapAllocator>::setSize(int, int const &)
//{
//    mangled_ppc("?setSize@?$hkArray@HUhkContainerHeapAllocator@@@@QAAXHABH@Z");
//};

//public: hkSerializeMultiMap<int, int>::hkSerializeMultiMap<int, int>(void)
//{
//    mangled_ppc("??0?$hkSerializeMultiMap@HH@@QAA@XZ");
//};

//public: int const & hkSerializeMultiMap<int, int>::getValue(int) const
//{
//    mangled_ppc("?getValue@?$hkSerializeMultiMap@HH@@QBAABHH@Z");
//};

//public: int hkSerializeMultiMap<int, int>::getNextIndex(int) const
//{
//    mangled_ppc("?getNextIndex@?$hkSerializeMultiMap@HH@@QBAHH@Z");
//};

//public: class hkBool hkPointerMap<int, int, struct hkContainerHeapAllocator>::hasKey(int) const
//{
//    mangled_ppc("?hasKey@?$hkPointerMap@HHUhkContainerHeapAllocator@@@@QBA?AVhkBool@@H@Z");
//};

//public: class Dummy * hkPointerMap<int, int, struct hkContainerHeapAllocator>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkPointerMap@HHUhkContainerHeapAllocator@@@@QBAPAVDummy@@XZ");
//};

//public: int hkPointerMap<int, int, struct hkContainerHeapAllocator>::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkPointerMap@HHUhkContainerHeapAllocator@@@@QBAHPAVDummy@@@Z");
//};

//public: class Dummy * hkPointerMap<int, int, struct hkContainerHeapAllocator>::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkPointerMap@HHUhkContainerHeapAllocator@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkPointerMap<int, int, struct hkContainerHeapAllocator>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkPointerMap@HHUhkContainerHeapAllocator@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: hkSerializeMultiMap<unsigned __int64, int>::hkSerializeMultiMap<unsigned __int64, int>(void)
//{
//    mangled_ppc("??0?$hkSerializeMultiMap@_KH@@QAA@XZ");
//};

//public: int const & hkSerializeMultiMap<unsigned __int64, int>::getValue(int) const
//{
//    mangled_ppc("?getValue@?$hkSerializeMultiMap@_KH@@QBAABHH@Z");
//};

//public: int hkSerializeMultiMap<unsigned __int64, int>::getNextIndex(int) const
//{
//    mangled_ppc("?getNextIndex@?$hkSerializeMultiMap@_KH@@QBAHH@Z");
//};

//public: hkSerializeMultiMap<char const *, int>::hkSerializeMultiMap<char const *, int>(void)
//{
//    mangled_ppc("??0?$hkSerializeMultiMap@PBDH@@QAA@XZ");
//};

//public: int const & hkSerializeMultiMap<char const *, int>::getValue(int) const
//{
//    mangled_ppc("?getValue@?$hkSerializeMultiMap@PBDH@@QBAABHH@Z");
//};

//public: int hkSerializeMultiMap<char const *, int>::getNextIndex(int) const
//{
//    mangled_ppc("?getNextIndex@?$hkSerializeMultiMap@PBDH@@QBAHH@Z");
//};

//public: void HeapArray<struct UidItem>::insert(struct UidItem const &)
//{
//    mangled_ppc("?insert@?$HeapArray@UUidItem@@@@QAAXABUUidItem@@@Z");
//};

//public: bool UidItem::operator<(struct UidItem) const
//{
//    mangled_ppc("??MUidItem@@QBA_NU0@@Z");
//};

//public: struct UidItem const & HeapArray<struct UidItem>::top(void) const
//{
//    mangled_ppc("?top@?$HeapArray@UUidItem@@@@QBAABUUidItem@@XZ");
//};

//public: int HeapArray<struct UidItem>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$HeapArray@UUidItem@@@@QBAHXZ");
//};

//public: void HeapArray<struct UidItem>::popTop(void)
//{
//    mangled_ppc("?popTop@?$HeapArray@UUidItem@@@@QAAXXZ");
//};

//public: bool HeapArray<struct UidItem>::hasElement(struct UidItem const &)
//{
//    mangled_ppc("?hasElement@?$HeapArray@UUidItem@@@@QAA_NABUUidItem@@@Z");
//};

//public: bool UidItem::operator==(struct UidItem) const
//{
//    mangled_ppc("??8UidItem@@QBA_NU0@@Z");
//};

//public: hkArray<struct UidItem, struct hkContainerHeapAllocator>::hkArray<struct UidItem, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UUidItem@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct `anonymous namespace'::ClassVersion, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::ClassVersion, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UClassVersion@?A0x3087113b@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct `anonymous namespace'::ClassVersion, struct hkContainerHeapAllocator>::reserveExactly(int)
//{
//    mangled_ppc("?reserveExactly@?$hkArray@UClassVersion@?A0x3087113b@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkStringMap<class hkDataClassImpl *>::hkStringMap<class hkDataClassImpl *>(void)
//{
//    mangled_ppc("??0?$hkStringMap@PAVhkDataClassImpl@@@@QAA@XZ");
//};

//public: void hkStringMap<class hkDataClassImpl *>::insert(char const *, class hkDataClassImpl *)
//{
//    mangled_ppc("?insert@?$hkStringMap@PAVhkDataClassImpl@@@@QAAXPBDPAVhkDataClassImpl@@@Z");
//};

//public: class hkDataClassImpl * hkStringMap<class hkDataClassImpl *>::getWithDefault(char const *, class hkDataClassImpl *) const
//{
//    mangled_ppc("?getWithDefault@?$hkStringMap@PAVhkDataClassImpl@@@@QBAPAVhkDataClassImpl@@PBDPAV2@@Z");
//};

//public: enum hkResult hkStringMap<class hkDataClassImpl *>::remove(char const *)
//{
//    mangled_ppc("?remove@?$hkStringMap@PAVhkDataClassImpl@@@@QAA?AW4hkResult@@PBD@Z");
//};

//public: class Dummy * hkStringMap<class hkDataClassImpl *>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkStringMap@PAVhkDataClassImpl@@@@QBAPAVDummy@@XZ");
//};

//public: class hkDataClassImpl * hkStringMap<class hkDataClassImpl *>::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkStringMap@PAVhkDataClassImpl@@@@QBAPAVhkDataClassImpl@@PAVDummy@@@Z");
//};

//public: class Dummy * hkStringMap<class hkDataClassImpl *>::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkStringMap@PAVhkDataClassImpl@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkStringMap<class hkDataClassImpl *>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkStringMap@PAVhkDataClassImpl@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: hkArray<struct hkSerializeMultiMap<int, int>::Value, struct hkContainerHeapAllocator>::hkArray<struct hkSerializeMultiMap<int, int>::Value, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UValue@?$hkSerializeMultiMap@HH@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkSerializeMultiMap<unsigned __int64, int>::Value, struct hkContainerHeapAllocator>::hkArray<struct hkSerializeMultiMap<unsigned __int64, int>::Value, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UValue@?$hkSerializeMultiMap@_KH@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkSerializeMultiMap<char const *, int>::Value, struct hkContainerHeapAllocator>::hkArray<struct hkSerializeMultiMap<char const *, int>::Value, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UValue@?$hkSerializeMultiMap@PBDH@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct UidItem, struct hkContainerHeapAllocator>::pushBack(struct UidItem const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UUidItem@@UhkContainerHeapAllocator@@@@QAAXABUUidItem@@@Z");
//};

//public: void hkArray<struct UidItem, struct hkContainerHeapAllocator>::insertAt(int, struct UidItem const &)
//{
//    mangled_ppc("?insertAt@?$hkArray@UUidItem@@UhkContainerHeapAllocator@@@@QAAXHABUUidItem@@@Z");
//};

//public: hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PBUPatchInfo@hkVersionPatchManager@@@@QAA@XZ");
//};

//public: struct hkVersionPatchManager::PatchInfo const *const & hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@PBUPatchInfo@hkVersionPatchManager@@@@QBAABQBUPatchInfo@hkVersionPatchManager@@H@Z");
//};

//public: struct hkVersionPatchManager::PatchInfo const *& hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PBUPatchInfo@hkVersionPatchManager@@@@QAAAAPBUPatchInfo@hkVersionPatchManager@@H@Z");
//};

//public: int hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PBUPatchInfo@hkVersionPatchManager@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PBUPatchInfo@hkVersionPatchManager@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::_pushBack(class hkMemoryAllocator &, struct hkVersionPatchManager::PatchInfo const *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PBUPatchInfo@hkVersionPatchManager@@@@QAAXAAVhkMemoryAllocator@@ABQBUPatchInfo@hkVersionPatchManager@@@Z");
//};

//public: void hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@PBUPatchInfo@hkVersionPatchManager@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>::~hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PBUPatchInfo@hkVersionPatchManager@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::~hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PBUPatchInfo@hkVersionPatchManager@@@@QAA@XZ");
//};

//public: void hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkArray@PBUPatchInfo@hkVersionPatchManager@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

//public: hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UValue@?$hkSerializeMultiMap@HH@@@@QAA@XZ");
//};

//public: struct hkSerializeMultiMap<int, int>::Value const & hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UValue@?$hkSerializeMultiMap@HH@@@@QBAABUValue@?$hkSerializeMultiMap@HH@@H@Z");
//};

//public: hkArray<struct hkSerializeMultiMap<int, int>::Value, struct hkContainerHeapAllocator>::~hkArray<struct hkSerializeMultiMap<int, int>::Value, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UValue@?$hkSerializeMultiMap@HH@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::~hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UValue@?$hkSerializeMultiMap@HH@@@@QAA@XZ");
//};

//public: int hkSerializeMultiMap<int, int>::getFirstIndex(int) const
//{
//    mangled_ppc("?getFirstIndex@?$hkSerializeMultiMap@HH@@QBAHH@Z");
//};

//public: int hkSerializeMultiMap<int, int>::insert(int, int const &)
//{
//    mangled_ppc("?insert@?$hkSerializeMultiMap@HH@@QAAHHABH@Z");
//};

//public: hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UValue@?$hkSerializeMultiMap@_KH@@@@QAA@XZ");
//};

//public: struct hkSerializeMultiMap<unsigned __int64, int>::Value const & hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UValue@?$hkSerializeMultiMap@_KH@@@@QBAABUValue@?$hkSerializeMultiMap@_KH@@H@Z");
//};

//public: hkArray<struct hkSerializeMultiMap<unsigned __int64, int>::Value, struct hkContainerHeapAllocator>::~hkArray<struct hkSerializeMultiMap<unsigned __int64, int>::Value, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UValue@?$hkSerializeMultiMap@_KH@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::~hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UValue@?$hkSerializeMultiMap@_KH@@@@QAA@XZ");
//};

//public: int hkSerializeMultiMap<unsigned __int64, int>::getFirstIndex(unsigned __int64) const
//{
//    mangled_ppc("?getFirstIndex@?$hkSerializeMultiMap@_KH@@QBAH_K@Z");
//};

//public: int hkSerializeMultiMap<unsigned __int64, int>::insert(unsigned __int64, int const &)
//{
//    mangled_ppc("?insert@?$hkSerializeMultiMap@_KH@@QAAH_KABH@Z");
//};

//public: hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBDH@@@@QAA@XZ");
//};

//public: struct hkSerializeMultiMap<char const *, int>::Value const & hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBDH@@@@QBAABUValue@?$hkSerializeMultiMap@PBDH@@H@Z");
//};

//public: hkArray<struct hkSerializeMultiMap<char const *, int>::Value, struct hkContainerHeapAllocator>::~hkArray<struct hkSerializeMultiMap<char const *, int>::Value, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UValue@?$hkSerializeMultiMap@PBDH@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::~hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBDH@@@@QAA@XZ");
//};

//public: int hkSerializeMultiMap<char const *, int>::getFirstIndex(char const *) const
//{
//    mangled_ppc("?getFirstIndex@?$hkSerializeMultiMap@PBDH@@QBAHPBD@Z");
//};

//public: int hkSerializeMultiMap<char const *, int>::insert(char const *, int const &)
//{
//    mangled_ppc("?insert@?$hkSerializeMultiMap@PBDH@@QAAHPBDABH@Z");
//};

//public: hkArrayBase<struct UidItem>::hkArrayBase<struct UidItem>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UUidItem@@@@QAA@XZ");
//};

//public: struct UidItem const & hkArrayBase<struct UidItem>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UUidItem@@@@QBAABUUidItem@@H@Z");
//};

//public: struct UidItem & hkArrayBase<struct UidItem>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UUidItem@@@@QAAAAUUidItem@@H@Z");
//};

//public: int hkArrayBase<struct UidItem>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UUidItem@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct UidItem>::removeAtAndCopy(int)
//{
//    mangled_ppc("?removeAtAndCopy@?$hkArrayBase@UUidItem@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct UidItem>::_pushBack(class hkMemoryAllocator &, struct UidItem const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UUidItem@@@@QAAXAAVhkMemoryAllocator@@ABUUidItem@@@Z");
//};

//public: void hkArrayBase<struct UidItem>::_insertAt(class hkMemoryAllocator &, int, struct UidItem const &)
//{
//    mangled_ppc("?_insertAt@?$hkArrayBase@UUidItem@@@@QAAXAAVhkMemoryAllocator@@HABUUidItem@@@Z");
//};

//public: hkArray<struct UidItem, struct hkContainerHeapAllocator>::~hkArray<struct UidItem, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UUidItem@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct UidItem>::~hkArrayBase<struct UidItem>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UUidItem@@@@QAA@XZ");
//};

//public: hkArrayBase<struct `anonymous namespace'::ClassVersion>::hkArrayBase<struct `anonymous namespace'::ClassVersion>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UClassVersion@?A0x3087113b@@@@QAA@XZ");
//};

//public: struct `anonymous namespace'::ClassVersion & hkArrayBase<struct `anonymous namespace'::ClassVersion>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UClassVersion@?A0x3087113b@@@@QAAAAUClassVersion@?A0x3087113b@@H@Z");
//};

//public: int hkArrayBase<struct `anonymous namespace'::ClassVersion>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UClassVersion@?A0x3087113b@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct `anonymous namespace'::ClassVersion>::indexOf(struct `anonymous namespace'::ClassVersion const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@UClassVersion@?A0x3087113b@@@@QBAHABUClassVersion@?A0x3087113b@@HH@Z");
//};

//public: int `anonymous namespace'::ClassVersion::operator==(struct `anonymous namespace'::ClassVersion const &)
//{
//    mangled_ppc("??8ClassVersion@?A0x3087113b@@QAAHABU01@@Z");
//};

//public: void hkArrayBase<struct `anonymous namespace'::ClassVersion>::pushBackUnchecked(struct `anonymous namespace'::ClassVersion const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@UClassVersion@?A0x3087113b@@@@QAAXABUClassVersion@?A0x3087113b@@@Z");
//};

//public: void hkArrayBase<struct `anonymous namespace'::ClassVersion>::_reserveExactly(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserveExactly@?$hkArrayBase@UClassVersion@?A0x3087113b@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct `anonymous namespace'::ClassVersion, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::ClassVersion, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UClassVersion@?A0x3087113b@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct `anonymous namespace'::ClassVersion>::~hkArrayBase<struct `anonymous namespace'::ClassVersion>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UClassVersion@?A0x3087113b@@@@QAA@XZ");
//};

//public: void hkArray<struct hkVersionPatchManager::PatchInfo const *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PBUPatchInfo@hkVersionPatchManager@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkSerializeMultiMap<int, int>::Value, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UValue@?$hkSerializeMultiMap@HH@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkSerializeMultiMap<unsigned __int64, int>::Value, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UValue@?$hkSerializeMultiMap@_KH@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkSerializeMultiMap<char const *, int>::Value, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UValue@?$hkSerializeMultiMap@PBDH@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkPointerMap<char const *, int, struct hkContainerHeapAllocator>::getWithDefault(char const *, int) const
//{
//    mangled_ppc("?getWithDefault@?$hkPointerMap@PBDHUhkContainerHeapAllocator@@@@QBAHPBDH@Z");
//};

//public: void hkArray<struct UidItem, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UUidItem@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct `anonymous namespace'::ClassVersion, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UClassVersion@?A0x3087113b@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PBUPatchInfo@hkVersionPatchManager@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PBUPatchInfo@hkVersionPatchManager@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkVersionPatchManager::PatchInfo const *>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@PBUPatchInfo@hkVersionPatchManager@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkVersionPatchManager::PatchInfo const *>(struct hkVersionPatchManager::PatchInfo const **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PBUPatchInfo@hkVersionPatchManager@@@hkArrayUtil@@SAXPAPBUPatchInfo@hkVersionPatchManager@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkVersionPatchManager::PatchInfo const *>(struct hkVersionPatchManager::PatchInfo const **, int, struct hkVersionPatchManager::PatchInfo const *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PBUPatchInfo@hkVersionPatchManager@@@hkArrayUtil@@SAXPAPBUPatchInfo@hkVersionPatchManager@@HABQBU12@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkVersionPatchManager::PatchInfo const *>(struct hkVersionPatchManager::PatchInfo const **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@PBUPatchInfo@hkVersionPatchManager@@@hkArrayUtil@@SAXPAPBUPatchInfo@hkVersionPatchManager@@HU?$hkTraitBool@$00@@@Z");
//};

//public: struct hkSerializeMultiMap<int, int>::Value & hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UValue@?$hkSerializeMultiMap@HH@@@@QAAAAUValue@?$hkSerializeMultiMap@HH@@H@Z");
//};

//public: void hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UValue@?$hkSerializeMultiMap@HH@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//protected: int hkSerializeMultiMap<int, int>::getFreeIndex(void)
//{
//    mangled_ppc("?getFreeIndex@?$hkSerializeMultiMap@HH@@IAAHXZ");
//};

//public: struct hkSerializeMultiMap<unsigned __int64, int>::Value & hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UValue@?$hkSerializeMultiMap@_KH@@@@QAAAAUValue@?$hkSerializeMultiMap@_KH@@H@Z");
//};

//public: void hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UValue@?$hkSerializeMultiMap@_KH@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//protected: int hkSerializeMultiMap<unsigned __int64, int>::getFreeIndex(void)
//{
//    mangled_ppc("?getFreeIndex@?$hkSerializeMultiMap@_KH@@IAAHXZ");
//};

//public: struct hkSerializeMultiMap<char const *, int>::Value & hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBDH@@@@QAAAAUValue@?$hkSerializeMultiMap@PBDH@@H@Z");
//};

//public: void hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBDH@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//protected: int hkSerializeMultiMap<char const *, int>::getFreeIndex(void)
//{
//    mangled_ppc("?getFreeIndex@?$hkSerializeMultiMap@PBDH@@IAAHXZ");
//};

//public: int hkArrayBase<struct UidItem>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UUidItem@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct UidItem>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UUidItem@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct UidItem>::_insertAt(class hkMemoryAllocator &, int, struct UidItem const *, int)
//{
//    mangled_ppc("?_insertAt@?$hkArrayBase@UUidItem@@@@QAAXAAVhkMemoryAllocator@@HPBUUidItem@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct UidItem>(struct UidItem *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UUidItem@@@hkArrayUtil@@SAXPAUUidItem@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct UidItem>(struct UidItem *, int, struct UidItem const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UUidItem@@@hkArrayUtil@@SAXPAUUidItem@@HABU1@U?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<struct `anonymous namespace'::ClassVersion>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UClassVersion@?A0x3087113b@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::ClassVersion>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UClassVersion@?A0x3087113b@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct `anonymous namespace'::ClassVersion>(struct `anonymous namespace'::ClassVersion *, int, struct `anonymous namespace'::ClassVersion const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UClassVersion@?A0x3087113b@@@hkArrayUtil@@SAXPAUClassVersion@?A0x3087113b@@HABU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: struct hkSerializeMultiMap<int, int>::Value & hkArray<struct hkSerializeMultiMap<int, int>::Value, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UValue@?$hkSerializeMultiMap@HH@@UhkContainerHeapAllocator@@@@QAAAAUValue@?$hkSerializeMultiMap@HH@@XZ");
//};

//public: struct hkSerializeMultiMap<unsigned __int64, int>::Value & hkArray<struct hkSerializeMultiMap<unsigned __int64, int>::Value, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UValue@?$hkSerializeMultiMap@_KH@@UhkContainerHeapAllocator@@@@QAAAAUValue@?$hkSerializeMultiMap@_KH@@XZ");
//};

//public: struct hkSerializeMultiMap<char const *, int>::Value & hkArray<struct hkSerializeMultiMap<char const *, int>::Value, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UValue@?$hkSerializeMultiMap@PBDH@@UhkContainerHeapAllocator@@@@QAAAAUValue@?$hkSerializeMultiMap@PBDH@@XZ");
//};

//public: int hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UValue@?$hkSerializeMultiMap@HH@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UValue@?$hkSerializeMultiMap@HH@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UValue@?$hkSerializeMultiMap@HH@@@@QAAXXZ");
//};

//public: struct hkSerializeMultiMap<int, int>::Value & hkArrayBase<struct hkSerializeMultiMap<int, int>::Value>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UValue@?$hkSerializeMultiMap@HH@@@@QAAAAUValue@?$hkSerializeMultiMap@HH@@AAVhkMemoryAllocator@@@Z");
//};

//public: int hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UValue@?$hkSerializeMultiMap@_KH@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UValue@?$hkSerializeMultiMap@_KH@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UValue@?$hkSerializeMultiMap@_KH@@@@QAAXXZ");
//};

//public: struct hkSerializeMultiMap<unsigned __int64, int>::Value & hkArrayBase<struct hkSerializeMultiMap<unsigned __int64, int>::Value>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UValue@?$hkSerializeMultiMap@_KH@@@@QAAAAUValue@?$hkSerializeMultiMap@_KH@@AAVhkMemoryAllocator@@@Z");
//};

//public: int hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBDH@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBDH@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBDH@@@@QAAXXZ");
//};

//public: struct hkSerializeMultiMap<char const *, int>::Value & hkArrayBase<struct hkSerializeMultiMap<char const *, int>::Value>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UValue@?$hkSerializeMultiMap@PBDH@@@@QAAAAUValue@?$hkSerializeMultiMap@PBDH@@AAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct UidItem>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UUidItem@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct UidItem>::_spliceInto(class hkMemoryAllocator &, int, int, struct UidItem const *, int)
//{
//    mangled_ppc("?_spliceInto@?$hkArrayBase@UUidItem@@@@QAAXAAVhkMemoryAllocator@@HHPBUUidItem@@H@Z");
//};

//public: void hkArrayBase<struct `anonymous namespace'::ClassVersion>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UClassVersion@?A0x3087113b@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkSerializeMultiMap<int, int>::Value>(struct hkSerializeMultiMap<int, int>::Value *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@UValue@?$hkSerializeMultiMap@HH@@@hkArrayUtil@@SAXPAUValue@?$hkSerializeMultiMap@HH@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkSerializeMultiMap<int, int>::Value>(struct hkSerializeMultiMap<int, int>::Value *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@UValue@?$hkSerializeMultiMap@HH@@@hkArrayUtil@@SAXPAUValue@?$hkSerializeMultiMap@HH@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkSerializeMultiMap<unsigned __int64, int>::Value>(struct hkSerializeMultiMap<unsigned __int64, int>::Value *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@UValue@?$hkSerializeMultiMap@_KH@@@hkArrayUtil@@SAXPAUValue@?$hkSerializeMultiMap@_KH@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkSerializeMultiMap<unsigned __int64, int>::Value>(struct hkSerializeMultiMap<unsigned __int64, int>::Value *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@UValue@?$hkSerializeMultiMap@_KH@@@hkArrayUtil@@SAXPAUValue@?$hkSerializeMultiMap@_KH@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkSerializeMultiMap<char const *, int>::Value>(struct hkSerializeMultiMap<char const *, int>::Value *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@UValue@?$hkSerializeMultiMap@PBDH@@@hkArrayUtil@@SAXPAUValue@?$hkSerializeMultiMap@PBDH@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkSerializeMultiMap<char const *, int>::Value>(struct hkSerializeMultiMap<char const *, int>::Value *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@UValue@?$hkSerializeMultiMap@PBDH@@@hkArrayUtil@@SAXPAUValue@?$hkSerializeMultiMap@PBDH@@HU?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<struct UidItem>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UUidItem@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::constructWithArray<struct UidItem>(struct UidItem *, int, struct UidItem const *, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithArray@UUidItem@@@hkArrayUtil@@SAXPAUUidItem@@HPBU1@U?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct `anonymous namespace'::ClassVersion>(struct `anonymous namespace'::ClassVersion *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UClassVersion@?A0x3087113b@@@hkArrayUtil@@SAXPAUClassVersion@?A0x3087113b@@HU?$hkTraitBool@$0A@@@@Z");
//};

