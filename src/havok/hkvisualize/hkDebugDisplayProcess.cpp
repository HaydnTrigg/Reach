/* ---------- headers */

#include "havok\hkvisualize\hkDebugDisplayProcess.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkDebugDisplayProcess::`vftable'{for `hkDebugDisplayHandler'}; // "??_7hkDebugDisplayProcess@@6BhkDebugDisplayHandler@@@"
// const hkDebugDisplayProcess::`vftable'{for `hkProcess'}; // "??_7hkDebugDisplayProcess@@6BhkProcess@@@"
// const hkDebugDisplayProcess::`vftable'{for `hkReferencedObject'}; // "??_7hkDebugDisplayProcess@@6BhkReferencedObject@@@"
// const hkDebugDisplayProcess::`RTTI Complete Object Locator'{for `hkReferencedObject'}; // "??_R4hkDebugDisplayProcess@@6BhkReferencedObject@@@"
// hkDebugDisplayProcess::`RTTI Class Hierarchy Descriptor'; // "??_R3hkDebugDisplayProcess@@8"
// hkDebugDisplayProcess::`RTTI Base Class Array'; // "??_R2hkDebugDisplayProcess@@8"
// hkDebugDisplayProcess::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkDebugDisplayProcess@@8"
// hkDebugDisplayHandler::`RTTI Base Class Descriptor at (32, -1, 0, 64)'; // "??_R1CA@?0A@EA@hkDebugDisplayHandler@@8"
// hkDebugDisplayHandler::`RTTI Class Hierarchy Descriptor'; // "??_R3hkDebugDisplayHandler@@8"
// hkDebugDisplayHandler::`RTTI Base Class Array'; // "??_R2hkDebugDisplayHandler@@8"
// hkDebugDisplayHandler::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkDebugDisplayHandler@@8"
// const hkDebugDisplayProcess::`RTTI Complete Object Locator'{for `hkProcess'}; // "??_R4hkDebugDisplayProcess@@6BhkProcess@@@"
// const hkDebugDisplayProcess::`RTTI Complete Object Locator'{for `hkDebugDisplayHandler'}; // "??_R4hkDebugDisplayProcess@@6BhkDebugDisplayHandler@@@"
// const hkDebugDisplayHandler::`RTTI Complete Object Locator'; // "??_R4hkDebugDisplayHandler@@6B@"
// class hkDebugDisplayProcess::`RTTI Type Descriptor'; // "??_R0?AVhkDebugDisplayProcess@@@8"
// class hkDebugDisplayHandler::`RTTI Type Descriptor'; // "??_R0?AVhkDebugDisplayHandler@@@8"
// protected: static int hkDebugDisplayProcess::m_tag; // "?m_tag@hkDebugDisplayProcess@@1HA"

// public: static class hkProcess * hkDebugDisplayProcess::create(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> const &);
// public: hkDebugDisplayProcess::hkDebugDisplayProcess(void);
// public: static void hkDebugDisplayProcess::registerProcess(void);
// public: virtual hkDebugDisplayProcess::~hkDebugDisplayProcess(void);
// public: virtual enum hkResult hkDebugDisplayProcess::addGeometry(class hkArray<class hkDisplayGeometry *, struct hkContainerHeapAllocator> const &, class hkTransform const &, unsigned long, int, unsigned long);
// public: virtual enum hkResult hkDebugDisplayProcess::addGeometryInstance(unsigned long, class hkTransform const &, unsigned long, int, unsigned long);
// public: virtual enum hkResult hkDebugDisplayProcess::displayGeometry(class hkArrayBase<class hkDisplayGeometry *> const &, class hkTransform const &, int, int, int);
// public: virtual enum hkResult hkDebugDisplayProcess::displayGeometry(class hkArrayBase<class hkDisplayGeometry *> const &, int, int, int);
// public: virtual enum hkResult hkDebugDisplayProcess::setGeometryColor(int, unsigned long, int);
// public: virtual enum hkResult hkDebugDisplayProcess::updateGeometry(class hkTransform const &, unsigned long, int);
// public: virtual enum hkResult hkDebugDisplayProcess::removeGeometry(unsigned long, int, unsigned long);
// public: virtual enum hkResult hkDebugDisplayProcess::updateCamera(class hkVector4const &, class hkVector4const &, class hkVector4const &, float, float, float, char const *);
// public: virtual enum hkResult hkDebugDisplayProcess::updateBehavior(class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &, class hkArray<char *, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<class hkQsTransform, struct hkContainerHeapAllocator> &);
// public: virtual enum hkResult hkDebugDisplayProcess::displayPoint(class hkVector4const &, int, int, int);
// public: virtual enum hkResult hkDebugDisplayProcess::displayLine(class hkVector4const &, class hkVector4const &, int, int, int);
// public: virtual enum hkResult hkDebugDisplayProcess::displayTriangle(class hkVector4const &, class hkVector4const &, class hkVector4const &, int, int, int);
// public: virtual enum hkResult hkDebugDisplayProcess::displayText(char const *, int, int, int);
// public: virtual enum hkResult hkDebugDisplayProcess::display3dText(char const *, class hkVector4const &, int, int, int);
// public: virtual enum hkResult hkDebugDisplayProcess::displayAnnotation(char const *, int, int);
// public: virtual enum hkResult hkDebugDisplayProcess::sendMemStatsDump(char const *, int);
// public: virtual enum hkResult hkDebugDisplayProcess::holdImmediate(void);
// public: static void * hkDebugDisplayProcess::operator new(unsigned int);
// public: virtual void hkDebugDisplayHandler::lockForUpdate(void);
// public: virtual void hkDebugDisplayHandler::unlockForUpdate(void);
// public: virtual int hkDebugDisplayProcess::getProcessTag(void);
// merged_84824750;
// public: static void hkDebugDisplayProcess::operator delete(void *);
// public: hkDebugDisplayHandler::hkDebugDisplayHandler(void);
// public: virtual enum hkResult hkDebugDisplayHandler::displayAnnotation(char const *, int, int);
// merged_84824828;
// public: virtual hkDebugDisplayHandler::~hkDebugDisplayHandler(void);
// [thunk]: public: virtual void * hkDebugDisplayProcess::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkDebugDisplayProcess::`vector deleting destructor'(unsigned int);

//public: static class hkProcess * hkDebugDisplayProcess::create(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?create@hkDebugDisplayProcess@@SAPAVhkProcess@@ABV?$hkArray@PAVhkProcessContext@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: hkDebugDisplayProcess::hkDebugDisplayProcess(void)
//{
//    mangled_ppc("??0hkDebugDisplayProcess@@QAA@XZ");
//};

//public: static void hkDebugDisplayProcess::registerProcess(void)
//{
//    mangled_ppc("?registerProcess@hkDebugDisplayProcess@@SAXXZ");
//};

//public: virtual hkDebugDisplayProcess::~hkDebugDisplayProcess(void)
//{
//    mangled_ppc("??1hkDebugDisplayProcess@@UAA@XZ");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::addGeometry(class hkArray<class hkDisplayGeometry *, struct hkContainerHeapAllocator> const &, class hkTransform const &, unsigned long, int, unsigned long)
//{
//    mangled_ppc("?addGeometry@hkDebugDisplayProcess@@UAA?AW4hkResult@@ABV?$hkArray@PAVhkDisplayGeometry@@UhkContainerHeapAllocator@@@@ABVhkTransform@@KHK@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::addGeometryInstance(unsigned long, class hkTransform const &, unsigned long, int, unsigned long)
//{
//    mangled_ppc("?addGeometryInstance@hkDebugDisplayProcess@@UAA?AW4hkResult@@KABVhkTransform@@KHK@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::displayGeometry(class hkArrayBase<class hkDisplayGeometry *> const &, class hkTransform const &, int, int, int)
//{
//    mangled_ppc("?displayGeometry@hkDebugDisplayProcess@@UAA?AW4hkResult@@ABV?$hkArrayBase@PAVhkDisplayGeometry@@@@ABVhkTransform@@HHH@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::displayGeometry(class hkArrayBase<class hkDisplayGeometry *> const &, int, int, int)
//{
//    mangled_ppc("?displayGeometry@hkDebugDisplayProcess@@UAA?AW4hkResult@@ABV?$hkArrayBase@PAVhkDisplayGeometry@@@@HHH@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::setGeometryColor(int, unsigned long, int)
//{
//    mangled_ppc("?setGeometryColor@hkDebugDisplayProcess@@UAA?AW4hkResult@@HKH@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::updateGeometry(class hkTransform const &, unsigned long, int)
//{
//    mangled_ppc("?updateGeometry@hkDebugDisplayProcess@@UAA?AW4hkResult@@ABVhkTransform@@KH@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::removeGeometry(unsigned long, int, unsigned long)
//{
//    mangled_ppc("?removeGeometry@hkDebugDisplayProcess@@UAA?AW4hkResult@@KHK@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::updateCamera(class hkVector4const &, class hkVector4const &, class hkVector4const &, float, float, float, char const *)
//{
//    mangled_ppc("?updateCamera@hkDebugDisplayProcess@@UAA?AW4hkResult@@ABVhkVector4@@00MMMPBD@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::updateBehavior(class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<class hkVector4, struct hkContainerHeapAllocator> &, class hkArray<char *, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<int, struct hkContainerHeapAllocator> &, class hkArray<class hkQsTransform, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?updateBehavior@hkDebugDisplayProcess@@UAA?AW4hkResult@@AAV?$hkArray@HUhkContainerHeapAllocator@@@@00AAV?$hkArray@VhkVector4@@UhkContainerHeapAllocator@@@@AAV?$hkArray@PADUhkContainerHeapAllocator@@@@00AAV?$hkArray@VhkQsTransform@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::displayPoint(class hkVector4const &, int, int, int)
//{
//    mangled_ppc("?displayPoint@hkDebugDisplayProcess@@UAA?AW4hkResult@@ABVhkVector4@@HHH@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::displayLine(class hkVector4const &, class hkVector4const &, int, int, int)
//{
//    mangled_ppc("?displayLine@hkDebugDisplayProcess@@UAA?AW4hkResult@@ABVhkVector4@@0HHH@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::displayTriangle(class hkVector4const &, class hkVector4const &, class hkVector4const &, int, int, int)
//{
//    mangled_ppc("?displayTriangle@hkDebugDisplayProcess@@UAA?AW4hkResult@@ABVhkVector4@@00HHH@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::displayText(char const *, int, int, int)
//{
//    mangled_ppc("?displayText@hkDebugDisplayProcess@@UAA?AW4hkResult@@PBDHHH@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::display3dText(char const *, class hkVector4const &, int, int, int)
//{
//    mangled_ppc("?display3dText@hkDebugDisplayProcess@@UAA?AW4hkResult@@PBDABVhkVector4@@HHH@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::displayAnnotation(char const *, int, int)
//{
//    mangled_ppc("?displayAnnotation@hkDebugDisplayProcess@@UAA?AW4hkResult@@PBDHH@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::sendMemStatsDump(char const *, int)
//{
//    mangled_ppc("?sendMemStatsDump@hkDebugDisplayProcess@@UAA?AW4hkResult@@PBDH@Z");
//};

//public: virtual enum hkResult hkDebugDisplayProcess::holdImmediate(void)
//{
//    mangled_ppc("?holdImmediate@hkDebugDisplayProcess@@UAA?AW4hkResult@@XZ");
//};

//public: static void * hkDebugDisplayProcess::operator new(unsigned int)
//{
//    mangled_ppc("??2hkDebugDisplayProcess@@SAPAXI@Z");
//};

//public: virtual void hkDebugDisplayHandler::lockForUpdate(void)
//{
//    mangled_ppc("?lockForUpdate@hkDebugDisplayHandler@@UAAXXZ");
//};

//public: virtual void hkDebugDisplayHandler::unlockForUpdate(void)
//{
//    mangled_ppc("?unlockForUpdate@hkDebugDisplayHandler@@UAAXXZ");
//};

//public: virtual int hkDebugDisplayProcess::getProcessTag(void)
//{
//    mangled_ppc("?getProcessTag@hkDebugDisplayProcess@@UAAHXZ");
//};

//merged_84824750
//{
//    mangled_ppc("merged_84824750");
//};

//public: static void hkDebugDisplayProcess::operator delete(void *)
//{
//    mangled_ppc("??3hkDebugDisplayProcess@@SAXPAX@Z");
//};

//public: hkDebugDisplayHandler::hkDebugDisplayHandler(void)
//{
//    mangled_ppc("??0hkDebugDisplayHandler@@QAA@XZ");
//};

//public: virtual enum hkResult hkDebugDisplayHandler::displayAnnotation(char const *, int, int)
//{
//    mangled_ppc("?displayAnnotation@hkDebugDisplayHandler@@UAA?AW4hkResult@@PBDHH@Z");
//};

//merged_84824828
//{
//    mangled_ppc("merged_84824828");
//};

//public: virtual hkDebugDisplayHandler::~hkDebugDisplayHandler(void)
//{
//    mangled_ppc("??1hkDebugDisplayHandler@@UAA@XZ");
//};

//[thunk]: public: virtual void * hkDebugDisplayProcess::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkDebugDisplayProcess@@WCA@AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkDebugDisplayProcess::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkDebugDisplayProcess@@W7AAPAXI@Z");
//};

