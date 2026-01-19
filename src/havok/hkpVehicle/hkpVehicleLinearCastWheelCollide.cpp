/* ---------- headers */

#include "havok\hkpVehicle\hkpVehicleLinearCastWheelCollide.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkpVehicleLinearCastWheelCollide::hkpVehicleLinearCastWheelCollide(void);
// public: void hkpVehicleLinearCastWheelCollide::setWheelShapes(class hkpVehicleInstance const *, class hkArray<class hkpShape *, struct hkContainerHeapAllocator> const &);
// public: class hkpCylinderShape * hkpVehicleLinearCastWheelCollide::createWheelShape(float, float);
// public: virtual void hkpVehicleLinearCastWheelCollide::init(class hkpVehicleInstance const *);
// public: virtual hkpVehicleLinearCastWheelCollide::~hkpVehicleLinearCastWheelCollide(void);
// public: virtual void hkpVehicleLinearCastWheelCollide::collideWheels(float, class hkpVehicleInstance const *, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput *);
// public: virtual void hkpVehicleLinearCastWheelCollide::updateBeforeCollisionDetection(class hkpVehicleInstance const *);
// public: virtual class hkpVehicleWheelCollide * hkpVehicleLinearCastWheelCollide::clone(class hkpRigidBody const &, class hkArray<class hkpPhantom *, struct hkContainerHeapAllocator> const &) const;
// public: virtual int hkpVehicleLinearCastWheelCollide::getTotalNumCommands(void) const;
// public: virtual int hkpVehicleLinearCastWheelCollide::getNumCommands(unsigned char) const;
// public: virtual int hkpVehicleLinearCastWheelCollide::buildLinearCastCommands(class hkpVehicleInstance const *, class hkpCollisionFilter const *, class hkpCollidable *, struct hkpPairLinearCastCommand *, struct hkpRootCdPoint *) const;
// public: virtual class hkBool hkpVehicleLinearCastWheelCollide::castSingleWheel(class hkpVehicleInstance const *, unsigned char, struct hkpRootCdPoint &) const;
// public: virtual struct hkpRootCdPoint const * hkpVehicleLinearCastWheelCollide::determineNearestHit(unsigned char, struct hkpPairLinearCastCommand const *) const;
// public: virtual void hkpVehicleLinearCastWheelCollide::getCollisionOutputFromCastResult(class hkpVehicleInstance const *, unsigned char, struct hkpRootCdPoint const &, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput &) const;
// public: virtual void hkpVehicleLinearCastWheelCollide::getCollisionOutputWithoutHit(class hkpVehicleInstance const *, unsigned char, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput &) const;
// public: void hkpVehicleLinearCastWheelCollide::calcAabbOfWheel(class hkpVehicleInstance const *, unsigned char, class hkAabb &) const;
// public: void hkpVehicleLinearCastWheelCollide::updateWheelState(class hkpVehicleInstance const *, unsigned char);
// public: virtual void hkpVehicleLinearCastWheelCollide::getPhantoms(class hkArray<class hkpPhantom *, struct hkContainerHeapAllocator> &);
// public: virtual void hkpVehicleLinearCastWheelCollide::addToWorld(class hkpWorld *);
// public: virtual void hkpVehicleLinearCastWheelCollide::removeFromWorld(void);
// public: virtual void hkpVehicleLinearCastWheelCollide::setCollisionFilterInfo(unsigned int);
// public: virtual void hkpVehicleLinearCastWheelCollide::wheelCollideCallback(class hkpVehicleInstance const *, unsigned char, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput &);
// public: void hkpVehicleLinearCastWheelCollide::centerWheelContactPoint(class hkpVehicleInstance const *, unsigned char, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput &) const;
// public: hkpRejectChassisListener::hkpRejectChassisListener(void);
// protected: hkpVehicleWheelCollide::hkpVehicleWheelCollide(void);
// public: unsigned char hkpVehicleInstance::getNumWheels(void) const;
// public: class hkpRigidBody * hkpVehicleInstance::getChassis(void) const;
// public: static void * hkpVehicleLinearCastWheelCollide::operator new(unsigned int);
// public: class hkArray<class hkpCollidable *, struct hkContainerHeapAllocator> & hkpAabbPhantom::getOverlappingCollidables(void);
// public: hkArray<struct hkpVehicleLinearCastWheelCollide::WheelState, struct hkContainerHeapAllocator>::hkArray<struct hkpVehicleLinearCastWheelCollide::WheelState, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkpVehicleLinearCastWheelCollide::WheelState, struct hkContainerHeapAllocator>::setSize(int);
// public: hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>(void);
// public: struct hkpVehicleLinearCastWheelCollide::WheelState const & hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::operator[](int) const;
// public: struct hkpVehicleLinearCastWheelCollide::WheelState & hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::operator[](int);
// public: int hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::getSize(void) const;
// public: void hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::_setSize(class hkMemoryAllocator &, int);
// public: hkArray<struct hkpVehicleLinearCastWheelCollide::WheelState, struct hkContainerHeapAllocator>::~hkArray<struct hkpVehicleLinearCastWheelCollide::WheelState, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::~hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>(void);
// public: class hkpShape *const & hkArrayBase<class hkpShape *>::operator[](int) const;
// public: int hkArrayBase<class hkpShape *>::getSize(void) const;
// public: struct hkpVehicleSuspension::SuspensionWheelParameters & hkArrayBase<struct hkpVehicleSuspension::SuspensionWheelParameters>::operator[](int);
// public: void hkArray<struct hkpVehicleLinearCastWheelCollide::WheelState, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct hkpVehicleLinearCastWheelCollide::WheelState>(struct hkpVehicleLinearCastWheelCollide::WheelState *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkpVehicleLinearCastWheelCollide::WheelState>(struct hkpVehicleLinearCastWheelCollide::WheelState *, int, struct hkTraitBool<0>);
// public: hkpVehicleLinearCastWheelCollide::WheelState::WheelState(void);
// public: int hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::clear(void);

//public: hkpVehicleLinearCastWheelCollide::hkpVehicleLinearCastWheelCollide(void)
//{
//    mangled_ppc("??0hkpVehicleLinearCastWheelCollide@@QAA@XZ");
//};

//public: void hkpVehicleLinearCastWheelCollide::setWheelShapes(class hkpVehicleInstance const *, class hkArray<class hkpShape *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?setWheelShapes@hkpVehicleLinearCastWheelCollide@@QAAXPBVhkpVehicleInstance@@ABV?$hkArray@PAVhkpShape@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: class hkpCylinderShape * hkpVehicleLinearCastWheelCollide::createWheelShape(float, float)
//{
//    mangled_ppc("?createWheelShape@hkpVehicleLinearCastWheelCollide@@QAAPAVhkpCylinderShape@@MM@Z");
//};

//public: virtual void hkpVehicleLinearCastWheelCollide::init(class hkpVehicleInstance const *)
//{
//    mangled_ppc("?init@hkpVehicleLinearCastWheelCollide@@UAAXPBVhkpVehicleInstance@@@Z");
//};

//public: virtual hkpVehicleLinearCastWheelCollide::~hkpVehicleLinearCastWheelCollide(void)
//{
//    mangled_ppc("??1hkpVehicleLinearCastWheelCollide@@UAA@XZ");
//};

//public: virtual void hkpVehicleLinearCastWheelCollide::collideWheels(float, class hkpVehicleInstance const *, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput *)
//{
//    mangled_ppc("?collideWheels@hkpVehicleLinearCastWheelCollide@@UAAXMPBVhkpVehicleInstance@@PAUCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@Z");
//};

//public: virtual void hkpVehicleLinearCastWheelCollide::updateBeforeCollisionDetection(class hkpVehicleInstance const *)
//{
//    mangled_ppc("?updateBeforeCollisionDetection@hkpVehicleLinearCastWheelCollide@@UAAXPBVhkpVehicleInstance@@@Z");
//};

//public: virtual class hkpVehicleWheelCollide * hkpVehicleLinearCastWheelCollide::clone(class hkpRigidBody const &, class hkArray<class hkpPhantom *, struct hkContainerHeapAllocator> const &) const
//{
//    mangled_ppc("?clone@hkpVehicleLinearCastWheelCollide@@UBAPAVhkpVehicleWheelCollide@@ABVhkpRigidBody@@ABV?$hkArray@PAVhkpPhantom@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual int hkpVehicleLinearCastWheelCollide::getTotalNumCommands(void) const
//{
//    mangled_ppc("?getTotalNumCommands@hkpVehicleLinearCastWheelCollide@@UBAHXZ");
//};

//public: virtual int hkpVehicleLinearCastWheelCollide::getNumCommands(unsigned char) const
//{
//    mangled_ppc("?getNumCommands@hkpVehicleLinearCastWheelCollide@@UBAHE@Z");
//};

//public: virtual int hkpVehicleLinearCastWheelCollide::buildLinearCastCommands(class hkpVehicleInstance const *, class hkpCollisionFilter const *, class hkpCollidable *, struct hkpPairLinearCastCommand *, struct hkpRootCdPoint *) const
//{
//    mangled_ppc("?buildLinearCastCommands@hkpVehicleLinearCastWheelCollide@@UBAHPBVhkpVehicleInstance@@PBVhkpCollisionFilter@@PAVhkpCollidable@@PAUhkpPairLinearCastCommand@@PAUhkpRootCdPoint@@@Z");
//};

//public: virtual class hkBool hkpVehicleLinearCastWheelCollide::castSingleWheel(class hkpVehicleInstance const *, unsigned char, struct hkpRootCdPoint &) const
//{
//    mangled_ppc("?castSingleWheel@hkpVehicleLinearCastWheelCollide@@UBA?AVhkBool@@PBVhkpVehicleInstance@@EAAUhkpRootCdPoint@@@Z");
//};

//public: virtual struct hkpRootCdPoint const * hkpVehicleLinearCastWheelCollide::determineNearestHit(unsigned char, struct hkpPairLinearCastCommand const *) const
//{
//    mangled_ppc("?determineNearestHit@hkpVehicleLinearCastWheelCollide@@UBAPBUhkpRootCdPoint@@EPBUhkpPairLinearCastCommand@@@Z");
//};

//public: virtual void hkpVehicleLinearCastWheelCollide::getCollisionOutputFromCastResult(class hkpVehicleInstance const *, unsigned char, struct hkpRootCdPoint const &, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput &) const
//{
//    mangled_ppc("?getCollisionOutputFromCastResult@hkpVehicleLinearCastWheelCollide@@UBAXPBVhkpVehicleInstance@@EABUhkpRootCdPoint@@AAUCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@Z");
//};

//public: virtual void hkpVehicleLinearCastWheelCollide::getCollisionOutputWithoutHit(class hkpVehicleInstance const *, unsigned char, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput &) const
//{
//    mangled_ppc("?getCollisionOutputWithoutHit@hkpVehicleLinearCastWheelCollide@@UBAXPBVhkpVehicleInstance@@EAAUCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@Z");
//};

//public: void hkpVehicleLinearCastWheelCollide::calcAabbOfWheel(class hkpVehicleInstance const *, unsigned char, class hkAabb &) const
//{
//    mangled_ppc("?calcAabbOfWheel@hkpVehicleLinearCastWheelCollide@@QBAXPBVhkpVehicleInstance@@EAAVhkAabb@@@Z");
//};

//public: void hkpVehicleLinearCastWheelCollide::updateWheelState(class hkpVehicleInstance const *, unsigned char)
//{
//    mangled_ppc("?updateWheelState@hkpVehicleLinearCastWheelCollide@@QAAXPBVhkpVehicleInstance@@E@Z");
//};

//public: virtual void hkpVehicleLinearCastWheelCollide::getPhantoms(class hkArray<class hkpPhantom *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?getPhantoms@hkpVehicleLinearCastWheelCollide@@UAAXAAV?$hkArray@PAVhkpPhantom@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void hkpVehicleLinearCastWheelCollide::addToWorld(class hkpWorld *)
//{
//    mangled_ppc("?addToWorld@hkpVehicleLinearCastWheelCollide@@UAAXPAVhkpWorld@@@Z");
//};

//public: virtual void hkpVehicleLinearCastWheelCollide::removeFromWorld(void)
//{
//    mangled_ppc("?removeFromWorld@hkpVehicleLinearCastWheelCollide@@UAAXXZ");
//};

//public: virtual void hkpVehicleLinearCastWheelCollide::setCollisionFilterInfo(unsigned int)
//{
//    mangled_ppc("?setCollisionFilterInfo@hkpVehicleLinearCastWheelCollide@@UAAXI@Z");
//};

//public: virtual void hkpVehicleLinearCastWheelCollide::wheelCollideCallback(class hkpVehicleInstance const *, unsigned char, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput &)
//{
//    mangled_ppc("?wheelCollideCallback@hkpVehicleLinearCastWheelCollide@@UAAXPBVhkpVehicleInstance@@EAAUCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@Z");
//};

//public: void hkpVehicleLinearCastWheelCollide::centerWheelContactPoint(class hkpVehicleInstance const *, unsigned char, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput &) const
//{
//    mangled_ppc("?centerWheelContactPoint@hkpVehicleLinearCastWheelCollide@@QBAXPBVhkpVehicleInstance@@EAAUCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@Z");
//};

//public: hkpRejectChassisListener::hkpRejectChassisListener(void)
//{
//    mangled_ppc("??0hkpRejectChassisListener@@QAA@XZ");
//};

//protected: hkpVehicleWheelCollide::hkpVehicleWheelCollide(void)
//{
//    mangled_ppc("??0hkpVehicleWheelCollide@@IAA@XZ");
//};

//public: unsigned char hkpVehicleInstance::getNumWheels(void) const
//{
//    mangled_ppc("?getNumWheels@hkpVehicleInstance@@QBAEXZ");
//};

//public: class hkpRigidBody * hkpVehicleInstance::getChassis(void) const
//{
//    mangled_ppc("?getChassis@hkpVehicleInstance@@QBAPAVhkpRigidBody@@XZ");
//};

//public: static void * hkpVehicleLinearCastWheelCollide::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpVehicleLinearCastWheelCollide@@SAPAXI@Z");
//};

//public: class hkArray<class hkpCollidable *, struct hkContainerHeapAllocator> & hkpAabbPhantom::getOverlappingCollidables(void)
//{
//    mangled_ppc("?getOverlappingCollidables@hkpAabbPhantom@@QAAAAV?$hkArray@PAVhkpCollidable@@UhkContainerHeapAllocator@@@@XZ");
//};

//public: hkArray<struct hkpVehicleLinearCastWheelCollide::WheelState, struct hkContainerHeapAllocator>::hkArray<struct hkpVehicleLinearCastWheelCollide::WheelState, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UWheelState@hkpVehicleLinearCastWheelCollide@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpVehicleLinearCastWheelCollide::WheelState, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UWheelState@hkpVehicleLinearCastWheelCollide@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UWheelState@hkpVehicleLinearCastWheelCollide@@@@QAA@XZ");
//};

//public: struct hkpVehicleLinearCastWheelCollide::WheelState const & hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UWheelState@hkpVehicleLinearCastWheelCollide@@@@QBAABUWheelState@hkpVehicleLinearCastWheelCollide@@H@Z");
//};

//public: struct hkpVehicleLinearCastWheelCollide::WheelState & hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UWheelState@hkpVehicleLinearCastWheelCollide@@@@QAAAAUWheelState@hkpVehicleLinearCastWheelCollide@@H@Z");
//};

//public: int hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UWheelState@hkpVehicleLinearCastWheelCollide@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UWheelState@hkpVehicleLinearCastWheelCollide@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct hkpVehicleLinearCastWheelCollide::WheelState, struct hkContainerHeapAllocator>::~hkArray<struct hkpVehicleLinearCastWheelCollide::WheelState, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UWheelState@hkpVehicleLinearCastWheelCollide@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::~hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UWheelState@hkpVehicleLinearCastWheelCollide@@@@QAA@XZ");
//};

//public: class hkpShape *const & hkArrayBase<class hkpShape *>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpShape@@@@QBAABQAVhkpShape@@H@Z");
//};

//public: int hkArrayBase<class hkpShape *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpShape@@@@QBAHXZ");
//};

//public: struct hkpVehicleSuspension::SuspensionWheelParameters & hkArrayBase<struct hkpVehicleSuspension::SuspensionWheelParameters>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@USuspensionWheelParameters@hkpVehicleSuspension@@@@QAAAAUSuspensionWheelParameters@hkpVehicleSuspension@@H@Z");
//};

//public: void hkArray<struct hkpVehicleLinearCastWheelCollide::WheelState, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UWheelState@hkpVehicleLinearCastWheelCollide@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UWheelState@hkpVehicleLinearCastWheelCollide@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UWheelState@hkpVehicleLinearCastWheelCollide@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpVehicleLinearCastWheelCollide::WheelState>(struct hkpVehicleLinearCastWheelCollide::WheelState *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UWheelState@hkpVehicleLinearCastWheelCollide@@@hkArrayUtil@@SAXPAUWheelState@hkpVehicleLinearCastWheelCollide@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpVehicleLinearCastWheelCollide::WheelState>(struct hkpVehicleLinearCastWheelCollide::WheelState *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UWheelState@hkpVehicleLinearCastWheelCollide@@@hkArrayUtil@@SAXPAUWheelState@hkpVehicleLinearCastWheelCollide@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkpVehicleLinearCastWheelCollide::WheelState::WheelState(void)
//{
//    mangled_ppc("??0WheelState@hkpVehicleLinearCastWheelCollide@@QAA@XZ");
//};

//public: int hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UWheelState@hkpVehicleLinearCastWheelCollide@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpVehicleLinearCastWheelCollide::WheelState>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UWheelState@hkpVehicleLinearCastWheelCollide@@@@QAAXXZ");
//};

