/* ---------- headers */

#include "havok\hkserialize\hkBindingClassNameRegistry.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkBindingClassNameRegistry::`RTTI Complete Object Locator'; // "??_R4hkBindingClassNameRegistry@@6B@"
// hkBindingClassNameRegistry::`RTTI Class Hierarchy Descriptor'; // "??_R3hkBindingClassNameRegistry@@8"
// hkBindingClassNameRegistry::`RTTI Base Class Array'; // "??_R2hkBindingClassNameRegistry@@8"
// hkBindingClassNameRegistry::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkBindingClassNameRegistry@@8"
// hkChainedClassNameRegistry::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkChainedClassNameRegistry@@8"
// hkChainedClassNameRegistry::`RTTI Class Hierarchy Descriptor'; // "??_R3hkChainedClassNameRegistry@@8"
// hkChainedClassNameRegistry::`RTTI Base Class Array'; // "??_R2hkChainedClassNameRegistry@@8"
// class hkBindingClassNameRegistry::`RTTI Type Descriptor'; // "??_R0?AVhkBindingClassNameRegistry@@@8"
// class hkChainedClassNameRegistry::`RTTI Type Descriptor'; // "??_R0?AVhkChainedClassNameRegistry@@@8"

// public: hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker::UnresolvedClassPointerTracker(void);
// public: hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker::~UnresolvedClassPointerTracker(void);
// public: void hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker::classPointedBy(class hkClass const *, class hkClass const **);
// public: void hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker::replaceClassAndRemove(class hkClass const *, class hkClass const *);
// public: void hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker::resolveClasses(class hkPointerMap<class hkClass const *, class hkClass const *, struct hkContainerHeapAllocator> &);
// public: int hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker::getSize(void) const;
// public: hkBindingClassNameRegistry::ClassAllocationsTracker::ClassAllocationsTracker(void);
// public: hkBindingClassNameRegistry::ClassAllocationsTracker::~ClassAllocationsTracker(void);
// public: class hkClass * hkBindingClassNameRegistry::ClassAllocationsTracker::restoreClassHierarchy(class hkClass const &, class hkBindingClassNameRegistry const *, class hkStringMap<char const *> const &, class hkStringMap<class hkClass *> &);
// private: struct hkInternalClassEnum * hkBindingClassNameRegistry::ClassAllocationsTracker::allocateEnums(struct hkInternalClassEnum const *, int);
// private: struct hkInternalClassMember * hkBindingClassNameRegistry::ClassAllocationsTracker::allocateMembers(struct hkInternalClassMember const *, int, struct hkInternalClassEnum const *, struct hkInternalClassEnum const *, int, class hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator> &, struct hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker &);
// private: void * hkBindingClassNameRegistry::ClassAllocationsTracker::allocateDefaults(class hkClass const &, void *);
// private: class hkClass * hkBindingClassNameRegistry::ClassAllocationsTracker::allocateClass(class hkClass const &, char const *, struct hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker &);
// private: void hkBindingClassNameRegistry::ClassAllocationsTracker::deallocateEnums(struct hkInternalClassEnum *, int);
// private: void hkBindingClassNameRegistry::ClassAllocationsTracker::deallocateMembers(struct hkInternalClassMember *, int, class hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator> &);
// private: void hkBindingClassNameRegistry::ClassAllocationsTracker::deallocateClass(class hkClass *, class hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator> &);
// public: hkBindingClassNameRegistry::hkBindingClassNameRegistry(struct hkVersionRegistry::ClassRename const *, class hkClassNameRegistry const *);
// public: virtual hkBindingClassNameRegistry::~hkBindingClassNameRegistry(void);
// public: virtual class hkClass const * hkBindingClassNameRegistry::getClassByNameNoRecurse(char const *) const;
// public: virtual class hkClass const * hkBindingClassNameRegistry::getClassByName(char const *) const;
// void computeMemberOffsetsInplace(class hkStringMap<class hkClass *> const &);
// protected: char const * hkBindingClassNameRegistry::getNewName(char const *) const;
// public: virtual void hkBindingClassNameRegistry::registerRenames(struct hkVersionRegistry::ClassRename const *);
// public: virtual void hkBindingClassNameRegistry::registerRenames(class hkStringMap<char const *> const &);
// public: hkSerializeMultiMap<void *, class hkClass const **>::~hkSerializeMultiMap<void *, class hkClass const **>(void);
// public: hkPointerMap<class hkClassEnum const *, struct hkInternalClassEnum *, struct hkContainerHeapAllocator>::~hkPointerMap<class hkClassEnum const *, struct hkInternalClassEnum *, struct hkContainerHeapAllocator>(void);
// merged_84756EE0;
// public: int hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator>::insert(struct hkInternalClassEnum *, int);
// public: class hkBool hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator>::hasKey(struct hkInternalClassEnum *) const;
// public: int hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator>::getWithDefault(struct hkInternalClassEnum *, int) const;
// public: hkSerializeMultiMap<void *, class hkClass const **>::hkSerializeMultiMap<void *, class hkClass const **>(void);
// public: class hkClass const **const & hkSerializeMultiMap<void *, class hkClass const **>::getValue(int) const;
// public: int hkSerializeMultiMap<void *, class hkClass const **>::getNextIndex(int) const;
// public: class Dummy * hkPointerMap<void *, int, struct hkContainerHeapAllocator>::getIterator(void) const;
// public: void * hkPointerMap<void *, int, struct hkContainerHeapAllocator>::getKey(class Dummy *) const;
// public: class Dummy * hkPointerMap<void *, int, struct hkContainerHeapAllocator>::getNext(class Dummy *) const;
// public: class hkBool hkPointerMap<void *, int, struct hkContainerHeapAllocator>::isValid(class Dummy *) const;
// public: hkArray<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData, struct hkContainerHeapAllocator>::hkArray<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData, struct hkContainerHeapAllocator>(void);
// public: struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData * hkArray<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData, struct hkContainerHeapAllocator>::expandBy(int);
// public: class Dummy * hkStringMap<char const *>::getIterator(void) const;
// public: char const * hkStringMap<char const *>::getKey(class Dummy *) const;
// public: char const * hkStringMap<char const *>::getValue(class Dummy *) const;
// public: class hkBool hkStringMap<char const *>::isValid(class Dummy *) const;
// public: class hkClass * hkStringMap<class hkClass *>::getWithDefault(char const *, class hkClass *) const;
// public: class Dummy * hkPointerMap<class hkClass const *, class hkClass const *, struct hkContainerHeapAllocator>::getIterator(void) const;
// public: class hkClass const * hkPointerMap<class hkClass const *, class hkClass const *, struct hkContainerHeapAllocator>::getKey(class Dummy *) const;
// public: class hkClass const * hkPointerMap<class hkClass const *, class hkClass const *, struct hkContainerHeapAllocator>::getValue(class Dummy *) const;
// public: class Dummy * hkPointerMap<class hkClass const *, class hkClass const *, struct hkContainerHeapAllocator>::getNext(class Dummy *) const;
// public: class hkBool hkPointerMap<class hkClass const *, class hkClass const *, struct hkContainerHeapAllocator>::isValid(class Dummy *) const;
// public: hkPointerMap<class hkClassEnum const *, struct hkInternalClassEnum *, struct hkContainerHeapAllocator>::hkPointerMap<class hkClassEnum const *, struct hkInternalClassEnum *, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<class hkClassEnum const *, struct hkInternalClassEnum *, struct hkContainerHeapAllocator>::insert(class hkClassEnum const *, struct hkInternalClassEnum *);
// public: class hkBool hkPointerMap<class hkClassEnum const *, struct hkInternalClassEnum *, struct hkContainerHeapAllocator>::hasKey(class hkClassEnum const *) const;
// public: enum hkResult hkPointerMap<class hkClassEnum const *, struct hkInternalClassEnum *, struct hkContainerHeapAllocator>::get(class hkClassEnum const *, struct hkInternalClassEnum **) const;
// public: hkArray<struct hkSerializeMultiMap<void *, class hkClass const **>::Value, struct hkContainerHeapAllocator>::hkArray<struct hkSerializeMultiMap<void *, class hkClass const **>::Value, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>(void);
// public: struct hkSerializeMultiMap<void *, class hkClass const **>::Value const & hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::operator[](int) const;
// public: hkArray<struct hkSerializeMultiMap<void *, class hkClass const **>::Value, struct hkContainerHeapAllocator>::~hkArray<struct hkSerializeMultiMap<void *, class hkClass const **>::Value, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::~hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>(void);
// public: int hkSerializeMultiMap<void *, class hkClass const **>::getFirstIndex(void *) const;
// public: int hkSerializeMultiMap<void *, class hkClass const **>::insert(void *, class hkClass const **const &);
// public: int hkSerializeMultiMap<void *, class hkClass const **>::getNumKeys(void) const;
// public: int hkSerializeMultiMap<void *, class hkClass const **>::removeByIndex(void *, int);
// public: void hkSerializeMultiMap<void *, class hkClass const **>::removeKey(void *);
// public: hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>(void);
// public: struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData & hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::operator[](int);
// public: int hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::getSize(void) const;
// public: struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData * hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::_expandBy(class hkMemoryAllocator &, int);
// public: hkArray<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData, struct hkContainerHeapAllocator>::~hkArray<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::~hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>(void);
// struct hkInternalClassEnum * hkAllocate<struct hkInternalClassEnum>(int, int);
// struct hkInternalClassEnumItem * hkAllocate<struct hkInternalClassEnumItem>(int, int);
// struct hkInternalClassMember * hkAllocate<struct hkInternalClassMember>(int, int);
// class hkClass * hkAllocate<class hkClass>(int, int);
// void hkDeallocate<struct hkInternalClassEnumItem>(struct hkInternalClassEnumItem *);
// void hkDeallocate<struct hkInternalClassEnum>(struct hkInternalClassEnum *);
// void hkDeallocate<struct hkInternalClassMember>(struct hkInternalClassMember *);
// void hkDeallocate<class hkClass>(class hkClass *);
// public: void hkArray<struct hkSerializeMultiMap<void *, class hkClass const **>::Value, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkPointerMap<void *, int, struct hkContainerHeapAllocator>::remove(class Dummy *);
// public: int hkPointerMap<void *, int, struct hkContainerHeapAllocator>::getSize(void) const;
// public: void hkArray<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: struct hkSerializeMultiMap<void *, class hkClass const **>::Value & hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::operator[](int);
// public: void hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::_clearAndDeallocate(class hkMemoryAllocator &);
// protected: int hkSerializeMultiMap<void *, class hkClass const **>::getFreeIndex(void);
// public: void hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::construct<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>(struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData *, int, struct hkTraitBool<0>);
// public: hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData::ClassData(void);
// public: hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator>::hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator>(void);
// public: struct hkSerializeMultiMap<void *, class hkClass const **>::Value & hkArray<struct hkSerializeMultiMap<void *, class hkClass const **>::Value, struct hkContainerHeapAllocator>::expandOne(void);
// public: int hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::getSize(void) const;
// public: int hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::getCapacity(void) const;
// public: void hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::clear(void);
// public: struct hkSerializeMultiMap<void *, class hkClass const **>::Value & hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::_expandOne(class hkMemoryAllocator &);
// public: int hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::getCapacity(void) const;
// public: void hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::clear(void);
// public: static void hkArrayUtil::destruct<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>(struct hkSerializeMultiMap<void *, class hkClass const **>::Value *, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::construct<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>(struct hkSerializeMultiMap<void *, class hkClass const **>::Value *, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>(struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData *, int, struct hkTraitBool<0>);
// public: void * hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData::`scalar deleting destructor'(unsigned int);
// public: hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData::~ClassData(void);
// public: hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator>(void);
// public: static void * hkClass::operator new(unsigned int, void *);

//public: hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker::UnresolvedClassPointerTracker(void)
//{
//    mangled_ppc("??0UnresolvedClassPointerTracker@ClassAllocationsTracker@hkBindingClassNameRegistry@@QAA@XZ");
//};

//public: hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker::~UnresolvedClassPointerTracker(void)
//{
//    mangled_ppc("??1UnresolvedClassPointerTracker@ClassAllocationsTracker@hkBindingClassNameRegistry@@QAA@XZ");
//};

//public: void hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker::classPointedBy(class hkClass const *, class hkClass const **)
//{
//    mangled_ppc("?classPointedBy@UnresolvedClassPointerTracker@ClassAllocationsTracker@hkBindingClassNameRegistry@@QAAXPBVhkClass@@PAPBV4@@Z");
//};

//public: void hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker::replaceClassAndRemove(class hkClass const *, class hkClass const *)
//{
//    mangled_ppc("?replaceClassAndRemove@UnresolvedClassPointerTracker@ClassAllocationsTracker@hkBindingClassNameRegistry@@QAAXPBVhkClass@@0@Z");
//};

//public: void hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker::resolveClasses(class hkPointerMap<class hkClass const *, class hkClass const *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?resolveClasses@UnresolvedClassPointerTracker@ClassAllocationsTracker@hkBindingClassNameRegistry@@QAAXAAV?$hkPointerMap@PBVhkClass@@PBV1@UhkContainerHeapAllocator@@@@@Z");
//};

//public: int hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker::getSize(void) const
//{
//    mangled_ppc("?getSize@UnresolvedClassPointerTracker@ClassAllocationsTracker@hkBindingClassNameRegistry@@QBAHXZ");
//};

//public: hkBindingClassNameRegistry::ClassAllocationsTracker::ClassAllocationsTracker(void)
//{
//    mangled_ppc("??0ClassAllocationsTracker@hkBindingClassNameRegistry@@QAA@XZ");
//};

//public: hkBindingClassNameRegistry::ClassAllocationsTracker::~ClassAllocationsTracker(void)
//{
//    mangled_ppc("??1ClassAllocationsTracker@hkBindingClassNameRegistry@@QAA@XZ");
//};

//public: class hkClass * hkBindingClassNameRegistry::ClassAllocationsTracker::restoreClassHierarchy(class hkClass const &, class hkBindingClassNameRegistry const *, class hkStringMap<char const *> const &, class hkStringMap<class hkClass *> &)
//{
//    mangled_ppc("?restoreClassHierarchy@ClassAllocationsTracker@hkBindingClassNameRegistry@@QAAPAVhkClass@@ABV3@PBV2@ABV?$hkStringMap@PBD@@AAV?$hkStringMap@PAVhkClass@@@@@Z");
//};

//private: struct hkInternalClassEnum * hkBindingClassNameRegistry::ClassAllocationsTracker::allocateEnums(struct hkInternalClassEnum const *, int)
//{
//    mangled_ppc("?allocateEnums@ClassAllocationsTracker@hkBindingClassNameRegistry@@AAAPAUhkInternalClassEnum@@PBU3@H@Z");
//};

//private: struct hkInternalClassMember * hkBindingClassNameRegistry::ClassAllocationsTracker::allocateMembers(struct hkInternalClassMember const *, int, struct hkInternalClassEnum const *, struct hkInternalClassEnum const *, int, class hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator> &, struct hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker &)
//{
//    mangled_ppc("?allocateMembers@ClassAllocationsTracker@hkBindingClassNameRegistry@@AAAPAUhkInternalClassMember@@PBU3@HPBUhkInternalClassEnum@@1HAAV?$hkPointerMap@PAUhkInternalClassEnum@@HUhkContainerHeapAllocator@@@@AAUUnresolvedClassPointerTracker@12@@Z");
//};

//private: void * hkBindingClassNameRegistry::ClassAllocationsTracker::allocateDefaults(class hkClass const &, void *)
//{
//    mangled_ppc("?allocateDefaults@ClassAllocationsTracker@hkBindingClassNameRegistry@@AAAPAXABVhkClass@@PAX@Z");
//};

//private: class hkClass * hkBindingClassNameRegistry::ClassAllocationsTracker::allocateClass(class hkClass const &, char const *, struct hkBindingClassNameRegistry::ClassAllocationsTracker::UnresolvedClassPointerTracker &)
//{
//    mangled_ppc("?allocateClass@ClassAllocationsTracker@hkBindingClassNameRegistry@@AAAPAVhkClass@@ABV3@PBDAAUUnresolvedClassPointerTracker@12@@Z");
//};

//private: void hkBindingClassNameRegistry::ClassAllocationsTracker::deallocateEnums(struct hkInternalClassEnum *, int)
//{
//    mangled_ppc("?deallocateEnums@ClassAllocationsTracker@hkBindingClassNameRegistry@@AAAXPAUhkInternalClassEnum@@H@Z");
//};

//private: void hkBindingClassNameRegistry::ClassAllocationsTracker::deallocateMembers(struct hkInternalClassMember *, int, class hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?deallocateMembers@ClassAllocationsTracker@hkBindingClassNameRegistry@@AAAXPAUhkInternalClassMember@@HAAV?$hkPointerMap@PAUhkInternalClassEnum@@HUhkContainerHeapAllocator@@@@@Z");
//};

//private: void hkBindingClassNameRegistry::ClassAllocationsTracker::deallocateClass(class hkClass *, class hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?deallocateClass@ClassAllocationsTracker@hkBindingClassNameRegistry@@AAAXPAVhkClass@@AAV?$hkPointerMap@PAUhkInternalClassEnum@@HUhkContainerHeapAllocator@@@@@Z");
//};

//public: hkBindingClassNameRegistry::hkBindingClassNameRegistry(struct hkVersionRegistry::ClassRename const *, class hkClassNameRegistry const *)
//{
//    mangled_ppc("??0hkBindingClassNameRegistry@@QAA@PBUClassRename@hkVersionRegistry@@PBVhkClassNameRegistry@@@Z");
//};

//public: virtual hkBindingClassNameRegistry::~hkBindingClassNameRegistry(void)
//{
//    mangled_ppc("??1hkBindingClassNameRegistry@@UAA@XZ");
//};

//public: virtual class hkClass const * hkBindingClassNameRegistry::getClassByNameNoRecurse(char const *) const
//{
//    mangled_ppc("?getClassByNameNoRecurse@hkBindingClassNameRegistry@@UBAPBVhkClass@@PBD@Z");
//};

//public: virtual class hkClass const * hkBindingClassNameRegistry::getClassByName(char const *) const
//{
//    mangled_ppc("?getClassByName@hkBindingClassNameRegistry@@UBAPBVhkClass@@PBD@Z");
//};

//void computeMemberOffsetsInplace(class hkStringMap<class hkClass *> const &)
//{
//    mangled_ppc("?computeMemberOffsetsInplace@@YAXABV?$hkStringMap@PAVhkClass@@@@@Z");
//};

//protected: char const * hkBindingClassNameRegistry::getNewName(char const *) const
//{
//    mangled_ppc("?getNewName@hkBindingClassNameRegistry@@IBAPBDPBD@Z");
//};

//public: virtual void hkBindingClassNameRegistry::registerRenames(struct hkVersionRegistry::ClassRename const *)
//{
//    mangled_ppc("?registerRenames@hkBindingClassNameRegistry@@UAAXPBUClassRename@hkVersionRegistry@@@Z");
//};

//public: virtual void hkBindingClassNameRegistry::registerRenames(class hkStringMap<char const *> const &)
//{
//    mangled_ppc("?registerRenames@hkBindingClassNameRegistry@@UAAXABV?$hkStringMap@PBD@@@Z");
//};

//public: hkSerializeMultiMap<void *, class hkClass const **>::~hkSerializeMultiMap<void *, class hkClass const **>(void)
//{
//    mangled_ppc("??1?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@QAA@XZ");
//};

//public: hkPointerMap<class hkClassEnum const *, struct hkInternalClassEnum *, struct hkContainerHeapAllocator>::~hkPointerMap<class hkClassEnum const *, struct hkInternalClassEnum *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PBVhkClassEnum@@PAUhkInternalClassEnum@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//merged_84756EE0
//{
//    mangled_ppc("merged_84756EE0");
//};

//public: int hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator>::insert(struct hkInternalClassEnum *, int)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PAUhkInternalClassEnum@@HUhkContainerHeapAllocator@@@@QAAHPAUhkInternalClassEnum@@H@Z");
//};

//public: class hkBool hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator>::hasKey(struct hkInternalClassEnum *) const
//{
//    mangled_ppc("?hasKey@?$hkPointerMap@PAUhkInternalClassEnum@@HUhkContainerHeapAllocator@@@@QBA?AVhkBool@@PAUhkInternalClassEnum@@@Z");
//};

//public: int hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator>::getWithDefault(struct hkInternalClassEnum *, int) const
//{
//    mangled_ppc("?getWithDefault@?$hkPointerMap@PAUhkInternalClassEnum@@HUhkContainerHeapAllocator@@@@QBAHPAUhkInternalClassEnum@@H@Z");
//};

//public: hkSerializeMultiMap<void *, class hkClass const **>::hkSerializeMultiMap<void *, class hkClass const **>(void)
//{
//    mangled_ppc("??0?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@QAA@XZ");
//};

//public: class hkClass const **const & hkSerializeMultiMap<void *, class hkClass const **>::getValue(int) const
//{
//    mangled_ppc("?getValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@QBAABQAPBVhkClass@@H@Z");
//};

//public: int hkSerializeMultiMap<void *, class hkClass const **>::getNextIndex(int) const
//{
//    mangled_ppc("?getNextIndex@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@QBAHH@Z");
//};

//public: class Dummy * hkPointerMap<void *, int, struct hkContainerHeapAllocator>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkPointerMap@PAXHUhkContainerHeapAllocator@@@@QBAPAVDummy@@XZ");
//};

//public: void * hkPointerMap<void *, int, struct hkContainerHeapAllocator>::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkPointerMap@PAXHUhkContainerHeapAllocator@@@@QBAPAXPAVDummy@@@Z");
//};

//public: class Dummy * hkPointerMap<void *, int, struct hkContainerHeapAllocator>::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkPointerMap@PAXHUhkContainerHeapAllocator@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkPointerMap<void *, int, struct hkContainerHeapAllocator>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkPointerMap@PAXHUhkContainerHeapAllocator@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: hkArray<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData, struct hkContainerHeapAllocator>::hkArray<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData * hkArray<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData, struct hkContainerHeapAllocator>::expandBy(int)
//{
//    mangled_ppc("?expandBy@?$hkArray@UClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@UhkContainerHeapAllocator@@@@QAAPAUClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@H@Z");
//};

//public: class Dummy * hkStringMap<char const *>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkStringMap@PBD@@QBAPAVDummy@@XZ");
//};

//public: char const * hkStringMap<char const *>::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkStringMap@PBD@@QBAPBDPAVDummy@@@Z");
//};

//public: char const * hkStringMap<char const *>::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkStringMap@PBD@@QBAPBDPAVDummy@@@Z");
//};

//public: class hkBool hkStringMap<char const *>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkStringMap@PBD@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: class hkClass * hkStringMap<class hkClass *>::getWithDefault(char const *, class hkClass *) const
//{
//    mangled_ppc("?getWithDefault@?$hkStringMap@PAVhkClass@@@@QBAPAVhkClass@@PBDPAV2@@Z");
//};

//public: class Dummy * hkPointerMap<class hkClass const *, class hkClass const *, struct hkContainerHeapAllocator>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkPointerMap@PBVhkClass@@PBV1@UhkContainerHeapAllocator@@@@QBAPAVDummy@@XZ");
//};

//public: class hkClass const * hkPointerMap<class hkClass const *, class hkClass const *, struct hkContainerHeapAllocator>::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkPointerMap@PBVhkClass@@PBV1@UhkContainerHeapAllocator@@@@QBAPBVhkClass@@PAVDummy@@@Z");
//};

//public: class hkClass const * hkPointerMap<class hkClass const *, class hkClass const *, struct hkContainerHeapAllocator>::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkPointerMap@PBVhkClass@@PBV1@UhkContainerHeapAllocator@@@@QBAPBVhkClass@@PAVDummy@@@Z");
//};

//public: class Dummy * hkPointerMap<class hkClass const *, class hkClass const *, struct hkContainerHeapAllocator>::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkPointerMap@PBVhkClass@@PBV1@UhkContainerHeapAllocator@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkPointerMap<class hkClass const *, class hkClass const *, struct hkContainerHeapAllocator>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkPointerMap@PBVhkClass@@PBV1@UhkContainerHeapAllocator@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: hkPointerMap<class hkClassEnum const *, struct hkInternalClassEnum *, struct hkContainerHeapAllocator>::hkPointerMap<class hkClassEnum const *, struct hkInternalClassEnum *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PBVhkClassEnum@@PAUhkInternalClassEnum@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<class hkClassEnum const *, struct hkInternalClassEnum *, struct hkContainerHeapAllocator>::insert(class hkClassEnum const *, struct hkInternalClassEnum *)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PBVhkClassEnum@@PAUhkInternalClassEnum@@UhkContainerHeapAllocator@@@@QAAHPBVhkClassEnum@@PAUhkInternalClassEnum@@@Z");
//};

//public: class hkBool hkPointerMap<class hkClassEnum const *, struct hkInternalClassEnum *, struct hkContainerHeapAllocator>::hasKey(class hkClassEnum const *) const
//{
//    mangled_ppc("?hasKey@?$hkPointerMap@PBVhkClassEnum@@PAUhkInternalClassEnum@@UhkContainerHeapAllocator@@@@QBA?AVhkBool@@PBVhkClassEnum@@@Z");
//};

//public: enum hkResult hkPointerMap<class hkClassEnum const *, struct hkInternalClassEnum *, struct hkContainerHeapAllocator>::get(class hkClassEnum const *, struct hkInternalClassEnum **) const
//{
//    mangled_ppc("?get@?$hkPointerMap@PBVhkClassEnum@@PAUhkInternalClassEnum@@UhkContainerHeapAllocator@@@@QBA?AW4hkResult@@PBVhkClassEnum@@PAPAUhkInternalClassEnum@@@Z");
//};

//public: hkArray<struct hkSerializeMultiMap<void *, class hkClass const **>::Value, struct hkContainerHeapAllocator>::hkArray<struct hkSerializeMultiMap<void *, class hkClass const **>::Value, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@@@QAA@XZ");
//};

//public: struct hkSerializeMultiMap<void *, class hkClass const **>::Value const & hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@@@QBAABUValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@H@Z");
//};

//public: hkArray<struct hkSerializeMultiMap<void *, class hkClass const **>::Value, struct hkContainerHeapAllocator>::~hkArray<struct hkSerializeMultiMap<void *, class hkClass const **>::Value, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::~hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@@@QAA@XZ");
//};

//public: int hkSerializeMultiMap<void *, class hkClass const **>::getFirstIndex(void *) const
//{
//    mangled_ppc("?getFirstIndex@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@QBAHPAX@Z");
//};

//public: int hkSerializeMultiMap<void *, class hkClass const **>::insert(void *, class hkClass const **const &)
//{
//    mangled_ppc("?insert@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@QAAHPAXABQAPBVhkClass@@@Z");
//};

//public: int hkSerializeMultiMap<void *, class hkClass const **>::getNumKeys(void) const
//{
//    mangled_ppc("?getNumKeys@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@QBAHXZ");
//};

//public: int hkSerializeMultiMap<void *, class hkClass const **>::removeByIndex(void *, int)
//{
//    mangled_ppc("?removeByIndex@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@QAAHPAXH@Z");
//};

//public: void hkSerializeMultiMap<void *, class hkClass const **>::removeKey(void *)
//{
//    mangled_ppc("?removeKey@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@QAAXPAX@Z");
//};

//public: hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@@@QAA@XZ");
//};

//public: struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData & hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@@@QAAAAUClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@H@Z");
//};

//public: int hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@@@QBAHXZ");
//};

//public: struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData * hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::_expandBy(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_expandBy@?$hkArrayBase@UClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@@@QAAPAUClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@AAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData, struct hkContainerHeapAllocator>::~hkArray<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::~hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@@@QAA@XZ");
//};

//struct hkInternalClassEnum * hkAllocate<struct hkInternalClassEnum>(int, int)
//{
//    mangled_ppc("??$hkAllocate@UhkInternalClassEnum@@@@YAPAUhkInternalClassEnum@@HH@Z");
//};

//struct hkInternalClassEnumItem * hkAllocate<struct hkInternalClassEnumItem>(int, int)
//{
//    mangled_ppc("??$hkAllocate@UhkInternalClassEnumItem@@@@YAPAUhkInternalClassEnumItem@@HH@Z");
//};

//struct hkInternalClassMember * hkAllocate<struct hkInternalClassMember>(int, int)
//{
//    mangled_ppc("??$hkAllocate@UhkInternalClassMember@@@@YAPAUhkInternalClassMember@@HH@Z");
//};

//class hkClass * hkAllocate<class hkClass>(int, int)
//{
//    mangled_ppc("??$hkAllocate@VhkClass@@@@YAPAVhkClass@@HH@Z");
//};

//void hkDeallocate<struct hkInternalClassEnumItem>(struct hkInternalClassEnumItem *)
//{
//    mangled_ppc("??$hkDeallocate@UhkInternalClassEnumItem@@@@YAXPAUhkInternalClassEnumItem@@@Z");
//};

//void hkDeallocate<struct hkInternalClassEnum>(struct hkInternalClassEnum *)
//{
//    mangled_ppc("??$hkDeallocate@UhkInternalClassEnum@@@@YAXPAUhkInternalClassEnum@@@Z");
//};

//void hkDeallocate<struct hkInternalClassMember>(struct hkInternalClassMember *)
//{
//    mangled_ppc("??$hkDeallocate@UhkInternalClassMember@@@@YAXPAUhkInternalClassMember@@@Z");
//};

//void hkDeallocate<class hkClass>(class hkClass *)
//{
//    mangled_ppc("??$hkDeallocate@VhkClass@@@@YAXPAVhkClass@@@Z");
//};

//public: void hkArray<struct hkSerializeMultiMap<void *, class hkClass const **>::Value, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkPointerMap<void *, int, struct hkContainerHeapAllocator>::remove(class Dummy *)
//{
//    mangled_ppc("?remove@?$hkPointerMap@PAXHUhkContainerHeapAllocator@@@@QAAXPAVDummy@@@Z");
//};

//public: int hkPointerMap<void *, int, struct hkContainerHeapAllocator>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkPointerMap@PAXHUhkContainerHeapAllocator@@@@QBAHXZ");
//};

//public: void hkArray<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: struct hkSerializeMultiMap<void *, class hkClass const **>::Value & hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@@@QAAAAUValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@H@Z");
//};

//public: void hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//protected: int hkSerializeMultiMap<void *, class hkClass const **>::getFreeIndex(void)
//{
//    mangled_ppc("?getFreeIndex@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@IAAHXZ");
//};

//public: void hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::construct<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>(struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@@hkArrayUtil@@SAXPAUClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData::ClassData(void)
//{
//    mangled_ppc("??0ClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@QAA@XZ");
//};

//public: hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator>::hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PAUhkInternalClassEnum@@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct hkSerializeMultiMap<void *, class hkClass const **>::Value & hkArray<struct hkSerializeMultiMap<void *, class hkClass const **>::Value, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@UhkContainerHeapAllocator@@@@QAAAAUValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@XZ");
//};

//public: int hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@@@QAAXXZ");
//};

//public: struct hkSerializeMultiMap<void *, class hkClass const **>::Value & hkArrayBase<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@@@QAAAAUValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@AAVhkMemoryAllocator@@@Z");
//};

//public: int hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>(struct hkSerializeMultiMap<void *, class hkClass const **>::Value *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@UValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@@hkArrayUtil@@SAXPAUValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkSerializeMultiMap<void *, class hkClass const **>::Value>(struct hkSerializeMultiMap<void *, class hkClass const **>::Value *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@UValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@@hkArrayUtil@@SAXPAUValue@?$hkSerializeMultiMap@PAXPAPBVhkClass@@@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData>(struct hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@@hkArrayUtil@@SAXPAUClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void * hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@QAAPAXI@Z");
//};

//public: hkBindingClassNameRegistry::ClassAllocationsTracker::ClassData::~ClassData(void)
//{
//    mangled_ppc("??1ClassData@ClassAllocationsTracker@hkBindingClassNameRegistry@@QAA@XZ");
//};

//public: hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator>::~hkPointerMap<struct hkInternalClassEnum *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PAUhkInternalClassEnum@@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: static void * hkClass::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkClass@@SAPAXIPAX@Z");
//};

