/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkReferencedObjectLock::`RTTI Complete Object Locator'; // "??_R4hkReferencedObjectLock@@6B@"
// hkReferencedObjectLock::`RTTI Class Hierarchy Descriptor'; // "??_R3hkReferencedObjectLock@@8"
// hkReferencedObjectLock::`RTTI Base Class Array'; // "??_R2hkReferencedObjectLock@@8"
// hkReferencedObjectLock::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkReferencedObjectLock@@8"
// hkSingleton<class hkReferencedObjectLock>::`RTTI Base Class Descriptor at (8, -1, 0, 64)'; // "??_R17?0A@EA@?$hkSingleton@VhkReferencedObjectLock@@@@8"
// hkSingleton<class hkReferencedObjectLock>::`RTTI Class Hierarchy Descriptor'; // "??_R3?$hkSingleton@VhkReferencedObjectLock@@@@8"
// hkSingleton<class hkReferencedObjectLock>::`RTTI Base Class Array'; // "??_R2?$hkSingleton@VhkReferencedObjectLock@@@@8"
// hkSingleton<class hkReferencedObjectLock>::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@?$hkSingleton@VhkReferencedObjectLock@@@@8"
// class hkReferencedObjectLock::`RTTI Type Descriptor'; // "??_R0?AVhkReferencedObjectLock@@@8"
// class hkSingleton<class hkReferencedObjectLock>::`RTTI Type Descriptor'; // "??_R0?AV?$hkSingleton@VhkReferencedObjectLock@@@@@8"
// public: static class hkReferencedObjectLock *hkSingleton<class hkReferencedObjectLock>::s_instance; // "?s_instance@?$hkSingleton@VhkReferencedObjectLock@@@@2PAVhkReferencedObjectLock@@A"
// class hkTypeInfo const hkBaseObjectTypeInfo; // "?hkBaseObjectTypeInfo@@3VhkTypeInfo@@B"
// unsigned int hkReferencedObjectLock__s_lockedAll; // "?hkReferencedObjectLock__s_lockedAll@@3IA"

// public: virtual class hkClass const * hkReferencedObject::getClassType(void) const;
// public: virtual void hkReferencedObject::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// public: static void hkReferencedObject::setLockMode(enum hkReferencedObject::LockMode);
// public: static void hkReferencedObject::lockInit(enum hkReferencedObject::LockMode);
// public: static enum hkReferencedObject::LockMode hkReferencedObject::getLockMode(void);
// public: static void hkReferencedObject::lockAll(void);
// public: static void hkReferencedObject::unlockAll(void);
// public: void hkReferencedObject::addReference(void) const;
// public: void hkReferencedObject::removeReference(void) const;
// public: void hkReferencedObject::addReferenceLockUnchecked(void) const;
// public: void hkReferencedObject::removeReferenceLockUnchecked(void) const;
// public: static void hkReferencedObject::addReferences(class hkReferencedObject const *const *, int, int);
// public: static void hkReferencedObject::removeReferences(class hkReferencedObject const *const *, int, int);
// public: static class hkCriticalSection * hkReferencedObject::getLockCriticalSection(void);
// void finishLoadedObjecthkBaseObject(void *, int);
// void cleanupLoadedObjecthkBaseObject(void *);
// void const * getVtablehkBaseObject(void);
// class hkReferencedObject * hkReferencedObjectLockcreate(void);
// public: static void * hkReferencedObjectLock::operator new(unsigned int);
// public: hkReferencedObjectLock::hkReferencedObjectLock(void);
// public: hkMultiThreadCheck::hkMultiThreadCheck(void);
// merged_83EB37B8;
// public: static void hkReferencedObjectLock::operator delete(void *);
// public: virtual hkReferencedObjectLock::~hkReferencedObjectLock(void);
// public: void hkReferencedObjectLock::lock(void);
// public: void hkMultiThreadCheck::markForWrite(void);
// public: void hkReferencedObjectLock::unlock(void);
// public: void hkMultiThreadCheck::unmarkForWrite(void);
// public: static class hkReferencedObjectLock & hkSingleton<class hkReferencedObjectLock>::getInstance(void);
// public: static void hkSingleton<class hkReferencedObjectLock>::replaceInstance(class hkReferencedObjectLock *);
// protected: hkSingleton<class hkReferencedObjectLock>::hkSingleton<class hkReferencedObjectLock>(void);
// class hkReferencedObject const *const * hkAddByteOffsetConst<class hkReferencedObject const *>(class hkReferencedObject const *const *, long);
// public: hkTypeInfo::hkTypeInfo(char const *, void (*)(void *, int), void (*)(void *), void const *);

//public: virtual class hkClass const * hkReferencedObject::getClassType(void) const
//{
//    mangled_ppc("?getClassType@hkReferencedObject@@UBAPBVhkClass@@XZ");
//};

//public: virtual void hkReferencedObject::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkReferencedObject@@UBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//public: static void hkReferencedObject::setLockMode(enum hkReferencedObject::LockMode)
//{
//    mangled_ppc("?setLockMode@hkReferencedObject@@SAXW4LockMode@1@@Z");
//};

//public: static void hkReferencedObject::lockInit(enum hkReferencedObject::LockMode)
//{
//    mangled_ppc("?lockInit@hkReferencedObject@@SAXW4LockMode@1@@Z");
//};

//public: static enum hkReferencedObject::LockMode hkReferencedObject::getLockMode(void)
//{
//    mangled_ppc("?getLockMode@hkReferencedObject@@SA?AW4LockMode@1@XZ");
//};

//public: static void hkReferencedObject::lockAll(void)
//{
//    mangled_ppc("?lockAll@hkReferencedObject@@SAXXZ");
//};

//public: static void hkReferencedObject::unlockAll(void)
//{
//    mangled_ppc("?unlockAll@hkReferencedObject@@SAXXZ");
//};

//public: void hkReferencedObject::addReference(void) const
//{
//    mangled_ppc("?addReference@hkReferencedObject@@QBAXXZ");
//};

//public: void hkReferencedObject::removeReference(void) const
//{
//    mangled_ppc("?removeReference@hkReferencedObject@@QBAXXZ");
//};

//public: void hkReferencedObject::addReferenceLockUnchecked(void) const
//{
//    mangled_ppc("?addReferenceLockUnchecked@hkReferencedObject@@QBAXXZ");
//};

//public: void hkReferencedObject::removeReferenceLockUnchecked(void) const
//{
//    mangled_ppc("?removeReferenceLockUnchecked@hkReferencedObject@@QBAXXZ");
//};

//public: static void hkReferencedObject::addReferences(class hkReferencedObject const *const *, int, int)
//{
//    mangled_ppc("?addReferences@hkReferencedObject@@SAXPBQBV1@HH@Z");
//};

//public: static void hkReferencedObject::removeReferences(class hkReferencedObject const *const *, int, int)
//{
//    mangled_ppc("?removeReferences@hkReferencedObject@@SAXPBQBV1@HH@Z");
//};

//public: static class hkCriticalSection * hkReferencedObject::getLockCriticalSection(void)
//{
//    mangled_ppc("?getLockCriticalSection@hkReferencedObject@@SAPAVhkCriticalSection@@XZ");
//};

//void finishLoadedObjecthkBaseObject(void *, int)
//{
//    mangled_ppc("?finishLoadedObjecthkBaseObject@@YAXPAXH@Z");
//};

//void cleanupLoadedObjecthkBaseObject(void *)
//{
//    mangled_ppc("?cleanupLoadedObjecthkBaseObject@@YAXPAX@Z");
//};

//void const * getVtablehkBaseObject(void)
//{
//    mangled_ppc("?getVtablehkBaseObject@@YAPBXXZ");
//};

//class hkReferencedObject * hkReferencedObjectLockcreate(void)
//{
//    mangled_ppc("?hkReferencedObjectLockcreate@@YAPAVhkReferencedObject@@XZ");
//};

//public: static void * hkReferencedObjectLock::operator new(unsigned int)
//{
//    mangled_ppc("??2hkReferencedObjectLock@@SAPAXI@Z");
//};

//public: hkReferencedObjectLock::hkReferencedObjectLock(void)
//{
//    mangled_ppc("??0hkReferencedObjectLock@@QAA@XZ");
//};

//public: hkMultiThreadCheck::hkMultiThreadCheck(void)
//{
//    mangled_ppc("??0hkMultiThreadCheck@@QAA@XZ");
//};

//merged_83EB37B8
//{
//    mangled_ppc("merged_83EB37B8");
//};

//public: static void hkReferencedObjectLock::operator delete(void *)
//{
//    mangled_ppc("??3hkReferencedObjectLock@@SAXPAX@Z");
//};

//public: virtual hkReferencedObjectLock::~hkReferencedObjectLock(void)
//{
//    mangled_ppc("??1hkReferencedObjectLock@@UAA@XZ");
//};

//public: void hkReferencedObjectLock::lock(void)
//{
//    mangled_ppc("?lock@hkReferencedObjectLock@@QAAXXZ");
//};

//public: void hkMultiThreadCheck::markForWrite(void)
//{
//    mangled_ppc("?markForWrite@hkMultiThreadCheck@@QAAXXZ");
//};

//public: void hkReferencedObjectLock::unlock(void)
//{
//    mangled_ppc("?unlock@hkReferencedObjectLock@@QAAXXZ");
//};

//public: void hkMultiThreadCheck::unmarkForWrite(void)
//{
//    mangled_ppc("?unmarkForWrite@hkMultiThreadCheck@@QAAXXZ");
//};

//public: static class hkReferencedObjectLock & hkSingleton<class hkReferencedObjectLock>::getInstance(void)
//{
//    mangled_ppc("?getInstance@?$hkSingleton@VhkReferencedObjectLock@@@@SAAAVhkReferencedObjectLock@@XZ");
//};

//public: static void hkSingleton<class hkReferencedObjectLock>::replaceInstance(class hkReferencedObjectLock *)
//{
//    mangled_ppc("?replaceInstance@?$hkSingleton@VhkReferencedObjectLock@@@@SAXPAVhkReferencedObjectLock@@@Z");
//};

//protected: hkSingleton<class hkReferencedObjectLock>::hkSingleton<class hkReferencedObjectLock>(void)
//{
//    mangled_ppc("??0?$hkSingleton@VhkReferencedObjectLock@@@@IAA@XZ");
//};

//class hkReferencedObject const *const * hkAddByteOffsetConst<class hkReferencedObject const *>(class hkReferencedObject const *const *, long)
//{
//    mangled_ppc("??$hkAddByteOffsetConst@PBVhkReferencedObject@@@@YAPBQBVhkReferencedObject@@PBQBV0@J@Z");
//};

//public: hkTypeInfo::hkTypeInfo(char const *, void (*)(void *, int), void (*)(void *), void const *)
//{
//    mangled_ppc("??0hkTypeInfo@@QAA@PBDP6AXPAXH@ZP6AX1@ZPBX@Z");
//};

