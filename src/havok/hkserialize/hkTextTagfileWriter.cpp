/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// int const *const const `public: void __cdecl Context::writeArray(class hkDataArray const &)'::`2'::wrapModLut; // "?wrapModLut@?1??writeArray@Context@@QAAXABVhkDataArray@@@Z@4QBHB"

// public: virtual enum hkResult hkTextTagfileWriter::save(class hkDataObject const &, class hkStreamWriter *, class hkTagfileWriter::AddDataObjectListener *);
// int worthPrinting<class hkDataObject::Value>(class hkDataObject::Value const &);
// void writeFloat(class hkOstream &, float);
// void writeReals(class hkOstream &, float const *, int);
// int worthPrinting<class hkDataArray::Value>(class hkDataArray::Value const &);
// public: Context::Context(class hkStreamWriter *, class hkTagfileWriter::AddDataObjectListener *);
// public: void Context::Details::clear(void);
// public: void Context::scanObject(class hkDataObject const &);
// public: int Context::isFirstTimeSeeing(class hkDataObject const &);
// public: void Context::scanObjectMembers(class hkDataObject const &);
// public: void Context::writeObject(class hkDataObject const &);
// public: char const * Context::getIndent(void) const;
// public: int Context::getObjectIndex(class hkDataObject const &) const;
// public: void Context::writeObjectMembers(class hkDataObject const &);
// public: void Context::pushIndent(void);
// public: void Context::popIndent(void);
// public: Context::ListenerCache::ListenerCache(class hkTagfileWriter::AddDataObjectListener *);
// public: class hkDataObject Context::ListenerCache::getCachedDataObject(class hkDataObject const &);
// public: class hkDataObject Context::ListenerCache::callListenerAndCache(class hkDataObject const &);
// public: Context::~Context(void);
// public: Context::ListenerCache::~ListenerCache(void);
// public: void hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::iShouldNotHaveVtable(void) const;
// public: static void * hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::operator new(unsigned int);
// public: static void hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::operator delete(void *);
// public: static void * hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::operator new(unsigned int, void *);
// public: static void * hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::operator new[](unsigned int, void *);
// public: static void hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::operator delete(void *, void *);
// public: static void hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::operator delete[](void *, void *);
// public: hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>(int);
// public: hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>(void *, int);
// public: hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::~hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>(void);
// public: int hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::insert(struct hkDataObject::Handle, int);
// public: class Dummy * hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::findOrInsertKey(struct hkDataObject::Handle, int);
// public: void hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::reserve(int);
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::iShouldNotHaveVtable(void) const;
// public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::operator new(unsigned int);
// public: static void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::operator delete(void *);
// public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::operator new(unsigned int, void *);
// public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::operator new[](unsigned int, void *);
// public: static void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::operator delete(void *, void *);
// public: static void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::operator delete[](void *, void *);
// public: hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>(void);
// public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::hasKey(struct hkDataObject::Handle) const;
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getSize(void) const;
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getCapacity(void) const;
// public: void * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getMemStart(void) const;
// public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::wasReallocated(void) const;
// protected: static int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::isPower2(unsigned int);
// public: hkArray<class hkDataObject *, struct hkContainerHeapAllocator>::hkArray<class hkDataObject *, struct hkContainerHeapAllocator>(void);
// public: class hkDataObject *& hkArray<class hkDataObject *, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkArray<struct Context::Details, struct hkContainerHeapAllocator>::hkArray<struct Context::Details, struct hkContainerHeapAllocator>(void);
// public: struct Context::Details & hkArray<struct Context::Details, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>(void *, int);
// public: static void Context::HandleOps::invalidate(struct hkDataObject::Handle &);
// public: hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::~hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>(void);
// public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getIterator(void) const;
// public: static int Context::HandleOps::isValid(struct hkDataObject::Handle &);
// public: struct hkDataObject::Handle hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getKey(class Dummy *) const;
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getValue(class Dummy *) const;
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::setValue(class Dummy *, int);
// public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getNext(class Dummy *) const;
// public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::isValid(class Dummy *) const;
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::insert(class hkMemoryAllocator &, struct hkDataObject::Handle, int);
// public: static unsigned int Context::HandleOps::hash(struct hkDataObject::Handle const &, unsigned int);
// public: static int Context::HandleOps::equal(struct hkDataObject::Handle const &, struct hkDataObject::Handle const &);
// public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::findKey(struct hkDataObject::Handle) const;
// public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::findOrInsertKey(class hkMemoryAllocator &, struct hkDataObject::Handle, int);
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getWithDefault(struct hkDataObject::Handle, int) const;
// public: enum hkResult hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::get(struct hkDataObject::Handle, int *) const;
// public: enum hkResult hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::remove(struct hkDataObject::Handle);
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::remove(class Dummy *);
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getMemSize(void) const;
// public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::isOk(void) const;
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::clear(void);
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::reserve(class hkMemoryAllocator &, int);
// public: static int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getSizeInBytesFor(int);
// protected: void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::resizeTable(class hkMemoryAllocator &, int);
// public: void hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::swap(class hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator> &);
// public: hkArray<class hkDataObject *, struct hkContainerHeapAllocator>::~hkArray<class hkDataObject *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct Context::Details>::hkArrayBase<struct Context::Details>(void);
// public: struct Context::Details & hkArrayBase<struct Context::Details>::operator[](int);
// public: int hkArrayBase<struct Context::Details>::getSize(void) const;
// public: struct Context::Details & hkArrayBase<struct Context::Details>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<struct Context::Details, struct hkContainerHeapAllocator>::~hkArray<struct Context::Details, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct Context::Details>::~hkArrayBase<struct Context::Details>(void);
// public: void Context::writeValue<class hkDataObject::Value>(class hkDataObject::Value const &);
// public: void Context::writeArray(class hkDataArray const &);
// public: void Context::writeValue<class hkDataArray::Value>(class hkDataArray::Value const &);
// public: void hkArray<class hkDataObject *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct Context::Details, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<struct Context::Details>::getCapacity(void) const;
// public: void hkArrayBase<struct Context::Details>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::construct<struct Context::Details>(struct Context::Details *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<struct Context::Details>::clear(void);
// public: static void hkArrayUtil::destruct<struct Context::Details>(struct Context::Details *, int, struct hkTraitBool<0>);

//public: virtual enum hkResult hkTextTagfileWriter::save(class hkDataObject const &, class hkStreamWriter *, class hkTagfileWriter::AddDataObjectListener *)
//{
//    mangled_ppc("?save@hkTextTagfileWriter@@UAA?AW4hkResult@@ABVhkDataObject@@PAVhkStreamWriter@@PAVAddDataObjectListener@hkTagfileWriter@@@Z");
//};

//int worthPrinting<class hkDataObject::Value>(class hkDataObject::Value const &)
//{
//    mangled_ppc("??$worthPrinting@VValue@hkDataObject@@@@YAHABVValue@hkDataObject@@@Z");
//};

//void writeFloat(class hkOstream &, float)
//{
//    mangled_ppc("?writeFloat@@YAXAAVhkOstream@@M@Z");
//};

//void writeReals(class hkOstream &, float const *, int)
//{
//    mangled_ppc("?writeReals@@YAXAAVhkOstream@@PBMH@Z");
//};

//int worthPrinting<class hkDataArray::Value>(class hkDataArray::Value const &)
//{
//    mangled_ppc("??$worthPrinting@VValue@hkDataArray@@@@YAHABVValue@hkDataArray@@@Z");
//};

//public: Context::Context(class hkStreamWriter *, class hkTagfileWriter::AddDataObjectListener *)
//{
//    mangled_ppc("??0Context@@QAA@PAVhkStreamWriter@@PAVAddDataObjectListener@hkTagfileWriter@@@Z");
//};

//public: void Context::Details::clear(void)
//{
//    mangled_ppc("?clear@Details@Context@@QAAXXZ");
//};

//public: void Context::scanObject(class hkDataObject const &)
//{
//    mangled_ppc("?scanObject@Context@@QAAXABVhkDataObject@@@Z");
//};

//public: int Context::isFirstTimeSeeing(class hkDataObject const &)
//{
//    mangled_ppc("?isFirstTimeSeeing@Context@@QAAHABVhkDataObject@@@Z");
//};

//public: void Context::scanObjectMembers(class hkDataObject const &)
//{
//    mangled_ppc("?scanObjectMembers@Context@@QAAXABVhkDataObject@@@Z");
//};

//public: void Context::writeObject(class hkDataObject const &)
//{
//    mangled_ppc("?writeObject@Context@@QAAXABVhkDataObject@@@Z");
//};

//public: char const * Context::getIndent(void) const
//{
//    mangled_ppc("?getIndent@Context@@QBAPBDXZ");
//};

//public: int Context::getObjectIndex(class hkDataObject const &) const
//{
//    mangled_ppc("?getObjectIndex@Context@@QBAHABVhkDataObject@@@Z");
//};

//public: void Context::writeObjectMembers(class hkDataObject const &)
//{
//    mangled_ppc("?writeObjectMembers@Context@@QAAXABVhkDataObject@@@Z");
//};

//public: void Context::pushIndent(void)
//{
//    mangled_ppc("?pushIndent@Context@@QAAXXZ");
//};

//public: void Context::popIndent(void)
//{
//    mangled_ppc("?popIndent@Context@@QAAXXZ");
//};

//public: Context::ListenerCache::ListenerCache(class hkTagfileWriter::AddDataObjectListener *)
//{
//    mangled_ppc("??0ListenerCache@Context@@QAA@PAVAddDataObjectListener@hkTagfileWriter@@@Z");
//};

//public: class hkDataObject Context::ListenerCache::getCachedDataObject(class hkDataObject const &)
//{
//    mangled_ppc("?getCachedDataObject@ListenerCache@Context@@QAA?AVhkDataObject@@ABV3@@Z");
//};

//public: class hkDataObject Context::ListenerCache::callListenerAndCache(class hkDataObject const &)
//{
//    mangled_ppc("?callListenerAndCache@ListenerCache@Context@@QAA?AVhkDataObject@@ABV3@@Z");
//};

//public: Context::~Context(void)
//{
//    mangled_ppc("??1Context@@QAA@XZ");
//};

//public: Context::ListenerCache::~ListenerCache(void)
//{
//    mangled_ppc("??1ListenerCache@Context@@QAA@XZ");
//};

//public: void hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::iShouldNotHaveVtable(void) const
//{
//    mangled_ppc("?iShouldNotHaveVtable@?$hkMap@UHandle@hkDataObject@@HUHandleOps@Context@@UhkContainerHeapAllocator@@@@QBAXXZ");
//};

//public: static void * hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkMap@UHandle@hkDataObject@@HUHandleOps@Context@@UhkContainerHeapAllocator@@@@SAPAXI@Z");
//};

//public: static void hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkMap@UHandle@hkDataObject@@HUHandleOps@Context@@UhkContainerHeapAllocator@@@@SAXPAX@Z");
//};

//public: static void * hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$hkMap@UHandle@hkDataObject@@HUHandleOps@Context@@UhkContainerHeapAllocator@@@@SAPAXIPAX@Z");
//};

//public: static void * hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::operator new[](unsigned int, void *)
//{
//    mangled_ppc("??_U?$hkMap@UHandle@hkDataObject@@HUHandleOps@Context@@UhkContainerHeapAllocator@@@@SAPAXIPAX@Z");
//};

//public: static void hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::operator delete(void *, void *)
//{
//    mangled_ppc("??3?$hkMap@UHandle@hkDataObject@@HUHandleOps@Context@@UhkContainerHeapAllocator@@@@SAXPAX0@Z");
//};

//public: static void hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::operator delete[](void *, void *)
//{
//    mangled_ppc("??_V?$hkMap@UHandle@hkDataObject@@HUHandleOps@Context@@UhkContainerHeapAllocator@@@@SAXPAX0@Z");
//};

//public: hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkMap@UHandle@hkDataObject@@HUHandleOps@Context@@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>(void *, int)
//{
//    mangled_ppc("??0?$hkMap@UHandle@hkDataObject@@HUHandleOps@Context@@UhkContainerHeapAllocator@@@@QAA@PAXH@Z");
//};

//public: hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::~hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkMap@UHandle@hkDataObject@@HUHandleOps@Context@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::insert(struct hkDataObject::Handle, int)
//{
//    mangled_ppc("?insert@?$hkMap@UHandle@hkDataObject@@HUHandleOps@Context@@UhkContainerHeapAllocator@@@@QAAHUHandle@hkDataObject@@H@Z");
//};

//public: class Dummy * hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::findOrInsertKey(struct hkDataObject::Handle, int)
//{
//    mangled_ppc("?findOrInsertKey@?$hkMap@UHandle@hkDataObject@@HUHandleOps@Context@@UhkContainerHeapAllocator@@@@QAAPAVDummy@@UHandle@hkDataObject@@H@Z");
//};

//public: void hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkMap@UHandle@hkDataObject@@HUHandleOps@Context@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::iShouldNotHaveVtable(void) const
//{
//    mangled_ppc("?iShouldNotHaveVtable@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBAXXZ");
//};

//public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@SAPAXI@Z");
//};

//public: static void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@SAXPAX@Z");
//};

//public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@SAPAXIPAX@Z");
//};

//public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::operator new[](unsigned int, void *)
//{
//    mangled_ppc("??_U?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@SAPAXIPAX@Z");
//};

//public: static void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::operator delete(void *, void *)
//{
//    mangled_ppc("??3?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@SAXPAX0@Z");
//};

//public: static void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::operator delete[](void *, void *)
//{
//    mangled_ppc("??_V?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@SAXPAX0@Z");
//};

//public: hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>(void)
//{
//    mangled_ppc("??0?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QAA@XZ");
//};

//public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::hasKey(struct hkDataObject::Handle) const
//{
//    mangled_ppc("?hasKey@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBA?AVhkBool@@UHandle@hkDataObject@@@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBAHXZ");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBAHXZ");
//};

//public: void * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getMemStart(void) const
//{
//    mangled_ppc("?getMemStart@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBAPAXXZ");
//};

//public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBA?AVhkBool@@XZ");
//};

//protected: static int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::isPower2(unsigned int)
//{
//    mangled_ppc("?isPower2@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@KAHI@Z");
//};

//public: hkArray<class hkDataObject *, struct hkContainerHeapAllocator>::hkArray<class hkDataObject *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkDataObject@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: class hkDataObject *& hkArray<class hkDataObject *, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@PAVhkDataObject@@UhkContainerHeapAllocator@@@@QAAAAPAVhkDataObject@@XZ");
//};

//public: hkArray<struct Context::Details, struct hkContainerHeapAllocator>::hkArray<struct Context::Details, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UDetails@Context@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct Context::Details & hkArray<struct Context::Details, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UDetails@Context@@UhkContainerHeapAllocator@@@@QAAAAUDetails@Context@@XZ");
//};

//public: hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>(void *, int)
//{
//    mangled_ppc("??0?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QAA@PAXH@Z");
//};

//public: static void Context::HandleOps::invalidate(struct hkDataObject::Handle &)
//{
//    mangled_ppc("?invalidate@HandleOps@Context@@SAXAAUHandle@hkDataObject@@@Z");
//};

//public: hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::~hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>(void)
//{
//    mangled_ppc("??1?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QAA@XZ");
//};

//public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBAPAVDummy@@XZ");
//};

//public: static int Context::HandleOps::isValid(struct hkDataObject::Handle &)
//{
//    mangled_ppc("?isValid@HandleOps@Context@@SAHAAUHandle@hkDataObject@@@Z");
//};

//public: struct hkDataObject::Handle hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBA?AUHandle@hkDataObject@@PAVDummy@@@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBAHPAVDummy@@@Z");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::setValue(class Dummy *, int)
//{
//    mangled_ppc("?setValue@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QAAXPAVDummy@@H@Z");
//};

//public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::insert(class hkMemoryAllocator &, struct hkDataObject::Handle, int)
//{
//    mangled_ppc("?insert@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QAAHAAVhkMemoryAllocator@@UHandle@hkDataObject@@H@Z");
//};

//public: static unsigned int Context::HandleOps::hash(struct hkDataObject::Handle const &, unsigned int)
//{
//    mangled_ppc("?hash@HandleOps@Context@@SAIABUHandle@hkDataObject@@I@Z");
//};

//public: static int Context::HandleOps::equal(struct hkDataObject::Handle const &, struct hkDataObject::Handle const &)
//{
//    mangled_ppc("?equal@HandleOps@Context@@SAHABUHandle@hkDataObject@@0@Z");
//};

//public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::findKey(struct hkDataObject::Handle) const
//{
//    mangled_ppc("?findKey@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBAPAVDummy@@UHandle@hkDataObject@@@Z");
//};

//public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::findOrInsertKey(class hkMemoryAllocator &, struct hkDataObject::Handle, int)
//{
//    mangled_ppc("?findOrInsertKey@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QAAPAVDummy@@AAVhkMemoryAllocator@@UHandle@hkDataObject@@H@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getWithDefault(struct hkDataObject::Handle, int) const
//{
//    mangled_ppc("?getWithDefault@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBAHUHandle@hkDataObject@@H@Z");
//};

//public: enum hkResult hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::get(struct hkDataObject::Handle, int *) const
//{
//    mangled_ppc("?get@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBA?AW4hkResult@@UHandle@hkDataObject@@PAH@Z");
//};

//public: enum hkResult hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::remove(struct hkDataObject::Handle)
//{
//    mangled_ppc("?remove@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QAA?AW4hkResult@@UHandle@hkDataObject@@@Z");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::remove(class Dummy *)
//{
//    mangled_ppc("?remove@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QAAXPAVDummy@@@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getMemSize(void) const
//{
//    mangled_ppc("?getMemSize@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBAHXZ");
//};

//public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::isOk(void) const
//{
//    mangled_ppc("?isOk@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QBA?AVhkBool@@XZ");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::clear(void)
//{
//    mangled_ppc("?clear@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QAAXXZ");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?reserve@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static int hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::getSizeInBytesFor(int)
//{
//    mangled_ppc("?getSizeInBytesFor@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@SAHH@Z");
//};

//protected: void hkMapBase<struct hkDataObject::Handle, int, struct Context::HandleOps>::resizeTable(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?resizeTable@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Context@@@@IAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator>::swap(class hkMap<struct hkDataObject::Handle, int, struct Context::HandleOps, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkMap@UHandle@hkDataObject@@HUHandleOps@Context@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

//public: hkArray<class hkDataObject *, struct hkContainerHeapAllocator>::~hkArray<class hkDataObject *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkDataObject@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct Context::Details>::hkArrayBase<struct Context::Details>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UDetails@Context@@@@QAA@XZ");
//};

//public: struct Context::Details & hkArrayBase<struct Context::Details>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UDetails@Context@@@@QAAAAUDetails@Context@@H@Z");
//};

//public: int hkArrayBase<struct Context::Details>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UDetails@Context@@@@QBAHXZ");
//};

//public: struct Context::Details & hkArrayBase<struct Context::Details>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UDetails@Context@@@@QAAAAUDetails@Context@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<struct Context::Details, struct hkContainerHeapAllocator>::~hkArray<struct Context::Details, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UDetails@Context@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct Context::Details>::~hkArrayBase<struct Context::Details>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UDetails@Context@@@@QAA@XZ");
//};

//public: void Context::writeValue<class hkDataObject::Value>(class hkDataObject::Value const &)
//{
//    mangled_ppc("??$writeValue@VValue@hkDataObject@@@Context@@QAAXABVValue@hkDataObject@@@Z");
//};

//public: void Context::writeArray(class hkDataArray const &)
//{
//    mangled_ppc("?writeArray@Context@@QAAXABVhkDataArray@@@Z");
//};

//public: void Context::writeValue<class hkDataArray::Value>(class hkDataArray::Value const &)
//{
//    mangled_ppc("??$writeValue@VValue@hkDataArray@@@Context@@QAAXABVValue@hkDataArray@@@Z");
//};

//public: void hkArray<class hkDataObject *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkDataObject@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct Context::Details, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UDetails@Context@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct Context::Details>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UDetails@Context@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct Context::Details>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UDetails@Context@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::construct<struct Context::Details>(struct Context::Details *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UDetails@Context@@@hkArrayUtil@@SAXPAUDetails@Context@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<struct Context::Details>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UDetails@Context@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct Context::Details>(struct Context::Details *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UDetails@Context@@@hkArrayUtil@@SAXPAUDetails@Context@@HU?$hkTraitBool@$0A@@@@Z");
//};

