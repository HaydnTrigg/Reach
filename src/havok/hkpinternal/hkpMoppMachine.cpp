/* ---------- headers */

#include "havok\hkpinternal\hkpMoppMachine.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// hkMoppEarlyExitObbVirtualMachine_queryObb;
// hkMoppFindAllVirtualMachine_getAllKeys;
// hkMoppObbVirtualMachine_queryObb;
// hkMoppObbVirtualMachine_queryAabb;
// hkMoppSphereVirtualMachine_querySphere;
// hkMoppUsingFloatAabbVirtualMachine_queryPlanes;
// hkMoppUsingFloatAabbVirtualMachine_queryPlanesOptimized;
// hkMoppUsingFloatAabbVirtualMachine_querySphere;
// hkMoppUsingFloatAabbVirtualMachine_querySphereOptimized;
// hkMoppModifyVirtualMachine_queryAabb;
// hkMoppKDopGeometriesVirtualMachine_query;
// public: hkpMoppEarlyExitObbVirtualMachine::hkpMoppEarlyExitObbVirtualMachine(void);
// public: hkpMoppEarlyExitObbVirtualMachine::~hkpMoppEarlyExitObbVirtualMachine(void);
// public: hkpMoppFindAllVirtualMachine::hkpMoppFindAllVirtualMachine(void);
// public: hkpMoppFindAllVirtualMachine::~hkpMoppFindAllVirtualMachine(void);
// public: void hkpMoppFindAllVirtualMachine::queryAll(class hkpMoppCode const *, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *);
// public: hkpMoppSphereVirtualMachine::hkpMoppSphereVirtualMachine(void);
// public: hkpMoppSphereVirtualMachine::~hkpMoppSphereVirtualMachine(void);
// public: hkpMoppModifyVirtualMachine::hkpMoppModifyVirtualMachine(void);
// public: hkpMoppModifyVirtualMachine::~hkpMoppModifyVirtualMachine(void);
// public: hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>::hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>(void);
// public: hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>::~hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>(void);
// public: void hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>::queryMopp(class hkpMoppCode const *, struct hkpMoppPlanesQueryInput const &, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *);
// protected: void hkpMoppVirtualMachine::initQuery(class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *);
// public: void hkMoppPlanesQueryObject::initializeQueryObject(struct hkpMoppPlanesQueryInput const &, class hkpMoppCode const *);
// public: hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>::hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>(void);
// public: hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>::~hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>(void);
// public: void hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>::queryMopp(class hkpMoppCode const *, struct hkpMoppPlanesQueryInput const &, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *);
// public: hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>::hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>(void);
// public: hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>::~hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>(void);
// public: void hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>::queryMopp(class hkpMoppCode const *, class hkSphere const &, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *);
// public: void hkMoppSphereQueryObject::initializeQueryObject(class hkSphere const &, class hkpMoppCode const *);
// public: hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>::hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>(void);
// public: hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>::~hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>(void);
// public: void hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>::queryMopp(class hkpMoppCode const *, class hkSphere const &, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *);
// public: hkMoppPlanesQueryObject::hkMoppPlanesQueryObject(void);
// public: hkMoppPlanesQueryObject::~hkMoppPlanesQueryObject(void);
// public: hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>::hkpMoppTempAabb::hkpMoppTempAabb(void);
// public: hkMoppPlanesQueryObjectOptimized::hkMoppPlanesQueryObjectOptimized(void);
// public: hkMoppPlanesQueryObjectOptimized::~hkMoppPlanesQueryObjectOptimized(void);
// public: hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>::hkpMoppTempAabb::hkpMoppTempAabb(void);
// public: hkMoppSphereQueryObject::hkMoppSphereQueryObject(void);
// public: hkMoppSphereQueryObject::~hkMoppSphereQueryObject(void);
// public: hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>::hkpMoppTempAabb::hkpMoppTempAabb(void);
// public: hkMoppSphereQueryObjectOptimized::hkMoppSphereQueryObjectOptimized(void);
// public: hkMoppSphereQueryObjectOptimized::~hkMoppSphereQueryObjectOptimized(void);
// public: hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>::hkpMoppTempAabb::hkpMoppTempAabb(void);
// public: hkpMoppQueryObject::hkpMoppQueryObject(void);
// public: hkpMoppQueryObject::~hkpMoppQueryObject(void);
// protected: void hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>::queryMoppTree(struct hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>::hkpMoppUsingFloatAabbVirtualMachineQueryInt const *, unsigned char const *, struct hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>::hkpMoppTempAabb &);
// protected: void hkpMoppVirtualMachine::addHit(unsigned int, unsigned int const *const);
// protected: static int hkpMoppVirtualMachine::read24(unsigned char const *);
// public: enum hkpMoppQueryObject::hkpCheckCollisionResult hkMoppPlanesQueryObject::checkCollision(class hkAabb const &, struct hkpMoppFindAllVirtualMachine::hkpMoppFindAllVirtualMachineQuery const *, unsigned char const *);
// public: class hkpMoppPrimitiveInfo & hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator>::expandOne(void);
// public: class hkpMoppPrimitiveInfo & hkArrayBase<class hkpMoppPrimitiveInfo>::_expandOne(class hkMemoryAllocator &);
// public: static void hkArrayUtil::construct<class hkpMoppPrimitiveInfo>(class hkpMoppPrimitiveInfo *, int, struct hkTraitBool<0>);
// protected: void hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>::queryMoppTree(struct hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>::hkpMoppUsingFloatAabbVirtualMachineQueryInt const *, unsigned char const *, struct hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>::hkpMoppTempAabb &);
// public: enum hkpMoppQueryObject::hkpCheckCollisionResult hkMoppPlanesQueryObjectOptimized::checkCollision(class hkAabb const &, struct hkpMoppFindAllVirtualMachine::hkpMoppFindAllVirtualMachineQuery const *, unsigned char const *);
// public: void hkVector4::_setMul4(class hkMatrix3const &, class hkVector4const &);
// protected: void hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>::queryMoppTree(struct hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>::hkpMoppUsingFloatAabbVirtualMachineQueryInt const *, unsigned char const *, struct hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>::hkpMoppTempAabb &);
// public: enum hkpMoppQueryObject::hkpCheckCollisionResult hkMoppSphereQueryObject::checkCollision(class hkAabb const &, struct hkpMoppFindAllVirtualMachine::hkpMoppFindAllVirtualMachineQuery const *, unsigned char const *);
// protected: void hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>::queryMoppTree(struct hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>::hkpMoppUsingFloatAabbVirtualMachineQueryInt const *, unsigned char const *, struct hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>::hkpMoppTempAabb &);
// public: enum hkpMoppQueryObject::hkpCheckCollisionResult hkMoppSphereQueryObjectOptimized::checkCollision(class hkAabb const &, struct hkpMoppFindAllVirtualMachine::hkpMoppFindAllVirtualMachineQuery const *, unsigned char const *);
// public: void hkTransform::setRows4(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &);

//hkMoppEarlyExitObbVirtualMachine_queryObb
//{
//    mangled_ppc("hkMoppEarlyExitObbVirtualMachine_queryObb");
//};

//hkMoppFindAllVirtualMachine_getAllKeys
//{
//    mangled_ppc("hkMoppFindAllVirtualMachine_getAllKeys");
//};

//hkMoppObbVirtualMachine_queryObb
//{
//    mangled_ppc("hkMoppObbVirtualMachine_queryObb");
//};

//hkMoppObbVirtualMachine_queryAabb
//{
//    mangled_ppc("hkMoppObbVirtualMachine_queryAabb");
//};

//hkMoppSphereVirtualMachine_querySphere
//{
//    mangled_ppc("hkMoppSphereVirtualMachine_querySphere");
//};

//hkMoppUsingFloatAabbVirtualMachine_queryPlanes
//{
//    mangled_ppc("hkMoppUsingFloatAabbVirtualMachine_queryPlanes");
//};

//hkMoppUsingFloatAabbVirtualMachine_queryPlanesOptimized
//{
//    mangled_ppc("hkMoppUsingFloatAabbVirtualMachine_queryPlanesOptimized");
//};

//hkMoppUsingFloatAabbVirtualMachine_querySphere
//{
//    mangled_ppc("hkMoppUsingFloatAabbVirtualMachine_querySphere");
//};

//hkMoppUsingFloatAabbVirtualMachine_querySphereOptimized
//{
//    mangled_ppc("hkMoppUsingFloatAabbVirtualMachine_querySphereOptimized");
//};

//hkMoppModifyVirtualMachine_queryAabb
//{
//    mangled_ppc("hkMoppModifyVirtualMachine_queryAabb");
//};

//hkMoppKDopGeometriesVirtualMachine_query
//{
//    mangled_ppc("hkMoppKDopGeometriesVirtualMachine_query");
//};

//public: hkpMoppEarlyExitObbVirtualMachine::hkpMoppEarlyExitObbVirtualMachine(void)
//{
//    mangled_ppc("??0hkpMoppEarlyExitObbVirtualMachine@@QAA@XZ");
//};

//public: hkpMoppEarlyExitObbVirtualMachine::~hkpMoppEarlyExitObbVirtualMachine(void)
//{
//    mangled_ppc("??1hkpMoppEarlyExitObbVirtualMachine@@QAA@XZ");
//};

//public: hkpMoppFindAllVirtualMachine::hkpMoppFindAllVirtualMachine(void)
//{
//    mangled_ppc("??0hkpMoppFindAllVirtualMachine@@QAA@XZ");
//};

//public: hkpMoppFindAllVirtualMachine::~hkpMoppFindAllVirtualMachine(void)
//{
//    mangled_ppc("??1hkpMoppFindAllVirtualMachine@@QAA@XZ");
//};

//public: void hkpMoppFindAllVirtualMachine::queryAll(class hkpMoppCode const *, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *)
//{
//    mangled_ppc("?queryAll@hkpMoppFindAllVirtualMachine@@QAAXPBVhkpMoppCode@@PAV?$hkArray@VhkpMoppPrimitiveInfo@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: hkpMoppSphereVirtualMachine::hkpMoppSphereVirtualMachine(void)
//{
//    mangled_ppc("??0hkpMoppSphereVirtualMachine@@QAA@XZ");
//};

//public: hkpMoppSphereVirtualMachine::~hkpMoppSphereVirtualMachine(void)
//{
//    mangled_ppc("??1hkpMoppSphereVirtualMachine@@QAA@XZ");
//};

//public: hkpMoppModifyVirtualMachine::hkpMoppModifyVirtualMachine(void)
//{
//    mangled_ppc("??0hkpMoppModifyVirtualMachine@@QAA@XZ");
//};

//public: hkpMoppModifyVirtualMachine::~hkpMoppModifyVirtualMachine(void)
//{
//    mangled_ppc("??1hkpMoppModifyVirtualMachine@@QAA@XZ");
//};

//public: hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>::hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>(void)
//{
//    mangled_ppc("??0?$hkpMoppUsingFloatAabbVirtualMachine@UhkpMoppPlanesQueryInput@@VhkMoppPlanesQueryObject@@@@QAA@XZ");
//};

//public: hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>::~hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>(void)
//{
//    mangled_ppc("??1?$hkpMoppUsingFloatAabbVirtualMachine@UhkpMoppPlanesQueryInput@@VhkMoppPlanesQueryObject@@@@QAA@XZ");
//};

//public: void hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>::queryMopp(class hkpMoppCode const *, struct hkpMoppPlanesQueryInput const &, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *)
//{
//    mangled_ppc("?queryMopp@?$hkpMoppUsingFloatAabbVirtualMachine@UhkpMoppPlanesQueryInput@@VhkMoppPlanesQueryObject@@@@QAAXPBVhkpMoppCode@@ABUhkpMoppPlanesQueryInput@@PAV?$hkArray@VhkpMoppPrimitiveInfo@@UhkContainerHeapAllocator@@@@2@Z");
//};

//protected: void hkpMoppVirtualMachine::initQuery(class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *)
//{
//    mangled_ppc("?initQuery@hkpMoppVirtualMachine@@IAAXPAV?$hkArray@VhkpMoppPrimitiveInfo@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: void hkMoppPlanesQueryObject::initializeQueryObject(struct hkpMoppPlanesQueryInput const &, class hkpMoppCode const *)
//{
//    mangled_ppc("?initializeQueryObject@hkMoppPlanesQueryObject@@QAAXABUhkpMoppPlanesQueryInput@@PBVhkpMoppCode@@@Z");
//};

//public: hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>::hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>(void)
//{
//    mangled_ppc("??0?$hkpMoppUsingFloatAabbVirtualMachine@UhkpMoppPlanesQueryInput@@VhkMoppPlanesQueryObjectOptimized@@@@QAA@XZ");
//};

//public: hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>::~hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>(void)
//{
//    mangled_ppc("??1?$hkpMoppUsingFloatAabbVirtualMachine@UhkpMoppPlanesQueryInput@@VhkMoppPlanesQueryObjectOptimized@@@@QAA@XZ");
//};

//public: void hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>::queryMopp(class hkpMoppCode const *, struct hkpMoppPlanesQueryInput const &, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *)
//{
//    mangled_ppc("?queryMopp@?$hkpMoppUsingFloatAabbVirtualMachine@UhkpMoppPlanesQueryInput@@VhkMoppPlanesQueryObjectOptimized@@@@QAAXPBVhkpMoppCode@@ABUhkpMoppPlanesQueryInput@@PAV?$hkArray@VhkpMoppPrimitiveInfo@@UhkContainerHeapAllocator@@@@2@Z");
//};

//public: hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>::hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>(void)
//{
//    mangled_ppc("??0?$hkpMoppUsingFloatAabbVirtualMachine@VhkSphere@@VhkMoppSphereQueryObject@@@@QAA@XZ");
//};

//public: hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>::~hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>(void)
//{
//    mangled_ppc("??1?$hkpMoppUsingFloatAabbVirtualMachine@VhkSphere@@VhkMoppSphereQueryObject@@@@QAA@XZ");
//};

//public: void hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>::queryMopp(class hkpMoppCode const *, class hkSphere const &, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *)
//{
//    mangled_ppc("?queryMopp@?$hkpMoppUsingFloatAabbVirtualMachine@VhkSphere@@VhkMoppSphereQueryObject@@@@QAAXPBVhkpMoppCode@@ABVhkSphere@@PAV?$hkArray@VhkpMoppPrimitiveInfo@@UhkContainerHeapAllocator@@@@2@Z");
//};

//public: void hkMoppSphereQueryObject::initializeQueryObject(class hkSphere const &, class hkpMoppCode const *)
//{
//    mangled_ppc("?initializeQueryObject@hkMoppSphereQueryObject@@QAAXABVhkSphere@@PBVhkpMoppCode@@@Z");
//};

//public: hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>::hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>(void)
//{
//    mangled_ppc("??0?$hkpMoppUsingFloatAabbVirtualMachine@VhkSphere@@VhkMoppSphereQueryObjectOptimized@@@@QAA@XZ");
//};

//public: hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>::~hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>(void)
//{
//    mangled_ppc("??1?$hkpMoppUsingFloatAabbVirtualMachine@VhkSphere@@VhkMoppSphereQueryObjectOptimized@@@@QAA@XZ");
//};

//public: void hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>::queryMopp(class hkpMoppCode const *, class hkSphere const &, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *, class hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator> *)
//{
//    mangled_ppc("?queryMopp@?$hkpMoppUsingFloatAabbVirtualMachine@VhkSphere@@VhkMoppSphereQueryObjectOptimized@@@@QAAXPBVhkpMoppCode@@ABVhkSphere@@PAV?$hkArray@VhkpMoppPrimitiveInfo@@UhkContainerHeapAllocator@@@@2@Z");
//};

//public: hkMoppPlanesQueryObject::hkMoppPlanesQueryObject(void)
//{
//    mangled_ppc("??0hkMoppPlanesQueryObject@@QAA@XZ");
//};

//public: hkMoppPlanesQueryObject::~hkMoppPlanesQueryObject(void)
//{
//    mangled_ppc("??1hkMoppPlanesQueryObject@@QAA@XZ");
//};

//public: hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>::hkpMoppTempAabb::hkpMoppTempAabb(void)
//{
//    mangled_ppc("??0hkpMoppTempAabb@?$hkpMoppUsingFloatAabbVirtualMachine@UhkpMoppPlanesQueryInput@@VhkMoppPlanesQueryObject@@@@QAA@XZ");
//};

//public: hkMoppPlanesQueryObjectOptimized::hkMoppPlanesQueryObjectOptimized(void)
//{
//    mangled_ppc("??0hkMoppPlanesQueryObjectOptimized@@QAA@XZ");
//};

//public: hkMoppPlanesQueryObjectOptimized::~hkMoppPlanesQueryObjectOptimized(void)
//{
//    mangled_ppc("??1hkMoppPlanesQueryObjectOptimized@@QAA@XZ");
//};

//public: hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>::hkpMoppTempAabb::hkpMoppTempAabb(void)
//{
//    mangled_ppc("??0hkpMoppTempAabb@?$hkpMoppUsingFloatAabbVirtualMachine@UhkpMoppPlanesQueryInput@@VhkMoppPlanesQueryObjectOptimized@@@@QAA@XZ");
//};

//public: hkMoppSphereQueryObject::hkMoppSphereQueryObject(void)
//{
//    mangled_ppc("??0hkMoppSphereQueryObject@@QAA@XZ");
//};

//public: hkMoppSphereQueryObject::~hkMoppSphereQueryObject(void)
//{
//    mangled_ppc("??1hkMoppSphereQueryObject@@QAA@XZ");
//};

//public: hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>::hkpMoppTempAabb::hkpMoppTempAabb(void)
//{
//    mangled_ppc("??0hkpMoppTempAabb@?$hkpMoppUsingFloatAabbVirtualMachine@VhkSphere@@VhkMoppSphereQueryObject@@@@QAA@XZ");
//};

//public: hkMoppSphereQueryObjectOptimized::hkMoppSphereQueryObjectOptimized(void)
//{
//    mangled_ppc("??0hkMoppSphereQueryObjectOptimized@@QAA@XZ");
//};

//public: hkMoppSphereQueryObjectOptimized::~hkMoppSphereQueryObjectOptimized(void)
//{
//    mangled_ppc("??1hkMoppSphereQueryObjectOptimized@@QAA@XZ");
//};

//public: hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>::hkpMoppTempAabb::hkpMoppTempAabb(void)
//{
//    mangled_ppc("??0hkpMoppTempAabb@?$hkpMoppUsingFloatAabbVirtualMachine@VhkSphere@@VhkMoppSphereQueryObjectOptimized@@@@QAA@XZ");
//};

//public: hkpMoppQueryObject::hkpMoppQueryObject(void)
//{
//    mangled_ppc("??0hkpMoppQueryObject@@QAA@XZ");
//};

//public: hkpMoppQueryObject::~hkpMoppQueryObject(void)
//{
//    mangled_ppc("??1hkpMoppQueryObject@@QAA@XZ");
//};

//protected: void hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>::queryMoppTree(struct hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>::hkpMoppUsingFloatAabbVirtualMachineQueryInt const *, unsigned char const *, struct hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObject>::hkpMoppTempAabb &)
//{
//    mangled_ppc("?queryMoppTree@?$hkpMoppUsingFloatAabbVirtualMachine@UhkpMoppPlanesQueryInput@@VhkMoppPlanesQueryObject@@@@IAAXPBUhkpMoppUsingFloatAabbVirtualMachineQueryInt@1@PBEAAUhkpMoppTempAabb@1@@Z");
//};

//protected: void hkpMoppVirtualMachine::addHit(unsigned int, unsigned int const *const)
//{
//    mangled_ppc("?addHit@hkpMoppVirtualMachine@@IAAXIQBI@Z");
//};

//protected: static int hkpMoppVirtualMachine::read24(unsigned char const *)
//{
//    mangled_ppc("?read24@hkpMoppVirtualMachine@@KAHPBE@Z");
//};

//public: enum hkpMoppQueryObject::hkpCheckCollisionResult hkMoppPlanesQueryObject::checkCollision(class hkAabb const &, struct hkpMoppFindAllVirtualMachine::hkpMoppFindAllVirtualMachineQuery const *, unsigned char const *)
//{
//    mangled_ppc("?checkCollision@hkMoppPlanesQueryObject@@QAA?AW4hkpCheckCollisionResult@hkpMoppQueryObject@@ABVhkAabb@@PBUhkpMoppFindAllVirtualMachineQuery@hkpMoppFindAllVirtualMachine@@PBE@Z");
//};

//public: class hkpMoppPrimitiveInfo & hkArray<class hkpMoppPrimitiveInfo, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@VhkpMoppPrimitiveInfo@@UhkContainerHeapAllocator@@@@QAAAAVhkpMoppPrimitiveInfo@@XZ");
//};

//public: class hkpMoppPrimitiveInfo & hkArrayBase<class hkpMoppPrimitiveInfo>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@VhkpMoppPrimitiveInfo@@@@QAAAAVhkpMoppPrimitiveInfo@@AAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkpMoppPrimitiveInfo>(class hkpMoppPrimitiveInfo *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@VhkpMoppPrimitiveInfo@@@hkArrayUtil@@SAXPAVhkpMoppPrimitiveInfo@@HU?$hkTraitBool@$0A@@@@Z");
//};

//protected: void hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>::queryMoppTree(struct hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>::hkpMoppUsingFloatAabbVirtualMachineQueryInt const *, unsigned char const *, struct hkpMoppUsingFloatAabbVirtualMachine<struct hkpMoppPlanesQueryInput, class hkMoppPlanesQueryObjectOptimized>::hkpMoppTempAabb &)
//{
//    mangled_ppc("?queryMoppTree@?$hkpMoppUsingFloatAabbVirtualMachine@UhkpMoppPlanesQueryInput@@VhkMoppPlanesQueryObjectOptimized@@@@IAAXPBUhkpMoppUsingFloatAabbVirtualMachineQueryInt@1@PBEAAUhkpMoppTempAabb@1@@Z");
//};

//public: enum hkpMoppQueryObject::hkpCheckCollisionResult hkMoppPlanesQueryObjectOptimized::checkCollision(class hkAabb const &, struct hkpMoppFindAllVirtualMachine::hkpMoppFindAllVirtualMachineQuery const *, unsigned char const *)
//{
//    mangled_ppc("?checkCollision@hkMoppPlanesQueryObjectOptimized@@QAA?AW4hkpCheckCollisionResult@hkpMoppQueryObject@@ABVhkAabb@@PBUhkpMoppFindAllVirtualMachineQuery@hkpMoppFindAllVirtualMachine@@PBE@Z");
//};

//public: void hkVector4::_setMul4(class hkMatrix3const &, class hkVector4const &)
//{
//    mangled_ppc("?_setMul4@hkVector4@@QAAXABVhkMatrix3@@ABV1@@Z");
//};

//protected: void hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>::queryMoppTree(struct hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>::hkpMoppUsingFloatAabbVirtualMachineQueryInt const *, unsigned char const *, struct hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObject>::hkpMoppTempAabb &)
//{
//    mangled_ppc("?queryMoppTree@?$hkpMoppUsingFloatAabbVirtualMachine@VhkSphere@@VhkMoppSphereQueryObject@@@@IAAXPBUhkpMoppUsingFloatAabbVirtualMachineQueryInt@1@PBEAAUhkpMoppTempAabb@1@@Z");
//};

//public: enum hkpMoppQueryObject::hkpCheckCollisionResult hkMoppSphereQueryObject::checkCollision(class hkAabb const &, struct hkpMoppFindAllVirtualMachine::hkpMoppFindAllVirtualMachineQuery const *, unsigned char const *)
//{
//    mangled_ppc("?checkCollision@hkMoppSphereQueryObject@@QAA?AW4hkpCheckCollisionResult@hkpMoppQueryObject@@ABVhkAabb@@PBUhkpMoppFindAllVirtualMachineQuery@hkpMoppFindAllVirtualMachine@@PBE@Z");
//};

//protected: void hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>::queryMoppTree(struct hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>::hkpMoppUsingFloatAabbVirtualMachineQueryInt const *, unsigned char const *, struct hkpMoppUsingFloatAabbVirtualMachine<class hkSphere, class hkMoppSphereQueryObjectOptimized>::hkpMoppTempAabb &)
//{
//    mangled_ppc("?queryMoppTree@?$hkpMoppUsingFloatAabbVirtualMachine@VhkSphere@@VhkMoppSphereQueryObjectOptimized@@@@IAAXPBUhkpMoppUsingFloatAabbVirtualMachineQueryInt@1@PBEAAUhkpMoppTempAabb@1@@Z");
//};

//public: enum hkpMoppQueryObject::hkpCheckCollisionResult hkMoppSphereQueryObjectOptimized::checkCollision(class hkAabb const &, struct hkpMoppFindAllVirtualMachine::hkpMoppFindAllVirtualMachineQuery const *, unsigned char const *)
//{
//    mangled_ppc("?checkCollision@hkMoppSphereQueryObjectOptimized@@QAA?AW4hkpCheckCollisionResult@hkpMoppQueryObject@@ABVhkAabb@@PBUhkpMoppFindAllVirtualMachineQuery@hkpMoppFindAllVirtualMachine@@PBE@Z");
//};

//public: void hkTransform::setRows4(class hkVector4const &, class hkVector4const &, class hkVector4const &, class hkVector4const &)
//{
//    mangled_ppc("?setRows4@hkTransform@@QAAXABVhkVector4@@000@Z");
//};

