/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const XAUDIO::CSourceEffect::`vftable'{for `XAUDIO::CSourceStream'}; // "??_7CSourceEffect@XAUDIO@@6BCSourceStream@1@@"
// const XAUDIO::CSourceEffect::`vftable'{for `XAUDIO::CEffect'}; // "??_7CSourceEffect@XAUDIO@@6BCEffect@1@@"

// public: void XAUDIO::CSourceEffect::Initialize(struct XAUDIOSOURCEFXINIT const *, struct IXAudioBatchAllocator *);
// public: virtual long XAUDIO::CSourceEffect::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *);
// public: virtual long XAUDIO::CSourceEffect::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *);
// void operator delete(void *);
// protected: void XAUDIO::CSourceEffect::PacketCallback(void (*)(struct XAUDIOSOURCEFXPACKETCALLBACK const *), struct XAUDIO::XAUDIOPACKETCTX *, long);
// public: static int XAUDIO::CPCMSourceEffect::IsValidSampleType(unsigned int);
// public: static int XAUDIO::CXMASourceEffect::IsValidSampleType(unsigned int);
// XAudioQuerySourceEffectSize;
// XAudioCreateSourceEffect;
// public: XAUDIO::CSourceEffect::CSourceEffect(struct XAUDIOSOURCEFXINIT const *, struct IXAudioBatchAllocator *);
// [thunk]: public: virtual void * XAUDIO::CSourceEffect::`vector deleting destructor'(unsigned int);
// public: virtual long XAUDIO::CSourceStream::GetState(unsigned char *);
// public: virtual long XAUDIO::CSourceStream::FlushSourceBuffers(void);
// public: virtual long XAUDIO::CSourceStream::GetPacketLoopCount(unsigned long *);
// public: virtual long XAUDIO::CSourceStream::SetPacketLoopCount(unsigned long);
// public: virtual long XAUDIO::CSourceStream::GetPacketContext(void **);
// public: virtual long XAUDIO::CSourceStream::GetFormat(struct XAUDIOSOURCEFORMAT *, unsigned char *);
// public: virtual long XAUDIO::CSourceStream::GetVolume(float *);
// public: virtual long XAUDIO::CSourceStream::SetVolume(float);
// public: virtual long XAUDIO::CSourceStream::GetPitch(float *);
// public: virtual long XAUDIO::CSourceStream::SetPitch(float);
// public: virtual long XAUDIO::CSourceStream::GetFrequencyScale(float *);
// public: virtual long XAUDIO::CSourceStream::SetFrequencyScale(float);
// protected: void XAUDIO::CSourceStream::ResetVolumeFade(void);
// public: virtual long XAUDIO::CSourceEffect::GetInfo(struct XAUDIOFXINFO *);
// private: struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::ConvertEntry(struct _LIST_ENTRY *);
// private: struct _LIST_ENTRY * XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::ConvertEntry(struct XAUDIO::XAUDIOPACKETCTX *);
// public: virtual XAUDIO::CSourceEffect::~CSourceEffect(void);
// protected: virtual void XAUDIO::CSourceStream::SetState(unsigned char, unsigned char);
// public: virtual long XAUDIO::CSourceStream::Start(void);
// public: virtual long XAUDIO::CSourceStream::Stop(unsigned char);
// protected: void XAUDIO::CSourceEffect::PacketCompletionCallback(struct XAUDIO::XAUDIOPACKETCTX *, long);
// public: struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::GetNextEntry(struct XAUDIO::XAUDIOPACKETCTX *, int);
// merged_8486FAC0;
// protected: virtual struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CSourceEffect::CompletePacket(struct XAUDIO::XAUDIOPACKETCTX *, long);
// public: struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CPacketQueue::GetNextPendingPacket(struct XAUDIO::XAUDIOPACKETCTX *);
// protected: virtual long XAUDIO::CSourceStream::GetCurrentPacket(struct XAUDIO::XAUDIOPACKETCTX **);
// public: virtual long XAUDIO::CSourceStream::Discontinuity(void);

//public: void XAUDIO::CSourceEffect::Initialize(struct XAUDIOSOURCEFXINIT const *, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("?Initialize@CSourceEffect@XAUDIO@@QAAXPBUXAUDIOSOURCEFXINIT@@PAUIXAudioBatchAllocator@@@Z");
//};

//public: virtual long XAUDIO::CSourceEffect::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *)
//{
//    mangled_ppc("?GetParam@CSourceEffect@XAUDIO@@UAAJEEPATXAUDIOFXPARAM@@@Z");
//};

//public: virtual long XAUDIO::CSourceEffect::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *)
//{
//    mangled_ppc("?SetParam@CSourceEffect@XAUDIO@@UAAJEEPBTXAUDIOFXPARAM@@@Z");
//};

//void operator delete(void *)
//{
//    mangled_ppc("??3@YAXPAX@Z");
//};

//protected: void XAUDIO::CSourceEffect::PacketCallback(void (*)(struct XAUDIOSOURCEFXPACKETCALLBACK const *), struct XAUDIO::XAUDIOPACKETCTX *, long)
//{
//    mangled_ppc("?PacketCallback@CSourceEffect@XAUDIO@@IAAXP6AXPBUXAUDIOSOURCEFXPACKETCALLBACK@@@ZPAUXAUDIOPACKETCTX@2@J@Z");
//};

//public: static int XAUDIO::CPCMSourceEffect::IsValidSampleType(unsigned int)
//{
//    mangled_ppc("?IsValidSampleType@CPCMSourceEffect@XAUDIO@@SAHI@Z");
//};

//public: static int XAUDIO::CXMASourceEffect::IsValidSampleType(unsigned int)
//{
//    mangled_ppc("?IsValidSampleType@CXMASourceEffect@XAUDIO@@SAHI@Z");
//};

//XAudioQuerySourceEffectSize
//{
//    mangled_ppc("XAudioQuerySourceEffectSize");
//};

//XAudioCreateSourceEffect
//{
//    mangled_ppc("XAudioCreateSourceEffect");
//};

//public: XAUDIO::CSourceEffect::CSourceEffect(struct XAUDIOSOURCEFXINIT const *, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??0CSourceEffect@XAUDIO@@QAA@PBUXAUDIOSOURCEFXINIT@@PAUIXAudioBatchAllocator@@@Z");
//};

//[thunk]: public: virtual void * XAUDIO::CSourceEffect::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_ECSourceEffect@XAUDIO@@WM@AAPAXI@Z");
//};

//public: virtual long XAUDIO::CSourceStream::GetState(unsigned char *)
//{
//    mangled_ppc("?GetState@CSourceStream@XAUDIO@@UAAJPAE@Z");
//};

//public: virtual long XAUDIO::CSourceStream::FlushSourceBuffers(void)
//{
//    mangled_ppc("?FlushSourceBuffers@CSourceStream@XAUDIO@@UAAJXZ");
//};

//public: virtual long XAUDIO::CSourceStream::GetPacketLoopCount(unsigned long *)
//{
//    mangled_ppc("?GetPacketLoopCount@CSourceStream@XAUDIO@@UAAJPAK@Z");
//};

//public: virtual long XAUDIO::CSourceStream::SetPacketLoopCount(unsigned long)
//{
//    mangled_ppc("?SetPacketLoopCount@CSourceStream@XAUDIO@@UAAJK@Z");
//};

//public: virtual long XAUDIO::CSourceStream::GetPacketContext(void **)
//{
//    mangled_ppc("?GetPacketContext@CSourceStream@XAUDIO@@UAAJPAPAX@Z");
//};

//public: virtual long XAUDIO::CSourceStream::GetFormat(struct XAUDIOSOURCEFORMAT *, unsigned char *)
//{
//    mangled_ppc("?GetFormat@CSourceStream@XAUDIO@@UAAJPAUXAUDIOSOURCEFORMAT@@PAE@Z");
//};

//public: virtual long XAUDIO::CSourceStream::GetVolume(float *)
//{
//    mangled_ppc("?GetVolume@CSourceStream@XAUDIO@@UAAJPAM@Z");
//};

//public: virtual long XAUDIO::CSourceStream::SetVolume(float)
//{
//    mangled_ppc("?SetVolume@CSourceStream@XAUDIO@@UAAJM@Z");
//};

//public: virtual long XAUDIO::CSourceStream::GetPitch(float *)
//{
//    mangled_ppc("?GetPitch@CSourceStream@XAUDIO@@UAAJPAM@Z");
//};

//public: virtual long XAUDIO::CSourceStream::SetPitch(float)
//{
//    mangled_ppc("?SetPitch@CSourceStream@XAUDIO@@UAAJM@Z");
//};

//public: virtual long XAUDIO::CSourceStream::GetFrequencyScale(float *)
//{
//    mangled_ppc("?GetFrequencyScale@CSourceStream@XAUDIO@@UAAJPAM@Z");
//};

//public: virtual long XAUDIO::CSourceStream::SetFrequencyScale(float)
//{
//    mangled_ppc("?SetFrequencyScale@CSourceStream@XAUDIO@@UAAJM@Z");
//};

//protected: void XAUDIO::CSourceStream::ResetVolumeFade(void)
//{
//    mangled_ppc("?ResetVolumeFade@CSourceStream@XAUDIO@@IAAXXZ");
//};

//public: virtual long XAUDIO::CSourceEffect::GetInfo(struct XAUDIOFXINFO *)
//{
//    mangled_ppc("?GetInfo@CSourceEffect@XAUDIO@@UAAJPAUXAUDIOFXINFO@@@Z");
//};

//private: struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::ConvertEntry(struct _LIST_ENTRY *)
//{
//    mangled_ppc("?ConvertEntry@?$CEmbeddedList@UXAUDIOPACKETCTX@XAUDIO@@@XAUDIO@@AAAPAUXAUDIOPACKETCTX@2@PAU_LIST_ENTRY@@@Z");
//};

//private: struct _LIST_ENTRY * XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::ConvertEntry(struct XAUDIO::XAUDIOPACKETCTX *)
//{
//    mangled_ppc("?ConvertEntry@?$CEmbeddedList@UXAUDIOPACKETCTX@XAUDIO@@@XAUDIO@@AAAPAU_LIST_ENTRY@@PAUXAUDIOPACKETCTX@2@@Z");
//};

//public: virtual XAUDIO::CSourceEffect::~CSourceEffect(void)
//{
//    mangled_ppc("??1CSourceEffect@XAUDIO@@UAA@XZ");
//};

//protected: virtual void XAUDIO::CSourceStream::SetState(unsigned char, unsigned char)
//{
//    mangled_ppc("?SetState@CSourceStream@XAUDIO@@MAAXEE@Z");
//};

//public: virtual long XAUDIO::CSourceStream::Start(void)
//{
//    mangled_ppc("?Start@CSourceStream@XAUDIO@@UAAJXZ");
//};

//public: virtual long XAUDIO::CSourceStream::Stop(unsigned char)
//{
//    mangled_ppc("?Stop@CSourceStream@XAUDIO@@UAAJE@Z");
//};

//protected: void XAUDIO::CSourceEffect::PacketCompletionCallback(struct XAUDIO::XAUDIOPACKETCTX *, long)
//{
//    mangled_ppc("?PacketCompletionCallback@CSourceEffect@XAUDIO@@IAAXPAUXAUDIOPACKETCTX@2@J@Z");
//};

//public: struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CEmbeddedList<struct XAUDIO::XAUDIOPACKETCTX>::GetNextEntry(struct XAUDIO::XAUDIOPACKETCTX *, int)
//{
//    mangled_ppc("?GetNextEntry@?$CEmbeddedList@UXAUDIOPACKETCTX@XAUDIO@@@XAUDIO@@QAAPAUXAUDIOPACKETCTX@2@PAU32@H@Z");
//};

//merged_8486FAC0
//{
//    mangled_ppc("merged_8486FAC0");
//};

//protected: virtual struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CSourceEffect::CompletePacket(struct XAUDIO::XAUDIOPACKETCTX *, long)
//{
//    mangled_ppc("?CompletePacket@CSourceEffect@XAUDIO@@MAAPAUXAUDIOPACKETCTX@2@PAU32@J@Z");
//};

//public: struct XAUDIO::XAUDIOPACKETCTX * XAUDIO::CPacketQueue::GetNextPendingPacket(struct XAUDIO::XAUDIOPACKETCTX *)
//{
//    mangled_ppc("?GetNextPendingPacket@CPacketQueue@XAUDIO@@QAAPAUXAUDIOPACKETCTX@2@PAU32@@Z");
//};

//protected: virtual long XAUDIO::CSourceStream::GetCurrentPacket(struct XAUDIO::XAUDIOPACKETCTX **)
//{
//    mangled_ppc("?GetCurrentPacket@CSourceStream@XAUDIO@@MAAJPAPAUXAUDIOPACKETCTX@2@@Z");
//};

//public: virtual long XAUDIO::CSourceStream::Discontinuity(void)
//{
//    mangled_ppc("?Discontinuity@CSourceStream@XAUDIO@@UAAJXZ");
//};

