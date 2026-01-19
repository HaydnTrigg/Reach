/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const XAUDIO::CPCMSourceEffect::`vftable'{for `XAUDIO::CSourceStream'}; // "??_7CPCMSourceEffect@XAUDIO@@6BCSourceStream@1@@"
// const XAUDIO::CPCMSourceEffect::`vftable'{for `XAUDIO::CEffect'}; // "??_7CPCMSourceEffect@XAUDIO@@6BCEffect@1@@"
// unsigned int const *const const `unsigned int __cdecl XAudioGetSourceSampleSize(unsigned int)'::`2'::aSampleSizes; // "?aSampleSizes@?1??XAudioGetSourceSampleSize@@YAII@Z@4QBIB"

// public: virtual XAUDIO::CPCMSourceEffect::~CPCMSourceEffect(void);
// [thunk]: public: virtual void * XAUDIO::CPCMSourceEffect::`vector deleting destructor'(unsigned int);
// [thunk]: public: virtual void * XAUDIO::CPCMSourceEffect::`vector deleting destructor'(unsigned int);
// unsigned int XAudioGetSourceSampleSize(unsigned int);
// unsigned int XAudioGetSourceSampleBlockSize(unsigned int, unsigned int);
// public: unsigned int XAUDIO::CResampler::GetSourceCount(void);
// public: static unsigned int XAUDIO::CResampler::GetSampleAlignment(unsigned char, unsigned char);
// public: static unsigned int XAUDIO::CResampler::GetPacketAlignment(unsigned char, unsigned long);
// public: unsigned int XAUDIO::CResampler::GetSampleAlignment(void);
// public: unsigned int XAUDIO::CResampler::GetPacketAlignment(void);
// public: static void * XAUDIO::CPCMSourceEffect::operator new(unsigned int, struct IXAudioBatchAllocator *);
// public: static void XAUDIO::CPCMSourceEffect::operator delete(void *);
// public: static unsigned int XAUDIO::CPCMSourceEffect::GetObjectAdditionalSize(struct XAUDIOSOURCEFXINIT const *);
// public: virtual unsigned long XAUDIO::CPCMSourceEffect::AddRef(void);
// public: virtual unsigned long XAUDIO::CPCMSourceEffect::Release(void);
// public: virtual long XAUDIO::CPCMSourceEffect::GetInfo(struct XAUDIOFXINFO *);
// public: virtual long XAUDIO::CPCMSourceEffect::GetContext(void **);
// public: virtual long XAUDIO::CPCMSourceEffect::SubmitPacket(struct XAUDIOPACKET const *, unsigned char);
// public: virtual long XAUDIO::CPCMSourceEffect::SubmitSourceBuffer(struct XAUDIOSOURCEBUFFER const *, unsigned char);
// public: virtual long XAUDIO::CPCMSourceEffect::FlushPackets(void);
// public: virtual long XAUDIO::CPCMSourceEffect::FlushSourceBuffers(void);
// public: virtual long XAUDIO::CPCMSourceEffect::GetState(unsigned char *);
// public: virtual long XAUDIO::CPCMSourceEffect::GetVolume(float *);
// public: virtual long XAUDIO::CPCMSourceEffect::GetPitch(float *);
// public: virtual long XAUDIO::CPCMSourceEffect::GetFrequencyScale(float *);
// public: virtual long XAUDIO::CPCMSourceEffect::GetPacketPosition(union XAUDIOPACKETPOSITION *);
// public: virtual long XAUDIO::CPCMSourceEffect::GetStreamPosition(unsigned long *);
// public: virtual long XAUDIO::CPCMSourceEffect::GetPacketLoopCount(unsigned long *);
// public: virtual long XAUDIO::CPCMSourceEffect::SetPacketLoopCount(unsigned long);
// public: virtual long XAUDIO::CPCMSourceEffect::GetPacketContext(void **);
// public: virtual long XAUDIO::CPCMSourceEffect::GetFormat(struct XAUDIOSOURCEFORMAT *, unsigned char *);
// public: virtual void XAUDIO::CPCMSourceEffect::QueryInterface(struct IXAudioEffect **);
// public: virtual void XAUDIO::CPCMSourceEffect::QueryInterface(struct IXAudioSourceEffect **);
// public: virtual long XAUDIO::CPCMSourceEffect::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *);
// public: virtual long XAUDIO::CPCMSourceEffect::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *);
// public: static int XAUDIO::CPCMSourceEffect::IsValidFormat(struct XAUDIOSOURCEFORMAT const *);
// merged_8488DCD0;
// public: virtual long XAUDIO::CPCMSourceEffect::SetVolume(float);
// public: virtual long XAUDIO::CPCMSourceEffect::SetPitch(float);
// public: virtual long XAUDIO::CPCMSourceEffect::SetFrequencyScale(float);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetVolume(float *);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetPitch(float *);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetFrequencyScale(float *);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SetVolume(float);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetPacketContext(void **);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SetPacketLoopCount(unsigned long);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetFormat(struct XAUDIOSOURCEFORMAT *, unsigned char *);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::FlushSourceBuffers(void);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetState(unsigned char *);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::FlushPackets(void);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SetPitch(float);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SetFrequencyScale(float);
// [thunk]: public: virtual unsigned long XAUDIO::CPCMSourceEffect::Release(void);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SubmitSourceBuffer(struct XAUDIOSOURCEBUFFER const *, unsigned char);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetInfo(struct XAUDIOFXINFO *);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetContext(void **);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *);
// [thunk]: public: virtual unsigned long XAUDIO::CPCMSourceEffect::AddRef(void);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SubmitPacket(struct XAUDIOPACKET const *, unsigned char);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetPacketLoopCount(unsigned long *);
// public: static unsigned int XAUDIO::CPCMSourceEffect::GetObjectSize(struct XAUDIOSOURCEFXINIT const *);
// public: virtual long XAUDIO::CPCMSourceEffect::SetPacketPosition(union XAUDIOPACKETPOSITION const *);
// public: virtual long XAUDIO::CPCMSourceEffect::Start(void);
// public: virtual long XAUDIO::CPCMSourceEffect::Stop(unsigned char);
// XAudioQueryPCMSourceEffectSize;
// protected: long XAUDIO::CPCMSourceEffect::PreProcess(struct IXAudioFrameBuffer *);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::Start(void);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::Stop(unsigned char);
// public: virtual long XAUDIO::CPCMSourceEffect::Discontinuity(void);
// protected: void XAUDIO::CPCMSourceEffect::SetDataAlignment(void);
// public: XAUDIO::CPCMSourceEffect::CPCMSourceEffect(struct XAUDIOSOURCEFXINIT const *, struct IXAudioBatchAllocator *);
// public: virtual long XAUDIO::CPCMSourceEffect::SetFormat(struct XAUDIOSOURCEFORMAT const *, unsigned char);
// protected: void XAUDIO::CPCMSourceEffect::PostProcess(void);
// protected: struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CPCMSourceEffect::GetNextProcessPacket(struct XAUDIO::XAUDIOPACKETCTX *);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SetFormat(struct XAUDIOSOURCEFORMAT const *, unsigned char);
// [thunk]: public: virtual long XAUDIO::CPCMSourceEffect::Discontinuity(void);
// XAudioCreatePCMSourceEffect;
// public: virtual long XAUDIO::CPCMSourceEffect::Process(struct IXAudioFrameBuffer *, struct IXAudioFrameBuffer *);

//public: virtual XAUDIO::CPCMSourceEffect::~CPCMSourceEffect(void)
//{
//    mangled_ppc("??1CPCMSourceEffect@XAUDIO@@UAA@XZ");
//};

//[thunk]: public: virtual void * XAUDIO::CPCMSourceEffect::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_ECPCMSourceEffect@XAUDIO@@W3AAPAXI@Z");
//};

//[thunk]: public: virtual void * XAUDIO::CPCMSourceEffect::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_ECPCMSourceEffect@XAUDIO@@WBA@AAPAXI@Z");
//};

//unsigned int XAudioGetSourceSampleSize(unsigned int)
//{
//    mangled_ppc("?XAudioGetSourceSampleSize@@YAII@Z");
//};

//unsigned int XAudioGetSourceSampleBlockSize(unsigned int, unsigned int)
//{
//    mangled_ppc("?XAudioGetSourceSampleBlockSize@@YAIII@Z");
//};

//public: unsigned int XAUDIO::CResampler::GetSourceCount(void)
//{
//    mangled_ppc("?GetSourceCount@CResampler@XAUDIO@@QAAIXZ");
//};

//public: static unsigned int XAUDIO::CResampler::GetSampleAlignment(unsigned char, unsigned char)
//{
//    mangled_ppc("?GetSampleAlignment@CResampler@XAUDIO@@SAIEE@Z");
//};

//public: static unsigned int XAUDIO::CResampler::GetPacketAlignment(unsigned char, unsigned long)
//{
//    mangled_ppc("?GetPacketAlignment@CResampler@XAUDIO@@SAIEK@Z");
//};

//public: unsigned int XAUDIO::CResampler::GetSampleAlignment(void)
//{
//    mangled_ppc("?GetSampleAlignment@CResampler@XAUDIO@@QAAIXZ");
//};

//public: unsigned int XAUDIO::CResampler::GetPacketAlignment(void)
//{
//    mangled_ppc("?GetPacketAlignment@CResampler@XAUDIO@@QAAIXZ");
//};

//public: static void * XAUDIO::CPCMSourceEffect::operator new(unsigned int, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??2CPCMSourceEffect@XAUDIO@@SAPAXIPAUIXAudioBatchAllocator@@@Z");
//};

//public: static void XAUDIO::CPCMSourceEffect::operator delete(void *)
//{
//    mangled_ppc("??3CPCMSourceEffect@XAUDIO@@SAXPAX@Z");
//};

//public: static unsigned int XAUDIO::CPCMSourceEffect::GetObjectAdditionalSize(struct XAUDIOSOURCEFXINIT const *)
//{
//    mangled_ppc("?GetObjectAdditionalSize@CPCMSourceEffect@XAUDIO@@SAIPBUXAUDIOSOURCEFXINIT@@@Z");
//};

//public: virtual unsigned long XAUDIO::CPCMSourceEffect::AddRef(void)
//{
//    mangled_ppc("?AddRef@CPCMSourceEffect@XAUDIO@@UAAKXZ");
//};

//public: virtual unsigned long XAUDIO::CPCMSourceEffect::Release(void)
//{
//    mangled_ppc("?Release@CPCMSourceEffect@XAUDIO@@UAAKXZ");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::GetInfo(struct XAUDIOFXINFO *)
//{
//    mangled_ppc("?GetInfo@CPCMSourceEffect@XAUDIO@@UAAJPAUXAUDIOFXINFO@@@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::GetContext(void **)
//{
//    mangled_ppc("?GetContext@CPCMSourceEffect@XAUDIO@@UAAJPAPAX@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::SubmitPacket(struct XAUDIOPACKET const *, unsigned char)
//{
//    mangled_ppc("?SubmitPacket@CPCMSourceEffect@XAUDIO@@UAAJPBUXAUDIOPACKET@@E@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::SubmitSourceBuffer(struct XAUDIOSOURCEBUFFER const *, unsigned char)
//{
//    mangled_ppc("?SubmitSourceBuffer@CPCMSourceEffect@XAUDIO@@UAAJPBUXAUDIOSOURCEBUFFER@@E@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::FlushPackets(void)
//{
//    mangled_ppc("?FlushPackets@CPCMSourceEffect@XAUDIO@@UAAJXZ");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::FlushSourceBuffers(void)
//{
//    mangled_ppc("?FlushSourceBuffers@CPCMSourceEffect@XAUDIO@@UAAJXZ");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::GetState(unsigned char *)
//{
//    mangled_ppc("?GetState@CPCMSourceEffect@XAUDIO@@UAAJPAE@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::GetVolume(float *)
//{
//    mangled_ppc("?GetVolume@CPCMSourceEffect@XAUDIO@@UAAJPAM@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::GetPitch(float *)
//{
//    mangled_ppc("?GetPitch@CPCMSourceEffect@XAUDIO@@UAAJPAM@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::GetFrequencyScale(float *)
//{
//    mangled_ppc("?GetFrequencyScale@CPCMSourceEffect@XAUDIO@@UAAJPAM@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::GetPacketPosition(union XAUDIOPACKETPOSITION *)
//{
//    mangled_ppc("?GetPacketPosition@CPCMSourceEffect@XAUDIO@@UAAJPATXAUDIOPACKETPOSITION@@@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::GetStreamPosition(unsigned long *)
//{
//    mangled_ppc("?GetStreamPosition@CPCMSourceEffect@XAUDIO@@UAAJPAK@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::GetPacketLoopCount(unsigned long *)
//{
//    mangled_ppc("?GetPacketLoopCount@CPCMSourceEffect@XAUDIO@@UAAJPAK@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::SetPacketLoopCount(unsigned long)
//{
//    mangled_ppc("?SetPacketLoopCount@CPCMSourceEffect@XAUDIO@@UAAJK@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::GetPacketContext(void **)
//{
//    mangled_ppc("?GetPacketContext@CPCMSourceEffect@XAUDIO@@UAAJPAPAX@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::GetFormat(struct XAUDIOSOURCEFORMAT *, unsigned char *)
//{
//    mangled_ppc("?GetFormat@CPCMSourceEffect@XAUDIO@@UAAJPAUXAUDIOSOURCEFORMAT@@PAE@Z");
//};

//public: virtual void XAUDIO::CPCMSourceEffect::QueryInterface(struct IXAudioEffect **)
//{
//    mangled_ppc("?QueryInterface@CPCMSourceEffect@XAUDIO@@UAAXPAPAUIXAudioEffect@@@Z");
//};

//public: virtual void XAUDIO::CPCMSourceEffect::QueryInterface(struct IXAudioSourceEffect **)
//{
//    mangled_ppc("?QueryInterface@CPCMSourceEffect@XAUDIO@@UAAXPAPAUIXAudioSourceEffect@@@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *)
//{
//    mangled_ppc("?GetParam@CPCMSourceEffect@XAUDIO@@UAAJEEPATXAUDIOFXPARAM@@@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *)
//{
//    mangled_ppc("?SetParam@CPCMSourceEffect@XAUDIO@@UAAJEEPBTXAUDIOFXPARAM@@@Z");
//};

//public: static int XAUDIO::CPCMSourceEffect::IsValidFormat(struct XAUDIOSOURCEFORMAT const *)
//{
//    mangled_ppc("?IsValidFormat@CPCMSourceEffect@XAUDIO@@SAHPBUXAUDIOSOURCEFORMAT@@@Z");
//};

//merged_8488DCD0
//{
//    mangled_ppc("merged_8488DCD0");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::SetVolume(float)
//{
//    mangled_ppc("?SetVolume@CPCMSourceEffect@XAUDIO@@UAAJM@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::SetPitch(float)
//{
//    mangled_ppc("?SetPitch@CPCMSourceEffect@XAUDIO@@UAAJM@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::SetFrequencyScale(float)
//{
//    mangled_ppc("?SetFrequencyScale@CPCMSourceEffect@XAUDIO@@UAAJM@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetVolume(float *)
//{
//    mangled_ppc("?GetVolume@CPCMSourceEffect@XAUDIO@@WBA@AAJPAM@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetPitch(float *)
//{
//    mangled_ppc("?GetPitch@CPCMSourceEffect@XAUDIO@@WBA@AAJPAM@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetFrequencyScale(float *)
//{
//    mangled_ppc("?GetFrequencyScale@CPCMSourceEffect@XAUDIO@@WBA@AAJPAM@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SetVolume(float)
//{
//    mangled_ppc("?SetVolume@CPCMSourceEffect@XAUDIO@@WBA@AAJM@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetPacketContext(void **)
//{
//    mangled_ppc("?GetPacketContext@CPCMSourceEffect@XAUDIO@@WBA@AAJPAPAX@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SetPacketLoopCount(unsigned long)
//{
//    mangled_ppc("?SetPacketLoopCount@CPCMSourceEffect@XAUDIO@@WBA@AAJK@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetFormat(struct XAUDIOSOURCEFORMAT *, unsigned char *)
//{
//    mangled_ppc("?GetFormat@CPCMSourceEffect@XAUDIO@@WBA@AAJPAUXAUDIOSOURCEFORMAT@@PAE@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::FlushSourceBuffers(void)
//{
//    mangled_ppc("?FlushSourceBuffers@CPCMSourceEffect@XAUDIO@@WBA@AAJXZ");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetState(unsigned char *)
//{
//    mangled_ppc("?GetState@CPCMSourceEffect@XAUDIO@@WBA@AAJPAE@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *)
//{
//    mangled_ppc("?GetParam@CPCMSourceEffect@XAUDIO@@W3AAJEEPATXAUDIOFXPARAM@@@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::FlushPackets(void)
//{
//    mangled_ppc("?FlushPackets@CPCMSourceEffect@XAUDIO@@WBA@AAJXZ");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SetPitch(float)
//{
//    mangled_ppc("?SetPitch@CPCMSourceEffect@XAUDIO@@WBA@AAJM@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SetFrequencyScale(float)
//{
//    mangled_ppc("?SetFrequencyScale@CPCMSourceEffect@XAUDIO@@WBA@AAJM@Z");
//};

//[thunk]: public: virtual unsigned long XAUDIO::CPCMSourceEffect::Release(void)
//{
//    mangled_ppc("?Release@CPCMSourceEffect@XAUDIO@@W3AAKXZ");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SubmitSourceBuffer(struct XAUDIOSOURCEBUFFER const *, unsigned char)
//{
//    mangled_ppc("?SubmitSourceBuffer@CPCMSourceEffect@XAUDIO@@WBA@AAJPBUXAUDIOSOURCEBUFFER@@E@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetInfo(struct XAUDIOFXINFO *)
//{
//    mangled_ppc("?GetInfo@CPCMSourceEffect@XAUDIO@@W3AAJPAUXAUDIOFXINFO@@@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetContext(void **)
//{
//    mangled_ppc("?GetContext@CPCMSourceEffect@XAUDIO@@W3AAJPAPAX@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *)
//{
//    mangled_ppc("?SetParam@CPCMSourceEffect@XAUDIO@@W3AAJEEPBTXAUDIOFXPARAM@@@Z");
//};

//[thunk]: public: virtual unsigned long XAUDIO::CPCMSourceEffect::AddRef(void)
//{
//    mangled_ppc("?AddRef@CPCMSourceEffect@XAUDIO@@W3AAKXZ");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SubmitPacket(struct XAUDIOPACKET const *, unsigned char)
//{
//    mangled_ppc("?SubmitPacket@CPCMSourceEffect@XAUDIO@@WBA@AAJPBUXAUDIOPACKET@@E@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::GetPacketLoopCount(unsigned long *)
//{
//    mangled_ppc("?GetPacketLoopCount@CPCMSourceEffect@XAUDIO@@WBA@AAJPAK@Z");
//};

//public: static unsigned int XAUDIO::CPCMSourceEffect::GetObjectSize(struct XAUDIOSOURCEFXINIT const *)
//{
//    mangled_ppc("?GetObjectSize@CPCMSourceEffect@XAUDIO@@SAIPBUXAUDIOSOURCEFXINIT@@@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::SetPacketPosition(union XAUDIOPACKETPOSITION const *)
//{
//    mangled_ppc("?SetPacketPosition@CPCMSourceEffect@XAUDIO@@UAAJPBTXAUDIOPACKETPOSITION@@@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::Start(void)
//{
//    mangled_ppc("?Start@CPCMSourceEffect@XAUDIO@@UAAJXZ");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::Stop(unsigned char)
//{
//    mangled_ppc("?Stop@CPCMSourceEffect@XAUDIO@@UAAJE@Z");
//};

//XAudioQueryPCMSourceEffectSize
//{
//    mangled_ppc("XAudioQueryPCMSourceEffectSize");
//};

//protected: long XAUDIO::CPCMSourceEffect::PreProcess(struct IXAudioFrameBuffer *)
//{
//    mangled_ppc("?PreProcess@CPCMSourceEffect@XAUDIO@@IAAJPAUIXAudioFrameBuffer@@@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::Start(void)
//{
//    mangled_ppc("?Start@CPCMSourceEffect@XAUDIO@@WBA@AAJXZ");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::Stop(unsigned char)
//{
//    mangled_ppc("?Stop@CPCMSourceEffect@XAUDIO@@WBA@AAJE@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::Discontinuity(void)
//{
//    mangled_ppc("?Discontinuity@CPCMSourceEffect@XAUDIO@@UAAJXZ");
//};

//protected: void XAUDIO::CPCMSourceEffect::SetDataAlignment(void)
//{
//    mangled_ppc("?SetDataAlignment@CPCMSourceEffect@XAUDIO@@IAAXXZ");
//};

//public: XAUDIO::CPCMSourceEffect::CPCMSourceEffect(struct XAUDIOSOURCEFXINIT const *, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??0CPCMSourceEffect@XAUDIO@@QAA@PBUXAUDIOSOURCEFXINIT@@PAUIXAudioBatchAllocator@@@Z");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::SetFormat(struct XAUDIOSOURCEFORMAT const *, unsigned char)
//{
//    mangled_ppc("?SetFormat@CPCMSourceEffect@XAUDIO@@UAAJPBUXAUDIOSOURCEFORMAT@@E@Z");
//};

//protected: void XAUDIO::CPCMSourceEffect::PostProcess(void)
//{
//    mangled_ppc("?PostProcess@CPCMSourceEffect@XAUDIO@@IAAXXZ");
//};

//protected: struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CPCMSourceEffect::GetNextProcessPacket(struct XAUDIO::XAUDIOPACKETCTX *)
//{
//    mangled_ppc("?GetNextProcessPacket@CPCMSourceEffect@XAUDIO@@IAAPAUXAUDIOPACKETCTX@2@PAU32@@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::SetFormat(struct XAUDIOSOURCEFORMAT const *, unsigned char)
//{
//    mangled_ppc("?SetFormat@CPCMSourceEffect@XAUDIO@@WBA@AAJPBUXAUDIOSOURCEFORMAT@@E@Z");
//};

//[thunk]: public: virtual long XAUDIO::CPCMSourceEffect::Discontinuity(void)
//{
//    mangled_ppc("?Discontinuity@CPCMSourceEffect@XAUDIO@@WBA@AAJXZ");
//};

//XAudioCreatePCMSourceEffect
//{
//    mangled_ppc("XAudioCreatePCMSourceEffect");
//};

//public: virtual long XAUDIO::CPCMSourceEffect::Process(struct IXAudioFrameBuffer *, struct IXAudioFrameBuffer *)
//{
//    mangled_ppc("?Process@CPCMSourceEffect@XAUDIO@@UAAJPAUIXAudioFrameBuffer@@0@Z");
//};

