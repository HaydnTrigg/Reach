/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// XAudioInitializeInternal;
// public: long IXAudioEffectManager::RegisterEffects(struct XAUDIOFXREGISTER const *);
// public: long IXAudioEffectManager::UnregisterEffects(struct XAUDIOFXUNREGISTER const *);
// long XAudioCallNextClientInitializer(void **, void **, struct XAUDIOENGINEINIT const *, struct IXAudioBatchAllocator *);
// public: void XAUDIO::CCriticalSection::Enter(void);
// public: void XAUDIO::CCriticalSection::Leave(void);
// public: void XAUDIO::CCriticalSection::Lock(void);
// public: void XAUDIO::CCriticalSection::Unlock(void);
// public: static class XAUDIO::CVoice * XAUDIO::CVoice::Typecast(struct IXAudioVoice *);
// public: long XAUDIO::CSourceVoice::GetVoiceFormat(struct XAUDIOSOURCEFORMAT *);
// public: long XAUDIO::CSourceVoice::FlushSourceBuffers(void);
// public: long XAUDIO::CSourceVoice::GetVolume(float *);
// public: long XAUDIO::CSourceVoice::SetVolume(float);
// public: static struct IXAudioSourceVoice * XAUDIO::CSourceVoice::Typecast(class XAUDIO::CSourceVoice *);
// public: static class XAUDIO::CSourceVoice * XAUDIO::CSourceVoice::Typecast(struct IXAudioSourceVoice *);
// public: static struct IXAudioSubmixVoice * XAUDIO::CSubmixVoice::Typecast(class XAUDIO::CSubmixVoice *);
// public: static class XAUDIO::CSubmixVoice * XAUDIO::CSubmixVoice::Typecast(struct IXAudioSubmixVoice *);
// public: static struct IXAudioMasteringVoice * XAUDIO::CMasteringVoice::Typecast(class XAUDIO::CMasteringVoice *);
// public: static class XAUDIO::CMasteringVoice * XAUDIO::CMasteringVoice::Typecast(struct IXAudioMasteringVoice *);
// public: struct IXAudioEffectManager * XAUDIO::CEngine::GetEffectManager(void);
// public: class XAUDIO::CMasteringVoice * XAUDIO::CEngine::GetMasteringVoice(void);
// public: struct IXAudioSourceEffect * XAUDIO::XAUDIOVOICEFXCTX::CallEffect<struct IXAudioSourceEffect>(void);
// public: XAUDIO::CAutoLock<class XAUDIO::CCriticalSection>::CAutoLock<class XAUDIO::CCriticalSection>(class XAUDIO::CCriticalSection *);
// public: XAUDIO::CAutoLock<class XAUDIO::CCriticalSection>::~CAutoLock<class XAUDIO::CCriticalSection>(void);
// public: long XAUDIO::CSourceVoice::SubmitPacket(struct XAUDIOPACKET const *, unsigned char);
// public: long XAUDIO::CSourceVoice::SubmitSourceBuffer(struct XAUDIOSOURCEBUFFER const *, unsigned char);
// public: long XAUDIO::CSourceVoice::GetPacketPosition(union XAUDIOPACKETPOSITION *);
// public: long XAUDIO::CSourceVoice::SetPacketPosition(union XAUDIOPACKETPOSITION const *);
// public: long XAUDIO::CSourceVoice::GetPacketLoopCount(unsigned long *);
// public: long XAUDIO::CSourceVoice::SetPacketLoopCount(unsigned long);
// public: long XAUDIO::CSourceVoice::GetPacketContext(void **);
// public: long XAUDIO::CSourceVoice::GetStreamPosition(unsigned long *);
// public: long XAUDIO::CSourceVoice::Discontinuity(void);
// public: long XAUDIO::CSourceVoice::GetPitch(float *);
// public: long XAUDIO::CSourceVoice::SetPitch(float);
// public: long XAUDIO::CSourceVoice::GetFrequencyScale(float *);
// public: long XAUDIO::CSourceVoice::SetFrequencyScale(float);
// XAudioVoice_AddRef;
// XAudioVoice_Release;
// XAudioVoice_GetEffectState;
// XAudioVoice_SetEffectState;
// XAudioVoice_GetEffectParam;
// XAudioVoice_SetEffectParam;
// XAudioVoice_SetVoiceOutput;
// XAudioVoice_SetVoiceOutputVolume;
// XAudioVoice_GetVoiceContext;
// XAudioVoice_GetVoiceState;
// XAudioVoice_GetVoiceType;
// XAudioSourceVoice_GetVoiceFormat;
// XAudioSourceVoice_SetVoiceFormat;
// XAudioSourceVoice_SubmitPacket;
// XAudioSourceVoice_FlushPackets;
// XAudioSourceVoice_SubmitSourceBuffer;
// XAudioSourceVoice_FlushSourceBuffers;
// XAudioSourceVoice_Start;
// XAudioSourceVoice_Stop;
// XAudioSourceVoice_Discontinuity;
// XAudioSourceVoice_GetPacketPosition;
// XAudioSourceVoice_SetPacketPosition;
// XAudioSourceVoice_GetPacketLoopCount;
// XAudioSourceVoice_SetPacketLoopCount;
// XAudioSourceVoice_GetPacketContext;
// XAudioSourceVoice_GetStreamPosition;
// XAudioSourceVoice_GetVolume;
// XAudioSourceVoice_SetVolume;
// XAudioSourceVoice_GetPitch;
// XAudioSourceVoice_SetPitch;
// XAudioSourceVoice_GetFrequencyScale;
// XAudioSourceVoice_SetFrequencyScale;
// XAudioSubmixVoice_GetVoiceFormat;
// XAudioSubmixVoice_SetVoiceFormat;
// XAudioMasteringVoice_GetVoiceFormat;
// XAudioInitializeEx;
// XAudioShutDown;
// XAudioGetMasteringVoice;
// XAudioDumpMemoryUsage;
// XAudioRegisterEngineCallback;
// XAudioUnregisterEngineCallback;
// XAudioRegisterEffects;
// XAudioUnregisterEffects;
// XAudioCreateSourceVoiceEx;
// XAudioCreateSubmixVoiceEx;
// XAudioSynchStart;
// XAudioQueryPIXCounters;
// XAudioInitialize;
// XAudioCreateSourceVoice;
// XAudioCreateSubmixVoice;

//XAudioInitializeInternal
//{
//    mangled_ppc("XAudioInitializeInternal");
//};

//public: long IXAudioEffectManager::RegisterEffects(struct XAUDIOFXREGISTER const *)
//{
//    mangled_ppc("?RegisterEffects@IXAudioEffectManager@@QAAJPBUXAUDIOFXREGISTER@@@Z");
//};

//public: long IXAudioEffectManager::UnregisterEffects(struct XAUDIOFXUNREGISTER const *)
//{
//    mangled_ppc("?UnregisterEffects@IXAudioEffectManager@@QAAJPBUXAUDIOFXUNREGISTER@@@Z");
//};

//long XAudioCallNextClientInitializer(void **, void **, struct XAUDIOENGINEINIT const *, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("?XAudioCallNextClientInitializer@@YAJPAPAX0PBUXAUDIOENGINEINIT@@PAUIXAudioBatchAllocator@@@Z");
//};

//public: void XAUDIO::CCriticalSection::Enter(void)
//{
//    mangled_ppc("?Enter@CCriticalSection@XAUDIO@@QAAXXZ");
//};

//public: void XAUDIO::CCriticalSection::Leave(void)
//{
//    mangled_ppc("?Leave@CCriticalSection@XAUDIO@@QAAXXZ");
//};

//public: void XAUDIO::CCriticalSection::Lock(void)
//{
//    mangled_ppc("?Lock@CCriticalSection@XAUDIO@@QAAXXZ");
//};

//public: void XAUDIO::CCriticalSection::Unlock(void)
//{
//    mangled_ppc("?Unlock@CCriticalSection@XAUDIO@@QAAXXZ");
//};

//public: static class XAUDIO::CVoice * XAUDIO::CVoice::Typecast(struct IXAudioVoice *)
//{
//    mangled_ppc("?Typecast@CVoice@XAUDIO@@SAPAV12@PAUIXAudioVoice@@@Z");
//};

//public: long XAUDIO::CSourceVoice::GetVoiceFormat(struct XAUDIOSOURCEFORMAT *)
//{
//    mangled_ppc("?GetVoiceFormat@CSourceVoice@XAUDIO@@QAAJPAUXAUDIOSOURCEFORMAT@@@Z");
//};

//public: long XAUDIO::CSourceVoice::FlushSourceBuffers(void)
//{
//    mangled_ppc("?FlushSourceBuffers@CSourceVoice@XAUDIO@@QAAJXZ");
//};

//public: long XAUDIO::CSourceVoice::GetVolume(float *)
//{
//    mangled_ppc("?GetVolume@CSourceVoice@XAUDIO@@QAAJPAM@Z");
//};

//public: long XAUDIO::CSourceVoice::SetVolume(float)
//{
//    mangled_ppc("?SetVolume@CSourceVoice@XAUDIO@@QAAJM@Z");
//};

//public: static struct IXAudioSourceVoice * XAUDIO::CSourceVoice::Typecast(class XAUDIO::CSourceVoice *)
//{
//    mangled_ppc("?Typecast@CSourceVoice@XAUDIO@@SAPAUIXAudioSourceVoice@@PAV12@@Z");
//};

//public: static class XAUDIO::CSourceVoice * XAUDIO::CSourceVoice::Typecast(struct IXAudioSourceVoice *)
//{
//    mangled_ppc("?Typecast@CSourceVoice@XAUDIO@@SAPAV12@PAUIXAudioSourceVoice@@@Z");
//};

//public: static struct IXAudioSubmixVoice * XAUDIO::CSubmixVoice::Typecast(class XAUDIO::CSubmixVoice *)
//{
//    mangled_ppc("?Typecast@CSubmixVoice@XAUDIO@@SAPAUIXAudioSubmixVoice@@PAV12@@Z");
//};

//public: static class XAUDIO::CSubmixVoice * XAUDIO::CSubmixVoice::Typecast(struct IXAudioSubmixVoice *)
//{
//    mangled_ppc("?Typecast@CSubmixVoice@XAUDIO@@SAPAV12@PAUIXAudioSubmixVoice@@@Z");
//};

//public: static struct IXAudioMasteringVoice * XAUDIO::CMasteringVoice::Typecast(class XAUDIO::CMasteringVoice *)
//{
//    mangled_ppc("?Typecast@CMasteringVoice@XAUDIO@@SAPAUIXAudioMasteringVoice@@PAV12@@Z");
//};

//public: static class XAUDIO::CMasteringVoice * XAUDIO::CMasteringVoice::Typecast(struct IXAudioMasteringVoice *)
//{
//    mangled_ppc("?Typecast@CMasteringVoice@XAUDIO@@SAPAV12@PAUIXAudioMasteringVoice@@@Z");
//};

//public: struct IXAudioEffectManager * XAUDIO::CEngine::GetEffectManager(void)
//{
//    mangled_ppc("?GetEffectManager@CEngine@XAUDIO@@QAAPAUIXAudioEffectManager@@XZ");
//};

//public: class XAUDIO::CMasteringVoice * XAUDIO::CEngine::GetMasteringVoice(void)
//{
//    mangled_ppc("?GetMasteringVoice@CEngine@XAUDIO@@QAAPAVCMasteringVoice@2@XZ");
//};

//public: struct IXAudioSourceEffect * XAUDIO::XAUDIOVOICEFXCTX::CallEffect<struct IXAudioSourceEffect>(void)
//{
//    mangled_ppc("??$CallEffect@UIXAudioSourceEffect@@@XAUDIOVOICEFXCTX@XAUDIO@@QAAPAUIXAudioSourceEffect@@XZ");
//};

//public: XAUDIO::CAutoLock<class XAUDIO::CCriticalSection>::CAutoLock<class XAUDIO::CCriticalSection>(class XAUDIO::CCriticalSection *)
//{
//    mangled_ppc("??0?$CAutoLock@VCCriticalSection@XAUDIO@@@XAUDIO@@QAA@PAVCCriticalSection@1@@Z");
//};

//public: XAUDIO::CAutoLock<class XAUDIO::CCriticalSection>::~CAutoLock<class XAUDIO::CCriticalSection>(void)
//{
//    mangled_ppc("??1?$CAutoLock@VCCriticalSection@XAUDIO@@@XAUDIO@@QAA@XZ");
//};

//public: long XAUDIO::CSourceVoice::SubmitPacket(struct XAUDIOPACKET const *, unsigned char)
//{
//    mangled_ppc("?SubmitPacket@CSourceVoice@XAUDIO@@QAAJPBUXAUDIOPACKET@@E@Z");
//};

//public: long XAUDIO::CSourceVoice::SubmitSourceBuffer(struct XAUDIOSOURCEBUFFER const *, unsigned char)
//{
//    mangled_ppc("?SubmitSourceBuffer@CSourceVoice@XAUDIO@@QAAJPBUXAUDIOSOURCEBUFFER@@E@Z");
//};

//public: long XAUDIO::CSourceVoice::GetPacketPosition(union XAUDIOPACKETPOSITION *)
//{
//    mangled_ppc("?GetPacketPosition@CSourceVoice@XAUDIO@@QAAJPATXAUDIOPACKETPOSITION@@@Z");
//};

//public: long XAUDIO::CSourceVoice::SetPacketPosition(union XAUDIOPACKETPOSITION const *)
//{
//    mangled_ppc("?SetPacketPosition@CSourceVoice@XAUDIO@@QAAJPBTXAUDIOPACKETPOSITION@@@Z");
//};

//public: long XAUDIO::CSourceVoice::GetPacketLoopCount(unsigned long *)
//{
//    mangled_ppc("?GetPacketLoopCount@CSourceVoice@XAUDIO@@QAAJPAK@Z");
//};

//public: long XAUDIO::CSourceVoice::SetPacketLoopCount(unsigned long)
//{
//    mangled_ppc("?SetPacketLoopCount@CSourceVoice@XAUDIO@@QAAJK@Z");
//};

//public: long XAUDIO::CSourceVoice::GetPacketContext(void **)
//{
//    mangled_ppc("?GetPacketContext@CSourceVoice@XAUDIO@@QAAJPAPAX@Z");
//};

//public: long XAUDIO::CSourceVoice::GetStreamPosition(unsigned long *)
//{
//    mangled_ppc("?GetStreamPosition@CSourceVoice@XAUDIO@@QAAJPAK@Z");
//};

//public: long XAUDIO::CSourceVoice::Discontinuity(void)
//{
//    mangled_ppc("?Discontinuity@CSourceVoice@XAUDIO@@QAAJXZ");
//};

//public: long XAUDIO::CSourceVoice::GetPitch(float *)
//{
//    mangled_ppc("?GetPitch@CSourceVoice@XAUDIO@@QAAJPAM@Z");
//};

//public: long XAUDIO::CSourceVoice::SetPitch(float)
//{
//    mangled_ppc("?SetPitch@CSourceVoice@XAUDIO@@QAAJM@Z");
//};

//public: long XAUDIO::CSourceVoice::GetFrequencyScale(float *)
//{
//    mangled_ppc("?GetFrequencyScale@CSourceVoice@XAUDIO@@QAAJPAM@Z");
//};

//public: long XAUDIO::CSourceVoice::SetFrequencyScale(float)
//{
//    mangled_ppc("?SetFrequencyScale@CSourceVoice@XAUDIO@@QAAJM@Z");
//};

//XAudioVoice_AddRef
//{
//    mangled_ppc("XAudioVoice_AddRef");
//};

//XAudioVoice_Release
//{
//    mangled_ppc("XAudioVoice_Release");
//};

//XAudioVoice_GetEffectState
//{
//    mangled_ppc("XAudioVoice_GetEffectState");
//};

//XAudioVoice_SetEffectState
//{
//    mangled_ppc("XAudioVoice_SetEffectState");
//};

//XAudioVoice_GetEffectParam
//{
//    mangled_ppc("XAudioVoice_GetEffectParam");
//};

//XAudioVoice_SetEffectParam
//{
//    mangled_ppc("XAudioVoice_SetEffectParam");
//};

//XAudioVoice_SetVoiceOutput
//{
//    mangled_ppc("XAudioVoice_SetVoiceOutput");
//};

//XAudioVoice_SetVoiceOutputVolume
//{
//    mangled_ppc("XAudioVoice_SetVoiceOutputVolume");
//};

//XAudioVoice_GetVoiceContext
//{
//    mangled_ppc("XAudioVoice_GetVoiceContext");
//};

//XAudioVoice_GetVoiceState
//{
//    mangled_ppc("XAudioVoice_GetVoiceState");
//};

//XAudioVoice_GetVoiceType
//{
//    mangled_ppc("XAudioVoice_GetVoiceType");
//};

//XAudioSourceVoice_GetVoiceFormat
//{
//    mangled_ppc("XAudioSourceVoice_GetVoiceFormat");
//};

//XAudioSourceVoice_SetVoiceFormat
//{
//    mangled_ppc("XAudioSourceVoice_SetVoiceFormat");
//};

//XAudioSourceVoice_SubmitPacket
//{
//    mangled_ppc("XAudioSourceVoice_SubmitPacket");
//};

//XAudioSourceVoice_FlushPackets
//{
//    mangled_ppc("XAudioSourceVoice_FlushPackets");
//};

//XAudioSourceVoice_SubmitSourceBuffer
//{
//    mangled_ppc("XAudioSourceVoice_SubmitSourceBuffer");
//};

//XAudioSourceVoice_FlushSourceBuffers
//{
//    mangled_ppc("XAudioSourceVoice_FlushSourceBuffers");
//};

//XAudioSourceVoice_Start
//{
//    mangled_ppc("XAudioSourceVoice_Start");
//};

//XAudioSourceVoice_Stop
//{
//    mangled_ppc("XAudioSourceVoice_Stop");
//};

//XAudioSourceVoice_Discontinuity
//{
//    mangled_ppc("XAudioSourceVoice_Discontinuity");
//};

//XAudioSourceVoice_GetPacketPosition
//{
//    mangled_ppc("XAudioSourceVoice_GetPacketPosition");
//};

//XAudioSourceVoice_SetPacketPosition
//{
//    mangled_ppc("XAudioSourceVoice_SetPacketPosition");
//};

//XAudioSourceVoice_GetPacketLoopCount
//{
//    mangled_ppc("XAudioSourceVoice_GetPacketLoopCount");
//};

//XAudioSourceVoice_SetPacketLoopCount
//{
//    mangled_ppc("XAudioSourceVoice_SetPacketLoopCount");
//};

//XAudioSourceVoice_GetPacketContext
//{
//    mangled_ppc("XAudioSourceVoice_GetPacketContext");
//};

//XAudioSourceVoice_GetStreamPosition
//{
//    mangled_ppc("XAudioSourceVoice_GetStreamPosition");
//};

//XAudioSourceVoice_GetVolume
//{
//    mangled_ppc("XAudioSourceVoice_GetVolume");
//};

//XAudioSourceVoice_SetVolume
//{
//    mangled_ppc("XAudioSourceVoice_SetVolume");
//};

//XAudioSourceVoice_GetPitch
//{
//    mangled_ppc("XAudioSourceVoice_GetPitch");
//};

//XAudioSourceVoice_SetPitch
//{
//    mangled_ppc("XAudioSourceVoice_SetPitch");
//};

//XAudioSourceVoice_GetFrequencyScale
//{
//    mangled_ppc("XAudioSourceVoice_GetFrequencyScale");
//};

//XAudioSourceVoice_SetFrequencyScale
//{
//    mangled_ppc("XAudioSourceVoice_SetFrequencyScale");
//};

//XAudioSubmixVoice_GetVoiceFormat
//{
//    mangled_ppc("XAudioSubmixVoice_GetVoiceFormat");
//};

//XAudioSubmixVoice_SetVoiceFormat
//{
//    mangled_ppc("XAudioSubmixVoice_SetVoiceFormat");
//};

//XAudioMasteringVoice_GetVoiceFormat
//{
//    mangled_ppc("XAudioMasteringVoice_GetVoiceFormat");
//};

//XAudioInitializeEx
//{
//    mangled_ppc("XAudioInitializeEx");
//};

//XAudioShutDown
//{
//    mangled_ppc("XAudioShutDown");
//};

//XAudioGetMasteringVoice
//{
//    mangled_ppc("XAudioGetMasteringVoice");
//};

//XAudioDumpMemoryUsage
//{
//    mangled_ppc("XAudioDumpMemoryUsage");
//};

//XAudioRegisterEngineCallback
//{
//    mangled_ppc("XAudioRegisterEngineCallback");
//};

//XAudioUnregisterEngineCallback
//{
//    mangled_ppc("XAudioUnregisterEngineCallback");
//};

//XAudioRegisterEffects
//{
//    mangled_ppc("XAudioRegisterEffects");
//};

//XAudioUnregisterEffects
//{
//    mangled_ppc("XAudioUnregisterEffects");
//};

//XAudioCreateSourceVoiceEx
//{
//    mangled_ppc("XAudioCreateSourceVoiceEx");
//};

//XAudioCreateSubmixVoiceEx
//{
//    mangled_ppc("XAudioCreateSubmixVoiceEx");
//};

//XAudioSynchStart
//{
//    mangled_ppc("XAudioSynchStart");
//};

//XAudioQueryPIXCounters
//{
//    mangled_ppc("XAudioQueryPIXCounters");
//};

//XAudioInitialize
//{
//    mangled_ppc("XAudioInitialize");
//};

//XAudioCreateSourceVoice
//{
//    mangled_ppc("XAudioCreateSourceVoice");
//};

//XAudioCreateSubmixVoice
//{
//    mangled_ppc("XAudioCreateSubmixVoice");
//};

