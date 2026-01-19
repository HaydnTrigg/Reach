/* ---------- headers */

#include "havok\hkvisualize\hkVisualDebugger.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkVisualDebugger::`RTTI Complete Object Locator'; // "??_R4hkVisualDebugger@@6B@"
// hkVisualDebugger::`RTTI Class Hierarchy Descriptor'; // "??_R3hkVisualDebugger@@8"
// hkVisualDebugger::`RTTI Base Class Array'; // "??_R2hkVisualDebugger@@8"
// hkVisualDebugger::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkVisualDebugger@@8"
// class hkVisualDebugger::`RTTI Type Descriptor'; // "??_R0?AVhkVisualDebugger@@@8"

// public: hkVisualDebugger::hkVisualDebugger(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> const &, class hkVtableClassRegistry const *);
// public: virtual hkVisualDebugger::~hkVisualDebugger(void);
// public: void hkVisualDebugger::shutdown(void);
// public: void hkVisualDebugger::serve(int);
// public: void hkVisualDebugger::capture(char const *);
// public: void hkVisualDebugger::endCapture(void);
// protected: void hkVisualDebugger::deleteClient(int);
// protected: void hkVisualDebugger::createClient(class hkSocket *, class hkStreamReader *, class hkStreamWriter *);
// public: void hkVisualDebugger::SupressPollForNewClient(bool);
// public: virtual void hkVisualDebugger::pollForNewClients(void);
// protected: void hkVisualDebugger::writeStep(int, float);
// public: virtual void hkVisualDebugger::step(float);
// public: void hkVisualDebugger::addDefaultProcess(char const *);
// public: void hkVisualDebugger::removeDefaultProcess(char const *);
// public: void hkVisualDebugger::addTrackedObject(void *, class hkClass const &, char const *);
// public: void hkVisualDebugger::removeTrackedObject(void *);
// public: void hkVisualDebugger::addTrackedObjectCallback(void (*)(void *, class hkClass const *, class hkBool, void *), void *);
// public: void hkVisualDebugger::removeTrackedObjectCallback(void (*)(void *, class hkClass const *, class hkBool, void *));
// public: void hkVisualDebugger::getCurrentProcesses(class hkArray<class hkProcess *, struct hkContainerHeapAllocator> &);
// public: hkStopwatch::hkStopwatch(char const *);
// public: void hkStopwatch::reset(void);
// public: static char const * hkDebugDisplayProcess::getName(void);
// merged_84813568;
// public: static void hkVisualDebugger::operator delete(void *);
// public: static void * hkServerProcessHandler::operator new(unsigned int);
// public: class hkStreamReader & hkSocket::getReader(void);
// public: class hkStreamWriter & hkSocket::getWriter(void);
// public: void hkStopwatch::start(void);
// public: void hkStopwatch::stop(void);
// public: class hkBool hkStopwatch::isRunning(void) const;
// public: float hkStopwatch::getElapsedSeconds(void) const;
// public: unsigned __int64 hkStopwatch::getElapsedTicks(void) const;
// public: class hkArray<class hkProcess *, struct hkContainerHeapAllocator> const & hkServerProcessHandler::getProcessList(void) const;
// public: hkArray<struct hkVisualDebuggerClient, struct hkContainerHeapAllocator>::hkArray<struct hkVisualDebuggerClient, struct hkContainerHeapAllocator>(void);
// public: struct hkVisualDebuggerClient * hkArray<struct hkVisualDebuggerClient, struct hkContainerHeapAllocator>::expandBy(int);
// public: hkArray<class hkProcessContext *, struct hkContainerHeapAllocator>::hkArray<class hkProcessContext *, struct hkContainerHeapAllocator>(void);
// public: hkArray<struct hkVisualDebuggerTrackedObject, struct hkContainerHeapAllocator>::hkArray<struct hkVisualDebuggerTrackedObject, struct hkContainerHeapAllocator>(void);
// public: struct hkVisualDebuggerTrackedObject & hkArray<struct hkVisualDebuggerTrackedObject, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkArray<void (*)(void *, class hkClass const *, class hkBool, void *), struct hkContainerHeapAllocator>::hkArray<void (*)(void *, class hkClass const *, class hkBool, void *), struct hkContainerHeapAllocator>(void);
// ?pushBack@?$hkArray@P6AXPAXPBVhkClass@@VhkBool@@0@ZUhkContainerHeapAllocator@@@@QAAXABQ6AXPAXPBVhkClass@@VhkBool@@0@Z@Z;
// public: hkArray<class hkStringPtr, struct hkContainerHeapAllocator>::hkArray<class hkStringPtr, struct hkContainerHeapAllocator>(void);
// public: class hkStringPtr & hkArray<class hkStringPtr, struct hkContainerHeapAllocator>::expandOne(void);
// public: void hkArray<class hkProcess *, struct hkContainerHeapAllocator>::insertAt(int, class hkProcess *const *, int);
// public: hkArrayBase<struct hkVisualDebuggerClient>::hkArrayBase<struct hkVisualDebuggerClient>(void);
// public: struct hkVisualDebuggerClient & hkArrayBase<struct hkVisualDebuggerClient>::operator[](int);
// public: struct hkVisualDebuggerClient & hkArrayBase<struct hkVisualDebuggerClient>::back(void);
// public: int hkArrayBase<struct hkVisualDebuggerClient>::getSize(void) const;
// public: void hkArrayBase<struct hkVisualDebuggerClient>::removeAt(int);
// public: struct hkVisualDebuggerClient * hkArrayBase<struct hkVisualDebuggerClient>::_expandBy(class hkMemoryAllocator &, int);
// public: hkArray<struct hkVisualDebuggerClient, struct hkContainerHeapAllocator>::~hkArray<struct hkVisualDebuggerClient, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkVisualDebuggerClient>::~hkArrayBase<struct hkVisualDebuggerClient>(void);
// public: hkArrayBase<class hkProcessContext *>::hkArrayBase<class hkProcessContext *>(void);
// public: class hkProcessContext *& hkArrayBase<class hkProcessContext *>::operator[](int);
// public: class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> & hkArray<class hkProcessContext *, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> const &);
// public: hkArrayBase<struct hkVisualDebuggerTrackedObject>::hkArrayBase<struct hkVisualDebuggerTrackedObject>(void);
// public: struct hkVisualDebuggerTrackedObject & hkArrayBase<struct hkVisualDebuggerTrackedObject>::operator[](int);
// public: int hkArrayBase<struct hkVisualDebuggerTrackedObject>::getSize(void) const;
// public: void hkArrayBase<struct hkVisualDebuggerTrackedObject>::removeAt(int);
// public: struct hkVisualDebuggerTrackedObject & hkArrayBase<struct hkVisualDebuggerTrackedObject>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<struct hkVisualDebuggerTrackedObject, struct hkContainerHeapAllocator>::~hkArray<struct hkVisualDebuggerTrackedObject, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkVisualDebuggerTrackedObject>::~hkArrayBase<struct hkVisualDebuggerTrackedObject>(void);
// public: hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>(void);
// public: void (*& hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::operator[](int))(void *, class hkClass const *, class hkBool, void *);
// public: int hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::getSize(void) const;
// public: void hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::removeAt(int);
// ?indexOf@?$hkArrayBase@P6AXPAXPBVhkClass@@VhkBool@@0@Z@@QBAHABQ6AXPAXPBVhkClass@@VhkBool@@0@ZHH@Z;
// ?_pushBack@?$hkArrayBase@P6AXPAXPBVhkClass@@VhkBool@@0@Z@@QAAXAAVhkMemoryAllocator@@ABQ6AXPAXPBVhkClass@@VhkBool@@1@Z@Z;
// public: hkArray<void (*)(void *, class hkClass const *, class hkBool, void *), struct hkContainerHeapAllocator>::~hkArray<void (*)(void *, class hkClass const *, class hkBool, void *), struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::~hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>(void);
// public: hkArrayBase<class hkStringPtr>::hkArrayBase<class hkStringPtr>(void);
// public: class hkStringPtr & hkArrayBase<class hkStringPtr>::operator[](int);
// public: int hkArrayBase<class hkStringPtr>::getSize(void) const;
// public: void hkArrayBase<class hkStringPtr>::removeAt(int);
// public: class hkStringPtr & hkArrayBase<class hkStringPtr>::_expandOne(class hkMemoryAllocator &);
// public: int hkArrayBase<class hkProcess *>::getSize(void) const;
// public: void hkArrayBase<class hkProcess *>::_insertAt(class hkMemoryAllocator &, int, class hkProcess *const *, int);
// public: class hkProcess *const * hkArrayBase<class hkProcess *>::begin(void) const;
// public: void hkArray<struct hkVisualDebuggerClient, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkVisualDebuggerTrackedObject, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<void (*)(void *, class hkClass const *, class hkBool, void *), struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<struct hkVisualDebuggerClient>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkVisualDebuggerClient>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct hkVisualDebuggerClient>(struct hkVisualDebuggerClient *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkVisualDebuggerClient>(struct hkVisualDebuggerClient *, int, struct hkTraitBool<0>);
// protected: class hkArrayBase<class hkProcessContext *> & hkArrayBase<class hkProcessContext *>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkProcessContext *> const &, struct hkTraitBool<1>);
// public: int hkArrayBase<struct hkVisualDebuggerTrackedObject>::getCapacity(void) const;
// public: void hkArrayBase<struct hkVisualDebuggerTrackedObject>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<struct hkVisualDebuggerTrackedObject>(struct hkVisualDebuggerTrackedObject *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkVisualDebuggerTrackedObject>(struct hkVisualDebuggerTrackedObject *, int, struct hkTraitBool<0>);
// public: int hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::getCapacity(void) const;
// public: void hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::destruct<void (*)(void *, class hkClass const *, class hkBool, void *)>(void (**)(void *, class hkClass const *, class hkBool, void *), int, struct hkTraitBool<1>);
// ??$constructWithCopy@P6AXPAXPBVhkClass@@VhkBool@@0@Z@hkArrayUtil@@SAXPAP6AXPAXPBVhkClass@@VhkBool@@0@ZHABQ6AX0120@ZU?$hkTraitBool@$00@@@Z;
// public: static void hkArrayUtil::construct<class hkStringPtr>(class hkStringPtr *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<class hkProcess *>::_spliceInto(class hkMemoryAllocator &, int, int, class hkProcess *const *, int);
// public: int hkArrayBase<struct hkVisualDebuggerClient>::getCapacity(void) const;
// public: void hkArrayBase<struct hkVisualDebuggerClient>::clear(void);
// public: static void hkArrayBase<class hkProcessContext *>::copy(class hkProcessContext **, class hkProcessContext *const *, int);
// public: void hkArrayBase<struct hkVisualDebuggerTrackedObject>::clear(void);
// public: void hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::clear(void);
// public: int hkArrayBase<class hkProcess *>::getCapacity(void) const;
// public: void hkArrayBase<class hkProcess *>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<class hkProcess *>(class hkProcess **, int, struct hkTraitBool<1>);
// public: static void hkArrayUtil::constructWithArray<class hkProcess *>(class hkProcess **, int, class hkProcess *const *, struct hkTraitBool<1>);

//public: hkVisualDebugger::hkVisualDebugger(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> const &, class hkVtableClassRegistry const *)
//{
//    mangled_ppc("??0hkVisualDebugger@@QAA@ABV?$hkArray@PAVhkProcessContext@@UhkContainerHeapAllocator@@@@PBVhkVtableClassRegistry@@@Z");
//};

//public: virtual hkVisualDebugger::~hkVisualDebugger(void)
//{
//    mangled_ppc("??1hkVisualDebugger@@UAA@XZ");
//};

//public: void hkVisualDebugger::shutdown(void)
//{
//    mangled_ppc("?shutdown@hkVisualDebugger@@QAAXXZ");
//};

//public: void hkVisualDebugger::serve(int)
//{
//    mangled_ppc("?serve@hkVisualDebugger@@QAAXH@Z");
//};

//public: void hkVisualDebugger::capture(char const *)
//{
//    mangled_ppc("?capture@hkVisualDebugger@@QAAXPBD@Z");
//};

//public: void hkVisualDebugger::endCapture(void)
//{
//    mangled_ppc("?endCapture@hkVisualDebugger@@QAAXXZ");
//};

//protected: void hkVisualDebugger::deleteClient(int)
//{
//    mangled_ppc("?deleteClient@hkVisualDebugger@@IAAXH@Z");
//};

//protected: void hkVisualDebugger::createClient(class hkSocket *, class hkStreamReader *, class hkStreamWriter *)
//{
//    mangled_ppc("?createClient@hkVisualDebugger@@IAAXPAVhkSocket@@PAVhkStreamReader@@PAVhkStreamWriter@@@Z");
//};

//public: void hkVisualDebugger::SupressPollForNewClient(bool)
//{
//    mangled_ppc("?SupressPollForNewClient@hkVisualDebugger@@QAAX_N@Z");
//};

//public: virtual void hkVisualDebugger::pollForNewClients(void)
//{
//    mangled_ppc("?pollForNewClients@hkVisualDebugger@@UAAXXZ");
//};

//protected: void hkVisualDebugger::writeStep(int, float)
//{
//    mangled_ppc("?writeStep@hkVisualDebugger@@IAAXHM@Z");
//};

//public: virtual void hkVisualDebugger::step(float)
//{
//    mangled_ppc("?step@hkVisualDebugger@@UAAXM@Z");
//};

//public: void hkVisualDebugger::addDefaultProcess(char const *)
//{
//    mangled_ppc("?addDefaultProcess@hkVisualDebugger@@QAAXPBD@Z");
//};

//public: void hkVisualDebugger::removeDefaultProcess(char const *)
//{
//    mangled_ppc("?removeDefaultProcess@hkVisualDebugger@@QAAXPBD@Z");
//};

//public: void hkVisualDebugger::addTrackedObject(void *, class hkClass const &, char const *)
//{
//    mangled_ppc("?addTrackedObject@hkVisualDebugger@@QAAXPAXABVhkClass@@PBD@Z");
//};

//public: void hkVisualDebugger::removeTrackedObject(void *)
//{
//    mangled_ppc("?removeTrackedObject@hkVisualDebugger@@QAAXPAX@Z");
//};

//public: void hkVisualDebugger::addTrackedObjectCallback(void (*)(void *, class hkClass const *, class hkBool, void *), void *)
//{
//    mangled_ppc("?addTrackedObjectCallback@hkVisualDebugger@@QAAXP6AXPAXPBVhkClass@@VhkBool@@0@Z0@Z");
//};

//public: void hkVisualDebugger::removeTrackedObjectCallback(void (*)(void *, class hkClass const *, class hkBool, void *))
//{
//    mangled_ppc("?removeTrackedObjectCallback@hkVisualDebugger@@QAAXP6AXPAXPBVhkClass@@VhkBool@@0@Z@Z");
//};

//public: void hkVisualDebugger::getCurrentProcesses(class hkArray<class hkProcess *, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?getCurrentProcesses@hkVisualDebugger@@QAAXAAV?$hkArray@PAVhkProcess@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: hkStopwatch::hkStopwatch(char const *)
//{
//    mangled_ppc("??0hkStopwatch@@QAA@PBD@Z");
//};

//public: void hkStopwatch::reset(void)
//{
//    mangled_ppc("?reset@hkStopwatch@@QAAXXZ");
//};

//public: static char const * hkDebugDisplayProcess::getName(void)
//{
//    mangled_ppc("?getName@hkDebugDisplayProcess@@SAPBDXZ");
//};

//merged_84813568
//{
//    mangled_ppc("merged_84813568");
//};

//public: static void hkVisualDebugger::operator delete(void *)
//{
//    mangled_ppc("??3hkVisualDebugger@@SAXPAX@Z");
//};

//public: static void * hkServerProcessHandler::operator new(unsigned int)
//{
//    mangled_ppc("??2hkServerProcessHandler@@SAPAXI@Z");
//};

//public: class hkStreamReader & hkSocket::getReader(void)
//{
//    mangled_ppc("?getReader@hkSocket@@QAAAAVhkStreamReader@@XZ");
//};

//public: class hkStreamWriter & hkSocket::getWriter(void)
//{
//    mangled_ppc("?getWriter@hkSocket@@QAAAAVhkStreamWriter@@XZ");
//};

//public: void hkStopwatch::start(void)
//{
//    mangled_ppc("?start@hkStopwatch@@QAAXXZ");
//};

//public: void hkStopwatch::stop(void)
//{
//    mangled_ppc("?stop@hkStopwatch@@QAAXXZ");
//};

//public: class hkBool hkStopwatch::isRunning(void) const
//{
//    mangled_ppc("?isRunning@hkStopwatch@@QBA?AVhkBool@@XZ");
//};

//public: float hkStopwatch::getElapsedSeconds(void) const
//{
//    mangled_ppc("?getElapsedSeconds@hkStopwatch@@QBAMXZ");
//};

//public: unsigned __int64 hkStopwatch::getElapsedTicks(void) const
//{
//    mangled_ppc("?getElapsedTicks@hkStopwatch@@QBA_KXZ");
//};

//public: class hkArray<class hkProcess *, struct hkContainerHeapAllocator> const & hkServerProcessHandler::getProcessList(void) const
//{
//    mangled_ppc("?getProcessList@hkServerProcessHandler@@QBAABV?$hkArray@PAVhkProcess@@UhkContainerHeapAllocator@@@@XZ");
//};

//public: hkArray<struct hkVisualDebuggerClient, struct hkContainerHeapAllocator>::hkArray<struct hkVisualDebuggerClient, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UhkVisualDebuggerClient@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct hkVisualDebuggerClient * hkArray<struct hkVisualDebuggerClient, struct hkContainerHeapAllocator>::expandBy(int)
//{
//    mangled_ppc("?expandBy@?$hkArray@UhkVisualDebuggerClient@@UhkContainerHeapAllocator@@@@QAAPAUhkVisualDebuggerClient@@H@Z");
//};

//public: hkArray<class hkProcessContext *, struct hkContainerHeapAllocator>::hkArray<class hkProcessContext *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkProcessContext@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<struct hkVisualDebuggerTrackedObject, struct hkContainerHeapAllocator>::hkArray<struct hkVisualDebuggerTrackedObject, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UhkVisualDebuggerTrackedObject@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct hkVisualDebuggerTrackedObject & hkArray<struct hkVisualDebuggerTrackedObject, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UhkVisualDebuggerTrackedObject@@UhkContainerHeapAllocator@@@@QAAAAUhkVisualDebuggerTrackedObject@@XZ");
//};

//public: hkArray<void (*)(void *, class hkClass const *, class hkBool, void *), struct hkContainerHeapAllocator>::hkArray<void (*)(void *, class hkClass const *, class hkBool, void *), struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@P6AXPAXPBVhkClass@@VhkBool@@0@ZUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//?pushBack@?$hkArray@P6AXPAXPBVhkClass@@VhkBool@@0@ZUhkContainerHeapAllocator@@@@QAAXABQ6AXPAXPBVhkClass@@VhkBool@@0@Z@Z
//{
//    mangled_ppc("?pushBack@?$hkArray@P6AXPAXPBVhkClass@@VhkBool@@0@ZUhkContainerHeapAllocator@@@@QAAXABQ6AXPAXPBVhkClass@@VhkBool@@0@Z@Z");
//};

//public: hkArray<class hkStringPtr, struct hkContainerHeapAllocator>::hkArray<class hkStringPtr, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@VhkStringPtr@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: class hkStringPtr & hkArray<class hkStringPtr, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@VhkStringPtr@@UhkContainerHeapAllocator@@@@QAAAAVhkStringPtr@@XZ");
//};

//public: void hkArray<class hkProcess *, struct hkContainerHeapAllocator>::insertAt(int, class hkProcess *const *, int)
//{
//    mangled_ppc("?insertAt@?$hkArray@PAVhkProcess@@UhkContainerHeapAllocator@@@@QAAXHPBQAVhkProcess@@H@Z");
//};

//public: hkArrayBase<struct hkVisualDebuggerClient>::hkArrayBase<struct hkVisualDebuggerClient>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkVisualDebuggerClient@@@@QAA@XZ");
//};

//public: struct hkVisualDebuggerClient & hkArrayBase<struct hkVisualDebuggerClient>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UhkVisualDebuggerClient@@@@QAAAAUhkVisualDebuggerClient@@H@Z");
//};

//public: struct hkVisualDebuggerClient & hkArrayBase<struct hkVisualDebuggerClient>::back(void)
//{
//    mangled_ppc("?back@?$hkArrayBase@UhkVisualDebuggerClient@@@@QAAAAUhkVisualDebuggerClient@@XZ");
//};

//public: int hkArrayBase<struct hkVisualDebuggerClient>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UhkVisualDebuggerClient@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkVisualDebuggerClient>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@UhkVisualDebuggerClient@@@@QAAXH@Z");
//};

//public: struct hkVisualDebuggerClient * hkArrayBase<struct hkVisualDebuggerClient>::_expandBy(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_expandBy@?$hkArrayBase@UhkVisualDebuggerClient@@@@QAAPAUhkVisualDebuggerClient@@AAVhkMemoryAllocator@@H@Z");
//};

//public: hkArray<struct hkVisualDebuggerClient, struct hkContainerHeapAllocator>::~hkArray<struct hkVisualDebuggerClient, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkVisualDebuggerClient@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkVisualDebuggerClient>::~hkArrayBase<struct hkVisualDebuggerClient>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkVisualDebuggerClient@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkProcessContext *>::hkArrayBase<class hkProcessContext *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkProcessContext@@@@QAA@XZ");
//};

//public: class hkProcessContext *& hkArrayBase<class hkProcessContext *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkProcessContext@@@@QAAAAPAVhkProcessContext@@H@Z");
//};

//public: class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> & hkArray<class hkProcessContext *, struct hkContainerHeapAllocator>::operator=(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??4?$hkArray@PAVhkProcessContext@@UhkContainerHeapAllocator@@@@QAAAAV0@ABV0@@Z");
//};

//public: hkArrayBase<struct hkVisualDebuggerTrackedObject>::hkArrayBase<struct hkVisualDebuggerTrackedObject>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UhkVisualDebuggerTrackedObject@@@@QAA@XZ");
//};

//public: struct hkVisualDebuggerTrackedObject & hkArrayBase<struct hkVisualDebuggerTrackedObject>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UhkVisualDebuggerTrackedObject@@@@QAAAAUhkVisualDebuggerTrackedObject@@H@Z");
//};

//public: int hkArrayBase<struct hkVisualDebuggerTrackedObject>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UhkVisualDebuggerTrackedObject@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkVisualDebuggerTrackedObject>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@UhkVisualDebuggerTrackedObject@@@@QAAXH@Z");
//};

//public: struct hkVisualDebuggerTrackedObject & hkArrayBase<struct hkVisualDebuggerTrackedObject>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UhkVisualDebuggerTrackedObject@@@@QAAAAUhkVisualDebuggerTrackedObject@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<struct hkVisualDebuggerTrackedObject, struct hkContainerHeapAllocator>::~hkArray<struct hkVisualDebuggerTrackedObject, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UhkVisualDebuggerTrackedObject@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkVisualDebuggerTrackedObject>::~hkArrayBase<struct hkVisualDebuggerTrackedObject>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UhkVisualDebuggerTrackedObject@@@@QAA@XZ");
//};

//public: hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@P6AXPAXPBVhkClass@@VhkBool@@0@Z@@QAA@XZ");
//};

//public: void (*& hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::operator[](int))(void *, class hkClass const *, class hkBool, void *)
//{
//    mangled_ppc("??A?$hkArrayBase@P6AXPAXPBVhkClass@@VhkBool@@0@Z@@QAAAAP6AXPAXPBVhkClass@@VhkBool@@0@ZH@Z");
//};

//public: int hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@P6AXPAXPBVhkClass@@VhkBool@@0@Z@@QBAHXZ");
//};

//public: void hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@P6AXPAXPBVhkClass@@VhkBool@@0@Z@@QAAXH@Z");
//};

//?indexOf@?$hkArrayBase@P6AXPAXPBVhkClass@@VhkBool@@0@Z@@QBAHABQ6AXPAXPBVhkClass@@VhkBool@@0@ZHH@Z
//{
//    mangled_ppc("?indexOf@?$hkArrayBase@P6AXPAXPBVhkClass@@VhkBool@@0@Z@@QBAHABQ6AXPAXPBVhkClass@@VhkBool@@0@ZHH@Z");
//};

//?_pushBack@?$hkArrayBase@P6AXPAXPBVhkClass@@VhkBool@@0@Z@@QAAXAAVhkMemoryAllocator@@ABQ6AXPAXPBVhkClass@@VhkBool@@1@Z@Z
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@P6AXPAXPBVhkClass@@VhkBool@@0@Z@@QAAXAAVhkMemoryAllocator@@ABQ6AXPAXPBVhkClass@@VhkBool@@1@Z@Z");
//};

//public: hkArray<void (*)(void *, class hkClass const *, class hkBool, void *), struct hkContainerHeapAllocator>::~hkArray<void (*)(void *, class hkClass const *, class hkBool, void *), struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@P6AXPAXPBVhkClass@@VhkBool@@0@ZUhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::~hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@P6AXPAXPBVhkClass@@VhkBool@@0@Z@@QAA@XZ");
//};

//public: hkArrayBase<class hkStringPtr>::hkArrayBase<class hkStringPtr>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@VhkStringPtr@@@@QAA@XZ");
//};

//public: class hkStringPtr & hkArrayBase<class hkStringPtr>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@VhkStringPtr@@@@QAAAAVhkStringPtr@@H@Z");
//};

//public: int hkArrayBase<class hkStringPtr>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@VhkStringPtr@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkStringPtr>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@VhkStringPtr@@@@QAAXH@Z");
//};

//public: class hkStringPtr & hkArrayBase<class hkStringPtr>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@VhkStringPtr@@@@QAAAAVhkStringPtr@@AAVhkMemoryAllocator@@@Z");
//};

//public: int hkArrayBase<class hkProcess *>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@PAVhkProcess@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkProcess *>::_insertAt(class hkMemoryAllocator &, int, class hkProcess *const *, int)
//{
//    mangled_ppc("?_insertAt@?$hkArrayBase@PAVhkProcess@@@@QAAXAAVhkMemoryAllocator@@HPBQAVhkProcess@@H@Z");
//};

//public: class hkProcess *const * hkArrayBase<class hkProcess *>::begin(void) const
//{
//    mangled_ppc("?begin@?$hkArrayBase@PAVhkProcess@@@@QBAPBQAVhkProcess@@XZ");
//};

//public: void hkArray<struct hkVisualDebuggerClient, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkVisualDebuggerClient@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkVisualDebuggerTrackedObject, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UhkVisualDebuggerTrackedObject@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<void (*)(void *, class hkClass const *, class hkBool, void *), struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@P6AXPAXPBVhkClass@@VhkBool@@0@ZUhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<struct hkVisualDebuggerClient>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkVisualDebuggerClient@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkVisualDebuggerClient>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UhkVisualDebuggerClient@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkVisualDebuggerClient>(struct hkVisualDebuggerClient *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkVisualDebuggerClient@@@hkArrayUtil@@SAXPAUhkVisualDebuggerClient@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkVisualDebuggerClient>(struct hkVisualDebuggerClient *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkVisualDebuggerClient@@@hkArrayUtil@@SAXPAUhkVisualDebuggerClient@@HU?$hkTraitBool@$0A@@@@Z");
//};

//protected: class hkArrayBase<class hkProcessContext *> & hkArrayBase<class hkProcessContext *>::copyFromArray(class hkMemoryAllocator &, class hkArrayBase<class hkProcessContext *> const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("?copyFromArray@?$hkArrayBase@PAVhkProcessContext@@@@IAAAAV1@AAVhkMemoryAllocator@@ABV1@U?$hkTraitBool@$00@@@Z");
//};

//public: int hkArrayBase<struct hkVisualDebuggerTrackedObject>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkVisualDebuggerTrackedObject@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkVisualDebuggerTrackedObject>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UhkVisualDebuggerTrackedObject@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkVisualDebuggerTrackedObject>(struct hkVisualDebuggerTrackedObject *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UhkVisualDebuggerTrackedObject@@@hkArrayUtil@@SAXPAUhkVisualDebuggerTrackedObject@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkVisualDebuggerTrackedObject>(struct hkVisualDebuggerTrackedObject *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UhkVisualDebuggerTrackedObject@@@hkArrayUtil@@SAXPAUhkVisualDebuggerTrackedObject@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: int hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@P6AXPAXPBVhkClass@@VhkBool@@0@Z@@QBAHXZ");
//};

//public: void hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@P6AXPAXPBVhkClass@@VhkBool@@0@Z@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::destruct<void (*)(void *, class hkClass const *, class hkBool, void *)>(void (**)(void *, class hkClass const *, class hkBool, void *), int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@P6AXPAXPBVhkClass@@VhkBool@@0@Z@hkArrayUtil@@SAXPAP6AXPAXPBVhkClass@@VhkBool@@0@ZHU?$hkTraitBool@$00@@@Z");
//};

//??$constructWithCopy@P6AXPAXPBVhkClass@@VhkBool@@0@Z@hkArrayUtil@@SAXPAP6AXPAXPBVhkClass@@VhkBool@@0@ZHABQ6AX0120@ZU?$hkTraitBool@$00@@@Z
//{
//    mangled_ppc("??$constructWithCopy@P6AXPAXPBVhkClass@@VhkBool@@0@Z@hkArrayUtil@@SAXPAP6AXPAXPBVhkClass@@VhkBool@@0@ZHABQ6AX0120@ZU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::construct<class hkStringPtr>(class hkStringPtr *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@VhkStringPtr@@@hkArrayUtil@@SAXPAVhkStringPtr@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<class hkProcess *>::_spliceInto(class hkMemoryAllocator &, int, int, class hkProcess *const *, int)
//{
//    mangled_ppc("?_spliceInto@?$hkArrayBase@PAVhkProcess@@@@QAAXAAVhkMemoryAllocator@@HHPBQAVhkProcess@@H@Z");
//};

//public: int hkArrayBase<struct hkVisualDebuggerClient>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UhkVisualDebuggerClient@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkVisualDebuggerClient>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkVisualDebuggerClient@@@@QAAXXZ");
//};

//public: static void hkArrayBase<class hkProcessContext *>::copy(class hkProcessContext **, class hkProcessContext *const *, int)
//{
//    mangled_ppc("?copy@?$hkArrayBase@PAVhkProcessContext@@@@SAXPAPAVhkProcessContext@@PBQAV2@H@Z");
//};

//public: void hkArrayBase<struct hkVisualDebuggerTrackedObject>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UhkVisualDebuggerTrackedObject@@@@QAAXXZ");
//};

//public: void hkArrayBase<void (*)(void *, class hkClass const *, class hkBool, void *)>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@P6AXPAXPBVhkClass@@VhkBool@@0@Z@@QAAXXZ");
//};

//public: int hkArrayBase<class hkProcess *>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@PAVhkProcess@@@@QBAHXZ");
//};

//public: void hkArrayBase<class hkProcess *>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@PAVhkProcess@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<class hkProcess *>(class hkProcess **, int, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$destruct@PAVhkProcess@@@hkArrayUtil@@SAXPAPAVhkProcess@@HU?$hkTraitBool@$00@@@Z");
//};

//public: static void hkArrayUtil::constructWithArray<class hkProcess *>(class hkProcess **, int, class hkProcess *const *, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithArray@PAVhkProcess@@@hkArrayUtil@@SAXPAPAVhkProcess@@HPBQAV1@U?$hkTraitBool@$00@@@Z");
//};

