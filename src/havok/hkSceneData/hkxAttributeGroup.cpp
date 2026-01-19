/* ---------- headers */

#include "havok\hkSceneData\hkxAttributeGroup.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: struct hkxAttributeGroup & hkxAttributeGroup::operator=(struct hkxAttributeGroup const &);
// public: enum hkResult hkxAttributeGroup::getBoolValue(char const *, bool, class hkBool &) const;
// public: enum hkResult hkxAttributeGroup::getIntValue(char const *, bool, int &) const;
// public: enum hkResult hkxAttributeGroup::getIntValue(char const *, bool, unsigned int &) const;
// public: enum hkResult hkxAttributeGroup::getStringValue(char const *, bool, char const *&) const;
// public: enum hkResult hkxAttributeGroup::getFloatValue(char const *, bool, float &) const;
// public: enum hkResult hkxAttributeGroup::getVectorValue(char const *, bool, class hkVector4&) const;
// public: enum hkResult hkxAttributeGroup::getQuaternionValue(char const *, bool, class hkQuaternion &) const;
// public: enum hkResult hkxAttributeGroup::getMatrixValue(char const *, bool, class hkMatrix4&) const;
// public: int hkxAttributeGroup::findAttributeIndexByName(char const *) const;
// public: class hkRefVariant hkxAttributeGroup::findAttributeVariantByName(char const *) const;
// public: class hkReferencedObject * hkxAttributeGroup::findAttributeObjectByName(char const *, class hkClass const *) const;
// public: class hkxSparselyAnimatedBool * hkxAttributeGroup::findBoolAttributeByName(char const *) const;
// public: class hkxSparselyAnimatedInt * hkxAttributeGroup::findIntAttributeByName(char const *) const;
// public: class hkxSparselyAnimatedEnum * hkxAttributeGroup::findEnumAttributeByName(char const *) const;
// public: class hkxSparselyAnimatedString * hkxAttributeGroup::findStringAttributeByName(char const *) const;
// public: class hkxAnimatedFloat * hkxAttributeGroup::findFloatAttributeByName(char const *) const;
// public: class hkxAnimatedVector * hkxAttributeGroup::findVectorAttributeByName(char const *) const;
// public: class hkxAnimatedQuaternion * hkxAttributeGroup::findQuaternionAttributeByName(char const *) const;
// public: class hkxAnimatedMatrix * hkxAttributeGroup::findMatrixAttributeByName(char const *) const;
// public: void hkArray<struct hkxAttribute, struct hkContainerHeapAllocator>::setSize(int);
// public: void hkArray<struct hkxAttribute, struct hkContainerHeapAllocator>::insertAt(int, struct hkxAttribute const *, int);
// public: class hkxEnum * hkRefPtr<class hkxEnum>::operator->(void) const;
// public: class hkQuaternion & hkArrayBase<class hkQuaternion>::operator[](int);
// public: class hkMatrix4& hkArrayBase<class hkMatrix4>::operator[](int);
// public: struct hkxAttribute const & hkArrayBase<struct hkxAttribute>::operator[](int) const;
// public: int hkArrayBase<struct hkxAttribute>::getSize(void) const;
// public: void hkArrayBase<struct hkxAttribute>::_setSize(class hkMemoryAllocator &, int);
// public: void hkArrayBase<struct hkxAttribute>::_insertAt(class hkMemoryAllocator &, int, struct hkxAttribute const *, int);
// public: struct hkxAttribute const * hkArrayBase<struct hkxAttribute>::begin(void) const;
// public: void hkArrayBase<struct hkxAttribute>::_reserve(class hkMemoryAllocator &, int);
// public: void hkArrayBase<struct hkxAttribute>::_spliceInto(class hkMemoryAllocator &, int, int, struct hkxAttribute const *, int);
// public: static void hkArrayUtil::construct<struct hkxAttribute>(struct hkxAttribute *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::constructWithArray<struct hkxAttribute>(struct hkxAttribute *, int, struct hkxAttribute const *, struct hkTraitBool<0>);
// public: hkxAttribute::hkxAttribute(struct hkxAttribute const &);

//public: struct hkxAttributeGroup & hkxAttributeGroup::operator=(struct hkxAttributeGroup const &)
//{
//    mangled_ppc("??4hkxAttributeGroup@@QAAAAU0@ABU0@@Z");
//};

//public: enum hkResult hkxAttributeGroup::getBoolValue(char const *, bool, class hkBool &) const
//{
//    mangled_ppc("?getBoolValue@hkxAttributeGroup@@QBA?AW4hkResult@@PBD_NAAVhkBool@@@Z");
//};

//public: enum hkResult hkxAttributeGroup::getIntValue(char const *, bool, int &) const
//{
//    mangled_ppc("?getIntValue@hkxAttributeGroup@@QBA?AW4hkResult@@PBD_NAAH@Z");
//};

//public: enum hkResult hkxAttributeGroup::getIntValue(char const *, bool, unsigned int &) const
//{
//    mangled_ppc("?getIntValue@hkxAttributeGroup@@QBA?AW4hkResult@@PBD_NAAI@Z");
//};

//public: enum hkResult hkxAttributeGroup::getStringValue(char const *, bool, char const *&) const
//{
//    mangled_ppc("?getStringValue@hkxAttributeGroup@@QBA?AW4hkResult@@PBD_NAAPBD@Z");
//};

//public: enum hkResult hkxAttributeGroup::getFloatValue(char const *, bool, float &) const
//{
//    mangled_ppc("?getFloatValue@hkxAttributeGroup@@QBA?AW4hkResult@@PBD_NAAM@Z");
//};

//public: enum hkResult hkxAttributeGroup::getVectorValue(char const *, bool, class hkVector4&) const
//{
//    mangled_ppc("?getVectorValue@hkxAttributeGroup@@QBA?AW4hkResult@@PBD_NAAVhkVector4@@@Z");
//};

//public: enum hkResult hkxAttributeGroup::getQuaternionValue(char const *, bool, class hkQuaternion &) const
//{
//    mangled_ppc("?getQuaternionValue@hkxAttributeGroup@@QBA?AW4hkResult@@PBD_NAAVhkQuaternion@@@Z");
//};

//public: enum hkResult hkxAttributeGroup::getMatrixValue(char const *, bool, class hkMatrix4&) const
//{
//    mangled_ppc("?getMatrixValue@hkxAttributeGroup@@QBA?AW4hkResult@@PBD_NAAVhkMatrix4@@@Z");
//};

//public: int hkxAttributeGroup::findAttributeIndexByName(char const *) const
//{
//    mangled_ppc("?findAttributeIndexByName@hkxAttributeGroup@@QBAHPBD@Z");
//};

//public: class hkRefVariant hkxAttributeGroup::findAttributeVariantByName(char const *) const
//{
//    mangled_ppc("?findAttributeVariantByName@hkxAttributeGroup@@QBA?AVhkRefVariant@@PBD@Z");
//};

//public: class hkReferencedObject * hkxAttributeGroup::findAttributeObjectByName(char const *, class hkClass const *) const
//{
//    mangled_ppc("?findAttributeObjectByName@hkxAttributeGroup@@QBAPAVhkReferencedObject@@PBDPBVhkClass@@@Z");
//};

//public: class hkxSparselyAnimatedBool * hkxAttributeGroup::findBoolAttributeByName(char const *) const
//{
//    mangled_ppc("?findBoolAttributeByName@hkxAttributeGroup@@QBAPAVhkxSparselyAnimatedBool@@PBD@Z");
//};

//public: class hkxSparselyAnimatedInt * hkxAttributeGroup::findIntAttributeByName(char const *) const
//{
//    mangled_ppc("?findIntAttributeByName@hkxAttributeGroup@@QBAPAVhkxSparselyAnimatedInt@@PBD@Z");
//};

//public: class hkxSparselyAnimatedEnum * hkxAttributeGroup::findEnumAttributeByName(char const *) const
//{
//    mangled_ppc("?findEnumAttributeByName@hkxAttributeGroup@@QBAPAVhkxSparselyAnimatedEnum@@PBD@Z");
//};

//public: class hkxSparselyAnimatedString * hkxAttributeGroup::findStringAttributeByName(char const *) const
//{
//    mangled_ppc("?findStringAttributeByName@hkxAttributeGroup@@QBAPAVhkxSparselyAnimatedString@@PBD@Z");
//};

//public: class hkxAnimatedFloat * hkxAttributeGroup::findFloatAttributeByName(char const *) const
//{
//    mangled_ppc("?findFloatAttributeByName@hkxAttributeGroup@@QBAPAVhkxAnimatedFloat@@PBD@Z");
//};

//public: class hkxAnimatedVector * hkxAttributeGroup::findVectorAttributeByName(char const *) const
//{
//    mangled_ppc("?findVectorAttributeByName@hkxAttributeGroup@@QBAPAVhkxAnimatedVector@@PBD@Z");
//};

//public: class hkxAnimatedQuaternion * hkxAttributeGroup::findQuaternionAttributeByName(char const *) const
//{
//    mangled_ppc("?findQuaternionAttributeByName@hkxAttributeGroup@@QBAPAVhkxAnimatedQuaternion@@PBD@Z");
//};

//public: class hkxAnimatedMatrix * hkxAttributeGroup::findMatrixAttributeByName(char const *) const
//{
//    mangled_ppc("?findMatrixAttributeByName@hkxAttributeGroup@@QBAPAVhkxAnimatedMatrix@@PBD@Z");
//};

//public: void hkArray<struct hkxAttribute, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UhkxAttribute@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: void hkArray<struct hkxAttribute, struct hkContainerHeapAllocator>::insertAt(int, struct hkxAttribute const *, int)
//{
//    mangled_ppc("?insertAt@?$hkArray@UhkxAttribute@@UhkContainerHeapAllocator@@@@QAAXHPBUhkxAttribute@@H@Z");
//};

//public: class hkxEnum * hkRefPtr<class hkxEnum>::operator->(void) const
//{
//    mangled_ppc("??C?$hkRefPtr@VhkxEnum@@@@QBAPAVhkxEnum@@XZ");
//};

//public: class hkQuaternion & hkArrayBase<class hkQuaternion>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@VhkQuaternion@@@@QAAAAVhkQuaternion@@H@Z");
//};

//public: class hkMatrix4& hkArrayBase<class hkMatrix4>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@VhkMatrix4@@@@QAAAAVhkMatrix4@@H@Z");
//};

//public: struct hkxAttribute const & hkArrayBase<struct hkxAttribute>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UhkxAttribute@@@@QBAABUhkxAttribute@@H@Z");
//};

//public: int hkArrayBase<struct hkxAttribute>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UhkxAttribute@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkxAttribute>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UhkxAttribute@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArrayBase<struct hkxAttribute>::_insertAt(class hkMemoryAllocator &, int, struct hkxAttribute const *, int)
//{
//    mangled_ppc("?_insertAt@?$hkArrayBase@UhkxAttribute@@@@QAAXAAVhkMemoryAllocator@@HPBUhkxAttribute@@H@Z");
//};

//public: struct hkxAttribute const * hkArrayBase<struct hkxAttribute>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@UhkxAttribute@@@@QBAPBUhkxAttribute@@XZ");
//};

//public: void hkArrayBase<struct hkxAttribute>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UhkxAttribute@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: void hkArrayBase<struct hkxAttribute>::_spliceInto(class hkMemoryAllocator &, int, int, struct hkxAttribute const *, int)
//{
//    mangled_ppc("?_spliceInto@?$hkArrayBase@UhkxAttribute@@@@QAAXAAVhkMemoryAllocator@@HHPBUhkxAttribute@@H@Z");
//};

//public: static void hkArrayUtil::construct<struct hkxAttribute>(struct hkxAttribute *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkxAttribute@@@hkArrayUtil@@SAXPAUhkxAttribute@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::constructWithArray<struct hkxAttribute>(struct hkxAttribute *, int, struct hkxAttribute const *, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$constructWithArray@UhkxAttribute@@@hkArrayUtil@@SAXPAUhkxAttribute@@HPBU1@U?$hkTraitBool@$0A@@@@Z");
//};

//public: hkxAttribute::hkxAttribute(struct hkxAttribute const &)
//{
//    mangled_ppc("??0hkxAttribute@@QAA@ABU0@@Z");
//};

