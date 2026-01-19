/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const XAUDIO::CXMASourceEffect::`vftable'{for `XAUDIO::CSourceStream'}; // "??_7CXMASourceEffect@XAUDIO@@6BCSourceStream@1@@"
// const XAUDIO::CXMASourceEffect::`vftable'{for `XAUDIO::CEffect'}; // "??_7CXMASourceEffect@XAUDIO@@6BCEffect@1@@"

// XAudioGetXMAPacketPosition;
// unsigned long XAudioXMA2GetSampleBitPosition(void const *, unsigned long, unsigned long, unsigned long, int *);
// unsigned long XAudioXMA2GetLastFrameBitPosition(void const *, unsigned long, unsigned long);
// public: virtual XAUDIO::CXMASourceEffect::~CXMASourceEffect(void);
// public: virtual long XAUDIO::CXMASourceEffect::SubmitPacket(struct XAUDIOPACKET const *, unsigned char);
// public: virtual long XAUDIO::CXMASourceEffect::SubmitSourceBuffer(struct XAUDIOSOURCEBUFFER const *, unsigned char);
// protected: virtual struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CXMASourceEffect::CompletePacket(struct XAUDIO::XAUDIOPACKETCTX *, long);
// protected: unsigned long XAUDIO::CXMASourceEffect::GetOutputChannelCount(void);
// [thunk]: public: virtual void * XAUDIO::CXMASourceEffect::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::SubmitSourceBuffer(struct XAUDIOSOURCEBUFFER const *, unsigned char);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::SubmitPacket(struct XAUDIOPACKET const *, unsigned char);
// [thunk]: public: virtual void * XAUDIO::CXMASourceEffect::`vector deleting destructor'(unsigned int);
// public: XAUDIO::CResampler::CResampler(void);
// public: void XAUDIO::CResampler::SetFlags(unsigned char);
// public: void XAUDIO::CResampler::SetSourceBuffer(void const *, unsigned int, unsigned int);
// public: void XAUDIO::CResampler::SetDestBuffer(float *, unsigned int, unsigned int);
// public: void XAUDIO::CResampler::SetSourceFormat(unsigned char, unsigned long, unsigned char, float);
// public: void XAUDIO::CResampler::SetDestSamplingRate(unsigned long);
// public: float XAUDIO::CResampler::GetTargetVolume(void);
// public: void XAUDIO::CResampler::SetTargetVolume(float);
// public: void XAUDIO::CResampler::SyncCurrentVolume(void);
// public: void XAUDIO::CResampler::ResetSampleCache(void);
// public: unsigned int XAUDIO::CResampler::GetDestCount(void);
// public: int XAUDIO::CResampler::ClearDestBuffer(unsigned int);
// public: union XAUDIOFORMAT const * XAUDIO::CResampler::GetSourceFormat(void);
// public: static unsigned int XAUDIO::CPacketQueue::GetObjectAdditionalSize(unsigned char);
// public: static unsigned int XAUDIO::CSourceStream::GetObjectAdditionalSize(unsigned char);
// protected: unsigned short XAUDIO::CSourceStream::GetVolumeFadeFrameRemaining(void);
// protected: float XAUDIO::CSourceStream::FadeVolume(float);
// public: static unsigned int XAUDIO::CSourceEffect::GetObjectAdditionalSize(struct XAUDIOSOURCEFXINIT const *);
// public: static void * XAUDIO::CXMASourceEffect::operator new(unsigned int, struct IXAudioBatchAllocator *);
// public: static void XAUDIO::CXMASourceEffect::operator delete(void *);
// public: static void * XAUDIO::CXMASourceEffect::CResamplerBatch::operator new[](unsigned int, struct IXAudioBatchAllocator *);
// public: static unsigned int XAUDIO::CXMASourceEffect::GetObjectAdditionalSize(struct XAUDIOSOURCEFXINIT const *);
// public: virtual unsigned long XAUDIO::CXMASourceEffect::AddRef(void);
// public: virtual unsigned long XAUDIO::CXMASourceEffect::Release(void);
// public: virtual long XAUDIO::CXMASourceEffect::GetInfo(struct XAUDIOFXINFO *);
// public: virtual long XAUDIO::CXMASourceEffect::GetContext(void **);
// public: virtual long XAUDIO::CXMASourceEffect::GetState(unsigned char *);
// public: virtual long XAUDIO::CXMASourceEffect::GetVolume(float *);
// public: virtual long XAUDIO::CXMASourceEffect::GetPitch(float *);
// public: virtual long XAUDIO::CXMASourceEffect::GetFrequencyScale(float *);
// public: virtual long XAUDIO::CXMASourceEffect::GetPacketLoopCount(unsigned long *);
// public: virtual long XAUDIO::CXMASourceEffect::SetPacketLoopCount(unsigned long);
// public: virtual long XAUDIO::CXMASourceEffect::GetPacketContext(void **);
// public: virtual long XAUDIO::CXMASourceEffect::GetStreamPosition(unsigned long *);
// public: virtual long XAUDIO::CXMASourceEffect::GetFormat(struct XAUDIOSOURCEFORMAT *, unsigned char *);
// public: virtual void XAUDIO::CXMASourceEffect::QueryInterface(struct IXAudioEffect **);
// public: virtual void XAUDIO::CXMASourceEffect::QueryInterface(struct IXAudioSourceEffect **);
// public: virtual long XAUDIO::CXMASourceEffect::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *);
// public: virtual long XAUDIO::CXMASourceEffect::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *);
// merged_84888318;
// public: XAUDIO::CXMASourceEffect::CResamplerBatch::CResamplerBatch(void);
// public: virtual long XAUDIO::CXMASourceEffect::SetVolume(float);
// public: virtual long XAUDIO::CXMASourceEffect::SetPitch(float);
// public: virtual long XAUDIO::CXMASourceEffect::SetFrequencyScale(float);
// protected: long XAUDIO::CXMASourceEffect::PreProcess(struct IXAudioFrameBuffer *);
// public: virtual long XAUDIO::CXMASourceEffect::Initialize(void);
// public: static int XAUDIO::CXMASourceEffect::IsValidFormat(struct XAUDIOSOURCEFORMAT const *);
// public: virtual long XAUDIO::CXMASourceEffect::FlushPackets(void);
// public: virtual long XAUDIO::CXMASourceEffect::GetPacketPosition(union XAUDIOPACKETPOSITION *);
// public: virtual long XAUDIO::CXMASourceEffect::SetPacketPosition(union XAUDIOPACKETPOSITION const *);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetPitch(float *);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetFrequencyScale(float *);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::SetVolume(float);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetPacketContext(void **);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::SetPacketLoopCount(unsigned long);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetFormat(struct XAUDIOSOURCEFORMAT *, unsigned char *);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetState(unsigned char *);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::FlushPackets(void);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::SetPitch(float);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::SetFrequencyScale(float);
// [thunk]: public: virtual unsigned long XAUDIO::CXMASourceEffect::Release(void);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetInfo(struct XAUDIOFXINFO *);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetContext(void **);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *);
// [thunk]: public: virtual unsigned long XAUDIO::CXMASourceEffect::AddRef(void);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetPacketLoopCount(unsigned long *);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetVolume(float *);
// public: int XAUDIO::CResampler::ClearDestBuffer(void);
// protected: void XAUDIO::CSourceEffect::PacketLoopCallback(struct XAUDIO::XAUDIOPACKETCTX *);
// public: static unsigned int XAUDIO::CXMASourceEffect::GetObjectSize(struct XAUDIOSOURCEFXINIT const *);
// public: virtual long XAUDIO::CXMASourceEffect::FlushSourceBuffers(void);
// XAudioQueryXMASourceEffectSize;
// public: IXAudioSourceEffect::IXAudioSourceEffect(void);
// public: virtual long XAUDIO::CXMASourceEffect::Start(void);
// public: virtual long XAUDIO::CXMASourceEffect::Stop(unsigned char);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::FlushSourceBuffers(void);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::Start(void);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::Stop(unsigned char);
// public: virtual long XAUDIO::CXMASourceEffect::Discontinuity(void);
// protected: void XAUDIO::CXMASourceEffect::SetDataAlignment(void);
// public: XAUDIO::CXMASourceEffect::CXMASourceEffect(struct XAUDIOSOURCEFXINIT const *, struct IXAudioBatchAllocator *);
// public: virtual long XAUDIO::CXMASourceEffect::SetFormat(struct XAUDIOSOURCEFORMAT const *, unsigned char);
// protected: void XAUDIO::CXMASourceEffect::PostProcess(int, int, int);
// protected: int XAUDIO::CXMASourceEffect::SynchronizePackets(void);
// protected: void XAUDIO::CXMASourceEffect::SynchronizeSourceBuffers(void);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::SetFormat(struct XAUDIOSOURCEFORMAT const *, unsigned char);
// [thunk]: public: virtual long XAUDIO::CXMASourceEffect::Discontinuity(void);
// XAudioCreateXMASourceEffect;
// public: virtual long XAUDIO::CXMASourceEffect::Process(struct IXAudioFrameBuffer *, struct IXAudioFrameBuffer *);

//XAudioGetXMAPacketPosition
//{
//    mangled_ppc("XAudioGetXMAPacketPosition");
//};

//unsigned long XAudioXMA2GetSampleBitPosition(void const *, unsigned long, unsigned long, unsigned long, int *)
//{
//    mangled_ppc("?XAudioXMA2GetSampleBitPosition@@YAKPBXKKKPAH@Z");
//};

//unsigned long XAudioXMA2GetLastFrameBitPosition(void const *, unsigned long, unsigned long)
//{
//    mangled_ppc("?XAudioXMA2GetLastFrameBitPosition@@YAKPBXKK@Z");
//};

//public: virtual XAUDIO::CXMASourceEffect::~CXMASourceEffect(void)
//{
//    mangled_ppc("??1CXMASourceEffect@XAUDIO@@UAA@XZ");
//};

//public: virtual long XAUDIO::CXMASourceEffect::SubmitPacket(struct XAUDIOPACKET const *, unsigned char)
//{
//    mangled_ppc("?SubmitPacket@CXMASourceEffect@XAUDIO@@UAAJPBUXAUDIOPACKET@@E@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::SubmitSourceBuffer(struct XAUDIOSOURCEBUFFER const *, unsigned char)
//{
//    mangled_ppc("?SubmitSourceBuffer@CXMASourceEffect@XAUDIO@@UAAJPBUXAUDIOSOURCEBUFFER@@E@Z");
//};

//protected: virtual struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CXMASourceEffect::CompletePacket(struct XAUDIO::XAUDIOPACKETCTX *, long)
//{
//    mangled_ppc("?CompletePacket@CXMASourceEffect@XAUDIO@@MAAPAUXAUDIOPACKETCTX@2@PAU32@J@Z");
//};

//protected: unsigned long XAUDIO::CXMASourceEffect::GetOutputChannelCount(void)
//{
//    mangled_ppc("?GetOutputChannelCount@CXMASourceEffect@XAUDIO@@IAAKXZ");
//};

//[thunk]: public: virtual void * XAUDIO::CXMASourceEffect::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_ECXMASourceEffect@XAUDIO@@W3AAPAXI@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::SubmitSourceBuffer(struct XAUDIOSOURCEBUFFER const *, unsigned char)
//{
//    mangled_ppc("?SubmitSourceBuffer@CXMASourceEffect@XAUDIO@@WBA@AAJPBUXAUDIOSOURCEBUFFER@@E@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::SubmitPacket(struct XAUDIOPACKET const *, unsigned char)
//{
//    mangled_ppc("?SubmitPacket@CXMASourceEffect@XAUDIO@@WBA@AAJPBUXAUDIOPACKET@@E@Z");
//};

//[thunk]: public: virtual void * XAUDIO::CXMASourceEffect::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_ECXMASourceEffect@XAUDIO@@WBA@AAPAXI@Z");
//};

//public: XAUDIO::CResampler::CResampler(void)
//{
//    mangled_ppc("??0CResampler@XAUDIO@@QAA@XZ");
//};

//public: void XAUDIO::CResampler::SetFlags(unsigned char)
//{
//    mangled_ppc("?SetFlags@CResampler@XAUDIO@@QAAXE@Z");
//};

//public: void XAUDIO::CResampler::SetSourceBuffer(void const *, unsigned int, unsigned int)
//{
//    mangled_ppc("?SetSourceBuffer@CResampler@XAUDIO@@QAAXPBXII@Z");
//};

//public: void XAUDIO::CResampler::SetDestBuffer(float *, unsigned int, unsigned int)
//{
//    mangled_ppc("?SetDestBuffer@CResampler@XAUDIO@@QAAXPAMII@Z");
//};

//public: void XAUDIO::CResampler::SetSourceFormat(unsigned char, unsigned long, unsigned char, float)
//{
//    mangled_ppc("?SetSourceFormat@CResampler@XAUDIO@@QAAXEKEM@Z");
//};

//public: void XAUDIO::CResampler::SetDestSamplingRate(unsigned long)
//{
//    mangled_ppc("?SetDestSamplingRate@CResampler@XAUDIO@@QAAXK@Z");
//};

//public: float XAUDIO::CResampler::GetTargetVolume(void)
//{
//    mangled_ppc("?GetTargetVolume@CResampler@XAUDIO@@QAAMXZ");
//};

//public: void XAUDIO::CResampler::SetTargetVolume(float)
//{
//    mangled_ppc("?SetTargetVolume@CResampler@XAUDIO@@QAAXM@Z");
//};

//public: void XAUDIO::CResampler::SyncCurrentVolume(void)
//{
//    mangled_ppc("?SyncCurrentVolume@CResampler@XAUDIO@@QAAXXZ");
//};

//public: void XAUDIO::CResampler::ResetSampleCache(void)
//{
//    mangled_ppc("?ResetSampleCache@CResampler@XAUDIO@@QAAXXZ");
//};

//public: unsigned int XAUDIO::CResampler::GetDestCount(void)
//{
//    mangled_ppc("?GetDestCount@CResampler@XAUDIO@@QAAIXZ");
//};

//public: int XAUDIO::CResampler::ClearDestBuffer(unsigned int)
//{
//    mangled_ppc("?ClearDestBuffer@CResampler@XAUDIO@@QAAHI@Z");
//};

//public: union XAUDIOFORMAT const * XAUDIO::CResampler::GetSourceFormat(void)
//{
//    mangled_ppc("?GetSourceFormat@CResampler@XAUDIO@@QAAPBTXAUDIOFORMAT@@XZ");
//};

//public: static unsigned int XAUDIO::CPacketQueue::GetObjectAdditionalSize(unsigned char)
//{
//    mangled_ppc("?GetObjectAdditionalSize@CPacketQueue@XAUDIO@@SAIE@Z");
//};

//public: static unsigned int XAUDIO::CSourceStream::GetObjectAdditionalSize(unsigned char)
//{
//    mangled_ppc("?GetObjectAdditionalSize@CSourceStream@XAUDIO@@SAIE@Z");
//};

//protected: unsigned short XAUDIO::CSourceStream::GetVolumeFadeFrameRemaining(void)
//{
//    mangled_ppc("?GetVolumeFadeFrameRemaining@CSourceStream@XAUDIO@@IAAGXZ");
//};

//protected: float XAUDIO::CSourceStream::FadeVolume(float)
//{
//    mangled_ppc("?FadeVolume@CSourceStream@XAUDIO@@IAAMM@Z");
//};

//public: static unsigned int XAUDIO::CSourceEffect::GetObjectAdditionalSize(struct XAUDIOSOURCEFXINIT const *)
//{
//    mangled_ppc("?GetObjectAdditionalSize@CSourceEffect@XAUDIO@@SAIPBUXAUDIOSOURCEFXINIT@@@Z");
//};

//public: static void * XAUDIO::CXMASourceEffect::operator new(unsigned int, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??2CXMASourceEffect@XAUDIO@@SAPAXIPAUIXAudioBatchAllocator@@@Z");
//};

//public: static void XAUDIO::CXMASourceEffect::operator delete(void *)
//{
//    mangled_ppc("??3CXMASourceEffect@XAUDIO@@SAXPAX@Z");
//};

//public: static void * XAUDIO::CXMASourceEffect::CResamplerBatch::operator new[](unsigned int, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??_UCResamplerBatch@CXMASourceEffect@XAUDIO@@SAPAXIPAUIXAudioBatchAllocator@@@Z");
//};

//public: static unsigned int XAUDIO::CXMASourceEffect::GetObjectAdditionalSize(struct XAUDIOSOURCEFXINIT const *)
//{
//    mangled_ppc("?GetObjectAdditionalSize@CXMASourceEffect@XAUDIO@@SAIPBUXAUDIOSOURCEFXINIT@@@Z");
//};

//public: virtual unsigned long XAUDIO::CXMASourceEffect::AddRef(void)
//{
//    mangled_ppc("?AddRef@CXMASourceEffect@XAUDIO@@UAAKXZ");
//};

//public: virtual unsigned long XAUDIO::CXMASourceEffect::Release(void)
//{
//    mangled_ppc("?Release@CXMASourceEffect@XAUDIO@@UAAKXZ");
//};

//public: virtual long XAUDIO::CXMASourceEffect::GetInfo(struct XAUDIOFXINFO *)
//{
//    mangled_ppc("?GetInfo@CXMASourceEffect@XAUDIO@@UAAJPAUXAUDIOFXINFO@@@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::GetContext(void **)
//{
//    mangled_ppc("?GetContext@CXMASourceEffect@XAUDIO@@UAAJPAPAX@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::GetState(unsigned char *)
//{
//    mangled_ppc("?GetState@CXMASourceEffect@XAUDIO@@UAAJPAE@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::GetVolume(float *)
//{
//    mangled_ppc("?GetVolume@CXMASourceEffect@XAUDIO@@UAAJPAM@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::GetPitch(float *)
//{
//    mangled_ppc("?GetPitch@CXMASourceEffect@XAUDIO@@UAAJPAM@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::GetFrequencyScale(float *)
//{
//    mangled_ppc("?GetFrequencyScale@CXMASourceEffect@XAUDIO@@UAAJPAM@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::GetPacketLoopCount(unsigned long *)
//{
//    mangled_ppc("?GetPacketLoopCount@CXMASourceEffect@XAUDIO@@UAAJPAK@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::SetPacketLoopCount(unsigned long)
//{
//    mangled_ppc("?SetPacketLoopCount@CXMASourceEffect@XAUDIO@@UAAJK@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::GetPacketContext(void **)
//{
//    mangled_ppc("?GetPacketContext@CXMASourceEffect@XAUDIO@@UAAJPAPAX@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::GetStreamPosition(unsigned long *)
//{
//    mangled_ppc("?GetStreamPosition@CXMASourceEffect@XAUDIO@@UAAJPAK@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::GetFormat(struct XAUDIOSOURCEFORMAT *, unsigned char *)
//{
//    mangled_ppc("?GetFormat@CXMASourceEffect@XAUDIO@@UAAJPAUXAUDIOSOURCEFORMAT@@PAE@Z");
//};

//public: virtual void XAUDIO::CXMASourceEffect::QueryInterface(struct IXAudioEffect **)
//{
//    mangled_ppc("?QueryInterface@CXMASourceEffect@XAUDIO@@UAAXPAPAUIXAudioEffect@@@Z");
//};

//public: virtual void XAUDIO::CXMASourceEffect::QueryInterface(struct IXAudioSourceEffect **)
//{
//    mangled_ppc("?QueryInterface@CXMASourceEffect@XAUDIO@@UAAXPAPAUIXAudioSourceEffect@@@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *)
//{
//    mangled_ppc("?GetParam@CXMASourceEffect@XAUDIO@@UAAJEEPATXAUDIOFXPARAM@@@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *)
//{
//    mangled_ppc("?SetParam@CXMASourceEffect@XAUDIO@@UAAJEEPBTXAUDIOFXPARAM@@@Z");
//};

//merged_84888318
//{
//    mangled_ppc("merged_84888318");
//};

//public: XAUDIO::CXMASourceEffect::CResamplerBatch::CResamplerBatch(void)
//{
//    mangled_ppc("??0CResamplerBatch@CXMASourceEffect@XAUDIO@@QAA@XZ");
//};

//public: virtual long XAUDIO::CXMASourceEffect::SetVolume(float)
//{
//    mangled_ppc("?SetVolume@CXMASourceEffect@XAUDIO@@UAAJM@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::SetPitch(float)
//{
//    mangled_ppc("?SetPitch@CXMASourceEffect@XAUDIO@@UAAJM@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::SetFrequencyScale(float)
//{
//    mangled_ppc("?SetFrequencyScale@CXMASourceEffect@XAUDIO@@UAAJM@Z");
//};

//protected: long XAUDIO::CXMASourceEffect::PreProcess(struct IXAudioFrameBuffer *)
//{
//    mangled_ppc("?PreProcess@CXMASourceEffect@XAUDIO@@IAAJPAUIXAudioFrameBuffer@@@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::Initialize(void)
//{
//    mangled_ppc("?Initialize@CXMASourceEffect@XAUDIO@@UAAJXZ");
//};

//public: static int XAUDIO::CXMASourceEffect::IsValidFormat(struct XAUDIOSOURCEFORMAT const *)
//{
//    mangled_ppc("?IsValidFormat@CXMASourceEffect@XAUDIO@@SAHPBUXAUDIOSOURCEFORMAT@@@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::FlushPackets(void)
//{
//    mangled_ppc("?FlushPackets@CXMASourceEffect@XAUDIO@@UAAJXZ");
//};

//public: virtual long XAUDIO::CXMASourceEffect::GetPacketPosition(union XAUDIOPACKETPOSITION *)
//{
//    mangled_ppc("?GetPacketPosition@CXMASourceEffect@XAUDIO@@UAAJPATXAUDIOPACKETPOSITION@@@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::SetPacketPosition(union XAUDIOPACKETPOSITION const *)
//{
//    mangled_ppc("?SetPacketPosition@CXMASourceEffect@XAUDIO@@UAAJPBTXAUDIOPACKETPOSITION@@@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetPitch(float *)
//{
//    mangled_ppc("?GetPitch@CXMASourceEffect@XAUDIO@@WBA@AAJPAM@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetFrequencyScale(float *)
//{
//    mangled_ppc("?GetFrequencyScale@CXMASourceEffect@XAUDIO@@WBA@AAJPAM@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::SetVolume(float)
//{
//    mangled_ppc("?SetVolume@CXMASourceEffect@XAUDIO@@WBA@AAJM@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetPacketContext(void **)
//{
//    mangled_ppc("?GetPacketContext@CXMASourceEffect@XAUDIO@@WBA@AAJPAPAX@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::SetPacketLoopCount(unsigned long)
//{
//    mangled_ppc("?SetPacketLoopCount@CXMASourceEffect@XAUDIO@@WBA@AAJK@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetFormat(struct XAUDIOSOURCEFORMAT *, unsigned char *)
//{
//    mangled_ppc("?GetFormat@CXMASourceEffect@XAUDIO@@WBA@AAJPAUXAUDIOSOURCEFORMAT@@PAE@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetState(unsigned char *)
//{
//    mangled_ppc("?GetState@CXMASourceEffect@XAUDIO@@WBA@AAJPAE@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *)
//{
//    mangled_ppc("?GetParam@CXMASourceEffect@XAUDIO@@W3AAJEEPATXAUDIOFXPARAM@@@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::FlushPackets(void)
//{
//    mangled_ppc("?FlushPackets@CXMASourceEffect@XAUDIO@@WBA@AAJXZ");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::SetPitch(float)
//{
//    mangled_ppc("?SetPitch@CXMASourceEffect@XAUDIO@@WBA@AAJM@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::SetFrequencyScale(float)
//{
//    mangled_ppc("?SetFrequencyScale@CXMASourceEffect@XAUDIO@@WBA@AAJM@Z");
//};

//[thunk]: public: virtual unsigned long XAUDIO::CXMASourceEffect::Release(void)
//{
//    mangled_ppc("?Release@CXMASourceEffect@XAUDIO@@W3AAKXZ");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetInfo(struct XAUDIOFXINFO *)
//{
//    mangled_ppc("?GetInfo@CXMASourceEffect@XAUDIO@@W3AAJPAUXAUDIOFXINFO@@@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetContext(void **)
//{
//    mangled_ppc("?GetContext@CXMASourceEffect@XAUDIO@@W3AAJPAPAX@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *)
//{
//    mangled_ppc("?SetParam@CXMASourceEffect@XAUDIO@@W3AAJEEPBTXAUDIOFXPARAM@@@Z");
//};

//[thunk]: public: virtual unsigned long XAUDIO::CXMASourceEffect::AddRef(void)
//{
//    mangled_ppc("?AddRef@CXMASourceEffect@XAUDIO@@W3AAKXZ");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetPacketLoopCount(unsigned long *)
//{
//    mangled_ppc("?GetPacketLoopCount@CXMASourceEffect@XAUDIO@@WBA@AAJPAK@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::GetVolume(float *)
//{
//    mangled_ppc("?GetVolume@CXMASourceEffect@XAUDIO@@WBA@AAJPAM@Z");
//};

//public: int XAUDIO::CResampler::ClearDestBuffer(void)
//{
//    mangled_ppc("?ClearDestBuffer@CResampler@XAUDIO@@QAAHXZ");
//};

//protected: void XAUDIO::CSourceEffect::PacketLoopCallback(struct XAUDIO::XAUDIOPACKETCTX *)
//{
//    mangled_ppc("?PacketLoopCallback@CSourceEffect@XAUDIO@@IAAXPAUXAUDIOPACKETCTX@2@@Z");
//};

//public: static unsigned int XAUDIO::CXMASourceEffect::GetObjectSize(struct XAUDIOSOURCEFXINIT const *)
//{
//    mangled_ppc("?GetObjectSize@CXMASourceEffect@XAUDIO@@SAIPBUXAUDIOSOURCEFXINIT@@@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::FlushSourceBuffers(void)
//{
//    mangled_ppc("?FlushSourceBuffers@CXMASourceEffect@XAUDIO@@UAAJXZ");
//};

//XAudioQueryXMASourceEffectSize
//{
//    mangled_ppc("XAudioQueryXMASourceEffectSize");
//};

//public: IXAudioSourceEffect::IXAudioSourceEffect(void)
//{
//    mangled_ppc("??0IXAudioSourceEffect@@QAA@XZ");
//};

//public: virtual long XAUDIO::CXMASourceEffect::Start(void)
//{
//    mangled_ppc("?Start@CXMASourceEffect@XAUDIO@@UAAJXZ");
//};

//public: virtual long XAUDIO::CXMASourceEffect::Stop(unsigned char)
//{
//    mangled_ppc("?Stop@CXMASourceEffect@XAUDIO@@UAAJE@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::FlushSourceBuffers(void)
//{
//    mangled_ppc("?FlushSourceBuffers@CXMASourceEffect@XAUDIO@@WBA@AAJXZ");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::Start(void)
//{
//    mangled_ppc("?Start@CXMASourceEffect@XAUDIO@@WBA@AAJXZ");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::Stop(unsigned char)
//{
//    mangled_ppc("?Stop@CXMASourceEffect@XAUDIO@@WBA@AAJE@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::Discontinuity(void)
//{
//    mangled_ppc("?Discontinuity@CXMASourceEffect@XAUDIO@@UAAJXZ");
//};

//protected: void XAUDIO::CXMASourceEffect::SetDataAlignment(void)
//{
//    mangled_ppc("?SetDataAlignment@CXMASourceEffect@XAUDIO@@IAAXXZ");
//};

//public: XAUDIO::CXMASourceEffect::CXMASourceEffect(struct XAUDIOSOURCEFXINIT const *, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??0CXMASourceEffect@XAUDIO@@QAA@PBUXAUDIOSOURCEFXINIT@@PAUIXAudioBatchAllocator@@@Z");
//};

//public: virtual long XAUDIO::CXMASourceEffect::SetFormat(struct XAUDIOSOURCEFORMAT const *, unsigned char)
//{
//    mangled_ppc("?SetFormat@CXMASourceEffect@XAUDIO@@UAAJPBUXAUDIOSOURCEFORMAT@@E@Z");
//};

//protected: void XAUDIO::CXMASourceEffect::PostProcess(int, int, int)
//{
//    mangled_ppc("?PostProcess@CXMASourceEffect@XAUDIO@@IAAXHHH@Z");
//};

//protected: int XAUDIO::CXMASourceEffect::SynchronizePackets(void)
//{
//    mangled_ppc("?SynchronizePackets@CXMASourceEffect@XAUDIO@@IAAHXZ");
//};

//protected: void XAUDIO::CXMASourceEffect::SynchronizeSourceBuffers(void)
//{
//    mangled_ppc("?SynchronizeSourceBuffers@CXMASourceEffect@XAUDIO@@IAAXXZ");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::SetFormat(struct XAUDIOSOURCEFORMAT const *, unsigned char)
//{
//    mangled_ppc("?SetFormat@CXMASourceEffect@XAUDIO@@WBA@AAJPBUXAUDIOSOURCEFORMAT@@E@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXMASourceEffect::Discontinuity(void)
//{
//    mangled_ppc("?Discontinuity@CXMASourceEffect@XAUDIO@@WBA@AAJXZ");
//};

//XAudioCreateXMASourceEffect
//{
//    mangled_ppc("XAudioCreateXMASourceEffect");
//};

//public: virtual long XAUDIO::CXMASourceEffect::Process(struct IXAudioFrameBuffer *, struct IXAudioFrameBuffer *)
//{
//    mangled_ppc("?Process@CXMASourceEffect@XAUDIO@@UAAJPAUIXAudioFrameBuffer@@0@Z");
//};

