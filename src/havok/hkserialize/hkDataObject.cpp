/* ---------- headers */

#include "havok\hkserialize\hkDataObject.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkDataClass::hkDataClass(class hkDataClassImpl *);
// public: hkDataClass::~hkDataClass(void);
// public: int hkDataClass::isNull(void) const;
// public: char const * hkDataClass::getName(void) const;
// public: int hkDataClass::getVersion(void) const;
// public: class hkDataClass hkDataClass::getParent(void) const;
// public: class hkDataWorld const * hkDataClass::getWorld(void) const;
// public: class hkBool hkDataClass::isSuperClass(class hkDataClass const &) const;
// public: int hkDataClass::getNumDeclaredMembers(void) const;
// public: int hkDataClass::getDeclaredMemberIndexByName(char const *) const;
// public: void hkDataClass::getDeclaredMemberInfo(int, struct hkDataClass::MemberInfo &) const;
// public: void hkDataClass::getMemberInfo(int, struct hkDataClass::MemberInfo &) const;
// public: int hkDataClass::getNumMembers(void) const;
// public: int hkDataClass::getMemberIndexByName(char const *) const;
// public: void hkDataClass::getAllMemberInfo(class hkArrayBase<struct hkDataClass::MemberInfo> &) const;
// public: void hkDataClass::getAllDeclaredMemberInfo(class hkArrayBase<struct hkDataClass::MemberInfo> &) const;
// public: hkDataObject::hkDataObject(class hkDataObjectImpl *);
// public: hkDataObject::hkDataObject(class hkDataObject const &);
// public: void hkDataObject::operator=(class hkDataObject const &);
// public: bool hkDataObject::operator==(class hkDataObject const &);
// public: bool hkDataObject::operator!=(class hkDataObject const &);
// public: hkDataObject::~hkDataObject(void);
// public: struct hkDataObject::Handle hkDataObject::getHandle(void) const;
// public: class hkDataClass const hkDataObject::getClass(void) const;
// public: class hkDataObject::Value hkDataObject::operator[](char const *);
// public: class hkDataObject::Value const hkDataObject::operator[](char const *) const;
// public: int hkDataObject::getMemberIterator(void) const;
// public: int hkDataObject::isValid(int) const;
// public: int hkDataObject::getNextMember(int) const;
// public: char const * hkDataObject::getMemberName(int) const;
// public: class hkDataObject::Value const hkDataObject::getMemberValue(int) const;
// public: int hkDataObject::hasMember(char const *) const;
// public: enum hkDataObject::Type hkDataObject::Value::getType(void) const;
// public: int hkDataObject::isNull(void) const;
// public: int hkDataObject::Value::asInt(void) const;
// public: class hkDataArray hkDataObject::Value::asArray(void) const;
// public: float const * hkDataObject::Value::asVec(int) const;
// public: char const * hkDataObject::Value::asString(void) const;
// public: class hkDataObject hkDataObject::Value::asObject(void) const;
// public: float hkDataObject::Value::asReal(void) const;
// public: void hkDataObject::Value::operator=(class hkDataObject::Value const &);
// public: void hkDataObject::Value::operator=(int);
// public: void hkDataObject::Value::operator=(class hkDataObject const &);
// public: void hkDataObject::Value::operator=(class hkDataArray const &);
// public: void hkDataObject::Value::operator=(__int64);
// public: void hkDataObject::Value::operator=(float);
// public: void hkDataObject::Value::operator=(class hkHalf);
// public: void hkDataObject::Value::operator=(bool);
// public: void hkDataObject::Value::setVec(float const *, int);
// public: void hkDataObject::Value::operator=(char const *);
// public: hkDataArray::hkDataArray(class hkDataArrayImpl *);
// public: hkDataArray::~hkDataArray(void);
// public: class hkDataArray::Value hkDataArray::operator[](int);
// public: class hkDataArray::Value const hkDataArray::operator[](int) const;
// public: void hkDataArray::clear(void);
// public: void hkDataArray::setSize(int);
// public: void hkDataArray::reserve(int);
// public: int hkDataArray::getSize(void) const;
// public: enum hkDataObject::Type hkDataArray::getType(void) const;
// public: class hkDataClass hkDataArray::getClass(void) const;
// public: enum hkDataObject::Type hkDataArray::Value::getType(void) const;
// public: float const * hkDataArray::Value::asVec(int) const;
// public: char const * hkDataArray::Value::asString(void) const;
// public: float hkDataArray::Value::asReal(void) const;
// public: int hkDataArray::Value::asInt(void) const;
// public: class hkDataObject hkDataArray::Value::asObject(void) const;
// public: class hkDataArray hkDataArray::Value::asArray(void) const;
// public: void hkDataArray::Value::operator=(class hkDataObject const &);
// public: void hkDataArray::Value::operator=(float);
// public: void hkDataArray::Value::operator=(class hkHalf);
// public: void hkDataArray::Value::setVec(float const *, int);
// public: void hkDataArray::Value::operator=(__int64);
// public: void hkDataArray::Value::operator=(int);
// public: void hkDataArray::Value::operator=(char const *);
// public: void hkDataArray::setAll(class hkBool const *, int);
// public: void hkDataArray::setAll(char const *, int);
// public: void hkDataArray::setAll(signed char const *, int);
// public: void hkDataArray::setAll(unsigned char const *, int);
// public: void hkDataArray::setAll(short const *, int);
// public: void hkDataArray::setAll(unsigned short const *, int);
// public: void hkDataArray::setAll(int const *, int);
// public: void hkDataArray::setAll(unsigned int const *, int);
// public: void hkDataArray::setAll(__int64const *, int);
// public: void hkDataArray::setAll(unsigned __int64const *, int);
// public: void hkDataArray::setAll(float const *, int);
// public: void hkDataArray::setAll(class hkHalf const *, int);
// public: class hkDataArray hkDataArray::swizzleObjectMember(char const *) const;
// public: class hkDataClassImpl const * hkDataClass::getImplementation(void) const;
// public: void hkDataRefCounted::addExternalReference(void) const;
// public: void hkDataRefCounted::addReference(void) const;
// public: void hkDataRefCounted::removeExternalReference(void) const;
// public: void hkDataRefCounted::removeReference(void) const;
// public: hkDataClass::MemberInfo::MemberInfo(void);
// public: class hkDataObjectImpl * hkDataObject::getImplementation(void);
// public: class hkDataArrayImpl * hkDataArray::getImplementation(void);
// private: hkDataArray::Value::Value(class hkDataArrayImpl *, int);
// public: class hkDataObjectImpl const * hkDataObject::getImplementation(void) const;
// public: struct hkDataClass::MemberInfo & hkArrayBase<struct hkDataClass::MemberInfo>::operator[](int);
// public: int hkArrayBase<struct hkDataClass::MemberInfo>::getSize(void) const;

//public: hkDataClass::hkDataClass(class hkDataClassImpl *)
//{
//    mangled_ppc("??0hkDataClass@@QAA@PAVhkDataClassImpl@@@Z");
//};

//public: hkDataClass::~hkDataClass(void)
//{
//    mangled_ppc("??1hkDataClass@@QAA@XZ");
//};

//public: int hkDataClass::isNull(void) const
//{
//    mangled_ppc("?isNull@hkDataClass@@QBAHXZ");
//};

//public: char const * hkDataClass::getName(void) const
//{
//    mangled_ppc("?getName@hkDataClass@@QBAPBDXZ");
//};

//public: int hkDataClass::getVersion(void) const
//{
//    mangled_ppc("?getVersion@hkDataClass@@QBAHXZ");
//};

//public: class hkDataClass hkDataClass::getParent(void) const
//{
//    mangled_ppc("?getParent@hkDataClass@@QBA?AV1@XZ");
//};

//public: class hkDataWorld const * hkDataClass::getWorld(void) const
//{
//    mangled_ppc("?getWorld@hkDataClass@@QBAPBVhkDataWorld@@XZ");
//};

//public: class hkBool hkDataClass::isSuperClass(class hkDataClass const &) const
//{
//    mangled_ppc("?isSuperClass@hkDataClass@@QBA?AVhkBool@@ABV1@@Z");
//};

//public: int hkDataClass::getNumDeclaredMembers(void) const
//{
//    mangled_ppc("?getNumDeclaredMembers@hkDataClass@@QBAHXZ");
//};

//public: int hkDataClass::getDeclaredMemberIndexByName(char const *) const
//{
//    mangled_ppc("?getDeclaredMemberIndexByName@hkDataClass@@QBAHPBD@Z");
//};

//public: void hkDataClass::getDeclaredMemberInfo(int, struct hkDataClass::MemberInfo &) const
//{
//    mangled_ppc("?getDeclaredMemberInfo@hkDataClass@@QBAXHAAUMemberInfo@1@@Z");
//};

//public: void hkDataClass::getMemberInfo(int, struct hkDataClass::MemberInfo &) const
//{
//    mangled_ppc("?getMemberInfo@hkDataClass@@QBAXHAAUMemberInfo@1@@Z");
//};

//public: int hkDataClass::getNumMembers(void) const
//{
//    mangled_ppc("?getNumMembers@hkDataClass@@QBAHXZ");
//};

//public: int hkDataClass::getMemberIndexByName(char const *) const
//{
//    mangled_ppc("?getMemberIndexByName@hkDataClass@@QBAHPBD@Z");
//};

//public: void hkDataClass::getAllMemberInfo(class hkArrayBase<struct hkDataClass::MemberInfo> &) const
//{
//    mangled_ppc("?getAllMemberInfo@hkDataClass@@QBAXAAV?$hkArrayBase@UMemberInfo@hkDataClass@@@@@Z");
//};

//public: void hkDataClass::getAllDeclaredMemberInfo(class hkArrayBase<struct hkDataClass::MemberInfo> &) const
//{
//    mangled_ppc("?getAllDeclaredMemberInfo@hkDataClass@@QBAXAAV?$hkArrayBase@UMemberInfo@hkDataClass@@@@@Z");
//};

//public: hkDataObject::hkDataObject(class hkDataObjectImpl *)
//{
//    mangled_ppc("??0hkDataObject@@QAA@PAVhkDataObjectImpl@@@Z");
//};

//public: hkDataObject::hkDataObject(class hkDataObject const &)
//{
//    mangled_ppc("??0hkDataObject@@QAA@ABV0@@Z");
//};

//public: void hkDataObject::operator=(class hkDataObject const &)
//{
//    mangled_ppc("??4hkDataObject@@QAAXABV0@@Z");
//};

//public: bool hkDataObject::operator==(class hkDataObject const &)
//{
//    mangled_ppc("??8hkDataObject@@QAA_NABV0@@Z");
//};

//public: bool hkDataObject::operator!=(class hkDataObject const &)
//{
//    mangled_ppc("??9hkDataObject@@QAA_NABV0@@Z");
//};

//public: hkDataObject::~hkDataObject(void)
//{
//    mangled_ppc("??1hkDataObject@@QAA@XZ");
//};

//public: struct hkDataObject::Handle hkDataObject::getHandle(void) const
//{
//    mangled_ppc("?getHandle@hkDataObject@@QBA?AUHandle@1@XZ");
//};

//public: class hkDataClass const hkDataObject::getClass(void) const
//{
//    mangled_ppc("?getClass@hkDataObject@@QBA?BVhkDataClass@@XZ");
//};

//public: class hkDataObject::Value hkDataObject::operator[](char const *)
//{
//    mangled_ppc("??AhkDataObject@@QAA?AVValue@0@PBD@Z");
//};

//public: class hkDataObject::Value const hkDataObject::operator[](char const *) const
//{
//    mangled_ppc("??AhkDataObject@@QBA?BVValue@0@PBD@Z");
//};

//public: int hkDataObject::getMemberIterator(void) const
//{
//    mangled_ppc("?getMemberIterator@hkDataObject@@QBAHXZ");
//};

//public: int hkDataObject::isValid(int) const
//{
//    mangled_ppc("?isValid@hkDataObject@@QBAHH@Z");
//};

//public: int hkDataObject::getNextMember(int) const
//{
//    mangled_ppc("?getNextMember@hkDataObject@@QBAHH@Z");
//};

//public: char const * hkDataObject::getMemberName(int) const
//{
//    mangled_ppc("?getMemberName@hkDataObject@@QBAPBDH@Z");
//};

//public: class hkDataObject::Value const hkDataObject::getMemberValue(int) const
//{
//    mangled_ppc("?getMemberValue@hkDataObject@@QBA?BVValue@1@H@Z");
//};

//public: int hkDataObject::hasMember(char const *) const
//{
//    mangled_ppc("?hasMember@hkDataObject@@QBAHPBD@Z");
//};

//public: enum hkDataObject::Type hkDataObject::Value::getType(void) const
//{
//    mangled_ppc("?getType@Value@hkDataObject@@QBA?AW4Type@2@XZ");
//};

//public: int hkDataObject::isNull(void) const
//{
//    mangled_ppc("?isNull@hkDataObject@@QBAHXZ");
//};

//public: int hkDataObject::Value::asInt(void) const
//{
//    mangled_ppc("?asInt@Value@hkDataObject@@QBAHXZ");
//};

//public: class hkDataArray hkDataObject::Value::asArray(void) const
//{
//    mangled_ppc("?asArray@Value@hkDataObject@@QBA?AVhkDataArray@@XZ");
//};

//public: float const * hkDataObject::Value::asVec(int) const
//{
//    mangled_ppc("?asVec@Value@hkDataObject@@QBAPBMH@Z");
//};

//public: char const * hkDataObject::Value::asString(void) const
//{
//    mangled_ppc("?asString@Value@hkDataObject@@QBAPBDXZ");
//};

//public: class hkDataObject hkDataObject::Value::asObject(void) const
//{
//    mangled_ppc("?asObject@Value@hkDataObject@@QBA?AV2@XZ");
//};

//public: float hkDataObject::Value::asReal(void) const
//{
//    mangled_ppc("?asReal@Value@hkDataObject@@QBAMXZ");
//};

//public: void hkDataObject::Value::operator=(class hkDataObject::Value const &)
//{
//    mangled_ppc("??4Value@hkDataObject@@QAAXABV01@@Z");
//};

//public: void hkDataObject::Value::operator=(int)
//{
//    mangled_ppc("??4Value@hkDataObject@@QAAXH@Z");
//};

//public: void hkDataObject::Value::operator=(class hkDataObject const &)
//{
//    mangled_ppc("??4Value@hkDataObject@@QAAXABV1@@Z");
//};

//public: void hkDataObject::Value::operator=(class hkDataArray const &)
//{
//    mangled_ppc("??4Value@hkDataObject@@QAAXABVhkDataArray@@@Z");
//};

//public: void hkDataObject::Value::operator=(__int64)
//{
//    mangled_ppc("??4Value@hkDataObject@@QAAX_J@Z");
//};

//public: void hkDataObject::Value::operator=(float)
//{
//    mangled_ppc("??4Value@hkDataObject@@QAAXM@Z");
//};

//public: void hkDataObject::Value::operator=(class hkHalf)
//{
//    mangled_ppc("??4Value@hkDataObject@@QAAXVhkHalf@@@Z");
//};

//public: void hkDataObject::Value::operator=(bool)
//{
//    mangled_ppc("??4Value@hkDataObject@@QAAX_N@Z");
//};

//public: void hkDataObject::Value::setVec(float const *, int)
//{
//    mangled_ppc("?setVec@Value@hkDataObject@@QAAXPBMH@Z");
//};

//public: void hkDataObject::Value::operator=(char const *)
//{
//    mangled_ppc("??4Value@hkDataObject@@QAAXPBD@Z");
//};

//public: hkDataArray::hkDataArray(class hkDataArrayImpl *)
//{
//    mangled_ppc("??0hkDataArray@@QAA@PAVhkDataArrayImpl@@@Z");
//};

//public: hkDataArray::~hkDataArray(void)
//{
//    mangled_ppc("??1hkDataArray@@QAA@XZ");
//};

//public: class hkDataArray::Value hkDataArray::operator[](int)
//{
//    mangled_ppc("??AhkDataArray@@QAA?AVValue@0@H@Z");
//};

//public: class hkDataArray::Value const hkDataArray::operator[](int) const
//{
//    mangled_ppc("??AhkDataArray@@QBA?BVValue@0@H@Z");
//};

//public: void hkDataArray::clear(void)
//{
//    mangled_ppc("?clear@hkDataArray@@QAAXXZ");
//};

//public: void hkDataArray::setSize(int)
//{
//    mangled_ppc("?setSize@hkDataArray@@QAAXH@Z");
//};

//public: void hkDataArray::reserve(int)
//{
//    mangled_ppc("?reserve@hkDataArray@@QAAXH@Z");
//};

//public: int hkDataArray::getSize(void) const
//{
//    mangled_ppc("?getSize@hkDataArray@@QBAHXZ");
//};

//public: enum hkDataObject::Type hkDataArray::getType(void) const
//{
//    mangled_ppc("?getType@hkDataArray@@QBA?AW4Type@hkDataObject@@XZ");
//};

//public: class hkDataClass hkDataArray::getClass(void) const
//{
//    mangled_ppc("?getClass@hkDataArray@@QBA?AVhkDataClass@@XZ");
//};

//public: enum hkDataObject::Type hkDataArray::Value::getType(void) const
//{
//    mangled_ppc("?getType@Value@hkDataArray@@QBA?AW4Type@hkDataObject@@XZ");
//};

//public: float const * hkDataArray::Value::asVec(int) const
//{
//    mangled_ppc("?asVec@Value@hkDataArray@@QBAPBMH@Z");
//};

//public: char const * hkDataArray::Value::asString(void) const
//{
//    mangled_ppc("?asString@Value@hkDataArray@@QBAPBDXZ");
//};

//public: float hkDataArray::Value::asReal(void) const
//{
//    mangled_ppc("?asReal@Value@hkDataArray@@QBAMXZ");
//};

//public: int hkDataArray::Value::asInt(void) const
//{
//    mangled_ppc("?asInt@Value@hkDataArray@@QBAHXZ");
//};

//public: class hkDataObject hkDataArray::Value::asObject(void) const
//{
//    mangled_ppc("?asObject@Value@hkDataArray@@QBA?AVhkDataObject@@XZ");
//};

//public: class hkDataArray hkDataArray::Value::asArray(void) const
//{
//    mangled_ppc("?asArray@Value@hkDataArray@@QBA?AV2@XZ");
//};

//public: void hkDataArray::Value::operator=(class hkDataObject const &)
//{
//    mangled_ppc("??4Value@hkDataArray@@QAAXABVhkDataObject@@@Z");
//};

//public: void hkDataArray::Value::operator=(float)
//{
//    mangled_ppc("??4Value@hkDataArray@@QAAXM@Z");
//};

//public: void hkDataArray::Value::operator=(class hkHalf)
//{
//    mangled_ppc("??4Value@hkDataArray@@QAAXVhkHalf@@@Z");
//};

//public: void hkDataArray::Value::setVec(float const *, int)
//{
//    mangled_ppc("?setVec@Value@hkDataArray@@QAAXPBMH@Z");
//};

//public: void hkDataArray::Value::operator=(__int64)
//{
//    mangled_ppc("??4Value@hkDataArray@@QAAX_J@Z");
//};

//public: void hkDataArray::Value::operator=(int)
//{
//    mangled_ppc("??4Value@hkDataArray@@QAAXH@Z");
//};

//public: void hkDataArray::Value::operator=(char const *)
//{
//    mangled_ppc("??4Value@hkDataArray@@QAAXPBD@Z");
//};

//public: void hkDataArray::setAll(class hkBool const *, int)
//{
//    mangled_ppc("?setAll@hkDataArray@@QAAXPBVhkBool@@H@Z");
//};

//public: void hkDataArray::setAll(char const *, int)
//{
//    mangled_ppc("?setAll@hkDataArray@@QAAXPBDH@Z");
//};

//public: void hkDataArray::setAll(signed char const *, int)
//{
//    mangled_ppc("?setAll@hkDataArray@@QAAXPBCH@Z");
//};

//public: void hkDataArray::setAll(unsigned char const *, int)
//{
//    mangled_ppc("?setAll@hkDataArray@@QAAXPBEH@Z");
//};

//public: void hkDataArray::setAll(short const *, int)
//{
//    mangled_ppc("?setAll@hkDataArray@@QAAXPBFH@Z");
//};

//public: void hkDataArray::setAll(unsigned short const *, int)
//{
//    mangled_ppc("?setAll@hkDataArray@@QAAXPBGH@Z");
//};

//public: void hkDataArray::setAll(int const *, int)
//{
//    mangled_ppc("?setAll@hkDataArray@@QAAXPBHH@Z");
//};

//public: void hkDataArray::setAll(unsigned int const *, int)
//{
//    mangled_ppc("?setAll@hkDataArray@@QAAXPBIH@Z");
//};

//public: void hkDataArray::setAll(__int64const *, int)
//{
//    mangled_ppc("?setAll@hkDataArray@@QAAXPB_JH@Z");
//};

//public: void hkDataArray::setAll(unsigned __int64const *, int)
//{
//    mangled_ppc("?setAll@hkDataArray@@QAAXPB_KH@Z");
//};

//public: void hkDataArray::setAll(float const *, int)
//{
//    mangled_ppc("?setAll@hkDataArray@@QAAXPBMH@Z");
//};

//public: void hkDataArray::setAll(class hkHalf const *, int)
//{
//    mangled_ppc("?setAll@hkDataArray@@QAAXPBVhkHalf@@H@Z");
//};

//public: class hkDataArray hkDataArray::swizzleObjectMember(char const *) const
//{
//    mangled_ppc("?swizzleObjectMember@hkDataArray@@QBA?AV1@PBD@Z");
//};

//public: class hkDataClassImpl const * hkDataClass::getImplementation(void) const
//{
//    mangled_ppc("?getImplementation@hkDataClass@@QBAPBVhkDataClassImpl@@XZ");
//};

//public: void hkDataRefCounted::addExternalReference(void) const
//{
//    mangled_ppc("?addExternalReference@hkDataRefCounted@@QBAXXZ");
//};

//public: void hkDataRefCounted::addReference(void) const
//{
//    mangled_ppc("?addReference@hkDataRefCounted@@QBAXXZ");
//};

//public: void hkDataRefCounted::removeExternalReference(void) const
//{
//    mangled_ppc("?removeExternalReference@hkDataRefCounted@@QBAXXZ");
//};

//public: void hkDataRefCounted::removeReference(void) const
//{
//    mangled_ppc("?removeReference@hkDataRefCounted@@QBAXXZ");
//};

//public: hkDataClass::MemberInfo::MemberInfo(void)
//{
//    mangled_ppc("??0MemberInfo@hkDataClass@@QAA@XZ");
//};

//public: class hkDataObjectImpl * hkDataObject::getImplementation(void)
//{
//    mangled_ppc("?getImplementation@hkDataObject@@QAAPAVhkDataObjectImpl@@XZ");
//};

//public: class hkDataArrayImpl * hkDataArray::getImplementation(void)
//{
//    mangled_ppc("?getImplementation@hkDataArray@@QAAPAVhkDataArrayImpl@@XZ");
//};

//private: hkDataArray::Value::Value(class hkDataArrayImpl *, int)
//{
//    mangled_ppc("??0Value@hkDataArray@@AAA@PAVhkDataArrayImpl@@H@Z");
//};

//public: class hkDataObjectImpl const * hkDataObject::getImplementation(void) const
//{
//    mangled_ppc("?getImplementation@hkDataObject@@QBAPBVhkDataObjectImpl@@XZ");
//};

//public: struct hkDataClass::MemberInfo & hkArrayBase<struct hkDataClass::MemberInfo>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UMemberInfo@hkDataClass@@@@QAAAAUMemberInfo@hkDataClass@@H@Z");
//};

//public: int hkArrayBase<struct hkDataClass::MemberInfo>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UMemberInfo@hkDataClass@@@@QBAHXZ");
//};

