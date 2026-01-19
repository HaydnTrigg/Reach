/* ---------- headers */

#include "havok\hkserialize\hkBinaryTagfileWriter.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct Writer::ObjectDetails const `public: void __cdecl Writer::scanObject(class hkDataObject const &, int)'::`11'::detailsInitialValue; // "?detailsInitialValue@?L@??scanObject@Writer@@QAAXABVhkDataObject@@H@Z@4UObjectDetails@2@B"

// public: virtual enum hkResult hkBinaryTagfileWriter::save(class hkDataObject const &, class hkStreamWriter *, class hkTagfileWriter::AddDataObjectListener *);
// public: Writer::Writer(class hkStreamWriter *, class hkTagfileWriter::AddDataObjectListener *);
// public: enum hkResult Writer::writeObjectTree(class hkDataObject const &);
// public: void Writer::scanObject(class hkDataObject const &, int);
// public: int Writer::writeClass(class hkDataClass const &);
// public: void Writer::writeInt(__int64);
// public: void Writer::writeString(char const *);
// public: Writer::MemberWriteFlags::MemberWriteFlags(int);
// public: int Writer::MemberWriteFlags::getNumBytes(void) const;
// public: void Writer::MemberWriteFlags::toBytes(unsigned char *);
// public: unsigned char & Writer::MemberWriteFlags::memberInteresting(int);
// public: void Writer::writeObject(class hkDataObject const &);
// public: void Writer::MemberWriteFlags::fromBytes(unsigned char const *, int);
// public: void Writer::writeBinaryValue(class hkDataObject::Value const &, struct hkDataClass::MemberInfo const &);
// public: void Writer::writeFloat(float);
// public: void Writer::writeFloatArray(float const *, int);
// public: void Writer::_writeArrayItems(class hkDataArray const &, int);
// public: void Writer::writeHeader(void);
// public: Writer::ListenerCache::ListenerCache(class hkTagfileWriter::AddDataObjectListener *);
// public: class hkDataObject Writer::ListenerCache::getCachedDataObject(class hkDataObject const &);
// public: class hkDataObject Writer::ListenerCache::callListenerAndCache(class hkDataObject const &);
// public: static void * hkDataObject::operator new(unsigned int);
// public: Writer::MemberWriteFlags::~MemberWriteFlags(void);
// public: Writer::~Writer(void);
// public: Writer::ListenerCache::~ListenerCache(void);
// public: void * hkDataObject::`scalar deleting destructor'(unsigned int);
// public: static void hkDataObject::operator delete(void *);
// public: hkArray<unsigned char, struct hkContainerTempAllocator>::hkArray<unsigned char, struct hkContainerTempAllocator>(void);
// public: hkArray<unsigned char, struct hkContainerTempAllocator>::hkArray<unsigned char, struct hkContainerTempAllocator>(unsigned char *, int, int);
// public: void hkArray<unsigned char, struct hkContainerTempAllocator>::setSize(int);
// public: void hkArray<unsigned char, struct hkContainerTempAllocator>::setSize(int, unsigned char const &);
// public: unsigned char * hkArray<unsigned char, struct hkContainerTempAllocator>::expandBy(int);
// public: void hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::iShouldNotHaveVtable(void) const;
// public: static void * hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::operator new(unsigned int);
// public: static void hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::operator delete(void *);
// public: static void * hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::operator new(unsigned int, void *);
// public: static void * hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::operator new[](unsigned int, void *);
// public: static void hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::operator delete(void *, void *);
// public: static void hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::operator delete[](void *, void *);
// public: hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>(int);
// public: hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>(void *, int);
// public: hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::~hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>(void);
// public: int hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::insert(struct hkDataObject::Handle, int);
// public: class Dummy * hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::findOrInsertKey(struct hkDataObject::Handle, int);
// public: void hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::reserve(int);
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::iShouldNotHaveVtable(void) const;
// public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::operator new(unsigned int);
// public: static void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::operator delete(void *);
// public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::operator new(unsigned int, void *);
// public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::operator new[](unsigned int, void *);
// public: static void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::operator delete(void *, void *);
// public: static void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::operator delete[](void *, void *);
// public: hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>(void);
// public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::hasKey(struct hkDataObject::Handle) const;
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getSize(void) const;
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getCapacity(void) const;
// public: void * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getMemStart(void) const;
// public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::wasReallocated(void) const;
// protected: static int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::isPower2(unsigned int);
// public: hkArray<class hkDataObject *, struct hkContainerTempAllocator>::hkArray<class hkDataObject *, struct hkContainerTempAllocator>(void);
// public: class hkDataObject *& hkArray<class hkDataObject *, struct hkContainerTempAllocator>::expandOne(void);
// public: hkArray<struct Writer::ObjectDetails, struct hkContainerTempAllocator>::hkArray<struct Writer::ObjectDetails, struct hkContainerTempAllocator>(void);
// public: struct Writer::ObjectDetails & hkArray<struct Writer::ObjectDetails, struct hkContainerTempAllocator>::expandOne(void);
// public: hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>(void *, int);
// public: static void Writer::HandleOps::invalidate(struct hkDataObject::Handle &);
// public: hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::~hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>(void);
// public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getIterator(void) const;
// public: static int Writer::HandleOps::isValid(struct hkDataObject::Handle &);
// public: struct hkDataObject::Handle hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getKey(class Dummy *) const;
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getValue(class Dummy *) const;
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::setValue(class Dummy *, int);
// public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getNext(class Dummy *) const;
// public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::isValid(class Dummy *) const;
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::insert(class hkMemoryAllocator &, struct hkDataObject::Handle, int);
// public: static unsigned int Writer::HandleOps::hash(struct hkDataObject::Handle const &, unsigned int);
// public: static int Writer::HandleOps::equal(struct hkDataObject::Handle const &, struct hkDataObject::Handle const &);
// public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::findKey(struct hkDataObject::Handle) const;
// public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::findOrInsertKey(class hkMemoryAllocator &, struct hkDataObject::Handle, int);
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getWithDefault(struct hkDataObject::Handle, int) const;
// public: enum hkResult hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::get(struct hkDataObject::Handle, int *) const;
// public: enum hkResult hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::remove(struct hkDataObject::Handle);
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::remove(class Dummy *);
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getMemSize(void) const;
// public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::isOk(void) const;
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::clear(void);
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::reserve(class hkMemoryAllocator &, int);
// public: static int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getSizeInBytesFor(int);
// protected: void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::resizeTable(class hkMemoryAllocator &, int);
// public: void hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::swap(class hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator> &);
// public: hkArrayBase<class hkDataObject *>::hkArrayBase<class hkDataObject *>(void);
// public: class hkDataObject *& hkArrayBase<class hkDataObject *>::operator[](int);
// public: int hkArrayBase<class hkDataObject *>::getSize(void) const;
// public: class hkDataObject *& hkArrayBase<class hkDataObject *>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<class hkDataObject *, struct hkContainerTempAllocator>::~hkArray<class hkDataObject *, struct hkContainerTempAllocator>(void);
// public: hkArrayBase<class hkDataObject *>::~hkArrayBase<class hkDataObject *>(void);
// public: hkArrayBase<struct Writer::ObjectDetails>::hkArrayBase<struct Writer::ObjectDetails>(void);
// public: struct Writer::ObjectDetails & hkArrayBase<struct Writer::ObjectDetails>::operator[](int);
// public: struct Writer::ObjectDetails & hkArrayBase<struct Writer::ObjectDetails>::back(void);
// public: int hkArrayBase<struct Writer::ObjectDetails>::getSize(void) const;
// public: struct Writer::ObjectDetails & hkArrayBase<struct Writer::ObjectDetails>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<struct Writer::ObjectDetails, struct hkContainerTempAllocator>::~hkArray<struct Writer::ObjectDetails, struct hkContainerTempAllocator>(void);
// public: hkArrayBase<struct Writer::ObjectDetails>::~hkArrayBase<struct Writer::ObjectDetails>(void);
// public: int Writer::worthWriting<class hkDataObject::Value>(class hkDataObject::Value const &);
// public: int Writer::worthWriting<class hkDataArray::Value>(class hkDataArray::Value const &);
// public: void hkArray<class hkDataObject *, struct hkContainerTempAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct Writer::ObjectDetails, struct hkContainerTempAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<class hkDataObject *>::getCapacity(void) const;
// public: void hkArrayBase<class hkDataObject *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::construct<class hkDataObject *>(class hkDataObject **, int, struct hkTraitBool<1>);
// public: int hkArrayBase<struct Writer::ObjectDetails>::getCapacity(void) const;
// public: void hkArrayBase<struct Writer::ObjectDetails>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::construct<struct Writer::ObjectDetails>(struct Writer::ObjectDetails *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<class hkDataObject *>::clear(void);
// public: void hkArrayBase<struct Writer::ObjectDetails>::clear(void);
// public: static void hkArrayUtil::destruct<class hkDataObject *>(class hkDataObject **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<struct Writer::ObjectDetails>(struct Writer::ObjectDetails *, int, struct hkTraitBool<0>);

//public: virtual enum hkResult hkBinaryTagfileWriter::save(class hkDataObject const &, class hkStreamWriter *, class hkTagfileWriter::AddDataObjectListener *)
//{
//    mangled_ppc("?save@hkBinaryTagfileWriter@@UAA?AW4hkResult@@ABVhkDataObject@@PAVhkStreamWriter@@PAVAddDataObjectListener@hkTagfileWriter@@@Z");
//};

//public: Writer::Writer(class hkStreamWriter *, class hkTagfileWriter::AddDataObjectListener *)
//{
//    mangled_ppc("??0Writer@@QAA@PAVhkStreamWriter@@PAVAddDataObjectListener@hkTagfileWriter@@@Z");
//};

//public: enum hkResult Writer::writeObjectTree(class hkDataObject const &)
//{
//    mangled_ppc("?writeObjectTree@Writer@@QAA?AW4hkResult@@ABVhkDataObject@@@Z");
//};

//public: void Writer::scanObject(class hkDataObject const &, int)
//{
//    mangled_ppc("?scanObject@Writer@@QAAXABVhkDataObject@@H@Z");
//};

//public: int Writer::writeClass(class hkDataClass const &)
//{
//    mangled_ppc("?writeClass@Writer@@QAAHABVhkDataClass@@@Z");
//};

//public: void Writer::writeInt(__int64)
//{
//    mangled_ppc("?writeInt@Writer@@QAAX_J@Z");
//};

//public: void Writer::writeString(char const *)
//{
//    mangled_ppc("?writeString@Writer@@QAAXPBD@Z");
//};

//public: Writer::MemberWriteFlags::MemberWriteFlags(int)
//{
//    mangled_ppc("??0MemberWriteFlags@Writer@@QAA@H@Z");
//};

//public: int Writer::MemberWriteFlags::getNumBytes(void) const
//{
//    mangled_ppc("?getNumBytes@MemberWriteFlags@Writer@@QBAHXZ");
//};

//public: void Writer::MemberWriteFlags::toBytes(unsigned char *)
//{
//    mangled_ppc("?toBytes@MemberWriteFlags@Writer@@QAAXPAE@Z");
//};

//public: unsigned char & Writer::MemberWriteFlags::memberInteresting(int)
//{
//    mangled_ppc("?memberInteresting@MemberWriteFlags@Writer@@QAAAAEH@Z");
//};

//public: void Writer::writeObject(class hkDataObject const &)
//{
//    mangled_ppc("?writeObject@Writer@@QAAXABVhkDataObject@@@Z");
//};

//public: void Writer::MemberWriteFlags::fromBytes(unsigned char const *, int)
//{
//    mangled_ppc("?fromBytes@MemberWriteFlags@Writer@@QAAXPBEH@Z");
//};

//public: void Writer::writeBinaryValue(class hkDataObject::Value const &, struct hkDataClass::MemberInfo const &)
//{
//    mangled_ppc("?writeBinaryValue@Writer@@QAAXABVValue@hkDataObject@@ABUMemberInfo@hkDataClass@@@Z");
//};

//public: void Writer::writeFloat(float)
//{
//    mangled_ppc("?writeFloat@Writer@@QAAXM@Z");
//};

//public: void Writer::writeFloatArray(float const *, int)
//{
//    mangled_ppc("?writeFloatArray@Writer@@QAAXPBMH@Z");
//};

//public: void Writer::_writeArrayItems(class hkDataArray const &, int)
//{
//    mangled_ppc("?_writeArrayItems@Writer@@QAAXABVhkDataArray@@H@Z");
//};

//public: void Writer::writeHeader(void)
//{
//    mangled_ppc("?writeHeader@Writer@@QAAXXZ");
//};

//public: Writer::ListenerCache::ListenerCache(class hkTagfileWriter::AddDataObjectListener *)
//{
//    mangled_ppc("??0ListenerCache@Writer@@QAA@PAVAddDataObjectListener@hkTagfileWriter@@@Z");
//};

//public: class hkDataObject Writer::ListenerCache::getCachedDataObject(class hkDataObject const &)
//{
//    mangled_ppc("?getCachedDataObject@ListenerCache@Writer@@QAA?AVhkDataObject@@ABV3@@Z");
//};

//public: class hkDataObject Writer::ListenerCache::callListenerAndCache(class hkDataObject const &)
//{
//    mangled_ppc("?callListenerAndCache@ListenerCache@Writer@@QAA?AVhkDataObject@@ABV3@@Z");
//};

//public: static void * hkDataObject::operator new(unsigned int)
//{
//    mangled_ppc("??2hkDataObject@@SAPAXI@Z");
//};

//public: Writer::MemberWriteFlags::~MemberWriteFlags(void)
//{
//    mangled_ppc("??1MemberWriteFlags@Writer@@QAA@XZ");
//};

//public: Writer::~Writer(void)
//{
//    mangled_ppc("??1Writer@@QAA@XZ");
//};

//public: Writer::ListenerCache::~ListenerCache(void)
//{
//    mangled_ppc("??1ListenerCache@Writer@@QAA@XZ");
//};

//public: void * hkDataObject::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GhkDataObject@@QAAPAXI@Z");
//};

//public: static void hkDataObject::operator delete(void *)
//{
//    mangled_ppc("??3hkDataObject@@SAXPAX@Z");
//};

//public: hkArray<unsigned char, struct hkContainerTempAllocator>::hkArray<unsigned char, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@EUhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: hkArray<unsigned char, struct hkContainerTempAllocator>::hkArray<unsigned char, struct hkContainerTempAllocator>(unsigned char *, int, int)
//{
//    mangled_ppc("??0?$hkArray@EUhkContainerTempAllocator@@@@QAA@PAEHH@Z");
//};

//public: void hkArray<unsigned char, struct hkContainerTempAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@EUhkContainerTempAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<unsigned char, struct hkContainerTempAllocator>::setSize(int, unsigned char const &)
//{
//    mangled_ppc("?setSize@?$hkArray@EUhkContainerTempAllocator@@@@QAAXHABE@Z");
//};

//public: unsigned char * hkArray<unsigned char, struct hkContainerTempAllocator>::expandBy(int)
//{
//    mangled_ppc("?expandBy@?$hkArray@EUhkContainerTempAllocator@@@@QAAPAEH@Z");
//};

//public: void hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::iShouldNotHaveVtable(void) const
//{
//    mangled_ppc("?iShouldNotHaveVtable@?$hkMap@UHandle@hkDataObject@@HUHandleOps@Writer@@UhkContainerHeapAllocator@@@@QBAXXZ");
//};

//public: static void * hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkMap@UHandle@hkDataObject@@HUHandleOps@Writer@@UhkContainerHeapAllocator@@@@SAPAXI@Z");
//};

//public: static void hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkMap@UHandle@hkDataObject@@HUHandleOps@Writer@@UhkContainerHeapAllocator@@@@SAXPAX@Z");
//};

//public: static void * hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$hkMap@UHandle@hkDataObject@@HUHandleOps@Writer@@UhkContainerHeapAllocator@@@@SAPAXIPAX@Z");
//};

//public: static void * hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::operator new[](unsigned int, void *)
//{
//    mangled_ppc("??_U?$hkMap@UHandle@hkDataObject@@HUHandleOps@Writer@@UhkContainerHeapAllocator@@@@SAPAXIPAX@Z");
//};

//public: static void hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::operator delete(void *, void *)
//{
//    mangled_ppc("??3?$hkMap@UHandle@hkDataObject@@HUHandleOps@Writer@@UhkContainerHeapAllocator@@@@SAXPAX0@Z");
//};

//public: static void hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::operator delete[](void *, void *)
//{
//    mangled_ppc("??_V?$hkMap@UHandle@hkDataObject@@HUHandleOps@Writer@@UhkContainerHeapAllocator@@@@SAXPAX0@Z");
//};

//public: hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkMap@UHandle@hkDataObject@@HUHandleOps@Writer@@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>(void *, int)
//{
//    mangled_ppc("??0?$hkMap@UHandle@hkDataObject@@HUHandleOps@Writer@@UhkContainerHeapAllocator@@@@QAA@PAXH@Z");
//};

//public: hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::~hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkMap@UHandle@hkDataObject@@HUHandleOps@Writer@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::insert(struct hkDataObject::Handle, int)
//{
//    mangled_ppc("?insert@?$hkMap@UHandle@hkDataObject@@HUHandleOps@Writer@@UhkContainerHeapAllocator@@@@QAAHUHandle@hkDataObject@@H@Z");
//};

//public: class Dummy * hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::findOrInsertKey(struct hkDataObject::Handle, int)
//{
//    mangled_ppc("?findOrInsertKey@?$hkMap@UHandle@hkDataObject@@HUHandleOps@Writer@@UhkContainerHeapAllocator@@@@QAAPAVDummy@@UHandle@hkDataObject@@H@Z");
//};

//public: void hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkMap@UHandle@hkDataObject@@HUHandleOps@Writer@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::iShouldNotHaveVtable(void) const
//{
//    mangled_ppc("?iShouldNotHaveVtable@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBAXXZ");
//};

//public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@SAPAXI@Z");
//};

//public: static void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@SAXPAX@Z");
//};

//public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@SAPAXIPAX@Z");
//};

//public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::operator new[](unsigned int, void *)
//{
//    mangled_ppc("??_U?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@SAPAXIPAX@Z");
//};

//public: static void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::operator delete(void *, void *)
//{
//    mangled_ppc("??3?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@SAXPAX0@Z");
//};

//public: static void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::operator delete[](void *, void *)
//{
//    mangled_ppc("??_V?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@SAXPAX0@Z");
//};

//public: hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>(void)
//{
//    mangled_ppc("??0?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QAA@XZ");
//};

//public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::hasKey(struct hkDataObject::Handle) const
//{
//    mangled_ppc("?hasKey@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBA?AVhkBool@@UHandle@hkDataObject@@@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBAHXZ");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBAHXZ");
//};

//public: void * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getMemStart(void) const
//{
//    mangled_ppc("?getMemStart@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBAPAXXZ");
//};

//public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBA?AVhkBool@@XZ");
//};

//protected: static int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::isPower2(unsigned int)
//{
//    mangled_ppc("?isPower2@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@KAHI@Z");
//};

//public: hkArray<class hkDataObject *, struct hkContainerTempAllocator>::hkArray<class hkDataObject *, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkDataObject@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: class hkDataObject *& hkArray<class hkDataObject *, struct hkContainerTempAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@PAVhkDataObject@@UhkContainerTempAllocator@@@@QAAAAPAVhkDataObject@@XZ");
//};

//public: hkArray<struct Writer::ObjectDetails, struct hkContainerTempAllocator>::hkArray<struct Writer::ObjectDetails, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UObjectDetails@Writer@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: struct Writer::ObjectDetails & hkArray<struct Writer::ObjectDetails, struct hkContainerTempAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UObjectDetails@Writer@@UhkContainerTempAllocator@@@@QAAAAUObjectDetails@Writer@@XZ");
//};

//public: hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>(void *, int)
//{
//    mangled_ppc("??0?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QAA@PAXH@Z");
//};

//public: static void Writer::HandleOps::invalidate(struct hkDataObject::Handle &)
//{
//    mangled_ppc("?invalidate@HandleOps@Writer@@SAXAAUHandle@hkDataObject@@@Z");
//};

//public: hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::~hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>(void)
//{
//    mangled_ppc("??1?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QAA@XZ");
//};

//public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBAPAVDummy@@XZ");
//};

//public: static int Writer::HandleOps::isValid(struct hkDataObject::Handle &)
//{
//    mangled_ppc("?isValid@HandleOps@Writer@@SAHAAUHandle@hkDataObject@@@Z");
//};

//public: struct hkDataObject::Handle hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBA?AUHandle@hkDataObject@@PAVDummy@@@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBAHPAVDummy@@@Z");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::setValue(class Dummy *, int)
//{
//    mangled_ppc("?setValue@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QAAXPAVDummy@@H@Z");
//};

//public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::insert(class hkMemoryAllocator &, struct hkDataObject::Handle, int)
//{
//    mangled_ppc("?insert@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QAAHAAVhkMemoryAllocator@@UHandle@hkDataObject@@H@Z");
//};

//public: static unsigned int Writer::HandleOps::hash(struct hkDataObject::Handle const &, unsigned int)
//{
//    mangled_ppc("?hash@HandleOps@Writer@@SAIABUHandle@hkDataObject@@I@Z");
//};

//public: static int Writer::HandleOps::equal(struct hkDataObject::Handle const &, struct hkDataObject::Handle const &)
//{
//    mangled_ppc("?equal@HandleOps@Writer@@SAHABUHandle@hkDataObject@@0@Z");
//};

//public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::findKey(struct hkDataObject::Handle) const
//{
//    mangled_ppc("?findKey@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBAPAVDummy@@UHandle@hkDataObject@@@Z");
//};

//public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::findOrInsertKey(class hkMemoryAllocator &, struct hkDataObject::Handle, int)
//{
//    mangled_ppc("?findOrInsertKey@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QAAPAVDummy@@AAVhkMemoryAllocator@@UHandle@hkDataObject@@H@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getWithDefault(struct hkDataObject::Handle, int) const
//{
//    mangled_ppc("?getWithDefault@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBAHUHandle@hkDataObject@@H@Z");
//};

//public: enum hkResult hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::get(struct hkDataObject::Handle, int *) const
//{
//    mangled_ppc("?get@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBA?AW4hkResult@@UHandle@hkDataObject@@PAH@Z");
//};

//public: enum hkResult hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::remove(struct hkDataObject::Handle)
//{
//    mangled_ppc("?remove@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QAA?AW4hkResult@@UHandle@hkDataObject@@@Z");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::remove(class Dummy *)
//{
//    mangled_ppc("?remove@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QAAXPAVDummy@@@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getMemSize(void) const
//{
//    mangled_ppc("?getMemSize@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBAHXZ");
//};

//public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::isOk(void) const
//{
//    mangled_ppc("?isOk@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QBA?AVhkBool@@XZ");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::clear(void)
//{
//    mangled_ppc("?clear@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QAAXXZ");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?reserve@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static int hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::getSizeInBytesFor(int)
//{
//    mangled_ppc("?getSizeInBytesFor@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@SAHH@Z");
//};

//protected: void hkMapBase<struct hkDataObject::Handle, int, struct Writer::HandleOps>::resizeTable(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?resizeTable@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Writer@@@@IAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator>::swap(class hkMap<struct hkDataObject::Handle, int, struct Writer::HandleOps, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkMap@UHandle@hkDataObject@@HUHandleOps@Writer@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

//public: hkArrayBase<class hkDataObject *>::hkArrayBase<class hkDataObject *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkDataObject@@@@QAA@XZ");
//};

//public: class hkDataObject *& hkArrayBase<class hkDataObject *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkDataObject@@@@QAAAAPAVhkDataObject@@H@Z");
//};

//public: int hkArrayBase<class hkDataObject *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkDataObject@@@@QBAHXZ");
//};

//public: class hkDataObject *& hkArrayBase<class hkDataObject *>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@PAVhkDataObject@@@@QAAAAPAVhkDataObject@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<class hkDataObject *, struct hkContainerTempAllocator>::~hkArray<class hkDataObject *, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkDataObject@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkDataObject *>::~hkArrayBase<class hkDataObject *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkDataObject@@@@QAA@XZ");
//};

//public: hkArrayBase<struct Writer::ObjectDetails>::hkArrayBase<struct Writer::ObjectDetails>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UObjectDetails@Writer@@@@QAA@XZ");
//};

//public: struct Writer::ObjectDetails & hkArrayBase<struct Writer::ObjectDetails>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UObjectDetails@Writer@@@@QAAAAUObjectDetails@Writer@@H@Z");
//};

//public: struct Writer::ObjectDetails & hkArrayBase<struct Writer::ObjectDetails>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@UObjectDetails@Writer@@@@QAAAAUObjectDetails@Writer@@XZ");
//};

//public: int hkArrayBase<struct Writer::ObjectDetails>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UObjectDetails@Writer@@@@QBAHXZ");
//};

//public: struct Writer::ObjectDetails & hkArrayBase<struct Writer::ObjectDetails>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UObjectDetails@Writer@@@@QAAAAUObjectDetails@Writer@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<struct Writer::ObjectDetails, struct hkContainerTempAllocator>::~hkArray<struct Writer::ObjectDetails, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UObjectDetails@Writer@@UhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct Writer::ObjectDetails>::~hkArrayBase<struct Writer::ObjectDetails>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UObjectDetails@Writer@@@@QAA@XZ");
//};

//public: int Writer::worthWriting<class hkDataObject::Value>(class hkDataObject::Value const &)
//{
//    mangled_ppc("??$worthWriting@VValue@hkDataObject@@@Writer@@QAAHABVValue@hkDataObject@@@Z");
//};

//public: int Writer::worthWriting<class hkDataArray::Value>(class hkDataArray::Value const &)
//{
//    mangled_ppc("??$worthWriting@VValue@hkDataArray@@@Writer@@QAAHABVValue@hkDataArray@@@Z");
//};

//public: void hkArray<class hkDataObject *, struct hkContainerTempAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkDataObject@@UhkContainerTempAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct Writer::ObjectDetails, struct hkContainerTempAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UObjectDetails@Writer@@UhkContainerTempAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<class hkDataObject *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkDataObject@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkDataObject *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkDataObject@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkDataObject *>(class hkDataObject **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@PAVhkDataObject@@@hkArrayUtil@@SAXPAPAVhkDataObject@@HU?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<struct Writer::ObjectDetails>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UObjectDetails@Writer@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct Writer::ObjectDetails>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UObjectDetails@Writer@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::construct<struct Writer::ObjectDetails>(struct Writer::ObjectDetails *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UObjectDetails@Writer@@@hkArrayUtil@@SAXPAUObjectDetails@Writer@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<class hkDataObject *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkDataObject@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct Writer::ObjectDetails>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UObjectDetails@Writer@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<class hkDataObject *>(class hkDataObject **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkDataObject@@@hkArrayUtil@@SAXPAPAVhkDataObject@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct Writer::ObjectDetails>(struct Writer::ObjectDetails *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UObjectDetails@Writer@@@hkArrayUtil@@SAXPAUObjectDetails@Writer@@HU?$hkTraitBool@$0A@@@@Z");
//};

