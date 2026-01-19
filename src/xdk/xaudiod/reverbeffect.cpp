/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// const XAUDIO::CStereoRoomFloat::`vbtable'{for `'}}; // "??_8CStereoRoomFloat@XAUDIO@@7B@"
// const XAUDIO::CReverbEffect::`vftable'{for `XAUDIO::CEffect'}; // "??_7CReverbEffect@XAUDIO@@6BCEffect@1@@"
// const XAUDIO::CReverbEffect::`vftable'{for `IXAudioEffect'}; // "??_7CReverbEffect@XAUDIO@@6BIXAudioEffect@@@"
// struct __vector4`public: void __cdecl princeton_digital::stereo_room_t<float>::process(float **, float **, long)'::`14'::vOne; // "?vOne@?O@??process@?$stereo_room_t@M@princeton_digital@@QAAXPAPAM0J@Z@4U__vector4@@A"

// public: virtual long XAUDIO::CReverbEffect::Initialize(struct XAUDIOFXINIT const *, struct IXAudioBatchAllocator *);
// public: virtual long XAUDIO::CReverbEffect::GetInfo(struct XAUDIOFXINFO *);
// public: float princeton_digital::stereo_room_t<float>::wet_dry_mix_get(void) const;
// __lvx;
// __stvx;
// public: float princeton_digital::allpass_t<float, 512>::output_get(void) const;
// public: float princeton_digital::eq1_t<float, 2>::output_get(void) const;
// public: float princeton_digital::eq2_t<float, 2>::output_get(void) const;
// public: float princeton_digital::eq3_t<float, 2>::output_get(void) const;
// public: float princeton_digital::twotap_t<float, 4096>::tap1_get(void) const;
// public: float princeton_digital::twotap_t<float, 4096>::tap2_get(void) const;
// public: float princeton_digital::onetap_t<float, 2>::tap1_get(void) const;
// public: float princeton_digital::allpass_t<float, 2048>::output_get(void) const;
// public: float princeton_digital::allpass2_t<float, 2048>::output_get(void) const;
// public: float princeton_digital::allpass_t<float, 1024>::output_get(void) const;
// public: float princeton_digital::lowpass_t<float, 2>::output_get(void) const;
// public: unsigned int princeton_digital::delay_t<float, 16384>::index(unsigned int, unsigned int);
// public: unsigned int princeton_digital::delay_t<float, 16384>::getCurrent(void);
// public: void princeton_digital::delay_t<float, 16384>::setCurrent(unsigned int);
// public: float * princeton_digital::delay_t<float, 16384>::getBuffer(void);
// public: void princeton_digital::delay_t<float, 512>::operator+=(float);
// public: unsigned int princeton_digital::delay_t<float, 512>::index(unsigned int, unsigned int);
// public: float princeton_digital::delay_t<float, 512>::operator[](unsigned int) const;
// public: unsigned int princeton_digital::delay_t<float, 512>::getCurrent(void);
// public: void princeton_digital::delay_t<float, 512>::setCurrent(unsigned int);
// public: float * princeton_digital::delay_t<float, 512>::getBuffer(void);
// public: unsigned int princeton_digital::delay_t<float, 128>::index(unsigned int, unsigned int);
// public: unsigned int princeton_digital::delay_t<float, 128>::getCurrent(void);
// public: void princeton_digital::delay_t<float, 128>::setCurrent(unsigned int);
// public: float * princeton_digital::delay_t<float, 128>::getBuffer(void);
// public: void princeton_digital::delay_t<float, 2048>::operator+=(float);
// public: unsigned int princeton_digital::delay_t<float, 2048>::index(unsigned int, unsigned int);
// public: float princeton_digital::delay_t<float, 2048>::operator[](unsigned int) const;
// public: unsigned int princeton_digital::delay_t<float, 2048>::getCurrent(void);
// public: void princeton_digital::delay_t<float, 2048>::setCurrent(unsigned int);
// public: float * princeton_digital::delay_t<float, 2048>::getBuffer(void);
// public: unsigned int princeton_digital::delay_t<float, 256>::index(unsigned int, unsigned int);
// public: unsigned int princeton_digital::delay_t<float, 256>::getCurrent(void);
// public: void princeton_digital::delay_t<float, 256>::setCurrent(unsigned int);
// public: float * princeton_digital::delay_t<float, 256>::getBuffer(void);
// public: void princeton_digital::delay_t<float, 1024>::operator+=(float);
// public: unsigned int princeton_digital::delay_t<float, 1024>::index(unsigned int, unsigned int);
// public: float princeton_digital::delay_t<float, 1024>::operator[](unsigned int) const;
// public: unsigned int princeton_digital::delay_t<float, 1024>::getCurrent(void);
// public: void princeton_digital::delay_t<float, 1024>::setCurrent(unsigned int);
// public: float * princeton_digital::delay_t<float, 1024>::getBuffer(void);
// public: void princeton_digital::delay_t<float, 4096>::operator+=(float);
// public: float princeton_digital::delay_t<float, 4096>::operator[](unsigned int) const;
// void princeton_digital::denormalize<float>(float volatile &);
// public: long IXAudioFrameBuffer::Prepare(union XAUDIOFORMAT const *, unsigned char);
// public: XAUDIO::CObjectRefCount::CObjectRefCount(unsigned long);
// void operator delete(void *);
// public: virtual XAUDIO::CObjectRefCount::~CObjectRefCount(void);
// public: virtual unsigned long XAUDIO::CObjectRefCount::AddRef(void);
// public: virtual unsigned long XAUDIO::CObjectRefCount::Release(void);
// public: virtual void XAUDIO::CObjectRefCount::AbsoluteRelease(void);
// public: virtual unsigned long XAUDIO::CObjectRefCount::GetRefCount(void);
// public: void XAUDIO::CSpinLock::Lock(void);
// public: void XAUDIO::CSpinLock::Unlock(void);
// public: princeton_digital::float_delay_2::~float_delay_2(void);
// public: void princeton_digital::float_delay_2::operator+=(float);
// public: float princeton_digital::float_delay_2::operator[](unsigned int) const;
// public: XAUDIO::CEffect::CEffect(struct XAUDIOFXINIT const *);
// public: virtual XAUDIO::CEffect::~CEffect(void);
// public: virtual long XAUDIO::CEffect::GetContext(void **);
// public: static void * XAUDIO::CReverbEffect::operator new(unsigned int, struct IXAudioBatchAllocator *);
// public: void XAUDIO::CStereoRoomFloat::SetWetDryMix(float);
// public: void XAUDIO::CStereoRoomFloat::SetPropertiesStandard(struct princeton_digital::stereo_room_t<float>::properties_t const &);
// public: void XAUDIO::CStereoRoomFloat::SetPropertiesI3DL2(struct _I3DL2_LISTENERPROPERTIES const &);
// public: static unsigned int XAUDIO::CReverbEffect::GetObjectAdditionalSize(struct XAUDIOFXINIT const *);
// public: virtual princeton_digital::stereo_room_3dl2_t<float>::~stereo_room_3dl2_t<float>(void);
// public: princeton_digital::occlusion_t<float, 2>::~occlusion_t<float, 2>(void);
// public: princeton_digital::eq1_t<float, 2>::~eq1_t<float, 2>(void);
// public: princeton_digital::eq2_t<float, 2>::~eq2_t<float, 2>(void);
// public: princeton_digital::eq3_t<float, 2>::~eq3_t<float, 2>(void);
// public: princeton_digital::onetap_t<float, 2>::~onetap_t<float, 2>(void);
// public: princeton_digital::lowpass_t<float, 2>::~lowpass_t<float, 2>(void);
// public: princeton_digital::delay_t<float, 16384>::~delay_t<float, 16384>(void);
// public: princeton_digital::delay_t<float, 512>::~delay_t<float, 512>(void);
// public: princeton_digital::delay_t<float, 128>::~delay_t<float, 128>(void);
// public: princeton_digital::delay_t<float, 2048>::~delay_t<float, 2048>(void);
// public: princeton_digital::delay_t<float, 256>::~delay_t<float, 256>(void);
// public: princeton_digital::delay_t<float, 1024>::~delay_t<float, 1024>(void);
// public: princeton_digital::delay_t<float, 4096>::~delay_t<float, 4096>(void);
// public: virtual XAUDIO::CStereoRoomFloat::~CStereoRoomFloat(void);
// public: virtual long XAUDIO::CReverbEffect::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *);
// public: virtual long XAUDIO::CReverbEffect::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *);
// public: void princeton_digital::vardelay_t<float, 16384>::preprocess(unsigned int *, float &, unsigned int *);
// public: void princeton_digital::occlusion_t<float, 2>::preprocess(unsigned int *, float &, unsigned int *, unsigned int);
// public: void princeton_digital::threetap_t<float, 512>::preprocess3(unsigned int *, float &, unsigned int *, unsigned int *, unsigned int);
// public: void princeton_digital::allpass_t<float, 128>::preprocess(unsigned int *, float &);
// public: void princeton_digital::threetap_t<float, 2048>::preprocess3(unsigned int *, float &, unsigned int *, unsigned int *, unsigned int);
// public: void princeton_digital::allpass_t<float, 256>::preprocess(unsigned int *, float &);
// public: float princeton_digital::allpass_t<float, 512>::process(float);
// public: void princeton_digital::allpass_t<float, 512>::preprocess(unsigned int *, float &);
// public: void princeton_digital::allpass_t<float, 512>::preprocess(unsigned int *, float &, unsigned int *);
// public: void princeton_digital::twotap_t<float, 1024>::preprocess(unsigned int *, float &, unsigned int *, unsigned int *);
// public: float princeton_digital::eq1_t<float, 2>::process(float);
// public: float princeton_digital::eq2_t<float, 2>::process(float);
// public: float princeton_digital::eq3_t<float, 2>::process(float);
// public: float princeton_digital::twotap_t<float, 4096>::process(float);
// public: float princeton_digital::onetap_t<float, 2>::process(float);
// public: float princeton_digital::allpass_t<float, 2048>::process(float);
// public: float princeton_digital::allpass2_t<float, 2048>::process(float);
// public: float princeton_digital::allpass_t<float, 1024>::process(float);
// public: float princeton_digital::lowpass_t<float, 2>::process(float);
// public: void princeton_digital::vardelay_t<float, 256>::preprocess(unsigned int *, float &, unsigned int *);
// merged_84868948;
// merged_848689B8;
// public: static unsigned int XAUDIO::CReverbEffect::GetObjectSize(struct XAUDIOFXINIT const *);
// public: princeton_digital::vardelay_t<float, 16384>::~vardelay_t<float, 16384>(void);
// public: princeton_digital::threetap_t<float, 512>::~threetap_t<float, 512>(void);
// public: princeton_digital::allpass_t<float, 128>::~allpass_t<float, 128>(void);
// public: princeton_digital::threetap_t<float, 2048>::~threetap_t<float, 2048>(void);
// public: princeton_digital::allpass_t<float, 256>::~allpass_t<float, 256>(void);
// public: princeton_digital::allpass_t<float, 512>::~allpass_t<float, 512>(void);
// public: princeton_digital::twotap_t<float, 1024>::~twotap_t<float, 1024>(void);
// public: princeton_digital::twotap_t<float, 4096>::~twotap_t<float, 4096>(void);
// public: princeton_digital::allpass_t<float, 2048>::~allpass_t<float, 2048>(void);
// public: princeton_digital::allpass2_t<float, 2048>::~allpass2_t<float, 2048>(void);
// public: princeton_digital::allpass_t<float, 1024>::~allpass_t<float, 1024>(void);
// public: princeton_digital::vardelay_t<float, 256>::~vardelay_t<float, 256>(void);
// XAudioQueryReverbEffectSize;
// public: void princeton_digital::stereo_room_t<float>::process(float **, float **, long);
// public: virtual princeton_digital::stereo_room_t<float>::~stereo_room_t<float>(void);
// merged_8486A460;
// public: void princeton_digital::stereo_room_3dl2_t<float>::`vbase destructor'(void);
// public: void XAUDIO::CStereoRoomFloat::Process(float **, float **);
// public: XAUDIO::CStereoRoomFloat::CStereoRoomFloat(void);
// public: void XAUDIO::CStereoRoomFloat::`vbase destructor'(void);
// merged_8486A798;
// public: virtual XAUDIO::CReverbEffect::~CReverbEffect(void);
// [thunk]: public: virtual void * XAUDIO::CReverbEffect::`vector deleting destructor'(unsigned int);
// public: static void XAUDIO::CReverbEffect::operator delete(void *);
// public: virtual unsigned long XAUDIO::CReverbEffect::AddRef(void);
// public: virtual unsigned long XAUDIO::CReverbEffect::Release(void);
// public: virtual long XAUDIO::CReverbEffect::GetContext(void **);
// public: virtual void XAUDIO::CReverbEffect::QueryInterface(struct IXAudioEffect **);
// [thunk]: public: virtual long XAUDIO::CReverbEffect::GetContext(void **);
// [thunk]: public: virtual unsigned long XAUDIO::CReverbEffect::Release(void);
// [thunk]: public: virtual unsigned long XAUDIO::CReverbEffect::AddRef(void);
// public: virtual long XAUDIO::CReverbEffect::Process(struct IXAudioFrameBuffer *, struct IXAudioFrameBuffer *);
// merged_8486AC60;
// public: XAUDIO::CReverbEffect::CReverbEffect(struct XAUDIOFXINIT const *, struct IXAudioBatchAllocator *);
// merged_8486ADB0;
// XAudioCreateReverbEffect;

//public: virtual long XAUDIO::CReverbEffect::Initialize(struct XAUDIOFXINIT const *, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("?Initialize@CReverbEffect@XAUDIO@@UAAJPBUXAUDIOFXINIT@@PAUIXAudioBatchAllocator@@@Z");
//};

//public: virtual long XAUDIO::CReverbEffect::GetInfo(struct XAUDIOFXINFO *)
//{
//    mangled_ppc("?GetInfo@CReverbEffect@XAUDIO@@UAAJPAUXAUDIOFXINFO@@@Z");
//};

//public: float princeton_digital::stereo_room_t<float>::wet_dry_mix_get(void) const
//{
//    mangled_ppc("?wet_dry_mix_get@?$stereo_room_t@M@princeton_digital@@QBAMXZ");
//};

//__lvx
//{
//    mangled_ppc("__lvx");
//};

//__stvx
//{
//    mangled_ppc("__stvx");
//};

//public: float princeton_digital::allpass_t<float, 512>::output_get(void) const
//{
//    mangled_ppc("?output_get@?$allpass_t@M$0CAA@@princeton_digital@@QBAMXZ");
//};

//public: float princeton_digital::eq1_t<float, 2>::output_get(void) const
//{
//    mangled_ppc("?output_get@?$eq1_t@M$01@princeton_digital@@QBAMXZ");
//};

//public: float princeton_digital::eq2_t<float, 2>::output_get(void) const
//{
//    mangled_ppc("?output_get@?$eq2_t@M$01@princeton_digital@@QBAMXZ");
//};

//public: float princeton_digital::eq3_t<float, 2>::output_get(void) const
//{
//    mangled_ppc("?output_get@?$eq3_t@M$01@princeton_digital@@QBAMXZ");
//};

//public: float princeton_digital::twotap_t<float, 4096>::tap1_get(void) const
//{
//    mangled_ppc("?tap1_get@?$twotap_t@M$0BAAA@@princeton_digital@@QBAMXZ");
//};

//public: float princeton_digital::twotap_t<float, 4096>::tap2_get(void) const
//{
//    mangled_ppc("?tap2_get@?$twotap_t@M$0BAAA@@princeton_digital@@QBAMXZ");
//};

//public: float princeton_digital::onetap_t<float, 2>::tap1_get(void) const
//{
//    mangled_ppc("?tap1_get@?$onetap_t@M$01@princeton_digital@@QBAMXZ");
//};

//public: float princeton_digital::allpass_t<float, 2048>::output_get(void) const
//{
//    mangled_ppc("?output_get@?$allpass_t@M$0IAA@@princeton_digital@@QBAMXZ");
//};

//public: float princeton_digital::allpass2_t<float, 2048>::output_get(void) const
//{
//    mangled_ppc("?output_get@?$allpass2_t@M$0IAA@@princeton_digital@@QBAMXZ");
//};

//public: float princeton_digital::allpass_t<float, 1024>::output_get(void) const
//{
//    mangled_ppc("?output_get@?$allpass_t@M$0EAA@@princeton_digital@@QBAMXZ");
//};

//public: float princeton_digital::lowpass_t<float, 2>::output_get(void) const
//{
//    mangled_ppc("?output_get@?$lowpass_t@M$01@princeton_digital@@QBAMXZ");
//};

//public: unsigned int princeton_digital::delay_t<float, 16384>::index(unsigned int, unsigned int)
//{
//    mangled_ppc("?index@?$delay_t@M$0EAAA@@princeton_digital@@QAAIII@Z");
//};

//public: unsigned int princeton_digital::delay_t<float, 16384>::getCurrent(void)
//{
//    mangled_ppc("?getCurrent@?$delay_t@M$0EAAA@@princeton_digital@@QAAIXZ");
//};

//public: void princeton_digital::delay_t<float, 16384>::setCurrent(unsigned int)
//{
//    mangled_ppc("?setCurrent@?$delay_t@M$0EAAA@@princeton_digital@@QAAXI@Z");
//};

//public: float * princeton_digital::delay_t<float, 16384>::getBuffer(void)
//{
//    mangled_ppc("?getBuffer@?$delay_t@M$0EAAA@@princeton_digital@@QAAPAMXZ");
//};

//public: void princeton_digital::delay_t<float, 512>::operator+=(float)
//{
//    mangled_ppc("??Y?$delay_t@M$0CAA@@princeton_digital@@QAAXM@Z");
//};

//public: unsigned int princeton_digital::delay_t<float, 512>::index(unsigned int, unsigned int)
//{
//    mangled_ppc("?index@?$delay_t@M$0CAA@@princeton_digital@@QAAIII@Z");
//};

//public: float princeton_digital::delay_t<float, 512>::operator[](unsigned int) const
//{
//    mangled_ppc("??A?$delay_t@M$0CAA@@princeton_digital@@QBAMI@Z");
//};

//public: unsigned int princeton_digital::delay_t<float, 512>::getCurrent(void)
//{
//    mangled_ppc("?getCurrent@?$delay_t@M$0CAA@@princeton_digital@@QAAIXZ");
//};

//public: void princeton_digital::delay_t<float, 512>::setCurrent(unsigned int)
//{
//    mangled_ppc("?setCurrent@?$delay_t@M$0CAA@@princeton_digital@@QAAXI@Z");
//};

//public: float * princeton_digital::delay_t<float, 512>::getBuffer(void)
//{
//    mangled_ppc("?getBuffer@?$delay_t@M$0CAA@@princeton_digital@@QAAPAMXZ");
//};

//public: unsigned int princeton_digital::delay_t<float, 128>::index(unsigned int, unsigned int)
//{
//    mangled_ppc("?index@?$delay_t@M$0IA@@princeton_digital@@QAAIII@Z");
//};

//public: unsigned int princeton_digital::delay_t<float, 128>::getCurrent(void)
//{
//    mangled_ppc("?getCurrent@?$delay_t@M$0IA@@princeton_digital@@QAAIXZ");
//};

//public: void princeton_digital::delay_t<float, 128>::setCurrent(unsigned int)
//{
//    mangled_ppc("?setCurrent@?$delay_t@M$0IA@@princeton_digital@@QAAXI@Z");
//};

//public: float * princeton_digital::delay_t<float, 128>::getBuffer(void)
//{
//    mangled_ppc("?getBuffer@?$delay_t@M$0IA@@princeton_digital@@QAAPAMXZ");
//};

//public: void princeton_digital::delay_t<float, 2048>::operator+=(float)
//{
//    mangled_ppc("??Y?$delay_t@M$0IAA@@princeton_digital@@QAAXM@Z");
//};

//public: unsigned int princeton_digital::delay_t<float, 2048>::index(unsigned int, unsigned int)
//{
//    mangled_ppc("?index@?$delay_t@M$0IAA@@princeton_digital@@QAAIII@Z");
//};

//public: float princeton_digital::delay_t<float, 2048>::operator[](unsigned int) const
//{
//    mangled_ppc("??A?$delay_t@M$0IAA@@princeton_digital@@QBAMI@Z");
//};

//public: unsigned int princeton_digital::delay_t<float, 2048>::getCurrent(void)
//{
//    mangled_ppc("?getCurrent@?$delay_t@M$0IAA@@princeton_digital@@QAAIXZ");
//};

//public: void princeton_digital::delay_t<float, 2048>::setCurrent(unsigned int)
//{
//    mangled_ppc("?setCurrent@?$delay_t@M$0IAA@@princeton_digital@@QAAXI@Z");
//};

//public: float * princeton_digital::delay_t<float, 2048>::getBuffer(void)
//{
//    mangled_ppc("?getBuffer@?$delay_t@M$0IAA@@princeton_digital@@QAAPAMXZ");
//};

//public: unsigned int princeton_digital::delay_t<float, 256>::index(unsigned int, unsigned int)
//{
//    mangled_ppc("?index@?$delay_t@M$0BAA@@princeton_digital@@QAAIII@Z");
//};

//public: unsigned int princeton_digital::delay_t<float, 256>::getCurrent(void)
//{
//    mangled_ppc("?getCurrent@?$delay_t@M$0BAA@@princeton_digital@@QAAIXZ");
//};

//public: void princeton_digital::delay_t<float, 256>::setCurrent(unsigned int)
//{
//    mangled_ppc("?setCurrent@?$delay_t@M$0BAA@@princeton_digital@@QAAXI@Z");
//};

//public: float * princeton_digital::delay_t<float, 256>::getBuffer(void)
//{
//    mangled_ppc("?getBuffer@?$delay_t@M$0BAA@@princeton_digital@@QAAPAMXZ");
//};

//public: void princeton_digital::delay_t<float, 1024>::operator+=(float)
//{
//    mangled_ppc("??Y?$delay_t@M$0EAA@@princeton_digital@@QAAXM@Z");
//};

//public: unsigned int princeton_digital::delay_t<float, 1024>::index(unsigned int, unsigned int)
//{
//    mangled_ppc("?index@?$delay_t@M$0EAA@@princeton_digital@@QAAIII@Z");
//};

//public: float princeton_digital::delay_t<float, 1024>::operator[](unsigned int) const
//{
//    mangled_ppc("??A?$delay_t@M$0EAA@@princeton_digital@@QBAMI@Z");
//};

//public: unsigned int princeton_digital::delay_t<float, 1024>::getCurrent(void)
//{
//    mangled_ppc("?getCurrent@?$delay_t@M$0EAA@@princeton_digital@@QAAIXZ");
//};

//public: void princeton_digital::delay_t<float, 1024>::setCurrent(unsigned int)
//{
//    mangled_ppc("?setCurrent@?$delay_t@M$0EAA@@princeton_digital@@QAAXI@Z");
//};

//public: float * princeton_digital::delay_t<float, 1024>::getBuffer(void)
//{
//    mangled_ppc("?getBuffer@?$delay_t@M$0EAA@@princeton_digital@@QAAPAMXZ");
//};

//public: void princeton_digital::delay_t<float, 4096>::operator+=(float)
//{
//    mangled_ppc("??Y?$delay_t@M$0BAAA@@princeton_digital@@QAAXM@Z");
//};

//public: float princeton_digital::delay_t<float, 4096>::operator[](unsigned int) const
//{
//    mangled_ppc("??A?$delay_t@M$0BAAA@@princeton_digital@@QBAMI@Z");
//};

//void princeton_digital::denormalize<float>(float volatile &)
//{
//    mangled_ppc("??$denormalize@M@princeton_digital@@YAXACM@Z");
//};

//public: long IXAudioFrameBuffer::Prepare(union XAUDIOFORMAT const *, unsigned char)
//{
//    mangled_ppc("?Prepare@IXAudioFrameBuffer@@QAAJPBTXAUDIOFORMAT@@E@Z");
//};

//public: XAUDIO::CObjectRefCount::CObjectRefCount(unsigned long)
//{
//    mangled_ppc("??0CObjectRefCount@XAUDIO@@QAA@K@Z");
//};

//void operator delete(void *)
//{
//    mangled_ppc("??3@YAXPAX@Z");
//};

//public: virtual XAUDIO::CObjectRefCount::~CObjectRefCount(void)
//{
//    mangled_ppc("??1CObjectRefCount@XAUDIO@@UAA@XZ");
//};

//public: virtual unsigned long XAUDIO::CObjectRefCount::AddRef(void)
//{
//    mangled_ppc("?AddRef@CObjectRefCount@XAUDIO@@UAAKXZ");
//};

//public: virtual unsigned long XAUDIO::CObjectRefCount::Release(void)
//{
//    mangled_ppc("?Release@CObjectRefCount@XAUDIO@@UAAKXZ");
//};

//public: virtual void XAUDIO::CObjectRefCount::AbsoluteRelease(void)
//{
//    mangled_ppc("?AbsoluteRelease@CObjectRefCount@XAUDIO@@UAAXXZ");
//};

//public: virtual unsigned long XAUDIO::CObjectRefCount::GetRefCount(void)
//{
//    mangled_ppc("?GetRefCount@CObjectRefCount@XAUDIO@@UAAKXZ");
//};

//public: void XAUDIO::CSpinLock::Lock(void)
//{
//    mangled_ppc("?Lock@CSpinLock@XAUDIO@@QAAXXZ");
//};

//public: void XAUDIO::CSpinLock::Unlock(void)
//{
//    mangled_ppc("?Unlock@CSpinLock@XAUDIO@@QAAXXZ");
//};

//public: princeton_digital::float_delay_2::~float_delay_2(void)
//{
//    mangled_ppc("??1float_delay_2@princeton_digital@@QAA@XZ");
//};

//public: void princeton_digital::float_delay_2::operator+=(float)
//{
//    mangled_ppc("??Yfloat_delay_2@princeton_digital@@QAAXM@Z");
//};

//public: float princeton_digital::float_delay_2::operator[](unsigned int) const
//{
//    mangled_ppc("??Afloat_delay_2@princeton_digital@@QBAMI@Z");
//};

//public: XAUDIO::CEffect::CEffect(struct XAUDIOFXINIT const *)
//{
//    mangled_ppc("??0CEffect@XAUDIO@@QAA@PBUXAUDIOFXINIT@@@Z");
//};

//public: virtual XAUDIO::CEffect::~CEffect(void)
//{
//    mangled_ppc("??1CEffect@XAUDIO@@UAA@XZ");
//};

//public: virtual long XAUDIO::CEffect::GetContext(void **)
//{
//    mangled_ppc("?GetContext@CEffect@XAUDIO@@UAAJPAPAX@Z");
//};

//public: static void * XAUDIO::CReverbEffect::operator new(unsigned int, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??2CReverbEffect@XAUDIO@@SAPAXIPAUIXAudioBatchAllocator@@@Z");
//};

//public: void XAUDIO::CStereoRoomFloat::SetWetDryMix(float)
//{
//    mangled_ppc("?SetWetDryMix@CStereoRoomFloat@XAUDIO@@QAAXM@Z");
//};

//public: void XAUDIO::CStereoRoomFloat::SetPropertiesStandard(struct princeton_digital::stereo_room_t<float>::properties_t const &)
//{
//    mangled_ppc("?SetPropertiesStandard@CStereoRoomFloat@XAUDIO@@QAAXABUproperties_t@?$stereo_room_t@M@princeton_digital@@@Z");
//};

//public: void XAUDIO::CStereoRoomFloat::SetPropertiesI3DL2(struct _I3DL2_LISTENERPROPERTIES const &)
//{
//    mangled_ppc("?SetPropertiesI3DL2@CStereoRoomFloat@XAUDIO@@QAAXABU_I3DL2_LISTENERPROPERTIES@@@Z");
//};

//public: static unsigned int XAUDIO::CReverbEffect::GetObjectAdditionalSize(struct XAUDIOFXINIT const *)
//{
//    mangled_ppc("?GetObjectAdditionalSize@CReverbEffect@XAUDIO@@SAIPBUXAUDIOFXINIT@@@Z");
//};

//public: virtual princeton_digital::stereo_room_3dl2_t<float>::~stereo_room_3dl2_t<float>(void)
//{
//    mangled_ppc("??1?$stereo_room_3dl2_t@M@princeton_digital@@UAA@XZ");
//};

//public: princeton_digital::occlusion_t<float, 2>::~occlusion_t<float, 2>(void)
//{
//    mangled_ppc("??1?$occlusion_t@M$01@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::eq1_t<float, 2>::~eq1_t<float, 2>(void)
//{
//    mangled_ppc("??1?$eq1_t@M$01@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::eq2_t<float, 2>::~eq2_t<float, 2>(void)
//{
//    mangled_ppc("??1?$eq2_t@M$01@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::eq3_t<float, 2>::~eq3_t<float, 2>(void)
//{
//    mangled_ppc("??1?$eq3_t@M$01@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::onetap_t<float, 2>::~onetap_t<float, 2>(void)
//{
//    mangled_ppc("??1?$onetap_t@M$01@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::lowpass_t<float, 2>::~lowpass_t<float, 2>(void)
//{
//    mangled_ppc("??1?$lowpass_t@M$01@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::delay_t<float, 16384>::~delay_t<float, 16384>(void)
//{
//    mangled_ppc("??1?$delay_t@M$0EAAA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::delay_t<float, 512>::~delay_t<float, 512>(void)
//{
//    mangled_ppc("??1?$delay_t@M$0CAA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::delay_t<float, 128>::~delay_t<float, 128>(void)
//{
//    mangled_ppc("??1?$delay_t@M$0IA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::delay_t<float, 2048>::~delay_t<float, 2048>(void)
//{
//    mangled_ppc("??1?$delay_t@M$0IAA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::delay_t<float, 256>::~delay_t<float, 256>(void)
//{
//    mangled_ppc("??1?$delay_t@M$0BAA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::delay_t<float, 1024>::~delay_t<float, 1024>(void)
//{
//    mangled_ppc("??1?$delay_t@M$0EAA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::delay_t<float, 4096>::~delay_t<float, 4096>(void)
//{
//    mangled_ppc("??1?$delay_t@M$0BAAA@@princeton_digital@@QAA@XZ");
//};

//public: virtual XAUDIO::CStereoRoomFloat::~CStereoRoomFloat(void)
//{
//    mangled_ppc("??1CStereoRoomFloat@XAUDIO@@UAA@XZ");
//};

//public: virtual long XAUDIO::CReverbEffect::GetParam(unsigned char, unsigned char, union XAUDIOFXPARAM *)
//{
//    mangled_ppc("?GetParam@CReverbEffect@XAUDIO@@UAAJEEPATXAUDIOFXPARAM@@@Z");
//};

//public: virtual long XAUDIO::CReverbEffect::SetParam(unsigned char, unsigned char, union XAUDIOFXPARAM const *)
//{
//    mangled_ppc("?SetParam@CReverbEffect@XAUDIO@@UAAJEEPBTXAUDIOFXPARAM@@@Z");
//};

//public: void princeton_digital::vardelay_t<float, 16384>::preprocess(unsigned int *, float &, unsigned int *)
//{
//    mangled_ppc("?preprocess@?$vardelay_t@M$0EAAA@@princeton_digital@@QAAXPIAM0@Z");
//};

//public: void princeton_digital::occlusion_t<float, 2>::preprocess(unsigned int *, float &, unsigned int *, unsigned int)
//{
//    mangled_ppc("?preprocess@?$occlusion_t@M$01@princeton_digital@@QAAXPIAM0I@Z");
//};

//public: void princeton_digital::threetap_t<float, 512>::preprocess3(unsigned int *, float &, unsigned int *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?preprocess3@?$threetap_t@M$0CAA@@princeton_digital@@QAAXPIAM00I@Z");
//};

//public: void princeton_digital::allpass_t<float, 128>::preprocess(unsigned int *, float &)
//{
//    mangled_ppc("?preprocess@?$allpass_t@M$0IA@@princeton_digital@@QAAXPIAM@Z");
//};

//public: void princeton_digital::threetap_t<float, 2048>::preprocess3(unsigned int *, float &, unsigned int *, unsigned int *, unsigned int)
//{
//    mangled_ppc("?preprocess3@?$threetap_t@M$0IAA@@princeton_digital@@QAAXPIAM00I@Z");
//};

//public: void princeton_digital::allpass_t<float, 256>::preprocess(unsigned int *, float &)
//{
//    mangled_ppc("?preprocess@?$allpass_t@M$0BAA@@princeton_digital@@QAAXPIAM@Z");
//};

//public: float princeton_digital::allpass_t<float, 512>::process(float)
//{
//    mangled_ppc("?process@?$allpass_t@M$0CAA@@princeton_digital@@QAAMM@Z");
//};

//public: void princeton_digital::allpass_t<float, 512>::preprocess(unsigned int *, float &)
//{
//    mangled_ppc("?preprocess@?$allpass_t@M$0CAA@@princeton_digital@@QAAXPIAM@Z");
//};

//public: void princeton_digital::allpass_t<float, 512>::preprocess(unsigned int *, float &, unsigned int *)
//{
//    mangled_ppc("?preprocess@?$allpass_t@M$0CAA@@princeton_digital@@QAAXPIAM0@Z");
//};

//public: void princeton_digital::twotap_t<float, 1024>::preprocess(unsigned int *, float &, unsigned int *, unsigned int *)
//{
//    mangled_ppc("?preprocess@?$twotap_t@M$0EAA@@princeton_digital@@QAAXPIAM00@Z");
//};

//public: float princeton_digital::eq1_t<float, 2>::process(float)
//{
//    mangled_ppc("?process@?$eq1_t@M$01@princeton_digital@@QAAMM@Z");
//};

//public: float princeton_digital::eq2_t<float, 2>::process(float)
//{
//    mangled_ppc("?process@?$eq2_t@M$01@princeton_digital@@QAAMM@Z");
//};

//public: float princeton_digital::eq3_t<float, 2>::process(float)
//{
//    mangled_ppc("?process@?$eq3_t@M$01@princeton_digital@@QAAMM@Z");
//};

//public: float princeton_digital::twotap_t<float, 4096>::process(float)
//{
//    mangled_ppc("?process@?$twotap_t@M$0BAAA@@princeton_digital@@QAAMM@Z");
//};

//public: float princeton_digital::onetap_t<float, 2>::process(float)
//{
//    mangled_ppc("?process@?$onetap_t@M$01@princeton_digital@@QAAMM@Z");
//};

//public: float princeton_digital::allpass_t<float, 2048>::process(float)
//{
//    mangled_ppc("?process@?$allpass_t@M$0IAA@@princeton_digital@@QAAMM@Z");
//};

//public: float princeton_digital::allpass2_t<float, 2048>::process(float)
//{
//    mangled_ppc("?process@?$allpass2_t@M$0IAA@@princeton_digital@@QAAMM@Z");
//};

//public: float princeton_digital::allpass_t<float, 1024>::process(float)
//{
//    mangled_ppc("?process@?$allpass_t@M$0EAA@@princeton_digital@@QAAMM@Z");
//};

//public: float princeton_digital::lowpass_t<float, 2>::process(float)
//{
//    mangled_ppc("?process@?$lowpass_t@M$01@princeton_digital@@QAAMM@Z");
//};

//public: void princeton_digital::vardelay_t<float, 256>::preprocess(unsigned int *, float &, unsigned int *)
//{
//    mangled_ppc("?preprocess@?$vardelay_t@M$0BAA@@princeton_digital@@QAAXPIAM0@Z");
//};

//merged_84868948
//{
//    mangled_ppc("merged_84868948");
//};

//merged_848689B8
//{
//    mangled_ppc("merged_848689B8");
//};

//public: static unsigned int XAUDIO::CReverbEffect::GetObjectSize(struct XAUDIOFXINIT const *)
//{
//    mangled_ppc("?GetObjectSize@CReverbEffect@XAUDIO@@SAIPBUXAUDIOFXINIT@@@Z");
//};

//public: princeton_digital::vardelay_t<float, 16384>::~vardelay_t<float, 16384>(void)
//{
//    mangled_ppc("??1?$vardelay_t@M$0EAAA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::threetap_t<float, 512>::~threetap_t<float, 512>(void)
//{
//    mangled_ppc("??1?$threetap_t@M$0CAA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::allpass_t<float, 128>::~allpass_t<float, 128>(void)
//{
//    mangled_ppc("??1?$allpass_t@M$0IA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::threetap_t<float, 2048>::~threetap_t<float, 2048>(void)
//{
//    mangled_ppc("??1?$threetap_t@M$0IAA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::allpass_t<float, 256>::~allpass_t<float, 256>(void)
//{
//    mangled_ppc("??1?$allpass_t@M$0BAA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::allpass_t<float, 512>::~allpass_t<float, 512>(void)
//{
//    mangled_ppc("??1?$allpass_t@M$0CAA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::twotap_t<float, 1024>::~twotap_t<float, 1024>(void)
//{
//    mangled_ppc("??1?$twotap_t@M$0EAA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::twotap_t<float, 4096>::~twotap_t<float, 4096>(void)
//{
//    mangled_ppc("??1?$twotap_t@M$0BAAA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::allpass_t<float, 2048>::~allpass_t<float, 2048>(void)
//{
//    mangled_ppc("??1?$allpass_t@M$0IAA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::allpass2_t<float, 2048>::~allpass2_t<float, 2048>(void)
//{
//    mangled_ppc("??1?$allpass2_t@M$0IAA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::allpass_t<float, 1024>::~allpass_t<float, 1024>(void)
//{
//    mangled_ppc("??1?$allpass_t@M$0EAA@@princeton_digital@@QAA@XZ");
//};

//public: princeton_digital::vardelay_t<float, 256>::~vardelay_t<float, 256>(void)
//{
//    mangled_ppc("??1?$vardelay_t@M$0BAA@@princeton_digital@@QAA@XZ");
//};

//XAudioQueryReverbEffectSize
//{
//    mangled_ppc("XAudioQueryReverbEffectSize");
//};

//public: void princeton_digital::stereo_room_t<float>::process(float **, float **, long)
//{
//    mangled_ppc("?process@?$stereo_room_t@M@princeton_digital@@QAAXPAPAM0J@Z");
//};

//public: virtual princeton_digital::stereo_room_t<float>::~stereo_room_t<float>(void)
//{
//    mangled_ppc("??1?$stereo_room_t@M@princeton_digital@@UAA@XZ");
//};

//merged_8486A460
//{
//    mangled_ppc("merged_8486A460");
//};

//public: void princeton_digital::stereo_room_3dl2_t<float>::`vbase destructor'(void)
//{
//    mangled_ppc("??_D?$stereo_room_3dl2_t@M@princeton_digital@@QAAXXZ");
//};

//public: void XAUDIO::CStereoRoomFloat::Process(float **, float **)
//{
//    mangled_ppc("?Process@CStereoRoomFloat@XAUDIO@@QAAXPAPAM0@Z");
//};

//public: XAUDIO::CStereoRoomFloat::CStereoRoomFloat(void)
//{
//    mangled_ppc("??0CStereoRoomFloat@XAUDIO@@QAA@XZ");
//};

//public: void XAUDIO::CStereoRoomFloat::`vbase destructor'(void)
//{
//    mangled_ppc("??_DCStereoRoomFloat@XAUDIO@@QAAXXZ");
//};

//merged_8486A798
//{
//    mangled_ppc("merged_8486A798");
//};

//public: virtual XAUDIO::CReverbEffect::~CReverbEffect(void)
//{
//    mangled_ppc("??1CReverbEffect@XAUDIO@@UAA@XZ");
//};

//[thunk]: public: virtual void * XAUDIO::CReverbEffect::`vector deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_ECReverbEffect@XAUDIO@@W3AAPAXI@Z");
//};

//public: static void XAUDIO::CReverbEffect::operator delete(void *)
//{
//    mangled_ppc("??3CReverbEffect@XAUDIO@@SAXPAX@Z");
//};

//public: virtual unsigned long XAUDIO::CReverbEffect::AddRef(void)
//{
//    mangled_ppc("?AddRef@CReverbEffect@XAUDIO@@UAAKXZ");
//};

//public: virtual unsigned long XAUDIO::CReverbEffect::Release(void)
//{
//    mangled_ppc("?Release@CReverbEffect@XAUDIO@@UAAKXZ");
//};

//public: virtual long XAUDIO::CReverbEffect::GetContext(void **)
//{
//    mangled_ppc("?GetContext@CReverbEffect@XAUDIO@@UAAJPAPAX@Z");
//};

//public: virtual void XAUDIO::CReverbEffect::QueryInterface(struct IXAudioEffect **)
//{
//    mangled_ppc("?QueryInterface@CReverbEffect@XAUDIO@@UAAXPAPAUIXAudioEffect@@@Z");
//};

//[thunk]: public: virtual long XAUDIO::CReverbEffect::GetContext(void **)
//{
//    mangled_ppc("?GetContext@CReverbEffect@XAUDIO@@W3AAJPAPAX@Z");
//};

//[thunk]: public: virtual unsigned long XAUDIO::CReverbEffect::Release(void)
//{
//    mangled_ppc("?Release@CReverbEffect@XAUDIO@@W3AAKXZ");
//};

//[thunk]: public: virtual unsigned long XAUDIO::CReverbEffect::AddRef(void)
//{
//    mangled_ppc("?AddRef@CReverbEffect@XAUDIO@@W3AAKXZ");
//};

//public: virtual long XAUDIO::CReverbEffect::Process(struct IXAudioFrameBuffer *, struct IXAudioFrameBuffer *)
//{
//    mangled_ppc("?Process@CReverbEffect@XAUDIO@@UAAJPAUIXAudioFrameBuffer@@0@Z");
//};

//merged_8486AC60
//{
//    mangled_ppc("merged_8486AC60");
//};

//public: XAUDIO::CReverbEffect::CReverbEffect(struct XAUDIOFXINIT const *, struct IXAudioBatchAllocator *)
//{
//    mangled_ppc("??0CReverbEffect@XAUDIO@@QAA@PBUXAUDIOFXINIT@@PAUIXAudioBatchAllocator@@@Z");
//};

//merged_8486ADB0
//{
//    mangled_ppc("merged_8486ADB0");
//};

//XAudioCreateReverbEffect
//{
//    mangled_ppc("XAudioCreateReverbEffect");
//};

