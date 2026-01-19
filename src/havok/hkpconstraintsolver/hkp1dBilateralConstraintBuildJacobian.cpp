/* ---------- headers */

#include "havok\hkpconstraintsolver\hkp1dBilateralConstraintBuildJacobian.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// hkLoadVelocityAccumulators;
// hk1dAngularBilateralConstraintBuildJacobian;
// hk1dAngularFrictionBuildJacobian;
// hk1dLinearFrictionBuildJacobian;
// hk1dLinearBilateralConstraintBuildJacobian;
// hk1dLinearBilateralConstraintBuildJacobianWithCustomRhs;
// void hk1dLinearBilateralConstraintBuildJacobianWithCustomRhs_noSchema_inline(class hkp1dLinearBilateralConstraintInfo const &, class hkpConstraintQueryIn const &, class hkp1Lin2AngJacobian &, float);
// hk1dLinearBilateralConstraintBuildJacobianWithCustomRhs_noSchema;
// hk1dLinearBilateralConstraintUserTauBuildJacobian;
// hk1dLinearLimitBuildJacobian;
// hkStabilizedBallSocketConstraintBuildJacobian_noSchema;
// hkSetInvMassBuildJacobian;
// hkAddVelocityBuildJacobian;
// hkSetCenterOfMassBuildJacobian;
// public: void hkpJacobian1dAngularSchema::init(class hkp2AngJacobian const &);
// public: void hkpJacobian1dAngularFrictionSchema::init1dAngularFriction(class hkp2AngJacobian const &, float);
// public: void hkpJacobian1dFrictionSchema::init1dFriction(class hkp1Lin2AngJacobian const &, float);
// public: void hkpJacobian1dBilateralUserTauSchema::init1dBilateralUserTau(class hkp1Lin2AngJacobian const &, float, float);
// public: void hkpJacobian1dLinearLimitsSchema::init1dLinearLimits(class hkp1Lin2AngJacobian const &, float, float);
// public: float & hkp1Lin2AngJacobian::getRHS(void);
// public: void hkpJacobianSetMassSchema::initSetMass(class hkVector4const &, class hkVector4const &);
// public: void hkpJacobianAddVelocitySchema::initAddVelocity(class hkVector4const &, int);
// public: void hkpJacobianSetCenterOfMassSchema::initAddAngularVelocity(class hkMatrix3const &, class hkMatrix3const &);
// public: class hkVector4const * hkPadSpu<class hkVector4const *>::operator class hkVector4const *(void) const;
// public: class hkpSolverResults * hkPadSpu<class hkpSolverResults *>::val(void) const;
// public: class hkpSolverResults * hkPadSpu<class hkpSolverResults *>::operator->(void) const;
// public: class hkVector4const * hkPadSpu<class hkVector4const *>::val(void) const;
// class hkpSolverResults * hkAddByteOffset<class hkpSolverResults>(class hkpSolverResults *, long);

//hkLoadVelocityAccumulators
//{
//    mangled_ppc("hkLoadVelocityAccumulators");
//};

//hk1dAngularBilateralConstraintBuildJacobian
//{
//    mangled_ppc("hk1dAngularBilateralConstraintBuildJacobian");
//};

//hk1dAngularFrictionBuildJacobian
//{
//    mangled_ppc("hk1dAngularFrictionBuildJacobian");
//};

//hk1dLinearFrictionBuildJacobian
//{
//    mangled_ppc("hk1dLinearFrictionBuildJacobian");
//};

//hk1dLinearBilateralConstraintBuildJacobian
//{
//    mangled_ppc("hk1dLinearBilateralConstraintBuildJacobian");
//};

//hk1dLinearBilateralConstraintBuildJacobianWithCustomRhs
//{
//    mangled_ppc("hk1dLinearBilateralConstraintBuildJacobianWithCustomRhs");
//};

//void hk1dLinearBilateralConstraintBuildJacobianWithCustomRhs_noSchema_inline(class hkp1dLinearBilateralConstraintInfo const &, class hkpConstraintQueryIn const &, class hkp1Lin2AngJacobian &, float)
//{
//    mangled_ppc("?hk1dLinearBilateralConstraintBuildJacobianWithCustomRhs_noSchema_inline@@YAXABVhkp1dLinearBilateralConstraintInfo@@ABVhkpConstraintQueryIn@@AAVhkp1Lin2AngJacobian@@M@Z");
//};

//hk1dLinearBilateralConstraintBuildJacobianWithCustomRhs_noSchema
//{
//    mangled_ppc("hk1dLinearBilateralConstraintBuildJacobianWithCustomRhs_noSchema");
//};

//hk1dLinearBilateralConstraintUserTauBuildJacobian
//{
//    mangled_ppc("hk1dLinearBilateralConstraintUserTauBuildJacobian");
//};

//hk1dLinearLimitBuildJacobian
//{
//    mangled_ppc("hk1dLinearLimitBuildJacobian");
//};

//hkStabilizedBallSocketConstraintBuildJacobian_noSchema
//{
//    mangled_ppc("hkStabilizedBallSocketConstraintBuildJacobian_noSchema");
//};

//hkSetInvMassBuildJacobian
//{
//    mangled_ppc("hkSetInvMassBuildJacobian");
//};

//hkAddVelocityBuildJacobian
//{
//    mangled_ppc("hkAddVelocityBuildJacobian");
//};

//hkSetCenterOfMassBuildJacobian
//{
//    mangled_ppc("hkSetCenterOfMassBuildJacobian");
//};

//public: void hkpJacobian1dAngularSchema::init(class hkp2AngJacobian const &)
//{
//    mangled_ppc("?init@hkpJacobian1dAngularSchema@@QAAXABVhkp2AngJacobian@@@Z");
//};

//public: void hkpJacobian1dAngularFrictionSchema::init1dAngularFriction(class hkp2AngJacobian const &, float)
//{
//    mangled_ppc("?init1dAngularFriction@hkpJacobian1dAngularFrictionSchema@@QAAXABVhkp2AngJacobian@@M@Z");
//};

//public: void hkpJacobian1dFrictionSchema::init1dFriction(class hkp1Lin2AngJacobian const &, float)
//{
//    mangled_ppc("?init1dFriction@hkpJacobian1dFrictionSchema@@QAAXABVhkp1Lin2AngJacobian@@M@Z");
//};

//public: void hkpJacobian1dBilateralUserTauSchema::init1dBilateralUserTau(class hkp1Lin2AngJacobian const &, float, float)
//{
//    mangled_ppc("?init1dBilateralUserTau@hkpJacobian1dBilateralUserTauSchema@@QAAXABVhkp1Lin2AngJacobian@@MM@Z");
//};

//public: void hkpJacobian1dLinearLimitsSchema::init1dLinearLimits(class hkp1Lin2AngJacobian const &, float, float)
//{
//    mangled_ppc("?init1dLinearLimits@hkpJacobian1dLinearLimitsSchema@@QAAXABVhkp1Lin2AngJacobian@@MM@Z");
//};

//public: float & hkp1Lin2AngJacobian::getRHS(void)
//{
//    mangled_ppc("?getRHS@hkp1Lin2AngJacobian@@QAAAAMXZ");
//};

//public: void hkpJacobianSetMassSchema::initSetMass(class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?initSetMass@hkpJacobianSetMassSchema@@QAAXABVhkVector4@@0@Z");
//};

//public: void hkpJacobianAddVelocitySchema::initAddVelocity(class hkVector4const &, int)
//{
//    mangled_ppc("?initAddVelocity@hkpJacobianAddVelocitySchema@@QAAXABVhkVector4@@H@Z");
//};

//public: void hkpJacobianSetCenterOfMassSchema::initAddAngularVelocity(class hkMatrix3const &, class hkMatrix3const &)
//{
//    mangled_ppc("?initAddAngularVelocity@hkpJacobianSetCenterOfMassSchema@@QAAXABVhkMatrix3@@0@Z");
//};

//public: class hkVector4const * hkPadSpu<class hkVector4const *>::operator class hkVector4const *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PBVhkVector4@@@@QBAPBVhkVector4@@XZ");
//};

//public: class hkpSolverResults * hkPadSpu<class hkpSolverResults *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAVhkpSolverResults@@@@QBAPAVhkpSolverResults@@XZ");
//};

//public: class hkpSolverResults * hkPadSpu<class hkpSolverResults *>::operator->(void) const
//{
//    mangled_ppc("??C?$hkPadSpu@PAVhkpSolverResults@@@@QBAPAVhkpSolverResults@@XZ");
//};

//public: class hkVector4const * hkPadSpu<class hkVector4const *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PBVhkVector4@@@@QBAPBVhkVector4@@XZ");
//};

//class hkpSolverResults * hkAddByteOffset<class hkpSolverResults>(class hkpSolverResults *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@VhkpSolverResults@@@@YAPAVhkpSolverResults@@PAV0@J@Z");
//};

