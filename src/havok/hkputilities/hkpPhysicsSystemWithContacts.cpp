/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: virtual hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts(void);
// public: void hkpPhysicsSystemWithContacts::copy(class hkpPhysicsSystemWithContacts const &);
// public: virtual class hkpPhysicsSystem * hkpPhysicsSystemWithContacts::clone(void) const;
// public: void hkpPhysicsSystemWithContacts::addContact(struct hkpSerializedAgentNnEntry *);
// public: void hkpPhysicsSystemWithContacts::removeContact(int);
// public: void hkArray<struct hkpSerializedAgentNnEntry *, struct hkContainerHeapAllocator>::pushBack(struct hkpSerializedAgentNnEntry *const &);
// public: struct hkpSerializedAgentNnEntry *& hkArrayBase<struct hkpSerializedAgentNnEntry *>::operator[](int);
// public: int hkArrayBase<struct hkpSerializedAgentNnEntry *>::getSize(void) const;
// public: void hkArrayBase<struct hkpSerializedAgentNnEntry *>::removeAt(int);
// public: void hkArrayBase<struct hkpSerializedAgentNnEntry *>::_pushBack(class hkMemoryAllocator &, struct hkpSerializedAgentNnEntry *const &);
// public: hkArray<struct hkpSerializedAgentNnEntry *, struct hkContainerHeapAllocator>::~hkArray<struct hkpSerializedAgentNnEntry *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpSerializedAgentNnEntry *>::~hkArrayBase<struct hkpSerializedAgentNnEntry *>(void);
// public: class hkArray<struct hkpSerializedAgentNnEntry *, struct hkContainerHeapAllocator> & hkArray<struct hkpSerializedAgentNnEntry *, struct hkContainerHeapAllocator>::operator=(class hkArray<struct hkpSerializedAgentNnEntry *, struct hkContainerHeapAllocator> const &);
// public: void hkArray<struct hkpSerializedAgentNnEntry *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<struct hkpSerializedAgentNnEntry *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpSerializedAgentNnEntry *>::_clearAndDeallocate(class hkMemoryAllocator &);
// protected: class hkArrayBase<struct hkpSerializedAgentNnEntry *> & hkArrayBase<struct hkpSerializedAgentNnEntry *>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<struct hkpSerializedAgentNnEntry *> const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<struct hkpSerializedAgentNnEntry *>(struct hkpSerializedAgentNnEntry **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkpSerializedAgentNnEntry *>(struct hkpSerializedAgentNnEntry **, int, struct hkpSerializedAgentNnEntry *const &, struct hkTraitBool<1>);
// public: void hkArrayBase<struct hkpSerializedAgentNnEntry *>::clear(void);
// public: static void hkArrayBase<struct hkpSerializedAgentNnEntry *>::copy(struct hkpSerializedAgentNnEntry **, struct hkpSerializedAgentNnEntry *const *, int);

//public: virtual hkpPhysicsSystemWithContacts::~hkpPhysicsSystemWithContacts(void)
//{
//    mangled_ppc("??1hkpPhysicsSystemWithContacts@@UAA@XZ");
//};

//public: void hkpPhysicsSystemWithContacts::copy(class hkpPhysicsSystemWithContacts const &)
//{
//    mangled_ppc("?copy@hkpPhysicsSystemWithContacts@@QAAXABV1@@Z");
//};

//public: virtual class hkpPhysicsSystem * hkpPhysicsSystemWithContacts::clone(void) const
//{
//    mangled_ppc("?clone@hkpPhysicsSystemWithContacts@@UBAPAVhkpPhysicsSystem@@XZ");
//};

//public: void hkpPhysicsSystemWithContacts::addContact(struct hkpSerializedAgentNnEntry *)
//{
//    mangled_ppc("?addContact@hkpPhysicsSystemWithContacts@@QAAXPAUhkpSerializedAgentNnEntry@@@Z");
//};

//public: void hkpPhysicsSystemWithContacts::removeContact(int)
//{
//    mangled_ppc("?removeContact@hkpPhysicsSystemWithContacts@@QAAXH@Z");
//};

//public: void hkArray<struct hkpSerializedAgentNnEntry *, struct hkContainerHeapAllocator>::pushBack(struct hkpSerializedAgentNnEntry *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUhkpSerializedAgentNnEntry@@UhkContainerHeapAllocator@@@@QAAXABQAUhkpSerializedAgentNnEntry@@@Z");
//};

//public: struct hkpSerializedAgentNnEntry *& hkArrayBase<struct hkpSerializedAgentNnEntry *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUhkpSerializedAgentNnEntry@@@@QAAAAPAUhkpSerializedAgentNnEntry@@H@Z");
//};

//public: int hkArrayBase<struct hkpSerializedAgentNnEntry *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUhkpSerializedAgentNnEntry@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpSerializedAgentNnEntry *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAUhkpSerializedAgentNnEntry@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkpSerializedAgentNnEntry *>::_pushBack(class hkMemoryAllocator &, struct hkpSerializedAgentNnEntry *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUhkpSerializedAgentNnEntry@@@@QAAXAAVhkMemoryAllocator@@ABQAUhkpSerializedAgentNnEntry@@@Z");
//};

//public: hkArray<struct hkpSerializedAgentNnEntry *, struct hkContainerHeapAllocator>::~hkArray<struct hkpSerializedAgentNnEntry *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUhkpSerializedAgentNnEntry@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpSerializedAgentNnEntry *>::~hkArrayBase<struct hkpSerializedAgentNnEntry *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUhkpSerializedAgentNnEntry@@@@QAA@XZ");
//};

//public: class hkArray<struct hkpSerializedAgentNnEntry *, struct hkContainerHeapAllocator> & hkArray<struct hkpSerializedAgentNnEntry *, struct hkContainerHeapAllocator>::operator=(class hkArray<struct hkpSerializedAgentNnEntry *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@PAUhkpSerializedAgentNnEntry@@UhkContainerHeapAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//public: void hkArray<struct hkpSerializedAgentNnEntry *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUhkpSerializedAgentNnEntry@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkpSerializedAgentNnEntry *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUhkpSerializedAgentNnEntry@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpSerializedAgentNnEntry *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUhkpSerializedAgentNnEntry@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//protected: class hkArrayBase<struct hkpSerializedAgentNnEntry *> & hkArrayBase<struct hkpSerializedAgentNnEntry *>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<struct hkpSerializedAgentNnEntry *> const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@PAUhkpSerializedAgentNnEntry@@@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpSerializedAgentNnEntry *>(struct hkpSerializedAgentNnEntry **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUhkpSerializedAgentNnEntry@@@hkArrayUtil@@SAXPAPAUhkpSerializedAgentNnEntry@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkpSerializedAgentNnEntry *>(struct hkpSerializedAgentNnEntry **, int, struct hkpSerializedAgentNnEntry *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUhkpSerializedAgentNnEntry@@@hkArrayUtil@@SAXPAPAUhkpSerializedAgentNnEntry@@HABQAU1@U?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<struct hkpSerializedAgentNnEntry *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUhkpSerializedAgentNnEntry@@@@QAAXXZ");
//};

//public: static void hkArrayBase<struct hkpSerializedAgentNnEntry *>::copy(struct hkpSerializedAgentNnEntry **, struct hkpSerializedAgentNnEntry *const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@PAUhkpSerializedAgentNnEntry@@@@SAXPAPAUhkpSerializedAgentNnEntry@@PBQAU2@H@Z");
//};

