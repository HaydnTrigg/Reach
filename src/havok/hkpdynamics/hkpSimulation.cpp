/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: hkpSimulation::hkpSimulation(class hkpWorld *);
// public: virtual hkpSimulation::~hkpSimulation(void);
// public: void hkpSimulation::setFrameTimeMarker(float);
// public: bool hkpSimulation::isSimulationAtMarker(void);
// public: bool hkpSimulation::isSimulationAtPsi(void) const;
// public: virtual enum hkpStepResult hkpSimulation::integrate(float);
// public: virtual enum hkpStepResult hkpSimulation::collide(void);
// protected: void hkpSimulation::checkDeltaTimeIsOk(float);
// protected: enum hkpStepResult hkpSimulation::reCollideAfterStepFailure(void);
// protected: float hkpSimulation::snapSimulateTimeAndGetTimeToAdvanceTo(void);
// public: virtual enum hkpStepResult hkpSimulation::advanceTime(void);
// public: virtual enum hkpStepResult hkpSimulation::stepDeltaTime(float);
// public: static void hkpSimulation::collideEntitiesBroadPhaseDiscrete(class hkpEntity **, int, class hkpWorld *);
// protected: virtual void hkpSimulation::collideInternal(class hkStepInfo const &);
// protected: enum hkpStepResult hkpSimulation::integrateInternal(class hkStepInfo const &);
// protected: void hkpSimulation::applyActions(void);
// public: virtual void hkpSimulation::collideEntitiesDiscrete(class hkpEntity **, int, class hkpWorld *, class hkStepInfo const &, enum hkpSimulation::FindContacts);
// public: void hkpSimulation::collideEntitiesNarrowPhaseDiscrete(class hkpEntity **, int, struct hkpProcessCollisionInput const &, enum hkpSimulation::FindContacts);
// protected: void hkpSimulation::processAgentCollideDiscrete(struct hkpAgentNnEntry *, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &);
// protected: void hkpSimulation::processAgentResetCollisionInformation(struct hkpAgentNnEntry *, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &);
// public: virtual void hkpSimulation::resetCollisionInformationForEntities(class hkpEntity **, int, class hkpWorld *, enum hkpSimulation::ResetCollisionInformation);
// protected: void hkpSimulation::processAgentsOfEntities(class hkpEntity **, int, struct hkpProcessCollisionInput const &, void (hkpSimulation::*)(struct hkpAgentNnEntry *, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &), enum hkpSimulation::FindContacts);
// void setRotationAroundCentreOfMass(class hkpRigidBody *, class hkQuaternion &);
// protected: virtual void hkpSimulation::reintegrateAndRecollideEntities(class hkpEntity **, int, class hkpWorld *, int);
// protected: static void hkpSimulation::collideIslandNarrowPhaseDiscrete(class hkpSimulationIsland *, struct hkpProcessCollisionInput const &);
// public: void hkpConstraintQueryIn::set(struct hkpSolverInfo const &, class hkStepInfo const &);
// public: void hkpWorld::lockCriticalOperationsForPhantoms(void);
// public: void hkpWorld::unlockCriticalOperationsForPhantoms(void);
// public: void hkpSolverInfo::incrementDeactivationFlags(void);
// protected: static void hkpSimulation::integrateIsland(class hkpSimulationIsland *, struct hkpWorldDynamicsStepInfo const &, class hkpConstraintQueryIn &);
// float hkMath::asin(float);
// public: void hkEnum<enum hkpSimulation::LastProcessingStep, unsigned char>::operator=(enum hkpSimulation::LastProcessingStep);
// public: class hkBool hkEnum<enum hkpSimulation::LastProcessingStep, unsigned char>::operator==(enum hkpSimulation::LastProcessingStep) const;
// struct hkAabbUint32* hkAllocateStack<struct hkAabbUint32>(int, char const *);
// void hkDeallocateStack<struct hkAabbUint32>(struct hkAabbUint32*);

//public: hkpSimulation::hkpSimulation(class hkpWorld *)
//{
//    mangled_ppc("??0hkpSimulation@@QAA@PAVhkpWorld@@@Z");
//};

//public: virtual hkpSimulation::~hkpSimulation(void)
//{
//    mangled_ppc("??1hkpSimulation@@UAA@XZ");
//};

//public: void hkpSimulation::setFrameTimeMarker(float)
//{
//    mangled_ppc("?setFrameTimeMarker@hkpSimulation@@QAAXM@Z");
//};

//public: bool hkpSimulation::isSimulationAtMarker(void)
//{
//    mangled_ppc("?isSimulationAtMarker@hkpSimulation@@QAA_NXZ");
//};

//public: bool hkpSimulation::isSimulationAtPsi(void) const
//{
//    mangled_ppc("?isSimulationAtPsi@hkpSimulation@@QBA_NXZ");
//};

//public: virtual enum hkpStepResult hkpSimulation::integrate(float)
//{
//    mangled_ppc("?integrate@hkpSimulation@@UAA?AW4hkpStepResult@@M@Z");
//};

//public: virtual enum hkpStepResult hkpSimulation::collide(void)
//{
//    mangled_ppc("?collide@hkpSimulation@@UAA?AW4hkpStepResult@@XZ");
//};

//protected: void hkpSimulation::checkDeltaTimeIsOk(float)
//{
//    mangled_ppc("?checkDeltaTimeIsOk@hkpSimulation@@IAAXM@Z");
//};

//protected: enum hkpStepResult hkpSimulation::reCollideAfterStepFailure(void)
//{
//    mangled_ppc("?reCollideAfterStepFailure@hkpSimulation@@IAA?AW4hkpStepResult@@XZ");
//};

//protected: float hkpSimulation::snapSimulateTimeAndGetTimeToAdvanceTo(void)
//{
//    mangled_ppc("?snapSimulateTimeAndGetTimeToAdvanceTo@hkpSimulation@@IAAMXZ");
//};

//public: virtual enum hkpStepResult hkpSimulation::advanceTime(void)
//{
//    mangled_ppc("?advanceTime@hkpSimulation@@UAA?AW4hkpStepResult@@XZ");
//};

//public: virtual enum hkpStepResult hkpSimulation::stepDeltaTime(float)
//{
//    mangled_ppc("?stepDeltaTime@hkpSimulation@@UAA?AW4hkpStepResult@@M@Z");
//};

//public: static void hkpSimulation::collideEntitiesBroadPhaseDiscrete(class hkpEntity **, int, class hkpWorld *)
//{
//    mangled_ppc("?collideEntitiesBroadPhaseDiscrete@hkpSimulation@@SAXPAPAVhkpEntity@@HPAVhkpWorld@@@Z");
//};

//protected: virtual void hkpSimulation::collideInternal(class hkStepInfo const &)
//{
//    mangled_ppc("?collideInternal@hkpSimulation@@MAAXABVhkStepInfo@@@Z");
//};

//protected: enum hkpStepResult hkpSimulation::integrateInternal(class hkStepInfo const &)
//{
//    mangled_ppc("?integrateInternal@hkpSimulation@@IAA?AW4hkpStepResult@@ABVhkStepInfo@@@Z");
//};

//protected: void hkpSimulation::applyActions(void)
//{
//    mangled_ppc("?applyActions@hkpSimulation@@IAAXXZ");
//};

//public: virtual void hkpSimulation::collideEntitiesDiscrete(class hkpEntity **, int, class hkpWorld *, class hkStepInfo const &, enum hkpSimulation::FindContacts)
//{
//    mangled_ppc("?collideEntitiesDiscrete@hkpSimulation@@UAAXPAPAVhkpEntity@@HPAVhkpWorld@@ABVhkStepInfo@@W4FindContacts@1@@Z");
//};

//public: void hkpSimulation::collideEntitiesNarrowPhaseDiscrete(class hkpEntity **, int, struct hkpProcessCollisionInput const &, enum hkpSimulation::FindContacts)
//{
//    mangled_ppc("?collideEntitiesNarrowPhaseDiscrete@hkpSimulation@@QAAXPAPAVhkpEntity@@HABUhkpProcessCollisionInput@@W4FindContacts@1@@Z");
//};

//protected: void hkpSimulation::processAgentCollideDiscrete(struct hkpAgentNnEntry *, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &)
//{
//    mangled_ppc("?processAgentCollideDiscrete@hkpSimulation@@IAAXPAUhkpAgentNnEntry@@ABUhkpProcessCollisionInput@@AAUhkpProcessCollisionOutput@@@Z");
//};

//protected: void hkpSimulation::processAgentResetCollisionInformation(struct hkpAgentNnEntry *, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &)
//{
//    mangled_ppc("?processAgentResetCollisionInformation@hkpSimulation@@IAAXPAUhkpAgentNnEntry@@ABUhkpProcessCollisionInput@@AAUhkpProcessCollisionOutput@@@Z");
//};

//public: virtual void hkpSimulation::resetCollisionInformationForEntities(class hkpEntity **, int, class hkpWorld *, enum hkpSimulation::ResetCollisionInformation)
//{
//    mangled_ppc("?resetCollisionInformationForEntities@hkpSimulation@@UAAXPAPAVhkpEntity@@HPAVhkpWorld@@W4ResetCollisionInformation@1@@Z");
//};

//protected: void hkpSimulation::processAgentsOfEntities(class hkpEntity **, int, struct hkpProcessCollisionInput const &, void (hkpSimulation::*)(struct hkpAgentNnEntry *, struct hkpProcessCollisionInput const &, struct hkpProcessCollisionOutput &), enum hkpSimulation::FindContacts)
//{
//    mangled_ppc("?processAgentsOfEntities@hkpSimulation@@IAAXPAPAVhkpEntity@@HABUhkpProcessCollisionInput@@P81@AAXPAUhkpAgentNnEntry@@1AAUhkpProcessCollisionOutput@@@ZW4FindContacts@1@@Z");
//};

//void setRotationAroundCentreOfMass(class hkpRigidBody *, class hkQuaternion &)
//{
//    mangled_ppc("?setRotationAroundCentreOfMass@@YAXPAVhkpRigidBody@@AAVhkQuaternion@@@Z");
//};

//protected: virtual void hkpSimulation::reintegrateAndRecollideEntities(class hkpEntity **, int, class hkpWorld *, int)
//{
//    mangled_ppc("?reintegrateAndRecollideEntities@hkpSimulation@@MAAXPAPAVhkpEntity@@HPAVhkpWorld@@H@Z");
//};

//protected: static void hkpSimulation::collideIslandNarrowPhaseDiscrete(class hkpSimulationIsland *, struct hkpProcessCollisionInput const &)
//{
//    mangled_ppc("?collideIslandNarrowPhaseDiscrete@hkpSimulation@@KAXPAVhkpSimulationIsland@@ABUhkpProcessCollisionInput@@@Z");
//};

//public: void hkpConstraintQueryIn::set(struct hkpSolverInfo const &, class hkStepInfo const &)
//{
//    mangled_ppc("?set@hkpConstraintQueryIn@@QAAXABUhkpSolverInfo@@ABVhkStepInfo@@@Z");
//};

//public: void hkpWorld::lockCriticalOperationsForPhantoms(void)
//{
//    mangled_ppc("?lockCriticalOperationsForPhantoms@hkpWorld@@QAAXXZ");
//};

//public: void hkpWorld::unlockCriticalOperationsForPhantoms(void)
//{
//    mangled_ppc("?unlockCriticalOperationsForPhantoms@hkpWorld@@QAAXXZ");
//};

//public: void hkpSolverInfo::incrementDeactivationFlags(void)
//{
//    mangled_ppc("?incrementDeactivationFlags@hkpSolverInfo@@QAAXXZ");
//};

//protected: static void hkpSimulation::integrateIsland(class hkpSimulationIsland *, struct hkpWorldDynamicsStepInfo const &, class hkpConstraintQueryIn &)
//{
//    mangled_ppc("?integrateIsland@hkpSimulation@@KAXPAVhkpSimulationIsland@@ABUhkpWorldDynamicsStepInfo@@AAVhkpConstraintQueryIn@@@Z");
//};

//float hkMath::asin(float)
//{
//    mangled_ppc("?asin@hkMath@@YAMM@Z");
//};

//public: void hkEnum<enum hkpSimulation::LastProcessingStep, unsigned char>::operator=(enum hkpSimulation::LastProcessingStep)
//{
//    mangled_ppc("??4?$hkEnum@W4LastProcessingStep@hkpSimulation@@E@@QAAXW4LastProcessingStep@hkpSimulation@@@Z");
//};

//public: class hkBool hkEnum<enum hkpSimulation::LastProcessingStep, unsigned char>::operator==(enum hkpSimulation::LastProcessingStep) const
//{
//    mangled_ppc("??8?$hkEnum@W4LastProcessingStep@hkpSimulation@@E@@QBA?AVhkBool@@W4LastProcessingStep@hkpSimulation@@@Z");
//};

//struct hkAabbUint32* hkAllocateStack<struct hkAabbUint32>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@UhkAabbUint32@@@@YAPAUhkAabbUint32@@HPBD@Z");
//};

//void hkDeallocateStack<struct hkAabbUint32>(struct hkAabbUint32*)
//{
//    mangled_ppc("??$hkDeallocateStack@UhkAabbUint32@@@@YAXPAUhkAabbUint32@@@Z");
//};

