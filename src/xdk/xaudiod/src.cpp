/* ---------- headers */

#include "xdk\xaudiod\src.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct XMVECTORU32const `public: static struct __vector4 __cdecl XAUDIO::SRC::Linear::ConvertSampleToNative<struct SHORTLE>(void const *)'::`2'::PermHighHalf; // "?PermHighHalf@?1???$ConvertSampleToNative@USHORTLE@@@Linear@SRC@XAUDIO@@SA?AU__vector4@@PBX@Z@4UXMVECTORU32@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<short, 1>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@F$00@LinearVector@SRC@XAUDIO@@SAXPIBFHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<short, 1>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetB; // "?volDeltaOffsetB@?1???$ProcessBlock@F$00@LinearVector@SRC@XAUDIO@@SAXPIBFHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<short, 2>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetB; // "?volDeltaOffsetB@?1???$ProcessBlock@F$01@LinearVector@SRC@XAUDIO@@SAXPIBFHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<short, 2>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@F$01@LinearVector@SRC@XAUDIO@@SAXPIBFHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<short, 4>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@F$03@LinearVector@SRC@XAUDIO@@SAXPIBFHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<short, 4>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetB; // "?volDeltaOffsetB@?1???$ProcessBlock@F$03@LinearVector@SRC@XAUDIO@@SAXPIBFHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<short, 6>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@F$05@LinearVector@SRC@XAUDIO@@SAXPIBFHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<short, 6>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetB; // "?volDeltaOffsetB@?1???$ProcessBlock@F$05@LinearVector@SRC@XAUDIO@@SAXPIBFHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct XMVECTORI32const `struct __vector4 __cdecl XMVectorPermute(struct __vector4, struct __vector4, struct __vector4)'::`2'::g_PremuteTest; // "?g_PremuteTest@?1??XMVectorPermute@@YA?AU__vector4@@U2@00@Z@4UXMVECTORI32@@B"
// struct XMVECTORU32const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessChunkChannel<struct SHORTLE>(unsigned int *, struct __vector4&, struct __vector4, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&)'::`2'::PermLowHalf; // "?PermLowHalf@?1???$ProcessChunkChannel@USHORTLE@@@LinearVector@SRC@XAUDIO@@SAXPIAU__vector4@@U4@1111111111@Z@4UXMVECTORU32@@B"
// struct XMVECTORU32const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessChunkChannel<struct SHORTLE>(unsigned int *, struct __vector4&, struct __vector4, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&)'::`2'::PermHighHalf; // "?PermHighHalf@?1???$ProcessChunkChannel@USHORTLE@@@LinearVector@SRC@XAUDIO@@SAXPIAU__vector4@@U4@1111111111@Z@4UXMVECTORU32@@B"
// struct XMVECTORU32const `public: static void __cdecl XAUDIO::SRC::NativeVector::ProcessChunk<float, 2>(unsigned int *, float &, unsigned int *, float &volatile, struct __vector4, float &volatile, float &volatile, float &volatile)'::`2'::DeInterleaveControl1; // "?DeInterleaveControl1@?1???$ProcessChunk@M$01@NativeVector@SRC@XAUDIO@@SAXPIAMPIBMU__vector4@@222@Z@4UXMVECTORU32@@B"
// struct XMVECTORU32const `public: static void __cdecl XAUDIO::SRC::NativeVector::ProcessChunk<float, 2>(unsigned int *, float &, unsigned int *, float &volatile, struct __vector4, float &volatile, float &volatile, float &volatile)'::`2'::DeInterleaveControl0; // "?DeInterleaveControl0@?1???$ProcessChunk@M$01@NativeVector@SRC@XAUDIO@@SAXPIAMPIBMU__vector4@@222@Z@4UXMVECTORU32@@B"
// struct XMVECTORU32const `public: static void __cdecl XAUDIO::SRC::NativeVector::ProcessChunk<float, 6>(unsigned int *, float &, unsigned int *, float &volatile, struct __vector4, float &volatile, float &volatile, float &volatile)'::`2'::Perm_CD; // "?Perm_CD@?1???$ProcessChunk@M$05@NativeVector@SRC@XAUDIO@@SAXPIAMPIBMU__vector4@@222@Z@4UXMVECTORU32@@B"
// struct XMVECTORU32const `public: static void __cdecl XAUDIO::SRC::NativeVector::ProcessChunk<float, 6>(unsigned int *, float &, unsigned int *, float &volatile, struct __vector4, float &volatile, float &volatile, float &volatile)'::`2'::Perm_Stereo1; // "?Perm_Stereo1@?1???$ProcessChunk@M$05@NativeVector@SRC@XAUDIO@@SAXPIAMPIBMU__vector4@@222@Z@4UXMVECTORU32@@B"
// struct XMVECTORU32const `public: static void __cdecl XAUDIO::SRC::NativeVector::ProcessChunk<float, 6>(unsigned int *, float &, unsigned int *, float &volatile, struct __vector4, float &volatile, float &volatile, float &volatile)'::`2'::Perm_Stereo0; // "?Perm_Stereo0@?1???$ProcessChunk@M$05@NativeVector@SRC@XAUDIO@@SAXPIAMPIBMU__vector4@@222@Z@4UXMVECTORU32@@B"
// struct XMVECTORU32const `public: static void __cdecl XAUDIO::SRC::NativeVector::ProcessChunk<float, 6>(unsigned int *, float &, unsigned int *, float &volatile, struct __vector4, float &volatile, float &volatile, float &volatile)'::`2'::Perm_AB; // "?Perm_AB@?1???$ProcessChunk@M$05@NativeVector@SRC@XAUDIO@@SAXPIAMPIBMU__vector4@@222@Z@4UXMVECTORU32@@B"
// unsigned char const *const const `public: static void __cdecl XAUDIO::SRC::NativeVector::ProcessChunk<short, 2>(unsigned int *, float &, unsigned int *, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile)'::`2'::pDeInterleaveControl; // "?pDeInterleaveControl@?1???$ProcessChunk@F$01@NativeVector@SRC@XAUDIO@@SAXPIAMPIBFU__vector4@@222@Z@4QBEB"
// unsigned short const *const const `public: static void __cdecl XAUDIO::SRC::NativeVector::ProcessChunk<short, 6>(unsigned int *, float &, unsigned int *, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile)'::`2'::PermEF1; // "?PermEF1@?1???$ProcessChunk@F$05@NativeVector@SRC@XAUDIO@@SAXPIAMPIBFU__vector4@@222@Z@4QBGB"
// unsigned short const *const const `public: static void __cdecl XAUDIO::SRC::NativeVector::ProcessChunk<short, 6>(unsigned int *, float &, unsigned int *, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile)'::`2'::PermEF0; // "?PermEF0@?1???$ProcessChunk@F$05@NativeVector@SRC@XAUDIO@@SAXPIAMPIBFU__vector4@@222@Z@4QBGB"
// unsigned short const *const const `public: static void __cdecl XAUDIO::SRC::NativeVector::ProcessChunk<short, 6>(unsigned int *, float &, unsigned int *, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile)'::`2'::PermCD1; // "?PermCD1@?1???$ProcessChunk@F$05@NativeVector@SRC@XAUDIO@@SAXPIAMPIBFU__vector4@@222@Z@4QBGB"
// unsigned short const *const const `public: static void __cdecl XAUDIO::SRC::NativeVector::ProcessChunk<short, 6>(unsigned int *, float &, unsigned int *, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile)'::`2'::PermCD0; // "?PermCD0@?1???$ProcessChunk@F$05@NativeVector@SRC@XAUDIO@@SAXPIAMPIBFU__vector4@@222@Z@4QBGB"
// unsigned short const *const const `public: static void __cdecl XAUDIO::SRC::NativeVector::ProcessChunk<short, 6>(unsigned int *, float &, unsigned int *, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile)'::`2'::PermAB1; // "?PermAB1@?1???$ProcessChunk@F$05@NativeVector@SRC@XAUDIO@@SAXPIAMPIBFU__vector4@@222@Z@4QBGB"
// unsigned short const *const const `public: static void __cdecl XAUDIO::SRC::NativeVector::ProcessChunk<short, 6>(unsigned int *, float &, unsigned int *, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile)'::`2'::PermAB0; // "?PermAB0@?1???$ProcessChunk@F$05@NativeVector@SRC@XAUDIO@@SAXPIAMPIBFU__vector4@@222@Z@4QBGB"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<float, 1>(unsigned int *, float &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@M$00@LinearVector@SRC@XAUDIO@@SAXPIBMHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<float, 2>(unsigned int *, float &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@M$01@LinearVector@SRC@XAUDIO@@SAXPIBMHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<float, 4>(unsigned int *, float &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@M$03@LinearVector@SRC@XAUDIO@@SAXPIBMHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<float, 6>(unsigned int *, float &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@M$05@LinearVector@SRC@XAUDIO@@SAXPIBMHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 1>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@E$00@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 1>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetC; // "?volDeltaOffsetC@?1???$ProcessBlock@E$00@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 1>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetD; // "?volDeltaOffsetD@?1???$ProcessBlock@E$00@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 1>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetB; // "?volDeltaOffsetB@?1???$ProcessBlock@E$00@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 2>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@E$01@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 2>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetC; // "?volDeltaOffsetC@?1???$ProcessBlock@E$01@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 2>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetD; // "?volDeltaOffsetD@?1???$ProcessBlock@E$01@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 2>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetB; // "?volDeltaOffsetB@?1???$ProcessBlock@E$01@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 4>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetC; // "?volDeltaOffsetC@?1???$ProcessBlock@E$03@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 4>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetD; // "?volDeltaOffsetD@?1???$ProcessBlock@E$03@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 4>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@E$03@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 4>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetB; // "?volDeltaOffsetB@?1???$ProcessBlock@E$03@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 6>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@E$05@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 6>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetB; // "?volDeltaOffsetB@?1???$ProcessBlock@E$05@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 6>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetC; // "?volDeltaOffsetC@?1???$ProcessBlock@E$05@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 6>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetD; // "?volDeltaOffsetD@?1???$ProcessBlock@E$05@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::NativeVector::Process<float, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`6'::volDeltaOffsetA; // "?volDeltaOffsetA@?5???$Process@M$00@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::NativeVector::Process<float, 2>(struct XAUDIO::XAUDIOSRCHDR *)'::`6'::volDeltaOffsetA; // "?volDeltaOffsetA@?5???$Process@M$01@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::NativeVector::Process<float, 6>(struct XAUDIO::XAUDIOSRCHDR *)'::`6'::volDeltaOffsetA; // "?volDeltaOffsetA@?5???$Process@M$05@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::NativeVector::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`6'::volDeltaOffsetA; // "?volDeltaOffsetA@?5???$Process@F$00@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::NativeVector::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`6'::volDeltaOffsetB; // "?volDeltaOffsetB@?5???$Process@F$00@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::NativeVector::Process<short, 2>(struct XAUDIO::XAUDIOSRCHDR *)'::`6'::volDeltaOffsetA; // "?volDeltaOffsetA@?5???$Process@F$01@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::NativeVector::Process<short, 6>(struct XAUDIO::XAUDIOSRCHDR *)'::`6'::volDeltaOffsetA; // "?volDeltaOffsetA@?5???$Process@F$05@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::NativeVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`6'::volDeltaOffsetA; // "?volDeltaOffsetA@?5???$Process@E$00@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::NativeVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`6'::volDeltaOffsetB; // "?volDeltaOffsetB@?5???$Process@E$00@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::NativeVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`6'::volDeltaOffsetC; // "?volDeltaOffsetC@?5???$Process@E$00@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::NativeVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`6'::volDeltaOffsetD; // "?volDeltaOffsetD@?5???$Process@E$00@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// __vmx@3f0000003f8000003f0000003f800000; // "__vmx@3f0000003f8000003f0000003f800000"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::DoubleVector::Process<float, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`9'::volDeltaOffsetA; // "?volDeltaOffsetA@?8???$Process@M$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::DoubleVector::Process<float, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`9'::volDeltaOffsetB; // "?volDeltaOffsetB@?8???$Process@M$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::DoubleVector::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`9'::volDeltaOffsetA; // "?volDeltaOffsetA@?8???$Process@F$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::DoubleVector::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`9'::volDeltaOffsetD; // "?volDeltaOffsetD@?8???$Process@F$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::DoubleVector::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`9'::volDeltaOffsetB; // "?volDeltaOffsetB@?8???$Process@F$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::DoubleVector::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`9'::volDeltaOffsetC; // "?volDeltaOffsetC@?8???$Process@F$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::DoubleVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`9'::volDeltaOffsetG; // "?volDeltaOffsetG@?8???$Process@E$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::DoubleVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`9'::volDeltaOffsetH; // "?volDeltaOffsetH@?8???$Process@E$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::DoubleVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`9'::volDeltaOffsetB; // "?volDeltaOffsetB@?8???$Process@E$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::DoubleVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`9'::volDeltaOffsetC; // "?volDeltaOffsetC@?8???$Process@E$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::DoubleVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`9'::volDeltaOffsetD; // "?volDeltaOffsetD@?8???$Process@E$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::DoubleVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`9'::volDeltaOffsetE; // "?volDeltaOffsetE@?8???$Process@E$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::DoubleVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`9'::volDeltaOffsetF; // "?volDeltaOffsetF@?8???$Process@E$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::DoubleVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)'::`9'::volDeltaOffsetA; // "?volDeltaOffsetA@?8???$Process@E$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 1>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@USHORTLE@@$00@LinearVector@SRC@XAUDIO@@SAXPIBUSHORTLE@@HPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 1>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetB; // "?volDeltaOffsetB@?1???$ProcessBlock@USHORTLE@@$00@LinearVector@SRC@XAUDIO@@SAXPIBUSHORTLE@@HPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 2>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@USHORTLE@@$01@LinearVector@SRC@XAUDIO@@SAXPIBUSHORTLE@@HPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 2>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetB; // "?volDeltaOffsetB@?1???$ProcessBlock@USHORTLE@@$01@LinearVector@SRC@XAUDIO@@SAXPIBUSHORTLE@@HPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 4>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@USHORTLE@@$03@LinearVector@SRC@XAUDIO@@SAXPIBUSHORTLE@@HPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 4>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetB; // "?volDeltaOffsetB@?1???$ProcessBlock@USHORTLE@@$03@LinearVector@SRC@XAUDIO@@SAXPIBUSHORTLE@@HPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 6>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetA; // "?volDeltaOffsetA@?1???$ProcessBlock@USHORTLE@@$05@LinearVector@SRC@XAUDIO@@SAXPIBUSHORTLE@@HPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"
// struct __vector4const `public: static void __cdecl XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 6>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)'::`2'::volDeltaOffsetB; // "?volDeltaOffsetB@?1???$ProcessBlock@USHORTLE@@$05@LinearVector@SRC@XAUDIO@@SAXPIBUSHORTLE@@HPIAMHPAUXAUDIOSRCHDR@3@@Z@4U__vector4@@B"

// public: static void XAUDIO::SRC::Linear::SaveFloatValue(float *, struct __vector4);
// public: static struct __vector4 XAUDIO::SRC::Linear::ConvertSampleToNative<float>(void const *);
// public: static struct __vector4 XAUDIO::SRC::Linear::ConvertSampleToNative<short>(void const *);
// public: static struct __vector4 XAUDIO::SRC::Linear::ConvertSampleToNative<struct SHORTLE>(void const *);
// public: static struct __vector4 XAUDIO::SRC::Linear::ConvertSampleToNative<unsigned char>(void const *);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunkChannel<short>(unsigned int *, struct __vector4&, struct __vector4, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&);
// void (* XAudioSRCGetProc(union XAUDIOFORMAT const *, unsigned long, unsigned long))(struct XAUDIO::XAUDIOSRCHDR *);
// private: void XAUDIO::CResampler::UpdateSRCTableEntry(void);
// public: static void XAUDIO::SRC::Common::OffsetBuffer<float const>(float const **, int *, unsigned int, unsigned int);
// public: static void XAUDIO::SRC::Common::OffsetBuffer<float>(float **, int *, unsigned int, unsigned int);
// public: static void XAUDIO::SRC::Common::GetBufferOffset<float>(unsigned int *, void const *, void const *, unsigned int, unsigned int);
// public: static void XAUDIO::SRC::Common::OffsetBuffer<short const>(short const **, int *, unsigned int, unsigned int);
// public: static void XAUDIO::SRC::Common::GetBufferOffset<short>(unsigned int *, void const *, void const *, unsigned int, unsigned int);
// public: static void XAUDIO::SRC::Common::OffsetBuffer<unsigned char const>(unsigned char const **, int *, unsigned int, unsigned int);
// public: static void XAUDIO::SRC::Common::GetBufferOffset<unsigned char>(unsigned int *, void const *, void const *, unsigned int, unsigned int);
// public: static void XAUDIO::SRC::Common::OffsetBuffer<struct SHORTLE const>(struct SHORTLE const **, int *, unsigned int, unsigned int);
// public: static void XAUDIO::SRC::Common::GetBufferOffset<struct SHORTLE>(unsigned int *, void const *, void const *, unsigned int, unsigned int);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<short, 1>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<short, 2>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<short, 4>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<short, 6>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// void XAudioConvertSampleShortToNative(float *, short);
// void XAudioConvertSampleNativeToShort(short *, float);
// void XAudioConvertSampleByteToNative(float *, unsigned char);
// void XAudioConvertSampleNativeToByte(unsigned char *, float);
// void XAudioConvertSampleShortLEToNative(float *, struct SHORTLE);
// void XAudioConvertSampleNativeToShortLE(struct SHORTLE *, float);
// void XAudioConvertSample(float *, float);
// void XAudioConvertSample(float *, short);
// void XAudioConvertSample(short *, float);
// void XAudioConvertSample(float *, unsigned char);
// void XAudioConvertSample(unsigned char *, float);
// void XAudioConvertSample(float *, struct SHORTLE);
// void XAudioConvertSample(struct SHORTLE *, float);
// unsigned int XAudioGetFrameBufferStride(unsigned int);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunkChannel<float>(unsigned int *, struct __vector4&, struct __vector4, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunkChannel<unsigned char>(unsigned int *, struct __vector4&, struct __vector4, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&);
// public: static void XAUDIO::SRC::NativeVector::ProcessChunk<float, 1>(unsigned int *, float &, unsigned int *, float &volatile, struct __vector4, float &volatile, float &volatile, float &volatile);
// public: static void XAUDIO::SRC::NativeVector::ProcessChunk<short, 1>(unsigned int *, float &, unsigned int *, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile);
// public: static void XAUDIO::SRC::NativeVector::ProcessChunk<unsigned char, 1>(unsigned int *, float &, unsigned int *, struct __vector4&volatile, struct __vector4&volatile, struct __vector4&volatile, struct __vector4&volatile);
// public: static struct __vector4 XAUDIO::SRC::DoubleVector::ProcessChunk<float>(float *, float const *, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4);
// public: static struct __vector4 XAUDIO::SRC::DoubleVector::ProcessChunk<short>(float *, short const *, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4);
// public: static struct __vector4 XAUDIO::SRC::DoubleVector::ProcessChunk<unsigned char>(float *, unsigned char const *, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4);
// private: void XAUDIO::CResampler::UpdateProperties(void);
// public: static void XAUDIO::SRC::Common::GetLocalBuffers<float>(float const **, int *, float **, int *, struct XAUDIO::XAUDIOSRCHDR const *);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, float, 1, 0>(float *, float const *, unsigned int);
// public: static void XAUDIO::SRC::Common::GetBufferOffsets<float>(struct XAUDIO::XAUDIOSRCHDR *, float const *, float *);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, float, 1, 1>(float *, float const *, unsigned int);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, float, 1, 2>(float *, float const *, unsigned int);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, float, 1, 4>(float *, float const *, unsigned int);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, float, 1, 6>(float *, float const *, unsigned int);
// public: static void XAUDIO::SRC::Common::GetLocalBuffers<short>(short const **, int *, float **, int *, struct XAUDIO::XAUDIOSRCHDR const *);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, short, 1, 0>(float *, short const *, unsigned int);
// public: static void XAUDIO::SRC::Common::GetBufferOffsets<short>(struct XAUDIO::XAUDIOSRCHDR *, short const *, float *);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, short, 1, 1>(float *, short const *, unsigned int);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, short, 1, 2>(float *, short const *, unsigned int);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, short, 1, 4>(float *, short const *, unsigned int);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, short, 1, 6>(float *, short const *, unsigned int);
// public: static void XAUDIO::SRC::Common::GetLocalBuffers<unsigned char>(unsigned char const **, int *, float **, int *, struct XAUDIO::XAUDIOSRCHDR const *);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, unsigned char, 1, 0>(float *, unsigned char const *, unsigned int);
// public: static void XAUDIO::SRC::Common::GetBufferOffsets<unsigned char>(struct XAUDIO::XAUDIOSRCHDR *, unsigned char const *, float *);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, unsigned char, 1, 1>(float *, unsigned char const *, unsigned int);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, unsigned char, 1, 2>(float *, unsigned char const *, unsigned int);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, unsigned char, 1, 4>(float *, unsigned char const *, unsigned int);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, unsigned char, 1, 6>(float *, unsigned char const *, unsigned int);
// public: static void XAUDIO::SRC::Common::GetLocalBuffers<struct SHORTLE>(struct SHORTLE const **, int *, float **, int *, struct XAUDIO::XAUDIOSRCHDR const *);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, struct SHORTLE, 1, 0>(float *, struct SHORTLE const *, unsigned int);
// public: static void XAUDIO::SRC::Common::GetBufferOffsets<struct SHORTLE>(struct XAUDIO::XAUDIOSRCHDR *, struct SHORTLE const *, float *);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, struct SHORTLE, 1, 1>(float *, struct SHORTLE const *, unsigned int);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, struct SHORTLE, 1, 2>(float *, struct SHORTLE const *, unsigned int);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, struct SHORTLE, 1, 4>(float *, struct SHORTLE const *, unsigned int);
// public: static void XAUDIO::SRC::Common::CopySample<float, 1, struct SHORTLE, 1, 6>(float *, struct SHORTLE const *, unsigned int);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<short, 1>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<short, 2>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<short, 4>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<short, 6>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 0, 1>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 0, 0>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 1, 1>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 1, 0>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 2, 1>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 2, 0>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 4, 1>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 4, 0>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 6, 1>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 6, 0>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 0, 1>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 0, 0>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 1, 1>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 1, 0>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 2, 1>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 2, 0>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 4, 1>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 4, 0>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 6, 1>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 6, 0>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 0, 1>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 0, 0>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 1, 1>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 1, 0>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 2, 1>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 2, 0>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 4, 1>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 4, 0>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 6, 1>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 6, 0>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 0, 1>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 0, 0>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 1, 1>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 1, 0>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 2, 1>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 2, 0>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 4, 1>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 4, 0>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 6, 1>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 6, 0>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Native::CreateDestSample<float, 0>(float *, float const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<float, 1>(float *, float const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<float, 2>(float *, float const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<float, 4>(float *, float const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<float, 6>(float *, float const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<short, 0>(float *, short const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<short, 1>(float *, short const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<short, 2>(float *, short const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<short, 4>(float *, short const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<short, 6>(float *, short const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<unsigned char, 0>(float *, unsigned char const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<unsigned char, 1>(float *, unsigned char const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<unsigned char, 2>(float *, unsigned char const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<unsigned char, 4>(float *, unsigned char const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<unsigned char, 6>(float *, unsigned char const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<struct SHORTLE, 0>(float *, struct SHORTLE const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<struct SHORTLE, 1>(float *, struct SHORTLE const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<struct SHORTLE, 2>(float *, struct SHORTLE const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<struct SHORTLE, 4>(float *, struct SHORTLE const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSample<struct SHORTLE, 6>(float *, struct SHORTLE const *, unsigned int, unsigned int, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<float, 0>(float *, float const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<float, 1>(float *, float const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<float, 2>(float *, float const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<float, 4>(float *, float const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<float, 6>(float *, float const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<short, 0>(float *, short const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<short, 1>(float *, short const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<short, 2>(float *, short const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<short, 4>(float *, short const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<short, 6>(float *, short const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<unsigned char, 0>(float *, unsigned char const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<unsigned char, 1>(float *, unsigned char const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<unsigned char, 2>(float *, unsigned char const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<unsigned char, 4>(float *, unsigned char const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<unsigned char, 6>(float *, unsigned char const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<struct SHORTLE, 0>(float *, struct SHORTLE const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<struct SHORTLE, 1>(float *, struct SHORTLE const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<struct SHORTLE, 2>(float *, struct SHORTLE const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<struct SHORTLE, 4>(float *, struct SHORTLE const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSample<struct SHORTLE, 6>(float *, struct SHORTLE const *, float *, unsigned int, unsigned int, float, float);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<float, 1>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<float, 2>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<float, 4>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<float, 6>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<unsigned char, 1>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<unsigned char, 2>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<unsigned char, 4>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<unsigned char, 6>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunkChannel<struct SHORTLE>(unsigned int *, struct __vector4&, struct __vector4, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&);
// public: static void XAUDIO::SRC::NativeVector::ProcessChunk<float, 2>(unsigned int *, float &, unsigned int *, float &volatile, struct __vector4, float &volatile, float &volatile, float &volatile);
// public: static void XAUDIO::SRC::NativeVector::ProcessChunk<float, 6>(unsigned int *, float &, unsigned int *, float &volatile, struct __vector4, float &volatile, float &volatile, float &volatile);
// public: static void XAUDIO::SRC::NativeVector::ProcessChunk<short, 2>(unsigned int *, float &, unsigned int *, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile);
// public: static void XAUDIO::SRC::NativeVector::ProcessChunk<short, 6>(unsigned int *, float &, unsigned int *, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile);
// public: unsigned int XAUDIO::CResampler::Process(void);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 0, 1>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 0, 0>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 1, 1>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 1, 0>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 2, 1>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 2, 0>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 4, 1>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 4, 0>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 6, 1>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 6, 0>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 0, 1>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 0, 0>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 1, 1>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 1, 0>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 2, 1>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 2, 0>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 4, 1>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 4, 0>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 6, 1>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 6, 0>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 0, 1>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 0, 0>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 1, 1>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 1, 0>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 2, 1>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 2, 0>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 4, 1>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 4, 0>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 6, 1>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 6, 0>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 0, 1>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 0, 0>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 1, 1>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 1, 0>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 2, 1>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 2, 0>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 4, 1>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 4, 0>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 6, 1>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 6, 0>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<float, 0>(float *, float const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<float, 1>(float *, float const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<float, 2>(float *, float const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<float, 4>(float *, float const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<float, 6>(float *, float const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<short, 0>(float *, short const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<short, 1>(float *, short const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<short, 2>(float *, short const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<short, 4>(float *, short const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<short, 6>(float *, short const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<unsigned char, 0>(float *, unsigned char const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<unsigned char, 1>(float *, unsigned char const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<unsigned char, 2>(float *, unsigned char const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<unsigned char, 4>(float *, unsigned char const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<unsigned char, 6>(float *, unsigned char const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<struct SHORTLE, 0>(float *, struct SHORTLE const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<struct SHORTLE, 1>(float *, struct SHORTLE const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<struct SHORTLE, 2>(float *, struct SHORTLE const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<struct SHORTLE, 4>(float *, struct SHORTLE const *, unsigned int, float);
// public: static void XAUDIO::SRC::Native::CreateDestSamples<struct SHORTLE, 6>(float *, struct SHORTLE const *, unsigned int, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<float, 0>(float *, float const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<float, 1>(float *, float const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<float, 2>(float *, float const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<float, 4>(float *, float const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<float, 6>(float *, float const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<short, 0>(float *, short const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<short, 1>(float *, short const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<short, 2>(float *, short const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<short, 4>(float *, short const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<short, 6>(float *, short const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<unsigned char, 0>(float *, unsigned char const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<unsigned char, 1>(float *, unsigned char const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<unsigned char, 2>(float *, unsigned char const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<unsigned char, 4>(float *, unsigned char const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<unsigned char, 6>(float *, unsigned char const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<struct SHORTLE, 0>(float *, struct SHORTLE const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<struct SHORTLE, 1>(float *, struct SHORTLE const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<struct SHORTLE, 2>(float *, struct SHORTLE const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<struct SHORTLE, 4>(float *, struct SHORTLE const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::Double::CreateDestSamples<struct SHORTLE, 6>(float *, struct SHORTLE const *, float *, unsigned int, float, float);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<float, 1>(unsigned int *, float &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<float, 2>(unsigned int *, float &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<float, 4>(unsigned int *, float &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<float, 6>(unsigned int *, float &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 1>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 2>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 4>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 6>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<struct SHORTLE, 1>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<struct SHORTLE, 2>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<struct SHORTLE, 4>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// public: static void XAUDIO::SRC::LinearVector::ProcessChunk<struct SHORTLE, 6>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &);
// public: static void XAUDIO::SRC::Linear::Process<float, 0>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<float, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<float, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<float, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<float, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<short, 0>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<short, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<short, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<short, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<unsigned char, 0>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<unsigned char, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<unsigned char, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<unsigned char, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<struct SHORTLE, 0>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<struct SHORTLE, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<struct SHORTLE, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<struct SHORTLE, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Linear::Process<struct SHORTLE, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<float, 0>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<float, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<float, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<float, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<float, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<short, 0>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<short, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<short, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<short, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<unsigned char, 0>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<unsigned char, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<unsigned char, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<unsigned char, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<struct SHORTLE, 0>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<struct SHORTLE, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<struct SHORTLE, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<struct SHORTLE, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Native::Process<struct SHORTLE, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<float, 0>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<float, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<float, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<float, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<float, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<short, 0>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<short, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<short, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<short, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<unsigned char, 0>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<unsigned char, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<unsigned char, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<unsigned char, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<struct SHORTLE, 0>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<struct SHORTLE, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<struct SHORTLE, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<struct SHORTLE, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::Double::Process<struct SHORTLE, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<float, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<float, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<float, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<float, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<short, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<short, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<short, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<unsigned char, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<unsigned char, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<unsigned char, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::NativeVector::Process<float, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::NativeVector::Process<float, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::NativeVector::Process<float, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::NativeVector::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::NativeVector::Process<short, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::NativeVector::Process<short, 6>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::NativeVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::DoubleVector::Process<float, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::DoubleVector::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::DoubleVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 1>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 2>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 4>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 6>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<struct SHORTLE, 1>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<struct SHORTLE, 2>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<struct SHORTLE, 4>(struct XAUDIO::XAUDIOSRCHDR *);
// public: static void XAUDIO::SRC::LinearVector::Process<struct SHORTLE, 6>(struct XAUDIO::XAUDIOSRCHDR *);

//public: static void XAUDIO::SRC::Linear::SaveFloatValue(float *, struct __vector4)
//{
//    mangled_ppc("?SaveFloatValue@Linear@SRC@XAUDIO@@SAXPAMU__vector4@@@Z");
//};

//public: static struct __vector4 XAUDIO::SRC::Linear::ConvertSampleToNative<float>(void const *)
//{
//    mangled_ppc("??$ConvertSampleToNative@M@Linear@SRC@XAUDIO@@SA?AU__vector4@@PBX@Z");
//};

//public: static struct __vector4 XAUDIO::SRC::Linear::ConvertSampleToNative<short>(void const *)
//{
//    mangled_ppc("??$ConvertSampleToNative@F@Linear@SRC@XAUDIO@@SA?AU__vector4@@PBX@Z");
//};

//public: static struct __vector4 XAUDIO::SRC::Linear::ConvertSampleToNative<struct SHORTLE>(void const *)
//{
//    mangled_ppc("??$ConvertSampleToNative@USHORTLE@@@Linear@SRC@XAUDIO@@SA?AU__vector4@@PBX@Z");
//};

//public: static struct __vector4 XAUDIO::SRC::Linear::ConvertSampleToNative<unsigned char>(void const *)
//{
//    mangled_ppc("??$ConvertSampleToNative@E@Linear@SRC@XAUDIO@@SA?AU__vector4@@PBX@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunkChannel<short>(unsigned int *, struct __vector4&, struct __vector4, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&)
//{
//    mangled_ppc("??$ProcessChunkChannel@F@LinearVector@SRC@XAUDIO@@SAXPIAU__vector4@@U3@1111111111@Z");
//};

//void (* XAudioSRCGetProc(union XAUDIOFORMAT const *, unsigned long, unsigned long))(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("?XAudioSRCGetProc@@YAP6AXPAUXAUDIOSRCHDR@XAUDIO@@@ZPBTXAUDIOFORMAT@@KK@Z");
//};

//private: void XAUDIO::CResampler::UpdateSRCTableEntry(void)
//{
//    mangled_ppc("?UpdateSRCTableEntry@CResampler@XAUDIO@@AAAXXZ");
//};

//public: static void XAUDIO::SRC::Common::OffsetBuffer<float const>(float const **, int *, unsigned int, unsigned int)
//{
//    mangled_ppc("??$OffsetBuffer@$$CBM@Common@SRC@XAUDIO@@SAXPAPBMPAHII@Z");
//};

//public: static void XAUDIO::SRC::Common::OffsetBuffer<float>(float **, int *, unsigned int, unsigned int)
//{
//    mangled_ppc("??$OffsetBuffer@M@Common@SRC@XAUDIO@@SAXPAPAMPAHII@Z");
//};

//public: static void XAUDIO::SRC::Common::GetBufferOffset<float>(unsigned int *, void const *, void const *, unsigned int, unsigned int)
//{
//    mangled_ppc("??$GetBufferOffset@M@Common@SRC@XAUDIO@@SAXPAIPBX1II@Z");
//};

//public: static void XAUDIO::SRC::Common::OffsetBuffer<short const>(short const **, int *, unsigned int, unsigned int)
//{
//    mangled_ppc("??$OffsetBuffer@$$CBF@Common@SRC@XAUDIO@@SAXPAPBFPAHII@Z");
//};

//public: static void XAUDIO::SRC::Common::GetBufferOffset<short>(unsigned int *, void const *, void const *, unsigned int, unsigned int)
//{
//    mangled_ppc("??$GetBufferOffset@F@Common@SRC@XAUDIO@@SAXPAIPBX1II@Z");
//};

//public: static void XAUDIO::SRC::Common::OffsetBuffer<unsigned char const>(unsigned char const **, int *, unsigned int, unsigned int)
//{
//    mangled_ppc("??$OffsetBuffer@$$CBE@Common@SRC@XAUDIO@@SAXPAPBEPAHII@Z");
//};

//public: static void XAUDIO::SRC::Common::GetBufferOffset<unsigned char>(unsigned int *, void const *, void const *, unsigned int, unsigned int)
//{
//    mangled_ppc("??$GetBufferOffset@E@Common@SRC@XAUDIO@@SAXPAIPBX1II@Z");
//};

//public: static void XAUDIO::SRC::Common::OffsetBuffer<struct SHORTLE const>(struct SHORTLE const **, int *, unsigned int, unsigned int)
//{
//    mangled_ppc("??$OffsetBuffer@$$CBUSHORTLE@@@Common@SRC@XAUDIO@@SAXPAPBUSHORTLE@@PAHII@Z");
//};

//public: static void XAUDIO::SRC::Common::GetBufferOffset<struct SHORTLE>(unsigned int *, void const *, void const *, unsigned int, unsigned int)
//{
//    mangled_ppc("??$GetBufferOffset@USHORTLE@@@Common@SRC@XAUDIO@@SAXPAIPBX1II@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<short, 1>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@F$00@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<short, 2>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@F$01@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<short, 4>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@F$03@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<short, 6>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@F$05@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//void XAudioConvertSampleShortToNative(float *, short)
//{
//    mangled_ppc("?XAudioConvertSampleShortToNative@@YAXPAMF@Z");
//};

//void XAudioConvertSampleNativeToShort(short *, float)
//{
//    mangled_ppc("?XAudioConvertSampleNativeToShort@@YAXPAFM@Z");
//};

//void XAudioConvertSampleByteToNative(float *, unsigned char)
//{
//    mangled_ppc("?XAudioConvertSampleByteToNative@@YAXPAME@Z");
//};

//void XAudioConvertSampleNativeToByte(unsigned char *, float)
//{
//    mangled_ppc("?XAudioConvertSampleNativeToByte@@YAXPAEM@Z");
//};

//void XAudioConvertSampleShortLEToNative(float *, struct SHORTLE)
//{
//    mangled_ppc("?XAudioConvertSampleShortLEToNative@@YAXPAMUSHORTLE@@@Z");
//};

//void XAudioConvertSampleNativeToShortLE(struct SHORTLE *, float)
//{
//    mangled_ppc("?XAudioConvertSampleNativeToShortLE@@YAXPAUSHORTLE@@M@Z");
//};

//void XAudioConvertSample(float *, float)
//{
//    mangled_ppc("?XAudioConvertSample@@YAXPAMM@Z");
//};

//void XAudioConvertSample(float *, short)
//{
//    mangled_ppc("?XAudioConvertSample@@YAXPAMF@Z");
//};

//void XAudioConvertSample(short *, float)
//{
//    mangled_ppc("?XAudioConvertSample@@YAXPAFM@Z");
//};

//void XAudioConvertSample(float *, unsigned char)
//{
//    mangled_ppc("?XAudioConvertSample@@YAXPAME@Z");
//};

//void XAudioConvertSample(unsigned char *, float)
//{
//    mangled_ppc("?XAudioConvertSample@@YAXPAEM@Z");
//};

//void XAudioConvertSample(float *, struct SHORTLE)
//{
//    mangled_ppc("?XAudioConvertSample@@YAXPAMUSHORTLE@@@Z");
//};

//void XAudioConvertSample(struct SHORTLE *, float)
//{
//    mangled_ppc("?XAudioConvertSample@@YAXPAUSHORTLE@@M@Z");
//};

//unsigned int XAudioGetFrameBufferStride(unsigned int)
//{
//    mangled_ppc("?XAudioGetFrameBufferStride@@YAII@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunkChannel<float>(unsigned int *, struct __vector4&, struct __vector4, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&)
//{
//    mangled_ppc("??$ProcessChunkChannel@M@LinearVector@SRC@XAUDIO@@SAXPIAU__vector4@@U3@1111111111@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunkChannel<unsigned char>(unsigned int *, struct __vector4&, struct __vector4, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&)
//{
//    mangled_ppc("??$ProcessChunkChannel@E@LinearVector@SRC@XAUDIO@@SAXPIAU__vector4@@U3@1111111111@Z");
//};

//public: static void XAUDIO::SRC::NativeVector::ProcessChunk<float, 1>(unsigned int *, float &, unsigned int *, float &volatile, struct __vector4, float &volatile, float &volatile, float &volatile)
//{
//    mangled_ppc("??$ProcessChunk@M$00@NativeVector@SRC@XAUDIO@@SAXPIAMPIBMU__vector4@@222@Z");
//};

//public: static void XAUDIO::SRC::NativeVector::ProcessChunk<short, 1>(unsigned int *, float &, unsigned int *, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile)
//{
//    mangled_ppc("??$ProcessChunk@F$00@NativeVector@SRC@XAUDIO@@SAXPIAMPIBFU__vector4@@222@Z");
//};

//public: static void XAUDIO::SRC::NativeVector::ProcessChunk<unsigned char, 1>(unsigned int *, float &, unsigned int *, struct __vector4&volatile, struct __vector4&volatile, struct __vector4&volatile, struct __vector4&volatile)
//{
//    mangled_ppc("??$ProcessChunk@E$00@NativeVector@SRC@XAUDIO@@SAXPIAMPIBEU__vector4@@222@Z");
//};

//public: static struct __vector4 XAUDIO::SRC::DoubleVector::ProcessChunk<float>(float *, float const *, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$ProcessChunk@M@DoubleVector@SRC@XAUDIO@@SA?AU__vector4@@PAMPBMU3@222222222@Z");
//};

//public: static struct __vector4 XAUDIO::SRC::DoubleVector::ProcessChunk<short>(float *, short const *, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$ProcessChunk@F@DoubleVector@SRC@XAUDIO@@SA?AU__vector4@@PAMPBFU3@222222222@Z");
//};

//public: static struct __vector4 XAUDIO::SRC::DoubleVector::ProcessChunk<unsigned char>(float *, unsigned char const *, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$ProcessChunk@E@DoubleVector@SRC@XAUDIO@@SA?AU__vector4@@PAMPBEU3@222222222@Z");
//};

//private: void XAUDIO::CResampler::UpdateProperties(void)
//{
//    mangled_ppc("?UpdateProperties@CResampler@XAUDIO@@AAAXXZ");
//};

//public: static void XAUDIO::SRC::Common::GetLocalBuffers<float>(float const **, int *, float **, int *, struct XAUDIO::XAUDIOSRCHDR const *)
//{
//    mangled_ppc("??$GetLocalBuffers@M@Common@SRC@XAUDIO@@SAXPAPBMPAHPAPAM1PBUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, float, 1, 0>(float *, float const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00M$00$0A@@Common@SRC@XAUDIO@@SAXPAMPBMI@Z");
//};

//public: static void XAUDIO::SRC::Common::GetBufferOffsets<float>(struct XAUDIO::XAUDIOSRCHDR *, float const *, float *)
//{
//    mangled_ppc("??$GetBufferOffsets@M@Common@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@PBMPAM@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, float, 1, 1>(float *, float const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00M$00$00@Common@SRC@XAUDIO@@SAXPAMPBMI@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, float, 1, 2>(float *, float const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00M$00$01@Common@SRC@XAUDIO@@SAXPAMPBMI@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, float, 1, 4>(float *, float const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00M$00$03@Common@SRC@XAUDIO@@SAXPAMPBMI@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, float, 1, 6>(float *, float const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00M$00$05@Common@SRC@XAUDIO@@SAXPAMPBMI@Z");
//};

//public: static void XAUDIO::SRC::Common::GetLocalBuffers<short>(short const **, int *, float **, int *, struct XAUDIO::XAUDIOSRCHDR const *)
//{
//    mangled_ppc("??$GetLocalBuffers@F@Common@SRC@XAUDIO@@SAXPAPBFPAHPAPAM1PBUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, short, 1, 0>(float *, short const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00F$00$0A@@Common@SRC@XAUDIO@@SAXPAMPBFI@Z");
//};

//public: static void XAUDIO::SRC::Common::GetBufferOffsets<short>(struct XAUDIO::XAUDIOSRCHDR *, short const *, float *)
//{
//    mangled_ppc("??$GetBufferOffsets@F@Common@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@PBFPAM@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, short, 1, 1>(float *, short const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00F$00$00@Common@SRC@XAUDIO@@SAXPAMPBFI@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, short, 1, 2>(float *, short const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00F$00$01@Common@SRC@XAUDIO@@SAXPAMPBFI@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, short, 1, 4>(float *, short const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00F$00$03@Common@SRC@XAUDIO@@SAXPAMPBFI@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, short, 1, 6>(float *, short const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00F$00$05@Common@SRC@XAUDIO@@SAXPAMPBFI@Z");
//};

//public: static void XAUDIO::SRC::Common::GetLocalBuffers<unsigned char>(unsigned char const **, int *, float **, int *, struct XAUDIO::XAUDIOSRCHDR const *)
//{
//    mangled_ppc("??$GetLocalBuffers@E@Common@SRC@XAUDIO@@SAXPAPBEPAHPAPAM1PBUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, unsigned char, 1, 0>(float *, unsigned char const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00E$00$0A@@Common@SRC@XAUDIO@@SAXPAMPBEI@Z");
//};

//public: static void XAUDIO::SRC::Common::GetBufferOffsets<unsigned char>(struct XAUDIO::XAUDIOSRCHDR *, unsigned char const *, float *)
//{
//    mangled_ppc("??$GetBufferOffsets@E@Common@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@PBEPAM@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, unsigned char, 1, 1>(float *, unsigned char const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00E$00$00@Common@SRC@XAUDIO@@SAXPAMPBEI@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, unsigned char, 1, 2>(float *, unsigned char const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00E$00$01@Common@SRC@XAUDIO@@SAXPAMPBEI@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, unsigned char, 1, 4>(float *, unsigned char const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00E$00$03@Common@SRC@XAUDIO@@SAXPAMPBEI@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, unsigned char, 1, 6>(float *, unsigned char const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00E$00$05@Common@SRC@XAUDIO@@SAXPAMPBEI@Z");
//};

//public: static void XAUDIO::SRC::Common::GetLocalBuffers<struct SHORTLE>(struct SHORTLE const **, int *, float **, int *, struct XAUDIO::XAUDIOSRCHDR const *)
//{
//    mangled_ppc("??$GetLocalBuffers@USHORTLE@@@Common@SRC@XAUDIO@@SAXPAPBUSHORTLE@@PAHPAPAM1PBUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, struct SHORTLE, 1, 0>(float *, struct SHORTLE const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00USHORTLE@@$00$0A@@Common@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@I@Z");
//};

//public: static void XAUDIO::SRC::Common::GetBufferOffsets<struct SHORTLE>(struct XAUDIO::XAUDIOSRCHDR *, struct SHORTLE const *, float *)
//{
//    mangled_ppc("??$GetBufferOffsets@USHORTLE@@@Common@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@PBUSHORTLE@@PAM@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, struct SHORTLE, 1, 1>(float *, struct SHORTLE const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00USHORTLE@@$00$00@Common@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@I@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, struct SHORTLE, 1, 2>(float *, struct SHORTLE const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00USHORTLE@@$00$01@Common@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@I@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, struct SHORTLE, 1, 4>(float *, struct SHORTLE const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00USHORTLE@@$00$03@Common@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@I@Z");
//};

//public: static void XAUDIO::SRC::Common::CopySample<float, 1, struct SHORTLE, 1, 6>(float *, struct SHORTLE const *, unsigned int)
//{
//    mangled_ppc("??$CopySample@M$00USHORTLE@@$00$05@Common@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@I@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<short, 1>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@F$00@LinearVector@SRC@XAUDIO@@SAXPIBFHPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<short, 2>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@F$01@LinearVector@SRC@XAUDIO@@SAXPIBFHPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<short, 4>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@F$03@LinearVector@SRC@XAUDIO@@SAXPIBFHPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<short, 6>(unsigned int *, int const &volatile, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@F$05@LinearVector@SRC@XAUDIO@@SAXPIBFHPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 0, 1>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@M$0A@$00@Linear@SRC@XAUDIO@@SAXPAMPBM1II_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 0, 0>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@M$0A@$0A@@Linear@SRC@XAUDIO@@SAXPAMPBM1II_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 1, 1>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@M$00$00@Linear@SRC@XAUDIO@@SAXPAMPBM1II_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 1, 0>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@M$00$0A@@Linear@SRC@XAUDIO@@SAXPAMPBM1II_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 2, 1>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@M$01$00@Linear@SRC@XAUDIO@@SAXPAMPBM1II_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 2, 0>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@M$01$0A@@Linear@SRC@XAUDIO@@SAXPAMPBM1II_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 4, 1>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@M$03$00@Linear@SRC@XAUDIO@@SAXPAMPBM1II_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 4, 0>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@M$03$0A@@Linear@SRC@XAUDIO@@SAXPAMPBM1II_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 6, 1>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@M$05$00@Linear@SRC@XAUDIO@@SAXPAMPBM1II_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<float, 6, 0>(float *, float const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@M$05$0A@@Linear@SRC@XAUDIO@@SAXPAMPBM1II_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 0, 1>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@F$0A@$00@Linear@SRC@XAUDIO@@SAXPAMPBFPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 0, 0>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@F$0A@$0A@@Linear@SRC@XAUDIO@@SAXPAMPBFPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 1, 1>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@F$00$00@Linear@SRC@XAUDIO@@SAXPAMPBFPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 1, 0>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@F$00$0A@@Linear@SRC@XAUDIO@@SAXPAMPBFPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 2, 1>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@F$01$00@Linear@SRC@XAUDIO@@SAXPAMPBFPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 2, 0>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@F$01$0A@@Linear@SRC@XAUDIO@@SAXPAMPBFPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 4, 1>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@F$03$00@Linear@SRC@XAUDIO@@SAXPAMPBFPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 4, 0>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@F$03$0A@@Linear@SRC@XAUDIO@@SAXPAMPBFPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 6, 1>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@F$05$00@Linear@SRC@XAUDIO@@SAXPAMPBFPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<short, 6, 0>(float *, short const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@F$05$0A@@Linear@SRC@XAUDIO@@SAXPAMPBFPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 0, 1>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@E$0A@$00@Linear@SRC@XAUDIO@@SAXPAMPBEPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 0, 0>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@E$0A@$0A@@Linear@SRC@XAUDIO@@SAXPAMPBEPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 1, 1>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@E$00$00@Linear@SRC@XAUDIO@@SAXPAMPBEPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 1, 0>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@E$00$0A@@Linear@SRC@XAUDIO@@SAXPAMPBEPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 2, 1>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@E$01$00@Linear@SRC@XAUDIO@@SAXPAMPBEPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 2, 0>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@E$01$0A@@Linear@SRC@XAUDIO@@SAXPAMPBEPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 4, 1>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@E$03$00@Linear@SRC@XAUDIO@@SAXPAMPBEPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 4, 0>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@E$03$0A@@Linear@SRC@XAUDIO@@SAXPAMPBEPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 6, 1>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@E$05$00@Linear@SRC@XAUDIO@@SAXPAMPBEPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<unsigned char, 6, 0>(float *, unsigned char const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@E$05$0A@@Linear@SRC@XAUDIO@@SAXPAMPBEPBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 0, 1>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$0A@$00@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 0, 0>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$0A@$0A@@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 1, 1>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$00$00@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 1, 0>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$00$0A@@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 2, 1>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$01$00@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 2, 0>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$01$0A@@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 4, 1>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$03$00@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 4, 0>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$03$0A@@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 6, 1>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$05$00@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSample<struct SHORTLE, 6, 0>(float *, struct SHORTLE const *, float const *, unsigned int, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$05$0A@@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMII_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<float, 0>(float *, float const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@M$0A@@Native@SRC@XAUDIO@@SAXPAMPBMIIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<float, 1>(float *, float const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@M$00@Native@SRC@XAUDIO@@SAXPAMPBMIIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<float, 2>(float *, float const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@M$01@Native@SRC@XAUDIO@@SAXPAMPBMIIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<float, 4>(float *, float const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@M$03@Native@SRC@XAUDIO@@SAXPAMPBMIIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<float, 6>(float *, float const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@M$05@Native@SRC@XAUDIO@@SAXPAMPBMIIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<short, 0>(float *, short const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@F$0A@@Native@SRC@XAUDIO@@SAXPAMPBFIIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<short, 1>(float *, short const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@F$00@Native@SRC@XAUDIO@@SAXPAMPBFIIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<short, 2>(float *, short const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@F$01@Native@SRC@XAUDIO@@SAXPAMPBFIIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<short, 4>(float *, short const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@F$03@Native@SRC@XAUDIO@@SAXPAMPBFIIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<short, 6>(float *, short const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@F$05@Native@SRC@XAUDIO@@SAXPAMPBFIIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<unsigned char, 0>(float *, unsigned char const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@E$0A@@Native@SRC@XAUDIO@@SAXPAMPBEIIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<unsigned char, 1>(float *, unsigned char const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@E$00@Native@SRC@XAUDIO@@SAXPAMPBEIIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<unsigned char, 2>(float *, unsigned char const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@E$01@Native@SRC@XAUDIO@@SAXPAMPBEIIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<unsigned char, 4>(float *, unsigned char const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@E$03@Native@SRC@XAUDIO@@SAXPAMPBEIIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<unsigned char, 6>(float *, unsigned char const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@E$05@Native@SRC@XAUDIO@@SAXPAMPBEIIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<struct SHORTLE, 0>(float *, struct SHORTLE const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$0A@@Native@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@IIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<struct SHORTLE, 1>(float *, struct SHORTLE const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$00@Native@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@IIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<struct SHORTLE, 2>(float *, struct SHORTLE const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$01@Native@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@IIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<struct SHORTLE, 4>(float *, struct SHORTLE const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$03@Native@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@IIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSample<struct SHORTLE, 6>(float *, struct SHORTLE const *, unsigned int, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$05@Native@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@IIM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<float, 0>(float *, float const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@M$0A@@Double@SRC@XAUDIO@@SAXPAMPBM0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<float, 1>(float *, float const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@M$00@Double@SRC@XAUDIO@@SAXPAMPBM0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<float, 2>(float *, float const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@M$01@Double@SRC@XAUDIO@@SAXPAMPBM0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<float, 4>(float *, float const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@M$03@Double@SRC@XAUDIO@@SAXPAMPBM0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<float, 6>(float *, float const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@M$05@Double@SRC@XAUDIO@@SAXPAMPBM0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<short, 0>(float *, short const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@F$0A@@Double@SRC@XAUDIO@@SAXPAMPBF0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<short, 1>(float *, short const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@F$00@Double@SRC@XAUDIO@@SAXPAMPBF0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<short, 2>(float *, short const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@F$01@Double@SRC@XAUDIO@@SAXPAMPBF0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<short, 4>(float *, short const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@F$03@Double@SRC@XAUDIO@@SAXPAMPBF0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<short, 6>(float *, short const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@F$05@Double@SRC@XAUDIO@@SAXPAMPBF0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<unsigned char, 0>(float *, unsigned char const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@E$0A@@Double@SRC@XAUDIO@@SAXPAMPBE0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<unsigned char, 1>(float *, unsigned char const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@E$00@Double@SRC@XAUDIO@@SAXPAMPBE0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<unsigned char, 2>(float *, unsigned char const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@E$01@Double@SRC@XAUDIO@@SAXPAMPBE0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<unsigned char, 4>(float *, unsigned char const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@E$03@Double@SRC@XAUDIO@@SAXPAMPBE0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<unsigned char, 6>(float *, unsigned char const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@E$05@Double@SRC@XAUDIO@@SAXPAMPBE0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<struct SHORTLE, 0>(float *, struct SHORTLE const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$0A@@Double@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<struct SHORTLE, 1>(float *, struct SHORTLE const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$00@Double@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<struct SHORTLE, 2>(float *, struct SHORTLE const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$01@Double@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<struct SHORTLE, 4>(float *, struct SHORTLE const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$03@Double@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@0IIMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSample<struct SHORTLE, 6>(float *, struct SHORTLE const *, float *, unsigned int, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSample@USHORTLE@@$05@Double@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@0IIMM@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<float, 1>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@M$00@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<float, 2>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@M$01@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<float, 4>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@M$03@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<float, 6>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@M$05@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<unsigned char, 1>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@E$00@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<unsigned char, 2>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@E$01@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<unsigned char, 4>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@E$03@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<unsigned char, 6>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@E$05@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunkChannel<struct SHORTLE>(unsigned int *, struct __vector4&, struct __vector4, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&, struct __vector4&)
//{
//    mangled_ppc("??$ProcessChunkChannel@USHORTLE@@@LinearVector@SRC@XAUDIO@@SAXPIAU__vector4@@U3@1111111111@Z");
//};

//public: static void XAUDIO::SRC::NativeVector::ProcessChunk<float, 2>(unsigned int *, float &, unsigned int *, float &volatile, struct __vector4, float &volatile, float &volatile, float &volatile)
//{
//    mangled_ppc("??$ProcessChunk@M$01@NativeVector@SRC@XAUDIO@@SAXPIAMPIBMU__vector4@@222@Z");
//};

//public: static void XAUDIO::SRC::NativeVector::ProcessChunk<float, 6>(unsigned int *, float &, unsigned int *, float &volatile, struct __vector4, float &volatile, float &volatile, float &volatile)
//{
//    mangled_ppc("??$ProcessChunk@M$05@NativeVector@SRC@XAUDIO@@SAXPIAMPIBMU__vector4@@222@Z");
//};

//public: static void XAUDIO::SRC::NativeVector::ProcessChunk<short, 2>(unsigned int *, float &, unsigned int *, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile)
//{
//    mangled_ppc("??$ProcessChunk@F$01@NativeVector@SRC@XAUDIO@@SAXPIAMPIBFU__vector4@@222@Z");
//};

//public: static void XAUDIO::SRC::NativeVector::ProcessChunk<short, 6>(unsigned int *, float &, unsigned int *, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile, struct __vector4const &volatile)
//{
//    mangled_ppc("??$ProcessChunk@F$05@NativeVector@SRC@XAUDIO@@SAXPIAMPIBFU__vector4@@222@Z");
//};

//public: unsigned int XAUDIO::CResampler::Process(void)
//{
//    mangled_ppc("?Process@CResampler@XAUDIO@@QAAIXZ");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 0, 1>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@M$0A@$00@Linear@SRC@XAUDIO@@SAXPAMPBM1I_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 0, 0>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@M$0A@$0A@@Linear@SRC@XAUDIO@@SAXPAMPBM1I_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 1, 1>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@M$00$00@Linear@SRC@XAUDIO@@SAXPAMPBM1I_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 1, 0>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@M$00$0A@@Linear@SRC@XAUDIO@@SAXPAMPBM1I_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 2, 1>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@M$01$00@Linear@SRC@XAUDIO@@SAXPAMPBM1I_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 2, 0>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@M$01$0A@@Linear@SRC@XAUDIO@@SAXPAMPBM1I_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 4, 1>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@M$03$00@Linear@SRC@XAUDIO@@SAXPAMPBM1I_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 4, 0>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@M$03$0A@@Linear@SRC@XAUDIO@@SAXPAMPBM1I_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 6, 1>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@M$05$00@Linear@SRC@XAUDIO@@SAXPAMPBM1I_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<float, 6, 0>(float *, float const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@M$05$0A@@Linear@SRC@XAUDIO@@SAXPAMPBM1I_JU__vector4@@3@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 0, 1>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@F$0A@$00@Linear@SRC@XAUDIO@@SAXPAMPBFPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 0, 0>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@F$0A@$0A@@Linear@SRC@XAUDIO@@SAXPAMPBFPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 1, 1>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@F$00$00@Linear@SRC@XAUDIO@@SAXPAMPBFPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 1, 0>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@F$00$0A@@Linear@SRC@XAUDIO@@SAXPAMPBFPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 2, 1>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@F$01$00@Linear@SRC@XAUDIO@@SAXPAMPBFPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 2, 0>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@F$01$0A@@Linear@SRC@XAUDIO@@SAXPAMPBFPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 4, 1>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@F$03$00@Linear@SRC@XAUDIO@@SAXPAMPBFPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 4, 0>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@F$03$0A@@Linear@SRC@XAUDIO@@SAXPAMPBFPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 6, 1>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@F$05$00@Linear@SRC@XAUDIO@@SAXPAMPBFPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<short, 6, 0>(float *, short const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@F$05$0A@@Linear@SRC@XAUDIO@@SAXPAMPBFPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 0, 1>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@E$0A@$00@Linear@SRC@XAUDIO@@SAXPAMPBEPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 0, 0>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@E$0A@$0A@@Linear@SRC@XAUDIO@@SAXPAMPBEPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 1, 1>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@E$00$00@Linear@SRC@XAUDIO@@SAXPAMPBEPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 1, 0>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@E$00$0A@@Linear@SRC@XAUDIO@@SAXPAMPBEPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 2, 1>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@E$01$00@Linear@SRC@XAUDIO@@SAXPAMPBEPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 2, 0>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@E$01$0A@@Linear@SRC@XAUDIO@@SAXPAMPBEPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 4, 1>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@E$03$00@Linear@SRC@XAUDIO@@SAXPAMPBEPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 4, 0>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@E$03$0A@@Linear@SRC@XAUDIO@@SAXPAMPBEPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 6, 1>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@E$05$00@Linear@SRC@XAUDIO@@SAXPAMPBEPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<unsigned char, 6, 0>(float *, unsigned char const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@E$05$0A@@Linear@SRC@XAUDIO@@SAXPAMPBEPBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 0, 1>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$0A@$00@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 0, 0>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$0A@$0A@@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 1, 1>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$00$00@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 1, 0>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$00$0A@@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 2, 1>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$01$00@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 2, 0>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$01$0A@@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 4, 1>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$03$00@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 4, 0>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$03$0A@@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 6, 1>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$05$00@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Linear::CreateDestSamples<struct SHORTLE, 6, 0>(float *, struct SHORTLE const *, float const *, unsigned int, __int64, struct __vector4, struct __vector4)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$05$0A@@Linear@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@PBMI_JU__vector4@@4@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<float, 0>(float *, float const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@M$0A@@Native@SRC@XAUDIO@@SAXPAMPBMIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<float, 1>(float *, float const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@M$00@Native@SRC@XAUDIO@@SAXPAMPBMIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<float, 2>(float *, float const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@M$01@Native@SRC@XAUDIO@@SAXPAMPBMIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<float, 4>(float *, float const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@M$03@Native@SRC@XAUDIO@@SAXPAMPBMIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<float, 6>(float *, float const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@M$05@Native@SRC@XAUDIO@@SAXPAMPBMIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<short, 0>(float *, short const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@F$0A@@Native@SRC@XAUDIO@@SAXPAMPBFIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<short, 1>(float *, short const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@F$00@Native@SRC@XAUDIO@@SAXPAMPBFIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<short, 2>(float *, short const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@F$01@Native@SRC@XAUDIO@@SAXPAMPBFIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<short, 4>(float *, short const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@F$03@Native@SRC@XAUDIO@@SAXPAMPBFIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<short, 6>(float *, short const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@F$05@Native@SRC@XAUDIO@@SAXPAMPBFIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<unsigned char, 0>(float *, unsigned char const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@E$0A@@Native@SRC@XAUDIO@@SAXPAMPBEIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<unsigned char, 1>(float *, unsigned char const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@E$00@Native@SRC@XAUDIO@@SAXPAMPBEIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<unsigned char, 2>(float *, unsigned char const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@E$01@Native@SRC@XAUDIO@@SAXPAMPBEIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<unsigned char, 4>(float *, unsigned char const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@E$03@Native@SRC@XAUDIO@@SAXPAMPBEIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<unsigned char, 6>(float *, unsigned char const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@E$05@Native@SRC@XAUDIO@@SAXPAMPBEIM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<struct SHORTLE, 0>(float *, struct SHORTLE const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$0A@@Native@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@IM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<struct SHORTLE, 1>(float *, struct SHORTLE const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$00@Native@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@IM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<struct SHORTLE, 2>(float *, struct SHORTLE const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$01@Native@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@IM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<struct SHORTLE, 4>(float *, struct SHORTLE const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$03@Native@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@IM@Z");
//};

//public: static void XAUDIO::SRC::Native::CreateDestSamples<struct SHORTLE, 6>(float *, struct SHORTLE const *, unsigned int, float)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$05@Native@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@IM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<float, 0>(float *, float const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@M$0A@@Double@SRC@XAUDIO@@SAXPAMPBM0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<float, 1>(float *, float const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@M$00@Double@SRC@XAUDIO@@SAXPAMPBM0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<float, 2>(float *, float const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@M$01@Double@SRC@XAUDIO@@SAXPAMPBM0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<float, 4>(float *, float const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@M$03@Double@SRC@XAUDIO@@SAXPAMPBM0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<float, 6>(float *, float const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@M$05@Double@SRC@XAUDIO@@SAXPAMPBM0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<short, 0>(float *, short const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@F$0A@@Double@SRC@XAUDIO@@SAXPAMPBF0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<short, 1>(float *, short const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@F$00@Double@SRC@XAUDIO@@SAXPAMPBF0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<short, 2>(float *, short const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@F$01@Double@SRC@XAUDIO@@SAXPAMPBF0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<short, 4>(float *, short const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@F$03@Double@SRC@XAUDIO@@SAXPAMPBF0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<short, 6>(float *, short const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@F$05@Double@SRC@XAUDIO@@SAXPAMPBF0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<unsigned char, 0>(float *, unsigned char const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@E$0A@@Double@SRC@XAUDIO@@SAXPAMPBE0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<unsigned char, 1>(float *, unsigned char const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@E$00@Double@SRC@XAUDIO@@SAXPAMPBE0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<unsigned char, 2>(float *, unsigned char const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@E$01@Double@SRC@XAUDIO@@SAXPAMPBE0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<unsigned char, 4>(float *, unsigned char const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@E$03@Double@SRC@XAUDIO@@SAXPAMPBE0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<unsigned char, 6>(float *, unsigned char const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@E$05@Double@SRC@XAUDIO@@SAXPAMPBE0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<struct SHORTLE, 0>(float *, struct SHORTLE const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$0A@@Double@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<struct SHORTLE, 1>(float *, struct SHORTLE const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$00@Double@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<struct SHORTLE, 2>(float *, struct SHORTLE const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$01@Double@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<struct SHORTLE, 4>(float *, struct SHORTLE const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$03@Double@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@0IMM@Z");
//};

//public: static void XAUDIO::SRC::Double::CreateDestSamples<struct SHORTLE, 6>(float *, struct SHORTLE const *, float *, unsigned int, float, float)
//{
//    mangled_ppc("??$CreateDestSamples@USHORTLE@@$05@Double@SRC@XAUDIO@@SAXPAMPBUSHORTLE@@0IMM@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<float, 1>(unsigned int *, float &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@M$00@LinearVector@SRC@XAUDIO@@SAXPIBMHPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<float, 2>(unsigned int *, float &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@M$01@LinearVector@SRC@XAUDIO@@SAXPIBMHPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<float, 4>(unsigned int *, float &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@M$03@LinearVector@SRC@XAUDIO@@SAXPIBMHPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<float, 6>(unsigned int *, float &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@M$05@LinearVector@SRC@XAUDIO@@SAXPIBMHPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 1>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@E$00@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 2>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@E$01@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 4>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@E$03@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<unsigned char, 6>(unsigned int *, unsigned int *const volatile &volatile, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@E$05@LinearVector@SRC@XAUDIO@@SAXPIBEHPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<struct SHORTLE, 1>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@USHORTLE@@$00@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<struct SHORTLE, 2>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@USHORTLE@@$01@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<struct SHORTLE, 4>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@USHORTLE@@$03@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessChunk<struct SHORTLE, 6>(unsigned int *, float &, struct __vector4, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &, float &)
//{
//    mangled_ppc("??$ProcessChunk@USHORTLE@@$05@LinearVector@SRC@XAUDIO@@SAXPIAMU__vector4@@11111111111111111111@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<float, 0>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$0A@@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<float, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$00@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<float, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$01@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<float, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$03@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<float, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$05@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<short, 0>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$0A@@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$00@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<short, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$01@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<short, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$03@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<short, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$05@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<unsigned char, 0>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$0A@@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$00@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<unsigned char, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$01@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<unsigned char, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$03@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<unsigned char, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$05@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<struct SHORTLE, 0>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$0A@@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<struct SHORTLE, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$00@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<struct SHORTLE, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$01@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<struct SHORTLE, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$03@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Linear::Process<struct SHORTLE, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$05@Linear@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<float, 0>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$0A@@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<float, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$00@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<float, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$01@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<float, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$03@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<float, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$05@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<short, 0>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$0A@@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$00@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<short, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$01@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<short, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$03@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<short, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$05@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<unsigned char, 0>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$0A@@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$00@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<unsigned char, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$01@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<unsigned char, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$03@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<unsigned char, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$05@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<struct SHORTLE, 0>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$0A@@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<struct SHORTLE, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$00@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<struct SHORTLE, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$01@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<struct SHORTLE, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$03@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Native::Process<struct SHORTLE, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$05@Native@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<float, 0>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$0A@@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<float, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$00@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<float, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$01@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<float, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$03@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<float, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$05@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<short, 0>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$0A@@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$00@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<short, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$01@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<short, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$03@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<short, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$05@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<unsigned char, 0>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$0A@@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$00@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<unsigned char, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$01@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<unsigned char, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$03@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<unsigned char, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$05@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<struct SHORTLE, 0>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$0A@@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<struct SHORTLE, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$00@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<struct SHORTLE, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$01@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<struct SHORTLE, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$03@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::Double::Process<struct SHORTLE, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$05@Double@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<float, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$00@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<float, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$01@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<float, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$03@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<float, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$05@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$00@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<short, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$01@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<short, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$03@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<short, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$05@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$00@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<unsigned char, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$01@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<unsigned char, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$03@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<unsigned char, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$05@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::NativeVector::Process<float, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$00@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::NativeVector::Process<float, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$01@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::NativeVector::Process<float, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$05@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::NativeVector::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$00@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::NativeVector::Process<short, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$01@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::NativeVector::Process<short, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$05@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::NativeVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$00@NativeVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::DoubleVector::Process<float, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@M$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::DoubleVector::Process<short, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@F$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::DoubleVector::Process<unsigned char, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@E$00@DoubleVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 1>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@USHORTLE@@$00@LinearVector@SRC@XAUDIO@@SAXPIBUSHORTLE@@HPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 2>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@USHORTLE@@$01@LinearVector@SRC@XAUDIO@@SAXPIBUSHORTLE@@HPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 4>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@USHORTLE@@$03@LinearVector@SRC@XAUDIO@@SAXPIBUSHORTLE@@HPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::ProcessBlock<struct SHORTLE, 6>(unsigned int *, struct SHORTLE &volatile, int, unsigned int *, float &, int, struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$ProcessBlock@USHORTLE@@$05@LinearVector@SRC@XAUDIO@@SAXPIBUSHORTLE@@HPIAMHPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<struct SHORTLE, 1>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$00@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<struct SHORTLE, 2>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$01@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<struct SHORTLE, 4>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$03@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

//public: static void XAUDIO::SRC::LinearVector::Process<struct SHORTLE, 6>(struct XAUDIO::XAUDIOSRCHDR *)
//{
//    mangled_ppc("??$Process@USHORTLE@@$05@LinearVector@SRC@XAUDIO@@SAXPAUXAUDIOSRCHDR@2@@Z");
//};

