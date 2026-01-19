/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: enum hkResult Copier::copyIntoNativeArray(void *, class hkClassMember const &, class hkDataArray const &);
// public: enum hkResult Copier::fillNativeEnumMember(void *, class hkClassMember const &, class hkDataObject::Value const &, class hkClass const &);
// public: enum hkResult Copier::fillNativeMembers(void *, class hkDataObject const &);
// int getNumElementsInMember(class hkClassMember const &);
// char * getMemberTypeName(class hkClassMember const &, char *, int);
// class hkObjectResource * hkDataObjectUtil::toObject(class hkDataObject const &);
// class hkObjectResource * hkDataObjectUtil::toObjectWithRegistry(class hkDataObject const &, class hkClassNameRegistry const *, class hkTypeInfoRegistry const *);
// class hkResource * hkDataObjectUtil::toResource(class hkDataObject const &);
// class hkResource * hkDataObjectUtil::toResourceWithRegistry(class hkDataObject const &, class hkClassNameRegistry const *);
// enum hkDataObject::Type hkDataObjectUtil::getTypeFromMemberType(enum hkClassMember::Type, enum hkClassMember::Type, class hkClass const *, int);
// public: class hkVector4const & hkDataArray::Value::asVector4(void) const;
// public: class hkQuaternion const & hkDataArray::Value::asQuaternion(void) const;
// public: class hkMatrix3const & hkDataArray::Value::asMatrix3(void) const;
// public: class hkRotation const & hkDataArray::Value::asRotation(void) const;
// public: class hkQsTransform const & hkDataArray::Value::asQsTransform(void) const;
// public: class hkMatrix4const & hkDataArray::Value::asMatrix4(void) const;
// public: class hkTransform const & hkDataArray::Value::asTransform(void) const;
// public: class hkClass const * Copier::getMemberClassAndCheck(class hkClassMember const &, class hkDataObject const &);
// public: struct hkVariant Copier::findOrCopy(class hkDataObject const &, int);
// public: int Copier::isReferencedObject(class hkClass const &);
// public: class hkQsTransform & hkQsTransform::operator=(class hkQsTransform const &);
// public: class hkClass const * Copier::findClassOf(class hkDataObject const &);
// public: Copier::Copier(class hkClassNameRegistry const *, int);
// public: Copier::~Copier(void);
// public: class hkObjectResource * Copier::toObject(class hkDataObject const &, class hkTypeInfoRegistry const *);
// public: void hkPackfileData::disableDestructors(void);
// public: void Copier::TrackedData::stopTrackingAllocations(void);
// public: void Copier::setRefCountObject(void *, class hkClass const &);
// public: enum hkResult Copier::finishObject(void *, class hkClass const &, class hkTypeInfoRegistry const *);
// public: class hkPackfileData * Copier::toResource(class hkDataObject const &);
// public: class Dummy * hkPointerMap<void *, int, struct hkContainerHeapAllocator>::findOrInsertKey(void *, int);
// public: hkMap<struct hkDataObject::Handle, void *, struct Copier::HandleOps, struct hkContainerHeapAllocator>::hkMap<struct hkDataObject::Handle, void *, struct Copier::HandleOps, struct hkContainerHeapAllocator>(int);
// public: hkMap<struct hkDataObject::Handle, void *, struct Copier::HandleOps, struct hkContainerHeapAllocator>::~hkMap<struct hkDataObject::Handle, void *, struct Copier::HandleOps, struct hkContainerHeapAllocator>(void);
// public: int hkMap<struct hkDataObject::Handle, void *, struct Copier::HandleOps, struct hkContainerHeapAllocator>::insert(struct hkDataObject::Handle, void *);
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::iShouldNotHaveVtable(void) const;
// public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::operator new(unsigned int);
// public: static void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::operator delete(void *);
// public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::operator new(unsigned int, void *);
// public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::operator new[](unsigned int, void *);
// public: static void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::operator delete(void *, void *);
// public: static void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::operator delete[](void *, void *);
// public: hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>(void);
// public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::hasKey(struct hkDataObject::Handle) const;
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getSize(void) const;
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getCapacity(void) const;
// public: void * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getMemStart(void) const;
// public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::wasReallocated(void) const;
// protected: static int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::isPower2(unsigned int);
// public: void hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::iShouldNotHaveVtable(void) const;
// public: static void * hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::operator new(unsigned int);
// public: static void hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::operator delete(void *);
// public: static void * hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::operator new(unsigned int, void *);
// public: static void * hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::operator new[](unsigned int, void *);
// public: static void hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::operator delete(void *, void *);
// public: static void hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::operator delete[](void *, void *);
// public: hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>(int);
// public: hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>(void *, int);
// public: hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::~hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>(void);
// public: int hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::insert(struct hkDataObject::Handle, int);
// public: class Dummy * hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::findOrInsertKey(struct hkDataObject::Handle, int);
// public: void hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::reserve(int);
// public: void hkMap<struct hkDataObject::Handle, void *, struct Copier::HandleOps, struct hkContainerHeapAllocator>::reserve(int);
// public: hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>(void);
// public: void hkArrayBase<struct hkPackfileData::Chunk>::clear(void);
// public: hkRefPtr<class hkPackfileData>::hkRefPtr<class hkPackfileData>(void);
// public: hkRefPtr<class hkPackfileData>::~hkRefPtr<class hkPackfileData>(void);
// public: void hkRefPtr<class hkPackfileData>::operator=(class hkPackfileData *);
// public: class hkPackfileData * hkRefPtr<class hkPackfileData>::val(void) const;
// public: class hkPackfileData * hkRefPtr<class hkPackfileData>::operator->(void) const;
// public: void hkRefPtr<class hkPackfileData>::setAndDontIncrementRefCount(class hkPackfileData *);
// public: class hkPackfileData * hkRefPtr<class hkPackfileData>::operator class hkPackfileData *(void) const;
// public: hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::~hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>(void);
// public: class Dummy * hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::getIterator(void) const;
// public: static int Copier::HandleOps::isValid(struct hkDataObject::Handle &);
// public: struct hkDataObject::Handle hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::getKey(class Dummy *) const;
// public: void * hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::getValue(class Dummy *) const;
// public: class Dummy * hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::getNext(class Dummy *) const;
// public: class hkBool hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::isValid(class Dummy *) const;
// public: int hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::insert(class hkMemoryAllocator &, struct hkDataObject::Handle, void *);
// public: static unsigned int Copier::HandleOps::hash(struct hkDataObject::Handle const &, unsigned int);
// public: static int Copier::HandleOps::equal(struct hkDataObject::Handle const &, struct hkDataObject::Handle const &);
// public: void * hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::getWithDefault(struct hkDataObject::Handle, void *) const;
// public: void hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::reserve(class hkMemoryAllocator &, int);
// char * hkMemHeapBlockAlloc<char>(int);
// class hkBool * hkMemHeapBufAlloc<class hkBool>(int &);
// char * hkMemHeapBufAlloc<char>(int &);
// signed char * hkMemHeapBufAlloc<signed char>(int &);
// unsigned char * hkMemHeapBufAlloc<unsigned char>(int &);
// short * hkMemHeapBufAlloc<short>(int &);
// unsigned short * hkMemHeapBufAlloc<unsigned short>(int &);
// int * hkMemHeapBufAlloc<int>(int &);
// unsigned int * hkMemHeapBufAlloc<unsigned int>(int &);
// __int64* hkMemHeapBufAlloc<__int64>(int &);
// unsigned __int64* hkMemHeapBufAlloc<unsigned __int64>(int &);
// unsigned long * hkMemHeapBufAlloc<unsigned long>(int &);
// float * hkMemHeapBufAlloc<float>(int &);
// class hkHalf * hkMemHeapBufAlloc<class hkHalf>(int &);
// class hkVector4* hkMemHeapBufAlloc<class hkVector4>(int &);
// class hkQuaternion * hkMemHeapBufAlloc<class hkQuaternion>(int &);
// class hkMatrix3* hkMemHeapBufAlloc<class hkMatrix3>(int &);
// class hkRotation * hkMemHeapBufAlloc<class hkRotation>(int &);
// class hkQsTransform * hkMemHeapBufAlloc<class hkQsTransform>(int &);
// class hkMatrix4* hkMemHeapBufAlloc<class hkMatrix4>(int &);
// class hkTransform * hkMemHeapBufAlloc<class hkTransform>(int &);
// void ** hkMemHeapBufAlloc<void *>(int &);
// struct hkVariant * hkMemHeapBufAlloc<struct hkVariant>(int &);
// char ** hkMemHeapBufAlloc<char *>(int &);
// public: enum hkResult Copier::fillNativeSimpleMember<class hkDataArray::Value>(void *, enum hkClassMember::Type, class hkDataArray::Value const &, class hkClass const *, int);
// public: char * Copier::strDup(char const *);
// class hkStringPtr * hkMemHeapBufAlloc<class hkStringPtr>(int &);
// public: enum hkResult Copier::fillNativeSimpleMember<class hkDataObject::Value>(void *, enum hkClassMember::Type, class hkDataObject::Value const &, class hkClass const *, int);
// public: class hkVector4const & hkDataObject::Value::asVector4(void) const;
// public: class hkQuaternion const & hkDataObject::Value::asQuaternion(void) const;
// public: class hkMatrix3const & hkDataObject::Value::asMatrix3(void) const;
// public: class hkRotation const & hkDataObject::Value::asRotation(void) const;
// public: class hkQsTransform const & hkDataObject::Value::asQsTransform(void) const;
// public: class hkMatrix4const & hkDataObject::Value::asMatrix4(void) const;
// public: class hkTransform const & hkDataObject::Value::asTransform(void) const;
// public: hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>(void *, int);
// public: static void Copier::HandleOps::invalidate(struct hkDataObject::Handle &);
// public: hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::~hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>(void);
// public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getIterator(void) const;
// public: struct hkDataObject::Handle hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getKey(class Dummy *) const;
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getValue(class Dummy *) const;
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::setValue(class Dummy *, int);
// public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getNext(class Dummy *) const;
// public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::isValid(class Dummy *) const;
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::insert(class hkMemoryAllocator &, struct hkDataObject::Handle, int);
// public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::findKey(struct hkDataObject::Handle) const;
// public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::findOrInsertKey(class hkMemoryAllocator &, struct hkDataObject::Handle, int);
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getWithDefault(struct hkDataObject::Handle, int) const;
// public: enum hkResult hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::get(struct hkDataObject::Handle, int *) const;
// public: enum hkResult hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::remove(struct hkDataObject::Handle);
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::remove(class Dummy *);
// public: int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getMemSize(void) const;
// public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::isOk(void) const;
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::clear(void);
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::reserve(class hkMemoryAllocator &, int);
// public: static int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getSizeInBytesFor(int);
// protected: void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::resizeTable(class hkMemoryAllocator &, int);
// public: void hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::swap(class hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator> &);
// public: static void hkArrayUtil::destruct<struct hkPackfileData::Chunk>(struct hkPackfileData::Chunk *, int, struct hkTraitBool<0>);
// public: void hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::clear(void);
// protected: void hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::resizeTable(class hkMemoryAllocator &, int);
// public: class hkBool hkClassMember::hasEnumClass(void) const;

//public: enum hkResult Copier::copyIntoNativeArray(void *, class hkClassMember const &, class hkDataArray const &)
//{
//    mangled_ppc("?copyIntoNativeArray@Copier@@QAA?AW4hkResult@@PAXABVhkClassMember@@ABVhkDataArray@@@Z");
//};

//public: enum hkResult Copier::fillNativeEnumMember(void *, class hkClassMember const &, class hkDataObject::Value const &, class hkClass const &)
//{
//    mangled_ppc("?fillNativeEnumMember@Copier@@QAA?AW4hkResult@@PAXABVhkClassMember@@ABVValue@hkDataObject@@ABVhkClass@@@Z");
//};

//public: enum hkResult Copier::fillNativeMembers(void *, class hkDataObject const &)
//{
//    mangled_ppc("?fillNativeMembers@Copier@@QAA?AW4hkResult@@PAXABVhkDataObject@@@Z");
//};

//int getNumElementsInMember(class hkClassMember const &)
//{
//    mangled_ppc("?getNumElementsInMember@@YAHABVhkClassMember@@@Z");
//};

//char * getMemberTypeName(class hkClassMember const &, char *, int)
//{
//    mangled_ppc("?getMemberTypeName@@YAPADABVhkClassMember@@PADH@Z");
//};

//class hkObjectResource * hkDataObjectUtil::toObject(class hkDataObject const &)
//{
//    mangled_ppc("?toObject@hkDataObjectUtil@@YAPAVhkObjectResource@@ABVhkDataObject@@@Z");
//};

//class hkObjectResource * hkDataObjectUtil::toObjectWithRegistry(class hkDataObject const &, class hkClassNameRegistry const *, class hkTypeInfoRegistry const *)
//{
//    mangled_ppc("?toObjectWithRegistry@hkDataObjectUtil@@YAPAVhkObjectResource@@ABVhkDataObject@@PBVhkClassNameRegistry@@PBVhkTypeInfoRegistry@@@Z");
//};

//class hkResource * hkDataObjectUtil::toResource(class hkDataObject const &)
//{
//    mangled_ppc("?toResource@hkDataObjectUtil@@YAPAVhkResource@@ABVhkDataObject@@@Z");
//};

//class hkResource * hkDataObjectUtil::toResourceWithRegistry(class hkDataObject const &, class hkClassNameRegistry const *)
//{
//    mangled_ppc("?toResourceWithRegistry@hkDataObjectUtil@@YAPAVhkResource@@ABVhkDataObject@@PBVhkClassNameRegistry@@@Z");
//};

//enum hkDataObject::Type hkDataObjectUtil::getTypeFromMemberType(enum hkClassMember::Type, enum hkClassMember::Type, class hkClass const *, int)
//{
//    mangled_ppc("?getTypeFromMemberType@hkDataObjectUtil@@YA?AW4Type@hkDataObject@@W42hkClassMember@@0PBVhkClass@@H@Z");
//};

//public: class hkVector4const & hkDataArray::Value::asVector4(void) const
//{
//    mangled_ppc("?asVector4@Value@hkDataArray@@QBAABVhkVector4@@XZ");
//};

//public: class hkQuaternion const & hkDataArray::Value::asQuaternion(void) const
//{
//    mangled_ppc("?asQuaternion@Value@hkDataArray@@QBAABVhkQuaternion@@XZ");
//};

//public: class hkMatrix3const & hkDataArray::Value::asMatrix3(void) const
//{
//    mangled_ppc("?asMatrix3@Value@hkDataArray@@QBAABVhkMatrix3@@XZ");
//};

//public: class hkRotation const & hkDataArray::Value::asRotation(void) const
//{
//    mangled_ppc("?asRotation@Value@hkDataArray@@QBAABVhkRotation@@XZ");
//};

//public: class hkQsTransform const & hkDataArray::Value::asQsTransform(void) const
//{
//    mangled_ppc("?asQsTransform@Value@hkDataArray@@QBAABVhkQsTransform@@XZ");
//};

//public: class hkMatrix4const & hkDataArray::Value::asMatrix4(void) const
//{
//    mangled_ppc("?asMatrix4@Value@hkDataArray@@QBAABVhkMatrix4@@XZ");
//};

//public: class hkTransform const & hkDataArray::Value::asTransform(void) const
//{
//    mangled_ppc("?asTransform@Value@hkDataArray@@QBAABVhkTransform@@XZ");
//};

//public: class hkClass const * Copier::getMemberClassAndCheck(class hkClassMember const &, class hkDataObject const &)
//{
//    mangled_ppc("?getMemberClassAndCheck@Copier@@QAAPBVhkClass@@ABVhkClassMember@@ABVhkDataObject@@@Z");
//};

//public: struct hkVariant Copier::findOrCopy(class hkDataObject const &, int)
//{
//    mangled_ppc("?findOrCopy@Copier@@QAA?AUhkVariant@@ABVhkDataObject@@H@Z");
//};

//public: int Copier::isReferencedObject(class hkClass const &)
//{
//    mangled_ppc("?isReferencedObject@Copier@@QAAHABVhkClass@@@Z");
//};

//public: class hkQsTransform & hkQsTransform::operator=(class hkQsTransform const &)
//{
//    mangled_ppc("??4hkQsTransform@@QAAAAV0@ABV0@@Z");
//};

//public: class hkClass const * Copier::findClassOf(class hkDataObject const &)
//{
//    mangled_ppc("?findClassOf@Copier@@QAAPBVhkClass@@ABVhkDataObject@@@Z");
//};

//public: Copier::Copier(class hkClassNameRegistry const *, int)
//{
//    mangled_ppc("??0Copier@@QAA@PBVhkClassNameRegistry@@H@Z");
//};

//public: Copier::~Copier(void)
//{
//    mangled_ppc("??1Copier@@QAA@XZ");
//};

//public: class hkObjectResource * Copier::toObject(class hkDataObject const &, class hkTypeInfoRegistry const *)
//{
//    mangled_ppc("?toObject@Copier@@QAAPAVhkObjectResource@@ABVhkDataObject@@PBVhkTypeInfoRegistry@@@Z");
//};

//public: void hkPackfileData::disableDestructors(void)
//{
//    mangled_ppc("?disableDestructors@hkPackfileData@@QAAXXZ");
//};

//public: void Copier::TrackedData::stopTrackingAllocations(void)
//{
//    mangled_ppc("?stopTrackingAllocations@TrackedData@Copier@@QAAXXZ");
//};

//public: void Copier::setRefCountObject(void *, class hkClass const &)
//{
//    mangled_ppc("?setRefCountObject@Copier@@QAAXPAXABVhkClass@@@Z");
//};

//public: enum hkResult Copier::finishObject(void *, class hkClass const &, class hkTypeInfoRegistry const *)
//{
//    mangled_ppc("?finishObject@Copier@@QAA?AW4hkResult@@PAXABVhkClass@@PBVhkTypeInfoRegistry@@@Z");
//};

//public: class hkPackfileData * Copier::toResource(class hkDataObject const &)
//{
//    mangled_ppc("?toResource@Copier@@QAAPAVhkPackfileData@@ABVhkDataObject@@@Z");
//};

//public: class Dummy * hkPointerMap<void *, int, struct hkContainerHeapAllocator>::findOrInsertKey(void *, int)
//{
//    mangled_ppc("?findOrInsertKey@?$hkPointerMap@PAXHUhkContainerHeapAllocator@@@@QAAPAVDummy@@PAXH@Z");
//};

//public: hkMap<struct hkDataObject::Handle, void *, struct Copier::HandleOps, struct hkContainerHeapAllocator>::hkMap<struct hkDataObject::Handle, void *, struct Copier::HandleOps, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkMap@UHandle@hkDataObject@@PAXUHandleOps@Copier@@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkMap<struct hkDataObject::Handle, void *, struct Copier::HandleOps, struct hkContainerHeapAllocator>::~hkMap<struct hkDataObject::Handle, void *, struct Copier::HandleOps, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkMap@UHandle@hkDataObject@@PAXUHandleOps@Copier@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkMap<struct hkDataObject::Handle, void *, struct Copier::HandleOps, struct hkContainerHeapAllocator>::insert(struct hkDataObject::Handle, void *)
//{
//    mangled_ppc("?insert@?$hkMap@UHandle@hkDataObject@@PAXUHandleOps@Copier@@UhkContainerHeapAllocator@@@@QAAHUHandle@hkDataObject@@PAX@Z");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::iShouldNotHaveVtable(void) const
//{
//    mangled_ppc("?iShouldNotHaveVtable@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBAXXZ");
//};

//public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@SAPAXI@Z");
//};

//public: static void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@SAXPAX@Z");
//};

//public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@SAPAXIPAX@Z");
//};

//public: static void * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::operator new[](unsigned int, void *)
//{
//    mangled_ppc("??_U?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@SAPAXIPAX@Z");
//};

//public: static void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::operator delete(void *, void *)
//{
//    mangled_ppc("??3?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@SAXPAX0@Z");
//};

//public: static void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::operator delete[](void *, void *)
//{
//    mangled_ppc("??_V?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@SAXPAX0@Z");
//};

//public: hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>(void)
//{
//    mangled_ppc("??0?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QAA@XZ");
//};

//public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::hasKey(struct hkDataObject::Handle) const
//{
//    mangled_ppc("?hasKey@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBA?AVhkBool@@UHandle@hkDataObject@@@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBAHXZ");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBAHXZ");
//};

//public: void * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getMemStart(void) const
//{
//    mangled_ppc("?getMemStart@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBAPAXXZ");
//};

//public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBA?AVhkBool@@XZ");
//};

//protected: static int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::isPower2(unsigned int)
//{
//    mangled_ppc("?isPower2@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@KAHI@Z");
//};

//public: void hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::iShouldNotHaveVtable(void) const
//{
//    mangled_ppc("?iShouldNotHaveVtable@?$hkMap@UHandle@hkDataObject@@HUHandleOps@Copier@@UhkContainerHeapAllocator@@@@QBAXXZ");
//};

//public: static void * hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::operator new(unsigned int)
//{
//    mangled_ppc("??2?$hkMap@UHandle@hkDataObject@@HUHandleOps@Copier@@UhkContainerHeapAllocator@@@@SAPAXI@Z");
//};

//public: static void hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::operator delete(void *)
//{
//    mangled_ppc("??3?$hkMap@UHandle@hkDataObject@@HUHandleOps@Copier@@UhkContainerHeapAllocator@@@@SAXPAX@Z");
//};

//public: static void * hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2?$hkMap@UHandle@hkDataObject@@HUHandleOps@Copier@@UhkContainerHeapAllocator@@@@SAPAXIPAX@Z");
//};

//public: static void * hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::operator new[](unsigned int, void *)
//{
//    mangled_ppc("??_U?$hkMap@UHandle@hkDataObject@@HUHandleOps@Copier@@UhkContainerHeapAllocator@@@@SAPAXIPAX@Z");
//};

//public: static void hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::operator delete(void *, void *)
//{
//    mangled_ppc("??3?$hkMap@UHandle@hkDataObject@@HUHandleOps@Copier@@UhkContainerHeapAllocator@@@@SAXPAX0@Z");
//};

//public: static void hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::operator delete[](void *, void *)
//{
//    mangled_ppc("??_V?$hkMap@UHandle@hkDataObject@@HUHandleOps@Copier@@UhkContainerHeapAllocator@@@@SAXPAX0@Z");
//};

//public: hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkMap@UHandle@hkDataObject@@HUHandleOps@Copier@@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>(void *, int)
//{
//    mangled_ppc("??0?$hkMap@UHandle@hkDataObject@@HUHandleOps@Copier@@UhkContainerHeapAllocator@@@@QAA@PAXH@Z");
//};

//public: hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::~hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkMap@UHandle@hkDataObject@@HUHandleOps@Copier@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::insert(struct hkDataObject::Handle, int)
//{
//    mangled_ppc("?insert@?$hkMap@UHandle@hkDataObject@@HUHandleOps@Copier@@UhkContainerHeapAllocator@@@@QAAHUHandle@hkDataObject@@H@Z");
//};

//public: class Dummy * hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::findOrInsertKey(struct hkDataObject::Handle, int)
//{
//    mangled_ppc("?findOrInsertKey@?$hkMap@UHandle@hkDataObject@@HUHandleOps@Copier@@UhkContainerHeapAllocator@@@@QAAPAVDummy@@UHandle@hkDataObject@@H@Z");
//};

//public: void hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkMap@UHandle@hkDataObject@@HUHandleOps@Copier@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkMap<struct hkDataObject::Handle, void *, struct Copier::HandleOps, struct hkContainerHeapAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkMap@UHandle@hkDataObject@@PAXUHandleOps@Copier@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>(void)
//{
//    mangled_ppc("??0?$hkMapBase@UHandle@hkDataObject@@PAXUHandleOps@Copier@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkPackfileData::Chunk>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UChunk@hkPackfileData@@@@QAAXXZ");
//};

//public: hkRefPtr<class hkPackfileData>::hkRefPtr<class hkPackfileData>(void)
//{
//    mangled_ppc("??0?$hkRefPtr@VhkPackfileData@@@@QAA@XZ");
//};

//public: hkRefPtr<class hkPackfileData>::~hkRefPtr<class hkPackfileData>(void)
//{
//    mangled_ppc("??1?$hkRefPtr@VhkPackfileData@@@@QAA@XZ");
//};

//public: void hkRefPtr<class hkPackfileData>::operator=(class hkPackfileData *)
//{
//    mangled_ppc("??4?$hkRefPtr@VhkPackfileData@@@@QAAXPAVhkPackfileData@@@Z");
//};

//public: class hkPackfileData * hkRefPtr<class hkPackfileData>::val(void) const
//{
//    mangled_ppc("?val@?$hkRefPtr@VhkPackfileData@@@@QBAPAVhkPackfileData@@XZ");
//};

//public: class hkPackfileData * hkRefPtr<class hkPackfileData>::operator->(void) const
//{
//    mangled_ppc("??C?$hkRefPtr@VhkPackfileData@@@@QBAPAVhkPackfileData@@XZ");
//};

//public: void hkRefPtr<class hkPackfileData>::setAndDontIncrementRefCount(class hkPackfileData *)
//{
//    mangled_ppc("?setAndDontIncrementRefCount@?$hkRefPtr@VhkPackfileData@@@@QAAXPAVhkPackfileData@@@Z");
//};

//public: class hkPackfileData * hkRefPtr<class hkPackfileData>::operator class hkPackfileData *(void) const
//{
//    mangled_ppc("??B?$hkRefPtr@VhkPackfileData@@@@QBAPAVhkPackfileData@@XZ");
//};

//public: hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::~hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>(void)
//{
//    mangled_ppc("??1?$hkMapBase@UHandle@hkDataObject@@PAXUHandleOps@Copier@@@@QAA@XZ");
//};

//public: class Dummy * hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkMapBase@UHandle@hkDataObject@@PAXUHandleOps@Copier@@@@QBAPAVDummy@@XZ");
//};

//public: static int Copier::HandleOps::isValid(struct hkDataObject::Handle &)
//{
//    mangled_ppc("?isValid@HandleOps@Copier@@SAHAAUHandle@hkDataObject@@@Z");
//};

//public: struct hkDataObject::Handle hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkMapBase@UHandle@hkDataObject@@PAXUHandleOps@Copier@@@@QBA?AUHandle@hkDataObject@@PAVDummy@@@Z");
//};

//public: void * hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkMapBase@UHandle@hkDataObject@@PAXUHandleOps@Copier@@@@QBAPAXPAVDummy@@@Z");
//};

//public: class Dummy * hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkMapBase@UHandle@hkDataObject@@PAXUHandleOps@Copier@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkMapBase@UHandle@hkDataObject@@PAXUHandleOps@Copier@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::insert(class hkMemoryAllocator &, struct hkDataObject::Handle, void *)
//{
//    mangled_ppc("?insert@?$hkMapBase@UHandle@hkDataObject@@PAXUHandleOps@Copier@@@@QAAHAAVhkMemoryAllocator@@UHandle@hkDataObject@@PAX@Z");
//};

//public: static unsigned int Copier::HandleOps::hash(struct hkDataObject::Handle const &, unsigned int)
//{
//    mangled_ppc("?hash@HandleOps@Copier@@SAIABUHandle@hkDataObject@@I@Z");
//};

//public: static int Copier::HandleOps::equal(struct hkDataObject::Handle const &, struct hkDataObject::Handle const &)
//{
//    mangled_ppc("?equal@HandleOps@Copier@@SAHABUHandle@hkDataObject@@0@Z");
//};

//public: void * hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::getWithDefault(struct hkDataObject::Handle, void *) const
//{
//    mangled_ppc("?getWithDefault@?$hkMapBase@UHandle@hkDataObject@@PAXUHandleOps@Copier@@@@QBAPAXUHandle@hkDataObject@@PAX@Z");
//};

//public: void hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkMapBase@UHandle@hkDataObject@@PAXUHandleOps@Copier@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?reserve@?$hkMapBase@UHandle@hkDataObject@@PAXUHandleOps@Copier@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//char * hkMemHeapBlockAlloc<char>(int)
//{
//    mangled_ppc("??$hkMemHeapBlockAlloc@D@@YAPADH@Z");
//};

//class hkBool * hkMemHeapBufAlloc<class hkBool>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@VhkBool@@@@YAPAVhkBool@@AAH@Z");
//};

//char * hkMemHeapBufAlloc<char>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@D@@YAPADAAH@Z");
//};

//signed char * hkMemHeapBufAlloc<signed char>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@C@@YAPACAAH@Z");
//};

//unsigned char * hkMemHeapBufAlloc<unsigned char>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@E@@YAPAEAAH@Z");
//};

//short * hkMemHeapBufAlloc<short>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@F@@YAPAFAAH@Z");
//};

//unsigned short * hkMemHeapBufAlloc<unsigned short>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@G@@YAPAGAAH@Z");
//};

//int * hkMemHeapBufAlloc<int>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@H@@YAPAHAAH@Z");
//};

//unsigned int * hkMemHeapBufAlloc<unsigned int>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@I@@YAPAIAAH@Z");
//};

//__int64* hkMemHeapBufAlloc<__int64>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@_J@@YAPA_JAAH@Z");
//};

//unsigned __int64* hkMemHeapBufAlloc<unsigned __int64>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@_K@@YAPA_KAAH@Z");
//};

//unsigned long * hkMemHeapBufAlloc<unsigned long>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@K@@YAPAKAAH@Z");
//};

//float * hkMemHeapBufAlloc<float>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@M@@YAPAMAAH@Z");
//};

//class hkHalf * hkMemHeapBufAlloc<class hkHalf>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@VhkHalf@@@@YAPAVhkHalf@@AAH@Z");
//};

//class hkVector4* hkMemHeapBufAlloc<class hkVector4>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@VhkVector4@@@@YAPAVhkVector4@@AAH@Z");
//};

//class hkQuaternion * hkMemHeapBufAlloc<class hkQuaternion>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@VhkQuaternion@@@@YAPAVhkQuaternion@@AAH@Z");
//};

//class hkMatrix3* hkMemHeapBufAlloc<class hkMatrix3>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@VhkMatrix3@@@@YAPAVhkMatrix3@@AAH@Z");
//};

//class hkRotation * hkMemHeapBufAlloc<class hkRotation>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@VhkRotation@@@@YAPAVhkRotation@@AAH@Z");
//};

//class hkQsTransform * hkMemHeapBufAlloc<class hkQsTransform>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@VhkQsTransform@@@@YAPAVhkQsTransform@@AAH@Z");
//};

//class hkMatrix4* hkMemHeapBufAlloc<class hkMatrix4>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@VhkMatrix4@@@@YAPAVhkMatrix4@@AAH@Z");
//};

//class hkTransform * hkMemHeapBufAlloc<class hkTransform>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@VhkTransform@@@@YAPAVhkTransform@@AAH@Z");
//};

//void ** hkMemHeapBufAlloc<void *>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@PAX@@YAPAPAXAAH@Z");
//};

//struct hkVariant * hkMemHeapBufAlloc<struct hkVariant>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@UhkVariant@@@@YAPAUhkVariant@@AAH@Z");
//};

//char ** hkMemHeapBufAlloc<char *>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@PAD@@YAPAPADAAH@Z");
//};

//public: enum hkResult Copier::fillNativeSimpleMember<class hkDataArray::Value>(void *, enum hkClassMember::Type, class hkDataArray::Value const &, class hkClass const *, int)
//{
//    mangled_ppc("??$fillNativeSimpleMember@VValue@hkDataArray@@@Copier@@QAA?AW4hkResult@@PAXW4Type@hkClassMember@@ABVValue@hkDataArray@@PBVhkClass@@H@Z");
//};

//public: char * Copier::strDup(char const *)
//{
//    mangled_ppc("?strDup@Copier@@QAAPADPBD@Z");
//};

//class hkStringPtr * hkMemHeapBufAlloc<class hkStringPtr>(int &)
//{
//    mangled_ppc("??$hkMemHeapBufAlloc@VhkStringPtr@@@@YAPAVhkStringPtr@@AAH@Z");
//};

//public: enum hkResult Copier::fillNativeSimpleMember<class hkDataObject::Value>(void *, enum hkClassMember::Type, class hkDataObject::Value const &, class hkClass const *, int)
//{
//    mangled_ppc("??$fillNativeSimpleMember@VValue@hkDataObject@@@Copier@@QAA?AW4hkResult@@PAXW4Type@hkClassMember@@ABVValue@hkDataObject@@PBVhkClass@@H@Z");
//};

//public: class hkVector4const & hkDataObject::Value::asVector4(void) const
//{
//    mangled_ppc("?asVector4@Value@hkDataObject@@QBAABVhkVector4@@XZ");
//};

//public: class hkQuaternion const & hkDataObject::Value::asQuaternion(void) const
//{
//    mangled_ppc("?asQuaternion@Value@hkDataObject@@QBAABVhkQuaternion@@XZ");
//};

//public: class hkMatrix3const & hkDataObject::Value::asMatrix3(void) const
//{
//    mangled_ppc("?asMatrix3@Value@hkDataObject@@QBAABVhkMatrix3@@XZ");
//};

//public: class hkRotation const & hkDataObject::Value::asRotation(void) const
//{
//    mangled_ppc("?asRotation@Value@hkDataObject@@QBAABVhkRotation@@XZ");
//};

//public: class hkQsTransform const & hkDataObject::Value::asQsTransform(void) const
//{
//    mangled_ppc("?asQsTransform@Value@hkDataObject@@QBAABVhkQsTransform@@XZ");
//};

//public: class hkMatrix4const & hkDataObject::Value::asMatrix4(void) const
//{
//    mangled_ppc("?asMatrix4@Value@hkDataObject@@QBAABVhkMatrix4@@XZ");
//};

//public: class hkTransform const & hkDataObject::Value::asTransform(void) const
//{
//    mangled_ppc("?asTransform@Value@hkDataObject@@QBAABVhkTransform@@XZ");
//};

//public: hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>(void *, int)
//{
//    mangled_ppc("??0?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QAA@PAXH@Z");
//};

//public: static void Copier::HandleOps::invalidate(struct hkDataObject::Handle &)
//{
//    mangled_ppc("?invalidate@HandleOps@Copier@@SAXAAUHandle@hkDataObject@@@Z");
//};

//public: hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::~hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>(void)
//{
//    mangled_ppc("??1?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QAA@XZ");
//};

//public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getIterator(void) const
//{
//    mangled_ppc("?getIterator@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBAPAVDummy@@XZ");
//};

//public: struct hkDataObject::Handle hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getKey(class Dummy *) const
//{
//    mangled_ppc("?getKey@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBA?AUHandle@hkDataObject@@PAVDummy@@@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBAHPAVDummy@@@Z");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::setValue(class Dummy *, int)
//{
//    mangled_ppc("?setValue@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QAAXPAVDummy@@H@Z");
//};

//public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getNext(class Dummy *) const
//{
//    mangled_ppc("?getNext@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBAPAVDummy@@PAV2@@Z");
//};

//public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::insert(class hkMemoryAllocator &, struct hkDataObject::Handle, int)
//{
//    mangled_ppc("?insert@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QAAHAAVhkMemoryAllocator@@UHandle@hkDataObject@@H@Z");
//};

//public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::findKey(struct hkDataObject::Handle) const
//{
//    mangled_ppc("?findKey@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBAPAVDummy@@UHandle@hkDataObject@@@Z");
//};

//public: class Dummy * hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::findOrInsertKey(class hkMemoryAllocator &, struct hkDataObject::Handle, int)
//{
//    mangled_ppc("?findOrInsertKey@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QAAPAVDummy@@AAVhkMemoryAllocator@@UHandle@hkDataObject@@H@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getWithDefault(struct hkDataObject::Handle, int) const
//{
//    mangled_ppc("?getWithDefault@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBAHUHandle@hkDataObject@@H@Z");
//};

//public: enum hkResult hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::get(struct hkDataObject::Handle, int *) const
//{
//    mangled_ppc("?get@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBA?AW4hkResult@@UHandle@hkDataObject@@PAH@Z");
//};

//public: enum hkResult hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::remove(struct hkDataObject::Handle)
//{
//    mangled_ppc("?remove@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QAA?AW4hkResult@@UHandle@hkDataObject@@@Z");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::remove(class Dummy *)
//{
//    mangled_ppc("?remove@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QAAXPAVDummy@@@Z");
//};

//public: int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getMemSize(void) const
//{
//    mangled_ppc("?getMemSize@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBAHXZ");
//};

//public: class hkBool hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::isOk(void) const
//{
//    mangled_ppc("?isOk@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QBA?AVhkBool@@XZ");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::clear(void)
//{
//    mangled_ppc("?clear@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QAAXXZ");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?reserve@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static int hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::getSizeInBytesFor(int)
//{
//    mangled_ppc("?getSizeInBytesFor@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@SAHH@Z");
//};

//protected: void hkMapBase<struct hkDataObject::Handle, int, struct Copier::HandleOps>::resizeTable(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?resizeTable@?$hkMapBase@UHandle@hkDataObject@@HUHandleOps@Copier@@@@IAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator>::swap(class hkMap<struct hkDataObject::Handle, int, struct Copier::HandleOps, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkMap@UHandle@hkDataObject@@HUHandleOps@Copier@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkPackfileData::Chunk>(struct hkPackfileData::Chunk *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UChunk@hkPackfileData@@@hkArrayUtil@@SAXPAUChunk@hkPackfileData@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::clear(void)
//{
//    mangled_ppc("?clear@?$hkMapBase@UHandle@hkDataObject@@PAXUHandleOps@Copier@@@@QAAXXZ");
//};

//protected: void hkMapBase<struct hkDataObject::Handle, void *, struct Copier::HandleOps>::resizeTable(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?resizeTable@?$hkMapBase@UHandle@hkDataObject@@PAXUHandleOps@Copier@@@@IAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: class hkBool hkClassMember::hasEnumClass(void) const
//{
//    mangled_ppc("?hasEnumClass@hkClassMember@@QBA?AVhkBool@@XZ");
//};

