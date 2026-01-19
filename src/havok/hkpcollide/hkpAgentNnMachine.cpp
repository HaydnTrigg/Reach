/* ---------- headers */

#include "havok\hkpcollide\hkpAgentNnMachine.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// hkAgentNnMachine_GetAgentType;
// hkAgentNnMachine_CreateAgent;
// struct hkpAgentNnEntry * hkAgentNnMachine_AllocateEntry(struct hkpAgentNnTrack &, int);
// hkAgentNnMachine_DestroyAgent;
// hkAgentNnMachine_IsEntryOnTrack;
// hkAgentNnMachine_InternalDeallocateEntry;
// struct hkpAgentNnEntry * hkAgentNnMachine_getLastEntry(struct hkpAgentNnTrack &, int);
// void hkAgentNnMachine_RelinkEntry(struct hkpAgentNnEntry *);
// void hkAgentNnMachine_DeallocateLastEntry(struct hkpAgentNnTrack &, int);
// hkAgentNnMachine_UpdateShapeCollectionFilter;
// hkAgentNnMachine_InvalidateTimInAgent;
// hkAgentNnMachine_WarpTimeInAgent;
// hkAgentNnMachine_AppendTrack;
// hkAgentNnMachine_CopyAndRelinkAgentEntry;
// void hkAgentNnMachine_DestroyTrack(struct hkpAgentNnTrack &, class hkpCollisionDispatcher *, class hkpConstraintOwner &);
// hkAgentNnMachine_ProcessAgent;
// void hkAgentNnMachine_InlineProcessAgent(struct hkpAgentNnEntry *, struct hkpProcessCollisionInput const &, int &, struct hkpProcessCollisionOutput &, class hkpContactMgr *);
// void hkAgentNnMachine_initInputAtTime(struct hkpAgent3Input &, struct hkAgentNnMachineBodyTemp &, struct hkpAgent3Input &);
// hkAgentNnMachine_ProcessTrack;
// hkAgentNnMachine_FindAgent;
// hkAgentNnMachine_AssertTrackValidity;
// hkAgentMachine_processTransformedShapes;
// hkAgentNnMachine_TouchAgent;
// public: class hkArray<struct hkpLinkedCollidable::CollisionEntry, struct hkContainerHeapAllocator> & hkpLinkedCollidable::getCollisionEntriesNonDeterministic(void);
// public: hkpAgent3Input::hkpAgent3Input(void);
// public: int hkpAgentNnTrack::getSectorSize(int) const;
// public: static void hkString::memCpy16(void *, void const *, int);
// public: class hkMultiThreadCheck & hkpSimulationIsland::getMultiThreadCheck(void) const;
// public: hkMotionState::hkMotionState(void);
// public: hkSweptTransform::hkSweptTransform(void);
// class hkpCollisionAgent *& hkAgent3Bridge::getChildAgent(void *);
// public: static void * hkpCdBody::operator new(unsigned int, void *);
// public: hkpAgent3ProcessInput::hkpAgent3ProcessInput(void);
// public: hkAgentNnMachineBodyTemp::hkAgentNnMachineBodyTemp(void);
// public: float hkpCollisionInput::getTolerance(void) const;
// bool hkMemoryStateIsOutOfMemory(int);
// public: class hkArray<struct hkpLinkedCollidable::CollisionEntry, struct hkContainerHeapAllocator> const & hkpLinkedCollidable::getCollisionEntriesNonDeterministic(void) const;
// public: class hkBool hkpCollisionDispatcher::getIsFlipped(enum hkpShapeType, enum hkpShapeType) const;
// public: void * (* hkpCollisionDispatcher::getAgent3CreateFunc(int))(struct hkpAgent3Input const &, struct hkpAgentEntry *, void *);
// public: void * (* hkpCollisionDispatcher::getAgent3CleanupFunc(int))(struct hkpAgentEntry *, void *, class hkpContactMgr *, class hkpConstraintOwner &);
// public: void (* hkpCollisionDispatcher::getAgent3SepNormalFunc(int))(struct hkpAgent3Input const &, struct hkpAgentEntry *, void *, class hkVector4&);
// public: enum hkAgent3::Symmetric hkpCollisionDispatcher::getAgent3Symmetric(int);
// public: int hkpCollisionDispatcher::getAgent3Type(enum hkpShapeType, enum hkpShapeType, int) const;
// public: void (* hkpCollisionDispatcher::getAgent3UpdateFilterFunc(int) const)(struct hkpAgentEntry *, void *, class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *, class hkpConstraintOwner &);
// public: class hkTransform & hkMotionState::getTransform(void);
// public: class hkQuaternion const & hkpTransformShape::getRotation(void) const;
// public: hkpCdBody::hkpCdBody(class hkpCdBody const *, class hkMotionState const *);
// public: void (* hkpCollisionDispatcher::getAgent3InvalidateTimFunc(int))(struct hkpAgentEntry *, void *, struct hkpCollisionInput const &);
// public: void (* hkpCollisionDispatcher::getAgent3WarpTimeFunc(int))(struct hkpAgentEntry *, void *, float, float, struct hkpCollisionInput const &);
// public: void hkPadSpu<class hkpCdBody const *>::operator=(class hkpCdBody const *);
// public: signed char hkpCollisionDispatcher::getCollisionQualityIndex(enum hkpCollidableQualityType, enum hkpCollidableQualityType);
// public: class hkpCdBody const * hkPadSpu<class hkpCdBody const *>::operator class hkpCdBody const *(void) const;
// public: void hkPadSpu<struct hkpProcessCollisionInput const *>::operator=(struct hkpProcessCollisionInput const *);
// public: struct hkpProcessCollisionInput const * hkPadSpu<struct hkpProcessCollisionInput const *>::operator->(void) const;
// public: void hkPadSpu<class hkpContactMgr *>::operator=(class hkpContactMgr *);
// public: class hkpContactMgr * hkPadSpu<class hkpContactMgr *>::operator class hkpContactMgr *(void) const;
// public: struct hkpCollisionQualityInfo * hkpCollisionDispatcher::getCollisionQualityInfo(signed char);
// public: void hkPadSpu<struct hkpCollisionQualityInfo *>::operator=(struct hkpCollisionQualityInfo *);
// public: struct hkpCollisionQualityInfo * hkPadSpu<struct hkpCollisionQualityInfo *>::operator struct hkpCollisionQualityInfo *(void) const;
// public: void hkArray<struct hkpLinkedCollidable::CollisionEntry, struct hkContainerHeapAllocator>::optimizeCapacity(int, int);
// public: struct hkpLinkedCollidable::CollisionEntry & hkArray<struct hkpLinkedCollidable::CollisionEntry, struct hkContainerHeapAllocator>::expandOne(void);
// public: void hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>::pushBack(struct hkpAgentNnSector *const &);
// public: void hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>::insertAt(int, struct hkpAgentNnSector *const *, int);
// public: hkPadSpu<unsigned char>::hkPadSpu<unsigned char>(unsigned char);
// public: void hkPadSpu<unsigned char>::operator=(unsigned char);
// public: class hkpCdBody const * hkPadSpu<class hkpCdBody const *>::val(void) const;
// public: class hkpContactMgr * hkPadSpu<class hkpContactMgr *>::val(void) const;
// public: struct hkpCollisionQualityInfo * hkPadSpu<struct hkpCollisionQualityInfo *>::val(void) const;
// public: struct hkpLinkedCollidable::CollisionEntry & hkArrayBase<struct hkpLinkedCollidable::CollisionEntry>::operator[](int);
// public: void hkArrayBase<struct hkpLinkedCollidable::CollisionEntry>::_optimizeCapacity(class hkMemoryAllocator &, int, int);
// public: void hkArrayBase<struct hkpLinkedCollidable::CollisionEntry>::removeAt(int);
// public: struct hkpLinkedCollidable::CollisionEntry & hkArrayBase<struct hkpLinkedCollidable::CollisionEntry>::_expandOne(class hkMemoryAllocator &);
// public: enum hkpCollidableQualityType hkpCollidable::getQualityType(void) const;
// public: struct hkpAgentNnSector *& hkArrayBase<struct hkpAgentNnSector *>::back(void);
// public: void hkArrayBase<struct hkpAgentNnSector *>::clear(void);
// public: void hkArrayBase<struct hkpAgentNnSector *>::popBack(int);
// public: void hkArrayBase<struct hkpAgentNnSector *>::_pushBack(class hkMemoryAllocator &, struct hkpAgentNnSector *const &);
// public: void hkArrayBase<struct hkpAgentNnSector *>::_insertAt(class hkMemoryAllocator &, int, struct hkpAgentNnSector *const *, int);
// public: struct hkpAgentNnSector ** hkArrayBase<struct hkpAgentNnSector *>::begin(void);
// public: void hkInplaceArray<struct hkpAgentNnSector *, 1, struct hkContainerHeapAllocator>::optimizeCapacity(int, int);
// void * hkAllocateChunk<void>(int, int);
// void hkDeallocateChunk<void>(void *, int, int);
// public: static void hkArrayUtil::construct<struct hkpLinkedCollidable::CollisionEntry>(struct hkpLinkedCollidable::CollisionEntry *, int, struct hkTraitBool<0>);
// public: int hkArrayBase<struct hkpAgentNnSector *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpAgentNnSector *>::_spliceInto(class hkMemoryAllocator &, int, int, struct hkpAgentNnSector *const *, int);
// public: static void hkArrayUtil::destruct<struct hkpAgentNnSector *>(struct hkpAgentNnSector **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<struct hkpAgentNnSector *>(struct hkpAgentNnSector **, int, struct hkpAgentNnSector *const &, struct hkTraitBool<1>);
// public: void hkArrayBase<struct hkpAgentNnSector *>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::constructWithArray<struct hkpAgentNnSector *>(struct hkpAgentNnSector **, int, struct hkpAgentNnSector *const *, struct hkTraitBool<1>);
// public: void hkpContactMgr::processContact(class hkpCollidable const &, class hkpCollidable const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionData &);
// public: class hkBool hkpProcessCollisionData::isEmpty(void) const;
// public: void hkpProcessCollisionOutput::reset(void);
// public: hkPadSpu<class hkpCdBody const *>::hkPadSpu<class hkpCdBody const *>(void);
// public: hkPadSpu<class hkpCdBody const *>::hkPadSpu<class hkpCdBody const *>(class hkpCdBody const *);
// public: hkPadSpu<struct hkpProcessCollisionInput const *>::hkPadSpu<struct hkpProcessCollisionInput const *>(void);
// public: hkPadSpu<class hkpContactMgr *>::hkPadSpu<class hkpContactMgr *>(void);
// public: void hkPadSpu<struct hkpProcessCdPoint *>::operator=(struct hkpProcessCdPoint *);
// public: void hkPadSpu<struct hkpProcessCollisionOutput::PotentialInfo *>::operator=(struct hkpProcessCollisionOutput::PotentialInfo *);

//hkAgentNnMachine_GetAgentType
//{
//    mangled_ppc("hkAgentNnMachine_GetAgentType");
//};

//hkAgentNnMachine_CreateAgent
//{
//    mangled_ppc("hkAgentNnMachine_CreateAgent");
//};

//struct hkpAgentNnEntry * hkAgentNnMachine_AllocateEntry(struct hkpAgentNnTrack &, int)
//{
//    mangled_ppc("?hkAgentNnMachine_AllocateEntry@@YAPAUhkpAgentNnEntry@@AAUhkpAgentNnTrack@@H@Z");
//};

//hkAgentNnMachine_DestroyAgent
//{
//    mangled_ppc("hkAgentNnMachine_DestroyAgent");
//};

//hkAgentNnMachine_IsEntryOnTrack
//{
//    mangled_ppc("hkAgentNnMachine_IsEntryOnTrack");
//};

//hkAgentNnMachine_InternalDeallocateEntry
//{
//    mangled_ppc("hkAgentNnMachine_InternalDeallocateEntry");
//};

//struct hkpAgentNnEntry * hkAgentNnMachine_getLastEntry(struct hkpAgentNnTrack &, int)
//{
//    mangled_ppc("?hkAgentNnMachine_getLastEntry@@YAPAUhkpAgentNnEntry@@AAUhkpAgentNnTrack@@H@Z");
//};

//void hkAgentNnMachine_RelinkEntry(struct hkpAgentNnEntry *)
//{
//    mangled_ppc("?hkAgentNnMachine_RelinkEntry@@YAXPAUhkpAgentNnEntry@@@Z");
//};

//void hkAgentNnMachine_DeallocateLastEntry(struct hkpAgentNnTrack &, int)
//{
//    mangled_ppc("?hkAgentNnMachine_DeallocateLastEntry@@YAXAAUhkpAgentNnTrack@@H@Z");
//};

//hkAgentNnMachine_UpdateShapeCollectionFilter
//{
//    mangled_ppc("hkAgentNnMachine_UpdateShapeCollectionFilter");
//};

//hkAgentNnMachine_InvalidateTimInAgent
//{
//    mangled_ppc("hkAgentNnMachine_InvalidateTimInAgent");
//};

//hkAgentNnMachine_WarpTimeInAgent
//{
//    mangled_ppc("hkAgentNnMachine_WarpTimeInAgent");
//};

//hkAgentNnMachine_AppendTrack
//{
//    mangled_ppc("hkAgentNnMachine_AppendTrack");
//};

//hkAgentNnMachine_CopyAndRelinkAgentEntry
//{
//    mangled_ppc("hkAgentNnMachine_CopyAndRelinkAgentEntry");
//};

//void hkAgentNnMachine_DestroyTrack(struct hkpAgentNnTrack &, class hkpCollisionDispatcher *, class hkpConstraintOwner &)
//{
//    mangled_ppc("?hkAgentNnMachine_DestroyTrack@@YAXAAUhkpAgentNnTrack@@PAVhkpCollisionDispatcher@@AAVhkpConstraintOwner@@@Z");
//};

//hkAgentNnMachine_ProcessAgent
//{
//    mangled_ppc("hkAgentNnMachine_ProcessAgent");
//};

//void hkAgentNnMachine_InlineProcessAgent(struct hkpAgentNnEntry *, struct hkpProcessCollisionInput const &, int &, struct hkpProcessCollisionOutput &, class hkpContactMgr *)
//{
//    mangled_ppc("?hkAgentNnMachine_InlineProcessAgent@@YAXPAUhkpAgentNnEntry@@ABUhkpProcessCollisionInput@@AAHAAUhkpProcessCollisionOutput@@PAVhkpContactMgr@@@Z");
//};

//void hkAgentNnMachine_initInputAtTime(struct hkpAgent3Input &, struct hkAgentNnMachineBodyTemp &, struct hkpAgent3Input &)
//{
//    mangled_ppc("?hkAgentNnMachine_initInputAtTime@@YAXAAUhkpAgent3Input@@AAUhkAgentNnMachineBodyTemp@@0@Z");
//};

//hkAgentNnMachine_ProcessTrack
//{
//    mangled_ppc("hkAgentNnMachine_ProcessTrack");
//};

//hkAgentNnMachine_FindAgent
//{
//    mangled_ppc("hkAgentNnMachine_FindAgent");
//};

//hkAgentNnMachine_AssertTrackValidity
//{
//    mangled_ppc("hkAgentNnMachine_AssertTrackValidity");
//};

//hkAgentMachine_processTransformedShapes
//{
//    mangled_ppc("hkAgentMachine_processTransformedShapes");
//};

//hkAgentNnMachine_TouchAgent
//{
//    mangled_ppc("hkAgentNnMachine_TouchAgent");
//};

//public: class hkArray<struct hkpLinkedCollidable::CollisionEntry, struct hkContainerHeapAllocator> & hkpLinkedCollidable::getCollisionEntriesNonDeterministic(void)
//{
//    mangled_ppc("?getCollisionEntriesNonDeterministic@hkpLinkedCollidable@@QAAAAV?$hkArray@UCollisionEntry@hkpLinkedCollidable@@UhkContainerHeapAllocator@@@@XZ");
//};

//public: hkpAgent3Input::hkpAgent3Input(void)
//{
//    mangled_ppc("??0hkpAgent3Input@@QAA@XZ");
//};

//public: int hkpAgentNnTrack::getSectorSize(int) const
//{
//    mangled_ppc("?getSectorSize@hkpAgentNnTrack@@QBAHH@Z");
//};

//public: static void hkString::memCpy16(void *, void const *, int)
//{
//    mangled_ppc("?memCpy16@hkString@@SAXPAXPBXH@Z");
//};

//public: class hkMultiThreadCheck & hkpSimulationIsland::getMultiThreadCheck(void) const
//{
//    mangled_ppc("?getMultiThreadCheck@hkpSimulationIsland@@QBAAAVhkMultiThreadCheck@@XZ");
//};

//public: hkMotionState::hkMotionState(void)
//{
//    mangled_ppc("??0hkMotionState@@QAA@XZ");
//};

//public: hkSweptTransform::hkSweptTransform(void)
//{
//    mangled_ppc("??0hkSweptTransform@@QAA@XZ");
//};

//class hkpCollisionAgent *& hkAgent3Bridge::getChildAgent(void *)
//{
//    mangled_ppc("?getChildAgent@hkAgent3Bridge@@YAAAPAVhkpCollisionAgent@@PAX@Z");
//};

//public: static void * hkpCdBody::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2hkpCdBody@@SAPAXIPAX@Z");
//};

//public: hkpAgent3ProcessInput::hkpAgent3ProcessInput(void)
//{
//    mangled_ppc("??0hkpAgent3ProcessInput@@QAA@XZ");
//};

//public: hkAgentNnMachineBodyTemp::hkAgentNnMachineBodyTemp(void)
//{
//    mangled_ppc("??0hkAgentNnMachineBodyTemp@@QAA@XZ");
//};

//public: float hkpCollisionInput::getTolerance(void) const
//{
//    mangled_ppc("?getTolerance@hkpCollisionInput@@QBAMXZ");
//};

//bool hkMemoryStateIsOutOfMemory(int)
//{
//    mangled_ppc("?hkMemoryStateIsOutOfMemory@@YA_NH@Z");
//};

//public: class hkArray<struct hkpLinkedCollidable::CollisionEntry, struct hkContainerHeapAllocator> const & hkpLinkedCollidable::getCollisionEntriesNonDeterministic(void) const
//{
//    mangled_ppc("?getCollisionEntriesNonDeterministic@hkpLinkedCollidable@@QBAABV?$hkArray@UCollisionEntry@hkpLinkedCollidable@@UhkContainerHeapAllocator@@@@XZ");
//};

//public: class hkBool hkpCollisionDispatcher::getIsFlipped(enum hkpShapeType, enum hkpShapeType) const
//{
//    mangled_ppc("?getIsFlipped@hkpCollisionDispatcher@@QBA?AVhkBool@@W4hkpShapeType@@0@Z");
//};

//public: void * (* hkpCollisionDispatcher::getAgent3CreateFunc(int))(struct hkpAgent3Input const &, struct hkpAgentEntry *, void *)
//{
//    mangled_ppc("?getAgent3CreateFunc@hkpCollisionDispatcher@@QAAP6APAXABUhkpAgent3Input@@PAUhkpAgentEntry@@PAX@ZH@Z");
//};

//public: void * (* hkpCollisionDispatcher::getAgent3CleanupFunc(int))(struct hkpAgentEntry *, void *, class hkpContactMgr *, class hkpConstraintOwner &)
//{
//    mangled_ppc("?getAgent3CleanupFunc@hkpCollisionDispatcher@@QAAP6APAXPAUhkpAgentEntry@@PAXPAVhkpContactMgr@@AAVhkpConstraintOwner@@@ZH@Z");
//};

//public: void (* hkpCollisionDispatcher::getAgent3SepNormalFunc(int))(struct hkpAgent3Input const &, struct hkpAgentEntry *, void *, class hkVector4&)
//{
//    mangled_ppc("?getAgent3SepNormalFunc@hkpCollisionDispatcher@@QAAP6AXABUhkpAgent3Input@@PAUhkpAgentEntry@@PAXAAVhkVector4@@@ZH@Z");
//};

//public: enum hkAgent3::Symmetric hkpCollisionDispatcher::getAgent3Symmetric(int)
//{
//    mangled_ppc("?getAgent3Symmetric@hkpCollisionDispatcher@@QAA?AW4Symmetric@hkAgent3@@H@Z");
//};

//public: int hkpCollisionDispatcher::getAgent3Type(enum hkpShapeType, enum hkpShapeType, int) const
//{
//    mangled_ppc("?getAgent3Type@hkpCollisionDispatcher@@QBAHW4hkpShapeType@@0H@Z");
//};

//public: void (* hkpCollisionDispatcher::getAgent3UpdateFilterFunc(int) const)(struct hkpAgentEntry *, void *, class hkpCdBody const &, class hkpCdBody const &, struct hkpCollisionInput const &, class hkpContactMgr *, class hkpConstraintOwner &)
//{
//    mangled_ppc("?getAgent3UpdateFilterFunc@hkpCollisionDispatcher@@QBAP6AXPAUhkpAgentEntry@@PAXABVhkpCdBody@@2ABUhkpCollisionInput@@PAVhkpContactMgr@@AAVhkpConstraintOwner@@@ZH@Z");
//};

//public: class hkTransform & hkMotionState::getTransform(void)
//{
//    mangled_ppc("?getTransform@hkMotionState@@QAAAAVhkTransform@@XZ");
//};

//public: class hkQuaternion const & hkpTransformShape::getRotation(void) const
//{
//    mangled_ppc("?getRotation@hkpTransformShape@@QBAABVhkQuaternion@@XZ");
//};

//public: hkpCdBody::hkpCdBody(class hkpCdBody const *, class hkMotionState const *)
//{
//    mangled_ppc("??0hkpCdBody@@QAA@PBV0@PBVhkMotionState@@@Z");
//};

//public: void (* hkpCollisionDispatcher::getAgent3InvalidateTimFunc(int))(struct hkpAgentEntry *, void *, struct hkpCollisionInput const &)
//{
//    mangled_ppc("?getAgent3InvalidateTimFunc@hkpCollisionDispatcher@@QAAP6AXPAUhkpAgentEntry@@PAXABUhkpCollisionInput@@@ZH@Z");
//};

//public: void (* hkpCollisionDispatcher::getAgent3WarpTimeFunc(int))(struct hkpAgentEntry *, void *, float, float, struct hkpCollisionInput const &)
//{
//    mangled_ppc("?getAgent3WarpTimeFunc@hkpCollisionDispatcher@@QAAP6AXPAUhkpAgentEntry@@PAXMMABUhkpCollisionInput@@@ZH@Z");
//};

//public: void hkPadSpu<class hkpCdBody const *>::operator=(class hkpCdBody const *)
//{
//    mangled_ppc("??4?$hkPadSpu@PBVhkpCdBody@@@@QAAXPBVhkpCdBody@@@Z");
//};

//public: signed char hkpCollisionDispatcher::getCollisionQualityIndex(enum hkpCollidableQualityType, enum hkpCollidableQualityType)
//{
//    mangled_ppc("?getCollisionQualityIndex@hkpCollisionDispatcher@@QAACW4hkpCollidableQualityType@@0@Z");
//};

//public: class hkpCdBody const * hkPadSpu<class hkpCdBody const *>::operator class hkpCdBody const *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PBVhkpCdBody@@@@QBAPBVhkpCdBody@@XZ");
//};

//public: void hkPadSpu<struct hkpProcessCollisionInput const *>::operator=(struct hkpProcessCollisionInput const *)
//{
//    mangled_ppc("??4?$hkPadSpu@PBUhkpProcessCollisionInput@@@@QAAXPBUhkpProcessCollisionInput@@@Z");
//};

//public: struct hkpProcessCollisionInput const * hkPadSpu<struct hkpProcessCollisionInput const *>::operator->(void) const
//{
//    mangled_ppc("??C?$hkPadSpu@PBUhkpProcessCollisionInput@@@@QBAPBUhkpProcessCollisionInput@@XZ");
//};

//public: void hkPadSpu<class hkpContactMgr *>::operator=(class hkpContactMgr *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAVhkpContactMgr@@@@QAAXPAVhkpContactMgr@@@Z");
//};

//public: class hkpContactMgr * hkPadSpu<class hkpContactMgr *>::operator class hkpContactMgr *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAVhkpContactMgr@@@@QBAPAVhkpContactMgr@@XZ");
//};

//public: struct hkpCollisionQualityInfo * hkpCollisionDispatcher::getCollisionQualityInfo(signed char)
//{
//    mangled_ppc("?getCollisionQualityInfo@hkpCollisionDispatcher@@QAAPAUhkpCollisionQualityInfo@@C@Z");
//};

//public: void hkPadSpu<struct hkpCollisionQualityInfo *>::operator=(struct hkpCollisionQualityInfo *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAUhkpCollisionQualityInfo@@@@QAAXPAUhkpCollisionQualityInfo@@@Z");
//};

//public: struct hkpCollisionQualityInfo * hkPadSpu<struct hkpCollisionQualityInfo *>::operator struct hkpCollisionQualityInfo *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAUhkpCollisionQualityInfo@@@@QBAPAUhkpCollisionQualityInfo@@XZ");
//};

//public: void hkArray<struct hkpLinkedCollidable::CollisionEntry, struct hkContainerHeapAllocator>::optimizeCapacity(int, int)
//{
//    mangled_ppc("?optimizeCapacity@?$hkArray@UCollisionEntry@hkpLinkedCollidable@@UhkContainerHeapAllocator@@@@QAAXHH@Z");
//};

//public: struct hkpLinkedCollidable::CollisionEntry & hkArray<struct hkpLinkedCollidable::CollisionEntry, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UCollisionEntry@hkpLinkedCollidable@@UhkContainerHeapAllocator@@@@QAAAAUCollisionEntry@hkpLinkedCollidable@@XZ");
//};

//public: void hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>::pushBack(struct hkpAgentNnSector *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAUhkpAgentNnSector@@UhkContainerHeapAllocator@@@@QAAXABQAUhkpAgentNnSector@@@Z");
//};

//public: void hkArray<struct hkpAgentNnSector *, struct hkContainerHeapAllocator>::insertAt(int, struct hkpAgentNnSector *const *, int)
//{
//    mangled_ppc("?insertAt@?$hkArray@PAUhkpAgentNnSector@@UhkContainerHeapAllocator@@@@QAAXHPBQAUhkpAgentNnSector@@H@Z");
//};

//public: hkPadSpu<unsigned char>::hkPadSpu<unsigned char>(unsigned char)
//{
//    mangled_ppc("??0?$hkPadSpu@E@@QAA@E@Z");
//};

//public: void hkPadSpu<unsigned char>::operator=(unsigned char)
//{
//    mangled_ppc("??4?$hkPadSpu@E@@QAAXE@Z");
//};

//public: class hkpCdBody const * hkPadSpu<class hkpCdBody const *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PBVhkpCdBody@@@@QBAPBVhkpCdBody@@XZ");
//};

//public: class hkpContactMgr * hkPadSpu<class hkpContactMgr *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAVhkpContactMgr@@@@QBAPAVhkpContactMgr@@XZ");
//};

//public: struct hkpCollisionQualityInfo * hkPadSpu<struct hkpCollisionQualityInfo *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAUhkpCollisionQualityInfo@@@@QBAPAUhkpCollisionQualityInfo@@XZ");
//};

//public: struct hkpLinkedCollidable::CollisionEntry & hkArrayBase<struct hkpLinkedCollidable::CollisionEntry>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UCollisionEntry@hkpLinkedCollidable@@@@QAAAAUCollisionEntry@hkpLinkedCollidable@@H@Z");
//};

//public: void hkArrayBase<struct hkpLinkedCollidable::CollisionEntry>::_optimizeCapacity(class hkMemoryAllocator &, int, int)
//{
//    mangled_ppc("?_optimizeCapacity@?$hkArrayBase@UCollisionEntry@hkpLinkedCollidable@@@@QAAXAAVhkMemoryAllocator@@HH@Z");
//};

//public: void hkArrayBase<struct hkpLinkedCollidable::CollisionEntry>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@UCollisionEntry@hkpLinkedCollidable@@@@QAAXH@Z");
//};

//public: struct hkpLinkedCollidable::CollisionEntry & hkArrayBase<struct hkpLinkedCollidable::CollisionEntry>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UCollisionEntry@hkpLinkedCollidable@@@@QAAAAUCollisionEntry@hkpLinkedCollidable@@AAVhkMemoryAllocator@@@Z");
//};

//public: enum hkpCollidableQualityType hkpCollidable::getQualityType(void) const
//{
//    mangled_ppc("?getQualityType@hkpCollidable@@QBA?AW4hkpCollidableQualityType@@XZ");
//};

//public: struct hkpAgentNnSector *& hkArrayBase<struct hkpAgentNnSector *>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@PAUhkpAgentNnSector@@@@QAAAAPAUhkpAgentNnSector@@XZ");
//};

//public: void hkArrayBase<struct hkpAgentNnSector *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAUhkpAgentNnSector@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkpAgentNnSector *>::popBack(int)
//{
//    mangled_ppc("?popBack@?$hkArrayBase@PAUhkpAgentNnSector@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkpAgentNnSector *>::_pushBack(class hkMemoryAllocator &, struct hkpAgentNnSector *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAUhkpAgentNnSector@@@@QAAXAAVhkMemoryAllocator@@ABQAUhkpAgentNnSector@@@Z");
//};

//public: void hkArrayBase<struct hkpAgentNnSector *>::_insertAt(class hkMemoryAllocator &, int, struct hkpAgentNnSector *const *, int)
//{
//    mangled_ppc("?_insertAt@?$hkArrayBase@PAUhkpAgentNnSector@@@@QAAXAAVhkMemoryAllocator@@HPBQAUhkpAgentNnSector@@H@Z");
//};

//public: struct hkpAgentNnSector ** hkArrayBase<struct hkpAgentNnSector *>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAUhkpAgentNnSector@@@@QAAPAPAUhkpAgentNnSector@@XZ");
//};

//public: void hkInplaceArray<struct hkpAgentNnSector *, 1, struct hkContainerHeapAllocator>::optimizeCapacity(int, int)
//{
//    mangled_ppc("?optimizeCapacity@?$hkInplaceArray@PAUhkpAgentNnSector@@$00UhkContainerHeapAllocator@@@@QAAXHH@Z");
//};

//void * hkAllocateChunk<void>(int, int)
//{
//    mangled_ppc("??$hkAllocateChunk@X@@YAPAXHH@Z");
//};

//void hkDeallocateChunk<void>(void *, int, int)
//{
//    mangled_ppc("??$hkDeallocateChunk@X@@YAXPAXHH@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpLinkedCollidable::CollisionEntry>(struct hkpLinkedCollidable::CollisionEntry *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UCollisionEntry@hkpLinkedCollidable@@@hkArrayUtil@@SAXPAUCollisionEntry@hkpLinkedCollidable@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<struct hkpAgentNnSector *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAUhkpAgentNnSector@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpAgentNnSector *>::_spliceInto(class hkMemoryAllocator &, int, int, struct hkpAgentNnSector *const *, int)
//{
//    mangled_ppc("?_spliceInto@?$hkArrayBase@PAUhkpAgentNnSector@@@@QAAXAAVhkMemoryAllocator@@HHPBQAUhkpAgentNnSector@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpAgentNnSector *>(struct hkpAgentNnSector **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAUhkpAgentNnSector@@@hkArrayUtil@@SAXPAPAUhkpAgentNnSector@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkpAgentNnSector *>(struct hkpAgentNnSector **, int, struct hkpAgentNnSector *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAUhkpAgentNnSector@@@hkArrayUtil@@SAXPAPAUhkpAgentNnSector@@HABQAU1@U?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<struct hkpAgentNnSector *>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@PAUhkpAgentNnSector@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::constructWithArray<struct hkpAgentNnSector *>(struct hkpAgentNnSector **, int, struct hkpAgentNnSector *const *, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithArray@PAUhkpAgentNnSector@@@hkArrayUtil@@SAXPAPAUhkpAgentNnSector@@HPBQAU1@U?$hkTraitBool@$00@@@Z");
//};

//public: void hkpContactMgr::processContact(class hkpCollidable const &, class hkpCollidable const &, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionData &)
//{
//    mangled_ppc("?processContact@hkpContactMgr@@QAAXABVhkpCollidable@@0ABUhkpProcessCollisionInput@@AAUhkpProcessCollisionData@@@Z");
//};

//public: class hkBool hkpProcessCollisionData::isEmpty(void) const
//{
//    mangled_ppc("?isEmpty@hkpProcessCollisionData@@QBA?AVhkBool@@XZ");
//};

//public: void hkpProcessCollisionOutput::reset(void)
//{
//    mangled_ppc("?reset@hkpProcessCollisionOutput@@QAAXXZ");
//};

//public: hkPadSpu<class hkpCdBody const *>::hkPadSpu<class hkpCdBody const *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PBVhkpCdBody@@@@QAA@XZ");
//};

//public: hkPadSpu<class hkpCdBody const *>::hkPadSpu<class hkpCdBody const *>(class hkpCdBody const *)
//{
//    mangled_ppc("??0?$hkPadSpu@PBVhkpCdBody@@@@QAA@PBVhkpCdBody@@@Z");
//};

//public: hkPadSpu<struct hkpProcessCollisionInput const *>::hkPadSpu<struct hkpProcessCollisionInput const *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PBUhkpProcessCollisionInput@@@@QAA@XZ");
//};

//public: hkPadSpu<class hkpContactMgr *>::hkPadSpu<class hkpContactMgr *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAVhkpContactMgr@@@@QAA@XZ");
//};

//public: void hkPadSpu<struct hkpProcessCdPoint *>::operator=(struct hkpProcessCdPoint *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAUhkpProcessCdPoint@@@@QAAXPAUhkpProcessCdPoint@@@Z");
//};

//public: void hkPadSpu<struct hkpProcessCollisionOutput::PotentialInfo *>::operator=(struct hkpProcessCollisionOutput::PotentialInfo *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAUPotentialInfo@hkpProcessCollisionOutput@@@@QAAXPAUPotentialInfo@hkpProcessCollisionOutput@@@Z");
//};

