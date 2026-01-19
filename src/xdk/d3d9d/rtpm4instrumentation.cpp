/* ---------- headers */

#include "xdk\d3d9d\rtpm4instrumentation.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// unsigned long *D3D::g_channelOfFormat; // "?g_channelOfFormat@D3D@@3PAKA"

// private: static bool D3D::CRTPM4RingManager::IsBusy(struct D3D::CRTPM4RingManager::PM4LocalChunk const &);
// private: static bool D3D::CRTPM4RingManager::BlockUntilNotBusy(struct D3D::CRTPM4RingManager::PM4LocalChunk const &);
// unsigned long D3D::ResolveTargetConstAnalyze(union GPUTEXTURE_FETCH_CONSTANT const *, bool);
// unsigned long D3D::TextureConstAnalyzeNoShader(union GPUTEXTURE_FETCH_CONSTANT const *);
// unsigned long D3D::TextureConstAnalyze(union GPUTEXTURE_FETCH_CONSTANT const *, bool, bool, bool, bool, bool, bool);
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS;
// GPU_CONVERT_XPS_GPU_TO_CPU_ADDRESS;
// D3DPtrToDWORD;
// public: void D3D::CRTCommandBufferHacker::SetNonSnoopedPointerFromCpu(struct D3D::NonSnoopedWriteBacks volatile *);
// CRTCommandBufferHacker_GpuFenceCallback;
// private: long D3D::CRTCommandBufferHacker::DoSkipDrawWork(void);
// public: bool D3D::CRTCommandBufferHacker::BlockUntilIdle(void);
// public: void D3D::CRTCommandBufferHacker::DogmaOnEndingCapture(void);
// int D3D::IsCompressedGpuFormat(unsigned long);
// void * D3D::RTMemAllocPhysical(unsigned long, unsigned long, unsigned long);
// public: union GPU_PROGRAMCONTROL D3D::HACKED_SHADER_VARIATION::GetMergedProgramControl(union GPU_PROGRAMCONTROL);
// public: unsigned long D3D::CRTResultsTracker::GetCollectorHwThread(void);
// public: D3D::RTPM4Command::RTPM4Command(void);
// public: struct D3D::RTPM4Command & D3D::RTPM4Command::Set(unsigned long, unsigned long const *);
// public: struct D3D::RTPM4Command & D3D::RTPM4Command::SetPacket0(unsigned long, unsigned long, bool, unsigned long const *);
// public: struct D3D::RTPM4Command & D3D::RTPM4Command::SetPacket3(unsigned long, unsigned long, bool, unsigned long const *);
// public: struct D3D::RTPM4Command & D3D::RTPM4Command::SetPacket3(unsigned long, unsigned long, bool, unsigned long);
// public: unsigned long D3D::RTPM4Command::GetCommandHdr(void) const;
// public: unsigned long * D3D::RTPM4Command::GetCommandData(void);
// public: bool D3D::RTPM4Command::IsPacket0(void) const;
// public: bool D3D::RTPM4Command::IsPacket2(void) const;
// public: bool D3D::RTPM4Command::IsPacket3(void) const;
// public: bool D3D::RTPM4Command::IsPacket03(void) const;
// public: unsigned long D3D::RTPM4Command::GetPacket0Offset(void) const;
// public: bool D3D::RTPM4Command::GetPacket0NoIncr(void) const;
// public: unsigned long D3D::RTPM4Command::GetPacket3Op(void) const;
// public: bool D3D::RTPM4Command::GetPacket3Predicate(void) const;
// public: unsigned long D3D::RTPM4Command::GetPacket03DataCount(void) const;
// public: struct D3D::RTPM4Command D3D::RTPM4Parser::GetCommand(void) const;
// private: bool D3D::RTPM4Parser::NewCommand(unsigned long const *);
// struct D3D::RTPM4Chunk D3D::MakeChunk(unsigned long const *, unsigned long);
// public: bool D3D::CRTPM4RingManager::IsOutOfMemory(void) const;
// public: void D3D::CRTPM4RingManager::Mark(unsigned long *);
// void D3D::DCBF(unsigned long const *, unsigned long);
// public: D3D::RTShadowState::RTShadowState(unsigned long const *);
// private: void D3D::CRTCommandBufferHacker::SetDirtyConstants(unsigned long, unsigned long);
// public: void D3D::CRTCommandBufferHacker::InitializeShadowState(void);
// public: long D3D::CRTPM4RingManager::Initialize(unsigned long);
// public: void D3D::CRTPM4RingManager::Destroy(void);
// private: void D3D::CRTCommandBufferHacker::InitExport(void);
// private: void D3D::CRTCommandBufferHacker::InitThumbnailGenerate(void);
// private: void D3D::CRTCommandBufferHacker::InitSampling(void);
// private: void D3D::CRTCommandBufferHacker::InitChannelCheck(void);
// private: void D3D::CRTCommandBufferHacker::InitVideoCapture(void);
// public: void D3D::CRTCommandBufferHacker::SetNonSnoopedPointerFromGpu(unsigned long);
// private: long D3D::CRTCommandBufferHacker::GenerateIssueUpdate(struct D3D::RTBasicTextureInfo *);
// private: long D3D::CRTCommandBufferHacker::AllocatePerfCounterMipUsageBuffers(void);
// private: long D3D::CRTCommandBufferHacker::FinishPerfCounterMipUsageBuffers(int);
// private: long D3D::CRTCommandBufferHacker::AllocateResolveTargetUsageBuffers(void);
// private: long D3D::CRTCommandBufferHacker::FinishResolveTargetUsageBuffers(void);
// private: long D3D::CRTCommandBufferHacker::AddSynchronizeToWCQueue(void);
// public: void D3D::CRTCommandBufferHacker::ArchiveCachedShaders(void);
// unsigned long * D3D::NextMultiple<unsigned long, int>(unsigned long *, int);
// public: D3D::RTPM4Command::RTPM4Command(unsigned long, unsigned long);
// public: D3D::RTPM4Parser::RTPM4Parser(unsigned long const *, unsigned long);
// public: bool D3D::RTPM4Parser::NextCommand(void);
// private: struct D3D::RTPM4Chunk D3D::CRTPM4RingManager::FinishChunk(unsigned long *);
// public: long D3D::CRTCommandBufferHacker::Initialize(unsigned long, unsigned long, unsigned long);
// private: long D3D::CRTCommandBufferHacker::EnsurePerfCounterMipUsageSpace(void);
// private: long D3D::CRTCommandBufferHacker::EnsureResolveTargetUsageSpace(void);
// private: void D3D::CRTCommandBufferHacker::HandleResolve(void);
// public: unsigned long * D3D::CRTPM4RingManager::Reserve(unsigned long);
// public: struct D3D::RTPM4Chunk D3D::CRTPM4RingManager::GetFinishedChunk(void);
// private: bool D3D::CRTPM4RingManager::Add2(unsigned long);
// private: bool D3D::CRTPM4RingManager::Add2(struct D3D::RTPM4Command &);
// public: bool D3D::CRTPM4RingManager::Add(struct D3D::RTPM4Command &);
// public: bool D3D::CRTPM4RingManager::AddWaitForMemory(unsigned long volatile *, unsigned long);
// public: bool D3D::CRTPM4RingManager::AddIBCallCommand(unsigned long, unsigned long);
// private: void D3D::CRTCommandBufferHacker::RestoreReg(unsigned long);
// private: void D3D::CRTCommandBufferHacker::RestoreRegs(unsigned long, unsigned long);
// private: void D3D::CRTCommandBufferHacker::SetFetchConst(unsigned long, unsigned long const *);
// private: void D3D::CRTCommandBufferHacker::LoadShader(enum CP_CODE_ID, void const *, unsigned long);
// private: void D3D::CRTCommandBufferHacker::LoadShaders(void const *, unsigned long, void const *, unsigned long);
// private: void D3D::CRTCommandBufferHacker::RestoreShaders(void);
// private: void D3D::CRTCommandBufferHacker::InvalidateTextureCache(union GPUTEXTURE_FETCH_CONSTANT const *, unsigned long);
// private: long D3D::CRTCommandBufferHacker::InsertWaitUntilIdle(void);
// private: void D3D::CRTCommandBufferHacker::BeginExport(unsigned long);
// private: void D3D::CRTCommandBufferHacker::CleanUpAfterExport(void);
// private: long D3D::CRTCommandBufferHacker::SetCommonVsMemexportState(void);
// private: long D3D::CRTCommandBufferHacker::GenerateTextureThumbnail(union GPUTEXTURE_FETCH_CONSTANT const *, unsigned long, void *&, enum GPUCOLORFORMAT &, unsigned long &, unsigned long &);
// private: long D3D::CRTCommandBufferHacker::GenerateTextureSampling(union GPUTEXTURE_FETCH_CONSTANT const *, unsigned long, void *&, enum GPUCOLORFORMAT &);
// private: long D3D::CRTCommandBufferHacker::GenerateTextureChannelCheck(union GPUTEXTURE_FETCH_CONSTANT const *, unsigned long, void *&, enum GPUCOLORFORMAT &, unsigned long &);
// private: void D3D::CRTCommandBufferHacker::CleanUpAfterVideoCapture(void);
// private: void D3D::CRTCommandBufferHacker::CleanUpAfterThumbnails(void);
// private: void D3D::CRTCommandBufferHacker::SetShaderConstants(bool);
// private: long D3D::CRTCommandBufferHacker::InsertCallback(void (*)(void *), void *);
// private: long D3D::CRTCommandBufferHacker::InsertReadPerfCounter(enum D3D::ERareInstruction, unsigned long *);
// private: long D3D::CRTCommandBufferHacker::DoPreDrawWork(void);
// private: long D3D::CRTCommandBufferHacker::DoPostDrawWork(void);
// private: long D3D::CRTCommandBufferHacker::CleanUpAfterDraw(void);
// private: long D3D::CRTCommandBufferHacker::InitiateThumbnailGeneration(union GPUTEXTURE_FETCH_CONSTANT const *, struct D3D::RTBasicTextureInfo *, unsigned long, enum D3D::ERTWorkerCollectorCommands);
// private: long D3D::CRTCommandBufferHacker::OnLoadTextureConstant(union GPUTEXTURE_FETCH_CONSTANT const *, unsigned long);
// private: long D3D::CRTCommandBufferHacker::InitializePerfCounters(void);
// private: void D3D::CRTCommandBufferHacker::EndExport(unsigned long);
// private: long D3D::CRTCommandBufferHacker::PerformVideoCapture(void *, unsigned long, union GPUTEXTURE_FETCH_CONSTANT *, float const *const, float const *const, float const *const, unsigned long);
// private: long D3D::CRTCommandBufferHacker::InsertWorkerCollectorFence(void);
// private: long D3D::CRTCommandBufferHacker::AnalyzeTextureFetchConstants(bool);
// private: bool D3D::CRTCommandBufferHacker::HandleDraw(void);
// private: long D3D::CRTCommandBufferHacker::SetupVideoCapture(union GPUTEXTURE_FETCH_CONSTANT *);
// private: long D3D::CRTCommandBufferHacker::RunInstrumentationCB(unsigned long const *, unsigned long, unsigned long, int);
// public: struct D3D::RTPM4Chunk D3D::CRTCommandBufferHacker::RunInstrumentation(unsigned long const *, unsigned long, int);

//private: static bool D3D::CRTPM4RingManager::IsBusy(struct D3D::CRTPM4RingManager::PM4LocalChunk const &)
//{
//    mangled_ppc("?IsBusy@CRTPM4RingManager@D3D@@CA_NABUPM4LocalChunk@12@@Z");
//};

//private: static bool D3D::CRTPM4RingManager::BlockUntilNotBusy(struct D3D::CRTPM4RingManager::PM4LocalChunk const &)
//{
//    mangled_ppc("?BlockUntilNotBusy@CRTPM4RingManager@D3D@@CA_NABUPM4LocalChunk@12@@Z");
//};

//unsigned long D3D::ResolveTargetConstAnalyze(union GPUTEXTURE_FETCH_CONSTANT const *, bool)
//{
//    mangled_ppc("?ResolveTargetConstAnalyze@D3D@@YAKPBTGPUTEXTURE_FETCH_CONSTANT@@_N@Z");
//};

//unsigned long D3D::TextureConstAnalyzeNoShader(union GPUTEXTURE_FETCH_CONSTANT const *)
//{
//    mangled_ppc("?TextureConstAnalyzeNoShader@D3D@@YAKPBTGPUTEXTURE_FETCH_CONSTANT@@@Z");
//};

//unsigned long D3D::TextureConstAnalyze(union GPUTEXTURE_FETCH_CONSTANT const *, bool, bool, bool, bool, bool, bool)
//{
//    mangled_ppc("?TextureConstAnalyze@D3D@@YAKPBTGPUTEXTURE_FETCH_CONSTANT@@_N11111@Z");
//};

//GPU_CONVERT_CPU_TO_GPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_GPU_ADDRESS");
//};

//GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS");
//};

//GPU_CONVERT_XPS_GPU_TO_CPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_XPS_GPU_TO_CPU_ADDRESS");
//};

//D3DPtrToDWORD
//{
//    mangled_ppc("D3DPtrToDWORD");
//};

//public: void D3D::CRTCommandBufferHacker::SetNonSnoopedPointerFromCpu(struct D3D::NonSnoopedWriteBacks volatile *)
//{
//    mangled_ppc("?SetNonSnoopedPointerFromCpu@CRTCommandBufferHacker@D3D@@QAAXPCUNonSnoopedWriteBacks@2@@Z");
//};

//CRTCommandBufferHacker_GpuFenceCallback
//{
//    mangled_ppc("CRTCommandBufferHacker_GpuFenceCallback");
//};

//private: long D3D::CRTCommandBufferHacker::DoSkipDrawWork(void)
//{
//    mangled_ppc("?DoSkipDrawWork@CRTCommandBufferHacker@D3D@@AAAJXZ");
//};

//public: bool D3D::CRTCommandBufferHacker::BlockUntilIdle(void)
//{
//    mangled_ppc("?BlockUntilIdle@CRTCommandBufferHacker@D3D@@QAA_NXZ");
//};

//public: void D3D::CRTCommandBufferHacker::DogmaOnEndingCapture(void)
//{
//    mangled_ppc("?DogmaOnEndingCapture@CRTCommandBufferHacker@D3D@@QAAXXZ");
//};

//int D3D::IsCompressedGpuFormat(unsigned long)
//{
//    mangled_ppc("?IsCompressedGpuFormat@D3D@@YAHK@Z");
//};

//void * D3D::RTMemAllocPhysical(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?RTMemAllocPhysical@D3D@@YAPAXKKK@Z");
//};

//public: union GPU_PROGRAMCONTROL D3D::HACKED_SHADER_VARIATION::GetMergedProgramControl(union GPU_PROGRAMCONTROL)
//{
//    mangled_ppc("?GetMergedProgramControl@HACKED_SHADER_VARIATION@D3D@@QAA?ATGPU_PROGRAMCONTROL@@T3@@Z");
//};

//public: unsigned long D3D::CRTResultsTracker::GetCollectorHwThread(void)
//{
//    mangled_ppc("?GetCollectorHwThread@CRTResultsTracker@D3D@@QAAKXZ");
//};

//public: D3D::RTPM4Command::RTPM4Command(void)
//{
//    mangled_ppc("??0RTPM4Command@D3D@@QAA@XZ");
//};

//public: struct D3D::RTPM4Command & D3D::RTPM4Command::Set(unsigned long, unsigned long const *)
//{
//    mangled_ppc("?Set@RTPM4Command@D3D@@QAAAAU12@KPBK@Z");
//};

//public: struct D3D::RTPM4Command & D3D::RTPM4Command::SetPacket0(unsigned long, unsigned long, bool, unsigned long const *)
//{
//    mangled_ppc("?SetPacket0@RTPM4Command@D3D@@QAAAAU12@KK_NPBK@Z");
//};

//public: struct D3D::RTPM4Command & D3D::RTPM4Command::SetPacket3(unsigned long, unsigned long, bool, unsigned long const *)
//{
//    mangled_ppc("?SetPacket3@RTPM4Command@D3D@@QAAAAU12@KK_NPBK@Z");
//};

//public: struct D3D::RTPM4Command & D3D::RTPM4Command::SetPacket3(unsigned long, unsigned long, bool, unsigned long)
//{
//    mangled_ppc("?SetPacket3@RTPM4Command@D3D@@QAAAAU12@KK_NK@Z");
//};

//public: unsigned long D3D::RTPM4Command::GetCommandHdr(void) const
//{
//    mangled_ppc("?GetCommandHdr@RTPM4Command@D3D@@QBAKXZ");
//};

//public: unsigned long * D3D::RTPM4Command::GetCommandData(void)
//{
//    mangled_ppc("?GetCommandData@RTPM4Command@D3D@@QAAPAKXZ");
//};

//public: bool D3D::RTPM4Command::IsPacket0(void) const
//{
//    mangled_ppc("?IsPacket0@RTPM4Command@D3D@@QBA_NXZ");
//};

//public: bool D3D::RTPM4Command::IsPacket2(void) const
//{
//    mangled_ppc("?IsPacket2@RTPM4Command@D3D@@QBA_NXZ");
//};

//public: bool D3D::RTPM4Command::IsPacket3(void) const
//{
//    mangled_ppc("?IsPacket3@RTPM4Command@D3D@@QBA_NXZ");
//};

//public: bool D3D::RTPM4Command::IsPacket03(void) const
//{
//    mangled_ppc("?IsPacket03@RTPM4Command@D3D@@QBA_NXZ");
//};

//public: unsigned long D3D::RTPM4Command::GetPacket0Offset(void) const
//{
//    mangled_ppc("?GetPacket0Offset@RTPM4Command@D3D@@QBAKXZ");
//};

//public: bool D3D::RTPM4Command::GetPacket0NoIncr(void) const
//{
//    mangled_ppc("?GetPacket0NoIncr@RTPM4Command@D3D@@QBA_NXZ");
//};

//public: unsigned long D3D::RTPM4Command::GetPacket3Op(void) const
//{
//    mangled_ppc("?GetPacket3Op@RTPM4Command@D3D@@QBAKXZ");
//};

//public: bool D3D::RTPM4Command::GetPacket3Predicate(void) const
//{
//    mangled_ppc("?GetPacket3Predicate@RTPM4Command@D3D@@QBA_NXZ");
//};

//public: unsigned long D3D::RTPM4Command::GetPacket03DataCount(void) const
//{
//    mangled_ppc("?GetPacket03DataCount@RTPM4Command@D3D@@QBAKXZ");
//};

//public: struct D3D::RTPM4Command D3D::RTPM4Parser::GetCommand(void) const
//{
//    mangled_ppc("?GetCommand@RTPM4Parser@D3D@@QBA?AURTPM4Command@2@XZ");
//};

//private: bool D3D::RTPM4Parser::NewCommand(unsigned long const *)
//{
//    mangled_ppc("?NewCommand@RTPM4Parser@D3D@@AAA_NPBK@Z");
//};

//struct D3D::RTPM4Chunk D3D::MakeChunk(unsigned long const *, unsigned long)
//{
//    mangled_ppc("?MakeChunk@D3D@@YA?AURTPM4Chunk@1@PBKK@Z");
//};

//public: bool D3D::CRTPM4RingManager::IsOutOfMemory(void) const
//{
//    mangled_ppc("?IsOutOfMemory@CRTPM4RingManager@D3D@@QBA_NXZ");
//};

//public: void D3D::CRTPM4RingManager::Mark(unsigned long *)
//{
//    mangled_ppc("?Mark@CRTPM4RingManager@D3D@@QAAXPAK@Z");
//};

//void D3D::DCBF(unsigned long const *, unsigned long)
//{
//    mangled_ppc("?DCBF@D3D@@YAXPBKK@Z");
//};

//public: D3D::RTShadowState::RTShadowState(unsigned long const *)
//{
//    mangled_ppc("??0RTShadowState@D3D@@QAA@PBK@Z");
//};

//private: void D3D::CRTCommandBufferHacker::SetDirtyConstants(unsigned long, unsigned long)
//{
//    mangled_ppc("?SetDirtyConstants@CRTCommandBufferHacker@D3D@@AAAXKK@Z");
//};

//public: void D3D::CRTCommandBufferHacker::InitializeShadowState(void)
//{
//    mangled_ppc("?InitializeShadowState@CRTCommandBufferHacker@D3D@@QAAXXZ");
//};

//public: long D3D::CRTPM4RingManager::Initialize(unsigned long)
//{
//    mangled_ppc("?Initialize@CRTPM4RingManager@D3D@@QAAJK@Z");
//};

//public: void D3D::CRTPM4RingManager::Destroy(void)
//{
//    mangled_ppc("?Destroy@CRTPM4RingManager@D3D@@QAAXXZ");
//};

//private: void D3D::CRTCommandBufferHacker::InitExport(void)
//{
//    mangled_ppc("?InitExport@CRTCommandBufferHacker@D3D@@AAAXXZ");
//};

//private: void D3D::CRTCommandBufferHacker::InitThumbnailGenerate(void)
//{
//    mangled_ppc("?InitThumbnailGenerate@CRTCommandBufferHacker@D3D@@AAAXXZ");
//};

//private: void D3D::CRTCommandBufferHacker::InitSampling(void)
//{
//    mangled_ppc("?InitSampling@CRTCommandBufferHacker@D3D@@AAAXXZ");
//};

//private: void D3D::CRTCommandBufferHacker::InitChannelCheck(void)
//{
//    mangled_ppc("?InitChannelCheck@CRTCommandBufferHacker@D3D@@AAAXXZ");
//};

//private: void D3D::CRTCommandBufferHacker::InitVideoCapture(void)
//{
//    mangled_ppc("?InitVideoCapture@CRTCommandBufferHacker@D3D@@AAAXXZ");
//};

//public: void D3D::CRTCommandBufferHacker::SetNonSnoopedPointerFromGpu(unsigned long)
//{
//    mangled_ppc("?SetNonSnoopedPointerFromGpu@CRTCommandBufferHacker@D3D@@QAAXK@Z");
//};

//private: long D3D::CRTCommandBufferHacker::GenerateIssueUpdate(struct D3D::RTBasicTextureInfo *)
//{
//    mangled_ppc("?GenerateIssueUpdate@CRTCommandBufferHacker@D3D@@AAAJPAURTBasicTextureInfo@2@@Z");
//};

//private: long D3D::CRTCommandBufferHacker::AllocatePerfCounterMipUsageBuffers(void)
//{
//    mangled_ppc("?AllocatePerfCounterMipUsageBuffers@CRTCommandBufferHacker@D3D@@AAAJXZ");
//};

//private: long D3D::CRTCommandBufferHacker::FinishPerfCounterMipUsageBuffers(int)
//{
//    mangled_ppc("?FinishPerfCounterMipUsageBuffers@CRTCommandBufferHacker@D3D@@AAAJH@Z");
//};

//private: long D3D::CRTCommandBufferHacker::AllocateResolveTargetUsageBuffers(void)
//{
//    mangled_ppc("?AllocateResolveTargetUsageBuffers@CRTCommandBufferHacker@D3D@@AAAJXZ");
//};

//private: long D3D::CRTCommandBufferHacker::FinishResolveTargetUsageBuffers(void)
//{
//    mangled_ppc("?FinishResolveTargetUsageBuffers@CRTCommandBufferHacker@D3D@@AAAJXZ");
//};

//private: long D3D::CRTCommandBufferHacker::AddSynchronizeToWCQueue(void)
//{
//    mangled_ppc("?AddSynchronizeToWCQueue@CRTCommandBufferHacker@D3D@@AAAJXZ");
//};

//public: void D3D::CRTCommandBufferHacker::ArchiveCachedShaders(void)
//{
//    mangled_ppc("?ArchiveCachedShaders@CRTCommandBufferHacker@D3D@@QAAXXZ");
//};

//unsigned long * D3D::NextMultiple<unsigned long, int>(unsigned long *, int)
//{
//    mangled_ppc("??$NextMultiple@KH@D3D@@YAPAKPAKH@Z");
//};

//public: D3D::RTPM4Command::RTPM4Command(unsigned long, unsigned long)
//{
//    mangled_ppc("??0RTPM4Command@D3D@@QAA@KK@Z");
//};

//public: D3D::RTPM4Parser::RTPM4Parser(unsigned long const *, unsigned long)
//{
//    mangled_ppc("??0RTPM4Parser@D3D@@QAA@PBKK@Z");
//};

//public: bool D3D::RTPM4Parser::NextCommand(void)
//{
//    mangled_ppc("?NextCommand@RTPM4Parser@D3D@@QAA_NXZ");
//};

//private: struct D3D::RTPM4Chunk D3D::CRTPM4RingManager::FinishChunk(unsigned long *)
//{
//    mangled_ppc("?FinishChunk@CRTPM4RingManager@D3D@@AAA?AURTPM4Chunk@2@PAK@Z");
//};

//public: long D3D::CRTCommandBufferHacker::Initialize(unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?Initialize@CRTCommandBufferHacker@D3D@@QAAJKKK@Z");
//};

//private: long D3D::CRTCommandBufferHacker::EnsurePerfCounterMipUsageSpace(void)
//{
//    mangled_ppc("?EnsurePerfCounterMipUsageSpace@CRTCommandBufferHacker@D3D@@AAAJXZ");
//};

//private: long D3D::CRTCommandBufferHacker::EnsureResolveTargetUsageSpace(void)
//{
//    mangled_ppc("?EnsureResolveTargetUsageSpace@CRTCommandBufferHacker@D3D@@AAAJXZ");
//};

//private: void D3D::CRTCommandBufferHacker::HandleResolve(void)
//{
//    mangled_ppc("?HandleResolve@CRTCommandBufferHacker@D3D@@AAAXXZ");
//};

//public: unsigned long * D3D::CRTPM4RingManager::Reserve(unsigned long)
//{
//    mangled_ppc("?Reserve@CRTPM4RingManager@D3D@@QAAPAKK@Z");
//};

//public: struct D3D::RTPM4Chunk D3D::CRTPM4RingManager::GetFinishedChunk(void)
//{
//    mangled_ppc("?GetFinishedChunk@CRTPM4RingManager@D3D@@QAA?AURTPM4Chunk@2@XZ");
//};

//private: bool D3D::CRTPM4RingManager::Add2(unsigned long)
//{
//    mangled_ppc("?Add2@CRTPM4RingManager@D3D@@AAA_NK@Z");
//};

//private: bool D3D::CRTPM4RingManager::Add2(struct D3D::RTPM4Command &)
//{
//    mangled_ppc("?Add2@CRTPM4RingManager@D3D@@AAA_NAAURTPM4Command@2@@Z");
//};

//public: bool D3D::CRTPM4RingManager::Add(struct D3D::RTPM4Command &)
//{
//    mangled_ppc("?Add@CRTPM4RingManager@D3D@@QAA_NAAURTPM4Command@2@@Z");
//};

//public: bool D3D::CRTPM4RingManager::AddWaitForMemory(unsigned long volatile *, unsigned long)
//{
//    mangled_ppc("?AddWaitForMemory@CRTPM4RingManager@D3D@@QAA_NPCKK@Z");
//};

//public: bool D3D::CRTPM4RingManager::AddIBCallCommand(unsigned long, unsigned long)
//{
//    mangled_ppc("?AddIBCallCommand@CRTPM4RingManager@D3D@@QAA_NKK@Z");
//};

//private: void D3D::CRTCommandBufferHacker::RestoreReg(unsigned long)
//{
//    mangled_ppc("?RestoreReg@CRTCommandBufferHacker@D3D@@AAAXK@Z");
//};

//private: void D3D::CRTCommandBufferHacker::RestoreRegs(unsigned long, unsigned long)
//{
//    mangled_ppc("?RestoreRegs@CRTCommandBufferHacker@D3D@@AAAXKK@Z");
//};

//private: void D3D::CRTCommandBufferHacker::SetFetchConst(unsigned long, unsigned long const *)
//{
//    mangled_ppc("?SetFetchConst@CRTCommandBufferHacker@D3D@@AAAXKPBK@Z");
//};

//private: void D3D::CRTCommandBufferHacker::LoadShader(enum CP_CODE_ID, void const *, unsigned long)
//{
//    mangled_ppc("?LoadShader@CRTCommandBufferHacker@D3D@@AAAXW4CP_CODE_ID@@PBXK@Z");
//};

//private: void D3D::CRTCommandBufferHacker::LoadShaders(void const *, unsigned long, void const *, unsigned long)
//{
//    mangled_ppc("?LoadShaders@CRTCommandBufferHacker@D3D@@AAAXPBXK0K@Z");
//};

//private: void D3D::CRTCommandBufferHacker::RestoreShaders(void)
//{
//    mangled_ppc("?RestoreShaders@CRTCommandBufferHacker@D3D@@AAAXXZ");
//};

//private: void D3D::CRTCommandBufferHacker::InvalidateTextureCache(union GPUTEXTURE_FETCH_CONSTANT const *, unsigned long)
//{
//    mangled_ppc("?InvalidateTextureCache@CRTCommandBufferHacker@D3D@@AAAXPBTGPUTEXTURE_FETCH_CONSTANT@@K@Z");
//};

//private: long D3D::CRTCommandBufferHacker::InsertWaitUntilIdle(void)
//{
//    mangled_ppc("?InsertWaitUntilIdle@CRTCommandBufferHacker@D3D@@AAAJXZ");
//};

//private: void D3D::CRTCommandBufferHacker::BeginExport(unsigned long)
//{
//    mangled_ppc("?BeginExport@CRTCommandBufferHacker@D3D@@AAAXK@Z");
//};

//private: void D3D::CRTCommandBufferHacker::CleanUpAfterExport(void)
//{
//    mangled_ppc("?CleanUpAfterExport@CRTCommandBufferHacker@D3D@@AAAXXZ");
//};

//private: long D3D::CRTCommandBufferHacker::SetCommonVsMemexportState(void)
//{
//    mangled_ppc("?SetCommonVsMemexportState@CRTCommandBufferHacker@D3D@@AAAJXZ");
//};

//private: long D3D::CRTCommandBufferHacker::GenerateTextureThumbnail(union GPUTEXTURE_FETCH_CONSTANT const *, unsigned long, void *&, enum GPUCOLORFORMAT &, unsigned long &, unsigned long &)
//{
//    mangled_ppc("?GenerateTextureThumbnail@CRTCommandBufferHacker@D3D@@AAAJPBTGPUTEXTURE_FETCH_CONSTANT@@KAAPAXAAW4GPUCOLORFORMAT@@AAK3@Z");
//};

//private: long D3D::CRTCommandBufferHacker::GenerateTextureSampling(union GPUTEXTURE_FETCH_CONSTANT const *, unsigned long, void *&, enum GPUCOLORFORMAT &)
//{
//    mangled_ppc("?GenerateTextureSampling@CRTCommandBufferHacker@D3D@@AAAJPBTGPUTEXTURE_FETCH_CONSTANT@@KAAPAXAAW4GPUCOLORFORMAT@@@Z");
//};

//private: long D3D::CRTCommandBufferHacker::GenerateTextureChannelCheck(union GPUTEXTURE_FETCH_CONSTANT const *, unsigned long, void *&, enum GPUCOLORFORMAT &, unsigned long &)
//{
//    mangled_ppc("?GenerateTextureChannelCheck@CRTCommandBufferHacker@D3D@@AAAJPBTGPUTEXTURE_FETCH_CONSTANT@@KAAPAXAAW4GPUCOLORFORMAT@@AAK@Z");
//};

//private: void D3D::CRTCommandBufferHacker::CleanUpAfterVideoCapture(void)
//{
//    mangled_ppc("?CleanUpAfterVideoCapture@CRTCommandBufferHacker@D3D@@AAAXXZ");
//};

//private: void D3D::CRTCommandBufferHacker::CleanUpAfterThumbnails(void)
//{
//    mangled_ppc("?CleanUpAfterThumbnails@CRTCommandBufferHacker@D3D@@AAAXXZ");
//};

//private: void D3D::CRTCommandBufferHacker::SetShaderConstants(bool)
//{
//    mangled_ppc("?SetShaderConstants@CRTCommandBufferHacker@D3D@@AAAX_N@Z");
//};

//private: long D3D::CRTCommandBufferHacker::InsertCallback(void (*)(void *), void *)
//{
//    mangled_ppc("?InsertCallback@CRTCommandBufferHacker@D3D@@AAAJP6AXPAX@Z0@Z");
//};

//private: long D3D::CRTCommandBufferHacker::InsertReadPerfCounter(enum D3D::ERareInstruction, unsigned long *)
//{
//    mangled_ppc("?InsertReadPerfCounter@CRTCommandBufferHacker@D3D@@AAAJW4ERareInstruction@2@PAK@Z");
//};

//private: long D3D::CRTCommandBufferHacker::DoPreDrawWork(void)
//{
//    mangled_ppc("?DoPreDrawWork@CRTCommandBufferHacker@D3D@@AAAJXZ");
//};

//private: long D3D::CRTCommandBufferHacker::DoPostDrawWork(void)
//{
//    mangled_ppc("?DoPostDrawWork@CRTCommandBufferHacker@D3D@@AAAJXZ");
//};

//private: long D3D::CRTCommandBufferHacker::CleanUpAfterDraw(void)
//{
//    mangled_ppc("?CleanUpAfterDraw@CRTCommandBufferHacker@D3D@@AAAJXZ");
//};

//private: long D3D::CRTCommandBufferHacker::InitiateThumbnailGeneration(union GPUTEXTURE_FETCH_CONSTANT const *, struct D3D::RTBasicTextureInfo *, unsigned long, enum D3D::ERTWorkerCollectorCommands)
//{
//    mangled_ppc("?InitiateThumbnailGeneration@CRTCommandBufferHacker@D3D@@AAAJPBTGPUTEXTURE_FETCH_CONSTANT@@PAURTBasicTextureInfo@2@KW4ERTWorkerCollectorCommands@2@@Z");
//};

//private: long D3D::CRTCommandBufferHacker::OnLoadTextureConstant(union GPUTEXTURE_FETCH_CONSTANT const *, unsigned long)
//{
//    mangled_ppc("?OnLoadTextureConstant@CRTCommandBufferHacker@D3D@@AAAJPBTGPUTEXTURE_FETCH_CONSTANT@@K@Z");
//};

//private: long D3D::CRTCommandBufferHacker::InitializePerfCounters(void)
//{
//    mangled_ppc("?InitializePerfCounters@CRTCommandBufferHacker@D3D@@AAAJXZ");
//};

//private: void D3D::CRTCommandBufferHacker::EndExport(unsigned long)
//{
//    mangled_ppc("?EndExport@CRTCommandBufferHacker@D3D@@AAAXK@Z");
//};

//private: long D3D::CRTCommandBufferHacker::PerformVideoCapture(void *, unsigned long, union GPUTEXTURE_FETCH_CONSTANT *, float const *const, float const *const, float const *const, unsigned long)
//{
//    mangled_ppc("?PerformVideoCapture@CRTCommandBufferHacker@D3D@@AAAJPAXKPATGPUTEXTURE_FETCH_CONSTANT@@QBM22K@Z");
//};

//private: long D3D::CRTCommandBufferHacker::InsertWorkerCollectorFence(void)
//{
//    mangled_ppc("?InsertWorkerCollectorFence@CRTCommandBufferHacker@D3D@@AAAJXZ");
//};

//private: long D3D::CRTCommandBufferHacker::AnalyzeTextureFetchConstants(bool)
//{
//    mangled_ppc("?AnalyzeTextureFetchConstants@CRTCommandBufferHacker@D3D@@AAAJ_N@Z");
//};

//private: bool D3D::CRTCommandBufferHacker::HandleDraw(void)
//{
//    mangled_ppc("?HandleDraw@CRTCommandBufferHacker@D3D@@AAA_NXZ");
//};

//private: long D3D::CRTCommandBufferHacker::SetupVideoCapture(union GPUTEXTURE_FETCH_CONSTANT *)
//{
//    mangled_ppc("?SetupVideoCapture@CRTCommandBufferHacker@D3D@@AAAJPATGPUTEXTURE_FETCH_CONSTANT@@@Z");
//};

//private: long D3D::CRTCommandBufferHacker::RunInstrumentationCB(unsigned long const *, unsigned long, unsigned long, int)
//{
//    mangled_ppc("?RunInstrumentationCB@CRTCommandBufferHacker@D3D@@AAAJPBKKKH@Z");
//};

//public: struct D3D::RTPM4Chunk D3D::CRTCommandBufferHacker::RunInstrumentation(unsigned long const *, unsigned long, int)
//{
//    mangled_ppc("?RunInstrumentation@CRTCommandBufferHacker@D3D@@QAA?AURTPM4Chunk@2@PBKKH@Z");
//};

