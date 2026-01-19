/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkpAabbPhantom::hkpAabbPhantom(class hkAabb const &, unsigned int);
// public: virtual hkpAabbPhantom::~hkpAabbPhantom(void);
// public: virtual enum hkpPhantomType hkpAabbPhantom::getType(void) const;
// public: virtual class hkpPhantom * hkpAabbPhantom::clone(void) const;
// public: virtual void hkpAabbPhantom::calcAabb(class hkAabb &);
// public: void hkpAabbPhantom::setAabb(class hkAabb const &);
// public: void hkpAabbPhantom::castRay(struct hkpWorldRayCastInput const &, class hkpRayHitCollector &) const;
// public: void hkpAabbPhantom::castRay(struct hkpWorldRayCastInput const &, struct hkpWorldRayCastOutput &) const;
// public: void hkpAabbPhantom::linearCast(class hkpCollidable const *const, struct hkpLinearCastInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *) const;
// public: virtual class hkBool hkpAabbPhantom::isOverlappingCollidableAdded(class hkpCollidable const *);
// public: virtual void hkpAabbPhantom::addOverlappingCollidable(class hkpCollidable *);
// public: virtual void hkpAabbPhantom::removeOverlappingCollidable(class hkpCollidable *);
// public: virtual void hkpAabbPhantom::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// public: virtual void hkpAabbPhantom::deallocateInternalArrays(void);
// public: virtual void hkpAabbPhantom::ensureDeterministicOrder(void);
// public: void hkArray<class hkpCollidable *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpCollidable *, struct hkContainerHeapAllocator>::pushBack(class hkpCollidable *const &);
// public: class hkpCollidable *& hkArrayBase<class hkpCollidable *>::operator[](int);
// public: void hkArrayBase<class hkpCollidable *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<class hkpCollidable *>::removeAt(int);
// public: int hkArrayBase<class hkpCollidable *>::indexOf(class hkpCollidable *const &, int, int) const;
// public: void hkArrayBase<class hkpCollidable *>::_pushBack(class hkMemoryAllocator &, class hkpCollidable *const &);
// public: class hkpCollidable *const * hkArrayBase<class hkpCollidable *>::begin(void) const;
// public: hkArray<class hkpCollidable *, struct hkContainerHeapAllocator>::~hkArray<class hkpCollidable *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpCollidable *>::~hkArrayBase<class hkpCollidable *>(void);
// public: void hkStatisticsCollector::addArray<class hkpCollidable *>(char const *, class hkArray<class hkpCollidable *, struct hkContainerHeapAllocator> const &);
// void hkAlgorithm::quickSort<class hkpCollidable *, class hkpAabbPhantom::OrderByUid>(class hkpCollidable **, int, class hkpAabbPhantom::OrderByUid);
// public: void hkArrayBase<class hkpCollidable *>::clear(void);
// public: static void hkArrayUtil::destruct<class hkpCollidable *>(class hkpCollidable **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<class hkpCollidable *>(class hkpCollidable **, int, class hkpCollidable *const &, struct hkTraitBool<1>);
// void hkAlgorithm::quickSortRecursive<class hkpCollidable *, class hkpAabbPhantom::OrderByUid>(class hkpCollidable **, int, int, class hkpAabbPhantom::OrderByUid);
// public: class hkBool hkpAabbPhantom::OrderByUid::operator()(class hkpCollidable const *, class hkpCollidable const *);

//public: hkpAabbPhantom::hkpAabbPhantom(class hkAabb const &, unsigned int)
//{
//    mangled_ppc("??0hkpAabbPhantom@@QAA@ABVhkAabb@@I@Z");
//};

//public: virtual hkpAabbPhantom::~hkpAabbPhantom(void)
//{
//    mangled_ppc("??1hkpAabbPhantom@@UAA@XZ");
//};

//public: virtual enum hkpPhantomType hkpAabbPhantom::getType(void) const
//{
//    mangled_ppc("?getType@hkpAabbPhantom@@UBA?AW4hkpPhantomType@@XZ");
//};

//public: virtual class hkpPhantom * hkpAabbPhantom::clone(void) const
//{
//    mangled_ppc("?clone@hkpAabbPhantom@@UBAPAVhkpPhantom@@XZ");
//};

//public: virtual void hkpAabbPhantom::calcAabb(class hkAabb &)
//{
//    mangled_ppc("?calcAabb@hkpAabbPhantom@@UAAXAAVhkAabb@@@Z");
//};

//public: void hkpAabbPhantom::setAabb(class hkAabb const &)
//{
//    mangled_ppc("?setAabb@hkpAabbPhantom@@QAAXABVhkAabb@@@Z");
//};

//public: void hkpAabbPhantom::castRay(struct hkpWorldRayCastInput const &, class hkpRayHitCollector &) const
//{
//    mangled_ppc("?castRay@hkpAabbPhantom@@QBAXABUhkpWorldRayCastInput@@AAVhkpRayHitCollector@@@Z");
//};

//public: void hkpAabbPhantom::castRay(struct hkpWorldRayCastInput const &, struct hkpWorldRayCastOutput &) const
//{
//    mangled_ppc("?castRay@hkpAabbPhantom@@QBAXABUhkpWorldRayCastInput@@AAUhkpWorldRayCastOutput@@@Z");
//};

//public: void hkpAabbPhantom::linearCast(class hkpCollidable const *const, struct hkpLinearCastInput const &, class hkpCdPointCollector &, class hkpCdPointCollector *) const
//{
//    mangled_ppc("?linearCast@hkpAabbPhantom@@QBAXQBVhkpCollidable@@ABUhkpLinearCastInput@@AAVhkpCdPointCollector@@PAV4@@Z");
//};

//public: virtual class hkBool hkpAabbPhantom::isOverlappingCollidableAdded(class hkpCollidable const *)
//{
//    mangled_ppc("?isOverlappingCollidableAdded@hkpAabbPhantom@@UAA?AVhkBool@@PBVhkpCollidable@@@Z");
//};

//public: virtual void hkpAabbPhantom::addOverlappingCollidable(class hkpCollidable *)
//{
//    mangled_ppc("?addOverlappingCollidable@hkpAabbPhantom@@UAAXPAVhkpCollidable@@@Z");
//};

//public: virtual void hkpAabbPhantom::removeOverlappingCollidable(class hkpCollidable *)
//{
//    mangled_ppc("?removeOverlappingCollidable@hkpAabbPhantom@@UAAXPAVhkpCollidable@@@Z");
//};

//public: virtual void hkpAabbPhantom::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkpAabbPhantom@@UBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//public: virtual void hkpAabbPhantom::deallocateInternalArrays(void)
//{
//    mangled_ppc("?deallocateInternalArrays@hkpAabbPhantom@@UAAXXZ");
//};

//public: virtual void hkpAabbPhantom::ensureDeterministicOrder(void)
//{
//    mangled_ppc("?ensureDeterministicOrder@hkpAabbPhantom@@UAAXXZ");
//};

//public: void hkArray<class hkpCollidable *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpCollidable@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpCollidable *, struct hkContainerHeapAllocator>::pushBack(class hkpCollidable *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpCollidable@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpCollidable@@@Z");
//};

//public: class hkpCollidable *& hkArrayBase<class hkpCollidable *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpCollidable@@@@QAAAAPAVhkpCollidable@@H@Z");
//};

//public: void hkArrayBase<class hkpCollidable *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpCollidable@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<class hkpCollidable *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAVhkpCollidable@@@@QAAXH@Z");
//};

//public: int hkArrayBase<class hkpCollidable *>::indexOf(class hkpCollidable *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpCollidable@@@@QBAHABQAVhkpCollidable@@HH@Z");
//};

//public: void hkArrayBase<class hkpCollidable *>::_pushBack(class hkMemoryAllocator &, class hkpCollidable *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpCollidable@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpCollidable@@@Z");
//};

//public: class hkpCollidable *const * hkArrayBase<class hkpCollidable *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpCollidable@@@@QBAPBQAVhkpCollidable@@XZ");
//};

//public: hkArray<class hkpCollidable *, struct hkContainerHeapAllocator>::~hkArray<class hkpCollidable *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpCollidable@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpCollidable *>::~hkArrayBase<class hkpCollidable *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpCollidable@@@@QAA@XZ");
//};

//public: void hkStatisticsCollector::addArray<class hkpCollidable *>(char const *, class hkArray<class hkpCollidable *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@PAVhkpCollidable@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@PAVhkpCollidable@@UhkContainerHeapAllocator@@@@@Z");
//};

//void hkAlgorithm::quickSort<class hkpCollidable *, class hkpAabbPhantom::OrderByUid>(class hkpCollidable **, int, class hkpAabbPhantom::OrderByUid)
//{
//    mangled_ppc("??$quickSort@PAVhkpCollidable@@VOrderByUid@hkpAabbPhantom@@@hkAlgorithm@@YAXPAPAVhkpCollidable@@HVOrderByUid@hkpAabbPhantom@@@Z");
//};

//public: void hkArrayBase<class hkpCollidable *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpCollidable@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<class hkpCollidable *>(class hkpCollidable **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpCollidable@@@hkArrayUtil@@SAXPAPAVhkpCollidable@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpCollidable *>(class hkpCollidable **, int, class hkpCollidable *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpCollidable@@@hkArrayUtil@@SAXPAPAVhkpCollidable@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//void hkAlgorithm::quickSortRecursive<class hkpCollidable *, class hkpAabbPhantom::OrderByUid>(class hkpCollidable **, int, int, class hkpAabbPhantom::OrderByUid)
//{
//    mangled_ppc("??$quickSortRecursive@PAVhkpCollidable@@VOrderByUid@hkpAabbPhantom@@@hkAlgorithm@@YAXPAPAVhkpCollidable@@HHVOrderByUid@hkpAabbPhantom@@@Z");
//};

//public: class hkBool hkpAabbPhantom::OrderByUid::operator()(class hkpCollidable const *, class hkpCollidable const *)
//{
//    mangled_ppc("??ROrderByUid@hkpAabbPhantom@@QAA?AVhkBool@@PBVhkpCollidable@@0@Z");
//};

