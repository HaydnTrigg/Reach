/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkpEntity::`RTTI Complete Object Locator'; // "??_R4hkpEntity@@6B@"
// const hkpWorldObject::`RTTI Complete Object Locator'; // "??_R4hkpWorldObject@@6B@"

// protected: hkpEntity::hkpEntity(class hkpShape const *);
// public: hkpEntity::hkpEntity(class hkFinishLoadedObjectFlag);
// public: void hkpEntity::setCachedShapeData(class hkpWorld const *, class hkpShape const *);
// public: void hkpEntity::updateCachedAabb(void);
// public: virtual void hkpEntity::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// public: virtual hkpEntity::~hkpEntity(void);
// public: void hkpEntity::addEntityListener(class hkpEntityListener *);
// public: void hkpEntity::removeEntityListener(class hkpEntityListener *);
// public: void hkpEntity::addEntityActivationListener(class hkpEntityActivationListener *);
// public: void hkpEntity::removeEntityActivationListener(class hkpEntityActivationListener *);
// public: void hkpEntity::addContactListener(class hkpContactListener *);
// public: void hkpEntity::removeContactListener(class hkpContactListener *);
// public: class hkpDynamicsContactMgr * hkpEntity::findContactMgrTo(class hkpEntity const *) const;
// public: class hkBool hkpEntity::isActive(void) const;
// class hkBool hkEntity_isActive(class hkpEntity const *);
// public: void hkpEntity::activate(void);
// public: void hkpEntity::deactivate(void);
// public: void hkpEntity::activateAsCriticalOperation(void);
// public: void hkpEntity::deactivateAsCriticalOperation(void);
// public: virtual void hkpEntity::deallocateInternalArrays(void);
// public: int hkpEntity::getNumConstraints(void) const;
// public: class hkpConstraintInstance * hkpEntity::getConstraint(int);
// public: class hkpConstraintInstance const * hkpEntity::getConstraint(int) const;
// public: void hkpEntity::getAllConstraints(class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> &);
// protected: class hkSmallArray<struct hkConstraintInternal> const & hkpEntity::getConstraintMastersImpl(void) const;
// protected: class hkSmallArray<struct hkConstraintInternal> & hkpEntity::getConstraintMastersRwImpl(void);
// protected: class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> const & hkpEntity::getConstraintSlavesImpl(void) const;
// public: void hkpEntity::sortConstraintsSlavesDeterministically(void);
// public: hkpMaterial::hkpMaterial(void);
// public: hkpMaxSizeMotion::hkpMaxSizeMotion(void);
// protected: hkpKeyframedRigidMotion::hkpKeyframedRigidMotion(void);
// public: virtual class hkMotionState * hkpEntity::getMotionState(void);
// public: hkpEntity::SpuCollisionCallback::SpuCollisionCallback(void);
// merged_840165F0;
// protected: virtual hkpWorldObject::~hkpWorldObject(void);
// merged_84016780;
// public: hkArray<class hkpProperty, struct hkContainerHeapAllocator>::~hkArray<class hkpProperty, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpProperty, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<class hkpProperty>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: hkArrayBase<class hkpProperty>::~hkArrayBase<class hkpProperty>(void);
// public: int hkArrayBase<class hkpProperty>::getCapacity(void) const;
// public: void hkArrayBase<class hkpProperty>::clear(void);
// public: static void hkArrayUtil::destruct<class hkpProperty>(class hkpProperty *, int, struct hkTraitBool<0>);
// public: int hkpMotion::getNumInactiveFrames(int);
// public: hkWorldOperation::ActivateEntity::ActivateEntity(void);
// public: hkWorldOperation::BaseOperation::BaseOperation(enum hkWorldOperation::Type);
// public: hkWorldOperation::DeactivateEntity::DeactivateEntity(void);
// public: class hkSmallArray<struct hkConstraintInternal> & hkpEntity::getConstraintMastersRw(void);
// public: class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> const & hkpEntity::getConstraintSlaves(void) const;
// public: `anonymous namespace'::cmpLessConstraint::cmpLessConstraint(class hkpEntity const *);
// public: hkEnum<enum hkWorldOperation::Type, unsigned char>::hkEnum<enum hkWorldOperation::Type, unsigned char>(enum hkWorldOperation::Type);
// public: hkSmallArray<class hkpContactListener *>::hkSmallArray<class hkpContactListener *>(void);
// public: hkSmallArray<class hkpContactListener *>::~hkSmallArray<class hkpContactListener *>(void);
// public: class hkpContactListener *& hkSmallArray<class hkpContactListener *>::operator[](int);
// public: int hkSmallArray<class hkpContactListener *>::indexOf(class hkpContactListener *const &) const;
// public: void hkSmallArray<class hkpContactListener *>::pushBack(class hkpContactListener *const &);
// public: void hkSmallArray<class hkpContactListener *>::clearAndDeallocate(void);
// public: hkSmallArray<struct hkConstraintInternal>::hkSmallArray<struct hkConstraintInternal>(void);
// public: hkSmallArray<struct hkConstraintInternal>::~hkSmallArray<struct hkConstraintInternal>(void);
// public: class hkBool hkSmallArray<struct hkConstraintInternal>::isEmpty(void) const;
// public: struct hkConstraintInternal & hkSmallArray<struct hkConstraintInternal>::operator[](int);
// public: void hkSmallArray<struct hkConstraintInternal>::clearAndDeallocate(void);
// public: hkSmallArray<class hkpAction *>::hkSmallArray<class hkpAction *>(void);
// public: hkSmallArray<class hkpAction *>::~hkSmallArray<class hkpAction *>(void);
// public: class hkBool hkSmallArray<class hkpAction *>::isEmpty(void) const;
// public: void hkSmallArray<class hkpAction *>::clearAndDeallocate(void);
// public: hkRefPtr<class hkLocalFrame>::hkRefPtr<class hkLocalFrame>(class hkFinishLoadedObjectFlag);
// public: hkRefPtr<class hkLocalFrame>::hkRefPtr<class hkLocalFrame>(void);
// public: hkRefPtr<class hkLocalFrame>::~hkRefPtr<class hkLocalFrame>(void);
// public: class hkBool hkArrayBase<class hkpConstraintInstance *>::isEmpty(void) const;
// public: class hkpConstraintInstance *const * hkArrayBase<class hkpConstraintInstance *>::begin(void) const;
// public: class hkpConstraintInstance ** hkArrayBase<class hkpConstraintInstance *>::begin(void);
// public: void hkStatisticsCollector::addSmallArray<class hkpContactListener *>(char const *, class hkSmallArray<class hkpContactListener *> const &);
// public: void hkStatisticsCollector::addSmallArray<class hkpEntityListener *>(char const *, class hkSmallArray<class hkpEntityListener *> const &);
// public: void hkStatisticsCollector::addSmallArray<class hkpEntityActivationListener *>(char const *, class hkSmallArray<class hkpEntityActivationListener *> const &);
// public: int hkSmallArray<class hkpEntityActivationListener *>::getSize(void) const;
// public: class hkpEntityActivationListener *& hkSmallArray<class hkpEntityActivationListener *>::operator[](int);
// public: int hkSmallArray<class hkpEntityActivationListener *>::indexOf(class hkpEntityActivationListener *const &) const;
// public: void hkSmallArray<class hkpEntityActivationListener *>::pushBack(class hkpEntityActivationListener *const &);
// public: void hkSmallArray<class hkpEntityActivationListener *>::clearAndDeallocate(void);
// public: int hkSmallArray<class hkpEntityListener *>::getSize(void) const;
// public: class hkpEntityListener *& hkSmallArray<class hkpEntityListener *>::operator[](int);
// public: void hkSmallArray<class hkpEntityListener *>::pushBack(class hkpEntityListener *const &);
// public: void hkSmallArray<class hkpEntityListener *>::clearAndDeallocate(void);
// public: static void hkCheckDeterminismUtil::checkMt<unsigned short>(int, unsigned short const &);
// void hkAlgorithm::quickSort<class hkpConstraintInstance *, class `anonymous namespace'::cmpLessConstraint>(class hkpConstraintInstance **, int, class `anonymous namespace'::cmpLessConstraint);
// public: int hkSmallArray<class hkpContactListener *>::getCapacity(void) const;
// public: class hkBool hkSmallArray<class hkpContactListener *>::isLocked(void);
// public: class hkpContactListener *const * hkSmallArray<class hkpContactListener *>::begin(void) const;
// protected: void hkSmallArray<class hkpContactListener *>::releaseMemory(void);
// protected: void hkSmallArray<struct hkConstraintInternal>::releaseMemory(void);
// protected: void hkSmallArray<class hkpAction *>::releaseMemory(void);
// public: class hkBool hkSmallArray<class hkpEntityListener *>::isLocked(void);
// public: class hkpEntityListener *const * hkSmallArray<class hkpEntityListener *>::begin(void) const;
// public: class hkBool hkSmallArray<class hkpEntityActivationListener *>::isLocked(void);
// public: class hkpEntityActivationListener *const * hkSmallArray<class hkpEntityActivationListener *>::begin(void) const;
// void hkAlgorithm::quickSortRecursive<class hkpConstraintInstance *, class `anonymous namespace'::cmpLessConstraint>(class hkpConstraintInstance **, int, int, class `anonymous namespace'::cmpLessConstraint);
// public: bool `anonymous namespace'::cmpLessConstraint::operator()(class hkpConstraintInstance *, class hkpConstraintInstance *);
// public: unsigned int hkpEntity::getUid(void) const;
// void hkDeallocateChunk<class hkpContactListener *>(class hkpContactListener **, int, int);
// public: int hkSmallArray<struct hkConstraintInternal>::getCapacity(void) const;
// void hkDeallocateChunk<struct hkConstraintInternal>(struct hkConstraintInternal *, int, int);
// public: int hkSmallArray<class hkpAction *>::getCapacity(void) const;
// void hkDeallocateChunk<class hkpAction *>(class hkpAction **, int, int);

//protected: hkpEntity::hkpEntity(class hkpShape const *)
//{
//    mangled_ppc("??0hkpEntity@@IAA@PBVhkpShape@@@Z");
//};

//public: hkpEntity::hkpEntity(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkpEntity@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: void hkpEntity::setCachedShapeData(class hkpWorld const *, class hkpShape const *)
//{
//    mangled_ppc("?setCachedShapeData@hkpEntity@@QAAXPBVhkpWorld@@PBVhkpShape@@@Z");
//};

//public: void hkpEntity::updateCachedAabb(void)
//{
//    mangled_ppc("?updateCachedAabb@hkpEntity@@QAAXXZ");
//};

//public: virtual void hkpEntity::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkpEntity@@UBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//public: virtual hkpEntity::~hkpEntity(void)
//{
//    mangled_ppc("??1hkpEntity@@UAA@XZ");
//};

//public: void hkpEntity::addEntityListener(class hkpEntityListener *)
//{
//    mangled_ppc("?addEntityListener@hkpEntity@@QAAXPAVhkpEntityListener@@@Z");
//};

//public: void hkpEntity::removeEntityListener(class hkpEntityListener *)
//{
//    mangled_ppc("?removeEntityListener@hkpEntity@@QAAXPAVhkpEntityListener@@@Z");
//};

//public: void hkpEntity::addEntityActivationListener(class hkpEntityActivationListener *)
//{
//    mangled_ppc("?addEntityActivationListener@hkpEntity@@QAAXPAVhkpEntityActivationListener@@@Z");
//};

//public: void hkpEntity::removeEntityActivationListener(class hkpEntityActivationListener *)
//{
//    mangled_ppc("?removeEntityActivationListener@hkpEntity@@QAAXPAVhkpEntityActivationListener@@@Z");
//};

//public: void hkpEntity::addContactListener(class hkpContactListener *)
//{
//    mangled_ppc("?addContactListener@hkpEntity@@QAAXPAVhkpContactListener@@@Z");
//};

//public: void hkpEntity::removeContactListener(class hkpContactListener *)
//{
//    mangled_ppc("?removeContactListener@hkpEntity@@QAAXPAVhkpContactListener@@@Z");
//};

//public: class hkpDynamicsContactMgr * hkpEntity::findContactMgrTo(class hkpEntity const *) const
//{
//    mangled_ppc("?findContactMgrTo@hkpEntity@@QBAPAVhkpDynamicsContactMgr@@PBV1@@Z");
//};

//public: class hkBool hkpEntity::isActive(void) const
//{
//    mangled_ppc("?isActive@hkpEntity@@QBA?AVhkBool@@XZ");
//};

//class hkBool hkEntity_isActive(class hkpEntity const *)
//{
//    mangled_ppc("?hkEntity_isActive@@YA?AVhkBool@@PBVhkpEntity@@@Z");
//};

//public: void hkpEntity::activate(void)
//{
//    mangled_ppc("?activate@hkpEntity@@QAAXXZ");
//};

//public: void hkpEntity::deactivate(void)
//{
//    mangled_ppc("?deactivate@hkpEntity@@QAAXXZ");
//};

//public: void hkpEntity::activateAsCriticalOperation(void)
//{
//    mangled_ppc("?activateAsCriticalOperation@hkpEntity@@QAAXXZ");
//};

//public: void hkpEntity::deactivateAsCriticalOperation(void)
//{
//    mangled_ppc("?deactivateAsCriticalOperation@hkpEntity@@QAAXXZ");
//};

//public: virtual void hkpEntity::deallocateInternalArrays(void)
//{
//    mangled_ppc("?deallocateInternalArrays@hkpEntity@@UAAXXZ");
//};

//public: int hkpEntity::getNumConstraints(void) const
//{
//    mangled_ppc("?getNumConstraints@hkpEntity@@QBAHXZ");
//};

//public: class hkpConstraintInstance * hkpEntity::getConstraint(int)
//{
//    mangled_ppc("?getConstraint@hkpEntity@@QAAPAVhkpConstraintInstance@@H@Z");
//};

//public: class hkpConstraintInstance const * hkpEntity::getConstraint(int) const
//{
//    mangled_ppc("?getConstraint@hkpEntity@@QBAPBVhkpConstraintInstance@@H@Z");
//};

//public: void hkpEntity::getAllConstraints(class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?getAllConstraints@hkpEntity@@QAAXAAV?$hkArray@PAVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@@Z");
//};

//protected: class hkSmallArray<struct hkConstraintInternal> const & hkpEntity::getConstraintMastersImpl(void) const
//{
//    mangled_ppc("?getConstraintMastersImpl@hkpEntity@@IBAABV?$hkSmallArray@UhkConstraintInternal@@@@XZ");
//};

//protected: class hkSmallArray<struct hkConstraintInternal> & hkpEntity::getConstraintMastersRwImpl(void)
//{
//    mangled_ppc("?getConstraintMastersRwImpl@hkpEntity@@IAAAAV?$hkSmallArray@UhkConstraintInternal@@@@XZ");
//};

//protected: class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> const & hkpEntity::getConstraintSlavesImpl(void) const
//{
//    mangled_ppc("?getConstraintSlavesImpl@hkpEntity@@IBAABV?$hkArray@PAVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@XZ");
//};

//public: void hkpEntity::sortConstraintsSlavesDeterministically(void)
//{
//    mangled_ppc("?sortConstraintsSlavesDeterministically@hkpEntity@@QAAXXZ");
//};

//public: hkpMaterial::hkpMaterial(void)
//{
//    mangled_ppc("??0hkpMaterial@@QAA@XZ");
//};

//public: hkpMaxSizeMotion::hkpMaxSizeMotion(void)
//{
//    mangled_ppc("??0hkpMaxSizeMotion@@QAA@XZ");
//};

//protected: hkpKeyframedRigidMotion::hkpKeyframedRigidMotion(void)
//{
//    mangled_ppc("??0hkpKeyframedRigidMotion@@IAA@XZ");
//};

//public: virtual class hkMotionState * hkpEntity::getMotionState(void)
//{
//    mangled_ppc("?getMotionState@hkpEntity@@UAAPAVhkMotionState@@XZ");
//};

//public: hkpEntity::SpuCollisionCallback::SpuCollisionCallback(void)
//{
//    mangled_ppc("??0SpuCollisionCallback@hkpEntity@@QAA@XZ");
//};

//merged_840165F0
//{
//    mangled_ppc("merged_840165F0");
//};

//protected: virtual hkpWorldObject::~hkpWorldObject(void)
//{
//    mangled_ppc("??1hkpWorldObject@@MAA@XZ");
//};

//merged_84016780
//{
//    mangled_ppc("merged_84016780");
//};

//public: hkArray<class hkpProperty, struct hkContainerHeapAllocator>::~hkArray<class hkpProperty, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@VhkpProperty@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpProperty, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@VhkpProperty@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpProperty>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@VhkpProperty@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: hkArrayBase<class hkpProperty>::~hkArrayBase<class hkpProperty>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@VhkpProperty@@@@QAA@XZ");
//};

//public: int hkArrayBase<class hkpProperty>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@VhkpProperty@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpProperty>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@VhkpProperty@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<class hkpProperty>(class hkpProperty *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@VhkpProperty@@@hkArrayUtil@@SAXPAVhkpProperty@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkpMotion::getNumInactiveFrames(int)
//{
//    mangled_ppc("?getNumInactiveFrames@hkpMotion@@QAAHH@Z");
//};

//public: hkWorldOperation::ActivateEntity::ActivateEntity(void)
//{
//    mangled_ppc("??0ActivateEntity@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::BaseOperation::BaseOperation(enum hkWorldOperation::Type)
//{
//    mangled_ppc("??0BaseOperation@hkWorldOperation@@QAA@W4Type@1@@Z");
//};

//public: hkWorldOperation::DeactivateEntity::DeactivateEntity(void)
//{
//    mangled_ppc("??0DeactivateEntity@hkWorldOperation@@QAA@XZ");
//};

//public: class hkSmallArray<struct hkConstraintInternal> & hkpEntity::getConstraintMastersRw(void)
//{
//    mangled_ppc("?getConstraintMastersRw@hkpEntity@@QAAAAV?$hkSmallArray@UhkConstraintInternal@@@@XZ");
//};

//public: class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> const & hkpEntity::getConstraintSlaves(void) const
//{
//    mangled_ppc("?getConstraintSlaves@hkpEntity@@QBAABV?$hkArray@PAVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@XZ");
//};

//public: `anonymous namespace'::cmpLessConstraint::cmpLessConstraint(class hkpEntity const *)
//{
//    mangled_ppc("??0cmpLessConstraint@?A0x74b8a98e@@QAA@PBVhkpEntity@@@Z");
//};

//public: hkEnum<enum hkWorldOperation::Type, unsigned char>::hkEnum<enum hkWorldOperation::Type, unsigned char>(enum hkWorldOperation::Type)
//{
//    mangled_ppc("??0?$hkEnum@W4Type@hkWorldOperation@@E@@QAA@W4Type@hkWorldOperation@@@Z");
//};

//public: hkSmallArray<class hkpContactListener *>::hkSmallArray<class hkpContactListener *>(void)
//{
//    mangled_ppc("??0?$hkSmallArray@PAVhkpContactListener@@@@QAA@XZ");
//};

//public: hkSmallArray<class hkpContactListener *>::~hkSmallArray<class hkpContactListener *>(void)
//{
//    mangled_ppc("??1?$hkSmallArray@PAVhkpContactListener@@@@QAA@XZ");
//};

//public: class hkpContactListener *& hkSmallArray<class hkpContactListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkSmallArray@PAVhkpContactListener@@@@QAAAAPAVhkpContactListener@@H@Z");
//};

//public: int hkSmallArray<class hkpContactListener *>::indexOf(class hkpContactListener *const &) const
//{
//    mangled_ppc("?indexOf@?$hkSmallArray@PAVhkpContactListener@@@@QBAHABQAVhkpContactListener@@@Z");
//};

//public: void hkSmallArray<class hkpContactListener *>::pushBack(class hkpContactListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkSmallArray@PAVhkpContactListener@@@@QAAXABQAVhkpContactListener@@@Z");
//};

//public: void hkSmallArray<class hkpContactListener *>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkSmallArray@PAVhkpContactListener@@@@QAAXXZ");
//};

//public: hkSmallArray<struct hkConstraintInternal>::hkSmallArray<struct hkConstraintInternal>(void)
//{
//    mangled_ppc("??0?$hkSmallArray@UhkConstraintInternal@@@@QAA@XZ");
//};

//public: hkSmallArray<struct hkConstraintInternal>::~hkSmallArray<struct hkConstraintInternal>(void)
//{
//    mangled_ppc("??1?$hkSmallArray@UhkConstraintInternal@@@@QAA@XZ");
//};

//public: class hkBool hkSmallArray<struct hkConstraintInternal>::isEmpty(void) const
//{
//    mangled_ppc("?isEmpty@?$hkSmallArray@UhkConstraintInternal@@@@QBA?AVhkBool@@XZ");
//};

//public: struct hkConstraintInternal & hkSmallArray<struct hkConstraintInternal>::operator[](int)
//{
//    mangled_ppc("??A?$hkSmallArray@UhkConstraintInternal@@@@QAAAAUhkConstraintInternal@@H@Z");
//};

//public: void hkSmallArray<struct hkConstraintInternal>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkSmallArray@UhkConstraintInternal@@@@QAAXXZ");
//};

//public: hkSmallArray<class hkpAction *>::hkSmallArray<class hkpAction *>(void)
//{
//    mangled_ppc("??0?$hkSmallArray@PAVhkpAction@@@@QAA@XZ");
//};

//public: hkSmallArray<class hkpAction *>::~hkSmallArray<class hkpAction *>(void)
//{
//    mangled_ppc("??1?$hkSmallArray@PAVhkpAction@@@@QAA@XZ");
//};

//public: class hkBool hkSmallArray<class hkpAction *>::isEmpty(void) const
//{
//    mangled_ppc("?isEmpty@?$hkSmallArray@PAVhkpAction@@@@QBA?AVhkBool@@XZ");
//};

//public: void hkSmallArray<class hkpAction *>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkSmallArray@PAVhkpAction@@@@QAAXXZ");
//};

//public: hkRefPtr<class hkLocalFrame>::hkRefPtr<class hkLocalFrame>(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0?$hkRefPtr@VhkLocalFrame@@@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//public: hkRefPtr<class hkLocalFrame>::hkRefPtr<class hkLocalFrame>(void)
//{
//    mangled_ppc("??0?$hkRefPtr@VhkLocalFrame@@@@QAA@XZ");
//};

//public: hkRefPtr<class hkLocalFrame>::~hkRefPtr<class hkLocalFrame>(void)
//{
//    mangled_ppc("??1?$hkRefPtr@VhkLocalFrame@@@@QAA@XZ");
//};

//public: class hkBool hkArrayBase<class hkpConstraintInstance *>::isEmpty(void) const
//{
//    mangled_ppc("?isEmpty@?$hkArrayBase@PAVhkpConstraintInstance@@@@QBA?AVhkBool@@XZ");
//};

//public: class hkpConstraintInstance *const * hkArrayBase<class hkpConstraintInstance *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpConstraintInstance@@@@QBAPBQAVhkpConstraintInstance@@XZ");
//};

//public: class hkpConstraintInstance ** hkArrayBase<class hkpConstraintInstance *>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkpConstraintInstance@@@@QAAPAPAVhkpConstraintInstance@@XZ");
//};

//public: void hkStatisticsCollector::addSmallArray<class hkpContactListener *>(char const *, class hkSmallArray<class hkpContactListener *> const &)
//{
//    mangled_ppc("??$addSmallArray@PAVhkpContactListener@@@hkStatisticsCollector@@QAAXPBDABV?$hkSmallArray@PAVhkpContactListener@@@@@Z");
//};

//public: void hkStatisticsCollector::addSmallArray<class hkpEntityListener *>(char const *, class hkSmallArray<class hkpEntityListener *> const &)
//{
//    mangled_ppc("??$addSmallArray@PAVhkpEntityListener@@@hkStatisticsCollector@@QAAXPBDABV?$hkSmallArray@PAVhkpEntityListener@@@@@Z");
//};

//public: void hkStatisticsCollector::addSmallArray<class hkpEntityActivationListener *>(char const *, class hkSmallArray<class hkpEntityActivationListener *> const &)
//{
//    mangled_ppc("??$addSmallArray@PAVhkpEntityActivationListener@@@hkStatisticsCollector@@QAAXPBDABV?$hkSmallArray@PAVhkpEntityActivationListener@@@@@Z");
//};

//public: int hkSmallArray<class hkpEntityActivationListener *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkSmallArray@PAVhkpEntityActivationListener@@@@QBAHXZ");
//};

//public: class hkpEntityActivationListener *& hkSmallArray<class hkpEntityActivationListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkSmallArray@PAVhkpEntityActivationListener@@@@QAAAAPAVhkpEntityActivationListener@@H@Z");
//};

//public: int hkSmallArray<class hkpEntityActivationListener *>::indexOf(class hkpEntityActivationListener *const &) const
//{
//    mangled_ppc("?indexOf@?$hkSmallArray@PAVhkpEntityActivationListener@@@@QBAHABQAVhkpEntityActivationListener@@@Z");
//};

//public: void hkSmallArray<class hkpEntityActivationListener *>::pushBack(class hkpEntityActivationListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkSmallArray@PAVhkpEntityActivationListener@@@@QAAXABQAVhkpEntityActivationListener@@@Z");
//};

//public: void hkSmallArray<class hkpEntityActivationListener *>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkSmallArray@PAVhkpEntityActivationListener@@@@QAAXXZ");
//};

//public: int hkSmallArray<class hkpEntityListener *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkSmallArray@PAVhkpEntityListener@@@@QBAHXZ");
//};

//public: class hkpEntityListener *& hkSmallArray<class hkpEntityListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkSmallArray@PAVhkpEntityListener@@@@QAAAAPAVhkpEntityListener@@H@Z");
//};

//public: void hkSmallArray<class hkpEntityListener *>::pushBack(class hkpEntityListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkSmallArray@PAVhkpEntityListener@@@@QAAXABQAVhkpEntityListener@@@Z");
//};

//public: void hkSmallArray<class hkpEntityListener *>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkSmallArray@PAVhkpEntityListener@@@@QAAXXZ");
//};

//public: static void hkCheckDeterminismUtil::checkMt<unsigned short>(int, unsigned short const &)
//{
//    mangled_ppc("??$checkMt@G@hkCheckDeterminismUtil@@SAXHABG@Z");
//};

//void hkAlgorithm::quickSort<class hkpConstraintInstance *, class `anonymous namespace'::cmpLessConstraint>(class hkpConstraintInstance **, int, class `anonymous namespace'::cmpLessConstraint)
//{
//    mangled_ppc("??$quickSort@PAVhkpConstraintInstance@@VcmpLessConstraint@?A0x74b8a98e@@@hkAlgorithm@@YAXPAPAVhkpConstraintInstance@@HVcmpLessConstraint@?A0x74b8a98e@@@Z");
//};

//public: int hkSmallArray<class hkpContactListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkSmallArray@PAVhkpContactListener@@@@QBAHXZ");
//};

//public: class hkBool hkSmallArray<class hkpContactListener *>::isLocked(void)
//{
//    mangled_ppc("?isLocked@?$hkSmallArray@PAVhkpContactListener@@@@QAA?AVhkBool@@XZ");
//};

//public: class hkpContactListener *const * hkSmallArray<class hkpContactListener *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkSmallArray@PAVhkpContactListener@@@@QBAPBQAVhkpContactListener@@XZ");
//};

//protected: void hkSmallArray<class hkpContactListener *>::releaseMemory(void)
//{
//    mangled_ppc("?releaseMemory@?$hkSmallArray@PAVhkpContactListener@@@@IAAXXZ");
//};

//protected: void hkSmallArray<struct hkConstraintInternal>::releaseMemory(void)
//{
//    mangled_ppc("?releaseMemory@?$hkSmallArray@UhkConstraintInternal@@@@IAAXXZ");
//};

//protected: void hkSmallArray<class hkpAction *>::releaseMemory(void)
//{
//    mangled_ppc("?releaseMemory@?$hkSmallArray@PAVhkpAction@@@@IAAXXZ");
//};

//public: class hkBool hkSmallArray<class hkpEntityListener *>::isLocked(void)
//{
//    mangled_ppc("?isLocked@?$hkSmallArray@PAVhkpEntityListener@@@@QAA?AVhkBool@@XZ");
//};

//public: class hkpEntityListener *const * hkSmallArray<class hkpEntityListener *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkSmallArray@PAVhkpEntityListener@@@@QBAPBQAVhkpEntityListener@@XZ");
//};

//public: class hkBool hkSmallArray<class hkpEntityActivationListener *>::isLocked(void)
//{
//    mangled_ppc("?isLocked@?$hkSmallArray@PAVhkpEntityActivationListener@@@@QAA?AVhkBool@@XZ");
//};

//public: class hkpEntityActivationListener *const * hkSmallArray<class hkpEntityActivationListener *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkSmallArray@PAVhkpEntityActivationListener@@@@QBAPBQAVhkpEntityActivationListener@@XZ");
//};

//void hkAlgorithm::quickSortRecursive<class hkpConstraintInstance *, class `anonymous namespace'::cmpLessConstraint>(class hkpConstraintInstance **, int, int, class `anonymous namespace'::cmpLessConstraint)
//{
//    mangled_ppc("??$quickSortRecursive@PAVhkpConstraintInstance@@VcmpLessConstraint@?A0x74b8a98e@@@hkAlgorithm@@YAXPAPAVhkpConstraintInstance@@HHVcmpLessConstraint@?A0x74b8a98e@@@Z");
//};

//public: bool `anonymous namespace'::cmpLessConstraint::operator()(class hkpConstraintInstance *, class hkpConstraintInstance *)
//{
//    mangled_ppc("??RcmpLessConstraint@?A0x74b8a98e@@QAA_NPAVhkpConstraintInstance@@0@Z");
//};

//public: unsigned int hkpEntity::getUid(void) const
//{
//    mangled_ppc("?getUid@hkpEntity@@QBAIXZ");
//};

//void hkDeallocateChunk<class hkpContactListener *>(class hkpContactListener **, int, int)
//{
//    mangled_ppc("??$hkDeallocateChunk@PAVhkpContactListener@@@@YAXPAPAVhkpContactListener@@HH@Z");
//};

//public: int hkSmallArray<struct hkConstraintInternal>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkSmallArray@UhkConstraintInternal@@@@QBAHXZ");
//};

//void hkDeallocateChunk<struct hkConstraintInternal>(struct hkConstraintInternal *, int, int)
//{
//    mangled_ppc("??$hkDeallocateChunk@UhkConstraintInternal@@@@YAXPAUhkConstraintInternal@@HH@Z");
//};

//public: int hkSmallArray<class hkpAction *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkSmallArray@PAVhkpAction@@@@QBAHXZ");
//};

//void hkDeallocateChunk<class hkpAction *>(class hkpAction **, int, int)
//{
//    mangled_ppc("??$hkDeallocateChunk@PAVhkpAction@@@@YAXPAPAVhkpAction@@HH@Z");
//};

