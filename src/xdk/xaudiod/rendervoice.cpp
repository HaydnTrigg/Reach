/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: XAUDIO::CMasteringVoice::CMasteringVoice(struct IXAudioBatchAllocator *, unsigned char);
// public: virtual XAUDIO::CMasteringVoice::~CMasteringVoice(void);
// protected: virtual long XAUDIO::CMasteringVoice::ProcessEffects(struct IXAudioFrameBuffer **);
// private: static void XAUDIO::CMasteringVoice::_RenderCallback(struct XAUDIORENDERFXCALLBACK const *);
// protected: static void XAUDIO::CMasteringVoice::ConvertInit(struct XAUDIOMASTERINGVOICEINIT const *, struct XAUDIO::XAUDIOVOICEINIT *);
// protected: static void XAUDIO::CMasteringVoice::ConvertInit(class XAUDIO::CMasteringVoice *, struct XAUDIOMASTERINGVOICEINIT const *, struct XAUDIORENDERFXINIT *);
// void XAUDIO::__AssertValidListEntry(struct _LIST_ENTRY *, enum XAUDIO::ASSERT_VALID_LIST_ENTRY, char const *, unsigned int);
// public: static void * XAUDIO::CMasteringVoice::operator new(unsigned int, struct IXAudioBatchAllocator *);
// public: static void XAUDIO::CMasteringVoice::operator delete(void *);
// public: virtual unsigned long XAUDIO::CMasteringVoice::AddRef(void);
// public: virtual unsigned long XAUDIO::CMasteringVoice::Release(void);
// public: virtual long XAUDIO::CMasteringVoice::SetVoiceOutput(struct XAUDIOVOICEOUTPUT const *);
// public: virtual long XAUDIO::CMasteringVoice::SetVoiceOutputVolume(struct XAUDIOVOICEOUTPUTVOLUME const *);
// public: virtual long XAUDIO::CMasteringVoice::Stop(unsigned char);
// protected: class XAUDIO::CEngine::CEngineVoiceList * XAUDIO::CEngine::GetVoiceList(class XAUDIO::CVoice *);
// merged_84890908;
// protected: long XAUDIO::CMasteringVoice::Initialize(struct XAUDIOMASTERINGVOICEINIT const *);
// protected: virtual long XAUDIO::CMasteringVoice::Process(void);
// public: virtual long XAUDIO::CMasteringVoice::Start(void);
// public: void XAUDIO::CEngine::OnStopVoice(class XAUDIO::CVoice *);
// protected: virtual long XAUDIO::CVoice::OnStopVoice(void);
// public: static long XAUDIO::CMasteringVoice::GetObjectAdditionalSize(struct XAUDIOMASTERINGVOICEINIT const *, unsigned long *);
// public: static long XAUDIO::CMasteringVoice::GetObjectSize(struct XAUDIOMASTERINGVOICEINIT const *, unsigned long *);
// public: static long XAUDIO::CMasteringVoice::CreateObject(struct XAUDIOMASTERINGVOICEINIT const *, class XAUDIO::CMasteringVoice **);
// public: void XAUDIO::CEngine::OnStartVoice(class XAUDIO::CVoice *);
// protected: virtual long XAUDIO::CVoice::OnStartVoice(void);

//public: XAUDIO::CMasteringVoice::CMasteringVoice(struct IXAudioBatchAllocator *, unsigned char)
//{
//    mangled_ppc("??0CMasteringVoice@XAUDIO@@QAA@PAUIXAudioBatchAllocator@@E@Z");
//};

//public: virtual XAUDIO::CMasteringVoice::~CMasteringVoice(void)
//{
//    mangled_ppc("??1CMasteringVoice@XAUDIO@@UAA@XZ");
//};

//protected: virtual long XAUDIO::CMasteringVoice::ProcessEffects(struct IXAudioFrameBuffer **)
//{
//    mangled_ppc("?ProcessEffects@CMasteringVoice@XAUDIO@@MAAJPAPAUIXAudioFrameBuffer@@@Z");
//};

//private: static void XAUDIO::CMasteringVoice::_RenderCallback(struct XAUDIORENDERFXCALLBACK const *)
//{
//    mangled_ppc("?_RenderCallback@CMasteringVoice@XAUDIO@@CAXPBUXAUDIORENDERFXCALLBACK@@@Z");
//};

//protected: static void XAUDIO::CMasteringVoice::ConvertInit(struct XAUDIOMASTERINGVOICEINIT const *, struct XAUDIO::XAUDIOVOICEINIT *)
//{
//    mangled_ppc("?ConvertInit@CMasteringVoice@XAUDIO@@KAXPBUXAUDIOMASTERINGVOICEINIT@@PAUXAUDIOVOICEINIT@2@@Z");
//};

//protected: static void XAUDIO::CMasteringVoice::ConvertInit(class XAUDIO::CMasteringVoice *, struct XAUDIOMASTERINGVOICEINIT const *, struct XAUDIORENDERFXINIT *)
//{
//    mangled_ppc("?ConvertInit@CMasteringVoice@XAUDIO@@KAXPAV12@PBUXAUDIOMASTERINGVOICEINIT@@PAUXAUDIORENDERFXINIT@@@Z");
//};

//void XAUDIO::__AssertValidListEntry(struct _LIST_ENTRY *, enum XAUDIO::ASSERT_VALID_LIST_ENTRY, char const *, unsigned int)
//{
//    mangled_ppc("?__AssertValidListEntry@XAUDIO@@YAXPAU_LIST_ENTRY@@W4ASSERT_VALID_LIST_ENTRY@1@PBDI@Z");
//};

//public: static void * XAUDIO::CMasteringVoice::operator new(unsigned int, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??2CMasteringVoice@XAUDIO@@SAPAXIPAUIXAudioBatchAllocator@@@Z");
//};

//public: static void XAUDIO::CMasteringVoice::operator delete(void *)
//{
//    mangled_ppc("??3CMasteringVoice@XAUDIO@@SAXPAX@Z");
//};

//public: virtual unsigned long XAUDIO::CMasteringVoice::AddRef(void)
//{
//    mangled_ppc("?AddRef@CMasteringVoice@XAUDIO@@UAAKXZ");
//};

//public: virtual unsigned long XAUDIO::CMasteringVoice::Release(void)
//{
//    mangled_ppc("?Release@CMasteringVoice@XAUDIO@@UAAKXZ");
//};

//public: virtual long XAUDIO::CMasteringVoice::SetVoiceOutput(struct XAUDIOVOICEOUTPUT const *)
//{
//    mangled_ppc("?SetVoiceOutput@CMasteringVoice@XAUDIO@@UAAJPBUXAUDIOVOICEOUTPUT@@@Z");
//};

//public: virtual long XAUDIO::CMasteringVoice::SetVoiceOutputVolume(struct XAUDIOVOICEOUTPUTVOLUME const *)
//{
//    mangled_ppc("?SetVoiceOutputVolume@CMasteringVoice@XAUDIO@@UAAJPBUXAUDIOVOICEOUTPUTVOLUME@@@Z");
//};

//public: virtual long XAUDIO::CMasteringVoice::Stop(unsigned char)
//{
//    mangled_ppc("?Stop@CMasteringVoice@XAUDIO@@UAAJE@Z");
//};

//protected: class XAUDIO::CEngine::CEngineVoiceList * XAUDIO::CEngine::GetVoiceList(class XAUDIO::CVoice *)
//{
//    mangled_ppc("?GetVoiceList@CEngine@XAUDIO@@IAAPAVCEngineVoiceList@12@PAVCVoice@2@@Z");
//};

//merged_84890908
//{
//    mangled_ppc("merged_84890908");
//};

//protected: long XAUDIO::CMasteringVoice::Initialize(struct XAUDIOMASTERINGVOICEINIT const *)
//{
//    mangled_ppc("?Initialize@CMasteringVoice@XAUDIO@@IAAJPBUXAUDIOMASTERINGVOICEINIT@@@Z");
//};

//protected: virtual long XAUDIO::CMasteringVoice::Process(void)
//{
//    mangled_ppc("?Process@CMasteringVoice@XAUDIO@@MAAJXZ");
//};

//public: virtual long XAUDIO::CMasteringVoice::Start(void)
//{
//    mangled_ppc("?Start@CMasteringVoice@XAUDIO@@UAAJXZ");
//};

//public: void XAUDIO::CEngine::OnStopVoice(class XAUDIO::CVoice *)
//{
//    mangled_ppc("?OnStopVoice@CEngine@XAUDIO@@QAAXPAVCVoice@2@@Z");
//};

//protected: virtual long XAUDIO::CVoice::OnStopVoice(void)
//{
//    mangled_ppc("?OnStopVoice@CVoice@XAUDIO@@MAAJXZ");
//};

//public: static long XAUDIO::CMasteringVoice::GetObjectAdditionalSize(struct XAUDIOMASTERINGVOICEINIT const *, unsigned long *)
//{
//    mangled_ppc("?GetObjectAdditionalSize@CMasteringVoice@XAUDIO@@SAJPBUXAUDIOMASTERINGVOICEINIT@@PAK@Z");
//};

//public: static long XAUDIO::CMasteringVoice::GetObjectSize(struct XAUDIOMASTERINGVOICEINIT const *, unsigned long *)
//{
//    mangled_ppc("?GetObjectSize@CMasteringVoice@XAUDIO@@SAJPBUXAUDIOMASTERINGVOICEINIT@@PAK@Z");
//};

//public: static long XAUDIO::CMasteringVoice::CreateObject(struct XAUDIOMASTERINGVOICEINIT const *, class XAUDIO::CMasteringVoice **)
//{
//    mangled_ppc("?CreateObject@CMasteringVoice@XAUDIO@@SAJPBUXAUDIOMASTERINGVOICEINIT@@PAPAV12@@Z");
//};

//public: void XAUDIO::CEngine::OnStartVoice(class XAUDIO::CVoice *)
//{
//    mangled_ppc("?OnStartVoice@CEngine@XAUDIO@@QAAXPAVCVoice@2@@Z");
//};

//protected: virtual long XAUDIO::CVoice::OnStartVoice(void)
//{
//    mangled_ppc("?OnStartVoice@CVoice@XAUDIO@@MAAJXZ");
//};

