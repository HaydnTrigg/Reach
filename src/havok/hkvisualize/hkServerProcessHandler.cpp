/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkServerProcessHandler::`vftable'{for `hkProcess'}; // "??_7hkServerProcessHandler@@6BhkProcess@@@"
// const hkServerProcessHandler::`vftable'{for `hkProcessHandler'}; // "??_7hkServerProcessHandler@@6BhkProcessHandler@@@"
// const hkServerProcessHandler::`vftable'{for `hkReferencedObject'}; // "??_7hkServerProcessHandler@@6BhkReferencedObject@@@"
// const hkServerProcessHandler::`RTTI Complete Object Locator'{for `hkReferencedObject'}; // "??_R4hkServerProcessHandler@@6BhkReferencedObject@@@"
// hkServerProcessHandler::`RTTI Class Hierarchy Descriptor'; // "??_R3hkServerProcessHandler@@8"
// hkServerProcessHandler::`RTTI Base Class Array'; // "??_R2hkServerProcessHandler@@8"
// hkServerProcessHandler::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkServerProcessHandler@@8"
// hkProcessHandler::`RTTI Base Class Descriptor at (8, -1, 0, 64)'; // "??_R17?0A@EA@hkProcessHandler@@8"
// hkProcessHandler::`RTTI Class Hierarchy Descriptor'; // "??_R3hkProcessHandler@@8"
// hkProcessHandler::`RTTI Base Class Array'; // "??_R2hkProcessHandler@@8"
// hkProcessHandler::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkProcessHandler@@8"
// hkProcess::`RTTI Base Class Descriptor at (12, -1, 0, 64)'; // "??_R1M@?0A@EA@hkProcess@@8"
// const hkServerProcessHandler::`RTTI Complete Object Locator'{for `hkProcessHandler'}; // "??_R4hkServerProcessHandler@@6BhkProcessHandler@@@"
// const hkServerProcessHandler::`RTTI Complete Object Locator'{for `hkProcess'}; // "??_R4hkServerProcessHandler@@6BhkProcess@@@"
// const hkProcessHandler::`RTTI Complete Object Locator'; // "??_R4hkProcessHandler@@6B@"
// const hkCommandRouter::`RTTI Complete Object Locator'; // "??_R4hkCommandRouter@@6B@"
// hkCommandRouter::`RTTI Class Hierarchy Descriptor'; // "??_R3hkCommandRouter@@8"
// hkCommandRouter::`RTTI Base Class Array'; // "??_R2hkCommandRouter@@8"
// hkCommandRouter::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkCommandRouter@@8"
// class hkServerProcessHandler::`RTTI Type Descriptor'; // "??_R0?AVhkServerProcessHandler@@@8"
// class hkProcessHandler::`RTTI Type Descriptor'; // "??_R0?AVhkProcessHandler@@@8"
// class hkCommandRouter::`RTTI Type Descriptor'; // "??_R0?AVhkCommandRouter@@@8"
// protected: static int hkServerProcessHandler::m_tag; // "?m_tag@hkServerProcessHandler@@1HA"

// public: hkServerProcessHandler::hkServerProcessHandler(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> &, class hkStreamReader *, class hkStreamWriter *);
// public: virtual hkServerProcessHandler::~hkServerProcessHandler(void);
// public: virtual void hkServerProcessHandler::getConsumableCommands(unsigned char *&, int &);
// public: virtual void hkServerProcessHandler::consumeCommand(unsigned char);
// public: virtual enum hkResult hkServerProcessHandler::createProcess(int);
// protected: int hkServerProcessHandler::findProcessByTag(int);
// public: virtual enum hkResult hkServerProcessHandler::deleteProcess(int);
// public: virtual enum hkResult hkServerProcessHandler::registerProcess(char const *, int);
// public: enum hkResult hkServerProcessHandler::registerAllAvailableProcesss(void);
// public: virtual enum hkResult hkServerProcessHandler::selectProcess(int);
// public: virtual void hkServerProcessHandler::step(float);
// public: static void * hkDisplaySerializeOStream::operator new(unsigned int);
// public: static void * hkServerDebugDisplayHandler::operator new(unsigned int);
// public: virtual int hkServerProcessHandler::getProcessId(char const *);
// public: virtual char const * hkServerProcessHandler::getProcessName(int);
// public: virtual int hkServerProcessHandler::getProcessTag(void);
// public: static void * hkDisplaySerializeIStream::operator new(unsigned int);
// merged_8481FE88;
// public: static void hkServerProcessHandler::operator delete(void *);
// public: hkProcessHandler::hkProcessHandler(void);
// merged_8481FF48;
// public: virtual hkProcessHandler::~hkProcessHandler(void);
// public: hkCommandRouter::hkCommandRouter(void);
// merged_8481FFF0;
// public: static void hkCommandRouter::operator delete(void *);
// public: virtual hkCommandRouter::~hkCommandRouter(void);
// public: hkPointerMap<unsigned char, class hkProcess *, struct hkContainerHeapAllocator>::~hkPointerMap<unsigned char, class hkProcess *, struct hkContainerHeapAllocator>(void);
// public: hkPointerMap<unsigned char, class hkProcess *, struct hkContainerHeapAllocator>::hkPointerMap<unsigned char, class hkProcess *, struct hkContainerHeapAllocator>(void);
// public: hkArray<class hkProcess *, struct hkContainerHeapAllocator>::hkArray<class hkProcess *, struct hkContainerHeapAllocator>(void);
// public: void hkArray<class hkProcess *, struct hkContainerHeapAllocator>::pushBack(class hkProcess *const &);
// public: struct hkProcessFactory::ProcessIdPair const & hkArrayBase<struct hkProcessFactory::ProcessIdPair>::operator[](int) const;
// public: hkArrayBase<class hkProcess *>::hkArrayBase<class hkProcess *>(void);
// public: class hkProcess *& hkArrayBase<class hkProcess *>::operator[](int);
// public: void hkArrayBase<class hkProcess *>::removeAt(int);
// public: void hkArrayBase<class hkProcess *>::_pushBack(class hkMemoryAllocator &, class hkProcess *const &);
// public: hkArray<class hkProcess *, struct hkContainerHeapAllocator>::~hkArray<class hkProcess *, struct hkContainerHeapAllocator>(void);
// public: hkArrayBase<class hkProcess *>::~hkArrayBase<class hkProcess *>(void);
// public: void hkArray<class hkProcess *, struct hkContainerHeapAllocator>::clearAndDeallocate(void);
// public: void hkArrayBase<class hkProcess *>::_clearAndDeallocate(class hkMemoryAllocator &);
// public: static void hkArrayUtil::constructWithCopy<class hkProcess *>(class hkProcess **, int, class hkProcess *const &, struct hkTraitBool<1>);
// public: void hkArrayBase<class hkProcess *>::clear(void);
// [thunk]: public: virtual void * hkServerProcessHandler::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * hkServerProcessHandler::`vector deleting destructor'(unsigned int);

//public: hkServerProcessHandler::hkServerProcessHandler(class hkArray<class hkProcessContext *, struct hkContainerHeapAllocator> &, class hkStreamReader *, class hkStreamWriter *)
//{
//    mangled_ppc("??0hkServerProcessHandler@@QAA@AAV?$hkArray@PAVhkProcessContext@@UhkContainerHeapAllocator@@@@PAVhkStreamReader@@PAVhkStreamWriter@@@Z");
//};

//public: virtual hkServerProcessHandler::~hkServerProcessHandler(void)
//{
//    mangled_ppc("??1hkServerProcessHandler@@UAA@XZ");
//};

//public: virtual void hkServerProcessHandler::getConsumableCommands(unsigned char *&, int &)
//{
//    mangled_ppc("?getConsumableCommands@hkServerProcessHandler@@UAAXAAPAEAAH@Z");
//};

//public: virtual void hkServerProcessHandler::consumeCommand(unsigned char)
//{
//    mangled_ppc("?consumeCommand@hkServerProcessHandler@@UAAXE@Z");
//};

//public: virtual enum hkResult hkServerProcessHandler::createProcess(int)
//{
//    mangled_ppc("?createProcess@hkServerProcessHandler@@UAA?AW4hkResult@@H@Z");
//};

//protected: int hkServerProcessHandler::findProcessByTag(int)
//{
//    mangled_ppc("?findProcessByTag@hkServerProcessHandler@@IAAHH@Z");
//};

//public: virtual enum hkResult hkServerProcessHandler::deleteProcess(int)
//{
//    mangled_ppc("?deleteProcess@hkServerProcessHandler@@UAA?AW4hkResult@@H@Z");
//};

//public: virtual enum hkResult hkServerProcessHandler::registerProcess(char const *, int)
//{
//    mangled_ppc("?registerProcess@hkServerProcessHandler@@UAA?AW4hkResult@@PBDH@Z");
//};

//public: enum hkResult hkServerProcessHandler::registerAllAvailableProcesss(void)
//{
//    mangled_ppc("?registerAllAvailableProcesss@hkServerProcessHandler@@QAA?AW4hkResult@@XZ");
//};

//public: virtual enum hkResult hkServerProcessHandler::selectProcess(int)
//{
//    mangled_ppc("?selectProcess@hkServerProcessHandler@@UAA?AW4hkResult@@H@Z");
//};

//public: virtual void hkServerProcessHandler::step(float)
//{
//    mangled_ppc("?step@hkServerProcessHandler@@UAAXM@Z");
//};

//public: static void * hkDisplaySerializeOStream::operator new(unsigned int)
//{
//    mangled_ppc("??2hkDisplaySerializeOStream@@SAPAXI@Z");
//};

//public: static void * hkServerDebugDisplayHandler::operator new(unsigned int)
//{
//    mangled_ppc("??2hkServerDebugDisplayHandler@@SAPAXI@Z");
//};

//public: virtual int hkServerProcessHandler::getProcessId(char const *)
//{
//    mangled_ppc("?getProcessId@hkServerProcessHandler@@UAAHPBD@Z");
//};

//public: virtual char const * hkServerProcessHandler::getProcessName(int)
//{
//    mangled_ppc("?getProcessName@hkServerProcessHandler@@UAAPBDH@Z");
//};

//public: virtual int hkServerProcessHandler::getProcessTag(void)
//{
//    mangled_ppc("?getProcessTag@hkServerProcessHandler@@UAAHXZ");
//};

//public: static void * hkDisplaySerializeIStream::operator new(unsigned int)
//{
//    mangled_ppc("??2hkDisplaySerializeIStream@@SAPAXI@Z");
//};

//merged_8481FE88
//{
//    mangled_ppc("merged_8481FE88");
//};

//public: static void hkServerProcessHandler::operator delete(void *)
//{
//    mangled_ppc("??3hkServerProcessHandler@@SAXPAX@Z");
//};

//public: hkProcessHandler::hkProcessHandler(void)
//{
//    mangled_ppc("??0hkProcessHandler@@QAA@XZ");
//};

//merged_8481FF48
//{
//    mangled_ppc("merged_8481FF48");
//};

//public: virtual hkProcessHandler::~hkProcessHandler(void)
//{
//    mangled_ppc("??1hkProcessHandler@@UAA@XZ");
//};

//public: hkCommandRouter::hkCommandRouter(void)
//{
//    mangled_ppc("??0hkCommandRouter@@QAA@XZ");
//};

//merged_8481FFF0
//{
//    mangled_ppc("merged_8481FFF0");
//};

//public: static void hkCommandRouter::operator delete(void *)
//{
//    mangled_ppc("??3hkCommandRouter@@SAXPAX@Z");
//};

//public: virtual hkCommandRouter::~hkCommandRouter(void)
//{
//    mangled_ppc("??1hkCommandRouter@@UAA@XZ");
//};

//public: hkPointerMap<unsigned char, class hkProcess *, struct hkContainerHeapAllocator>::~hkPointerMap<unsigned char, class hkProcess *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkPointerMap@EPAVhkProcess@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkPointerMap<unsigned char, class hkProcess *, struct hkContainerHeapAllocator>::hkPointerMap<unsigned char, class hkProcess *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkPointerMap@EPAVhkProcess@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArray<class hkProcess *, struct hkContainerHeapAllocator>::hkArray<class hkProcess *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??0?$hkArray@PAVhkProcess@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: void hkArray<class hkProcess *, struct hkContainerHeapAllocator>::pushBack(class hkProcess *const &)
//{
//    mangled_ppc("?pushBack@?$hkArray@PAVhkProcess@@UhkContainerHeapAllocator@@@@QAAXABQAVhkProcess@@@Z");
//};

//public: struct hkProcessFactory::ProcessIdPair const & hkArrayBase<struct hkProcessFactory::ProcessIdPair>::operator[](int) const
//{
//    mangled_ppc("??A?$hkArrayBase@UProcessIdPair@hkProcessFactory@@@@QBAABUProcessIdPair@hkProcessFactory@@H@Z");
//};

//public: hkArrayBase<class hkProcess *>::hkArrayBase<class hkProcess *>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@PAVhkProcess@@@@QAA@XZ");
//};

//public: class hkProcess *& hkArrayBase<class hkProcess *>::operator[](int)
//{
//    mangled_ppc("??A?$hkArrayBase@PAVhkProcess@@@@QAAAAPAVhkProcess@@H@Z");
//};

//public: void hkArrayBase<class hkProcess *>::removeAt(int)
//{
//    mangled_ppc("?removeAt@?$hkArrayBase@PAVhkProcess@@@@QAAXH@Z");
//};

//public: void hkArrayBase<class hkProcess *>::_pushBack(class hkMemoryAllocator &, class hkProcess *const &)
//{
//    mangled_ppc("?_pushBack@?$hkArrayBase@PAVhkProcess@@@@QAAXAAVhkMemoryAllocator@@ABQAVhkProcess@@@Z");
//};

//public: hkArray<class hkProcess *, struct hkContainerHeapAllocator>::~hkArray<class hkProcess *, struct hkContainerHeapAllocator>(void)
//{
//    mangled_ppc("??1?$hkArray@PAVhkProcess@@UhkContainerHeapAllocator@@@@QAA@XZ");
//};

//public: hkArrayBase<class hkProcess *>::~hkArrayBase<class hkProcess *>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@PAVhkProcess@@@@QAA@XZ");
//};

//public: void hkArray<class hkProcess *, struct hkContainerHeapAllocator>::clearAndDeallocate(void)
//{
//    mangled_ppc("?clearAndDeallocate@?$hkArray@PAVhkProcess@@UhkContainerHeapAllocator@@@@QAAXXZ");
//};

//public: void hkArrayBase<class hkProcess *>::_clearAndDeallocate(class hkMemoryAllocator &)
//{
//    mangled_ppc("?_clearAndDeallocate@?$hkArrayBase@PAVhkProcess@@@@QAAXAAVhkMemoryAllocator@@@Z");
//};

//public: static void hkArrayUtil::constructWithCopy<class hkProcess *>(class hkProcess **, int, class hkProcess *const &, struct hkTraitBool<1>)
//{
//    mangled_ppc("??$constructWithCopy@PAVhkProcess@@@hkArrayUtil@@SAXPAPAVhkProcess@@HABQAV1@U?$hkTraitBool@$00@@@Z");
//};

//public: void hkArrayBase<class hkProcess *>::clear(void)
//{
//    mangled_ppc("?clear@?$hkArrayBase@PAVhkProcess@@@@QAAXXZ");
//};

//[thunk]: public: virtual void * hkServerProcessHandler::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkServerProcessHandler@@WM@AAPAXI@Z");
//};

//[thunk]: public: virtual void * hkServerProcessHandler::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_EhkServerProcessHandler@@W7AAPAXI@Z");
//};

