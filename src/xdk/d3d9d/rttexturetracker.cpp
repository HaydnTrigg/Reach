/* ---------- headers */

#include "xdk\d3d9d\rttexturetracker.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static bool const D3D::InfoAccessorBase::IsBaseAddress; // "?IsBaseAddress@InfoAccessorBase@D3D@@2_NB"
// public: static bool const D3D::InfoAccessorMip::IsBaseAddress; // "?IsBaseAddress@InfoAccessorMip@D3D@@2_NB"

// public: D3D::MemInfo_BasicTextureInfoIterator::MemInfo_BasicTextureInfoIterator(struct D3D::RTMemUsageInfo const &);
// public: D3D::MemInfo_BasicTextureInfoIterator::MemInfo_BasicTextureInfoIterator(struct D3D::RTMemUsageInfo const *);
// public: struct D3D::RTBasicTextureInfo * D3D::MemInfo_BasicTextureInfoIterator::operator++(void);
// public: struct D3D::RTBasicTextureInfo * D3D::MemInfo_BasicTextureInfoIterator::operator->(void) const;
// public: struct D3D::RTBasicTextureInfo * D3D::MemInfo_BasicTextureInfoIterator::operator struct D3D::RTBasicTextureInfo *(void) const;
// public: static struct D3D::RTBasicTextureInfo *& D3D::InfoAccessorBase::pInfo(struct D3D::RTMemUsageInfo *);
// public: static struct D3D::RTBasicTextureInfo *& D3D::InfoAccessorBase::pNext(struct D3D::RTBasicTextureInfo *);
// public: static unsigned long D3D::InfoAccessorBase::MemIndex(struct D3D::RTBasicTextureInfo const *);
// public: static void D3D::InfoAccessorBase::SetMemIndex(struct D3D::RTBasicTextureInfo *, unsigned long);
// public: static struct D3D::RTBasicTextureInfo *& D3D::InfoAccessorMip::pInfo(struct D3D::RTMemUsageInfo *);
// public: static struct D3D::RTBasicTextureInfo *& D3D::InfoAccessorMip::pNext(struct D3D::RTBasicTextureInfo *);
// public: static unsigned long D3D::InfoAccessorMip::MemIndex(struct D3D::RTBasicTextureInfo const *);
// public: static void D3D::InfoAccessorMip::SetMemIndex(struct D3D::RTBasicTextureInfo *, unsigned long);
// enum D3D::CleanupResult & D3D::operator+=(enum D3D::CleanupResult &, enum D3D::CleanupResult);
// strnlen_s;
// public: long D3D::RTBasicTextureInfo::AddRef(void);
// public: long D3D::CRTTextureTracker::Initialize(void);
// public: D3D::CRTTextureTracker::~CRTTextureTracker(void);
// InterlockedCompareExchangeAcquire;
// private: bool D3D::CRTCurrentMemoryTracker::IsPageIndexUsable(unsigned long, bool) const;
// DmTell;
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// public: D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Iterator::Iterator(class D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> const &);
// public: class D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Iterator & D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Iterator::operator++(void);
// public: struct D3D::CTSSortedList<struct D3D::RTMemUsageInfo, unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::ListElement * D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Iterator::operator->(void) const;
// public: struct D3D::CTSSortedList<struct D3D::RTMemUsageInfo, unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::ListElement * D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Iterator::operator struct D3D::CTSSortedList<struct D3D::RTMemUsageInfo, unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::ListElement *(void) const;
// public: unsigned long * D3D::D3DFastVector<unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::begin(void) const;
// public: unsigned long D3D::D3DFastVector<unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::size(void) const;
// void D3D::MoveBasicInfoToTop<struct D3D::InfoAccessorBase>(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo **&, struct D3D::RTBasicTextureInfo *&);
// void D3D::MoveBasicInfoToTop<struct D3D::InfoAccessorMip>(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo **&, struct D3D::RTBasicTextureInfo *&);
// public: long D3D::CCommandBuffer::AddRTListData<struct D3D::RTCreateTexturePayload>(unsigned long, struct D3D::RTCreateTexturePayload const &);
// public: void D3D::CDevice::PutPix<struct D3D::RTCreateTexturePayload>(unsigned long *&, enum PIXMeta, struct D3D::RTCreateTexturePayload const &);
// public: long D3D::CCommandBuffer::AddRTListData<struct D3D::RTDeleteTexturePayload>(unsigned long, struct D3D::RTDeleteTexturePayload const &);
// public: void D3D::CDevice::PutPix<struct D3D::RTDeleteTexturePayload>(unsigned long *&, enum PIXMeta, struct D3D::RTDeleteTexturePayload const &);
// public: long D3D::CCommandBuffer::AddRTListData<struct D3D::RTMovedMemoryPayload>(unsigned long, struct D3D::RTMovedMemoryPayload const &);
// public: void D3D::CDevice::PutPix<struct D3D::RTMovedMemoryPayload>(unsigned long *&, enum PIXMeta, struct D3D::RTMovedMemoryPayload const &);
// public: long D3D::CCommandBuffer::AddRTListData<struct D3D::RTFreedMemoryPayload>(unsigned long, struct D3D::RTFreedMemoryPayload const &);
// public: void D3D::CDevice::PutPix<struct D3D::RTFreedMemoryPayload>(unsigned long *&, enum PIXMeta, struct D3D::RTFreedMemoryPayload const &);
// PIXWriteData;
// void * D3D::RTDebugMemAlloc(unsigned long);
// RTDebugMemFree;
// public: bool D3D::AutoCriticalSection::GotCriticalSection(void);
// public: D3D::AutoCriticalSection::AutoCriticalSection(struct _RTL_CRITICAL_SECTION *, bool);
// public: D3D::RTRelevantTextureFields::RTRelevantTextureFields(union GPUTEXTURE_FETCH_CONSTANT const *);
// public: static unsigned long D3D::CRTCurrentMemoryTracker::HashParams_MemInfo::HashToIndex(unsigned long);
// public: static unsigned long D3D::CRTCurrentMemoryTracker::GetIndexFromGpuTexAddress(unsigned long);
// public: static unsigned long D3D::CRTCurrentMemoryTracker::GetIndexFromCpuTexAddress(unsigned long);
// bool D3D::RTGracefulShutdownEnterThread(void);
// void D3D::RTGracefulShutdownLeaveThread(void);
// public: D3D::RTGracefulShutdownThreadScoped::RTGracefulShutdownThreadScoped(void);
// public: D3D::RTGracefulShutdownThreadScoped::~RTGracefulShutdownThreadScoped(void);
// public: bool D3D::RTGracefulShutdownThreadScoped::operator bool(void) const;
// class D3D::CDevice * D3D::Promote_IfOwned(struct D3DDevice *);
// class D3D::CDevice * D3D::GetGlobalDevice_IfOwned(void);
// public: struct D3D::RTMemUsageInfo * D3D::CTSSortedList<struct D3D::RTMemUsageInfo, unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Find(unsigned long);
// public: struct D3D::RTMemUsageInfo * D3D::CTSSortedList<struct D3D::RTMemUsageInfo, unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned long);
// unsigned long D3D::GetGPUAddress<void const>(void const *);
// void D3D::MoveBasicInfoToTopBase(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo **&, struct D3D::RTBasicTextureInfo *&);
// void D3D::MoveBasicInfoToTopMip(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo **&, struct D3D::RTBasicTextureInfo *&);
// void D3D::TrackBasicTextureInfoDestruction(struct D3D::RTBasicTextureInfo *, unsigned __int64);
// void D3D::TrackBasicTextureInfoListDestruction(struct D3D::RTMemUsageInfo &, unsigned __int64);
// public: bool D3D::RTRelevantTextureFields::IsSimilarTexture(struct D3D::RTRelevantTextureFields const &) const;
// public: long D3D::RTBasicTextureInfo::Release(void);
// public: void D3D::CRTCurrentMemoryTracker::OnEndingCapture(void);
// public: void D3D::CRTCurrentMemoryTracker::OnEndedCapture(void);
// public: static struct D3D::RTBasicTextureInfo * D3D::RTBasicTextureInfo::MakeNewCurrentInfoNode(struct D3D::RTRelevantTextureFields *);
// bool D3D::TextureHasUsableMipAddress(union GPUTEXTURE_FETCH_CONSTANT const *);
// public: long D3D::CRTCurrentMemoryTracker::OnStopIgnoringMemoryRange(void const *, unsigned long);
// public: long D3D::CRTCurrentMemoryTracker::OnDogmaResolve(void);
// char const * D3D::DupString(char const *);
// long D3D::SaveTextureNameToGpuCapture(char const *, unsigned long);
// public: long D3D::CRTCurrentMemoryTracker::SaveTextureNamesToGpuCapture(void);
// D3DDevice_PixStopIgnoringMemoryRange;
// void D3D::_StopAndWaitRTGlobal(void);
// long D3D::_PIXRTGetStatistics(struct D3D::RTStatistics **);
// public: void D3D::CTSSortedList<struct D3D::RTMemUsageInfo, unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// enum D3D::CleanupResult D3D::CleanupBasicInfoTail<struct D3D::InfoAccessorBase>(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long);
// enum D3D::CleanupResult D3D::CleanupBasicInfoTail<struct D3D::InfoAccessorMip>(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long);
// enum D3D::CleanupResult D3D::FindMatchingBasicTextureInfo<struct D3D::InfoAccessorBase>(struct D3D::RTRelevantTextureFields const &, struct D3D::RTBasicTextureInfo **&, unsigned long &, unsigned long, unsigned long);
// enum D3D::CleanupResult D3D::FindMatchingBasicTextureInfo<struct D3D::InfoAccessorMip>(struct D3D::RTRelevantTextureFields const &, struct D3D::RTBasicTextureInfo **&, unsigned long &, unsigned long, unsigned long);
// enum D3D::CleanupResult D3D::MergeBasicTextureInfoList<struct D3D::InfoAccessorBase>(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long);
// enum D3D::CleanupResult D3D::MergeBasicTextureInfoList<struct D3D::InfoAccessorMip>(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long);
// public: struct D3D::RTMemUsageInfo * D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Find(unsigned long);
// public: struct D3D::RTMemUsageInfo * D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned long);
// enum D3D::CleanupResult D3D::CleanupBasicInfoTailBase(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long);
// enum D3D::CleanupResult D3D::CleanupBasicInfoTailMip(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long);
// enum D3D::CleanupResult D3D::FindMatchingBasicTextureInfoBase(struct D3D::RTRelevantTextureFields const &, struct D3D::RTBasicTextureInfo **&, unsigned long &, unsigned long, unsigned long);
// enum D3D::CleanupResult D3D::FindMatchingBasicTextureInfoMip(struct D3D::RTRelevantTextureFields const &, struct D3D::RTBasicTextureInfo **&, unsigned long &, unsigned long, unsigned long);
// enum D3D::CleanupResult D3D::MergeBasicTextureInfoListBase(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long);
// enum D3D::CleanupResult D3D::MergeBasicTextureInfoListMip(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long);
// void D3D::DestroyBasicTextureInfoLists(struct D3D::RTMemUsageInfo &);
// public: void D3D::CRTTextureTracker::OnCollectorEndingCapture(void);
// private: void D3D::CRTCurrentMemoryTracker::SetNewBasicTextureInfo(struct D3D::RTMemUsageInfo *, unsigned long, struct D3D::RTMemUsageInfo *, unsigned long, struct D3D::RTBasicTextureInfo *);
// private: struct D3D::RTMemUsageInfo * D3D::CRTCurrentMemoryTracker::FindOrAddValidMemUsageInfo(unsigned long, bool);
// public: long D3D::CRTCurrentMemoryTracker::OnIgnoreMemoryRange(void const *, unsigned long);
// public: long D3D::CRTCurrentMemoryTracker::OnReportMovedMemoryRange(void const *, void const *, unsigned long);
// public: long D3D::CRTCurrentMemoryTracker::OnReportFreedMemoryRange(void const *, unsigned long, unsigned __int64);
// D3DDevice_PixIgnoreMemoryRange;
// D3DDevice_PixReportMovedMemoryRange;
// D3DDevice_PixReportFreedMemoryRange;
// public: void D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void);
// enum D3D::CleanupResult D3D::AddBasicInfoToList<struct D3D::InfoAccessorBase>(struct D3D::RTMemUsageInfo *, unsigned long, struct D3D::RTBasicTextureInfo *, unsigned long);
// enum D3D::CleanupResult D3D::AddBasicInfoToList<struct D3D::InfoAccessorMip>(struct D3D::RTMemUsageInfo *, unsigned long, struct D3D::RTBasicTextureInfo *, unsigned long);
// public: struct D3D::RTMemUsageInfo * D3D::CRTCurrentMemoryTracker::FindFromCpuTexAddress(unsigned long);
// public: struct D3D::RTMemUsageInfo * D3D::CRTCurrentMemoryTracker::GetFromCpuPointer(void const *);
// enum D3D::CleanupResult D3D::AddBasicInfoToListBase(struct D3D::RTMemUsageInfo *, unsigned long, struct D3D::RTBasicTextureInfo *, unsigned long);
// enum D3D::CleanupResult D3D::AddBasicInfoToListMip(struct D3D::RTMemUsageInfo *, unsigned long, struct D3D::RTBasicTextureInfo *, unsigned long);
// public: void D3D::CRTCurrentMemoryTracker::Destroy(void);
// public: long D3D::CRTCurrentMemoryTracker::FindOrGetTextureInfo(union GPUTEXTURE_FETCH_CONSTANT const *, unsigned long, struct D3D::RTBasicTextureInfo **);
// public: long D3D::CRTCurrentMemoryTracker::OnCreateTexture(union GPUTEXTURE_FETCH_CONSTANT const *, int, int, __int64);
// public: long D3D::CRTCurrentMemoryTracker::OnDeleteTexture(union GPUTEXTURE_FETCH_CONSTANT const *, int, int, __int64);
// public: long D3D::CRTCurrentMemoryTracker::OnIgnoreTexture(union GPUTEXTURE_FETCH_CONSTANT const *);
// public: long D3D::CRTCurrentMemoryTracker::OnStopIgnoringTexture(union GPUTEXTURE_FETCH_CONSTANT const *);
// public: long D3D::CRTCurrentMemoryTracker::OnResolveTarget(struct PIXMetaResolveDestTextureData *);
// public: long D3D::CRTCurrentMemoryTracker::OnSetTextureName(union GPUTEXTURE_FETCH_CONSTANT const *, char const *);
// public: long D3D::CRTCurrentMemoryTracker::OnLoadTextureConstant(union GPUTEXTURE_FETCH_CONSTANT const *, struct D3D::RTBasicTextureInfo **);
// public: void D3D::CRTTextureTracker::HandleCommandBufferResolveAndIgnoreList(class D3D::D3DFastVector<unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> *);
// public: void D3D::CRTTextureTracker::HandleResolve(struct PIXMetaResolveDestTextureData *);
// public: void D3D::CRTTextureTracker::Destroy(void);
// D3DDevice_PixIgnoreTexture;
// D3DDevice_PixStopIgnoringTexture;
// D3DDevice_PixSetTextureName;
// void D3DDevice_PixReportNewTextureInternal(struct D3DDevice *, struct D3DBaseTexture *, int, int);
// D3DDevice_PixReportNewTexture;
// D3DDevice_PixReportDeletedTexture;
// long D3D::_PIXRTGetTextureInfo(struct D3DBaseTexture *, struct D3D::RTBasicTextureInfo **);
// long D3D::_PIXRTGetMemoryInfo(void const *, struct D3D::RTMemUsageInfo **);
// public: long D3D::CRTTextureTracker::TryToDrainQueue(bool);
// public: long D3D::CRTTextureTracker::AddToNameAndIgnoreQueue(enum PIXMeta, void const *, unsigned long);
// public: long D3D::CRTTextureTracker::OnEndingCapture(void);
// public: void D3D::CRTTextureTracker::OnCollectorEndedCapture(void);
// PIXSetTextureName;
// public: long D3D::CRTTextureTracker::AddToNameAndIgnoreQueue<union GPUTEXTURE_FETCH_CONSTANT>(enum PIXMeta, union GPUTEXTURE_FETCH_CONSTANT const &);
// public: long D3D::CRTTextureTracker::AddToNameAndIgnoreQueue<struct D3D::RTIgnoreRangePayload>(enum PIXMeta, struct D3D::RTIgnoreRangePayload const &);
// public: long D3D::CRTTextureTracker::AddToNameAndIgnoreQueue<struct D3D::RTCreateTexturePayload>(enum PIXMeta, struct D3D::RTCreateTexturePayload const &);
// public: long D3D::CRTTextureTracker::AddToNameAndIgnoreQueue<struct D3D::RTDeleteTexturePayload>(enum PIXMeta, struct D3D::RTDeleteTexturePayload const &);
// public: long D3D::CRTTextureTracker::AddToNameAndIgnoreQueue<struct D3D::RTMovedMemoryPayload>(enum PIXMeta, struct D3D::RTMovedMemoryPayload const &);
// public: long D3D::CRTTextureTracker::AddToNameAndIgnoreQueue<struct D3D::RTFreedMemoryPayload>(enum PIXMeta, struct D3D::RTFreedMemoryPayload const &);
// PIXIgnoreTexture;
// PIXStopIgnoringTexture;
// PIXIgnoreMemoryRange;
// PIXStopIgnoringMemoryRange;
// long PIXReportNewTextureInternal(struct D3DBaseTexture *, int, int);
// PIXReportNewTexture;
// PIXReportDeletedTexture;
// PIXReportMovedMemoryRange;
// PIXReportFreedMemoryRange;

//public: D3D::MemInfo_BasicTextureInfoIterator::MemInfo_BasicTextureInfoIterator(struct D3D::RTMemUsageInfo const &)
//{
//    mangled_ppc("??0MemInfo_BasicTextureInfoIterator@D3D@@QAA@ABURTMemUsageInfo@1@@Z");
//};

//public: D3D::MemInfo_BasicTextureInfoIterator::MemInfo_BasicTextureInfoIterator(struct D3D::RTMemUsageInfo const *)
//{
//    mangled_ppc("??0MemInfo_BasicTextureInfoIterator@D3D@@QAA@PBURTMemUsageInfo@1@@Z");
//};

//public: struct D3D::RTBasicTextureInfo * D3D::MemInfo_BasicTextureInfoIterator::operator++(void)
//{
//    mangled_ppc("??EMemInfo_BasicTextureInfoIterator@D3D@@QAAPAURTBasicTextureInfo@1@XZ");
//};

//public: struct D3D::RTBasicTextureInfo * D3D::MemInfo_BasicTextureInfoIterator::operator->(void) const
//{
//    mangled_ppc("??CMemInfo_BasicTextureInfoIterator@D3D@@QBAPAURTBasicTextureInfo@1@XZ");
//};

//public: struct D3D::RTBasicTextureInfo * D3D::MemInfo_BasicTextureInfoIterator::operator struct D3D::RTBasicTextureInfo *(void) const
//{
//    mangled_ppc("??BMemInfo_BasicTextureInfoIterator@D3D@@QBAPAURTBasicTextureInfo@1@XZ");
//};

//public: static struct D3D::RTBasicTextureInfo *& D3D::InfoAccessorBase::pInfo(struct D3D::RTMemUsageInfo *)
//{
//    mangled_ppc("?pInfo@InfoAccessorBase@D3D@@SAAAPAURTBasicTextureInfo@2@PAURTMemUsageInfo@2@@Z");
//};

//public: static struct D3D::RTBasicTextureInfo *& D3D::InfoAccessorBase::pNext(struct D3D::RTBasicTextureInfo *)
//{
//    mangled_ppc("?pNext@InfoAccessorBase@D3D@@SAAAPAURTBasicTextureInfo@2@PAU32@@Z");
//};

//public: static unsigned long D3D::InfoAccessorBase::MemIndex(struct D3D::RTBasicTextureInfo const *)
//{
//    mangled_ppc("?MemIndex@InfoAccessorBase@D3D@@SAKPBURTBasicTextureInfo@2@@Z");
//};

//public: static void D3D::InfoAccessorBase::SetMemIndex(struct D3D::RTBasicTextureInfo *, unsigned long)
//{
//    mangled_ppc("?SetMemIndex@InfoAccessorBase@D3D@@SAXPAURTBasicTextureInfo@2@K@Z");
//};

//public: static struct D3D::RTBasicTextureInfo *& D3D::InfoAccessorMip::pInfo(struct D3D::RTMemUsageInfo *)
//{
//    mangled_ppc("?pInfo@InfoAccessorMip@D3D@@SAAAPAURTBasicTextureInfo@2@PAURTMemUsageInfo@2@@Z");
//};

//public: static struct D3D::RTBasicTextureInfo *& D3D::InfoAccessorMip::pNext(struct D3D::RTBasicTextureInfo *)
//{
//    mangled_ppc("?pNext@InfoAccessorMip@D3D@@SAAAPAURTBasicTextureInfo@2@PAU32@@Z");
//};

//public: static unsigned long D3D::InfoAccessorMip::MemIndex(struct D3D::RTBasicTextureInfo const *)
//{
//    mangled_ppc("?MemIndex@InfoAccessorMip@D3D@@SAKPBURTBasicTextureInfo@2@@Z");
//};

//public: static void D3D::InfoAccessorMip::SetMemIndex(struct D3D::RTBasicTextureInfo *, unsigned long)
//{
//    mangled_ppc("?SetMemIndex@InfoAccessorMip@D3D@@SAXPAURTBasicTextureInfo@2@K@Z");
//};

//enum D3D::CleanupResult & D3D::operator+=(enum D3D::CleanupResult &, enum D3D::CleanupResult)
//{
//    mangled_ppc("??YD3D@@YAAAW4CleanupResult@0@AAW410@W410@@Z");
//};

//strnlen_s
//{
//    mangled_ppc("strnlen_s");
//};

//public: long D3D::RTBasicTextureInfo::AddRef(void)
//{
//    mangled_ppc("?AddRef@RTBasicTextureInfo@D3D@@QAAJXZ");
//};

//public: long D3D::CRTTextureTracker::Initialize(void)
//{
//    mangled_ppc("?Initialize@CRTTextureTracker@D3D@@QAAJXZ");
//};

//public: D3D::CRTTextureTracker::~CRTTextureTracker(void)
//{
//    mangled_ppc("??1CRTTextureTracker@D3D@@QAA@XZ");
//};

//InterlockedCompareExchangeAcquire
//{
//    mangled_ppc("InterlockedCompareExchangeAcquire");
//};

//private: bool D3D::CRTCurrentMemoryTracker::IsPageIndexUsable(unsigned long, bool) const
//{
//    mangled_ppc("?IsPageIndexUsable@CRTCurrentMemoryTracker@D3D@@ABA_NK_N@Z");
//};

//DmTell
//{
//    mangled_ppc("DmTell");
//};

//GPU_CONVERT_CPU_TO_GPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_GPU_ADDRESS");
//};

//public: D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Iterator::Iterator(class D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> const &)
//{
//    mangled_ppc("??0Iterator@?$CTSHashTable@URTMemUsageInfo@D3D@@UHashParams_MemInfo@CRTCurrentMemoryTracker@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAA@ABV12@@Z");
//};

//public: class D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Iterator & D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Iterator::operator++(void)
//{
//    mangled_ppc("??EIterator@?$CTSHashTable@URTMemUsageInfo@D3D@@UHashParams_MemInfo@CRTCurrentMemoryTracker@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAAAV012@XZ");
//};

//public: struct D3D::CTSSortedList<struct D3D::RTMemUsageInfo, unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::ListElement * D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Iterator::operator->(void) const
//{
//    mangled_ppc("??CIterator@?$CTSHashTable@URTMemUsageInfo@D3D@@UHashParams_MemInfo@CRTCurrentMemoryTracker@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QBAPAUListElement@?$CTSSortedList@URTMemUsageInfo@D3D@@K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@2@XZ");
//};

//public: struct D3D::CTSSortedList<struct D3D::RTMemUsageInfo, unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::ListElement * D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Iterator::operator struct D3D::CTSSortedList<struct D3D::RTMemUsageInfo, unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::ListElement *(void) const
//{
//    mangled_ppc("??BIterator@?$CTSHashTable@URTMemUsageInfo@D3D@@UHashParams_MemInfo@CRTCurrentMemoryTracker@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QBAPAUListElement@?$CTSSortedList@URTMemUsageInfo@D3D@@K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@2@XZ");
//};

//public: unsigned long * D3D::D3DFastVector<unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::begin(void) const
//{
//    mangled_ppc("?begin@?$D3DFastVector@K$1?RTDebugMemAlloc@D3D@@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QBAPAKXZ");
//};

//public: unsigned long D3D::D3DFastVector<unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::size(void) const
//{
//    mangled_ppc("?size@?$D3DFastVector@K$1?RTDebugMemAlloc@D3D@@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QBAKXZ");
//};

//void D3D::MoveBasicInfoToTop<struct D3D::InfoAccessorBase>(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo **&, struct D3D::RTBasicTextureInfo *&)
//{
//    mangled_ppc("??$MoveBasicInfoToTop@UInfoAccessorBase@D3D@@@D3D@@YAXPAPAURTBasicTextureInfo@0@AAPAPAU10@AAPAU10@@Z");
//};

//void D3D::MoveBasicInfoToTop<struct D3D::InfoAccessorMip>(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo **&, struct D3D::RTBasicTextureInfo *&)
//{
//    mangled_ppc("??$MoveBasicInfoToTop@UInfoAccessorMip@D3D@@@D3D@@YAXPAPAURTBasicTextureInfo@0@AAPAPAU10@AAPAU10@@Z");
//};

//public: long D3D::CCommandBuffer::AddRTListData<struct D3D::RTCreateTexturePayload>(unsigned long, struct D3D::RTCreateTexturePayload const &)
//{
//    mangled_ppc("??$AddRTListData@URTCreateTexturePayload@D3D@@@CCommandBuffer@D3D@@QAAJKABURTCreateTexturePayload@1@@Z");
//};

//public: void D3D::CDevice::PutPix<struct D3D::RTCreateTexturePayload>(unsigned long *&, enum PIXMeta, struct D3D::RTCreateTexturePayload const &)
//{
//    mangled_ppc("??$PutPix@URTCreateTexturePayload@D3D@@@CDevice@D3D@@QAAXAAPAKW4PIXMeta@@ABURTCreateTexturePayload@1@@Z");
//};

//public: long D3D::CCommandBuffer::AddRTListData<struct D3D::RTDeleteTexturePayload>(unsigned long, struct D3D::RTDeleteTexturePayload const &)
//{
//    mangled_ppc("??$AddRTListData@URTDeleteTexturePayload@D3D@@@CCommandBuffer@D3D@@QAAJKABURTDeleteTexturePayload@1@@Z");
//};

//public: void D3D::CDevice::PutPix<struct D3D::RTDeleteTexturePayload>(unsigned long *&, enum PIXMeta, struct D3D::RTDeleteTexturePayload const &)
//{
//    mangled_ppc("??$PutPix@URTDeleteTexturePayload@D3D@@@CDevice@D3D@@QAAXAAPAKW4PIXMeta@@ABURTDeleteTexturePayload@1@@Z");
//};

//public: long D3D::CCommandBuffer::AddRTListData<struct D3D::RTMovedMemoryPayload>(unsigned long, struct D3D::RTMovedMemoryPayload const &)
//{
//    mangled_ppc("??$AddRTListData@URTMovedMemoryPayload@D3D@@@CCommandBuffer@D3D@@QAAJKABURTMovedMemoryPayload@1@@Z");
//};

//public: void D3D::CDevice::PutPix<struct D3D::RTMovedMemoryPayload>(unsigned long *&, enum PIXMeta, struct D3D::RTMovedMemoryPayload const &)
//{
//    mangled_ppc("??$PutPix@URTMovedMemoryPayload@D3D@@@CDevice@D3D@@QAAXAAPAKW4PIXMeta@@ABURTMovedMemoryPayload@1@@Z");
//};

//public: long D3D::CCommandBuffer::AddRTListData<struct D3D::RTFreedMemoryPayload>(unsigned long, struct D3D::RTFreedMemoryPayload const &)
//{
//    mangled_ppc("??$AddRTListData@URTFreedMemoryPayload@D3D@@@CCommandBuffer@D3D@@QAAJKABURTFreedMemoryPayload@1@@Z");
//};

//public: void D3D::CDevice::PutPix<struct D3D::RTFreedMemoryPayload>(unsigned long *&, enum PIXMeta, struct D3D::RTFreedMemoryPayload const &)
//{
//    mangled_ppc("??$PutPix@URTFreedMemoryPayload@D3D@@@CDevice@D3D@@QAAXAAPAKW4PIXMeta@@ABURTFreedMemoryPayload@1@@Z");
//};

//PIXWriteData
//{
//    mangled_ppc("PIXWriteData");
//};

//void * D3D::RTDebugMemAlloc(unsigned long)
//{
//    mangled_ppc("?RTDebugMemAlloc@D3D@@YAPAXK@Z");
//};

//RTDebugMemFree
//{
//    mangled_ppc("RTDebugMemFree");
//};

//public: bool D3D::AutoCriticalSection::GotCriticalSection(void)
//{
//    mangled_ppc("?GotCriticalSection@AutoCriticalSection@D3D@@QAA_NXZ");
//};

//public: D3D::AutoCriticalSection::AutoCriticalSection(struct _RTL_CRITICAL_SECTION *, bool)
//{
//    mangled_ppc("??0AutoCriticalSection@D3D@@QAA@PAU_RTL_CRITICAL_SECTION@@_N@Z");
//};

//public: D3D::RTRelevantTextureFields::RTRelevantTextureFields(union GPUTEXTURE_FETCH_CONSTANT const *)
//{
//    mangled_ppc("??0RTRelevantTextureFields@D3D@@QAA@PBTGPUTEXTURE_FETCH_CONSTANT@@@Z");
//};

//public: static unsigned long D3D::CRTCurrentMemoryTracker::HashParams_MemInfo::HashToIndex(unsigned long)
//{
//    mangled_ppc("?HashToIndex@HashParams_MemInfo@CRTCurrentMemoryTracker@D3D@@SAKK@Z");
//};

//public: static unsigned long D3D::CRTCurrentMemoryTracker::GetIndexFromGpuTexAddress(unsigned long)
//{
//    mangled_ppc("?GetIndexFromGpuTexAddress@CRTCurrentMemoryTracker@D3D@@SAKK@Z");
//};

//public: static unsigned long D3D::CRTCurrentMemoryTracker::GetIndexFromCpuTexAddress(unsigned long)
//{
//    mangled_ppc("?GetIndexFromCpuTexAddress@CRTCurrentMemoryTracker@D3D@@SAKK@Z");
//};

//bool D3D::RTGracefulShutdownEnterThread(void)
//{
//    mangled_ppc("?RTGracefulShutdownEnterThread@D3D@@YA_NXZ");
//};

//void D3D::RTGracefulShutdownLeaveThread(void)
//{
//    mangled_ppc("?RTGracefulShutdownLeaveThread@D3D@@YAXXZ");
//};

//public: D3D::RTGracefulShutdownThreadScoped::RTGracefulShutdownThreadScoped(void)
//{
//    mangled_ppc("??0RTGracefulShutdownThreadScoped@D3D@@QAA@XZ");
//};

//public: D3D::RTGracefulShutdownThreadScoped::~RTGracefulShutdownThreadScoped(void)
//{
//    mangled_ppc("??1RTGracefulShutdownThreadScoped@D3D@@QAA@XZ");
//};

//public: bool D3D::RTGracefulShutdownThreadScoped::operator bool(void) const
//{
//    mangled_ppc("??BRTGracefulShutdownThreadScoped@D3D@@QBA_NXZ");
//};

//class D3D::CDevice * D3D::Promote_IfOwned(struct D3DDevice *)
//{
//    mangled_ppc("?Promote_IfOwned@D3D@@YAPAVCDevice@1@PAUD3DDevice@@@Z");
//};

//class D3D::CDevice * D3D::GetGlobalDevice_IfOwned(void)
//{
//    mangled_ppc("?GetGlobalDevice_IfOwned@D3D@@YAPAVCDevice@1@XZ");
//};

//public: struct D3D::RTMemUsageInfo * D3D::CTSSortedList<struct D3D::RTMemUsageInfo, unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Find(unsigned long)
//{
//    mangled_ppc("?Find@?$CTSSortedList@URTMemUsageInfo@D3D@@K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAURTMemUsageInfo@2@K@Z");
//};

//public: struct D3D::RTMemUsageInfo * D3D::CTSSortedList<struct D3D::RTMemUsageInfo, unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned long)
//{
//    mangled_ppc("?FindOrAdd@?$CTSSortedList@URTMemUsageInfo@D3D@@K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAURTMemUsageInfo@2@K@Z");
//};

//unsigned long D3D::GetGPUAddress<void const>(void const *)
//{
//    mangled_ppc("??$GetGPUAddress@$$CBX@D3D@@YAKPBX@Z");
//};

//void D3D::MoveBasicInfoToTopBase(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo **&, struct D3D::RTBasicTextureInfo *&)
//{
//    mangled_ppc("?MoveBasicInfoToTopBase@D3D@@YAXPAPAURTBasicTextureInfo@1@AAPAPAU21@AAPAU21@@Z");
//};

//void D3D::MoveBasicInfoToTopMip(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo **&, struct D3D::RTBasicTextureInfo *&)
//{
//    mangled_ppc("?MoveBasicInfoToTopMip@D3D@@YAXPAPAURTBasicTextureInfo@1@AAPAPAU21@AAPAU21@@Z");
//};

//void D3D::TrackBasicTextureInfoDestruction(struct D3D::RTBasicTextureInfo *, unsigned __int64)
//{
//    mangled_ppc("?TrackBasicTextureInfoDestruction@D3D@@YAXPAURTBasicTextureInfo@1@_K@Z");
//};

//void D3D::TrackBasicTextureInfoListDestruction(struct D3D::RTMemUsageInfo &, unsigned __int64)
//{
//    mangled_ppc("?TrackBasicTextureInfoListDestruction@D3D@@YAXAAURTMemUsageInfo@1@_K@Z");
//};

//public: bool D3D::RTRelevantTextureFields::IsSimilarTexture(struct D3D::RTRelevantTextureFields const &) const
//{
//    mangled_ppc("?IsSimilarTexture@RTRelevantTextureFields@D3D@@QBA_NABU12@@Z");
//};

//public: long D3D::RTBasicTextureInfo::Release(void)
//{
//    mangled_ppc("?Release@RTBasicTextureInfo@D3D@@QAAJXZ");
//};

//public: void D3D::CRTCurrentMemoryTracker::OnEndingCapture(void)
//{
//    mangled_ppc("?OnEndingCapture@CRTCurrentMemoryTracker@D3D@@QAAXXZ");
//};

//public: void D3D::CRTCurrentMemoryTracker::OnEndedCapture(void)
//{
//    mangled_ppc("?OnEndedCapture@CRTCurrentMemoryTracker@D3D@@QAAXXZ");
//};

//public: static struct D3D::RTBasicTextureInfo * D3D::RTBasicTextureInfo::MakeNewCurrentInfoNode(struct D3D::RTRelevantTextureFields *)
//{
//    mangled_ppc("?MakeNewCurrentInfoNode@RTBasicTextureInfo@D3D@@SAPAU12@PAURTRelevantTextureFields@2@@Z");
//};

//bool D3D::TextureHasUsableMipAddress(union GPUTEXTURE_FETCH_CONSTANT const *)
//{
//    mangled_ppc("?TextureHasUsableMipAddress@D3D@@YA_NPBTGPUTEXTURE_FETCH_CONSTANT@@@Z");
//};

//public: long D3D::CRTCurrentMemoryTracker::OnStopIgnoringMemoryRange(void const *, unsigned long)
//{
//    mangled_ppc("?OnStopIgnoringMemoryRange@CRTCurrentMemoryTracker@D3D@@QAAJPBXK@Z");
//};

//public: long D3D::CRTCurrentMemoryTracker::OnDogmaResolve(void)
//{
//    mangled_ppc("?OnDogmaResolve@CRTCurrentMemoryTracker@D3D@@QAAJXZ");
//};

//char const * D3D::DupString(char const *)
//{
//    mangled_ppc("?DupString@D3D@@YAPBDPBD@Z");
//};

//long D3D::SaveTextureNameToGpuCapture(char const *, unsigned long)
//{
//    mangled_ppc("?SaveTextureNameToGpuCapture@D3D@@YAJPBDK@Z");
//};

//public: long D3D::CRTCurrentMemoryTracker::SaveTextureNamesToGpuCapture(void)
//{
//    mangled_ppc("?SaveTextureNamesToGpuCapture@CRTCurrentMemoryTracker@D3D@@QAAJXZ");
//};

//D3DDevice_PixStopIgnoringMemoryRange
//{
//    mangled_ppc("D3DDevice_PixStopIgnoringMemoryRange");
//};

//void D3D::_StopAndWaitRTGlobal(void)
//{
//    mangled_ppc("?_StopAndWaitRTGlobal@D3D@@YAXXZ");
//};

//long D3D::_PIXRTGetStatistics(struct D3D::RTStatistics **)
//{
//    mangled_ppc("?_PIXRTGetStatistics@D3D@@YAJPAPAURTStatistics@1@@Z");
//};

//public: void D3D::CTSSortedList<struct D3D::RTMemUsageInfo, unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSSortedList@URTMemUsageInfo@D3D@@K$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//enum D3D::CleanupResult D3D::CleanupBasicInfoTail<struct D3D::InfoAccessorBase>(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long)
//{
//    mangled_ppc("??$CleanupBasicInfoTail@UInfoAccessorBase@D3D@@@D3D@@YA?AW4CleanupResult@0@PAPAURTBasicTextureInfo@0@PAU20@KK@Z");
//};

//enum D3D::CleanupResult D3D::CleanupBasicInfoTail<struct D3D::InfoAccessorMip>(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long)
//{
//    mangled_ppc("??$CleanupBasicInfoTail@UInfoAccessorMip@D3D@@@D3D@@YA?AW4CleanupResult@0@PAPAURTBasicTextureInfo@0@PAU20@KK@Z");
//};

//enum D3D::CleanupResult D3D::FindMatchingBasicTextureInfo<struct D3D::InfoAccessorBase>(struct D3D::RTRelevantTextureFields const &, struct D3D::RTBasicTextureInfo **&, unsigned long &, unsigned long, unsigned long)
//{
//    mangled_ppc("??$FindMatchingBasicTextureInfo@UInfoAccessorBase@D3D@@@D3D@@YA?AW4CleanupResult@0@ABURTRelevantTextureFields@0@AAPAPAURTBasicTextureInfo@0@AAKKK@Z");
//};

//enum D3D::CleanupResult D3D::FindMatchingBasicTextureInfo<struct D3D::InfoAccessorMip>(struct D3D::RTRelevantTextureFields const &, struct D3D::RTBasicTextureInfo **&, unsigned long &, unsigned long, unsigned long)
//{
//    mangled_ppc("??$FindMatchingBasicTextureInfo@UInfoAccessorMip@D3D@@@D3D@@YA?AW4CleanupResult@0@ABURTRelevantTextureFields@0@AAPAPAURTBasicTextureInfo@0@AAKKK@Z");
//};

//enum D3D::CleanupResult D3D::MergeBasicTextureInfoList<struct D3D::InfoAccessorBase>(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long)
//{
//    mangled_ppc("??$MergeBasicTextureInfoList@UInfoAccessorBase@D3D@@@D3D@@YA?AW4CleanupResult@0@PAPAURTBasicTextureInfo@0@PAU20@KK@Z");
//};

//enum D3D::CleanupResult D3D::MergeBasicTextureInfoList<struct D3D::InfoAccessorMip>(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long)
//{
//    mangled_ppc("??$MergeBasicTextureInfoList@UInfoAccessorMip@D3D@@@D3D@@YA?AW4CleanupResult@0@PAPAURTBasicTextureInfo@0@PAU20@KK@Z");
//};

//public: struct D3D::RTMemUsageInfo * D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Find(unsigned long)
//{
//    mangled_ppc("?Find@?$CTSHashTable@URTMemUsageInfo@D3D@@UHashParams_MemInfo@CRTCurrentMemoryTracker@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAURTMemUsageInfo@2@K@Z");
//};

//public: struct D3D::RTMemUsageInfo * D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::FindOrAdd(unsigned long)
//{
//    mangled_ppc("?FindOrAdd@?$CTSHashTable@URTMemUsageInfo@D3D@@UHashParams_MemInfo@CRTCurrentMemoryTracker@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAPAURTMemUsageInfo@2@K@Z");
//};

//enum D3D::CleanupResult D3D::CleanupBasicInfoTailBase(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long)
//{
//    mangled_ppc("?CleanupBasicInfoTailBase@D3D@@YA?AW4CleanupResult@1@PAPAURTBasicTextureInfo@1@PAU31@KK@Z");
//};

//enum D3D::CleanupResult D3D::CleanupBasicInfoTailMip(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long)
//{
//    mangled_ppc("?CleanupBasicInfoTailMip@D3D@@YA?AW4CleanupResult@1@PAPAURTBasicTextureInfo@1@PAU31@KK@Z");
//};

//enum D3D::CleanupResult D3D::FindMatchingBasicTextureInfoBase(struct D3D::RTRelevantTextureFields const &, struct D3D::RTBasicTextureInfo **&, unsigned long &, unsigned long, unsigned long)
//{
//    mangled_ppc("?FindMatchingBasicTextureInfoBase@D3D@@YA?AW4CleanupResult@1@ABURTRelevantTextureFields@1@AAPAPAURTBasicTextureInfo@1@AAKKK@Z");
//};

//enum D3D::CleanupResult D3D::FindMatchingBasicTextureInfoMip(struct D3D::RTRelevantTextureFields const &, struct D3D::RTBasicTextureInfo **&, unsigned long &, unsigned long, unsigned long)
//{
//    mangled_ppc("?FindMatchingBasicTextureInfoMip@D3D@@YA?AW4CleanupResult@1@ABURTRelevantTextureFields@1@AAPAPAURTBasicTextureInfo@1@AAKKK@Z");
//};

//enum D3D::CleanupResult D3D::MergeBasicTextureInfoListBase(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long)
//{
//    mangled_ppc("?MergeBasicTextureInfoListBase@D3D@@YA?AW4CleanupResult@1@PAPAURTBasicTextureInfo@1@PAU31@KK@Z");
//};

//enum D3D::CleanupResult D3D::MergeBasicTextureInfoListMip(struct D3D::RTBasicTextureInfo **, struct D3D::RTBasicTextureInfo *, unsigned long, unsigned long)
//{
//    mangled_ppc("?MergeBasicTextureInfoListMip@D3D@@YA?AW4CleanupResult@1@PAPAURTBasicTextureInfo@1@PAU31@KK@Z");
//};

//void D3D::DestroyBasicTextureInfoLists(struct D3D::RTMemUsageInfo &)
//{
//    mangled_ppc("?DestroyBasicTextureInfoLists@D3D@@YAXAAURTMemUsageInfo@1@@Z");
//};

//public: void D3D::CRTTextureTracker::OnCollectorEndingCapture(void)
//{
//    mangled_ppc("?OnCollectorEndingCapture@CRTTextureTracker@D3D@@QAAXXZ");
//};

//private: void D3D::CRTCurrentMemoryTracker::SetNewBasicTextureInfo(struct D3D::RTMemUsageInfo *, unsigned long, struct D3D::RTMemUsageInfo *, unsigned long, struct D3D::RTBasicTextureInfo *)
//{
//    mangled_ppc("?SetNewBasicTextureInfo@CRTCurrentMemoryTracker@D3D@@AAAXPAURTMemUsageInfo@2@K0KPAURTBasicTextureInfo@2@@Z");
//};

//private: struct D3D::RTMemUsageInfo * D3D::CRTCurrentMemoryTracker::FindOrAddValidMemUsageInfo(unsigned long, bool)
//{
//    mangled_ppc("?FindOrAddValidMemUsageInfo@CRTCurrentMemoryTracker@D3D@@AAAPAURTMemUsageInfo@2@K_N@Z");
//};

//public: long D3D::CRTCurrentMemoryTracker::OnIgnoreMemoryRange(void const *, unsigned long)
//{
//    mangled_ppc("?OnIgnoreMemoryRange@CRTCurrentMemoryTracker@D3D@@QAAJPBXK@Z");
//};

//public: long D3D::CRTCurrentMemoryTracker::OnReportMovedMemoryRange(void const *, void const *, unsigned long)
//{
//    mangled_ppc("?OnReportMovedMemoryRange@CRTCurrentMemoryTracker@D3D@@QAAJPBX0K@Z");
//};

//public: long D3D::CRTCurrentMemoryTracker::OnReportFreedMemoryRange(void const *, unsigned long, unsigned __int64)
//{
//    mangled_ppc("?OnReportFreedMemoryRange@CRTCurrentMemoryTracker@D3D@@QAAJPBXK_K@Z");
//};

//D3DDevice_PixIgnoreMemoryRange
//{
//    mangled_ppc("D3DDevice_PixIgnoreMemoryRange");
//};

//D3DDevice_PixReportMovedMemoryRange
//{
//    mangled_ppc("D3DDevice_PixReportMovedMemoryRange");
//};

//D3DDevice_PixReportFreedMemoryRange
//{
//    mangled_ppc("D3DDevice_PixReportFreedMemoryRange");
//};

//public: void D3D::CTSHashTable<struct D3D::RTMemUsageInfo, struct D3D::CRTCurrentMemoryTracker::HashParams_MemInfo, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)>::Destroy(void)
//{
//    mangled_ppc("?Destroy@?$CTSHashTable@URTMemUsageInfo@D3D@@UHashParams_MemInfo@CRTCurrentMemoryTracker@2@$1?RTDebugMemAlloc@2@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@D3D@@QAAXXZ");
//};

//enum D3D::CleanupResult D3D::AddBasicInfoToList<struct D3D::InfoAccessorBase>(struct D3D::RTMemUsageInfo *, unsigned long, struct D3D::RTBasicTextureInfo *, unsigned long)
//{
//    mangled_ppc("??$AddBasicInfoToList@UInfoAccessorBase@D3D@@@D3D@@YA?AW4CleanupResult@0@PAURTMemUsageInfo@0@KPAURTBasicTextureInfo@0@K@Z");
//};

//enum D3D::CleanupResult D3D::AddBasicInfoToList<struct D3D::InfoAccessorMip>(struct D3D::RTMemUsageInfo *, unsigned long, struct D3D::RTBasicTextureInfo *, unsigned long)
//{
//    mangled_ppc("??$AddBasicInfoToList@UInfoAccessorMip@D3D@@@D3D@@YA?AW4CleanupResult@0@PAURTMemUsageInfo@0@KPAURTBasicTextureInfo@0@K@Z");
//};

//public: struct D3D::RTMemUsageInfo * D3D::CRTCurrentMemoryTracker::FindFromCpuTexAddress(unsigned long)
//{
//    mangled_ppc("?FindFromCpuTexAddress@CRTCurrentMemoryTracker@D3D@@QAAPAURTMemUsageInfo@2@K@Z");
//};

//public: struct D3D::RTMemUsageInfo * D3D::CRTCurrentMemoryTracker::GetFromCpuPointer(void const *)
//{
//    mangled_ppc("?GetFromCpuPointer@CRTCurrentMemoryTracker@D3D@@QAAPAURTMemUsageInfo@2@PBX@Z");
//};

//enum D3D::CleanupResult D3D::AddBasicInfoToListBase(struct D3D::RTMemUsageInfo *, unsigned long, struct D3D::RTBasicTextureInfo *, unsigned long)
//{
//    mangled_ppc("?AddBasicInfoToListBase@D3D@@YA?AW4CleanupResult@1@PAURTMemUsageInfo@1@KPAURTBasicTextureInfo@1@K@Z");
//};

//enum D3D::CleanupResult D3D::AddBasicInfoToListMip(struct D3D::RTMemUsageInfo *, unsigned long, struct D3D::RTBasicTextureInfo *, unsigned long)
//{
//    mangled_ppc("?AddBasicInfoToListMip@D3D@@YA?AW4CleanupResult@1@PAURTMemUsageInfo@1@KPAURTBasicTextureInfo@1@K@Z");
//};

//public: void D3D::CRTCurrentMemoryTracker::Destroy(void)
//{
//    mangled_ppc("?Destroy@CRTCurrentMemoryTracker@D3D@@QAAXXZ");
//};

//public: long D3D::CRTCurrentMemoryTracker::FindOrGetTextureInfo(union GPUTEXTURE_FETCH_CONSTANT const *, unsigned long, struct D3D::RTBasicTextureInfo **)
//{
//    mangled_ppc("?FindOrGetTextureInfo@CRTCurrentMemoryTracker@D3D@@QAAJPBTGPUTEXTURE_FETCH_CONSTANT@@KPAPAURTBasicTextureInfo@2@@Z");
//};

//public: long D3D::CRTCurrentMemoryTracker::OnCreateTexture(union GPUTEXTURE_FETCH_CONSTANT const *, int, int, __int64)
//{
//    mangled_ppc("?OnCreateTexture@CRTCurrentMemoryTracker@D3D@@QAAJPBTGPUTEXTURE_FETCH_CONSTANT@@HH_J@Z");
//};

//public: long D3D::CRTCurrentMemoryTracker::OnDeleteTexture(union GPUTEXTURE_FETCH_CONSTANT const *, int, int, __int64)
//{
//    mangled_ppc("?OnDeleteTexture@CRTCurrentMemoryTracker@D3D@@QAAJPBTGPUTEXTURE_FETCH_CONSTANT@@HH_J@Z");
//};

//public: long D3D::CRTCurrentMemoryTracker::OnIgnoreTexture(union GPUTEXTURE_FETCH_CONSTANT const *)
//{
//    mangled_ppc("?OnIgnoreTexture@CRTCurrentMemoryTracker@D3D@@QAAJPBTGPUTEXTURE_FETCH_CONSTANT@@@Z");
//};

//public: long D3D::CRTCurrentMemoryTracker::OnStopIgnoringTexture(union GPUTEXTURE_FETCH_CONSTANT const *)
//{
//    mangled_ppc("?OnStopIgnoringTexture@CRTCurrentMemoryTracker@D3D@@QAAJPBTGPUTEXTURE_FETCH_CONSTANT@@@Z");
//};

//public: long D3D::CRTCurrentMemoryTracker::OnResolveTarget(struct PIXMetaResolveDestTextureData *)
//{
//    mangled_ppc("?OnResolveTarget@CRTCurrentMemoryTracker@D3D@@QAAJPAUPIXMetaResolveDestTextureData@@@Z");
//};

//public: long D3D::CRTCurrentMemoryTracker::OnSetTextureName(union GPUTEXTURE_FETCH_CONSTANT const *, char const *)
//{
//    mangled_ppc("?OnSetTextureName@CRTCurrentMemoryTracker@D3D@@QAAJPBTGPUTEXTURE_FETCH_CONSTANT@@PBD@Z");
//};

//public: long D3D::CRTCurrentMemoryTracker::OnLoadTextureConstant(union GPUTEXTURE_FETCH_CONSTANT const *, struct D3D::RTBasicTextureInfo **)
//{
//    mangled_ppc("?OnLoadTextureConstant@CRTCurrentMemoryTracker@D3D@@QAAJPBTGPUTEXTURE_FETCH_CONSTANT@@PAPAURTBasicTextureInfo@2@@Z");
//};

//public: void D3D::CRTTextureTracker::HandleCommandBufferResolveAndIgnoreList(class D3D::D3DFastVector<unsigned long, void * (D3D::RTDebugMemAlloc::*)(unsigned long), void (D3D::RTDebugMemFree::*)(void *)> *)
//{
//    mangled_ppc("?HandleCommandBufferResolveAndIgnoreList@CRTTextureTracker@D3D@@QAAXPAV?$D3DFastVector@K$1?RTDebugMemAlloc@D3D@@YAPAXK@Z$1?RTDebugMemFree@2@YAXPAX@Z@2@@Z");
//};

//public: void D3D::CRTTextureTracker::HandleResolve(struct PIXMetaResolveDestTextureData *)
//{
//    mangled_ppc("?HandleResolve@CRTTextureTracker@D3D@@QAAXPAUPIXMetaResolveDestTextureData@@@Z");
//};

//public: void D3D::CRTTextureTracker::Destroy(void)
//{
//    mangled_ppc("?Destroy@CRTTextureTracker@D3D@@QAAXXZ");
//};

//D3DDevice_PixIgnoreTexture
//{
//    mangled_ppc("D3DDevice_PixIgnoreTexture");
//};

//D3DDevice_PixStopIgnoringTexture
//{
//    mangled_ppc("D3DDevice_PixStopIgnoringTexture");
//};

//D3DDevice_PixSetTextureName
//{
//    mangled_ppc("D3DDevice_PixSetTextureName");
//};

//void D3DDevice_PixReportNewTextureInternal(struct D3DDevice *, struct D3DBaseTexture *, int, int)
//{
//    mangled_ppc("?D3DDevice_PixReportNewTextureInternal@@YAXPAUD3DDevice@@PAUD3DBaseTexture@@HH@Z");
//};

//D3DDevice_PixReportNewTexture
//{
//    mangled_ppc("D3DDevice_PixReportNewTexture");
//};

//D3DDevice_PixReportDeletedTexture
//{
//    mangled_ppc("D3DDevice_PixReportDeletedTexture");
//};

//long D3D::_PIXRTGetTextureInfo(struct D3DBaseTexture *, struct D3D::RTBasicTextureInfo **)
//{
//    mangled_ppc("?_PIXRTGetTextureInfo@D3D@@YAJPAUD3DBaseTexture@@PAPAURTBasicTextureInfo@1@@Z");
//};

//long D3D::_PIXRTGetMemoryInfo(void const *, struct D3D::RTMemUsageInfo **)
//{
//    mangled_ppc("?_PIXRTGetMemoryInfo@D3D@@YAJPBXPAPAURTMemUsageInfo@1@@Z");
//};

//public: long D3D::CRTTextureTracker::TryToDrainQueue(bool)
//{
//    mangled_ppc("?TryToDrainQueue@CRTTextureTracker@D3D@@QAAJ_N@Z");
//};

//public: long D3D::CRTTextureTracker::AddToNameAndIgnoreQueue(enum PIXMeta, void const *, unsigned long)
//{
//    mangled_ppc("?AddToNameAndIgnoreQueue@CRTTextureTracker@D3D@@QAAJW4PIXMeta@@PBXK@Z");
//};

//public: long D3D::CRTTextureTracker::OnEndingCapture(void)
//{
//    mangled_ppc("?OnEndingCapture@CRTTextureTracker@D3D@@QAAJXZ");
//};

//public: void D3D::CRTTextureTracker::OnCollectorEndedCapture(void)
//{
//    mangled_ppc("?OnCollectorEndedCapture@CRTTextureTracker@D3D@@QAAXXZ");
//};

//PIXSetTextureName
//{
//    mangled_ppc("PIXSetTextureName");
//};

//public: long D3D::CRTTextureTracker::AddToNameAndIgnoreQueue<union GPUTEXTURE_FETCH_CONSTANT>(enum PIXMeta, union GPUTEXTURE_FETCH_CONSTANT const &)
//{
//    mangled_ppc("??$AddToNameAndIgnoreQueue@TGPUTEXTURE_FETCH_CONSTANT@@@CRTTextureTracker@D3D@@QAAJW4PIXMeta@@ABTGPUTEXTURE_FETCH_CONSTANT@@@Z");
//};

//public: long D3D::CRTTextureTracker::AddToNameAndIgnoreQueue<struct D3D::RTIgnoreRangePayload>(enum PIXMeta, struct D3D::RTIgnoreRangePayload const &)
//{
//    mangled_ppc("??$AddToNameAndIgnoreQueue@URTIgnoreRangePayload@D3D@@@CRTTextureTracker@D3D@@QAAJW4PIXMeta@@ABURTIgnoreRangePayload@1@@Z");
//};

//public: long D3D::CRTTextureTracker::AddToNameAndIgnoreQueue<struct D3D::RTCreateTexturePayload>(enum PIXMeta, struct D3D::RTCreateTexturePayload const &)
//{
//    mangled_ppc("??$AddToNameAndIgnoreQueue@URTCreateTexturePayload@D3D@@@CRTTextureTracker@D3D@@QAAJW4PIXMeta@@ABURTCreateTexturePayload@1@@Z");
//};

//public: long D3D::CRTTextureTracker::AddToNameAndIgnoreQueue<struct D3D::RTDeleteTexturePayload>(enum PIXMeta, struct D3D::RTDeleteTexturePayload const &)
//{
//    mangled_ppc("??$AddToNameAndIgnoreQueue@URTDeleteTexturePayload@D3D@@@CRTTextureTracker@D3D@@QAAJW4PIXMeta@@ABURTDeleteTexturePayload@1@@Z");
//};

//public: long D3D::CRTTextureTracker::AddToNameAndIgnoreQueue<struct D3D::RTMovedMemoryPayload>(enum PIXMeta, struct D3D::RTMovedMemoryPayload const &)
//{
//    mangled_ppc("??$AddToNameAndIgnoreQueue@URTMovedMemoryPayload@D3D@@@CRTTextureTracker@D3D@@QAAJW4PIXMeta@@ABURTMovedMemoryPayload@1@@Z");
//};

//public: long D3D::CRTTextureTracker::AddToNameAndIgnoreQueue<struct D3D::RTFreedMemoryPayload>(enum PIXMeta, struct D3D::RTFreedMemoryPayload const &)
//{
//    mangled_ppc("??$AddToNameAndIgnoreQueue@URTFreedMemoryPayload@D3D@@@CRTTextureTracker@D3D@@QAAJW4PIXMeta@@ABURTFreedMemoryPayload@1@@Z");
//};

//PIXIgnoreTexture
//{
//    mangled_ppc("PIXIgnoreTexture");
//};

//PIXStopIgnoringTexture
//{
//    mangled_ppc("PIXStopIgnoringTexture");
//};

//PIXIgnoreMemoryRange
//{
//    mangled_ppc("PIXIgnoreMemoryRange");
//};

//PIXStopIgnoringMemoryRange
//{
//    mangled_ppc("PIXStopIgnoringMemoryRange");
//};

//long PIXReportNewTextureInternal(struct D3DBaseTexture *, int, int)
//{
//    mangled_ppc("?PIXReportNewTextureInternal@@YAJPAUD3DBaseTexture@@HH@Z");
//};

//PIXReportNewTexture
//{
//    mangled_ppc("PIXReportNewTexture");
//};

//PIXReportDeletedTexture
//{
//    mangled_ppc("PIXReportDeletedTexture");
//};

//PIXReportMovedMemoryRange
//{
//    mangled_ppc("PIXReportMovedMemoryRange");
//};

//PIXReportFreedMemoryRange
//{
//    mangled_ppc("PIXReportFreedMemoryRange");
//};

