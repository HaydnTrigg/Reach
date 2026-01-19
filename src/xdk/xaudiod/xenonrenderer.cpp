/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const XAUDIO::CXenonRenderer::`vftable'{for `XAUDIO::CEffect'}; // "??_7CXenonRenderer@XAUDIO@@6BCEffect@1@@"
// const XAUDIO::CXenonRenderer::`vftable'{for `IXAudioRenderEffect'}; // "??_7CXenonRenderer@XAUDIO@@6BIXAudioRenderEffect@@@"

// public: virtual long XAUDIO::CXenonRenderer::Initialize(struct XAUDIORENDERFXINIT const *, struct IXAudioBatchAllocator *);
// public: virtual long XAUDIO::CXenonRenderer::SetCallback(void (*)(struct XAUDIORENDERFXCALLBACK const *));
// protected: virtual void XAUDIO::CXenonRenderer::CaptureXBMAudioFrame(struct XAUDIOFRAMEBUFDATA *);
// void operator delete(void *);
// public: static void * XAUDIO::CXenonRenderer::operator new(unsigned int, struct IXAudioBatchAllocator *);
// public: static unsigned int XAUDIO::CXenonRenderer::GetObjectAdditionalSize(struct XAUDIORENDERFXINIT const *);
// public: virtual XAUDIO::CXenonRenderer::~CXenonRenderer(void);
// [thunk]: public: virtual void * XAUDIO::CXenonRenderer::`vector deleting destructor'(unsigned int);
// public: static void XAUDIO::CXenonRenderer::operator delete(void *);
// public: virtual unsigned long XAUDIO::CXenonRenderer::AddRef(void);
// public: virtual unsigned long XAUDIO::CXenonRenderer::Release(void);
// public: virtual long XAUDIO::CXenonRenderer::GetInfo(struct XAUDIOFXINFO *);
// public: virtual long XAUDIO::CXenonRenderer::GetContext(void **);
// public: virtual long XAUDIO::CXenonRenderer::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *);
// public: virtual long XAUDIO::CXenonRenderer::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *);
// public: virtual void XAUDIO::CXenonRenderer::QueryInterface(struct IXAudioEffect **);
// public: virtual void XAUDIO::CXenonRenderer::QueryInterface(struct IXAudioRenderEffect **);
// public: virtual long XAUDIO::CXenonRenderer::Process(struct IXAudioFrameBuffer *, struct IXAudioFrameBuffer *);
// [thunk]: public: virtual long XAUDIO::CXenonRenderer::GetContext(void **);
// [thunk]: public: virtual unsigned long XAUDIO::CXenonRenderer::Release(void);
// [thunk]: public: virtual unsigned long XAUDIO::CXenonRenderer::AddRef(void);
// public: static unsigned int XAUDIO::CXenonRenderer::GetObjectSize(struct XAUDIORENDERFXINIT const *);
// XAudioQueryNativeRenderEffectSize;
// merged_8486B760;
// public: IXAudioRenderEffect::IXAudioRenderEffect(void);
// public: XAUDIO::CXenonRenderer::CXenonRenderer(struct XAUDIORENDERFXINIT const *, struct IXAudioBatchAllocator *);
// XAudioCreateNativeRenderEffect;

//public: virtual long XAUDIO::CXenonRenderer::Initialize(struct XAUDIORENDERFXINIT const *, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("?Initialize@CXenonRenderer@XAUDIO@@UAAJPBUXAUDIORENDERFXINIT@@PAUIXAudioBatchAllocator@@@Z");
//};

//public: virtual long XAUDIO::CXenonRenderer::SetCallback(void (*)(struct XAUDIORENDERFXCALLBACK const *))
//{
//    mangled_ppc("?SetCallback@CXenonRenderer@XAUDIO@@UAAJP6AXPBUXAUDIORENDERFXCALLBACK@@@Z@Z");
//};

//protected: virtual void XAUDIO::CXenonRenderer::CaptureXBMAudioFrame(struct XAUDIOFRAMEBUFDATA *)
//{
//    mangled_ppc("?CaptureXBMAudioFrame@CXenonRenderer@XAUDIO@@MAAXPAUXAUDIOFRAMEBUFDATA@@@Z");
//};

//void operator delete(void *)
//{
//    mangled_ppc("??3@YAXPAX@Z");
//};

//public: static void * XAUDIO::CXenonRenderer::operator new(unsigned int, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??2CXenonRenderer@XAUDIO@@SAPAXIPAUIXAudioBatchAllocator@@@Z");
//};

//public: static unsigned int XAUDIO::CXenonRenderer::GetObjectAdditionalSize(struct XAUDIORENDERFXINIT const *)
//{
//    mangled_ppc("?GetObjectAdditionalSize@CXenonRenderer@XAUDIO@@SAIPBUXAUDIORENDERFXINIT@@@Z");
//};

//public: virtual XAUDIO::CXenonRenderer::~CXenonRenderer(void)
//{
//    mangled_ppc("??1CXenonRenderer@XAUDIO@@UAA@XZ");
//};

//[thunk]: public: virtual void * XAUDIO::CXenonRenderer::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_ECXenonRenderer@XAUDIO@@W3AAPAXI@Z");
//};

//public: static void XAUDIO::CXenonRenderer::operator delete(void *)
//{
//    mangled_ppc("??3CXenonRenderer@XAUDIO@@SAXPAX@Z");
//};

//public: virtual unsigned long XAUDIO::CXenonRenderer::AddRef(void)
//{
//    mangled_ppc("?AddRef@CXenonRenderer@XAUDIO@@UAAKXZ");
//};

//public: virtual unsigned long XAUDIO::CXenonRenderer::Release(void)
//{
//    mangled_ppc("?Release@CXenonRenderer@XAUDIO@@UAAKXZ");
//};

//public: virtual long XAUDIO::CXenonRenderer::GetInfo(struct XAUDIOFXINFO *)
//{
//    mangled_ppc("?GetInfo@CXenonRenderer@XAUDIO@@UAAJPAUXAUDIOFXINFO@@@Z");
//};

//public: virtual long XAUDIO::CXenonRenderer::GetContext(void **)
//{
//    mangled_ppc("?GetContext@CXenonRenderer@XAUDIO@@UAAJPAPAX@Z");
//};

//public: virtual long XAUDIO::CXenonRenderer::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *)
//{
//    mangled_ppc("?GetParam@CXenonRenderer@XAUDIO@@UAAJEEPATXAUDIOFXPARAM@@@Z");
//};

//public: virtual long XAUDIO::CXenonRenderer::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *)
//{
//    mangled_ppc("?SetParam@CXenonRenderer@XAUDIO@@UAAJEEPBTXAUDIOFXPARAM@@@Z");
//};

//public: virtual void XAUDIO::CXenonRenderer::QueryInterface(struct IXAudioEffect **)
//{
//    mangled_ppc("?QueryInterface@CXenonRenderer@XAUDIO@@UAAXPAPAUIXAudioEffect@@@Z");
//};

//public: virtual void XAUDIO::CXenonRenderer::QueryInterface(struct IXAudioRenderEffect **)
//{
//    mangled_ppc("?QueryInterface@CXenonRenderer@XAUDIO@@UAAXPAPAUIXAudioRenderEffect@@@Z");
//};

//public: virtual long XAUDIO::CXenonRenderer::Process(struct IXAudioFrameBuffer *, struct IXAudioFrameBuffer *)
//{
//    mangled_ppc("?Process@CXenonRenderer@XAUDIO@@UAAJPAUIXAudioFrameBuffer@@0@Z");
//};

//[thunk]: public: virtual long XAUDIO::CXenonRenderer::GetContext(void **)
//{
//    mangled_ppc("?GetContext@CXenonRenderer@XAUDIO@@W3AAJPAPAX@Z");
//};

//[thunk]: public: virtual unsigned long XAUDIO::CXenonRenderer::Release(void)
//{
//    mangled_ppc("?Release@CXenonRenderer@XAUDIO@@W3AAKXZ");
//};

//[thunk]: public: virtual unsigned long XAUDIO::CXenonRenderer::AddRef(void)
//{
//    mangled_ppc("?AddRef@CXenonRenderer@XAUDIO@@W3AAKXZ");
//};

//public: static unsigned int XAUDIO::CXenonRenderer::GetObjectSize(struct XAUDIORENDERFXINIT const *)
//{
//    mangled_ppc("?GetObjectSize@CXenonRenderer@XAUDIO@@SAIPBUXAUDIORENDERFXINIT@@@Z");
//};

//XAudioQueryNativeRenderEffectSize
//{
//    mangled_ppc("XAudioQueryNativeRenderEffectSize");
//};

//merged_8486B760
//{
//    mangled_ppc("merged_8486B760");
//};

//public: IXAudioRenderEffect::IXAudioRenderEffect(void)
//{
//    mangled_ppc("??0IXAudioRenderEffect@@QAA@XZ");
//};

//public: XAUDIO::CXenonRenderer::CXenonRenderer(struct XAUDIORENDERFXINIT const *, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??0CXenonRenderer@XAUDIO@@QAA@PBUXAUDIORENDERFXINIT@@PAUIXAudioBatchAllocator@@@Z");
//};

//XAudioCreateNativeRenderEffect
//{
//    mangled_ppc("XAudioCreateNativeRenderEffect");
//};

