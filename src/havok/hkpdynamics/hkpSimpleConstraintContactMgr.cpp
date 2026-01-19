/* ---------- headers */

#include "havok\hkpdynamics\hkpSimpleConstraintContactMgr.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkpSimpleConstraintContactMgr::`RTTI Complete Object Locator'; // "??_R4hkpSimpleConstraintContactMgr@@6B@"
// hkpSimpleConstraintContactMgr::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpSimpleConstraintContactMgr@@8"
// hkpSimpleConstraintContactMgr::`RTTI Base Class Array'; // "??_R2hkpSimpleConstraintContactMgr@@8"
// hkpSimpleConstraintContactMgr::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpSimpleConstraintContactMgr@@8"
// hkpDynamicsContactMgr::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpDynamicsContactMgr@@8"
// hkpDynamicsContactMgr::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpDynamicsContactMgr@@8"
// hkpDynamicsContactMgr::`RTTI Base Class Array'; // "??_R2hkpDynamicsContactMgr@@8"
// const hkpDynamicsContactMgr::`RTTI Complete Object Locator'; // "??_R4hkpDynamicsContactMgr@@6B@"
// const hkpSimpleContactConstraintData::`RTTI Complete Object Locator'; // "??_R4hkpSimpleContactConstraintData@@6B@"
// hkpSimpleContactConstraintData::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpSimpleContactConstraintData@@8"
// hkpSimpleContactConstraintData::`RTTI Base Class Array'; // "??_R2hkpSimpleContactConstraintData@@8"
// hkpSimpleContactConstraintData::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpSimpleContactConstraintData@@8"
// const hkpSimpleConstraintContactMgr::Factory::`RTTI Complete Object Locator'; // "??_R4Factory@hkpSimpleConstraintContactMgr@@6B@"
// hkpSimpleConstraintContactMgr::Factory::`RTTI Class Hierarchy Descriptor'; // "??_R3Factory@hkpSimpleConstraintContactMgr@@8"
// hkpSimpleConstraintContactMgr::Factory::`RTTI Base Class Array'; // "??_R2Factory@hkpSimpleConstraintContactMgr@@8"
// hkpSimpleConstraintContactMgr::Factory::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@Factory@hkpSimpleConstraintContactMgr@@8"
// class hkpSimpleConstraintContactMgr::`RTTI Type Descriptor'; // "??_R0?AVhkpSimpleConstraintContactMgr@@@8"
// class hkpDynamicsContactMgr::`RTTI Type Descriptor'; // "??_R0?AVhkpDynamicsContactMgr@@@8"
// class hkpSimpleContactConstraintData::`RTTI Type Descriptor'; // "??_R0?AVhkpSimpleContactConstraintData@@@8"
// class hkpSimpleConstraintContactMgr::Factory::`RTTI Type Descriptor'; // "??_R0?AVFactory@hkpSimpleConstraintContactMgr@@@8"
// class hkClass const hkpSimpleConstraintContactMgrClass; // "?hkpSimpleConstraintContactMgrClass@@3VhkClass@@B"

// public: virtual class hkpConstraintInstance * hkpSimpleConstraintContactMgr::getConstraintInstance(void);
// public: hkpSimpleConstraintContactMgr::hkpSimpleConstraintContactMgr(class hkpWorld *, class hkpRigidBody *, class hkpRigidBody *);
// public: virtual hkpSimpleConstraintContactMgr::~hkpSimpleConstraintContactMgr(void);
// public: virtual enum hkResult hkpSimpleConstraintContactMgr::reserveContactPointsImpl(int);
// public: virtual void hkpSimpleConstraintContactMgr::removeToiImpl(class hkpConstraintOwner &, class hkpContactPointProperties &);
// public: virtual void hkpSimpleConstraintContactMgr::fireCallbacksForEarliestToi(struct hkpToiEvent &, float &);
// public: virtual void hkpSimpleConstraintContactMgr::confirmToi(struct hkpToiEvent &, float, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &);
// public: virtual enum hkpContactMgr::ToiAccept hkpSimpleConstraintContactMgr::addToiImpl(class hkpCdBody const &, class hkpCdBody const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &, float, class hkContactPoint &, class hkpGskCache const *, float &, class hkpContactPointProperties &);
// public: virtual unsigned short hkpSimpleConstraintContactMgr::addContactPointImpl(class hkpCdBody const &, class hkpCdBody const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &, class hkpGskCache const *, class hkContactPoint &);
// public: int hkpSimpleContactConstraintData::freeContactPoint(class hkpConstraintOwner &, unsigned short);
// public: virtual void hkpSimpleConstraintContactMgr::removeContactPointImpl(unsigned short, class hkpConstraintOwner &);
// public: virtual class hkContactPoint * hkpSimpleConstraintContactMgr::getContactPoint(unsigned short);
// public: virtual class hkpContactPointProperties * hkpSimpleConstraintContactMgr::getContactPointProperties(unsigned short);
// public: virtual void hkpSimpleConstraintContactMgr::getAllContactPointIds(class hkArray<unsigned short, struct hkContainerHeapAllocator> &) const;
// public: virtual void hkpSimpleConstraintContactMgr::toiCollisionResponseBeginCallback(class hkContactPoint const &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &);
// public: virtual void hkpSimpleConstraintContactMgr::toiCollisionResponseEndCallback(class hkContactPoint const &, float, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &);
// public: virtual void hkpSimpleConstraintContactMgr::processContactImpl(class hkpCollidable const &, class hkpCollidable const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionData &);
// public: hkpSimpleConstraintContactMgr::Factory::Factory(class hkpWorld *);
// public: virtual class hkpContactMgr * hkpSimpleConstraintContactMgr::Factory::createContactMgr(class hkpCollidable const &, class hkpCollidable const &, struct hkpCollisionInput const &);
// protected: virtual void hkpSimpleConstraintContactMgr::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const;
// public: hkpDynamicsContactMgr::hkpDynamicsContactMgr(enum hkpContactMgr::Type);
// public: virtual class hkpContactPointProperties * hkpDynamicsContactMgr::getContactPointProperties(unsigned short);
// public: virtual class hkContactPoint * hkpDynamicsContactMgr::getContactPoint(unsigned short);
// public: virtual void hkpDynamicsContactMgr::getAllContactPointIds(class hkArray<unsigned short, struct hkContainerHeapAllocator> &) const;
// public: virtual void hkpDynamicsContactMgr::toiCollisionResponseBeginCallback(class hkContactPoint const &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &);
// public: virtual void hkpDynamicsContactMgr::toiCollisionResponseEndCallback(class hkContactPoint const &, float, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &);
// public: virtual class hkpConstraintInstance * hkpDynamicsContactMgr::getConstraintInstance(void);
// public: virtual void hkpDynamicsContactMgr::fireCallbacksForEarliestToi(struct hkpToiEvent &, float &);
// public: virtual void hkpDynamicsContactMgr::confirmToi(struct hkpToiEvent &, float, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &);
// merged_846A7988;
// public: virtual hkpDynamicsContactMgr::~hkpDynamicsContactMgr(void);
// public: virtual void hkpSimpleConstraintContactMgr::cleanup(void);
// public: virtual enum hkpContactMgr::Type hkpSimpleConstraintContactMgr::getType(void) const;
// protected: virtual class hkClass const * hkpSimpleConstraintContactMgr::getClassType(void) const;
// merged_846A7A80;
// public: virtual hkpSimpleContactConstraintData::~hkpSimpleContactConstraintData(void);
// public: hkpDynamicsCpIdMgr::~hkpDynamicsCpIdMgr(void);
// merged_846A7B50;
// public: hkpContactPointRemovedEvent::hkpContactPointRemovedEvent(unsigned short, class hkpDynamicsContactMgr *, class hkpConstraintOwner *, class hkpContactPointProperties *, class hkpEntity *, class hkpEntity *);
// void hkFireContactPointRemovedCallback(class hkpWorld *, class hkpEntity *, class hkpEntity *, struct hkpContactPointRemovedEvent &);
// public: static void hkpEntityCallbackUtil::fireContactPointRemoved(class hkpEntity *, struct hkpContactPointRemovedEvent &);
// public: hkpToiPointAddedEvent::hkpToiPointAddedEvent(class hkpDynamicsContactMgr *, struct hkpProcessCollisionInput const *, struct hkpProcessCollisionOutput *, class hkpCdBody const *, class hkpCdBody const *, class hkContactPoint *, class hkpGskCache const *, class hkpContactPointProperties *, float, float);
// protected: class hkpRigidBody * hkpSimpleConstraintContactMgr::setContactPointProperties(class hkpCdBody const &, class hkpCdBody const &, int, class hkpContactPointProperties *);
// public: bool hkpEntity::areContactListenersAdded(void) const;
// public: void hkpDynamicsCpIdMgr::freeId(int);
// public: void hkpDynamicsCpIdMgr::decrementValuesGreater(int);
// public: unsigned char hkpDynamicsCpIdMgr::getValueAt(int) const;
// public: static void hkpSimpleContactConstraintAtomUtil::removeAtAndCopy(struct hkpSimpleContactConstraintAtom *, int);
// public: class hkpContactPointProperties * hkpSimpleContactConstraintData::getContactPointProperties(int);
// public: class hkContactPoint & hkpSimpleContactConstraintData::getContactPoint(int);
// public: void hkpDynamicsCpIdMgr::getAllUsedIds(class hkArray<unsigned short, struct hkContainerHeapAllocator> &) const;
// public: void hkVector4::storeUncached(void *) const;
// public: unsigned short hkpEntity::getContactPointCallbackDelay(void) const;
// public: struct hkpProcessCdPoint * hkpProcessCollisionData::getFirstContactPoint(void);
// public: hkpContactProcessEvent::hkpContactProcessEvent(class hkpDynamicsContactMgr *, class hkpCollidable const *, class hkpCollidable const *, struct hkpProcessCollisionData *);
// void hkFireContactProcessCallback(class hkpWorld *, class hkpEntity *, class hkpEntity *, struct hkpContactProcessEvent &);
// public: static void hkpEntityCallbackUtil::fireContactProcess(class hkpEntity *, struct hkpContactProcessEvent &);
// merged_846A8740;
// public: virtual hkpSimpleConstraintContactMgr::Factory::~Factory(void);
// public: static void * hkpContactMgr::operator new(unsigned int);
// public: hkPadSpu<class hkBool>::hkPadSpu<class hkBool>(class hkBool);
// public: class hkpConstraintOwner * hkPadSpu<class hkpConstraintOwner *>::operator->(void) const;
// public: hkInplaceArray<unsigned char, 8, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned char, 8, struct hkContainerHeapAllocator>(void);
// class hkpContactPointProperties * hkAddByteOffset<class hkpContactPointProperties>(class hkpContactPointProperties *, long);
// class hkpRigidBody * hkSelectOther<class hkpRigidBody *>(class hkpRigidBody *, class hkpRigidBody *, class hkpRigidBody *);

//public: virtual class hkpConstraintInstance * hkpSimpleConstraintContactMgr::getConstraintInstance(void)
//{
//    mangled_ppc("?getConstraintInstance@hkpSimpleConstraintContactMgr@@UAAPAVhkpConstraintInstance@@XZ");
//};

//public: hkpSimpleConstraintContactMgr::hkpSimpleConstraintContactMgr(class hkpWorld *, class hkpRigidBody *, class hkpRigidBody *)
//{
//    mangled_ppc("??0hkpSimpleConstraintContactMgr@@QAA@PAVhkpWorld@@PAVhkpRigidBody@@1@Z");
//};

//public: virtual hkpSimpleConstraintContactMgr::~hkpSimpleConstraintContactMgr(void)
//{
//    mangled_ppc("??1hkpSimpleConstraintContactMgr@@UAA@XZ");
//};

//public: virtual enum hkResult hkpSimpleConstraintContactMgr::reserveContactPointsImpl(int)
//{
//    mangled_ppc("?reserveContactPointsImpl@hkpSimpleConstraintContactMgr@@UAA?AW4hkResult@@H@Z");
//};

//public: virtual void hkpSimpleConstraintContactMgr::removeToiImpl(class hkpConstraintOwner &, class hkpContactPointProperties &)
//{
//    mangled_ppc("?removeToiImpl@hkpSimpleConstraintContactMgr@@UAAXAAVhkpConstraintOwner@@AAVhkpContactPointProperties@@@Z");
//};

//public: virtual void hkpSimpleConstraintContactMgr::fireCallbacksForEarliestToi(struct hkpToiEvent &, float &)
//{
//    mangled_ppc("?fireCallbacksForEarliestToi@hkpSimpleConstraintContactMgr@@UAAXAAUhkpToiEvent@@AAM@Z");
//};

//public: virtual void hkpSimpleConstraintContactMgr::confirmToi(struct hkpToiEvent &, float, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?confirmToi@hkpSimpleConstraintContactMgr@@UAAXAAUhkpToiEvent@@MAAV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual enum hkpContactMgr::ToiAccept hkpSimpleConstraintContactMgr::addToiImpl(class hkpCdBody const &, class hkpCdBody const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &, float, class hkContactPoint &, class hkpGskCache const *, float &, class hkpContactPointProperties &)
//{
//    mangled_ppc("?addToiImpl@hkpSimpleConstraintContactMgr@@UAA?AW4ToiAccept@hkpContactMgr@@ABVhkpCdBody@@0ABUhkpProcessCollisionInput@@AAUhkpProcessCollisionOutput@@MAAVhkContactPoint@@PBVhkpGskCache@@AAMAAVhkpContactPointProperties@@@Z");
//};

//public: virtual unsigned short hkpSimpleConstraintContactMgr::addContactPointImpl(class hkpCdBody const &, class hkpCdBody const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &, class hkpGskCache const *, class hkContactPoint &)
//{
//    mangled_ppc("?addContactPointImpl@hkpSimpleConstraintContactMgr@@UAAGABVhkpCdBody@@0ABUhkpProcessCollisionInput@@AAUhkpProcessCollisionOutput@@PBVhkpGskCache@@AAVhkContactPoint@@@Z");
//};

//public: int hkpSimpleContactConstraintData::freeContactPoint(class hkpConstraintOwner &, unsigned short)
//{
//    mangled_ppc("?freeContactPoint@hkpSimpleContactConstraintData@@QAAHAAVhkpConstraintOwner@@G@Z");
//};

//public: virtual void hkpSimpleConstraintContactMgr::removeContactPointImpl(unsigned short, class hkpConstraintOwner &)
//{
//    mangled_ppc("?removeContactPointImpl@hkpSimpleConstraintContactMgr@@UAAXGAAVhkpConstraintOwner@@@Z");
//};

//public: virtual class hkContactPoint * hkpSimpleConstraintContactMgr::getContactPoint(unsigned short)
//{
//    mangled_ppc("?getContactPoint@hkpSimpleConstraintContactMgr@@UAAPAVhkContactPoint@@G@Z");
//};

//public: virtual class hkpContactPointProperties * hkpSimpleConstraintContactMgr::getContactPointProperties(unsigned short)
//{
//    mangled_ppc("?getContactPointProperties@hkpSimpleConstraintContactMgr@@UAAPAVhkpContactPointProperties@@G@Z");
//};

//public: virtual void hkpSimpleConstraintContactMgr::getAllContactPointIds(class hkArray<unsigned short, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?getAllContactPointIds@hkpSimpleConstraintContactMgr@@UBAXAAV?$hkArray@GUhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void hkpSimpleConstraintContactMgr::toiCollisionResponseBeginCallback(class hkContactPoint const &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &)
//{
//    mangled_ppc("?toiCollisionResponseBeginCallback@hkpSimpleConstraintContactMgr@@UAAXABVhkContactPoint@@AAUhkpSimpleConstraintInfoInitInput@@AAUhkpBodyVelocity@@12@Z");
//};

//public: virtual void hkpSimpleConstraintContactMgr::toiCollisionResponseEndCallback(class hkContactPoint const &, float, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &)
//{
//    mangled_ppc("?toiCollisionResponseEndCallback@hkpSimpleConstraintContactMgr@@UAAXABVhkContactPoint@@MAAUhkpSimpleConstraintInfoInitInput@@AAUhkpBodyVelocity@@12@Z");
//};

//public: virtual void hkpSimpleConstraintContactMgr::processContactImpl(class hkpCollidable const &, class hkpCollidable const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionData &)
//{
//    mangled_ppc("?processContactImpl@hkpSimpleConstraintContactMgr@@UAAXABVhkpCollidable@@0ABUhkpProcessCollisionInput@@AAUhkpProcessCollisionData@@@Z");
//};

//public: hkpSimpleConstraintContactMgr::Factory::Factory(class hkpWorld *)
//{
//    mangled_ppc("??0Factory@hkpSimpleConstraintContactMgr@@QAA@PAVhkpWorld@@@Z");
//};

//public: virtual class hkpContactMgr * hkpSimpleConstraintContactMgr::Factory::createContactMgr(class hkpCollidable const &, class hkpCollidable const &, struct hkpCollisionInput const &)
//{
//    mangled_ppc("?createContactMgr@Factory@hkpSimpleConstraintContactMgr@@UAAPAVhkpContactMgr@@ABVhkpCollidable@@0ABUhkpCollisionInput@@@Z");
//};

//protected: virtual void hkpSimpleConstraintContactMgr::calcContentStatistics(class hkStatisticsCollector *, class hkClass const *) const
//{
//    mangled_ppc("?calcContentStatistics@hkpSimpleConstraintContactMgr@@MBAXPAVhkStatisticsCollector@@PBVhkClass@@@Z");
//};

//public: hkpDynamicsContactMgr::hkpDynamicsContactMgr(enum hkpContactMgr::Type)
//{
//    mangled_ppc("??0hkpDynamicsContactMgr@@QAA@W4Type@hkpContactMgr@@@Z");
//};

//public: virtual class hkpContactPointProperties * hkpDynamicsContactMgr::getContactPointProperties(unsigned short)
//{
//    mangled_ppc("?getContactPointProperties@hkpDynamicsContactMgr@@UAAPAVhkpContactPointProperties@@G@Z");
//};

//public: virtual class hkContactPoint * hkpDynamicsContactMgr::getContactPoint(unsigned short)
//{
//    mangled_ppc("?getContactPoint@hkpDynamicsContactMgr@@UAAPAVhkContactPoint@@G@Z");
//};

//public: virtual void hkpDynamicsContactMgr::getAllContactPointIds(class hkArray<unsigned short, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?getAllContactPointIds@hkpDynamicsContactMgr@@UBAXAAV?$hkArray@GUhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void hkpDynamicsContactMgr::toiCollisionResponseBeginCallback(class hkContactPoint const &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &)
//{
//    mangled_ppc("?toiCollisionResponseBeginCallback@hkpDynamicsContactMgr@@UAAXABVhkContactPoint@@AAUhkpSimpleConstraintInfoInitInput@@AAUhkpBodyVelocity@@12@Z");
//};

//public: virtual void hkpDynamicsContactMgr::toiCollisionResponseEndCallback(class hkContactPoint const &, float, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &, struct hkpSimpleConstraintInfoInitInput &, struct hkpBodyVelocity &)
//{
//    mangled_ppc("?toiCollisionResponseEndCallback@hkpDynamicsContactMgr@@UAAXABVhkContactPoint@@MAAUhkpSimpleConstraintInfoInitInput@@AAUhkpBodyVelocity@@12@Z");
//};

//public: virtual class hkpConstraintInstance * hkpDynamicsContactMgr::getConstraintInstance(void)
//{
//    mangled_ppc("?getConstraintInstance@hkpDynamicsContactMgr@@UAAPAVhkpConstraintInstance@@XZ");
//};

//public: virtual void hkpDynamicsContactMgr::fireCallbacksForEarliestToi(struct hkpToiEvent &, float &)
//{
//    mangled_ppc("?fireCallbacksForEarliestToi@hkpDynamicsContactMgr@@UAAXAAUhkpToiEvent@@AAM@Z");
//};

//public: virtual void hkpDynamicsContactMgr::confirmToi(struct hkpToiEvent &, float, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?confirmToi@hkpDynamicsContactMgr@@UAAXAAUhkpToiEvent@@MAAV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@@Z");
//};

//merged_846A7988
//{
//    mangled_ppc("merged_846A7988");
//};

//public: virtual hkpDynamicsContactMgr::~hkpDynamicsContactMgr(void)
//{
//    mangled_ppc("??1hkpDynamicsContactMgr@@UAA@XZ");
//};

//public: virtual void hkpSimpleConstraintContactMgr::cleanup(void)
//{
//    mangled_ppc("?cleanup@hkpSimpleConstraintContactMgr@@UAAXXZ");
//};

//public: virtual enum hkpContactMgr::Type hkpSimpleConstraintContactMgr::getType(void) const
//{
//    mangled_ppc("?getType@hkpSimpleConstraintContactMgr@@UBA?AW4Type@hkpContactMgr@@XZ");
//};

//protected: virtual class hkClass const * hkpSimpleConstraintContactMgr::getClassType(void) const
//{
//    mangled_ppc("?getClassType@hkpSimpleConstraintContactMgr@@MBAPBVhkClass@@XZ");
//};

//merged_846A7A80
//{
//    mangled_ppc("merged_846A7A80");
//};

//public: virtual hkpSimpleContactConstraintData::~hkpSimpleContactConstraintData(void)
//{
//    mangled_ppc("??1hkpSimpleContactConstraintData@@UAA@XZ");
//};

//public: hkpDynamicsCpIdMgr::~hkpDynamicsCpIdMgr(void)
//{
//    mangled_ppc("??1hkpDynamicsCpIdMgr@@QAA@XZ");
//};

//merged_846A7B50
//{
//    mangled_ppc("merged_846A7B50");
//};

//public: hkpContactPointRemovedEvent::hkpContactPointRemovedEvent(unsigned short, class hkpDynamicsContactMgr *, class hkpConstraintOwner *, class hkpContactPointProperties *, class hkpEntity *, class hkpEntity *)
//{
//    mangled_ppc("??0hkpContactPointRemovedEvent@@QAA@GPAVhkpDynamicsContactMgr@@PAVhkpConstraintOwner@@PAVhkpContactPointProperties@@PAVhkpEntity@@3@Z");
//};

//void hkFireContactPointRemovedCallback(class hkpWorld *, class hkpEntity *, class hkpEntity *, struct hkpContactPointRemovedEvent &)
//{
//    mangled_ppc("?hkFireContactPointRemovedCallback@@YAXPAVhkpWorld@@PAVhkpEntity@@1AAUhkpContactPointRemovedEvent@@@Z");
//};

//public: static void hkpEntityCallbackUtil::fireContactPointRemoved(class hkpEntity *, struct hkpContactPointRemovedEvent &)
//{
//    mangled_ppc("?fireContactPointRemoved@hkpEntityCallbackUtil@@SAXPAVhkpEntity@@AAUhkpContactPointRemovedEvent@@@Z");
//};

//public: hkpToiPointAddedEvent::hkpToiPointAddedEvent(class hkpDynamicsContactMgr *, struct hkpProcessCollisionInput const *, struct hkpProcessCollisionOutput *, class hkpCdBody const *, class hkpCdBody const *, class hkContactPoint *, class hkpGskCache const *, class hkpContactPointProperties *, float, float)
//{
//    mangled_ppc("??0hkpToiPointAddedEvent@@QAA@PAVhkpDynamicsContactMgr@@PBUhkpProcessCollisionInput@@PAUhkpProcessCollisionOutput@@PBVhkpCdBody@@3PAVhkContactPoint@@PBVhkpGskCache@@PAVhkpContactPointProperties@@MM@Z");
//};

//protected: class hkpRigidBody * hkpSimpleConstraintContactMgr::setContactPointProperties(class hkpCdBody const &, class hkpCdBody const &, int, class hkpContactPointProperties *)
//{
//    mangled_ppc("?setContactPointProperties@hkpSimpleConstraintContactMgr@@IAAPAVhkpRigidBody@@ABVhkpCdBody@@0HPAVhkpContactPointProperties@@@Z");
//};

//public: bool hkpEntity::areContactListenersAdded(void) const
//{
//    mangled_ppc("?areContactListenersAdded@hkpEntity@@QBA_NXZ");
//};

//public: void hkpDynamicsCpIdMgr::freeId(int)
//{
//    mangled_ppc("?freeId@hkpDynamicsCpIdMgr@@QAAXH@Z");
//};

//public: void hkpDynamicsCpIdMgr::decrementValuesGreater(int)
//{
//    mangled_ppc("?decrementValuesGreater@hkpDynamicsCpIdMgr@@QAAXH@Z");
//};

//public: unsigned char hkpDynamicsCpIdMgr::getValueAt(int) const
//{
//    mangled_ppc("?getValueAt@hkpDynamicsCpIdMgr@@QBAEH@Z");
//};

//public: static void hkpSimpleContactConstraintAtomUtil::removeAtAndCopy(struct hkpSimpleContactConstraintAtom *, int)
//{
//    mangled_ppc("?removeAtAndCopy@hkpSimpleContactConstraintAtomUtil@@SAXPAUhkpSimpleContactConstraintAtom@@H@Z");
//};

//public: class hkpContactPointProperties * hkpSimpleContactConstraintData::getContactPointProperties(int)
//{
//    mangled_ppc("?getContactPointProperties@hkpSimpleContactConstraintData@@QAAPAVhkpContactPointProperties@@H@Z");
//};

//public: class hkContactPoint & hkpSimpleContactConstraintData::getContactPoint(int)
//{
//    mangled_ppc("?getContactPoint@hkpSimpleContactConstraintData@@QAAAAVhkContactPoint@@H@Z");
//};

//public: void hkpDynamicsCpIdMgr::getAllUsedIds(class hkArray<unsigned short, struct hkContainerHeapAllocator> &) const
//{
//    mangled_ppc("?getAllUsedIds@hkpDynamicsCpIdMgr@@QBAXAAV?$hkArray@GUhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkVector4::storeUncached(void *) const
//{
//    mangled_ppc("?storeUncached@hkVector4@@QBAXPAX@Z");
//};

//public: unsigned short hkpEntity::getContactPointCallbackDelay(void) const
//{
//    mangled_ppc("?getContactPointCallbackDelay@hkpEntity@@QBAGXZ");
//};

//public: struct hkpProcessCdPoint * hkpProcessCollisionData::getFirstContactPoint(void)
//{
//    mangled_ppc("?getFirstContactPoint@hkpProcessCollisionData@@QAAPAUhkpProcessCdPoint@@XZ");
//};

//public: hkpContactProcessEvent::hkpContactProcessEvent(class hkpDynamicsContactMgr *, class hkpCollidable const *, class hkpCollidable const *, struct hkpProcessCollisionData *)
//{
//    mangled_ppc("??0hkpContactProcessEvent@@QAA@PAVhkpDynamicsContactMgr@@PBVhkpCollidable@@1PAUhkpProcessCollisionData@@@Z");
//};

//void hkFireContactProcessCallback(class hkpWorld *, class hkpEntity *, class hkpEntity *, struct hkpContactProcessEvent &)
//{
//    mangled_ppc("?hkFireContactProcessCallback@@YAXPAVhkpWorld@@PAVhkpEntity@@1AAUhkpContactProcessEvent@@@Z");
//};

//public: static void hkpEntityCallbackUtil::fireContactProcess(class hkpEntity *, struct hkpContactProcessEvent &)
//{
//    mangled_ppc("?fireContactProcess@hkpEntityCallbackUtil@@SAXPAVhkpEntity@@AAUhkpContactProcessEvent@@@Z");
//};

//merged_846A8740
//{
//    mangled_ppc("merged_846A8740");
//};

//public: virtual hkpSimpleConstraintContactMgr::Factory::~Factory(void)
//{
//    mangled_ppc("??1Factory@hkpSimpleConstraintContactMgr@@UAA@XZ");
//};

//public: static void * hkpContactMgr::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpContactMgr@@SAPAXI@Z");
//};

//public: hkPadSpu<class hkBool>::hkPadSpu<class hkBool>(class hkBool)
//{
//    mangled_ppc("??0?$hkPadSpu@VhkBool@@@@QAA@VhkBool@@@Z");
//};

//public: class hkpConstraintOwner * hkPadSpu<class hkpConstraintOwner *>::operator->(void) const
//{
//    mangled_ppc("??C?$hkPadSpu@PAVhkpConstraintOwner@@@@QBAPAVhkpConstraintOwner@@XZ");
//};

//public: hkInplaceArray<unsigned char, 8, struct hkContainerHeapAllocator>::~hkInplaceArray<unsigned char, 8, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@E$07UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//class hkpContactPointProperties * hkAddByteOffset<class hkpContactPointProperties>(class hkpContactPointProperties *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@VhkpContactPointProperties@@@@YAPAVhkpContactPointProperties@@PAV0@J@Z");
//};

//class hkpRigidBody * hkSelectOther<class hkpRigidBody *>(class hkpRigidBody *, class hkpRigidBody *, class hkpRigidBody *)
//{
//    mangled_ppc("??$hkSelectOther@PAVhkpRigidBody@@@@YAPAVhkpRigidBody@@PAV0@00@Z");
//};

