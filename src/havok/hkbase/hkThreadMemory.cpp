/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkThreadMemory::`RTTI Complete Object Locator'; // "??_R4hkThreadMemory@@6B@"
// hkThreadMemory::`RTTI Class Hierarchy Descriptor'; // "??_R3hkThreadMemory@@8"
// hkThreadMemory::`RTTI Base Class Array'; // "??_R2hkThreadMemory@@8"
// hkThreadMemory::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkThreadMemory@@8"
// class hkThreadMemory::`RTTI Type Descriptor'; // "??_R0?AVhkThreadMemory@@@8"
// class hkCriticalSection s_debugLock; // "?s_debugLock@@3VhkCriticalSection@@A"

// public: virtual void * hkThreadMemory::bufAlloc(int &, int);
// public: virtual void hkThreadMemory::bufFree(void *, int, int);
// public: virtual void * hkThreadMemory::bufRealloc(void *, int, int &, int);
// public: virtual void hkThreadMemory::blockAllocBatch(void **, int, int);
// public: virtual void hkThreadMemory::blockFreeBatch(void **, int, int);
// public: hkThreadMemory::hkThreadMemory(void);
// public: hkThreadMemory::hkThreadMemory(class hkMemoryAllocator *);
// public: virtual void hkThreadMemory::getMemoryStatistics(struct hkMemoryAllocator::MemoryStatistics &);
// protected: void hkThreadMemory::initLookupTables(void);
// public: unsigned int hkThreadMemory::getCachedSizeUnchecked(void);
// public: void hkThreadMemory::setMemory(class hkMemoryAllocator *, int);
// public: virtual void hkThreadMemory::releaseCachedMemory(void);
// protected: void * hkThreadMemory::onRowEmpty(int);
// protected: void hkThreadMemory::onRowFull(int, void *);
// protected: void hkThreadMemory::clearRow(int);
// public: virtual void * hkThreadMemory::blockAlloc(int);
// public: virtual void hkThreadMemory::blockFree(void *, int);
// public: virtual bool hkThreadMemory::canAllocTotal(int);
// public: virtual int hkThreadMemory::getAllocatedSize(void const *, int);
// public: hkThreadMemory::FreeList::FreeList(void);
// public: static int hkThreadMemory::constSizeToRow(int);
// public: int hkThreadMemory::rowToSize(int) const;
// public: void hkThreadMemory::FreeList::put(void *);
// public: void * hkThreadMemory::FreeList::get(void);
// public: int hkThreadMemory::getRow(int) const;
// void s_debugLock::`dynamic atexit destructor'(void);

//public: virtual void * hkThreadMemory::bufAlloc(int &, int)
//{
//    mangled_ppc("?bufAlloc@hkThreadMemory@@UAAPAXAAHH@Z");
//};

//public: virtual void hkThreadMemory::bufFree(void *, int, int)
//{
//    mangled_ppc("?bufFree@hkThreadMemory@@UAAXPAXHH@Z");
//};

//public: virtual void * hkThreadMemory::bufRealloc(void *, int, int &, int)
//{
//    mangled_ppc("?bufRealloc@hkThreadMemory@@UAAPAXPAXHAAHH@Z");
//};

//public: virtual void hkThreadMemory::blockAllocBatch(void **, int, int)
//{
//    mangled_ppc("?blockAllocBatch@hkThreadMemory@@UAAXPAPAXHH@Z");
//};

//public: virtual void hkThreadMemory::blockFreeBatch(void **, int, int)
//{
//    mangled_ppc("?blockFreeBatch@hkThreadMemory@@UAAXPAPAXHH@Z");
//};

//public: hkThreadMemory::hkThreadMemory(void)
//{
//    mangled_ppc("??0hkThreadMemory@@QAA@XZ");
//};

//public: hkThreadMemory::hkThreadMemory(class hkMemoryAllocator *)
//{
//    mangled_ppc("??0hkThreadMemory@@QAA@PAVhkMemoryAllocator@@@Z");
//};

//public: virtual void hkThreadMemory::getMemoryStatistics(struct hkMemoryAllocator::MemoryStatistics &)
//{
//    mangled_ppc("?getMemoryStatistics@hkThreadMemory@@UAAXAAUMemoryStatistics@hkMemoryAllocator@@@Z");
//};

//protected: void hkThreadMemory::initLookupTables(void)
//{
//    mangled_ppc("?initLookupTables@hkThreadMemory@@IAAXXZ");
//};

//public: unsigned int hkThreadMemory::getCachedSizeUnchecked(void)
//{
//    mangled_ppc("?getCachedSizeUnchecked@hkThreadMemory@@QAAIXZ");
//};

//public: void hkThreadMemory::setMemory(class hkMemoryAllocator *, int)
//{
//    mangled_ppc("?setMemory@hkThreadMemory@@QAAXPAVhkMemoryAllocator@@H@Z");
//};

//public: virtual void hkThreadMemory::releaseCachedMemory(void)
//{
//    mangled_ppc("?releaseCachedMemory@hkThreadMemory@@UAAXXZ");
//};

//protected: void * hkThreadMemory::onRowEmpty(int)
//{
//    mangled_ppc("?onRowEmpty@hkThreadMemory@@IAAPAXH@Z");
//};

//protected: void hkThreadMemory::onRowFull(int, void *)
//{
//    mangled_ppc("?onRowFull@hkThreadMemory@@IAAXHPAX@Z");
//};

//protected: void hkThreadMemory::clearRow(int)
//{
//    mangled_ppc("?clearRow@hkThreadMemory@@IAAXH@Z");
//};

//public: virtual void * hkThreadMemory::blockAlloc(int)
//{
//    mangled_ppc("?blockAlloc@hkThreadMemory@@UAAPAXH@Z");
//};

//public: virtual void hkThreadMemory::blockFree(void *, int)
//{
//    mangled_ppc("?blockFree@hkThreadMemory@@UAAXPAXH@Z");
//};

//public: virtual bool hkThreadMemory::canAllocTotal(int)
//{
//    mangled_ppc("?canAllocTotal@hkThreadMemory@@UAA_NH@Z");
//};

//public: virtual int hkThreadMemory::getAllocatedSize(void const *, int)
//{
//    mangled_ppc("?getAllocatedSize@hkThreadMemory@@UAAHPBXH@Z");
//};

//public: hkThreadMemory::FreeList::FreeList(void)
//{
//    mangled_ppc("??0FreeList@hkThreadMemory@@QAA@XZ");
//};

//public: static int hkThreadMemory::constSizeToRow(int)
//{
//    mangled_ppc("?constSizeToRow@hkThreadMemory@@SAHH@Z");
//};

//public: int hkThreadMemory::rowToSize(int) const
//{
//    mangled_ppc("?rowToSize@hkThreadMemory@@QBAHH@Z");
//};

//public: void hkThreadMemory::FreeList::put(void *)
//{
//    mangled_ppc("?put@FreeList@hkThreadMemory@@QAAXPAX@Z");
//};

//public: void * hkThreadMemory::FreeList::get(void)
//{
//    mangled_ppc("?get@FreeList@hkThreadMemory@@QAAPAXXZ");
//};

//public: int hkThreadMemory::getRow(int) const
//{
//    mangled_ppc("?getRow@hkThreadMemory@@QBAHH@Z");
//};

//void s_debugLock::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fs_debugLock@@YAXXZ");
//};

