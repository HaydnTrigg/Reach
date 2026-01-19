/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct _D3DADAPTER_IDENTIFIER9const D3D::g_AdapterIdentifier; // "?g_AdapterIdentifier@D3D@@3U_D3DADAPTER_IDENTIFIER9@@B"
// struct _D3DDISPLAYMODE const *const const D3D::g_AdapterModeList; // "?g_AdapterModeList@D3D@@3QBU_D3DDISPLAYMODE@@B"
// unsigned int const D3D::g_AdapterModeListSize; // "?g_AdapterModeListSize@D3D@@3IB"
// struct _D3DCAPS9const D3D::g_DeviceCaps; // "?g_DeviceCaps@D3D@@3U_D3DCAPS9@@B"
// unsigned short const *const const D3D::g_FormatTable; // "?g_FormatTable@D3D@@3QBGB"

// int D3D::isValidFrontBufferFormat(enum _D3DFORMAT);
// int D3D::isValidPixelFormat(enum _D3DFORMAT);
// int D3D::isValidSRGBTextureFormat(enum _D3DFORMAT);
// int D3D::isValidSRGBRenderTargetFormat(enum _D3DFORMAT);
// int D3D::isValidLegacyBumpMapFormat(enum _D3DFORMAT);
// int D3D::isValidFilterableTextureFormat(enum _D3DFORMAT);
// Direct3D_GetAdapterIdentifier;
// D3DDevice_GetDeviceCaps;
// D3DDevice_GetDirect3D;
// long GetOpenQuerySlot(class D3D::CDevice *, struct D3D::CQueryBlock **, unsigned long **);
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS;
// GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS;
// D3DTag_Index;
// D3DTag_SubsetMask;
// D3DTagCollection_Set;
// D3DTagCollection_Clear;
// D3DTagCollection_TestAny;
// D3DPerfCounters_GetNumPasses;
// enum GPUTEXTUREFORMAT D3D::GpuFormat(enum _D3DFORMAT);
// int D3D::IsEDRAMGpuFormat(unsigned long);
// void D3D::ConvertD24FS8ToD32FS8(unsigned long, float *, unsigned long *);
// void * D3D::GetCachedReadOnlyAddress(void *);
// public: int D3D::CDevice::IsFencePending(unsigned long);
// public: void D3D::CDevice::ClearLazyRange(enum D3D::LazyState, unsigned long, unsigned long);
// public: void D3D::CDevice::ClearLazyState(enum D3D::LazyState, unsigned long);
// public: bool D3D::CDevice::TilingSurface(void);
// public: bool D3D::CDevice::CalculatePredicateDrawPrimsFlag(void);
// public: void D3D::CDevice::SetPredicationState(unsigned long, unsigned long);
// struct D3D::CQuery * D3D::Promote(struct D3DQuery *);
// struct D3D::CPerfCounters * D3D::Promote(struct D3DPerfCounters *);
// int D3D::isValidRenderTargetFormat(enum _D3DFORMAT);
// int D3D::isValidDepthStencilFormat(enum _D3DFORMAT);
// Direct3D_CheckDeviceType;
// Direct3D_CheckDeviceFormat;
// Direct3D_CheckDeviceMultiSampleType;
// Direct3D_CheckDepthStencilMatch;
// Direct3D_CheckDeviceFormatConversion;
// Direct3D_GetDeviceCaps;
// D3DDevice_GetDisplayMode;
// D3DDevice_GetCreationParameters;
// D3DDevice_GetRasterStatus;
// D3DDevice_BeginConditionalSurvey;
// D3DDevice_EndConditionalSurvey;
// D3DDevice_BeginConditionalRendering;
// D3DDevice_EndConditionalRendering;
// D3DQuery_AddRef;
// D3DQuery_GetDevice;
// D3DQuery_GetType;
// D3DQuery_GetDataSize;
// D3DDevice_SetScreenExtentQueryMode;
// D3DDevice_GetScreenExtentQueryMode;
// void D3D::P_EPC(struct D3DDevice *, int);
// struct D3D::CPerfCounters * D3D::P_CPC(struct D3DDevice *, unsigned int, struct _D3DPERFCOUNTER_VALUES *, struct D3D::CPerfCounters *);
// void D3D::P_SPCE(struct D3DDevice *, struct _D3DPERFCOUNTER_EVENTS const *, unsigned long);
// D3DPerfCounters_AddRef;
// void D3DPerfCounters_GetDevice(struct D3DQuery *, struct D3DDevice **);
// D3DPerfCounters_IsBusy;
// D3DPerfCounters_BlockUntilNotBusy;
// unsigned long * D3D::GetCachedReadOnlyAddress<unsigned long>(unsigned long *);
// unsigned long D3D::GetGPUAddress<unsigned long>(unsigned long *);
// public: void D3DPerfCounters::BlockUntilNotBusy(void);
// void FreeEmptyQueryBlock(class D3D::CDevice *, struct D3D::CQueryBlock *);
// D3DQuery_Release;
// D3DQuery_Issue;
// D3DQuery_GetData;
// D3DDevice_EnablePerfCounters;
// D3DDevice_CreatePerfCounters;
// D3DDevice_SetPerfCounterEvents;
// void D3D::P_QPC(struct D3DDevice *, struct D3DPerfCounters *, unsigned long);
// D3DPerfCounters_Release;
// D3DPerfCounters_GetValues;
// D3DDevice_CreateQueryTiled;
// D3DDevice_CreateQuery;
// D3DDevice_QueryPerfCounters;

//int D3D::isValidFrontBufferFormat(enum _D3DFORMAT)
//{
//    mangled_ppc("?isValidFrontBufferFormat@D3D@@YAHW4_D3DFORMAT@@@Z");
//};

//int D3D::isValidPixelFormat(enum _D3DFORMAT)
//{
//    mangled_ppc("?isValidPixelFormat@D3D@@YAHW4_D3DFORMAT@@@Z");
//};

//int D3D::isValidSRGBTextureFormat(enum _D3DFORMAT)
//{
//    mangled_ppc("?isValidSRGBTextureFormat@D3D@@YAHW4_D3DFORMAT@@@Z");
//};

//int D3D::isValidSRGBRenderTargetFormat(enum _D3DFORMAT)
//{
//    mangled_ppc("?isValidSRGBRenderTargetFormat@D3D@@YAHW4_D3DFORMAT@@@Z");
//};

//int D3D::isValidLegacyBumpMapFormat(enum _D3DFORMAT)
//{
//    mangled_ppc("?isValidLegacyBumpMapFormat@D3D@@YAHW4_D3DFORMAT@@@Z");
//};

//int D3D::isValidFilterableTextureFormat(enum _D3DFORMAT)
//{
//    mangled_ppc("?isValidFilterableTextureFormat@D3D@@YAHW4_D3DFORMAT@@@Z");
//};

//Direct3D_GetAdapterIdentifier
//{
//    mangled_ppc("Direct3D_GetAdapterIdentifier");
//};

//D3DDevice_GetDeviceCaps
//{
//    mangled_ppc("D3DDevice_GetDeviceCaps");
//};

//D3DDevice_GetDirect3D
//{
//    mangled_ppc("D3DDevice_GetDirect3D");
//};

//long GetOpenQuerySlot(class D3D::CDevice *, struct D3D::CQueryBlock **, unsigned long **)
//{
//    mangled_ppc("?GetOpenQuerySlot@@YAJPAVCDevice@D3D@@PAPAUCQueryBlock@2@PAPAK@Z");
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

//D3DTagCollection_Clear
//{
//    mangled_ppc("D3DTagCollection_Clear");
//};

//D3DTagCollection_TestAny
//{
//    mangled_ppc("D3DTagCollection_TestAny");
//};

//D3DPerfCounters_GetNumPasses
//{
//    mangled_ppc("D3DPerfCounters_GetNumPasses");
//};

//enum GPUTEXTUREFORMAT D3D::GpuFormat(enum _D3DFORMAT)
//{
//    mangled_ppc("?GpuFormat@D3D@@YA?AW4GPUTEXTUREFORMAT@@W4_D3DFORMAT@@@Z");
//};

//int D3D::IsEDRAMGpuFormat(unsigned long)
//{
//    mangled_ppc("?IsEDRAMGpuFormat@D3D@@YAHK@Z");
//};

//void D3D::ConvertD24FS8ToD32FS8(unsigned long, float *, unsigned long *)
//{
//    mangled_ppc("?ConvertD24FS8ToD32FS8@D3D@@YAXKPAMPAK@Z");
//};

//void * D3D::GetCachedReadOnlyAddress(void *)
//{
//    mangled_ppc("?GetCachedReadOnlyAddress@D3D@@YAPAXPAX@Z");
//};

//public: int D3D::CDevice::IsFencePending(unsigned long)
//{
//    mangled_ppc("?IsFencePending@CDevice@D3D@@QAAHK@Z");
//};

//public: void D3D::CDevice::ClearLazyRange(enum D3D::LazyState, unsigned long, unsigned long)
//{
//    mangled_ppc("?ClearLazyRange@CDevice@D3D@@QAAXW4LazyState@2@KK@Z");
//};

//public: void D3D::CDevice::ClearLazyState(enum D3D::LazyState, unsigned long)
//{
//    mangled_ppc("?ClearLazyState@CDevice@D3D@@QAAXW4LazyState@2@K@Z");
//};

//public: bool D3D::CDevice::TilingSurface(void)
//{
//    mangled_ppc("?TilingSurface@CDevice@D3D@@QAA_NXZ");
//};

//public: bool D3D::CDevice::CalculatePredicateDrawPrimsFlag(void)
//{
//    mangled_ppc("?CalculatePredicateDrawPrimsFlag@CDevice@D3D@@QAA_NXZ");
//};

//public: void D3D::CDevice::SetPredicationState(unsigned long, unsigned long)
//{
//    mangled_ppc("?SetPredicationState@CDevice@D3D@@QAAXKK@Z");
//};

//struct D3D::CQuery * D3D::Promote(struct D3DQuery *)
//{
//    mangled_ppc("?Promote@D3D@@YAPAUCQuery@1@PAUD3DQuery@@@Z");
//};

//struct D3D::CPerfCounters * D3D::Promote(struct D3DPerfCounters *)
//{
//    mangled_ppc("?Promote@D3D@@YAPAUCPerfCounters@1@PAUD3DPerfCounters@@@Z");
//};

//int D3D::isValidRenderTargetFormat(enum _D3DFORMAT)
//{
//    mangled_ppc("?isValidRenderTargetFormat@D3D@@YAHW4_D3DFORMAT@@@Z");
//};

//int D3D::isValidDepthStencilFormat(enum _D3DFORMAT)
//{
//    mangled_ppc("?isValidDepthStencilFormat@D3D@@YAHW4_D3DFORMAT@@@Z");
//};

//Direct3D_CheckDeviceType
//{
//    mangled_ppc("Direct3D_CheckDeviceType");
//};

//Direct3D_CheckDeviceFormat
//{
//    mangled_ppc("Direct3D_CheckDeviceFormat");
//};

//Direct3D_CheckDeviceMultiSampleType
//{
//    mangled_ppc("Direct3D_CheckDeviceMultiSampleType");
//};

//Direct3D_CheckDepthStencilMatch
//{
//    mangled_ppc("Direct3D_CheckDepthStencilMatch");
//};

//Direct3D_CheckDeviceFormatConversion
//{
//    mangled_ppc("Direct3D_CheckDeviceFormatConversion");
//};

//Direct3D_GetDeviceCaps
//{
//    mangled_ppc("Direct3D_GetDeviceCaps");
//};

//D3DDevice_GetDisplayMode
//{
//    mangled_ppc("D3DDevice_GetDisplayMode");
//};

//D3DDevice_GetCreationParameters
//{
//    mangled_ppc("D3DDevice_GetCreationParameters");
//};

//D3DDevice_GetRasterStatus
//{
//    mangled_ppc("D3DDevice_GetRasterStatus");
//};

//D3DDevice_BeginConditionalSurvey
//{
//    mangled_ppc("D3DDevice_BeginConditionalSurvey");
//};

//D3DDevice_EndConditionalSurvey
//{
//    mangled_ppc("D3DDevice_EndConditionalSurvey");
//};

//D3DDevice_BeginConditionalRendering
//{
//    mangled_ppc("D3DDevice_BeginConditionalRendering");
//};

//D3DDevice_EndConditionalRendering
//{
//    mangled_ppc("D3DDevice_EndConditionalRendering");
//};

//D3DQuery_AddRef
//{
//    mangled_ppc("D3DQuery_AddRef");
//};

//D3DQuery_GetDevice
//{
//    mangled_ppc("D3DQuery_GetDevice");
//};

//D3DQuery_GetType
//{
//    mangled_ppc("D3DQuery_GetType");
//};

//D3DQuery_GetDataSize
//{
//    mangled_ppc("D3DQuery_GetDataSize");
//};

//D3DDevice_SetScreenExtentQueryMode
//{
//    mangled_ppc("D3DDevice_SetScreenExtentQueryMode");
//};

//D3DDevice_GetScreenExtentQueryMode
//{
//    mangled_ppc("D3DDevice_GetScreenExtentQueryMode");
//};

//void D3D::P_EPC(struct D3DDevice *, int)
//{
//    mangled_ppc("?P_EPC@D3D@@YAXPAUD3DDevice@@H@Z");
//};

//struct D3D::CPerfCounters * D3D::P_CPC(struct D3DDevice *, unsigned int, struct _D3DPERFCOUNTER_VALUES *, struct D3D::CPerfCounters *)
//{
//    mangled_ppc("?P_CPC@D3D@@YAPAUCPerfCounters@1@PAUD3DDevice@@IPAU_D3DPERFCOUNTER_VALUES@@PAU21@@Z");
//};

//void D3D::P_SPCE(struct D3DDevice *, struct _D3DPERFCOUNTER_EVENTS const *, unsigned long)
//{
//    mangled_ppc("?P_SPCE@D3D@@YAXPAUD3DDevice@@PBU_D3DPERFCOUNTER_EVENTS@@K@Z");
//};

//D3DPerfCounters_AddRef
//{
//    mangled_ppc("D3DPerfCounters_AddRef");
//};

//void D3DPerfCounters_GetDevice(struct D3DQuery *, struct D3DDevice **)
//{
//    mangled_ppc("?D3DPerfCounters_GetDevice@@YAXPAUD3DQuery@@PAPAUD3DDevice@@@Z");
//};

//D3DPerfCounters_IsBusy
//{
//    mangled_ppc("D3DPerfCounters_IsBusy");
//};

//D3DPerfCounters_BlockUntilNotBusy
//{
//    mangled_ppc("D3DPerfCounters_BlockUntilNotBusy");
//};

//unsigned long * D3D::GetCachedReadOnlyAddress<unsigned long>(unsigned long *)
//{
//    mangled_ppc("??$GetCachedReadOnlyAddress@K@D3D@@YAPAKPAK@Z");
//};

//unsigned long D3D::GetGPUAddress<unsigned long>(unsigned long *)
//{
//    mangled_ppc("??$GetGPUAddress@K@D3D@@YAKPAK@Z");
//};

//public: void D3DPerfCounters::BlockUntilNotBusy(void)
//{
//    mangled_ppc("?BlockUntilNotBusy@D3DPerfCounters@@QAAXXZ");
//};

//void FreeEmptyQueryBlock(class D3D::CDevice *, struct D3D::CQueryBlock *)
//{
//    mangled_ppc("?FreeEmptyQueryBlock@@YAXPAVCDevice@D3D@@PAUCQueryBlock@2@@Z");
//};

//D3DQuery_Release
//{
//    mangled_ppc("D3DQuery_Release");
//};

//D3DQuery_Issue
//{
//    mangled_ppc("D3DQuery_Issue");
//};

//D3DQuery_GetData
//{
//    mangled_ppc("D3DQuery_GetData");
//};

//D3DDevice_EnablePerfCounters
//{
//    mangled_ppc("D3DDevice_EnablePerfCounters");
//};

//D3DDevice_CreatePerfCounters
//{
//    mangled_ppc("D3DDevice_CreatePerfCounters");
//};

//D3DDevice_SetPerfCounterEvents
//{
//    mangled_ppc("D3DDevice_SetPerfCounterEvents");
//};

//void D3D::P_QPC(struct D3DDevice *, struct D3DPerfCounters *, unsigned long)
//{
//    mangled_ppc("?P_QPC@D3D@@YAXPAUD3DDevice@@PAUD3DPerfCounters@@K@Z");
//};

//D3DPerfCounters_Release
//{
//    mangled_ppc("D3DPerfCounters_Release");
//};

//D3DPerfCounters_GetValues
//{
//    mangled_ppc("D3DPerfCounters_GetValues");
//};

//D3DDevice_CreateQueryTiled
//{
//    mangled_ppc("D3DDevice_CreateQueryTiled");
//};

//D3DDevice_CreateQuery
//{
//    mangled_ppc("D3DDevice_CreateQuery");
//};

//D3DDevice_QueryPerfCounters
//{
//    mangled_ppc("D3DDevice_QueryPerfCounters");
//};

