/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: CXaudioPixAutoEvent::CXaudioPixAutoEvent(enum _XAUDIOPIXEVENT);
// public: CXaudioPixAutoEvent::~CXaudioPixAutoEvent(void);
// public: virtual long XAUDIO::CVoice::Process(void);
// public: unsigned long IXAudioFrameBuffer::AddRef(void);
// public: long IXAudioFrameBuffer::GetMaxFormat(union XAUDIOFORMAT *);
// public: long IXAudioEffectManager::CreateEffect(struct XAUDIOFXINIT const *, struct IXAudioBatchAllocator *, struct IXAudioEffect **);
// void XAUDIO::__AssertValidListEntry(struct _LIST_ENTRY *, enum XAUDIO::ASSERT_VALID_LIST_ENTRY, char const *, unsigned int);
// public: XAUDIO::CSafeListEntry::~CSafeListEntry(void);
// public: void XAUDIO::CSafeListEntry::Initialize(void);
// public: XAUDIO::CSimpleRefCount::CSimpleRefCount(unsigned long);
// void operator delete(void *);
// protected: unsigned short XAUDIO::CVoice::GetTrailFrameCount(void);
// protected: long XAUDIO::CVoice::GetEffect(unsigned char, struct XAUDIO::XAUDIOVOICEFXCTX **);
// protected: static void XAUDIO::CVoice::ConvertInit(struct XAUDIO::XAUDIOVOICEINIT const *, struct XAUDIOFRAMEBUFINIT *);
// protected: static long XAUDIO::CVoice::GetObjectAdditionalSize(struct XAUDIO::XAUDIOVOICEINIT const *, unsigned long *);
// public: virtual XAUDIO::CVoice::~CVoice(void);
// protected: long XAUDIO::CVoice::CreateEffect(struct XAUDIO::XAUDIOVOICEFXCTX *, struct XAUDIOFXINIT const *, unsigned char);
// public: virtual long XAUDIO::CVoice::GetEffectParam(unsigned char, unsigned char, unsigned char, union XAUDIOFXPARAM *);
// public: virtual long XAUDIO::CVoice::SetEffectParam(unsigned char, unsigned char, unsigned char, union XAUDIOFXPARAM const *);
// public: virtual long XAUDIO::CVoice::GetEffectState(unsigned char, unsigned char *);
// public: virtual long XAUDIO::CVoice::SetEffectState(unsigned char, unsigned char);
// protected: void XAUDIO::CVoice::SetVoiceFormat(union XAUDIOFORMAT const *);
// protected: static long XAUDIO::CVoice::ValidateFormat(union XAUDIOFORMAT const *, struct IXAudioFrameBuffer *);
// public: XAUDIO::CSafeListEntry::CSafeListEntry(void);
// public: XAUDIO::CVoice::CVoice(struct IXAudioBatchAllocator *, unsigned char);
// merged_84894408;
// protected: long XAUDIO::CVoice::CreateUserEffects(struct XAUDIOVOICEFXCHAIN const *);
// protected: long XAUDIO::CVoice::ProcessEffect(struct XAUDIO::XAUDIOVOICEFXCTX *, struct IXAudioFrameBuffer **);
// public: virtual long XAUDIO::CVoice::Start(void);
// public: virtual long XAUDIO::CVoice::Stop(unsigned char);
// protected: long XAUDIO::CVoice::Initialize(struct XAUDIO::XAUDIOVOICEINIT const *);
// protected: virtual long XAUDIO::CVoice::ProcessEffects(struct IXAudioFrameBuffer **);

//public: CXaudioPixAutoEvent::CXaudioPixAutoEvent(enum _XAUDIOPIXEVENT)
//{
//    mangled_ppc("??0CXaudioPixAutoEvent@@QAA@W4_XAUDIOPIXEVENT@@@Z");
//};

//public: CXaudioPixAutoEvent::~CXaudioPixAutoEvent(void)
//{
//    mangled_ppc("??1CXaudioPixAutoEvent@@QAA@XZ");
//};

//public: virtual long XAUDIO::CVoice::Process(void)
//{
//    mangled_ppc("?Process@CVoice@XAUDIO@@UAAJXZ");
//};

//public: unsigned long IXAudioFrameBuffer::AddRef(void)
//{
//    mangled_ppc("?AddRef@IXAudioFrameBuffer@@QAAKXZ");
//};

//public: long IXAudioFrameBuffer::GetMaxFormat(union XAUDIOFORMAT *)
//{
//    mangled_ppc("?GetMaxFormat@IXAudioFrameBuffer@@QAAJPATXAUDIOFORMAT@@@Z");
//};

//public: long IXAudioEffectManager::CreateEffect(struct XAUDIOFXINIT const *, struct IXAudioBatchAllocator *, struct IXAudioEffect **)
//{
//    mangled_ppc("?CreateEffect@IXAudioEffectManager@@QAAJPBUXAUDIOFXINIT@@PAUIXAudioBatchAllocator@@PAPAUIXAudioEffect@@@Z");
//};

//void XAUDIO::__AssertValidListEntry(struct _LIST_ENTRY *, enum XAUDIO::ASSERT_VALID_LIST_ENTRY, char const *, unsigned int)
//{
//    mangled_ppc("?__AssertValidListEntry@XAUDIO@@YAXPAU_LIST_ENTRY@@W4ASSERT_VALID_LIST_ENTRY@1@PBDI@Z");
//};

//public: XAUDIO::CSafeListEntry::~CSafeListEntry(void)
//{
//    mangled_ppc("??1CSafeListEntry@XAUDIO@@QAA@XZ");
//};

//public: void XAUDIO::CSafeListEntry::Initialize(void)
//{
//    mangled_ppc("?Initialize@CSafeListEntry@XAUDIO@@QAAXXZ");
//};

//public: XAUDIO::CSimpleRefCount::CSimpleRefCount(unsigned long)
//{
//    mangled_ppc("??0CSimpleRefCount@XAUDIO@@QAA@K@Z");
//};

//void operator delete(void *)
//{
//    mangled_ppc("??3@YAXPAX@Z");
//};

//protected: unsigned short XAUDIO::CVoice::GetTrailFrameCount(void)
//{
//    mangled_ppc("?GetTrailFrameCount@CVoice@XAUDIO@@IAAGXZ");
//};

//protected: long XAUDIO::CVoice::GetEffect(unsigned char, struct XAUDIO::XAUDIOVOICEFXCTX **)
//{
//    mangled_ppc("?GetEffect@CVoice@XAUDIO@@IAAJEPAPAUXAUDIOVOICEFXCTX@2@@Z");
//};

//protected: static void XAUDIO::CVoice::ConvertInit(struct XAUDIO::XAUDIOVOICEINIT const *, struct XAUDIOFRAMEBUFINIT *)
//{
//    mangled_ppc("?ConvertInit@CVoice@XAUDIO@@KAXPBUXAUDIOVOICEINIT@2@PAUXAUDIOFRAMEBUFINIT@@@Z");
//};

//protected: static long XAUDIO::CVoice::GetObjectAdditionalSize(struct XAUDIO::XAUDIOVOICEINIT const *, unsigned long *)
//{
//    mangled_ppc("?GetObjectAdditionalSize@CVoice@XAUDIO@@KAJPBUXAUDIOVOICEINIT@2@PAK@Z");
//};

//public: virtual XAUDIO::CVoice::~CVoice(void)
//{
//    mangled_ppc("??1CVoice@XAUDIO@@UAA@XZ");
//};

//protected: long XAUDIO::CVoice::CreateEffect(struct XAUDIO::XAUDIOVOICEFXCTX *, struct XAUDIOFXINIT const *, unsigned char)
//{
//    mangled_ppc("?CreateEffect@CVoice@XAUDIO@@IAAJPAUXAUDIOVOICEFXCTX@2@PBUXAUDIOFXINIT@@E@Z");
//};

//public: virtual long XAUDIO::CVoice::GetEffectParam(unsigned char, unsigned char, unsigned char, union XAUDIOFXPARAM *)
//{
//    mangled_ppc("?GetEffectParam@CVoice@XAUDIO@@UAAJEEEPATXAUDIOFXPARAM@@@Z");
//};

//public: virtual long XAUDIO::CVoice::SetEffectParam(unsigned char, unsigned char, unsigned char, union XAUDIOFXPARAM const *)
//{
//    mangled_ppc("?SetEffectParam@CVoice@XAUDIO@@UAAJEEEPBTXAUDIOFXPARAM@@@Z");
//};

//public: virtual long XAUDIO::CVoice::GetEffectState(unsigned char, unsigned char *)
//{
//    mangled_ppc("?GetEffectState@CVoice@XAUDIO@@UAAJEPAE@Z");
//};

//public: virtual long XAUDIO::CVoice::SetEffectState(unsigned char, unsigned char)
//{
//    mangled_ppc("?SetEffectState@CVoice@XAUDIO@@UAAJEE@Z");
//};

//protected: void XAUDIO::CVoice::SetVoiceFormat(union XAUDIOFORMAT const *)
//{
//    mangled_ppc("?SetVoiceFormat@CVoice@XAUDIO@@IAAXPBTXAUDIOFORMAT@@@Z");
//};

//protected: static long XAUDIO::CVoice::ValidateFormat(union XAUDIOFORMAT const *, struct IXAudioFrameBuffer *)
//{
//    mangled_ppc("?ValidateFormat@CVoice@XAUDIO@@KAJPBTXAUDIOFORMAT@@PAUIXAudioFrameBuffer@@@Z");
//};

//public: XAUDIO::CSafeListEntry::CSafeListEntry(void)
//{
//    mangled_ppc("??0CSafeListEntry@XAUDIO@@QAA@XZ");
//};

//public: XAUDIO::CVoice::CVoice(struct IXAudioBatchAllocator *, unsigned char)
//{
//    mangled_ppc("??0CVoice@XAUDIO@@QAA@PAUIXAudioBatchAllocator@@E@Z");
//};

//merged_84894408
//{
//    mangled_ppc("merged_84894408");
//};

//protected: long XAUDIO::CVoice::CreateUserEffects(struct XAUDIOVOICEFXCHAIN const *)
//{
//    mangled_ppc("?CreateUserEffects@CVoice@XAUDIO@@IAAJPBUXAUDIOVOICEFXCHAIN@@@Z");
//};

//protected: long XAUDIO::CVoice::ProcessEffect(struct XAUDIO::XAUDIOVOICEFXCTX *, struct IXAudioFrameBuffer **)
//{
//    mangled_ppc("?ProcessEffect@CVoice@XAUDIO@@IAAJPAUXAUDIOVOICEFXCTX@2@PAPAUIXAudioFrameBuffer@@@Z");
//};

//public: virtual long XAUDIO::CVoice::Start(void)
//{
//    mangled_ppc("?Start@CVoice@XAUDIO@@UAAJXZ");
//};

//public: virtual long XAUDIO::CVoice::Stop(unsigned char)
//{
//    mangled_ppc("?Stop@CVoice@XAUDIO@@UAAJE@Z");
//};

//protected: long XAUDIO::CVoice::Initialize(struct XAUDIO::XAUDIOVOICEINIT const *)
//{
//    mangled_ppc("?Initialize@CVoice@XAUDIO@@IAAJPBUXAUDIOVOICEINIT@2@@Z");
//};

//protected: virtual long XAUDIO::CVoice::ProcessEffects(struct IXAudioFrameBuffer **)
//{
//    mangled_ppc("?ProcessEffects@CVoice@XAUDIO@@MAAJPAPAUIXAudioFrameBuffer@@@Z");
//};

