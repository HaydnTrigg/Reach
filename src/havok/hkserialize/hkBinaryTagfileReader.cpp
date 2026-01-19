/* ---------- headers */

#include "havok\hkserialize\hkBinaryTagfileReader.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkBinaryTagfileReader::`RTTI Complete Object Locator'; // "??_R4hkBinaryTagfileReader@@6B@"
// hkBinaryTagfileReader::`RTTI Class Hierarchy Descriptor'; // "??_R3hkBinaryTagfileReader@@8"
// hkBinaryTagfileReader::`RTTI Base Class Array'; // "??_R2hkBinaryTagfileReader@@8"
// hkBinaryTagfileReader::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkBinaryTagfileReader@@8"
// hkTagfileReader::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkTagfileReader@@8"
// hkTagfileReader::`RTTI Class Hierarchy Descriptor'; // "??_R3hkTagfileReader@@8"
// hkTagfileReader::`RTTI Base Class Array'; // "??_R2hkTagfileReader@@8"
// const hkTagfileReader::`RTTI Complete Object Locator'; // "??_R4hkTagfileReader@@6B@"
// class hkBinaryTagfileReader::`RTTI Type Descriptor'; // "??_R0?AVhkBinaryTagfileReader@@@8"
// class hkTagfileReader::`RTTI Type Descriptor'; // "??_R0?AVhkTagfileReader@@@8"

// public: hkBinaryTagfileReader::hkBinaryTagfileReader(void);
// public: virtual class hkDataObject hkBinaryTagfileReader::load(class hkStreamReader *, class hkDataWorld &);
// merged_84744260;
// public: hkTagfileReader::hkTagfileReader(void);
// public: virtual hkBinaryTagfileReader::~hkBinaryTagfileReader(void);
// public: virtual hkTagfileReader::~hkTagfileReader(void);
// merged_84744338;
// public: Reader::Reader(class hkStreamReader *, class hkDataWorld &);
// public: Reader::~Reader(void);
// public: class hkDataObject Reader::readObjectTree(void);
// public: int hkIArchive::read32(void);
// public: class hkDataObject Reader::readObject(int);
// public: void Reader::readBitfield(int, class hkLocalArray<unsigned char> &);
// public: void hkIArchive::readArray8u(unsigned char *, int);
// public: void Reader::readBinaryValue(class hkDataObject::Value, struct hkDataClass::MemberInfo const &);
// public: unsigned char hkIArchive::read8u(void);
// public: char const * Reader::readString(void);
// public: float Reader::readFloat(void);
// public: float hkIArchive::readFloat32(void);
// public: void Reader::_readArrayItems(class hkDataArray &, int);
// public: void hkIArchive::readArrayFloat32(float *, int);
// public: enum hkResult Reader::readClass(void);
// public: void hkArray<struct hkDataWorld::ClassCinfo::Member, struct hkContainerHeapAllocator>::setSize(int);
// public: hkLocalArray<unsigned char>::hkLocalArray<unsigned char>(int);
// public: hkLocalArray<unsigned char>::~hkLocalArray<unsigned char>(void);
// public: void hkArray<unsigned char, struct hkContainerTempAllocator>::reserve(int);
// public: void hkArray<float, struct hkContainerTempAllocator>::setSize(int);
// public: hkLocalArray<struct hkDataClass::MemberInfo>::hkLocalArray<struct hkDataClass::MemberInfo>(int);
// public: hkLocalArray<struct hkDataClass::MemberInfo>::~hkLocalArray<struct hkDataClass::MemberInfo>(void);
// public: class hkBool hkEnum<enum hkDataWorld::DataWorldType, int>::operator==(enum hkDataWorld::DataWorldType) const;
// public: class hkBool hkEnum<enum hkDataWorld::DataWorldType, int>::operator!=(enum hkDataWorld::DataWorldType) const;
// public: class hkBool hkLocalArray<unsigned char>::wasReallocated(void) const;
// public: class hkBool hkLocalArray<struct hkDataClass::MemberInfo>::wasReallocated(void) const;
// public: hkArray<struct hkDataClass::MemberInfo, struct hkContainerHeapAllocator>::hkArray<struct hkDataClass::MemberInfo, struct hkContainerHeapAllocator>(void);
// public: struct hkDataWorld::ClassCinfo::Member & hkArrayBase<struct hkDataWorld::ClassCinfo::Member>::operator[](int);
// public: void hkArrayBase<struct hkDataWorld::ClassCinfo::Member>::_setSize(class hkMemoryAllocator &, int);
// public: int Reader::readInt<int>(void);
// public: hkArray<unsigned char, struct hkContainerTempAllocator>::hkArray<unsigned char, struct hkContainerTempAllocator>(int);
// public: hkArray<unsigned char, struct hkContainerTempAllocator>::~hkArray<unsigned char, struct hkContainerTempAllocator>(void);
// public: hkArray<float, struct hkContainerTempAllocator>::hkArray<float, struct hkContainerTempAllocator>(int);
// public: hkArray<float, struct hkContainerTempAllocator>::~hkArray<float, struct hkContainerTempAllocator>(void);
// public: void hkArrayBase<struct hkDataClass::MemberInfo>::setSizeUnchecked(int);
// public: hkArray<struct hkDataClass::MemberInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkDataClass::MemberInfo, struct hkContainerHeapAllocator>(void);
// public: __int64 Reader::readInt<__int64>(void);
// public: enum hkDataObject::Type Reader::readInt<enum hkDataObject::Type>(void);
// struct hkDataClass::MemberInfo * hkAllocateStack<struct hkDataClass::MemberInfo>(int, char const *);
// void hkDeallocateStack<struct hkDataClass::MemberInfo>(struct hkDataClass::MemberInfo *);
// public: void hkArray<unsigned char, struct hkContainerTempAllocator>::clearAndDeallocate(void);
// public: void hkArray<float, struct hkContainerTempAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkDataClass::MemberInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: static void hkArrayUtil::construct<struct hkDataWorld::ClassCinfo::Member>(struct hkDataWorld::ClassCinfo::Member *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<float>::setOwnedData(float *, int, int);

//public: hkBinaryTagfileReader::hkBinaryTagfileReader(void)
//{
//    mangled_ppc("??0hkBinaryTagfileReader@@QAA@XZ");
//};

//public: virtual class hkDataObject hkBinaryTagfileReader::load(class hkStreamReader *, class hkDataWorld &)
//{
//    mangled_ppc("?load@hkBinaryTagfileReader@@UAA?AVhkDataObject@@PAVhkStreamReader@@AAVhkDataWorld@@@Z");
//};

//merged_84744260
//{
//    mangled_ppc("merged_84744260");
//};

//public: hkTagfileReader::hkTagfileReader(void)
//{
//    mangled_ppc("??0hkTagfileReader@@QAA@XZ");
//};

//public: virtual hkBinaryTagfileReader::~hkBinaryTagfileReader(void)
//{
//    mangled_ppc("??1hkBinaryTagfileReader@@UAA@XZ");
//};

//public: virtual hkTagfileReader::~hkTagfileReader(void)
//{
//    mangled_ppc("??1hkTagfileReader@@UAA@XZ");
//};

//merged_84744338
//{
//    mangled_ppc("merged_84744338");
//};

//public: Reader::Reader(class hkStreamReader *, class hkDataWorld &)
//{
//    mangled_ppc("??0Reader@@QAA@PAVhkStreamReader@@AAVhkDataWorld@@@Z");
//};

//public: Reader::~Reader(void)
//{
//    mangled_ppc("??1Reader@@QAA@XZ");
//};

//public: class hkDataObject Reader::readObjectTree(void)
//{
//    mangled_ppc("?readObjectTree@Reader@@QAA?AVhkDataObject@@XZ");
//};

//public: int hkIArchive::read32(void)
//{
//    mangled_ppc("?read32@hkIArchive@@QAAHXZ");
//};

//public: class hkDataObject Reader::readObject(int)
//{
//    mangled_ppc("?readObject@Reader@@QAA?AVhkDataObject@@H@Z");
//};

//public: void Reader::readBitfield(int, class hkLocalArray<unsigned char> &)
//{
//    mangled_ppc("?readBitfield@Reader@@QAAXHAAV?$hkLocalArray@E@@@Z");
//};

//public: void hkIArchive::readArray8u(unsigned char *, int)
//{
//    mangled_ppc("?readArray8u@hkIArchive@@QAAXPAEH@Z");
//};

//public: void Reader::readBinaryValue(class hkDataObject::Value, struct hkDataClass::MemberInfo const &)
//{
//    mangled_ppc("?readBinaryValue@Reader@@QAAXVValue@hkDataObject@@ABUMemberInfo@hkDataClass@@@Z");
//};

//public: unsigned char hkIArchive::read8u(void)
//{
//    mangled_ppc("?read8u@hkIArchive@@QAAEXZ");
//};

//public: char const * Reader::readString(void)
//{
//    mangled_ppc("?readString@Reader@@QAAPBDXZ");
//};

//public: float Reader::readFloat(void)
//{
//    mangled_ppc("?readFloat@Reader@@QAAMXZ");
//};

//public: float hkIArchive::readFloat32(void)
//{
//    mangled_ppc("?readFloat32@hkIArchive@@QAAMXZ");
//};

//public: void Reader::_readArrayItems(class hkDataArray &, int)
//{
//    mangled_ppc("?_readArrayItems@Reader@@QAAXAAVhkDataArray@@H@Z");
//};

//public: void hkIArchive::readArrayFloat32(float *, int)
//{
//    mangled_ppc("?readArrayFloat32@hkIArchive@@QAAXPAMH@Z");
//};

//public: enum hkResult Reader::readClass(void)
//{
//    mangled_ppc("?readClass@Reader@@QAA?AW4hkResult@@XZ");
//};

//public: void hkArray<struct hkDataWorld::ClassCinfo::Member, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UMember@ClassCinfo@hkDataWorld@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkLocalArray<unsigned char>::hkLocalArray<unsigned char>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@E@@QAA@H@Z");
//};

//public: hkLocalArray<unsigned char>::~hkLocalArray<unsigned char>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@E@@QAA@XZ");
//};

//public: void hkArray<unsigned char, struct hkContainerTempAllocator>::reserve(int)
//{
//    mangled_ppc("?reserve@?$hkArray@EUhkContainerTempAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<float, struct hkContainerTempAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@MUhkContainerTempAllocator@@@@QAAXH@Z");
//};

//public: hkLocalArray<struct hkDataClass::MemberInfo>::hkLocalArray<struct hkDataClass::MemberInfo>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@UMemberInfo@hkDataClass@@@@QAA@H@Z");
//};

//public: hkLocalArray<struct hkDataClass::MemberInfo>::~hkLocalArray<struct hkDataClass::MemberInfo>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@UMemberInfo@hkDataClass@@@@QAA@XZ");
//};

//public: class hkBool hkEnum<enum hkDataWorld::DataWorldType, int>::operator==(enum hkDataWorld::DataWorldType) const
//{
//    mangled_ppc("??8?$hkEnum@W4DataWorldType@hkDataWorld@@H@@QBA?AVhkBool@@W4DataWorldType@hkDataWorld@@@Z");
//};

//public: class hkBool hkEnum<enum hkDataWorld::DataWorldType, int>::operator!=(enum hkDataWorld::DataWorldType) const
//{
//    mangled_ppc("??9?$hkEnum@W4DataWorldType@hkDataWorld@@H@@QBA?AVhkBool@@W4DataWorldType@hkDataWorld@@@Z");
//};

//public: class hkBool hkLocalArray<unsigned char>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@E@@QBA?AVhkBool@@XZ");
//};

//public: class hkBool hkLocalArray<struct hkDataClass::MemberInfo>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@UMemberInfo@hkDataClass@@@@QBA?AVhkBool@@XZ");
//};

//public: hkArray<struct hkDataClass::MemberInfo, struct hkContainerHeapAllocator>::hkArray<struct hkDataClass::MemberInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UMemberInfo@hkDataClass@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct hkDataWorld::ClassCinfo::Member & hkArrayBase<struct hkDataWorld::ClassCinfo::Member>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UMember@ClassCinfo@hkDataWorld@@@@QAAAAUMember@ClassCinfo@hkDataWorld@@H@Z");
//};

//public: void hkArrayBase<struct hkDataWorld::ClassCinfo::Member>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UMember@ClassCinfo@hkDataWorld@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: int Reader::readInt<int>(void)
//{
//    mangled_ppc("??$readInt@H@Reader@@QAAHXZ");
//};

//public: hkArray<unsigned char, struct hkContainerTempAllocator>::hkArray<unsigned char, struct hkContainerTempAllocator>(int)
//{
//    mangled_ppc("??0?$hkArray@EUhkContainerTempAllocator@@@@QAA@H@Z");
//};

//public: hkArray<unsigned char, struct hkContainerTempAllocator>::~hkArray<unsigned char, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@EUhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: hkArray<float, struct hkContainerTempAllocator>::hkArray<float, struct hkContainerTempAllocator>(int)
//{
//    mangled_ppc("??0?$hkArray@MUhkContainerTempAllocator@@@@QAA@H@Z");
//};

//public: hkArray<float, struct hkContainerTempAllocator>::~hkArray<float, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@MUhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkDataClass::MemberInfo>::setSizeUnchecked(int)
//{
//    mangled_ppc("?setSizeUnchecked@?$hkArrayBase@UMemberInfo@hkDataClass@@@@QAAXH@Z");
//};

//public: hkArray<struct hkDataClass::MemberInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkDataClass::MemberInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UMemberInfo@hkDataClass@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: __int64 Reader::readInt<__int64>(void)
//{
//    mangled_ppc("??$readInt@_J@Reader@@QAA_JXZ");
//};

//public: enum hkDataObject::Type Reader::readInt<enum hkDataObject::Type>(void)
//{
//    mangled_ppc("??$readInt@W4Type@hkDataObject@@@Reader@@QAA?AW4Type@hkDataObject@@XZ");
//};

//struct hkDataClass::MemberInfo * hkAllocateStack<struct hkDataClass::MemberInfo>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@UMemberInfo@hkDataClass@@@@YAPAUMemberInfo@hkDataClass@@HPBD@Z");
//};

//void hkDeallocateStack<struct hkDataClass::MemberInfo>(struct hkDataClass::MemberInfo *)
//{
//    mangled_ppc("??$hkDeallocateStack@UMemberInfo@hkDataClass@@@@YAXPAUMemberInfo@hkDataClass@@@Z");
//};

//public: void hkArray<unsigned char, struct hkContainerTempAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@EUhkContainerTempAllocator@@@@QAAXXZ");
//};

//public: void hkArray<float, struct hkContainerTempAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@MUhkContainerTempAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkDataClass::MemberInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UMemberInfo@hkDataClass@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::construct<struct hkDataWorld::ClassCinfo::Member>(struct hkDataWorld::ClassCinfo::Member *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UMember@ClassCinfo@hkDataWorld@@@hkArrayUtil@@SAXPAUMember@ClassCinfo@hkDataWorld@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<float>::setOwnedData(float *, int, int)
//{
//    mangled_ppc("?setOwnedData@?$hkArrayBase@M@@QAAXPAMHH@Z");
//};

