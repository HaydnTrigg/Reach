/* ---------- headers */

#include "havok\hkputilities\hkpPoweredChainMapper.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static class hkpPoweredChainMapper * hkpPoweredChainMapper::buildChainMapper(struct hkpPoweredChainMapper::Config, class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> const &, class hkArray<struct hkpPoweredChainMapper::ChainEndpoints, struct hkContainerHeapAllocator> const &, class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> *);
// public: virtual hkpPoweredChainMapper::~hkpPoweredChainMapper(void);
// public: void hkpPoweredChainMapper::setForceLimits(int, int, float, float);
// public: void hkpPoweredChainMapper::getMotors(int, int, class hkArray<class hkpConstraintMotor *, struct hkContainerHeapAllocator> &);
// public: void hkpPoweredChainMapper::setMotors(int, int, class hkpConstraintMotor *);
// public: void hkpPoweredChainMapper::setTargetOrientation(int, class hkQuaternion const &);
// public: static void * hkpPoweredChainMapper::operator new(unsigned int);
// private: hkpPoweredChainMapper::hkpPoweredChainMapper(void);
// public: class hkpConstraintChainData * hkpConstraintChainInstance::getData(void) const;
// public: hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>::~hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>(void);
// public: enum hkpConstraintMotor::MotorType hkpConstraintMotor::getType(void) const;
// public: hkArray<struct hkpPoweredChainMapper::LinkInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpPoweredChainMapper::LinkInfo, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkpPoweredChainMapper::LinkInfo, struct hkContainerHeapAllocator>::setSize(int);
// public: hkArray<struct hkpPoweredChainMapper::Target, struct hkContainerHeapAllocator>::hkArray<struct hkpPoweredChainMapper::Target, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkpPoweredChainMapper::Target, struct hkContainerHeapAllocator>::setSize(int);
// public: hkArray<class hkpConstraintChainInstance *, struct hkContainerHeapAllocator>::hkArray<class hkpConstraintChainInstance *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpConstraintChainInstance *, struct hkContainerHeapAllocator>::pushBack(class hkpConstraintChainInstance *const &);
// public: hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>::hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>::pushBack(class hkpConstraintInstance *const &);
// public: enum hkpConstraintMotor::MotorType hkEnum<enum hkpConstraintMotor::MotorType, signed char>::operator enum hkpConstraintMotor::MotorType(void) const;
// public: hkArray<struct `anonymous namespace'::hkMapperTargetInfo, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::hkMapperTargetInfo, struct hkContainerHeapAllocator>(void);
// public: struct `anonymous namespace'::hkMapperTargetInfo & hkArray<struct `anonymous namespace'::hkMapperTargetInfo, struct hkContainerHeapAllocator>::expandOne(void);
// public: void hkArray<int, struct hkContainerHeapAllocator>::setSize(int);
// public: hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>::hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>::insert(class hkpConstraintInstance *, int);
// public: class Dummy * hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>::findKey(class hkpConstraintInstance *) const;
// public: int hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>::getValue(class Dummy *) const;
// public: class hkBool hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>::isValid(class Dummy *) const;
// public: hkArray<class hkpConstraintMotor *, struct hkContainerHeapAllocator>::hkArray<class hkpConstraintMotor *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpConstraintMotor *, struct hkContainerHeapAllocator>::pushBack(class hkpConstraintMotor *const &);
// public: hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>(void);
// public: struct hkpPoweredChainMapper::LinkInfo & hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::operator[](int);
// public: int hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::getSize(void) const;
// public: void hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::_setSize(class hkMemoryAllocator &, int);
// public: struct hkpPoweredChainMapper::LinkInfo * hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::begin(void);
// public: hkArray<struct hkpPoweredChainMapper::LinkInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkpPoweredChainMapper::LinkInfo, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::~hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>(void);
// public: hkArrayBase<struct hkpPoweredChainMapper::Target>::hkArrayBase<struct hkpPoweredChainMapper::Target>(void);
// public: struct hkpPoweredChainMapper::Target & hkArrayBase<struct hkpPoweredChainMapper::Target>::operator[](int);
// public: void hkArrayBase<struct hkpPoweredChainMapper::Target>::_setSize(class hkMemoryAllocator &, int);
// public: hkArray<struct hkpPoweredChainMapper::Target, struct hkContainerHeapAllocator>::~hkArray<struct hkpPoweredChainMapper::Target, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpPoweredChainMapper::Target>::~hkArrayBase<struct hkpPoweredChainMapper::Target>(void);
// public: hkArrayBase<class hkpConstraintChainInstance *>::hkArrayBase<class hkpConstraintChainInstance *>(void);
// public: class hkpConstraintChainInstance *& hkArrayBase<class hkpConstraintChainInstance *>::operator[](int);
// public: int hkArrayBase<class hkpConstraintChainInstance *>::getSize(void) const;
// public: void hkArrayBase<class hkpConstraintChainInstance *>::_pushBack(class hkMemoryAllocator &, class hkpConstraintChainInstance *const &);
// public: hkArray<class hkpConstraintChainInstance *, struct hkContainerHeapAllocator>::~hkArray<class hkpConstraintChainInstance *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpConstraintChainInstance *>::~hkArrayBase<class hkpConstraintChainInstance *>(void);
// public: hkArrayBase<class hkpConstraintInstance *>::hkArrayBase<class hkpConstraintInstance *>(void);
// public: class hkpConstraintInstance *& hkArrayBase<class hkpConstraintInstance *>::operator[](int);
// public: void hkArrayBase<class hkpConstraintInstance *>::_pushBack(class hkMemoryAllocator &, class hkpConstraintInstance *const &);
// public: hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>::~hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpConstraintInstance *>::~hkArrayBase<class hkpConstraintInstance *>(void);
// public: hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>(void);
// public: struct `anonymous namespace'::hkMapperTargetInfo & hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::operator[](int);
// public: int hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::getSize(void) const;
// public: struct `anonymous namespace'::hkMapperTargetInfo & hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<struct `anonymous namespace'::hkMapperTargetInfo, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::hkMapperTargetInfo, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::~hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>(void);
// public: int & hkArrayBase<int>::operator[](int);
// public: void hkArrayBase<int>::_setSize(class hkMemoryAllocator &, int);
// public: int * hkArrayBase<int>::begin(void);
// public: struct hkpPoweredChainMapper::ChainEndpoints const & hkArrayBase<struct hkpPoweredChainMapper::ChainEndpoints>::operator[](int) const;
// public: int hkArrayBase<struct hkpPoweredChainMapper::ChainEndpoints>::getSize(void) const;
// public: hkArrayBase<class hkpConstraintMotor *>::hkArrayBase<class hkpConstraintMotor *>(void);
// public: class hkpConstraintMotor *& hkArrayBase<class hkpConstraintMotor *>::operator[](int);
// public: int hkArrayBase<class hkpConstraintMotor *>::getSize(void) const;
// public: void hkArrayBase<class hkpConstraintMotor *>::_pushBack(class hkMemoryAllocator &, class hkpConstraintMotor *const &);
// public: hkArray<class hkpConstraintMotor *, struct hkContainerHeapAllocator>::~hkArray<class hkpConstraintMotor *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpConstraintMotor *>::~hkArrayBase<class hkpConstraintMotor *>(void);
// public: void hkArray<struct hkpPoweredChainMapper::LinkInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkpPoweredChainMapper::Target, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpConstraintChainInstance *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct `anonymous namespace'::hkMapperTargetInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<class hkpConstraintMotor *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct hkpPoweredChainMapper::LinkInfo>(struct hkpPoweredChainMapper::LinkInfo *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkpPoweredChainMapper::LinkInfo>(struct hkpPoweredChainMapper::LinkInfo *, int, struct hkTraitBool<0>);
// public: hkpPoweredChainMapper::LinkInfo::LinkInfo(void);
// public: void hkArrayBase<struct hkpPoweredChainMapper::Target>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkpPoweredChainMapper::Target>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct hkpPoweredChainMapper::Target>(struct hkpPoweredChainMapper::Target *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkpPoweredChainMapper::Target>(struct hkpPoweredChainMapper::Target *, int, struct hkTraitBool<0>);
// public: int hkArrayBase<class hkpConstraintChainInstance *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpConstraintChainInstance *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<class hkpConstraintChainInstance *>(class hkpConstraintChainInstance **, int, class hkpConstraintChainInstance *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpConstraintInstance *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpConstraintInstance *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<class hkpConstraintInstance *>(class hkpConstraintInstance **, int, class hkpConstraintInstance *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::getCapacity(void) const;
// public: void hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::construct<struct `anonymous namespace'::hkMapperTargetInfo>(struct `anonymous namespace'::hkMapperTargetInfo *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<int>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::construct<int>(int *, int, struct hkTraitBool<1>);
// public: int hkArrayBase<class hkpConstraintMotor *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpConstraintMotor *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<class hkpConstraintMotor *>(class hkpConstraintMotor **, int, class hkpConstraintMotor *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::clear(void);
// public: int hkArrayBase<struct hkpPoweredChainMapper::Target>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpPoweredChainMapper::Target>::clear(void);
// public: void hkArrayBase<class hkpConstraintChainInstance *>::clear(void);
// public: void hkArrayBase<class hkpConstraintInstance *>::clear(void);
// public: void hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::clear(void);
// public: void hkArrayBase<class hkpConstraintMotor *>::clear(void);
// public: static void hkArrayUtil::destruct<class hkpConstraintChainInstance *>(class hkpConstraintChainInstance **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<class hkpConstraintInstance *>(class hkpConstraintInstance **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::destruct<struct `anonymous namespace'::hkMapperTargetInfo>(struct `anonymous namespace'::hkMapperTargetInfo *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::destruct<class hkpConstraintMotor *>(class hkpConstraintMotor **, int, struct hkTraitBool<1>);

//public: static class hkpPoweredChainMapper * hkpPoweredChainMapper::buildChainMapper(struct hkpPoweredChainMapper::Config, class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> const &, class hkArray<struct hkpPoweredChainMapper::ChainEndpoints, struct hkContainerHeapAllocator> const &, class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> *)
//{
//    mangled_ppc("?buildChainMapper@hkpPoweredChainMapper@@SAPAV1@UConfig@1@ABV?$hkArray@PAVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@ABV?$hkArray@UChainEndpoints@hkpPoweredChainMapper@@UhkContainerHeapAllocator@@@@PAV3@@Z");
//};

//public: virtual hkpPoweredChainMapper::~hkpPoweredChainMapper(void)
//{
//    mangled_ppc("??1hkpPoweredChainMapper@@UAA@XZ");
//};

//public: void hkpPoweredChainMapper::setForceLimits(int, int, float, float)
//{
//    mangled_ppc("?setForceLimits@hkpPoweredChainMapper@@QAAXHHMM@Z");
//};

//public: void hkpPoweredChainMapper::getMotors(int, int, class hkArray<class hkpConstraintMotor *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?getMotors@hkpPoweredChainMapper@@QAAXHHAAV?$hkArray@PAVhkpConstraintMotor@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkpPoweredChainMapper::setMotors(int, int, class hkpConstraintMotor *)
//{
//    mangled_ppc("?setMotors@hkpPoweredChainMapper@@QAAXHHPAVhkpConstraintMotor@@@Z");
//};

//public: void hkpPoweredChainMapper::setTargetOrientation(int, class hkQuaternion const &)
//{
//    mangled_ppc("?setTargetOrientation@hkpPoweredChainMapper@@QAAXHABVhkQuaternion@@@Z");
//};

//public: static void * hkpPoweredChainMapper::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpPoweredChainMapper@@SAPAXI@Z");
//};

//private: hkpPoweredChainMapper::hkpPoweredChainMapper(void)
//{
//    mangled_ppc("??0hkpPoweredChainMapper@@AAA@XZ");
//};

//public: class hkpConstraintChainData * hkpConstraintChainInstance::getData(void) const
//{
//    mangled_ppc("?getData@hkpConstraintChainInstance@@QBAPAVhkpConstraintChainData@@XZ");
//};

//public: hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>::~hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PAVhkpConstraintInstance@@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: enum hkpConstraintMotor::MotorType hkpConstraintMotor::getType(void) const
//{
//    mangled_ppc("?getType@hkpConstraintMotor@@QBA?AW4MotorType@1@XZ");
//};

//public: hkArray<struct hkpPoweredChainMapper::LinkInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpPoweredChainMapper::LinkInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@ULinkInfo@hkpPoweredChainMapper@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpPoweredChainMapper::LinkInfo, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@ULinkInfo@hkpPoweredChainMapper@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArray<struct hkpPoweredChainMapper::Target, struct hkContainerHeapAllocator>::hkArray<struct hkpPoweredChainMapper::Target, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UTarget@hkpPoweredChainMapper@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpPoweredChainMapper::Target, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UTarget@hkpPoweredChainMapper@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArray<class hkpConstraintChainInstance *, struct hkContainerHeapAllocator>::hkArray<class hkpConstraintChainInstance *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpConstraintChainInstance@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpConstraintChainInstance *, struct hkContainerHeapAllocator>::pushBack(class hkpConstraintChainInstance *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpConstraintChainInstance@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpConstraintChainInstance@@@Z");
//};

//public: hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>::hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>::pushBack(class hkpConstraintInstance *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpConstraintInstance@@@Z");
//};

//public: enum hkpConstraintMotor::MotorType hkEnum<enum hkpConstraintMotor::MotorType, signed char>::operator enum hkpConstraintMotor::MotorType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4MotorType@hkpConstraintMotor@@C@@QBA?AW4MotorType@hkpConstraintMotor@@XZ");
//};

//public: hkArray<struct `anonymous namespace'::hkMapperTargetInfo, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::hkMapperTargetInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UhkMapperTargetInfo@?A0x2bfa340c@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct `anonymous namespace'::hkMapperTargetInfo & hkArray<struct `anonymous namespace'::hkMapperTargetInfo, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UhkMapperTargetInfo@?A0x2bfa340c@@UhkContainerHeapAllocator@@@@QAAAAUhkMapperTargetInfo@?A0x2bfa340c@@XZ");
//};

//public: void hkArray<int, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@HUhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>::hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PAVhkpConstraintInstance@@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>::insert(class hkpConstraintInstance *, int)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PAVhkpConstraintInstance@@HUhkContainerHeapAllocator@@@@QAAHPAVhkpConstraintInstance@@H@Z");
//};

//public: class Dummy * hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>::findKey(class hkpConstraintInstance *) const
//{
//    mangled_ppc("?findKey@?$hkPointerMap@PAVhkpConstraintInstance@@HUhkContainerHeapAllocator@@@@QBAPAVDummy@@PAVhkpConstraintInstance@@@Z");
//};

//public: int hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkPointerMap@PAVhkpConstraintInstance@@HUhkContainerHeapAllocator@@@@QBAHPAVDummy@@@Z");
//};

//public: class hkBool hkPointerMap<class hkpConstraintInstance *, int, struct hkContainerHeapAllocator>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkPointerMap@PAVhkpConstraintInstance@@HUhkContainerHeapAllocator@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: hkArray<class hkpConstraintMotor *, struct hkContainerHeapAllocator>::hkArray<class hkpConstraintMotor *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpConstraintMotor@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpConstraintMotor *, struct hkContainerHeapAllocator>::pushBack(class hkpConstraintMotor *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpConstraintMotor@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpConstraintMotor@@@Z");
//};

//public: hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@ULinkInfo@hkpPoweredChainMapper@@@@QAA@XZ");
//};

//public: struct hkpPoweredChainMapper::LinkInfo & hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@ULinkInfo@hkpPoweredChainMapper@@@@QAAAAULinkInfo@hkpPoweredChainMapper@@H@Z");
//};

//public: int hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@ULinkInfo@hkpPoweredChainMapper@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@ULinkInfo@hkpPoweredChainMapper@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkpPoweredChainMapper::LinkInfo * hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@ULinkInfo@hkpPoweredChainMapper@@@@QAAPAULinkInfo@hkpPoweredChainMapper@@XZ");
//};

//public: hkArray<struct hkpPoweredChainMapper::LinkInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkpPoweredChainMapper::LinkInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@ULinkInfo@hkpPoweredChainMapper@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::~hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@ULinkInfo@hkpPoweredChainMapper@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpPoweredChainMapper::Target>::hkArrayBase<struct hkpPoweredChainMapper::Target>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UTarget@hkpPoweredChainMapper@@@@QAA@XZ");
//};

//public: struct hkpPoweredChainMapper::Target & hkArrayBase<struct hkpPoweredChainMapper::Target>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UTarget@hkpPoweredChainMapper@@@@QAAAAUTarget@hkpPoweredChainMapper@@H@Z");
//};

//public: void hkArrayBase<struct hkpPoweredChainMapper::Target>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UTarget@hkpPoweredChainMapper@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct hkpPoweredChainMapper::Target, struct hkContainerHeapAllocator>::~hkArray<struct hkpPoweredChainMapper::Target, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UTarget@hkpPoweredChainMapper@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpPoweredChainMapper::Target>::~hkArrayBase<struct hkpPoweredChainMapper::Target>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UTarget@hkpPoweredChainMapper@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpConstraintChainInstance *>::hkArrayBase<class hkpConstraintChainInstance *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpConstraintChainInstance@@@@QAA@XZ");
//};

//public: class hkpConstraintChainInstance *& hkArrayBase<class hkpConstraintChainInstance *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpConstraintChainInstance@@@@QAAAAPAVhkpConstraintChainInstance@@H@Z");
//};

//public: int hkArrayBase<class hkpConstraintChainInstance *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpConstraintChainInstance@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpConstraintChainInstance *>::_pushBack(class hkMemoryAllocator &, class hkpConstraintChainInstance *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpConstraintChainInstance@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpConstraintChainInstance@@@Z");
//};

//public: hkArray<class hkpConstraintChainInstance *, struct hkContainerHeapAllocator>::~hkArray<class hkpConstraintChainInstance *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpConstraintChainInstance@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpConstraintChainInstance *>::~hkArrayBase<class hkpConstraintChainInstance *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpConstraintChainInstance@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpConstraintInstance *>::hkArrayBase<class hkpConstraintInstance *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpConstraintInstance@@@@QAA@XZ");
//};

//public: class hkpConstraintInstance *& hkArrayBase<class hkpConstraintInstance *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpConstraintInstance@@@@QAAAAPAVhkpConstraintInstance@@H@Z");
//};

//public: void hkArrayBase<class hkpConstraintInstance *>::_pushBack(class hkMemoryAllocator &, class hkpConstraintInstance *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpConstraintInstance@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpConstraintInstance@@@Z");
//};

//public: hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>::~hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpConstraintInstance *>::~hkArrayBase<class hkpConstraintInstance *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpConstraintInstance@@@@QAA@XZ");
//};

//public: hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkMapperTargetInfo@?A0x2bfa340c@@@@QAA@XZ");
//};

//public: struct `anonymous namespace'::hkMapperTargetInfo & hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UhkMapperTargetInfo@?A0x2bfa340c@@@@QAAAAUhkMapperTargetInfo@?A0x2bfa340c@@H@Z");
//};

//public: int hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UhkMapperTargetInfo@?A0x2bfa340c@@@@QBAHXZ");
//};

//public: struct `anonymous namespace'::hkMapperTargetInfo & hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UhkMapperTargetInfo@?A0x2bfa340c@@@@QAAAAUhkMapperTargetInfo@?A0x2bfa340c@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<struct `anonymous namespace'::hkMapperTargetInfo, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::hkMapperTargetInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkMapperTargetInfo@?A0x2bfa340c@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::~hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkMapperTargetInfo@?A0x2bfa340c@@@@QAA@XZ");
//};

//public: int & hkArrayBase<int>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@H@@QAAAAHH@Z");
//};

//public: void hkArrayBase<int>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@H@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: int * hkArrayBase<int>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@H@@QAAPAHXZ");
//};

//public: struct hkpPoweredChainMapper::ChainEndpoints const & hkArrayBase<struct hkpPoweredChainMapper::ChainEndpoints>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UChainEndpoints@hkpPoweredChainMapper@@@@QBAABUChainEndpoints@hkpPoweredChainMapper@@H@Z");
//};

//public: int hkArrayBase<struct hkpPoweredChainMapper::ChainEndpoints>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UChainEndpoints@hkpPoweredChainMapper@@@@QBAHXZ");
//};

//public: hkArrayBase<class hkpConstraintMotor *>::hkArrayBase<class hkpConstraintMotor *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpConstraintMotor@@@@QAA@XZ");
//};

//public: class hkpConstraintMotor *& hkArrayBase<class hkpConstraintMotor *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpConstraintMotor@@@@QAAAAPAVhkpConstraintMotor@@H@Z");
//};

//public: int hkArrayBase<class hkpConstraintMotor *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpConstraintMotor@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpConstraintMotor *>::_pushBack(class hkMemoryAllocator &, class hkpConstraintMotor *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpConstraintMotor@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpConstraintMotor@@@Z");
//};

//public: hkArray<class hkpConstraintMotor *, struct hkContainerHeapAllocator>::~hkArray<class hkpConstraintMotor *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpConstraintMotor@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpConstraintMotor *>::~hkArrayBase<class hkpConstraintMotor *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpConstraintMotor@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpPoweredChainMapper::LinkInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@ULinkInfo@hkpPoweredChainMapper@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkpPoweredChainMapper::Target, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UTarget@hkpPoweredChainMapper@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpConstraintChainInstance *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpConstraintChainInstance@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct `anonymous namespace'::hkMapperTargetInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkMapperTargetInfo@?A0x2bfa340c@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpConstraintMotor *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpConstraintMotor@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@ULinkInfo@hkpPoweredChainMapper@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@ULinkInfo@hkpPoweredChainMapper@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpPoweredChainMapper::LinkInfo>(struct hkpPoweredChainMapper::LinkInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@ULinkInfo@hkpPoweredChainMapper@@@hkArrayUtil@@SAXPAULinkInfo@hkpPoweredChainMapper@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpPoweredChainMapper::LinkInfo>(struct hkpPoweredChainMapper::LinkInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@ULinkInfo@hkpPoweredChainMapper@@@hkArrayUtil@@SAXPAULinkInfo@hkpPoweredChainMapper@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkpPoweredChainMapper::LinkInfo::LinkInfo(void)
//{
//    mangled_ppc("??0LinkInfo@hkpPoweredChainMapper@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkpPoweredChainMapper::Target>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UTarget@hkpPoweredChainMapper@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkpPoweredChainMapper::Target>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UTarget@hkpPoweredChainMapper@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpPoweredChainMapper::Target>(struct hkpPoweredChainMapper::Target *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UTarget@hkpPoweredChainMapper@@@hkArrayUtil@@SAXPAUTarget@hkpPoweredChainMapper@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpPoweredChainMapper::Target>(struct hkpPoweredChainMapper::Target *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UTarget@hkpPoweredChainMapper@@@hkArrayUtil@@SAXPAUTarget@hkpPoweredChainMapper@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<class hkpConstraintChainInstance *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpConstraintChainInstance@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpConstraintChainInstance *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpConstraintChainInstance@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpConstraintChainInstance *>(class hkpConstraintChainInstance **, int, class hkpConstraintChainInstance *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpConstraintChainInstance@@@hkArrayUtil@@SAXPAPAVhkpConstraintChainInstance@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpConstraintInstance *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpConstraintInstance@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpConstraintInstance *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpConstraintInstance@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpConstraintInstance *>(class hkpConstraintInstance **, int, class hkpConstraintInstance *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpConstraintInstance@@@hkArrayUtil@@SAXPAPAVhkpConstraintInstance@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkMapperTargetInfo@?A0x2bfa340c@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkMapperTargetInfo@?A0x2bfa340c@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::construct<struct `anonymous namespace'::hkMapperTargetInfo>(struct `anonymous namespace'::hkMapperTargetInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkMapperTargetInfo@?A0x2bfa340c@@@hkArrayUtil@@SAXPAUhkMapperTargetInfo@?A0x2bfa340c@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<int>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@H@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::construct<int>(int *, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@H@hkArrayUtil@@SAXPAHHU?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<class hkpConstraintMotor *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpConstraintMotor@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpConstraintMotor *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpConstraintMotor@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpConstraintMotor *>(class hkpConstraintMotor **, int, class hkpConstraintMotor *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpConstraintMotor@@@hkArrayUtil@@SAXPAPAVhkpConstraintMotor@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@ULinkInfo@hkpPoweredChainMapper@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpPoweredChainMapper::LinkInfo>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@ULinkInfo@hkpPoweredChainMapper@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkpPoweredChainMapper::Target>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UTarget@hkpPoweredChainMapper@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpPoweredChainMapper::Target>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UTarget@hkpPoweredChainMapper@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpConstraintChainInstance *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpConstraintChainInstance@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpConstraintInstance *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpConstraintInstance@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::hkMapperTargetInfo>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkMapperTargetInfo@?A0x2bfa340c@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkpConstraintMotor *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpConstraintMotor@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<class hkpConstraintChainInstance *>(class hkpConstraintChainInstance **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpConstraintChainInstance@@@hkArrayUtil@@SAXPAPAVhkpConstraintChainInstance@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpConstraintInstance *>(class hkpConstraintInstance **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpConstraintInstance@@@hkArrayUtil@@SAXPAPAVhkpConstraintInstance@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct `anonymous namespace'::hkMapperTargetInfo>(struct `anonymous namespace'::hkMapperTargetInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkMapperTargetInfo@?A0x2bfa340c@@@hkArrayUtil@@SAXPAUhkMapperTargetInfo@?A0x2bfa340c@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpConstraintMotor *>(class hkpConstraintMotor **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpConstraintMotor@@@hkArrayUtil@@SAXPAPAVhkpConstraintMotor@@HU?$hkTraitBool@$00@@@Z");
//};

