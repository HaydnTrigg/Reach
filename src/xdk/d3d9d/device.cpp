/* ---------- headers */

#include "xdk\d3d9d\device.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// enum _PixDataOpcodesType const *const const D3D::g_BlockTypeToPixOp; // "?g_BlockTypeToPixOp@D3D@@3QBW4_PixDataOpcodesType@@B"
// unsigned short const *const const D3D::PRODUCTVERSION; // "?PRODUCTVERSION@D3D@@3QBGB"
// unsigned long D3D::AsyncResourcesWrapPoint; // "?AsyncResourcesWrapPoint@D3D@@3KA"
// unsigned __int64const D3D::D3DVERSION; // "?D3DVERSION@D3D@@3_KB"
// struct D3DDevice *D3D::g_pDevice; // "?g_pDevice@D3D@@3PAUD3DDevice@@A"

// void D3D::D3DExitCleanup(void);
// void D3D::BusyYield(void);
// void D3D::UninitializeAsyncResources(class D3D::CDevice *);
// D3DDevice_AddRef;
// public: unsigned long `anonymous namespace'::AsyncLockPendingIncrement::operator()(unsigned long) const;
// public: unsigned long `anonymous namespace'::AsyncLockPendingDecrement::operator()(unsigned long) const;
// public: unsigned __int64 `anonymous namespace'::InsertAsyncResourcesMaskSignal::operator()(unsigned __int64) const;
// public: `anonymous namespace'::ClearAsyncResourcesMaskSignal::ClearAsyncResourcesMaskSignal(unsigned long);
// public: unsigned __int64 `anonymous namespace'::ClearAsyncResourcesMaskSignal::operator()(unsigned __int64) const;
// unsigned __int64 D3D::InterlockedModify64<unsigned __int64, struct `anonymous namespace'::InsertAsyncResourcesMaskSignal>(unsigned __int64volatile *, struct `anonymous namespace'::InsertAsyncResourcesMaskSignal const &);
// unsigned long D3D::InterlockedModify<unsigned long, struct `anonymous namespace'::AsyncLockPendingIncrement>(unsigned long volatile *, struct `anonymous namespace'::AsyncLockPendingIncrement const &);
// unsigned long D3D::InterlockedModify<unsigned long, struct `anonymous namespace'::AsyncLockPendingDecrement>(unsigned long volatile *, struct `anonymous namespace'::AsyncLockPendingDecrement const &);
// unsigned __int64 D3D::InterlockedModify64<unsigned __int64, struct `anonymous namespace'::ClearAsyncResourcesMaskSignal>(unsigned __int64volatile *, struct `anonymous namespace'::ClearAsyncResourcesMaskSignal const &);
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// D3DTag_Index;
// D3DTag_SubsetMask;
// D3DTagCollection_Set;
// D3DTagCollection_TestAny;
// D3DDevice_SetStreamSource_Inline;
// D3DDevice_SetTexture_Inline;
// PIXAddEvent;
// PIXBeginEvent;
// PIXEndEvent;
// void CertSetEvent(enum _CertEvents);
// int D3D::IsPhysicalMemory(void const volatile *);
// void D3D::AssertPhysical(void const volatile *, unsigned long, char *);
// unsigned long D3D::GetGPUOffset(unsigned long);
// void D3D::MemFreeAligned(void *);
// void D3D::CopyToWriteCombinedMemory(void *, void const *, unsigned long);
// public: D3D::AutoCriticalSection::AutoCriticalSection(struct _RTL_CRITICAL_SECTION *);
// public: D3D::AutoCriticalSection::~AutoCriticalSection(void);
// void D3D::CopyToRingBuffer(unsigned long *, void const *, unsigned long);
// public: int D3D::CDevice::ThreadOwnsDevice(void);
// public: unsigned long D3D::CDevice::Age(unsigned long);
// public: int D3D::CDevice::IsCurrentFence(unsigned long);
// public: void D3D::CDevice::VerifyD3DOwnership(unsigned long, unsigned __int64);
// public: void D3D::CDevice::SetLazyRange(enum D3D::LazyState, unsigned long, unsigned long);
// public: void D3D::CDevice::SetLazyState(enum D3D::LazyState, unsigned long);
// public: void D3D::CDevice::Packet3Predicated(unsigned long *&, unsigned long, unsigned long);
// public: void D3D::CDevice::PutPix(unsigned long *&, enum PIXMeta);
// int D3D::IsXamProcess(void);
// struct D3DDevice * D3D::GetGlobalD3DDevice(void);
// public: D3D::GPUTimingMarkerFull::GPUTimingMarkerFull(enum _PixDataOpcodesType, enum _PixGroupsType, class D3D::CDevice *);
// public: D3D::GPUTimingMarkerFull::~GPUTimingMarkerFull(void);
// void D3D::PM4WaitMem_GE(class D3D::CDevice *, unsigned long *&, unsigned long, unsigned long, unsigned long, unsigned long);
// int D3D::IsPowerOf2<unsigned long>(unsigned long);
// unsigned long D3D::NextMultiple<unsigned long, unsigned long>(unsigned long, unsigned long);
// void D3D::VALIDATE_DEVICE(class D3D::CDevice *, int);
// public: D3D::CBlocker::CBlocker(class D3D::CDevice *, enum _D3DBLOCKTYPE);
// public: D3D::CBlocker::~CBlocker(void);
// public: int D3D::CBlocker::Check(void);
// unsigned long D3D::GetGPUAddress<unsigned long[2]>(unsigned long (*)[2]);
// unsigned long D3D::GetGPUAddress<unsigned __int64>(unsigned __int64*);
// unsigned long D3D::GetGPUAddress<unsigned long[128]>(unsigned long (*)[128]);
// void * D3D::MemAllocAlignedNoZero(unsigned long, unsigned long);
// void * D3D::MemAllocAligned(unsigned long, unsigned long);
// class D3D::CDevice * D3D::Promote(struct D3DDevice *);
// class D3D::CDevice * D3D::Promote_IgnoreOwnership(struct D3DDevice *);
// int D3D::InitializeAsyncResources(class D3D::CDevice *);
// D3DDevice_Release;
// D3DDevice_Reset;
// D3DDevice_AcquireThreadOwnership;
// D3DDevice_ReleaseThreadOwnership;
// D3DDevice_SetThreadOwnership;
// D3DDevice_QueryThreadOwnership;
// D3DDevice_Suspend;
// D3DDevice_Resume;
// D3DDevice_FlushHiZStencil;
// D3DDevice_UnsetAll;
// D3DDevice_GetDeviceState;
// D3DDevice_SetBlockCallback;
// D3DDevice_InsertBlockOnAsyncResources;
// D3DDevice_SignalAsyncResources;
// Direct3D_CreateDevice;

//void D3D::D3DExitCleanup(void)
//{
//    mangled_ppc("?D3DExitCleanup@D3D@@YAXXZ");
//};

//void D3D::BusyYield(void)
//{
//    mangled_ppc("?BusyYield@D3D@@YAXXZ");
//};

//void D3D::UninitializeAsyncResources(class D3D::CDevice *)
//{
//    mangled_ppc("?UninitializeAsyncResources@D3D@@YAXPAVCDevice@1@@Z");
//};

//D3DDevice_AddRef
//{
//    mangled_ppc("D3DDevice_AddRef");
//};

//public: unsigned long `anonymous namespace'::AsyncLockPendingIncrement::operator()(unsigned long) const
//{
//    mangled_ppc("??RAsyncLockPendingIncrement@?A0xb9332236@@QBAKK@Z");
//};

//public: unsigned long `anonymous namespace'::AsyncLockPendingDecrement::operator()(unsigned long) const
//{
//    mangled_ppc("??RAsyncLockPendingDecrement@?A0xb9332236@@QBAKK@Z");
//};

//public: unsigned __int64 `anonymous namespace'::InsertAsyncResourcesMaskSignal::operator()(unsigned __int64) const
//{
//    mangled_ppc("??RInsertAsyncResourcesMaskSignal@?A0xb9332236@@QBA_K_K@Z");
//};

//public: `anonymous namespace'::ClearAsyncResourcesMaskSignal::ClearAsyncResourcesMaskSignal(unsigned long)
//{
//    mangled_ppc("??0ClearAsyncResourcesMaskSignal@?A0xb9332236@@QAA@K@Z");
//};

//public: unsigned __int64 `anonymous namespace'::ClearAsyncResourcesMaskSignal::operator()(unsigned __int64) const
//{
//    mangled_ppc("??RClearAsyncResourcesMaskSignal@?A0xb9332236@@QBA_K_K@Z");
//};

//unsigned __int64 D3D::InterlockedModify64<unsigned __int64, struct `anonymous namespace'::InsertAsyncResourcesMaskSignal>(unsigned __int64volatile *, struct `anonymous namespace'::InsertAsyncResourcesMaskSignal const &)
//{
//    mangled_ppc("??$InterlockedModify64@_KUInsertAsyncResourcesMaskSignal@?A0xb9332236@@@D3D@@YA_KPC_KABUInsertAsyncResourcesMaskSignal@?A0xb9332236@@@Z");
//};

//unsigned long D3D::InterlockedModify<unsigned long, struct `anonymous namespace'::AsyncLockPendingIncrement>(unsigned long volatile *, struct `anonymous namespace'::AsyncLockPendingIncrement const &)
//{
//    mangled_ppc("??$InterlockedModify@KUAsyncLockPendingIncrement@?A0xb9332236@@@D3D@@YAKPCKABUAsyncLockPendingIncrement@?A0xb9332236@@@Z");
//};

//unsigned long D3D::InterlockedModify<unsigned long, struct `anonymous namespace'::AsyncLockPendingDecrement>(unsigned long volatile *, struct `anonymous namespace'::AsyncLockPendingDecrement const &)
//{
//    mangled_ppc("??$InterlockedModify@KUAsyncLockPendingDecrement@?A0xb9332236@@@D3D@@YAKPCKABUAsyncLockPendingDecrement@?A0xb9332236@@@Z");
//};

//unsigned __int64 D3D::InterlockedModify64<unsigned __int64, struct `anonymous namespace'::ClearAsyncResourcesMaskSignal>(unsigned __int64volatile *, struct `anonymous namespace'::ClearAsyncResourcesMaskSignal const &)
//{
//    mangled_ppc("??$InterlockedModify64@_KUClearAsyncResourcesMaskSignal@?A0xb9332236@@@D3D@@YA_KPC_KABUClearAsyncResourcesMaskSignal@?A0xb9332236@@@Z");
//};

//GPU_CONVERT_CPU_TO_GPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_GPU_ADDRESS");
//};

//D3DTag_Index
//{
//    mangled_ppc("D3DTag_Index");
//};

//D3DTag_SubsetMask
//{
//    mangled_ppc("D3DTag_SubsetMask");
//};

//D3DTagCollection_Set
//{
//    mangled_ppc("D3DTagCollection_Set");
//};

//D3DTagCollection_TestAny
//{
//    mangled_ppc("D3DTagCollection_TestAny");
//};

//D3DDevice_SetStreamSource_Inline
//{
//    mangled_ppc("D3DDevice_SetStreamSource_Inline");
//};

//D3DDevice_SetTexture_Inline
//{
//    mangled_ppc("D3DDevice_SetTexture_Inline");
//};

//PIXAddEvent
//{
//    mangled_ppc("PIXAddEvent");
//};

//PIXBeginEvent
//{
//    mangled_ppc("PIXBeginEvent");
//};

//PIXEndEvent
//{
//    mangled_ppc("PIXEndEvent");
//};

//void CertSetEvent(enum _CertEvents)
//{
//    mangled_ppc("?CertSetEvent@@YAXW4_CertEvents@@@Z");
//};

//int D3D::IsPhysicalMemory(void const volatile *)
//{
//    mangled_ppc("?IsPhysicalMemory@D3D@@YAHPDX@Z");
//};

//void D3D::AssertPhysical(void const volatile *, unsigned long, char *)
//{
//    mangled_ppc("?AssertPhysical@D3D@@YAXPDXKPAD@Z");
//};

//unsigned long D3D::GetGPUOffset(unsigned long)
//{
//    mangled_ppc("?GetGPUOffset@D3D@@YAKK@Z");
//};

//void D3D::MemFreeAligned(void *)
//{
//    mangled_ppc("?MemFreeAligned@D3D@@YAXPAX@Z");
//};

//void D3D::CopyToWriteCombinedMemory(void *, void const *, unsigned long)
//{
//    mangled_ppc("?CopyToWriteCombinedMemory@D3D@@YAXPAXPBXK@Z");
//};

//public: D3D::AutoCriticalSection::AutoCriticalSection(struct _RTL_CRITICAL_SECTION *)
//{
//    mangled_ppc("??0AutoCriticalSection@D3D@@QAA@PAU_RTL_CRITICAL_SECTION@@@Z");
//};

//public: D3D::AutoCriticalSection::~AutoCriticalSection(void)
//{
//    mangled_ppc("??1AutoCriticalSection@D3D@@QAA@XZ");
//};

//void D3D::CopyToRingBuffer(unsigned long *, void const *, unsigned long)
//{
//    mangled_ppc("?CopyToRingBuffer@D3D@@YAXPAKPBXK@Z");
//};

//public: int D3D::CDevice::ThreadOwnsDevice(void)
//{
//    mangled_ppc("?ThreadOwnsDevice@CDevice@D3D@@QAAHXZ");
//};

//public: unsigned long D3D::CDevice::Age(unsigned long)
//{
//    mangled_ppc("?Age@CDevice@D3D@@QAAKK@Z");
//};

//public: int D3D::CDevice::IsCurrentFence(unsigned long)
//{
//    mangled_ppc("?IsCurrentFence@CDevice@D3D@@QAAHK@Z");
//};

//public: void D3D::CDevice::VerifyD3DOwnership(unsigned long, unsigned __int64)
//{
//    mangled_ppc("?VerifyD3DOwnership@CDevice@D3D@@QAAXK_K@Z");
//};

//public: void D3D::CDevice::SetLazyRange(enum D3D::LazyState, unsigned long, unsigned long)
//{
//    mangled_ppc("?SetLazyRange@CDevice@D3D@@QAAXW4LazyState@2@KK@Z");
//};

//public: void D3D::CDevice::SetLazyState(enum D3D::LazyState, unsigned long)
//{
//    mangled_ppc("?SetLazyState@CDevice@D3D@@QAAXW4LazyState@2@K@Z");
//};

//public: void D3D::CDevice::Packet3Predicated(unsigned long *&, unsigned long, unsigned long)
//{
//    mangled_ppc("?Packet3Predicated@CDevice@D3D@@QAAXAAPAKKK@Z");
//};

//public: void D3D::CDevice::PutPix(unsigned long *&, enum PIXMeta)
//{
//    mangled_ppc("?PutPix@CDevice@D3D@@QAAXAAPAKW4PIXMeta@@@Z");
//};

//int D3D::IsXamProcess(void)
//{
//    mangled_ppc("?IsXamProcess@D3D@@YAHXZ");
//};

//struct D3DDevice * D3D::GetGlobalD3DDevice(void)
//{
//    mangled_ppc("?GetGlobalD3DDevice@D3D@@YAPAUD3DDevice@@XZ");
//};

//public: D3D::GPUTimingMarkerFull::GPUTimingMarkerFull(enum _PixDataOpcodesType, enum _PixGroupsType, class D3D::CDevice *)
//{
//    mangled_ppc("??0GPUTimingMarkerFull@D3D@@QAA@W4_PixDataOpcodesType@@W4_PixGroupsType@@PAVCDevice@1@@Z");
//};

//public: D3D::GPUTimingMarkerFull::~GPUTimingMarkerFull(void)
//{
//    mangled_ppc("??1GPUTimingMarkerFull@D3D@@QAA@XZ");
//};

//void D3D::PM4WaitMem_GE(class D3D::CDevice *, unsigned long *&, unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?PM4WaitMem_GE@D3D@@YAXPAVCDevice@1@AAPAKKKKK@Z");
//};

//int D3D::IsPowerOf2<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$IsPowerOf2@K@D3D@@YAHK@Z");
//};

//unsigned long D3D::NextMultiple<unsigned long, unsigned long>(unsigned long, unsigned long)
//{
//    mangled_ppc("??$NextMultiple@KK@D3D@@YAKKK@Z");
//};

//void D3D::VALIDATE_DEVICE(class D3D::CDevice *, int)
//{
//    mangled_ppc("?VALIDATE_DEVICE@D3D@@YAXPAVCDevice@1@H@Z");
//};

//public: D3D::CBlocker::CBlocker(class D3D::CDevice *, enum _D3DBLOCKTYPE)
//{
//    mangled_ppc("??0CBlocker@D3D@@QAA@PAVCDevice@1@W4_D3DBLOCKTYPE@@@Z");
//};

//public: D3D::CBlocker::~CBlocker(void)
//{
//    mangled_ppc("??1CBlocker@D3D@@QAA@XZ");
//};

//public: int D3D::CBlocker::Check(void)
//{
//    mangled_ppc("?Check@CBlocker@D3D@@QAAHXZ");
//};

//unsigned long D3D::GetGPUAddress<unsigned long[2]>(unsigned long (*)[2])
//{
//    mangled_ppc("??$GetGPUAddress@$$BY01K@D3D@@YAKPAY01K@Z");
//};

//unsigned long D3D::GetGPUAddress<unsigned __int64>(unsigned __int64*)
//{
//    mangled_ppc("??$GetGPUAddress@_K@D3D@@YAKPA_K@Z");
//};

//unsigned long D3D::GetGPUAddress<unsigned long[128]>(unsigned long (*)[128])
//{
//    mangled_ppc("??$GetGPUAddress@$$BY0IA@K@D3D@@YAKPAY0IA@K@Z");
//};

//void * D3D::MemAllocAlignedNoZero(unsigned long, unsigned long)
//{
//    mangled_ppc("?MemAllocAlignedNoZero@D3D@@YAPAXKK@Z");
//};

//void * D3D::MemAllocAligned(unsigned long, unsigned long)
//{
//    mangled_ppc("?MemAllocAligned@D3D@@YAPAXKK@Z");
//};

//class D3D::CDevice * D3D::Promote(struct D3DDevice *)
//{
//    mangled_ppc("?Promote@D3D@@YAPAVCDevice@1@PAUD3DDevice@@@Z");
//};

//class D3D::CDevice * D3D::Promote_IgnoreOwnership(struct D3DDevice *)
//{
//    mangled_ppc("?Promote_IgnoreOwnership@D3D@@YAPAVCDevice@1@PAUD3DDevice@@@Z");
//};

//int D3D::InitializeAsyncResources(class D3D::CDevice *)
//{
//    mangled_ppc("?InitializeAsyncResources@D3D@@YAHPAVCDevice@1@@Z");
//};

//D3DDevice_Release
//{
//    mangled_ppc("D3DDevice_Release");
//};

//D3DDevice_Reset
//{
//    mangled_ppc("D3DDevice_Reset");
//};

//D3DDevice_AcquireThreadOwnership
//{
//    mangled_ppc("D3DDevice_AcquireThreadOwnership");
//};

//D3DDevice_ReleaseThreadOwnership
//{
//    mangled_ppc("D3DDevice_ReleaseThreadOwnership");
//};

//D3DDevice_SetThreadOwnership
//{
//    mangled_ppc("D3DDevice_SetThreadOwnership");
//};

//D3DDevice_QueryThreadOwnership
//{
//    mangled_ppc("D3DDevice_QueryThreadOwnership");
//};

//D3DDevice_Suspend
//{
//    mangled_ppc("D3DDevice_Suspend");
//};

//D3DDevice_Resume
//{
//    mangled_ppc("D3DDevice_Resume");
//};

//D3DDevice_FlushHiZStencil
//{
//    mangled_ppc("D3DDevice_FlushHiZStencil");
//};

//D3DDevice_UnsetAll
//{
//    mangled_ppc("D3DDevice_UnsetAll");
//};

//D3DDevice_GetDeviceState
//{
//    mangled_ppc("D3DDevice_GetDeviceState");
//};

//D3DDevice_SetBlockCallback
//{
//    mangled_ppc("D3DDevice_SetBlockCallback");
//};

//D3DDevice_InsertBlockOnAsyncResources
//{
//    mangled_ppc("D3DDevice_InsertBlockOnAsyncResources");
//};

//D3DDevice_SignalAsyncResources
//{
//    mangled_ppc("D3DDevice_SignalAsyncResources");
//};

//Direct3D_CreateDevice
//{
//    mangled_ppc("Direct3D_CreateDevice");
//};

