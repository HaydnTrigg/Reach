/* ---------- headers */

#include "havok\hkpdynamics\hkpConstraintDataCloningUtil.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static class hkpConstraintData * hkpConstraintDataCloningUtil::cloneIfCanHaveMotors(class hkpConstraintData const *);
// public: static class hkpConstraintData * hkpConstraintDataCloningUtil::deepClone(class hkpConstraintData const *);
// class hkpBallAndSocketConstraintData * copyConstraintAtoms<class hkpBallAndSocketConstraintData>(class hkpConstraintData const *);
// class hkpHingeConstraintData * copyConstraintAtoms<class hkpHingeConstraintData>(class hkpConstraintData const *);
// class hkpLimitedHingeConstraintData * copyConstraintAtoms<class hkpLimitedHingeConstraintData>(class hkpConstraintData const *);
// class hkpPointToPathConstraintData * copyConstraintAtoms<class hkpPointToPathConstraintData>(class hkpConstraintData const *);
// class hkpPrismaticConstraintData * copyConstraintAtoms<class hkpPrismaticConstraintData>(class hkpConstraintData const *);
// class hkpRagdollConstraintData * copyConstraintAtoms<class hkpRagdollConstraintData>(class hkpConstraintData const *);
// class hkpStiffSpringConstraintData * copyConstraintAtoms<class hkpStiffSpringConstraintData>(class hkpConstraintData const *);
// class hkpWheelConstraintData * copyConstraintAtoms<class hkpWheelConstraintData>(class hkpConstraintData const *);
// class hkpPointToPlaneConstraintData * copyConstraintAtoms<class hkpPointToPlaneConstraintData>(class hkpConstraintData const *);
// class hkpPulleyConstraintData * copyConstraintAtoms<class hkpPulleyConstraintData>(class hkpConstraintData const *);
// class hkpHingeLimitsData * copyConstraintAtoms<class hkpHingeLimitsData>(class hkpConstraintData const *);
// class hkpRagdollLimitsData * copyConstraintAtoms<class hkpRagdollLimitsData>(class hkpConstraintData const *);
// public: struct hkpPrismaticConstraintData::Atoms & hkpPrismaticConstraintData::Atoms::operator=(struct hkpPrismaticConstraintData::Atoms const &);
// public: class hkpConstraintData const * hkpBreakableConstraintData::getWrappedConstraintData(void) const;

//public: static class hkpConstraintData * hkpConstraintDataCloningUtil::cloneIfCanHaveMotors(class hkpConstraintData const *)
//{
//    mangled_ppc("?cloneIfCanHaveMotors@hkpConstraintDataCloningUtil@@SAPAVhkpConstraintData@@PBV2@@Z");
//};

//public: static class hkpConstraintData * hkpConstraintDataCloningUtil::deepClone(class hkpConstraintData const *)
//{
//    mangled_ppc("?deepClone@hkpConstraintDataCloningUtil@@SAPAVhkpConstraintData@@PBV2@@Z");
//};

//class hkpBallAndSocketConstraintData * copyConstraintAtoms<class hkpBallAndSocketConstraintData>(class hkpConstraintData const *)
//{
//    mangled_ppc("??$copyConstraintAtoms@VhkpBallAndSocketConstraintData@@@@YAPAVhkpBallAndSocketConstraintData@@PBVhkpConstraintData@@@Z");
//};

//class hkpHingeConstraintData * copyConstraintAtoms<class hkpHingeConstraintData>(class hkpConstraintData const *)
//{
//    mangled_ppc("??$copyConstraintAtoms@VhkpHingeConstraintData@@@@YAPAVhkpHingeConstraintData@@PBVhkpConstraintData@@@Z");
//};

//class hkpLimitedHingeConstraintData * copyConstraintAtoms<class hkpLimitedHingeConstraintData>(class hkpConstraintData const *)
//{
//    mangled_ppc("??$copyConstraintAtoms@VhkpLimitedHingeConstraintData@@@@YAPAVhkpLimitedHingeConstraintData@@PBVhkpConstraintData@@@Z");
//};

//class hkpPointToPathConstraintData * copyConstraintAtoms<class hkpPointToPathConstraintData>(class hkpConstraintData const *)
//{
//    mangled_ppc("??$copyConstraintAtoms@VhkpPointToPathConstraintData@@@@YAPAVhkpPointToPathConstraintData@@PBVhkpConstraintData@@@Z");
//};

//class hkpPrismaticConstraintData * copyConstraintAtoms<class hkpPrismaticConstraintData>(class hkpConstraintData const *)
//{
//    mangled_ppc("??$copyConstraintAtoms@VhkpPrismaticConstraintData@@@@YAPAVhkpPrismaticConstraintData@@PBVhkpConstraintData@@@Z");
//};

//class hkpRagdollConstraintData * copyConstraintAtoms<class hkpRagdollConstraintData>(class hkpConstraintData const *)
//{
//    mangled_ppc("??$copyConstraintAtoms@VhkpRagdollConstraintData@@@@YAPAVhkpRagdollConstraintData@@PBVhkpConstraintData@@@Z");
//};

//class hkpStiffSpringConstraintData * copyConstraintAtoms<class hkpStiffSpringConstraintData>(class hkpConstraintData const *)
//{
//    mangled_ppc("??$copyConstraintAtoms@VhkpStiffSpringConstraintData@@@@YAPAVhkpStiffSpringConstraintData@@PBVhkpConstraintData@@@Z");
//};

//class hkpWheelConstraintData * copyConstraintAtoms<class hkpWheelConstraintData>(class hkpConstraintData const *)
//{
//    mangled_ppc("??$copyConstraintAtoms@VhkpWheelConstraintData@@@@YAPAVhkpWheelConstraintData@@PBVhkpConstraintData@@@Z");
//};

//class hkpPointToPlaneConstraintData * copyConstraintAtoms<class hkpPointToPlaneConstraintData>(class hkpConstraintData const *)
//{
//    mangled_ppc("??$copyConstraintAtoms@VhkpPointToPlaneConstraintData@@@@YAPAVhkpPointToPlaneConstraintData@@PBVhkpConstraintData@@@Z");
//};

//class hkpPulleyConstraintData * copyConstraintAtoms<class hkpPulleyConstraintData>(class hkpConstraintData const *)
//{
//    mangled_ppc("??$copyConstraintAtoms@VhkpPulleyConstraintData@@@@YAPAVhkpPulleyConstraintData@@PBVhkpConstraintData@@@Z");
//};

//class hkpHingeLimitsData * copyConstraintAtoms<class hkpHingeLimitsData>(class hkpConstraintData const *)
//{
//    mangled_ppc("??$copyConstraintAtoms@VhkpHingeLimitsData@@@@YAPAVhkpHingeLimitsData@@PBVhkpConstraintData@@@Z");
//};

//class hkpRagdollLimitsData * copyConstraintAtoms<class hkpRagdollLimitsData>(class hkpConstraintData const *)
//{
//    mangled_ppc("??$copyConstraintAtoms@VhkpRagdollLimitsData@@@@YAPAVhkpRagdollLimitsData@@PBVhkpConstraintData@@@Z");
//};

//public: struct hkpPrismaticConstraintData::Atoms & hkpPrismaticConstraintData::Atoms::operator=(struct hkpPrismaticConstraintData::Atoms const &)
//{
//    mangled_ppc("??4Atoms@hkpPrismaticConstraintData@@QAAAAU01@ABU01@@Z");
//};

//public: class hkpConstraintData const * hkpBreakableConstraintData::getWrappedConstraintData(void) const
//{
//    mangled_ppc("?getWrappedConstraintData@hkpBreakableConstraintData@@QBAPBVhkpConstraintData@@XZ");
//};

