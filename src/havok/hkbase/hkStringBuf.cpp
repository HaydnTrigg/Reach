/* ---------- headers */

#include "havok\hkbase\hkStringBuf.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkStringBuf::hkStringBuf(char const *);
// public: hkStringBuf::hkStringBuf(class hkStringPtr const &);
// public: hkStringBuf::hkStringBuf(char const *, char const *, char const *, char const *, char const *, char const *);
// public: hkStringBuf::hkStringBuf(char const *, int);
// public: hkStringBuf::hkStringBuf(class hkStringBuf const &);
// public: class hkStringBuf & hkStringBuf::operator=(class hkStringBuf const &);
// public: class hkStringBuf & hkStringBuf::operator=(char const *);
// public: int hkStringBuf::indexOf(char, int, int) const;
// public: int hkStringBuf::indexOf(char const *, int, int) const;
// public: int hkStringBuf::indexOfCase(char const *) const;
// char tolower(char);
// public: int hkStringBuf::lastIndexOf(char, int, int) const;
// public: int hkStringBuf::lastIndexOf(char const *, int, int) const;
// public: int hkStringBuf::compareTo(char const *) const;
// public: int hkStringBuf::compareToIgnoreCase(char const *) const;
// public: class hkBool hkStringBuf::operator<(char const *) const;
// public: int hkStringBuf::operator==(char const *) const;
// public: int hkStringBuf::startsWith(char const *) const;
// public: int hkStringBuf::startsWithCase(char const *) const;
// public: int hkStringBuf::endsWith(char const *) const;
// public: int hkStringBuf::endsWithCase(char const *) const;
// public: int hkStringBuf::split(int, class hkArray<char const *, struct hkContainerTempAllocator> &);
// public: void hkStringBuf::clear(void);
// public: void hkStringBuf::printf(char const *, ...);
// public: void hkStringBuf::appendPrintf(char const *, ...);
// public: class hkStringBuf & hkStringBuf::operator+=(char const *);
// public: void hkStringBuf::appendJoin(char const *, char const *, char const *, char const *, char const *, char const *);
// public: void hkStringBuf::setJoin(char const *, char const *, char const *, char const *, char const *, char const *);
// public: void hkStringBuf::chompStart(int);
// public: void hkStringBuf::chompEnd(int);
// public: void hkStringBuf::slice(int, int);
// public: void hkStringBuf::set(char const *, int);
// int aliasSafe(char const *, char const *, int);
// public: void hkStringBuf::append(char const *, int);
// public: void hkStringBuf::prepend(char const *, int);
// public: void hkStringBuf::insert(int, char const *, int);
// public: void hkStringBuf::pathBasename(void);
// public: void hkStringBuf::pathDirname(void);
// public: int hkStringBuf::replace(char, char, enum hkStringBuf::ReplaceType);
// public: int hkStringBuf::replace(char const *, char const *, enum hkStringBuf::ReplaceType);
// public: void hkStringBuf::lowerCase(void);
// public: void hkStringBuf::upperCase(void);
// char toupper(char);
// public: class hkArray<char, struct hkContainerTempAllocator> & hkStringBuf::getArray(void);
// public: void hkArray<char, struct hkContainerTempAllocator>::insertAt(int, char const *, int);
// public: void hkArray<char const *, struct hkContainerTempAllocator>::pushBack(char const *const &);
// public: class hkArray<char, struct hkContainerTempAllocator> & hkInplaceArray<char, 32, struct hkContainerTempAllocator>::operator=(class hkInplaceArray<char, 32, struct hkContainerTempAllocator> const &);
// public: void hkArrayBase<char>::removeAtAndCopy(int, int);
// public: void hkArrayBase<char>::pushBackUnchecked(char const &);
// public: void hkArrayBase<char>::_insertAt(class hkMemoryAllocator &, int, char const *, int);
// public: class hkArray<char, struct hkContainerTempAllocator> & hkArray<char, struct hkContainerTempAllocator>::operator=(class hkArray<char, struct hkContainerTempAllocator> const &);
// public: void hkArrayBase<char>::_spliceInto(class hkMemoryAllocator &, int, int, char const *, int);
// void hkMemUtil::memCpy<1>(void *, void const *, int);
// protected: class hkArrayBase<char> & hkArrayBase<char>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<char> const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithArray<char>(char *, int, char const *, struct hkTraitBool<1>);
// public: static void hkArrayBase<char>::copy(char *, char const *, int);

//public: hkStringBuf::hkStringBuf(char const *)
//{
//    mangled_ppc("??0hkStringBuf@@QAA@PBD@Z");
//};

//public: hkStringBuf::hkStringBuf(class hkStringPtr const &)
//{
//    mangled_ppc("??0hkStringBuf@@QAA@ABVhkStringPtr@@@Z");
//};

//public: hkStringBuf::hkStringBuf(char const *, char const *, char const *, char const *, char const *, char const *)
//{
//    mangled_ppc("??0hkStringBuf@@QAA@PBD00000@Z");
//};

//public: hkStringBuf::hkStringBuf(char const *, int)
//{
//    mangled_ppc("??0hkStringBuf@@QAA@PBDH@Z");
//};

//public: hkStringBuf::hkStringBuf(class hkStringBuf const &)
//{
//    mangled_ppc("??0hkStringBuf@@QAA@ABV0@@Z");
//};

//public: class hkStringBuf & hkStringBuf::operator=(class hkStringBuf const &)
//{
//    mangled_ppc("??4hkStringBuf@@QAAAAV0@ABV0@@Z");
//};

//public: class hkStringBuf & hkStringBuf::operator=(char const *)
//{
//    mangled_ppc("??4hkStringBuf@@QAAAAV0@PBD@Z");
//};

//public: int hkStringBuf::indexOf(char, int, int) const
//{
//    mangled_ppc("?indexOf@hkStringBuf@@QBAHDHH@Z");
//};

//public: int hkStringBuf::indexOf(char const *, int, int) const
//{
//    mangled_ppc("?indexOf@hkStringBuf@@QBAHPBDHH@Z");
//};

//public: int hkStringBuf::indexOfCase(char const *) const
//{
//    mangled_ppc("?indexOfCase@hkStringBuf@@QBAHPBD@Z");
//};

//char tolower(char)
//{
//    mangled_ppc("?tolower@@YADD@Z");
//};

//public: int hkStringBuf::lastIndexOf(char, int, int) const
//{
//    mangled_ppc("?lastIndexOf@hkStringBuf@@QBAHDHH@Z");
//};

//public: int hkStringBuf::lastIndexOf(char const *, int, int) const
//{
//    mangled_ppc("?lastIndexOf@hkStringBuf@@QBAHPBDHH@Z");
//};

//public: int hkStringBuf::compareTo(char const *) const
//{
//    mangled_ppc("?compareTo@hkStringBuf@@QBAHPBD@Z");
//};

//public: int hkStringBuf::compareToIgnoreCase(char const *) const
//{
//    mangled_ppc("?compareToIgnoreCase@hkStringBuf@@QBAHPBD@Z");
//};

//public: class hkBool hkStringBuf::operator<(char const *) const
//{
//    mangled_ppc("??MhkStringBuf@@QBA?AVhkBool@@PBD@Z");
//};

//public: int hkStringBuf::operator==(char const *) const
//{
//    mangled_ppc("??8hkStringBuf@@QBAHPBD@Z");
//};

//public: int hkStringBuf::startsWith(char const *) const
//{
//    mangled_ppc("?startsWith@hkStringBuf@@QBAHPBD@Z");
//};

//public: int hkStringBuf::startsWithCase(char const *) const
//{
//    mangled_ppc("?startsWithCase@hkStringBuf@@QBAHPBD@Z");
//};

//public: int hkStringBuf::endsWith(char const *) const
//{
//    mangled_ppc("?endsWith@hkStringBuf@@QBAHPBD@Z");
//};

//public: int hkStringBuf::endsWithCase(char const *) const
//{
//    mangled_ppc("?endsWithCase@hkStringBuf@@QBAHPBD@Z");
//};

//public: int hkStringBuf::split(int, class hkArray<char const *, struct hkContainerTempAllocator> &)
//{
//    mangled_ppc("?split@hkStringBuf@@QAAHHAAV?$hkArray@PBDUhkContainerTempAllocator@@@@@Z");
//};

//public: void hkStringBuf::clear(void)
//{
//    mangled_ppc("?clear@hkStringBuf@@QAAXXZ");
//};

//public: void hkStringBuf::printf(char const *, ...)
//{
//    mangled_ppc("?printf@hkStringBuf@@QAAXPBDZZ");
//};

//public: void hkStringBuf::appendPrintf(char const *, ...)
//{
//    mangled_ppc("?appendPrintf@hkStringBuf@@QAAXPBDZZ");
//};

//public: class hkStringBuf & hkStringBuf::operator+=(char const *)
//{
//    mangled_ppc("??YhkStringBuf@@QAAAAV0@PBD@Z");
//};

//public: void hkStringBuf::appendJoin(char const *, char const *, char const *, char const *, char const *, char const *)
//{
//    mangled_ppc("?appendJoin@hkStringBuf@@QAAXPBD00000@Z");
//};

//public: void hkStringBuf::setJoin(char const *, char const *, char const *, char const *, char const *, char const *)
//{
//    mangled_ppc("?setJoin@hkStringBuf@@QAAXPBD00000@Z");
//};

//public: void hkStringBuf::chompStart(int)
//{
//    mangled_ppc("?chompStart@hkStringBuf@@QAAXH@Z");
//};

//public: void hkStringBuf::chompEnd(int)
//{
//    mangled_ppc("?chompEnd@hkStringBuf@@QAAXH@Z");
//};

//public: void hkStringBuf::slice(int, int)
//{
//    mangled_ppc("?slice@hkStringBuf@@QAAXHH@Z");
//};

//public: void hkStringBuf::set(char const *, int)
//{
//    mangled_ppc("?set@hkStringBuf@@QAAXPBDH@Z");
//};

//int aliasSafe(char const *, char const *, int)
//{
//    mangled_ppc("?aliasSafe@@YAHPBD0H@Z");
//};

//public: void hkStringBuf::append(char const *, int)
//{
//    mangled_ppc("?append@hkStringBuf@@QAAXPBDH@Z");
//};

//public: void hkStringBuf::prepend(char const *, int)
//{
//    mangled_ppc("?prepend@hkStringBuf@@QAAXPBDH@Z");
//};

//public: void hkStringBuf::insert(int, char const *, int)
//{
//    mangled_ppc("?insert@hkStringBuf@@QAAXHPBDH@Z");
//};

//public: void hkStringBuf::pathBasename(void)
//{
//    mangled_ppc("?pathBasename@hkStringBuf@@QAAXXZ");
//};

//public: void hkStringBuf::pathDirname(void)
//{
//    mangled_ppc("?pathDirname@hkStringBuf@@QAAXXZ");
//};

//public: int hkStringBuf::replace(char, char, enum hkStringBuf::ReplaceType)
//{
//    mangled_ppc("?replace@hkStringBuf@@QAAHDDW4ReplaceType@1@@Z");
//};

//public: int hkStringBuf::replace(char const *, char const *, enum hkStringBuf::ReplaceType)
//{
//    mangled_ppc("?replace@hkStringBuf@@QAAHPBD0W4ReplaceType@1@@Z");
//};

//public: void hkStringBuf::lowerCase(void)
//{
//    mangled_ppc("?lowerCase@hkStringBuf@@QAAXXZ");
//};

//public: void hkStringBuf::upperCase(void)
//{
//    mangled_ppc("?upperCase@hkStringBuf@@QAAXXZ");
//};

//char toupper(char)
//{
//    mangled_ppc("?toupper@@YADD@Z");
//};

//public: class hkArray<char, struct hkContainerTempAllocator> & hkStringBuf::getArray(void)
//{
//    mangled_ppc("?getArray@hkStringBuf@@QAAAAV?$hkArray@DUhkContainerTempAllocator@@@@XZ");
//};

//public: void hkArray<char, struct hkContainerTempAllocator>::insertAt(int, char const *, int)
//{
//    mangled_ppc("?insertAt@?$hkArray@DUhkContainerTempAllocator@@@@QAAXHPBDH@Z");
//};

//public: void hkArray<char const *, struct hkContainerTempAllocator>::pushBack(char const *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PBDUhkContainerTempAllocator@@@@QAAXABQBD@Z");
//};

//public: class hkArray<char, struct hkContainerTempAllocator> & hkInplaceArray<char, 32, struct hkContainerTempAllocator>::operator=(class hkInplaceArray<char, 32, struct hkContainerTempAllocator> const &)
//{
//    mangled_ppc("??4?$hkInplaceArray@D$0CA@UhkContainerTempAllocator@@@@QAAAAV?$hkArray@DUhkContainerTempAllocator@@@@ABV0@@Z");
//};

//public: void hkArrayBase<char>::removeAtAndCopy(int, int)
//{
//    mangled_ppc("?removeAtAndCopy@?$hkArrayBase@D@@QAAXHH@Z");
//};

//public: void hkArrayBase<char>::pushBackUnchecked(char const &)
//{
//    mangled_ppc("?pushBackUnchecked@?$hkArrayBase@D@@QAAXABD@Z");
//};

//public: void hkArrayBase<char>::_insertAt(class hkMemoryAllocator &, int, char const *, int)
//{
//    mangled_ppc("?_insertAt@?$hkArrayBase@D@@QAAXAAVhkMemoryAllocator@@HPBDH@Z");
//};

//public: class hkArray<char, struct hkContainerTempAllocator> & hkArray<char, struct hkContainerTempAllocator>::operator=(class hkArray<char, struct hkContainerTempAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@DUhkContainerTempAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//public: void hkArrayBase<char>::_spliceInto(class hkMemoryAllocator &, int, int, char const *, int)
//{
//    mangled_ppc("?_spliceInto@?$hkArrayBase@D@@QAAXAAVhkMemoryAllocator@@HHPBDH@Z");
//};

//void hkMemUtil::memCpy<1>(void *, void const *, int)
//{
//    mangled_ppc("??$memCpy@$00@hkMemUtil@@YAXPAXPBXH@Z");
//};

//protected: class hkArrayBase<char> & hkArrayBase<char>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<char> const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@D@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithArray<char>(char *, int, char const *, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithArray@D@hkArrayUtil@@SAXPADHPBDU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayBase<char>::copy(char *, char const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@D@@SAXPADPBDH@Z");
//};

