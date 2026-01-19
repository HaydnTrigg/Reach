/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void hkSolverExport::exportImpulsesAndRhs(struct hkpSolverInfo const &, struct hkpSolverElemTemp const *, class hkpJacobianSchema const *, class hkpVelocityAccumulator const *);
// void hkSolverExportWriteRhs(float, class hkpSolverResults *);
// void hkSolverExportWriteResult64(float, float, class hkpSolverResults *, class hkSpuDmaSparseWriter *);
// void hkSolverExportWriteResult128(float, float, float, float, class hkpSolverResults *, class hkSpuDmaSparseWriter *);
// hkExportImpulsesAndRhs;
// public: float hkp1Lin2AngJacobian::getUserValue(void) const;
// public: static class hkEnum<enum hkpJacobianSchema::SchemaType, signed char> hkpJacobianSchema::getType(class hkpJacobianSchema const *);
// public: static int hkpJacobianSchema::getSize(class hkpJacobianSchema const *);
// public: static int hkpJacobianSchema::getNumSolverElemTemps(class hkpJacobianSchema const *);
// public: class hkpVelocityAccumulator const * hkpJacobianHeaderSchema::getBodyA(class hkpVelocityAccumulator const *) const;
// public: class hkpVelocityAccumulator const * hkpJacobianHeaderSchema::getBodyB(class hkpVelocityAccumulator const *) const;
// public: int hkpJacobianShiftSolverResultsPointerSchema::getNumSolverResults(void) const;
// public: void hkpJacobian2dFrictionSchema::unpackSolverResultsPtr(class hkpSolverResults *&) const;
// public: void hkpJacobian3dFrictionSchema::unpackSolverResultsPtr(class hkpSolverResults *&) const;
// public: void hkpJacobian2dRollingFrictionSchema::unpackSolverResultsPtr(class hkpSolverResults *&) const;
// public: class hkpVelocityAccumulatorOffset * hkpJacobianStiffSpringChainSchema::getAccumulatorOffsetsBase(void);
// public: float * hkpJacobianStiffSpringChainSchema::getTempBuffer(void);
// public: struct hkpConstraintChainTriple * hkpJacobianStiffSpringChainSchema::getMatrixBuffer(void);
// public: class hkpVelocityAccumulatorOffset * hkpJacobianBallSocketChainSchema::getAccumulatorOffsetsBase(void);
// public: class hkVector4* hkpJacobianBallSocketChainSchema::getTempBuffer(void);
// public: struct hkpConstraintChainMatrixTriple * hkpJacobianBallSocketChainSchema::getMatrixBuffer(void);
// float hkSolverExport::integrateRhs(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp1Lin2AngJacobian const *, float, float);
// void hkSolverExport::integrateRhsPair(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp1Lin2AngJacobian const *, float, float, float &, float &);
// float hkSolverExport::integrateRhs2Lin2Ang(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp2Lin2AngJacobian const *, float, float);
// public: float hkp2Lin2AngJacobian::getRHS(void) const;
// float hkSolverExport::integrateAngularRhs(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp2AngJacobian const *, float, float);
// public: enum hkpJacobianSchema::SchemaType hkEnum<enum hkpJacobianSchema::SchemaType, signed char>::operator enum hkpJacobianSchema::SchemaType(void) const;
// public: class hkBool hkEnum<enum hkpJacobianSchema::SchemaType, signed char>::operator==(enum hkpJacobianSchema::SchemaType) const;
// public: class hkBool hkEnum<enum hkpJacobianSchema::SchemaType, signed char>::operator!=(enum hkpJacobianSchema::SchemaType) const;
// class hkpJacobianSchema const * hkAddByteOffsetConst<class hkpJacobianSchema>(class hkpJacobianSchema const *, long);
// class hkp1Lin2AngJacobian * hkAddByteOffset<class hkp1Lin2AngJacobian>(class hkp1Lin2AngJacobian *, long);
// struct hkpConstraintChainMatrixTriple * hkAddByteOffset<struct hkpConstraintChainMatrixTriple>(struct hkpConstraintChainMatrixTriple *, long);
// class hkVector4* hkAddByteOffset<class hkVector4>(class hkVector4*, long);

//void hkSolverExport::exportImpulsesAndRhs(struct hkpSolverInfo const &, struct hkpSolverElemTemp const *, class hkpJacobianSchema const *, class hkpVelocityAccumulator const *)
//{
//    mangled_ppc("?exportImpulsesAndRhs@hkSolverExport@@YAXABUhkpSolverInfo@@PBUhkpSolverElemTemp@@PBVhkpJacobianSchema@@PBVhkpVelocityAccumulator@@@Z");
//};

//void hkSolverExportWriteRhs(float, class hkpSolverResults *)
//{
//    mangled_ppc("?hkSolverExportWriteRhs@@YAXMPAVhkpSolverResults@@@Z");
//};

//void hkSolverExportWriteResult64(float, float, class hkpSolverResults *, class hkSpuDmaSparseWriter *)
//{
//    mangled_ppc("?hkSolverExportWriteResult64@@YAXMMPAVhkpSolverResults@@PAVhkSpuDmaSparseWriter@@@Z");
//};

//void hkSolverExportWriteResult128(float, float, float, float, class hkpSolverResults *, class hkSpuDmaSparseWriter *)
//{
//    mangled_ppc("?hkSolverExportWriteResult128@@YAXMMMMPAVhkpSolverResults@@PAVhkSpuDmaSparseWriter@@@Z");
//};

//hkExportImpulsesAndRhs
//{
//    mangled_ppc("hkExportImpulsesAndRhs");
//};

//public: float hkp1Lin2AngJacobian::getUserValue(void) const
//{
//    mangled_ppc("?getUserValue@hkp1Lin2AngJacobian@@QBAMXZ");
//};

//public: static class hkEnum<enum hkpJacobianSchema::SchemaType, signed char> hkpJacobianSchema::getType(class hkpJacobianSchema const *)
//{
//    mangled_ppc("?getType@hkpJacobianSchema@@SA?AV?$hkEnum@W4SchemaType@hkpJacobianSchema@@C@@PBV1@@Z");
//};

//public: static int hkpJacobianSchema::getSize(class hkpJacobianSchema const *)
//{
//    mangled_ppc("?getSize@hkpJacobianSchema@@SAHPBV1@@Z");
//};

//public: static int hkpJacobianSchema::getNumSolverElemTemps(class hkpJacobianSchema const *)
//{
//    mangled_ppc("?getNumSolverElemTemps@hkpJacobianSchema@@SAHPBV1@@Z");
//};

//public: class hkpVelocityAccumulator const * hkpJacobianHeaderSchema::getBodyA(class hkpVelocityAccumulator const *) const
//{
//    mangled_ppc("?getBodyA@hkpJacobianHeaderSchema@@QBAPBVhkpVelocityAccumulator@@PBV2@@Z");
//};

//public: class hkpVelocityAccumulator const * hkpJacobianHeaderSchema::getBodyB(class hkpVelocityAccumulator const *) const
//{
//    mangled_ppc("?getBodyB@hkpJacobianHeaderSchema@@QBAPBVhkpVelocityAccumulator@@PBV2@@Z");
//};

//public: int hkpJacobianShiftSolverResultsPointerSchema::getNumSolverResults(void) const
//{
//    mangled_ppc("?getNumSolverResults@hkpJacobianShiftSolverResultsPointerSchema@@QBAHXZ");
//};

//public: void hkpJacobian2dFrictionSchema::unpackSolverResultsPtr(class hkpSolverResults *&) const
//{
//    mangled_ppc("?unpackSolverResultsPtr@hkpJacobian2dFrictionSchema@@QBAXAAPAVhkpSolverResults@@@Z");
//};

//public: void hkpJacobian3dFrictionSchema::unpackSolverResultsPtr(class hkpSolverResults *&) const
//{
//    mangled_ppc("?unpackSolverResultsPtr@hkpJacobian3dFrictionSchema@@QBAXAAPAVhkpSolverResults@@@Z");
//};

//public: void hkpJacobian2dRollingFrictionSchema::unpackSolverResultsPtr(class hkpSolverResults *&) const
//{
//    mangled_ppc("?unpackSolverResultsPtr@hkpJacobian2dRollingFrictionSchema@@QBAXAAPAVhkpSolverResults@@@Z");
//};

//public: class hkpVelocityAccumulatorOffset * hkpJacobianStiffSpringChainSchema::getAccumulatorOffsetsBase(void)
//{
//    mangled_ppc("?getAccumulatorOffsetsBase@hkpJacobianStiffSpringChainSchema@@QAAPAVhkpVelocityAccumulatorOffset@@XZ");
//};

//public: float * hkpJacobianStiffSpringChainSchema::getTempBuffer(void)
//{
//    mangled_ppc("?getTempBuffer@hkpJacobianStiffSpringChainSchema@@QAAPAMXZ");
//};

//public: struct hkpConstraintChainTriple * hkpJacobianStiffSpringChainSchema::getMatrixBuffer(void)
//{
//    mangled_ppc("?getMatrixBuffer@hkpJacobianStiffSpringChainSchema@@QAAPAUhkpConstraintChainTriple@@XZ");
//};

//public: class hkpVelocityAccumulatorOffset * hkpJacobianBallSocketChainSchema::getAccumulatorOffsetsBase(void)
//{
//    mangled_ppc("?getAccumulatorOffsetsBase@hkpJacobianBallSocketChainSchema@@QAAPAVhkpVelocityAccumulatorOffset@@XZ");
//};

//public: class hkVector4* hkpJacobianBallSocketChainSchema::getTempBuffer(void)
//{
//    mangled_ppc("?getTempBuffer@hkpJacobianBallSocketChainSchema@@QAAPAVhkVector4@@XZ");
//};

//public: struct hkpConstraintChainMatrixTriple * hkpJacobianBallSocketChainSchema::getMatrixBuffer(void)
//{
//    mangled_ppc("?getMatrixBuffer@hkpJacobianBallSocketChainSchema@@QAAPAUhkpConstraintChainMatrixTriple@@XZ");
//};

//float hkSolverExport::integrateRhs(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp1Lin2AngJacobian const *, float, float)
//{
//    mangled_ppc("?integrateRhs@hkSolverExport@@YAMABVhkpVelocityAccumulator@@0PBVhkp1Lin2AngJacobian@@MM@Z");
//};

//void hkSolverExport::integrateRhsPair(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp1Lin2AngJacobian const *, float, float, float &, float &)
//{
//    mangled_ppc("?integrateRhsPair@hkSolverExport@@YAXABVhkpVelocityAccumulator@@0PBVhkp1Lin2AngJacobian@@MMAAM2@Z");
//};

//float hkSolverExport::integrateRhs2Lin2Ang(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp2Lin2AngJacobian const *, float, float)
//{
//    mangled_ppc("?integrateRhs2Lin2Ang@hkSolverExport@@YAMABVhkpVelocityAccumulator@@0PBVhkp2Lin2AngJacobian@@MM@Z");
//};

//public: float hkp2Lin2AngJacobian::getRHS(void) const
//{
//    mangled_ppc("?getRHS@hkp2Lin2AngJacobian@@QBAMXZ");
//};

//float hkSolverExport::integrateAngularRhs(class hkpVelocityAccumulator const &, class hkpVelocityAccumulator const &, class hkp2AngJacobian const *, float, float)
//{
//    mangled_ppc("?integrateAngularRhs@hkSolverExport@@YAMABVhkpVelocityAccumulator@@0PBVhkp2AngJacobian@@MM@Z");
//};

//public: enum hkpJacobianSchema::SchemaType hkEnum<enum hkpJacobianSchema::SchemaType, signed char>::operator enum hkpJacobianSchema::SchemaType(void) const
//{
//    mangled_ppc("??B?$hkEnum@W4SchemaType@hkpJacobianSchema@@C@@QBA?AW4SchemaType@hkpJacobianSchema@@XZ");
//};

//public: class hkBool hkEnum<enum hkpJacobianSchema::SchemaType, signed char>::operator==(enum hkpJacobianSchema::SchemaType) const
//{
//    mangled_ppc("??8?$hkEnum@W4SchemaType@hkpJacobianSchema@@C@@QBA?AVhkBool@@W4SchemaType@hkpJacobianSchema@@@Z");
//};

//public: class hkBool hkEnum<enum hkpJacobianSchema::SchemaType, signed char>::operator!=(enum hkpJacobianSchema::SchemaType) const
//{
//    mangled_ppc("??9?$hkEnum@W4SchemaType@hkpJacobianSchema@@C@@QBA?AVhkBool@@W4SchemaType@hkpJacobianSchema@@@Z");
//};

//class hkpJacobianSchema const * hkAddByteOffsetConst<class hkpJacobianSchema>(class hkpJacobianSchema const *, long)
//{
//    mangled_ppc("??$hkAddByteOffsetConst@VhkpJacobianSchema@@@@YAPBVhkpJacobianSchema@@PBV0@J@Z");
//};

//class hkp1Lin2AngJacobian * hkAddByteOffset<class hkp1Lin2AngJacobian>(class hkp1Lin2AngJacobian *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@Vhkp1Lin2AngJacobian@@@@YAPAVhkp1Lin2AngJacobian@@PAV0@J@Z");
//};

//struct hkpConstraintChainMatrixTriple * hkAddByteOffset<struct hkpConstraintChainMatrixTriple>(struct hkpConstraintChainMatrixTriple *, long)
//{
//    mangled_ppc("??$hkAddByteOffset@UhkpConstraintChainMatrixTriple@@@@YAPAUhkpConstraintChainMatrixTriple@@PAU0@J@Z");
//};

//class hkVector4* hkAddByteOffset<class hkVector4>(class hkVector4*, long)
//{
//    mangled_ppc("??$hkAddByteOffset@VhkVector4@@@@YAPAVhkVector4@@PAV0@J@Z");
//};

