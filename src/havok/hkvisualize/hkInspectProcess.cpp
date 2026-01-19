/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkInspectProcess::`vftable'{for `hkProcess'}; // "??_7hkInspectProcess@@6BhkProcess@@@"
// const hkInspectProcess::`vftable'{for `hkReferencedObject'}; // "??_7hkInspectProcess@@6BhkReferencedObject@@@"
// const hkInspectProcess::`RTTI Complete Object Locator'{for `hkReferencedObject'}; // "??_R4hkInspectProcess@@6BhkReferencedObject@@@"
// hkInspectProcess::`RTTI Class Hierarchy Descriptor'; // "??_R3hkInspectProcess@@8"
// hkInspectProcess::`RTTI Base Class Array'; // "??_R2hkInspectProcess@@8"
// hkInspectProcess::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkInspectProcess@@8"
// const hkInspectProcess::`RTTI Complete Object Locator'{for `hkProcess'}; // "??_R4hkInspectProcess@@6BhkProcess@@@"
// class hkInspectProcess::`RTTI Type Descriptor'; // "??_R0?AVhkInspectProcess@@@8"
// protected: static int hkInspectProcess::m_tag; // "?m_tag@hkInspectProcess@@1HA"

// public: static class hkProcess * hkInspectProcess::create(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> const &);
// public: static void hkInspectProcess::registerProcess(void);
// public: hkInspectProcess::hkInspectProcess(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> const &);
// void myTrackedObjectCallback(void *, class hkClass const *, class hkBool, void *);
// public: virtual hkInspectProcess::~hkInspectProcess(void);
// public: virtual void hkInspectProcess::init(void);
// public: virtual void hkInspectProcess::step(float);
// public: virtual void hkInspectProcess::getConsumableCommands(unsigned char *&, int &);
// public: virtual void hkInspectProcess::consumeCommand(unsigned char);
// void * _FindMemberItem(void *, class hkArray<unsigned short, struct hkContainerHeapAllocator> const &, int, enum hkClassMember::Type, enum hkClassMember::Type, class hkClassMember const *);
// public: int hkInspectProcess::addTopLevelObject(void *, class hkClass const &);
// public: int hkInspectProcess::removeTopLevelObject(void *);
// public: int hkInspectProcess::writeObject(void const *, class hkClass const &, class hkBool, class hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator> &);
// public: static void * hkInspectProcess::operator new(unsigned int);
// public: static char const * hkInspectProcess::getName(void);
// public: virtual int hkInspectProcess::getProcessTag(void);
// merged_84821D70;
// public: static void hkInspectProcess::operator delete(void *);
// public: class hkArray<struct hkVisualDebuggerTrackedObject, struct hkContainerHeapAllocator> const & hkVisualDebugger::getTrackedObjects(void) const;
// public: unsigned short hkIArchive::read16u(void);
// public: unsigned int hkIArchive::read32u(void);
// public: class hkVtableClassRegistry const * hkVisualDebugger::getClassReg(void) const;
// public: hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator>::hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator>(void);
// public: void hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator>::setSize(int);
// public: struct hkInspectProcess::ObjectPair & hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator>::expandOne(void);
// public: hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>::hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>(void);
// public: struct hkVisualDebuggerTrackedObject const & hkArrayBase<struct hkVisualDebuggerTrackedObject>::operator[](int) const;
// public: hkArrayBase<struct hkInspectProcess::ObjectPair>::hkArrayBase<struct hkInspectProcess::ObjectPair>(void);
// public: struct hkInspectProcess::ObjectPair & hkArrayBase<struct hkInspectProcess::ObjectPair>::operator[](int);
// public: int hkArrayBase<struct hkInspectProcess::ObjectPair>::getSize(void) const;
// public: void hkArrayBase<struct hkInspectProcess::ObjectPair>::removeAt(int);
// public: void hkArrayBase<struct hkInspectProcess::ObjectPair>::_setSize(class hkMemoryAllocator &, int);
// public: struct hkInspectProcess::ObjectPair & hkArrayBase<struct hkInspectProcess::ObjectPair>::_expandOne(class hkMemoryAllocator &);
// public: hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator>::~hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkInspectProcess::ObjectPair>::~hkArrayBase<struct hkInspectProcess::ObjectPair>(void);
// public: hkArray<unsigned short, struct hkContainerHeapAllocator>::hkArray<unsigned short, struct hkContainerHeapAllocator>(int);
// public: hkArray<unsigned char, struct hkContainerHeapAllocator>::hkArray<unsigned char, struct hkContainerHeapAllocator>(int);
// public: hkArrayBase<struct hkObjectSerialize::GlobalFixup>::hkArrayBase<struct hkObjectSerialize::GlobalFixup>(void);
// public: struct hkObjectSerialize::GlobalFixup & hkArrayBase<struct hkObjectSerialize::GlobalFixup>::operator[](int);
// public: int hkArrayBase<struct hkObjectSerialize::GlobalFixup>::getSize(void) const;
// public: hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>::~hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<struct hkObjectSerialize::GlobalFixup>::~hkArrayBase<struct hkObjectSerialize::GlobalFixup>(void);
// public: void hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: int hkArrayBase<struct hkInspectProcess::ObjectPair>::getCapacity(void) const;
// public: void hkArrayBase<struct hkInspectProcess::ObjectPair>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkInspectProcess::ObjectPair>::_reserve(class hkMemoryAllocator &, int);
// public: static void hkArrayUtil::destruct<struct hkInspectProcess::ObjectPair>(struct hkInspectProcess::ObjectPair *, int, struct hkTraitBool<0>);
// public: static void hkArrayUtil::construct<struct hkInspectProcess::ObjectPair>(struct hkInspectProcess::ObjectPair *, int, struct hkTraitBool<0>);
// public: void hkArrayBase<unsigned short>::setOwnedData(unsigned short *, int, int);
// public: void hkArrayBase<struct hkObjectSerialize::GlobalFixup>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: void hkArrayBase<struct hkInspectProcess::ObjectPair>::clear(void);
// public: int hkArrayBase<struct hkObjectSerialize::GlobalFixup>::getCapacity(void) const;
// public: void hkArrayBase<struct hkObjectSerialize::GlobalFixup>::clear(void);
// public: static void hkArrayUtil::destruct<struct hkObjectSerialize::GlobalFixup>(struct hkObjectSerialize::GlobalFixup *, int, struct hkTraitBool<0>);
// [thunk]: public: virtual void * hkInspectProcess::`vector deleting destructor'(unsigned int);

//public: static class hkProcess * hkInspectProcess::create(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("?create@hkInspectProcess@@SAPAVhkProcess@@ABV?$hkArray@PAVhkProcessContext@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static void hkInspectProcess::registerProcess(void)
//{
//    mangled_ppc("?registerProcess@hkInspectProcess@@SAXXZ");
//};

//public: hkInspectProcess::hkInspectProcess(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> const &)
//{
//    mangled_ppc("??0hkInspectProcess@@QAA@ABV?$hkArray@PAVhkProcessContext@@UhkContainerHeapAllocator@@@@@Z");
//};

//void myTrackedObjectCallback(void *, class hkClass const *, class hkBool, void *)
//{
//    mangled_ppc("?myTrackedObjectCallback@@YAXPAXPBVhkClass@@VhkBool@@0@Z");
//};

//public: virtual hkInspectProcess::~hkInspectProcess(void)
//{
//    mangled_ppc("??1hkInspectProcess@@UAA@XZ");
//};

//public: virtual void hkInspectProcess::init(void)
//{
//    mangled_ppc("?init@hkInspectProcess@@UAAXXZ");
//};

//public: virtual void hkInspectProcess::step(float)
//{
//    mangled_ppc("?step@hkInspectProcess@@UAAXM@Z");
//};

//public: virtual void hkInspectProcess::getConsumableCommands(unsigned char *&, int &)
//{
//    mangled_ppc("?getConsumableCommands@hkInspectProcess@@UAAXAAPAEAAH@Z");
//};

//public: virtual void hkInspectProcess::consumeCommand(unsigned char)
//{
//    mangled_ppc("?consumeCommand@hkInspectProcess@@UAAXE@Z");
//};

//void * _FindMemberItem(void *, class hkArray<unsigned short, struct hkContainerHeapAllocator> const &, int, enum hkClassMember::Type, enum hkClassMember::Type, class hkClassMember const *)
//{
//    mangled_ppc("?_FindMemberItem@@YAPAXPAXABV?$hkArray@GUhkContainerHeapAllocator@@@@HW4Type@hkClassMember@@2PBV3@@Z");
//};

//public: int hkInspectProcess::addTopLevelObject(void *, class hkClass const &)
//{
//    mangled_ppc("?addTopLevelObject@hkInspectProcess@@QAAHPAXABVhkClass@@@Z");
//};

//public: int hkInspectProcess::removeTopLevelObject(void *)
//{
//    mangled_ppc("?removeTopLevelObject@hkInspectProcess@@QAAHPAX@Z");
//};

//public: int hkInspectProcess::writeObject(void const *, class hkClass const &, class hkBool, class hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator> &)
//{
//    mangled_ppc("?writeObject@hkInspectProcess@@QAAHPBXABVhkClass@@VhkBool@@AAV?$hkArray@UObjectPair@hkInspectProcess@@UhkContainerHeapAllocator@@@@@Z");
//};

//public: static void * hkInspectProcess::operator new(unsigned int)
//{
//    mangled_ppc("??2hkInspectProcess@@SAPAXI@Z");
//};

//public: static char const * hkInspectProcess::getName(void)
//{
//    mangled_ppc("?getName@hkInspectProcess@@SAPBDXZ");
//};

//public: virtual int hkInspectProcess::getProcessTag(void)
//{
//    mangled_ppc("?getProcessTag@hkInspectProcess@@UAAHXZ");
//};

//merged_84821D70
//{
//    mangled_ppc("merged_84821D70");
//};

//public: static void hkInspectProcess::operator delete(void *)
//{
//    mangled_ppc("??3hkInspectProcess@@SAXPAX@Z");
//};

//public: class hkArray<struct hkVisualDebuggerTrackedObject, struct hkContainerHeapAllocator> const & hkVisualDebugger::getTrackedObjects(void) const
//{
//    mangled_ppc("?getTrackedObjects@hkVisualDebugger@@QBAABV?$hkArray@UhkVisualDebuggerTrackedObject@@UhkContainerHeapAllocator@@@@XZ");
//};

//public: unsigned short hkIArchive::read16u(void)
//{
//    mangled_ppc("?read16u@hkIArchive@@QAAGXZ");
//};

//public: unsigned int hkIArchive::read32u(void)
//{
//    mangled_ppc("?read32u@hkIArchive@@QAAIXZ");
//};

//public: class hkVtableClassRegistry const * hkVisualDebugger::getClassReg(void) const
//{
//    mangled_ppc("?getClassReg@hkVisualDebugger@@QBAPBVhkVtableClassRegistry@@XZ");
//};

//public: hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator>::hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UObjectPair@hkInspectProcess@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator>::setSize(int)
//{
//    mangled_ppc("?setSize@?$hkArray@UObjectPair@hkInspectProcess@@UhkContainerHeapAllocator@@@@QAAXH@Z");
//};

//public: struct hkInspectProcess::ObjectPair & hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator>::expandOne(void)
//{
//    mangled_ppc("?expandOne@?$hkArray@UObjectPair@hkInspectProcess@@UhkContainerHeapAllocator@@@@QAAAAUObjectPair@hkInspectProcess@@XZ");
//};

//public: hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>::hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@UGlobalFixup@hkObjectSerialize@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: struct hkVisualDebuggerTrackedObject const & hkArrayBase<struct hkVisualDebuggerTrackedObject>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UhkVisualDebuggerTrackedObject@@@@QBAABUhkVisualDebuggerTrackedObject@@H@Z");
//};

//public: hkArrayBase<struct hkInspectProcess::ObjectPair>::hkArrayBase<struct hkInspectProcess::ObjectPair>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UObjectPair@hkInspectProcess@@@@QAA@XZ");
//};

//public: struct hkInspectProcess::ObjectPair & hkArrayBase<struct hkInspectProcess::ObjectPair>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UObjectPair@hkInspectProcess@@@@QAAAAUObjectPair@hkInspectProcess@@H@Z");
//};

//public: int hkArrayBase<struct hkInspectProcess::ObjectPair>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UObjectPair@hkInspectProcess@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkInspectProcess::ObjectPair>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@UObjectPair@hkInspectProcess@@@@QAAXH@Z");
//};

//public: void hkArrayBase<struct hkInspectProcess::ObjectPair>::_setSize(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_setSize@?$hkArrayBase@UObjectPair@hkInspectProcess@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: struct hkInspectProcess::ObjectPair & hkArrayBase<struct hkInspectProcess::ObjectPair>::_expandOne(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_expandOne@?$hkArrayBase@UObjectPair@hkInspectProcess@@@@QAAAAUObjectPair@hkInspectProcess@@AAVhkMemoryAllocator@@@Z");
//};

//public: hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator>::~hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UObjectPair@hkInspectProcess@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkInspectProcess::ObjectPair>::~hkArrayBase<struct hkInspectProcess::ObjectPair>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UObjectPair@hkInspectProcess@@@@QAA@XZ");
//};

//public: hkArray<unsigned short, struct hkContainerHeapAllocator>::hkArray<unsigned short, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkArray@GUhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkArray<unsigned char, struct hkContainerHeapAllocator>::hkArray<unsigned char, struct hkContainerHeapAllocator>(int)
//{
//    mangled_ppc("??0?$hkArray@EUhkContainerHeapAllocator@@@@QAA@H@Z");
//};

//public: hkArrayBase<struct hkObjectSerialize::GlobalFixup>::hkArrayBase<struct hkObjectSerialize::GlobalFixup>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UGlobalFixup@hkObjectSerialize@@@@QAA@XZ");
//};

//public: struct hkObjectSerialize::GlobalFixup & hkArrayBase<struct hkObjectSerialize::GlobalFixup>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@UGlobalFixup@hkObjectSerialize@@@@QAAAAUGlobalFixup@hkObjectSerialize@@H@Z");
//};

//public: int hkArrayBase<struct hkObjectSerialize::GlobalFixup>::getSize(void) const
//{
//    mangled_ppc("?getSize@?$hkArrayBase@UGlobalFixup@hkObjectSerialize@@@@QBAHXZ");
//};

//public: hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>::~hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@UGlobalFixup@hkObjectSerialize@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkObjectSerialize::GlobalFixup>::~hkArrayBase<struct hkObjectSerialize::GlobalFixup>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UGlobalFixup@hkObjectSerialize@@@@QAA@XZ");
//};

//public: void hkArray<struct hkInspectProcess::ObjectPair, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UObjectPair@hkInspectProcess@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArray<struct hkObjectSerialize::GlobalFixup, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@UGlobalFixup@hkObjectSerialize@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkInspectProcess::ObjectPair>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UObjectPair@hkInspectProcess@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkInspectProcess::ObjectPair>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UObjectPair@hkInspectProcess@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkInspectProcess::ObjectPair>::_reserve(class hkMemoryAllocator &, int)
//{
//    mangled_ppc("?_reserve@?$hkArrayBase@UObjectPair@hkInspectProcess@@@@QAAXAAVhkMemoryAllocator@@H@Z");
//};

//public: static void hkArrayUtil::destruct<struct hkInspectProcess::ObjectPair>(struct hkInspectProcess::ObjectPair *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UObjectPair@hkInspectProcess@@@hkArrayUtil@@SAXPAUObjectPair@hkInspectProcess@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: static void hkArrayUtil::construct<struct hkInspectProcess::ObjectPair>(struct hkInspectProcess::ObjectPair *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$construct@UObjectPair@hkInspectProcess@@@hkArrayUtil@@SAXPAUObjectPair@hkInspectProcess@@HU?$hkTraitBool@$0A@@@@Z");
//};

//public: void hkArrayBase<unsigned short>::setOwnedData(unsigned short *, int, int)
//{
//    mangled_ppc("?setOwnedData@?$hkArrayBase@G@@QAAXPAGHH@Z");
//};

//public: void hkArrayBase<struct hkObjectSerialize::GlobalFixup>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@UGlobalFixup@hkObjectSerialize@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: void hkArrayBase<struct hkInspectProcess::ObjectPair>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UObjectPair@hkInspectProcess@@@@QAAXXZ");
//};

//public: int hkArrayBase<struct hkObjectSerialize::GlobalFixup>::getCapacity(void) const
//{
//    mangled_ppc("?getCapacity@?$hkArrayBase@UGlobalFixup@hkObjectSerialize@@@@QBAHXZ");
//};

//public: void hkArrayBase<struct hkObjectSerialize::GlobalFixup>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@UGlobalFixup@hkObjectSerialize@@@@QAAXXZ");
//};

//public: static void hkArrayUtil::destruct<struct hkObjectSerialize::GlobalFixup>(struct hkObjectSerialize::GlobalFixup *, int, struct hkTraitBool<0>)
//{
//    mangled_ppc("??$destruct@UGlobalFixup@hkObjectSerialize@@@hkArrayUtil@@SAXPAUGlobalFixup@hkObjectSerialize@@HU?$hkTraitBool@$0A@@@@Z");
//};

//[thunk]: public: virtual void * hkInspectProcess::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkInspectProcess@@W7AAPAXI@Z");
//};

