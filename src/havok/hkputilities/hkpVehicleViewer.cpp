/* ---------- headers */

#include "havok\hkputilities\hkpVehicleViewer.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// protected: static int const hkpVehicleViewer::s_numWheelSegments; // "?s_numWheelSegments@hkpVehicleViewer@@1HB"
// public: static unsigned char const hkpVehicleInstance::s_maxNumLocalWheels; // "?s_maxNumLocalWheels@hkpVehicleInstance@@2EB"
// const hkpVehicleViewer::`vftable'{for `hkpWorldPostSimulationListener'}; // "??_7hkpVehicleViewer@@6BhkpWorldPostSimulationListener@@@"
// const hkpVehicleViewer::`vftable'{for `hkpActionListener'}; // "??_7hkpVehicleViewer@@6BhkpActionListener@@@"
// const hkpVehicleViewer::`vftable'{for `hkpPhysicsContextWorldListener'}; // "??_7hkpVehicleViewer@@6BhkpPhysicsContextWorldListener@@@"
// const hkpVehicleViewer::`vftable'{for `hkProcess'}; // "??_7hkpVehicleViewer@@6BhkProcess@@@"
// const hkpVehicleViewer::`vftable'{for `hkReferencedObject'}; // "??_7hkpVehicleViewer@@6BhkReferencedObject@@@"
// const hkpVehicleViewer::`RTTI Complete Object Locator'{for `hkReferencedObject'}; // "??_R4hkpVehicleViewer@@6BhkReferencedObject@@@"
// hkpVehicleViewer::`RTTI Class Hierarchy Descriptor'; // "??_R3hkpVehicleViewer@@8"
// hkpVehicleViewer::`RTTI Base Class Array'; // "??_R2hkpVehicleViewer@@8"
// hkpVehicleViewer::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkpVehicleViewer@@8"
// hkpActionListener::`RTTI Base Class Descriptor at (40, -1, 0, 64)'; // "??_R1CI@?0A@EA@hkpActionListener@@8"
// hkpWorldPostSimulationListener::`RTTI Base Class Descriptor at (44, -1, 0, 64)'; // "??_R1CM@?0A@EA@hkpWorldPostSimulationListener@@8"
// const hkpVehicleViewer::`RTTI Complete Object Locator'{for `hkProcess'}; // "??_R4hkpVehicleViewer@@6BhkProcess@@@"
// const hkpVehicleViewer::`RTTI Complete Object Locator'{for `hkpPhysicsContextWorldListener'}; // "??_R4hkpVehicleViewer@@6BhkpPhysicsContextWorldListener@@@"
// const hkpVehicleViewer::`RTTI Complete Object Locator'{for `hkpActionListener'}; // "??_R4hkpVehicleViewer@@6BhkpActionListener@@@"
// const hkpVehicleViewer::`RTTI Complete Object Locator'{for `hkpWorldPostSimulationListener'}; // "??_R4hkpVehicleViewer@@6BhkpWorldPostSimulationListener@@@"
// class hkpVehicleViewer::`RTTI Type Descriptor'; // "??_R0?AVhkpVehicleViewer@@@8"
// protected: static int hkpVehicleViewer::m_tag; // "?m_tag@hkpVehicleViewer@@1HA"

// public: static void hkpVehicleViewer::registerViewer(void);
// public: static class hkProcess * hkpVehicleViewer::create(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> const &);
// protected: hkpVehicleViewer::hkpVehicleViewer(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> const &);
// public: virtual void hkpVehicleViewer::init(void);
// protected: virtual hkpVehicleViewer::~hkpVehicleViewer(void);
// protected: virtual void hkpVehicleViewer::worldAddedCallback(class hkpWorld *);
// protected: virtual void hkpVehicleViewer::worldRemovedCallback(class hkpWorld *);
// protected: virtual void hkpVehicleViewer::actionAddedCallback(class hkpAction *);
// char const * getHkVehicleInstanceName(class hkpVehicleInstance *);
// protected: virtual void hkpVehicleViewer::actionRemovedCallback(class hkpAction *);
// protected: virtual void hkpVehicleViewer::postSimulationCallback(class hkpWorld *);
// public: static char const * hkpVehicleViewer::getName(void);
// public: static void * hkpVehicleViewer::operator new(unsigned int);
// public: virtual int hkpVehicleViewer::getProcessTag(void);
// merged_83F3F5F8;
// public: static void hkpVehicleViewer::operator delete(void *);
// public: static class hkBuiltinTypeRegistry & hkSingleton<class hkBuiltinTypeRegistry>::getInstance(void);
// public: hkArray<class hkpVehicleInstance *, struct hkContainerHeapAllocator>::hkArray<class hkpVehicleInstance *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkpVehicleInstance *, struct hkContainerHeapAllocator>::pushBack(class hkpVehicleInstance *const &);
// public: struct hkpVehicleData::WheelComponentParams & hkArrayBase<struct hkpVehicleData::WheelComponentParams>::operator[](int);
// public: signed char & hkArrayBase<signed char>::operator[](int);
// public: int hkArrayBase<signed char>::getSize(void) const;
// public: struct hkpVehicleInstance::WheelInfo const & hkArrayBase<struct hkpVehicleInstance::WheelInfo>::operator[](int) const;
// public: int hkArrayBase<struct hkpVehicleInstance::WheelInfo>::getSize(void) const;
// public: hkArrayBase<class hkpVehicleInstance *>::hkArrayBase<class hkpVehicleInstance *>(void);
// public: class hkpVehicleInstance *& hkArrayBase<class hkpVehicleInstance *>::operator[](int);
// public: int hkArrayBase<class hkpVehicleInstance *>::getSize(void) const;
// public: void hkArrayBase<class hkpVehicleInstance *>::removeAt(int);
// public: int hkArrayBase<class hkpVehicleInstance *>::indexOf(class hkpVehicleInstance *const &, int, int) const;
// public: void hkArrayBase<class hkpVehicleInstance *>::_pushBack(class hkMemoryAllocator &, class hkpVehicleInstance *const &);
// public: hkArray<class hkpVehicleInstance *, struct hkContainerHeapAllocator>::~hkArray<class hkpVehicleInstance *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkpVehicleInstance *>::~hkArrayBase<class hkpVehicleInstance *>(void);
// public: class hkVector4& hkFixedArray<class hkVector4>::operator[](int);
// public: hkLocalBuffer<class hkVector4>::hkLocalBuffer<class hkVector4>(int, char const *);
// public: hkLocalBuffer<class hkVector4>::~hkLocalBuffer<class hkVector4>(void);
// public: void hkArray<class hkpVehicleInstance *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// protected: hkFixedArray<class hkVector4>::hkFixedArray<class hkVector4>(void);
// public: void hkPadSpu<class hkVector4*>::operator=(class hkVector4*);
// public: class hkVector4* hkPadSpu<class hkVector4*>::val(void) const;
// public: class hkVector4* hkPadSpu<class hkVector4*>::operator class hkVector4*(void) const;
// public: hkPadSpu<class hkVector4*>::hkPadSpu<class hkVector4*>(void);
// public: int hkArrayBase<class hkpVehicleInstance *>::getCapacity(void) const;
// public: void hkArrayBase<class hkpVehicleInstance *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<class hkpVehicleInstance *>(class hkpVehicleInstance **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithCopy<class hkpVehicleInstance *>(class hkpVehicleInstance **, int, class hkpVehicleInstance *const &, struct hkTraitBool<1>);
// class hkVector4* hkAllocateStack<class hkVector4>(int, char const *);
// void hkDeallocateStack<class hkVector4>(class hkVector4*);
// public: void hkArrayBase<class hkpVehicleInstance *>::clear(void);
// [thunk]: protected: virtual void * hkpVehicleViewer::`vector deleting destructor'(unsigned int);
// [thunk]: protected: virtual void * hkpVehicleViewer::`vector deleting destructor'(unsigned int);
// [thunk]: protected: virtual void * hkpVehicleViewer::`vector deleting destructor'(unsigned int);
// [thunk]: protected: virtual void * hkpVehicleViewer::`vector deleting destructor'(unsigned int);

//public: static void hkpVehicleViewer::registerViewer(void)
//{
//    mangled_ppc("?registerViewer@hkpVehicleViewer@@SAXXZ");
//};

//public: static class hkProcess * hkpVehicleViewer::create(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?create@hkpVehicleViewer@@SAPAVhkProcess@@ABV?$hkArray@PAVhkProcessContext@@UhkContainerHeapAllocator@@@@@Z");
//};

//protected: hkpVehicleViewer::hkpVehicleViewer(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??0hkpVehicleViewer@@IAA@ABV?$hkArray@PAVhkProcessContext@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual void hkpVehicleViewer::init(void)
//{
//    mangled_ppc("?init@hkpVehicleViewer@@UAAXXZ");
//};

//protected: virtual hkpVehicleViewer::~hkpVehicleViewer(void)
//{
//    mangled_ppc("??1hkpVehicleViewer@@MAA@XZ");
//};

//protected: virtual void hkpVehicleViewer::worldAddedCallback(class hkpWorld *)
//{
//    mangled_ppc("?worldAddedCallback@hkpVehicleViewer@@MAAXPAVhkpWorld@@@Z");
//};

//protected: virtual void hkpVehicleViewer::worldRemovedCallback(class hkpWorld *)
//{
//    mangled_ppc("?worldRemovedCallback@hkpVehicleViewer@@MAAXPAVhkpWorld@@@Z");
//};

//protected: virtual void hkpVehicleViewer::actionAddedCallback(class hkpAction *)
//{
//    mangled_ppc("?actionAddedCallback@hkpVehicleViewer@@MAAXPAVhkpAction@@@Z");
//};

//char const * getHkVehicleInstanceName(class hkpVehicleInstance *)
//{
//    mangled_ppc("?getHkVehicleInstanceName@@YAPBDPAVhkpVehicleInstance@@@Z");
//};

//protected: virtual void hkpVehicleViewer::actionRemovedCallback(class hkpAction *)
//{
//    mangled_ppc("?actionRemovedCallback@hkpVehicleViewer@@MAAXPAVhkpAction@@@Z");
//};

//protected: virtual void hkpVehicleViewer::postSimulationCallback(class hkpWorld *)
//{
//    mangled_ppc("?postSimulationCallback@hkpVehicleViewer@@MAAXPAVhkpWorld@@@Z");
//};

//public: static char const * hkpVehicleViewer::getName(void)
//{
//    mangled_ppc("?getName@hkpVehicleViewer@@SAPBDXZ");
//};

//public: static void * hkpVehicleViewer::operator new(unsigned int)
//{
//    mangled_ppc("??2hkpVehicleViewer@@SAPAXI@Z");
//};

//public: virtual int hkpVehicleViewer::getProcessTag(void)
//{
//    mangled_ppc("?getProcessTag@hkpVehicleViewer@@UAAHXZ");
//};

//merged_83F3F5F8
//{
//    mangled_ppc("merged_83F3F5F8");
//};

//public: static void hkpVehicleViewer::operator delete(void *)
//{
//    mangled_ppc("??3hkpVehicleViewer@@SAXPAX@Z");
//};

//public: static class hkBuiltinTypeRegistry & hkSingleton<class hkBuiltinTypeRegistry>::getInstance(void)
//{
//    mangled_ppc("?getInstance@?$hkSingleton@VhkBuiltinTypeRegistry@@@@SAAAVhkBuiltinTypeRegistry@@XZ");
//};

//public: hkArray<class hkpVehicleInstance *, struct hkContainerHeapAllocator>::hkArray<class hkpVehicleInstance *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkpVehicleInstance@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkpVehicleInstance *, struct hkContainerHeapAllocator>::pushBack(class hkpVehicleInstance *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkpVehicleInstance@@UhkContainerHeapAllocator@@@@QAAXABQAVhkpVehicleInstance@@@Z");
//};

//public: struct hkpVehicleData::WheelComponentParams & hkArrayBase<struct hkpVehicleData::WheelComponentParams>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UWheelComponentParams@hkpVehicleData@@@@QAAAAUWheelComponentParams@hkpVehicleData@@H@Z");
//};

//public: signed char & hkArrayBase<signed char>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@C@@QAAAACH@Z");
//};

//public: int hkArrayBase<signed char>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@C@@QBAHXZ");
//};

//public: struct hkpVehicleInstance::WheelInfo const & hkArrayBase<struct hkpVehicleInstance::WheelInfo>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UWheelInfo@hkpVehicleInstance@@@@QBAABUWheelInfo@hkpVehicleInstance@@H@Z");
//};

//public: int hkArrayBase<struct hkpVehicleInstance::WheelInfo>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UWheelInfo@hkpVehicleInstance@@@@QBAHXZ");
//};

//public: hkArrayBase<class hkpVehicleInstance *>::hkArrayBase<class hkpVehicleInstance *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkpVehicleInstance@@@@QAA@XZ");
//};

//public: class hkpVehicleInstance *& hkArrayBase<class hkpVehicleInstance *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkpVehicleInstance@@@@QAAAAPAVhkpVehicleInstance@@H@Z");
//};

//public: int hkArrayBase<class hkpVehicleInstance *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkpVehicleInstance@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpVehicleInstance *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAVhkpVehicleInstance@@@@QAAXH@Z");
//};

//public: int hkArrayBase<class hkpVehicleInstance *>::indexOf(class hkpVehicleInstance *const &, int, int) const
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@PAVhkpVehicleInstance@@@@QBAHABQAVhkpVehicleInstance@@HH@Z");
//};

//public: void hkArrayBase<class hkpVehicleInstance *>::_pushBack(class hkMemoryAllocator &, class hkpVehicleInstance *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkpVehicleInstance@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkpVehicleInstance@@@Z");
//};

//public: hkArray<class hkpVehicleInstance *, struct hkContainerHeapAllocator>::~hkArray<class hkpVehicleInstance *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkpVehicleInstance@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkpVehicleInstance *>::~hkArrayBase<class hkpVehicleInstance *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkpVehicleInstance@@@@QAA@XZ");
//};

//public: class hkVector4& hkFixedArray<class hkVector4>::operator[](int)
//{
//    mangled_ppc("??A?$hkFixedArray@VhkVector4@@@@QAAAAVhkVector4@@H@Z");
//};

//public: hkLocalBuffer<class hkVector4>::hkLocalBuffer<class hkVector4>(int, char const *)
//{
//    mangled_ppc("??0?$hkLocalBuffer@VhkVector4@@@@QAA@HPBD@Z");
//};

//public: hkLocalBuffer<class hkVector4>::~hkLocalBuffer<class hkVector4>(void)
//{
//    mangled_ppc("??1?$hkLocalBuffer@VhkVector4@@@@QAA@XZ");
//};

//public: void hkArray<class hkpVehicleInstance *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkpVehicleInstance@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//protected: hkFixedArray<class hkVector4>::hkFixedArray<class hkVector4>(void)
//{
//    mangled_ppc("??0?$hkFixedArray@VhkVector4@@@@IAA@XZ");
//};

//public: void hkPadSpu<class hkVector4*>::operator=(class hkVector4*)
//{
//    mangled_ppc("??4?$hkPadSpu@PAVhkVector4@@@@QAAXPAVhkVector4@@@Z");
//};

//public: class hkVector4* hkPadSpu<class hkVector4*>::val(void) const
//{
//    mangled_ppc("?val@?$hkPadSpu@PAVhkVector4@@@@QBAPAVhkVector4@@XZ");
//};

//public: class hkVector4* hkPadSpu<class hkVector4*>::operator class hkVector4*(void) const
//{
//    mangled_ppc("??B?$hkPadSpu@PAVhkVector4@@@@QBAPAVhkVector4@@XZ");
//};

//public: hkPadSpu<class hkVector4*>::hkPadSpu<class hkVector4*>(void)
//{
//    mangled_ppc("??0?$hkPadSpu@PAVhkVector4@@@@QAA@XZ");
//};

//public: int hkArrayBase<class hkpVehicleInstance *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkpVehicleInstance@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkpVehicleInstance *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkpVehicleInstance@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<class hkpVehicleInstance *>(class hkpVehicleInstance **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkpVehicleInstance@@@hkArrayUtil@@SAXPAPAVhkpVehicleInstance@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkpVehicleInstance *>(class hkpVehicleInstance **, int, class hkpVehicleInstance *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkpVehicleInstance@@@hkArrayUtil@@SAXPAPAVhkpVehicleInstance@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//class hkVector4* hkAllocateStack<class hkVector4>(int, char const *)
//{
//    mangled_ppc("??$hkAllocateStack@VhkVector4@@@@YAPAVhkVector4@@HPBD@Z");
//};

//void hkDeallocateStack<class hkVector4>(class hkVector4*)
//{
//    mangled_ppc("??$hkDeallocateStack@VhkVector4@@@@YAXPAVhkVector4@@@Z");
//};

//public: void hkArrayBase<class hkpVehicleInstance *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkpVehicleInstance@@@@QAAXXZ");
//};

//[thunk]: protected: virtual void * hkpVehicleViewer::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpVehicleViewer@@OCA@AAPAXI@Z");
//};

//[thunk]: protected: virtual void * hkpVehicleViewer::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpVehicleViewer@@O7AAPAXI@Z");
//};

//[thunk]: protected: virtual void * hkpVehicleViewer::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpVehicleViewer@@OCI@AAPAXI@Z");
//};

//[thunk]: protected: virtual void * hkpVehicleViewer::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkpVehicleViewer@@OCM@AAPAXI@Z");
//};

