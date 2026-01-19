/* ---------- headers */

#include "xdk\xaudiod\engine.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const *const *const const `char const * __cdecl XAudioGetVoiceTypeString(unsigned char)'::`2'::aVoiceTypes; // "?aVoiceTypes@?1??XAudioGetVoiceTypeString@@YAPBDE@Z@4QBQBDB"
// struct _RTL_CRITICAL_SECTION TerminateRegistrationLock; // "?TerminateRegistrationLock@@3U_RTL_CRITICAL_SECTION@@A"
// protected: static struct _EX_TITLE_TERMINATE_REGISTRATION XAUDIO::CEngine::m_TitleTerminationRecord; // "?m_TitleTerminationRecord@CEngine@XAUDIO@@1U_EX_TITLE_TERMINATE_REGISTRATION@@A"
// protected: static struct _KEVENT XAUDIO::CEngine::m_TitleTerminationEvent; // "?m_TitleTerminationEvent@CEngine@XAUDIO@@1U_KEVENT@@A"
// protected: static struct _KSEMAPHORE XAUDIO::CEngine::m_GetToWorkSemaphore; // "?m_GetToWorkSemaphore@CEngine@XAUDIO@@1U_KSEMAPHORE@@A"
// protected: static struct _KEVENT XAUDIO::CEngine::m_ProcessingCompleteEvent; // "?m_ProcessingCompleteEvent@CEngine@XAUDIO@@1U_KEVENT@@A"
// protected: static struct _KEVENT XAUDIO::CEngine::m_TimeToProcessEvent; // "?m_TimeToProcessEvent@CEngine@XAUDIO@@1U_KEVENT@@A"
// class XAUDIO::CEngine *XAUDIO::g_pEngine; // "?g_pEngine@XAUDIO@@3PAVCEngine@1@A"

// protected: static void XAUDIO::CEngine::AssignThreadUsage(unsigned char, struct XAUDIO::CEngine::ThreadAssignments *);
// protected: void XAUDIO::CEngine::ProcessingThreadSynchronizationCheckpoint(__int64volatile *);
// protected: static void XAUDIO::CEngine::ConvertInit(struct XAUDIOENGINEINIT const *, struct XAUDIOFXMGRINIT *);
// protected: void XAUDIO::CEngine::ProcessVoice(class XAUDIO::CVoice *);
// protected: static void XAUDIO::CEngine::UnregisterTitleTerminateCallback(void);
// char const * XAudioGetVoiceTypeString(unsigned char);
// public: unsigned long IXAudioFrameBuffer::Release(void);
// public: unsigned long IXAudioEffectManager::Release(void);
// void XAUDIO::__AssertValidListEntry(struct _LIST_ENTRY *, enum XAUDIO::ASSERT_VALID_LIST_ENTRY, char const *, unsigned int);
// void XAUDIO::InsertTailListUninit(struct _LIST_ENTRY *, struct _LIST_ENTRY *);
// void XAUDIO::__InsertTailList(struct _LIST_ENTRY *, struct _LIST_ENTRY *);
// struct _LIST_ENTRY * XAUDIO::__RemoveEntryList(struct _LIST_ENTRY *);
// void operator delete(void *);
// public: struct _RTL_CRITICAL_SECTION & XAUDIO::CCriticalSection::operator struct _RTL_CRITICAL_SECTION &(void);
// public: XAUDIO::CBatchAllocatedObject::CBatchAllocatedObject(struct IXAudioBatchAllocator *);
// public: virtual XAUDIO::CBatchAllocatedObject::~CBatchAllocatedObject(void);
// public: virtual void XAUDIO::CBatchAllocatedObject::AbsoluteRelease(void);
// public: long XAUDIO::CMasteringVoice::AttachEngine(int);
// public: void * XAUDIO::CMasteringVoice::GetDriverClientHandle(void);
// public: static void * XAUDIO::CEngine::operator new(unsigned int, struct IXAudioBatchAllocator *);
// public: static void * XAUDIO::CEngine::CEngineVoiceList::operator new[](unsigned int, struct IXAudioBatchAllocator *);
// public: static void XAUDIO::CEngine::CEngineVoiceList::operator delete(void *);
// public: static void XAUDIO::CEngine::CEngineVoiceList::operator delete[](void *);
// protected: static unsigned char XAUDIO::CEngine::GetMaxVoiceChannels(struct XAUDIOENGINEINIT const *);
// public: int XAUDIO::CEngine::IsActiveVoice(class XAUDIO::CVoice *);
// protected: struct XAUDIO::XAUDIOENGINECALLBACKCTX * XAUDIO::CEngine::CallbackHandleToCtx(void *);
// protected: void * XAUDIO::CEngine::CallbackCtxToHandle(struct XAUDIO::XAUDIOENGINECALLBACKCTX *);
// public: int XAUDIO::CEngine::IsEngineThread(void);
// public: XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::CEmbeddedList<class XAUDIO::CVoice>(struct _LIST_ENTRY *);
// private: struct _LIST_ENTRY * XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::ConvertEntry(class XAUDIO::CVoice *);
// private: class XAUDIO::CVoice * XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::ConvertEntry(struct _LIST_ENTRY *);
// public: long XAUDIO::CEngine::RegisterEngineCallback(unsigned char, void (*)(void *), void *, void **);
// protected: void XAUDIO::CEngine::ProcessEngineCallbacks(unsigned char);
// protected: static void XAUDIO::CEngine::ConvertInit(struct XAUDIOENGINEINIT const *, struct XAUDIOFRAMEBUFINIT *);
// protected: void XAUDIO::CEngine::ReleaseVoice(class XAUDIO::CVoice *);
// public: void XAUDIO::CEngine::BlockOnActiveVoice(class XAUDIO::CVoice *);
// protected: void XAUDIO::CEngine::BlockOnActiveEngineCallback(struct XAUDIO::XAUDIOENGINECALLBACKCTX *);
// protected: static void XAUDIO::CEngine::TitleTerminateCallback(struct _EX_TITLE_TERMINATE_REGISTRATION *);
// merged_848736C0;
// public: void XAUDIO::CEngine::CEngineVoiceList::SwapActiveLists(void);
// public: void XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::Remove(class XAUDIO::CVoice *);
// public: void XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::CreateBefore(class XAUDIO::CVoice *, class XAUDIO::CVoice *);
// public: class XAUDIO::CVoice * XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::GetNextEntry(class XAUDIO::CVoice *, int);
// public: static long XAUDIO::CEngine::GetObjectAdditionalSize(struct XAUDIOENGINEINIT const *, unsigned long *);
// public: long XAUDIO::CEngine::UnregisterEngineCallback(void *);
// public: long XAUDIO::CEngine::SynchStart(void);
// public: class XAUDIO::CVoice * XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::PopNextEntry(class XAUDIO::CVoice *, int);
// protected: void XAUDIO::CEngine::ReleaseVoiceList<class XAUDIO::CMasterVoiceList>(class XAUDIO::CMasterVoiceList *);
// public: static long XAUDIO::CEngine::GetObjectSize(struct XAUDIOENGINEINIT const *, unsigned long *);
// protected: void XAUDIO::CEngine::SwapActiveLists(void);
// public: void XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::CreateTail(class XAUDIO::CVoice *);
// public: void XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::Reset(void);
// protected: void XAUDIO::CEngine::ProcessVoiceList(class XAUDIO::CEngine::CEngineVoiceList *);
// public: XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::~CEmbeddedList<class XAUDIO::CVoice>(void);
// protected: void XAUDIO::CEngine::ProcessFrame(bool);
// public: XAUDIO::CMasterVoiceList::CMasterVoiceList(void);
// public: XAUDIO::CActiveVoiceList::CActiveVoiceList(void);
// public: XAUDIO::CMasterVoiceList::~CMasterVoiceList(void);
// public: XAUDIO::CActiveVoiceList::~CActiveVoiceList(void);
// public: XAUDIO::CEngine::CEngineVoiceList::~CEngineVoiceList(void);
// public: virtual XAUDIO::CEngine::~CEngine(void);
// public: static void XAUDIO::CEngine::operator delete(void *);
// protected: static unsigned long XAUDIO::CEngine::SupervisorProcessingThreadEntryPoint(void *);
// protected: static unsigned long XAUDIO::CEngine::PeonProcessingThreadEntryPoint(void *);
// public: void * XAUDIO::CEngine::CEngineVoiceList::`vector deleting destructor'(unsigned int);
// public: long XAUDIO::CEngine::Process(void);
// public: XAUDIO::CEngine::CEngineVoiceList::CEngineVoiceList(void);
// public: XAUDIO::CEngine::CEngine(struct IXAudioBatchAllocator *);
// merged_848756C0;
// protected: long XAUDIO::CEngine::Initialize(struct XAUDIOENGINEINIT const *);
// public: static long XAUDIO::CEngine::CreateObject(struct XAUDIOENGINEINIT const *, struct IXAudioBatchAllocator *, class XAUDIO::CEngine **);

//protected: static void XAUDIO::CEngine::AssignThreadUsage(unsigned char, struct XAUDIO::CEngine::ThreadAssignments *)
//{
//    mangled_ppc("?AssignThreadUsage@CEngine@XAUDIO@@KAXEPAUThreadAssignments@12@@Z");
//};

//protected: void XAUDIO::CEngine::ProcessingThreadSynchronizationCheckpoint(__int64volatile *)
//{
//    mangled_ppc("?ProcessingThreadSynchronizationCheckpoint@CEngine@XAUDIO@@IAAXPC_J@Z");
//};

//protected: static void XAUDIO::CEngine::ConvertInit(struct XAUDIOENGINEINIT const *, struct XAUDIOFXMGRINIT *)
//{
//    mangled_ppc("?ConvertInit@CEngine@XAUDIO@@KAXPBUXAUDIOENGINEINIT@@PAUXAUDIOFXMGRINIT@@@Z");
//};

//protected: void XAUDIO::CEngine::ProcessVoice(class XAUDIO::CVoice *)
//{
//    mangled_ppc("?ProcessVoice@CEngine@XAUDIO@@IAAXPAVCVoice@2@@Z");
//};

//protected: static void XAUDIO::CEngine::UnregisterTitleTerminateCallback(void)
//{
//    mangled_ppc("?UnregisterTitleTerminateCallback@CEngine@XAUDIO@@KAXXZ");
//};

//char const * XAudioGetVoiceTypeString(unsigned char)
//{
//    mangled_ppc("?XAudioGetVoiceTypeString@@YAPBDE@Z");
//};

//public: unsigned long IXAudioFrameBuffer::Release(void)
//{
//    mangled_ppc("?Release@IXAudioFrameBuffer@@QAAKXZ");
//};

//public: unsigned long IXAudioEffectManager::Release(void)
//{
//    mangled_ppc("?Release@IXAudioEffectManager@@QAAKXZ");
//};

//void XAUDIO::__AssertValidListEntry(struct _LIST_ENTRY *, enum XAUDIO::ASSERT_VALID_LIST_ENTRY, char const *, unsigned int)
//{
//    mangled_ppc("?__AssertValidListEntry@XAUDIO@@YAXPAU_LIST_ENTRY@@W4ASSERT_VALID_LIST_ENTRY@1@PBDI@Z");
//};

//void XAUDIO::InsertTailListUninit(struct _LIST_ENTRY *, struct _LIST_ENTRY *)
//{
//    mangled_ppc("?InsertTailListUninit@XAUDIO@@YAXPAU_LIST_ENTRY@@0@Z");
//};

//void XAUDIO::__InsertTailList(struct _LIST_ENTRY *, struct _LIST_ENTRY *)
//{
//    mangled_ppc("?__InsertTailList@XAUDIO@@YAXPAU_LIST_ENTRY@@0@Z");
//};

//struct _LIST_ENTRY * XAUDIO::__RemoveEntryList(struct _LIST_ENTRY *)
//{
//    mangled_ppc("?__RemoveEntryList@XAUDIO@@YAPAU_LIST_ENTRY@@PAU2@@Z");
//};

//void operator delete(void *)
//{
//    mangled_ppc("??3@YAXPAX@Z");
//};

//public: struct _RTL_CRITICAL_SECTION & XAUDIO::CCriticalSection::operator struct _RTL_CRITICAL_SECTION &(void)
//{
//    mangled_ppc("??BCCriticalSection@XAUDIO@@QAAAAU_RTL_CRITICAL_SECTION@@XZ");
//};

//public: XAUDIO::CBatchAllocatedObject::CBatchAllocatedObject(struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??0CBatchAllocatedObject@XAUDIO@@QAA@PAUIXAudioBatchAllocator@@@Z");
//};

//public: virtual XAUDIO::CBatchAllocatedObject::~CBatchAllocatedObject(void)
//{
//    mangled_ppc("??1CBatchAllocatedObject@XAUDIO@@UAA@XZ");
//};

//public: virtual void XAUDIO::CBatchAllocatedObject::AbsoluteRelease(void)
//{
//    mangled_ppc("?AbsoluteRelease@CBatchAllocatedObject@XAUDIO@@UAAXXZ");
//};

//public: long XAUDIO::CMasteringVoice::AttachEngine(int)
//{
//    mangled_ppc("?AttachEngine@CMasteringVoice@XAUDIO@@QAAJH@Z");
//};

//public: void * XAUDIO::CMasteringVoice::GetDriverClientHandle(void)
//{
//    mangled_ppc("?GetDriverClientHandle@CMasteringVoice@XAUDIO@@QAAPAXXZ");
//};

//public: static void * XAUDIO::CEngine::operator new(unsigned int, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??2CEngine@XAUDIO@@SAPAXIPAUIXAudioBatchAllocator@@@Z");
//};

//public: static void * XAUDIO::CEngine::CEngineVoiceList::operator new[](unsigned int, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??_UCEngineVoiceList@CEngine@XAUDIO@@SAPAXIPAUIXAudioBatchAllocator@@@Z");
//};

//public: static void XAUDIO::CEngine::CEngineVoiceList::operator delete(void *)
//{
//    mangled_ppc("??3CEngineVoiceList@CEngine@XAUDIO@@SAXPAX@Z");
//};

//public: static void XAUDIO::CEngine::CEngineVoiceList::operator delete[](void *)
//{
//    mangled_ppc("??_VCEngineVoiceList@CEngine@XAUDIO@@SAXPAX@Z");
//};

//protected: static unsigned char XAUDIO::CEngine::GetMaxVoiceChannels(struct XAUDIOENGINEINIT const *)
//{
//    mangled_ppc("?GetMaxVoiceChannels@CEngine@XAUDIO@@KAEPBUXAUDIOENGINEINIT@@@Z");
//};

//public: int XAUDIO::CEngine::IsActiveVoice(class XAUDIO::CVoice *)
//{
//    mangled_ppc("?IsActiveVoice@CEngine@XAUDIO@@QAAHPAVCVoice@2@@Z");
//};

//protected: struct XAUDIO::XAUDIOENGINECALLBACKCTX * XAUDIO::CEngine::CallbackHandleToCtx(void *)
//{
//    mangled_ppc("?CallbackHandleToCtx@CEngine@XAUDIO@@IAAPAUXAUDIOENGINECALLBACKCTX@2@PAX@Z");
//};

//protected: void * XAUDIO::CEngine::CallbackCtxToHandle(struct XAUDIO::XAUDIOENGINECALLBACKCTX *)
//{
//    mangled_ppc("?CallbackCtxToHandle@CEngine@XAUDIO@@IAAPAXPAUXAUDIOENGINECALLBACKCTX@2@@Z");
//};

//public: int XAUDIO::CEngine::IsEngineThread(void)
//{
//    mangled_ppc("?IsEngineThread@CEngine@XAUDIO@@QAAHXZ");
//};

//public: XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::CEmbeddedList<class XAUDIO::CVoice>(struct _LIST_ENTRY *)
//{
//    mangled_ppc("??0?$CEmbeddedList@VCVoice@XAUDIO@@@XAUDIO@@QAA@PAU_LIST_ENTRY@@@Z");
//};

//private: struct _LIST_ENTRY * XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::ConvertEntry(class XAUDIO::CVoice *)
//{
//    mangled_ppc("?ConvertEntry@?$CEmbeddedList@VCVoice@XAUDIO@@@XAUDIO@@AAAPAU_LIST_ENTRY@@PAVCVoice@2@@Z");
//};

//private: class XAUDIO::CVoice * XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::ConvertEntry(struct _LIST_ENTRY *)
//{
//    mangled_ppc("?ConvertEntry@?$CEmbeddedList@VCVoice@XAUDIO@@@XAUDIO@@AAAPAVCVoice@2@PAU_LIST_ENTRY@@@Z");
//};

//public: long XAUDIO::CEngine::RegisterEngineCallback(unsigned char, void (*)(void *), void *, void **)
//{
//    mangled_ppc("?RegisterEngineCallback@CEngine@XAUDIO@@QAAJEP6AXPAX@Z0PAPAX@Z");
//};

//protected: void XAUDIO::CEngine::ProcessEngineCallbacks(unsigned char)
//{
//    mangled_ppc("?ProcessEngineCallbacks@CEngine@XAUDIO@@IAAXE@Z");
//};

//protected: static void XAUDIO::CEngine::ConvertInit(struct XAUDIOENGINEINIT const *, struct XAUDIOFRAMEBUFINIT *)
//{
//    mangled_ppc("?ConvertInit@CEngine@XAUDIO@@KAXPBUXAUDIOENGINEINIT@@PAUXAUDIOFRAMEBUFINIT@@@Z");
//};

//protected: void XAUDIO::CEngine::ReleaseVoice(class XAUDIO::CVoice *)
//{
//    mangled_ppc("?ReleaseVoice@CEngine@XAUDIO@@IAAXPAVCVoice@2@@Z");
//};

//public: void XAUDIO::CEngine::BlockOnActiveVoice(class XAUDIO::CVoice *)
//{
//    mangled_ppc("?BlockOnActiveVoice@CEngine@XAUDIO@@QAAXPAVCVoice@2@@Z");
//};

//protected: void XAUDIO::CEngine::BlockOnActiveEngineCallback(struct XAUDIO::XAUDIOENGINECALLBACKCTX *)
//{
//    mangled_ppc("?BlockOnActiveEngineCallback@CEngine@XAUDIO@@IAAXPAUXAUDIOENGINECALLBACKCTX@2@@Z");
//};

//protected: static void XAUDIO::CEngine::TitleTerminateCallback(struct _EX_TITLE_TERMINATE_REGISTRATION *)
//{
//    mangled_ppc("?TitleTerminateCallback@CEngine@XAUDIO@@KAXPAU_EX_TITLE_TERMINATE_REGISTRATION@@@Z");
//};

//merged_848736C0
//{
//    mangled_ppc("merged_848736C0");
//};

//public: void XAUDIO::CEngine::CEngineVoiceList::SwapActiveLists(void)
//{
//    mangled_ppc("?SwapActiveLists@CEngineVoiceList@CEngine@XAUDIO@@QAAXXZ");
//};

//public: void XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::Remove(class XAUDIO::CVoice *)
//{
//    mangled_ppc("?Remove@?$CEmbeddedList@VCVoice@XAUDIO@@@XAUDIO@@QAAXPAVCVoice@2@@Z");
//};

//public: void XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::CreateBefore(class XAUDIO::CVoice *, class XAUDIO::CVoice *)
//{
//    mangled_ppc("?CreateBefore@?$CEmbeddedList@VCVoice@XAUDIO@@@XAUDIO@@QAAXPAVCVoice@2@0@Z");
//};

//public: class XAUDIO::CVoice * XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::GetNextEntry(class XAUDIO::CVoice *, int)
//{
//    mangled_ppc("?GetNextEntry@?$CEmbeddedList@VCVoice@XAUDIO@@@XAUDIO@@QAAPAVCVoice@2@PAV32@H@Z");
//};

//public: static long XAUDIO::CEngine::GetObjectAdditionalSize(struct XAUDIOENGINEINIT const *, unsigned long *)
//{
//    mangled_ppc("?GetObjectAdditionalSize@CEngine@XAUDIO@@SAJPBUXAUDIOENGINEINIT@@PAK@Z");
//};

//public: long XAUDIO::CEngine::UnregisterEngineCallback(void *)
//{
//    mangled_ppc("?UnregisterEngineCallback@CEngine@XAUDIO@@QAAJPAX@Z");
//};

//public: long XAUDIO::CEngine::SynchStart(void)
//{
//    mangled_ppc("?SynchStart@CEngine@XAUDIO@@QAAJXZ");
//};

//public: class XAUDIO::CVoice * XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::PopNextEntry(class XAUDIO::CVoice *, int)
//{
//    mangled_ppc("?PopNextEntry@?$CEmbeddedList@VCVoice@XAUDIO@@@XAUDIO@@QAAPAVCVoice@2@PAV32@H@Z");
//};

//protected: void XAUDIO::CEngine::ReleaseVoiceList<class XAUDIO::CMasterVoiceList>(class XAUDIO::CMasterVoiceList *)
//{
//    mangled_ppc("??$ReleaseVoiceList@VCMasterVoiceList@XAUDIO@@@CEngine@XAUDIO@@IAAXPAVCMasterVoiceList@1@@Z");
//};

//public: static long XAUDIO::CEngine::GetObjectSize(struct XAUDIOENGINEINIT const *, unsigned long *)
//{
//    mangled_ppc("?GetObjectSize@CEngine@XAUDIO@@SAJPBUXAUDIOENGINEINIT@@PAK@Z");
//};

//protected: void XAUDIO::CEngine::SwapActiveLists(void)
//{
//    mangled_ppc("?SwapActiveLists@CEngine@XAUDIO@@IAAXXZ");
//};

//public: void XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::CreateTail(class XAUDIO::CVoice *)
//{
//    mangled_ppc("?CreateTail@?$CEmbeddedList@VCVoice@XAUDIO@@@XAUDIO@@QAAXPAVCVoice@2@@Z");
//};

//public: void XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::Reset(void)
//{
//    mangled_ppc("?Reset@?$CEmbeddedList@VCVoice@XAUDIO@@@XAUDIO@@QAAXXZ");
//};

//protected: void XAUDIO::CEngine::ProcessVoiceList(class XAUDIO::CEngine::CEngineVoiceList *)
//{
//    mangled_ppc("?ProcessVoiceList@CEngine@XAUDIO@@IAAXPAVCEngineVoiceList@12@@Z");
//};

//public: XAUDIO::CEmbeddedList<class XAUDIO::CVoice>::~CEmbeddedList<class XAUDIO::CVoice>(void)
//{
//    mangled_ppc("??1?$CEmbeddedList@VCVoice@XAUDIO@@@XAUDIO@@QAA@XZ");
//};

//protected: void XAUDIO::CEngine::ProcessFrame(bool)
//{
//    mangled_ppc("?ProcessFrame@CEngine@XAUDIO@@IAAX_N@Z");
//};

//public: XAUDIO::CMasterVoiceList::CMasterVoiceList(void)
//{
//    mangled_ppc("??0CMasterVoiceList@XAUDIO@@QAA@XZ");
//};

//public: XAUDIO::CActiveVoiceList::CActiveVoiceList(void)
//{
//    mangled_ppc("??0CActiveVoiceList@XAUDIO@@QAA@XZ");
//};

//public: XAUDIO::CMasterVoiceList::~CMasterVoiceList(void)
//{
//    mangled_ppc("??1CMasterVoiceList@XAUDIO@@QAA@XZ");
//};

//public: XAUDIO::CActiveVoiceList::~CActiveVoiceList(void)
//{
//    mangled_ppc("??1CActiveVoiceList@XAUDIO@@QAA@XZ");
//};

//public: XAUDIO::CEngine::CEngineVoiceList::~CEngineVoiceList(void)
//{
//    mangled_ppc("??1CEngineVoiceList@CEngine@XAUDIO@@QAA@XZ");
//};

//public: virtual XAUDIO::CEngine::~CEngine(void)
//{
//    mangled_ppc("??1CEngine@XAUDIO@@UAA@XZ");
//};

//public: static void XAUDIO::CEngine::operator delete(void *)
//{
//    mangled_ppc("??3CEngine@XAUDIO@@SAXPAX@Z");
//};

//protected: static unsigned long XAUDIO::CEngine::SupervisorProcessingThreadEntryPoint(void *)
//{
//    mangled_ppc("?SupervisorProcessingThreadEntryPoint@CEngine@XAUDIO@@KAKPAX@Z");
//};

//protected: static unsigned long XAUDIO::CEngine::PeonProcessingThreadEntryPoint(void *)
//{
//    mangled_ppc("?PeonProcessingThreadEntryPoint@CEngine@XAUDIO@@KAKPAX@Z");
//};

//public: void * XAUDIO::CEngine::CEngineVoiceList::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_ECEngineVoiceList@CEngine@XAUDIO@@QAAPAXI@Z");
//};

//public: long XAUDIO::CEngine::Process(void)
//{
//    mangled_ppc("?Process@CEngine@XAUDIO@@QAAJXZ");
//};

//public: XAUDIO::CEngine::CEngineVoiceList::CEngineVoiceList(void)
//{
//    mangled_ppc("??0CEngineVoiceList@CEngine@XAUDIO@@QAA@XZ");
//};

//public: XAUDIO::CEngine::CEngine(struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??0CEngine@XAUDIO@@QAA@PAUIXAudioBatchAllocator@@@Z");
//};

//merged_848756C0
//{
//    mangled_ppc("merged_848756C0");
//};

//protected: long XAUDIO::CEngine::Initialize(struct XAUDIOENGINEINIT const *)
//{
//    mangled_ppc("?Initialize@CEngine@XAUDIO@@IAAJPBUXAUDIOENGINEINIT@@@Z");
//};

//public: static long XAUDIO::CEngine::CreateObject(struct XAUDIOENGINEINIT const *, struct IXAudioBatchAllocator *, class XAUDIO::CEngine **)
//{
//    mangled_ppc("?CreateObject@CEngine@XAUDIO@@SAJPBUXAUDIOENGINEINIT@@PAUIXAudioBatchAllocator@@PAPAV12@@Z");
//};

