/* ---------- headers */

#include "xdk\d3d9d\ring.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// D3D__NullHardware; // "D3D__NullHardware"
// D3D__UseRTModificationsForPIX; // "D3D__UseRTModificationsForPIX"
// D3D__SingleStepper; // "D3D__SingleStepper"
// D3D__BreakOnDeprecation; // "D3D__BreakOnDeprecation"
// g_DumpRingBuffer; // "g_DumpRingBuffer"

// public: unsigned long * D3D::CDevice::BeginBuffer(unsigned long *, unsigned long);
// public: unsigned long * D3D::CDevice::BeginRingManual(void);
// public: void D3D::CDevice::EndRing(unsigned long *);
// public: unsigned long * D3D::CDevice::EndBuffer(unsigned long *);
// public: void D3D::CDevice::Packet0(unsigned long *&, unsigned long, unsigned long);
// public: void D3D::CDevice::Packet0NoInc(unsigned long *&, unsigned long, unsigned long);
// public: void D3D::CDevice::Packet2Nop(unsigned long *&);
// public: void D3D::CDevice::Packet3(unsigned long *&, unsigned long, unsigned long, unsigned long);
// public: void D3D::CDevice::PutD(unsigned long *&, unsigned long);
// public: void D3D::CDevice::PutF(unsigned long *&, float);
// public: void D3D::CDevice::PutRaw(unsigned long *);
// unsigned long * D3D::InitializeChunkForIndirectBuffer1(struct D3D::RingAllocChunk volatile *, unsigned long, unsigned long);
// public: void D3D::CDevice::SaveRingBufferState(void);
// public: void D3D::CDevice::RestoreRingBufferState(void);
// public: int D3D::CDevice::IsPastStopPoint(unsigned long *, unsigned long);
// public: int D3D::CDevice::IsSecondaryMemoryBusy(unsigned long *, unsigned long);
// public: void D3D::CDevice::BlockOnSecondaryPosition(unsigned long *, unsigned long);
// public: void D3D::CDevice::EndRingAlloc(void *);
// public: int D3D::CDevice::IsPrimaryMemoryBusy(unsigned long, unsigned long);
// public: unsigned long D3D::CDevice::BlockOnPrimaryRange(unsigned long, unsigned long);
// void D3D::SetPrimaryBufferIndex(struct D3DDevice *, unsigned long);
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS;
// GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS;
// GPU_CONVERT_XPS_GPU_TO_CPU_ADDRESS;
// D3DPtrToDWORD;
// void D3D::AddAsynchronousInvalidateRange(unsigned __int64*, unsigned long, unsigned long);
// void D3D::GetAsynchronousInvalidateRange(unsigned __int64*, unsigned long *, unsigned long *);
// void D3D::InterruptCallback(unsigned long, class D3D::CDevice *);
// int D3D::IsPowerOf2<int>(int);
// void D3D::AssertWriteCombined(void *, char *);
// int D3D::IsXpsLockedOffset(unsigned long);
// int D3D::Is16MBPage(void *);
// void * D3D::GetCPUAddress(unsigned long);
// public: void D3D::CRTPM4RingManager::StartNewSegment(void);
// public: void D3D::CRTCommandBufferHacker::StartNewSegment(void);
// bool D3D::RTGracefulShutdownThreadsPending(void);
// public: void D3D::CRingAllocList::End(unsigned long volatile *);
// unsigned long D3D::EncodePosition(unsigned long *, unsigned long);
// public: int D3D::CCommandBuffer::IsGrowable(void);
// public: unsigned long D3D::CDevice::MostRecentFence(void);
// public: int D3D::CDevice::IsEmptySegment(void);
// public: void D3D::CDevice::AddSegmentCallToCommandBuffer(unsigned long, unsigned long);
// public: void D3D::CDevice::Packet3Gpu(unsigned long *&, unsigned long, unsigned long);
// int D3D::CommandBufferWillBeProcessed(class D3D::CDevice *);
// class D3D::CDevice * D3D::GetGlobalDevice(void);
// int D3D::IsResourceSetInDevice(struct D3DResource *);
// struct D3DResource * D3D::GetResourceParent(struct D3DResource *);
// struct D3D::RingAllocChunk * D3D::GetCachedReadOnlyAddress<struct D3D::RingAllocChunk>(struct D3D::RingAllocChunk *);
// public: void D3D::CDevice::PutPix(unsigned long *&, enum PIXMeta, void const *, unsigned long);
// public: void D3D::CDevice::MarkAsOutOfMemory(void);
// void D3D::GetPrimaryBuffer(struct D3DDevice *, unsigned long **, unsigned long *, unsigned long *);
// public: unsigned long * D3D::CDevice::SetFence(unsigned long *);
// __FusionGetCurrentFence;
// __FusionBlockOnFenceNoKick;
// __FusionIsFencePendingNoKick;
// void D3D::BlockOnFenceParameterCheck(class D3D::CDevice *, unsigned long, struct D3DResource *, bool);
// unsigned long * D3D::InsertCallback(class D3D::CDevice *, unsigned long *, unsigned long, void (*)(unsigned long), unsigned long);
// D3DDevice_GetCurrentFence;
// unsigned long D3D::PreviousMultiple<unsigned long, unsigned long>(unsigned long, unsigned long);
// unsigned long D3D::NextMultiple<unsigned long, int>(unsigned long, int);
// unsigned long D3D::GetGPUAddress<unsigned long const>(unsigned long const *);
// unsigned long D3D::PreviousMultiple<unsigned long, int>(unsigned long, int);
// unsigned long D3D::GetGPUAddress<void>(void *);
// unsigned int D3D::NextMultiple<unsigned int, int>(unsigned int, int);
// unsigned long D3D::GetGPUAddress<struct D3D::NonSnoopedWriteBacks volatile>(struct D3D::NonSnoopedWriteBacks volatile *);
// unsigned long D3D::Log2(unsigned long);
// public: void D3D::CRingAllocList::Finalize(void);
// public: void D3D::CRingAllocList::AddChunkNode(struct D3D::RingAllocChunk *, unsigned long *);
// void * D3D::RingBufferDeviceAllocate(class D3D::CDevice *, unsigned long, unsigned long *, unsigned long);
// public: unsigned long * D3D::CDevice::BeginRingAlloc(unsigned long, unsigned long);
// public: unsigned long * D3D::CDevice::StartNewSegment(unsigned long);
// public: void D3D::CDevice::AddCommandsToPrimaryBuffer(unsigned long const *, unsigned long);
// public: void D3D::CDevice::AddCallsToPrimaryBuffer(struct D3D::SegmentCall const *, unsigned long);
// public: void D3D::CDevice::CreateInvalidateBuffer(unsigned long *, unsigned long *);
// public: unsigned long * D3D::CDevice::QueueIndirectBuffer(unsigned long *, unsigned long, unsigned long, unsigned long, class D3D::CRingAllocList *);
// private: unsigned long * D3D::CRingAllocList::MakeSpace(void);
// public: void D3D::CRingAllocList::AppendArrayData(void const *, unsigned long, unsigned long);
// void D3D::SubmitCommandBuffers(struct D3DDevice *, unsigned long const *, unsigned long);
// public: void D3D::CDevice::QueueIndirectBuffers(struct D3D::SegmentCall const *, unsigned long);
// public: unsigned long * D3D::CRingAllocList::Begin(unsigned long);
// public: void D3D::CRingAllocList::Initialize(class D3D::CDevice *, unsigned long);
// public: void D3D::CDevice::KickOffSegment(void);
// public: unsigned long * D3D::CDevice::KickOff(void);
// __FusionKick;
// public: void D3D::CDevice::BlockOnFence(unsigned long, enum _D3DBLOCKTYPE, struct D3DResource *, bool);
// D3DDevice_IsBusy;
// D3DDevice_InsertFence;
// D3DDevice_BlockOnFence;
// D3DDevice_IsFencePending;
// D3DResource_BlockUntilNotBusy;
// D3DResource_IsBusy;
// public: unsigned long * D3D::CDevice::BeginRing(void);
// public: unsigned long * D3D::CDevice::BeginRingBig(unsigned long);
// __FusionBlockOnFence;
// __FusionInsertWaitForIdle;
// __FusionInsertDataWriteback;
// D3DDevice_BlockUntilIdle;
// D3DDevice_InsertCallback;
// D3DDevice_OobComment;
// D3DDevice_OobMetaData;
// D3DDevice_Nop;
// void D3D::InvalidateConstants(struct D3DDevice *);
// D3DDevice_SetRingBufferParameters;

//public: unsigned long * D3D::CDevice::BeginBuffer(unsigned long *, unsigned long)
//{
//    mangled_ppc("?BeginBuffer@CDevice@D3D@@QAAPAKPAKK@Z");
//};

//public: unsigned long * D3D::CDevice::BeginRingManual(void)
//{
//    mangled_ppc("?BeginRingManual@CDevice@D3D@@QAAPAKXZ");
//};

//public: void D3D::CDevice::EndRing(unsigned long *)
//{
//    mangled_ppc("?EndRing@CDevice@D3D@@QAAXPAK@Z");
//};

//public: unsigned long * D3D::CDevice::EndBuffer(unsigned long *)
//{
//    mangled_ppc("?EndBuffer@CDevice@D3D@@QAAPAKPAK@Z");
//};

//public: void D3D::CDevice::Packet0(unsigned long *&, unsigned long, unsigned long)
//{
//    mangled_ppc("?Packet0@CDevice@D3D@@QAAXAAPAKKK@Z");
//};

//public: void D3D::CDevice::Packet0NoInc(unsigned long *&, unsigned long, unsigned long)
//{
//    mangled_ppc("?Packet0NoInc@CDevice@D3D@@QAAXAAPAKKK@Z");
//};

//public: void D3D::CDevice::Packet2Nop(unsigned long *&)
//{
//    mangled_ppc("?Packet2Nop@CDevice@D3D@@QAAXAAPAK@Z");
//};

//public: void D3D::CDevice::Packet3(unsigned long *&, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?Packet3@CDevice@D3D@@QAAXAAPAKKKK@Z");
//};

//public: void D3D::CDevice::PutD(unsigned long *&, unsigned long)
//{
//    mangled_ppc("?PutD@CDevice@D3D@@QAAXAAPAKK@Z");
//};

//public: void D3D::CDevice::PutF(unsigned long *&, float)
//{
//    mangled_ppc("?PutF@CDevice@D3D@@QAAXAAPAKM@Z");
//};

//public: void D3D::CDevice::PutRaw(unsigned long *)
//{
//    mangled_ppc("?PutRaw@CDevice@D3D@@QAAXPAK@Z");
//};

//unsigned long * D3D::InitializeChunkForIndirectBuffer1(struct D3D::RingAllocChunk volatile *, unsigned long, unsigned long)
//{
//    mangled_ppc("?InitializeChunkForIndirectBuffer1@D3D@@YAPAKPCURingAllocChunk@1@KK@Z");
//};

//public: void D3D::CDevice::SaveRingBufferState(void)
//{
//    mangled_ppc("?SaveRingBufferState@CDevice@D3D@@QAAXXZ");
//};

//public: void D3D::CDevice::RestoreRingBufferState(void)
//{
//    mangled_ppc("?RestoreRingBufferState@CDevice@D3D@@QAAXXZ");
//};

//public: int D3D::CDevice::IsPastStopPoint(unsigned long *, unsigned long)
//{
//    mangled_ppc("?IsPastStopPoint@CDevice@D3D@@QAAHPAKK@Z");
//};

//public: int D3D::CDevice::IsSecondaryMemoryBusy(unsigned long *, unsigned long)
//{
//    mangled_ppc("?IsSecondaryMemoryBusy@CDevice@D3D@@QAAHPAKK@Z");
//};

//public: void D3D::CDevice::BlockOnSecondaryPosition(unsigned long *, unsigned long)
//{
//    mangled_ppc("?BlockOnSecondaryPosition@CDevice@D3D@@QAAXPAKK@Z");
//};

//public: void D3D::CDevice::EndRingAlloc(void *)
//{
//    mangled_ppc("?EndRingAlloc@CDevice@D3D@@QAAXPAX@Z");
//};

//public: int D3D::CDevice::IsPrimaryMemoryBusy(unsigned long, unsigned long)
//{
//    mangled_ppc("?IsPrimaryMemoryBusy@CDevice@D3D@@QAAHKK@Z");
//};

//public: unsigned long D3D::CDevice::BlockOnPrimaryRange(unsigned long, unsigned long)
//{
//    mangled_ppc("?BlockOnPrimaryRange@CDevice@D3D@@QAAKKK@Z");
//};

//void D3D::SetPrimaryBufferIndex(struct D3DDevice *, unsigned long)
//{
//    mangled_ppc("?SetPrimaryBufferIndex@D3D@@YAXPAUD3DDevice@@K@Z");
//};

//GPU_CONVERT_CPU_TO_GPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_GPU_ADDRESS");
//};

//GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS");
//};

//GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS");
//};

//GPU_CONVERT_XPS_GPU_TO_CPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_XPS_GPU_TO_CPU_ADDRESS");
//};

//D3DPtrToDWORD
//{
//    mangled_ppc("D3DPtrToDWORD");
//};

//void D3D::AddAsynchronousInvalidateRange(unsigned __int64*, unsigned long, unsigned long)
//{
//    mangled_ppc("?AddAsynchronousInvalidateRange@D3D@@YAXPA_KKK@Z");
//};

//void D3D::GetAsynchronousInvalidateRange(unsigned __int64*, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?GetAsynchronousInvalidateRange@D3D@@YAXPA_KPAK1@Z");
//};

//void D3D::InterruptCallback(unsigned long, class D3D::CDevice *)
//{
//    mangled_ppc("?InterruptCallback@D3D@@YAXKPAVCDevice@1@@Z");
//};

//int D3D::IsPowerOf2<int>(int)
//{
//    mangled_ppc("??$IsPowerOf2@H@D3D@@YAHH@Z");
//};

//void D3D::AssertWriteCombined(void *, char *)
//{
//    mangled_ppc("?AssertWriteCombined@D3D@@YAXPAXPAD@Z");
//};

//int D3D::IsXpsLockedOffset(unsigned long)
//{
//    mangled_ppc("?IsXpsLockedOffset@D3D@@YAHK@Z");
//};

//int D3D::Is16MBPage(void *)
//{
//    mangled_ppc("?Is16MBPage@D3D@@YAHPAX@Z");
//};

//void * D3D::GetCPUAddress(unsigned long)
//{
//    mangled_ppc("?GetCPUAddress@D3D@@YAPAXK@Z");
//};

//public: void D3D::CRTPM4RingManager::StartNewSegment(void)
//{
//    mangled_ppc("?StartNewSegment@CRTPM4RingManager@D3D@@QAAXXZ");
//};

//public: void D3D::CRTCommandBufferHacker::StartNewSegment(void)
//{
//    mangled_ppc("?StartNewSegment@CRTCommandBufferHacker@D3D@@QAAXXZ");
//};

//bool D3D::RTGracefulShutdownThreadsPending(void)
//{
//    mangled_ppc("?RTGracefulShutdownThreadsPending@D3D@@YA_NXZ");
//};

//public: void D3D::CRingAllocList::End(unsigned long volatile *)
//{
//    mangled_ppc("?End@CRingAllocList@D3D@@QAAXPCK@Z");
//};

//unsigned long D3D::EncodePosition(unsigned long *, unsigned long)
//{
//    mangled_ppc("?EncodePosition@D3D@@YAKPAKK@Z");
//};

//public: int D3D::CCommandBuffer::IsGrowable(void)
//{
//    mangled_ppc("?IsGrowable@CCommandBuffer@D3D@@QAAHXZ");
//};

//public: unsigned long D3D::CDevice::MostRecentFence(void)
//{
//    mangled_ppc("?MostRecentFence@CDevice@D3D@@QAAKXZ");
//};

//public: int D3D::CDevice::IsEmptySegment(void)
//{
//    mangled_ppc("?IsEmptySegment@CDevice@D3D@@QAAHXZ");
//};

//public: void D3D::CDevice::AddSegmentCallToCommandBuffer(unsigned long, unsigned long)
//{
//    mangled_ppc("?AddSegmentCallToCommandBuffer@CDevice@D3D@@QAAXKK@Z");
//};

//public: void D3D::CDevice::Packet3Gpu(unsigned long *&, unsigned long, unsigned long)
//{
//    mangled_ppc("?Packet3Gpu@CDevice@D3D@@QAAXAAPAKKK@Z");
//};

//int D3D::CommandBufferWillBeProcessed(class D3D::CDevice *)
//{
//    mangled_ppc("?CommandBufferWillBeProcessed@D3D@@YAHPAVCDevice@1@@Z");
//};

//class D3D::CDevice * D3D::GetGlobalDevice(void)
//{
//    mangled_ppc("?GetGlobalDevice@D3D@@YAPAVCDevice@1@XZ");
//};

//int D3D::IsResourceSetInDevice(struct D3DResource *)
//{
//    mangled_ppc("?IsResourceSetInDevice@D3D@@YAHPAUD3DResource@@@Z");
//};

//struct D3DResource * D3D::GetResourceParent(struct D3DResource *)
//{
//    mangled_ppc("?GetResourceParent@D3D@@YAPAUD3DResource@@PAU2@@Z");
//};

//struct D3D::RingAllocChunk * D3D::GetCachedReadOnlyAddress<struct D3D::RingAllocChunk>(struct D3D::RingAllocChunk *)
//{
//    mangled_ppc("??$GetCachedReadOnlyAddress@URingAllocChunk@D3D@@@D3D@@YAPAURingAllocChunk@0@PAU10@@Z");
//};

//public: void D3D::CDevice::PutPix(unsigned long *&, enum PIXMeta, void const *, unsigned long)
//{
//    mangled_ppc("?PutPix@CDevice@D3D@@QAAXAAPAKW4PIXMeta@@PBXK@Z");
//};

//public: void D3D::CDevice::MarkAsOutOfMemory(void)
//{
//    mangled_ppc("?MarkAsOutOfMemory@CDevice@D3D@@QAAXXZ");
//};

//void D3D::GetPrimaryBuffer(struct D3DDevice *, unsigned long **, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?GetPrimaryBuffer@D3D@@YAXPAUD3DDevice@@PAPAKPAK2@Z");
//};

//public: unsigned long * D3D::CDevice::SetFence(unsigned long *)
//{
//    mangled_ppc("?SetFence@CDevice@D3D@@QAAPAKPAK@Z");
//};

//__FusionGetCurrentFence
//{
//    mangled_ppc("__FusionGetCurrentFence");
//};

//__FusionBlockOnFenceNoKick
//{
//    mangled_ppc("__FusionBlockOnFenceNoKick");
//};

//__FusionIsFencePendingNoKick
//{
//    mangled_ppc("__FusionIsFencePendingNoKick");
//};

//void D3D::BlockOnFenceParameterCheck(class D3D::CDevice *, unsigned long, struct D3DResource *, bool)
//{
//    mangled_ppc("?BlockOnFenceParameterCheck@D3D@@YAXPAVCDevice@1@KPAUD3DResource@@_N@Z");
//};

//unsigned long * D3D::InsertCallback(class D3D::CDevice *, unsigned long *, unsigned long, void (*)(unsigned long), unsigned long)
//{
//    mangled_ppc("?InsertCallback@D3D@@YAPAKPAVCDevice@1@PAKKP6AXK@ZK@Z");
//};

//D3DDevice_GetCurrentFence
//{
//    mangled_ppc("D3DDevice_GetCurrentFence");
//};

//unsigned long D3D::PreviousMultiple<unsigned long, unsigned long>(unsigned long, unsigned long)
//{
//    mangled_ppc("??$PreviousMultiple@KK@D3D@@YAKKK@Z");
//};

//unsigned long D3D::NextMultiple<unsigned long, int>(unsigned long, int)
//{
//    mangled_ppc("??$NextMultiple@KH@D3D@@YAKKH@Z");
//};

//unsigned long D3D::GetGPUAddress<unsigned long const>(unsigned long const *)
//{
//    mangled_ppc("??$GetGPUAddress@$$CBK@D3D@@YAKPBK@Z");
//};

//unsigned long D3D::PreviousMultiple<unsigned long, int>(unsigned long, int)
//{
//    mangled_ppc("??$PreviousMultiple@KH@D3D@@YAKKH@Z");
//};

//unsigned long D3D::GetGPUAddress<void>(void *)
//{
//    mangled_ppc("??$GetGPUAddress@X@D3D@@YAKPAX@Z");
//};

//unsigned int D3D::NextMultiple<unsigned int, int>(unsigned int, int)
//{
//    mangled_ppc("??$NextMultiple@IH@D3D@@YAIIH@Z");
//};

//unsigned long D3D::GetGPUAddress<struct D3D::NonSnoopedWriteBacks volatile>(struct D3D::NonSnoopedWriteBacks volatile *)
//{
//    mangled_ppc("??$GetGPUAddress@$$CCUNonSnoopedWriteBacks@D3D@@@D3D@@YAKPCUNonSnoopedWriteBacks@0@@Z");
//};

//unsigned long D3D::Log2(unsigned long)
//{
//    mangled_ppc("?Log2@D3D@@YAKK@Z");
//};

//public: void D3D::CRingAllocList::Finalize(void)
//{
//    mangled_ppc("?Finalize@CRingAllocList@D3D@@QAAXXZ");
//};

//public: void D3D::CRingAllocList::AddChunkNode(struct D3D::RingAllocChunk *, unsigned long *)
//{
//    mangled_ppc("?AddChunkNode@CRingAllocList@D3D@@QAAXPAURingAllocChunk@2@PAK@Z");
//};

//void * D3D::RingBufferDeviceAllocate(class D3D::CDevice *, unsigned long, unsigned long *, unsigned long)
//{
//    mangled_ppc("?RingBufferDeviceAllocate@D3D@@YAPAXPAVCDevice@1@KPAKK@Z");
//};

//public: unsigned long * D3D::CDevice::BeginRingAlloc(unsigned long, unsigned long)
//{
//    mangled_ppc("?BeginRingAlloc@CDevice@D3D@@QAAPAKKK@Z");
//};

//public: unsigned long * D3D::CDevice::StartNewSegment(unsigned long)
//{
//    mangled_ppc("?StartNewSegment@CDevice@D3D@@QAAPAKK@Z");
//};

//public: void D3D::CDevice::AddCommandsToPrimaryBuffer(unsigned long const *, unsigned long)
//{
//    mangled_ppc("?AddCommandsToPrimaryBuffer@CDevice@D3D@@QAAXPBKK@Z");
//};

//public: void D3D::CDevice::AddCallsToPrimaryBuffer(struct D3D::SegmentCall const *, unsigned long)
//{
//    mangled_ppc("?AddCallsToPrimaryBuffer@CDevice@D3D@@QAAXPBUSegmentCall@2@K@Z");
//};

//public: void D3D::CDevice::CreateInvalidateBuffer(unsigned long *, unsigned long *)
//{
//    mangled_ppc("?CreateInvalidateBuffer@CDevice@D3D@@QAAXPAK0@Z");
//};

//public: unsigned long * D3D::CDevice::QueueIndirectBuffer(unsigned long *, unsigned long, unsigned long, unsigned long, class D3D::CRingAllocList *)
//{
//    mangled_ppc("?QueueIndirectBuffer@CDevice@D3D@@QAAPAKPAKKKKPAVCRingAllocList@2@@Z");
//};

//private: unsigned long * D3D::CRingAllocList::MakeSpace(void)
//{
//    mangled_ppc("?MakeSpace@CRingAllocList@D3D@@AAAPAKXZ");
//};

//public: void D3D::CRingAllocList::AppendArrayData(void const *, unsigned long, unsigned long)
//{
//    mangled_ppc("?AppendArrayData@CRingAllocList@D3D@@QAAXPBXKK@Z");
//};

//void D3D::SubmitCommandBuffers(struct D3DDevice *, unsigned long const *, unsigned long)
//{
//    mangled_ppc("?SubmitCommandBuffers@D3D@@YAXPAUD3DDevice@@PBKK@Z");
//};

//public: void D3D::CDevice::QueueIndirectBuffers(struct D3D::SegmentCall const *, unsigned long)
//{
//    mangled_ppc("?QueueIndirectBuffers@CDevice@D3D@@QAAXPBUSegmentCall@2@K@Z");
//};

//public: unsigned long * D3D::CRingAllocList::Begin(unsigned long)
//{
//    mangled_ppc("?Begin@CRingAllocList@D3D@@QAAPAKK@Z");
//};

//public: void D3D::CRingAllocList::Initialize(class D3D::CDevice *, unsigned long)
//{
//    mangled_ppc("?Initialize@CRingAllocList@D3D@@QAAXPAVCDevice@2@K@Z");
//};

//public: void D3D::CDevice::KickOffSegment(void)
//{
//    mangled_ppc("?KickOffSegment@CDevice@D3D@@QAAXXZ");
//};

//public: unsigned long * D3D::CDevice::KickOff(void)
//{
//    mangled_ppc("?KickOff@CDevice@D3D@@QAAPAKXZ");
//};

//__FusionKick
//{
//    mangled_ppc("__FusionKick");
//};

//public: void D3D::CDevice::BlockOnFence(unsigned long, enum _D3DBLOCKTYPE, struct D3DResource *, bool)
//{
//    mangled_ppc("?BlockOnFence@CDevice@D3D@@QAAXKW4_D3DBLOCKTYPE@@PAUD3DResource@@_N@Z");
//};

//D3DDevice_IsBusy
//{
//    mangled_ppc("D3DDevice_IsBusy");
//};

//D3DDevice_InsertFence
//{
//    mangled_ppc("D3DDevice_InsertFence");
//};

//D3DDevice_BlockOnFence
//{
//    mangled_ppc("D3DDevice_BlockOnFence");
//};

//D3DDevice_IsFencePending
//{
//    mangled_ppc("D3DDevice_IsFencePending");
//};

//D3DResource_BlockUntilNotBusy
//{
//    mangled_ppc("D3DResource_BlockUntilNotBusy");
//};

//D3DResource_IsBusy
//{
//    mangled_ppc("D3DResource_IsBusy");
//};

//public: unsigned long * D3D::CDevice::BeginRing(void)
//{
//    mangled_ppc("?BeginRing@CDevice@D3D@@QAAPAKXZ");
//};

//public: unsigned long * D3D::CDevice::BeginRingBig(unsigned long)
//{
//    mangled_ppc("?BeginRingBig@CDevice@D3D@@QAAPAKK@Z");
//};

//__FusionBlockOnFence
//{
//    mangled_ppc("__FusionBlockOnFence");
//};

//__FusionInsertWaitForIdle
//{
//    mangled_ppc("__FusionInsertWaitForIdle");
//};

//__FusionInsertDataWriteback
//{
//    mangled_ppc("__FusionInsertDataWriteback");
//};

//D3DDevice_BlockUntilIdle
//{
//    mangled_ppc("D3DDevice_BlockUntilIdle");
//};

//D3DDevice_InsertCallback
//{
//    mangled_ppc("D3DDevice_InsertCallback");
//};

//D3DDevice_OobComment
//{
//    mangled_ppc("D3DDevice_OobComment");
//};

//D3DDevice_OobMetaData
//{
//    mangled_ppc("D3DDevice_OobMetaData");
//};

//D3DDevice_Nop
//{
//    mangled_ppc("D3DDevice_Nop");
//};

//void D3D::InvalidateConstants(struct D3DDevice *)
//{
//    mangled_ppc("?InvalidateConstants@D3D@@YAXPAUD3DDevice@@@Z");
//};

//D3DDevice_SetRingBufferParameters
//{
//    mangled_ppc("D3DDevice_SetRingBufferParameters");
//};

