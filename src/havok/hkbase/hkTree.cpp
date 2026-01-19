/* ---------- headers */

#include "havok\hkbase\hkTree.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkTreeBase::hkTreeBase(int);
// public: hkTreeBase::~hkTreeBase(void);
// public: struct hkTreeBase::Node * hkTreeBase::append(struct hkTreeBase::Node *, void const *, int);
// public: struct hkTreeBase::Node * hkTreeBase::remove(struct hkTreeBase::Node *, void (*)(void *));
// public: int hkTreeBase::getDepth(struct hkTreeBase::Node *) const;
// public: int hkTreeBase::getNumChildren(struct hkTreeBase::Node *) const;
// public: void const * hkTreeBase::getValue(struct hkTreeBase::Node *) const;
// public: struct hkTreeBase::Node * hkTreeBase::iterGetRoot(void) const;
// public: struct hkTreeBase::Node * hkTreeBase::iterNext(struct hkTreeBase::Node *) const;
// public: struct hkTreeBase::Node * hkTreeBase::iterNextPreOrder(struct hkTreeBase::Node *) const;
// public: struct hkTreeBase::Node * hkTreeBase::iterParent(struct hkTreeBase::Node *) const;
// public: struct hkTreeBase::Node * hkTreeBase::iterChildren(struct hkTreeBase::Node *) const;
// public: static struct hkTreeBase::Node * hkTreeBase::Node::create(int);
// public: static void * hkTreeBase::Node::operator new(unsigned int, void *);
// public: hkTreeBase::Node::Node(void);
// public: static void hkTreeBase::Node::destroy(struct hkTreeBase::Node *, int);
// public: hkArray<struct hkTreeBase::Node *, struct hkContainerHeapAllocator>::hkArray<struct hkTreeBase::Node *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkTreeBase::Node *, struct hkContainerHeapAllocator>::pushBack(struct hkTreeBase::Node *const &);
// public: hkArrayBase<struct hkTreeBase::Node *>::hkArrayBase<struct hkTreeBase::Node *>(void);
// public: struct hkTreeBase::Node *& hkArrayBase<struct hkTreeBase::Node *>::back(void);
// public: int hkArrayBase<struct hkTreeBase::Node *>::getSize(void) const;
// public: void hkArrayBase<struct hkTreeBase::Node *>::popBack(int);
// public: void hkArrayBase<struct hkTreeBase::Node *>::_pushBack(class hkMemoryAllocator &, struct hkTreeBase::Node *const &);
// public: hkArray<struct hkTreeBase::Node *, struct hkContainerHeapAllocator>::~hkArray<struct hkTreeBase::Node *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkTreeBase::Node *>::~hkArrayBase<struct hkTreeBase::Node *>(void);
// public: void hkArray<struct hkTreeBase::Node *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<struct hkTreeBase::Node *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkTreeBase::Node *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkTreeBase::Node *>(struct hkTreeBase::Node **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkTreeBase::Node *>(struct hkTreeBase::Node **, int, struct hkTreeBase::Node *const &, struct hkTraitBool<1>);
// public: void hkArrayBase<struct hkTreeBase::Node *>::clear(void);

//public: hkTreeBase::hkTreeBase(int)
//{
//    mangled_ppc("??0hkTreeBase@@QAA@H@Z");
//};

//public: hkTreeBase::~hkTreeBase(void)
//{
//    mangled_ppc("??1hkTreeBase@@QAA@XZ");
//};

//public: struct hkTreeBase::Node * hkTreeBase::append(struct hkTreeBase::Node *, void const *, int)
//{
//    mangled_ppc("?append@hkTreeBase@@QAAPAUNode@1@PAU21@PBXH@Z");
//};

//public: struct hkTreeBase::Node * hkTreeBase::remove(struct hkTreeBase::Node *, void (*)(void *))
//{
//    mangled_ppc("?remove@hkTreeBase@@QAAPAUNode@1@PAU21@P6AXPAX@Z@Z");
//};

//public: int hkTreeBase::getDepth(struct hkTreeBase::Node *) const
//{
//    mangled_ppc("?getDepth@hkTreeBase@@QBAHPAUNode@1@@Z");
//};

//public: int hkTreeBase::getNumChildren(struct hkTreeBase::Node *) const
//{
//    mangled_ppc("?getNumChildren@hkTreeBase@@QBAHPAUNode@1@@Z");
//};

//public: void const * hkTreeBase::getValue(struct hkTreeBase::Node *) const
//{
//    mangled_ppc("?getValue@hkTreeBase@@QBAPBXPAUNode@1@@Z");
//};

//public: struct hkTreeBase::Node * hkTreeBase::iterGetRoot(void) const
//{
//    mangled_ppc("?iterGetRoot@hkTreeBase@@QBAPAUNode@1@XZ");
//};

//public: struct hkTreeBase::Node * hkTreeBase::iterNext(struct hkTreeBase::Node *) const
//{
//    mangled_ppc("?iterNext@hkTreeBase@@QBAPAUNode@1@PAU21@@Z");
//};

//public: struct hkTreeBase::Node * hkTreeBase::iterNextPreOrder(struct hkTreeBase::Node *) const
//{
//    mangled_ppc("?iterNextPreOrder@hkTreeBase@@QBAPAUNode@1@PAU21@@Z");
//};

//public: struct hkTreeBase::Node * hkTreeBase::iterParent(struct hkTreeBase::Node *) const
//{
//    mangled_ppc("?iterParent@hkTreeBase@@QBAPAUNode@1@PAU21@@Z");
//};

//public: struct hkTreeBase::Node * hkTreeBase::iterChildren(struct hkTreeBase::Node *) const
//{
//    mangled_ppc("?iterChildren@hkTreeBase@@QBAPAUNode@1@PAU21@@Z");
//};

//public: static struct hkTreeBase::Node * hkTreeBase::Node::create(int)
//{
//    mangled_ppc("?create@Node@hkTreeBase@@SAPAU12@H@Z");
//};

//public: static void * hkTreeBase::Node::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2Node@hkTreeBase@@SAPAXIPAX@Z");
//};

//public: hkTreeBase::Node::Node(void)
//{
//    mangled_ppc("??0Node@hkTreeBase@@QAA@XZ");
//};

//public: static void hkTreeBase::Node::destroy(struct hkTreeBase::Node *, int)
//{
//    mangled_ppc("?destroy@Node@hkTreeBase@@SAXPAU12@H@Z");
//};

//public: hkArray<struct hkTreeBase::Node *, struct hkContainerHeapAllocator>::hkArray<struct hkTreeBase::Node *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAUNode@hkTreeBase@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkTreeBase::Node *, struct hkContainerHeapAllocator>::pushBack(struct hkTreeBase::Node *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUNode@hkTreeBase@@UhkContainerHeapAllocator@@@@QAAXABQAUNode@hkTreeBase@@@Z");
//};

//public: hkArrayBase<struct hkTreeBase::Node *>::hkArrayBase<struct hkTreeBase::Node *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUNode@hkTreeBase@@@@QAA@XZ");
//};

//public: struct hkTreeBase::Node *& hkArrayBase<struct hkTreeBase::Node *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAUNode@hkTreeBase@@@@QAAAAPAUNode@hkTreeBase@@XZ");
//};

//public: int hkArrayBase<struct hkTreeBase::Node *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUNode@hkTreeBase@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkTreeBase::Node *>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@PAUNode@hkTreeBase@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkTreeBase::Node *>::_pushBack(class hkMemoryAllocator &, struct hkTreeBase::Node *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUNode@hkTreeBase@@@@QAAXAAVhkMemoryAllocator@@ABQAUNode@hkTreeBase@@@Z");
//};

//public: hkArray<struct hkTreeBase::Node *, struct hkContainerHeapAllocator>::~hkArray<struct hkTreeBase::Node *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUNode@hkTreeBase@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkTreeBase::Node *>::~hkArrayBase<struct hkTreeBase::Node *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUNode@hkTreeBase@@@@QAA@XZ");
//};

//public: void hkArray<struct hkTreeBase::Node *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUNode@hkTreeBase@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkTreeBase::Node *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUNode@hkTreeBase@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkTreeBase::Node *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUNode@hkTreeBase@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkTreeBase::Node *>(struct hkTreeBase::Node **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUNode@hkTreeBase@@@hkArrayUtil@@SAXPAPAUNode@hkTreeBase@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkTreeBase::Node *>(struct hkTreeBase::Node **, int, struct hkTreeBase::Node *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUNode@hkTreeBase@@@hkArrayUtil@@SAXPAPAUNode@hkTreeBase@@HABQAU12@U?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<struct hkTreeBase::Node *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUNode@hkTreeBase@@@@QAAXXZ");
//};

