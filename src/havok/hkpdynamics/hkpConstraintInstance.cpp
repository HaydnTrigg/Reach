/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkpConstraintInstance::hkpConstraintInstance(class hkpEntity *, class hkpEntity *, class hkpConstraintData *, enum hkpConstraintInstance::ConstraintPriority);
// protected: hkpConstraintInstance::hkpConstraintInstance(enum hkpConstraintInstance::ConstraintPriority);
// public: void hkpConstraintInstance::setPriority(enum hkpConstraintInstance::ConstraintPriority);
// public: class hkpSimulationIsland * hkpConstraintInstance::getSimulationIsland(void);
// public: virtual void hkpConstraintInstance::entityAddedCallback(class hkpEntity *);
// public: virtual void hkpConstraintInstance::entityDeletedCallback(class hkpEntity *);
// public: virtual void hkpConstraintInstance::entityRemovedCallback(class hkpEntity *);
// public: class hkpConstraintInstance * hkpConstraintInstance::clone(class hkpEntity *, class hkpEntity *, enum hkpConstraintInstance::CloningMode) const;
// public: virtual hkpConstraintInstance::~hkpConstraintInstance(void);
// public: void hkpConstraintInstance::addConstraintListener(class hkpConstraintListener *);
// public: void hkpConstraintInstance::removeConstraintListener(class hkpConstraintListener *);
// public: void hkpConstraintInstance::transform(class hkTransform const &);
// public: void hkpConstraintInstance::pointNullsToFixedRigidBody(void);
// public: class hkBool hkpConstraintInstance::isConstrainedToWorld(void) const;
// public: void hkpConstraintInstance::getPivotsInWorld(class hkVector4&, class hkVector4&) const;
// public: void hkpConstraintInstance::setVirtualMassInverse(class hkVector4const &, class hkVector4const &);
// public: void hkpConstraintInstance::enable(void);
// public: void hkpConstraintInstance::disable(void);
// public: void hkpConstraintInstance::setEnabled(class hkBool);
// public: class hkBool hkpConstraintInstance::isEnabled(void);
// public: void hkpConstraintInstance::replaceEntity(class hkpEntity *, class hkpEntity *);
// public: void hkpConstraintInstance::setFixedRigidBodyPointersToZero(class hkpWorld *);
// public: void hkpStiffSpringConstraintData::setInBodySpace(class hkVector4const &, class hkVector4const &, float);
// public: static void * hkpMassChangerModifierConstraintAtom::operator new(unsigned int);
// public: hkpMassChangerModifierConstraintAtom::hkpMassChangerModifierConstraintAtom(void);
// protected: hkpModifierConstraintAtom::hkpModifierConstraintAtom(enum hkpConstraintAtom::AtomType, int);
// public: hkEnum<enum hkpConstraintInstance::ConstraintPriority, unsigned char>::hkEnum<enum hkpConstraintInstance::ConstraintPriority, unsigned char>(enum hkpConstraintInstance::ConstraintPriority);
// public: void hkEnum<enum hkpConstraintInstance::ConstraintPriority, unsigned char>::operator=(enum hkpConstraintInstance::ConstraintPriority);
// public: hkEnum<enum hkpConstraintInstance::OnDestructionRemapInfo, unsigned char>::hkEnum<enum hkpConstraintInstance::OnDestructionRemapInfo, unsigned char>(enum hkpConstraintInstance::OnDestructionRemapInfo);
// public: class hkpConstraintListener *& hkSmallArray<class hkpConstraintListener *>::operator[](int);
// public: int hkSmallArray<class hkpConstraintListener *>::indexOf(class hkpConstraintListener *const &) const;
// public: void hkSmallArray<class hkpConstraintListener *>::pushBack(class hkpConstraintListener *const &);
// public: class hkBool hkSmallArray<class hkpConstraintListener *>::isLocked(void);
// public: hkSmallArray<class hkpConstraintListener *>::~hkSmallArray<class hkpConstraintListener *>(void);
// protected: void hkSmallArray<class hkpConstraintListener *>::releaseMemory(void);
// public: int hkSmallArray<class hkpConstraintListener *>::getCapacity(void) const;
// void hkDeallocateChunk<class hkpConstraintListener *>(class hkpConstraintListener **, int, int);

//public: hkpConstraintInstance::hkpConstraintInstance(class hkpEntity *, class hkpEntity *, class hkpConstraintData *, enum hkpConstraintInstance::ConstraintPriority)
//{
//    mangled_ppc("??0hkpConstraintInstance@@QAA@PAVhkpEntity@@0PAVhkpConstraintData@@W4ConstraintPriority@0@@Z");
//};

//protected: hkpConstraintInstance::hkpConstraintInstance(enum hkpConstraintInstance::ConstraintPriority)
//{
//    mangled_ppc("??0hkpConstraintInstance@@IAA@W4ConstraintPriority@0@@Z");
//};

//public: void hkpConstraintInstance::setPriority(enum hkpConstraintInstance::ConstraintPriority)
//{
//    mangled_ppc("?setPriority@hkpConstraintInstance@@QAAXW4ConstraintPriority@1@@Z");
//};

//public: class hkpSimulationIsland * hkpConstraintInstance::getSimulationIsland(void)
//{
//    mangled_ppc("?getSimulationIsland@hkpConstraintInstance@@QAAPAVhkpSimulationIsland@@XZ");
//};

//public: virtual void hkpConstraintInstance::entityAddedCallback(class hkpEntity *)
//{
//    mangled_ppc("?entityAddedCallback@hkpConstraintInstance@@UAAXPAVhkpEntity@@@Z");
//};

//public: virtual void hkpConstraintInstance::entityDeletedCallback(class hkpEntity *)
//{
//    mangled_ppc("?entityDeletedCallback@hkpConstraintInstance@@UAAXPAVhkpEntity@@@Z");
//};

//public: virtual void hkpConstraintInstance::entityRemovedCallback(class hkpEntity *)
//{
//    mangled_ppc("?entityRemovedCallback@hkpConstraintInstance@@UAAXPAVhkpEntity@@@Z");
//};

//public: class hkpConstraintInstance * hkpConstraintInstance::clone(class hkpEntity *, class hkpEntity *, enum hkpConstraintInstance::CloningMode) const
//{
//    mangled_ppc("?clone@hkpConstraintInstance@@QBAPAV1@PAVhkpEntity@@0W4CloningMode@1@@Z");
//};

//public: virtual hkpConstraintInstance::~hkpConstraintInstance(void)
//{
//    mangled_ppc("??1hkpConstraintInstance@@UAA@XZ");
//};

//public: void hkpConstraintInstance::addConstraintListener(class hkpConstraintListener *)
//{
//    mangled_ppc("?addConstraintListener@hkpConstraintInstance@@QAAXPAVhkpConstraintListener@@@Z");
//};

//public: void hkpConstraintInstance::removeConstraintListener(class hkpConstraintListener *)
//{
//    mangled_ppc("?removeConstraintListener@hkpConstraintInstance@@QAAXPAVhkpConstraintListener@@@Z");
//};

//public: void hkpConstraintInstance::transform(class hkTransform const &)
//{
//    mangled_ppc("?transform@hkpConstraintInstance@@QAAXABVhkTransform@@@Z");
//};

//public: void hkpConstraintInstance::pointNullsToFixedRigidBody(void)
//{
//    mangled_ppc("?pointNullsToFixedRigidBody@hkpConstraintInstance@@QAAXXZ");
//};

//public: class hkBool hkpConstraintInstance::isConstrainedToWorld(void) const
//{
//    mangled_ppc("?isConstrainedToWorld@hkpConstraintInstance@@QBA?AVhkBool@@XZ");
//};

//public: void hkpConstraintInstance::getPivotsInWorld(class hkVector4&, class hkVector4&) const
//{
//    mangled_ppc("?getPivotsInWorld@hkpConstraintInstance@@QBAXAAVhkVector4@@0@Z");
//};

//public: void hkpConstraintInstance::setVirtualMassInverse(class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?setVirtualMassInverse@hkpConstraintInstance@@QAAXABVhkVector4@@0@Z");
//};

//public: void hkpConstraintInstance::enable(void)
//{
//    mangled_ppc("?enable@hkpConstraintInstance@@QAAXXZ");
//};

//public: void hkpConstraintInstance::disable(void)
//{
//    mangled_ppc("?disable@hkpConstraintInstance@@QAAXXZ");
//};

//public: void hkpConstraintInstance::setEnabled(class hkBool)
//{
//    mangled_ppc("?setEnabled@hkpConstraintInstance@@QAAXVhkBool@@@Z");
//};

//public: class hkBool hkpConstraintInstance::isEnabled(void)
//{
//    mangled_ppc("?isEnabled@hkpConstraintInstance@@QAA?AVhkBool@@XZ");
//};

//public: void hkpConstraintInstance::replaceEntity(class hkpEntity *, class hkpEntity *)
//{
//    mangled_ppc("?replaceEntity@hkpConstraintInstance@@QAAXPAVhkpEntity@@0@Z");
//};

//public: void hkpConstraintInstance::setFixedRigidBodyPointersToZero(class hkpWorld *)
//{
//    mangled_ppc("?setFixedRigidBodyPointersToZero@hkpConstraintInstance@@QAAXPAVhkpWorld@@@Z");
//};

//public: void hkpStiffSpringConstraintData::setInBodySpace(class hkVector4const &, class hkVector4const &, float)
//{
//    mangled_ppc("?setInBodySpace@hkpStiffSpringConstraintData@@QAAXABVhkVector4@@0M@Z");
//};

//public: static void * hkpMassChangerModifierConstraintAtom::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpMassChangerModifierConstraintAtom@@SAPAXI@Z");
//};

//public: hkpMassChangerModifierConstraintAtom::hkpMassChangerModifierConstraintAtom(void)
//{
//    mangled_ppc("??0hkpMassChangerModifierConstraintAtom@@QAA@XZ");
//};

//protected: hkpModifierConstraintAtom::hkpModifierConstraintAtom(enum hkpConstraintAtom::AtomType, int)
//{
//    mangled_ppc("??0hkpModifierConstraintAtom@@IAA@W4AtomType@hkpConstraintAtom@@H@Z");
//};

//public: hkEnum<enum hkpConstraintInstance::ConstraintPriority, unsigned char>::hkEnum<enum hkpConstraintInstance::ConstraintPriority, unsigned char>(enum hkpConstraintInstance::ConstraintPriority)
//{
//    mangled_ppc("??0?$hkEnum@W4ConstraintPriority@hkpConstraintInstance@@E@@QAA@W4ConstraintPriority@hkpConstraintInstance@@@Z");
//};

//public: void hkEnum<enum hkpConstraintInstance::ConstraintPriority, unsigned char>::operator=(enum hkpConstraintInstance::ConstraintPriority)
//{
//    mangled_ppc("??4?$hkEnum@W4ConstraintPriority@hkpConstraintInstance@@E@@QAAXW4ConstraintPriority@hkpConstraintInstance@@@Z");
//};

//public: hkEnum<enum hkpConstraintInstance::OnDestructionRemapInfo, unsigned char>::hkEnum<enum hkpConstraintInstance::OnDestructionRemapInfo, unsigned char>(enum hkpConstraintInstance::OnDestructionRemapInfo)
//{
//    mangled_ppc("??0?$hkEnum@W4OnDestructionRemapInfo@hkpConstraintInstance@@E@@QAA@W4OnDestructionRemapInfo@hkpConstraintInstance@@@Z");
//};

//public: class hkpConstraintListener *& hkSmallArray<class hkpConstraintListener *>::operator[](int)
//{
//    mangled_ppc("??A?$hkSmallArray@PAVhkpConstraintListener@@@@QAAAAPAVhkpConstraintListener@@H@Z");
//};

//public: int hkSmallArray<class hkpConstraintListener *>::indexOf(class hkpConstraintListener *const &) const
//{
//    mangled_ppc("?indexOf@?$hkSmallArray@PAVhkpConstraintListener@@@@QBAHABQAVhkpConstraintListener@@@Z");
//};

//public: void hkSmallArray<class hkpConstraintListener *>::pushBack(class hkpConstraintListener *const &)
//{
//    mangled_ppc("?pushBack@?$hkSmallArray@PAVhkpConstraintListener@@@@QAAXABQAVhkpConstraintListener@@@Z");
//};

//public: class hkBool hkSmallArray<class hkpConstraintListener *>::isLocked(void)
//{
//    mangled_ppc("?isLocked@?$hkSmallArray@PAVhkpConstraintListener@@@@QAA?AVhkBool@@XZ");
//};

//public: hkSmallArray<class hkpConstraintListener *>::~hkSmallArray<class hkpConstraintListener *>(void)
//{
//    mangled_ppc("??1?$hkSmallArray@PAVhkpConstraintListener@@@@QAA@XZ");
//};

//protected: void hkSmallArray<class hkpConstraintListener *>::releaseMemory(void)
//{
//    mangled_ppc("?releaseMemory@?$hkSmallArray@PAVhkpConstraintListener@@@@IAAXXZ");
//};

//public: int hkSmallArray<class hkpConstraintListener *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkSmallArray@PAVhkpConstraintListener@@@@QBAHXZ");
//};

//void hkDeallocateChunk<class hkpConstraintListener *>(class hkpConstraintListener **, int, int)
//{
//    mangled_ppc("??$hkDeallocateChunk@PAVhkpConstraintListener@@@@YAXPAPAVhkpConstraintListener@@HH@Z");
//};

