/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class hkBool HK_flyingcolors_solver; // "?HK_flyingcolors_solver@@3VhkBool@@A"

// hkSolveUpload;
// hkSolver_solveStiffSpringChain;
// hkSolver_solveBallAndSocketChain;
// hkSolver_solvePoweredChain;
// hkSolveStepJacobians;
// hkSolveConstraints;
// void hkDebugPrintfAccumulators(int, struct hkpSolverInfo const &, class hkpVelocityAccumulator *, class hkpVelocityAccumulator *);
// void updateSumVelocities(struct hkpSolverInfo const &, class hkVector4const &, bool, class hkVector4const &, class hkpVelocityAccumulator *);
// hkSolveApplyGravityByTheSteps;
// hkSolveConstraintsByTheSteps;
// hkSolveIntegrateVelocitiesByTheSteps;
// void hkSolver::storeVelocityAccumulators(class hkpVelocityAccumulator &, class hkpVelocityAccumulator &);
// void hkSolver::applyImpulse(class hkSimdReal const &, class hkp1Lin2AngJacobian const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp &);
// void hkSimdReal_store(class hkSimdReal const &, float *);
// public: void hkVector4::sub3clobberW(class hkVector4const &);
// public: void hkVector8::_setMul6(class hkMatrix6const &, class hkVector8const &);
// public: hkpChainSolverInfo::hkpChainSolverInfo(struct hkpSolverInfo const &);
// void hkSolver::applyAngularImpulse(class hkSimdReal const &, class hkp2AngJacobian const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp &);
// void hkSolver::loadFixedRegisters(void);
// int hkSolver::stepJacobian(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp &, class hkpJacobianSchema const *, class hkpVelocityAccumulator *, struct hkpSolverElemTemp *);
// public: class hkpVelocityAccumulator * hkpJacobianHeaderSchema::getBodyA(class hkpVelocityAccumulator *) const;
// public: class hkpVelocityAccumulator * hkpJacobianHeaderSchema::getBodyB(class hkpVelocityAccumulator *) const;
// void hkSolver::prefetchVelocityAccumulators(class hkpVelocityAccumulator &, class hkpVelocityAccumulator &);
// void hkSolver::storeDelayedResult(struct hkpSolverElemTemp *);
// void hkSolver::solve1dLinLimits(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dLinearLimitsSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// class hkSimdReal hkSolver::getLinearDv0(class hkp1Lin2AngJacobian const &, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &);
// class hkSimdReal const operator-(class hkSimdReal, class hkSimdReal);
// public: class hkSimdReal const hkp1Lin2AngJacobian::getRhsSr(void) const;
// void hkSolver::applyImpulse0(class hkSimdReal const &, class hkp1Lin2AngJacobian const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp &);
// void hkSolver::solve1dAngLimits(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dAngularLimitsSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// void hkSolver::applyAngularImpulse0(class hkSimdReal const &, class hkp2AngJacobian const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp &);
// void hkSolver::solve1dBilateral(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dBilateralSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// public: class hkSimdReal hkp1Lin2AngJacobian::getInvJacDiagSr(void) const;
// void hkSolver::solve1dBilateralWithImpulseLimit(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dBilateralSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// public: hkSimdReal::hkSimdReal(struct __vector4const &);
// void hkSimdReal_setMax(class hkSimdReal const &, class hkSimdReal const &, class hkSimdReal &);
// void hkSimdReal_setMin(class hkSimdReal const &, class hkSimdReal const &, class hkSimdReal &);
// public: class hkSimdReal hkp1Lin2AngJacobian::getUserValueSr(void) const;
// void hkSolver::solve1dBilateralUserTau(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dBilateralUserTauSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// void hkSolver::solve1dAngular(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dAngularSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// public: class hkSimdReal hkp2AngJacobian::getInvJacDiagSr(void) const;
// class hkSimdReal hkSolver::getAngularDv0(class hkp2AngJacobian const &, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &);
// public: class hkSimdReal hkp2AngJacobian::getAngularRhsSr(void) const;
// void hkSolver::solveSingleContact(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobianSingleContactSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// void hkSolver::solveSingleLimitContact(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobianSingleContactSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// void hkSolver::solvePulley(struct hkpSolverInfo const &, class hkpJacobian1dPulleySchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// public: class hkSimdReal hkp2Lin2AngJacobian::getInvJacDiagSr(void) const;
// class hkSimdReal hkSolver::getDv2Lin2Ang(class hkp2Lin2AngJacobian const &, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &);
// public: class hkSimdReal hkp2Lin2AngJacobian::getRhsSr(void) const;
// void hkSolver::applyImpulse2Lin2Ang(class hkSimdReal const &, class hkp2Lin2AngJacobian const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp &);
// void hkSolver::solvePairContact(struct hkpSolverInfo const &, class hkpJacobianPairContactSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// void hkSolver::getDv01(class hkp1Lin2AngJacobian const *, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &, class hkVector4&);
// void hkSolver::applyImpulse1(class hkSimdReal const &, class hkp1Lin2AngJacobian const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp &);
// void hkSolver::applyImpulse01(class hkSimdReal const &, class hkSimdReal const &, class hkp1Lin2AngJacobian const *, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *);
// void hkSolver::solve3dFriction(struct hkpSolverInfo const &, class hkpJacobian3dFrictionSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// void hkSolver::getDv012(class hkpJacTriple2Bil1Ang const *, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &, class hkVector4&);
// void hkSolver::solve2dFriction(struct hkpSolverInfo const &, class hkpJacobian2dFrictionSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// void hkSolver::solve2dRollingFriction(struct hkpSolverInfo const &, class hkpJacobian2dRollingFrictionSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *);
// void hkSolver::solve1dFriction(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dFrictionSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// void hkSolver::solve1dAngFriction(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dAngularFrictionSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// void hkSolver::solve1dAngularMotor(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dAngularMotorSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// void hkSolver::solve1dLinearMotor(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dLinearMotorSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&);
// public: hkSolver::SolverStepTemp::SolverStepTemp(void);
// void hkSolver::solve(struct hkpSolverInfo const &, class hkpJacobianSchema const *, class hkpVelocityAccumulator *, struct hkpSolverElemTemp *);
// void hkSolver::integrateVelocities(struct hkpSolverInfo const &, class hkVector4const &, bool, class hkVector4const &, class hkpVelocityAccumulator *, class hkpVelocityAccumulator *);
// void hkSolver::integrateVelocityAccumulator(struct hkpSolverInfo const &, class hkpVelocityAccumulator *);
// void hkSolver::applyVelField(struct hkpSolverInfo const &, class hkVector4const &, class hkpVelocityAccumulator *, class hkpVelocityAccumulator *);
// public: enum hkpVelocityAccumulator::hkpAccumulatorType hkEnum<enum hkpVelocityAccumulator::hkpAccumulatorType, unsigned char>::operator enum hkpVelocityAccumulator::hkpAccumulatorType(void) const;
// public: class hkBool hkEnum<enum hkpVelocityAccumulator::hkpAccumulatorType, unsigned char>::operator==(enum hkpVelocityAccumulator::hkpAccumulatorType) const;
// public: hkPadSpu<class hkp1Lin2AngJacobian *>::hkPadSpu<class hkp1Lin2AngJacobian *>(void);
// public: void hkPadSpu<class hkp1Lin2AngJacobian *>::operator=(class hkp1Lin2AngJacobian *);
// public: hkPadSpu<class hkp2AngJacobian *>::hkPadSpu<class hkp2AngJacobian *>(void);
// public: void hkPadSpu<class hkp2AngJacobian *>::operator=(class hkp2AngJacobian *);
// public: hkPadSpu<class hkpVelocityAccumulatorOffset *>::hkPadSpu<class hkpVelocityAccumulatorOffset *>(void);
// public: void hkPadSpu<class hkpVelocityAccumulatorOffset *>::operator=(class hkpVelocityAccumulatorOffset *);
// public: hkPadSpu<class hkpVelocityAccumulator *>::hkPadSpu<class hkpVelocityAccumulator *>(void);
// public: void hkPadSpu<class hkpVelocityAccumulator *>::operator=(class hkpVelocityAccumulator *);
// public: hkPadSpu<struct hkpConstraintChainMatrix6Triple *>::hkPadSpu<struct hkpConstraintChainMatrix6Triple *>(void);
// public: void hkPadSpu<struct hkpConstraintChainMatrix6Triple *>::operator=(struct hkpConstraintChainMatrix6Triple *);
// public: hkPadSpu<struct hkp3dAngularMotorSolverInfo *>::hkPadSpu<struct hkp3dAngularMotorSolverInfo *>(void);
// public: void hkPadSpu<struct hkp3dAngularMotorSolverInfo *>::operator=(struct hkp3dAngularMotorSolverInfo *);
// public: hkPadSpu<class hkVector8*>::hkPadSpu<class hkVector8*>(void);
// public: void hkPadSpu<class hkVector8*>::operator=(class hkVector8*);
// class hkpVelocityAccumulator * hkSelect<class hkpVelocityAccumulator>(int, class hkpVelocityAccumulator *, class hkpVelocityAccumulator *);

//hkSolveUpload
//{
//    mangled_ppc("hkSolveUpload");
//};

//hkSolver_solveStiffSpringChain
//{
//    mangled_ppc("hkSolver_solveStiffSpringChain");
//};

//hkSolver_solveBallAndSocketChain
//{
//    mangled_ppc("hkSolver_solveBallAndSocketChain");
//};

//hkSolver_solvePoweredChain
//{
//    mangled_ppc("hkSolver_solvePoweredChain");
//};

//hkSolveStepJacobians
//{
//    mangled_ppc("hkSolveStepJacobians");
//};

//hkSolveConstraints
//{
//    mangled_ppc("hkSolveConstraints");
//};

//void hkDebugPrintfAccumulators(int, struct hkpSolverInfo const &, class hkpVelocityAccumulator *, class hkpVelocityAccumulator *)
//{
//    mangled_ppc("?hkDebugPrintfAccumulators@@YAXHABUhkpSolverInfo@@PAVhkpVelocityAccumulator@@1@Z");
//};

//void updateSumVelocities(struct hkpSolverInfo const &, class hkVector4const &, bool, class hkVector4const &, class hkpVelocityAccumulator *)
//{
//    mangled_ppc("?updateSumVelocities@@YAXABUhkpSolverInfo@@ABVhkVector4@@_N1PAVhkpVelocityAccumulator@@@Z");
//};

//hkSolveApplyGravityByTheSteps
//{
//    mangled_ppc("hkSolveApplyGravityByTheSteps");
//};

//hkSolveConstraintsByTheSteps
//{
//    mangled_ppc("hkSolveConstraintsByTheSteps");
//};

//hkSolveIntegrateVelocitiesByTheSteps
//{
//    mangled_ppc("hkSolveIntegrateVelocitiesByTheSteps");
//};

//void hkSolver::storeVelocityAccumulators(class hkpVelocityAccumulator &, class hkpVelocityAccumulator &)
//{
//    mangled_ppc("?storeVelocityAccumulators@hkSolver@@YAXAAVhkpVelocityAccumulator@@0@Z");
//};

//void hkSolver::applyImpulse(class hkSimdReal const &, class hkp1Lin2AngJacobian const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp &)
//{
//    mangled_ppc("?applyImpulse@hkSolver@@YAXABVhkSimdReal@@ABVhkp1Lin2AngJacobian@@AAVhkpVelocityAccumulator@@2AAUhkpSolverElemTemp@@@Z");
//};

//void hkSimdReal_store(class hkSimdReal const &, float *)
//{
//    mangled_ppc("?hkSimdReal_store@@YAXABVhkSimdReal@@PAM@Z");
//};

//public: void hkVector4::sub3clobberW(class hkVector4const &)
//{
//    mangled_ppc("?sub3clobberW@hkVector4@@QAAXABV1@@Z");
//};

//public: void hkVector8::_setMul6(class hkMatrix6const &, class hkVector8const &)
//{
//    mangled_ppc("?_setMul6@hkVector8@@QAAXABVhkMatrix6@@ABV1@@Z");
//};

//public: hkpChainSolverInfo::hkpChainSolverInfo(struct hkpSolverInfo const &)
//{
//    mangled_ppc("??0hkpChainSolverInfo@@QAA@ABUhkpSolverInfo@@@Z");
//};

//void hkSolver::applyAngularImpulse(class hkSimdReal const &, class hkp2AngJacobian const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp &)
//{
//    mangled_ppc("?applyAngularImpulse@hkSolver@@YAXABVhkSimdReal@@ABVhkp2AngJacobian@@AAVhkpVelocityAccumulator@@2AAUhkpSolverElemTemp@@@Z");
//};

//void hkSolver::loadFixedRegisters(void)
//{
//    mangled_ppc("?loadFixedRegisters@hkSolver@@YAXXZ");
//};

//int hkSolver::stepJacobian(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp &, class hkpJacobianSchema const *, class hkpVelocityAccumulator *, struct hkpSolverElemTemp *)
//{
//    mangled_ppc("?stepJacobian@hkSolver@@YAHABUhkpSolverInfo@@AAUSolverStepTemp@1@PBVhkpJacobianSchema@@PAVhkpVelocityAccumulator@@PAUhkpSolverElemTemp@@@Z");
//};

//public: class hkpVelocityAccumulator * hkpJacobianHeaderSchema::getBodyA(class hkpVelocityAccumulator *) const
//{
//    mangled_ppc("?getBodyA@hkpJacobianHeaderSchema@@QBAPAVhkpVelocityAccumulator@@PAV2@@Z");
//};

//public: class hkpVelocityAccumulator * hkpJacobianHeaderSchema::getBodyB(class hkpVelocityAccumulator *) const
//{
//    mangled_ppc("?getBodyB@hkpJacobianHeaderSchema@@QBAPAVhkpVelocityAccumulator@@PAV2@@Z");
//};

//void hkSolver::prefetchVelocityAccumulators(class hkpVelocityAccumulator &, class hkpVelocityAccumulator &)
//{
//    mangled_ppc("?prefetchVelocityAccumulators@hkSolver@@YAXAAVhkpVelocityAccumulator@@0@Z");
//};

//void hkSolver::storeDelayedResult(struct hkpSolverElemTemp *)
//{
//    mangled_ppc("?storeDelayedResult@hkSolver@@YAXPAUhkpSolverElemTemp@@@Z");
//};

//void hkSolver::solve1dLinLimits(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dLinearLimitsSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solve1dLinLimits@hkSolver@@YAXABUhkpSolverInfo@@ABUSolverStepTemp@1@ABVhkpJacobian1dLinearLimitsSchema@@AAVhkpVelocityAccumulator@@3PAUhkpSolverElemTemp@@AAPAU6@@Z");
//};

//class hkSimdReal hkSolver::getLinearDv0(class hkp1Lin2AngJacobian const &, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &)
//{
//    mangled_ppc("?getLinearDv0@hkSolver@@YA?AVhkSimdReal@@ABVhkp1Lin2AngJacobian@@ABVhkpVelocityAccumulator@@1ABUhkpSolverInfo@@@Z");
//};

//class hkSimdReal const operator-(class hkSimdReal, class hkSimdReal)
//{
//    mangled_ppc("??G@YA?BVhkSimdReal@@V0@0@Z");
//};

//public: class hkSimdReal const hkp1Lin2AngJacobian::getRhsSr(void) const
//{
//    mangled_ppc("?getRhsSr@hkp1Lin2AngJacobian@@QBA?BVhkSimdReal@@XZ");
//};

//void hkSolver::applyImpulse0(class hkSimdReal const &, class hkp1Lin2AngJacobian const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp &)
//{
//    mangled_ppc("?applyImpulse0@hkSolver@@YAXABVhkSimdReal@@ABVhkp1Lin2AngJacobian@@AAVhkpVelocityAccumulator@@2AAUhkpSolverElemTemp@@@Z");
//};

//void hkSolver::solve1dAngLimits(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dAngularLimitsSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solve1dAngLimits@hkSolver@@YAXABUhkpSolverInfo@@ABUSolverStepTemp@1@ABVhkpJacobian1dAngularLimitsSchema@@AAVhkpVelocityAccumulator@@3PAUhkpSolverElemTemp@@AAPAU6@@Z");
//};

//void hkSolver::applyAngularImpulse0(class hkSimdReal const &, class hkp2AngJacobian const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp &)
//{
//    mangled_ppc("?applyAngularImpulse0@hkSolver@@YAXABVhkSimdReal@@ABVhkp2AngJacobian@@AAVhkpVelocityAccumulator@@2AAUhkpSolverElemTemp@@@Z");
//};

//void hkSolver::solve1dBilateral(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dBilateralSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solve1dBilateral@hkSolver@@YAXABUhkpSolverInfo@@ABUSolverStepTemp@1@ABVhkpJacobian1dBilateralSchema@@AAVhkpVelocityAccumulator@@3PAUhkpSolverElemTemp@@AAPAU6@@Z");
//};

//public: class hkSimdReal hkp1Lin2AngJacobian::getInvJacDiagSr(void) const
//{
//    mangled_ppc("?getInvJacDiagSr@hkp1Lin2AngJacobian@@QBA?AVhkSimdReal@@XZ");
//};

//void hkSolver::solve1dBilateralWithImpulseLimit(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dBilateralSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solve1dBilateralWithImpulseLimit@hkSolver@@YAXABUhkpSolverInfo@@ABUSolverStepTemp@1@ABVhkpJacobian1dBilateralSchema@@AAVhkpVelocityAccumulator@@3PAUhkpSolverElemTemp@@AAPAU6@@Z");
//};

//public: hkSimdReal::hkSimdReal(struct __vector4const &)
//{
//    mangled_ppc("??0hkSimdReal@@QAA@ABU__vector4@@@Z");
//};

//void hkSimdReal_setMax(class hkSimdReal const &, class hkSimdReal const &, class hkSimdReal &)
//{
//    mangled_ppc("?hkSimdReal_setMax@@YAXABVhkSimdReal@@0AAV1@@Z");
//};

//void hkSimdReal_setMin(class hkSimdReal const &, class hkSimdReal const &, class hkSimdReal &)
//{
//    mangled_ppc("?hkSimdReal_setMin@@YAXABVhkSimdReal@@0AAV1@@Z");
//};

//public: class hkSimdReal hkp1Lin2AngJacobian::getUserValueSr(void) const
//{
//    mangled_ppc("?getUserValueSr@hkp1Lin2AngJacobian@@QBA?AVhkSimdReal@@XZ");
//};

//void hkSolver::solve1dBilateralUserTau(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dBilateralUserTauSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solve1dBilateralUserTau@hkSolver@@YAXABUhkpSolverInfo@@ABUSolverStepTemp@1@ABVhkpJacobian1dBilateralUserTauSchema@@AAVhkpVelocityAccumulator@@3PAUhkpSolverElemTemp@@AAPAU6@@Z");
//};

//void hkSolver::solve1dAngular(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dAngularSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solve1dAngular@hkSolver@@YAXABUhkpSolverInfo@@ABUSolverStepTemp@1@ABVhkpJacobian1dAngularSchema@@AAVhkpVelocityAccumulator@@3PAUhkpSolverElemTemp@@AAPAU6@@Z");
//};

//public: class hkSimdReal hkp2AngJacobian::getInvJacDiagSr(void) const
//{
//    mangled_ppc("?getInvJacDiagSr@hkp2AngJacobian@@QBA?AVhkSimdReal@@XZ");
//};

//class hkSimdReal hkSolver::getAngularDv0(class hkp2AngJacobian const &, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &)
//{
//    mangled_ppc("?getAngularDv0@hkSolver@@YA?AVhkSimdReal@@ABVhkp2AngJacobian@@ABVhkpVelocityAccumulator@@1ABUhkpSolverInfo@@@Z");
//};

//public: class hkSimdReal hkp2AngJacobian::getAngularRhsSr(void) const
//{
//    mangled_ppc("?getAngularRhsSr@hkp2AngJacobian@@QBA?AVhkSimdReal@@XZ");
//};

//void hkSolver::solveSingleContact(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobianSingleContactSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solveSingleContact@hkSolver@@YAXABUhkpSolverInfo@@ABUSolverStepTemp@1@ABVhkpJacobianSingleContactSchema@@AAVhkpVelocityAccumulator@@3PAUhkpSolverElemTemp@@AAPAU6@@Z");
//};

//void hkSolver::solveSingleLimitContact(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobianSingleContactSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solveSingleLimitContact@hkSolver@@YAXABUhkpSolverInfo@@ABUSolverStepTemp@1@ABVhkpJacobianSingleContactSchema@@AAVhkpVelocityAccumulator@@3PAUhkpSolverElemTemp@@AAPAU6@@Z");
//};

//void hkSolver::solvePulley(struct hkpSolverInfo const &, class hkpJacobian1dPulleySchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solvePulley@hkSolver@@YAXABUhkpSolverInfo@@ABVhkpJacobian1dPulleySchema@@AAVhkpVelocityAccumulator@@2PAUhkpSolverElemTemp@@AAPAU5@@Z");
//};

//public: class hkSimdReal hkp2Lin2AngJacobian::getInvJacDiagSr(void) const
//{
//    mangled_ppc("?getInvJacDiagSr@hkp2Lin2AngJacobian@@QBA?AVhkSimdReal@@XZ");
//};

//class hkSimdReal hkSolver::getDv2Lin2Ang(class hkp2Lin2AngJacobian const &, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &)
//{
//    mangled_ppc("?getDv2Lin2Ang@hkSolver@@YA?AVhkSimdReal@@ABVhkp2Lin2AngJacobian@@ABVhkpVelocityAccumulator@@1ABUhkpSolverInfo@@@Z");
//};

//public: class hkSimdReal hkp2Lin2AngJacobian::getRhsSr(void) const
//{
//    mangled_ppc("?getRhsSr@hkp2Lin2AngJacobian@@QBA?AVhkSimdReal@@XZ");
//};

//void hkSolver::applyImpulse2Lin2Ang(class hkSimdReal const &, class hkp2Lin2AngJacobian const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp &)
//{
//    mangled_ppc("?applyImpulse2Lin2Ang@hkSolver@@YAXABVhkSimdReal@@ABVhkp2Lin2AngJacobian@@AAVhkpVelocityAccumulator@@2AAUhkpSolverElemTemp@@@Z");
//};

//void hkSolver::solvePairContact(struct hkpSolverInfo const &, class hkpJacobianPairContactSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solvePairContact@hkSolver@@YAXABUhkpSolverInfo@@ABVhkpJacobianPairContactSchema@@AAVhkpVelocityAccumulator@@2PAUhkpSolverElemTemp@@AAPAU5@@Z");
//};

//void hkSolver::getDv01(class hkp1Lin2AngJacobian const *, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &, class hkVector4&)
//{
//    mangled_ppc("?getDv01@hkSolver@@YAXPBVhkp1Lin2AngJacobian@@ABVhkpVelocityAccumulator@@1ABUhkpSolverInfo@@AAVhkVector4@@@Z");
//};

//void hkSolver::applyImpulse1(class hkSimdReal const &, class hkp1Lin2AngJacobian const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp &)
//{
//    mangled_ppc("?applyImpulse1@hkSolver@@YAXABVhkSimdReal@@ABVhkp1Lin2AngJacobian@@AAVhkpVelocityAccumulator@@2AAUhkpSolverElemTemp@@@Z");
//};

//void hkSolver::applyImpulse01(class hkSimdReal const &, class hkSimdReal const &, class hkp1Lin2AngJacobian const *, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *)
//{
//    mangled_ppc("?applyImpulse01@hkSolver@@YAXABVhkSimdReal@@0PBVhkp1Lin2AngJacobian@@AAVhkpVelocityAccumulator@@2PAUhkpSolverElemTemp@@@Z");
//};

//void hkSolver::solve3dFriction(struct hkpSolverInfo const &, class hkpJacobian3dFrictionSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solve3dFriction@hkSolver@@YAXABUhkpSolverInfo@@ABVhkpJacobian3dFrictionSchema@@AAVhkpVelocityAccumulator@@2PAUhkpSolverElemTemp@@AAPAU5@@Z");
//};

//void hkSolver::getDv012(class hkpJacTriple2Bil1Ang const *, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &, class hkVector4&)
//{
//    mangled_ppc("?getDv012@hkSolver@@YAXPBVhkpJacTriple2Bil1Ang@@ABVhkpVelocityAccumulator@@1ABUhkpSolverInfo@@AAVhkVector4@@@Z");
//};

//void hkSolver::solve2dFriction(struct hkpSolverInfo const &, class hkpJacobian2dFrictionSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solve2dFriction@hkSolver@@YAXABUhkpSolverInfo@@ABVhkpJacobian2dFrictionSchema@@AAVhkpVelocityAccumulator@@2PAUhkpSolverElemTemp@@AAPAU5@@Z");
//};

//void hkSolver::solve2dRollingFriction(struct hkpSolverInfo const &, class hkpJacobian2dRollingFrictionSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *)
//{
//    mangled_ppc("?solve2dRollingFriction@hkSolver@@YAXABUhkpSolverInfo@@ABVhkpJacobian2dRollingFrictionSchema@@AAVhkpVelocityAccumulator@@2PAUhkpSolverElemTemp@@@Z");
//};

//void hkSolver::solve1dFriction(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dFrictionSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solve1dFriction@hkSolver@@YAXABUhkpSolverInfo@@ABUSolverStepTemp@1@ABVhkpJacobian1dFrictionSchema@@AAVhkpVelocityAccumulator@@3PAUhkpSolverElemTemp@@AAPAU6@@Z");
//};

//void hkSolver::solve1dAngFriction(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dAngularFrictionSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solve1dAngFriction@hkSolver@@YAXABUhkpSolverInfo@@ABUSolverStepTemp@1@ABVhkpJacobian1dAngularFrictionSchema@@AAVhkpVelocityAccumulator@@3PAUhkpSolverElemTemp@@AAPAU6@@Z");
//};

//void hkSolver::solve1dAngularMotor(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dAngularMotorSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solve1dAngularMotor@hkSolver@@YAXABUhkpSolverInfo@@ABUSolverStepTemp@1@ABVhkpJacobian1dAngularMotorSchema@@AAVhkpVelocityAccumulator@@3PAUhkpSolverElemTemp@@AAPAU6@@Z");
//};

//void hkSolver::solve1dLinearMotor(struct hkpSolverInfo const &, struct hkSolver::SolverStepTemp const &, class hkpJacobian1dLinearMotorSchema const &, class hkpVelocityAccumulator &, class hkpVelocityAccumulator &, struct hkpSolverElemTemp *, struct hkpSolverElemTemp *&)
//{
//    mangled_ppc("?solve1dLinearMotor@hkSolver@@YAXABUhkpSolverInfo@@ABUSolverStepTemp@1@ABVhkpJacobian1dLinearMotorSchema@@AAVhkpVelocityAccumulator@@3PAUhkpSolverElemTemp@@AAPAU6@@Z");
//};

//public: hkSolver::SolverStepTemp::SolverStepTemp(void)
//{
//    mangled_ppc("??0SolverStepTemp@hkSolver@@QAA@XZ");
//};

//void hkSolver::solve(struct hkpSolverInfo const &, class hkpJacobianSchema const *, class hkpVelocityAccumulator *, struct hkpSolverElemTemp *)
//{
//    mangled_ppc("?solve@hkSolver@@YAXABUhkpSolverInfo@@PBVhkpJacobianSchema@@PAVhkpVelocityAccumulator@@PAUhkpSolverElemTemp@@@Z");
//};

//void hkSolver::integrateVelocities(struct hkpSolverInfo const &, class hkVector4const &, bool, class hkVector4const &, class hkpVelocityAccumulator *, class hkpVelocityAccumulator *)
//{
//    mangled_ppc("?integrateVelocities@hkSolver@@YAXABUhkpSolverInfo@@ABVhkVector4@@_N1PAVhkpVelocityAccumulator@@3@Z");
//};

//void hkSolver::integrateVelocityAccumulator(struct hkpSolverInfo const &, class hkpVelocityAccumulator *)
//{
//    mangled_ppc("?integrateVelocityAccumulator@hkSolver@@YAXABUhkpSolverInfo@@PAVhkpVelocityAccumulator@@@Z");
//};

//void hkSolver::applyVelField(struct hkpSolverInfo const &, class hkVector4const &, class hkpVelocityAccumulator *, class hkpVelocityAccumulator *)
//{
//    mangled_ppc("?applyVelField@hkSolver@@YAXABUhkpSolverInfo@@ABVhkVector4@@PAVhkpVelocityAccumulator@@2@Z");
//};

//public: enum hkpVelocityAccumulator::hkpAccumulatorType hkEnum<enum hkpVelocityAccumulator::hkpAccumulatorType, unsigned char>::operator enum hkpVelocityAccumulator::hkpAccumulatorType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4hkpAccumulatorType@hkpVelocityAccumulator@@E@@QBA?AW4hkpAccumulatorType@hkpVelocityAccumulator@@XZ");
//};

//public: class hkBool hkEnum<enum hkpVelocityAccumulator::hkpAccumulatorType, unsigned char>::operator==(enum hkpVelocityAccumulator::hkpAccumulatorType) const
//{
//    mangled_ppc("??8?$hkEnum@W4hkpAccumulatorType@hkpVelocityAccumulator@@E@@QBA?AVhkBool@@W4hkpAccumulatorType@hkpVelocityAccumulator@@@Z");
//};

//public: hkPadSpu<class hkp1Lin2AngJacobian *>::hkPadSpu<class hkp1Lin2AngJacobian *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAVhkp1Lin2AngJacobian@@@@QAA@XZ");
//};

//public: void hkPadSpu<class hkp1Lin2AngJacobian *>::operator=(class hkp1Lin2AngJacobian *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAVhkp1Lin2AngJacobian@@@@QAAXPAVhkp1Lin2AngJacobian@@@Z");
//};

//public: hkPadSpu<class hkp2AngJacobian *>::hkPadSpu<class hkp2AngJacobian *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAVhkp2AngJacobian@@@@QAA@XZ");
//};

//public: void hkPadSpu<class hkp2AngJacobian *>::operator=(class hkp2AngJacobian *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAVhkp2AngJacobian@@@@QAAXPAVhkp2AngJacobian@@@Z");
//};

//public: hkPadSpu<class hkpVelocityAccumulatorOffset *>::hkPadSpu<class hkpVelocityAccumulatorOffset *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAVhkpVelocityAccumulatorOffset@@@@QAA@XZ");
//};

//public: void hkPadSpu<class hkpVelocityAccumulatorOffset *>::operator=(class hkpVelocityAccumulatorOffset *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAVhkpVelocityAccumulatorOffset@@@@QAAXPAVhkpVelocityAccumulatorOffset@@@Z");
//};

//public: hkPadSpu<class hkpVelocityAccumulator *>::hkPadSpu<class hkpVelocityAccumulator *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAVhkpVelocityAccumulator@@@@QAA@XZ");
//};

//public: void hkPadSpu<class hkpVelocityAccumulator *>::operator=(class hkpVelocityAccumulator *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAVhkpVelocityAccumulator@@@@QAAXPAVhkpVelocityAccumulator@@@Z");
//};

//public: hkPadSpu<struct hkpConstraintChainMatrix6Triple *>::hkPadSpu<struct hkpConstraintChainMatrix6Triple *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAUhkpConstraintChainMatrix6Triple@@@@QAA@XZ");
//};

//public: void hkPadSpu<struct hkpConstraintChainMatrix6Triple *>::operator=(struct hkpConstraintChainMatrix6Triple *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAUhkpConstraintChainMatrix6Triple@@@@QAAXPAUhkpConstraintChainMatrix6Triple@@@Z");
//};

//public: hkPadSpu<struct hkp3dAngularMotorSolverInfo *>::hkPadSpu<struct hkp3dAngularMotorSolverInfo *>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAUhkp3dAngularMotorSolverInfo@@@@QAA@XZ");
//};

//public: void hkPadSpu<struct hkp3dAngularMotorSolverInfo *>::operator=(struct hkp3dAngularMotorSolverInfo *)
//{
//    mangled_ppc("??4?$hkPadSpu@PAUhkp3dAngularMotorSolverInfo@@@@QAAXPAUhkp3dAngularMotorSolverInfo@@@Z");
//};

//public: hkPadSpu<class hkVector8*>::hkPadSpu<class hkVector8*>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAVhkVector8@@@@QAA@XZ");
//};

//public: void hkPadSpu<class hkVector8*>::operator=(class hkVector8*)
//{
//    mangled_ppc("??4?$hkPadSpu@PAVhkVector8@@@@QAAXPAVhkVector8@@@Z");
//};

//class hkpVelocityAccumulator * hkSelect<class hkpVelocityAccumulator>(int, class hkpVelocityAccumulator *, class hkpVelocityAccumulator *)
//{
//    mangled_ppc("??$hkSelect@VhkpVelocityAccumulator@@@@YAPAVhkpVelocityAccumulator@@HPAV0@0@Z");
//};

