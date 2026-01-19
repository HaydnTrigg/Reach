/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: XAUDIO::CRoutedVoice::CRoutedVoice(struct IXAudioBatchAllocator *, unsigned char);
// public: virtual long XAUDIO::CRoutedVoice::SetVoiceFormat(union XAUDIOFORMAT const *, struct XAUDIOVOICEOUTPUT const *);
// protected: static void XAUDIO::CRoutedVoice::ConvertInit(class XAUDIO::CRoutedVoice *, struct XAUDIO::XAUDIOROUTEDVOICEINIT const *, struct XAUDIOROUTERFXINIT *);
// public: struct IXAudioRouterEffect * XAUDIO::XAUDIOVOICEFXCTX::CallEffect<struct IXAudioRouterEffect>(void);
// public: class XAUDIO::CRouterEffect * XAUDIO::XAUDIOVOICEFXCTX::CallEffect<class XAUDIO::CRouterEffect>(void);
// void XAUDIO::__AssertValidListEntry(struct _LIST_ENTRY *, enum XAUDIO::ASSERT_VALID_LIST_ENTRY, char const *, unsigned int);
// void operator delete(void *);
// public: unsigned long XAUDIO::CSimpleRefCount::AddRef(void);
// public: unsigned long XAUDIO::CSimpleRefCount::Release(void);
// protected: void XAUDIO::CVoice::AttachSourceVoice(void);
// protected: void XAUDIO::CVoice::DetachSourceVoice(void);
// protected: long XAUDIO::CVoice::OnStartSourceVoice(void);
// protected: long XAUDIO::CVoice::OnStopSourceVoice(void);
// public: struct IXAudioEffect * XAUDIO::XAUDIOVOICEFXCTX::CallEffect<struct IXAudioEffect>(void);
// protected: static long XAUDIO::CRoutedVoice::GetObjectAdditionalSize(struct XAUDIO::XAUDIOROUTEDVOICEINIT const *, unsigned long *);
// protected: long XAUDIO::CRoutedVoice::Initialize(struct XAUDIO::XAUDIOROUTEDVOICEINIT const *);
// protected: long XAUDIO::CRoutedVoice::AttachOutputVoice(struct XAUDIOVOICEOUTPUTENTRY const *, struct XAUDIO::XAUDIOVOICEROUTECTX *);
// protected: void XAUDIO::CRoutedVoice::DetachOutputVoices(void);
// public: virtual long XAUDIO::CRoutedVoice::SetVoiceOutputVolume(struct XAUDIOVOICEOUTPUTVOLUME const *);
// protected: long XAUDIO::CVoice::ProcessEffect(struct XAUDIO::XAUDIOVOICEFXCTX *, struct IXAudioFrameBuffer *, struct IXAudioFrameBuffer *);
// public: virtual XAUDIO::CRoutedVoice::~CRoutedVoice(void);
// public: virtual long XAUDIO::CRoutedVoice::SetVoiceOutput(struct XAUDIOVOICEOUTPUT const *);
// protected: virtual long XAUDIO::CRoutedVoice::ProcessEffects(struct IXAudioFrameBuffer **);
// protected: virtual long XAUDIO::CRoutedVoice::OnStopVoice(void);
// merged_848930C0;
// protected: virtual long XAUDIO::CRoutedVoice::OnStartVoice(void);

//public: XAUDIO::CRoutedVoice::CRoutedVoice(struct IXAudioBatchAllocator *, unsigned char)
//{
//    mangled_ppc("??0CRoutedVoice@XAUDIO@@QAA@PAUIXAudioBatchAllocator@@E@Z");
//};

//public: virtual long XAUDIO::CRoutedVoice::SetVoiceFormat(union XAUDIOFORMAT const *, struct XAUDIOVOICEOUTPUT const *)
//{
//    mangled_ppc("?SetVoiceFormat@CRoutedVoice@XAUDIO@@UAAJPBTXAUDIOFORMAT@@PBUXAUDIOVOICEOUTPUT@@@Z");
//};

//protected: static void XAUDIO::CRoutedVoice::ConvertInit(class XAUDIO::CRoutedVoice *, struct XAUDIO::XAUDIOROUTEDVOICEINIT const *, struct XAUDIOROUTERFXINIT *)
//{
//    mangled_ppc("?ConvertInit@CRoutedVoice@XAUDIO@@KAXPAV12@PBUXAUDIOROUTEDVOICEINIT@2@PAUXAUDIOROUTERFXINIT@@@Z");
//};

//public: struct IXAudioRouterEffect * XAUDIO::XAUDIOVOICEFXCTX::CallEffect<struct IXAudioRouterEffect>(void)
//{
//    mangled_ppc("??$CallEffect@UIXAudioRouterEffect@@@XAUDIOVOICEFXCTX@XAUDIO@@QAAPAUIXAudioRouterEffect@@XZ");
//};

//public: class XAUDIO::CRouterEffect * XAUDIO::XAUDIOVOICEFXCTX::CallEffect<class XAUDIO::CRouterEffect>(void)
//{
//    mangled_ppc("??$CallEffect@VCRouterEffect@XAUDIO@@@XAUDIOVOICEFXCTX@XAUDIO@@QAAPAVCRouterEffect@1@XZ");
//};

//void XAUDIO::__AssertValidListEntry(struct _LIST_ENTRY *, enum XAUDIO::ASSERT_VALID_LIST_ENTRY, char const *, unsigned int)
//{
//    mangled_ppc("?__AssertValidListEntry@XAUDIO@@YAXPAU_LIST_ENTRY@@W4ASSERT_VALID_LIST_ENTRY@1@PBDI@Z");
//};

//void operator delete(void *)
//{
//    mangled_ppc("??3@YAXPAX@Z");
//};

//public: unsigned long XAUDIO::CSimpleRefCount::AddRef(void)
//{
//    mangled_ppc("?AddRef@CSimpleRefCount@XAUDIO@@QAAKXZ");
//};

//public: unsigned long XAUDIO::CSimpleRefCount::Release(void)
//{
//    mangled_ppc("?Release@CSimpleRefCount@XAUDIO@@QAAKXZ");
//};

//protected: void XAUDIO::CVoice::AttachSourceVoice(void)
//{
//    mangled_ppc("?AttachSourceVoice@CVoice@XAUDIO@@IAAXXZ");
//};

//protected: void XAUDIO::CVoice::DetachSourceVoice(void)
//{
//    mangled_ppc("?DetachSourceVoice@CVoice@XAUDIO@@IAAXXZ");
//};

//protected: long XAUDIO::CVoice::OnStartSourceVoice(void)
//{
//    mangled_ppc("?OnStartSourceVoice@CVoice@XAUDIO@@IAAJXZ");
//};

//protected: long XAUDIO::CVoice::OnStopSourceVoice(void)
//{
//    mangled_ppc("?OnStopSourceVoice@CVoice@XAUDIO@@IAAJXZ");
//};

//public: struct IXAudioEffect * XAUDIO::XAUDIOVOICEFXCTX::CallEffect<struct IXAudioEffect>(void)
//{
//    mangled_ppc("??$CallEffect@UIXAudioEffect@@@XAUDIOVOICEFXCTX@XAUDIO@@QAAPAUIXAudioEffect@@XZ");
//};

//protected: static long XAUDIO::CRoutedVoice::GetObjectAdditionalSize(struct XAUDIO::XAUDIOROUTEDVOICEINIT const *, unsigned long *)
//{
//    mangled_ppc("?GetObjectAdditionalSize@CRoutedVoice@XAUDIO@@KAJPBUXAUDIOROUTEDVOICEINIT@2@PAK@Z");
//};

//protected: long XAUDIO::CRoutedVoice::Initialize(struct XAUDIO::XAUDIOROUTEDVOICEINIT const *)
//{
//    mangled_ppc("?Initialize@CRoutedVoice@XAUDIO@@IAAJPBUXAUDIOROUTEDVOICEINIT@2@@Z");
//};

//protected: long XAUDIO::CRoutedVoice::AttachOutputVoice(struct XAUDIOVOICEOUTPUTENTRY const *, struct XAUDIO::XAUDIOVOICEROUTECTX *)
//{
//    mangled_ppc("?AttachOutputVoice@CRoutedVoice@XAUDIO@@IAAJPBUXAUDIOVOICEOUTPUTENTRY@@PAUXAUDIOVOICEROUTECTX@2@@Z");
//};

//protected: void XAUDIO::CRoutedVoice::DetachOutputVoices(void)
//{
//    mangled_ppc("?DetachOutputVoices@CRoutedVoice@XAUDIO@@IAAXXZ");
//};

//public: virtual long XAUDIO::CRoutedVoice::SetVoiceOutputVolume(struct XAUDIOVOICEOUTPUTVOLUME const *)
//{
//    mangled_ppc("?SetVoiceOutputVolume@CRoutedVoice@XAUDIO@@UAAJPBUXAUDIOVOICEOUTPUTVOLUME@@@Z");
//};

//protected: long XAUDIO::CVoice::ProcessEffect(struct XAUDIO::XAUDIOVOICEFXCTX *, struct IXAudioFrameBuffer *, struct IXAudioFrameBuffer *)
//{
//    mangled_ppc("?ProcessEffect@CVoice@XAUDIO@@IAAJPAUXAUDIOVOICEFXCTX@2@PAUIXAudioFrameBuffer@@1@Z");
//};

//public: virtual XAUDIO::CRoutedVoice::~CRoutedVoice(void)
//{
//    mangled_ppc("??1CRoutedVoice@XAUDIO@@UAA@XZ");
//};

//public: virtual long XAUDIO::CRoutedVoice::SetVoiceOutput(struct XAUDIOVOICEOUTPUT const *)
//{
//    mangled_ppc("?SetVoiceOutput@CRoutedVoice@XAUDIO@@UAAJPBUXAUDIOVOICEOUTPUT@@@Z");
//};

//protected: virtual long XAUDIO::CRoutedVoice::ProcessEffects(struct IXAudioFrameBuffer **)
//{
//    mangled_ppc("?ProcessEffects@CRoutedVoice@XAUDIO@@MAAJPAPAUIXAudioFrameBuffer@@@Z");
//};

//protected: virtual long XAUDIO::CRoutedVoice::OnStopVoice(void)
//{
//    mangled_ppc("?OnStopVoice@CRoutedVoice@XAUDIO@@MAAJXZ");
//};

//merged_848930C0
//{
//    mangled_ppc("merged_848930C0");
//};

//protected: virtual long XAUDIO::CRoutedVoice::OnStartVoice(void)
//{
//    mangled_ppc("?OnStartVoice@CRoutedVoice@XAUDIO@@MAAJXZ");
//};

