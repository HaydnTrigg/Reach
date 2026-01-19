/* ---------- headers */

#include "xdk\xaudiod\routereffect.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// __vmx@000000003f8000004000000040400000; // "__vmx@000000003f8000004000000040400000"
// const XAUDIO::CRouterEffect::`vftable'{for `IXAudioRouterEffect'}; // "??_7CRouterEffect@XAUDIO@@6BIXAudioRouterEffect@@@"
// const XAUDIO::CRouterEffect::`vftable'{for `XAUDIO::CEffect'}; // "??_7CRouterEffect@XAUDIO@@6BCEffect@1@@"

// public: virtual long XAUDIO::CRouterEffect::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *);
// public: virtual long XAUDIO::CRouterEffect::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *);
// unsigned int XAudioGetFrameBufferOffset(unsigned int, unsigned int, unsigned int);
// int XAudioIsValidAlignedVectorAddress(void const *);
// void XAudioAssertValidAlignedVectorAddress(void const *);
// void XAudioLoadAlignedVector(struct __vector4*, void const *);
// void XAudioStoreAlignedVector(void *, struct __vector4const *);
// void XAudioSplatVectorFloat(struct __vector4*, float const *);
// void XAudioAddVectorFloat(struct __vector4*, struct __vector4const *, struct __vector4const *);
// void XAudioMultiplyVectorFloat(struct __vector4*, struct __vector4const *, struct __vector4const *);
// void XAudioMultiplyAndAddVectorFloat(struct __vector4*, struct __vector4const *, struct __vector4const *, struct __vector4const *);
// float const * XAudioLoadDeinterleavedChannelVector(struct __vector4*, float const *);
// float * XAudioStoreDeinterleavedChannelVector(float *, struct __vector4const *);
// float const * XAudioLoadFrameBufferChannelVector(struct __vector4*, float const *);
// float * XAudioStoreFrameBufferChannelVector(float *, struct __vector4const *);
// void XAudioCopySamples(struct __vector4*, struct __vector4const *, struct __vector4const *);
// void XAudioCreateVolumeAndDeltaVectors(struct __vector4*, struct __vector4*, float, float, unsigned int);
// void XAudioCopyFrameBufferChannel(float *, float const *, struct __vector4*, struct __vector4const *, unsigned int);
// void XAudioCopyFrameBufferChannel(float *, float const *, unsigned int);
// void XAudioZeroFrameBufferChannel(float *, unsigned int);
// void operator delete(void *);
// public: static void * XAUDIO::CRouterEffect::operator new(unsigned int, struct IXAudioBatchAllocator *);
// protected: static unsigned char XAUDIO::CRouterEffect::GetMaxChannelMapEntryCount(unsigned char, struct XAUDIOCHANNELMAP const *);
// public: XAUDIO::CAutoLock<class XAUDIO::CSpinLock>::CAutoLock<class XAUDIO::CSpinLock>(class XAUDIO::CSpinLock *);
// public: XAUDIO::CAutoLock<class XAUDIO::CSpinLock>::~CAutoLock<class XAUDIO::CSpinLock>(void);
// public: virtual XAUDIO::CRouterEffect::~CRouterEffect(void);
// public: virtual unsigned long XAUDIO::CRouterEffect::AddRef(void);
// public: virtual unsigned long XAUDIO::CRouterEffect::Release(void);
// public: virtual long XAUDIO::CRouterEffect::GetInfo(struct XAUDIOFXINFO *);
// public: virtual long XAUDIO::CRouterEffect::GetContext(void **);
// public: virtual long XAUDIO::CRouterEffect::GetMode(unsigned char *);
// public: virtual long XAUDIO::CRouterEffect::SetMode(unsigned char);
// public: virtual long XAUDIO::CRouterEffect::SetChannelVolume(struct XAUDIOCHANNELVOLUME const *);
// public: virtual void XAUDIO::CRouterEffect::QueryInterface(struct IXAudioRouterEffect **);
// public: virtual long XAUDIO::CRouterEffect::Initialize(struct XAUDIOROUTERFXINIT const *, struct IXAudioBatchAllocator *);
// public: virtual long XAUDIO::CRouterEffect::GetChannelMap(struct XAUDIOCHANNELMAP *, unsigned long, unsigned long *);
// public: virtual long XAUDIO::CRouterEffect::SetChannelMap(struct XAUDIOCHANNELMAP const *);
// public: virtual long XAUDIO::CRouterEffect::GetChannelVolume(struct XAUDIOCHANNELVOLUME *);
// public: virtual long XAUDIO::CRouterEffect::SetChannelVolume(struct XAUDIOCHANNELVOLUME const *, bool);
// void XAudioMixFrameBufferChannel(float *, float const *, struct __vector4*, struct __vector4const *, unsigned int);
// public: static unsigned int XAUDIO::CRouterEffect::GetObjectAdditionalSize(struct XAUDIOROUTERFXINIT const *);
// public: IXAudioRouterEffect::IXAudioRouterEffect(void);
// public: virtual long XAUDIO::CRouterEffect::Process(struct IXAudioFrameBuffer *, struct IXAudioFrameBuffer *);
// public: static unsigned int XAUDIO::CRouterEffect::GetObjectSize(struct XAUDIOROUTERFXINIT const *);
// XAudioQueryRouterEffectSize;
// public: XAUDIO::CRouterEffect::CRouterEffect(struct XAUDIOROUTERFXINIT const *, struct IXAudioBatchAllocator *);
// [thunk]: public: virtual void * XAUDIO::CRouterEffect::`vector deleting destructor'(unsigned int);
// public: static void XAUDIO::CRouterEffect::operator delete(void *);
// public: virtual void XAUDIO::CRouterEffect::QueryInterface(struct IXAudioEffect **);
// [thunk]: public: virtual unsigned long XAUDIO::CRouterEffect::Release(void);
// [thunk]: public: virtual long XAUDIO::CRouterEffect::GetContext(void **);
// [thunk]: public: virtual unsigned long XAUDIO::CRouterEffect::AddRef(void);
// merged_8486E650;
// XAudioCreateRouterEffect;

//public: virtual long XAUDIO::CRouterEffect::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *)
//{
//    mangled_ppc("?GetParam@CRouterEffect@XAUDIO@@UAAJEEPATXAUDIOFXPARAM@@@Z");
//};

//public: virtual long XAUDIO::CRouterEffect::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *)
//{
//    mangled_ppc("?SetParam@CRouterEffect@XAUDIO@@UAAJEEPBTXAUDIOFXPARAM@@@Z");
//};

//unsigned int XAudioGetFrameBufferOffset(unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?XAudioGetFrameBufferOffset@@YAIIII@Z");
//};

//int XAudioIsValidAlignedVectorAddress(void const *)
//{
//    mangled_ppc("?XAudioIsValidAlignedVectorAddress@@YAHPBX@Z");
//};

//void XAudioAssertValidAlignedVectorAddress(void const *)
//{
//    mangled_ppc("?XAudioAssertValidAlignedVectorAddress@@YAXPBX@Z");
//};

//void XAudioLoadAlignedVector(struct __vector4*, void const *)
//{
//    mangled_ppc("?XAudioLoadAlignedVector@@YAXPAU__vector4@@PBX@Z");
//};

//void XAudioStoreAlignedVector(void *, struct __vector4const *)
//{
//    mangled_ppc("?XAudioStoreAlignedVector@@YAXPAXPBU__vector4@@@Z");
//};

//void XAudioSplatVectorFloat(struct __vector4*, float const *)
//{
//    mangled_ppc("?XAudioSplatVectorFloat@@YAXPAU__vector4@@PBM@Z");
//};

//void XAudioAddVectorFloat(struct __vector4*, struct __vector4const *, struct __vector4const *)
//{
//    mangled_ppc("?XAudioAddVectorFloat@@YAXPAU__vector4@@PBU1@1@Z");
//};

//void XAudioMultiplyVectorFloat(struct __vector4*, struct __vector4const *, struct __vector4const *)
//{
//    mangled_ppc("?XAudioMultiplyVectorFloat@@YAXPAU__vector4@@PBU1@1@Z");
//};

//void XAudioMultiplyAndAddVectorFloat(struct __vector4*, struct __vector4const *, struct __vector4const *, struct __vector4const *)
//{
//    mangled_ppc("?XAudioMultiplyAndAddVectorFloat@@YAXPAU__vector4@@PBU1@11@Z");
//};

//float const * XAudioLoadDeinterleavedChannelVector(struct __vector4*, float const *)
//{
//    mangled_ppc("?XAudioLoadDeinterleavedChannelVector@@YAPBMPAU__vector4@@PBM@Z");
//};

//float * XAudioStoreDeinterleavedChannelVector(float *, struct __vector4const *)
//{
//    mangled_ppc("?XAudioStoreDeinterleavedChannelVector@@YAPAMPAMPBU__vector4@@@Z");
//};

//float const * XAudioLoadFrameBufferChannelVector(struct __vector4*, float const *)
//{
//    mangled_ppc("?XAudioLoadFrameBufferChannelVector@@YAPBMPAU__vector4@@PBM@Z");
//};

//float * XAudioStoreFrameBufferChannelVector(float *, struct __vector4const *)
//{
//    mangled_ppc("?XAudioStoreFrameBufferChannelVector@@YAPAMPAMPBU__vector4@@@Z");
//};

//void XAudioCopySamples(struct __vector4*, struct __vector4const *, struct __vector4const *)
//{
//    mangled_ppc("?XAudioCopySamples@@YAXPAU__vector4@@PBU1@1@Z");
//};

//void XAudioCreateVolumeAndDeltaVectors(struct __vector4*, struct __vector4*, float, float, unsigned int)
//{
//    mangled_ppc("?XAudioCreateVolumeAndDeltaVectors@@YAXPAU__vector4@@0MMI@Z");
//};

//void XAudioCopyFrameBufferChannel(float *, float const *, struct __vector4*, struct __vector4const *, unsigned int)
//{
//    mangled_ppc("?XAudioCopyFrameBufferChannel@@YAXPAMPBMPAU__vector4@@PBU1@I@Z");
//};

//void XAudioCopyFrameBufferChannel(float *, float const *, unsigned int)
//{
//    mangled_ppc("?XAudioCopyFrameBufferChannel@@YAXPAMPBMI@Z");
//};

//void XAudioZeroFrameBufferChannel(float *, unsigned int)
//{
//    mangled_ppc("?XAudioZeroFrameBufferChannel@@YAXPAMI@Z");
//};

//void operator delete(void *)
//{
//    mangled_ppc("??3@YAXPAX@Z");
//};

//public: static void * XAUDIO::CRouterEffect::operator new(unsigned int, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??2CRouterEffect@XAUDIO@@SAPAXIPAUIXAudioBatchAllocator@@@Z");
//};

//protected: static unsigned char XAUDIO::CRouterEffect::GetMaxChannelMapEntryCount(unsigned char, struct XAUDIOCHANNELMAP const *)
//{
//    mangled_ppc("?GetMaxChannelMapEntryCount@CRouterEffect@XAUDIO@@KAEEPBUXAUDIOCHANNELMAP@@@Z");
//};

//public: XAUDIO::CAutoLock<class XAUDIO::CSpinLock>::CAutoLock<class XAUDIO::CSpinLock>(class XAUDIO::CSpinLock *)
//{
//    mangled_ppc("??0?$CAutoLock@VCSpinLock@XAUDIO@@@XAUDIO@@QAA@PAVCSpinLock@1@@Z");
//};

//public: XAUDIO::CAutoLock<class XAUDIO::CSpinLock>::~CAutoLock<class XAUDIO::CSpinLock>(void)
//{
//    mangled_ppc("??1?$CAutoLock@VCSpinLock@XAUDIO@@@XAUDIO@@QAA@XZ");
//};

//public: virtual XAUDIO::CRouterEffect::~CRouterEffect(void)
//{
//    mangled_ppc("??1CRouterEffect@XAUDIO@@UAA@XZ");
//};

//public: virtual unsigned long XAUDIO::CRouterEffect::AddRef(void)
//{
//    mangled_ppc("?AddRef@CRouterEffect@XAUDIO@@UAAKXZ");
//};

//public: virtual unsigned long XAUDIO::CRouterEffect::Release(void)
//{
//    mangled_ppc("?Release@CRouterEffect@XAUDIO@@UAAKXZ");
//};

//public: virtual long XAUDIO::CRouterEffect::GetInfo(struct XAUDIOFXINFO *)
//{
//    mangled_ppc("?GetInfo@CRouterEffect@XAUDIO@@UAAJPAUXAUDIOFXINFO@@@Z");
//};

//public: virtual long XAUDIO::CRouterEffect::GetContext(void **)
//{
//    mangled_ppc("?GetContext@CRouterEffect@XAUDIO@@UAAJPAPAX@Z");
//};

//public: virtual long XAUDIO::CRouterEffect::GetMode(unsigned char *)
//{
//    mangled_ppc("?GetMode@CRouterEffect@XAUDIO@@UAAJPAE@Z");
//};

//public: virtual long XAUDIO::CRouterEffect::SetMode(unsigned char)
//{
//    mangled_ppc("?SetMode@CRouterEffect@XAUDIO@@UAAJE@Z");
//};

//public: virtual long XAUDIO::CRouterEffect::SetChannelVolume(struct XAUDIOCHANNELVOLUME const *)
//{
//    mangled_ppc("?SetChannelVolume@CRouterEffect@XAUDIO@@UAAJPBUXAUDIOCHANNELVOLUME@@@Z");
//};

//public: virtual void XAUDIO::CRouterEffect::QueryInterface(struct IXAudioRouterEffect **)
//{
//    mangled_ppc("?QueryInterface@CRouterEffect@XAUDIO@@UAAXPAPAUIXAudioRouterEffect@@@Z");
//};

//public: virtual long XAUDIO::CRouterEffect::Initialize(struct XAUDIOROUTERFXINIT const *, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("?Initialize@CRouterEffect@XAUDIO@@UAAJPBUXAUDIOROUTERFXINIT@@PAUIXAudioBatchAllocator@@@Z");
//};

//public: virtual long XAUDIO::CRouterEffect::GetChannelMap(struct XAUDIOCHANNELMAP *, unsigned long, unsigned long *)
//{
//    mangled_ppc("?GetChannelMap@CRouterEffect@XAUDIO@@UAAJPAUXAUDIOCHANNELMAP@@KPAK@Z");
//};

//public: virtual long XAUDIO::CRouterEffect::SetChannelMap(struct XAUDIOCHANNELMAP const *)
//{
//    mangled_ppc("?SetChannelMap@CRouterEffect@XAUDIO@@UAAJPBUXAUDIOCHANNELMAP@@@Z");
//};

//public: virtual long XAUDIO::CRouterEffect::GetChannelVolume(struct XAUDIOCHANNELVOLUME *)
//{
//    mangled_ppc("?GetChannelVolume@CRouterEffect@XAUDIO@@UAAJPAUXAUDIOCHANNELVOLUME@@@Z");
//};

//public: virtual long XAUDIO::CRouterEffect::SetChannelVolume(struct XAUDIOCHANNELVOLUME const *, bool)
//{
//    mangled_ppc("?SetChannelVolume@CRouterEffect@XAUDIO@@UAAJPBUXAUDIOCHANNELVOLUME@@_N@Z");
//};

//void XAudioMixFrameBufferChannel(float *, float const *, struct __vector4*, struct __vector4const *, unsigned int)
//{
//    mangled_ppc("?XAudioMixFrameBufferChannel@@YAXPAMPBMPAU__vector4@@PBU1@I@Z");
//};

//public: static unsigned int XAUDIO::CRouterEffect::GetObjectAdditionalSize(struct XAUDIOROUTERFXINIT const *)
//{
//    mangled_ppc("?GetObjectAdditionalSize@CRouterEffect@XAUDIO@@SAIPBUXAUDIOROUTERFXINIT@@@Z");
//};

//public: IXAudioRouterEffect::IXAudioRouterEffect(void)
//{
//    mangled_ppc("??0IXAudioRouterEffect@@QAA@XZ");
//};

//public: virtual long XAUDIO::CRouterEffect::Process(struct IXAudioFrameBuffer *, struct IXAudioFrameBuffer *)
//{
//    mangled_ppc("?Process@CRouterEffect@XAUDIO@@UAAJPAUIXAudioFrameBuffer@@0@Z");
//};

//public: static unsigned int XAUDIO::CRouterEffect::GetObjectSize(struct XAUDIOROUTERFXINIT const *)
//{
//    mangled_ppc("?GetObjectSize@CRouterEffect@XAUDIO@@SAIPBUXAUDIOROUTERFXINIT@@@Z");
//};

//XAudioQueryRouterEffectSize
//{
//    mangled_ppc("XAudioQueryRouterEffectSize");
//};

//public: XAUDIO::CRouterEffect::CRouterEffect(struct XAUDIOROUTERFXINIT const *, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??0CRouterEffect@XAUDIO@@QAA@PBUXAUDIOROUTERFXINIT@@PAUIXAudioBatchAllocator@@@Z");
//};

//[thunk]: public: virtual void * XAUDIO::CRouterEffect::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_ECRouterEffect@XAUDIO@@W3AAPAXI@Z");
//};

//public: static void XAUDIO::CRouterEffect::operator delete(void *)
//{
//    mangled_ppc("??3CRouterEffect@XAUDIO@@SAXPAX@Z");
//};

//public: virtual void XAUDIO::CRouterEffect::QueryInterface(struct IXAudioEffect **)
//{
//    mangled_ppc("?QueryInterface@CRouterEffect@XAUDIO@@UAAXPAPAUIXAudioEffect@@@Z");
//};

//[thunk]: public: virtual unsigned long XAUDIO::CRouterEffect::Release(void)
//{
//    mangled_ppc("?Release@CRouterEffect@XAUDIO@@W3AAKXZ");
//};

//[thunk]: public: virtual long XAUDIO::CRouterEffect::GetContext(void **)
//{
//    mangled_ppc("?GetContext@CRouterEffect@XAUDIO@@W3AAJPAPAX@Z");
//};

//[thunk]: public: virtual unsigned long XAUDIO::CRouterEffect::AddRef(void)
//{
//    mangled_ppc("?AddRef@CRouterEffect@XAUDIO@@W3AAKXZ");
//};

//merged_8486E650
//{
//    mangled_ppc("merged_8486E650");
//};

//XAudioCreateRouterEffect
//{
//    mangled_ppc("XAudioCreateRouterEffect");
//};

