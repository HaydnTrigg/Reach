/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// protected: static void XAUDIO::CSourceVoice::ConvertInit(class XAUDIO::CSourceVoice *, struct XAUDIOSOURCEVOICEINIT const *, struct XAUDIOSOURCEFXINIT *);
// protected: static void XAUDIO::CSourceVoice::ConvertFormat(struct XAUDIOSOURCEFORMAT const *, union XAUDIOFORMAT *);
// public: long IXAudioEffectManager::QueryEffectSize(struct XAUDIOFXINIT const *, unsigned long *);
// void XAUDIO::__AssertValidListEntry(struct _LIST_ENTRY *, enum XAUDIO::ASSERT_VALID_LIST_ENTRY, char const *, unsigned int);
// public: static void * XAUDIO::CSourceVoice::operator new(unsigned int, struct IXAudioBatchAllocator *);
// public: struct IXAudioFrameBuffer * XAUDIO::CEngine::GetATypicalFrameBuffer(void);
// public: struct IXAudioFrameBuffer * XAUDIO::CEngine::GetNextFrameBuffer(struct IXAudioFrameBuffer *);
// protected: class XAUDIO::CEngine::CEngineVoiceList * XAUDIO::CEngine::GetVoiceList(class XAUDIO::CSourceVoice *);
// public: float XAUDIO::CEngine::GetVoiceCategoryVolume(unsigned char);
// public: int XAUDIO::CEngine::IsVoiceCategoryVolumeChanged(unsigned char);
// public: long XAUDIO::CSourceVoice::SetVoiceFormat(struct XAUDIOSOURCEFORMAT const *, struct XAUDIOVOICEOUTPUT const *, unsigned char);
// public: long XAUDIO::CSourceVoice::FlushPackets(void);
// public: virtual long XAUDIO::CSourceVoice::GetVoiceState(unsigned char *);
// public: virtual struct IXAudioFrameBuffer * XAUDIO::CSourceVoice::GetFrameBuffer(void);
// protected: virtual long XAUDIO::CSourceVoice::ProcessEffects(struct IXAudioFrameBuffer **);
// protected: virtual long XAUDIO::CSourceVoice::OnVolumeChange(void);
// protected: static void XAUDIO::CSourceVoice::ConvertInit(struct XAUDIOSOURCEVOICEINIT const *, struct XAUDIO::XAUDIOROUTEDVOICEINIT *);
// protected: void XAUDIO::CVoice::SetVoiceState(unsigned char, unsigned char);
// public: static long XAUDIO::CSourceVoice::GetObjectAdditionalSize(struct XAUDIOSOURCEVOICEINIT const *, unsigned long *);
// protected: long XAUDIO::CSourceVoice::Initialize(struct XAUDIOSOURCEVOICEINIT const *);
// public: static long XAUDIO::CSourceVoice::GetObjectSize(struct XAUDIOSOURCEVOICEINIT const *, unsigned long *);
// public: void XAUDIO::CEngine::DetachVoice(class XAUDIO::CSourceVoice *);
// public: void XAUDIO::CEngine::DetachSynchVoice(class XAUDIO::CSourceVoice *);
// public: virtual XAUDIO::CSourceVoice::~CSourceVoice(void);
// public: virtual long XAUDIO::CVoice::GetVoiceContext(void **);
// public: virtual long XAUDIO::CVoice::GetVoiceType(unsigned char *);
// public: virtual long XAUDIO::CVoice::GetVoiceFormat(union XAUDIOFORMAT *);
// public: static void XAUDIO::CSourceVoice::operator delete(void *);
// protected: virtual long XAUDIO::CSourceVoice::Start(void);
// protected: long XAUDIO::CSourceVoice::SynchStop(void);
// public: void XAUDIO::CEngine::AttachVoice(class XAUDIO::CSourceVoice *);
// public: void XAUDIO::CEngine::AttachSynchVoice(class XAUDIO::CSourceVoice *);
// public: XAUDIO::CSourceVoice::CSourceVoice(struct IXAudioBatchAllocator *, unsigned char);
// merged_8487DC90;
// protected: long XAUDIO::CSourceVoice::SynchStart(void);
// public: virtual long XAUDIO::CSourceVoice::Stop(unsigned char);
// public: static long XAUDIO::CSourceVoice::CreateObject(struct XAUDIOSOURCEVOICEINIT const *, struct IXAudioBatchAllocator *, class XAUDIO::CSourceVoice **);
// public: long XAUDIO::CSourceVoice::Start(unsigned char);

//protected: static void XAUDIO::CSourceVoice::ConvertInit(class XAUDIO::CSourceVoice *, struct XAUDIOSOURCEVOICEINIT const *, struct XAUDIOSOURCEFXINIT *)
//{
//    mangled_ppc("?ConvertInit@CSourceVoice@XAUDIO@@KAXPAV12@PBUXAUDIOSOURCEVOICEINIT@@PAUXAUDIOSOURCEFXINIT@@@Z");
//};

//protected: static void XAUDIO::CSourceVoice::ConvertFormat(struct XAUDIOSOURCEFORMAT const *, union XAUDIOFORMAT *)
//{
//    mangled_ppc("?ConvertFormat@CSourceVoice@XAUDIO@@KAXPBUXAUDIOSOURCEFORMAT@@PATXAUDIOFORMAT@@@Z");
//};

//public: long IXAudioEffectManager::QueryEffectSize(struct XAUDIOFXINIT const *, unsigned long *)
//{
//    mangled_ppc("?QueryEffectSize@IXAudioEffectManager@@QAAJPBUXAUDIOFXINIT@@PAK@Z");
//};

//void XAUDIO::__AssertValidListEntry(struct _LIST_ENTRY *, enum XAUDIO::ASSERT_VALID_LIST_ENTRY, char const *, unsigned int)
//{
//    mangled_ppc("?__AssertValidListEntry@XAUDIO@@YAXPAU_LIST_ENTRY@@W4ASSERT_VALID_LIST_ENTRY@1@PBDI@Z");
//};

//public: static void * XAUDIO::CSourceVoice::operator new(unsigned int, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??2CSourceVoice@XAUDIO@@SAPAXIPAUIXAudioBatchAllocator@@@Z");
//};

//public: struct IXAudioFrameBuffer * XAUDIO::CEngine::GetATypicalFrameBuffer(void)
//{
//    mangled_ppc("?GetATypicalFrameBuffer@CEngine@XAUDIO@@QAAPAUIXAudioFrameBuffer@@XZ");
//};

//public: struct IXAudioFrameBuffer * XAUDIO::CEngine::GetNextFrameBuffer(struct IXAudioFrameBuffer *)
//{
//    mangled_ppc("?GetNextFrameBuffer@CEngine@XAUDIO@@QAAPAUIXAudioFrameBuffer@@PAU3@@Z");
//};

//protected: class XAUDIO::CEngine::CEngineVoiceList * XAUDIO::CEngine::GetVoiceList(class XAUDIO::CSourceVoice *)
//{
//    mangled_ppc("?GetVoiceList@CEngine@XAUDIO@@IAAPAVCEngineVoiceList@12@PAVCSourceVoice@2@@Z");
//};

//public: float XAUDIO::CEngine::GetVoiceCategoryVolume(unsigned char)
//{
//    mangled_ppc("?GetVoiceCategoryVolume@CEngine@XAUDIO@@QAAME@Z");
//};

//public: int XAUDIO::CEngine::IsVoiceCategoryVolumeChanged(unsigned char)
//{
//    mangled_ppc("?IsVoiceCategoryVolumeChanged@CEngine@XAUDIO@@QAAHE@Z");
//};

//public: long XAUDIO::CSourceVoice::SetVoiceFormat(struct XAUDIOSOURCEFORMAT const *, struct XAUDIOVOICEOUTPUT const *, unsigned char)
//{
//    mangled_ppc("?SetVoiceFormat@CSourceVoice@XAUDIO@@QAAJPBUXAUDIOSOURCEFORMAT@@PBUXAUDIOVOICEOUTPUT@@E@Z");
//};

//public: long XAUDIO::CSourceVoice::FlushPackets(void)
//{
//    mangled_ppc("?FlushPackets@CSourceVoice@XAUDIO@@QAAJXZ");
//};

//public: virtual long XAUDIO::CSourceVoice::GetVoiceState(unsigned char *)
//{
//    mangled_ppc("?GetVoiceState@CSourceVoice@XAUDIO@@UAAJPAE@Z");
//};

//public: virtual struct IXAudioFrameBuffer * XAUDIO::CSourceVoice::GetFrameBuffer(void)
//{
//    mangled_ppc("?GetFrameBuffer@CSourceVoice@XAUDIO@@UAAPAUIXAudioFrameBuffer@@XZ");
//};

//protected: virtual long XAUDIO::CSourceVoice::ProcessEffects(struct IXAudioFrameBuffer **)
//{
//    mangled_ppc("?ProcessEffects@CSourceVoice@XAUDIO@@MAAJPAPAUIXAudioFrameBuffer@@@Z");
//};

//protected: virtual long XAUDIO::CSourceVoice::OnVolumeChange(void)
//{
//    mangled_ppc("?OnVolumeChange@CSourceVoice@XAUDIO@@MAAJXZ");
//};

//protected: static void XAUDIO::CSourceVoice::ConvertInit(struct XAUDIOSOURCEVOICEINIT const *, struct XAUDIO::XAUDIOROUTEDVOICEINIT *)
//{
//    mangled_ppc("?ConvertInit@CSourceVoice@XAUDIO@@KAXPBUXAUDIOSOURCEVOICEINIT@@PAUXAUDIOROUTEDVOICEINIT@2@@Z");
//};

//protected: void XAUDIO::CVoice::SetVoiceState(unsigned char, unsigned char)
//{
//    mangled_ppc("?SetVoiceState@CVoice@XAUDIO@@IAAXEE@Z");
//};

//public: static long XAUDIO::CSourceVoice::GetObjectAdditionalSize(struct XAUDIOSOURCEVOICEINIT const *, unsigned long *)
//{
//    mangled_ppc("?GetObjectAdditionalSize@CSourceVoice@XAUDIO@@SAJPBUXAUDIOSOURCEVOICEINIT@@PAK@Z");
//};

//protected: long XAUDIO::CSourceVoice::Initialize(struct XAUDIOSOURCEVOICEINIT const *)
//{
//    mangled_ppc("?Initialize@CSourceVoice@XAUDIO@@IAAJPBUXAUDIOSOURCEVOICEINIT@@@Z");
//};

//public: static long XAUDIO::CSourceVoice::GetObjectSize(struct XAUDIOSOURCEVOICEINIT const *, unsigned long *)
//{
//    mangled_ppc("?GetObjectSize@CSourceVoice@XAUDIO@@SAJPBUXAUDIOSOURCEVOICEINIT@@PAK@Z");
//};

//public: void XAUDIO::CEngine::DetachVoice(class XAUDIO::CSourceVoice *)
//{
//    mangled_ppc("?DetachVoice@CEngine@XAUDIO@@QAAXPAVCSourceVoice@2@@Z");
//};

//public: void XAUDIO::CEngine::DetachSynchVoice(class XAUDIO::CSourceVoice *)
//{
//    mangled_ppc("?DetachSynchVoice@CEngine@XAUDIO@@QAAXPAVCSourceVoice@2@@Z");
//};

//public: virtual XAUDIO::CSourceVoice::~CSourceVoice(void)
//{
//    mangled_ppc("??1CSourceVoice@XAUDIO@@UAA@XZ");
//};

//public: virtual long XAUDIO::CVoice::GetVoiceContext(void **)
//{
//    mangled_ppc("?GetVoiceContext@CVoice@XAUDIO@@UAAJPAPAX@Z");
//};

//public: virtual long XAUDIO::CVoice::GetVoiceType(unsigned char *)
//{
//    mangled_ppc("?GetVoiceType@CVoice@XAUDIO@@UAAJPAE@Z");
//};

//public: virtual long XAUDIO::CVoice::GetVoiceFormat(union XAUDIOFORMAT *)
//{
//    mangled_ppc("?GetVoiceFormat@CVoice@XAUDIO@@UAAJPATXAUDIOFORMAT@@@Z");
//};

//public: static void XAUDIO::CSourceVoice::operator delete(void *)
//{
//    mangled_ppc("??3CSourceVoice@XAUDIO@@SAXPAX@Z");
//};

//protected: virtual long XAUDIO::CSourceVoice::Start(void)
//{
//    mangled_ppc("?Start@CSourceVoice@XAUDIO@@MAAJXZ");
//};

//protected: long XAUDIO::CSourceVoice::SynchStop(void)
//{
//    mangled_ppc("?SynchStop@CSourceVoice@XAUDIO@@IAAJXZ");
//};

//public: void XAUDIO::CEngine::AttachVoice(class XAUDIO::CSourceVoice *)
//{
//    mangled_ppc("?AttachVoice@CEngine@XAUDIO@@QAAXPAVCSourceVoice@2@@Z");
//};

//public: void XAUDIO::CEngine::AttachSynchVoice(class XAUDIO::CSourceVoice *)
//{
//    mangled_ppc("?AttachSynchVoice@CEngine@XAUDIO@@QAAXPAVCSourceVoice@2@@Z");
//};

//public: XAUDIO::CSourceVoice::CSourceVoice(struct IXAudioBatchAllocator *, unsigned char)
//{
//    mangled_ppc("??0CSourceVoice@XAUDIO@@QAA@PAUIXAudioBatchAllocator@@E@Z");
//};

//merged_8487DC90
//{
//    mangled_ppc("merged_8487DC90");
//};

//protected: long XAUDIO::CSourceVoice::SynchStart(void)
//{
//    mangled_ppc("?SynchStart@CSourceVoice@XAUDIO@@IAAJXZ");
//};

//public: virtual long XAUDIO::CSourceVoice::Stop(unsigned char)
//{
//    mangled_ppc("?Stop@CSourceVoice@XAUDIO@@UAAJE@Z");
//};

//public: static long XAUDIO::CSourceVoice::CreateObject(struct XAUDIOSOURCEVOICEINIT const *, struct IXAudioBatchAllocator *, class XAUDIO::CSourceVoice **)
//{
//    mangled_ppc("?CreateObject@CSourceVoice@XAUDIO@@SAJPBUXAUDIOSOURCEVOICEINIT@@PAUIXAudioBatchAllocator@@PAPAV12@@Z");
//};

//public: long XAUDIO::CSourceVoice::Start(unsigned char)
//{
//    mangled_ppc("?Start@CSourceVoice@XAUDIO@@QAAJE@Z");
//};

