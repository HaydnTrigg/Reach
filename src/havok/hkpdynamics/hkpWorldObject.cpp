/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkpWorldObject::hkpWorldObject(class hkFinishLoadedObjectFlag);
// protected: hkpWorldObject::hkpWorldObject(class hkpShape const *, enum hkpWorldObject::BroadPhaseType);
// public: virtual enum hkWorldOperation::Result hkpWorldObject::setShape(class hkpShape const *);
// public: void hkpWorldObject::addProperty(unsigned int, struct hkpPropertyValue);
// public: struct hkpPropertyValue hkpWorldObject::removeProperty(unsigned int);
// public: void hkpWorldObject::editProperty(unsigned int, struct hkpPropertyValue, enum hkpWorldObject::MtChecks);
// public: void hkpWorldObject::lockProperty(unsigned int);
// public: void hkpWorldObject::unlockProperty(unsigned int);
// public: virtual void hkpWorldObject::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// public: void hkpWorldObject::markForWriteImpl(void);
// public: void hkpWorldObject::checkReadWrite(void);
// public: void hkpWorldObject::checkReadOnly(void) const;
// public: class hkaiObjectData * hkpWorldObject::getAiObjectData(void) const;
// public: void hkpWorldObject::setAiObjectData(class hkaiObjectData *);
// public: void hkpWorldObject::setTreeData(void *);
// public: void * hkpWorldObject::getTreeData(void) const;
// public: void hkpCollidable::setOwner(void *);
// public: hkpLinkedCollidable::hkpLinkedCollidable(class hkpShape const *, class hkMotionState const *, int);
// public: hkArray<class hkpProperty, struct hkContainerHeapAllocator>::hkArray<class hkpProperty, struct hkContainerHeapAllocator>(void);
// public: hkArray<class hkpProperty, struct hkContainerHeapAllocator>::hkArray<class hkpProperty, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag);
// public: class hkpProperty & hkArray<class hkpProperty, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkArrayBase<class hkpProperty>::hkArrayBase<class hkpProperty>(class hkFinishLoadedObjectFlag);
// public: hkArrayBase<class hkpProperty>::hkArrayBase<class hkpProperty>(void);
// public: class hkpProperty & hkArrayBase<class hkpProperty>::operator[](int);
// public: void hkArrayBase<class hkpProperty>::removeAtAndCopy(int);
// public: class hkpProperty & hkArrayBase<class hkpProperty>::_expandOne(class hkMemoryAllocator &);
// public: void hkStatisticsCollector::addArray<struct hkpLinkedCollidable::CollisionEntry>(char const *, class hkArray<struct hkpLinkedCollidable::CollisionEntry, struct hkContainerHeapAllocator> const &);
// public: void hkStatisticsCollector::addArray<class hkpProperty>(char const *, class hkArray<class hkpProperty, struct hkContainerHeapAllocator> const &);
// public: class hkpProperty const * hkArrayBase<class hkpProperty>::begin(void) const;
// void hkMemUtil::memCpy<8>(void *, void const *, int);
// public: static void hkArrayUtil::construct<class hkpProperty>(class hkpProperty *, int, struct hkTraitBool<0>);
// public: hkpProperty::hkpProperty(void);
// public: struct hkpLinkedCollidable::CollisionEntry const * hkArrayBase<struct hkpLinkedCollidable::CollisionEntry>::begin(void) const;

//public: hkpWorldObject::hkpWorldObject(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkpWorldObject@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//protected: hkpWorldObject::hkpWorldObject(class hkpShape const *, enum hkpWorldObject::BroadPhaseType)
//{
//    mangled_ppc("??0hkpWorldObject@@IAA@PBVhkpShape@@W4BroadPhaseType@0@@Z");
//};

//public: virtual enum hkWorldOperation::Result hkpWorldObject::setShape(class hkpShape const *)
//{
//    mangled_ppc("?setShape@hkpWorldObject@@UAA?AW4Result@hkWorldOperation@@PBVhkpShape@@@Z");
//};

//public: void hkpWorldObject::addProperty(unsigned int, struct hkpPropertyValue)
//{
//    mangled_ppc("?addProperty@hkpWorldObject@@QAAXIUhkpPropertyValue@@@Z");
//};

//public: struct hkpPropertyValue hkpWorldObject::removeProperty(unsigned int)
//{
//    mangled_ppc("?removeProperty@hkpWorldObject@@QAA?AUhkpPropertyValue@@I@Z");
//};

//public: void hkpWorldObject::editProperty(unsigned int, struct hkpPropertyValue, enum hkpWorldObject::MtChecks)
//{
//    mangled_ppc("?editProperty@hkpWorldObject@@QAAXIUhkpPropertyValue@@W4MtChecks@1@@Z");
//};

//public: void hkpWorldObject::lockProperty(unsigned int)
//{
//    mangled_ppc("?lockProperty@hkpWorldObject@@QAAXI@Z");
//};

//public: void hkpWorldObject::unlockProperty(unsigned int)
//{
//    mangled_ppc("?unlockProperty@hkpWorldObject@@QAAXI@Z");
//};

//public: virtual void hkpWorldObject::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkpWorldObject@@UBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//public: void hkpWorldObject::markForWriteImpl(void)
//{
//    mangled_ppc("?markForWriteImpl@hkpWorldObject@@QAAXXZ");
//};

//public: void hkpWorldObject::checkReadWrite(void)
//{
//    mangled_ppc("?checkReadWrite@hkpWorldObject@@QAAXXZ");
//};

//public: void hkpWorldObject::checkReadOnly(void) const
//{
//    mangled_ppc("?checkReadOnly@hkpWorldObject@@QBAXXZ");
//};

//public: class hkaiObjectData * hkpWorldObject::getAiObjectData(void) const
//{
//    mangled_ppc("?getAiObjectData@hkpWorldObject@@QBAPAVhkaiObjectData@@XZ");
//};

//public: void hkpWorldObject::setAiObjectData(class hkaiObjectData *)
//{
//    mangled_ppc("?setAiObjectData@hkpWorldObject@@QAAXPAVhkaiObjectData@@@Z");
//};

//public: void hkpWorldObject::setTreeData(void *)
//{
//    mangled_ppc("?setTreeData@hkpWorldObject@@QAAXPAX@Z");
//};

//public: void * hkpWorldObject::getTreeData(void) const
//{
//    mangled_ppc("?getTreeData@hkpWorldObject@@QBAPAXXZ");
//};

//public: void hkpCollidable::setOwner(void *)
//{
//    mangled_ppc("?setOwner@hkpCollidable@@QAAXPAX@Z");
//};

//public: hkpLinkedCollidable::hkpLinkedCollidable(class hkpShape const *, class hkMotionState const *, int)
//{
//    mangled_ppc("??0hkpLinkedCollidable@@QAA@PBVhkpShape@@PBVhkMotionState@@H@Z");
//};

//public: hkArray<class hkpProperty, struct hkContainerHeapAllocator>::hkArray<class hkpProperty, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@VhkpProperty@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<class hkpProperty, struct hkContainerHeapAllocator>::hkArray<class hkpProperty, struct hkContainerHeapAllocator>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArray@VhkpProperty@@UhkContainerHeapAllocator@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: class hkpProperty & hkArray<class hkpProperty, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@VhkpProperty@@UhkContainerHeapAllocator@@@@QAAAAVhkpProperty@@XZ");
//};

//public: hkArrayBase<class hkpProperty>::hkArrayBase<class hkpProperty>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkArrayBase@VhkpProperty@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkArrayBase<class hkpProperty>::hkArrayBase<class hkpProperty>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@VhkpProperty@@@@QAA@XZ");
//};

//public: class hkpProperty & hkArrayBase<class hkpProperty>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@VhkpProperty@@@@QAAAAVhkpProperty@@H@Z");
//};

//public: void hkArrayBase<class hkpProperty>::removeAtAndCopy(int)
//{
//    mangled_ppc("?removeAtAndCopy@?$hkArrayBase@VhkpProperty@@@@QAAXH@Z");
//};

//public: class hkpProperty & hkArrayBase<class hkpProperty>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@VhkpProperty@@@@QAAAAVhkpProperty@@AAVhkMemoryAllocator@@@Z");
//};

//public: void hkStatisticsCollector::addArray<struct hkpLinkedCollidable::CollisionEntry>(char const *, class hkArray<struct hkpLinkedCollidable::CollisionEntry, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@UCollisionEntry@hkpLinkedCollidable@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@UCollisionEntry@hkpLinkedCollidable@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkStatisticsCollector::addArray<class hkpProperty>(char const *, class hkArray<class hkpProperty, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??$addArray@VhkpProperty@@@hkStatisticsCollector@@QAAXPBDABV?$hkArray@VhkpProperty@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: class hkpProperty const * hkArrayBase<class hkpProperty>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@VhkpProperty@@@@QBAPBVhkpProperty@@XZ");
//};

//void hkMemUtil::memCpy<8>(void *, void const *, int)
//{
//    mangled_ppc("??$memCpy@$07@hkMemUtil@@YAXPAXPBXH@Z");
//};

//public: static void hkArrayUtil::construct<class hkpProperty>(class hkpProperty *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@VhkpProperty@@@hkArrayUtil@@SAXPAVhkpProperty@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkpProperty::hkpProperty(void)
//{
//    mangled_ppc("??0hkpProperty@@QAA@XZ");
//};

//public: struct hkpLinkedCollidable::CollisionEntry const * hkArrayBase<struct hkpLinkedCollidable::CollisionEntry>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UCollisionEntry@hkpLinkedCollidable@@@@QBAPBUCollisionEntry@hkpLinkedCollidable@@XZ");
//};

