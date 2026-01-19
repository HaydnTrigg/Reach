/* ---------- headers */

#include "havok\hkputilities\hkpGravityGun.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const hkpCharacterRigidBody::m_magicNumber; // "?m_magicNumber@hkpCharacterRigidBody@@2HB"
// public: static int const hkpCharacterRigidBody::m_notMagicNumber; // "?m_notMagicNumber@hkpCharacterRigidBody@@2HB"
// const hkpGravityGun::`RTTI Complete Object Locator'; // "??_R4hkpGravityGun@@6B@"
// hkpGravityGun::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpGravityGun@@8"
// hkpGravityGun::`RTTI Base Class Array'; // "??_R2hkpGravityGun@@8"
// hkpGravityGun::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpGravityGun@@8"
// const hkpClosestRayHitCollector::`RTTI Complete Object Locator'; // "??_R4hkpClosestRayHitCollector@@6B@"
// hkpClosestRayHitCollector::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpClosestRayHitCollector@@8"
// hkpClosestRayHitCollector::`RTTI Base Class Array'; // "??_R2hkpClosestRayHitCollector@@8"
// hkpClosestRayHitCollector::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpClosestRayHitCollector@@8"
// hkpRayHitCollector::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpRayHitCollector@@8"
// hkpRayHitCollector::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpRayHitCollector@@8"
// hkpRayHitCollector::`RTTI Base Class Array'; // "??_R2hkpRayHitCollector@@8"
// const hkpRayHitCollector::`RTTI Complete Object Locator'; // "??_R4hkpRayHitCollector@@6B@"
// class hkpGravityGun::`RTTI Type Descriptor'; // "??_R0?AVhkpGravityGun@@@8"
// class hkpClosestRayHitCollector::`RTTI Type Descriptor'; // "??_R0?AVhkpClosestRayHitCollector@@@8"
// class hkpRayHitCollector::`RTTI Type Descriptor'; // "??_R0?AVhkpRayHitCollector@@@8"

// public: hkpGravityGun::hkpGravityGun(void);
// public: hkpGravityGun::hkpGravityGun(class hkFinishLoadedObjectFlag);
// private: class hkpRigidBody * hkpGravityGun::pickBody(class hkTransform const &, class hkpRigidBody const *, class hkpWorld const *) const;
// private: void hkpGravityGun::takeObject(class hkpRigidBody *);
// private: class hkpRigidBody * hkpGravityGun::dropObject(int);
// private: void hkpGravityGun::gravityGunPull(class hkTransform const &, class hkpRigidBody const *, class hkpWorld const *);
// private: void hkpGravityGun::gravityGunPush(class hkTransform const &, class hkpRigidBody const *, class hkpWorld const *);
// private: void hkpGravityGun::gravityGunPutDown(class hkTransform const &, class hkpRigidBody const *, class hkpWorld const *);
// private: void hkpGravityGun::gravityGunStep(float, class hkTransform const &, class hkpRigidBody const *);
// public: virtual void hkpGravityGun::stepGun(float, class hkpWorld *, class hkpRigidBody const *, class hkTransform const &, bool, bool);
// public: virtual void hkpGravityGun::reset(class hkpWorld *);
// public: virtual void hkpFirstPersonGun::fireGun(class hkpWorld *, class hkTransform const &);
// merged_83F38B18;
// public: static void hkpGravityGun::operator delete(void *);
// public: virtual hkpGravityGun::~hkpGravityGun(void);
// public: hkpClosestRayHitCollector::hkpClosestRayHitCollector(void);
// public: void hkpClosestRayHitCollector::reset(void);
// public: void hkpWorldRayCastOutput::reset(void);
// public: void hkpShapeRayCastOutput::reset(void);
// merged_83F38CE0;
// public: virtual hkpClosestRayHitCollector::~hkpClosestRayHitCollector(void);
// public: class hkBool hkpClosestRayHitCollector::hasHit(void) const;
// public: struct hkpWorldRayCastOutput const & hkpClosestRayHitCollector::getHit(void) const;
// public: void hkpRigidBody::applyLinearImpulse(class hkVector4const &);
// public: void hkpRigidBody::setQualityType(enum hkpCollidableQualityType);
// public: hkArray<class hkpRigidBody *, struct hkContainerHeapAllocator>::hkArray<class hkpRigidBody *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpRigidBody *, struct hkContainerHeapAllocator>::pushBack(class hkpRigidBody *const &);
// public: hkArrayBase<class hkpRigidBody *>::hkArrayBase<class hkpRigidBody *>(void);
// public: class hkpRigidBody *& hkArrayBase<class hkpRigidBody *>::operator[](int);
// public: void hkArrayBase<class hkpRigidBody *>::clear(void);
// public: void hkArrayBase<class hkpRigidBody *>::removeAtAndCopy(int);
// public: void hkArrayBase<class hkpRigidBody *>::_pushBack(class hkMemoryAllocator &, class hkpRigidBody *const &);
// public: hkArray<class hkpRigidBody *, struct hkContainerHeapAllocator>::~hkArray<class hkpRigidBody *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpRigidBody *>::~hkArrayBase<class hkpRigidBody *>(void);
// public: void hkArray<class hkpRigidBody *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<class hkpRigidBody *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpRigidBody *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<class hkpRigidBody *>(class hkpRigidBody **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<class hkpRigidBody *>(class hkpRigidBody **, int, class hkpRigidBody *const &, struct hkTraitBool<1>);

//public: hkpGravityGun::hkpGravityGun(void)
//{
//    mangled_ppc("??0hkpGravityGun@@QAA@XZ");
//};

//public: hkpGravityGun::hkpGravityGun(class hkFinishLoadedObjectFlag)
//{
//    mangled_ppc("??0hkpGravityGun@@QAA@VhkFinishLoadedObjectFlag@@@Z");
//};

//private: class hkpRigidBody * hkpGravityGun::pickBody(class hkTransform const &, class hkpRigidBody const *, class hkpWorld const *) const
//{
//    mangled_ppc("?pickBody@hkpGravityGun@@ABAPAVhkpRigidBody@@ABVhkTransform@@PBV2@PBVhkpWorld@@@Z");
//};

//private: void hkpGravityGun::takeObject(class hkpRigidBody *)
//{
//    mangled_ppc("?takeObject@hkpGravityGun@@AAAXPAVhkpRigidBody@@@Z");
//};

//private: class hkpRigidBody * hkpGravityGun::dropObject(int)
//{
//    mangled_ppc("?dropObject@hkpGravityGun@@AAAPAVhkpRigidBody@@H@Z");
//};

//private: void hkpGravityGun::gravityGunPull(class hkTransform const &, class hkpRigidBody const *, class hkpWorld const *)
//{
//    mangled_ppc("?gravityGunPull@hkpGravityGun@@AAAXABVhkTransform@@PBVhkpRigidBody@@PBVhkpWorld@@@Z");
//};

//private: void hkpGravityGun::gravityGunPush(class hkTransform const &, class hkpRigidBody const *, class hkpWorld const *)
//{
//    mangled_ppc("?gravityGunPush@hkpGravityGun@@AAAXABVhkTransform@@PBVhkpRigidBody@@PBVhkpWorld@@@Z");
//};

//private: void hkpGravityGun::gravityGunPutDown(class hkTransform const &, class hkpRigidBody const *, class hkpWorld const *)
//{
//    mangled_ppc("?gravityGunPutDown@hkpGravityGun@@AAAXABVhkTransform@@PBVhkpRigidBody@@PBVhkpWorld@@@Z");
//};

//private: void hkpGravityGun::gravityGunStep(float, class hkTransform const &, class hkpRigidBody const *)
//{
//    mangled_ppc("?gravityGunStep@hkpGravityGun@@AAAXMABVhkTransform@@PBVhkpRigidBody@@@Z");
//};

//public: virtual void hkpGravityGun::stepGun(float, class hkpWorld *, class hkpRigidBody const *, class hkTransform const &, bool, bool)
//{
//    mangled_ppc("?stepGun@hkpGravityGun@@UAAXMPAVhkpWorld@@PBVhkpRigidBody@@ABVhkTransform@@_N3@Z");
//};

//public: virtual void hkpGravityGun::reset(class hkpWorld *)
//{
//    mangled_ppc("?reset@hkpGravityGun@@UAAXPAVhkpWorld@@@Z");
//};

//public: virtual void hkpFirstPersonGun::fireGun(class hkpWorld *, class hkTransform const &)
//{
//    mangled_ppc("?fireGun@hkpFirstPersonGun@@UAAXPAVhkpWorld@@ABVhkTransform@@@Z");
//};

//merged_83F38B18
//{
//    mangled_ppc("merged_83F38B18");
//};

//public: static void hkpGravityGun::operator delete(void *)
//{
//    mangled_ppc("??3hkpGravityGun@@SAXPAX@Z");
//};

//public: virtual hkpGravityGun::~hkpGravityGun(void)
//{
//    mangled_ppc("??1hkpGravityGun@@UAA@XZ");
//};

//public: hkpClosestRayHitCollector::hkpClosestRayHitCollector(void)
//{
//    mangled_ppc("??0hkpClosestRayHitCollector@@QAA@XZ");
//};

//public: void hkpClosestRayHitCollector::reset(void)
//{
//    mangled_ppc("?reset@hkpClosestRayHitCollector@@QAAXXZ");
//};

//public: void hkpWorldRayCastOutput::reset(void)
//{
//    mangled_ppc("?reset@hkpWorldRayCastOutput@@QAAXXZ");
//};

//public: void hkpShapeRayCastOutput::reset(void)
//{
//    mangled_ppc("?reset@hkpShapeRayCastOutput@@QAAXXZ");
//};

//merged_83F38CE0
//{
//    mangled_ppc("merged_83F38CE0");
//};

//public: virtual hkpClosestRayHitCollector::~hkpClosestRayHitCollector(void)
//{
//    mangled_ppc("??1hkpClosestRayHitCollector@@UAA@XZ");
//};

//public: class hkBool hkpClosestRayHitCollector::hasHit(void) const
//{
//    mangled_ppc("?hasHit@hkpClosestRayHitCollector@@QBA?AVhkBool@@XZ");
//};

//public: struct hkpWorldRayCastOutput const & hkpClosestRayHitCollector::getHit(void) const
//{
//    mangled_ppc("?getHit@hkpClosestRayHitCollector@@QBAABUhkpWorldRayCastOutput@@XZ");
//};

//public: void hkpRigidBody::applyLinearImpulse(class hkVector4const &)
//{
//    mangled_ppc("?applyLinearImpulse@hkpRigidBody@@QAAXABVhkVector4@@@Z");
//};

//public: void hkpRigidBody::setQualityType(enum hkpCollidableQualityType)
//{
//    mangled_ppc("?setQualityType@hkpRigidBody@@QAAXW4hkpCollidableQualityType@@@Z");
//};

//public: hkArray<class hkpRigidBody *, struct hkContainerHeapAllocator>::hkArray<class hkpRigidBody *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpRigidBody@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpRigidBody *, struct hkContainerHeapAllocator>::pushBack(class hkpRigidBody *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpRigidBody@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpRigidBody@@@Z");
//};

//public: hkArrayBase<class hkpRigidBody *>::hkArrayBase<class hkpRigidBody *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpRigidBody@@@@QAA@XZ");
//};

//public: class hkpRigidBody *& hkArrayBase<class hkpRigidBody *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpRigidBody@@@@QAAAAPAVhkpRigidBody@@H@Z");
//};

//public: void hkArrayBase<class hkpRigidBody *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpRigidBody@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpRigidBody *>::removeAtAndCopy(int)
//{
//    mangled_ppc("?removeAtAndCopy@?$hkArrayBase@PAVhkpRigidBody@@@@QAAXH@Z");
//};

//public: void hkArrayBase<class hkpRigidBody *>::_pushBack(class hkMemoryAllocator &, class hkpRigidBody *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpRigidBody@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpRigidBody@@@Z");
//};

//public: hkArray<class hkpRigidBody *, struct hkContainerHeapAllocator>::~hkArray<class hkpRigidBody *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpRigidBody@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpRigidBody *>::~hkArrayBase<class hkpRigidBody *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpRigidBody@@@@QAA@XZ");
//};

//public: void hkArray<class hkpRigidBody *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpRigidBody@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<class hkpRigidBody *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpRigidBody@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpRigidBody *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpRigidBody@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpRigidBody *>(class hkpRigidBody **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpRigidBody@@@hkArrayUtil@@SAXPAPAVhkpRigidBody@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpRigidBody *>(class hkpRigidBody **, int, class hkpRigidBody *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpRigidBody@@@hkArrayUtil@@SAXPAPAVhkpRigidBody@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

