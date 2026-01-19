/* ---------- headers */

#include "xdk\xgraphicsd\convert.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct __vector4const `struct __vector4 __cdecl D3D::ConvertGammaToLinear(struct __vector4)'::`2'::C0; // "?C0@?1??ConvertGammaToLinear@D3D@@YA?AU__vector4@@U3@@Z@4U3@B"
// struct __vector4const `struct __vector4 __cdecl D3D::ConvertGammaToLinear(struct __vector4)'::`2'::C1; // "?C1@?1??ConvertGammaToLinear@D3D@@YA?AU__vector4@@U3@@Z@4U3@B"
// unsigned int const *const const `struct __vector4 __cdecl GetSwizzleVectorSrc(enum _D3DFORMAT)'::`2'::Component; // "?Component@?1??GetSwizzleVectorSrc@@YA?AU__vector4@@W4_D3DFORMAT@@@Z@4QBIB"
// struct __vector4const `struct __vector4 __cdecl ConvertR5G6B5ToVector(unsigned short)'::`2'::Scale; // "?Scale@?1??ConvertR5G6B5ToVector@@YA?AU__vector4@@G@Z@4U2@B"
// struct __vector4const `struct __vector4 __cdecl ConvertR8G8ToVector(unsigned short)'::`2'::Scale; // "?Scale@?1??ConvertR8G8ToVector@@YA?AU__vector4@@G@Z@4U2@B"
// struct __vector4const `void __cdecl LoadTexelBlock_DXT_A3(void const *, struct __vector4*)'::`2'::Scale; // "?Scale@?1??LoadTexelBlock_DXT_A3@@YAXPBXPAU__vector4@@@Z@4U2@B"
// struct __vector4const `void __cdecl LoadTexelBlock_DXT_A5(void const *, struct __vector4*, unsigned int)'::`7'::B00; // "?B00@?6??LoadTexelBlock_DXT_A5@@YAXPBXPAU__vector4@@I@Z@4U2@B"
// struct __vector4const `void __cdecl LoadTexelBlock_DXT_A5(void const *, struct __vector4*, unsigned int)'::`7'::B01; // "?B01@?6??LoadTexelBlock_DXT_A5@@YAXPBXPAU__vector4@@I@Z@4U2@B"
// struct __vector4const `void __cdecl LoadTexelBlock_DXT_A5(void const *, struct __vector4*, unsigned int)'::`7'::B11; // "?B11@?6??LoadTexelBlock_DXT_A5@@YAXPBXPAU__vector4@@I@Z@4U2@B"
// struct __vector4const `void __cdecl LoadTexelBlock_DXT_A5(void const *, struct __vector4*, unsigned int)'::`7'::B10; // "?B10@?6??LoadTexelBlock_DXT_A5@@YAXPBXPAU__vector4@@I@Z@4U2@B"
// struct __vector4const `void __cdecl LoadTexelBlock_DXT_A5(void const *, struct __vector4*, unsigned int)'::`5'::B01; // "?B01@?4??LoadTexelBlock_DXT_A5@@YAXPBXPAU__vector4@@I@Z@4U2@B"
// struct __vector4const `void __cdecl LoadTexelBlock_DXT_A5(void const *, struct __vector4*, unsigned int)'::`5'::B00; // "?B00@?4??LoadTexelBlock_DXT_A5@@YAXPBXPAU__vector4@@I@Z@4U2@B"
// struct __vector4const `void __cdecl LoadTexelBlock_DXT_A5(void const *, struct __vector4*, unsigned int)'::`5'::B11; // "?B11@?4??LoadTexelBlock_DXT_A5@@YAXPBXPAU__vector4@@I@Z@4U2@B"
// struct __vector4const `void __cdecl LoadTexelBlock_DXT_A5(void const *, struct __vector4*, unsigned int)'::`5'::B10; // "?B10@?4??LoadTexelBlock_DXT_A5@@YAXPBXPAU__vector4@@I@Z@4U2@B"
// struct __vector4const `void __cdecl LoadTexelBlock_DXT_A5(void const *, struct __vector4*, unsigned int)'::`2'::Scale; // "?Scale@?1??LoadTexelBlock_DXT_A5@@YAXPBXPAU__vector4@@I@Z@4U2@B"
// struct XMVECTORU32const `void __cdecl DivideDXTTexelBlockAlpha(struct __vector4*)'::`2'::Permute; // "?Permute@?1??DivideDXTTexelBlockAlpha@@YAXPAU__vector4@@@Z@4UXMVECTORU32@@B"
// struct XMVECTORU32const `void __cdecl LoadTexelBlock_RG_BG(void const *, struct __vector4*, struct __vector4)'::`2'::PermuteDst1; // "?PermuteDst1@?1??LoadTexelBlock_RG_BG@@YAXPBXPAU__vector4@@U2@@Z@4UXMVECTORU32@@B"
// struct __vector4const `void __cdecl LoadTexelBlock_RG_BG(void const *, struct __vector4*, struct __vector4)'::`2'::Scale; // "?Scale@?1??LoadTexelBlock_RG_BG@@YAXPBXPAU__vector4@@U2@@Z@4U2@B"
// struct XMVECTORU32const `void __cdecl LoadTexelBlock_RG_BG(void const *, struct __vector4*, struct __vector4)'::`2'::PermuteDst0; // "?PermuteDst0@?1??LoadTexelBlock_RG_BG@@YAXPBXPAU__vector4@@U2@@Z@4UXMVECTORU32@@B"
// struct __vector4const `void __cdecl LoadTexelBlock_YUV(void const *, struct __vector4*, struct __vector4)'::`2'::C0; // "?C0@?1??LoadTexelBlock_YUV@@YAXPBXPAU__vector4@@U2@@Z@4U2@B"
// struct __vector4const `void __cdecl LoadTexelBlock_YUV(void const *, struct __vector4*, struct __vector4)'::`2'::C2; // "?C2@?1??LoadTexelBlock_YUV@@YAXPBXPAU__vector4@@U2@@Z@4U2@B"
// struct __vector4const `void __cdecl LoadTexelBlock_YUV(void const *, struct __vector4*, struct __vector4)'::`2'::OneAlpha; // "?OneAlpha@?1??LoadTexelBlock_YUV@@YAXPBXPAU__vector4@@U2@@Z@4U2@B"
// struct __vector4const `void __cdecl LoadTexelBlock_YUV(void const *, struct __vector4*, struct __vector4)'::`2'::C1; // "?C1@?1??LoadTexelBlock_YUV@@YAXPBXPAU__vector4@@U2@@Z@4U2@B"
// struct __vector4const `void __cdecl LoadTexelBlock_YUV(void const *, struct __vector4*, struct __vector4)'::`2'::Scale; // "?Scale@?1??LoadTexelBlock_YUV@@YAXPBXPAU__vector4@@U2@@Z@4U2@B"
// struct __vector4const `void __cdecl LoadTexelBlock_YUV(void const *, struct __vector4*, struct __vector4)'::`2'::Offset; // "?Offset@?1??LoadTexelBlock_YUV@@YAXPBXPAU__vector4@@U2@@Z@4U2@B"

// struct __vector4 GetSwizzleVectorDst(enum _D3DFORMAT);
// struct __vector4 XMVectorSetInt(unsigned int, unsigned int, unsigned int, unsigned int);
// struct __vector4 XMVectorSetIntY(struct __vector4, unsigned int);
// struct __vector4 XMVectorEqual(struct __vector4, struct __vector4);
// struct __vector4 XMVectorSaturate(struct __vector4);
// struct __vector4 XMVectorMinimize(struct __vector4, struct __vector4);
// struct __vector4 XMVectorMaximize(struct __vector4, struct __vector4);
// void * XGRAPHICS::XGMemAlloc(unsigned long);
// void XGRAPHICS::XGMemFree(void *);
// struct __vector4 D3D::ConvertGammaToLinear(struct __vector4);
// struct __vector4 LoadTexel(void const *, struct TexelDesc const *, struct __vector4(*)(void const *, struct TexelDesc const *), struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4);
// struct __vector4 GetSwizzleVectorSrc(enum _D3DFORMAT);
// struct __vector4 ConvertSelectedGammaToLinear(struct __vector4, struct __vector4);
// struct __vector4 ConvertSelectedLinearToGamma(struct __vector4, struct __vector4);
// struct __vector4 XMLoadInt(unsigned int const *);
// struct __vector4 XMLoadInt4(unsigned int const *);
// struct __vector4 XMVectorSetByIndex(struct __vector4, float, unsigned int);
// struct __vector4 XMVectorLerp(struct __vector4, struct __vector4, float);
// struct __vector4 LoadTexel8(void const *, struct TexelDesc const *);
// struct __vector4 LoadTexel16(void const *, struct TexelDesc const *);
// struct __vector4 LoadTexel16_16F(void const *, struct TexelDesc const *);
// struct __vector4 LoadTexel32(void const *, struct TexelDesc const *);
// struct __vector4 LoadTexel32_16F(void const *, struct TexelDesc const *);
// struct __vector4 ConvertR5G6B5ToVector(unsigned short);
// struct __vector4 ConvertR8G8ToVector(unsigned short);
// void LoadTexelBlock_DXT_RGB(void const *, struct __vector4*);
// void LoadTexelBlock_DXT_RGRG(void const *, struct __vector4*);
// void LoadTexelBlock_DXT_A3(void const *, struct __vector4*);
// void LoadTexelBlock_DXT_A3_1111(void const *, struct __vector4*);
// void LoadTexelBlock_DXT_A5(void const *, struct __vector4*, unsigned int);
// void LoadTexelBlock_DXT_RGBA23(void const *, struct __vector4*);
// void LoadTexelBlock_DXT_RGBA45(void const *, struct __vector4*);
// void DivideDXTTexelBlockAlpha(struct __vector4*);
// void LoadTexelBlock_RG_BG(void const *, struct __vector4*, struct __vector4);
// void LoadTexelBlock_YUV(void const *, struct __vector4*, struct __vector4);
// void LoadTexelBlock_DXT1(void const *, struct __vector4*);
// void LoadTexelBlock_DXT2(void const *, struct __vector4*);
// void LoadTexelBlock_DXT3(void const *, struct __vector4*);
// void LoadTexelBlock_DXT4(void const *, struct __vector4*);
// void LoadTexelBlock_DXT5(void const *, struct __vector4*);
// void LoadTexelBlock_DXT3A(void const *, struct __vector4*);
// void LoadTexelBlock_DXT5A(void const *, struct __vector4*);
// void LoadTexelBlock_DXN(void const *, struct __vector4*);
// void LoadTexelBlock_DXT3A_AS_1111(void const *, struct __vector4*);
// void LoadTexelBlock_CTX1(void const *, struct __vector4*);
// void LoadTexelBlock_UYVY(void const *, struct __vector4*);
// void LoadTexelBlock_YUY2(void const *, struct __vector4*);
// void LoadTexelBlock_R8G8_B8G8(void const *, struct __vector4*);
// void LoadTexelBlock_G8R8_G8B8(void const *, struct __vector4*);
// void StoreTexel8(void *, struct __vector4, struct TexelDesc const *);
// void StoreTexel16(void *, struct __vector4, struct TexelDesc const *);
// void StoreTexel16_16F(void *, struct __vector4, struct TexelDesc const *);
// void StoreTexel32(void *, struct __vector4, struct TexelDesc const *);
// void StoreTexel32_16F(void *, struct __vector4, struct TexelDesc const *);
// void StoreTexel(void *, struct __vector4, struct TexelDesc const *, void (*)(void *, struct __vector4, struct TexelDesc const *), struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4);
// struct __vector4 GetThresholdVector(float, struct TexelDesc const *);
// struct __vector4 GetGammaSelectVector(unsigned long *);
// struct __vector4(* GetLoadTexelProc(struct TexelDesc const *))(void const *, struct TexelDesc const *);
// void (* GetLoadTexelBlockProc(unsigned long, unsigned long))(void const *, struct __vector4*);
// void (* GetStoreTexelProc(struct TexelDesc const *))(void *, struct __vector4, struct TexelDesc const *);
// void GetLoadTerms(struct TexelDesc const *, unsigned long, unsigned long *, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*);
// void GetStoreTerms(struct TexelDesc const *, unsigned long, unsigned long *, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*);
// XGCopySurface;
// XGCopyVolume;

//struct __vector4 GetSwizzleVectorDst(enum _D3DFORMAT)
//{
//    mangled_ppc("?GetSwizzleVectorDst@@YA?AU__vector4@@W4_D3DFORMAT@@@Z");
//};

//struct __vector4 XMVectorSetInt(unsigned int, unsigned int, unsigned int, unsigned int)
//{
//    mangled_ppc("?XMVectorSetInt@@YA?AU__vector4@@IIII@Z");
//};

//struct __vector4 XMVectorSetIntY(struct __vector4, unsigned int)
//{
//    mangled_ppc("?XMVectorSetIntY@@YA?AU__vector4@@U1@I@Z");
//};

//struct __vector4 XMVectorEqual(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorEqual@@YA?AU__vector4@@U1@0@Z");
//};

//struct __vector4 XMVectorSaturate(struct __vector4)
//{
//    mangled_ppc("?XMVectorSaturate@@YA?AU__vector4@@U1@@Z");
//};

//struct __vector4 XMVectorMinimize(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorMinimize@@YA?AU__vector4@@U1@0@Z");
//};

//struct __vector4 XMVectorMaximize(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?XMVectorMaximize@@YA?AU__vector4@@U1@0@Z");
//};

//void * XGRAPHICS::XGMemAlloc(unsigned long)
//{
//    mangled_ppc("?XGMemAlloc@XGRAPHICS@@YAPAXK@Z");
//};

//void XGRAPHICS::XGMemFree(void *)
//{
//    mangled_ppc("?XGMemFree@XGRAPHICS@@YAXPAX@Z");
//};

//struct __vector4 D3D::ConvertGammaToLinear(struct __vector4)
//{
//    mangled_ppc("?ConvertGammaToLinear@D3D@@YA?AU__vector4@@U2@@Z");
//};

//struct __vector4 LoadTexel(void const *, struct TexelDesc const *, struct __vector4(*)(void const *, struct TexelDesc const *), struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?LoadTexel@@YA?AU__vector4@@PBXPBUTexelDesc@@P6A?AU1@01@ZU1@3333@Z");
//};

//struct __vector4 GetSwizzleVectorSrc(enum _D3DFORMAT)
//{
//    mangled_ppc("?GetSwizzleVectorSrc@@YA?AU__vector4@@W4_D3DFORMAT@@@Z");
//};

//struct __vector4 ConvertSelectedGammaToLinear(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?ConvertSelectedGammaToLinear@@YA?AU__vector4@@U1@0@Z");
//};

//struct __vector4 ConvertSelectedLinearToGamma(struct __vector4, struct __vector4)
//{
//    mangled_ppc("?ConvertSelectedLinearToGamma@@YA?AU__vector4@@U1@0@Z");
//};

//struct __vector4 XMLoadInt(unsigned int const *)
//{
//    mangled_ppc("?XMLoadInt@@YA?AU__vector4@@PBI@Z");
//};

//struct __vector4 XMLoadInt4(unsigned int const *)
//{
//    mangled_ppc("?XMLoadInt4@@YA?AU__vector4@@PBI@Z");
//};

//struct __vector4 XMVectorSetByIndex(struct __vector4, float, unsigned int)
//{
//    mangled_ppc("?XMVectorSetByIndex@@YA?AU__vector4@@U1@MI@Z");
//};

//struct __vector4 XMVectorLerp(struct __vector4, struct __vector4, float)
//{
//    mangled_ppc("?XMVectorLerp@@YA?AU__vector4@@U1@0M@Z");
//};

//struct __vector4 LoadTexel8(void const *, struct TexelDesc const *)
//{
//    mangled_ppc("?LoadTexel8@@YA?AU__vector4@@PBXPBUTexelDesc@@@Z");
//};

//struct __vector4 LoadTexel16(void const *, struct TexelDesc const *)
//{
//    mangled_ppc("?LoadTexel16@@YA?AU__vector4@@PBXPBUTexelDesc@@@Z");
//};

//struct __vector4 LoadTexel16_16F(void const *, struct TexelDesc const *)
//{
//    mangled_ppc("?LoadTexel16_16F@@YA?AU__vector4@@PBXPBUTexelDesc@@@Z");
//};

//struct __vector4 LoadTexel32(void const *, struct TexelDesc const *)
//{
//    mangled_ppc("?LoadTexel32@@YA?AU__vector4@@PBXPBUTexelDesc@@@Z");
//};

//struct __vector4 LoadTexel32_16F(void const *, struct TexelDesc const *)
//{
//    mangled_ppc("?LoadTexel32_16F@@YA?AU__vector4@@PBXPBUTexelDesc@@@Z");
//};

//struct __vector4 ConvertR5G6B5ToVector(unsigned short)
//{
//    mangled_ppc("?ConvertR5G6B5ToVector@@YA?AU__vector4@@G@Z");
//};

//struct __vector4 ConvertR8G8ToVector(unsigned short)
//{
//    mangled_ppc("?ConvertR8G8ToVector@@YA?AU__vector4@@G@Z");
//};

//void LoadTexelBlock_DXT_RGB(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_DXT_RGB@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_DXT_RGRG(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_DXT_RGRG@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_DXT_A3(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_DXT_A3@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_DXT_A3_1111(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_DXT_A3_1111@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_DXT_A5(void const *, struct __vector4*, unsigned int)
//{
//    mangled_ppc("?LoadTexelBlock_DXT_A5@@YAXPBXPAU__vector4@@I@Z");
//};

//void LoadTexelBlock_DXT_RGBA23(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_DXT_RGBA23@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_DXT_RGBA45(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_DXT_RGBA45@@YAXPBXPAU__vector4@@@Z");
//};

//void DivideDXTTexelBlockAlpha(struct __vector4*)
//{
//    mangled_ppc("?DivideDXTTexelBlockAlpha@@YAXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_RG_BG(void const *, struct __vector4*, struct __vector4)
//{
//    mangled_ppc("?LoadTexelBlock_RG_BG@@YAXPBXPAU__vector4@@U1@@Z");
//};

//void LoadTexelBlock_YUV(void const *, struct __vector4*, struct __vector4)
//{
//    mangled_ppc("?LoadTexelBlock_YUV@@YAXPBXPAU__vector4@@U1@@Z");
//};

//void LoadTexelBlock_DXT1(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_DXT1@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_DXT2(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_DXT2@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_DXT3(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_DXT3@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_DXT4(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_DXT4@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_DXT5(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_DXT5@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_DXT3A(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_DXT3A@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_DXT5A(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_DXT5A@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_DXN(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_DXN@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_DXT3A_AS_1111(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_DXT3A_AS_1111@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_CTX1(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_CTX1@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_UYVY(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_UYVY@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_YUY2(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_YUY2@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_R8G8_B8G8(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_R8G8_B8G8@@YAXPBXPAU__vector4@@@Z");
//};

//void LoadTexelBlock_G8R8_G8B8(void const *, struct __vector4*)
//{
//    mangled_ppc("?LoadTexelBlock_G8R8_G8B8@@YAXPBXPAU__vector4@@@Z");
//};

//void StoreTexel8(void *, struct __vector4, struct TexelDesc const *)
//{
//    mangled_ppc("?StoreTexel8@@YAXPAXU__vector4@@PBUTexelDesc@@@Z");
//};

//void StoreTexel16(void *, struct __vector4, struct TexelDesc const *)
//{
//    mangled_ppc("?StoreTexel16@@YAXPAXU__vector4@@PBUTexelDesc@@@Z");
//};

//void StoreTexel16_16F(void *, struct __vector4, struct TexelDesc const *)
//{
//    mangled_ppc("?StoreTexel16_16F@@YAXPAXU__vector4@@PBUTexelDesc@@@Z");
//};

//void StoreTexel32(void *, struct __vector4, struct TexelDesc const *)
//{
//    mangled_ppc("?StoreTexel32@@YAXPAXU__vector4@@PBUTexelDesc@@@Z");
//};

//void StoreTexel32_16F(void *, struct __vector4, struct TexelDesc const *)
//{
//    mangled_ppc("?StoreTexel32_16F@@YAXPAXU__vector4@@PBUTexelDesc@@@Z");
//};

//void StoreTexel(void *, struct __vector4, struct TexelDesc const *, void (*)(void *, struct __vector4, struct TexelDesc const *), struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4, struct __vector4)
//{
//    mangled_ppc("?StoreTexel@@YAXPAXU__vector4@@PBUTexelDesc@@P6AX012@Z111111@Z");
//};

//struct __vector4 GetThresholdVector(float, struct TexelDesc const *)
//{
//    mangled_ppc("?GetThresholdVector@@YA?AU__vector4@@MPBUTexelDesc@@@Z");
//};

//struct __vector4 GetGammaSelectVector(unsigned long *)
//{
//    mangled_ppc("?GetGammaSelectVector@@YA?AU__vector4@@PAK@Z");
//};

//struct __vector4(* GetLoadTexelProc(struct TexelDesc const *))(void const *, struct TexelDesc const *)
//{
//    mangled_ppc("?GetLoadTexelProc@@YAP6A?AU__vector4@@PBXPBUTexelDesc@@@Z1@Z");
//};

//void (* GetLoadTexelBlockProc(unsigned long, unsigned long))(void const *, struct __vector4*)
//{
//    mangled_ppc("?GetLoadTexelBlockProc@@YAP6AXPBXPAU__vector4@@@ZKK@Z");
//};

//void (* GetStoreTexelProc(struct TexelDesc const *))(void *, struct __vector4, struct TexelDesc const *)
//{
//    mangled_ppc("?GetStoreTexelProc@@YAP6AXPAXU__vector4@@PBUTexelDesc@@@Z2@Z");
//};

//void GetLoadTerms(struct TexelDesc const *, unsigned long, unsigned long *, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*)
//{
//    mangled_ppc("?GetLoadTerms@@YAXPBUTexelDesc@@KPAKPAU__vector4@@2222@Z");
//};

//void GetStoreTerms(struct TexelDesc const *, unsigned long, unsigned long *, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*, struct __vector4*)
//{
//    mangled_ppc("?GetStoreTerms@@YAXPBUTexelDesc@@KPAKPAU__vector4@@22222@Z");
//};

//XGCopySurface
//{
//    mangled_ppc("XGCopySurface");
//};

//XGCopyVolume
//{
//    mangled_ppc("XGCopyVolume");
//};

