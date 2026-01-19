/* ---------- headers */

#include "havok\hkserialize\hkXmlParser.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkXmlParser::`RTTI Complete Object Locator'; // "??_R4hkXmlParser@@6B@"
// const hkXmlParser::StartElement::`RTTI Complete Object Locator'; // "??_R4StartElement@hkXmlParser@@6B@"
// hkXmlParser::StartElement::`RTTI Class Hierarchy Descriptor'; // "??_R3StartElement@hkXmlParser@@8"
// hkXmlParser::StartElement::`RTTI Base Class Array'; // "??_R2StartElement@hkXmlParser@@8"
// hkXmlParser::StartElement::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@StartElement@hkXmlParser@@8"
// hkXmlParser::Node::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@Node@hkXmlParser@@8"
// hkXmlParser::Node::`RTTI Class Hierarchy Descriptor'; // "??_R3Node@hkXmlParser@@8"
// hkXmlParser::Node::`RTTI Base Class Array'; // "??_R2Node@hkXmlParser@@8"
// const hkXmlParser::Node::`RTTI Complete Object Locator'; // "??_R4Node@hkXmlParser@@6B@"
// const hkXmlParser::EndElement::`RTTI Complete Object Locator'; // "??_R4EndElement@hkXmlParser@@6B@"
// hkXmlParser::EndElement::`RTTI Class Hierarchy Descriptor'; // "??_R3EndElement@hkXmlParser@@8"
// hkXmlParser::EndElement::`RTTI Base Class Array'; // "??_R2EndElement@hkXmlParser@@8"
// hkXmlParser::EndElement::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@EndElement@hkXmlParser@@8"
// const hkXmlParser::Characters::`RTTI Complete Object Locator'; // "??_R4Characters@hkXmlParser@@6B@"
// hkXmlParser::Characters::`RTTI Class Hierarchy Descriptor'; // "??_R3Characters@hkXmlParser@@8"
// hkXmlParser::Characters::`RTTI Base Class Array'; // "??_R2Characters@hkXmlParser@@8"
// hkXmlParser::Characters::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@Characters@hkXmlParser@@8"
// struct hkXmlParser::StartElement::`RTTI Type Descriptor'; // "??_R0?AUStartElement@hkXmlParser@@@8"
// struct hkXmlParser::Node::`RTTI Type Descriptor'; // "??_R0?AUNode@hkXmlParser@@@8"
// struct hkXmlParser::EndElement::`RTTI Type Descriptor'; // "??_R0?AUEndElement@hkXmlParser@@@8"
// struct hkXmlParser::Characters::`RTTI Type Descriptor'; // "??_R0?AUCharacters@hkXmlParser@@@8"

// public: char const * hkXmlParser::StartElement::getAttribute(char const *, char const *);
// public: enum hkResult hkXmlParser::Characters::canonicalize(char const *);
// public: static int hkXmlParser::translateEntities(char *, char const *);
// public: static int hkXmlParser::canonicalize(char *, char const *, char const *);
// bool inString(char, char const *);
// public: hkXmlParser::hkXmlParser(void);
// public: virtual hkXmlParser::~hkXmlParser(void);
// public: virtual enum hkResult hkXmlParser::nextNode(struct hkXmlParser::Node **, class hkStreamReader *);
// class hkBool isSpace(char);
// enum hkResult extractAttributes(char const *, class hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator> &);
// char const * eatWhite(char const *);
// void eatTag(char *, int, int, class hkStreamReader *, class hkArray<char, struct hkContainerHeapAllocator> *);
// void eatText(char *, int, int, class hkStreamReader *, class hkArray<char, struct hkContainerHeapAllocator> &);
// void eatComment(char *, int, int, class hkStreamReader *);
// public: virtual void hkXmlParser::putBack(struct hkXmlParser::Node *);
// public: virtual enum hkResult hkXmlParser::expandNode(struct hkXmlParser::StartElement *, class hkTree<struct hkXmlParser::Node *> &, class hkStreamReader *);
// public: enum hkResult hkXmlParser::parse(class hkTree<struct hkXmlParser::Node *> &, class hkStreamReader *);
// public: char const * hkXmlParser::getLastError(void) const;
// merged_8475DE80;
// public: static void * hkXmlParser::Node::operator new(unsigned int);
// public: hkXmlParser::StartElement::StartElement(char const *);
// public: hkXmlParser::Node::Node(enum hkXmlParser::NodeType);
// public: hkXmlParser::EndElement::EndElement(char const *);
// public: hkXmlParser::Characters::Characters(char const *);
// public: hkXmlParser::Characters::Characters(char const *, int);
// merged_8475E0F0;
// public: static void hkXmlParser::Node::operator delete(void *);
// merged_8475E190;
// public: virtual hkXmlParser::Node::~Node(void);
// merged_8475E200;
// merged_8475E248;
// public: virtual hkXmlParser::StartElement::~StartElement(void);
// public: virtual hkXmlParser::EndElement::~EndElement(void);
// public: virtual hkXmlParser::Characters::~Characters(void);
// public: hkXmlParser::Attribute::Attribute(void);
// public: hkXmlParser::Attribute::~Attribute(void);
// public: void hkArray<char, struct hkContainerHeapAllocator>::insertAt(int, char const *, int);
// public: hkArray<char, struct hkContainerTempAllocator>::hkArray<char, struct hkContainerTempAllocator>(void);
// public: hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator>::hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator>::pushBack(struct hkXmlParser::Attribute const &);
// public: hkArray<struct hkXmlParser::Node *, struct hkContainerHeapAllocator>::hkArray<struct hkXmlParser::Node *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkXmlParser::Node *, struct hkContainerHeapAllocator>::pushBack(struct hkXmlParser::Node *const &);
// public: hkArrayBase<struct hkXmlParser::Attribute>::hkArrayBase<struct hkXmlParser::Attribute>(void);
// public: struct hkXmlParser::Attribute & hkArrayBase<struct hkXmlParser::Attribute>::operator[](int);
// public: int hkArrayBase<struct hkXmlParser::Attribute>::getSize(void) const;
// public: void hkArrayBase<struct hkXmlParser::Attribute>::_pushBack(class hkMemoryAllocator &, struct hkXmlParser::Attribute const &);
// public: hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator>::~hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkXmlParser::Attribute>::~hkArrayBase<struct hkXmlParser::Attribute>(void);
// public: void hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator> &);
// public: struct hkTreeBase::Node * hkTree<struct hkXmlParser::Node *>::append(struct hkTreeBase::Node *, struct hkXmlParser::Node *const &);
// public: struct hkXmlParser::Node *const & hkTree<struct hkXmlParser::Node *>::getValue(struct hkTreeBase::Node *) const;
// public: struct hkTreeBase::Node * hkTree<struct hkXmlParser::Node *>::iterGetRoot(void) const;
// public: struct hkTreeBase::Node * hkTree<struct hkXmlParser::Node *>::iterParent(struct hkTreeBase::Node *) const;
// public: hkArrayBase<struct hkXmlParser::Node *>::hkArrayBase<struct hkXmlParser::Node *>(void);
// public: struct hkXmlParser::Node *& hkArrayBase<struct hkXmlParser::Node *>::operator[](int);
// public: struct hkXmlParser::Node *& hkArrayBase<struct hkXmlParser::Node *>::back(void);
// public: int hkArrayBase<struct hkXmlParser::Node *>::getSize(void) const;
// public: void hkArrayBase<struct hkXmlParser::Node *>::popBack(int);
// public: void hkArrayBase<struct hkXmlParser::Node *>::_pushBack(class hkMemoryAllocator &, struct hkXmlParser::Node *const &);
// public: hkArray<struct hkXmlParser::Node *, struct hkContainerHeapAllocator>::~hkArray<struct hkXmlParser::Node *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkXmlParser::Node *>::~hkArrayBase<struct hkXmlParser::Node *>(void);
// public: void hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkXmlParser::Node *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<struct hkXmlParser::Attribute>::getCapacity(void) const;
// public: void hkArrayBase<struct hkXmlParser::Attribute>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<struct hkXmlParser::Attribute>(struct hkXmlParser::Attribute *, int, struct hkXmlParser::Attribute const &, struct hkTraitBool<0>);
// public: int hkArrayBase<struct hkXmlParser::Node *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkXmlParser::Node *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkXmlParser::Node *>(struct hkXmlParser::Node **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkXmlParser::Node *>(struct hkXmlParser::Node **, int, struct hkXmlParser::Node *const &, struct hkTraitBool<1>);
// public: hkXmlParser::Attribute::Attribute(struct hkXmlParser::Attribute const &);
// public: void hkArrayBase<struct hkXmlParser::Attribute>::clear(void);
// public: void hkArrayBase<struct hkXmlParser::Node *>::clear(void);
// public: static void hkArrayUtil::destruct<struct hkXmlParser::Attribute>(struct hkXmlParser::Attribute *, int, struct hkTraitBool<0>);
// public: void * hkXmlParser::Attribute::`scalar deleting destructor'(unsigned int);
// public: static void hkXmlParser::Attribute::operator delete(void *);
// public: int hkStringPtr::operator!=(char const *) const;

//public: char const * hkXmlParser::StartElement::getAttribute(char const *, char const *)
//{
//    mangled_ppc("?getAttribute@StartElement@hkXmlParser@@QAAPBDPBD0@Z");
//};

//public: enum hkResult hkXmlParser::Characters::canonicalize(char const *)
//{
//    mangled_ppc("?canonicalize@Characters@hkXmlParser@@QAA?AW4hkResult@@PBD@Z");
//};

//public: static int hkXmlParser::translateEntities(char *, char const *)
//{
//    mangled_ppc("?translateEntities@hkXmlParser@@SAHPADPBD@Z");
//};

//public: static int hkXmlParser::canonicalize(char *, char const *, char const *)
//{
//    mangled_ppc("?canonicalize@hkXmlParser@@SAHPADPBD1@Z");
//};

//bool inString(char, char const *)
//{
//    mangled_ppc("?inString@@YA_NDPBD@Z");
//};

//public: hkXmlParser::hkXmlParser(void)
//{
//    mangled_ppc("??0hkXmlParser@@QAA@XZ");
//};

//public: virtual hkXmlParser::~hkXmlParser(void)
//{
//    mangled_ppc("??1hkXmlParser@@UAA@XZ");
//};

//public: virtual enum hkResult hkXmlParser::nextNode(struct hkXmlParser::Node **, class hkStreamReader *)
//{
//    mangled_ppc("?nextNode@hkXmlParser@@UAA?AW4hkResult@@PAPAUNode@1@PAVhkStreamReader@@@Z");
//};

//class hkBool isSpace(char)
//{
//    mangled_ppc("?isSpace@@YA?AVhkBool@@D@Z");
//};

//enum hkResult extractAttributes(char const *, class hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?extractAttributes@@YA?AW4hkResult@@PBDAAV?$hkArray@UAttribute@hkXmlParser@@UhkContainerHeapAllocator@@@@@Z");
//};

//char const * eatWhite(char const *)
//{
//    mangled_ppc("?eatWhite@@YAPBDPBD@Z");
//};

//void eatTag(char *, int, int, class hkStreamReader *, class hkArray<char, struct hkContainerHeapAllocator> *)
//{
//    mangled_ppc("?eatTag@@YAXPADHHPAVhkStreamReader@@PAV?$hkArray@DUhkContainerHeapAllocator@@@@@Z");
//};

//void eatText(char *, int, int, class hkStreamReader *, class hkArray<char, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?eatText@@YAXPADHHPAVhkStreamReader@@AAV?$hkArray@DUhkContainerHeapAllocator@@@@@Z");
//};

//void eatComment(char *, int, int, class hkStreamReader *)
//{
//    mangled_ppc("?eatComment@@YAXPADHHPAVhkStreamReader@@@Z");
//};

//public: virtual void hkXmlParser::putBack(struct hkXmlParser::Node *)
//{
//    mangled_ppc("?putBack@hkXmlParser@@UAAXPAUNode@1@@Z");
//};

//public: virtual enum hkResult hkXmlParser::expandNode(struct hkXmlParser::StartElement *, class hkTree<struct hkXmlParser::Node *> &, class hkStreamReader *)
//{
//    mangled_ppc("?expandNode@hkXmlParser@@UAA?AW4hkResult@@PAUStartElement@1@AAV?$hkTree@PAUNode@hkXmlParser@@@@PAVhkStreamReader@@@Z");
//};

//public: enum hkResult hkXmlParser::parse(class hkTree<struct hkXmlParser::Node *> &, class hkStreamReader *)
//{
//    mangled_ppc("?parse@hkXmlParser@@QAA?AW4hkResult@@AAV?$hkTree@PAUNode@hkXmlParser@@@@PAVhkStreamReader@@@Z");
//};

//public: char const * hkXmlParser::getLastError(void) const
//{
//    mangled_ppc("?getLastError@hkXmlParser@@QBAPBDXZ");
//};

//merged_8475DE80
//{
//    mangled_ppc("merged_8475DE80");
//};

//public: static void * hkXmlParser::Node::operator new(unsigned int)
//{
//    mangled_ppc("??2Node@hkXmlParser@@SAPAXI@Z");
//};

//public: hkXmlParser::StartElement::StartElement(char const *)
//{
//    mangled_ppc("??0StartElement@hkXmlParser@@QAA@PBD@Z");
//};

//public: hkXmlParser::Node::Node(enum hkXmlParser::NodeType)
//{
//    mangled_ppc("??0Node@hkXmlParser@@QAA@W4NodeType@1@@Z");
//};

//public: hkXmlParser::EndElement::EndElement(char const *)
//{
//    mangled_ppc("??0EndElement@hkXmlParser@@QAA@PBD@Z");
//};

//public: hkXmlParser::Characters::Characters(char const *)
//{
//    mangled_ppc("??0Characters@hkXmlParser@@QAA@PBD@Z");
//};

//public: hkXmlParser::Characters::Characters(char const *, int)
//{
//    mangled_ppc("??0Characters@hkXmlParser@@QAA@PBDH@Z");
//};

//merged_8475E0F0
//{
//    mangled_ppc("merged_8475E0F0");
//};

//public: static void hkXmlParser::Node::operator delete(void *)
//{
//    mangled_ppc("??3Node@hkXmlParser@@SAXPAX@Z");
//};

//merged_8475E190
//{
//    mangled_ppc("merged_8475E190");
//};

//public: virtual hkXmlParser::Node::~Node(void)
//{
//    mangled_ppc("??1Node@hkXmlParser@@UAA@XZ");
//};

//merged_8475E200
//{
//    mangled_ppc("merged_8475E200");
//};

//merged_8475E248
//{
//    mangled_ppc("merged_8475E248");
//};

//public: virtual hkXmlParser::StartElement::~StartElement(void)
//{
//    mangled_ppc("??1StartElement@hkXmlParser@@UAA@XZ");
//};

//public: virtual hkXmlParser::EndElement::~EndElement(void)
//{
//    mangled_ppc("??1EndElement@hkXmlParser@@UAA@XZ");
//};

//public: virtual hkXmlParser::Characters::~Characters(void)
//{
//    mangled_ppc("??1Characters@hkXmlParser@@UAA@XZ");
//};

//public: hkXmlParser::Attribute::Attribute(void)
//{
//    mangled_ppc("??0Attribute@hkXmlParser@@QAA@XZ");
//};

//public: hkXmlParser::Attribute::~Attribute(void)
//{
//    mangled_ppc("??1Attribute@hkXmlParser@@QAA@XZ");
//};

//public: void hkArray<char, struct hkContainerHeapAllocator>::insertAt(int, char const *, int)
//{
//    mangled_ppc("?insertAt@?$hkArray@DUhkContainerHeapAllocator@@@@QAAXHPBDH@Z");
//};

//public: hkArray<char, struct hkContainerTempAllocator>::hkArray<char, struct hkContainerTempAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@DUhkContainerTempAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator>::hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UAttribute@hkXmlParser@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator>::pushBack(struct hkXmlParser::Attribute const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@UAttribute@hkXmlParser@@UhkContainerHeapAllocator@@@@QAAXABUAttribute@hkXmlParser@@@Z");
//};

//public: hkArray<struct hkXmlParser::Node *, struct hkContainerHeapAllocator>::hkArray<struct hkXmlParser::Node *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUNode@hkXmlParser@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkXmlParser::Node *, struct hkContainerHeapAllocator>::pushBack(struct hkXmlParser::Node *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUNode@hkXmlParser@@UhkContainerHeapAllocator@@@@QAAXABQAUNode@hkXmlParser@@@Z");
//};

//public: hkArrayBase<struct hkXmlParser::Attribute>::hkArrayBase<struct hkXmlParser::Attribute>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UAttribute@hkXmlParser@@@@QAA@XZ");
//};

//public: struct hkXmlParser::Attribute & hkArrayBase<struct hkXmlParser::Attribute>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UAttribute@hkXmlParser@@@@QAAAAUAttribute@hkXmlParser@@H@Z");
//};

//public: int hkArrayBase<struct hkXmlParser::Attribute>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UAttribute@hkXmlParser@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkXmlParser::Attribute>::_pushBack(class hkMemoryAllocator &, struct hkXmlParser::Attribute const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@UAttribute@hkXmlParser@@@@QAAXAAVhkMemoryAllocator@@ABUAttribute@hkXmlParser@@@Z");
//};

//public: hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator>::~hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UAttribute@hkXmlParser@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkXmlParser::Attribute>::~hkArrayBase<struct hkXmlParser::Attribute>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UAttribute@hkXmlParser@@@@QAA@XZ");
//};

//public: void hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator>::swap(class hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?swap@?$hkArray@UAttribute@hkXmlParser@@UhkContainerHeapAllocator@@@@QAAXAAV1@@Z");
//};

//public: struct hkTreeBase::Node * hkTree<struct hkXmlParser::Node *>::append(struct hkTreeBase::Node *, struct hkXmlParser::Node *const &)
//{
//    mangled_ppc("?append@?$hkTree@PAUNode@hkXmlParser@@@@QAAPAUNode@hkTreeBase@@PAU23@ABQAU2hkXmlParser@@@Z");
//};

//public: struct hkXmlParser::Node *const & hkTree<struct hkXmlParser::Node *>::getValue(struct hkTreeBase::Node *) const
//{
//    mangled_ppc("?getValue@?$hkTree@PAUNode@hkXmlParser@@@@QBAABQAUNode@hkXmlParser@@PAU2hkTreeBase@@@Z");
//};

//public: struct hkTreeBase::Node * hkTree<struct hkXmlParser::Node *>::iterGetRoot(void) const
//{
//    mangled_ppc("?iterGetRoot@?$hkTree@PAUNode@hkXmlParser@@@@QBAPAUNode@hkTreeBase@@XZ");
//};

//public: struct hkTreeBase::Node * hkTree<struct hkXmlParser::Node *>::iterParent(struct hkTreeBase::Node *) const
//{
//    mangled_ppc("?iterParent@?$hkTree@PAUNode@hkXmlParser@@@@QBAPAUNode@hkTreeBase@@PAU23@@Z");
//};

//public: hkArrayBase<struct hkXmlParser::Node *>::hkArrayBase<struct hkXmlParser::Node *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUNode@hkXmlParser@@@@QAA@XZ");
//};

//public: struct hkXmlParser::Node *& hkArrayBase<struct hkXmlParser::Node *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUNode@hkXmlParser@@@@QAAAAPAUNode@hkXmlParser@@H@Z");
//};

//public: struct hkXmlParser::Node *& hkArrayBase<struct hkXmlParser::Node *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAUNode@hkXmlParser@@@@QAAAAPAUNode@hkXmlParser@@XZ");
//};

//public: int hkArrayBase<struct hkXmlParser::Node *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUNode@hkXmlParser@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkXmlParser::Node *>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@PAUNode@hkXmlParser@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkXmlParser::Node *>::_pushBack(class hkMemoryAllocator &, struct hkXmlParser::Node *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUNode@hkXmlParser@@@@QAAXAAVhkMemoryAllocator@@ABQAUNode@hkXmlParser@@@Z");
//};

//public: hkArray<struct hkXmlParser::Node *, struct hkContainerHeapAllocator>::~hkArray<struct hkXmlParser::Node *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUNode@hkXmlParser@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkXmlParser::Node *>::~hkArrayBase<struct hkXmlParser::Node *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUNode@hkXmlParser@@@@QAA@XZ");
//};

//public: void hkArray<struct hkXmlParser::Attribute, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UAttribute@hkXmlParser@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkXmlParser::Node *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUNode@hkXmlParser@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkXmlParser::Attribute>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UAttribute@hkXmlParser@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkXmlParser::Attribute>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UAttribute@hkXmlParser@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkXmlParser::Attribute>(struct hkXmlParser::Attribute *, int, struct hkXmlParser::Attribute const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithCopy@UAttribute@hkXmlParser@@@hkArrayUtil@@SAXPAUAttribute@hkXmlParser@@HABU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<struct hkXmlParser::Node *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUNode@hkXmlParser@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkXmlParser::Node *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUNode@hkXmlParser@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkXmlParser::Node *>(struct hkXmlParser::Node **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUNode@hkXmlParser@@@hkArrayUtil@@SAXPAPAUNode@hkXmlParser@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkXmlParser::Node *>(struct hkXmlParser::Node **, int, struct hkXmlParser::Node *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUNode@hkXmlParser@@@hkArrayUtil@@SAXPAPAUNode@hkXmlParser@@HABQAU12@U?$hkTraitBool@$00@@@Z");
//};

//public: hkXmlParser::Attribute::Attribute(struct hkXmlParser::Attribute const &)
//{
//    mangled_ppc("??0Attribute@hkXmlParser@@QAA@ABU01@@Z");
//};

//public: void hkArrayBase<struct hkXmlParser::Attribute>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UAttribute@hkXmlParser@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkXmlParser::Node *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUNode@hkXmlParser@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkXmlParser::Attribute>(struct hkXmlParser::Attribute *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UAttribute@hkXmlParser@@@hkArrayUtil@@SAXPAUAttribute@hkXmlParser@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void * hkXmlParser::Attribute::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_GAttribute@hkXmlParser@@QAAPAXI@Z");
//};

//public: static void hkXmlParser::Attribute::operator delete(void *)
//{
//    mangled_ppc("??3Attribute@hkXmlParser@@SAXPAX@Z");
//};

//public: int hkStringPtr::operator!=(char const *) const
//{
//    mangled_ppc("??9hkStringPtr@@QBAHPBD@Z");
//};

