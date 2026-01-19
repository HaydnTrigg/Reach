/* ---------- headers */

#include "havok\hkinternal\hkKdTreeUtils.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// __vmx@7f7fffee7f7fffee7f7fffee7f7fffee; // "__vmx@7f7fffee7f7fffee7f7fffee7f7fffee"
// __vmx@ff7fffeeff7fffeeff7fffeeff7fffee; // "__vmx@ff7fffeeff7fffeeff7fffeeff7fffee"
// __vmx@37800080378000803780008037800080; // "__vmx@37800080378000803780008037800080"

// public: static void hkKdTreeUtils::castRayRecursive(class hkKdTree const *, class hkVector4const &, class hkVector4const &, float, float, float, class hkKdTreeCastCollector *);
// private: static void hkKdTreeUtils::_castRayRecursive(class hkKdTreeNode const *, class hkKdTreeNode const *, struct hkKdTreeProjectedEntry const *, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, float, float, float, class hkKdTreeCastCollector *);
// struct __vector4 hkGetOneOver65K(void);
// public: static class hkBool hkKdTreeUtils::castRayIterative(class hkKdTree const *, class hkVector4const &, class hkVector4const &, class hkKdTreeCastCollector *);
// public: static class hkBool hkKdTreeUtils::isValidRayBundle(struct hkKdTreeUtils::RayBundle const &, struct hkKdTreeUtils::RayBundle const &, enum hkVector4Comparison::Mask);
// public: static class hkBool hkKdTreeUtils::isValidRayBundle(class hkVector4const *, class hkVector4const *, enum hkVector4Comparison::Mask);
// public: static class hkBool hkKdTreeUtils::castRayBundleIterative(class hkKdTree const *, struct hkKdTreeUtils::RayBundle const &, struct hkKdTreeUtils::RayBundle const &, class hkKdTreeBundleCastCollector *, enum hkVector4Comparison::Mask);
// public: static class hkBool hkKdTreeUtils::castRayMultiTree(int, class hkKdTree *const *, class hkVector4const &, class hkVector4const &, class hkKdTreeCastCollector *);
// public: class hkKdTreeNode const * hkKdTree::getRoot(void) const;
// public: class hkAabb const & hkKdTree::getAabb(void) const;
// public: struct hkKdTreeProjectedEntry const * hkKdTree::getProjectedEntries(void) const;
// float hkConvertSplitTypeToReal(unsigned short, float, float);
// public: int hkKdTreeNode::getSplitAxis(void) const;
// public: unsigned short hkKdTreeNode::getSplitMin(void) const;
// public: unsigned short hkKdTreeNode::getSplitMax(void) const;
// public: unsigned int hkKdTreeNode::getNumPrimitivesInLeaf(void) const;
// public: int hkKdTreeNode::isLeaf32(void) const;
// public: int hkKdTreeNode::isEmptyLeaf32(void) const;
// public: class hkBool hkKdTreeNode::isLeaf(void) const;
// class hkKdTreeNode const * hkGetNodeFromMainMemory(class hkKdTreeNode const *, class hkBool);
// class hkKdTreeNode const * hkGetLeftMainMemoryAddr(class hkKdTreeNode const &, class hkKdTreeNode const *);
// public: class hkKdTreeNode * hkKdTreeNode::getLeft(void) const;
// class hkKdTreeNode const * hkGetRightMainMemoryAddr(class hkKdTreeNode const &, class hkKdTreeNode const *);
// public: class hkKdTreeNode * hkKdTreeNode::getRight(void) const;
// struct hkKdTreeProjectedEntry const * hkGetProjectedEntry(class hkKdTreeNode const &, struct hkKdTreeProjectedEntry const *, int);
// public: unsigned long hkKdTreeNode::getPrimitiveId(void) const;
// public: static int hkKdTreeMath::isComponentEqZero(class hkVector4const &, int);
// public: static int hkKdTreeMath::isComponentGtZero(class hkVector4const &, int);
// public: static int hkKdTreeMath::rayAabbCheck(class hkVector4const &, class hkVector4const &, float, float, class hkAabb const &);
// public: static void hkKdTreeMath::vectorBroadcastMin3(class hkVector4&, class hkVector4Comparison const &);
// public: static void hkKdTreeMath::vectorBroadcastMax3(class hkVector4&, class hkVector4Comparison const &);
// public: static void hkKdTreeMath::getAabbFromProjectedEntry(struct hkKdTreeProjectedEntry const *, class hkAabb &, class hkVector4const &, class hkVector4const &);
// public: static void hkKdTreeMath::convertProjectedEntryToHkVector4(struct hkKdTreeProjectedEntry const *, class hkVector4&, class hkVector4&);
// public: void hkIntVector::setZero(void);
// public: void hkIntVector::setMergeHigh16(class hkIntVector, class hkIntVector);
// public: void hkIntVector::setMergeLow16(class hkIntVector, class hkIntVector);
// public: void hkIntVector::convertToF32fromU32(class hkVector4&) const;
// public: void hkVector4Comparison::setSelect(class hkVector4Comparison const &, class hkVector4Comparison const &, class hkVector4Comparison const &);
// public: void hkKdTreeUtils::NodeState::set(class hkKdTreeNode const *, float, float);
// public: void hkKdTreeUtils::BundleState::set(class hkKdTreeNode const *, class hkVector4const &, class hkVector4const &, class hkVector4Comparison &);
// public: static class hkVector4Comparison hkKdTreeMath::rayBundleAabbCheck(struct hkKdTreeUtils::RayBundle const &, struct hkKdTreeUtils::RayBundle const &, class hkVector4const &, class hkVector4const &, class hkVector4const *);
// public: static void hkKdTreeMath::getAabbVecsFromProjectedEntry(struct hkKdTreeProjectedEntry const *, unsigned int *, class hkVector4&, class hkVector4const &, class hkVector4&);
// public: void hkPadSpu<class hkKdTreeNode const *>::operator=(class hkKdTreeNode const *);
// public: class hkKdTreeNode const * hkPadSpu<class hkKdTreeNode const *>::operator class hkKdTreeNode const *(void) const;
// public: class hkKdTreeNode const * hkPadSpu<class hkKdTreeNode const *>::val(void) const;
// public: class hkKdTreeNode const * hkArrayBase<class hkKdTreeNode>::begin(void) const;
// public: struct hkKdTreeProjectedEntry const * hkArrayBase<struct hkKdTreeProjectedEntry>::begin(void) const;
// struct hkKdTreeUtils::NodeState * hkAllocateStack<struct hkKdTreeUtils::NodeState>(int, char const *);
// void hkDeallocateStack<struct hkKdTreeUtils::NodeState>(struct hkKdTreeUtils::NodeState *);
// struct hkKdTreeUtils::BundleState * hkAllocateStack<struct hkKdTreeUtils::BundleState>(int, char const *);
// void hkDeallocateStack<struct hkKdTreeUtils::BundleState>(struct hkKdTreeUtils::BundleState *);

//public: static void hkKdTreeUtils::castRayRecursive(class hkKdTree const *, class hkVector4const &, class hkVector4const &, float, float, float, class hkKdTreeCastCollector *)
//{
//    mangled_ppc("?castRayRecursive@hkKdTreeUtils@@SAXPBVhkKdTree@@ABVhkVector4@@1MMMPAVhkKdTreeCastCollector@@@Z");
//};

//private: static void hkKdTreeUtils::_castRayRecursive(class hkKdTreeNode const *, class hkKdTreeNode const *, struct hkKdTreeProjectedEntry const *, class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &, float, float, float, class hkKdTreeCastCollector *)
//{
//    mangled_ppc("?_castRayRecursive@hkKdTreeUtils@@CAXPBVhkKdTreeNode@@0PBUhkKdTreeProjectedEntry@@ABVhkVector4@@222MMMPAVhkKdTreeCastCollector@@@Z");
//};

//struct __vector4 hkGetOneOver65K(void)
//{
//    mangled_ppc("?hkGetOneOver65K@@YA?AU__vector4@@XZ");
//};

//public: static class hkBool hkKdTreeUtils::castRayIterative(class hkKdTree const *, class hkVector4const &, class hkVector4const &, class hkKdTreeCastCollector *)
//{
//    mangled_ppc("?castRayIterative@hkKdTreeUtils@@SA?AVhkBool@@PBVhkKdTree@@ABVhkVector4@@1PAVhkKdTreeCastCollector@@@Z");
//};

//public: static class hkBool hkKdTreeUtils::isValidRayBundle(struct hkKdTreeUtils::RayBundle const &, struct hkKdTreeUtils::RayBundle const &, enum hkVector4Comparison::Mask)
//{
//    mangled_ppc("?isValidRayBundle@hkKdTreeUtils@@SA?AVhkBool@@ABURayBundle@1@0W4Mask@hkVector4Comparison@@@Z");
//};

//public: static class hkBool hkKdTreeUtils::isValidRayBundle(class hkVector4const *, class hkVector4const *, enum hkVector4Comparison::Mask)
//{
//    mangled_ppc("?isValidRayBundle@hkKdTreeUtils@@SA?AVhkBool@@PBVhkVector4@@0W4Mask@hkVector4Comparison@@@Z");
//};

//public: static class hkBool hkKdTreeUtils::castRayBundleIterative(class hkKdTree const *, struct hkKdTreeUtils::RayBundle const &, struct hkKdTreeUtils::RayBundle const &, class hkKdTreeBundleCastCollector *, enum hkVector4Comparison::Mask)
//{
//    mangled_ppc("?castRayBundleIterative@hkKdTreeUtils@@SA?AVhkBool@@PBVhkKdTree@@ABURayBundle@1@1PAVhkKdTreeBundleCastCollector@@W4Mask@hkVector4Comparison@@@Z");
//};

//public: static class hkBool hkKdTreeUtils::castRayMultiTree(int, class hkKdTree *const *, class hkVector4const &, class hkVector4const &, class hkKdTreeCastCollector *)
//{
//    mangled_ppc("?castRayMultiTree@hkKdTreeUtils@@SA?AVhkBool@@HPBQAVhkKdTree@@ABVhkVector4@@1PAVhkKdTreeCastCollector@@@Z");
//};

//public: class hkKdTreeNode const * hkKdTree::getRoot(void) const
//{
//    mangled_ppc("?getRoot@hkKdTree@@QBAPBVhkKdTreeNode@@XZ");
//};

//public: class hkAabb const & hkKdTree::getAabb(void) const
//{
//    mangled_ppc("?getAabb@hkKdTree@@QBAABVhkAabb@@XZ");
//};

//public: struct hkKdTreeProjectedEntry const * hkKdTree::getProjectedEntries(void) const
//{
//    mangled_ppc("?getProjectedEntries@hkKdTree@@QBAPBUhkKdTreeProjectedEntry@@XZ");
//};

//float hkConvertSplitTypeToReal(unsigned short, float, float)
//{
//    mangled_ppc("?hkConvertSplitTypeToReal@@YAMGMM@Z");
//};

//public: int hkKdTreeNode::getSplitAxis(void) const
//{
//    mangled_ppc("?getSplitAxis@hkKdTreeNode@@QBAHXZ");
//};

//public: unsigned short hkKdTreeNode::getSplitMin(void) const
//{
//    mangled_ppc("?getSplitMin@hkKdTreeNode@@QBAGXZ");
//};

//public: unsigned short hkKdTreeNode::getSplitMax(void) const
//{
//    mangled_ppc("?getSplitMax@hkKdTreeNode@@QBAGXZ");
//};

//public: unsigned int hkKdTreeNode::getNumPrimitivesInLeaf(void) const
//{
//    mangled_ppc("?getNumPrimitivesInLeaf@hkKdTreeNode@@QBAIXZ");
//};

//public: int hkKdTreeNode::isLeaf32(void) const
//{
//    mangled_ppc("?isLeaf32@hkKdTreeNode@@QBAHXZ");
//};

//public: int hkKdTreeNode::isEmptyLeaf32(void) const
//{
//    mangled_ppc("?isEmptyLeaf32@hkKdTreeNode@@QBAHXZ");
//};

//public: class hkBool hkKdTreeNode::isLeaf(void) const
//{
//    mangled_ppc("?isLeaf@hkKdTreeNode@@QBA?AVhkBool@@XZ");
//};

//class hkKdTreeNode const * hkGetNodeFromMainMemory(class hkKdTreeNode const *, class hkBool)
//{
//    mangled_ppc("?hkGetNodeFromMainMemory@@YAPBVhkKdTreeNode@@PBV1@VhkBool@@@Z");
//};

//class hkKdTreeNode const * hkGetLeftMainMemoryAddr(class hkKdTreeNode const &, class hkKdTreeNode const *)
//{
//    mangled_ppc("?hkGetLeftMainMemoryAddr@@YAPBVhkKdTreeNode@@ABV1@PBV1@@Z");
//};

//public: class hkKdTreeNode * hkKdTreeNode::getLeft(void) const
//{
//    mangled_ppc("?getLeft@hkKdTreeNode@@QBAPAV1@XZ");
//};

//class hkKdTreeNode const * hkGetRightMainMemoryAddr(class hkKdTreeNode const &, class hkKdTreeNode const *)
//{
//    mangled_ppc("?hkGetRightMainMemoryAddr@@YAPBVhkKdTreeNode@@ABV1@PBV1@@Z");
//};

//public: class hkKdTreeNode * hkKdTreeNode::getRight(void) const
//{
//    mangled_ppc("?getRight@hkKdTreeNode@@QBAPAV1@XZ");
//};

//struct hkKdTreeProjectedEntry const * hkGetProjectedEntry(class hkKdTreeNode const &, struct hkKdTreeProjectedEntry const *, int)
//{
//    mangled_ppc("?hkGetProjectedEntry@@YAPBUhkKdTreeProjectedEntry@@ABVhkKdTreeNode@@PBU1@H@Z");
//};

//public: unsigned long hkKdTreeNode::getPrimitiveId(void) const
//{
//    mangled_ppc("?getPrimitiveId@hkKdTreeNode@@QBAKXZ");
//};

//public: static int hkKdTreeMath::isComponentEqZero(class hkVector4const &, int)
//{
//    mangled_ppc("?isComponentEqZero@hkKdTreeMath@@SAHABVhkVector4@@H@Z");
//};

//public: static int hkKdTreeMath::isComponentGtZero(class hkVector4const &, int)
//{
//    mangled_ppc("?isComponentGtZero@hkKdTreeMath@@SAHABVhkVector4@@H@Z");
//};

//public: static int hkKdTreeMath::rayAabbCheck(class hkVector4const &, class hkVector4const &, float, float, class hkAabb const &)
//{
//    mangled_ppc("?rayAabbCheck@hkKdTreeMath@@SAHABVhkVector4@@0MMABVhkAabb@@@Z");
//};

//public: static void hkKdTreeMath::vectorBroadcastMin3(class hkVector4&, class hkVector4Comparison const &)
//{
//    mangled_ppc("?vectorBroadcastMin3@hkKdTreeMath@@SAXAAVhkVector4@@ABVhkVector4Comparison@@@Z");
//};

//public: static void hkKdTreeMath::vectorBroadcastMax3(class hkVector4&, class hkVector4Comparison const &)
//{
//    mangled_ppc("?vectorBroadcastMax3@hkKdTreeMath@@SAXAAVhkVector4@@ABVhkVector4Comparison@@@Z");
//};

//public: static void hkKdTreeMath::getAabbFromProjectedEntry(struct hkKdTreeProjectedEntry const *, class hkAabb &, class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?getAabbFromProjectedEntry@hkKdTreeMath@@SAXPBUhkKdTreeProjectedEntry@@AAVhkAabb@@ABVhkVector4@@2@Z");
//};

//public: static void hkKdTreeMath::convertProjectedEntryToHkVector4(struct hkKdTreeProjectedEntry const *, class hkVector4&, class hkVector4&)
//{
//    mangled_ppc("?convertProjectedEntryToHkVector4@hkKdTreeMath@@SAXPBUhkKdTreeProjectedEntry@@AAVhkVector4@@1@Z");
//};

//public: void hkIntVector::setZero(void)
//{
//    mangled_ppc("?setZero@hkIntVector@@QAAXXZ");
//};

//public: void hkIntVector::setMergeHigh16(class hkIntVector, class hkIntVector)
//{
//    mangled_ppc("?setMergeHigh16@hkIntVector@@QAAXV1@0@Z");
//};

//public: void hkIntVector::setMergeLow16(class hkIntVector, class hkIntVector)
//{
//    mangled_ppc("?setMergeLow16@hkIntVector@@QAAXV1@0@Z");
//};

//public: void hkIntVector::convertToF32fromU32(class hkVector4&) const
//{
//    mangled_ppc("?convertToF32fromU32@hkIntVector@@QBAXAAVhkVector4@@@Z");
//};

//public: void hkVector4Comparison::setSelect(class hkVector4Comparison const &, class hkVector4Comparison const &, class hkVector4Comparison const &)
//{
//    mangled_ppc("?setSelect@hkVector4Comparison@@QAAXABV1@00@Z");
//};

//public: void hkKdTreeUtils::NodeState::set(class hkKdTreeNode const *, float, float)
//{
//    mangled_ppc("?set@NodeState@hkKdTreeUtils@@QAAXPBVhkKdTreeNode@@MM@Z");
//};

//public: void hkKdTreeUtils::BundleState::set(class hkKdTreeNode const *, class hkVector4const &, class hkVector4const &, class hkVector4Comparison &)
//{
//    mangled_ppc("?set@BundleState@hkKdTreeUtils@@QAAXPBVhkKdTreeNode@@ABVhkVector4@@1AAVhkVector4Comparison@@@Z");
//};

//public: static class hkVector4Comparison hkKdTreeMath::rayBundleAabbCheck(struct hkKdTreeUtils::RayBundle const &, struct hkKdTreeUtils::RayBundle const &, class hkVector4const &, class hkVector4const &, class hkVector4const *)
//{
//    mangled_ppc("?rayBundleAabbCheck@hkKdTreeMath@@SA?AVhkVector4Comparison@@ABURayBundle@hkKdTreeUtils@@0ABVhkVector4@@1PBV5@@Z");
//};

//public: static void hkKdTreeMath::getAabbVecsFromProjectedEntry(struct hkKdTreeProjectedEntry const *, unsigned int *, class hkVector4&, class hkVector4const &, class hkVector4&)
//{
//    mangled_ppc("?getAabbVecsFromProjectedEntry@hkKdTreeMath@@SAXPBUhkKdTreeProjectedEntry@@PIAVhkVector4@@ABV3@2@Z");
//};

//public: void hkPadSpu<class hkKdTreeNode const *>::operator=(class hkKdTreeNode const *)
//{
//    mangled_ppc("??4?$hkPadSpu@PBVhkKdTreeNode@@@@QAAXPBVhkKdTreeNode@@@Z");
//};

//public: class hkKdTreeNode const * hkPadSpu<class hkKdTreeNode const *>::operator class hkKdTreeNode const *(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PBVhkKdTreeNode@@@@QBAPBVhkKdTreeNode@@XZ");
//};

//public: class hkKdTreeNode const * hkPadSpu<class hkKdTreeNode const *>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PBVhkKdTreeNode@@@@QBAPBVhkKdTreeNode@@XZ");
//};

//public: class hkKdTreeNode const * hkArrayBase<class hkKdTreeNode>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@VhkKdTreeNode@@@@QBAPBVhkKdTreeNode@@XZ");
//};

//public: struct hkKdTreeProjectedEntry const * hkArrayBase<struct hkKdTreeProjectedEntry>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UhkKdTreeProjectedEntry@@@@QBAPBUhkKdTreeProjectedEntry@@XZ");
//};

//struct hkKdTreeUtils::NodeState * hkAllocateStack<struct hkKdTreeUtils::NodeState>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@UNodeState@hkKdTreeUtils@@@@YAPAUNodeState@hkKdTreeUtils@@HPBD@Z");
//};

//void hkDeallocateStack<struct hkKdTreeUtils::NodeState>(struct hkKdTreeUtils::NodeState *)
//{
//    mangled_ppc("??$hkDeallocateStack@UNodeState@hkKdTreeUtils@@@@YAXPAUNodeState@hkKdTreeUtils@@@Z");
//};

//struct hkKdTreeUtils::BundleState * hkAllocateStack<struct hkKdTreeUtils::BundleState>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@UBundleState@hkKdTreeUtils@@@@YAPAUBundleState@hkKdTreeUtils@@HPBD@Z");
//};

//void hkDeallocateStack<struct hkKdTreeUtils::BundleState>(struct hkKdTreeUtils::BundleState *)
//{
//    mangled_ppc("??$hkDeallocateStack@UBundleState@hkKdTreeUtils@@@@YAXPAUBundleState@hkKdTreeUtils@@@Z");
//};

