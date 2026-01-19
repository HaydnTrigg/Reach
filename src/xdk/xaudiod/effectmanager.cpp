/* ---------- headers */

#include "xdk\xaudiod\effectmanager.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// XAudioEffectManager_AddRef;
// XAudioEffectManager_Release;
// XAudioEffectManager_QueryEffectSize;
// XAudioEffectManager_CreateEffect;
// XAudioEffectManager_RegisterEffects;
// XAudioEffectManager_UnregisterEffects;
// protected: struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY * XAUDIO::CEffectManager::GetFreeDynamicEffectEntry(struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY *);
// void operator delete(void *);
// public: static void * XAUDIO::CEffectManager::operator new(unsigned int, struct IXAudioBatchAllocator *);
// protected: static int XAUDIO::CEffectManager::IsValidStaticFXID(unsigned int);
// protected: static int XAUDIO::CEffectManager::IsValidDynamicFXID(unsigned int);
// protected: static unsigned int XAUDIO::CEffectManager::StaticFXIDToIndex(unsigned char);
// protected: static unsigned int XAUDIO::CEffectManager::DynamicFXIDToIndex(unsigned char);
// protected: static unsigned char XAUDIO::CEffectManager::IndexToDynamicFXID(unsigned int);
// protected: unsigned char XAUDIO::CEffectManager::GetDynamicEffectId(struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY *);
// protected: void XAUDIO::CEffectManager::RegisterDynamicEffect(struct XAUDIOFXTABLEENTRY *, struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY *);
// protected: void XAUDIO::CEffectManager::UnregisterDynamicEffect(struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY *);
// protected: struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY * XAUDIO::CEffectManager::GetStaticEffectTableEntry(unsigned char);
// protected: struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY * XAUDIO::CEffectManager::GetDynamicEffectTableEntry(unsigned char);
// protected: struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY * XAUDIO::CEffectManager::GetEffectTableEntry(unsigned char);
// public: virtual XAUDIO::CEffectManager::~CEffectManager(void);
// public: static void XAUDIO::CEffectManager::operator delete(void *);
// public: virtual unsigned long XAUDIO::CEffectManager::AddRef(void);
// public: virtual unsigned long XAUDIO::CEffectManager::Release(void);
// public: virtual void XAUDIO::CEffectManager::QueryInterface(struct IXAudioEffectManager **);
// public: virtual long XAUDIO::CEffectManager::QueryEffectSize(struct XAUDIOFXINIT const *, unsigned long *);
// public: virtual long XAUDIO::CEffectManager::CreateEffect(struct XAUDIOFXINIT const *, struct IXAudioBatchAllocator *, struct IXAudioEffect **);
// public: virtual long XAUDIO::CEffectManager::RegisterEffects(struct XAUDIOFXREGISTER const *);
// public: virtual long XAUDIO::CEffectManager::UnregisterEffects(struct XAUDIOFXUNREGISTER const *);
// protected: static unsigned int XAUDIO::CEffectManager::GetEffectTableSize(struct XAUDIOFXTABLE const *);
// public: static unsigned int XAUDIO::CEffectManager::GetObjectAdditionalSize(struct XAUDIOFXMGRINIT const *);
// public: XAUDIO::CEffectManager::CEffectManager(struct XAUDIOFXMGRINIT const *, struct IXAudioBatchAllocator *);
// merged_8487BCD0;
// public: static unsigned int XAUDIO::CEffectManager::GetObjectSize(struct XAUDIOFXMGRINIT const *);
// XAudioQueryEffectManagerSize;
// XAudioCreateEffectManager;

//XAudioEffectManager_AddRef
//{
//    mangled_ppc("XAudioEffectManager_AddRef");
//};

//XAudioEffectManager_Release
//{
//    mangled_ppc("XAudioEffectManager_Release");
//};

//XAudioEffectManager_QueryEffectSize
//{
//    mangled_ppc("XAudioEffectManager_QueryEffectSize");
//};

//XAudioEffectManager_CreateEffect
//{
//    mangled_ppc("XAudioEffectManager_CreateEffect");
//};

//XAudioEffectManager_RegisterEffects
//{
//    mangled_ppc("XAudioEffectManager_RegisterEffects");
//};

//XAudioEffectManager_UnregisterEffects
//{
//    mangled_ppc("XAudioEffectManager_UnregisterEffects");
//};

//protected: struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY * XAUDIO::CEffectManager::GetFreeDynamicEffectEntry(struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY *)
//{
//    mangled_ppc("?GetFreeDynamicEffectEntry@CEffectManager@XAUDIO@@IAAPAUXAUDIOFXMGRFXTABLEENTRY@2@PAU32@@Z");
//};

//void operator delete(void *)
//{
//    mangled_ppc("??3@YAXPAX@Z");
//};

//public: static void * XAUDIO::CEffectManager::operator new(unsigned int, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??2CEffectManager@XAUDIO@@SAPAXIPAUIXAudioBatchAllocator@@@Z");
//};

//protected: static int XAUDIO::CEffectManager::IsValidStaticFXID(unsigned int)
//{
//    mangled_ppc("?IsValidStaticFXID@CEffectManager@XAUDIO@@KAHI@Z");
//};

//protected: static int XAUDIO::CEffectManager::IsValidDynamicFXID(unsigned int)
//{
//    mangled_ppc("?IsValidDynamicFXID@CEffectManager@XAUDIO@@KAHI@Z");
//};

//protected: static unsigned int XAUDIO::CEffectManager::StaticFXIDToIndex(unsigned char)
//{
//    mangled_ppc("?StaticFXIDToIndex@CEffectManager@XAUDIO@@KAIE@Z");
//};

//protected: static unsigned int XAUDIO::CEffectManager::DynamicFXIDToIndex(unsigned char)
//{
//    mangled_ppc("?DynamicFXIDToIndex@CEffectManager@XAUDIO@@KAIE@Z");
//};

//protected: static unsigned char XAUDIO::CEffectManager::IndexToDynamicFXID(unsigned int)
//{
//    mangled_ppc("?IndexToDynamicFXID@CEffectManager@XAUDIO@@KAEI@Z");
//};

//protected: unsigned char XAUDIO::CEffectManager::GetDynamicEffectId(struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY *)
//{
//    mangled_ppc("?GetDynamicEffectId@CEffectManager@XAUDIO@@IAAEPAUXAUDIOFXMGRFXTABLEENTRY@2@@Z");
//};

//protected: void XAUDIO::CEffectManager::RegisterDynamicEffect(struct XAUDIOFXTABLEENTRY *, struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY *)
//{
//    mangled_ppc("?RegisterDynamicEffect@CEffectManager@XAUDIO@@IAAXPAUXAUDIOFXTABLEENTRY@@PAUXAUDIOFXMGRFXTABLEENTRY@2@@Z");
//};

//protected: void XAUDIO::CEffectManager::UnregisterDynamicEffect(struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY *)
//{
//    mangled_ppc("?UnregisterDynamicEffect@CEffectManager@XAUDIO@@IAAXPAUXAUDIOFXMGRFXTABLEENTRY@2@@Z");
//};

//protected: struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY * XAUDIO::CEffectManager::GetStaticEffectTableEntry(unsigned char)
//{
//    mangled_ppc("?GetStaticEffectTableEntry@CEffectManager@XAUDIO@@IAAPAUXAUDIOFXMGRFXTABLEENTRY@2@E@Z");
//};

//protected: struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY * XAUDIO::CEffectManager::GetDynamicEffectTableEntry(unsigned char)
//{
//    mangled_ppc("?GetDynamicEffectTableEntry@CEffectManager@XAUDIO@@IAAPAUXAUDIOFXMGRFXTABLEENTRY@2@E@Z");
//};

//protected: struct XAUDIO::XAUDIOFXMGRFXTABLEENTRY * XAUDIO::CEffectManager::GetEffectTableEntry(unsigned char)
//{
//    mangled_ppc("?GetEffectTableEntry@CEffectManager@XAUDIO@@IAAPAUXAUDIOFXMGRFXTABLEENTRY@2@E@Z");
//};

//public: virtual XAUDIO::CEffectManager::~CEffectManager(void)
//{
//    mangled_ppc("??1CEffectManager@XAUDIO@@UAA@XZ");
//};

//public: static void XAUDIO::CEffectManager::operator delete(void *)
//{
//    mangled_ppc("??3CEffectManager@XAUDIO@@SAXPAX@Z");
//};

//public: virtual unsigned long XAUDIO::CEffectManager::AddRef(void)
//{
//    mangled_ppc("?AddRef@CEffectManager@XAUDIO@@UAAKXZ");
//};

//public: virtual unsigned long XAUDIO::CEffectManager::Release(void)
//{
//    mangled_ppc("?Release@CEffectManager@XAUDIO@@UAAKXZ");
//};

//public: virtual void XAUDIO::CEffectManager::QueryInterface(struct IXAudioEffectManager **)
//{
//    mangled_ppc("?QueryInterface@CEffectManager@XAUDIO@@UAAXPAPAUIXAudioEffectManager@@@Z");
//};

//public: virtual long XAUDIO::CEffectManager::QueryEffectSize(struct XAUDIOFXINIT const *, unsigned long *)
//{
//    mangled_ppc("?QueryEffectSize@CEffectManager@XAUDIO@@UAAJPBUXAUDIOFXINIT@@PAK@Z");
//};

//public: virtual long XAUDIO::CEffectManager::CreateEffect(struct XAUDIOFXINIT const *, struct IXAudioBatchAllocator *, struct IXAudioEffect **)
//{
//    mangled_ppc("?CreateEffect@CEffectManager@XAUDIO@@UAAJPBUXAUDIOFXINIT@@PAUIXAudioBatchAllocator@@PAPAUIXAudioEffect@@@Z");
//};

//public: virtual long XAUDIO::CEffectManager::RegisterEffects(struct XAUDIOFXREGISTER const *)
//{
//    mangled_ppc("?RegisterEffects@CEffectManager@XAUDIO@@UAAJPBUXAUDIOFXREGISTER@@@Z");
//};

//public: virtual long XAUDIO::CEffectManager::UnregisterEffects(struct XAUDIOFXUNREGISTER const *)
//{
//    mangled_ppc("?UnregisterEffects@CEffectManager@XAUDIO@@UAAJPBUXAUDIOFXUNREGISTER@@@Z");
//};

//protected: static unsigned int XAUDIO::CEffectManager::GetEffectTableSize(struct XAUDIOFXTABLE const *)
//{
//    mangled_ppc("?GetEffectTableSize@CEffectManager@XAUDIO@@KAIPBUXAUDIOFXTABLE@@@Z");
//};

//public: static unsigned int XAUDIO::CEffectManager::GetObjectAdditionalSize(struct XAUDIOFXMGRINIT const *)
//{
//    mangled_ppc("?GetObjectAdditionalSize@CEffectManager@XAUDIO@@SAIPBUXAUDIOFXMGRINIT@@@Z");
//};

//public: XAUDIO::CEffectManager::CEffectManager(struct XAUDIOFXMGRINIT const *, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??0CEffectManager@XAUDIO@@QAA@PBUXAUDIOFXMGRINIT@@PAUIXAudioBatchAllocator@@@Z");
//};

//merged_8487BCD0
//{
//    mangled_ppc("merged_8487BCD0");
//};

//public: static unsigned int XAUDIO::CEffectManager::GetObjectSize(struct XAUDIOFXMGRINIT const *)
//{
//    mangled_ppc("?GetObjectSize@CEffectManager@XAUDIO@@SAIPBUXAUDIOFXMGRINIT@@@Z");
//};

//XAudioQueryEffectManagerSize
//{
//    mangled_ppc("XAudioQueryEffectManagerSize");
//};

//XAudioCreateEffectManager
//{
//    mangled_ppc("XAudioCreateEffectManager");
//};

