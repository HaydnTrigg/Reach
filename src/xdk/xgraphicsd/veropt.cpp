/* ---------- headers */

#include "xdk\xgraphicsd\veropt.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// int XGRAPHICS::GetArrayIndex(class XGRAPHICS::VerNode *);
// bool XGRAPHICS::OptimizeOr(class XGRAPHICS::VerNode *);
// int XGRAPHICS::CheckRangeAgainstCnd(unsigned char, double, double);
// bool XGRAPHICS::RemoveNearBuddyListsAsVerNode(class XGRAPHICS::VerNode *);
// unsigned long XGRAPHICS::ChangeChunkVeropBadFVO(class XGRAPHICS::VerNode *, void *, unsigned long, unsigned long, class XGRAPHICS::VerNode **);
// unsigned long XGRAPHICS::ChangeChunkVeropOther(class XGRAPHICS::VerNode *, void *, unsigned long, unsigned long, class XGRAPHICS::VerNode **);
// void XGRAPHICS::CleanupAfterChangeChunk(class XGRAPHICS::VerNode *);
// bool XGRAPHICS::PropagatableChangeChunkCleanup(class XGRAPHICS::VerNode *, void *);
// double XGRAPHICS::sign(double);
// bool XGRAPHICS::CndHasOneZero(class XGRAPHICS::VerOp *);
// bool XGRAPHICS::OpIsCndOneZero(class XGRAPHICS::VerOp *);
// frac;
// void XGRAPHICS::Negate(class XGRAPHICS::VerNode *);
// int XGRAPHICS::CompareNumericForSort2(class XGRAPHICS::VerNode *, class XGRAPHICS::VerNode *, bool);
// int XGRAPHICS::CompareNumericForSort(void const *, void const *);
// int XGRAPHICS::CompareNumericForSortNoMerge(void const *, void const *);
// bool XGRAPHICS::OptimizeAssociativityCommutitivity(class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::OptimizeAssociativityMergeVals(class XGRAPHICS::VerNode *);
// bool XGRAPHICS::OptimizeAdd(class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::FixmbHasNoCNDs(class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::OptimizeMul(class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::OptimizeAssociativityForCnds(class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::OptimizeOldbeAbs(class XGRAPHICS::VerNode *, void *);
// void XGRAPHICS::GetRange(class XGRAPHICS::VerNode *, double *, double *, bool);
// class XGRAPHICS::VerNode * XGRAPHICS::BigEDDCHelper(class XGRAPHICS::VerNode *, class XGRAPHICS::VerOp const *, int, bool);
// class XGRAPHICS::VerNode * XGRAPHICS::BasicEDDCHelper(class XGRAPHICS::VerNode *, class XGRAPHICS::VerOp const *, int, bool);
// unsigned long XGRAPHICS::ChangeChunkRemoveXFromCndeParam1(class XGRAPHICS::VerNode *, void *, unsigned long, unsigned long, class XGRAPHICS::VerNode **);
// bool XGRAPHICS::OptimizePredPush(class XGRAPHICS::VerNode *);
// bool XGRAPHICS::OptimizePredPop(class XGRAPHICS::VerNode *);
// bool XGRAPHICS::OptimizePredInv(class XGRAPHICS::VerNode *);
// bool XGRAPHICS::OptimizeTFetchCR500(class XGRAPHICS::VerNode *);
// bool XGRAPHICS::IsPointlessInloop(class XGRAPHICS::VerNode *, class XGRAPHICS::VerNode *);
// bool XGRAPHICS::OptimizeInLoop(class XGRAPHICS::VerNode *);
// bool XGRAPHICS::OptimizeR500Pred(class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::EliminateDuplicateDependentCnds(class XGRAPHICS::VerNode *, void *);
// class XGRAPHICS::VerNode * XGRAPHICS::TrunkProp(class XGRAPHICS::VerNode *, bool);
// bool XGRAPHICS::OptimizeRound(class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::OptimizeMinMax(class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::OptimizeAssociativity(class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::OptimizeCnd(class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::OptimizeNodes(class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::OptimizationLevel3(class XGRAPHICS::VerNode *, void *);
// class XGRAPHICS::VerNode * XGRAPHICS::ChangeChunkHelper(class XGRAPHICS::VerNode *, unsigned long (*)(class XGRAPHICS::VerNode *, void *, unsigned long, unsigned long, class XGRAPHICS::VerNode **), void *, unsigned long, unsigned long);
// bool XGRAPHICS::ChangeChunkOfNodes(class XGRAPHICS::VerNode *, unsigned long (*)(class XGRAPHICS::VerNode *, void *, unsigned long, unsigned long, class XGRAPHICS::VerNode **), void *, unsigned long, unsigned long);
// bool XGRAPHICS::MoveCndsToTrunk_PlanB(class XGRAPHICS::VerTable *);
// bool XGRAPHICS::PropagateThroughCnd(class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::RearrangeCnds(class XGRAPHICS::VerNode *, int);
// bool XGRAPHICS::SortDependentCnds(class XGRAPHICS::VerNode *, void *);
// unsigned long XGRAPHICS::ChangeChunkRemoveAbsFromCndgtParam(class XGRAPHICS::VerNode *, void *, unsigned long, unsigned long, class XGRAPHICS::VerNode **);
// bool XGRAPHICS::OptimizeVeropValidOnly(class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::OptimizeVeropOther(class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::ValidationOptimizations(class XGRAPHICS::VerNode *, void *);
// bool XGRAPHICS::OptimizationLevel4(class XGRAPHICS::VerNode *, void *);

//int XGRAPHICS::GetArrayIndex(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?GetArrayIndex@XGRAPHICS@@YAHPAVVerNode@1@@Z");
//};

//bool XGRAPHICS::OptimizeOr(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?OptimizeOr@XGRAPHICS@@YA_NPAVVerNode@1@@Z");
//};

//int XGRAPHICS::CheckRangeAgainstCnd(unsigned char, double, double)
//{
//    mangled_ppc("?CheckRangeAgainstCnd@XGRAPHICS@@YAHENN@Z");
//};

//bool XGRAPHICS::RemoveNearBuddyListsAsVerNode(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?RemoveNearBuddyListsAsVerNode@XGRAPHICS@@YA_NPAVVerNode@1@@Z");
//};

//unsigned long XGRAPHICS::ChangeChunkVeropBadFVO(class XGRAPHICS::VerNode *, void *, unsigned long, unsigned long, class XGRAPHICS::VerNode **)
//{
//    mangled_ppc("?ChangeChunkVeropBadFVO@XGRAPHICS@@YAKPAVVerNode@1@PAXKKPAPAV21@@Z");
//};

//unsigned long XGRAPHICS::ChangeChunkVeropOther(class XGRAPHICS::VerNode *, void *, unsigned long, unsigned long, class XGRAPHICS::VerNode **)
//{
//    mangled_ppc("?ChangeChunkVeropOther@XGRAPHICS@@YAKPAVVerNode@1@PAXKKPAPAV21@@Z");
//};

//void XGRAPHICS::CleanupAfterChangeChunk(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?CleanupAfterChangeChunk@XGRAPHICS@@YAXPAVVerNode@1@@Z");
//};

//bool XGRAPHICS::PropagatableChangeChunkCleanup(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?PropagatableChangeChunkCleanup@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//double XGRAPHICS::sign(double)
//{
//    mangled_ppc("?sign@XGRAPHICS@@YANN@Z");
//};

//bool XGRAPHICS::CndHasOneZero(class XGRAPHICS::VerOp *)
//{
//    mangled_ppc("?CndHasOneZero@XGRAPHICS@@YA_NPAVVerOp@1@@Z");
//};

//bool XGRAPHICS::OpIsCndOneZero(class XGRAPHICS::VerOp *)
//{
//    mangled_ppc("?OpIsCndOneZero@XGRAPHICS@@YA_NPAVVerOp@1@@Z");
//};

//frac
//{
//    mangled_ppc("frac");
//};

//void XGRAPHICS::Negate(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?Negate@XGRAPHICS@@YAXPAVVerNode@1@@Z");
//};

//int XGRAPHICS::CompareNumericForSort2(class XGRAPHICS::VerNode *, class XGRAPHICS::VerNode *, bool)
//{
//    mangled_ppc("?CompareNumericForSort2@XGRAPHICS@@YAHPAVVerNode@1@0_N@Z");
//};

//int XGRAPHICS::CompareNumericForSort(void const *, void const *)
//{
//    mangled_ppc("?CompareNumericForSort@XGRAPHICS@@YAHPBX0@Z");
//};

//int XGRAPHICS::CompareNumericForSortNoMerge(void const *, void const *)
//{
//    mangled_ppc("?CompareNumericForSortNoMerge@XGRAPHICS@@YAHPBX0@Z");
//};

//bool XGRAPHICS::OptimizeAssociativityCommutitivity(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?OptimizeAssociativityCommutitivity@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//bool XGRAPHICS::OptimizeAssociativityMergeVals(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?OptimizeAssociativityMergeVals@XGRAPHICS@@YA_NPAVVerNode@1@@Z");
//};

//bool XGRAPHICS::OptimizeAdd(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?OptimizeAdd@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//bool XGRAPHICS::FixmbHasNoCNDs(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?FixmbHasNoCNDs@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//bool XGRAPHICS::OptimizeMul(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?OptimizeMul@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//bool XGRAPHICS::OptimizeAssociativityForCnds(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?OptimizeAssociativityForCnds@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//bool XGRAPHICS::OptimizeOldbeAbs(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?OptimizeOldbeAbs@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//void XGRAPHICS::GetRange(class XGRAPHICS::VerNode *, double *, double *, bool)
//{
//    mangled_ppc("?GetRange@XGRAPHICS@@YAXPAVVerNode@1@PAN1_N@Z");
//};

//class XGRAPHICS::VerNode * XGRAPHICS::BigEDDCHelper(class XGRAPHICS::VerNode *, class XGRAPHICS::VerOp const *, int, bool)
//{
//    mangled_ppc("?BigEDDCHelper@XGRAPHICS@@YAPAVVerNode@1@PAV21@PBVVerOp@1@H_N@Z");
//};

//class XGRAPHICS::VerNode * XGRAPHICS::BasicEDDCHelper(class XGRAPHICS::VerNode *, class XGRAPHICS::VerOp const *, int, bool)
//{
//    mangled_ppc("?BasicEDDCHelper@XGRAPHICS@@YAPAVVerNode@1@PAV21@PBVVerOp@1@H_N@Z");
//};

//unsigned long XGRAPHICS::ChangeChunkRemoveXFromCndeParam1(class XGRAPHICS::VerNode *, void *, unsigned long, unsigned long, class XGRAPHICS::VerNode **)
//{
//    mangled_ppc("?ChangeChunkRemoveXFromCndeParam1@XGRAPHICS@@YAKPAVVerNode@1@PAXKKPAPAV21@@Z");
//};

//bool XGRAPHICS::OptimizePredPush(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?OptimizePredPush@XGRAPHICS@@YA_NPAVVerNode@1@@Z");
//};

//bool XGRAPHICS::OptimizePredPop(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?OptimizePredPop@XGRAPHICS@@YA_NPAVVerNode@1@@Z");
//};

//bool XGRAPHICS::OptimizePredInv(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?OptimizePredInv@XGRAPHICS@@YA_NPAVVerNode@1@@Z");
//};

//bool XGRAPHICS::OptimizeTFetchCR500(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?OptimizeTFetchCR500@XGRAPHICS@@YA_NPAVVerNode@1@@Z");
//};

//bool XGRAPHICS::IsPointlessInloop(class XGRAPHICS::VerNode *, class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?IsPointlessInloop@XGRAPHICS@@YA_NPAVVerNode@1@0@Z");
//};

//bool XGRAPHICS::OptimizeInLoop(class XGRAPHICS::VerNode *)
//{
//    mangled_ppc("?OptimizeInLoop@XGRAPHICS@@YA_NPAVVerNode@1@@Z");
//};

//bool XGRAPHICS::OptimizeR500Pred(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?OptimizeR500Pred@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//bool XGRAPHICS::EliminateDuplicateDependentCnds(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?EliminateDuplicateDependentCnds@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//class XGRAPHICS::VerNode * XGRAPHICS::TrunkProp(class XGRAPHICS::VerNode *, bool)
//{
//    mangled_ppc("?TrunkProp@XGRAPHICS@@YAPAVVerNode@1@PAV21@_N@Z");
//};

//bool XGRAPHICS::OptimizeRound(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?OptimizeRound@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//bool XGRAPHICS::OptimizeMinMax(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?OptimizeMinMax@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//bool XGRAPHICS::OptimizeAssociativity(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?OptimizeAssociativity@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//bool XGRAPHICS::OptimizeCnd(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?OptimizeCnd@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//bool XGRAPHICS::OptimizeNodes(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?OptimizeNodes@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//bool XGRAPHICS::OptimizationLevel3(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?OptimizationLevel3@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//class XGRAPHICS::VerNode * XGRAPHICS::ChangeChunkHelper(class XGRAPHICS::VerNode *, unsigned long (*)(class XGRAPHICS::VerNode *, void *, unsigned long, unsigned long, class XGRAPHICS::VerNode **), void *, unsigned long, unsigned long)
//{
//    mangled_ppc("?ChangeChunkHelper@XGRAPHICS@@YAPAVVerNode@1@PAV21@P6AK0PAXKKPAPAV21@@Z1KK@Z");
//};

//bool XGRAPHICS::ChangeChunkOfNodes(class XGRAPHICS::VerNode *, unsigned long (*)(class XGRAPHICS::VerNode *, void *, unsigned long, unsigned long, class XGRAPHICS::VerNode **), void *, unsigned long, unsigned long)
//{
//    mangled_ppc("?ChangeChunkOfNodes@XGRAPHICS@@YA_NPAVVerNode@1@P6AK0PAXKKPAPAV21@@Z1KK@Z");
//};

//bool XGRAPHICS::MoveCndsToTrunk_PlanB(class XGRAPHICS::VerTable *)
//{
//    mangled_ppc("?MoveCndsToTrunk_PlanB@XGRAPHICS@@YA_NPAVVerTable@1@@Z");
//};

//bool XGRAPHICS::PropagateThroughCnd(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?PropagateThroughCnd@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//bool XGRAPHICS::RearrangeCnds(class XGRAPHICS::VerNode *, int)
//{
//    mangled_ppc("?RearrangeCnds@XGRAPHICS@@YA_NPAVVerNode@1@H@Z");
//};

//bool XGRAPHICS::SortDependentCnds(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?SortDependentCnds@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//unsigned long XGRAPHICS::ChangeChunkRemoveAbsFromCndgtParam(class XGRAPHICS::VerNode *, void *, unsigned long, unsigned long, class XGRAPHICS::VerNode **)
//{
//    mangled_ppc("?ChangeChunkRemoveAbsFromCndgtParam@XGRAPHICS@@YAKPAVVerNode@1@PAXKKPAPAV21@@Z");
//};

//bool XGRAPHICS::OptimizeVeropValidOnly(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?OptimizeVeropValidOnly@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//bool XGRAPHICS::OptimizeVeropOther(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?OptimizeVeropOther@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//bool XGRAPHICS::ValidationOptimizations(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?ValidationOptimizations@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

//bool XGRAPHICS::OptimizationLevel4(class XGRAPHICS::VerNode *, void *)
//{
//    mangled_ppc("?OptimizationLevel4@XGRAPHICS@@YA_NPAVVerNode@1@PAX@Z");
//};

