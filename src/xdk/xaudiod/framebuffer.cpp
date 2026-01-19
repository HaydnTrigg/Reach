/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// XAudioFrameBuffer_AddRef;
// XAudioFrameBuffer_Release;
// public: long XAUDIO::CFrameBuffer::Unprepare(void);
// public: long XAUDIO::CFrameBuffer::GetProcessingData(struct XAUDIOFRAMEBUFDATA *);
// unsigned short XAudioGetFrameSizeSamples(unsigned int);
// unsigned short XAudioGetFrameSizeSamples(union XAUDIOFORMAT const *);
// void operator delete(void *);
// public: static void * XAUDIO::CFrameBuffer::operator new(unsigned int, struct IXAudioBatchAllocator *);
// public: static unsigned long XAUDIO::CFrameBuffer::GetBufferSizeSamples(union XAUDIOFORMAT const *);
// public: static unsigned long XAUDIO::CFrameBuffer::GetBufferSizeBytes(union XAUDIOFORMAT const *);
// public: static unsigned long XAUDIO::CFrameBuffer::GetAlignedBufferSizeBytes(union XAUDIOFORMAT const *);
// public: static unsigned long XAUDIO::CFrameBuffer::GetObjectAdditionalSize(struct XAUDIOFRAMEBUFINIT const *);
// public: long XAUDIO::CFrameBuffer::GetMaxFormat(union XAUDIOFORMAT *);
// public: long XAUDIO::CFrameBuffer::GetContext(void **);
// public: static int XAUDIO::CFrameBuffer::IsValidFormat(union XAUDIOFORMAT const *);
// XAudioFrameBuffer_GetMaxFormat;
// XAudioFrameBuffer_GetProcessingData;
// XAudioFrameBuffer_GetContext;
// XAudioFrameBuffer_Unprepare;
// public: virtual XAUDIO::CFrameBuffer::~CFrameBuffer(void);
// public: long XAUDIO::CFrameBuffer::Prepare(union XAUDIOFORMAT const *, unsigned char);
// protected: void XAUDIO::CFrameBuffer::SetSampleBuffer(union XAUDIOFORMAT const *, float *);
// public: long XAUDIO::CFrameBuffer::SetExternalBuffer(union XAUDIOFORMAT const *, float *);
// public: static unsigned long XAUDIO::CFrameBuffer::GetObjectSize(struct XAUDIOFRAMEBUFINIT const *);
// XAudioFrameBuffer_Prepare;
// XAudioFrameBuffer_SetExternalBuffer;
// XAudioQueryFrameBufferSize;
// public: XAUDIO::CFrameBuffer::CFrameBuffer(struct XAUDIOFRAMEBUFINIT const *, struct IXAudioBatchAllocator *);
// public: static void XAUDIO::CFrameBuffer::operator delete(void *);
// public: virtual unsigned long XAUDIO::CFrameBuffer::AddRef(void);
// public: virtual unsigned long XAUDIO::CFrameBuffer::Release(void);
// public: virtual void XAUDIO::CFrameBuffer::QueryInterface(struct IXAudioFrameBuffer **);
// merged_84871BE8;
// XAudioCreateFrameBuffer;

//XAudioFrameBuffer_AddRef
//{
//    mangled_ppc("XAudioFrameBuffer_AddRef");
//};

//XAudioFrameBuffer_Release
//{
//    mangled_ppc("XAudioFrameBuffer_Release");
//};

//public: long XAUDIO::CFrameBuffer::Unprepare(void)
//{
//    mangled_ppc("?Unprepare@CFrameBuffer@XAUDIO@@QAAJXZ");
//};

//public: long XAUDIO::CFrameBuffer::GetProcessingData(struct XAUDIOFRAMEBUFDATA *)
//{
//    mangled_ppc("?GetProcessingData@CFrameBuffer@XAUDIO@@QAAJPAUXAUDIOFRAMEBUFDATA@@@Z");
//};

//unsigned short XAudioGetFrameSizeSamples(unsigned int)
//{
//    mangled_ppc("?XAudioGetFrameSizeSamples@@YAGI@Z");
//};

//unsigned short XAudioGetFrameSizeSamples(union XAUDIOFORMAT const *)
//{
//    mangled_ppc("?XAudioGetFrameSizeSamples@@YAGPBTXAUDIOFORMAT@@@Z");
//};

//void operator delete(void *)
//{
//    mangled_ppc("??3@YAXPAX@Z");
//};

//public: static void * XAUDIO::CFrameBuffer::operator new(unsigned int, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??2CFrameBuffer@XAUDIO@@SAPAXIPAUIXAudioBatchAllocator@@@Z");
//};

//public: static unsigned long XAUDIO::CFrameBuffer::GetBufferSizeSamples(union XAUDIOFORMAT const *)
//{
//    mangled_ppc("?GetBufferSizeSamples@CFrameBuffer@XAUDIO@@SAKPBTXAUDIOFORMAT@@@Z");
//};

//public: static unsigned long XAUDIO::CFrameBuffer::GetBufferSizeBytes(union XAUDIOFORMAT const *)
//{
//    mangled_ppc("?GetBufferSizeBytes@CFrameBuffer@XAUDIO@@SAKPBTXAUDIOFORMAT@@@Z");
//};

//public: static unsigned long XAUDIO::CFrameBuffer::GetAlignedBufferSizeBytes(union XAUDIOFORMAT const *)
//{
//    mangled_ppc("?GetAlignedBufferSizeBytes@CFrameBuffer@XAUDIO@@SAKPBTXAUDIOFORMAT@@@Z");
//};

//public: static unsigned long XAUDIO::CFrameBuffer::GetObjectAdditionalSize(struct XAUDIOFRAMEBUFINIT const *)
//{
//    mangled_ppc("?GetObjectAdditionalSize@CFrameBuffer@XAUDIO@@SAKPBUXAUDIOFRAMEBUFINIT@@@Z");
//};

//public: long XAUDIO::CFrameBuffer::GetMaxFormat(union XAUDIOFORMAT *)
//{
//    mangled_ppc("?GetMaxFormat@CFrameBuffer@XAUDIO@@QAAJPATXAUDIOFORMAT@@@Z");
//};

//public: long XAUDIO::CFrameBuffer::GetContext(void **)
//{
//    mangled_ppc("?GetContext@CFrameBuffer@XAUDIO@@QAAJPAPAX@Z");
//};

//public: static int XAUDIO::CFrameBuffer::IsValidFormat(union XAUDIOFORMAT const *)
//{
//    mangled_ppc("?IsValidFormat@CFrameBuffer@XAUDIO@@SAHPBTXAUDIOFORMAT@@@Z");
//};

//XAudioFrameBuffer_GetMaxFormat
//{
//    mangled_ppc("XAudioFrameBuffer_GetMaxFormat");
//};

//XAudioFrameBuffer_GetProcessingData
//{
//    mangled_ppc("XAudioFrameBuffer_GetProcessingData");
//};

//XAudioFrameBuffer_GetContext
//{
//    mangled_ppc("XAudioFrameBuffer_GetContext");
//};

//XAudioFrameBuffer_Unprepare
//{
//    mangled_ppc("XAudioFrameBuffer_Unprepare");
//};

//public: virtual XAUDIO::CFrameBuffer::~CFrameBuffer(void)
//{
//    mangled_ppc("??1CFrameBuffer@XAUDIO@@UAA@XZ");
//};

//public: long XAUDIO::CFrameBuffer::Prepare(union XAUDIOFORMAT const *, unsigned char)
//{
//    mangled_ppc("?Prepare@CFrameBuffer@XAUDIO@@QAAJPBTXAUDIOFORMAT@@E@Z");
//};

//protected: void XAUDIO::CFrameBuffer::SetSampleBuffer(union XAUDIOFORMAT const *, float *)
//{
//    mangled_ppc("?SetSampleBuffer@CFrameBuffer@XAUDIO@@IAAXPBTXAUDIOFORMAT@@PAM@Z");
//};

//public: long XAUDIO::CFrameBuffer::SetExternalBuffer(union XAUDIOFORMAT const *, float *)
//{
//    mangled_ppc("?SetExternalBuffer@CFrameBuffer@XAUDIO@@QAAJPBTXAUDIOFORMAT@@PAM@Z");
//};

//public: static unsigned long XAUDIO::CFrameBuffer::GetObjectSize(struct XAUDIOFRAMEBUFINIT const *)
//{
//    mangled_ppc("?GetObjectSize@CFrameBuffer@XAUDIO@@SAKPBUXAUDIOFRAMEBUFINIT@@@Z");
//};

//XAudioFrameBuffer_Prepare
//{
//    mangled_ppc("XAudioFrameBuffer_Prepare");
//};

//XAudioFrameBuffer_SetExternalBuffer
//{
//    mangled_ppc("XAudioFrameBuffer_SetExternalBuffer");
//};

//XAudioQueryFrameBufferSize
//{
//    mangled_ppc("XAudioQueryFrameBufferSize");
//};

//public: XAUDIO::CFrameBuffer::CFrameBuffer(struct XAUDIOFRAMEBUFINIT const *, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??0CFrameBuffer@XAUDIO@@QAA@PBUXAUDIOFRAMEBUFINIT@@PAUIXAudioBatchAllocator@@@Z");
//};

//public: static void XAUDIO::CFrameBuffer::operator delete(void *)
//{
//    mangled_ppc("??3CFrameBuffer@XAUDIO@@SAXPAX@Z");
//};

//public: virtual unsigned long XAUDIO::CFrameBuffer::AddRef(void)
//{
//    mangled_ppc("?AddRef@CFrameBuffer@XAUDIO@@UAAKXZ");
//};

//public: virtual unsigned long XAUDIO::CFrameBuffer::Release(void)
//{
//    mangled_ppc("?Release@CFrameBuffer@XAUDIO@@UAAKXZ");
//};

//public: virtual void XAUDIO::CFrameBuffer::QueryInterface(struct IXAudioFrameBuffer **)
//{
//    mangled_ppc("?QueryInterface@CFrameBuffer@XAUDIO@@UAAXPAPAUIXAudioFrameBuffer@@@Z");
//};

//merged_84871BE8
//{
//    mangled_ppc("merged_84871BE8");
//};

//XAudioCreateFrameBuffer
//{
//    mangled_ppc("XAudioCreateFrameBuffer");
//};

