/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct __vector4const `void __cdecl XMStoreColor(struct _XMCOLOR *, struct __vector4)'::`2'::PackScale; // "?PackScale@?1??XMStoreColor@@YAXPAU_XMCOLOR@@U__vector4@@@Z@4U3@B"
// __vmx@7e9676997e9676997e9676997e967699; // "__vmx@7e9676997e9676997e9676997e967699"

// public: void D3D::CRTResultsTracker::EndCapture_Now(void);
// public: void D3D::CRTResultsTracker::EndCapture_WhenDone(void);
// public: void D3D::CRTResultsTracker::GpuCallbackFenceUpdate(void);
// public: long D3D::CRTResultsTracker::AddStuffToWorkerCollectorQueue(struct D3D::RTWorkerCollectorData *);
// public: long D3D::CRTResultsTracker::AddToUnusedQueue(struct D3D::RTBasicTextureInfo *);
// private: int D3D::CRTResultsTracker::WaitForGpu(unsigned long);
// void D3D::RTReportTexture(char const *, struct D3D::RTRelevantTextureFields const &, unsigned long, unsigned long, char const *, int);
// private: void D3D::CRTResultsTracker::UpdateUsageCreationTime(struct D3D::RTTextureUsageResults *, unsigned __int64);
// private: long D3D::CRTResultsTracker::ProcessUpdateIssue(struct D3D::RTBasicTextureInfo *);
// DmTell;
// private: long D3D::CRTResultsTracker::ProcessDestroyData(struct D3D::RTTextureUsageResults *, __int64);
// private: long D3D::CRTResultsTracker::SaveUnusedInMemoryTexturesToDisk(void);
// public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsBuffer, void (D3D::RTMemFreePhysicalReadWrite::*)(void *)>::Initialize(void);
// public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsDescription, void (D3D::RTDebugMemFree::*)(void *)>::Initialize(void);
// public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsBuffer, void (D3D::RTMemFreePhysicalReadWrite::*)(void *)>::Get(struct D3D::RTPerfCounterMipResultsBuffer *&);
// public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsDescription, void (D3D::RTDebugMemFree::*)(void *)>::Get(struct D3D::RTPerfCounterMipResultsDescription *&);
// public: unsigned char D3D::RTRelevantTextureFields::GetHash(void);
// public: void D3D::CRTUniqueNameDimensionsInfo::SetLargestDimension(unsigned long);
// void D3D::RTMemFreePhysicalReadWrite(void *);
// public: static struct D3D::RTTextureUsageResults * D3D::RTTextureUsageResults::Allocate(unsigned long);
// public: struct D3D::RTTextureUsageResults * D3D::CRTUniqueNameDimensionsInfo::FindOrAdd(unsigned __int64, unsigned long);
// public: struct D3D::RTTextureUsageResults * D3D::CRTUniqueNameDimensionsInfo::FindOrAdd2(unsigned __int64*, unsigned long);
// public: void D3D::CRTUniqueNameDimensionsInfo::Destroy(void);
// private: unsigned __int64 D3D::CRTResultsTracker::GenerateHashOfThumbnail(struct D3D::RTPendingThumbnailInfo *);
// private: long D3D::CRTResultsTracker::ProcessThumbnailForChannelCheck(struct D3D::RTPendingThumbnailInfo *);
// private: long D3D::CRTResultsTracker::ProcessScreenshot(struct D3D::RTScreenshotDescription *, void *);
// private: long D3D::CRTResultsTracker::UpdateUsageResults(struct D3D::RTTextureUsageResults *, char const *, struct D3D::RTRelevantTextureFields const *, bool &);
// private: long D3D::CRTResultsTracker::SaveNamedUsedTexturesToDisk(void);
// private: long D3D::CRTResultsTracker::SaveUnnamedUsedTexturesToDisk(void);
// private: long D3D::CRTResultsTracker::UpdateResolveTargetResults(struct D3D::RTResolveTargetInfo *, char const *, struct D3D::RTRelevantTextureFields const *, bool &);
// private: long D3D::CRTResultsTracker::SaveNamedResolveTargetsToDisk(void);
// private: long D3D::CRTResultsTracker::SaveUnnamedResolveTargetsToDisk(void);
// private: long D3D::CRTResultsTracker::UpdateUnusedResults(struct D3D::RTUnusedTextureInfo *, char const *, struct D3D::RTRelevantTextureFields const *, bool &);
// private: long D3D::CRTResultsTracker::SaveNamedUnusedTexturesToDisk(void);
// private: long D3D::CRTResultsTracker::SaveUnnamedUnusedTexturesToDisk(void);
// private: long D3D::CRTResultsTracker::AutoSave(int);
// public: struct D3D::RTUnusedTextureInfo * D3D::CTSSortedList<struct D3D::RTUnusedTextureInfo, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64);
// public: void D3D::CTSSortedList<struct D3D::RTUnusedTextureInfo, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: struct D3D::RTResolveTargetInfo * D3D::CTSSortedList<struct D3D::RTResolveTargetInfo, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64);
// public: void D3D::CTSSortedList<struct D3D::RTResolveTargetInfo, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: class D3D::CRTUniqueNameDimensionsInfo * D3D::CTSSortedList<class D3D::CRTUniqueNameDimensionsInfo, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64);
// public: void D3D::CTSSortedList<class D3D::CRTUniqueNameDimensionsInfo, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: struct D3D::StringWithList<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> * D3D::CTSSortedList<struct D3D::StringWithList<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64);
// public: struct D3D::StringWithList<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> * D3D::CTSSortedList<struct D3D::StringWithList<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64);
// public: struct D3D::StringWithList<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> * D3D::CTSSortedList<struct D3D::StringWithList<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64);
// public: void D3D::StringWithList<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: void D3D::StringWithList<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: void D3D::StringWithList<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsBuffer, void (D3D::RTMemFreePhysicalReadWrite::*)(void *)>::Put(struct D3D::RTPerfCounterMipResultsBuffer *);
// public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsDescription, void (D3D::RTDebugMemFree::*)(void *)>::Put(struct D3D::RTPerfCounterMipResultsDescription *);
// public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsBuffer, void (D3D::RTMemFreePhysicalReadWrite::*)(void *)>::Drain(void);
// public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsDescription, void (D3D::RTDebugMemFree::*)(void *)>::Drain(void);
// struct __vector4 XMLoadHalf4(struct _XMHALF4const *);
// void XMStoreColor(struct _XMCOLOR *, struct __vector4);
// void Convert16_16_16_16F_to_8_8_8_8_inplace(unsigned short *, unsigned long);
// private: long D3D::CRTResultsTracker::SaveThumbnailToDisk(struct D3D::RTPendingThumbnailInfo *);
// private: long D3D::CRTResultsTracker::ProcessThumbnailForPix(struct D3D::RTPendingThumbnailInfo *);
// private: long D3D::CRTResultsTracker::ProcessMipData(struct D3D::RTPerfCounterMipResultsDescription *, struct D3D::RTPerfCounterMipResultsBuffer *);
// public: struct D3D::RTUnusedTextureInfo * D3D::CTSHashTable<struct D3D::RTUnusedTextureInfo, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long);
// public: void D3D::CTSHashTable<struct D3D::RTUnusedTextureInfo, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: struct D3D::RTResolveTargetInfo * D3D::CTSHashTable<struct D3D::RTResolveTargetInfo, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long);
// public: void D3D::CTSHashTable<struct D3D::RTResolveTargetInfo, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: class D3D::CRTUniqueNameDimensionsInfo * D3D::CTSHashTable<class D3D::CRTUniqueNameDimensionsInfo, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long);
// public: void D3D::CTSHashTable<class D3D::CRTUniqueNameDimensionsInfo, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: struct D3D::StringWithList<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> * D3D::CTSHashTable<struct D3D::StringWithList<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long);
// public: struct D3D::StringWithList<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> * D3D::CTSHashTable<struct D3D::StringWithList<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long);
// public: struct D3D::StringWithList<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> * D3D::CTSHashTable<struct D3D::StringWithList<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long);
// public: void D3D::CTSSortedList<struct D3D::StringWithList<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: void D3D::CTSSortedList<struct D3D::StringWithList<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: void D3D::CTSSortedList<struct D3D::StringWithList<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: void D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsBuffer, void (D3D::RTMemFreePhysicalReadWrite::*)(void *)>::Destroy(void);
// public: void D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsDescription, void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: struct D3D::RTUnusedTextureInfo * D3D::CStringHashOfLists<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(char const *, unsigned __int64);
// public: struct D3D::RTResolveTargetInfo * D3D::CStringHashOfLists<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(char const *, unsigned __int64);
// public: class D3D::CRTUniqueNameDimensionsInfo * D3D::CStringHashOfLists<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(char const *, unsigned __int64);
// public: void D3D::CTSHashTable<struct D3D::StringWithList<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: void D3D::CTSHashTable<struct D3D::StringWithList<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: void D3D::CTSHashTable<struct D3D::StringWithList<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// private: long D3D::CRTResultsTracker::FindOrMakeResultsObject(struct D3D::RTBasicTextureInfo *, unsigned __int64, unsigned long);
// private: long D3D::CRTResultsTracker::FindOrMakeResultsObject2(struct D3D::RTBasicTextureInfo *, unsigned __int64*, unsigned long);
// private: long D3D::CRTResultsTracker::ProcessThumbnailForHash(struct D3D::RTPendingThumbnailInfo *);
// private: long D3D::CRTResultsTracker::ProcessThumbnailForHash2(struct D3D::RTPendingThumbnailInfo *);
// private: long D3D::CRTResultsTracker::ProcessResolveData(struct D3D::RTResolveTargetUsageBuffer *);
// public: void D3D::CRTResultsTracker::AddUnusedTexture(struct D3D::RTBasicTextureInfo *);
// public: long D3D::CRTResultsTracker::DrainUnusedTextureQueue(void);
// public: void D3D::CStringHashOfLists<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: void D3D::CStringHashOfLists<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// public: void D3D::CStringHashOfLists<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// private: void D3D::CRTResultsTracker::Destroy(void);
// private: long D3D::CRTResultsTracker::FinishCapture(void);
// public: void D3D::CRTResultsTracker::CollectorMain(void);
// unsigned long D3D::CRTResultsTracker_CollectorMain(void *);
// private: long D3D::CRTResultsTracker::InitializeCollectorThread(unsigned long, void *&);
// public: long D3D::CRTResultsTracker::Initialize(unsigned long, unsigned long, void *&, int);

//public: void D3D::CRTResultsTracker::EndCapture_Now(void)
//{
//    mangled_ppc("?EndCapture_Now@CRTResultsTracker@D3D@@QAAXXZ");
//};

//public: void D3D::CRTResultsTracker::EndCapture_WhenDone(void)
//{
//    mangled_ppc("?EndCapture_WhenDone@CRTResultsTracker@D3D@@QAAXXZ");
//};

//public: void D3D::CRTResultsTracker::GpuCallbackFenceUpdate(void)
//{
//    mangled_ppc("?GpuCallbackFenceUpdate@CRTResultsTracker@D3D@@QAAXXZ");
//};

//public: long D3D::CRTResultsTracker::AddStuffToWorkerCollectorQueue(struct D3D::RTWorkerCollectorData *)
//{
//    mangled_ppc("?AddStuffToWorkerCollectorQueue@CRTResultsTracker@D3D@@QAAJPAURTWorkerCollectorData@2@@Z");
//};

//public: long D3D::CRTResultsTracker::AddToUnusedQueue(struct D3D::RTBasicTextureInfo *)
//{
//    mangled_ppc("?AddToUnusedQueue@CRTResultsTracker@D3D@@QAAJPAURTBasicTextureInfo@2@@Z");
//};

//private: int D3D::CRTResultsTracker::WaitForGpu(unsigned long)
//{
//    mangled_ppc("?WaitForGpu@CRTResultsTracker@D3D@@AAAHK@Z");
//};

//void D3D::RTReportTexture(char const *, struct D3D::RTRelevantTextureFields const &, unsigned long, unsigned long, char const *, int)
//{
//    mangled_ppc("?RTReportTexture@D3D@@YAXPBDABURTRelevantTextureFields@1@KK0H@Z");
//};

//private: void D3D::CRTResultsTracker::UpdateUsageCreationTime(struct D3D::RTTextureUsageResults *, unsigned __int64)
//{
//    mangled_ppc("?UpdateUsageCreationTime@CRTResultsTracker@D3D@@AAAXPAURTTextureUsageResults@2@_K@Z");
//};

//private: long D3D::CRTResultsTracker::ProcessUpdateIssue(struct D3D::RTBasicTextureInfo *)
//{
//    mangled_ppc("?ProcessUpdateIssue@CRTResultsTracker@D3D@@AAAJPAURTBasicTextureInfo@2@@Z");
//};

//DmTell
//{
//    mangled_ppc("DmTell");
//};

//private: long D3D::CRTResultsTracker::ProcessDestroyData(struct D3D::RTTextureUsageResults *, __int64)
//{
//    mangled_ppc("?ProcessDestroyData@CRTResultsTracker@D3D@@AAAJPAURTTextureUsageResults@2@_J@Z");
//};

//private: long D3D::CRTResultsTracker::SaveUnusedInMemoryTexturesToDisk(void)
//{
//    mangled_ppc("?SaveUnusedInMemoryTexturesToDisk@CRTResultsTracker@D3D@@AAAJXZ");
//};

//public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsBuffer, void (D3D::RTMemFreePhysicalReadWrite::*)(void *)>::Initialize(void)
//{
//    mangled_ppc("?Initialize@?$RecycleQueue@URTPerfCounterMipResultsBuffer@D3D@@$1?RTMemFreePhysicalReadWrite@2@YAXPAX@Z@D3D@@QAAJXZ");
//};

//public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsDescription, void (D3D::RTDebugMemFree::*)(void *)>::Initialize(void)
//{
//    mangled_ppc("?Initialize@?$RecycleQueue@URTPerfCounterMipResultsDescription@D3D@@$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAJXZ");
//};

//public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsBuffer, void (D3D::RTMemFreePhysicalReadWrite::*)(void *)>::Get(struct D3D::RTPerfCounterMipResultsBuffer *&)
//{
//    mangled_ppc("?Get@?$RecycleQueue@URTPerfCounterMipResultsBuffer@D3D@@$1?RTMemFreePhysicalReadWrite@2@YAXPAX@Z@D3D@@QAAJAAPAURTPerfCounterMipResultsBuffer@2@@Z");
//};

//public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsDescription, void (D3D::RTDebugMemFree::*)(void *)>::Get(struct D3D::RTPerfCounterMipResultsDescription *&)
//{
//    mangled_ppc("?Get@?$RecycleQueue@URTPerfCounterMipResultsDescription@D3D@@$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAJAAPAURTPerfCounterMipResultsDescription@2@@Z");
//};

//public: unsigned char D3D::RTRelevantTextureFields::GetHash(void)
//{
//    mangled_ppc("?GetHash@RTRelevantTextureFields@D3D@@QAAEXZ");
//};

//public: void D3D::CRTUniqueNameDimensionsInfo::SetLargestDimension(unsigned long)
//{
//    mangled_ppc("?SetLargestDimension@CRTUniqueNameDimensionsInfo@D3D@@QAAXK@Z");
//};

//void D3D::RTMemFreePhysicalReadWrite(void *)
//{
//    mangled_ppc("?RTMemFreePhysicalReadWrite@D3D@@YAXPAX@Z");
//};

//public: static struct D3D::RTTextureUsageResults * D3D::RTTextureUsageResults::Allocate(unsigned long)
//{
//    mangled_ppc("?Allocate@RTTextureUsageResults@D3D@@SAPAU12@K@Z");
//};

//public: struct D3D::RTTextureUsageResults * D3D::CRTUniqueNameDimensionsInfo::FindOrAdd(unsigned __int64, unsigned long)
//{
//    mangled_ppc("?FindOrAdd@CRTUniqueNameDimensionsInfo@D3D@@QAAPAURTTextureUsageResults@2@_KK@Z");
//};

//public: struct D3D::RTTextureUsageResults * D3D::CRTUniqueNameDimensionsInfo::FindOrAdd2(unsigned __int64*, unsigned long)
//{
//    mangled_ppc("?FindOrAdd2@CRTUniqueNameDimensionsInfo@D3D@@QAAPAURTTextureUsageResults@2@PA_KK@Z");
//};

//public: void D3D::CRTUniqueNameDimensionsInfo::Destroy(void)
//{
//    mangled_ppc("?Destroy@CRTUniqueNameDimensionsInfo@D3D@@QAAXXZ");
//};

//private: unsigned __int64 D3D::CRTResultsTracker::GenerateHashOfThumbnail(struct D3D::RTPendingThumbnailInfo *)
//{
//    mangled_ppc("?GenerateHashOfThumbnail@CRTResultsTracker@D3D@@AAA_KPAURTPendingThumbnailInfo@2@@Z");
//};

//private: long D3D::CRTResultsTracker::ProcessThumbnailForChannelCheck(struct D3D::RTPendingThumbnailInfo *)
//{
//    mangled_ppc("?ProcessThumbnailForChannelCheck@CRTResultsTracker@D3D@@AAAJPAURTPendingThumbnailInfo@2@@Z");
//};

//private: long D3D::CRTResultsTracker::ProcessScreenshot(struct D3D::RTScreenshotDescription *, void *)
//{
//    mangled_ppc("?ProcessScreenshot@CRTResultsTracker@D3D@@AAAJPAURTScreenshotDescription@2@PAX@Z");
//};

//private: long D3D::CRTResultsTracker::UpdateUsageResults(struct D3D::RTTextureUsageResults *, char const *, struct D3D::RTRelevantTextureFields const *, bool &)
//{
//    mangled_ppc("?UpdateUsageResults@CRTResultsTracker@D3D@@AAAJPAURTTextureUsageResults@2@PBDPBURTRelevantTextureFields@2@AA_N@Z");
//};

//private: long D3D::CRTResultsTracker::SaveNamedUsedTexturesToDisk(void)
//{
//    mangled_ppc("?SaveNamedUsedTexturesToDisk@CRTResultsTracker@D3D@@AAAJXZ");
//};

//private: long D3D::CRTResultsTracker::SaveUnnamedUsedTexturesToDisk(void)
//{
//    mangled_ppc("?SaveUnnamedUsedTexturesToDisk@CRTResultsTracker@D3D@@AAAJXZ");
//};

//private: long D3D::CRTResultsTracker::UpdateResolveTargetResults(struct D3D::RTResolveTargetInfo *, char const *, struct D3D::RTRelevantTextureFields const *, bool &)
//{
//    mangled_ppc("?UpdateResolveTargetResults@CRTResultsTracker@D3D@@AAAJPAURTResolveTargetInfo@2@PBDPBURTRelevantTextureFields@2@AA_N@Z");
//};

//private: long D3D::CRTResultsTracker::SaveNamedResolveTargetsToDisk(void)
//{
//    mangled_ppc("?SaveNamedResolveTargetsToDisk@CRTResultsTracker@D3D@@AAAJXZ");
//};

//private: long D3D::CRTResultsTracker::SaveUnnamedResolveTargetsToDisk(void)
//{
//    mangled_ppc("?SaveUnnamedResolveTargetsToDisk@CRTResultsTracker@D3D@@AAAJXZ");
//};

//private: long D3D::CRTResultsTracker::UpdateUnusedResults(struct D3D::RTUnusedTextureInfo *, char const *, struct D3D::RTRelevantTextureFields const *, bool &)
//{
//    mangled_ppc("?UpdateUnusedResults@CRTResultsTracker@D3D@@AAAJPAURTUnusedTextureInfo@2@PBDPBURTRelevantTextureFields@2@AA_N@Z");
//};

//private: long D3D::CRTResultsTracker::SaveNamedUnusedTexturesToDisk(void)
//{
//    mangled_ppc("?SaveNamedUnusedTexturesToDisk@CRTResultsTracker@D3D@@AAAJXZ");
//};

//private: long D3D::CRTResultsTracker::SaveUnnamedUnusedTexturesToDisk(void)
//{
//    mangled_ppc("?SaveUnnamedUnusedTexturesToDisk@CRTResultsTracker@D3D@@AAAJXZ");
//};

//private: long D3D::CRTResultsTracker::AutoSave(int)
//{
//    mangled_ppc("?AutoSave@CRTResultsTracker@D3D@@AAAJH@Z");
//};

//public: struct D3D::RTUnusedTextureInfo * D3D::CTSSortedList<struct D3D::RTUnusedTextureInfo, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64)
//{
//    mangled_ppc("?FindOrAdd@?$CTSSortedList@URTUnusedTextureInfo@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAURTUnusedTextureInfo@2@_K@Z");
//};

//public: void D3D::CTSSortedList<struct D3D::RTUnusedTextureInfo, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSSortedList@URTUnusedTextureInfo@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: struct D3D::RTResolveTargetInfo * D3D::CTSSortedList<struct D3D::RTResolveTargetInfo, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64)
//{
//    mangled_ppc("?FindOrAdd@?$CTSSortedList@URTResolveTargetInfo@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAURTResolveTargetInfo@2@_K@Z");
//};

//public: void D3D::CTSSortedList<struct D3D::RTResolveTargetInfo, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSSortedList@URTResolveTargetInfo@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: class D3D::CRTUniqueNameDimensionsInfo * D3D::CTSSortedList<class D3D::CRTUniqueNameDimensionsInfo, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64)
//{
//    mangled_ppc("?FindOrAdd@?$CTSSortedList@VCRTUniqueNameDimensionsInfo@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAVCRTUniqueNameDimensionsInfo@2@_K@Z");
//};

//public: void D3D::CTSSortedList<class D3D::CRTUniqueNameDimensionsInfo, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSSortedList@VCRTUniqueNameDimensionsInfo@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: struct D3D::StringWithList<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> * D3D::CTSSortedList<struct D3D::StringWithList<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64)
//{
//    mangled_ppc("?FindOrAdd@?$CTSSortedList@U?$StringWithList@URTUnusedTextureInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAU?$StringWithList@URTUnusedTextureInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@2@_K@Z");
//};

//public: struct D3D::StringWithList<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> * D3D::CTSSortedList<struct D3D::StringWithList<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64)
//{
//    mangled_ppc("?FindOrAdd@?$CTSSortedList@U?$StringWithList@URTResolveTargetInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAU?$StringWithList@URTResolveTargetInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@2@_K@Z");
//};

//public: struct D3D::StringWithList<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> * D3D::CTSSortedList<struct D3D::StringWithList<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64)
//{
//    mangled_ppc("?FindOrAdd@?$CTSSortedList@U?$StringWithList@VCRTUniqueNameDimensionsInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAU?$StringWithList@VCRTUniqueNameDimensionsInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@2@_K@Z");
//};

//public: void D3D::StringWithList<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$StringWithList@VCRTUniqueNameDimensionsInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: void D3D::StringWithList<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$StringWithList@URTResolveTargetInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: void D3D::StringWithList<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$StringWithList@URTUnusedTextureInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsBuffer, void (D3D::RTMemFreePhysicalReadWrite::*)(void *)>::Put(struct D3D::RTPerfCounterMipResultsBuffer *)
//{
//    mangled_ppc("?Put@?$RecycleQueue@URTPerfCounterMipResultsBuffer@D3D@@$1?RTMemFreePhysicalReadWrite@2@YAXPAX@Z@D3D@@QAAJPAURTPerfCounterMipResultsBuffer@2@@Z");
//};

//public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsDescription, void (D3D::RTDebugMemFree::*)(void *)>::Put(struct D3D::RTPerfCounterMipResultsDescription *)
//{
//    mangled_ppc("?Put@?$RecycleQueue@URTPerfCounterMipResultsDescription@D3D@@$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAJPAURTPerfCounterMipResultsDescription@2@@Z");
//};

//public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsBuffer, void (D3D::RTMemFreePhysicalReadWrite::*)(void *)>::Drain(void)
//{
//    mangled_ppc("?Drain@?$RecycleQueue@URTPerfCounterMipResultsBuffer@D3D@@$1?RTMemFreePhysicalReadWrite@2@YAXPAX@Z@D3D@@QAAJXZ");
//};

//public: long D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsDescription, void (D3D::RTDebugMemFree::*)(void *)>::Drain(void)
//{
//    mangled_ppc("?Drain@?$RecycleQueue@URTPerfCounterMipResultsDescription@D3D@@$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAJXZ");
//};

//struct __vector4 XMLoadHalf4(struct _XMHALF4const *)
//{
//    mangled_ppc("?XMLoadHalf4@@YA?AU__vector4@@PBU_XMHALF4@@@Z");
//};

//void XMStoreColor(struct _XMCOLOR *, struct __vector4)
//{
//    mangled_ppc("?XMStoreColor@@YAXPAU_XMCOLOR@@U__vector4@@@Z");
//};

//void Convert16_16_16_16F_to_8_8_8_8_inplace(unsigned short *, unsigned long)
//{
//    mangled_ppc("?Convert16_16_16_16F_to_8_8_8_8_inplace@@YAXPAGK@Z");
//};

//private: long D3D::CRTResultsTracker::SaveThumbnailToDisk(struct D3D::RTPendingThumbnailInfo *)
//{
//    mangled_ppc("?SaveThumbnailToDisk@CRTResultsTracker@D3D@@AAAJPAURTPendingThumbnailInfo@2@@Z");
//};

//private: long D3D::CRTResultsTracker::ProcessThumbnailForPix(struct D3D::RTPendingThumbnailInfo *)
//{
//    mangled_ppc("?ProcessThumbnailForPix@CRTResultsTracker@D3D@@AAAJPAURTPendingThumbnailInfo@2@@Z");
//};

//private: long D3D::CRTResultsTracker::ProcessMipData(struct D3D::RTPerfCounterMipResultsDescription *, struct D3D::RTPerfCounterMipResultsBuffer *)
//{
//    mangled_ppc("?ProcessMipData@CRTResultsTracker@D3D@@AAAJPAURTPerfCounterMipResultsDescription@2@PAURTPerfCounterMipResultsBuffer@2@@Z");
//};

//public: struct D3D::RTUnusedTextureInfo * D3D::CTSHashTable<struct D3D::RTUnusedTextureInfo, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long)
//{
//    mangled_ppc("?FindOrAdd@?$CTSHashTable@URTUnusedTextureInfo@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAURTUnusedTextureInfo@2@_KK@Z");
//};

//public: void D3D::CTSHashTable<struct D3D::RTUnusedTextureInfo, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSHashTable@URTUnusedTextureInfo@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: struct D3D::RTResolveTargetInfo * D3D::CTSHashTable<struct D3D::RTResolveTargetInfo, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long)
//{
//    mangled_ppc("?FindOrAdd@?$CTSHashTable@URTResolveTargetInfo@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAURTResolveTargetInfo@2@_KK@Z");
//};

//public: void D3D::CTSHashTable<struct D3D::RTResolveTargetInfo, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSHashTable@URTResolveTargetInfo@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: class D3D::CRTUniqueNameDimensionsInfo * D3D::CTSHashTable<class D3D::CRTUniqueNameDimensionsInfo, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long)
//{
//    mangled_ppc("?FindOrAdd@?$CTSHashTable@VCRTUniqueNameDimensionsInfo@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAVCRTUniqueNameDimensionsInfo@2@_KK@Z");
//};

//public: void D3D::CTSHashTable<class D3D::CRTUniqueNameDimensionsInfo, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSHashTable@VCRTUniqueNameDimensionsInfo@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: struct D3D::StringWithList<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> * D3D::CTSHashTable<struct D3D::StringWithList<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long)
//{
//    mangled_ppc("?FindOrAdd@?$CTSHashTable@U?$StringWithList@URTUnusedTextureInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAU?$StringWithList@URTUnusedTextureInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@2@_KK@Z");
//};

//public: struct D3D::StringWithList<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> * D3D::CTSHashTable<struct D3D::StringWithList<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long)
//{
//    mangled_ppc("?FindOrAdd@?$CTSHashTable@U?$StringWithList@URTResolveTargetInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAU?$StringWithList@URTResolveTargetInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@2@_KK@Z");
//};

//public: struct D3D::StringWithList<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> * D3D::CTSHashTable<struct D3D::StringWithList<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned __int64, unsigned long)
//{
//    mangled_ppc("?FindOrAdd@?$CTSHashTable@U?$StringWithList@VCRTUniqueNameDimensionsInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAU?$StringWithList@VCRTUniqueNameDimensionsInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@2@_KK@Z");
//};

//public: void D3D::CTSSortedList<struct D3D::StringWithList<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSSortedList@U?$StringWithList@URTUnusedTextureInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: void D3D::CTSSortedList<struct D3D::StringWithList<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSSortedList@U?$StringWithList@URTResolveTargetInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: void D3D::CTSSortedList<struct D3D::StringWithList<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, unsigned __int64, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSSortedList@U?$StringWithList@VCRTUniqueNameDimensionsInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@_K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: void D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsBuffer, void (D3D::RTMemFreePhysicalReadWrite::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$RecycleQueue@URTPerfCounterMipResultsBuffer@D3D@@$1?RTMemFreePhysicalReadWrite@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: void D3D::RecycleQueue<struct D3D::RTPerfCounterMipResultsDescription, void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$RecycleQueue@URTPerfCounterMipResultsDescription@D3D@@$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: struct D3D::RTUnusedTextureInfo * D3D::CStringHashOfLists<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(char const *, unsigned __int64)
//{
//    mangled_ppc("?FindOrAdd@?$CStringHashOfLists@URTUnusedTextureInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAURTUnusedTextureInfo@2@PBD_K@Z");
//};

//public: struct D3D::RTResolveTargetInfo * D3D::CStringHashOfLists<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(char const *, unsigned __int64)
//{
//    mangled_ppc("?FindOrAdd@?$CStringHashOfLists@URTResolveTargetInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAURTResolveTargetInfo@2@PBD_K@Z");
//};

//public: class D3D::CRTUniqueNameDimensionsInfo * D3D::CStringHashOfLists<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(char const *, unsigned __int64)
//{
//    mangled_ppc("?FindOrAdd@?$CStringHashOfLists@VCRTUniqueNameDimensionsInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAVCRTUniqueNameDimensionsInfo@2@PBD_K@Z");
//};

//public: void D3D::CTSHashTable<struct D3D::StringWithList<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSHashTable@U?$StringWithList@URTUnusedTextureInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: void D3D::CTSHashTable<struct D3D::StringWithList<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSHashTable@U?$StringWithList@URTResolveTargetInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: void D3D::CTSHashTable<struct D3D::StringWithList<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>, struct D3D::HashParams_DB, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSHashTable@U?$StringWithList@VCRTUniqueNameDimensionsInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@UHashParams_DB@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//private: long D3D::CRTResultsTracker::FindOrMakeResultsObject(struct D3D::RTBasicTextureInfo *, unsigned __int64, unsigned long)
//{
//    mangled_ppc("?FindOrMakeResultsObject@CRTResultsTracker@D3D@@AAAJPAURTBasicTextureInfo@2@_KK@Z");
//};

//private: long D3D::CRTResultsTracker::FindOrMakeResultsObject2(struct D3D::RTBasicTextureInfo *, unsigned __int64*, unsigned long)
//{
//    mangled_ppc("?FindOrMakeResultsObject2@CRTResultsTracker@D3D@@AAAJPAURTBasicTextureInfo@2@PA_KK@Z");
//};

//private: long D3D::CRTResultsTracker::ProcessThumbnailForHash(struct D3D::RTPendingThumbnailInfo *)
//{
//    mangled_ppc("?ProcessThumbnailForHash@CRTResultsTracker@D3D@@AAAJPAURTPendingThumbnailInfo@2@@Z");
//};

//private: long D3D::CRTResultsTracker::ProcessThumbnailForHash2(struct D3D::RTPendingThumbnailInfo *)
//{
//    mangled_ppc("?ProcessThumbnailForHash2@CRTResultsTracker@D3D@@AAAJPAURTPendingThumbnailInfo@2@@Z");
//};

//private: long D3D::CRTResultsTracker::ProcessResolveData(struct D3D::RTResolveTargetUsageBuffer *)
//{
//    mangled_ppc("?ProcessResolveData@CRTResultsTracker@D3D@@AAAJPAURTResolveTargetUsageBuffer@2@@Z");
//};

//public: void D3D::CRTResultsTracker::AddUnusedTexture(struct D3D::RTBasicTextureInfo *)
//{
//    mangled_ppc("?AddUnusedTexture@CRTResultsTracker@D3D@@QAAXPAURTBasicTextureInfo@2@@Z");
//};

//public: long D3D::CRTResultsTracker::DrainUnusedTextureQueue(void)
//{
//    mangled_ppc("?DrainUnusedTextureQueue@CRTResultsTracker@D3D@@QAAJXZ");
//};

//public: void D3D::CStringHashOfLists<struct D3D::RTUnusedTextureInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CStringHashOfLists@URTUnusedTextureInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: void D3D::CStringHashOfLists<struct D3D::RTResolveTargetInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CStringHashOfLists@URTResolveTargetInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//public: void D3D::CStringHashOfLists<class D3D::CRTUniqueNameDimensionsInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CStringHashOfLists@VCRTUniqueNameDimensionsInfo@D3D@@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//private: void D3D::CRTResultsTracker::Destroy(void)
//{
//    mangled_ppc("?Destroy@CRTResultsTracker@D3D@@AAAXXZ");
//};

//private: long D3D::CRTResultsTracker::FinishCapture(void)
//{
//    mangled_ppc("?FinishCapture@CRTResultsTracker@D3D@@AAAJXZ");
//};

//public: void D3D::CRTResultsTracker::CollectorMain(void)
//{
//    mangled_ppc("?CollectorMain@CRTResultsTracker@D3D@@QAAXXZ");
//};

//unsigned long D3D::CRTResultsTracker_CollectorMain(void *)
//{
//    mangled_ppc("?CRTResultsTracker_CollectorMain@D3D@@YAKPAX@Z");
//};

//private: long D3D::CRTResultsTracker::InitializeCollectorThread(unsigned long, void *&)
//{
//    mangled_ppc("?InitializeCollectorThread@CRTResultsTracker@D3D@@AAAJKAAPAX@Z");
//};

//public: long D3D::CRTResultsTracker::Initialize(unsigned long, unsigned long, void *&, int)
//{
//    mangled_ppc("?Initialize@CRTResultsTracker@D3D@@QAAJKKAAPAXH@Z");
//};

