/* ---------- headers */

#include "havok\hkputilities\hkpConstraintChainUtil.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static void hkpConstraintChainUtil::addConstraintToBallSocketChain(class hkpConstraintChainInstance *, class hkpEntity *, class hkVector4const &);
// public: static void hkpConstraintChainUtil::addConstraintToPoweredChain(class hkpConstraintChainInstance *, class hkpEntity *, class hkVector4const &, class hkpConstraintMotor *, class hkpConstraintMotor *, class hkpConstraintMotor *);
// public: static enum hkResult hkpConstraintChainUtil::addConstraintToChain(class hkpConstraintInstance *, class hkpConstraintChainInstance *, class hkpBallSocketChainData *);
// public: static class hkpConstraintChainInstance * hkpConstraintChainUtil::buildPoweredChain(class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> &, class hkBool);
// public: static enum hkResult hkpConstraintChainUtil::findConstraintLinkBetweenEntities(class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> const &, class hkpEntity *, class hkpEntity *, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &, class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> &);
// public: static void hkpConstraintChainUtil::getAdjointEntities(class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> const &, class hkpEntity const *, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &, class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> &);
// public: int hkpConstraintChainInstance::getNumConstraints(void);
// public: hkpBallSocketChainData::ConstraintInfo::ConstraintInfo(void);
// public: hkpPoweredChainData::ConstraintInfo::ConstraintInfo(void);
// public: void hkpConstraintChainInstance::insertEntityAtFront(class hkpEntity *);
// public: void hkQuaternion::setInverseMul(class hkQuaternion const &, class hkQuaternion const &);
// public: hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>::~hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>(void);
// public: void hkInplaceArray<int, 32, struct hkContainerHeapAllocator>::`default constructor closure'(void);
// public: void hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>::setSize(int);
// public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::setSize(int);
// public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::insertAt(int, class hkpEntity *const &);
// public: void hkArray<struct hkpBallSocketChainData::ConstraintInfo, struct hkContainerHeapAllocator>::insertAt(int, struct hkpBallSocketChainData::ConstraintInfo const &);
// public: hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>::hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>(void);
// public: int hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>::insert(class hkpEntity *, int);
// public: class Dummy * hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>::findKey(class hkpEntity *) const;
// public: int hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>::getValue(class Dummy *) const;
// public: class hkBool hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>::isValid(class Dummy *) const;
// public: hkInplaceArray<struct `anonymous namespace'::hkEntityInfo, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<struct `anonymous namespace'::hkEntityInfo, 32, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct `anonymous namespace'::hkEntityInfo, struct hkContainerHeapAllocator>::setSize(int);
// public: hkInplaceArray<int, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<int, 32, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<class hkpEntity *, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpEntity *, 32, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<class hkpConstraintInstance *, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpConstraintInstance *, 32, struct hkContainerHeapAllocator>(void);
// public: class hkpConstraintInstance *& hkArrayBase<class hkpConstraintInstance *>::back(void);
// public: void hkArrayBase<class hkpConstraintInstance *>::popBack(int);
// public: void hkArrayBase<class hkpConstraintInstance *>::_setSize(class hkMemoryAllocator &, int);
// public: class hkpEntity *& hkArrayBase<class hkpEntity *>::back(void);
// public: void hkArrayBase<class hkpEntity *>::_setSize(class hkMemoryAllocator &, int);
// public: void hkArrayBase<class hkpEntity *>::_insertAt(class hkMemoryAllocator &, int, class hkpEntity *const &);
// public: void hkArrayBase<struct hkpBallSocketChainData::ConstraintInfo>::_insertAt(class hkMemoryAllocator &, int, struct hkpBallSocketChainData::ConstraintInfo const &);
// public: struct hkpPoweredChainData::ConstraintInfo & hkArrayBase<struct hkpPoweredChainData::ConstraintInfo>::back(void);
// void hkAlgorithm::swap<class hkVector4>(class hkVector4&, class hkVector4&);
// public: struct `anonymous namespace'::hkEntityInfo & hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::operator[](int);
// public: int hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::getSize(void) const;
// public: void hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::_setSize(class hkMemoryAllocator &, int);
// public: hkArray<struct `anonymous namespace'::hkEntityInfo, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::hkEntityInfo, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<struct `anonymous namespace'::hkEntityInfo, 32, struct hkContainerHeapAllocator>::hkInplaceArray<struct `anonymous namespace'::hkEntityInfo, 32, struct hkContainerHeapAllocator>(int);
// public: hkInplaceArray<int, 32, struct hkContainerHeapAllocator>::hkInplaceArray<int, 32, struct hkContainerHeapAllocator>(int);
// public: hkInplaceArray<class hkpEntity *, 32, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpEntity *, 32, struct hkContainerHeapAllocator>(int);
// public: hkInplaceArray<class hkpConstraintInstance *, 32, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpConstraintInstance *, 32, struct hkContainerHeapAllocator>(int);
// public: hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>::hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>(class hkpConstraintInstance **, int, int);
// public: hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::hkArray<class hkpEntity *, struct hkContainerHeapAllocator>(class hkpEntity **, int, int);
// public: hkArray<struct `anonymous namespace'::hkEntityInfo, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::hkEntityInfo, struct hkContainerHeapAllocator>(struct `anonymous namespace'::hkEntityInfo *, int, int);
// public: void hkArray<struct `anonymous namespace'::hkEntityInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArrayBase<class hkpConstraintInstance *>::hkArrayBase<class hkpConstraintInstance *>(class hkpConstraintInstance **, int, int);
// public: void hkArrayBase<class hkpConstraintInstance *>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::construct<class hkpConstraintInstance *>(class hkpConstraintInstance **, int, struct hkTraitBool<1>);
// public: hkArrayBase<class hkpEntity *>::hkArrayBase<class hkpEntity *>(class hkpEntity **, int, int);
// public: void hkArrayBase<class hkpEntity *>::_reserve(class hkMemoryAllocator &, int);
// public: void hkArrayBase<class hkpEntity *>::_insertAt(class hkMemoryAllocator &, int, class hkpEntity *const *, int);
// public: static void hkArrayUtil::construct<class hkpEntity *>(class hkpEntity **, int, struct hkTraitBool<1>);
// public: void hkArrayBase<struct hkpBallSocketChainData::ConstraintInfo>::_insertAt(class hkMemoryAllocator &, int, struct hkpBallSocketChainData::ConstraintInfo const *, int);
// public: hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::hkArrayBase<struct `anonymous namespace'::hkEntityInfo>(struct `anonymous namespace'::hkEntityInfo *, int, int);
// public: hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::~hkArrayBase<struct `anonymous namespace'::hkEntityInfo>(void);
// public: void hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct `anonymous namespace'::hkEntityInfo>(struct `anonymous namespace'::hkEntityInfo *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct `anonymous namespace'::hkEntityInfo>(struct `anonymous namespace'::hkEntityInfo *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<class hkpEntity *>::_spliceInto(class hkMemoryAllocator &, int, int, class hkpEntity *const *, int);
// public: void hkArrayBase<struct hkpBallSocketChainData::ConstraintInfo>::_spliceInto(class hkMemoryAllocator &, int, int, struct hkpBallSocketChainData::ConstraintInfo const *, int);
// public: int hkArrayBase<struct hkpBallSocketChainData::ConstraintInfo>::getSize(void) const;
// public: int hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::getCapacity(void) const;
// public: void hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::clear(void);
// public: static void hkArrayUtil::constructWithArray<class hkpEntity *>(class hkpEntity **, int, class hkpEntity *const *, struct hkTraitBool<1>);
// public: int hkArrayBase<struct hkpBallSocketChainData::ConstraintInfo>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpBallSocketChainData::ConstraintInfo>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct hkpBallSocketChainData::ConstraintInfo>(struct hkpBallSocketChainData::ConstraintInfo *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::constructWithArray<struct hkpBallSocketChainData::ConstraintInfo>(struct hkpBallSocketChainData::ConstraintInfo *, int, struct hkpBallSocketChainData::ConstraintInfo const *, struct hkTraitBool<0>);
// public: hkpBallSocketChainData::ConstraintInfo::ConstraintInfo(struct hkpBallSocketChainData::ConstraintInfo const &);

//public: static void hkpConstraintChainUtil::addConstraintToBallSocketChain(class hkpConstraintChainInstance *, class hkpEntity *, class hkVector4const &)
//{
//    mangled_ppc("?addConstraintToBallSocketChain@hkpConstraintChainUtil@@SAXPAVhkpConstraintChainInstance@@PAVhkpEntity@@ABVhkVector4@@@Z");
//};

//public: static void hkpConstraintChainUtil::addConstraintToPoweredChain(class hkpConstraintChainInstance *, class hkpEntity *, class hkVector4const &, class hkpConstraintMotor *, class hkpConstraintMotor *, class hkpConstraintMotor *)
//{
//    mangled_ppc("?addConstraintToPoweredChain@hkpConstraintChainUtil@@SAXPAVhkpConstraintChainInstance@@PAVhkpEntity@@ABVhkVector4@@PAVhkpConstraintMotor@@33@Z");
//};

//public: static enum hkResult hkpConstraintChainUtil::addConstraintToChain(class hkpConstraintInstance *, class hkpConstraintChainInstance *, class hkpBallSocketChainData *)
//{
//    mangled_ppc("?addConstraintToChain@hkpConstraintChainUtil@@SA?AW4hkResult@@PAVhkpConstraintInstance@@PAVhkpConstraintChainInstance@@PAVhkpBallSocketChainData@@@Z");
//};

//public: static class hkpConstraintChainInstance * hkpConstraintChainUtil::buildPoweredChain(class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> &, class hkBool)
//{
//    mangled_ppc("?buildPoweredChain@hkpConstraintChainUtil@@SAPAVhkpConstraintChainInstance@@AAV?$hkArray@PAVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@VhkBool@@@Z");
//};

//public: static enum hkResult hkpConstraintChainUtil::findConstraintLinkBetweenEntities(class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> const &, class hkpEntity *, class hkpEntity *, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &, class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?findConstraintLinkBetweenEntities@hkpConstraintChainUtil@@SA?AW4hkResult@@ABV?$hkArray@PAVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@PAVhkpEntity@@1AAV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@AAV3@@Z");
//};

//public: static void hkpConstraintChainUtil::getAdjointEntities(class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> const &, class hkpEntity const *, class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> &, class hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?getAdjointEntities@hkpConstraintChainUtil@@SAXABV?$hkArray@PAVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@PBVhkpEntity@@AAV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@AAV2@@Z");
//};

//public: int hkpConstraintChainInstance::getNumConstraints(void)
//{
//    mangled_ppc("?getNumConstraints@hkpConstraintChainInstance@@QAAHXZ");
//};

//public: hkpBallSocketChainData::ConstraintInfo::ConstraintInfo(void)
//{
//    mangled_ppc("??0ConstraintInfo@hkpBallSocketChainData@@QAA@XZ");
//};

//public: hkpPoweredChainData::ConstraintInfo::ConstraintInfo(void)
//{
//    mangled_ppc("??0ConstraintInfo@hkpPoweredChainData@@QAA@XZ");
//};

//public: void hkpConstraintChainInstance::insertEntityAtFront(class hkpEntity *)
//{
//    mangled_ppc("?insertEntityAtFront@hkpConstraintChainInstance@@QAAXPAVhkpEntity@@@Z");
//};

//public: void hkQuaternion::setInverseMul(class hkQuaternion const &, class hkQuaternion const &)
//{
//    mangled_ppc("?setInverseMul@hkQuaternion@@QAAXABV1@0@Z");
//};

//public: hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>::~hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@PAVhkpEntity@@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkInplaceArray<int, 32, struct hkContainerHeapAllocator>::`default constructor closure'(void)
//{
//    mangled_ppc("??_F?$hkInplaceArray@H$0CA@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@PAVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::insertAt(int, class hkpEntity *const &)
//{
//    mangled_ppc("?insertAt@?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@QAAXHABQAVhkpEntity@@@Z");
//};

//public: void hkArray<struct hkpBallSocketChainData::ConstraintInfo, struct hkContainerHeapAllocator>::insertAt(int, struct hkpBallSocketChainData::ConstraintInfo const &)
//{
//    mangled_ppc("?insertAt@?$hkArray@UConstraintInfo@hkpBallSocketChainData@@UhkContainerHeapAllocator@@@@QAAXHABUConstraintInfo@hkpBallSocketChainData@@@Z");
//};

//public: hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>::hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@PAVhkpEntity@@HUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: int hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>::insert(class hkpEntity *, int)
//{
//    mangled_ppc("?insert@?$hkPointerMap@PAVhkpEntity@@HUhkContainerHeapAllocator@@@@QAAHPAVhkpEntity@@H@Z");
//};

//public: class Dummy * hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>::findKey(class hkpEntity *) const
//{
//    mangled_ppc("?findKey@?$hkPointerMap@PAVhkpEntity@@HUhkContainerHeapAllocator@@@@QBAPAVDummy@@PAVhkpEntity@@@Z");
//};

//public: int hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>::getValue(class Dummy *) const
//{
//    mangled_ppc("?getValue@?$hkPointerMap@PAVhkpEntity@@HUhkContainerHeapAllocator@@@@QBAHPAVDummy@@@Z");
//};

//public: class hkBool hkPointerMap<class hkpEntity *, int, struct hkContainerHeapAllocator>::isValid(class Dummy *) const
//{
//    mangled_ppc("?isValid@?$hkPointerMap@PAVhkpEntity@@HUhkContainerHeapAllocator@@@@QBA?AVhkBool@@PAVDummy@@@Z");
//};

//public: hkInplaceArray<struct `anonymous namespace'::hkEntityInfo, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<struct `anonymous namespace'::hkEntityInfo, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@UhkEntityInfo@?A0x5f13b6a4@@$0CA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct `anonymous namespace'::hkEntityInfo, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UhkEntityInfo@?A0x5f13b6a4@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkInplaceArray<int, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<int, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@H$0CA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<class hkpEntity *, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpEntity *, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@PAVhkpEntity@@$0CA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<class hkpConstraintInstance *, 32, struct hkContainerHeapAllocator>::~hkInplaceArray<class hkpConstraintInstance *, 32, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@PAVhkpConstraintInstance@@$0CA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: class hkpConstraintInstance *& hkArrayBase<class hkpConstraintInstance *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAVhkpConstraintInstance@@@@QAAAAPAVhkpConstraintInstance@@XZ");
//};

//public: void hkArrayBase<class hkpConstraintInstance *>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@PAVhkpConstraintInstance@@@@QAAXH@Z");
//};

//public: void hkArrayBase<class hkpConstraintInstance *>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@PAVhkpConstraintInstance@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: class hkpEntity *& hkArrayBase<class hkpEntity *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAVhkpEntity@@@@QAAAAPAVhkpEntity@@XZ");
//};

//public: void hkArrayBase<class hkpEntity *>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@PAVhkpEntity@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArrayBase<class hkpEntity *>::_insertAt(class hkMemoryAllocator &, int, class hkpEntity *const &)
//{
//    mangled_ppc("?_insertAt@?$hkArrayBase@PAVhkpEntity@@@@QAAXAAVhkMemoryAllocator@@HABQAVhkpEntity@@@Z");
//};

//public: void hkArrayBase<struct hkpBallSocketChainData::ConstraintInfo>::_insertAt(class hkMemoryAllocator &, int, struct hkpBallSocketChainData::ConstraintInfo const &)
//{
//    mangled_ppc("?_insertAt@?$hkArrayBase@UConstraintInfo@hkpBallSocketChainData@@@@QAAXAAVhkMemoryAllocator@@HABUConstraintInfo@hkpBallSocketChainData@@@Z");
//};

//public: struct hkpPoweredChainData::ConstraintInfo & hkArrayBase<struct hkpPoweredChainData::ConstraintInfo>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@UConstraintInfo@hkpPoweredChainData@@@@QAAAAUConstraintInfo@hkpPoweredChainData@@XZ");
//};

//void hkAlgorithm::swap<class hkVector4>(class hkVector4&, class hkVector4&)
//{
//    mangled_ppc("??$swap@VhkVector4@@@hkAlgorithm@@YAXAAVhkVector4@@0@Z");
//};

//public: struct `anonymous namespace'::hkEntityInfo & hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UhkEntityInfo@?A0x5f13b6a4@@@@QAAAAUhkEntityInfo@?A0x5f13b6a4@@H@Z");
//};

//public: int hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UhkEntityInfo@?A0x5f13b6a4@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UhkEntityInfo@?A0x5f13b6a4@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct `anonymous namespace'::hkEntityInfo, struct hkContainerHeapAllocator>::~hkArray<struct `anonymous namespace'::hkEntityInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkEntityInfo@?A0x5f13b6a4@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<struct `anonymous namespace'::hkEntityInfo, 32, struct hkContainerHeapAllocator>::hkInplaceArray<struct `anonymous namespace'::hkEntityInfo, 32, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@UhkEntityInfo@?A0x5f13b6a4@@$0CA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkInplaceArray<int, 32, struct hkContainerHeapAllocator>::hkInplaceArray<int, 32, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@H$0CA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkInplaceArray<class hkpEntity *, 32, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpEntity *, 32, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@PAVhkpEntity@@$0CA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkInplaceArray<class hkpConstraintInstance *, 32, struct hkContainerHeapAllocator>::hkInplaceArray<class hkpConstraintInstance *, 32, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@PAVhkpConstraintInstance@@$0CA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>::hkArray<class hkpConstraintInstance *, struct hkContainerHeapAllocator>(class hkpConstraintInstance **, int, int)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpConstraintInstance@@UhkContainerHeapAllocator@@@@QAA@PAPAVhkpConstraintInstance@@HH@Z");
//};

//public: hkArray<class hkpEntity *, struct hkContainerHeapAllocator>::hkArray<class hkpEntity *, struct hkContainerHeapAllocator>(class hkpEntity **, int, int)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@QAA@PAPAVhkpEntity@@HH@Z");
//};

//public: hkArray<struct `anonymous namespace'::hkEntityInfo, struct hkContainerHeapAllocator>::hkArray<struct `anonymous namespace'::hkEntityInfo, struct hkContainerHeapAllocator>(struct `anonymous namespace'::hkEntityInfo *, int, int)
//{
//    mangled_ppc("??0?$hkArray@UhkEntityInfo@?A0x5f13b6a4@@UhkContainerHeapAllocator@@@@QAA@PAUhkEntityInfo@?A0x5f13b6a4@@HH@Z");
//};

//public: void hkArray<struct `anonymous namespace'::hkEntityInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkEntityInfo@?A0x5f13b6a4@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArrayBase<class hkpConstraintInstance *>::hkArrayBase<class hkpConstraintInstance *>(class hkpConstraintInstance **, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpConstraintInstance@@@@QAA@PAPAVhkpConstraintInstance@@HH@Z");
//};

//public: void hkArrayBase<class hkpConstraintInstance *>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@PAVhkpConstraintInstance@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::construct<class hkpConstraintInstance *>(class hkpConstraintInstance **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@PAVhkpConstraintInstance@@@hkArrayUtil@@SAXPAPAVhkpConstraintInstance@@HU?$hkTraitBool@$00@@@Z");
//};

//public: hkArrayBase<class hkpEntity *>::hkArrayBase<class hkpEntity *>(class hkpEntity **, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpEntity@@@@QAA@PAPAVhkpEntity@@HH@Z");
//};

//public: void hkArrayBase<class hkpEntity *>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@PAVhkpEntity@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArrayBase<class hkpEntity *>::_insertAt(class hkMemoryAllocator &, int, class hkpEntity *const *, int)
//{
//    mangled_ppc("?_insertAt@?$hkArrayBase@PAVhkpEntity@@@@QAAXAAVhkMemoryAllocator@@HPBQAVhkpEntity@@H@Z");
//};

//public: static void hkArrayUtil::construct<class hkpEntity *>(class hkpEntity **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$construct@PAVhkpEntity@@@hkArrayUtil@@SAXPAPAVhkpEntity@@HU?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<struct hkpBallSocketChainData::ConstraintInfo>::_insertAt(class hkMemoryAllocator &, int, struct hkpBallSocketChainData::ConstraintInfo const *, int)
//{
//    mangled_ppc("?_insertAt@?$hkArrayBase@UConstraintInfo@hkpBallSocketChainData@@@@QAAXAAVhkMemoryAllocator@@HPBUConstraintInfo@hkpBallSocketChainData@@H@Z");
//};

//public: hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::hkArrayBase<struct `anonymous namespace'::hkEntityInfo>(struct `anonymous namespace'::hkEntityInfo *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkEntityInfo@?A0x5f13b6a4@@@@QAA@PAUhkEntityInfo@?A0x5f13b6a4@@HH@Z");
//};

//public: hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::~hkArrayBase<struct `anonymous namespace'::hkEntityInfo>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkEntityInfo@?A0x5f13b6a4@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkEntityInfo@?A0x5f13b6a4@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UhkEntityInfo@?A0x5f13b6a4@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct `anonymous namespace'::hkEntityInfo>(struct `anonymous namespace'::hkEntityInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkEntityInfo@?A0x5f13b6a4@@@hkArrayUtil@@SAXPAUhkEntityInfo@?A0x5f13b6a4@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct `anonymous namespace'::hkEntityInfo>(struct `anonymous namespace'::hkEntityInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkEntityInfo@?A0x5f13b6a4@@@hkArrayUtil@@SAXPAUhkEntityInfo@?A0x5f13b6a4@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<class hkpEntity *>::_spliceInto(class hkMemoryAllocator &, int, int, class hkpEntity *const *, int)
//{
//    mangled_ppc("?_spliceInto@?$hkArrayBase@PAVhkpEntity@@@@QAAXAAVhkMemoryAllocator@@HHPBQAVhkpEntity@@H@Z");
//};

//public: void hkArrayBase<struct hkpBallSocketChainData::ConstraintInfo>::_spliceInto(class hkMemoryAllocator &, int, int, struct hkpBallSocketChainData::ConstraintInfo const *, int)
//{
//    mangled_ppc("?_spliceInto@?$hkArrayBase@UConstraintInfo@hkpBallSocketChainData@@@@QAAXAAVhkMemoryAllocator@@HHPBUConstraintInfo@hkpBallSocketChainData@@H@Z");
//};

//public: int hkArrayBase<struct hkpBallSocketChainData::ConstraintInfo>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UConstraintInfo@hkpBallSocketChainData@@@@QBAHXZ");
//};

//public: int hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkEntityInfo@?A0x5f13b6a4@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct `anonymous namespace'::hkEntityInfo>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkEntityInfo@?A0x5f13b6a4@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::constructWithArray<class hkpEntity *>(class hkpEntity **, int, class hkpEntity *const *, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithArray@PAVhkpEntity@@@hkArrayUtil@@SAXPAPAVhkpEntity@@HPBQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<struct hkpBallSocketChainData::ConstraintInfo>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UConstraintInfo@hkpBallSocketChainData@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpBallSocketChainData::ConstraintInfo>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UConstraintInfo@hkpBallSocketChainData@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpBallSocketChainData::ConstraintInfo>(struct hkpBallSocketChainData::ConstraintInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UConstraintInfo@hkpBallSocketChainData@@@hkArrayUtil@@SAXPAUConstraintInfo@hkpBallSocketChainData@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::constructWithArray<struct hkpBallSocketChainData::ConstraintInfo>(struct hkpBallSocketChainData::ConstraintInfo *, int, struct hkpBallSocketChainData::ConstraintInfo const *, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithArray@UConstraintInfo@hkpBallSocketChainData@@@hkArrayUtil@@SAXPAUConstraintInfo@hkpBallSocketChainData@@HPBU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: hkpBallSocketChainData::ConstraintInfo::ConstraintInfo(struct hkpBallSocketChainData::ConstraintInfo const &)
//{
//    mangled_ppc("??0ConstraintInfo@hkpBallSocketChainData@@QAA@ABU01@@Z");
//};

