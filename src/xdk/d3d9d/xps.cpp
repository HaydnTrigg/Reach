/* ---------- headers */

#include "xdk\d3d9d\xps.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned long *D3D::g_Buffer; // "?g_Buffer@D3D@@3PAKA"
// unsigned long D3D::g_Index; // "?g_Index@D3D@@3KA"

// void LWSYNC(void);
// void YIELD_HARDWARE_THREAD(void);
// void AcquireCookie(long volatile *);
// void ReleaseCookie(long volatile *);
// unsigned long XpsEncodePosition(unsigned long, unsigned long);
// public: void D3D::XpsObject::Initialize(struct D3DXpsThread *);
// public: void D3D::XpsObject::Uninitialize(void);
// InitializeListHead;
// void D3D::LockL2(class D3D::CXpsGlobal *, unsigned long);
// void D3D::UnlockL2(class D3D::CXpsGlobal *);
// unsigned long D3D::CalculatePredicationSelect(class D3D::CXpsGlobal *);
// __mftb32;
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS;
// GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS;
// D3DDWORDToPtr;
// D3DTag_Index;
// D3DTag_SubsetMask;
// D3DTagCollection_Set;
// void D3D::UninitializeXps(class D3D::CDevice *);
// D3DTagCollection_TestAny;
// int D3DXps_Get(class D3DXps *, void const **, unsigned long *);
// void D3D::AssertXps(void const volatile *, char *);
// unsigned long XpsNextMultiple(unsigned long, unsigned long);
// public: D3D::XpsObject::XpsObject(struct D3DXpsThread *);
// public: D3D::XpsObject::~XpsObject(void);
// class D3D::XpsObject * D3D::Promote(class D3DXps *);
// class D3D::CXpsGlobal * D3D::Promote(struct XpsGlobal *);
// class D3D::CXpsThread * D3D::Promote(struct D3DXpsThread *);
// public: void * D3D::XpsObject::Allocate(unsigned long, unsigned long);
// public: unsigned long D3D::XpsObject::ConvertL2AddressToPhysical(void const *);
// void D3D::DEBUG_ADDLOG(unsigned long, unsigned long, unsigned long);
// void D3D::UpdatePredicationSelect(class D3D::CXpsGlobal *);
// void D3D::WaitForXpsIdle(class D3D::CXpsGlobal *);
// void D3D::AutoPatch(struct D3D::WorkerState *, struct D3D::RingAllocChunk *, int);
// void D3D::TilingPatch(struct D3D::WorkerState *, struct D3D::RingAllocChunk *, struct D3D::RingAllocChunk *);
// unsigned long * D3D::DispatchCompletion(class D3D::CXpsGlobal *, struct D3DXpsThread *, unsigned long volatile *);
// void D3D::KickOffWorkerThread(class D3D::CXpsThread *, struct D3D::RingAllocChunk *);
// void D3D::KickOffWorkerThreadDpc(struct _KDPC *, void *, void *, void *);
// void D3D::WorkerDpc(unsigned long);
// void D3D::PixCaptureWorkerDpc(unsigned long);
// void D3D::StartWorkerQueue(class D3D::CDevice *);
// unsigned long * D3D::IssueSampleCountVisibility(class D3D::CDevice *, unsigned long *, unsigned long);
// void D3DXps_Initialize(class D3DXps *, struct D3DXpsThread *);
// void D3DXps_Uninitialize(class D3DXps *);
// void * D3DXps_Allocate(class D3DXps *, unsigned long, unsigned long);
// D3DDevice_XpsSetCallback;
// D3DDevice_EndVisibilitySurvey;
// unsigned long D3D::GetGPUAddress<struct GPU_SAMPLECOUNT>(struct GPU_SAMPLECOUNT *);
// unsigned long D3D::GetGPUAddress<struct GPU_SCREENEXTENT>(struct GPU_SCREENEXTENT *);
// public: unsigned long * D3D::CRingAllocList::Begin(unsigned long, unsigned long);
// public: int D3D::XpsObject::KickOffAndGet(unsigned long *);
// public: void D3D::XpsObject::KickOff(void);
// public: void D3D::XpsObject::DrawVertices(enum _D3DPRIMITIVETYPE, unsigned long, void const *);
// public: void D3D::XpsObject::DrawIndexedVertices(enum _D3DPRIMITIVETYPE, unsigned long, void const *, enum _D3DFORMAT, void const *);
// void D3D::XpsConfigureForWork(class D3D::CDevice *, class D3D::CXpsGlobal *, unsigned long);
// void D3D::XpsVisibilityPatch(struct D3D::RingAllocChunk const *);
// void D3D::XpsQueryPatch(struct D3D::WorkerState *, struct D3D::RingAllocChunk *);
// void D3D::XpsAutoPatch(struct D3D::WorkerState *, struct D3D::RingAllocChunk *);
// unsigned long * D3D::DispatchCommands(unsigned long *, class D3D::CXpsGlobal *);
// void D3D::DispatchWorker(struct D3DXpsThread *);
// unsigned long D3D::WorkerThread(void *);
// int D3D::StopWorkerQueue(class D3D::CDevice *, unsigned long, unsigned long);
// void D3D::KickOffOnWorkerQueue(class D3D::CDevice *, unsigned long, unsigned long, class D3D::CRingAllocList *);
// int D3D::InitializeXps(class D3D::CDevice *);
// void D3D::SimpleExample(struct D3DXpsThread *, void *, void const *, unsigned long);
// void D3D::EnableAutomaticPredication(class D3D::CDevice *);
// void D3D::IssueSampleCountQuery(class D3D::CDevice *, struct D3D::CQuery *, unsigned long);
// void D3DXps_DrawVertices(class D3DXps *, enum _D3DPRIMITIVETYPE, unsigned long, void const *);
// void D3DXps_DrawIndexedVertices(class D3DXps *, enum _D3DPRIMITIVETYPE, unsigned long, void const *, enum _D3DFORMAT, void const *);
// void D3DXps_KickOff(class D3DXps *);
// int D3DXps_KickOffAndGet(class D3DXps *, unsigned long *);
// D3DDevice_XpsBegin;
// D3DDevice_XpsEnd;
// D3DDevice_XpsSubmit;
// D3DDevice_BeginVisibilitySurvey;
// D3DDevice_XpsSetPredication;
// D3DDevice_XpsSetPredicationFromVisibility;
// D3DDevice_XpsSetPredicationFromQuery;

//void LWSYNC(void)
//{
//    mangled_ppc("?LWSYNC@@YAXXZ");
//};

//void YIELD_HARDWARE_THREAD(void)
//{
//    mangled_ppc("?YIELD_HARDWARE_THREAD@@YAXXZ");
//};

//void AcquireCookie(long volatile *)
//{
//    mangled_ppc("?AcquireCookie@@YAXPCJ@Z");
//};

//void ReleaseCookie(long volatile *)
//{
//    mangled_ppc("?ReleaseCookie@@YAXPCJ@Z");
//};

//unsigned long XpsEncodePosition(unsigned long, unsigned long)
//{
//    mangled_ppc("?XpsEncodePosition@@YAKKK@Z");
//};

//public: void D3D::XpsObject::Initialize(struct D3DXpsThread *)
//{
//    mangled_ppc("?Initialize@XpsObject@D3D@@QAAXPAUD3DXpsThread@@@Z");
//};

//public: void D3D::XpsObject::Uninitialize(void)
//{
//    mangled_ppc("?Uninitialize@XpsObject@D3D@@QAAXXZ");
//};

//InitializeListHead
//{
//    mangled_ppc("InitializeListHead");
//};

//void D3D::LockL2(class D3D::CXpsGlobal *, unsigned long)
//{
//    mangled_ppc("?LockL2@D3D@@YAXPAVCXpsGlobal@1@K@Z");
//};

//void D3D::UnlockL2(class D3D::CXpsGlobal *)
//{
//    mangled_ppc("?UnlockL2@D3D@@YAXPAVCXpsGlobal@1@@Z");
//};

//unsigned long D3D::CalculatePredicationSelect(class D3D::CXpsGlobal *)
//{
//    mangled_ppc("?CalculatePredicationSelect@D3D@@YAKPAVCXpsGlobal@1@@Z");
//};

//__mftb32
//{
//    mangled_ppc("__mftb32");
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

//D3DDWORDToPtr
//{
//    mangled_ppc("D3DDWORDToPtr");
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

//void D3D::UninitializeXps(class D3D::CDevice *)
//{
//    mangled_ppc("?UninitializeXps@D3D@@YAXPAVCDevice@1@@Z");
//};

//D3DTagCollection_TestAny
//{
//    mangled_ppc("D3DTagCollection_TestAny");
//};

//int D3DXps_Get(class D3DXps *, void const **, unsigned long *)
//{
//    mangled_ppc("?D3DXps_Get@@YAHPAVD3DXps@@PAPBXPAK@Z");
//};

//void D3D::AssertXps(void const volatile *, char *)
//{
//    mangled_ppc("?AssertXps@D3D@@YAXPDXPAD@Z");
//};

//unsigned long XpsNextMultiple(unsigned long, unsigned long)
//{
//    mangled_ppc("?XpsNextMultiple@@YAKKK@Z");
//};

//public: D3D::XpsObject::XpsObject(struct D3DXpsThread *)
//{
//    mangled_ppc("??0XpsObject@D3D@@QAA@PAUD3DXpsThread@@@Z");
//};

//public: D3D::XpsObject::~XpsObject(void)
//{
//    mangled_ppc("??1XpsObject@D3D@@QAA@XZ");
//};

//class D3D::XpsObject * D3D::Promote(class D3DXps *)
//{
//    mangled_ppc("?Promote@D3D@@YAPAVXpsObject@1@PAVD3DXps@@@Z");
//};

//class D3D::CXpsGlobal * D3D::Promote(struct XpsGlobal *)
//{
//    mangled_ppc("?Promote@D3D@@YAPAVCXpsGlobal@1@PAUXpsGlobal@@@Z");
//};

//class D3D::CXpsThread * D3D::Promote(struct D3DXpsThread *)
//{
//    mangled_ppc("?Promote@D3D@@YAPAVCXpsThread@1@PAUD3DXpsThread@@@Z");
//};

//public: void * D3D::XpsObject::Allocate(unsigned long, unsigned long)
//{
//    mangled_ppc("?Allocate@XpsObject@D3D@@QAAPAXKK@Z");
//};

//public: unsigned long D3D::XpsObject::ConvertL2AddressToPhysical(void const *)
//{
//    mangled_ppc("?ConvertL2AddressToPhysical@XpsObject@D3D@@QAAKPBX@Z");
//};

//void D3D::DEBUG_ADDLOG(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?DEBUG_ADDLOG@D3D@@YAXKKK@Z");
//};

//void D3D::UpdatePredicationSelect(class D3D::CXpsGlobal *)
//{
//    mangled_ppc("?UpdatePredicationSelect@D3D@@YAXPAVCXpsGlobal@1@@Z");
//};

//void D3D::WaitForXpsIdle(class D3D::CXpsGlobal *)
//{
//    mangled_ppc("?WaitForXpsIdle@D3D@@YAXPAVCXpsGlobal@1@@Z");
//};

//void D3D::AutoPatch(struct D3D::WorkerState *, struct D3D::RingAllocChunk *, int)
//{
//    mangled_ppc("?AutoPatch@D3D@@YAXPAUWorkerState@1@PAURingAllocChunk@1@H@Z");
//};

//void D3D::TilingPatch(struct D3D::WorkerState *, struct D3D::RingAllocChunk *, struct D3D::RingAllocChunk *)
//{
//    mangled_ppc("?TilingPatch@D3D@@YAXPAUWorkerState@1@PAURingAllocChunk@1@1@Z");
//};

//unsigned long * D3D::DispatchCompletion(class D3D::CXpsGlobal *, struct D3DXpsThread *, unsigned long volatile *)
//{
//    mangled_ppc("?DispatchCompletion@D3D@@YAPAKPAVCXpsGlobal@1@PAUD3DXpsThread@@PCK@Z");
//};

//void D3D::KickOffWorkerThread(class D3D::CXpsThread *, struct D3D::RingAllocChunk *)
//{
//    mangled_ppc("?KickOffWorkerThread@D3D@@YAXPAVCXpsThread@1@PAURingAllocChunk@1@@Z");
//};

//void D3D::KickOffWorkerThreadDpc(struct _KDPC *, void *, void *, void *)
//{
//    mangled_ppc("?KickOffWorkerThreadDpc@D3D@@YAXPAU_KDPC@@PAX11@Z");
//};

//void D3D::WorkerDpc(unsigned long)
//{
//    mangled_ppc("?WorkerDpc@D3D@@YAXK@Z");
//};

//void D3D::PixCaptureWorkerDpc(unsigned long)
//{
//    mangled_ppc("?PixCaptureWorkerDpc@D3D@@YAXK@Z");
//};

//void D3D::StartWorkerQueue(class D3D::CDevice *)
//{
//    mangled_ppc("?StartWorkerQueue@D3D@@YAXPAVCDevice@1@@Z");
//};

//unsigned long * D3D::IssueSampleCountVisibility(class D3D::CDevice *, unsigned long *, unsigned long)
//{
//    mangled_ppc("?IssueSampleCountVisibility@D3D@@YAPAKPAVCDevice@1@PAKK@Z");
//};

//void D3DXps_Initialize(class D3DXps *, struct D3DXpsThread *)
//{
//    mangled_ppc("?D3DXps_Initialize@@YAXPAVD3DXps@@PAUD3DXpsThread@@@Z");
//};

//void D3DXps_Uninitialize(class D3DXps *)
//{
//    mangled_ppc("?D3DXps_Uninitialize@@YAXPAVD3DXps@@@Z");
//};

//void * D3DXps_Allocate(class D3DXps *, unsigned long, unsigned long)
//{
//    mangled_ppc("?D3DXps_Allocate@@YAPAXPAVD3DXps@@KK@Z");
//};

//D3DDevice_XpsSetCallback
//{
//    mangled_ppc("D3DDevice_XpsSetCallback");
//};

//D3DDevice_EndVisibilitySurvey
//{
//    mangled_ppc("D3DDevice_EndVisibilitySurvey");
//};

//unsigned long D3D::GetGPUAddress<struct GPU_SAMPLECOUNT>(struct GPU_SAMPLECOUNT *)
//{
//    mangled_ppc("??$GetGPUAddress@UGPU_SAMPLECOUNT@@@D3D@@YAKPAUGPU_SAMPLECOUNT@@@Z");
//};

//unsigned long D3D::GetGPUAddress<struct GPU_SCREENEXTENT>(struct GPU_SCREENEXTENT *)
//{
//    mangled_ppc("??$GetGPUAddress@UGPU_SCREENEXTENT@@@D3D@@YAKPAUGPU_SCREENEXTENT@@@Z");
//};

//public: unsigned long * D3D::CRingAllocList::Begin(unsigned long, unsigned long)
//{
//    mangled_ppc("?Begin@CRingAllocList@D3D@@QAAPAKKK@Z");
//};

//public: int D3D::XpsObject::KickOffAndGet(unsigned long *)
//{
//    mangled_ppc("?KickOffAndGet@XpsObject@D3D@@QAAHPAK@Z");
//};

//public: void D3D::XpsObject::KickOff(void)
//{
//    mangled_ppc("?KickOff@XpsObject@D3D@@QAAXXZ");
//};

//public: void D3D::XpsObject::DrawVertices(enum _D3DPRIMITIVETYPE, unsigned long, void const *)
//{
//    mangled_ppc("?DrawVertices@XpsObject@D3D@@QAAXW4_D3DPRIMITIVETYPE@@KPBX@Z");
//};

//public: void D3D::XpsObject::DrawIndexedVertices(enum _D3DPRIMITIVETYPE, unsigned long, void const *, enum _D3DFORMAT, void const *)
//{
//    mangled_ppc("?DrawIndexedVertices@XpsObject@D3D@@QAAXW4_D3DPRIMITIVETYPE@@KPBXW4_D3DFORMAT@@1@Z");
//};

//void D3D::XpsConfigureForWork(class D3D::CDevice *, class D3D::CXpsGlobal *, unsigned long)
//{
//    mangled_ppc("?XpsConfigureForWork@D3D@@YAXPAVCDevice@1@PAVCXpsGlobal@1@K@Z");
//};

//void D3D::XpsVisibilityPatch(struct D3D::RingAllocChunk const *)
//{
//    mangled_ppc("?XpsVisibilityPatch@D3D@@YAXPBURingAllocChunk@1@@Z");
//};

//void D3D::XpsQueryPatch(struct D3D::WorkerState *, struct D3D::RingAllocChunk *)
//{
//    mangled_ppc("?XpsQueryPatch@D3D@@YAXPAUWorkerState@1@PAURingAllocChunk@1@@Z");
//};

//void D3D::XpsAutoPatch(struct D3D::WorkerState *, struct D3D::RingAllocChunk *)
//{
//    mangled_ppc("?XpsAutoPatch@D3D@@YAXPAUWorkerState@1@PAURingAllocChunk@1@@Z");
//};

//unsigned long * D3D::DispatchCommands(unsigned long *, class D3D::CXpsGlobal *)
//{
//    mangled_ppc("?DispatchCommands@D3D@@YAPAKPAKPAVCXpsGlobal@1@@Z");
//};

//void D3D::DispatchWorker(struct D3DXpsThread *)
//{
//    mangled_ppc("?DispatchWorker@D3D@@YAXPAUD3DXpsThread@@@Z");
//};

//unsigned long D3D::WorkerThread(void *)
//{
//    mangled_ppc("?WorkerThread@D3D@@YAKPAX@Z");
//};

//int D3D::StopWorkerQueue(class D3D::CDevice *, unsigned long, unsigned long)
//{
//    mangled_ppc("?StopWorkerQueue@D3D@@YAHPAVCDevice@1@KK@Z");
//};

//void D3D::KickOffOnWorkerQueue(class D3D::CDevice *, unsigned long, unsigned long, class D3D::CRingAllocList *)
//{
//    mangled_ppc("?KickOffOnWorkerQueue@D3D@@YAXPAVCDevice@1@KKPAVCRingAllocList@1@@Z");
//};

//int D3D::InitializeXps(class D3D::CDevice *)
//{
//    mangled_ppc("?InitializeXps@D3D@@YAHPAVCDevice@1@@Z");
//};

//void D3D::SimpleExample(struct D3DXpsThread *, void *, void const *, unsigned long)
//{
//    mangled_ppc("?SimpleExample@D3D@@YAXPAUD3DXpsThread@@PAXPBXK@Z");
//};

//void D3D::EnableAutomaticPredication(class D3D::CDevice *)
//{
//    mangled_ppc("?EnableAutomaticPredication@D3D@@YAXPAVCDevice@1@@Z");
//};

//void D3D::IssueSampleCountQuery(class D3D::CDevice *, struct D3D::CQuery *, unsigned long)
//{
//    mangled_ppc("?IssueSampleCountQuery@D3D@@YAXPAVCDevice@1@PAUCQuery@1@K@Z");
//};

//void D3DXps_DrawVertices(class D3DXps *, enum _D3DPRIMITIVETYPE, unsigned long, void const *)
//{
//    mangled_ppc("?D3DXps_DrawVertices@@YAXPAVD3DXps@@W4_D3DPRIMITIVETYPE@@KPBX@Z");
//};

//void D3DXps_DrawIndexedVertices(class D3DXps *, enum _D3DPRIMITIVETYPE, unsigned long, void const *, enum _D3DFORMAT, void const *)
//{
//    mangled_ppc("?D3DXps_DrawIndexedVertices@@YAXPAVD3DXps@@W4_D3DPRIMITIVETYPE@@KPBXW4_D3DFORMAT@@2@Z");
//};

//void D3DXps_KickOff(class D3DXps *)
//{
//    mangled_ppc("?D3DXps_KickOff@@YAXPAVD3DXps@@@Z");
//};

//int D3DXps_KickOffAndGet(class D3DXps *, unsigned long *)
//{
//    mangled_ppc("?D3DXps_KickOffAndGet@@YAHPAVD3DXps@@PAK@Z");
//};

//D3DDevice_XpsBegin
//{
//    mangled_ppc("D3DDevice_XpsBegin");
//};

//D3DDevice_XpsEnd
//{
//    mangled_ppc("D3DDevice_XpsEnd");
//};

//D3DDevice_XpsSubmit
//{
//    mangled_ppc("D3DDevice_XpsSubmit");
//};

//D3DDevice_BeginVisibilitySurvey
//{
//    mangled_ppc("D3DDevice_BeginVisibilitySurvey");
//};

//D3DDevice_XpsSetPredication
//{
//    mangled_ppc("D3DDevice_XpsSetPredication");
//};

//D3DDevice_XpsSetPredicationFromVisibility
//{
//    mangled_ppc("D3DDevice_XpsSetPredicationFromVisibility");
//};

//D3DDevice_XpsSetPredicationFromQuery
//{
//    mangled_ppc("D3DDevice_XpsSetPredicationFromQuery");
//};

