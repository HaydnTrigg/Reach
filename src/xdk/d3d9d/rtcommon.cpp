/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// g_RTGlobal; // "g_RTGlobal"
// int D3D::g_AllocDebugHeap; // "?g_AllocDebugHeap@D3D@@3HA"

// int D3D::ConsoleIsADK(void);
// void * D3D::RTMemDebugAllocPhysical(unsigned long, unsigned long, unsigned long);
// InitializeListHead;
// unsigned __int64 D3D::GetHashOfString(char const *);
// unsigned long D3D::NextMultipleSlow<unsigned long, int>(unsigned long, int);
// DmTell;
// void D3D::RTMemFreePhysical(void *, unsigned long);
// public: D3D::CRTCurrentMemoryTracker::CRTCurrentMemoryTracker(void);
// public: D3D::CRTTextureTracker::CRTTextureTracker(void);
// public: D3D::CRTResultsTracker::CRTResultsTracker(void);
// public: D3D::RTShadowState::RTShadowState(void);
// public: D3D::CRTCommandBufferHacker::CRTCommandBufferHacker(struct D3D::NonSnoopedWriteBacks volatile *);
// public: long D3D::CRTCommandBufferHacker::CleanUpThumbAndExport(void);
// public: D3D::CRTGlobalData::InitializationParameters::InitializationParameters(void);
// public: D3D::CRTGlobalData::CRTGlobalData(void);
// bool D3D::RTGracefulShutdownIsInProgress(void);
// public: void D3D::RTGracefulShutdownThreadScoped::Release(void);
// void D3D::RTBeginGracefulShutdown(void);
// void D3D::RTEndGracefulShutdown(void);
// void D3D::RT_XMCORE_MemFree(void *, void *);
// void D3D::DefaultTextureTrackerErrorCallback(char const *);
// public: void D3D::CTSSortedList<struct D3D::CVertexShaderHashEntry, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: long D3D::CRTCommandBufferHacker::Destroy(void);
// void * D3D::RT_XMCORE_MemAlloc(void *, unsigned long);
// public: long D3D::CRTGlobalData::EnableTextureTracking(void);
// public: void D3D::CTSHashTable<struct D3D::CVertexShaderHashEntry, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: long D3D::CDevice::RTEnableTextureTracking(void);
// public: long D3D::CRTGlobalData::EndResourceCapture(bool, bool);
// PIXEnableTextureTracking;
// public: long D3D::CDevice::RTEndResourceCapture(bool);
// public: long D3D::CRTGlobalData::DisableTextureTracking(void);
// public: long D3D::CRTGlobalData::BeginResourceCapture(char const *, struct D3D::NonSnoopedWriteBacks volatile *, bool, struct D3D::RTGracefulShutdownThreadScoped *);
// PIXEndTextureCapture;
// public: long D3D::CDevice::RTDisableTextureTracking(void);
// public: long D3D::CDevice::RTBeginResourceCapture(char const *);
// public: long D3D::CDevice::RTOnSwap(void);
// PIXDisableTextureTracking;
// PIXBeginTextureCapture;

//int D3D::ConsoleIsADK(void)
//{
//    mangled_ppc("?ConsoleIsADK@D3D@@YAHXZ");
//};

//void * D3D::RTMemDebugAllocPhysical(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?RTMemDebugAllocPhysical@D3D@@YAPAXKKK@Z");
//};

//InitializeListHead
//{
//    mangled_ppc("InitializeListHead");
//};

//unsigned __int64 D3D::GetHashOfString(char const *)
//{
//    mangled_ppc("?GetHashOfString@D3D@@YA_KPBD@Z");
//};

//unsigned long D3D::NextMultipleSlow<unsigned long, int>(unsigned long, int)
//{
//    mangled_ppc("??$NextMultipleSlow@KH@D3D@@YAKKH@Z");
//};

//DmTell
//{
//    mangled_ppc("DmTell");
//};

//void D3D::RTMemFreePhysical(void *, unsigned long)
//{
//    mangled_ppc("?RTMemFreePhysical@D3D@@YAXPAXK@Z");
//};

//public: D3D::CRTCurrentMemoryTracker::CRTCurrentMemoryTracker(void)
//{
//    mangled_ppc("??0CRTCurrentMemoryTracker@D3D@@QAA@XZ");
//};

//public: D3D::CRTTextureTracker::CRTTextureTracker(void)
//{
//    mangled_ppc("??0CRTTextureTracker@D3D@@QAA@XZ");
//};

//public: D3D::CRTResultsTracker::CRTResultsTracker(void)
//{
//    mangled_ppc("??0CRTResultsTracker@D3D@@QAA@XZ");
//};

//public: D3D::RTShadowState::RTShadowState(void)
//{
//    mangled_ppc("??0RTShadowState@D3D@@QAA@XZ");
//};

//public: D3D::CRTCommandBufferHacker::CRTCommandBufferHacker(struct D3D::NonSnoopedWriteBacks volatile *)
//{
//    mangled_ppc("??0CRTCommandBufferHacker@D3D@@QAA@PCUNonSnoopedWriteBacks@1@@Z");
//};

//public: long D3D::CRTCommandBufferHacker::CleanUpThumbAndExport(void)
//{
//    mangled_ppc("?CleanUpThumbAndExport@CRTCommandBufferHacker@D3D@@QAAJXZ");
//};

//public: D3D::CRTGlobalData::InitializationParameters::InitializationParameters(void)
//{
//    mangled_ppc("??0InitializationParameters@CRTGlobalData@D3D@@QAA@XZ");
//};

//public: D3D::CRTGlobalData::CRTGlobalData(void)
//{
//    mangled_ppc("??0CRTGlobalData@D3D@@QAA@XZ");
//};

//bool D3D::RTGracefulShutdownIsInProgress(void)
//{
//    mangled_ppc("?RTGracefulShutdownIsInProgress@D3D@@YA_NXZ");
//};

//public: void D3D::RTGracefulShutdownThreadScoped::Release(void)
//{
//    mangled_ppc("?Release@RTGracefulShutdownThreadScoped@D3D@@QAAXXZ");
//};

//void D3D::RTBeginGracefulShutdown(void)
//{
//    mangled_ppc("?RTBeginGracefulShutdown@D3D@@YAXXZ");
//};

//void D3D::RTEndGracefulShutdown(void)
//{
//    mangled_ppc("?RTEndGracefulShutdown@D3D@@YAXXZ");
//};

//void D3D::RT_XMCORE_MemFree(void *, void *)
//{
//    mangled_ppc("?RT_XMCORE_MemFree@D3D@@YAXPAX0@Z");
//};

//void D3D::DefaultTextureTrackerErrorCallback(char const *)
//{
//    mangled_ppc("?DefaultTextureTrackerErrorCallback@D3D@@YAXPBD@Z");
//};

//public: void D3D::CTSSortedList<struct D3D::CVertexShaderHashEntry, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSSortedList@UCVertexShaderHashEntry@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: long D3D::CRTCommandBufferHacker::Destroy(void)
//{
//    mangled_ppc("?Destroy@CRTCommandBufferHacker@D3D@@QAAJXZ");
//};

//void * D3D::RT_XMCORE_MemAlloc(void *, unsigned long)
//{
//    mangled_ppc("?RT_XMCORE_MemAlloc@D3D@@YAPAXPAXK@Z");
//};

//public: long D3D::CRTGlobalData::EnableTextureTracking(void)
//{
//    mangled_ppc("?EnableTextureTracking@CRTGlobalData@D3D@@QAAJXZ");
//};

//public: void D3D::CTSHashTable<struct D3D::CVertexShaderHashEntry, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSHashTable@UCVertexShaderHashEntry@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: long D3D::CDevice::RTEnableTextureTracking(void)
//{
//    mangled_ppc("?RTEnableTextureTracking@CDevice@D3D@@QAAJXZ");
//};

//public: long D3D::CRTGlobalData::EndResourceCapture(bool, bool)
//{
//    mangled_ppc("?EndResourceCapture@CRTGlobalData@D3D@@QAAJ_N0@Z");
//};

//PIXEnableTextureTracking
//{
//    mangled_ppc("PIXEnableTextureTracking");
//};

//public: long D3D::CDevice::RTEndResourceCapture(bool)
//{
//    mangled_ppc("?RTEndResourceCapture@CDevice@D3D@@QAAJ_N@Z");
//};

//public: long D3D::CRTGlobalData::DisableTextureTracking(void)
//{
//    mangled_ppc("?DisableTextureTracking@CRTGlobalData@D3D@@QAAJXZ");
//};

//public: long D3D::CRTGlobalData::BeginResourceCapture(char const *, struct D3D::NonSnoopedWriteBacks volatile *, bool, struct D3D::RTGracefulShutdownThreadScoped *)
//{
//    mangled_ppc("?BeginResourceCapture@CRTGlobalData@D3D@@QAAJPBDPCUNonSnoopedWriteBacks@2@_NPAURTGracefulShutdownThreadScoped@2@@Z");
//};

//PIXEndTextureCapture
//{
//    mangled_ppc("PIXEndTextureCapture");
//};

//public: long D3D::CDevice::RTDisableTextureTracking(void)
//{
//    mangled_ppc("?RTDisableTextureTracking@CDevice@D3D@@QAAJXZ");
//};

//public: long D3D::CDevice::RTBeginResourceCapture(char const *)
//{
//    mangled_ppc("?RTBeginResourceCapture@CDevice@D3D@@QAAJPBD@Z");
//};

//public: long D3D::CDevice::RTOnSwap(void)
//{
//    mangled_ppc("?RTOnSwap@CDevice@D3D@@QAAJXZ");
//};

//PIXDisableTextureTracking
//{
//    mangled_ppc("PIXDisableTextureTracking");
//};

//PIXBeginTextureCapture
//{
//    mangled_ppc("PIXBeginTextureCapture");
//};

