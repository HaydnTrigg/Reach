/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: unsigned short hkpSimpleContactConstraintData::allocateContactPoint(class hkpConstraintOwner &, class hkContactPoint **, class hkpContactPointProperties **);
// private: hkpSimpleContactConstraintData::hkpSimpleContactConstraintData(class hkpConstraintInstance *, class hkpRigidBody *, class hkpRigidBody *);
// public: virtual void hkpSimpleContactConstraintData::getConstraintInfo(struct hkpConstraintData::ConstraintInfo &) const;
// public: virtual void hkpSimpleContactConstraintData::getRuntimeInfo(class hkBool, struct hkpConstraintData::RuntimeInfo &) const;
// public: virtual class hkpSolverResults * hkpSimpleContactConstraintData::getSolverResults(void *);
// public: class hkpSimpleConstraintContactMgr * hkpSimpleContactConstraintData::getSimpleConstraintContactMgr(void) const;
// void hkSimpleContactConstraintData_fireCallbacks(class hkpSimpleContactConstraintData *, class hkpConstraintQueryIn const *, struct hkpSimpleContactConstraintAtom *, enum hkpContactPointEvent::Type);
// void checkVelocitiesUpdated(class hkpRigidBody *, class hkpVelocityAccumulator *, class hkVector4&, class hkVector4&);
// public: virtual void hkpSimpleContactConstraintData::collisionResponseBeginCallback(class hkContactPoint const &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &);
// public: virtual void hkpSimpleContactConstraintData::collisionResponseEndCallback(class hkContactPoint const &, float, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &);
// public: virtual class hkBool hkpSimpleContactConstraintData::isValid(void) const;
// public: virtual int hkpSimpleContactConstraintData::getType(void) const;
// public: int hkpDynamicsCpIdMgr::newId(int);
// public: hkpDynamicsCpIdMgr::hkpDynamicsCpIdMgr(void);
// public: class hkVector4const & hkpVelocityAccumulator::getCenterOfMassInWorld(void) const;
// public: float hkContactPointMaterial::getMaxImpulsePerStep(void);
// float hkMath::fselectGreaterZero(float, float, float);
// public: class hkpVelocityAccumulator const * hkPadSpu<class hkpVelocityAccumulator const *>::operator->(void) const;
// public: hkInplaceArray<struct hkpConstraintAtom *, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpConstraintAtom *, 16, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkpConstraintAtom *, struct hkContainerHeapAllocator>::pushBack(struct hkpConstraintAtom *const &);
// public: hkInplaceArray<unsigned char, 8, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned char, 8, struct hkContainerHeapAllocator>(int);
// class hkpSimpleContactConstraintData const * hkAddByteOffsetConst<class hkpSimpleContactConstraintData>(class hkpSimpleContactConstraintData const *, long);
// public: struct hkpConstraintAtom *& hkArrayBase<struct hkpConstraintAtom *>::operator[](int);
// public: int hkArrayBase<struct hkpConstraintAtom *>::getSize(void) const;
// public: void hkArrayBase<struct hkpConstraintAtom *>::_pushBack(class hkMemoryAllocator &, struct hkpConstraintAtom *const &);
// public: hkArray<struct hkpConstraintAtom *, struct hkContainerHeapAllocator>::~hkArray<struct hkpConstraintAtom *, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<struct hkpConstraintAtom *, 16, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpConstraintAtom *, 16, struct hkContainerHeapAllocator>(int);
// public: hkArray<struct hkpConstraintAtom *, struct hkContainerHeapAllocator>::hkArray<struct hkpConstraintAtom *, struct hkContainerHeapAllocator>(struct hkpConstraintAtom **, int, int);
// public: void hkArray<struct hkpConstraintAtom *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArrayBase<struct hkpConstraintAtom *>::hkArrayBase<struct hkpConstraintAtom *>(struct hkpConstraintAtom **, int, int);
// public: hkArrayBase<struct hkpConstraintAtom *>::~hkArrayBase<struct hkpConstraintAtom *>(void);
// public: int hkArrayBase<struct hkpConstraintAtom *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpConstraintAtom *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<struct hkpConstraintAtom *>(struct hkpConstraintAtom **, int, struct hkpConstraintAtom *const &, struct hkTraitBool<1>);
// public: void hkArrayBase<struct hkpConstraintAtom *>::clear(void);
// public: static void hkArrayUtil::destruct<struct hkpConstraintAtom *>(struct hkpConstraintAtom **, int, struct hkTraitBool<1>);

//public: unsigned short hkpSimpleContactConstraintData::allocateContactPoint(class hkpConstraintOwner &, class hkContactPoint **, class hkpContactPointProperties **)
//{
//    mangled_ppc("?allocateContactPoint@hkpSimpleContactConstraintData@@QAAGAAVhkpConstraintOwner@@PAPAVhkContactPoint@@PAPAVhkpContactPointProperties@@@Z");
//};

//private: hkpSimpleContactConstraintData::hkpSimpleContactConstraintData(class hkpConstraintInstance *, class hkpRigidBody *, class hkpRigidBody *)
//{
//    mangled_ppc("??0hkpSimpleContactConstraintData@@AAA@PAVhkpConstraintInstance@@PAVhkpRigidBody@@1@Z");
//};

//public: virtual void hkpSimpleContactConstraintData::getConstraintInfo(struct hkpConstraintData::ConstraintInfo &) const
//{
//    mangled_ppc("?getConstraintInfo@hkpSimpleContactConstraintData@@UBAXAAUConstraintInfo@hkpConstraintData@@@Z");
//};

//public: virtual void hkpSimpleContactConstraintData::getRuntimeInfo(class hkBool, struct hkpConstraintData::RuntimeInfo &) const
//{
//    mangled_ppc("?getRuntimeInfo@hkpSimpleContactConstraintData@@UBAXVhkBool@@AAURuntimeInfo@hkpConstraintData@@@Z");
//};

//public: virtual class hkpSolverResults * hkpSimpleContactConstraintData::getSolverResults(void *)
//{
//    mangled_ppc("?getSolverResults@hkpSimpleContactConstraintData@@UAAPAVhkpSolverResults@@PAX@Z");
//};

//public: class hkpSimpleConstraintContactMgr * hkpSimpleContactConstraintData::getSimpleConstraintContactMgr(void) const
//{
//    mangled_ppc("?getSimpleConstraintContactMgr@hkpSimpleContactConstraintData@@QBAPAVhkpSimpleConstraintContactMgr@@XZ");
//};

//void hkSimpleContactConstraintData_fireCallbacks(class hkpSimpleContactConstraintData *, class hkpConstraintQueryIn const *, struct hkpSimpleContactConstraintAtom *, enum hkpContactPointEvent::Type)
//{
//    mangled_ppc("?hkSimpleContactConstraintData_fireCallbacks@@YAXPAVhkpSimpleContactConstraintData@@PBVhkpConstraintQueryIn@@PAUhkpSimpleContactConstraintAtom@@W4Type@hkpContactPointEvent@@@Z");
//};

//void checkVelocitiesUpdated(class hkpRigidBody *, class hkpVelocityAccumulator *, class hkVector4&, class hkVector4&)
//{
//    mangled_ppc("?checkVelocitiesUpdated@@YAXPAVhkpRigidBody@@PAVhkpVelocityAccumulator@@AAVhkVector4@@2@Z");
//};

//public: virtual void hkpSimpleContactConstraintData::collisionResponseBeginCallback(class hkContactPoint const &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &)
//{
//    mangled_ppc("?collisionResponseBeginCallback@hkpSimpleContactConstraintData@@UAAXABVhkContactPoint@@AAUhkpSimpleConstraintInfoInitInput@@AAUhkpBodyVelocity@@12@Z");
//};

//public: virtual void hkpSimpleContactConstraintData::collisionResponseEndCallback(class hkContactPoint const &, float, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &)
//{
//    mangled_ppc("?collisionResponseEndCallback@hkpSimpleContactConstraintData@@UAAXABVhkContactPoint@@MAAUhkpSimpleConstraintInfoInitInput@@AAUhkpBodyVelocity@@12@Z");
//};

//public: virtual class hkBool hkpSimpleContactConstraintData::isValid(void) const
//{
//    mangled_ppc("?isValid@hkpSimpleContactConstraintData@@UBA?AVhkBool@@XZ");
//};

//public: virtual int hkpSimpleContactConstraintData::getType(void) const
//{
//    mangled_ppc("?getType@hkpSimpleContactConstraintData@@UBAHXZ");
//};

//public: int hkpDynamicsCpIdMgr::newId(int)
//{
//    mangled_ppc("?newId@hkpDynamicsCpIdMgr@@QAAHH@Z");
//};

//public: hkpDynamicsCpIdMgr::hkpDynamicsCpIdMgr(void)
//{
//    mangled_ppc("??0hkpDynamicsCpIdMgr@@QAA@XZ");
//};

//public: class hkVector4const & hkpVelocityAccumulator::getCenterOfMassInWorld(void) const
//{
//    mangled_ppc("?getCenterOfMassInWorld@hkpVelocityAccumulator@@QBAABVhkVector4@@XZ");
//};

//public: float hkContactPointMaterial::getMaxImpulsePerStep(void)
//{
//    mangled_ppc("?getMaxImpulsePerStep@hkContactPointMaterial@@QAAMXZ");
//};

//float hkMath::fselectGreaterZero(float, float, float)
//{
//    mangled_ppc("?fselectGreaterZero@hkMath@@YAMMMM@Z");
//};

//public: class hkpVelocityAccumulator const * hkPadSpu<class hkpVelocityAccumulator const *>::operator->(void) const
//{
//    mangled_ppc("??C?$hkPadSpu@PBVhkpVelocityAccumulator@@@@QBAPBVhkpVelocityAccumulator@@XZ");
//};

//public: hkInplaceArray<struct hkpConstraintAtom *, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkpConstraintAtom *, 16, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@PAUhkpConstraintAtom@@$0BA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpConstraintAtom *, struct hkContainerHeapAllocator>::pushBack(struct hkpConstraintAtom *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUhkpConstraintAtom@@UhkContainerHeapAllocator@@@@QAAXABQAUhkpConstraintAtom@@@Z");
//};

//public: hkInplaceArray<unsigned char, 8, struct hkContainerHeapAllocator>::hkInplaceArray<unsigned char, 8, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@E$07UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//class hkpSimpleContactConstraintData const * hkAddByteOffsetConst<class hkpSimpleContactConstraintData>(class hkpSimpleContactConstraintData const *, long)
//{
//    mangled_ppc("??$hkAddByteOffsetConst@VhkpSimpleContactConstraintData@@@@YAPBVhkpSimpleContactConstraintData@@PBV0@J@Z");
//};

//public: struct hkpConstraintAtom *& hkArrayBase<struct hkpConstraintAtom *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAUhkpConstraintAtom@@@@QAAAAPAUhkpConstraintAtom@@H@Z");
//};

//public: int hkArrayBase<struct hkpConstraintAtom *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAUhkpConstraintAtom@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpConstraintAtom *>::_pushBack(class hkMemoryAllocator &, struct hkpConstraintAtom *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUhkpConstraintAtom@@@@QAAXAAVhkMemoryAllocator@@ABQAUhkpConstraintAtom@@@Z");
//};

//public: hkArray<struct hkpConstraintAtom *, struct hkContainerHeapAllocator>::~hkArray<struct hkpConstraintAtom *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAUhkpConstraintAtom@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<struct hkpConstraintAtom *, 16, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkpConstraintAtom *, 16, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@PAUhkpConstraintAtom@@$0BA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkArray<struct hkpConstraintAtom *, struct hkContainerHeapAllocator>::hkArray<struct hkpConstraintAtom *, struct hkContainerHeapAllocator>(struct hkpConstraintAtom **, int, int)
//{
//    mangled_ppc("??0?$hkArray@PAUhkpConstraintAtom@@UhkContainerHeapAllocator@@@@QAA@PAPAUhkpConstraintAtom@@HH@Z");
//};

//public: void hkArray<struct hkpConstraintAtom *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAUhkpConstraintAtom@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArrayBase<struct hkpConstraintAtom *>::hkArrayBase<struct hkpConstraintAtom *>(struct hkpConstraintAtom **, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@PAUhkpConstraintAtom@@@@QAA@PAPAUhkpConstraintAtom@@HH@Z");
//};

//public: hkArrayBase<struct hkpConstraintAtom *>::~hkArrayBase<struct hkpConstraintAtom *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAUhkpConstraintAtom@@@@QAA@XZ");
//};

//public: int hkArrayBase<struct hkpConstraintAtom *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUhkpConstraintAtom@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpConstraintAtom *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAUhkpConstraintAtom@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkpConstraintAtom *>(struct hkpConstraintAtom **, int, struct hkpConstraintAtom *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUhkpConstraintAtom@@@hkArrayUtil@@SAXPAPAUhkpConstraintAtom@@HABQAU1@U?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<struct hkpConstraintAtom *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUhkpConstraintAtom@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkpConstraintAtom *>(struct hkpConstraintAtom **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUhkpConstraintAtom@@@hkArrayUtil@@SAXPAPAUhkpConstraintAtom@@HU?$hkTraitBool@$00@@@Z");
//};

