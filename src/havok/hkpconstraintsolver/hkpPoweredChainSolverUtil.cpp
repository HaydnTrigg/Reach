/* ---------- headers */

#include "havok\hkpconstraintsolver\hkpPoweredChainSolverUtil.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// hkPoweredChainBuildJacobian;
// hkPoweredChain_BuildConstraintMatrixAndLuDecomposition;
// hkPoweredChain_UpdateLuDecomposition;
// hkPoweredChain_ComputeConstraintMatrixLuDecomposition_ForOneRow;
// hkPoweredChain_DisableMotorInMatrixRow_ThisConstraint;
// hkPoweredChain_DisableMotorInMatrixRow_NextConstraint;
// hkPoweredChain_CalculateVelocities;
// hkPoweredChain_OverwriteVelocityWithExplicitImpulse;
// hkPoweredChain_RestoreVelocityValue;
// hkPoweredChain_SolveConstraintMatrix_ComputeVectorG;
// hkPoweredChain_ScanAndDisableMotors;
// hkPoweredChain_ScanAndEnableMotors;
// hkPoweredChain_VerifyVelocities;
// public: static class hkp1Lin2AngJacobian * hkpJacobianPoweredChainSchema::getLinearJacobians(class hkpJacobianSchema *);
// public: static class hkp2AngJacobian * hkpJacobianPoweredChainSchema::getAngularJacobians(class hkpJacobianSchema *, int);
// public: struct hkpConstraintChainMatrix6Triple * hkpJacobianPoweredChainSchema::getMatrixBuffer(void);
// public: class hkVector8* hkpJacobianPoweredChainSchema::getTempBuffer(void);
// public: class hkVector8* hkpJacobianPoweredChainSchema::getVelocityBuffer(void);
// public: class hkpVelocityAccumulatorOffset * hkpJacobianPoweredChainSchema::getAccumulatorOffsetsBase(void);
// public: struct hkp3dAngularMotorSolverInfo * hkpJacobianPoweredChainSchema::getChildConstraintStatusBase(void);
// public: void * hkpJacobianPoweredChainSchema::getEnd(void);
// public: void hkpJacobianPoweredChainSchema::initPoweredChainSchema(int, class hkpVelocityAccumulatorOffset *, float, float, struct hkp3dAngularMotorSolverInfo *, unsigned char *);
// public: hkMatrix6::hkMatrix6(void);
// public: void hkMatrix6::setZero(void);
// hkPoweredChain_ComputeConstraintMatrix_NextOffDiagonalAtRow;
// public: class hkpVelocityAccumulator const & hkpVelocityAccumulatorOffset::getAccumulator(class hkpVelocityAccumulator const *);
// public: class hkp2AngJacobian & hkp1Lin2AngJacobian::as2AngJacobian_internal(void);
// public: float hkp2AngJacobian::getNonDiagDifferentObjects_With2ndBodyFromFirstObject(class hkpVelocityAccumulator const &, class hkp2AngJacobian const &) const;
// public: class hkSimdReal hkVector4::horizontalAdd3(void) const;
// public: float hkp1Lin2AngJacobian::getNonDiagDifferentObjects_With2ndBodyFromFirstObject(class hkpVelocityAccumulator const &, class hkp1Lin2AngJacobian const &) const;
// hkPoweredChain_ComputeConstraintMatrix_DiagonalAtRow;
// public: float hkp2AngJacobian::getNonDiagSameObjects(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp2AngJacobian const &) const;
// public: float hkp2AngJacobian::getNonDiagOptimized(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp2AngJacobian const &) const;
// public: float hkp1Lin2AngJacobian::getNonDiagSameObjects(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp1Lin2AngJacobian const &) const;
// public: float hkp1Lin2AngJacobian::getNonDiagOptimized(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp1Lin2AngJacobian const &) const;
// public: void hkMatrix6::operator=(class hkMatrix6const &);
// public: hkMatrix6::hkMatrix6(class hkMatrix6const &);
// ??__G@YAXPAX0IHP6APAX00@Z@Z;
// public: int hkp3dAngularMotorSolverInfo::getState(int) const;
// public: class hkpVelocityAccumulator & hkpVelocityAccumulatorOffset::getAccumulator(class hkpVelocityAccumulator *);
// void hkSolver::loadVelocityAccumulators(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &);
// void hkVector4Util::reserveRegisters(unsigned int);
// void hkSolver::popVelocityAccumulators(void);
// void hkVector4Util::releaseRegisters(unsigned int);
// class hkSimdReal hkSolver::getLinearDv0UserTau(class hkp1Lin2AngJacobian const &, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &, float, float);
// public: float const & hkp1Lin2AngJacobian::getRHS(void) const;
// class hkSimdReal hkSolver::getLinearDv0UserTauWithCustomRhs(class hkp1Lin2AngJacobian const &, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &, float, float, float);
// class hkSimdReal hkSolver::getAngularDv0UserTau(class hkp2AngJacobian const &, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &, float, float);
// public: float hkp2AngJacobian::getAngularRhs(void) const;
// class hkSimdReal hkSolver::getAngularDv0UserTauWithCustomRhs(class hkp2AngJacobian const &, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &, float, float, float);
// public: void hkVector8::setZero8(void);
// public: void hkVector8::setSub8(class hkVector8const &, class hkVector8const &);
// public: void hkp3dAngularMotorSolverInfo::setState(int, int);
// public: void hkVector8::add8(class hkVector8const &);
// public: void hkMatrix6::setIdentity(void);
// public: class hkVector8& hkVector8::operator=(class hkVector8const &);
// public: class hkp1Lin2AngJacobian * hkPadSpu<class hkp1Lin2AngJacobian *>::operator class hkp1Lin2AngJacobian *(void) const;
// public: class hkp2AngJacobian * hkPadSpu<class hkp2AngJacobian *>::operator class hkp2AngJacobian *(void) const;
// public: class hkpVelocityAccumulatorOffset * hkPadSpu<class hkpVelocityAccumulatorOffset *>::operator class hkpVelocityAccumulatorOffset *(void) const;
// public: class hkpVelocityAccumulator * hkPadSpu<class hkpVelocityAccumulator *>::operator class hkpVelocityAccumulator *(void) const;
// public: struct hkpConstraintChainMatrix6Triple * hkPadSpu<struct hkpConstraintChainMatrix6Triple *>::operator struct hkpConstraintChainMatrix6Triple *(void) const;
// public: struct hkp3dAngularMotorSolverInfo * hkPadSpu<struct hkp3dAngularMotorSolverInfo *>::operator struct hkp3dAngularMotorSolverInfo *(void) const;
// public: class hkVector8* hkPadSpu<class hkVector8*>::operator class hkVector8*(void) const;
// public: class hkp1Lin2AngJacobian * hkPadSpu<class hkp1Lin2AngJacobian *>::val(void) const;
// public: class hkp2AngJacobian * hkPadSpu<class hkp2AngJacobian *>::val(void) const;
// public: class hkpVelocityAccumulatorOffset * hkPadSpu<class hkpVelocityAccumulatorOffset *>::val(void) const;
// public: class hkpVelocityAccumulator * hkPadSpu<class hkpVelocityAccumulator *>::val(void) const;
// public: struct hkpConstraintChainMatrix6Triple * hkPadSpu<struct hkpConstraintChainMatrix6Triple *>::val(void) const;
// public: struct hkp3dAngularMotorSolverInfo * hkPadSpu<struct hkp3dAngularMotorSolverInfo *>::val(void) const;
// public: class hkVector8* hkPadSpu<class hkVector8*>::val(void) const;
// class hkp2AngJacobian * hkAddByteOffset<class hkp2AngJacobian>(class hkp2AngJacobian *, long);
// struct hkpConstraintChainMatrix6Triple * hkAddByteOffset<struct hkpConstraintChainMatrix6Triple>(struct hkpConstraintChainMatrix6Triple *, long);

//hkPoweredChainBuildJacobian
//{
//    mangled_ppc("hkPoweredChainBuildJacobian");
//};

//hkPoweredChain_BuildConstraintMatrixAndLuDecomposition
//{
//    mangled_ppc("hkPoweredChain_BuildConstraintMatrixAndLuDecomposition");
//};

//hkPoweredChain_UpdateLuDecomposition
//{
//    mangled_ppc("hkPoweredChain_UpdateLuDecomposition");
//};

//hkPoweredChain_ComputeConstraintMatrixLuDecomposition_ForOneRow
//{
//    mangled_ppc("hkPoweredChain_ComputeConstraintMatrixLuDecomposition_ForOneRow");
//};

//hkPoweredChain_DisableMotorInMatrixRow_ThisConstraint
//{
//    mangled_ppc("hkPoweredChain_DisableMotorInMatrixRow_ThisConstraint");
//};

//hkPoweredChain_DisableMotorInMatrixRow_NextConstraint
//{
//    mangled_ppc("hkPoweredChain_DisableMotorInMatrixRow_NextConstraint");
//};

//hkPoweredChain_CalculateVelocities
//{
//    mangled_ppc("hkPoweredChain_CalculateVelocities");
//};

//hkPoweredChain_OverwriteVelocityWithExplicitImpulse
//{
//    mangled_ppc("hkPoweredChain_OverwriteVelocityWithExplicitImpulse");
//};

//hkPoweredChain_RestoreVelocityValue
//{
//    mangled_ppc("hkPoweredChain_RestoreVelocityValue");
//};

//hkPoweredChain_SolveConstraintMatrix_ComputeVectorG
//{
//    mangled_ppc("hkPoweredChain_SolveConstraintMatrix_ComputeVectorG");
//};

//hkPoweredChain_ScanAndDisableMotors
//{
//    mangled_ppc("hkPoweredChain_ScanAndDisableMotors");
//};

//hkPoweredChain_ScanAndEnableMotors
//{
//    mangled_ppc("hkPoweredChain_ScanAndEnableMotors");
//};

//hkPoweredChain_VerifyVelocities
//{
//    mangled_ppc("hkPoweredChain_VerifyVelocities");
//};

//public: static class hkp1Lin2AngJacobian * hkpJacobianPoweredChainSchema::getLinearJacobians(class hkpJacobianSchema *)
//{
//    mangled_ppc("?getLinearJacobians@hkpJacobianPoweredChainSchema@@SAPAVhkp1Lin2AngJacobian@@PAVhkpJacobianSchema@@@Z");
//};

//public: static class hkp2AngJacobian * hkpJacobianPoweredChainSchema::getAngularJacobians(class hkpJacobianSchema *, int)
//{
//    mangled_ppc("?getAngularJacobians@hkpJacobianPoweredChainSchema@@SAPAVhkp2AngJacobian@@PAVhkpJacobianSchema@@H@Z");
//};

//public: struct hkpConstraintChainMatrix6Triple * hkpJacobianPoweredChainSchema::getMatrixBuffer(void)
//{
//    mangled_ppc("?getMatrixBuffer@hkpJacobianPoweredChainSchema@@QAAPAUhkpConstraintChainMatrix6Triple@@XZ");
//};

//public: class hkVector8* hkpJacobianPoweredChainSchema::getTempBuffer(void)
//{
//    mangled_ppc("?getTempBuffer@hkpJacobianPoweredChainSchema@@QAAPAVhkVector8@@XZ");
//};

//public: class hkVector8* hkpJacobianPoweredChainSchema::getVelocityBuffer(void)
//{
//    mangled_ppc("?getVelocityBuffer@hkpJacobianPoweredChainSchema@@QAAPAVhkVector8@@XZ");
//};

//public: class hkpVelocityAccumulatorOffset * hkpJacobianPoweredChainSchema::getAccumulatorOffsetsBase(void)
//{
//    mangled_ppc("?getAccumulatorOffsetsBase@hkpJacobianPoweredChainSchema@@QAAPAVhkpVelocityAccumulatorOffset@@XZ");
//};

//public: struct hkp3dAngularMotorSolverInfo * hkpJacobianPoweredChainSchema::getChildConstraintStatusBase(void)
//{
//    mangled_ppc("?getChildConstraintStatusBase@hkpJacobianPoweredChainSchema@@QAAPAUhkp3dAngularMotorSolverInfo@@XZ");
//};

//public: void * hkpJacobianPoweredChainSchema::getEnd(void)
//{
//    mangled_ppc("?getEnd@hkpJacobianPoweredChainSchema@@QAAPAXXZ");
//};

//public: void hkpJacobianPoweredChainSchema::initPoweredChainSchema(int, class hkpVelocityAccumulatorOffset *, float, float, struct hkp3dAngularMotorSolverInfo *, unsigned char *)
//{
//    mangled_ppc("?initPoweredChainSchema@hkpJacobianPoweredChainSchema@@QAAXHPAVhkpVelocityAccumulatorOffset@@MMPAUhkp3dAngularMotorSolverInfo@@PAE@Z");
//};

//public: hkMatrix6::hkMatrix6(void)
//{
//    mangled_ppc("??0hkMatrix6@@QAA@XZ");
//};

//public: void hkMatrix6::setZero(void)
//{
//    mangled_ppc("?setZero@hkMatrix6@@QAAXXZ");
//};

//hkPoweredChain_ComputeConstraintMatrix_NextOffDiagonalAtRow
//{
//    mangled_ppc("hkPoweredChain_ComputeConstraintMatrix_NextOffDiagonalAtRow");
//};

//public: class hkpVelocityAccumulator const & hkpVelocityAccumulatorOffset::getAccumulator(class hkpVelocityAccumulator const *)
//{
//    mangled_ppc("?getAccumulator@hkpVelocityAccumulatorOffset@@QAAABVhkpVelocityAccumulator@@PBV2@@Z");
//};

//public: class hkp2AngJacobian & hkp1Lin2AngJacobian::as2AngJacobian_internal(void)
//{
//    mangled_ppc("?as2AngJacobian_internal@hkp1Lin2AngJacobian@@QAAAAVhkp2AngJacobian@@XZ");
//};

//public: float hkp2AngJacobian::getNonDiagDifferentObjects_With2ndBodyFromFirstObject(class hkpVelocityAccumulator const &, class hkp2AngJacobian const &) const
//{
//    mangled_ppc("?getNonDiagDifferentObjects_With2ndBodyFromFirstObject@hkp2AngJacobian@@QBAMABVhkpVelocityAccumulator@@ABV1@@Z");
//};

//public: class hkSimdReal hkVector4::horizontalAdd3(void) const
//{
//    mangled_ppc("?horizontalAdd3@hkVector4@@QBA?AVhkSimdReal@@XZ");
//};

//public: float hkp1Lin2AngJacobian::getNonDiagDifferentObjects_With2ndBodyFromFirstObject(class hkpVelocityAccumulator const &, class hkp1Lin2AngJacobian const &) const
//{
//    mangled_ppc("?getNonDiagDifferentObjects_With2ndBodyFromFirstObject@hkp1Lin2AngJacobian@@QBAMABVhkpVelocityAccumulator@@ABV1@@Z");
//};

//hkPoweredChain_ComputeConstraintMatrix_DiagonalAtRow
//{
//    mangled_ppc("hkPoweredChain_ComputeConstraintMatrix_DiagonalAtRow");
//};

//public: float hkp2AngJacobian::getNonDiagSameObjects(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp2AngJacobian const &) const
//{
//    mangled_ppc("?getNonDiagSameObjects@hkp2AngJacobian@@QBAMABVhkpVelocityAccumulator@@0ABV1@@Z");
//};

//public: float hkp2AngJacobian::getNonDiagOptimized(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp2AngJacobian const &) const
//{
//    mangled_ppc("?getNonDiagOptimized@hkp2AngJacobian@@QBAMABVhkpVelocityAccumulator@@0ABV1@@Z");
//};

//public: float hkp1Lin2AngJacobian::getNonDiagSameObjects(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp1Lin2AngJacobian const &) const
//{
//    mangled_ppc("?getNonDiagSameObjects@hkp1Lin2AngJacobian@@QBAMABVhkpVelocityAccumulator@@0ABV1@@Z");
//};

//public: float hkp1Lin2AngJacobian::getNonDiagOptimized(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp1Lin2AngJacobian const &) const
//{
//    mangled_ppc("?getNonDiagOptimized@hkp1Lin2AngJacobian@@QBAMABVhkpVelocityAccumulator@@0ABV1@@Z");
//};

//public: void hkMatrix6::operator=(class hkMatrix6const &)
//{
//    mangled_ppc("??4hkMatrix6@@QAAXABV0@@Z");
//};

//public: hkMatrix6::hkMatrix6(class hkMatrix6const &)
//{
//    mangled_ppc("??0hkMatrix6@@QAA@ABV0@@Z");
//};

//??__G@YAXPAX0IHP6APAX00@Z@Z
//{
//    mangled_ppc("??__G@YAXPAX0IHP6APAX00@Z@Z");
//};

//public: int hkp3dAngularMotorSolverInfo::getState(int) const
//{
//    mangled_ppc("?getState@hkp3dAngularMotorSolverInfo@@QBAHH@Z");
//};

//public: class hkpVelocityAccumulator & hkpVelocityAccumulatorOffset::getAccumulator(class hkpVelocityAccumulator *)
//{
//    mangled_ppc("?getAccumulator@hkpVelocityAccumulatorOffset@@QAAAAVhkpVelocityAccumulator@@PAV2@@Z");
//};

//void hkSolver::loadVelocityAccumulators(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &)
//{
//    mangled_ppc("?loadVelocityAccumulators@hkSolver@@YAXABVhkpVelocityAccumulator@@0@Z");
//};

//void hkVector4Util::reserveRegisters(unsigned int)
//{
//    mangled_ppc("?reserveRegisters@hkVector4Util@@YAXI@Z");
//};

//void hkSolver::popVelocityAccumulators(void)
//{
//    mangled_ppc("?popVelocityAccumulators@hkSolver@@YAXXZ");
//};

//void hkVector4Util::releaseRegisters(unsigned int)
//{
//    mangled_ppc("?releaseRegisters@hkVector4Util@@YAXI@Z");
//};

//class hkSimdReal hkSolver::getLinearDv0UserTau(class hkp1Lin2AngJacobian const &, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &, float, float)
//{
//    mangled_ppc("?getLinearDv0UserTau@hkSolver@@YA?AVhkSimdReal@@ABVhkp1Lin2AngJacobian@@ABVhkpVelocityAccumulator@@1ABUhkpSolverInfo@@MM@Z");
//};

//public: float const & hkp1Lin2AngJacobian::getRHS(void) const
//{
//    mangled_ppc("?getRHS@hkp1Lin2AngJacobian@@QBAABMXZ");
//};

//class hkSimdReal hkSolver::getLinearDv0UserTauWithCustomRhs(class hkp1Lin2AngJacobian const &, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &, float, float, float)
//{
//    mangled_ppc("?getLinearDv0UserTauWithCustomRhs@hkSolver@@YA?AVhkSimdReal@@ABVhkp1Lin2AngJacobian@@ABVhkpVelocityAccumulator@@1ABUhkpSolverInfo@@MMM@Z");
//};

//class hkSimdReal hkSolver::getAngularDv0UserTau(class hkp2AngJacobian const &, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &, float, float)
//{
//    mangled_ppc("?getAngularDv0UserTau@hkSolver@@YA?AVhkSimdReal@@ABVhkp2AngJacobian@@ABVhkpVelocityAccumulator@@1ABUhkpSolverInfo@@MM@Z");
//};

//public: float hkp2AngJacobian::getAngularRhs(void) const
//{
//    mangled_ppc("?getAngularRhs@hkp2AngJacobian@@QBAMXZ");
//};

//class hkSimdReal hkSolver::getAngularDv0UserTauWithCustomRhs(class hkp2AngJacobian const &, class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, struct hkpSolverInfo const &, float, float, float)
//{
//    mangled_ppc("?getAngularDv0UserTauWithCustomRhs@hkSolver@@YA?AVhkSimdReal@@ABVhkp2AngJacobian@@ABVhkpVelocityAccumulator@@1ABUhkpSolverInfo@@MMM@Z");
//};

//public: void hkVector8::setZero8(void)
//{
//    mangled_ppc("?setZero8@hkVector8@@QAAXXZ");
//};

//public: void hkVector8::setSub8(class hkVector8const &, class hkVector8const &)
//{
//    mangled_ppc("?setSub8@hkVector8@@QAAXABV1@0@Z");
//};

//public: void hkp3dAngularMotorSolverInfo::setState(int, int)
//{
//    mangled_ppc("?setState@hkp3dAngularMotorSolverInfo@@QAAXHH@Z");
//};

//public: void hkVector8::add8(class hkVector8const &)
//{
//    mangled_ppc("?add8@hkVector8@@QAAXABV1@@Z");
//};

//public: void hkMatrix6::setIdentity(void)
//{
//    mangled_ppc("?setIdentity@hkMatrix6@@QAAXXZ");
//};

//public: class hkVector8& hkVector8::operator=(class hkVector8const &)
//{
//    mangled_ppc("??4hkVector8@@QAAAAV0@ABV0@@Z");
//};

//public: class hkp1Lin2AngJacobian * hkPadSpu<class hkp1Lin2AngJacobian *>::operator class hkp1Lin2AngJacobian *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAVhkp1Lin2AngJacobian@@@@QBAPAVhkp1Lin2AngJacobian@@XZ");
//};

//public: class hkp2AngJacobian * hkPadSpu<class hkp2AngJacobian *>::operator class hkp2AngJacobian *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAVhkp2AngJacobian@@@@QBAPAVhkp2AngJacobian@@XZ");
//};

//public: class hkpVelocityAccumulatorOffset * hkPadSpu<class hkpVelocityAccumulatorOffset *>::operator class hkpVelocityAccumulatorOffset *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAVhkpVelocityAccumulatorOffset@@@@QBAPAVhkpVelocityAccumulatorOffset@@XZ");
//};

//public: class hkpVelocityAccumulator * hkPadSpu<class hkpVelocityAccumulator *>::operator class hkpVelocityAccumulator *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAVhkpVelocityAccumulator@@@@QBAPAVhkpVelocityAccumulator@@XZ");
//};

//public: struct hkpConstraintChainMatrix6Triple * hkPadSpu<struct hkpConstraintChainMatrix6Triple *>::operator struct hkpConstraintChainMatrix6Triple *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAUhkpConstraintChainMatrix6Triple@@@@QBAPAUhkpConstraintChainMatrix6Triple@@XZ");
//};

//public: struct hkp3dAngularMotorSolverInfo * hkPadSpu<struct hkp3dAngularMotorSolverInfo *>::operator struct hkp3dAngularMotorSolverInfo *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAUhkp3dAngularMotorSolverInfo@@@@QBAPAUhkp3dAngularMotorSolverInfo@@XZ");
//};

//public: class hkVector8* hkPadSpu<class hkVector8*>::operator class hkVector8*(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAVhkVector8@@@@QBAPAVhkVector8@@XZ");
//};

//public: class hkp1Lin2AngJacobian * hkPadSpu<class hkp1Lin2AngJacobian *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAVhkp1Lin2AngJacobian@@@@QBAPAVhkp1Lin2AngJacobian@@XZ");
//};

//public: class hkp2AngJacobian * hkPadSpu<class hkp2AngJacobian *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAVhkp2AngJacobian@@@@QBAPAVhkp2AngJacobian@@XZ");
//};

//public: class hkpVelocityAccumulatorOffset * hkPadSpu<class hkpVelocityAccumulatorOffset *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAVhkpVelocityAccumulatorOffset@@@@QBAPAVhkpVelocityAccumulatorOffset@@XZ");
//};

//public: class hkpVelocityAccumulator * hkPadSpu<class hkpVelocityAccumulator *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAVhkpVelocityAccumulator@@@@QBAPAVhkpVelocityAccumulator@@XZ");
//};

//public: struct hkpConstraintChainMatrix6Triple * hkPadSpu<struct hkpConstraintChainMatrix6Triple *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAUhkpConstraintChainMatrix6Triple@@@@QBAPAUhkpConstraintChainMatrix6Triple@@XZ");
//};

//public: struct hkp3dAngularMotorSolverInfo * hkPadSpu<struct hkp3dAngularMotorSolverInfo *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAUhkp3dAngularMotorSolverInfo@@@@QBAPAUhkp3dAngularMotorSolverInfo@@XZ");
//};

//public: class hkVector8* hkPadSpu<class hkVector8*>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAVhkVector8@@@@QBAPAVhkVector8@@XZ");
//};

//class hkp2AngJacobian * hkAddByteOffset<class hkp2AngJacobian>(class hkp2AngJacobian *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@Vhkp2AngJacobian@@@@YAPAVhkp2AngJacobian@@PAV0@J@Z");
//};

//struct hkpConstraintChainMatrix6Triple * hkAddByteOffset<struct hkpConstraintChainMatrix6Triple>(struct hkpConstraintChainMatrix6Triple *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@UhkpConstraintChainMatrix6Triple@@@@YAPAUhkpConstraintChainMatrix6Triple@@PAU0@J@Z");
//};

