/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkpVehicleInstance::hkpVehicleInstance(class hkpRigidBody *);
// public: void hkpVehicleInstance::setChassis(class hkpRigidBody *);
// public: void hkpVehicleInstance::WheelInfo::init(void);
// public: virtual hkpVehicleInstance::~hkpVehicleInstance(void);
// public: virtual void hkpVehicleInstance::init(void);
// public: virtual void hkpVehicleInstance::getPhantoms(class hkArray<class hkpPhantom *, struct hkContainerHeapAllocator> &);
// public: virtual void hkpVehicleInstance::handleFixedGroundAccum(class hkpRigidBody *, class hkpVelocityAccumulator &);
// public: void hkpVehicleInstance::updateBeforeCollisionDetection(void);
// protected: void hkpVehicleInstance::updateWheels(float, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput const *);
// protected: void hkpVehicleInstance::updateDriverInput(float, struct hkpVehicleDriverInput::FilteredDriverInputOutput &);
// protected: void hkpVehicleInstance::updateSteering(float, struct hkpVehicleDriverInput::FilteredDriverInputOutput const &);
// protected: void hkpVehicleInstance::updateTransmission(float, struct hkpVehicleTransmission::TransmissionOutput &);
// protected: void hkpVehicleInstance::updateEngine(float, struct hkpVehicleDriverInput::FilteredDriverInputOutput const &, struct hkpVehicleTransmission::TransmissionOutput const &);
// protected: void hkpVehicleInstance::updateBrake(float, struct hkpVehicleDriverInput::FilteredDriverInputOutput const &, struct hkpVehicleBrake::WheelBreakingOutput &);
// protected: void hkpVehicleInstance::updateSuspension(float, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput const *, class hkArray<float, struct hkContainerHeapAllocator> &);
// protected: void hkpVehicleInstance::updateAerodynamics(float, struct hkpVehicleAerodynamics::AerodynamicsDragOutput &);
// protected: void hkpVehicleInstance::applySuspensionForcesAtWheel(float, int, float);
// protected: void hkpVehicleInstance::getAxleParamsFromWheel(int, float, float, float, struct hkpVehicleFrictionSolverAxleParams &);
// protected: void hkpVehicleInstance::perWheelBehavior(float, class hkArray<float, struct hkContainerHeapAllocator> const &, class hkArray<float, struct hkContainerHeapAllocator> const &, class hkpRigidBody **const, struct hkpVehicleFrictionSolverAxleParams *const);
// protected: void hkpVehicleInstance::getAxleParams(class hkStepInfo const &, class hkpRigidBody **const, class hkpVelocityAccumulator *const, class hkpVelocityAccumulator *const, struct hkpVehicleFrictionSolverAxleParams *const);
// protected: void hkpVehicleInstance::getExtraTorqueFactor(float, class hkpVelocityAccumulator &) const;
// protected: void hkpVehicleInstance::applyFrictionSolver(class hkStepInfo const &, struct hkpVehicleFrictionSolverParams &);
// protected: void hkpVehicleInstance::prepareFrictionSolverParams(class hkStepInfo const &, struct hkpVehicleFrictionSolverParams &);
// protected: void hkpVehicleInstance::applyResultsToChassis(class hkpVelocityAccumulator const &);
// protected: void hkpVehicleInstance::applyResultsToGround(float, struct hkpVehicleFrictionSolverAxleParams const *const, class hkpRigidBody **const);
// protected: void hkpVehicleInstance::applyResultsToWheelInfo(float, class hkpRigidBody const *const *const, struct hkpVehicleFrictionSolverParams const &);
// protected: void hkpVehicleInstance::updateComponents(class hkStepInfo const &, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput const *, struct hkpVehicleAerodynamics::AerodynamicsDragOutput &, class hkArray<float, struct hkContainerHeapAllocator> &, class hkArray<float, struct hkContainerHeapAllocator> &);
// protected: void hkpVehicleInstance::simulateVehicle(class hkStepInfo const &, struct hkpVehicleAerodynamics::AerodynamicsDragOutput const &, class hkArray<float, struct hkContainerHeapAllocator> const &, class hkArray<float, struct hkContainerHeapAllocator> const &);
// public: void hkpVehicleInstance::stepVehicleUsingWheelCollideOutput(class hkStepInfo const &, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput const *);
// public: virtual void hkpVehicleInstance::applyAction(class hkStepInfo const &);
// public: void hkpVehicleInstance::stepVehicle(class hkStepInfo const &);
// public: virtual void hkpVehicleInstance::calcCurrentPositionAndRotation(class hkpRigidBody const *, class hkpVehicleSuspension const *, int, class hkVector4&, class hkQuaternion &);
// public: virtual float hkpVehicleInstance::calcRPM(void) const;
// public: virtual float hkpVehicleInstance::calcKMPH(void) const;
// public: virtual float hkpVehicleInstance::calcMPH(void) const;
// public: virtual class hkpAction * hkpVehicleInstance::clone(class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, class hkArray<class hkpPhantom *, struct hkContainerHeapAllocator> const &) const;
// public: virtual void hkpVehicleInstance::addToWorld(class hkpWorld *);
// public: virtual void hkpVehicleInstance::removeFromWorld(void);
// public: hkpVehicleSteering::SteeringAnglesOutput::SteeringAnglesOutput(void);
// public: hkpVehicleSteering::SteeringAnglesOutput::~SteeringAnglesOutput(void);
// public: hkpVehicleBrake::WheelBreakingOutput::WheelBreakingOutput(void);
// public: hkpVehicleBrake::WheelBreakingOutput::~WheelBreakingOutput(void);
// public: hkpVehicleTransmission::TransmissionOutput::TransmissionOutput(void);
// public: hkpVehicleDriverInput::FilteredDriverInputOutput::FilteredDriverInputOutput(void);
// public: void hkpVehicleFrictionSolverAxleParams::initialize(void);
// public: hkpVehicleFrictionSolverParams::hkpVehicleFrictionSolverParams(void);
// public: class hkpVehicleInstance & hkpVehicleInstance::operator=(class hkpVehicleInstance const &);
// public: class hkpUnaryAction & hkpUnaryAction::operator=(class hkpUnaryAction const &);
// public: class hkpAction & hkpAction::operator=(class hkpAction const &);
// public: class hkReferencedObject & hkReferencedObject::operator=(class hkReferencedObject const &);
// public: class hkBaseObject & hkBaseObject::operator=(class hkBaseObject const &);
// public: void hkArray<class hkBool, struct hkContainerHeapAllocator>::setSize(int);
// public: hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator>::setSize(int);
// public: hkInplaceArray<float, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<float, 16, struct hkContainerHeapAllocator>(void);
// public: hkLocalArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::hkLocalArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>(int);
// public: hkLocalArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::~hkLocalArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>(void);
// public: class hkBool hkLocalArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::wasReallocated(void) const;
// public: hkArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput, struct hkContainerHeapAllocator>::hkArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput, struct hkContainerHeapAllocator>(void);
// public: class hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator> & hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator>::operator=(class hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator> const &);
// public: hkArrayBase<struct hkpVehicleInstance::WheelInfo>::hkArrayBase<struct hkpVehicleInstance::WheelInfo>(void);
// public: struct hkpVehicleInstance::WheelInfo & hkArrayBase<struct hkpVehicleInstance::WheelInfo>::operator[](int);
// public: void hkArrayBase<struct hkpVehicleInstance::WheelInfo>::_setSize(class hkMemoryAllocator &, int);
// public: class hkArray<class hkBool, struct hkContainerHeapAllocator> & hkArray<class hkBool, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkBool, struct hkContainerHeapAllocator> const &);
// public: int hkArrayBase<class hkBool>::getSize(void) const;
// public: void hkArrayBase<class hkBool>::_setSize(class hkMemoryAllocator &, int);
// public: struct hkpVehicleSuspension::SuspensionWheelParameters const & hkArrayBase<struct hkpVehicleSuspension::SuspensionWheelParameters>::operator[](int) const;
// public: hkInplaceArray<float, 16, struct hkContainerHeapAllocator>::hkInplaceArray<float, 16, struct hkContainerHeapAllocator>(int);
// public: hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>(void);
// public: void hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::clear(void);
// public: struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput * hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::begin(void);
// public: hkArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput, struct hkContainerHeapAllocator>::~hkArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::~hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>(void);
// struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput * hkAllocateStack<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>(int, char const *);
// void hkDeallocateStack<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>(struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput *);
// public: hkArray<float, struct hkContainerHeapAllocator>::hkArray<float, struct hkContainerHeapAllocator>(float *, int, int);
// public: void hkArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<struct hkpVehicleInstance::WheelInfo>::_reserve(class hkMemoryAllocator &, int);
// protected: class hkArrayBase<struct hkpVehicleInstance::WheelInfo> & hkArrayBase<struct hkpVehicleInstance::WheelInfo>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<struct hkpVehicleInstance::WheelInfo> const &, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkpVehicleInstance::WheelInfo>(struct hkpVehicleInstance::WheelInfo *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<class hkBool>::_reserve(class hkMemoryAllocator &, int);
// protected: class hkArrayBase<class hkBool> & hkArrayBase<class hkBool>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkBool> const &, struct hkTraitBool<1>);
// public: hkArrayBase<float>::hkArrayBase<float>(float *, int, int);
// public: void hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>(struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput *, int, struct hkTraitBool<0>);
// public: hkpVehicleInstance::WheelInfo::WheelInfo(void);
// public: static void hkArrayBase<struct hkpVehicleInstance::WheelInfo>::copy(struct hkpVehicleInstance::WheelInfo *, struct hkpVehicleInstance::WheelInfo const *, int);
// public: static void hkArrayUtil::constructWithArray<struct hkpVehicleInstance::WheelInfo>(struct hkpVehicleInstance::WheelInfo *, int, struct hkpVehicleInstance::WheelInfo const *, struct hkTraitBool<0>);
// public: static void hkArrayBase<class hkBool>::copy(class hkBool *, class hkBool const *, int);
// public: int hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::getCapacity(void) const;
// public: struct hkpVehicleInstance::WheelInfo & hkpVehicleInstance::WheelInfo::operator=(struct hkpVehicleInstance::WheelInfo const &);
// public: void hkContactPoint::set(class hkVector4const &, class hkVector4const &, float);
// public: void hkpRigidBody::applyForce(float, class hkVector4const &);
// public: hkpVehicleFrictionStatus::hkpVehicleFrictionStatus(void);
// public: void hkpVehicleFrictionStatus::AxisStatus::init(void);
// public: static void * hkpVehicleInstance::operator new(unsigned int);
// public: hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkpVehicleInstance::WheelInfo>::~hkArrayBase<struct hkpVehicleInstance::WheelInfo>(void);
// public: void hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<struct hkpVehicleInstance::WheelInfo>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: int hkArrayBase<struct hkpVehicleInstance::WheelInfo>::getCapacity(void) const;
// public: void hkArrayBase<struct hkpVehicleInstance::WheelInfo>::clear(void);
// public: static void hkArrayUtil::destruct<struct hkpVehicleInstance::WheelInfo>(struct hkpVehicleInstance::WheelInfo *, int, struct hkTraitBool<0>);

//public: hkpVehicleInstance::hkpVehicleInstance(class hkpRigidBody *)
//{
//    mangled_ppc("??0hkpVehicleInstance@@QAA@PAVhkpRigidBody@@@Z");
//};

//public: void hkpVehicleInstance::setChassis(class hkpRigidBody *)
//{
//    mangled_ppc("?setChassis@hkpVehicleInstance@@QAAXPAVhkpRigidBody@@@Z");
//};

//public: void hkpVehicleInstance::WheelInfo::init(void)
//{
//    mangled_ppc("?init@WheelInfo@hkpVehicleInstance@@QAAXXZ");
//};

//public: virtual hkpVehicleInstance::~hkpVehicleInstance(void)
//{
//    mangled_ppc("??1hkpVehicleInstance@@UAA@XZ");
//};

//public: virtual void hkpVehicleInstance::init(void)
//{
//    mangled_ppc("?init@hkpVehicleInstance@@UAAXXZ");
//};

//public: virtual void hkpVehicleInstance::getPhantoms(class hkArray<class hkpPhantom *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?getPhantoms@hkpVehicleInstance@@UAAXAAV?$hkArray@PAVhkpPhantom@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void hkpVehicleInstance::handleFixedGroundAccum(class hkpRigidBody *, class hkpVelocityAccumulator &)
//{
//    mangled_ppc("?handleFixedGroundAccum@hkpVehicleInstance@@UAAXPAVhkpRigidBody@@AAVhkpVelocityAccumulator@@@Z");
//};

//public: void hkpVehicleInstance::updateBeforeCollisionDetection(void)
//{
//    mangled_ppc("?updateBeforeCollisionDetection@hkpVehicleInstance@@QAAXXZ");
//};

//protected: void hkpVehicleInstance::updateWheels(float, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput const *)
//{
//    mangled_ppc("?updateWheels@hkpVehicleInstance@@IAAXMPBUCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@Z");
//};

//protected: void hkpVehicleInstance::updateDriverInput(float, struct hkpVehicleDriverInput::FilteredDriverInputOutput &)
//{
//    mangled_ppc("?updateDriverInput@hkpVehicleInstance@@IAAXMAAUFilteredDriverInputOutput@hkpVehicleDriverInput@@@Z");
//};

//protected: void hkpVehicleInstance::updateSteering(float, struct hkpVehicleDriverInput::FilteredDriverInputOutput const &)
//{
//    mangled_ppc("?updateSteering@hkpVehicleInstance@@IAAXMABUFilteredDriverInputOutput@hkpVehicleDriverInput@@@Z");
//};

//protected: void hkpVehicleInstance::updateTransmission(float, struct hkpVehicleTransmission::TransmissionOutput &)
//{
//    mangled_ppc("?updateTransmission@hkpVehicleInstance@@IAAXMAAUTransmissionOutput@hkpVehicleTransmission@@@Z");
//};

//protected: void hkpVehicleInstance::updateEngine(float, struct hkpVehicleDriverInput::FilteredDriverInputOutput const &, struct hkpVehicleTransmission::TransmissionOutput const &)
//{
//    mangled_ppc("?updateEngine@hkpVehicleInstance@@IAAXMABUFilteredDriverInputOutput@hkpVehicleDriverInput@@ABUTransmissionOutput@hkpVehicleTransmission@@@Z");
//};

//protected: void hkpVehicleInstance::updateBrake(float, struct hkpVehicleDriverInput::FilteredDriverInputOutput const &, struct hkpVehicleBrake::WheelBreakingOutput &)
//{
//    mangled_ppc("?updateBrake@hkpVehicleInstance@@IAAXMABUFilteredDriverInputOutput@hkpVehicleDriverInput@@AAUWheelBreakingOutput@hkpVehicleBrake@@@Z");
//};

//protected: void hkpVehicleInstance::updateSuspension(float, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput const *, class hkArray<float, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?updateSuspension@hkpVehicleInstance@@IAAXMPBUCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@AAV?$hkArray@MUhkContainerHeapAllocator@@@@@Z");
//};

//protected: void hkpVehicleInstance::updateAerodynamics(float, struct hkpVehicleAerodynamics::AerodynamicsDragOutput &)
//{
//    mangled_ppc("?updateAerodynamics@hkpVehicleInstance@@IAAXMAAUAerodynamicsDragOutput@hkpVehicleAerodynamics@@@Z");
//};

//protected: void hkpVehicleInstance::applySuspensionForcesAtWheel(float, int, float)
//{
//    mangled_ppc("?applySuspensionForcesAtWheel@hkpVehicleInstance@@IAAXMHM@Z");
//};

//protected: void hkpVehicleInstance::getAxleParamsFromWheel(int, float, float, float, struct hkpVehicleFrictionSolverAxleParams &)
//{
//    mangled_ppc("?getAxleParamsFromWheel@hkpVehicleInstance@@IAAXHMMMAAUhkpVehicleFrictionSolverAxleParams@@@Z");
//};

//protected: void hkpVehicleInstance::perWheelBehavior(float, class hkArray<float, struct hkContainerHeapAllocator> const &, class hkArray<float, struct hkContainerHeapAllocator> const &, class hkpRigidBody **const, struct hkpVehicleFrictionSolverAxleParams *const)
//{
//    mangled_ppc("?perWheelBehavior@hkpVehicleInstance@@IAAXMABV?$hkArray@MUhkContainerHeapAllocator@@@@0QAPAVhkpRigidBody@@QAUhkpVehicleFrictionSolverAxleParams@@@Z");
//};

//protected: void hkpVehicleInstance::getAxleParams(class hkStepInfo const &, class hkpRigidBody **const, class hkpVelocityAccumulator *const, class hkpVelocityAccumulator *const, struct hkpVehicleFrictionSolverAxleParams *const)
//{
//    mangled_ppc("?getAxleParams@hkpVehicleInstance@@IAAXABVhkStepInfo@@QAPAVhkpRigidBody@@QAVhkpVelocityAccumulator@@2QAUhkpVehicleFrictionSolverAxleParams@@@Z");
//};

//protected: void hkpVehicleInstance::getExtraTorqueFactor(float, class hkpVelocityAccumulator &) const
//{
//    mangled_ppc("?getExtraTorqueFactor@hkpVehicleInstance@@IBAXMAAVhkpVelocityAccumulator@@@Z");
//};

//protected: void hkpVehicleInstance::applyFrictionSolver(class hkStepInfo const &, struct hkpVehicleFrictionSolverParams &)
//{
//    mangled_ppc("?applyFrictionSolver@hkpVehicleInstance@@IAAXABVhkStepInfo@@AAUhkpVehicleFrictionSolverParams@@@Z");
//};

//protected: void hkpVehicleInstance::prepareFrictionSolverParams(class hkStepInfo const &, struct hkpVehicleFrictionSolverParams &)
//{
//    mangled_ppc("?prepareFrictionSolverParams@hkpVehicleInstance@@IAAXABVhkStepInfo@@AAUhkpVehicleFrictionSolverParams@@@Z");
//};

//protected: void hkpVehicleInstance::applyResultsToChassis(class hkpVelocityAccumulator const &)
//{
//    mangled_ppc("?applyResultsToChassis@hkpVehicleInstance@@IAAXABVhkpVelocityAccumulator@@@Z");
//};

//protected: void hkpVehicleInstance::applyResultsToGround(float, struct hkpVehicleFrictionSolverAxleParams const *const, class hkpRigidBody **const)
//{
//    mangled_ppc("?applyResultsToGround@hkpVehicleInstance@@IAAXMQBUhkpVehicleFrictionSolverAxleParams@@QAPAVhkpRigidBody@@@Z");
//};

//protected: void hkpVehicleInstance::applyResultsToWheelInfo(float, class hkpRigidBody const *const *const, struct hkpVehicleFrictionSolverParams const &)
//{
//    mangled_ppc("?applyResultsToWheelInfo@hkpVehicleInstance@@IAAXMQBQBVhkpRigidBody@@ABUhkpVehicleFrictionSolverParams@@@Z");
//};

//protected: void hkpVehicleInstance::updateComponents(class hkStepInfo const &, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput const *, struct hkpVehicleAerodynamics::AerodynamicsDragOutput &, class hkArray<float, struct hkContainerHeapAllocator> &, class hkArray<float, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?updateComponents@hkpVehicleInstance@@IAAXABVhkStepInfo@@PBUCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@AAUAerodynamicsDragOutput@hkpVehicleAerodynamics@@AAV?$hkArray@MUhkContainerHeapAllocator@@@@3@Z");
//};

//protected: void hkpVehicleInstance::simulateVehicle(class hkStepInfo const &, struct hkpVehicleAerodynamics::AerodynamicsDragOutput const &, class hkArray<float, struct hkContainerHeapAllocator> const &, class hkArray<float, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?simulateVehicle@hkpVehicleInstance@@IAAXABVhkStepInfo@@ABUAerodynamicsDragOutput@hkpVehicleAerodynamics@@ABV?$hkArray@MUhkContainerHeapAllocator@@@@2@Z");
//};

//public: void hkpVehicleInstance::stepVehicleUsingWheelCollideOutput(class hkStepInfo const &, struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput const *)
//{
//    mangled_ppc("?stepVehicleUsingWheelCollideOutput@hkpVehicleInstance@@QAAXABVhkStepInfo@@PBUCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@Z");
//};

//public: virtual void hkpVehicleInstance::applyAction(class hkStepInfo const &)
//{
//    mangled_ppc("?applyAction@hkpVehicleInstance@@UAAXABVhkStepInfo@@@Z");
//};

//public: void hkpVehicleInstance::stepVehicle(class hkStepInfo const &)
//{
//    mangled_ppc("?stepVehicle@hkpVehicleInstance@@QAAXABVhkStepInfo@@@Z");
//};

//public: virtual void hkpVehicleInstance::calcCurrentPositionAndRotation(class hkpRigidBody const *, class hkpVehicleSuspension const *, int, class hkVector4&, class hkQuaternion &)
//{
//    mangled_ppc("?calcCurrentPositionAndRotation@hkpVehicleInstance@@UAAXPBVhkpRigidBody@@PBVhkpVehicleSuspension@@HAAVhkVector4@@AAVhkQuaternion@@@Z");
//};

//public: virtual float hkpVehicleInstance::calcRPM(void) const
//{
//    mangled_ppc("?calcRPM@hkpVehicleInstance@@UBAMXZ");
//};

//public: virtual float hkpVehicleInstance::calcKMPH(void) const
//{
//    mangled_ppc("?calcKMPH@hkpVehicleInstance@@UBAMXZ");
//};

//public: virtual float hkpVehicleInstance::calcMPH(void) const
//{
//    mangled_ppc("?calcMPH@hkpVehicleInstance@@UBAMXZ");
//};

//public: virtual class hkpAction * hkpVehicleInstance::clone(class hkArray<class hkpEntity *, struct hkContainerHeapAllocator> const &, class hkArray<class hkpPhantom *, struct hkContainerHeapAllocator> const &) const
//{
//    mangled_ppc("?clone@hkpVehicleInstance@@UBAPAVhkpAction@@ABV?$hkArray@PAVhkpEntity@@UhkContainerHeapAllocator@@@@ABV?$hkArray@PAVhkpPhantom@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void hkpVehicleInstance::addToWorld(class hkpWorld *)
//{
//    mangled_ppc("?addToWorld@hkpVehicleInstance@@UAAXPAVhkpWorld@@@Z");
//};

//public: virtual void hkpVehicleInstance::removeFromWorld(void)
//{
//    mangled_ppc("?removeFromWorld@hkpVehicleInstance@@UAAXXZ");
//};

//public: hkpVehicleSteering::SteeringAnglesOutput::SteeringAnglesOutput(void)
//{
//    mangled_ppc("??0SteeringAnglesOutput@hkpVehicleSteering@@QAA@XZ");
//};

//public: hkpVehicleSteering::SteeringAnglesOutput::~SteeringAnglesOutput(void)
//{
//    mangled_ppc("??1SteeringAnglesOutput@hkpVehicleSteering@@QAA@XZ");
//};

//public: hkpVehicleBrake::WheelBreakingOutput::WheelBreakingOutput(void)
//{
//    mangled_ppc("??0WheelBreakingOutput@hkpVehicleBrake@@QAA@XZ");
//};

//public: hkpVehicleBrake::WheelBreakingOutput::~WheelBreakingOutput(void)
//{
//    mangled_ppc("??1WheelBreakingOutput@hkpVehicleBrake@@QAA@XZ");
//};

//public: hkpVehicleTransmission::TransmissionOutput::TransmissionOutput(void)
//{
//    mangled_ppc("??0TransmissionOutput@hkpVehicleTransmission@@QAA@XZ");
//};

//public: hkpVehicleDriverInput::FilteredDriverInputOutput::FilteredDriverInputOutput(void)
//{
//    mangled_ppc("??0FilteredDriverInputOutput@hkpVehicleDriverInput@@QAA@XZ");
//};

//public: void hkpVehicleFrictionSolverAxleParams::initialize(void)
//{
//    mangled_ppc("?initialize@hkpVehicleFrictionSolverAxleParams@@QAAXXZ");
//};

//public: hkpVehicleFrictionSolverParams::hkpVehicleFrictionSolverParams(void)
//{
//    mangled_ppc("??0hkpVehicleFrictionSolverParams@@QAA@XZ");
//};

//public: class hkpVehicleInstance & hkpVehicleInstance::operator=(class hkpVehicleInstance const &)
//{
//    mangled_ppc("??4hkpVehicleInstance@@QAAAAV0@ABV0@@Z");
//};

//public: class hkpUnaryAction & hkpUnaryAction::operator=(class hkpUnaryAction const &)
//{
//    mangled_ppc("??4hkpUnaryAction@@QAAAAV0@ABV0@@Z");
//};

//public: class hkpAction & hkpAction::operator=(class hkpAction const &)
//{
//    mangled_ppc("??4hkpAction@@QAAAAV0@ABV0@@Z");
//};

//public: class hkReferencedObject & hkReferencedObject::operator=(class hkReferencedObject const &)
//{
//    mangled_ppc("??4hkReferencedObject@@QAAAAV0@ABV0@@Z");
//};

//public: class hkBaseObject & hkBaseObject::operator=(class hkBaseObject const &)
//{
//    mangled_ppc("??4hkBaseObject@@QAAAAV0@ABV0@@Z");
//};

//public: void hkArray<class hkBool, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@VhkBool@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator>::hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UWheelInfo@hkpVehicleInstance@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UWheelInfo@hkpVehicleInstance@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: hkInplaceArray<float, 16, struct hkContainerHeapAllocator>::~hkInplaceArray<float, 16, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkInplaceArray@M$0BA@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkLocalArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::hkLocalArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>(int)
//{
//    mangled_ppc("??0?$hkLocalArray@UCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@@QAA@H@Z");
//};

//public: hkLocalArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::~hkLocalArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>(void)
//{
//    mangled_ppc("??1?$hkLocalArray@UCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@@QAA@XZ");
//};

//public: class hkBool hkLocalArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::wasReallocated(void) const
//{
//    mangled_ppc("?wasReallocated@?$hkLocalArray@UCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@@QBA?AVhkBool@@XZ");
//};

//public: hkArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput, struct hkContainerHeapAllocator>::hkArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: class hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator> & hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator>::operator=(class hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@UWheelInfo@hkpVehicleInstance@@UhkContainerHeapAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//public: hkArrayBase<struct hkpVehicleInstance::WheelInfo>::hkArrayBase<struct hkpVehicleInstance::WheelInfo>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UWheelInfo@hkpVehicleInstance@@@@QAA@XZ");
//};

//public: struct hkpVehicleInstance::WheelInfo & hkArrayBase<struct hkpVehicleInstance::WheelInfo>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UWheelInfo@hkpVehicleInstance@@@@QAAAAUWheelInfo@hkpVehicleInstance@@H@Z");
//};

//public: void hkArrayBase<struct hkpVehicleInstance::WheelInfo>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UWheelInfo@hkpVehicleInstance@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: class hkArray<class hkBool, struct hkContainerHeapAllocator> & hkArray<class hkBool, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkBool, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@VhkBool@@UhkContainerHeapAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//public: int hkArrayBase<class hkBool>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@VhkBool@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkBool>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@VhkBool@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkpVehicleSuspension::SuspensionWheelParameters const & hkArrayBase<struct hkpVehicleSuspension::SuspensionWheelParameters>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@USuspensionWheelParameters@hkpVehicleSuspension@@@@QBAABUSuspensionWheelParameters@hkpVehicleSuspension@@H@Z");
//};

//public: hkInplaceArray<float, 16, struct hkContainerHeapAllocator>::hkInplaceArray<float, 16, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkInplaceArray@M$0BA@UhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@@QAA@XZ");
//};

//public: void hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@@QAAXXZ");
//};

//public: struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput * hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::begin(void)
//{
//    mangled_ppc("?begin@?$hkArrayBase@UCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@@QAAPAUCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@XZ");
//};

//public: hkArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput, struct hkContainerHeapAllocator>::~hkArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::~hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@@QAA@XZ");
//};

//struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput * hkAllocateStack<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@UCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@@YAPAUCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@HPBD@Z");
//};

//void hkDeallocateStack<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>(struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput *)
//{
//    mangled_ppc("??$hkDeallocateStack@UCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@@YAXPAUCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@Z");
//};

//public: hkArray<float, struct hkContainerHeapAllocator>::hkArray<float, struct hkContainerHeapAllocator>(float *, int, int)
//{
//    mangled_ppc("??0?$hkArray@MUhkContainerHeapAllocator@@@@QAA@PAMHH@Z");
//};

//public: void hkArray<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkpVehicleInstance::WheelInfo>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UWheelInfo@hkpVehicleInstance@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//protected: class hkArrayBase<struct hkpVehicleInstance::WheelInfo> & hkArrayBase<struct hkpVehicleInstance::WheelInfo>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<struct hkpVehicleInstance::WheelInfo> const &, struct hkTraitBool<0>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@UWheelInfo@hkpVehicleInstance@@@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkpVehicleInstance::WheelInfo>(struct hkpVehicleInstance::WheelInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UWheelInfo@hkpVehicleInstance@@@hkArrayUtil@@SAXPAUWheelInfo@hkpVehicleInstance@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<class hkBool>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@VhkBool@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//protected: class hkArrayBase<class hkBool> & hkArrayBase<class hkBool>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkBool> const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@VhkBool@@@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$00@@@Z");
//};

//public: hkArrayBase<float>::hkArrayBase<float>(float *, int, int)
//{
//    mangled_ppc("??0?$hkArrayBase@M@@QAA@PAMHH@Z");
//};

//public: void hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>(struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@hkArrayUtil@@SAXPAUCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: hkpVehicleInstance::WheelInfo::WheelInfo(void)
//{
//    mangled_ppc("??0WheelInfo@hkpVehicleInstance@@QAA@XZ");
//};

//public: static void hkArrayBase<struct hkpVehicleInstance::WheelInfo>::copy(struct hkpVehicleInstance::WheelInfo *, struct hkpVehicleInstance::WheelInfo const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@UWheelInfo@hkpVehicleInstance@@@@SAXPAUWheelInfo@hkpVehicleInstance@@PBU23@H@Z");
//};

//public: static void hkArrayUtil::constructWithArray<struct hkpVehicleInstance::WheelInfo>(struct hkpVehicleInstance::WheelInfo *, int, struct hkpVehicleInstance::WheelInfo const *, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithArray@UWheelInfo@hkpVehicleInstance@@@hkArrayUtil@@SAXPAUWheelInfo@hkpVehicleInstance@@HPBU12@U?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayBase<class hkBool>::copy(class hkBool *, class hkBool const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@VhkBool@@@@SAXPAVhkBool@@PBV2@H@Z");
//};

//public: int hkArrayBase<struct hkpVehicleWheelCollide::CollisionDetectionWheelOutput>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UCollisionDetectionWheelOutput@hkpVehicleWheelCollide@@@@QBAHXZ");
//};

//public: struct hkpVehicleInstance::WheelInfo & hkpVehicleInstance::WheelInfo::operator=(struct hkpVehicleInstance::WheelInfo const &)
//{
//    mangled_ppc("??4WheelInfo@hkpVehicleInstance@@QAAAAU01@ABU01@@Z");
//};

//public: void hkContactPoint::set(class hkVector4const &, class hkVector4const &, float)
//{
//    mangled_ppc("?set@hkContactPoint@@QAAXABVhkVector4@@0M@Z");
//};

//public: void hkpRigidBody::applyForce(float, class hkVector4const &)
//{
//    mangled_ppc("?applyForce@hkpRigidBody@@QAAXMABVhkVector4@@@Z");
//};

//public: hkpVehicleFrictionStatus::hkpVehicleFrictionStatus(void)
//{
//    mangled_ppc("??0hkpVehicleFrictionStatus@@QAA@XZ");
//};

//public: void hkpVehicleFrictionStatus::AxisStatus::init(void)
//{
//    mangled_ppc("?init@AxisStatus@hkpVehicleFrictionStatus@@QAAXXZ");
//};

//public: static void * hkpVehicleInstance::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpVehicleInstance@@SAPAXI@Z");
//};

//public: hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator>::~hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UWheelInfo@hkpVehicleInstance@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkpVehicleInstance::WheelInfo>::~hkArrayBase<struct hkpVehicleInstance::WheelInfo>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UWheelInfo@hkpVehicleInstance@@@@QAA@XZ");
//};

//public: void hkArray<struct hkpVehicleInstance::WheelInfo, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UWheelInfo@hkpVehicleInstance@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkpVehicleInstance::WheelInfo>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UWheelInfo@hkpVehicleInstance@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: int hkArrayBase<struct hkpVehicleInstance::WheelInfo>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UWheelInfo@hkpVehicleInstance@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkpVehicleInstance::WheelInfo>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UWheelInfo@hkpVehicleInstance@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkpVehicleInstance::WheelInfo>(struct hkpVehicleInstance::WheelInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UWheelInfo@hkpVehicleInstance@@@hkArrayUtil@@SAXPAUWheelInfo@hkpVehicleInstance@@HU?$hkTraitBool@$0A@@@@Z");
//};

