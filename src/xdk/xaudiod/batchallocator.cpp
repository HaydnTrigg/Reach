/* ---------- headers */

#include "xdk\xaudiod\batchallocator.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const XAUDIO::CBatchAllocator::`vftable'{for `XAUDIO::CObjectRefCount'}; // "??_7CBatchAllocator@XAUDIO@@6BCObjectRefCount@1@@"
// const XAUDIO::CBatchAllocator::`vftable'{for `IXAudioBatchAllocator'}; // "??_7CBatchAllocator@XAUDIO@@6BIXAudioBatchAllocator@@@"
// const XAUDIO::CDynamicBatchAllocator::`vftable'{for `XAUDIO::CObjectRefCount'}; // "??_7CDynamicBatchAllocator@XAUDIO@@6BCObjectRefCount@1@@"
// const XAUDIO::CDynamicBatchAllocator::`vftable'{for `IXAudioBatchAllocator'}; // "??_7CDynamicBatchAllocator@XAUDIO@@6BIXAudioBatchAllocator@@@"
// const XAUDIO::CStaticBatchAllocator::`vftable'{for `XAUDIO::CObjectRefCount'}; // "??_7CStaticBatchAllocator@XAUDIO@@6BCObjectRefCount@1@@"
// const XAUDIO::CStaticBatchAllocator::`vftable'{for `IXAudioBatchAllocator'}; // "??_7CStaticBatchAllocator@XAUDIO@@6BIXAudioBatchAllocator@@@"

// public: virtual void XAUDIO::CBatchAllocator::GrowHeap(unsigned long);
// public: virtual long XAUDIO::CBatchAllocator::CreateHeap(unsigned long);
// public: virtual void * XAUDIO::CBatchAllocator::Alloc(unsigned long);
// void operator delete(void *);
// private: static void * XAUDIO::CDynamicBatchAllocator::operator new(unsigned int, char const *, unsigned long, char const *);
// private: static void * XAUDIO::CStaticBatchAllocator::operator new(unsigned int, void **, unsigned int *);
// public: IXAudioBatchAllocator::IXAudioBatchAllocator(void);
// public: virtual XAUDIO::CBatchAllocator::~CBatchAllocator(void);
// [thunk]: public: virtual void * XAUDIO::CBatchAllocator::`vector deleting destructor'(unsigned int);
// public: virtual unsigned long XAUDIO::CBatchAllocator::AddRef(void);
// public: virtual unsigned long XAUDIO::CBatchAllocator::Release(void);
// public: virtual unsigned long XAUDIO::CBatchAllocator::GetFreeHeapSize(void);
// public: virtual XAUDIO::CDynamicBatchAllocator::~CDynamicBatchAllocator(void);
// [thunk]: public: virtual void * XAUDIO::CDynamicBatchAllocator::`vector deleting destructor'(unsigned int);
// private: static void XAUDIO::CDynamicBatchAllocator::operator delete(void *);
// public: virtual XAUDIO::CStaticBatchAllocator::~CStaticBatchAllocator(void);
// [thunk]: public: virtual void * XAUDIO::CStaticBatchAllocator::`vector deleting destructor'(unsigned int);
// private: static void XAUDIO::CStaticBatchAllocator::operator delete(void *);
// public: virtual void XAUDIO::CStaticBatchAllocator::AbsoluteRelease(void);
// [thunk]: public: virtual unsigned long XAUDIO::CBatchAllocator::AddRef(void);
// [thunk]: public: virtual unsigned long XAUDIO::CBatchAllocator::Release(void);
// public: XAUDIO::CBatchAllocator::CBatchAllocator(void);
// merged_84891BF0;
// public: XAUDIO::CDynamicBatchAllocator::CDynamicBatchAllocator(void);
// merged_84891CD0;
// public: XAUDIO::CStaticBatchAllocator::CStaticBatchAllocator(unsigned long, unsigned long);
// merged_84891DC8;
// public: static long XAUDIO::CDynamicBatchAllocator::CreateObject(class XAUDIO::CBatchAllocator **);
// public: static long XAUDIO::CStaticBatchAllocator::CreateObject(unsigned long, unsigned long, class XAUDIO::CBatchAllocator **);
// XAudioCreateBatchAllocator;
// XAudioPrepareBatchAllocator;

//public: virtual void XAUDIO::CBatchAllocator::GrowHeap(unsigned long)
//{
//    mangled_ppc("?GrowHeap@CBatchAllocator@XAUDIO@@UAAXK@Z");
//};

//public: virtual long XAUDIO::CBatchAllocator::CreateHeap(unsigned long)
//{
//    mangled_ppc("?CreateHeap@CBatchAllocator@XAUDIO@@UAAJK@Z");
//};

//public: virtual void * XAUDIO::CBatchAllocator::Alloc(unsigned long)
//{
//    mangled_ppc("?Alloc@CBatchAllocator@XAUDIO@@UAAPAXK@Z");
//};

//void operator delete(void *)
//{
//    mangled_ppc("??3@YAXPAX@Z");
//};

//private: static void * XAUDIO::CDynamicBatchAllocator::operator new(unsigned int, char const *, unsigned long, char const *)
//{
//    mangled_ppc("??2CDynamicBatchAllocator@XAUDIO@@CAPAXIPBDK0@Z");
//};

//private: static void * XAUDIO::CStaticBatchAllocator::operator new(unsigned int, void **, unsigned int *)
//{
//    mangled_ppc("??2CStaticBatchAllocator@XAUDIO@@CAPAXIPAPAXPAI@Z");
//};

//public: IXAudioBatchAllocator::IXAudioBatchAllocator(void)
//{
//    mangled_ppc("??0IXAudioBatchAllocator@@QAA@XZ");
//};

//public: virtual XAUDIO::CBatchAllocator::~CBatchAllocator(void)
//{
//    mangled_ppc("??1CBatchAllocator@XAUDIO@@UAA@XZ");
//};

//[thunk]: public: virtual void * XAUDIO::CBatchAllocator::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_ECBatchAllocator@XAUDIO@@W3AAPAXI@Z");
//};

//public: virtual unsigned long XAUDIO::CBatchAllocator::AddRef(void)
//{
//    mangled_ppc("?AddRef@CBatchAllocator@XAUDIO@@UAAKXZ");
//};

//public: virtual unsigned long XAUDIO::CBatchAllocator::Release(void)
//{
//    mangled_ppc("?Release@CBatchAllocator@XAUDIO@@UAAKXZ");
//};

//public: virtual unsigned long XAUDIO::CBatchAllocator::GetFreeHeapSize(void)
//{
//    mangled_ppc("?GetFreeHeapSize@CBatchAllocator@XAUDIO@@UAAKXZ");
//};

//public: virtual XAUDIO::CDynamicBatchAllocator::~CDynamicBatchAllocator(void)
//{
//    mangled_ppc("??1CDynamicBatchAllocator@XAUDIO@@UAA@XZ");
//};

//[thunk]: public: virtual void * XAUDIO::CDynamicBatchAllocator::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_ECDynamicBatchAllocator@XAUDIO@@W3AAPAXI@Z");
//};

//private: static void XAUDIO::CDynamicBatchAllocator::operator delete(void *)
//{
//    mangled_ppc("??3CDynamicBatchAllocator@XAUDIO@@CAXPAX@Z");
//};

//public: virtual XAUDIO::CStaticBatchAllocator::~CStaticBatchAllocator(void)
//{
//    mangled_ppc("??1CStaticBatchAllocator@XAUDIO@@UAA@XZ");
//};

//[thunk]: public: virtual void * XAUDIO::CStaticBatchAllocator::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_ECStaticBatchAllocator@XAUDIO@@W3AAPAXI@Z");
//};

//private: static void XAUDIO::CStaticBatchAllocator::operator delete(void *)
//{
//    mangled_ppc("??3CStaticBatchAllocator@XAUDIO@@CAXPAX@Z");
//};

//public: virtual void XAUDIO::CStaticBatchAllocator::AbsoluteRelease(void)
//{
//    mangled_ppc("?AbsoluteRelease@CStaticBatchAllocator@XAUDIO@@UAAXXZ");
//};

//[thunk]: public: virtual unsigned long XAUDIO::CBatchAllocator::AddRef(void)
//{
//    mangled_ppc("?AddRef@CBatchAllocator@XAUDIO@@W3AAKXZ");
//};

//[thunk]: public: virtual unsigned long XAUDIO::CBatchAllocator::Release(void)
//{
//    mangled_ppc("?Release@CBatchAllocator@XAUDIO@@W3AAKXZ");
//};

//public: XAUDIO::CBatchAllocator::CBatchAllocator(void)
//{
//    mangled_ppc("??0CBatchAllocator@XAUDIO@@QAA@XZ");
//};

//merged_84891BF0
//{
//    mangled_ppc("merged_84891BF0");
//};

//public: XAUDIO::CDynamicBatchAllocator::CDynamicBatchAllocator(void)
//{
//    mangled_ppc("??0CDynamicBatchAllocator@XAUDIO@@QAA@XZ");
//};

//merged_84891CD0
//{
//    mangled_ppc("merged_84891CD0");
//};

//public: XAUDIO::CStaticBatchAllocator::CStaticBatchAllocator(unsigned long, unsigned long)
//{
//    mangled_ppc("??0CStaticBatchAllocator@XAUDIO@@QAA@KK@Z");
//};

//merged_84891DC8
//{
//    mangled_ppc("merged_84891DC8");
//};

//public: static long XAUDIO::CDynamicBatchAllocator::CreateObject(class XAUDIO::CBatchAllocator **)
//{
//    mangled_ppc("?CreateObject@CDynamicBatchAllocator@XAUDIO@@SAJPAPAVCBatchAllocator@2@@Z");
//};

//public: static long XAUDIO::CStaticBatchAllocator::CreateObject(unsigned long, unsigned long, class XAUDIO::CBatchAllocator **)
//{
//    mangled_ppc("?CreateObject@CStaticBatchAllocator@XAUDIO@@SAJKKPAPAVCBatchAllocator@2@@Z");
//};

//XAudioCreateBatchAllocator
//{
//    mangled_ppc("XAudioCreateBatchAllocator");
//};

//XAudioPrepareBatchAllocator
//{
//    mangled_ppc("XAudioPrepareBatchAllocator");
//};

