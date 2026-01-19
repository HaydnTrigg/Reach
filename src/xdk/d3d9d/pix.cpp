/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned long D3D::g_DrPixMemAllocPhysicalCount; // "?g_DrPixMemAllocPhysicalCount@D3D@@3KA"

// void D3D::ConvertPWLGammaToGammaRamp(struct _D3DGAMMARAMP *, struct _D3DPWLGAMMA const *);
// void D3D::SetAllBlackGamma(class D3D::CDevice *);
// unsigned long D3D::PixEnableVideoPlayback(void *);
// void D3D::PixDisableVideoPlayback(void *);
// void D3D::FakeRecordVideoFrame(struct PIX_RECORD_VIDEO_FRAME *);
// void D3D::PixEstimateVideoCost(class D3D::CDevice *, struct PIX_ESTIMATE_VIDEO_COST *);
// DmGetCurrentValue;
// DmTell;
// void D3D::GetDrPixCpuCounters(class D3D::CDevice *, void (*)(unsigned long, void const *, unsigned long, unsigned long), unsigned long, int);
// void D3D::GetDrPixCounters(unsigned long, void (*)(unsigned long, void const *, unsigned long, unsigned long), unsigned long);
// float D3D::PercentClamp(float);
// float D3D::CalculateBandwidth(unsigned __int64, unsigned __int64);
// unsigned long D3D::ShortPercentClamp(__int64, __int64);
// unsigned long D3D::ShortCalculateBandwidth(__int64, __int64);
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS;
// GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS;
// GPU_CONVERT_XPS_GPU_TO_CPU_ADDRESS;
// D3DPtrToDWORD;
// D3DDWORDToPtr;
// D3DTag_Index;
// D3DTag_SubsetMask;
// D3DTag_Mask;
// D3DTagCollection_Clear;
// D3DTagCollection_TestAny;
// int D3D::CalculatePRatio(int, double, double, float *);
// long D3D::CommandHandler(char const *, char *, unsigned long, struct _DM_CMDCONT *);
// void D3D::PixGpuAdd_OutOfMemory(class D3D::CDevice *);
// unsigned long * D3D::PixGpuAdd_Next(class D3D::CDevice *);
// bool D3D::PixInitializePerfMemory(class D3D::CDevice *);
// void D3D::PIXMetaRecordRenderTarget(class D3D::CDevice *, unsigned long, struct D3DSurface *);
// void D3D::PIXMetaRecordTilingInfo(class D3D::CDevice *, unsigned long, struct _D3DRECT const *, unsigned long);
// PIXCaptureTimingFrame;
// PIXCaptureGpuFrame;
// long D3D::NextMultipleSlow<long, long>(long, long);
// long D3D::PreviousMultipleSlow<long, long>(long, long);
// public: int D3DPerfCounters::IsBusy(void);
// public: long D3DPerfCounters::GetValues(struct _D3DPERFCOUNTER_VALUES *, unsigned int, unsigned long *);
// unsigned long CertTell(unsigned long, void *);
// void CertSetEvent(enum _CertEvents);
// void D3D::ZeroWriteCombinedMemory(void *, unsigned long);
// void D3D::ZeroRingBuffer(unsigned long *, unsigned long);
// void D3D::PM4InvalidateShaderCode(class D3D::CDevice *);
// bool D3D::PM4LoadShaderImmediate(class D3D::CDevice *, unsigned long const *, unsigned long, unsigned long);
// bool D3D::PM4LoadVSImmediate(class D3D::CDevice *, unsigned long const *, unsigned long);
// bool D3D::PM4LoadPSImmediate(class D3D::CDevice *, unsigned long const *, unsigned long);
// void D3D::PM4LoadShaderSQStates(class D3D::CDevice *, unsigned long, unsigned long);
// bool D3D::PM4LoadShaderConstantsImmediate(class D3D::CDevice *, unsigned long, unsigned long const *, unsigned long);
// bool D3D::PM4LoadVSConstantsImmediate(class D3D::CDevice *, unsigned long, unsigned long const *, unsigned long);
// bool D3D::PM4LoadPSConstantsImmediate(class D3D::CDevice *, unsigned long, unsigned long const *, unsigned long);
// void D3D::PM4SetTextureFetchConstant(class D3D::CDevice *, unsigned long, union GPUTEXTURE_FETCH_CONSTANT const &);
// void D3D::PM4FlushFetchConstants(class D3D::CDevice *);
// void D3D::PM4Draw(class D3D::CDevice *, unsigned long, unsigned long);
// void D3D::PM4DrawPointList(class D3D::CDevice *, unsigned long);
// void D3D::PM4DrawRectList(class D3D::CDevice *, unsigned long);
// unsigned long D3D::PixTimeSinceVBlank(void *);
// void D3D::CodecSetState(class D3D::CDevice *);
// void D3D::FrameDone(unsigned long);
// int D3D::GetGPUPerfCounters(class D3D::CDevice *);
// void D3D::SubmitGeneralCounters(class D3D::CDevice *);
// float D3D::GetCounter(class D3D::CDevice *, enum _D3DCOUNTER);
// void D3D::BeginCapture(class D3D::CDevice *);
// void D3D::BlockUntilIdleCallback(void *);
// void D3D::CounterHandler(unsigned long, unsigned long);
// void D3D::InitXBDMInterface(class D3D::CDevice *);
// void D3D::UninitXBDMInterface(class D3D::CDevice *);
// void D3D::PixCpuAddSmall_Next(enum _PixSmallOpcodesType);
// void D3D::PixPerFrameMetaData(class D3D::CDevice *);
// D3DDevice_GetCounter;
// D3DDevice_PixEndNamedEvent;
// bool D3D::PM4LoadVSConstantsImmediateArray<float[4], 4>(class D3D::CDevice *, unsigned long, float const const (&)[4][4]);
// bool D3D::PM4LoadPSConstantsImmediateArray<float[4], 20>(class D3D::CDevice *, unsigned long, float const const (&)[20][4]);
// bool D3D::PM4LoadVSConstantsImmediate<float[4]>(class D3D::CDevice *, unsigned long, float const (*)[4], unsigned long);
// unsigned char * D3D::GetCachedReadOnlyAddress<unsigned char>(unsigned char *);
// int D3D::NextMultiple<int, unsigned int>(int, unsigned int);
// int D3D::CodecShowFrame(class D3D::CDevice *, unsigned long, struct PIX_CHUNK **, unsigned long, unsigned long, unsigned long);
// void D3D::CodecVideoEncode(class D3D::CDevice *, unsigned long, struct PIX_CHUNK **, unsigned long, unsigned long, struct D3DTexture *, float const *const, float const *const, float const *const, unsigned long);
// unsigned long D3D::PixDecodeVideoFrame(void *, unsigned long, struct PIX_CHUNK **, unsigned long, unsigned long, struct PIX_DECODE_VIDEO_DATA *, unsigned long);
// unsigned long D3D::BuildVideoRecord(class D3D::CDevice *, unsigned long, enum _D3DFORMAT, unsigned long, unsigned long, struct _D3DPRIVATE_SCALER_PARAMETERS const *, struct _D3DGAMMARAMP const *);
// void D3D::PixCaptureVideoFrame(class D3D::CDevice *, unsigned long, unsigned long, unsigned long, enum _D3DFORMAT, unsigned long, unsigned long, struct _D3DPRIVATE_SCALER_PARAMETERS const *, struct _D3DGAMMARAMP const *);
// void D3D::PixGpuAdd(class D3D::CDevice *);
// void D3D::QueueShaderWriteback(class D3D::CDevice *, void *);
// void D3D::PixSyncronizeToPresentationInterval(class D3D::CDevice *, int);
// D3DDevice_PixBeginNamedEvent;
// D3DDevice_PixSetMarker;
// void D3D::HandleCaptureState(class D3D::CDevice *);
// void D3D::PixSwap(class D3D::CDevice *);

//void D3D::ConvertPWLGammaToGammaRamp(struct _D3DGAMMARAMP *, struct _D3DPWLGAMMA const *)
//{
//    mangled_ppc("?ConvertPWLGammaToGammaRamp@D3D@@YAXPAU_D3DGAMMARAMP@@PBU_D3DPWLGAMMA@@@Z");
//};

//void D3D::SetAllBlackGamma(class D3D::CDevice *)
//{
//    mangled_ppc("?SetAllBlackGamma@D3D@@YAXPAVCDevice@1@@Z");
//};

//unsigned long D3D::PixEnableVideoPlayback(void *)
//{
//    mangled_ppc("?PixEnableVideoPlayback@D3D@@YAKPAX@Z");
//};

//void D3D::PixDisableVideoPlayback(void *)
//{
//    mangled_ppc("?PixDisableVideoPlayback@D3D@@YAXPAX@Z");
//};

//void D3D::FakeRecordVideoFrame(struct PIX_RECORD_VIDEO_FRAME *)
//{
//    mangled_ppc("?FakeRecordVideoFrame@D3D@@YAXPAUPIX_RECORD_VIDEO_FRAME@@@Z");
//};

//void D3D::PixEstimateVideoCost(class D3D::CDevice *, struct PIX_ESTIMATE_VIDEO_COST *)
//{
//    mangled_ppc("?PixEstimateVideoCost@D3D@@YAXPAVCDevice@1@PAUPIX_ESTIMATE_VIDEO_COST@@@Z");
//};

//DmGetCurrentValue
//{
//    mangled_ppc("DmGetCurrentValue");
//};

//DmTell
//{
//    mangled_ppc("DmTell");
//};

//void D3D::GetDrPixCpuCounters(class D3D::CDevice *, void (*)(unsigned long, void const *, unsigned long, unsigned long), unsigned long, int)
//{
//    mangled_ppc("?GetDrPixCpuCounters@D3D@@YAXPAVCDevice@1@P6AXKPBXKK@ZKH@Z");
//};

//void D3D::GetDrPixCounters(unsigned long, void (*)(unsigned long, void const *, unsigned long, unsigned long), unsigned long)
//{
//    mangled_ppc("?GetDrPixCounters@D3D@@YAXKP6AXKPBXKK@ZK@Z");
//};

//float D3D::PercentClamp(float)
//{
//    mangled_ppc("?PercentClamp@D3D@@YAMM@Z");
//};

//float D3D::CalculateBandwidth(unsigned __int64, unsigned __int64)
//{
//    mangled_ppc("?CalculateBandwidth@D3D@@YAM_K0@Z");
//};

//unsigned long D3D::ShortPercentClamp(__int64, __int64)
//{
//    mangled_ppc("?ShortPercentClamp@D3D@@YAK_J0@Z");
//};

//unsigned long D3D::ShortCalculateBandwidth(__int64, __int64)
//{
//    mangled_ppc("?ShortCalculateBandwidth@D3D@@YAK_J0@Z");
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

//D3DTag_Mask
//{
//    mangled_ppc("D3DTag_Mask");
//};

//D3DTagCollection_Clear
//{
//    mangled_ppc("D3DTagCollection_Clear");
//};

//D3DTagCollection_TestAny
//{
//    mangled_ppc("D3DTagCollection_TestAny");
//};

//int D3D::CalculatePRatio(int, double, double, float *)
//{
//    mangled_ppc("?CalculatePRatio@D3D@@YAHHNNPAM@Z");
//};

//long D3D::CommandHandler(char const *, char *, unsigned long, struct _DM_CMDCONT *)
//{
//    mangled_ppc("?CommandHandler@D3D@@YAJPBDPADKPAU_DM_CMDCONT@@@Z");
//};

//void D3D::PixGpuAdd_OutOfMemory(class D3D::CDevice *)
//{
//    mangled_ppc("?PixGpuAdd_OutOfMemory@D3D@@YAXPAVCDevice@1@@Z");
//};

//unsigned long * D3D::PixGpuAdd_Next(class D3D::CDevice *)
//{
//    mangled_ppc("?PixGpuAdd_Next@D3D@@YAPAKPAVCDevice@1@@Z");
//};

//bool D3D::PixInitializePerfMemory(class D3D::CDevice *)
//{
//    mangled_ppc("?PixInitializePerfMemory@D3D@@YA_NPAVCDevice@1@@Z");
//};

//void D3D::PIXMetaRecordRenderTarget(class D3D::CDevice *, unsigned long, struct D3DSurface *)
//{
//    mangled_ppc("?PIXMetaRecordRenderTarget@D3D@@YAXPAVCDevice@1@KPAUD3DSurface@@@Z");
//};

//void D3D::PIXMetaRecordTilingInfo(class D3D::CDevice *, unsigned long, struct _D3DRECT const *, unsigned long)
//{
//    mangled_ppc("?PIXMetaRecordTilingInfo@D3D@@YAXPAVCDevice@1@KPBU_D3DRECT@@K@Z");
//};

//PIXCaptureTimingFrame
//{
//    mangled_ppc("PIXCaptureTimingFrame");
//};

//PIXCaptureGpuFrame
//{
//    mangled_ppc("PIXCaptureGpuFrame");
//};

//long D3D::NextMultipleSlow<long, long>(long, long)
//{
//    mangled_ppc("??$NextMultipleSlow@JJ@D3D@@YAJJJ@Z");
//};

//long D3D::PreviousMultipleSlow<long, long>(long, long)
//{
//    mangled_ppc("??$PreviousMultipleSlow@JJ@D3D@@YAJJJ@Z");
//};

//public: int D3DPerfCounters::IsBusy(void)
//{
//    mangled_ppc("?IsBusy@D3DPerfCounters@@QAAHXZ");
//};

//public: long D3DPerfCounters::GetValues(struct _D3DPERFCOUNTER_VALUES *, unsigned int, unsigned long *)
//{
//    mangled_ppc("?GetValues@D3DPerfCounters@@QAAJPAU_D3DPERFCOUNTER_VALUES@@IPAK@Z");
//};

//unsigned long CertTell(unsigned long, void *)
//{
//    mangled_ppc("?CertTell@@YAKKPAX@Z");
//};

//void CertSetEvent(enum _CertEvents)
//{
//    mangled_ppc("?CertSetEvent@@YAXW4_CertEvents@@@Z");
//};

//void D3D::ZeroWriteCombinedMemory(void *, unsigned long)
//{
//    mangled_ppc("?ZeroWriteCombinedMemory@D3D@@YAXPAXK@Z");
//};

//void D3D::ZeroRingBuffer(unsigned long *, unsigned long)
//{
//    mangled_ppc("?ZeroRingBuffer@D3D@@YAXPAKK@Z");
//};

//void D3D::PM4InvalidateShaderCode(class D3D::CDevice *)
//{
//    mangled_ppc("?PM4InvalidateShaderCode@D3D@@YAXPAVCDevice@1@@Z");
//};

//bool D3D::PM4LoadShaderImmediate(class D3D::CDevice *, unsigned long const *, unsigned long, unsigned long)
//{
//    mangled_ppc("?PM4LoadShaderImmediate@D3D@@YA_NPAVCDevice@1@PBKKK@Z");
//};

//bool D3D::PM4LoadVSImmediate(class D3D::CDevice *, unsigned long const *, unsigned long)
//{
//    mangled_ppc("?PM4LoadVSImmediate@D3D@@YA_NPAVCDevice@1@PBKK@Z");
//};

//bool D3D::PM4LoadPSImmediate(class D3D::CDevice *, unsigned long const *, unsigned long)
//{
//    mangled_ppc("?PM4LoadPSImmediate@D3D@@YA_NPAVCDevice@1@PBKK@Z");
//};

//void D3D::PM4LoadShaderSQStates(class D3D::CDevice *, unsigned long, unsigned long)
//{
//    mangled_ppc("?PM4LoadShaderSQStates@D3D@@YAXPAVCDevice@1@KK@Z");
//};

//bool D3D::PM4LoadShaderConstantsImmediate(class D3D::CDevice *, unsigned long, unsigned long const *, unsigned long)
//{
//    mangled_ppc("?PM4LoadShaderConstantsImmediate@D3D@@YA_NPAVCDevice@1@KPBKK@Z");
//};

//bool D3D::PM4LoadVSConstantsImmediate(class D3D::CDevice *, unsigned long, unsigned long const *, unsigned long)
//{
//    mangled_ppc("?PM4LoadVSConstantsImmediate@D3D@@YA_NPAVCDevice@1@KPBKK@Z");
//};

//bool D3D::PM4LoadPSConstantsImmediate(class D3D::CDevice *, unsigned long, unsigned long const *, unsigned long)
//{
//    mangled_ppc("?PM4LoadPSConstantsImmediate@D3D@@YA_NPAVCDevice@1@KPBKK@Z");
//};

//void D3D::PM4SetTextureFetchConstant(class D3D::CDevice *, unsigned long, union GPUTEXTURE_FETCH_CONSTANT const &)
//{
//    mangled_ppc("?PM4SetTextureFetchConstant@D3D@@YAXPAVCDevice@1@KABTGPUTEXTURE_FETCH_CONSTANT@@@Z");
//};

//void D3D::PM4FlushFetchConstants(class D3D::CDevice *)
//{
//    mangled_ppc("?PM4FlushFetchConstants@D3D@@YAXPAVCDevice@1@@Z");
//};

//void D3D::PM4Draw(class D3D::CDevice *, unsigned long, unsigned long)
//{
//    mangled_ppc("?PM4Draw@D3D@@YAXPAVCDevice@1@KK@Z");
//};

//void D3D::PM4DrawPointList(class D3D::CDevice *, unsigned long)
//{
//    mangled_ppc("?PM4DrawPointList@D3D@@YAXPAVCDevice@1@K@Z");
//};

//void D3D::PM4DrawRectList(class D3D::CDevice *, unsigned long)
//{
//    mangled_ppc("?PM4DrawRectList@D3D@@YAXPAVCDevice@1@K@Z");
//};

//unsigned long D3D::PixTimeSinceVBlank(void *)
//{
//    mangled_ppc("?PixTimeSinceVBlank@D3D@@YAKPAX@Z");
//};

//void D3D::CodecSetState(class D3D::CDevice *)
//{
//    mangled_ppc("?CodecSetState@D3D@@YAXPAVCDevice@1@@Z");
//};

//void D3D::FrameDone(unsigned long)
//{
//    mangled_ppc("?FrameDone@D3D@@YAXK@Z");
//};

//int D3D::GetGPUPerfCounters(class D3D::CDevice *)
//{
//    mangled_ppc("?GetGPUPerfCounters@D3D@@YAHPAVCDevice@1@@Z");
//};

//void D3D::SubmitGeneralCounters(class D3D::CDevice *)
//{
//    mangled_ppc("?SubmitGeneralCounters@D3D@@YAXPAVCDevice@1@@Z");
//};

//float D3D::GetCounter(class D3D::CDevice *, enum _D3DCOUNTER)
//{
//    mangled_ppc("?GetCounter@D3D@@YAMPAVCDevice@1@W4_D3DCOUNTER@@@Z");
//};

//void D3D::BeginCapture(class D3D::CDevice *)
//{
//    mangled_ppc("?BeginCapture@D3D@@YAXPAVCDevice@1@@Z");
//};

//void D3D::BlockUntilIdleCallback(void *)
//{
//    mangled_ppc("?BlockUntilIdleCallback@D3D@@YAXPAX@Z");
//};

//void D3D::CounterHandler(unsigned long, unsigned long)
//{
//    mangled_ppc("?CounterHandler@D3D@@YAXKK@Z");
//};

//void D3D::InitXBDMInterface(class D3D::CDevice *)
//{
//    mangled_ppc("?InitXBDMInterface@D3D@@YAXPAVCDevice@1@@Z");
//};

//void D3D::UninitXBDMInterface(class D3D::CDevice *)
//{
//    mangled_ppc("?UninitXBDMInterface@D3D@@YAXPAVCDevice@1@@Z");
//};

//void D3D::PixCpuAddSmall_Next(enum _PixSmallOpcodesType)
//{
//    mangled_ppc("?PixCpuAddSmall_Next@D3D@@YAXW4_PixSmallOpcodesType@@@Z");
//};

//void D3D::PixPerFrameMetaData(class D3D::CDevice *)
//{
//    mangled_ppc("?PixPerFrameMetaData@D3D@@YAXPAVCDevice@1@@Z");
//};

//D3DDevice_GetCounter
//{
//    mangled_ppc("D3DDevice_GetCounter");
//};

//D3DDevice_PixEndNamedEvent
//{
//    mangled_ppc("D3DDevice_PixEndNamedEvent");
//};

//bool D3D::PM4LoadVSConstantsImmediateArray<float[4], 4>(class D3D::CDevice *, unsigned long, float const const (&)[4][4])
//{
//    mangled_ppc("??$PM4LoadVSConstantsImmediateArray@$$BY03M$03@D3D@@YA_NPAVCDevice@0@KAAY133$$CBM@Z");
//};

//bool D3D::PM4LoadPSConstantsImmediateArray<float[4], 20>(class D3D::CDevice *, unsigned long, float const const (&)[20][4])
//{
//    mangled_ppc("??$PM4LoadPSConstantsImmediateArray@$$BY03M$0BE@@D3D@@YA_NPAVCDevice@0@KAAY1BE@3$$CBM@Z");
//};

//bool D3D::PM4LoadVSConstantsImmediate<float[4]>(class D3D::CDevice *, unsigned long, float const (*)[4], unsigned long)
//{
//    mangled_ppc("??$PM4LoadVSConstantsImmediate@$$BY03M@D3D@@YA_NPAVCDevice@0@KPAY03$$CBMK@Z");
//};

//unsigned char * D3D::GetCachedReadOnlyAddress<unsigned char>(unsigned char *)
//{
//    mangled_ppc("??$GetCachedReadOnlyAddress@E@D3D@@YAPAEPAE@Z");
//};

//int D3D::NextMultiple<int, unsigned int>(int, unsigned int)
//{
//    mangled_ppc("??$NextMultiple@HI@D3D@@YAHHI@Z");
//};

//int D3D::CodecShowFrame(class D3D::CDevice *, unsigned long, struct PIX_CHUNK **, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?CodecShowFrame@D3D@@YAHPAVCDevice@1@KPAPAUPIX_CHUNK@@KKK@Z");
//};

//void D3D::CodecVideoEncode(class D3D::CDevice *, unsigned long, struct PIX_CHUNK **, unsigned long, unsigned long, struct D3DTexture *, float const *const, float const *const, float const *const, unsigned long)
//{
//    mangled_ppc("?CodecVideoEncode@D3D@@YAXPAVCDevice@1@KPAPAUPIX_CHUNK@@KKPAUD3DTexture@@QBM33K@Z");
//};

//unsigned long D3D::PixDecodeVideoFrame(void *, unsigned long, struct PIX_CHUNK **, unsigned long, unsigned long, struct PIX_DECODE_VIDEO_DATA *, unsigned long)
//{
//    mangled_ppc("?PixDecodeVideoFrame@D3D@@YAKPAXKPAPAUPIX_CHUNK@@KKPAUPIX_DECODE_VIDEO_DATA@@K@Z");
//};

//unsigned long D3D::BuildVideoRecord(class D3D::CDevice *, unsigned long, enum _D3DFORMAT, unsigned long, unsigned long, struct _D3DPRIVATE_SCALER_PARAMETERS const *, struct _D3DGAMMARAMP const *)
//{
//    mangled_ppc("?BuildVideoRecord@D3D@@YAKPAVCDevice@1@KW4_D3DFORMAT@@KKPBU_D3DPRIVATE_SCALER_PARAMETERS@@PBU_D3DGAMMARAMP@@@Z");
//};

//void D3D::PixCaptureVideoFrame(class D3D::CDevice *, unsigned long, unsigned long, unsigned long, enum _D3DFORMAT, unsigned long, unsigned long, struct _D3DPRIVATE_SCALER_PARAMETERS const *, struct _D3DGAMMARAMP const *)
//{
//    mangled_ppc("?PixCaptureVideoFrame@D3D@@YAXPAVCDevice@1@KKKW4_D3DFORMAT@@KKPBU_D3DPRIVATE_SCALER_PARAMETERS@@PBU_D3DGAMMARAMP@@@Z");
//};

//void D3D::PixGpuAdd(class D3D::CDevice *)
//{
//    mangled_ppc("?PixGpuAdd@D3D@@YAXPAVCDevice@1@@Z");
//};

//void D3D::QueueShaderWriteback(class D3D::CDevice *, void *)
//{
//    mangled_ppc("?QueueShaderWriteback@D3D@@YAXPAVCDevice@1@PAX@Z");
//};

//void D3D::PixSyncronizeToPresentationInterval(class D3D::CDevice *, int)
//{
//    mangled_ppc("?PixSyncronizeToPresentationInterval@D3D@@YAXPAVCDevice@1@H@Z");
//};

//D3DDevice_PixBeginNamedEvent
//{
//    mangled_ppc("D3DDevice_PixBeginNamedEvent");
//};

//D3DDevice_PixSetMarker
//{
//    mangled_ppc("D3DDevice_PixSetMarker");
//};

//void D3D::HandleCaptureState(class D3D::CDevice *)
//{
//    mangled_ppc("?HandleCaptureState@D3D@@YAXPAVCDevice@1@@Z");
//};

//void D3D::PixSwap(class D3D::CDevice *)
//{
//    mangled_ppc("?PixSwap@D3D@@YAXPAVCDevice@1@@Z");
//};

