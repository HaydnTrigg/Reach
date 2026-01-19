/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int hkpConstraintSolverSetup::calcBufferOffsetsForSolve(class hkpSimulationIsland const &, char *, int, struct hkpBuildJacobianTaskHeader &);
// public: static int hkpConstraintSolverSetup::calcBufferSize(class hkpSimulationIsland &);
// int hkpConstraintSolverSetup_calcBufferSize(class hkpSimulationIsland const &);
// public: static void hkpConstraintSolverSetup::oneStepIntegrate(struct hkpSolverInfo const &, class hkStepInfo const &, class hkpVelocityAccumulator const *, class hkpEntity *const *, int);
// public: static int hkpConstraintSolverSetup::solve(class hkStepInfo const &, struct hkpSolverInfo const &, class hkpConstraintQueryIn &, class hkpSimulationIsland &, void *, int, class hkpEntity *const *, int);
// int hkConstraintSolverSetup_integrate2(struct hkpSolverInfo const &, class hkStepInfo const &, class hkpVelocityAccumulator const *, class hkpEntity *const *, int);
// public: static void hkpConstraintSolverSetup::initializeSolverState(class hkStepInfo &, struct hkpSolverInfo &, class hkpConstraintQueryIn &, char *, int, struct hkpConstraintSolverResources &);
// public: static void hkpConstraintSolverSetup::shutdownSolver(struct hkpConstraintSolverResources &);
// public: static void hkpConstraintSolverSetup::internalAddAccumulators(struct hkpConstraintSolverResources &, class hkpEntity *const *, int);
// public: static void hkpConstraintSolverSetup::internalAddJacobianSchemas(struct hkpConstraintSolverResources &, class hkpConstraintInstance **, int, class hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator> &);
// public: static class hkBool hkpConstraintSolverSetup::internalIsMemoryOkForNewAccumulators(struct hkpConstraintSolverResources &, class hkpEntity **, int);
// public: static class hkBool hkpConstraintSolverSetup::internalIsMemoryOkForNewJacobianSchemas(struct hkpConstraintSolverResources &, class hkpConstraintInstance **, int);
// public: static void hkpConstraintSolverSetup::subSolve(struct hkpConstraintSolverResources &, enum hkpConstraintSolverSetup::SolverMode);
// public: void hkpVelocityAccumulator::setFixed(void);
// public: class hkVector4& hkpVelocityAccumulator::getCenterOfMassInWorld(void);
// public: class hkRotation & hkpVelocityAccumulator::getCoreFromWorldMatrix(void);
// public: class hkVector4& hkpVelocityAccumulator::getScratch0(void);
// public: hkpBuildJacobianTaskHeader::hkpBuildJacobianTaskHeader(void);
// public: hkpBuildJacobianTaskCollection::hkpBuildJacobianTaskCollection(void);
// public: hkpSolveJacobiansTaskCollection::hkpSolveJacobiansTaskCollection(void);
// public: hkpBuildJacobianTaskHeader::~hkpBuildJacobianTaskHeader(void);
// public: class hkVector4& hkpVelocityAccumulator::getSumLinearVel(void);
// public: class hkVector4& hkpVelocityAccumulator::getSumAngularVel(void);
// public: class hkVector4& hkpVelocityAccumulator::getScratch1(void);
// public: hkpVelocityAccumulator::hkpVelocityAccumulator(void);
// public: class hkpVelocityAccumulator & hkpVelocityAccumulator::operator=(class hkpVelocityAccumulator const &);
// void flushSolverDebugOstream(void);
// public: struct hkpImpulseLimitBreachedElem & hkpImpulseLimitBreachedHeader::getElem(int);
// private: static void hkpConstraintSolverSetup::_buildAccumulators(class hkStepInfo const &, class hkpEntity *const *, int, class hkpVelocityAccumulator *);
// private: static void hkpConstraintSolverSetup::_buildJacobianElements(class hkpConstraintQueryIn &, class hkpEntity *const *, int, class hkpVelocityAccumulator *, class hkpJacobianSchema *, class hkpJacobianSchema *, class hkpJacobianSchema *);
// public: void hkpWorldObject::markForWrite(void);
// public: void hkpWorldObject::unmarkForWrite(void);
// public: void hkpJacobianGotoSchema::initGoto(class hkpJacobianSchema *);
// public: static void hkpJacobianSchema::setType(class hkpJacobianSchema *, class hkEnum<enum hkpJacobianSchema::SchemaType, signed char>);
// private: static void hkpConstraintSolverSetup::_buildJacobianElement(struct hkConstraintInternal const *, class hkpConstraintQueryIn &, class hkpVelocityAccumulator *, class hkpConstraintQueryOut &);
// hkSolverBuildJacobianFromAtoms;
// public: struct hkpConstraintAtom * hkConstraintInternal::getAtoms(void) const;
// public: unsigned short hkConstraintInternal::getAtomsSize(void) const;
// public: hkpConstraintQueryOut::hkpConstraintQueryOut(void);
// public: struct hkConstraintInternal * hkpConstraintInstance::getInternal(void);
// public: class hkMotionState const * hkpMotion::getMotionState(void) const;
// public: hkPadSpu<class hkpJacobianSchema *>::hkPadSpu<class hkpJacobianSchema *>(void);
// public: void hkPadSpu<class hkpJacobianSchema *>::operator=(class hkpJacobianSchema *);
// public: class hkpJacobianSchema * hkPadSpu<class hkpJacobianSchema *>::operator class hkpJacobianSchema *(void) const;
// public: class hkBool hkEnum<enum hkpConstraintAtom::AtomType, unsigned short>::operator==(enum hkpConstraintAtom::AtomType) const;
// public: hkEnum<enum hkpVelocityAccumulator::hkpAccumulatorType, unsigned char>::hkEnum<enum hkpVelocityAccumulator::hkpAccumulatorType, unsigned char>(void);
// public: void hkEnum<enum hkpVelocityAccumulator::hkpAccumulatorType, unsigned char>::operator=(enum hkpVelocityAccumulator::hkpAccumulatorType);
// struct hkpImpulseLimitBreachedHeader * hkAddByteOffset<struct hkpImpulseLimitBreachedHeader>(struct hkpImpulseLimitBreachedHeader *, long);
// public: hkEnum<enum hkpJacobianSchema::SchemaType, signed char>::hkEnum<enum hkpJacobianSchema::SchemaType, signed char>(enum hkpJacobianSchema::SchemaType);
// public: hkInplaceArray<struct hkConstraintInternal const *, 256, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkConstraintInternal const *, 256, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkConstraintInternal const *, struct hkContainerHeapAllocator>::pushBack(struct hkConstraintInternal const *const &);
// public: struct hkpConstraintSchemaInfo & hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator>::expandOne(void);
// class hkpJacobianSchema * hkAddByteOffset<class hkpJacobianSchema>(class hkpJacobianSchema *, long);
// void hkMath::forcePrefetch<256>(void const *);
// struct hkpConstraintAtom * hkAddByteOffset<struct hkpConstraintAtom>(struct hkpConstraintAtom *, long);
// class hkpVelocityAccumulator * hkAddByteOffset<class hkpVelocityAccumulator>(class hkpVelocityAccumulator *, long);
// public: struct hkConstraintInternal const *& hkArrayBase<struct hkConstraintInternal const *>::operator[](int);
// public: int hkArrayBase<struct hkConstraintInternal const *>::getSize(void) const;
// public: void hkArrayBase<struct hkConstraintInternal const *>::_pushBack(class hkMemoryAllocator &, struct hkConstraintInternal const *const &);
// public: hkArray<struct hkConstraintInternal const *, struct hkContainerHeapAllocator>::~hkArray<struct hkConstraintInternal const *, struct hkContainerHeapAllocator>(void);
// public: hkInplaceArray<struct hkConstraintInternal const *, 256, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkConstraintInternal const *, 256, struct hkContainerHeapAllocator>(int);
// public: struct hkConstraintInternal const * hkSmallArray<struct hkConstraintInternal>::begin(void) const;
// public: struct hkConstraintInternal const * hkSmallArray<struct hkConstraintInternal>::end(void) const;
// char * hkMemSolverBufAlloc<char>(int &);
// void hkMemSolverBufFree<char>(char *, int);
// public: struct hkpConstraintSchemaInfo & hkArrayBase<struct hkpConstraintSchemaInfo>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<struct hkConstraintInternal const *, struct hkContainerHeapAllocator>::hkArray<struct hkConstraintInternal const *, struct hkContainerHeapAllocator>(struct hkConstraintInternal const **, int, int);
// public: void hkArray<struct hkConstraintInternal const *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: hkArrayBase<struct hkConstraintInternal const *>::hkArrayBase<struct hkConstraintInternal const *>(struct hkConstraintInternal const **, int, int);
// public: hkArrayBase<struct hkConstraintInternal const *>::~hkArrayBase<struct hkConstraintInternal const *>(void);
// public: int hkArrayBase<struct hkConstraintInternal const *>::getCapacity(void) const;
// public: void hkArrayBase<struct hkConstraintInternal const *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<struct hkConstraintInternal const *>(struct hkConstraintInternal const **, int, struct hkConstraintInternal const *const &, struct hkTraitBool<1>);
// public: int hkArrayBase<struct hkpConstraintSchemaInfo>::getCapacity(void) const;
// public: static void hkArrayUtil::construct<struct hkpConstraintSchemaInfo>(struct hkpConstraintSchemaInfo *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<struct hkConstraintInternal const *>::clear(void);
// public: static void hkArrayUtil::destruct<struct hkConstraintInternal const *>(struct hkConstraintInternal const **, int, struct hkTraitBool<1>);

//public: static int hkpConstraintSolverSetup::calcBufferOffsetsForSolve(class hkpSimulationIsland const &, char *, int, struct hkpBuildJacobianTaskHeader &)
//{
//    mangled_ppc("?calcBufferOffsetsForSolve@hkpConstraintSolverSetup@@SAHABVhkpSimulationIsland@@PADHAAUhkpBuildJacobianTaskHeader@@@Z");
//};

//public: static int hkpConstraintSolverSetup::calcBufferSize(class hkpSimulationIsland &)
//{
//    mangled_ppc("?calcBufferSize@hkpConstraintSolverSetup@@SAHAAVhkpSimulationIsland@@@Z");
//};

//int hkpConstraintSolverSetup_calcBufferSize(class hkpSimulationIsland const &)
//{
//    mangled_ppc("?hkpConstraintSolverSetup_calcBufferSize@@YAHABVhkpSimulationIsland@@@Z");
//};

//public: static void hkpConstraintSolverSetup::oneStepIntegrate(struct hkpSolverInfo const &, class hkStepInfo const &, class hkpVelocityAccumulator const *, class hkpEntity *const *, int)
//{
//    mangled_ppc("?oneStepIntegrate@hkpConstraintSolverSetup@@SAXABUhkpSolverInfo@@ABVhkStepInfo@@PBVhkpVelocityAccumulator@@PBQAVhkpEntity@@H@Z");
//};

//public: static int hkpConstraintSolverSetup::solve(class hkStepInfo const &, struct hkpSolverInfo const &, class hkpConstraintQueryIn &, class hkpSimulationIsland &, void *, int, class hkpEntity *const *, int)
//{
//    mangled_ppc("?solve@hkpConstraintSolverSetup@@SAHABVhkStepInfo@@ABUhkpSolverInfo@@AAVhkpConstraintQueryIn@@AAVhkpSimulationIsland@@PAXHPBQAVhkpEntity@@H@Z");
//};

//int hkConstraintSolverSetup_integrate2(struct hkpSolverInfo const &, class hkStepInfo const &, class hkpVelocityAccumulator const *, class hkpEntity *const *, int)
//{
//    mangled_ppc("?hkConstraintSolverSetup_integrate2@@YAHABUhkpSolverInfo@@ABVhkStepInfo@@PBVhkpVelocityAccumulator@@PBQAVhkpEntity@@H@Z");
//};

//public: static void hkpConstraintSolverSetup::initializeSolverState(class hkStepInfo &, struct hkpSolverInfo &, class hkpConstraintQueryIn &, char *, int, struct hkpConstraintSolverResources &)
//{
//    mangled_ppc("?initializeSolverState@hkpConstraintSolverSetup@@SAXAAVhkStepInfo@@AAUhkpSolverInfo@@AAVhkpConstraintQueryIn@@PADHAAUhkpConstraintSolverResources@@@Z");
//};

//public: static void hkpConstraintSolverSetup::shutdownSolver(struct hkpConstraintSolverResources &)
//{
//    mangled_ppc("?shutdownSolver@hkpConstraintSolverSetup@@SAXAAUhkpConstraintSolverResources@@@Z");
//};

//public: static void hkpConstraintSolverSetup::internalAddAccumulators(struct hkpConstraintSolverResources &, class hkpEntity *const *, int)
//{
//    mangled_ppc("?internalAddAccumulators@hkpConstraintSolverSetup@@SAXAAUhkpConstraintSolverResources@@PBQAVhkpEntity@@H@Z");
//};

//public: static void hkpConstraintSolverSetup::internalAddJacobianSchemas(struct hkpConstraintSolverResources &, class hkpConstraintInstance **, int, class hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?internalAddJacobianSchemas@hkpConstraintSolverSetup@@SAXAAUhkpConstraintSolverResources@@PAPAVhkpConstraintInstance@@HAAV?$hkArray@UhkpConstraintSchemaInfo@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static class hkBool hkpConstraintSolverSetup::internalIsMemoryOkForNewAccumulators(struct hkpConstraintSolverResources &, class hkpEntity **, int)
//{
//    mangled_ppc("?internalIsMemoryOkForNewAccumulators@hkpConstraintSolverSetup@@SA?AVhkBool@@AAUhkpConstraintSolverResources@@PAPAVhkpEntity@@H@Z");
//};

//public: static class hkBool hkpConstraintSolverSetup::internalIsMemoryOkForNewJacobianSchemas(struct hkpConstraintSolverResources &, class hkpConstraintInstance **, int)
//{
//    mangled_ppc("?internalIsMemoryOkForNewJacobianSchemas@hkpConstraintSolverSetup@@SA?AVhkBool@@AAUhkpConstraintSolverResources@@PAPAVhkpConstraintInstance@@H@Z");
//};

//public: static void hkpConstraintSolverSetup::subSolve(struct hkpConstraintSolverResources &, enum hkpConstraintSolverSetup::SolverMode)
//{
//    mangled_ppc("?subSolve@hkpConstraintSolverSetup@@SAXAAUhkpConstraintSolverResources@@W4SolverMode@1@@Z");
//};

//public: void hkpVelocityAccumulator::setFixed(void)
//{
//    mangled_ppc("?setFixed@hkpVelocityAccumulator@@QAAXXZ");
//};

//public: class hkVector4& hkpVelocityAccumulator::getCenterOfMassInWorld(void)
//{
//    mangled_ppc("?getCenterOfMassInWorld@hkpVelocityAccumulator@@QAAAAVhkVector4@@XZ");
//};

//public: class hkRotation & hkpVelocityAccumulator::getCoreFromWorldMatrix(void)
//{
//    mangled_ppc("?getCoreFromWorldMatrix@hkpVelocityAccumulator@@QAAAAVhkRotation@@XZ");
//};

//public: class hkVector4& hkpVelocityAccumulator::getScratch0(void)
//{
//    mangled_ppc("?getScratch0@hkpVelocityAccumulator@@QAAAAVhkVector4@@XZ");
//};

//public: hkpBuildJacobianTaskHeader::hkpBuildJacobianTaskHeader(void)
//{
//    mangled_ppc("??0hkpBuildJacobianTaskHeader@@QAA@XZ");
//};

//public: hkpBuildJacobianTaskCollection::hkpBuildJacobianTaskCollection(void)
//{
//    mangled_ppc("??0hkpBuildJacobianTaskCollection@@QAA@XZ");
//};

//public: hkpSolveJacobiansTaskCollection::hkpSolveJacobiansTaskCollection(void)
//{
//    mangled_ppc("??0hkpSolveJacobiansTaskCollection@@QAA@XZ");
//};

//public: hkpBuildJacobianTaskHeader::~hkpBuildJacobianTaskHeader(void)
//{
//    mangled_ppc("??1hkpBuildJacobianTaskHeader@@QAA@XZ");
//};

//public: class hkVector4& hkpVelocityAccumulator::getSumLinearVel(void)
//{
//    mangled_ppc("?getSumLinearVel@hkpVelocityAccumulator@@QAAAAVhkVector4@@XZ");
//};

//public: class hkVector4& hkpVelocityAccumulator::getSumAngularVel(void)
//{
//    mangled_ppc("?getSumAngularVel@hkpVelocityAccumulator@@QAAAAVhkVector4@@XZ");
//};

//public: class hkVector4& hkpVelocityAccumulator::getScratch1(void)
//{
//    mangled_ppc("?getScratch1@hkpVelocityAccumulator@@QAAAAVhkVector4@@XZ");
//};

//public: hkpVelocityAccumulator::hkpVelocityAccumulator(void)
//{
//    mangled_ppc("??0hkpVelocityAccumulator@@QAA@XZ");
//};

//public: class hkpVelocityAccumulator & hkpVelocityAccumulator::operator=(class hkpVelocityAccumulator const &)
//{
//    mangled_ppc("??4hkpVelocityAccumulator@@QAAAAV0@ABV0@@Z");
//};

//void flushSolverDebugOstream(void)
//{
//    mangled_ppc("?flushSolverDebugOstream@@YAXXZ");
//};

//public: struct hkpImpulseLimitBreachedElem & hkpImpulseLimitBreachedHeader::getElem(int)
//{
//    mangled_ppc("?getElem@hkpImpulseLimitBreachedHeader@@QAAAAUhkpImpulseLimitBreachedElem@@H@Z");
//};

//private: static void hkpConstraintSolverSetup::_buildAccumulators(class hkStepInfo const &, class hkpEntity *const *, int, class hkpVelocityAccumulator *)
//{
//    mangled_ppc("?_buildAccumulators@hkpConstraintSolverSetup@@CAXABVhkStepInfo@@PBQAVhkpEntity@@HPAVhkpVelocityAccumulator@@@Z");
//};

//private: static void hkpConstraintSolverSetup::_buildJacobianElements(class hkpConstraintQueryIn &, class hkpEntity *const *, int, class hkpVelocityAccumulator *, class hkpJacobianSchema *, class hkpJacobianSchema *, class hkpJacobianSchema *)
//{
//    mangled_ppc("?_buildJacobianElements@hkpConstraintSolverSetup@@CAXAAVhkpConstraintQueryIn@@PBQAVhkpEntity@@HPAVhkpVelocityAccumulator@@PAVhkpJacobianSchema@@33@Z");
//};

//public: void hkpWorldObject::markForWrite(void)
//{
//    mangled_ppc("?markForWrite@hkpWorldObject@@QAAXXZ");
//};

//public: void hkpWorldObject::unmarkForWrite(void)
//{
//    mangled_ppc("?unmarkForWrite@hkpWorldObject@@QAAXXZ");
//};

//public: void hkpJacobianGotoSchema::initGoto(class hkpJacobianSchema *)
//{
//    mangled_ppc("?initGoto@hkpJacobianGotoSchema@@QAAXPAVhkpJacobianSchema@@@Z");
//};

//public: static void hkpJacobianSchema::setType(class hkpJacobianSchema *, class hkEnum<enum hkpJacobianSchema::SchemaType, signed char>)
//{
//    mangled_ppc("?setType@hkpJacobianSchema@@SAXPAV1@V?$hkEnum@W4SchemaType@hkpJacobianSchema@@C@@@Z");
//};

//private: static void hkpConstraintSolverSetup::_buildJacobianElement(struct hkConstraintInternal const *, class hkpConstraintQueryIn &, class hkpVelocityAccumulator *, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?_buildJacobianElement@hkpConstraintSolverSetup@@CAXPBUhkConstraintInternal@@AAVhkpConstraintQueryIn@@PAVhkpVelocityAccumulator@@AAVhkpConstraintQueryOut@@@Z");
//};

//hkSolverBuildJacobianFromAtoms
//{
//    mangled_ppc("hkSolverBuildJacobianFromAtoms");
//};

//public: struct hkpConstraintAtom * hkConstraintInternal::getAtoms(void) const
//{
//    mangled_ppc("?getAtoms@hkConstraintInternal@@QBAPAUhkpConstraintAtom@@XZ");
//};

//public: unsigned short hkConstraintInternal::getAtomsSize(void) const
//{
//    mangled_ppc("?getAtomsSize@hkConstraintInternal@@QBAGXZ");
//};

//public: hkpConstraintQueryOut::hkpConstraintQueryOut(void)
//{
//    mangled_ppc("??0hkpConstraintQueryOut@@QAA@XZ");
//};

//public: struct hkConstraintInternal * hkpConstraintInstance::getInternal(void)
//{
//    mangled_ppc("?getInternal@hkpConstraintInstance@@QAAPAUhkConstraintInternal@@XZ");
//};

//public: class hkMotionState const * hkpMotion::getMotionState(void) const
//{
//    mangled_ppc("?getMotionState@hkpMotion@@QBAPBVhkMotionState@@XZ");
//};

//public: hkPadSpu<class hkpJacobianSchema *>::hkPadSpu<class hkpJacobianSchema *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAVhkpJacobianSchema@@@@QAA@XZ");
//};

//public: void hkPadSpu<class hkpJacobianSchema *>::operator=(class hkpJacobianSchema *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAVhkpJacobianSchema@@@@QAAXPAVhkpJacobianSchema@@@Z");
//};

//public: class hkpJacobianSchema * hkPadSpu<class hkpJacobianSchema *>::operator class hkpJacobianSchema *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAVhkpJacobianSchema@@@@QBAPAVhkpJacobianSchema@@XZ");
//};

//public: class hkBool hkEnum<enum hkpConstraintAtom::AtomType, unsigned short>::operator==(enum hkpConstraintAtom::AtomType) const
//{
//    mangled_ppc("??8?$hkEnum@W4AtomType@hkpConstraintAtom@@G@@QBA?AVhkBool@@W4AtomType@hkpConstraintAtom@@@Z");
//};

//public: hkEnum<enum hkpVelocityAccumulator::hkpAccumulatorType, unsigned char>::hkEnum<enum hkpVelocityAccumulator::hkpAccumulatorType, unsigned char>(void)
//{
//    mangled_ppc("??0?$hkEnum@W4hkpAccumulatorType@hkpVelocityAccumulator@@E@@QAA@XZ");
//};

//public: void hkEnum<enum hkpVelocityAccumulator::hkpAccumulatorType, unsigned char>::operator=(enum hkpVelocityAccumulator::hkpAccumulatorType)
//{
//    mangled_ppc("??4?$hkEnum@W4hkpAccumulatorType@hkpVelocityAccumulator@@E@@QAAXW4hkpAccumulatorType@hkpVelocityAccumulator@@@Z");
//};

//struct hkpImpulseLimitBreachedHeader * hkAddByteOffset<struct hkpImpulseLimitBreachedHeader>(struct hkpImpulseLimitBreachedHeader *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@UhkpImpulseLimitBreachedHeader@@@@YAPAUhkpImpulseLimitBreachedHeader@@PAU0@J@Z");
//};

//public: hkEnum<enum hkpJacobianSchema::SchemaType, signed char>::hkEnum<enum hkpJacobianSchema::SchemaType, signed char>(enum hkpJacobianSchema::SchemaType)
//{
//    mangled_ppc("??0?$hkEnum@W4SchemaType@hkpJacobianSchema@@C@@QAA@W4SchemaType@hkpJacobianSchema@@@Z");
//};

//public: hkInplaceArray<struct hkConstraintInternal const *, 256, struct hkContainerHeapAllocator>::~hkInplaceArray<struct hkConstraintInternal const *, 256, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@PBUhkConstraintInternal@@$0BAA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkConstraintInternal const *, struct hkContainerHeapAllocator>::pushBack(struct hkConstraintInternal const *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PBUhkConstraintInternal@@UhkContainerHeapAllocator@@@@QAAXABQBUhkConstraintInternal@@@Z");
//};

//public: struct hkpConstraintSchemaInfo & hkArray<struct hkpConstraintSchemaInfo, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UhkpConstraintSchemaInfo@@UhkContainerHeapAllocator@@@@QAAAAUhkpConstraintSchemaInfo@@XZ");
//};

//class hkpJacobianSchema * hkAddByteOffset<class hkpJacobianSchema>(class hkpJacobianSchema *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@VhkpJacobianSchema@@@@YAPAVhkpJacobianSchema@@PAV0@J@Z");
//};

//void hkMath::forcePrefetch<256>(void const *)
//{
//    mangled_ppc("??$forcePrefetch@$0BAA@@hkMath@@YAXPBX@Z");
//};

//struct hkpConstraintAtom * hkAddByteOffset<struct hkpConstraintAtom>(struct hkpConstraintAtom *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@UhkpConstraintAtom@@@@YAPAUhkpConstraintAtom@@PAU0@J@Z");
//};

//class hkpVelocityAccumulator * hkAddByteOffset<class hkpVelocityAccumulator>(class hkpVelocityAccumulator *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@VhkpVelocityAccumulator@@@@YAPAVhkpVelocityAccumulator@@PAV0@J@Z");
//};

//public: struct hkConstraintInternal const *& hkArrayBase<struct hkConstraintInternal const *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PBUhkConstraintInternal@@@@QAAAAPBUhkConstraintInternal@@H@Z");
//};

//public: int hkArrayBase<struct hkConstraintInternal const *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PBUhkConstraintInternal@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkConstraintInternal const *>::_pushBack(class hkMemoryAllocator &, struct hkConstraintInternal const *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PBUhkConstraintInternal@@@@QAAXAAVhkMemoryAllocator@@ABQBUhkConstraintInternal@@@Z");
//};

//public: hkArray<struct hkConstraintInternal const *, struct hkContainerHeapAllocator>::~hkArray<struct hkConstraintInternal const *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PBUhkConstraintInternal@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkInplaceArray<struct hkConstraintInternal const *, 256, struct hkContainerHeapAllocator>::hkInplaceArray<struct hkConstraintInternal const *, 256, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@PBUhkConstraintInternal@@$0BAA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: struct hkConstraintInternal const * hkSmallArray<struct hkConstraintInternal>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkSmallArray@UhkConstraintInternal@@@@QBAPBUhkConstraintInternal@@XZ");
//};

//public: struct hkConstraintInternal const * hkSmallArray<struct hkConstraintInternal>::end(void) const
//{
//    mangled_ppc("?end@?$hkSmallArray@UhkConstraintInternal@@@@QBAPBUhkConstraintInternal@@XZ");
//};

//char * hkMemSolverBufAlloc<char>(int &)
//{
//    mangled_ppc("??$hkMemSolverBufAlloc@D@@YAPADAAH@Z");
//};

//void hkMemSolverBufFree<char>(char *, int)
//{
//    mangled_ppc("??$hkMemSolverBufFree@D@@YAXPADH@Z");
//};

//public: struct hkpConstraintSchemaInfo & hkArrayBase<struct hkpConstraintSchemaInfo>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UhkpConstraintSchemaInfo@@@@QAAAAUhkpConstraintSchemaInfo@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<struct hkConstraintInternal const *, struct hkContainerHeapAllocator>::hkArray<struct hkConstraintInternal const *, struct hkContainerHeapAllocator>(struct hkConstraintInternal const **, int, int)
//{
//    mangled_ppc("??0?$hkArray@PBUhkConstraintInternal@@UhkContainerHeapAllocator@@@@QAA@PAPBUhkConstraintInternal@@HH@Z");
//};

//public: void hkArray<struct hkConstraintInternal const *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PBUhkConstraintInternal@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: hkArrayBase<struct hkConstraintInternal const *>::hkArrayBase<struct hkConstraintInternal const *>(struct hkConstraintInternal const **, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@PBUhkConstraintInternal@@@@QAA@PAPBUhkConstraintInternal@@HH@Z");
//};

//public: hkArrayBase<struct hkConstraintInternal const *>::~hkArrayBase<struct hkConstraintInternal const *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PBUhkConstraintInternal@@@@QAA@XZ");
//};

//public: int hkArrayBase<struct hkConstraintInternal const *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PBUhkConstraintInternal@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkConstraintInternal const *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PBUhkConstraintInternal@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<struct hkConstraintInternal const *>(struct hkConstraintInternal const **, int, struct hkConstraintInternal const *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PBUhkConstraintInternal@@@hkArrayUtil@@SAXPAPBUhkConstraintInternal@@HABQBU1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<struct hkpConstraintSchemaInfo>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkpConstraintSchemaInfo@@@@QBAHXZ");
//};

//public: static void hkArrayUtil::construct<struct hkpConstraintSchemaInfo>(struct hkpConstraintSchemaInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkpConstraintSchemaInfo@@@hkArrayUtil@@SAXPAUhkpConstraintSchemaInfo@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<struct hkConstraintInternal const *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PBUhkConstraintInternal@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkConstraintInternal const *>(struct hkConstraintInternal const **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PBUhkConstraintInternal@@@hkArrayUtil@@SAXPAPBUhkConstraintInternal@@HU?$hkTraitBool@$00@@@Z");
//};

