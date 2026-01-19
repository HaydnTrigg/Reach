/* ---------- headers */

#include "havok\hkpconstraintsolver\hkpBuildJacobianFromAtoms.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// hkBallSocketConstraintBuildJacobian_noSchema;
// hk1dAngularLimitBuildJacobian;
// hk1dAngularVelocityMotorBeginJacobian;
// void _hk1dAngularVelocityMotorBeginJacobian(class hkVector4const &, class hkpConstraintQueryIn const &, class hkp2AngJacobian &, class hkp1dBilateralConstraintStatus &);
// hk1dAngularVelocityMotorCommitJacobian;
// hkBeginConstraints;
// void _hkBeginConstraints(class hkpConstraintQueryIn const &, class hkpConstraintQueryOut &, class hkpSolverResults *, int);
// hkSolverBuildJacobianFromAtomsNotContact;
// void hkSkipSolverResults(unsigned char, class hkpConstraintQueryOut &);
// void buildJacobianFromBallSocketAtom(struct hkpBallSocketConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void _hkBallSocketConstraintBuildJacobian(class hkVector4const &, class hkVector4const &, class hkpConstraintQueryIn const &, class hkpConstraintQueryOut &, float, float);
// void _hkBallSocketConstraintComputeStabilizedRhs(class hkpVelocityAccumulator const *, class hkpVelocityAccumulator const *, class hkVector4const &, class hkVector4const &, float, float, class hkVector4&);
// void buildJacobianFromStiffSpringAtom(struct hkpStiffSpringConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void callBridgeFromAtom(struct hkpBridgeConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform &, class hkTransform &, class hkpConstraintQueryOut &);
// void hkUndoBeginConstraints(class hkpConstraintQueryOut &);
// void setLocalTransformsFromAtom(struct hkpSetLocalTransformsConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform &, class hkTransform &, class hkpConstraintQueryOut const &);
// void setLocalTransform(class hkTransform const &, class hkTransform const &, class hkTransform &);
// void setLocalTranslationsFromAtom(struct hkpSetLocalTranslationsConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform &, class hkTransform &, class hkpConstraintQueryOut const &);
// void setLocalRotationsFromAtom(struct hkpSetLocalRotationsConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform &, class hkTransform &, class hkpConstraintQueryOut const &);
// void buildJacobianFromLinAtom(struct hkpLinConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void buildJacobianFromLinSoftAtom(struct hkpLinSoftConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void buildJacobianFromLinLimitAtom(struct hkpLinLimitConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void buildJacobianFrom2dAngAtom(struct hkp2dAngConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void buildJacobianFromAngAtom(struct hkpAngConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// enum hkResult buildJacobianFromAngLimitAtom(struct hkpAngLimitConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkp1dAngularLimitInfo &, class hkpConstraintQueryOut &);
// enum hkResult bulidJacobianFromTwistLimitAtom(struct hkpTwistLimitConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkp1dAngularLimitInfo &, class hkpConstraintQueryOut &);
// enum hkResult buildJacobianFromStabilizedConeLimitAtom(struct hkpConeLimitConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkp1dAngularLimitInfo &, class hkpConstraintQueryOut &);
// enum hkResult buildJacobianFromConeLimitAtom(struct hkpConeLimitConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkp1dAngularLimitInfo &, class hkpConstraintQueryOut &);
// void buildJacobianFromAngFrictionAtom(struct hkpAngFrictionConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void buildJacobianFromLinMotorAtom(struct hkpLinMotorConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void buildJacobianFromAngMotorAtom(struct hkpAngMotorConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void buildJacobianFromRagdollMotorAtom(struct hkpRagdollMotorConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void buildJacobianFromLinFrictionAtom(struct hkpLinFrictionConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void buildJacobianFromPulleyAtom(struct hkpPulleyConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void hkPulleyConstraintBuildJacobian(struct hkpPulleyConstraintInfo const &, class hkpConstraintQueryIn const &, class hkpConstraintQueryOut &);
// void buildJacobianFromSoftContactModifier(struct hkpSoftContactModifierConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// struct hkpSimpleContactConstraintAtom * getContactAtom(struct hkpModifierConstraintAtom const &);
// void buildJacobianFromIgnoreModifier(struct hkpIgnoreModifierConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void buildJacobianFromMassChangerModifier(struct hkpMassChangerModifierConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void buildJacobianFromCenterOfMassChangerModifier(struct hkpCenterOfMassChangerModifierConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void buildJacobianFromViscousSurfaceModifier(struct hkpViscousSurfaceModifierConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void buildJacobianFromMovingSurfaceModifier(struct hkpMovingSurfaceModifierConstraintAtom const &, class hkpConstraintQueryIn &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &);
// void hkInitHeader(class hkpConstraintQueryIn const &, class hkpSolverResults *, int, class hkpConstraintQueryOut &);
// void hkJacobianBuilder::buildLinearAndRhs(class hkpVelocityAccumulator const *, class hkpVelocityAccumulator const *, class hkVector4const &, class hkVector4const &, class hkVector4const &, float, float, class hkp1Lin2AngJacobian &);
// void _hk1dAngularLimitBuildJacobian(class hkp1dAngularLimitInfo const &, class hkpConstraintQueryIn const &, class hkpConstraintQueryOut &);
// public: void hkpJacobian1dAngularLimitsSchema::init1dAngularLimits(class hkp2AngJacobian const &, float, float, float);
// void hkJacobianBuilder::buildAngularBegin(class hkpVelocityAccumulator const *, class hkpVelocityAccumulator const *, class hkVector4const &, float, class hkp2AngJacobian &);
// public: void hkp2AngJacobian::setInvJacDiag(float);
// public: float hkp2AngJacobian::getAngularDiag(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &) const;
// void hkJacobianBuilder::buildAngularEnd(class hkp2AngJacobian &, float, float);
// public: float hkp2AngJacobian::getInvJacDiag(void) const;
// void hkJacobianBuilder::buildAngularEnd(class hkp2AngJacobian &);
// void _hk1dAngularVelocityMotorCommitJacobian(class hkp1dConstraintMotorInfo &, class hkpConstraintQueryIn const &, class hkp2AngJacobian &, class hkpConstraintQueryOut &);
// public: struct hkp1dMotorSolverInfo & hkpJacobian1dAngularMotorSchema::init1dAngularMotor(class hkp2AngJacobian const &);
// public: void hkpJacobianHeaderSchema::initHeader(class hkpConstraintInstance *, int, int, class hkpSolverResults *, int);
// void hkJacobianBuilder::initBuilder(class hkpVelocityAccumulator const *, class hkpVelocityAccumulator const *, float);
// public: int hkpBridgeConstraintAtom::numSolverResults(void) const;
// public: int hkpBallSocketConstraintAtom::numSolverResults(void) const;
// public: int hkpStiffSpringConstraintAtom::numSolverResults(void) const;
// public: int hkpSetLocalTransformsConstraintAtom::numSolverResults(void) const;
// public: int hkpSetLocalTranslationsConstraintAtom::numSolverResults(void) const;
// public: int hkpSetLocalRotationsConstraintAtom::numSolverResults(void) const;
// public: int hkpLinConstraintAtom::numSolverResults(void) const;
// public: int hkpLinSoftConstraintAtom::numSolverResults(void) const;
// public: int hkpLinLimitConstraintAtom::numSolverResults(void) const;
// public: int hkp2dAngConstraintAtom::numSolverResults(void) const;
// public: int hkpAngConstraintAtom::numSolverResults(void) const;
// public: int hkpAngLimitConstraintAtom::numSolverResults(void) const;
// public: int hkpTwistLimitConstraintAtom::numSolverResults(void) const;
// public: int hkpConeLimitConstraintAtom::numSolverResults(void) const;
// public: int hkpAngFrictionConstraintAtom::numSolverResults(void) const;
// public: int hkpAngMotorConstraintAtom::numSolverResults(void) const;
// public: int hkpRagdollMotorConstraintAtom::numSolverResults(void) const;
// public: int hkpLinFrictionConstraintAtom::numSolverResults(void) const;
// public: int hkpLinMotorConstraintAtom::numSolverResults(void) const;
// public: int hkpPulleyConstraintAtom::numSolverResults(void) const;
// public: int hkpSoftContactModifierConstraintAtom::numSolverResults(void) const;
// public: int hkpMassChangerModifierConstraintAtom::numSolverResults(void) const;
// public: int hkpCenterOfMassChangerModifierConstraintAtom::numSolverResults(void) const;
// public: int hkpViscousSurfaceModifierConstraintAtom::numSolverResults(void) const;
// public: int hkpMovingSurfaceModifierConstraintAtom::numSolverResults(void) const;
// public: int hkpIgnoreModifierConstraintAtom::numSolverResults(void) const;
// public: void hkpJacobianShiftSolverResultsPointerSchema::initShiftSolverResultsPointer(unsigned char);
// public: void hkpJacobian1dBilateralSchema::init1dBilateral(class hkp1Lin2AngJacobian const &, float);
// void hkJacobianBuilder::buildLinearEnd(class hkp1Lin2AngJacobian &, float, float);
// public: hkp1dLinearBilateralUserTauConstraintInfo::hkp1dLinearBilateralUserTauConstraintInfo(void);
// void hkInternalConstraintUtils_inlineCalcRelativeAngle(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4&, class hkPadSpu<float> &, class hkPadSpu<float> &);
// public: void hkpJacobian1dPulleySchema::init1dPulleySchema(class hkp2Lin2AngJacobian const &);
// void hkJacobianBuilder::build2LinearAndRhs(struct hkJacobianBuilder::build2LinearAndRhsInfo const &, class hkp2Lin2AngJacobian &);
// public: void hkp2Lin2AngJacobian::setRHS(float);
// public: void hkp2Lin2AngJacobian::setInvJacDiag(float);
// public: float hkp2Lin2AngJacobian::getDiag(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, float) const;
// public: hkpPulleyConstraintInfo::hkpPulleyConstraintInfo(void);
// public: hkpVelocityAccumulator::hkpVelocityAccumulator(class hkpVelocityAccumulator const &);
// public: class hkVector4const & hkpMovingSurfaceModifierConstraintAtom::getVelocity(void) const;
// public: class hkBool hkEnum<enum hkpConstraintAtom::AtomType, unsigned short>::operator!=(enum hkpConstraintAtom::AtomType) const;
// public: enum hkpConeLimitConstraintAtom::MeasurementMode hkEnum<enum hkpConeLimitConstraintAtom::MeasurementMode, unsigned char>::operator enum hkpConeLimitConstraintAtom::MeasurementMode(void) const;
// void * hkAddByteOffsetCpuPtr<void *>(void *, long);

//hkBallSocketConstraintBuildJacobian_noSchema
//{
//    mangled_ppc("hkBallSocketConstraintBuildJacobian_noSchema");
//};

//hk1dAngularLimitBuildJacobian
//{
//    mangled_ppc("hk1dAngularLimitBuildJacobian");
//};

//hk1dAngularVelocityMotorBeginJacobian
//{
//    mangled_ppc("hk1dAngularVelocityMotorBeginJacobian");
//};

//void _hk1dAngularVelocityMotorBeginJacobian(class hkVector4const &, class hkpConstraintQueryIn const &, class hkp2AngJacobian &, class hkp1dBilateralConstraintStatus &)
//{
//    mangled_ppc("?_hk1dAngularVelocityMotorBeginJacobian@@YAXABVhkVector4@@ABVhkpConstraintQueryIn@@AAVhkp2AngJacobian@@AAVhkp1dBilateralConstraintStatus@@@Z");
//};

//hk1dAngularVelocityMotorCommitJacobian
//{
//    mangled_ppc("hk1dAngularVelocityMotorCommitJacobian");
//};

//hkBeginConstraints
//{
//    mangled_ppc("hkBeginConstraints");
//};

//void _hkBeginConstraints(class hkpConstraintQueryIn const &, class hkpConstraintQueryOut &, class hkpSolverResults *, int)
//{
//    mangled_ppc("?_hkBeginConstraints@@YAXABVhkpConstraintQueryIn@@AAVhkpConstraintQueryOut@@PAVhkpSolverResults@@H@Z");
//};

//hkSolverBuildJacobianFromAtomsNotContact
//{
//    mangled_ppc("hkSolverBuildJacobianFromAtomsNotContact");
//};

//void hkSkipSolverResults(unsigned char, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?hkSkipSolverResults@@YAXEAAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromBallSocketAtom(struct hkpBallSocketConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromBallSocketAtom@@YAXABUhkpBallSocketConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void _hkBallSocketConstraintBuildJacobian(class hkVector4const &, class hkVector4const &, class hkpConstraintQueryIn const &, class hkpConstraintQueryOut &, float, float)
//{
//    mangled_ppc("?_hkBallSocketConstraintBuildJacobian@@YAXABVhkVector4@@0ABVhkpConstraintQueryIn@@AAVhkpConstraintQueryOut@@MM@Z");
//};

//void _hkBallSocketConstraintComputeStabilizedRhs(class hkpVelocityAccumulator const *, class hkpVelocityAccumulator const *, class hkVector4const &, class hkVector4const &, float, float, class hkVector4&)
//{
//    mangled_ppc("?_hkBallSocketConstraintComputeStabilizedRhs@@YAXPBVhkpVelocityAccumulator@@0ABVhkVector4@@1MMAAV2@@Z");
//};

//void buildJacobianFromStiffSpringAtom(struct hkpStiffSpringConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromStiffSpringAtom@@YAXABUhkpStiffSpringConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void callBridgeFromAtom(struct hkpBridgeConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform &, class hkTransform &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?callBridgeFromAtom@@YAXABUhkpBridgeConstraintAtom@@ABVhkpConstraintQueryIn@@AAVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void hkUndoBeginConstraints(class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?hkUndoBeginConstraints@@YAXAAVhkpConstraintQueryOut@@@Z");
//};

//void setLocalTransformsFromAtom(struct hkpSetLocalTransformsConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform &, class hkTransform &, class hkpConstraintQueryOut const &)
//{
//    mangled_ppc("?setLocalTransformsFromAtom@@YAXABUhkpSetLocalTransformsConstraintAtom@@ABVhkpConstraintQueryIn@@AAVhkTransform@@2ABVhkpConstraintQueryOut@@@Z");
//};

//void setLocalTransform(class hkTransform const &, class hkTransform const &, class hkTransform &)
//{
//    mangled_ppc("?setLocalTransform@@YAXABVhkTransform@@0AAV1@@Z");
//};

//void setLocalTranslationsFromAtom(struct hkpSetLocalTranslationsConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform &, class hkTransform &, class hkpConstraintQueryOut const &)
//{
//    mangled_ppc("?setLocalTranslationsFromAtom@@YAXABUhkpSetLocalTranslationsConstraintAtom@@ABVhkpConstraintQueryIn@@AAVhkTransform@@2ABVhkpConstraintQueryOut@@@Z");
//};

//void setLocalRotationsFromAtom(struct hkpSetLocalRotationsConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform &, class hkTransform &, class hkpConstraintQueryOut const &)
//{
//    mangled_ppc("?setLocalRotationsFromAtom@@YAXABUhkpSetLocalRotationsConstraintAtom@@ABVhkpConstraintQueryIn@@AAVhkTransform@@2ABVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromLinAtom(struct hkpLinConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromLinAtom@@YAXABUhkpLinConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromLinSoftAtom(struct hkpLinSoftConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromLinSoftAtom@@YAXABUhkpLinSoftConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromLinLimitAtom(struct hkpLinLimitConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromLinLimitAtom@@YAXABUhkpLinLimitConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFrom2dAngAtom(struct hkp2dAngConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFrom2dAngAtom@@YAXABUhkp2dAngConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromAngAtom(struct hkpAngConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromAngAtom@@YAXABUhkpAngConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//enum hkResult buildJacobianFromAngLimitAtom(struct hkpAngLimitConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkp1dAngularLimitInfo &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromAngLimitAtom@@YA?AW4hkResult@@ABUhkpAngLimitConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkp1dAngularLimitInfo@@AAVhkpConstraintQueryOut@@@Z");
//};

//enum hkResult bulidJacobianFromTwistLimitAtom(struct hkpTwistLimitConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkp1dAngularLimitInfo &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?bulidJacobianFromTwistLimitAtom@@YA?AW4hkResult@@ABUhkpTwistLimitConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkp1dAngularLimitInfo@@AAVhkpConstraintQueryOut@@@Z");
//};

//enum hkResult buildJacobianFromStabilizedConeLimitAtom(struct hkpConeLimitConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkp1dAngularLimitInfo &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromStabilizedConeLimitAtom@@YA?AW4hkResult@@ABUhkpConeLimitConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkp1dAngularLimitInfo@@AAVhkpConstraintQueryOut@@@Z");
//};

//enum hkResult buildJacobianFromConeLimitAtom(struct hkpConeLimitConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkp1dAngularLimitInfo &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromConeLimitAtom@@YA?AW4hkResult@@ABUhkpConeLimitConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkp1dAngularLimitInfo@@AAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromAngFrictionAtom(struct hkpAngFrictionConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromAngFrictionAtom@@YAXABUhkpAngFrictionConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromLinMotorAtom(struct hkpLinMotorConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromLinMotorAtom@@YAXABUhkpLinMotorConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromAngMotorAtom(struct hkpAngMotorConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromAngMotorAtom@@YAXABUhkpAngMotorConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromRagdollMotorAtom(struct hkpRagdollMotorConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromRagdollMotorAtom@@YAXABUhkpRagdollMotorConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromLinFrictionAtom(struct hkpLinFrictionConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromLinFrictionAtom@@YAXABUhkpLinFrictionConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromPulleyAtom(struct hkpPulleyConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromPulleyAtom@@YAXABUhkpPulleyConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void hkPulleyConstraintBuildJacobian(struct hkpPulleyConstraintInfo const &, class hkpConstraintQueryIn const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?hkPulleyConstraintBuildJacobian@@YAXABUhkpPulleyConstraintInfo@@ABVhkpConstraintQueryIn@@AAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromSoftContactModifier(struct hkpSoftContactModifierConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromSoftContactModifier@@YAXABUhkpSoftContactModifierConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//struct hkpSimpleContactConstraintAtom * getContactAtom(struct hkpModifierConstraintAtom const &)
//{
//    mangled_ppc("?getContactAtom@@YAPAUhkpSimpleContactConstraintAtom@@ABUhkpModifierConstraintAtom@@@Z");
//};

//void buildJacobianFromIgnoreModifier(struct hkpIgnoreModifierConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromIgnoreModifier@@YAXABUhkpIgnoreModifierConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromMassChangerModifier(struct hkpMassChangerModifierConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromMassChangerModifier@@YAXABUhkpMassChangerModifierConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromCenterOfMassChangerModifier(struct hkpCenterOfMassChangerModifierConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromCenterOfMassChangerModifier@@YAXABUhkpCenterOfMassChangerModifierConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromViscousSurfaceModifier(struct hkpViscousSurfaceModifierConstraintAtom const &, class hkpConstraintQueryIn const &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromViscousSurfaceModifier@@YAXABUhkpViscousSurfaceModifierConstraintAtom@@ABVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void buildJacobianFromMovingSurfaceModifier(struct hkpMovingSurfaceModifierConstraintAtom const &, class hkpConstraintQueryIn &, class hkTransform const &, class hkTransform const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?buildJacobianFromMovingSurfaceModifier@@YAXABUhkpMovingSurfaceModifierConstraintAtom@@AAVhkpConstraintQueryIn@@ABVhkTransform@@2AAVhkpConstraintQueryOut@@@Z");
//};

//void hkInitHeader(class hkpConstraintQueryIn const &, class hkpSolverResults *, int, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?hkInitHeader@@YAXABVhkpConstraintQueryIn@@PAVhkpSolverResults@@HAAVhkpConstraintQueryOut@@@Z");
//};

//void hkJacobianBuilder::buildLinearAndRhs(class hkpVelocityAccumulator const *, class hkpVelocityAccumulator const *, class hkVector4const &, class hkVector4const &, class hkVector4const &, float, float, class hkp1Lin2AngJacobian &)
//{
//    mangled_ppc("?buildLinearAndRhs@hkJacobianBuilder@@YAXPBVhkpVelocityAccumulator@@0ABVhkVector4@@11MMAAVhkp1Lin2AngJacobian@@@Z");
//};

//void _hk1dAngularLimitBuildJacobian(class hkp1dAngularLimitInfo const &, class hkpConstraintQueryIn const &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?_hk1dAngularLimitBuildJacobian@@YAXABVhkp1dAngularLimitInfo@@ABVhkpConstraintQueryIn@@AAVhkpConstraintQueryOut@@@Z");
//};

//public: void hkpJacobian1dAngularLimitsSchema::init1dAngularLimits(class hkp2AngJacobian const &, float, float, float)
//{
//    mangled_ppc("?init1dAngularLimits@hkpJacobian1dAngularLimitsSchema@@QAAXABVhkp2AngJacobian@@MMM@Z");
//};

//void hkJacobianBuilder::buildAngularBegin(class hkpVelocityAccumulator const *, class hkpVelocityAccumulator const *, class hkVector4const &, float, class hkp2AngJacobian &)
//{
//    mangled_ppc("?buildAngularBegin@hkJacobianBuilder@@YAXPBVhkpVelocityAccumulator@@0ABVhkVector4@@MAAVhkp2AngJacobian@@@Z");
//};

//public: void hkp2AngJacobian::setInvJacDiag(float)
//{
//    mangled_ppc("?setInvJacDiag@hkp2AngJacobian@@QAAXM@Z");
//};

//public: float hkp2AngJacobian::getAngularDiag(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &) const
//{
//    mangled_ppc("?getAngularDiag@hkp2AngJacobian@@QBAMABVhkpVelocityAccumulator@@0@Z");
//};

//void hkJacobianBuilder::buildAngularEnd(class hkp2AngJacobian &, float, float)
//{
//    mangled_ppc("?buildAngularEnd@hkJacobianBuilder@@YAXAAVhkp2AngJacobian@@MM@Z");
//};

//public: float hkp2AngJacobian::getInvJacDiag(void) const
//{
//    mangled_ppc("?getInvJacDiag@hkp2AngJacobian@@QBAMXZ");
//};

//void hkJacobianBuilder::buildAngularEnd(class hkp2AngJacobian &)
//{
//    mangled_ppc("?buildAngularEnd@hkJacobianBuilder@@YAXAAVhkp2AngJacobian@@@Z");
//};

//void _hk1dAngularVelocityMotorCommitJacobian(class hkp1dConstraintMotorInfo &, class hkpConstraintQueryIn const &, class hkp2AngJacobian &, class hkpConstraintQueryOut &)
//{
//    mangled_ppc("?_hk1dAngularVelocityMotorCommitJacobian@@YAXAAVhkp1dConstraintMotorInfo@@ABVhkpConstraintQueryIn@@AAVhkp2AngJacobian@@AAVhkpConstraintQueryOut@@@Z");
//};

//public: struct hkp1dMotorSolverInfo & hkpJacobian1dAngularMotorSchema::init1dAngularMotor(class hkp2AngJacobian const &)
//{
//    mangled_ppc("?init1dAngularMotor@hkpJacobian1dAngularMotorSchema@@QAAAAUhkp1dMotorSolverInfo@@ABVhkp2AngJacobian@@@Z");
//};

//public: void hkpJacobianHeaderSchema::initHeader(class hkpConstraintInstance *, int, int, class hkpSolverResults *, int)
//{
//    mangled_ppc("?initHeader@hkpJacobianHeaderSchema@@QAAXPAVhkpConstraintInstance@@HHPAVhkpSolverResults@@H@Z");
//};

//void hkJacobianBuilder::initBuilder(class hkpVelocityAccumulator const *, class hkpVelocityAccumulator const *, float)
//{
//    mangled_ppc("?initBuilder@hkJacobianBuilder@@YAXPBVhkpVelocityAccumulator@@0M@Z");
//};

//public: int hkpBridgeConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpBridgeConstraintAtom@@QBAHXZ");
//};

//public: int hkpBallSocketConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpBallSocketConstraintAtom@@QBAHXZ");
//};

//public: int hkpStiffSpringConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpStiffSpringConstraintAtom@@QBAHXZ");
//};

//public: int hkpSetLocalTransformsConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpSetLocalTransformsConstraintAtom@@QBAHXZ");
//};

//public: int hkpSetLocalTranslationsConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpSetLocalTranslationsConstraintAtom@@QBAHXZ");
//};

//public: int hkpSetLocalRotationsConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpSetLocalRotationsConstraintAtom@@QBAHXZ");
//};

//public: int hkpLinConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpLinConstraintAtom@@QBAHXZ");
//};

//public: int hkpLinSoftConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpLinSoftConstraintAtom@@QBAHXZ");
//};

//public: int hkpLinLimitConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpLinLimitConstraintAtom@@QBAHXZ");
//};

//public: int hkp2dAngConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkp2dAngConstraintAtom@@QBAHXZ");
//};

//public: int hkpAngConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpAngConstraintAtom@@QBAHXZ");
//};

//public: int hkpAngLimitConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpAngLimitConstraintAtom@@QBAHXZ");
//};

//public: int hkpTwistLimitConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpTwistLimitConstraintAtom@@QBAHXZ");
//};

//public: int hkpConeLimitConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpConeLimitConstraintAtom@@QBAHXZ");
//};

//public: int hkpAngFrictionConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpAngFrictionConstraintAtom@@QBAHXZ");
//};

//public: int hkpAngMotorConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpAngMotorConstraintAtom@@QBAHXZ");
//};

//public: int hkpRagdollMotorConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpRagdollMotorConstraintAtom@@QBAHXZ");
//};

//public: int hkpLinFrictionConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpLinFrictionConstraintAtom@@QBAHXZ");
//};

//public: int hkpLinMotorConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpLinMotorConstraintAtom@@QBAHXZ");
//};

//public: int hkpPulleyConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpPulleyConstraintAtom@@QBAHXZ");
//};

//public: int hkpSoftContactModifierConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpSoftContactModifierConstraintAtom@@QBAHXZ");
//};

//public: int hkpMassChangerModifierConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpMassChangerModifierConstraintAtom@@QBAHXZ");
//};

//public: int hkpCenterOfMassChangerModifierConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpCenterOfMassChangerModifierConstraintAtom@@QBAHXZ");
//};

//public: int hkpViscousSurfaceModifierConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpViscousSurfaceModifierConstraintAtom@@QBAHXZ");
//};

//public: int hkpMovingSurfaceModifierConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpMovingSurfaceModifierConstraintAtom@@QBAHXZ");
//};

//public: int hkpIgnoreModifierConstraintAtom::numSolverResults(void) const
//{
//    mangled_ppc("?numSolverResults@hkpIgnoreModifierConstraintAtom@@QBAHXZ");
//};

//public: void hkpJacobianShiftSolverResultsPointerSchema::initShiftSolverResultsPointer(unsigned char)
//{
//    mangled_ppc("?initShiftSolverResultsPointer@hkpJacobianShiftSolverResultsPointerSchema@@QAAXE@Z");
//};

//public: void hkpJacobian1dBilateralSchema::init1dBilateral(class hkp1Lin2AngJacobian const &, float)
//{
//    mangled_ppc("?init1dBilateral@hkpJacobian1dBilateralSchema@@QAAXABVhkp1Lin2AngJacobian@@M@Z");
//};

//void hkJacobianBuilder::buildLinearEnd(class hkp1Lin2AngJacobian &, float, float)
//{
//    mangled_ppc("?buildLinearEnd@hkJacobianBuilder@@YAXAAVhkp1Lin2AngJacobian@@MM@Z");
//};

//public: hkp1dLinearBilateralUserTauConstraintInfo::hkp1dLinearBilateralUserTauConstraintInfo(void)
//{
//    mangled_ppc("??0hkp1dLinearBilateralUserTauConstraintInfo@@QAA@XZ");
//};

//void hkInternalConstraintUtils_inlineCalcRelativeAngle(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4&, class hkPadSpu<float> &, class hkPadSpu<float> &)
//{
//    mangled_ppc("?hkInternalConstraintUtils_inlineCalcRelativeAngle@@YAXABVhkVector4@@000AAV1@AAV?$hkPadSpu@M@@2@Z");
//};

//public: void hkpJacobian1dPulleySchema::init1dPulleySchema(class hkp2Lin2AngJacobian const &)
//{
//    mangled_ppc("?init1dPulleySchema@hkpJacobian1dPulleySchema@@QAAXABVhkp2Lin2AngJacobian@@@Z");
//};

//void hkJacobianBuilder::build2LinearAndRhs(struct hkJacobianBuilder::build2LinearAndRhsInfo const &, class hkp2Lin2AngJacobian &)
//{
//    mangled_ppc("?build2LinearAndRhs@hkJacobianBuilder@@YAXABUbuild2LinearAndRhsInfo@1@AAVhkp2Lin2AngJacobian@@@Z");
//};

//public: void hkp2Lin2AngJacobian::setRHS(float)
//{
//    mangled_ppc("?setRHS@hkp2Lin2AngJacobian@@QAAXM@Z");
//};

//public: void hkp2Lin2AngJacobian::setInvJacDiag(float)
//{
//    mangled_ppc("?setInvJacDiag@hkp2Lin2AngJacobian@@QAAXM@Z");
//};

//public: float hkp2Lin2AngJacobian::getDiag(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, float) const
//{
//    mangled_ppc("?getDiag@hkp2Lin2AngJacobian@@QBAMABVhkpVelocityAccumulator@@0M@Z");
//};

//public: hkpPulleyConstraintInfo::hkpPulleyConstraintInfo(void)
//{
//    mangled_ppc("??0hkpPulleyConstraintInfo@@QAA@XZ");
//};

//public: hkpVelocityAccumulator::hkpVelocityAccumulator(class hkpVelocityAccumulator const &)
//{
//    mangled_ppc("??0hkpVelocityAccumulator@@QAA@ABV0@@Z");
//};

//public: class hkVector4const & hkpMovingSurfaceModifierConstraintAtom::getVelocity(void) const
//{
//    mangled_ppc("?getVelocity@hkpMovingSurfaceModifierConstraintAtom@@QBAABVhkVector4@@XZ");
//};

//public: class hkBool hkEnum<enum hkpConstraintAtom::AtomType, unsigned short>::operator!=(enum hkpConstraintAtom::AtomType) const
//{
//    mangled_ppc("??9?$hkEnum@W4AtomType@hkpConstraintAtom@@G@@QBA?AVhkBool@@W4AtomType@hkpConstraintAtom@@@Z");
//};

//public: enum hkpConeLimitConstraintAtom::MeasurementMode hkEnum<enum hkpConeLimitConstraintAtom::MeasurementMode, unsigned char>::operator enum hkpConeLimitConstraintAtom::MeasurementMode(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4MeasurementMode@hkpConeLimitConstraintAtom@@E@@QBA?AW4MeasurementMode@hkpConeLimitConstraintAtom@@XZ");
//};

//void * hkAddByteOffsetCpuPtr<void *>(void *, long)
//{
//    mangled_ppc("??$hkAddByteOffsetCpuPtr@PAX@@YAPAXPAXJ@Z");
//};

