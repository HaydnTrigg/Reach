/* ---------- headers */

#include "havok\hkpcollide\hkpBoxBoxCollisionDetection.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// protected: static float const hkpBoxBoxCollisionDetection::m_manifoldConsistencyCheckAngularCosTolerance; // "?m_manifoldConsistencyCheckAngularCosTolerance@hkpBoxBoxCollisionDetection@@1MB"
// protected: static float const hkpBoxBoxCollisionDetection::m_coplanerAngularCosTolerance; // "?m_coplanerAngularCosTolerance@hkpBoxBoxCollisionDetection@@1MB"
// protected: static float const hkpBoxBoxCollisionDetection::m_contactNormalAngularCosTolerance; // "?m_contactNormalAngularCosTolerance@hkpBoxBoxCollisionDetection@@1MB"
// protected: static float const hkpBoxBoxCollisionDetection::m_edgeEndpointTolerance; // "?m_edgeEndpointTolerance@hkpBoxBoxCollisionDetection@@1MB"
// protected: static int const hkpBoxBoxCollisionDetection::m_maxFeaturesToReject; // "?m_maxFeaturesToReject@hkpBoxBoxCollisionDetection@@1HB"

// protected: void hkpBoxBoxCollisionDetection::checkCompleteness(class hkpBoxBoxManifold &, int, int) const;
// void setTerminalsFromVertex(int &, int, int);
// void setTerminalsFromEdge(int &, int);
// protected: void hkpBoxBoxCollisionDetection::addAdditionalEdgeHelper(class hkpBoxBoxManifold &, class hkpFeatureContactPoint &, float) const;
// protected: void hkpBoxBoxCollisionDetection::tryToAddPointOnEdge(class hkpBoxBoxManifold &, int, int, int, int, class hkVector4const &, class hkVector4const &, float) const;
// void setEdgeFeatureBitSetFromAxisMap(class hkVector4const &, class hkVector4const &, int, int, class hkpFeatureContactPoint &);
// public: enum hkResult hkpBoxBoxCollisionDetection::checkIntersection(class hkVector4const &) const;
// protected: int hkpBoxBoxCollisionDetection::findClosestPoint(class hkpBoxBoxManifold &, class hkpFeatureContactPoint &, class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &) const;
// unsigned short calcFaceFeatureBitSetFromAxisMap(class hkVector4const &, float);
// protected: class hkBool hkpBoxBoxCollisionDetection::isValidEdgeEdge(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &) const;
// class hkVector4const & getAxisMapFromFeatureBitSet(unsigned short);
// protected: void hkpBoxBoxCollisionDetection::debugCheckManifold(class hkpBoxBoxManifold &, struct hkpProcessCollisionOutput *) const;
// public: class hkBool hkpBoxBoxCollisionDetection::calculateClosestPoint(class hkContactPoint &) const;
// public: void hkpBoxBoxCollisionDetection::calcManifold(class hkpBoxBoxManifold &) const;
// int getMaxPlaneMask3(class hkVector4const &, class hkVector4const &, int &);
// float getNormalSignFromFeatureBitSet(unsigned short);
// public: void hkpBoxBoxManifold::setComplete(class hkBool);
// protected: void hkpBoxBoxCollisionDetection::edgeEdgeValidationDataFromFeatureId(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &, class hkpFeatureContactPoint const &) const;
// protected: enum hkResult hkpBoxBoxCollisionDetection::addPoint(class hkpBoxBoxManifold &, class hkpBoxBoxCollisionDetection::hkpFeaturePointCache const &, class hkpFeatureContactPoint &) const;
// public: class hkBool hkpBoxBoxManifold::hasNoPointsLeft(void);
// protected: void hkpBoxBoxCollisionDetection::contactPointFromFeaturePointCache(struct hkpProcessCdPoint &, class hkpFeatureContactPoint const &, class hkpBoxBoxCollisionDetection::hkpFeaturePointCache const &) const;
// protected: void hkpBoxBoxCollisionDetection::faceAVertexBContactPointFromFeaturePointCache(struct hkpProcessCdPoint &, class hkpFeatureContactPoint const &, class hkpBoxBoxCollisionDetection::hkpFeaturePointCache const &) const;
// protected: void hkpBoxBoxCollisionDetection::faceBVertexAContactPointFromFeaturePointCache(struct hkpProcessCdPoint &, class hkpFeatureContactPoint const &, class hkpBoxBoxCollisionDetection::hkpFeaturePointCache const &) const;
// protected: void hkpBoxBoxCollisionDetection::edgeEdgeContactPointFromFeaturePointCache(struct hkpProcessCdPoint &, class hkpFeatureContactPoint const &, class hkpBoxBoxCollisionDetection::hkpFeaturePointCache const &) const;
// protected: void hkpBoxBoxCollisionDetection::setvdProj(class hkRotation const &, int, int, class hkVector4&) const;
// public: static void hkBoxBoxUtils::rsqrtAll3(class hkVector4&);
// public: static void hkBoxBoxUtils::selectIfGT3(class hkVector4&, class hkSimdReal const &, class hkVector4const &, class hkSimdReal const &);
// protected: class hkBool hkpBoxBoxCollisionDetection::isValidFaceAVertexB(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &) const;
// protected: class hkBool hkpBoxBoxCollisionDetection::isValidFaceBVertexA(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &) const;
// protected: void hkpBoxBoxCollisionDetection::faceAVertexBValidationDataFromFeatureIndex(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &, int) const;
// protected: void hkpBoxBoxCollisionDetection::faceBVertexAValidationDataFromFeatureIndex(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &, int) const;
// protected: void hkpBoxBoxCollisionDetection::edgeEdgeValidationDataFromFeatureIndex(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &) const;
// public: class hkBool hkpBoxBoxManifold::isComplete(void);
// protected: void hkpBoxBoxCollisionDetection::findAdditionalManifoldPoints(class hkpBoxBoxManifold &, class hkpFeatureContactPoint) const;
// protected: void hkpBoxBoxCollisionDetection::tryToAddPointFaceA(class hkpBoxBoxManifold &, class hkpFeatureContactPoint, unsigned short, float) const;
// protected: void hkpBoxBoxCollisionDetection::faceAVertexBValidationDataFromFeatureId(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &, class hkpFeatureContactPoint const &) const;
// protected: void hkpBoxBoxCollisionDetection::tryToAddPointFaceB(class hkpBoxBoxManifold &, class hkpFeatureContactPoint, unsigned short, float) const;
// protected: void hkpBoxBoxCollisionDetection::faceBVertexAValidationDataFromFeatureId(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &, class hkpFeatureContactPoint const &) const;
// protected: void hkpBoxBoxCollisionDetection::calcManifoldNormal(class hkVector4&, class hkpFeatureContactPoint const &, class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &, class hkBool) const;
// protected: void hkpBoxBoxCollisionDetection::refreshManifold(class hkpBoxBoxManifold &) const;
// protected: void hkpBoxBoxCollisionDetection::removePoint(class hkpBoxBoxManifold &, int) const;
// protected: class hkBool hkpBoxBoxCollisionDetection::queryManifoldNormalConsistency(class hkpBoxBoxManifold &) const;
// void hkVector4Util::unPackInt32IntoQuaternion(unsigned int, class hkVector4&);
// protected: void hkpBoxBoxCollisionDetection::checkManifoldNormalConsistency(class hkpBoxBoxManifold &) const;
// public: struct hkpProcessCdPoint * hkpProcessCollisionData::getEnd(void);

//protected: void hkpBoxBoxCollisionDetection::checkCompleteness(class hkpBoxBoxManifold &, int, int) const
//{
//    mangled_ppc("?checkCompleteness@hkpBoxBoxCollisionDetection@@IBAXAAVhkpBoxBoxManifold@@HH@Z");
//};

//void setTerminalsFromVertex(int &, int, int)
//{
//    mangled_ppc("?setTerminalsFromVertex@@YAXAAHHH@Z");
//};

//void setTerminalsFromEdge(int &, int)
//{
//    mangled_ppc("?setTerminalsFromEdge@@YAXAAHH@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::addAdditionalEdgeHelper(class hkpBoxBoxManifold &, class hkpFeatureContactPoint &, float) const
//{
//    mangled_ppc("?addAdditionalEdgeHelper@hkpBoxBoxCollisionDetection@@IBAXAAVhkpBoxBoxManifold@@AAVhkpFeatureContactPoint@@M@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::tryToAddPointOnEdge(class hkpBoxBoxManifold &, int, int, int, int, class hkVector4const &, class hkVector4const &, float) const
//{
//    mangled_ppc("?tryToAddPointOnEdge@hkpBoxBoxCollisionDetection@@IBAXAAVhkpBoxBoxManifold@@HHHHABVhkVector4@@1M@Z");
//};

//void setEdgeFeatureBitSetFromAxisMap(class hkVector4const &, class hkVector4const &, int, int, class hkpFeatureContactPoint &)
//{
//    mangled_ppc("?setEdgeFeatureBitSetFromAxisMap@@YAXABVhkVector4@@0HHAAVhkpFeatureContactPoint@@@Z");
//};

//public: enum hkResult hkpBoxBoxCollisionDetection::checkIntersection(class hkVector4const &) const
//{
//    mangled_ppc("?checkIntersection@hkpBoxBoxCollisionDetection@@QBA?AW4hkResult@@ABVhkVector4@@@Z");
//};

//protected: int hkpBoxBoxCollisionDetection::findClosestPoint(class hkpBoxBoxManifold &, class hkpFeatureContactPoint &, class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &) const
//{
//    mangled_ppc("?findClosestPoint@hkpBoxBoxCollisionDetection@@IBAHAAVhkpBoxBoxManifold@@AAVhkpFeatureContactPoint@@AAVhkpFeaturePointCache@1@@Z");
//};

//unsigned short calcFaceFeatureBitSetFromAxisMap(class hkVector4const &, float)
//{
//    mangled_ppc("?calcFaceFeatureBitSetFromAxisMap@@YAGABVhkVector4@@M@Z");
//};

//protected: class hkBool hkpBoxBoxCollisionDetection::isValidEdgeEdge(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &) const
//{
//    mangled_ppc("?isValidEdgeEdge@hkpBoxBoxCollisionDetection@@IBA?AVhkBool@@AAVhkpFeaturePointCache@1@@Z");
//};

//class hkVector4const & getAxisMapFromFeatureBitSet(unsigned short)
//{
//    mangled_ppc("?getAxisMapFromFeatureBitSet@@YAABVhkVector4@@G@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::debugCheckManifold(class hkpBoxBoxManifold &, struct hkpProcessCollisionOutput *) const
//{
//    mangled_ppc("?debugCheckManifold@hkpBoxBoxCollisionDetection@@IBAXAAVhkpBoxBoxManifold@@PAUhkpProcessCollisionOutput@@@Z");
//};

//public: class hkBool hkpBoxBoxCollisionDetection::calculateClosestPoint(class hkContactPoint &) const
//{
//    mangled_ppc("?calculateClosestPoint@hkpBoxBoxCollisionDetection@@QBA?AVhkBool@@AAVhkContactPoint@@@Z");
//};

//public: void hkpBoxBoxCollisionDetection::calcManifold(class hkpBoxBoxManifold &) const
//{
//    mangled_ppc("?calcManifold@hkpBoxBoxCollisionDetection@@QBAXAAVhkpBoxBoxManifold@@@Z");
//};

//int getMaxPlaneMask3(class hkVector4const &, class hkVector4const &, int &)
//{
//    mangled_ppc("?getMaxPlaneMask3@@YAHABVhkVector4@@0AAH@Z");
//};

//float getNormalSignFromFeatureBitSet(unsigned short)
//{
//    mangled_ppc("?getNormalSignFromFeatureBitSet@@YAMG@Z");
//};

//public: void hkpBoxBoxManifold::setComplete(class hkBool)
//{
//    mangled_ppc("?setComplete@hkpBoxBoxManifold@@QAAXVhkBool@@@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::edgeEdgeValidationDataFromFeatureId(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &, class hkpFeatureContactPoint const &) const
//{
//    mangled_ppc("?edgeEdgeValidationDataFromFeatureId@hkpBoxBoxCollisionDetection@@IBAXAAVhkpFeaturePointCache@1@ABVhkpFeatureContactPoint@@@Z");
//};

//protected: enum hkResult hkpBoxBoxCollisionDetection::addPoint(class hkpBoxBoxManifold &, class hkpBoxBoxCollisionDetection::hkpFeaturePointCache const &, class hkpFeatureContactPoint &) const
//{
//    mangled_ppc("?addPoint@hkpBoxBoxCollisionDetection@@IBA?AW4hkResult@@AAVhkpBoxBoxManifold@@ABVhkpFeaturePointCache@1@AAVhkpFeatureContactPoint@@@Z");
//};

//public: class hkBool hkpBoxBoxManifold::hasNoPointsLeft(void)
//{
//    mangled_ppc("?hasNoPointsLeft@hkpBoxBoxManifold@@QAA?AVhkBool@@XZ");
//};

//protected: void hkpBoxBoxCollisionDetection::contactPointFromFeaturePointCache(struct hkpProcessCdPoint &, class hkpFeatureContactPoint const &, class hkpBoxBoxCollisionDetection::hkpFeaturePointCache const &) const
//{
//    mangled_ppc("?contactPointFromFeaturePointCache@hkpBoxBoxCollisionDetection@@IBAXAAUhkpProcessCdPoint@@ABVhkpFeatureContactPoint@@ABVhkpFeaturePointCache@1@@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::faceAVertexBContactPointFromFeaturePointCache(struct hkpProcessCdPoint &, class hkpFeatureContactPoint const &, class hkpBoxBoxCollisionDetection::hkpFeaturePointCache const &) const
//{
//    mangled_ppc("?faceAVertexBContactPointFromFeaturePointCache@hkpBoxBoxCollisionDetection@@IBAXAAUhkpProcessCdPoint@@ABVhkpFeatureContactPoint@@ABVhkpFeaturePointCache@1@@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::faceBVertexAContactPointFromFeaturePointCache(struct hkpProcessCdPoint &, class hkpFeatureContactPoint const &, class hkpBoxBoxCollisionDetection::hkpFeaturePointCache const &) const
//{
//    mangled_ppc("?faceBVertexAContactPointFromFeaturePointCache@hkpBoxBoxCollisionDetection@@IBAXAAUhkpProcessCdPoint@@ABVhkpFeatureContactPoint@@ABVhkpFeaturePointCache@1@@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::edgeEdgeContactPointFromFeaturePointCache(struct hkpProcessCdPoint &, class hkpFeatureContactPoint const &, class hkpBoxBoxCollisionDetection::hkpFeaturePointCache const &) const
//{
//    mangled_ppc("?edgeEdgeContactPointFromFeaturePointCache@hkpBoxBoxCollisionDetection@@IBAXAAUhkpProcessCdPoint@@ABVhkpFeatureContactPoint@@ABVhkpFeaturePointCache@1@@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::setvdProj(class hkRotation const &, int, int, class hkVector4&) const
//{
//    mangled_ppc("?setvdProj@hkpBoxBoxCollisionDetection@@IBAXABVhkRotation@@HHAAVhkVector4@@@Z");
//};

//public: static void hkBoxBoxUtils::rsqrtAll3(class hkVector4&)
//{
//    mangled_ppc("?rsqrtAll3@hkBoxBoxUtils@@SAXAAVhkVector4@@@Z");
//};

//public: static void hkBoxBoxUtils::selectIfGT3(class hkVector4&, class hkSimdReal const &, class hkVector4const &, class hkSimdReal const &)
//{
//    mangled_ppc("?selectIfGT3@hkBoxBoxUtils@@SAXAAVhkVector4@@ABVhkSimdReal@@ABV2@1@Z");
//};

//protected: class hkBool hkpBoxBoxCollisionDetection::isValidFaceAVertexB(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &) const
//{
//    mangled_ppc("?isValidFaceAVertexB@hkpBoxBoxCollisionDetection@@IBA?AVhkBool@@AAVhkpFeaturePointCache@1@@Z");
//};

//protected: class hkBool hkpBoxBoxCollisionDetection::isValidFaceBVertexA(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &) const
//{
//    mangled_ppc("?isValidFaceBVertexA@hkpBoxBoxCollisionDetection@@IBA?AVhkBool@@AAVhkpFeaturePointCache@1@@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::faceAVertexBValidationDataFromFeatureIndex(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &, int) const
//{
//    mangled_ppc("?faceAVertexBValidationDataFromFeatureIndex@hkpBoxBoxCollisionDetection@@IBAXAAVhkpFeaturePointCache@1@H@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::faceBVertexAValidationDataFromFeatureIndex(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &, int) const
//{
//    mangled_ppc("?faceBVertexAValidationDataFromFeatureIndex@hkpBoxBoxCollisionDetection@@IBAXAAVhkpFeaturePointCache@1@H@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::edgeEdgeValidationDataFromFeatureIndex(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &) const
//{
//    mangled_ppc("?edgeEdgeValidationDataFromFeatureIndex@hkpBoxBoxCollisionDetection@@IBAXAAVhkpFeaturePointCache@1@@Z");
//};

//public: class hkBool hkpBoxBoxManifold::isComplete(void)
//{
//    mangled_ppc("?isComplete@hkpBoxBoxManifold@@QAA?AVhkBool@@XZ");
//};

//protected: void hkpBoxBoxCollisionDetection::findAdditionalManifoldPoints(class hkpBoxBoxManifold &, class hkpFeatureContactPoint) const
//{
//    mangled_ppc("?findAdditionalManifoldPoints@hkpBoxBoxCollisionDetection@@IBAXAAVhkpBoxBoxManifold@@VhkpFeatureContactPoint@@@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::tryToAddPointFaceA(class hkpBoxBoxManifold &, class hkpFeatureContactPoint, unsigned short, float) const
//{
//    mangled_ppc("?tryToAddPointFaceA@hkpBoxBoxCollisionDetection@@IBAXAAVhkpBoxBoxManifold@@VhkpFeatureContactPoint@@GM@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::faceAVertexBValidationDataFromFeatureId(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &, class hkpFeatureContactPoint const &) const
//{
//    mangled_ppc("?faceAVertexBValidationDataFromFeatureId@hkpBoxBoxCollisionDetection@@IBAXAAVhkpFeaturePointCache@1@ABVhkpFeatureContactPoint@@@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::tryToAddPointFaceB(class hkpBoxBoxManifold &, class hkpFeatureContactPoint, unsigned short, float) const
//{
//    mangled_ppc("?tryToAddPointFaceB@hkpBoxBoxCollisionDetection@@IBAXAAVhkpBoxBoxManifold@@VhkpFeatureContactPoint@@GM@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::faceBVertexAValidationDataFromFeatureId(class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &, class hkpFeatureContactPoint const &) const
//{
//    mangled_ppc("?faceBVertexAValidationDataFromFeatureId@hkpBoxBoxCollisionDetection@@IBAXAAVhkpFeaturePointCache@1@ABVhkpFeatureContactPoint@@@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::calcManifoldNormal(class hkVector4&, class hkpFeatureContactPoint const &, class hkpBoxBoxCollisionDetection::hkpFeaturePointCache &, class hkBool) const
//{
//    mangled_ppc("?calcManifoldNormal@hkpBoxBoxCollisionDetection@@IBAXAAVhkVector4@@ABVhkpFeatureContactPoint@@AAVhkpFeaturePointCache@1@VhkBool@@@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::refreshManifold(class hkpBoxBoxManifold &) const
//{
//    mangled_ppc("?refreshManifold@hkpBoxBoxCollisionDetection@@IBAXAAVhkpBoxBoxManifold@@@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::removePoint(class hkpBoxBoxManifold &, int) const
//{
//    mangled_ppc("?removePoint@hkpBoxBoxCollisionDetection@@IBAXAAVhkpBoxBoxManifold@@H@Z");
//};

//protected: class hkBool hkpBoxBoxCollisionDetection::queryManifoldNormalConsistency(class hkpBoxBoxManifold &) const
//{
//    mangled_ppc("?queryManifoldNormalConsistency@hkpBoxBoxCollisionDetection@@IBA?AVhkBool@@AAVhkpBoxBoxManifold@@@Z");
//};

//void hkVector4Util::unPackInt32IntoQuaternion(unsigned int, class hkVector4&)
//{
//    mangled_ppc("?unPackInt32IntoQuaternion@hkVector4Util@@YAXIAAVhkVector4@@@Z");
//};

//protected: void hkpBoxBoxCollisionDetection::checkManifoldNormalConsistency(class hkpBoxBoxManifold &) const
//{
//    mangled_ppc("?checkManifoldNormalConsistency@hkpBoxBoxCollisionDetection@@IBAXAAVhkpBoxBoxManifold@@@Z");
//};

//public: struct hkpProcessCdPoint * hkpProcessCollisionData::getEnd(void)
//{
//    mangled_ppc("?getEnd@hkpProcessCollisionData@@QAAPAUhkpProcessCdPoint@@XZ");
//};

