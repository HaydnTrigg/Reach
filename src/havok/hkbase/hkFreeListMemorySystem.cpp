/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const hkFreeListMemorySystem::`RTTI Complete Object Locator'; // "??_R4hkFreeListMemorySystem@@6B@"
// hkFreeListMemorySystem::`RTTI Class Hierarchy Descriptor'; // "??_R3hkFreeListMemorySystem@@8"
// hkFreeListMemorySystem::`RTTI Base Class Array'; // "??_R2hkFreeListMemorySystem@@8"
// hkFreeListMemorySystem::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkFreeListMemorySystem@@8"
// const hkLeakDetectAllocator::`RTTI Complete Object Locator'; // "??_R4hkLeakDetectAllocator@@6B@"
// hkLeakDetectAllocator::`RTTI Class Hierarchy Descriptor'; // "??_R3hkLeakDetectAllocator@@8"
// hkLeakDetectAllocator::`RTTI Base Class Array'; // "??_R2hkLeakDetectAllocator@@8"
// hkLeakDetectAllocator::`RTTI Base Class Descriptor at (0, -1, 0, 64)'; // "??_R1A@?0A@EA@hkLeakDetectAllocator@@8"
// class hkFreeListMemorySystem::`RTTI Type Descriptor'; // "??_R0?AVhkFreeListMemorySystem@@@8"
// class hkLeakDetectAllocator::`RTTI Type Descriptor'; // "??_R0?AVhkLeakDetectAllocator@@@8"
// class hkFreeListAllocator *s_freeListMemory; // "?s_freeListMemory@@3PAVhkFreeListAllocator@@A"

// public: hkFreeListMemorySystem::hkFreeListMemorySystem(void);
// public: virtual hkFreeListMemorySystem::~hkFreeListMemorySystem(void);
// public: virtual class hkMemoryRouter * hkFreeListMemorySystem::mainInit(struct hkMemorySystem::FrameInfo const &, class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual void hkFreeListMemorySystem::mainQuit(class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual void hkFreeListMemorySystem::threadInit(class hkMemoryRouter &, char const *, class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual void hkFreeListMemorySystem::threadQuit(class hkMemoryRouter &, class hkFlags<enum hkMemorySystem::FlagBits, int>);
// public: virtual void hkFreeListMemorySystem::printStatistics(class hkOstream &);
// public: void hkFreeListMemorySystem::setAllocator(class hkMemoryAllocator *);
// public: virtual enum hkResult hkFreeListMemorySystem::walkMemory(void (*)(void *, unsigned int, class hkBool, int, void *), void *);
// public: virtual void hkFreeListMemorySystem::getMemoryStatistics(struct hkMemorySystem::MemoryStatistics &);
// public: virtual enum hkResult hkFreeListMemorySystem::getMemorySnapshot(class hkDebugMemorySnapshot &);
// public: hkFreeListMemorySystem::ThreadData::ThreadData(void);
// merged_83EE4208;
// public: hkLeakDetectAllocator::hkLeakDetectAllocator(void);
// public: hkStackTracer::CallTree::CallTree(void);
// merged_83EE42E0;
// public: virtual hkLeakDetectAllocator::~hkLeakDetectAllocator(void);
// public: hkStackTracer::CallTree::~CallTree(void);
// public: hkFreeListMemorySystem::ThreadData::~ThreadData(void);
// public: int hkSolverAllocator::getBufferSize(void);
// public: void * hkMemoryRouter::getUserData(void) const;
// public: void hkMemoryRouter::setUserData(void *);
// int hkGetByteOffsetInt(void const *, void const *);
// public: void hkSystemMemoryBlockServer::setAllocator(class hkMemoryAllocator *);
// public: hkArrayBase<struct hkStackTracer::CallTree::Node>::hkArrayBase<struct hkStackTracer::CallTree::Node>(void);
// public: hkArrayBase<struct hkStackTracer::CallTree::Node>::~hkArrayBase<struct hkStackTracer::CallTree::Node>(void);

//public: hkFreeListMemorySystem::hkFreeListMemorySystem(void)
//{
//    mangled_ppc("??0hkFreeListMemorySystem@@QAA@XZ");
//};

//public: virtual hkFreeListMemorySystem::~hkFreeListMemorySystem(void)
//{
//    mangled_ppc("??1hkFreeListMemorySystem@@UAA@XZ");
//};

//public: virtual class hkMemoryRouter * hkFreeListMemorySystem::mainInit(struct hkMemorySystem::FrameInfo const &, class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?mainInit@hkFreeListMemorySystem@@UAAPAVhkMemoryRouter@@ABUFrameInfo@hkMemorySystem@@V?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual void hkFreeListMemorySystem::mainQuit(class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?mainQuit@hkFreeListMemorySystem@@UAAXV?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual void hkFreeListMemorySystem::threadInit(class hkMemoryRouter &, char const *, class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?threadInit@hkFreeListMemorySystem@@UAAXAAVhkMemoryRouter@@PBDV?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual void hkFreeListMemorySystem::threadQuit(class hkMemoryRouter &, class hkFlags<enum hkMemorySystem::FlagBits, int>)
//{
//    mangled_ppc("?threadQuit@hkFreeListMemorySystem@@UAAXAAVhkMemoryRouter@@V?$hkFlags@W4FlagBits@hkMemorySystem@@H@@@Z");
//};

//public: virtual void hkFreeListMemorySystem::printStatistics(class hkOstream &)
//{
//    mangled_ppc("?printStatistics@hkFreeListMemorySystem@@UAAXAAVhkOstream@@@Z");
//};

//public: void hkFreeListMemorySystem::setAllocator(class hkMemoryAllocator *)
//{
//    mangled_ppc("?setAllocator@hkFreeListMemorySystem@@QAAXPAVhkMemoryAllocator@@@Z");
//};

//public: virtual enum hkResult hkFreeListMemorySystem::walkMemory(void (*)(void *, unsigned int, class hkBool, int, void *), void *)
//{
//    mangled_ppc("?walkMemory@hkFreeListMemorySystem@@UAA?AW4hkResult@@P6AXPAXIVhkBool@@H0@Z0@Z");
//};

//public: virtual void hkFreeListMemorySystem::getMemoryStatistics(struct hkMemorySystem::MemoryStatistics &)
//{
//    mangled_ppc("?getMemoryStatistics@hkFreeListMemorySystem@@UAAXAAUMemoryStatistics@hkMemorySystem@@@Z");
//};

//public: virtual enum hkResult hkFreeListMemorySystem::getMemorySnapshot(class hkDebugMemorySnapshot &)
//{
//    mangled_ppc("?getMemorySnapshot@hkFreeListMemorySystem@@UAA?AW4hkResult@@AAVhkDebugMemorySnapshot@@@Z");
//};

//public: hkFreeListMemorySystem::ThreadData::ThreadData(void)
//{
//    mangled_ppc("??0ThreadData@hkFreeListMemorySystem@@QAA@XZ");
//};

//merged_83EE4208
//{
//    mangled_ppc("merged_83EE4208");
//};

//public: hkLeakDetectAllocator::hkLeakDetectAllocator(void)
//{
//    mangled_ppc("??0hkLeakDetectAllocator@@QAA@XZ");
//};

//public: hkStackTracer::CallTree::CallTree(void)
//{
//    mangled_ppc("??0CallTree@hkStackTracer@@QAA@XZ");
//};

//merged_83EE42E0
//{
//    mangled_ppc("merged_83EE42E0");
//};

//public: virtual hkLeakDetectAllocator::~hkLeakDetectAllocator(void)
//{
//    mangled_ppc("??1hkLeakDetectAllocator@@UAA@XZ");
//};

//public: hkStackTracer::CallTree::~CallTree(void)
//{
//    mangled_ppc("??1CallTree@hkStackTracer@@QAA@XZ");
//};

//public: hkFreeListMemorySystem::ThreadData::~ThreadData(void)
//{
//    mangled_ppc("??1ThreadData@hkFreeListMemorySystem@@QAA@XZ");
//};

//public: int hkSolverAllocator::getBufferSize(void)
//{
//    mangled_ppc("?getBufferSize@hkSolverAllocator@@QAAHXZ");
//};

//public: void * hkMemoryRouter::getUserData(void) const
//{
//    mangled_ppc("?getUserData@hkMemoryRouter@@QBAPAXXZ");
//};

//public: void hkMemoryRouter::setUserData(void *)
//{
//    mangled_ppc("?setUserData@hkMemoryRouter@@QAAXPAX@Z");
//};

//int hkGetByteOffsetInt(void const *, void const *)
//{
//    mangled_ppc("?hkGetByteOffsetInt@@YAHPBX0@Z");
//};

//public: void hkSystemMemoryBlockServer::setAllocator(class hkMemoryAllocator *)
//{
//    mangled_ppc("?setAllocator@hkSystemMemoryBlockServer@@QAAXPAVhkMemoryAllocator@@@Z");
//};

//public: hkArrayBase<struct hkStackTracer::CallTree::Node>::hkArrayBase<struct hkStackTracer::CallTree::Node>(void)
//{
//    mangled_ppc("??0?$hkArrayBase@UNode@CallTree@hkStackTracer@@@@QAA@XZ");
//};

//public: hkArrayBase<struct hkStackTracer::CallTree::Node>::~hkArrayBase<struct hkStackTracer::CallTree::Node>(void)
//{
//    mangled_ppc("??1?$hkArrayBase@UNode@CallTree@hkStackTracer@@@@QAA@XZ");
//};

