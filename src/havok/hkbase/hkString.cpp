/* ---------- headers */

#include "havok\hkbase\hkString.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static char hkString::toUpper(char);
// public: static char hkString::toLower(char);
// public: static int hkString::vsnprintf(char *, int, char const *, void *);
// public: static int hkString::snprintf(char *, int, char const *, ...);
// public: static int hkString::sprintf(char *, char const *, ...);
// public: static int hkString::strCmp(char const *, char const *);
// public: static int hkString::strNcmp(char const *, char const *, int);
// public: static int hkString::strCasecmp(char const *, char const *);
// public: static int hkString::strNcasecmp(char const *, char const *, int);
// public: static void hkString::strCpy(char *, char const *);
// public: static void hkString::strNcpy(char *, char const *, int);
// public: static int hkString::strLen(char const *);
// public: static int hkString::atoi(char const *, int);
// public: static float hkString::atof(char const *);
// public: static char const * hkString::strStr(char const *, char const *);
// public: static char const * hkString::strChr(char const *, int);
// public: static char const * hkString::strRchr(char const *, int);
// public: static char * hkString::strDup(char const *, class hkMemoryAllocator &);
// public: static void hkString::strFree(char *, class hkMemoryAllocator &);
// public: static void hkString::strFree(char *);
// public: static char * hkString::strNdup(char const *, int, class hkMemoryAllocator &);
// public: static char * hkString::strDup(char const *);
// public: static char * hkString::strNdup(char const *, int);
// public: static char * hkString::strLwr(char *);
// public: static char * hkString::strUpr(char *);
// public: static void hkString::memCpy(void *, void const *, int);
// public: static void hkString::memMove(void *, void const *, int);
// public: static void hkString::memSet(void *, int, int);
// public: static int hkString::memCmp(void const *, void const *, int);
// public: void hkString::printf(char const *, ...);
// public: int hkString::indexOf(char, int, int) const;
// public: int hkString::lastIndexOf(char, int, int) const;
// public: class hkString hkString::operator+(class hkString const &) const;
// public: class hkString hkString::operator+(char const *) const;
// public: class hkString & hkString::operator+=(class hkString const &);
// public: class hkString & hkString::operator+=(char const *);
// public: class hkString hkString::asUpperCase(void) const;
// public: void hkString::makeUpperCase(void);
// public: class hkString hkString::asLowerCase(void) const;
// public: void hkString::makeLowerCase(void);
// public: class hkBool hkString::beginsWith(char const *) const;
// public: class hkBool hkString::endsWith(class hkString const &) const;
// public: class hkBool hkString::endsWith(char const *) const;
// public: class hkString hkString::replace(char, char, enum hkString::ReplaceType) const;
// public: class hkBool hkString::replaceInplace(char, char, enum hkString::ReplaceType);
// private: static void hkString::copyAndReplace(char *, char const *, int, class hkString const &, class hkString const &, class hkArray<int, struct hkContainerHeapAllocator> const &);
// public: static class hkBool hkString::findAllOccurrences(char const *, char const *, class hkArray<int, struct hkContainerHeapAllocator> &, enum hkString::ReplaceType);
// public: class hkString hkString::replace(class hkString const &, class hkString const &, enum hkString::ReplaceType) const;
// public: class hkBool hkString::replaceInplace(class hkString const &, class hkString const &, enum hkString::ReplaceType);
// public: void hkString::split(int, class hkArray<class hkString, struct hkContainerHeapAllocator> &) const;
// public: static class hkBool hkString::beginsWith(char const *, char const *);
// public: static class hkBool hkString::endsWith(char const *, char const *);
// public: static int hkString::lastIndexOf(char const *, char);
// public: void hkArray<char, struct hkContainerHeapAllocator>::optimizeCapacity(int, int);
// public: hkArray<int, struct hkContainerHeapAllocator>::hkArray<int, struct hkContainerHeapAllocator>(void);
// public: void hkArray<int, struct hkContainerHeapAllocator>::pushBack(int const &);
// public: hkInplaceArray<int, 12, struct hkContainerHeapAllocator>::~hkInplaceArray<int, 12, struct hkContainerHeapAllocator>(void);
// public: class hkString & hkArray<class hkString, struct hkContainerHeapAllocator>::expandOne(void);
// public: void hkArrayBase<char>::_optimizeCapacity(class hkMemoryAllocator &, int, int);
// unsigned int hkNextPowerOf2(unsigned int);
// char * hkAllocateChunk<char>(int, int);
// public: hkArrayBase<int>::hkArrayBase<int>(void);
// public: int const & hkArrayBase<int>::operator[](int) const;
// public: int hkArrayBase<int>::getSize(void) const;
// public: class hkBool hkArrayBase<int>::isEmpty(void) const;
// public: void hkArrayBase<int>::_pushBack(class hkMemoryAllocator &, int const &);
// public: hkArray<int, struct hkContainerHeapAllocator>::~hkArray<int, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<int>::~hkArrayBase<int>(void);
// public: hkInplaceArray<int, 12, struct hkContainerHeapAllocator>::hkInplaceArray<int, 12, struct hkContainerHeapAllocator>(int);
// public: class hkString & hkArrayBase<class hkString>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<int, struct hkContainerHeapAllocator>::hkArray<int, struct hkContainerHeapAllocator>(int *, int, int);
// public: void hkArray<int, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArrayBase<int>::hkArrayBase<int>(int *, int, int);
// public: int hkArrayBase<int>::getCapacity(void) const;
// public: void hkArrayBase<int>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<int>(int *, int, int const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkString>::getCapacity(void) const;
// public: static void hkArrayUtil::construct<class hkString>(class hkString *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<int>::clear(void);
// public: static void hkArrayUtil::destruct<int>(int *, int, struct hkTraitBool<1>);
// public: int hkString::getLength(void) const;
// public: char const * hkString::cString(void) const;
// private: void hkString::setLength(int);
// public: hkString::hkString(void);
// private: hkString::hkString(char *, int, int);
// public: class hkString & hkString::operator=(class hkString const &);
// public: hkString::~hkString(void);
// public: char hkString::operator[](int) const;
// public: void hkString::setCapacity(int);
// public: int hkString::getCapacity(void) const;
// public: class hkString hkString::substr(int, int) const;
// public: hkString::hkString(char const *, int);
// public: hkArray<char, struct hkContainerHeapAllocator>::hkArray<char, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<char>::hkArrayBase<char>(void);
// public: void hkArrayBase<char>::setOwnedData(char *, int, int);
// public: hkArray<char, struct hkContainerHeapAllocator>::hkArray<char, struct hkContainerHeapAllocator>(int, char const &);

//public: static char hkString::toUpper(char)
//{
//    mangled_ppc("?toUpper@hkString@@SADD@Z");
//};

//public: static char hkString::toLower(char)
//{
//    mangled_ppc("?toLower@hkString@@SADD@Z");
//};

//public: static int hkString::vsnprintf(char *, int, char const *, void *)
//{
//    mangled_ppc("?vsnprintf@hkString@@SAHPADHPBDPAX@Z");
//};

//public: static int hkString::snprintf(char *, int, char const *, ...)
//{
//    mangled_ppc("?snprintf@hkString@@SAHPADHPBDZZ");
//};

//public: static int hkString::sprintf(char *, char const *, ...)
//{
//    mangled_ppc("?sprintf@hkString@@SAHPADPBDZZ");
//};

//public: static int hkString::strCmp(char const *, char const *)
//{
//    mangled_ppc("?strCmp@hkString@@SAHPBD0@Z");
//};

//public: static int hkString::strNcmp(char const *, char const *, int)
//{
//    mangled_ppc("?strNcmp@hkString@@SAHPBD0H@Z");
//};

//public: static int hkString::strCasecmp(char const *, char const *)
//{
//    mangled_ppc("?strCasecmp@hkString@@SAHPBD0@Z");
//};

//public: static int hkString::strNcasecmp(char const *, char const *, int)
//{
//    mangled_ppc("?strNcasecmp@hkString@@SAHPBD0H@Z");
//};

//public: static void hkString::strCpy(char *, char const *)
//{
//    mangled_ppc("?strCpy@hkString@@SAXPADPBD@Z");
//};

//public: static void hkString::strNcpy(char *, char const *, int)
//{
//    mangled_ppc("?strNcpy@hkString@@SAXPADPBDH@Z");
//};

//public: static int hkString::strLen(char const *)
//{
//    mangled_ppc("?strLen@hkString@@SAHPBD@Z");
//};

//public: static int hkString::atoi(char const *, int)
//{
//    mangled_ppc("?atoi@hkString@@SAHPBDH@Z");
//};

//public: static float hkString::atof(char const *)
//{
//    mangled_ppc("?atof@hkString@@SAMPBD@Z");
//};

//public: static char const * hkString::strStr(char const *, char const *)
//{
//    mangled_ppc("?strStr@hkString@@SAPBDPBD0@Z");
//};

//public: static char const * hkString::strChr(char const *, int)
//{
//    mangled_ppc("?strChr@hkString@@SAPBDPBDH@Z");
//};

//public: static char const * hkString::strRchr(char const *, int)
//{
//    mangled_ppc("?strRchr@hkString@@SAPBDPBDH@Z");
//};

//public: static char * hkString::strDup(char const *, class hkMemoryAllocator &)
//{
//    mangled_ppc("?strDup@hkString@@SAPADPBDAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkString::strFree(char *, class hkMemoryAllocator &)
//{
//    mangled_ppc("?strFree@hkString@@SAXPADAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkString::strFree(char *)
//{
//    mangled_ppc("?strFree@hkString@@SAXPAD@Z");
//};

//public: static char * hkString::strNdup(char const *, int, class hkMemoryAllocator &)
//{
//    mangled_ppc("?strNdup@hkString@@SAPADPBDHAAVhkMemoryAllocator@@@Z");
//};

//public: static char * hkString::strDup(char const *)
//{
//    mangled_ppc("?strDup@hkString@@SAPADPBD@Z");
//};

//public: static char * hkString::strNdup(char const *, int)
//{
//    mangled_ppc("?strNdup@hkString@@SAPADPBDH@Z");
//};

//public: static char * hkString::strLwr(char *)
//{
//    mangled_ppc("?strLwr@hkString@@SAPADPAD@Z");
//};

//public: static char * hkString::strUpr(char *)
//{
//    mangled_ppc("?strUpr@hkString@@SAPADPAD@Z");
//};

//public: static void hkString::memCpy(void *, void const *, int)
//{
//    mangled_ppc("?memCpy@hkString@@SAXPAXPBXH@Z");
//};

//public: static void hkString::memMove(void *, void const *, int)
//{
//    mangled_ppc("?memMove@hkString@@SAXPAXPBXH@Z");
//};

//public: static void hkString::memSet(void *, int, int)
//{
//    mangled_ppc("?memSet@hkString@@SAXPAXHH@Z");
//};

//public: static int hkString::memCmp(void const *, void const *, int)
//{
//    mangled_ppc("?memCmp@hkString@@SAHPBX0H@Z");
//};

//public: void hkString::printf(char const *, ...)
//{
//    mangled_ppc("?printf@hkString@@QAAXPBDZZ");
//};

//public: int hkString::indexOf(char, int, int) const
//{
//    mangled_ppc("?indexOf@hkString@@QBAHDHH@Z");
//};

//public: int hkString::lastIndexOf(char, int, int) const
//{
//    mangled_ppc("?lastIndexOf@hkString@@QBAHDHH@Z");
//};

//public: class hkString hkString::operator+(class hkString const &) const
//{
//    mangled_ppc("??HhkString@@QBA?AV0@ABV0@@Z");
//};

//public: class hkString hkString::operator+(char const *) const
//{
//    mangled_ppc("??HhkString@@QBA?AV0@PBD@Z");
//};

//public: class hkString & hkString::operator+=(class hkString const &)
//{
//    mangled_ppc("??YhkString@@QAAAAV0@ABV0@@Z");
//};

//public: class hkString & hkString::operator+=(char const *)
//{
//    mangled_ppc("??YhkString@@QAAAAV0@PBD@Z");
//};

//public: class hkString hkString::asUpperCase(void) const
//{
//    mangled_ppc("?asUpperCase@hkString@@QBA?AV1@XZ");
//};

//public: void hkString::makeUpperCase(void)
//{
//    mangled_ppc("?makeUpperCase@hkString@@QAAXXZ");
//};

//public: class hkString hkString::asLowerCase(void) const
//{
//    mangled_ppc("?asLowerCase@hkString@@QBA?AV1@XZ");
//};

//public: void hkString::makeLowerCase(void)
//{
//    mangled_ppc("?makeLowerCase@hkString@@QAAXXZ");
//};

//public: class hkBool hkString::beginsWith(char const *) const
//{
//    mangled_ppc("?beginsWith@hkString@@QBA?AVhkBool@@PBD@Z");
//};

//public: class hkBool hkString::endsWith(class hkString const &) const
//{
//    mangled_ppc("?endsWith@hkString@@QBA?AVhkBool@@ABV1@@Z");
//};

//public: class hkBool hkString::endsWith(char const *) const
//{
//    mangled_ppc("?endsWith@hkString@@QBA?AVhkBool@@PBD@Z");
//};

//public: class hkString hkString::replace(char, char, enum hkString::ReplaceType) const
//{
//    mangled_ppc("?replace@hkString@@QBA?AV1@DDW4ReplaceType@1@@Z");
//};

//public: class hkBool hkString::replaceInplace(char, char, enum hkString::ReplaceType)
//{
//    mangled_ppc("?replaceInplace@hkString@@QAA?AVhkBool@@DDW4ReplaceType@1@@Z");
//};

//private: static void hkString::copyAndReplace(char *, char const *, int, class hkString const &, class hkString const &, class hkArray<int, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?copyAndReplace@hkString@@CAXPADPBDHABV1@2ABV?$hkArray@HUhkContainerHeapAllocator@@@@@Z");
//};

//public: static class hkBool hkString::findAllOccurrences(char const *, char const *, class hkArray<int, struct hkContainerHeapAllocator> &, enum hkString::ReplaceType)
//{
//    mangled_ppc("?findAllOccurrences@hkString@@SA?AVhkBool@@PBD0AAV?$hkArray@HUhkContainerHeapAllocator@@@@W4ReplaceType@1@@Z");
//};

//public: class hkString hkString::replace(class hkString const &, class hkString const &, enum hkString::ReplaceType) const
//{
//    mangled_ppc("?replace@hkString@@QBA?AV1@ABV1@0W4ReplaceType@1@@Z");
//};

//public: class hkBool hkString::replaceInplace(class hkString const &, class hkString const &, enum hkString::ReplaceType)
//{
//    mangled_ppc("?replaceInplace@hkString@@QAA?AVhkBool@@ABV1@0W4ReplaceType@1@@Z");
//};

//public: void hkString::split(int, class hkArray<class hkString, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?split@hkString@@QBAXHAAV?$hkArray@VhkString@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static class hkBool hkString::beginsWith(char const *, char const *)
//{
//    mangled_ppc("?beginsWith@hkString@@SA?AVhkBool@@PBD0@Z");
//};

//public: static class hkBool hkString::endsWith(char const *, char const *)
//{
//    mangled_ppc("?endsWith@hkString@@SA?AVhkBool@@PBD0@Z");
//};

//public: static int hkString::lastIndexOf(char const *, char)
//{
//    mangled_ppc("?lastIndexOf@hkString@@SAHPBDD@Z");
//};

//public: void hkArray<char, struct hkContainerHeapAllocator>::optimizeCapacity(int, int)
//{
//    mangled_ppc("?optimizeCapacity@?$hkArray@DUhkContainerHeapAllocator@@@@QAAXHH@Z");
//};

//public: hkArray<int, struct hkContainerHeapAllocator>::hkArray<int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<int, struct hkContainerHeapAllocator>::pushBack(int const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@HUhkContainerHeapAllocator@@@@QAAXABH@Z");
//};

//public: hkInplaceArray<int, 12, struct hkContainerHeapAllocator>::~hkInplaceArray<int, 12, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@H$0M@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: class hkString & hkArray<class hkString, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@VhkString@@UhkContainerHeapAllocator@@@@QAAAAVhkString@@XZ");
//};

//public: void hkArrayBase<char>::_optimizeCapacity(class hkMemoryAllocator &, int, int)
//{
//    mangled_ppc("?_optimizeCapacity@?$hkArrayBase@D@@QAAXAAVhkMemoryAllocator@@HH@Z");
//};

//unsigned int hkNextPowerOf2(unsigned int)
//{
//    mangled_ppc("?hkNextPowerOf2@@YAII@Z");
//};

//char * hkAllocateChunk<char>(int, int)
//{
//    mangled_ppc("??$hkAllocateChunk@D@@YAPADHH@Z");
//};

//public: hkArrayBase<int>::hkArrayBase<int>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@H@@QAA@XZ");
//};

//public: int const & hkArrayBase<int>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@H@@QBAABHH@Z");
//};

//public: int hkArrayBase<int>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@H@@QBAHXZ");
//};

//public: class hkBool hkArrayBase<int>::isEmpty(void) const
//{
//    mangled_ppc("?isEmpty@?$hkArrayBase@H@@QBA?AVhkBool@@XZ");
//};

//public: void hkArrayBase<int>::_pushBack(class hkMemoryAllocator &, int const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@H@@QAAXAAVhkMemoryAllocator@@ABH@Z");
//};

//public: hkArray<int, struct hkContainerHeapAllocator>::~hkArray<int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<int>::~hkArrayBase<int>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@H@@QAA@XZ");
//};

//public: hkInplaceArray<int, 12, struct hkContainerHeapAllocator>::hkInplaceArray<int, 12, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@H$0M@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: class hkString & hkArrayBase<class hkString>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@VhkString@@@@QAAAAVhkString@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<int, struct hkContainerHeapAllocator>::hkArray<int, struct hkContainerHeapAllocator>(int *, int, int)
//{
//    mangled_ppc("??0?$hkArray@HUhkContainerHeapAllocator@@@@QAA@PAHHH@Z");
//};

//public: void hkArray<int, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@HUhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArrayBase<int>::hkArrayBase<int>(int *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@H@@QAA@PAHHH@Z");
//};

//public: int hkArrayBase<int>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@H@@QBAHXZ");
//};

//public: void hkArrayBase<int>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@H@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<int>(int *, int, int const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@H@hkArrayUtil@@SAXPAHHABHU?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkString>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@VhkString@@@@QBAHXZ");
//};

//public: static void hkArrayUtil::construct<class hkString>(class hkString *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@VhkString@@@hkArrayUtil@@SAXPAVhkString@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<int>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@H@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<int>(int *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@H@hkArrayUtil@@SAXPAHHU?$hkTraitBool@$00@@@Z");
//};

//public: int hkString::getLength(void) const
//{
//    mangled_ppc("?getLength@hkString@@QBAHXZ");
//};

//public: char const * hkString::cString(void) const
//{
//    mangled_ppc("?cString@hkString@@QBAPBDXZ");
//};

//private: void hkString::setLength(int)
//{
//    mangled_ppc("?setLength@hkString@@AAAXH@Z");
//};

//public: hkString::hkString(void)
//{
//    mangled_ppc("??0hkString@@QAA@XZ");
//};

//private: hkString::hkString(char *, int, int)
//{
//    mangled_ppc("??0hkString@@AAA@PADHH@Z");
//};

//public: class hkString & hkString::operator=(class hkString const &)
//{
//    mangled_ppc("??4hkString@@QAAAAV0@ABV0@@Z");
//};

//public: hkString::~hkString(void)
//{
//    mangled_ppc("??1hkString@@QAA@XZ");
//};

//public: char hkString::operator[](int) const
//{
//    mangled_ppc("??AhkString@@QBADH@Z");
//};

//public: void hkString::setCapacity(int)
//{
//    mangled_ppc("?setCapacity@hkString@@QAAXH@Z");
//};

//public: int hkString::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@hkString@@QBAHXZ");
//};

//public: class hkString hkString::substr(int, int) const
//{
//    mangled_ppc("?substr@hkString@@QBA?AV1@HH@Z");
//};

//public: hkString::hkString(char const *, int)
//{
//    mangled_ppc("??0hkString@@QAA@PBDH@Z");
//};

//public: hkArray<char, struct hkContainerHeapAllocator>::hkArray<char, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@DUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<char>::hkArrayBase<char>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@D@@QAA@XZ");
//};

//public: void hkArrayBase<char>::setOwnedData(char *, int, int)
//{
//    mangled_ppc("?setOwnedData@?$hkArrayBase@D@@QAAXPADHH@Z");
//};

//public: hkArray<char, struct hkContainerHeapAllocator>::hkArray<char, struct hkContainerHeapAllocator>(int, char const &)
//{
//    mangled_ppc("??0?$hkArray@DUhkContainerHeapAllocator@@@@QAA@HABD@Z");
//};

