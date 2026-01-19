/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkDefaultMemoryTracker::`RTTI Complete Object Locator'; // "??_R4hkDefaultMemoryTracker@@6B@"
// hkDefaultMemoryTracker::`RTTI Class Hierarchy Descriptor'; // "??_R3hkDefaultMemoryTracker@@8"
// hkDefaultMemoryTracker::`RTTI Base Class Array'; // "??_R2hkDefaultMemoryTracker@@8"
// hkDefaultMemoryTracker::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkDefaultMemoryTracker@@8"
// hkMemoryTracker::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkMemoryTracker@@8"
// hkMemoryTracker::`RTTI Class Hierarchy Descriptor'; // "??_R3hkMemoryTracker@@8"
// hkMemoryTracker::`RTTI Base Class Array'; // "??_R2hkMemoryTracker@@8"
// const hkAllocatorFreeListMemoryServer::`RTTI Complete Object Locator'; // "??_R4hkAllocatorFreeListMemoryServer@@6B@"
// hkAllocatorFreeListMemoryServer::`RTTI Class Hierarchy Descriptor'; // "??_R3hkAllocatorFreeListMemoryServer@@8"
// hkAllocatorFreeListMemoryServer::`RTTI Base Class Array'; // "??_R2hkAllocatorFreeListMemoryServer@@8"
// hkAllocatorFreeListMemoryServer::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkAllocatorFreeListMemoryServer@@8"
// hkFreeListAllocatorServer::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkFreeListAllocatorServer@@8"
// hkFreeListAllocatorServer::`RTTI Class Hierarchy Descriptor'; // "??_R3hkFreeListAllocatorServer@@8"
// hkFreeListAllocatorServer::`RTTI Base Class Array'; // "??_R2hkFreeListAllocatorServer@@8"
// const hkFreeListAllocatorServer::`RTTI Complete Object Locator'; // "??_R4hkFreeListAllocatorServer@@6B@"
// const hkMemoryTracker::`RTTI Complete Object Locator'; // "??_R4hkMemoryTracker@@6B@"
// class hkDefaultMemoryTracker::`RTTI Type Descriptor'; // "??_R0?AVhkDefaultMemoryTracker@@@8"
// class hkMemoryTracker::`RTTI Type Descriptor'; // "??_R0?AVhkMemoryTracker@@@8"
// class hkAllocatorFreeListMemoryServer::`RTTI Type Descriptor'; // "??_R0?AVhkAllocatorFreeListMemoryServer@@@8"
// class hkFreeListAllocatorServer::`RTTI Type Descriptor'; // "??_R0?AVhkFreeListAllocatorServer@@@8"
// public: static class hkMemoryAllocator *hkDefaultMemoryTrackerAllocator::s_allocator; // "?s_allocator@hkDefaultMemoryTrackerAllocator@@2PAVhkMemoryAllocator@@A"

// public: hkDefaultMemoryTracker::hkDefaultMemoryTracker(class hkMemoryAllocator *);
// public: virtual hkDefaultMemoryTracker::~hkDefaultMemoryTracker(void);
// protected: struct hkDefaultMemoryTracker::ClassAlloc * hkDefaultMemoryTracker::_addClassAlloc(class type_info const *, unsigned int, void *, int);
// protected: void hkDefaultMemoryTracker::_removeClassAlloc(void *);
// public: virtual void hkDefaultMemoryTracker::onNewReferencedObject(unsigned int, void *);
// public: virtual void hkDefaultMemoryTracker::onDeleteReferencedObject(void *);
// public: virtual void hkDefaultMemoryTracker::onNewObject(class type_info const &, unsigned int, void *);
// public: virtual void hkDefaultMemoryTracker::onDeleteObject(void *);
// public: virtual void hkDefaultMemoryTracker::addClassDefinition(struct hkMemoryTracker::ClassDefinition const &);
// unsigned long _calcHash(char const *, int);
// public: virtual struct hkMemoryTracker::ClassDefinition const * hkDefaultMemoryTracker::getClassDefinition(class type_info const &);
// public: virtual struct hkMemoryTracker::ClassDefinition const * hkDefaultMemoryTracker::findClassDefinition(struct hkSubString const &);
// public: static void hkDefaultMemoryTracker::memorySizeToText(unsigned int, class hkStringBuf &);
// public: hkAllocatorFreeListMemoryServer::hkAllocatorFreeListMemoryServer(class hkMemoryAllocator *);
// public: hkFreeListAllocatorServer::hkFreeListAllocatorServer(void);
// merged_83EEE158;
// public: virtual hkFreeListAllocatorServer::~hkFreeListAllocatorServer(void);
// public: virtual void * hkAllocatorFreeListMemoryServer::alloc(unsigned int);
// public: virtual void hkAllocatorFreeListMemoryServer::free(void *);
// public: virtual class hkBool hkAllocatorFreeListMemoryServer::isValidAlloc(void *);
// public: virtual unsigned int hkAllocatorFreeListMemoryServer::getAllocatedSize(void const *, unsigned int);
// public: virtual unsigned int hkAllocatorFreeListMemoryServer::getAllocatedSizeWithOverhead(void *, unsigned int);
// public: virtual void * hkAllocatorFreeListMemoryServer::criticalAlloc(unsigned int);
// public: virtual void hkAllocatorFreeListMemoryServer::criticalFree(void *, unsigned int);
// merged_83EEE318;
// public: static void hkAllocatorFreeListMemoryServer::operator delete(void *);
// public: virtual hkAllocatorFreeListMemoryServer::~hkAllocatorFreeListMemoryServer(void);
// merged_83EEE390;
// public: static void hkDefaultMemoryTracker::operator delete(void *);
// public: hkMemoryTracker::hkMemoryTracker(void);
// merged_83EEE400;
// public: static void hkMemoryTracker::operator delete(void *);
// public: virtual hkMemoryTracker::~hkMemoryTracker(void);
// public: int hkSubString::length(void) const;
// public: void hkSubString::set(char const *, int);
// public: hkMap<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *>, struct hkDefaultMemoryTrackerAllocator>::hkMap<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *>, struct hkDefaultMemoryTrackerAllocator>(int);
// public: hkMap<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *>, struct hkDefaultMemoryTrackerAllocator>::~hkMap<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *>, struct hkDefaultMemoryTrackerAllocator>(void);
// public: class hkMemoryAllocator & hkDefaultMemoryTrackerAllocator::get(void *);
// public: int hkMap<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *>, struct hkDefaultMemoryTrackerAllocator>::insert(void *, struct hkDefaultMemoryTracker::ClassAlloc *);
// public: class hkBool hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::hasKey(void *) const;
// public: void hkMap<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *>, struct hkDefaultMemoryTrackerAllocator>::reserve(int);
// public: hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >(void);
// public: hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::~hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >(void);
// public: struct hkDefaultMemoryTracker::ClassAlloc * hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::getValue(class Dummy *) const;
// public: class hkBool hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::isValid(class Dummy *) const;
// public: int hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::insert(class hkMemoryAllocator &, void *, struct hkDefaultMemoryTracker::ClassAlloc *);
// public: class Dummy * hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::findKey(void *) const;
// public: void hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::remove(class Dummy *);
// public: void hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::reserve(class hkMemoryAllocator &, int);
// public: hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>(void);
// public: hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::~hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>(void);
// public: class Dummy * hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::getIterator(void) const;
// public: struct hkDefaultMemoryTracker::ClassEntry const * hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::getValue(class Dummy *) const;
// public: class Dummy * hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::getNext(class Dummy *, unsigned long) const;
// public: class Dummy * hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::getNext(class Dummy *) const;
// public: class hkBool hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::isValid(class Dummy *) const;
// public: void hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::insert(unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *);
// public: class Dummy * hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::findKey(unsigned long) const;
// public: int hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::getSize(void) const;
// public: static unsigned int hkMapOperations<void *>::hash(void *, unsigned int);
// public: static void hkMapOperations<void *>::invalidate(void *&);
// public: static int hkMapOperations<void *>::isValid(void *);
// public: static int hkMapOperations<void *>::equal(void *, void *);
// public: void hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::clear(void);
// protected: void hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::resizeTable(class hkMemoryAllocator &, int);
// public: void hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::clear(void);
// protected: void hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::resizeTable(int);

//public: hkDefaultMemoryTracker::hkDefaultMemoryTracker(class hkMemoryAllocator *)
//{
//    mangled_ppc("??0hkDefaultMemoryTracker@@QAA@PAVhkMemoryAllocator@@@Z");
//};

//public: virtual hkDefaultMemoryTracker::~hkDefaultMemoryTracker(void)
//{
//    mangled_ppc("??1hkDefaultMemoryTracker@@UAA@XZ");
//};

//protected: struct hkDefaultMemoryTracker::ClassAlloc * hkDefaultMemoryTracker::_addClassAlloc(class type_info const *, unsigned int, void *, int)
//{
//    mangled_ppc("?_addClassAlloc@hkDefaultMemoryTracker@@IAAPAUClassAlloc@1@PBVtype_info@@IPAXH@Z");
//};

//protected: void hkDefaultMemoryTracker::_removeClassAlloc(void *)
//{
//    mangled_ppc("?_removeClassAlloc@hkDefaultMemoryTracker@@IAAXPAX@Z");
//};

//public: virtual void hkDefaultMemoryTracker::onNewReferencedObject(unsigned int, void *)
//{
//    mangled_ppc("?onNewReferencedObject@hkDefaultMemoryTracker@@UAAXIPAX@Z");
//};

//public: virtual void hkDefaultMemoryTracker::onDeleteReferencedObject(void *)
//{
//    mangled_ppc("?onDeleteReferencedObject@hkDefaultMemoryTracker@@UAAXPAX@Z");
//};

//public: virtual void hkDefaultMemoryTracker::onNewObject(class type_info const &, unsigned int, void *)
//{
//    mangled_ppc("?onNewObject@hkDefaultMemoryTracker@@UAAXABVtype_info@@IPAX@Z");
//};

//public: virtual void hkDefaultMemoryTracker::onDeleteObject(void *)
//{
//    mangled_ppc("?onDeleteObject@hkDefaultMemoryTracker@@UAAXPAX@Z");
//};

//public: virtual void hkDefaultMemoryTracker::addClassDefinition(struct hkMemoryTracker::ClassDefinition const &)
//{
//    mangled_ppc("?addClassDefinition@hkDefaultMemoryTracker@@UAAXABUClassDefinition@hkMemoryTracker@@@Z");
//};

//unsigned long _calcHash(char const *, int)
//{
//    mangled_ppc("?_calcHash@@YAKPBDH@Z");
//};

//public: virtual struct hkMemoryTracker::ClassDefinition const * hkDefaultMemoryTracker::getClassDefinition(class type_info const &)
//{
//    mangled_ppc("?getClassDefinition@hkDefaultMemoryTracker@@UAAPBUClassDefinition@hkMemoryTracker@@ABVtype_info@@@Z");
//};

//public: virtual struct hkMemoryTracker::ClassDefinition const * hkDefaultMemoryTracker::findClassDefinition(struct hkSubString const &)
//{
//    mangled_ppc("?findClassDefinition@hkDefaultMemoryTracker@@UAAPBUClassDefinition@hkMemoryTracker@@ABUhkSubString@@@Z");
//};

//public: static void hkDefaultMemoryTracker::memorySizeToText(unsigned int, class hkStringBuf &)
//{
//    mangled_ppc("?memorySizeToText@hkDefaultMemoryTracker@@SAXIAAVhkStringBuf@@@Z");
//};

//public: hkAllocatorFreeListMemoryServer::hkAllocatorFreeListMemoryServer(class hkMemoryAllocator *)
//{
//    mangled_ppc("??0hkAllocatorFreeListMemoryServer@@QAA@PAVhkMemoryAllocator@@@Z");
//};

//public: hkFreeListAllocatorServer::hkFreeListAllocatorServer(void)
//{
//    mangled_ppc("??0hkFreeListAllocatorServer@@QAA@XZ");
//};

//merged_83EEE158
//{
//    mangled_ppc("merged_83EEE158");
//};

//public: virtual hkFreeListAllocatorServer::~hkFreeListAllocatorServer(void)
//{
//    mangled_ppc("??1hkFreeListAllocatorServer@@UAA@XZ");
//};

//public: virtual void * hkAllocatorFreeListMemoryServer::alloc(unsigned int)
//{
//    mangled_ppc("?alloc@hkAllocatorFreeListMemoryServer@@UAAPAXI@Z");
//};

//public: virtual void hkAllocatorFreeListMemoryServer::free(void *)
//{
//    mangled_ppc("?free@hkAllocatorFreeListMemoryServer@@UAAXPAX@Z");
//};

//public: virtual class hkBool hkAllocatorFreeListMemoryServer::isValidAlloc(void *)
//{
//    mangled_ppc("?isValidAlloc@hkAllocatorFreeListMemoryServer@@UAA?AVhkBool@@PAX@Z");
//};

//public: virtual unsigned int hkAllocatorFreeListMemoryServer::getAllocatedSize(void const *, unsigned int)
//{
//    mangled_ppc("?getAllocatedSize@hkAllocatorFreeListMemoryServer@@UAAIPBXI@Z");
//};

//public: virtual unsigned int hkAllocatorFreeListMemoryServer::getAllocatedSizeWithOverhead(void *, unsigned int)
//{
//    mangled_ppc("?getAllocatedSizeWithOverhead@hkAllocatorFreeListMemoryServer@@UAAIPAXI@Z");
//};

//public: virtual void * hkAllocatorFreeListMemoryServer::criticalAlloc(unsigned int)
//{
//    mangled_ppc("?criticalAlloc@hkAllocatorFreeListMemoryServer@@UAAPAXI@Z");
//};

//public: virtual void hkAllocatorFreeListMemoryServer::criticalFree(void *, unsigned int)
//{
//    mangled_ppc("?criticalFree@hkAllocatorFreeListMemoryServer@@UAAXPAXI@Z");
//};

//merged_83EEE318
//{
//    mangled_ppc("merged_83EEE318");
//};

//public: static void hkAllocatorFreeListMemoryServer::operator delete(void *)
//{
//    mangled_ppc("??3hkAllocatorFreeListMemoryServer@@SAXPAX@Z");
//};

//public: virtual hkAllocatorFreeListMemoryServer::~hkAllocatorFreeListMemoryServer(void)
//{
//    mangled_ppc("??1hkAllocatorFreeListMemoryServer@@UAA@XZ");
//};

//merged_83EEE390
//{
//    mangled_ppc("merged_83EEE390");
//};

//public: static void hkDefaultMemoryTracker::operator delete(void *)
//{
//    mangled_ppc("??3hkDefaultMemoryTracker@@SAXPAX@Z");
//};

//public: hkMemoryTracker::hkMemoryTracker(void)
//{
//    mangled_ppc("??0hkMemoryTracker@@QAA@XZ");
//};

//merged_83EEE400
//{
//    mangled_ppc("merged_83EEE400");
//};

//public: static void hkMemoryTracker::operator delete(void *)
//{
//    mangled_ppc("??3hkMemoryTracker@@SAXPAX@Z");
//};

//public: virtual hkMemoryTracker::~hkMemoryTracker(void)
//{
//    mangled_ppc("??1hkMemoryTracker@@UAA@XZ");
//};

//public: int hkSubString::length(void) const
//{
//    mangled_ppc("?length@hkSubString@@QBAHXZ");
//};

//public: void hkSubString::set(char const *, int)
//{
//    mangled_ppc("?set@hkSubString@@QAAXPBDH@Z");
//};

//public: hkMap<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *>, struct hkDefaultMemoryTrackerAllocator>::hkMap<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *>, struct hkDefaultMemoryTrackerAllocator>(int)
//{
//    mangled_ppc("??0?$hkMap@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@UhkDefaultMemoryTrackerAllocator@@@@QAA@H@Z");
//};

//public: hkMap<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *>, struct hkDefaultMemoryTrackerAllocator>::~hkMap<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *>, struct hkDefaultMemoryTrackerAllocator>(void)
//{
//    mangled_ppc("??1?$hkMap@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@UhkDefaultMemoryTrackerAllocator@@@@QAA@XZ");
//};

//public: class hkMemoryAllocator & hkDefaultMemoryTrackerAllocator::get(void *)
//{
//    mangled_ppc("?get@hkDefaultMemoryTrackerAllocator@@QAAAAVhkMemoryAllocator@@PAX@Z");
//};

//public: int hkMap<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *>, struct hkDefaultMemoryTrackerAllocator>::insert(void *, struct hkDefaultMemoryTracker::ClassAlloc *)
//{
//    mangled_ppc("?insert@?$hkMap@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@UhkDefaultMemoryTrackerAllocator@@@@QAAHPAXPAUClassAlloc@hkDefaultMemoryTracker@@@Z");
//};

//public: class hkBool hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::hasKey(void *) const
//{
//    mangled_ppc("?hasKey@?$hkMapBase@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@@@QBA?AVhkBool@@PAX@Z");
//};

//public: void hkMap<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *>, struct hkDefaultMemoryTrackerAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkMap@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@UhkDefaultMemoryTrackerAllocator@@@@QAAXH@Z");
//};

//public: hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >(void)
//{
//    mangled_ppc("??0?$hkMapBase@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@@@QAA@XZ");
//};

//public: hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::~hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >(void)
//{
//    mangled_ppc("??1?$hkMapBase@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@@@QAA@XZ");
//};

//public: struct hkDefaultMemoryTracker::ClassAlloc * hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkMapBase@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@@@QBAPAUClassAlloc@hkDefaultMemoryTracker@@PAVDummy@@@Z");
//};

//public: class hkBool hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkMapBase@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: int hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::insert(class hkMemoryAllocator &, void *, struct hkDefaultMemoryTracker::ClassAlloc *)
//{
//    mangled_ppc("?insert@?$hkMapBase@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@@@QAAHAAVhkMemoryAllocator@@PAXPAUClassAlloc@hkDefaultMemoryTracker@@@Z");
//};

//public: class Dummy * hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::findKey(void *) const
//{
//    mangled_ppc("?findKey@?$hkMapBase@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@@@QBAPAVDummy@@PAX@Z");
//};

//public: void hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::remove(class Dummy *)
//{
//    mangled_ppc("?remove@?$hkMapBase@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@@@QAAXPAVDummy@@@Z");
//};

//public: void hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkMapBase@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?reserve@?$hkMapBase@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>(void)
//{
//    mangled_ppc("??0?$hkMultiMap@KPBUClassEntry@hkDefaultMemoryTracker@@U?$hkMapOperations@K@@UhkDefaultMemoryTrackerAllocator@@@@QAA@XZ");
//};

//public: hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::~hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>(void)
//{
//    mangled_ppc("??1?$hkMultiMap@KPBUClassEntry@hkDefaultMemoryTracker@@U?$hkMapOperations@K@@UhkDefaultMemoryTrackerAllocator@@@@QAA@XZ");
//};

//public: class Dummy * hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkMultiMap@KPBUClassEntry@hkDefaultMemoryTracker@@U?$hkMapOperations@K@@UhkDefaultMemoryTrackerAllocator@@@@QBAPAVDummy@@XZ");
//};

//public: struct hkDefaultMemoryTracker::ClassEntry const * hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkMultiMap@KPBUClassEntry@hkDefaultMemoryTracker@@U?$hkMapOperations@K@@UhkDefaultMemoryTrackerAllocator@@@@QBAPBUClassEntry@hkDefaultMemoryTracker@@PAVDummy@@@Z");
//};

//public: class Dummy * hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::getNext(class Dummy *, unsigned long) const
//{
//    mangled_ppc("?getNext@?$hkMultiMap@KPBUClassEntry@hkDefaultMemoryTracker@@U?$hkMapOperations@K@@UhkDefaultMemoryTrackerAllocator@@@@QBAPAVDummy@@PAV2@K@Z");
//};

//public: class Dummy * hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkMultiMap@KPBUClassEntry@hkDefaultMemoryTracker@@U?$hkMapOperations@K@@UhkDefaultMemoryTrackerAllocator@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkMultiMap@KPBUClassEntry@hkDefaultMemoryTracker@@U?$hkMapOperations@K@@UhkDefaultMemoryTrackerAllocator@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: void hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::insert(unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *)
//{
//    mangled_ppc("?insert@?$hkMultiMap@KPBUClassEntry@hkDefaultMemoryTracker@@U?$hkMapOperations@K@@UhkDefaultMemoryTrackerAllocator@@@@QAAXKPBUClassEntry@hkDefaultMemoryTracker@@@Z");
//};

//public: class Dummy * hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::findKey(unsigned long) const
//{
//    mangled_ppc("?findKey@?$hkMultiMap@KPBUClassEntry@hkDefaultMemoryTracker@@U?$hkMapOperations@K@@UhkDefaultMemoryTrackerAllocator@@@@QBAPAVDummy@@K@Z");
//};

//public: int hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkMapBase@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@@@QBAHXZ");
//};

//public: static unsigned int hkMapOperations<void *>::hash(void *, unsigned int)
//{
//    mangled_ppc("?hash@?$hkMapOperations@PAX@@SAIPAXI@Z");
//};

//public: static void hkMapOperations<void *>::invalidate(void *&)
//{
//    mangled_ppc("?invalidate@?$hkMapOperations@PAX@@SAXAAPAX@Z");
//};

//public: static int hkMapOperations<void *>::isValid(void *)
//{
//    mangled_ppc("?isValid@?$hkMapOperations@PAX@@SAHPAX@Z");
//};

//public: static int hkMapOperations<void *>::equal(void *, void *)
//{
//    mangled_ppc("?equal@?$hkMapOperations@PAX@@SAHPAX0@Z");
//};

//public: void hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::clear(void)
//{
//    mangled_ppc("?clear@?$hkMapBase@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@@@QAAXXZ");
//};

//protected: void hkMapBase<void *, struct hkDefaultMemoryTracker::ClassAlloc *, struct hkMapOperations<void *> >::resizeTable(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?resizeTable@?$hkMapBase@PAXPAUClassAlloc@hkDefaultMemoryTracker@@U?$hkMapOperations@PAX@@@@IAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::clear(void)
//{
//    mangled_ppc("?clear@?$hkMultiMap@KPBUClassEntry@hkDefaultMemoryTracker@@U?$hkMapOperations@K@@UhkDefaultMemoryTrackerAllocator@@@@QAAXXZ");
//};

//protected: void hkMultiMap<unsigned long, struct hkDefaultMemoryTracker::ClassEntry const *, struct hkMapOperations<unsigned long>, struct hkDefaultMemoryTrackerAllocator>::resizeTable(int)
//{
//    mangled_ppc("?resizeTable@?$hkMultiMap@KPBUClassEntry@hkDefaultMemoryTracker@@U?$hkMapOperations@K@@UhkDefaultMemoryTrackerAllocator@@@@IAAXH@Z");
//};

