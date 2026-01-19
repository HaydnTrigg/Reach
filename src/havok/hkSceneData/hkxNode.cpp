/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: virtual hkxNode::~hkxNode(void);
// public: class hkxNode * hkxNode::findChildByName(char const *) const;
// public: class hkxNode * hkxNode::findDescendantByName(char const *) const;
// public: enum hkResult hkxNode::getPathToNode(class hkxNode const *, class hkArray<class hkxNode const *, struct hkContainerHeapAllocator> &) const;
// public: class hkRefVariant hkxNode::findVariantByObject(class hkReferencedObject const *) const;
// public: void hkxNode::replaceAllObjects(class hkReferencedObject const *, class hkReferencedObject const *);
// public: int hkxNode::getNumDescendants(void) const;
// public: hkRefVariant::hkRefVariant(class hkReferencedObject const *);
// public: void hkRefVariant::operator=(class hkReferencedObject const *);
// public: void hkArray<class hkxNode const *, struct hkContainerHeapAllocator>::pushBack(class hkxNode const *const &);
// public: class hkRefPtr<class hkxNode> const & hkArrayBase<class hkRefPtr<class hkxNode> >::operator[](int) const;
// public: class hkRefPtr<class hkxNode> & hkArrayBase<class hkRefPtr<class hkxNode> >::operator[](int);
// public: int hkArrayBase<class hkRefPtr<class hkxNode> >::getSize(void) const;
// public: hkArray<struct hkxNode::AnnotationData, struct hkContainerHeapAllocator>::~hkArray<struct hkxNode::AnnotationData, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkxNode::AnnotationData>::~hkArrayBase<struct hkxNode::AnnotationData>(void);
// public: class hkxNode * hkRefPtr<class hkxNode>::operator->(void) const;
// public: class hkxNode * hkRefPtr<class hkxNode>::operator class hkxNode *(void) const;
// public: void hkArrayBase<class hkxNode const *>::popBack(int);
// public: void hkArrayBase<class hkxNode const *>::_pushBack(class hkMemoryAllocator &, class hkxNode const *const &);
// public: void hkArray<struct hkxNode::AnnotationData, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<struct hkxNode::AnnotationData>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: class hkxNode * hkRefPtr<class hkxNode>::val(void) const;
// public: int hkArrayBase<class hkxNode const *>::getCapacity(void) const;
// public: static void hkArrayUtil::destruct<class hkxNode const *>(class hkxNode const **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<class hkxNode const *>(class hkxNode const **, int, class hkxNode const *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<struct hkxNode::AnnotationData>::getCapacity(void) const;
// public: void hkArrayBase<struct hkxNode::AnnotationData>::clear(void);
// public: static void hkArrayUtil::destruct<struct hkxNode::AnnotationData>(struct hkxNode::AnnotationData *, int, struct hkTraitBool<0>);
// public: hkRefPtr<class hkReferencedObject>::hkRefPtr<class hkReferencedObject>(class hkReferencedObject *);

//public: virtual hkxNode::~hkxNode(void)
//{
//    mangled_ppc("??1hkxNode@@UAA@XZ");
//};

//public: class hkxNode * hkxNode::findChildByName(char const *) const
//{
//    mangled_ppc("?findChildByName@hkxNode@@QBAPAV1@PBD@Z");
//};

//public: class hkxNode * hkxNode::findDescendantByName(char const *) const
//{
//    mangled_ppc("?findDescendantByName@hkxNode@@QBAPAV1@PBD@Z");
//};

//public: enum hkResult hkxNode::getPathToNode(class hkxNode const *, class hkArray<class hkxNode const *, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?getPathToNode@hkxNode@@QBA?AW4hkResult@@PBV1@AAV?$hkArray@PBVhkxNode@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: class hkRefVariant hkxNode::findVariantByObject(class hkReferencedObject const *) const
//{
//    mangled_ppc("?findVariantByObject@hkxNode@@QBA?AVhkRefVariant@@PBVhkReferencedObject@@@Z");
//};

//public: void hkxNode::replaceAllObjects(class hkReferencedObject const *, class hkReferencedObject const *)
//{
//    mangled_ppc("?replaceAllObjects@hkxNode@@QAAXPBVhkReferencedObject@@0@Z");
//};

//public: int hkxNode::getNumDescendants(void) const
//{
//    mangled_ppc("?getNumDescendants@hkxNode@@QBAHXZ");
//};

//public: hkRefVariant::hkRefVariant(class hkReferencedObject const *)
//{
//    mangled_ppc("??0hkRefVariant@@QAA@PBVhkReferencedObject@@@Z");
//};

//public: void hkRefVariant::operator=(class hkReferencedObject const *)
//{
//    mangled_ppc("??4hkRefVariant@@QAAXPBVhkReferencedObject@@@Z");
//};

//public: void hkArray<class hkxNode const *, struct hkContainerHeapAllocator>::pushBack(class hkxNode const *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PBVhkxNode@@UhkContainerHeapAllocator@@@@QAAXABQBVhkxNode@@@Z");
//};

//public: class hkRefPtr<class hkxNode> const & hkArrayBase<class hkRefPtr<class hkxNode> >::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@V?$hkRefPtr@VhkxNode@@@@@@QBAABV?$hkRefPtr@VhkxNode@@@@H@Z");
//};

//public: class hkRefPtr<class hkxNode> & hkArrayBase<class hkRefPtr<class hkxNode> >::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@V?$hkRefPtr@VhkxNode@@@@@@QAAAAV?$hkRefPtr@VhkxNode@@@@H@Z");
//};

//public: int hkArrayBase<class hkRefPtr<class hkxNode> >::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@V?$hkRefPtr@VhkxNode@@@@@@QBAHXZ");
//};

//public: hkArray<struct hkxNode::AnnotationData, struct hkContainerHeapAllocator>::~hkArray<struct hkxNode::AnnotationData, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UAnnotationData@hkxNode@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkxNode::AnnotationData>::~hkArrayBase<struct hkxNode::AnnotationData>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UAnnotationData@hkxNode@@@@QAA@XZ");
//};

//public: class hkxNode * hkRefPtr<class hkxNode>::operator->(void) const
//{
//    mangled_ppc("??C?$hkRefPtr@VhkxNode@@@@QBAPAVhkxNode@@XZ");
//};

//public: class hkxNode * hkRefPtr<class hkxNode>::operator class hkxNode *(void) const
//{
//    mangled_ppc("??B?$hkRefPtr@VhkxNode@@@@QBAPAVhkxNode@@XZ");
//};

//public: void hkArrayBase<class hkxNode const *>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@PBVhkxNode@@@@QAAXH@Z");
//};

//public: void hkArrayBase<class hkxNode const *>::_pushBack(class hkMemoryAllocator &, class hkxNode const *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PBVhkxNode@@@@QAAXAAVhkMemoryAllocator@@ABQBVhkxNode@@@Z");
//};

//public: void hkArray<struct hkxNode::AnnotationData, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UAnnotationData@hkxNode@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkxNode::AnnotationData>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UAnnotationData@hkxNode@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: class hkxNode * hkRefPtr<class hkxNode>::val(void) const
//{
//    mangled_ppc("?val@?$hkRefPtr@VhkxNode@@@@QBAPAVhkxNode@@XZ");
//};

//public: int hkArrayBase<class hkxNode const *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PBVhkxNode@@@@QBAHXZ");
//};

//public: static void hkArrayUtil::destruct<class hkxNode const *>(class hkxNode const **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PBVhkxNode@@@hkArrayUtil@@SAXPAPBVhkxNode@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkxNode const *>(class hkxNode const **, int, class hkxNode const *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PBVhkxNode@@@hkArrayUtil@@SAXPAPBVhkxNode@@HABQBV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<struct hkxNode::AnnotationData>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UAnnotationData@hkxNode@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkxNode::AnnotationData>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UAnnotationData@hkxNode@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkxNode::AnnotationData>(struct hkxNode::AnnotationData *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UAnnotationData@hkxNode@@@hkArrayUtil@@SAXPAUAnnotationData@hkxNode@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkRefPtr<class hkReferencedObject>::hkRefPtr<class hkReferencedObject>(class hkReferencedObject *)
//{
//    mangled_ppc("??0?$hkRefPtr@VhkReferencedObject@@@@QAA@PAVhkReferencedObject@@@Z");
//};

