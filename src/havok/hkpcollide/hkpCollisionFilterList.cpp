/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkpCollisionFilterList::hkpCollisionFilterList(class hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator> const &);
// public: virtual hkpCollisionFilterList::~hkpCollisionFilterList(void);
// public: virtual class hkBool hkpCollisionFilterList::isCollisionEnabled(class hkpCollidable const &, class hkpCollidable const &) const;
// public: virtual class hkBool hkpCollisionFilterList::isCollisionEnabled(struct hkpCollisionInput const &, class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, unsigned int) const;
// public: virtual class hkBool hkpCollisionFilterList::isCollisionEnabled(struct hkpShapeRayCastInput const &, class hkpShape const &, class hkpShapeContainer const &, unsigned int) const;
// public: virtual class hkBool hkpCollisionFilterList::isCollisionEnabled(struct hkpCollisionInput const &, class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, class hkpShapeContainer const &, unsigned int, unsigned int) const;
// public: virtual class hkBool hkpCollisionFilterList::isCollisionEnabled(struct hkpWorldRayCastInput const &, class hkpCollidable const &) const;
// public: hkpCollisionFilterList::hkpCollisionFilterList(void);
// public: void hkpCollisionFilterList::addCollisionFilter(class hkpCollisionFilter const *);
// public: void hkpCollisionFilterList::removeCollisionFilter(class hkpCollisionFilter const *);
// public: class hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator> const & hkpCollisionFilterList::getCollisionFilters(void) const;
// public: hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator>::hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator>::pushBack(class hkpCollisionFilter const *const &);
// public: hkArrayBase<class hkpCollisionFilter const *>::hkArrayBase<class hkpCollisionFilter const *>(void);
// public: class hkpCollisionFilter const *const & hkArrayBase<class hkpCollisionFilter const *>::operator[](int) const;
// public: class hkpCollisionFilter const *& hkArrayBase<class hkpCollisionFilter const *>::operator[](int);
// public: int hkArrayBase<class hkpCollisionFilter const *>::getSize(void) const;
// public: void hkArrayBase<class hkpCollisionFilter const *>::removeAt(int);
// public: int hkArrayBase<class hkpCollisionFilter const *>::indexOf(class hkpCollisionFilter const *const &, int, int) const;
// public: void hkArrayBase<class hkpCollisionFilter const *>::_pushBack(class hkMemoryAllocator &, class hkpCollisionFilter const *const &);
// public: hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator>::~hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpCollisionFilter const *>::~hkArrayBase<class hkpCollisionFilter const *>(void);
// public: class hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator> & hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator> const &);
// public: void hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<class hkpCollisionFilter const *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpCollisionFilter const *>::_clearAndDeallocate(class hkMemoryAllocator &);
// protected: class hkArrayBase<class hkpCollisionFilter const *> & hkArrayBase<class hkpCollisionFilter const *>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkpCollisionFilter const *> const &, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<class hkpCollisionFilter const *>(class hkpCollisionFilter const **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<class hkpCollisionFilter const *>(class hkpCollisionFilter const **, int, class hkpCollisionFilter const *const &, struct hkTraitBool<1>);
// public: void hkArrayBase<class hkpCollisionFilter const *>::clear(void);
// public: static void hkArrayBase<class hkpCollisionFilter const *>::copy(class hkpCollisionFilter const **, class hkpCollisionFilter const *const *, int);

//public: hkpCollisionFilterList::hkpCollisionFilterList(class hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??0hkpCollisionFilterList@@QAA@ABV?$hkArray@PBVhkpCollisionFilter@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual hkpCollisionFilterList::~hkpCollisionFilterList(void)
//{
//    mangled_ppc("??1hkpCollisionFilterList@@UAA@XZ");
//};

//public: virtual class hkBool hkpCollisionFilterList::isCollisionEnabled(class hkpCollidable const &, class hkpCollidable const &) const
//{
//    mangled_ppc("?isCollisionEnabled@hkpCollisionFilterList@@UBA?AVhkBool@@ABVhkpCollidable@@0@Z");
//};

//public: virtual class hkBool hkpCollisionFilterList::isCollisionEnabled(struct hkpCollisionInput const &, class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, unsigned int) const
//{
//    mangled_ppc("?isCollisionEnabled@hkpCollisionFilterList@@UBA?AVhkBool@@ABUhkpCollisionInput@@ABVhkpCdBody@@1ABVhkpShapeContainer@@I@Z");
//};

//public: virtual class hkBool hkpCollisionFilterList::isCollisionEnabled(struct hkpShapeRayCastInput const &, class hkpShape const &, class hkpShapeContainer const &, unsigned int) const
//{
//    mangled_ppc("?isCollisionEnabled@hkpCollisionFilterList@@UBA?AVhkBool@@ABUhkpShapeRayCastInput@@ABVhkpShape@@ABVhkpShapeContainer@@I@Z");
//};

//public: virtual class hkBool hkpCollisionFilterList::isCollisionEnabled(struct hkpCollisionInput const &, class hkpCdBody const &, class hkpCdBody const &, class hkpShapeContainer const &, class hkpShapeContainer const &, unsigned int, unsigned int) const
//{
//    mangled_ppc("?isCollisionEnabled@hkpCollisionFilterList@@UBA?AVhkBool@@ABUhkpCollisionInput@@ABVhkpCdBody@@1ABVhkpShapeContainer@@2II@Z");
//};

//public: virtual class hkBool hkpCollisionFilterList::isCollisionEnabled(struct hkpWorldRayCastInput const &, class hkpCollidable const &) const
//{
//    mangled_ppc("?isCollisionEnabled@hkpCollisionFilterList@@UBA?AVhkBool@@ABUhkpWorldRayCastInput@@ABVhkpCollidable@@@Z");
//};

//public: hkpCollisionFilterList::hkpCollisionFilterList(void)
//{
//    mangled_ppc("??0hkpCollisionFilterList@@QAA@XZ");
//};

//public: void hkpCollisionFilterList::addCollisionFilter(class hkpCollisionFilter const *)
//{
//    mangled_ppc("?addCollisionFilter@hkpCollisionFilterList@@QAAXPBVhkpCollisionFilter@@@Z");
//};

//public: void hkpCollisionFilterList::removeCollisionFilter(class hkpCollisionFilter const *)
//{
//    mangled_ppc("?removeCollisionFilter@hkpCollisionFilterList@@QAAXPBVhkpCollisionFilter@@@Z");
//};

//public: class hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator> const & hkpCollisionFilterList::getCollisionFilters(void) const
//{
//    mangled_ppc("?getCollisionFilters@hkpCollisionFilterList@@QBAABV?$hkArray@PBVhkpCollisionFilter@@UhkContainerHeapAllocator@@@@XZ");
//};

//public: hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator>::hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PBVhkpCollisionFilter@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator>::pushBack(class hkpCollisionFilter const *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PBVhkpCollisionFilter@@UhkContainerHeapAllocator@@@@QAAXABQBVhkpCollisionFilter@@@Z");
//};

//public: hkArrayBase<class hkpCollisionFilter const *>::hkArrayBase<class hkpCollisionFilter const *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PBVhkpCollisionFilter@@@@QAA@XZ");
//};

//public: class hkpCollisionFilter const *const & hkArrayBase<class hkpCollisionFilter const *>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@PBVhkpCollisionFilter@@@@QBAABQBVhkpCollisionFilter@@H@Z");
//};

//public: class hkpCollisionFilter const *& hkArrayBase<class hkpCollisionFilter const *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PBVhkpCollisionFilter@@@@QAAAAPBVhkpCollisionFilter@@H@Z");
//};

//public: int hkArrayBase<class hkpCollisionFilter const *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PBVhkpCollisionFilter@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpCollisionFilter const *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PBVhkpCollisionFilter@@@@QAAXH@Z");
//};

//public: int hkArrayBase<class hkpCollisionFilter const *>::indexOf(class hkpCollisionFilter const *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PBVhkpCollisionFilter@@@@QBAHABQBVhkpCollisionFilter@@HH@Z");
//};

//public: void hkArrayBase<class hkpCollisionFilter const *>::_pushBack(class hkMemoryAllocator &, class hkpCollisionFilter const *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PBVhkpCollisionFilter@@@@QAAXAAVhkMemoryAllocator@@ABQBVhkpCollisionFilter@@@Z");
//};

//public: hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator>::~hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PBVhkpCollisionFilter@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpCollisionFilter const *>::~hkArrayBase<class hkpCollisionFilter const *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PBVhkpCollisionFilter@@@@QAA@XZ");
//};

//public: class hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator> & hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@PBVhkpCollisionFilter@@UhkContainerHeapAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//public: void hkArray<class hkpCollisionFilter const *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PBVhkpCollisionFilter@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<class hkpCollisionFilter const *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PBVhkpCollisionFilter@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpCollisionFilter const *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PBVhkpCollisionFilter@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//protected: class hkArrayBase<class hkpCollisionFilter const *> & hkArrayBase<class hkpCollisionFilter const *>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkpCollisionFilter const *> const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@PBVhkpCollisionFilter@@@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpCollisionFilter const *>(class hkpCollisionFilter const **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PBVhkpCollisionFilter@@@hkArrayUtil@@SAXPAPBVhkpCollisionFilter@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpCollisionFilter const *>(class hkpCollisionFilter const **, int, class hkpCollisionFilter const *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PBVhkpCollisionFilter@@@hkArrayUtil@@SAXPAPBVhkpCollisionFilter@@HABQBV1@U?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<class hkpCollisionFilter const *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PBVhkpCollisionFilter@@@@QAAXXZ");
//};

//public: static void hkArrayBase<class hkpCollisionFilter const *>::copy(class hkpCollisionFilter const **, class hkpCollisionFilter const *const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@PBVhkpCollisionFilter@@@@SAXPAPBVhkpCollisionFilter@@PBQBV2@H@Z");
//};

