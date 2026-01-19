/* ---------- headers */

#include "havok\hkpdynamics\hkpRigidBody.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void hkpRigidBody::updateCachedShapeInfo(class hkpShape const *, class hkVector4&);
// public: static void hkpRigidBody::createDynamicRigidMotion(enum hkpMotion::MotionType, class hkVector4const &, class hkQuaternion const &, float, class hkMatrix3const &, class hkVector4const &, float, float, class hkpMaxSizeMotion *);
// public: hkpRigidBody::hkpRigidBody(class hkpRigidBodyCinfo const &);
// void estimateAllowedPenetrationDepth(class hkpCollidable *, float, class hkVector4const &);
// public: virtual hkpRigidBody::~hkpRigidBody(void);
// public: void hkpRigidBody::getCinfo(class hkpRigidBodyCinfo &) const;
// protected: virtual class hkMotionState * hkpRigidBody::getMotionState(void);
// public: virtual class hkpRigidBody * hkpRigidBody::clone(void) const;
// public: void hkpRigidBody::setMotionType(enum hkpMotion::MotionType, enum hkpEntityActivation, enum hkpUpdateCollisionFilterOnEntityMode);
// public: virtual enum hkWorldOperation::Result hkpRigidBody::setShape(class hkpShape const *);
// public: void hkpRigidBody::setCenterOfMassLocal(class hkVector4const &);
// public: void hkpRigidBody::enableDeactivation(bool);
// public: bool hkpRigidBody::isDeactivationEnabled(void) const;
// public: class hkpMotion * hkpRigidBody::getStoredDynamicMotion(void);
// public: class hkpMotion const * hkpRigidBody::getStoredDynamicMotion(void) const;
// public: static void hkpRigidBody::updateBroadphaseAndResetCollisionInformationOfWarpedBody(class hkpEntity *);
// public: void hkpRigidBody::setPosition(class hkVector4const &);
// public: void hkpRigidBody::setRotation(class hkQuaternion const &);
// public: void hkpRigidBody::setPositionAndRotation(class hkVector4const &, class hkQuaternion const &);
// public: void hkpRigidBody::setTransform(class hkTransform const &);
// public: void hkpRigidBody::setMass(float);
// public: void hkpRigidBody::setMassInv(float);
// public: void hkpRigidBody::setFriction(float, float);
// public: void hkpRigidBody::setRestitution(float);
// public: void hkpRigidBody::setInertiaLocal(class hkMatrix3const &);
// public: void hkpRigidBody::setInertiaInvLocal(class hkMatrix3const &);
// public: void hkpRigidBody::setPositionAndRotationAsCriticalOperation(class hkVector4const &, class hkQuaternion const &);
// public: void hkpRigidBody::setLinearVelocityAsCriticalOperation(class hkVector4const &);
// public: void hkpRigidBody::setAngularVelocityAsCriticalOperation(class hkVector4const &);
// public: void hkpRigidBody::applyLinearImpulseAsCriticalOperation(class hkVector4const &);
// public: void hkpRigidBody::applyPointImpulseAsCriticalOperation(class hkVector4const &, class hkVector4const &);
// public: void hkpRigidBody::applyAngularImpulseAsCriticalOperation(class hkVector4const &);
// public: class hkBool hkpRigidBody::checkPerformance(void) const;
// public: hkpCharacterMotion::hkpCharacterMotion(class hkVector4const &, class hkQuaternion const &);
// public: hkpSphereMotion::hkpSphereMotion(class hkVector4const &, class hkQuaternion const &);
// public: void hkpRigidBody::setLinearDamping(float);
// public: void hkpRigidBody::setAngularDamping(float);
// public: void hkpCollidable::setCollisionFilterInfo(unsigned int);
// public: void hkpMaterial::setFriction(float);
// public: void hkpMaterial::setRestitution(float);
// public: void hkpMaterial::setResponseType(enum hkpMaterial::ResponseType);
// public: class hkpMaterial & hkpEntity::getMaterial(void);
// public: enum hkpMaterial::ResponseType hkEnum<enum hkpMaterial::ResponseType, signed char>::operator enum hkpMaterial::ResponseType(void) const;
// public: void hkEnum<enum hkpMaterial::ResponseType, signed char>::operator=(enum hkpMaterial::ResponseType);
// public: float hkHalf::operator float(void) const;
// public: float hkpRigidBody::getMaxLinearVelocity(void) const;
// public: float hkpRigidBody::getMaxAngularVelocity(void) const;
// public: enum hkpMaterial::ResponseType hkpMaterial::getResponseType(void) const;
// public: int hkpMotion::getDeactivationClass(void);
// public: unsigned long hkpWorldObject::getUserData(void) const;
// public: void hkpWorldObject::setUserData(unsigned long);
// public: void hkpWorldObject::setName(char const *);
// public: void hkpWorldObject::copyProperties(class hkpWorldObject const *);
// public: class hkArray<class hkpProperty, struct hkContainerHeapAllocator> & hkArray<class hkpProperty, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkpProperty, struct hkContainerHeapAllocator> const &);
// protected: class hkArrayBase<class hkpProperty> & hkArrayBase<class hkpProperty>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkpProperty> const &, struct hkTraitBool<0>);
// public: void hkArrayBase<class hkpProperty>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayBase<class hkpProperty>::copy(class hkpProperty *, class hkpProperty const *, int);
// public: static void hkArrayUtil::constructWithArray<class hkpProperty>(class hkpProperty *, int, class hkpProperty const *, struct hkTraitBool<0>);
// public: hkWorldOperation::SetRigidBodyMotionType::SetRigidBodyMotionType(void);
// public: hkWorldOperation::SetWorldObjectShape::SetWorldObjectShape(void);
// public: void hkpCollidable::setShape(class hkpShape const *);
// public: void hkpMotion::enableDeactivation(bool, int, int, int, int);
// public: bool hkpMotion::isDeactivationEnabled(void) const;
// public: hkWorldOperation::UpdateMovedBodyInfo::UpdateMovedBodyInfo(void);
// public: hkWorldOperation::SetRigidBodyPositionAndRotation::SetRigidBodyPositionAndRotation(void);
// public: hkWorldOperation::SetRigidBodyLinearVelocity::SetRigidBodyLinearVelocity(void);
// public: hkWorldOperation::SetRigidBodyAngularVelocity::SetRigidBodyAngularVelocity(void);
// public: hkWorldOperation::ApplyRigidBodyLinearImpulse::ApplyRigidBodyLinearImpulse(void);
// public: hkWorldOperation::ApplyRigidBodyPointImpulse::ApplyRigidBodyPointImpulse(void);
// public: hkWorldOperation::ApplyRigidBodyAngularImpulse::ApplyRigidBodyAngularImpulse(void);
// public: void hkEnum<enum hkpMotion::MotionType, unsigned char>::operator=(enum hkpMotion::MotionType);
// public: enum hkpMotion::MotionType hkEnum<enum hkpMotion::MotionType, signed char>::operator enum hkpMotion::MotionType(void) const;
// public: class hkBool hkEnum<enum hkpMotion::MotionType, signed char>::operator==(enum hkpMotion::MotionType) const;
// public: enum hkpRigidBodyCinfo::SolverDeactivation hkEnum<enum hkpRigidBodyCinfo::SolverDeactivation, signed char>::operator enum hkpRigidBodyCinfo::SolverDeactivation(void) const;
// public: enum hkpCollidableQualityType hkEnum<enum hkpCollidableQualityType, signed char>::operator enum hkpCollidableQualityType(void) const;
// public: class hkBool hkEnum<enum hkpCollidableQualityType, signed char>::operator!=(enum hkpCollidableQualityType) const;
// public: static void hkCheckDeterminismUtil::checkMt<class hkAabb>(int, class hkAabb const &);
// public: static void hkCheckDeterminismUtil::checkMt<enum hkpMotion::MotionType>(int, enum hkpMotion::MotionType const &);
// public: static void hkCheckDeterminismUtil::checkMt<class hkVector4>(int, class hkVector4const &);
// public: static void hkCheckDeterminismUtil::checkMt<class hkQuaternion>(int, class hkQuaternion const &);
// public: static void hkCheckDeterminismUtil::checkMt<class hkMatrix3>(int, class hkMatrix3const &);
// public: void hkRefPtr<class hkLocalFrame>::operator=(class hkLocalFrame *);
// public: class hkLocalFrame * hkRefPtr<class hkLocalFrame>::operator->(void) const;
// public: class hkLocalFrame * hkRefPtr<class hkLocalFrame>::operator class hkLocalFrame *(void) const;
// public: static void hkCheckDeterminismUtil::checkMt<bool>(int, bool const &);
// public: static void hkCheckDeterminismUtil::checkMt<class hkTransform>(int, class hkTransform const &);
// class hkVector4* hkAllocateChunk<class hkVector4>(int, int);
// public: class hkLocalFrame * hkRefPtr<class hkLocalFrame>::val(void) const;

//public: void hkpRigidBody::updateCachedShapeInfo(class hkpShape const *, class hkVector4&)
//{
//    mangled_ppc("?updateCachedShapeInfo@hkpRigidBody@@QAAXPBVhkpShape@@AAVhkVector4@@@Z");
//};

//public: static void hkpRigidBody::createDynamicRigidMotion(enum hkpMotion::MotionType, class hkVector4const &, class hkQuaternion const &, float, class hkMatrix3const &, class hkVector4const &, float, float, class hkpMaxSizeMotion *)
//{
//    mangled_ppc("?createDynamicRigidMotion@hkpRigidBody@@SAXW4MotionType@hkpMotion@@ABVhkVector4@@ABVhkQuaternion@@MABVhkMatrix3@@1MMPAVhkpMaxSizeMotion@@@Z");
//};

//public: hkpRigidBody::hkpRigidBody(class hkpRigidBodyCinfo const &)
//{
//    mangled_ppc("??0hkpRigidBody@@QAA@ABVhkpRigidBodyCinfo@@@Z");
//};

//void estimateAllowedPenetrationDepth(class hkpCollidable *, float, class hkVector4const &)
//{
//    mangled_ppc("?estimateAllowedPenetrationDepth@@YAXPAVhkpCollidable@@MABVhkVector4@@@Z");
//};

//public: virtual hkpRigidBody::~hkpRigidBody(void)
//{
//    mangled_ppc("??1hkpRigidBody@@UAA@XZ");
//};

//public: void hkpRigidBody::getCinfo(class hkpRigidBodyCinfo &) const
//{
//    mangled_ppc("?getCinfo@hkpRigidBody@@QBAXAAVhkpRigidBodyCinfo@@@Z");
//};

//protected: virtual class hkMotionState * hkpRigidBody::getMotionState(void)
//{
//    mangled_ppc("?getMotionState@hkpRigidBody@@MAAPAVhkMotionState@@XZ");
//};

//public: virtual class hkpRigidBody * hkpRigidBody::clone(void) const
//{
//    mangled_ppc("?clone@hkpRigidBody@@UBAPAV1@XZ");
//};

//public: void hkpRigidBody::setMotionType(enum hkpMotion::MotionType, enum hkpEntityActivation, enum hkpUpdateCollisionFilterOnEntityMode)
//{
//    mangled_ppc("?setMotionType@hkpRigidBody@@QAAXW4MotionType@hkpMotion@@W4hkpEntityActivation@@W4hkpUpdateCollisionFilterOnEntityMode@@@Z");
//};

//public: virtual enum hkWorldOperation::Result hkpRigidBody::setShape(class hkpShape const *)
//{
//    mangled_ppc("?setShape@hkpRigidBody@@UAA?AW4Result@hkWorldOperation@@PBVhkpShape@@@Z");
//};

//public: void hkpRigidBody::setCenterOfMassLocal(class hkVector4const &)
//{
//    mangled_ppc("?setCenterOfMassLocal@hkpRigidBody@@QAAXABVhkVector4@@@Z");
//};

//public: void hkpRigidBody::enableDeactivation(bool)
//{
//    mangled_ppc("?enableDeactivation@hkpRigidBody@@QAAX_N@Z");
//};

//public: bool hkpRigidBody::isDeactivationEnabled(void) const
//{
//    mangled_ppc("?isDeactivationEnabled@hkpRigidBody@@QBA_NXZ");
//};

//public: class hkpMotion * hkpRigidBody::getStoredDynamicMotion(void)
//{
//    mangled_ppc("?getStoredDynamicMotion@hkpRigidBody@@QAAPAVhkpMotion@@XZ");
//};

//public: class hkpMotion const * hkpRigidBody::getStoredDynamicMotion(void) const
//{
//    mangled_ppc("?getStoredDynamicMotion@hkpRigidBody@@QBAPBVhkpMotion@@XZ");
//};

//public: static void hkpRigidBody::updateBroadphaseAndResetCollisionInformationOfWarpedBody(class hkpEntity *)
//{
//    mangled_ppc("?updateBroadphaseAndResetCollisionInformationOfWarpedBody@hkpRigidBody@@SAXPAVhkpEntity@@@Z");
//};

//public: void hkpRigidBody::setPosition(class hkVector4const &)
//{
//    mangled_ppc("?setPosition@hkpRigidBody@@QAAXABVhkVector4@@@Z");
//};

//public: void hkpRigidBody::setRotation(class hkQuaternion const &)
//{
//    mangled_ppc("?setRotation@hkpRigidBody@@QAAXABVhkQuaternion@@@Z");
//};

//public: void hkpRigidBody::setPositionAndRotation(class hkVector4const &, class hkQuaternion const &)
//{
//    mangled_ppc("?setPositionAndRotation@hkpRigidBody@@QAAXABVhkVector4@@ABVhkQuaternion@@@Z");
//};

//public: void hkpRigidBody::setTransform(class hkTransform const &)
//{
//    mangled_ppc("?setTransform@hkpRigidBody@@QAAXABVhkTransform@@@Z");
//};

//public: void hkpRigidBody::setMass(float)
//{
//    mangled_ppc("?setMass@hkpRigidBody@@QAAXM@Z");
//};

//public: void hkpRigidBody::setMassInv(float)
//{
//    mangled_ppc("?setMassInv@hkpRigidBody@@QAAXM@Z");
//};

//public: void hkpRigidBody::setFriction(float, float)
//{
//    mangled_ppc("?setFriction@hkpRigidBody@@QAAXMM@Z");
//};

//public: void hkpRigidBody::setRestitution(float)
//{
//    mangled_ppc("?setRestitution@hkpRigidBody@@QAAXM@Z");
//};

//public: void hkpRigidBody::setInertiaLocal(class hkMatrix3const &)
//{
//    mangled_ppc("?setInertiaLocal@hkpRigidBody@@QAAXABVhkMatrix3@@@Z");
//};

//public: void hkpRigidBody::setInertiaInvLocal(class hkMatrix3const &)
//{
//    mangled_ppc("?setInertiaInvLocal@hkpRigidBody@@QAAXABVhkMatrix3@@@Z");
//};

//public: void hkpRigidBody::setPositionAndRotationAsCriticalOperation(class hkVector4const &, class hkQuaternion const &)
//{
//    mangled_ppc("?setPositionAndRotationAsCriticalOperation@hkpRigidBody@@QAAXABVhkVector4@@ABVhkQuaternion@@@Z");
//};

//public: void hkpRigidBody::setLinearVelocityAsCriticalOperation(class hkVector4const &)
//{
//    mangled_ppc("?setLinearVelocityAsCriticalOperation@hkpRigidBody@@QAAXABVhkVector4@@@Z");
//};

//public: void hkpRigidBody::setAngularVelocityAsCriticalOperation(class hkVector4const &)
//{
//    mangled_ppc("?setAngularVelocityAsCriticalOperation@hkpRigidBody@@QAAXABVhkVector4@@@Z");
//};

//public: void hkpRigidBody::applyLinearImpulseAsCriticalOperation(class hkVector4const &)
//{
//    mangled_ppc("?applyLinearImpulseAsCriticalOperation@hkpRigidBody@@QAAXABVhkVector4@@@Z");
//};

//public: void hkpRigidBody::applyPointImpulseAsCriticalOperation(class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?applyPointImpulseAsCriticalOperation@hkpRigidBody@@QAAXABVhkVector4@@0@Z");
//};

//public: void hkpRigidBody::applyAngularImpulseAsCriticalOperation(class hkVector4const &)
//{
//    mangled_ppc("?applyAngularImpulseAsCriticalOperation@hkpRigidBody@@QAAXABVhkVector4@@@Z");
//};

//public: class hkBool hkpRigidBody::checkPerformance(void) const
//{
//    mangled_ppc("?checkPerformance@hkpRigidBody@@QBA?AVhkBool@@XZ");
//};

//public: hkpCharacterMotion::hkpCharacterMotion(class hkVector4const &, class hkQuaternion const &)
//{
//    mangled_ppc("??0hkpCharacterMotion@@QAA@ABVhkVector4@@ABVhkQuaternion@@@Z");
//};

//public: hkpSphereMotion::hkpSphereMotion(class hkVector4const &, class hkQuaternion const &)
//{
//    mangled_ppc("??0hkpSphereMotion@@QAA@ABVhkVector4@@ABVhkQuaternion@@@Z");
//};

//public: void hkpRigidBody::setLinearDamping(float)
//{
//    mangled_ppc("?setLinearDamping@hkpRigidBody@@QAAXM@Z");
//};

//public: void hkpRigidBody::setAngularDamping(float)
//{
//    mangled_ppc("?setAngularDamping@hkpRigidBody@@QAAXM@Z");
//};

//public: void hkpCollidable::setCollisionFilterInfo(unsigned int)
//{
//    mangled_ppc("?setCollisionFilterInfo@hkpCollidable@@QAAXI@Z");
//};

//public: void hkpMaterial::setFriction(float)
//{
//    mangled_ppc("?setFriction@hkpMaterial@@QAAXM@Z");
//};

//public: void hkpMaterial::setRestitution(float)
//{
//    mangled_ppc("?setRestitution@hkpMaterial@@QAAXM@Z");
//};

//public: void hkpMaterial::setResponseType(enum hkpMaterial::ResponseType)
//{
//    mangled_ppc("?setResponseType@hkpMaterial@@QAAXW4ResponseType@1@@Z");
//};

//public: class hkpMaterial & hkpEntity::getMaterial(void)
//{
//    mangled_ppc("?getMaterial@hkpEntity@@QAAAAVhkpMaterial@@XZ");
//};

//public: enum hkpMaterial::ResponseType hkEnum<enum hkpMaterial::ResponseType, signed char>::operator enum hkpMaterial::ResponseType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4ResponseType@hkpMaterial@@C@@QBA?AW4ResponseType@hkpMaterial@@XZ");
//};

//public: void hkEnum<enum hkpMaterial::ResponseType, signed char>::operator=(enum hkpMaterial::ResponseType)
//{
//    mangled_ppc("??4?$hkEnum@W4ResponseType@hkpMaterial@@C@@QAAXW4ResponseType@hkpMaterial@@@Z");
//};

//public: float hkHalf::operator float(void) const
//{
//    mangled_ppc("??BhkHalf@@QBAMXZ");
//};

//public: float hkpRigidBody::getMaxLinearVelocity(void) const
//{
//    mangled_ppc("?getMaxLinearVelocity@hkpRigidBody@@QBAMXZ");
//};

//public: float hkpRigidBody::getMaxAngularVelocity(void) const
//{
//    mangled_ppc("?getMaxAngularVelocity@hkpRigidBody@@QBAMXZ");
//};

//public: enum hkpMaterial::ResponseType hkpMaterial::getResponseType(void) const
//{
//    mangled_ppc("?getResponseType@hkpMaterial@@QBA?AW4ResponseType@1@XZ");
//};

//public: int hkpMotion::getDeactivationClass(void)
//{
//    mangled_ppc("?getDeactivationClass@hkpMotion@@QAAHXZ");
//};

//public: unsigned long hkpWorldObject::getUserData(void) const
//{
//    mangled_ppc("?getUserData@hkpWorldObject@@QBAKXZ");
//};

//public: void hkpWorldObject::setUserData(unsigned long)
//{
//    mangled_ppc("?setUserData@hkpWorldObject@@QAAXK@Z");
//};

//public: void hkpWorldObject::setName(char const *)
//{
//    mangled_ppc("?setName@hkpWorldObject@@QAAXPBD@Z");
//};

//public: void hkpWorldObject::copyProperties(class hkpWorldObject const *)
//{
//    mangled_ppc("?copyProperties@hkpWorldObject@@QAAXPBV1@@Z");
//};

//public: class hkArray<class hkpProperty, struct hkContainerHeapAllocator> & hkArray<class hkpProperty, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkpProperty, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@VhkpProperty@@UhkContainerHeapAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//protected: class hkArrayBase<class hkpProperty> & hkArrayBase<class hkpProperty>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkpProperty> const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@VhkpProperty@@@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<class hkpProperty>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@VhkpProperty@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayBase<class hkpProperty>::copy(class hkpProperty *, class hkpProperty const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@VhkpProperty@@@@SAXPAVhkpProperty@@PBV2@H@Z");
//};

//public: static void hkArrayUtil::constructWithArray<class hkpProperty>(class hkpProperty *, int, class hkpProperty const *, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithArray@VhkpProperty@@@hkArrayUtil@@SAXPAVhkpProperty@@HPBV1@U?$hkTraitBool@$0A@@@@Z");
//};

//public: hkWorldOperation::SetRigidBodyMotionType::SetRigidBodyMotionType(void)
//{
//    mangled_ppc("??0SetRigidBodyMotionType@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::SetWorldObjectShape::SetWorldObjectShape(void)
//{
//    mangled_ppc("??0SetWorldObjectShape@hkWorldOperation@@QAA@XZ");
//};

//public: void hkpCollidable::setShape(class hkpShape const *)
//{
//    mangled_ppc("?setShape@hkpCollidable@@QAAXPBVhkpShape@@@Z");
//};

//public: void hkpMotion::enableDeactivation(bool, int, int, int, int)
//{
//    mangled_ppc("?enableDeactivation@hkpMotion@@QAAX_NHHHH@Z");
//};

//public: bool hkpMotion::isDeactivationEnabled(void) const
//{
//    mangled_ppc("?isDeactivationEnabled@hkpMotion@@QBA_NXZ");
//};

//public: hkWorldOperation::UpdateMovedBodyInfo::UpdateMovedBodyInfo(void)
//{
//    mangled_ppc("??0UpdateMovedBodyInfo@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::SetRigidBodyPositionAndRotation::SetRigidBodyPositionAndRotation(void)
//{
//    mangled_ppc("??0SetRigidBodyPositionAndRotation@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::SetRigidBodyLinearVelocity::SetRigidBodyLinearVelocity(void)
//{
//    mangled_ppc("??0SetRigidBodyLinearVelocity@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::SetRigidBodyAngularVelocity::SetRigidBodyAngularVelocity(void)
//{
//    mangled_ppc("??0SetRigidBodyAngularVelocity@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::ApplyRigidBodyLinearImpulse::ApplyRigidBodyLinearImpulse(void)
//{
//    mangled_ppc("??0ApplyRigidBodyLinearImpulse@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::ApplyRigidBodyPointImpulse::ApplyRigidBodyPointImpulse(void)
//{
//    mangled_ppc("??0ApplyRigidBodyPointImpulse@hkWorldOperation@@QAA@XZ");
//};

//public: hkWorldOperation::ApplyRigidBodyAngularImpulse::ApplyRigidBodyAngularImpulse(void)
//{
//    mangled_ppc("??0ApplyRigidBodyAngularImpulse@hkWorldOperation@@QAA@XZ");
//};

//public: void hkEnum<enum hkpMotion::MotionType, unsigned char>::operator=(enum hkpMotion::MotionType)
//{
//    mangled_ppc("??4?$hkEnum@W4MotionType@hkpMotion@@E@@QAAXW4MotionType@hkpMotion@@@Z");
//};

//public: enum hkpMotion::MotionType hkEnum<enum hkpMotion::MotionType, signed char>::operator enum hkpMotion::MotionType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4MotionType@hkpMotion@@C@@QBA?AW4MotionType@hkpMotion@@XZ");
//};

//public: class hkBool hkEnum<enum hkpMotion::MotionType, signed char>::operator==(enum hkpMotion::MotionType) const
//{
//    mangled_ppc("??8?$hkEnum@W4MotionType@hkpMotion@@C@@QBA?AVhkBool@@W4MotionType@hkpMotion@@@Z");
//};

//public: enum hkpRigidBodyCinfo::SolverDeactivation hkEnum<enum hkpRigidBodyCinfo::SolverDeactivation, signed char>::operator enum hkpRigidBodyCinfo::SolverDeactivation(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4SolverDeactivation@hkpRigidBodyCinfo@@C@@QBA?AW4SolverDeactivation@hkpRigidBodyCinfo@@XZ");
//};

//public: enum hkpCollidableQualityType hkEnum<enum hkpCollidableQualityType, signed char>::operator enum hkpCollidableQualityType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4hkpCollidableQualityType@@C@@QBA?AW4hkpCollidableQualityType@@XZ");
//};

//public: class hkBool hkEnum<enum hkpCollidableQualityType, signed char>::operator!=(enum hkpCollidableQualityType) const
//{
//    mangled_ppc("??9?$hkEnum@W4hkpCollidableQualityType@@C@@QBA?AVhkBool@@W4hkpCollidableQualityType@@@Z");
//};

//public: static void hkCheckDeterminismUtil::checkMt<class hkAabb>(int, class hkAabb const &)
//{
//    mangled_ppc("??$checkMt@VhkAabb@@@hkCheckDeterminismUtil@@SAXHABVhkAabb@@@Z");
//};

//public: static void hkCheckDeterminismUtil::checkMt<enum hkpMotion::MotionType>(int, enum hkpMotion::MotionType const &)
//{
//    mangled_ppc("??$checkMt@W4MotionType@hkpMotion@@@hkCheckDeterminismUtil@@SAXHABW4MotionType@hkpMotion@@@Z");
//};

//public: static void hkCheckDeterminismUtil::checkMt<class hkVector4>(int, class hkVector4const &)
//{
//    mangled_ppc("??$checkMt@VhkVector4@@@hkCheckDeterminismUtil@@SAXHABVhkVector4@@@Z");
//};

//public: static void hkCheckDeterminismUtil::checkMt<class hkQuaternion>(int, class hkQuaternion const &)
//{
//    mangled_ppc("??$checkMt@VhkQuaternion@@@hkCheckDeterminismUtil@@SAXHABVhkQuaternion@@@Z");
//};

//public: static void hkCheckDeterminismUtil::checkMt<class hkMatrix3>(int, class hkMatrix3const &)
//{
//    mangled_ppc("??$checkMt@VhkMatrix3@@@hkCheckDeterminismUtil@@SAXHABVhkMatrix3@@@Z");
//};

//public: void hkRefPtr<class hkLocalFrame>::operator=(class hkLocalFrame *)
//{
//    mangled_ppc("??4?$hkRefPtr@VhkLocalFrame@@@@QAAXPAVhkLocalFrame@@@Z");
//};

//public: class hkLocalFrame * hkRefPtr<class hkLocalFrame>::operator->(void) const
//{
//    mangled_ppc("??C?$hkRefPtr@VhkLocalFrame@@@@QBAPAVhkLocalFrame@@XZ");
//};

//public: class hkLocalFrame * hkRefPtr<class hkLocalFrame>::operator class hkLocalFrame *(void) const
//{
//    mangled_ppc("??B?$hkRefPtr@VhkLocalFrame@@@@QBAPAVhkLocalFrame@@XZ");
//};

//public: static void hkCheckDeterminismUtil::checkMt<bool>(int, bool const &)
//{
//    mangled_ppc("??$checkMt@_N@hkCheckDeterminismUtil@@SAXHAB_N@Z");
//};

//public: static void hkCheckDeterminismUtil::checkMt<class hkTransform>(int, class hkTransform const &)
//{
//    mangled_ppc("??$checkMt@VhkTransform@@@hkCheckDeterminismUtil@@SAXHABVhkTransform@@@Z");
//};

//class hkVector4* hkAllocateChunk<class hkVector4>(int, int)
//{
//    mangled_ppc("??$hkAllocateChunk@VhkVector4@@@@YAPAVhkVector4@@HH@Z");
//};

//public: class hkLocalFrame * hkRefPtr<class hkLocalFrame>::val(void) const
//{
//    mangled_ppc("?val@?$hkRefPtr@VhkLocalFrame@@@@QBAPAVhkLocalFrame@@XZ");
//};

