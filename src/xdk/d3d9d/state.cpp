/* ---------- headers */

#include "xdk\d3d9d\state.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct _D3DVIEWPORT9const D3D::g_DefaultViewport; // "?g_DefaultViewport@D3D@@3U_D3DVIEWPORT9@@B"
// struct tagRECT const D3D::g_DefaultScissor; // "?g_DefaultScissor@D3D@@3UtagRECT@@B"
// enum GPUANISOFILTER const *const const `enum GPUANISOFILTER __cdecl D3D::MapMaxAnisotropyToGpuAnisoFilter(unsigned long)'::`2'::anisoFilterMap; // "?anisoFilterMap@?1??MapMaxAnisotropyToGpuAnisoFilter@D3D@@YA?AW4GPUANISOFILTER@@K@Z@4QBW43@B"
// struct D3D::RenderStateInit *D3D::g_RenderStateInit; // "?g_RenderStateInit@D3D@@3PAURenderStateInit@1@A"
// struct D3D::SamplerStateInit *D3D::g_SamplerStateInit; // "?g_SamplerStateInit@D3D@@3PAUSamplerStateInit@1@A"

// enum GPUANISOFILTER D3D::MapMaxAnisotropyToGpuAnisoFilter(unsigned long);
// unsigned long D3D::MapMipLodBiasToFixed5_5(float);
// unsigned long D3D::AnisotropyBiasToUFixed1_3(float);
// void D3D::SetZFilterState(class D3D::CDevice *, union GPUTEXTURE_FETCH_CONSTANT *, unsigned long);
// void D3DDevice_SetRenderState_Unused(struct D3DDevice *, unsigned long);
// unsigned long D3DDevice_GetRenderState_Unused(struct D3DDevice *);
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// int IsBlendPrecisionMismatched(unsigned long, unsigned long);
// unsigned long ShiftFormatBlendPrecision(unsigned long, unsigned long);
// D3DPtrToDWORD;
// D3DTag_Index;
// D3DTag_SubsetMask;
// D3DTagCollection_Set;
// D3DTagCollection_TestAny;
// D3DDevice_GetRenderState_ParameterCheck;
// int D3D::IsEDRAMFormat2_10_10_10Bits(unsigned long);
// void D3D::CopyToCachedMemory(void *, void const *, unsigned long);
// public: void D3D::BufferResource::SetResource(struct D3DResource *);
// public: void D3D::CDevice::SetLazyMask(unsigned long, unsigned __int64, enum D3D::LazyState);
// public: void D3D::CDevice::SetAllLazyState(void);
// public: void D3D::CDevice::SetUsedRange(enum _D3DTAG, unsigned long, unsigned long);
// public: void D3D::CDevice::SetUsedTag(enum _D3DTAG);
// public: void D3D::CDevice::CalculatePredicatedHiControlFlag(void);
// unsigned long D3D::Round(float);
// float D3D::GetAlphaF(unsigned long);
// float D3D::GetRedF(unsigned long);
// float D3D::GetGreenF(unsigned long);
// float D3D::GetBlueF(unsigned long);
// int D3D::IsChildSurface(struct D3DResource *);
// void D3D::InternalAddRef(struct D3DResource *, enum _D3DRESOURCETYPE);
// void D3D::InternalRelease(struct D3DResource *, enum _D3DRESOURCETYPE);
// void D3D::MarkResourceAsCommandBufferUsed(struct D3DResource *);
// void D3D::RecordCommandBufferResource(class D3D::CDevice *, struct D3DResource *, unsigned long, int);
// void D3D::TimeStamp(class D3D::CDevice *, struct D3DResource *);
// void D3D::SetSurfaceClip(class D3D::CDevice *, int, int, int, int);
// D3DDevice_SetRenderState_CullMode;
// D3DDevice_GetRenderState_CullMode;
// D3DDevice_SetRenderState_FillMode;
// D3DDevice_GetRenderState_FillMode;
// D3DDevice_SetRenderState_AlphaTestEnable;
// D3DDevice_GetRenderState_AlphaTestEnable;
// void D3DDevice_SetRenderState_UpdateBlendControls(struct D3DDevice *, int, int);
// D3DDevice_SetRenderState_AlphaBlendEnable;
// D3DDevice_GetRenderState_AlphaBlendEnable;
// D3DDevice_SetRenderState_BlendOp;
// D3DDevice_GetRenderState_BlendOp;
// D3DDevice_SetRenderState_SrcBlend;
// D3DDevice_GetRenderState_SrcBlend;
// D3DDevice_SetRenderState_DestBlend;
// D3DDevice_GetRenderState_DestBlend;
// D3DDevice_SetRenderState_BlendOpAlpha;
// D3DDevice_GetRenderState_BlendOpAlpha;
// D3DDevice_SetRenderState_SrcBlendAlpha;
// D3DDevice_GetRenderState_SrcBlendAlpha;
// D3DDevice_SetRenderState_DestBlendAlpha;
// D3DDevice_GetRenderState_DestBlendAlpha;
// D3DDevice_SetRenderState_SeparateAlphaBlendEnable;
// D3DDevice_GetRenderState_SeparateAlphaBlendEnable;
// D3DDevice_SetRenderState_AlphaRef;
// D3DDevice_GetRenderState_AlphaRef;
// D3DDevice_SetRenderState_AlphaFunc;
// D3DDevice_GetRenderState_AlphaFunc;
// D3DDevice_SetRenderState_BlendFactor;
// D3DDevice_GetRenderState_BlendFactor;
// D3DDevice_SetRenderState_LastPixel;
// D3DDevice_GetRenderState_LastPixel;
// D3DDevice_SetRenderState_LineWidth;
// D3DDevice_GetRenderState_LineWidth;
// D3DDevice_SetRenderState_Buffer2Frames;
// D3DDevice_GetRenderState_Buffer2Frames;
// D3DDevice_SetRenderState_ZEnable;
// D3DDevice_GetRenderState_ZEnable;
// D3DDevice_SetRenderState_ZWriteEnable;
// D3DDevice_GetRenderState_ZWriteEnable;
// D3DDevice_SetRenderState_ZFunc;
// D3DDevice_GetRenderState_ZFunc;
// D3DDevice_SetRenderState_StencilEnable;
// D3DDevice_GetRenderState_StencilEnable;
// D3DDevice_SetRenderState_TwoSidedStencilMode;
// D3DDevice_GetRenderState_TwoSidedStencilMode;
// D3DDevice_SetRenderState_StencilFunc;
// D3DDevice_GetRenderState_StencilFunc;
// D3DDevice_SetRenderState_StencilFail;
// D3DDevice_GetRenderState_StencilFail;
// D3DDevice_SetRenderState_StencilZFail;
// D3DDevice_GetRenderState_StencilZFail;
// D3DDevice_SetRenderState_StencilPass;
// D3DDevice_GetRenderState_StencilPass;
// D3DDevice_SetRenderState_CCWStencilFunc;
// D3DDevice_GetRenderState_CCWStencilFunc;
// D3DDevice_SetRenderState_CCWStencilFail;
// D3DDevice_GetRenderState_CCWStencilFail;
// D3DDevice_SetRenderState_CCWStencilZFail;
// D3DDevice_GetRenderState_CCWStencilZFail;
// D3DDevice_SetRenderState_CCWStencilPass;
// D3DDevice_GetRenderState_CCWStencilPass;
// D3DDevice_SetRenderState_StencilRef;
// D3DDevice_GetRenderState_StencilRef;
// D3DDevice_SetRenderState_StencilMask;
// D3DDevice_GetRenderState_StencilMask;
// D3DDevice_SetRenderState_StencilWriteMask;
// D3DDevice_GetRenderState_StencilWriteMask;
// D3DDevice_SetRenderState_CCWStencilRef;
// D3DDevice_GetRenderState_CCWStencilRef;
// D3DDevice_SetRenderState_CCWStencilMask;
// D3DDevice_GetRenderState_CCWStencilMask;
// D3DDevice_SetRenderState_CCWStencilWriteMask;
// D3DDevice_GetRenderState_CCWStencilWriteMask;
// D3DDevice_SetRenderState_ClipPlaneEnable;
// D3DDevice_GetRenderState_ClipPlaneEnable;
// D3DDevice_GetRenderState_ScissorTestEnable;
// D3DDevice_SetRenderState_SlopeScaleDepthBias;
// D3DDevice_GetRenderState_SlopeScaleDepthBias;
// D3DDevice_SetRenderState_DepthBias;
// D3DDevice_GetRenderState_DepthBias;
// D3DDevice_SetRenderState_MultiSampleAntiAlias;
// D3DDevice_GetRenderState_MultiSampleAntiAlias;
// D3DDevice_SetRenderState_MultiSampleMask;
// D3DDevice_GetRenderState_MultiSampleMask;
// D3DDevice_SetRenderState_ColorWriteEnable;
// D3DDevice_GetRenderState_ColorWriteEnable;
// D3DDevice_SetRenderState_ColorWriteEnable1;
// D3DDevice_GetRenderState_ColorWriteEnable1;
// D3DDevice_SetRenderState_ColorWriteEnable2;
// D3DDevice_GetRenderState_ColorWriteEnable2;
// D3DDevice_SetRenderState_ColorWriteEnable3;
// D3DDevice_GetRenderState_ColorWriteEnable3;
// D3DDevice_SetRenderState_PointSpriteEnable;
// D3DDevice_GetRenderState_PointSpriteEnable;
// D3DDevice_SetRenderState_PointSize;
// D3DDevice_GetRenderState_PointSize;
// D3DDevice_SetRenderState_PointSizeMin;
// D3DDevice_GetRenderState_PointSizeMin;
// D3DDevice_SetRenderState_PointSizeMax;
// D3DDevice_GetRenderState_PointSizeMax;
// void D3DDevice_SetRenderState_Wrap0To7(struct D3DDevice *, unsigned int, unsigned long);
// unsigned long D3DDevice_GetRenderState_Wrap0To7(struct D3DDevice *, unsigned int);
// void D3DDevice_SetRenderState_Wrap8To15(struct D3DDevice *, unsigned int, unsigned long);
// unsigned long D3DDevice_GetRenderState_Wrap8To15(struct D3DDevice *, unsigned int);
// D3DDevice_SetRenderState_Wrap0;
// D3DDevice_SetRenderState_Wrap1;
// D3DDevice_SetRenderState_Wrap2;
// D3DDevice_SetRenderState_Wrap3;
// D3DDevice_SetRenderState_Wrap4;
// D3DDevice_SetRenderState_Wrap5;
// D3DDevice_SetRenderState_Wrap6;
// D3DDevice_SetRenderState_Wrap7;
// D3DDevice_SetRenderState_Wrap8;
// D3DDevice_SetRenderState_Wrap9;
// D3DDevice_SetRenderState_Wrap10;
// D3DDevice_SetRenderState_Wrap11;
// D3DDevice_SetRenderState_Wrap12;
// D3DDevice_SetRenderState_Wrap13;
// D3DDevice_SetRenderState_Wrap14;
// D3DDevice_SetRenderState_Wrap15;
// D3DDevice_GetRenderState_Wrap0;
// D3DDevice_GetRenderState_Wrap1;
// D3DDevice_GetRenderState_Wrap2;
// D3DDevice_GetRenderState_Wrap3;
// D3DDevice_GetRenderState_Wrap4;
// D3DDevice_GetRenderState_Wrap5;
// D3DDevice_GetRenderState_Wrap6;
// D3DDevice_GetRenderState_Wrap7;
// D3DDevice_GetRenderState_Wrap8;
// D3DDevice_GetRenderState_Wrap9;
// D3DDevice_GetRenderState_Wrap10;
// D3DDevice_GetRenderState_Wrap11;
// D3DDevice_GetRenderState_Wrap12;
// D3DDevice_GetRenderState_Wrap13;
// D3DDevice_GetRenderState_Wrap14;
// D3DDevice_GetRenderState_Wrap15;
// D3DDevice_SetRenderState_ViewportEnable;
// D3DDevice_GetRenderState_ViewportEnable;
// void D3DDevice_SetRenderState_HighPrecisionBlendEnableIndex(struct D3DDevice *, unsigned long, unsigned long);
// unsigned long D3DDevice_GetRenderState_HighPrecisionBlendEnableIndex(struct D3DDevice *, unsigned long);
// D3DDevice_SetRenderState_HighPrecisionBlendEnable;
// D3DDevice_GetRenderState_HighPrecisionBlendEnable;
// D3DDevice_SetRenderState_HighPrecisionBlendEnable1;
// D3DDevice_GetRenderState_HighPrecisionBlendEnable1;
// D3DDevice_SetRenderState_HighPrecisionBlendEnable2;
// D3DDevice_GetRenderState_HighPrecisionBlendEnable2;
// D3DDevice_SetRenderState_HighPrecisionBlendEnable3;
// D3DDevice_GetRenderState_HighPrecisionBlendEnable3;
// D3DDevice_SetRenderState_MinTessellationLevel;
// D3DDevice_GetRenderState_MinTessellationLevel;
// D3DDevice_SetRenderState_MaxTessellationLevel;
// D3DDevice_GetRenderState_MaxTessellationLevel;
// D3DDevice_SetRenderState_TessellationMode;
// D3DDevice_GetRenderState_TessellationMode;
// D3DDevice_SetRenderState_HalfPixelOffset;
// D3DDevice_GetRenderState_HalfPixelOffset;
// D3DDevice_SetRenderState_PrimitiveResetEnable;
// D3DDevice_GetRenderState_PrimitiveResetEnable;
// D3DDevice_SetRenderState_PrimitiveResetIndex;
// D3DDevice_GetRenderState_PrimitiveResetIndex;
// D3DDevice_SetRenderState_AlphaToMaskEnable;
// D3DDevice_GetRenderState_AlphaToMaskEnable;
// D3DDevice_SetRenderState_AlphaToMaskOffsets;
// D3DDevice_GetRenderState_AlphaToMaskOffsets;
// D3DDevice_SetRenderState_GuardBand_X;
// D3DDevice_GetRenderState_GuardBand_X;
// D3DDevice_SetRenderState_GuardBand_Y;
// D3DDevice_GetRenderState_GuardBand_Y;
// D3DDevice_SetRenderState_DiscardBand_X;
// D3DDevice_GetRenderState_DiscardBand_X;
// D3DDevice_SetRenderState_DiscardBand_Y;
// D3DDevice_GetRenderState_DiscardBand_Y;
// D3DDevice_SetRenderState_HiZEnable;
// D3DDevice_GetRenderState_HiZEnable;
// D3DDevice_SetRenderState_HiZWriteEnable;
// D3DDevice_GetRenderState_HiZWriteEnable;
// D3DDevice_SetRenderState_HiStencilEnable;
// D3DDevice_GetRenderState_HiStencilEnable;
// D3DDevice_SetRenderState_HiStencilWriteEnable;
// D3DDevice_GetRenderState_HiStencilWriteEnable;
// D3DDevice_SetRenderState_HiStencilFunc;
// D3DDevice_GetRenderState_HiStencilFunc;
// D3DDevice_SetRenderState_HiStencilRef;
// D3DDevice_GetRenderState_HiStencilRef;
// D3DDevice_SetRenderState_PresentInterval;
// D3DDevice_GetRenderState_PresentInterval;
// D3DDevice_SetRenderState_PresentImmediateThreshold;
// D3DDevice_GetRenderState_PresentImmediateThreshold;
// D3DDevice_SetSamplerState_MinFilter;
// D3DDevice_GetSamplerState_MinFilter;
// D3DDevice_SetSamplerState_MinFilterZ;
// D3DDevice_GetSamplerState_MinFilterZ;
// D3DDevice_SetSamplerState_MagFilter;
// D3DDevice_GetSamplerState_MagFilter;
// D3DDevice_SetSamplerState_MagFilterZ;
// D3DDevice_GetSamplerState_MagFilterZ;
// D3DDevice_SetSamplerState_MipFilter;
// D3DDevice_GetSamplerState_MipFilter;
// D3DDevice_SetSamplerState_SeparateZFilterEnable;
// D3DDevice_GetSamplerState_SeparateZFilterEnable;
// D3DDevice_SetSamplerState_MaxAnisotropy;
// D3DDevice_GetSamplerState_MaxAnisotropy;
// D3DDevice_SetSamplerState_AnisotropyBias;
// D3DDevice_GetSamplerState_AnisotropyBias;
// D3DDevice_SetSamplerState_MipMapLodBias;
// D3DDevice_GetSamplerState_MipMapLodBias;
// D3DDevice_SetSamplerState_MaxMipLevel;
// D3DDevice_GetSamplerState_MaxMipLevel;
// D3DDevice_SetSamplerState_MinMipLevel;
// D3DDevice_GetSamplerState_MinMipLevel;
// D3DDevice_SetSamplerState_BorderColor;
// D3DDevice_GetSamplerState_BorderColor;
// D3DDevice_SetSamplerState_AddressU;
// D3DDevice_GetSamplerState_AddressU;
// D3DDevice_SetSamplerState_AddressV;
// D3DDevice_GetSamplerState_AddressV;
// D3DDevice_SetSamplerState_AddressW;
// D3DDevice_GetSamplerState_AddressW;
// D3DDevice_SetSamplerState_TrilinearThreshold;
// D3DDevice_GetSamplerState_TrilinearThreshold;
// D3DDevice_SetSamplerState_HGradientExpBias;
// D3DDevice_GetSamplerState_HGradientExpBias;
// D3DDevice_SetSamplerState_VGradientExpBias;
// D3DDevice_GetSamplerState_VGradientExpBias;
// D3DDevice_SetSamplerState_WhiteBorderColorW;
// D3DDevice_GetSamplerState_WhiteBorderColorW;
// D3DDevice_SetSamplerState_PointBorderEnable;
// D3DDevice_GetSamplerState_PointBorderEnable;
// D3DDevice_SetRenderState_ParameterCheck;
// D3DDevice_SetSamplerState_ParameterCheck;
// D3DDevice_GetSamplerState_ParameterCheck;
// D3DDevice_SetScissorRect;
// D3DDevice_GetScissorRect;
// D3DDevice_GetViewport;
// D3DDevice_GetViewportF;
// D3DDevice_SetStreamSource;
// D3DDevice_GetStreamSource;
// D3DDevice_SetIndices;
// D3DDevice_GetIndices;
// D3DDevice_GetRenderTarget;
// D3DDevice_GetDepthStencilSurface;
// D3DDevice_GetBackBuffer;
// D3DDevice_GetFrontBuffer;
// D3DDevice_SetGammaRamp;
// D3DDevice_GetGammaRamp;
// D3DDevice_SetPWLGamma;
// D3DDevice_GetPWLGamma;
// D3DDevice_SetClipPlane;
// D3DDevice_GetClipPlane;
// D3DDevice_SetBlendState;
// D3DDevice_GetBlendState;
// D3DDevice_SetVertexFetchConstant;
// D3DDevice_SetTextureFetchConstant;
// void D3D::ResetAllState(class D3D::CDevice *, int);
// void D3D::SetViewport(struct D3DDevice *, float, float, float, float, float, float, unsigned long);
// D3DDevice_SetRenderState_ScissorTestEnable;
// D3DDevice_SetViewport;
// D3DDevice_SetViewportF;
// void D3D::SetSurfaceInfo(class D3D::CDevice *, struct D3DSurface *);
// D3DDevice_SetRenderTarget;
// D3DDevice_SetDepthStencilSurface;
// D3DDevice_SetSurfaces;
// D3DDevice_SetRenderTarget_External;

//enum GPUANISOFILTER D3D::MapMaxAnisotropyToGpuAnisoFilter(unsigned long)
//{
//    mangled_ppc("?MapMaxAnisotropyToGpuAnisoFilter@D3D@@YA?AW4GPUANISOFILTER@@K@Z");
//};

//unsigned long D3D::MapMipLodBiasToFixed5_5(float)
//{
//    mangled_ppc("?MapMipLodBiasToFixed5_5@D3D@@YAKM@Z");
//};

//unsigned long D3D::AnisotropyBiasToUFixed1_3(float)
//{
//    mangled_ppc("?AnisotropyBiasToUFixed1_3@D3D@@YAKM@Z");
//};

//void D3D::SetZFilterState(class D3D::CDevice *, union GPUTEXTURE_FETCH_CONSTANT *, unsigned long)
//{
//    mangled_ppc("?SetZFilterState@D3D@@YAXPAVCDevice@1@PATGPUTEXTURE_FETCH_CONSTANT@@K@Z");
//};

//void D3DDevice_SetRenderState_Unused(struct D3DDevice *, unsigned long)
//{
//    mangled_ppc("?D3DDevice_SetRenderState_Unused@@YAXPAUD3DDevice@@K@Z");
//};

//unsigned long D3DDevice_GetRenderState_Unused(struct D3DDevice *)
//{
//    mangled_ppc("?D3DDevice_GetRenderState_Unused@@YAKPAUD3DDevice@@@Z");
//};

//GPU_CONVERT_CPU_TO_GPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_GPU_ADDRESS");
//};

//int IsBlendPrecisionMismatched(unsigned long, unsigned long)
//{
//    mangled_ppc("?IsBlendPrecisionMismatched@@YAHKK@Z");
//};

//unsigned long ShiftFormatBlendPrecision(unsigned long, unsigned long)
//{
//    mangled_ppc("?ShiftFormatBlendPrecision@@YAKKK@Z");
//};

//D3DPtrToDWORD
//{
//    mangled_ppc("D3DPtrToDWORD");
//};

//D3DTag_Index
//{
//    mangled_ppc("D3DTag_Index");
//};

//D3DTag_SubsetMask
//{
//    mangled_ppc("D3DTag_SubsetMask");
//};

//D3DTagCollection_Set
//{
//    mangled_ppc("D3DTagCollection_Set");
//};

//D3DTagCollection_TestAny
//{
//    mangled_ppc("D3DTagCollection_TestAny");
//};

//D3DDevice_GetRenderState_ParameterCheck
//{
//    mangled_ppc("D3DDevice_GetRenderState_ParameterCheck");
//};

//int D3D::IsEDRAMFormat2_10_10_10Bits(unsigned long)
//{
//    mangled_ppc("?IsEDRAMFormat2_10_10_10Bits@D3D@@YAHK@Z");
//};

//void D3D::CopyToCachedMemory(void *, void const *, unsigned long)
//{
//    mangled_ppc("?CopyToCachedMemory@D3D@@YAXPAXPBXK@Z");
//};

//public: void D3D::BufferResource::SetResource(struct D3DResource *)
//{
//    mangled_ppc("?SetResource@BufferResource@D3D@@QAAXPAUD3DResource@@@Z");
//};

//public: void D3D::CDevice::SetLazyMask(unsigned long, unsigned __int64, enum D3D::LazyState)
//{
//    mangled_ppc("?SetLazyMask@CDevice@D3D@@QAAXK_KW4LazyState@2@@Z");
//};

//public: void D3D::CDevice::SetAllLazyState(void)
//{
//    mangled_ppc("?SetAllLazyState@CDevice@D3D@@QAAXXZ");
//};

//public: void D3D::CDevice::SetUsedRange(enum _D3DTAG, unsigned long, unsigned long)
//{
//    mangled_ppc("?SetUsedRange@CDevice@D3D@@QAAXW4_D3DTAG@@KK@Z");
//};

//public: void D3D::CDevice::SetUsedTag(enum _D3DTAG)
//{
//    mangled_ppc("?SetUsedTag@CDevice@D3D@@QAAXW4_D3DTAG@@@Z");
//};

//public: void D3D::CDevice::CalculatePredicatedHiControlFlag(void)
//{
//    mangled_ppc("?CalculatePredicatedHiControlFlag@CDevice@D3D@@QAAXXZ");
//};

//unsigned long D3D::Round(float)
//{
//    mangled_ppc("?Round@D3D@@YAKM@Z");
//};

//float D3D::GetAlphaF(unsigned long)
//{
//    mangled_ppc("?GetAlphaF@D3D@@YAMK@Z");
//};

//float D3D::GetRedF(unsigned long)
//{
//    mangled_ppc("?GetRedF@D3D@@YAMK@Z");
//};

//float D3D::GetGreenF(unsigned long)
//{
//    mangled_ppc("?GetGreenF@D3D@@YAMK@Z");
//};

//float D3D::GetBlueF(unsigned long)
//{
//    mangled_ppc("?GetBlueF@D3D@@YAMK@Z");
//};

//int D3D::IsChildSurface(struct D3DResource *)
//{
//    mangled_ppc("?IsChildSurface@D3D@@YAHPAUD3DResource@@@Z");
//};

//void D3D::InternalAddRef(struct D3DResource *, enum _D3DRESOURCETYPE)
//{
//    mangled_ppc("?InternalAddRef@D3D@@YAXPAUD3DResource@@W4_D3DRESOURCETYPE@@@Z");
//};

//void D3D::InternalRelease(struct D3DResource *, enum _D3DRESOURCETYPE)
//{
//    mangled_ppc("?InternalRelease@D3D@@YAXPAUD3DResource@@W4_D3DRESOURCETYPE@@@Z");
//};

//void D3D::MarkResourceAsCommandBufferUsed(struct D3DResource *)
//{
//    mangled_ppc("?MarkResourceAsCommandBufferUsed@D3D@@YAXPAUD3DResource@@@Z");
//};

//void D3D::RecordCommandBufferResource(class D3D::CDevice *, struct D3DResource *, unsigned long, int)
//{
//    mangled_ppc("?RecordCommandBufferResource@D3D@@YAXPAVCDevice@1@PAUD3DResource@@KH@Z");
//};

//void D3D::TimeStamp(class D3D::CDevice *, struct D3DResource *)
//{
//    mangled_ppc("?TimeStamp@D3D@@YAXPAVCDevice@1@PAUD3DResource@@@Z");
//};

//void D3D::SetSurfaceClip(class D3D::CDevice *, int, int, int, int)
//{
//    mangled_ppc("?SetSurfaceClip@D3D@@YAXPAVCDevice@1@HHHH@Z");
//};

//D3DDevice_SetRenderState_CullMode
//{
//    mangled_ppc("D3DDevice_SetRenderState_CullMode");
//};

//D3DDevice_GetRenderState_CullMode
//{
//    mangled_ppc("D3DDevice_GetRenderState_CullMode");
//};

//D3DDevice_SetRenderState_FillMode
//{
//    mangled_ppc("D3DDevice_SetRenderState_FillMode");
//};

//D3DDevice_GetRenderState_FillMode
//{
//    mangled_ppc("D3DDevice_GetRenderState_FillMode");
//};

//D3DDevice_SetRenderState_AlphaTestEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_AlphaTestEnable");
//};

//D3DDevice_GetRenderState_AlphaTestEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_AlphaTestEnable");
//};

//void D3DDevice_SetRenderState_UpdateBlendControls(struct D3DDevice *, int, int)
//{
//    mangled_ppc("?D3DDevice_SetRenderState_UpdateBlendControls@@YAXPAUD3DDevice@@HH@Z");
//};

//D3DDevice_SetRenderState_AlphaBlendEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_AlphaBlendEnable");
//};

//D3DDevice_GetRenderState_AlphaBlendEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_AlphaBlendEnable");
//};

//D3DDevice_SetRenderState_BlendOp
//{
//    mangled_ppc("D3DDevice_SetRenderState_BlendOp");
//};

//D3DDevice_GetRenderState_BlendOp
//{
//    mangled_ppc("D3DDevice_GetRenderState_BlendOp");
//};

//D3DDevice_SetRenderState_SrcBlend
//{
//    mangled_ppc("D3DDevice_SetRenderState_SrcBlend");
//};

//D3DDevice_GetRenderState_SrcBlend
//{
//    mangled_ppc("D3DDevice_GetRenderState_SrcBlend");
//};

//D3DDevice_SetRenderState_DestBlend
//{
//    mangled_ppc("D3DDevice_SetRenderState_DestBlend");
//};

//D3DDevice_GetRenderState_DestBlend
//{
//    mangled_ppc("D3DDevice_GetRenderState_DestBlend");
//};

//D3DDevice_SetRenderState_BlendOpAlpha
//{
//    mangled_ppc("D3DDevice_SetRenderState_BlendOpAlpha");
//};

//D3DDevice_GetRenderState_BlendOpAlpha
//{
//    mangled_ppc("D3DDevice_GetRenderState_BlendOpAlpha");
//};

//D3DDevice_SetRenderState_SrcBlendAlpha
//{
//    mangled_ppc("D3DDevice_SetRenderState_SrcBlendAlpha");
//};

//D3DDevice_GetRenderState_SrcBlendAlpha
//{
//    mangled_ppc("D3DDevice_GetRenderState_SrcBlendAlpha");
//};

//D3DDevice_SetRenderState_DestBlendAlpha
//{
//    mangled_ppc("D3DDevice_SetRenderState_DestBlendAlpha");
//};

//D3DDevice_GetRenderState_DestBlendAlpha
//{
//    mangled_ppc("D3DDevice_GetRenderState_DestBlendAlpha");
//};

//D3DDevice_SetRenderState_SeparateAlphaBlendEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_SeparateAlphaBlendEnable");
//};

//D3DDevice_GetRenderState_SeparateAlphaBlendEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_SeparateAlphaBlendEnable");
//};

//D3DDevice_SetRenderState_AlphaRef
//{
//    mangled_ppc("D3DDevice_SetRenderState_AlphaRef");
//};

//D3DDevice_GetRenderState_AlphaRef
//{
//    mangled_ppc("D3DDevice_GetRenderState_AlphaRef");
//};

//D3DDevice_SetRenderState_AlphaFunc
//{
//    mangled_ppc("D3DDevice_SetRenderState_AlphaFunc");
//};

//D3DDevice_GetRenderState_AlphaFunc
//{
//    mangled_ppc("D3DDevice_GetRenderState_AlphaFunc");
//};

//D3DDevice_SetRenderState_BlendFactor
//{
//    mangled_ppc("D3DDevice_SetRenderState_BlendFactor");
//};

//D3DDevice_GetRenderState_BlendFactor
//{
//    mangled_ppc("D3DDevice_GetRenderState_BlendFactor");
//};

//D3DDevice_SetRenderState_LastPixel
//{
//    mangled_ppc("D3DDevice_SetRenderState_LastPixel");
//};

//D3DDevice_GetRenderState_LastPixel
//{
//    mangled_ppc("D3DDevice_GetRenderState_LastPixel");
//};

//D3DDevice_SetRenderState_LineWidth
//{
//    mangled_ppc("D3DDevice_SetRenderState_LineWidth");
//};

//D3DDevice_GetRenderState_LineWidth
//{
//    mangled_ppc("D3DDevice_GetRenderState_LineWidth");
//};

//D3DDevice_SetRenderState_Buffer2Frames
//{
//    mangled_ppc("D3DDevice_SetRenderState_Buffer2Frames");
//};

//D3DDevice_GetRenderState_Buffer2Frames
//{
//    mangled_ppc("D3DDevice_GetRenderState_Buffer2Frames");
//};

//D3DDevice_SetRenderState_ZEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_ZEnable");
//};

//D3DDevice_GetRenderState_ZEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_ZEnable");
//};

//D3DDevice_SetRenderState_ZWriteEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_ZWriteEnable");
//};

//D3DDevice_GetRenderState_ZWriteEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_ZWriteEnable");
//};

//D3DDevice_SetRenderState_ZFunc
//{
//    mangled_ppc("D3DDevice_SetRenderState_ZFunc");
//};

//D3DDevice_GetRenderState_ZFunc
//{
//    mangled_ppc("D3DDevice_GetRenderState_ZFunc");
//};

//D3DDevice_SetRenderState_StencilEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_StencilEnable");
//};

//D3DDevice_GetRenderState_StencilEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_StencilEnable");
//};

//D3DDevice_SetRenderState_TwoSidedStencilMode
//{
//    mangled_ppc("D3DDevice_SetRenderState_TwoSidedStencilMode");
//};

//D3DDevice_GetRenderState_TwoSidedStencilMode
//{
//    mangled_ppc("D3DDevice_GetRenderState_TwoSidedStencilMode");
//};

//D3DDevice_SetRenderState_StencilFunc
//{
//    mangled_ppc("D3DDevice_SetRenderState_StencilFunc");
//};

//D3DDevice_GetRenderState_StencilFunc
//{
//    mangled_ppc("D3DDevice_GetRenderState_StencilFunc");
//};

//D3DDevice_SetRenderState_StencilFail
//{
//    mangled_ppc("D3DDevice_SetRenderState_StencilFail");
//};

//D3DDevice_GetRenderState_StencilFail
//{
//    mangled_ppc("D3DDevice_GetRenderState_StencilFail");
//};

//D3DDevice_SetRenderState_StencilZFail
//{
//    mangled_ppc("D3DDevice_SetRenderState_StencilZFail");
//};

//D3DDevice_GetRenderState_StencilZFail
//{
//    mangled_ppc("D3DDevice_GetRenderState_StencilZFail");
//};

//D3DDevice_SetRenderState_StencilPass
//{
//    mangled_ppc("D3DDevice_SetRenderState_StencilPass");
//};

//D3DDevice_GetRenderState_StencilPass
//{
//    mangled_ppc("D3DDevice_GetRenderState_StencilPass");
//};

//D3DDevice_SetRenderState_CCWStencilFunc
//{
//    mangled_ppc("D3DDevice_SetRenderState_CCWStencilFunc");
//};

//D3DDevice_GetRenderState_CCWStencilFunc
//{
//    mangled_ppc("D3DDevice_GetRenderState_CCWStencilFunc");
//};

//D3DDevice_SetRenderState_CCWStencilFail
//{
//    mangled_ppc("D3DDevice_SetRenderState_CCWStencilFail");
//};

//D3DDevice_GetRenderState_CCWStencilFail
//{
//    mangled_ppc("D3DDevice_GetRenderState_CCWStencilFail");
//};

//D3DDevice_SetRenderState_CCWStencilZFail
//{
//    mangled_ppc("D3DDevice_SetRenderState_CCWStencilZFail");
//};

//D3DDevice_GetRenderState_CCWStencilZFail
//{
//    mangled_ppc("D3DDevice_GetRenderState_CCWStencilZFail");
//};

//D3DDevice_SetRenderState_CCWStencilPass
//{
//    mangled_ppc("D3DDevice_SetRenderState_CCWStencilPass");
//};

//D3DDevice_GetRenderState_CCWStencilPass
//{
//    mangled_ppc("D3DDevice_GetRenderState_CCWStencilPass");
//};

//D3DDevice_SetRenderState_StencilRef
//{
//    mangled_ppc("D3DDevice_SetRenderState_StencilRef");
//};

//D3DDevice_GetRenderState_StencilRef
//{
//    mangled_ppc("D3DDevice_GetRenderState_StencilRef");
//};

//D3DDevice_SetRenderState_StencilMask
//{
//    mangled_ppc("D3DDevice_SetRenderState_StencilMask");
//};

//D3DDevice_GetRenderState_StencilMask
//{
//    mangled_ppc("D3DDevice_GetRenderState_StencilMask");
//};

//D3DDevice_SetRenderState_StencilWriteMask
//{
//    mangled_ppc("D3DDevice_SetRenderState_StencilWriteMask");
//};

//D3DDevice_GetRenderState_StencilWriteMask
//{
//    mangled_ppc("D3DDevice_GetRenderState_StencilWriteMask");
//};

//D3DDevice_SetRenderState_CCWStencilRef
//{
//    mangled_ppc("D3DDevice_SetRenderState_CCWStencilRef");
//};

//D3DDevice_GetRenderState_CCWStencilRef
//{
//    mangled_ppc("D3DDevice_GetRenderState_CCWStencilRef");
//};

//D3DDevice_SetRenderState_CCWStencilMask
//{
//    mangled_ppc("D3DDevice_SetRenderState_CCWStencilMask");
//};

//D3DDevice_GetRenderState_CCWStencilMask
//{
//    mangled_ppc("D3DDevice_GetRenderState_CCWStencilMask");
//};

//D3DDevice_SetRenderState_CCWStencilWriteMask
//{
//    mangled_ppc("D3DDevice_SetRenderState_CCWStencilWriteMask");
//};

//D3DDevice_GetRenderState_CCWStencilWriteMask
//{
//    mangled_ppc("D3DDevice_GetRenderState_CCWStencilWriteMask");
//};

//D3DDevice_SetRenderState_ClipPlaneEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_ClipPlaneEnable");
//};

//D3DDevice_GetRenderState_ClipPlaneEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_ClipPlaneEnable");
//};

//D3DDevice_GetRenderState_ScissorTestEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_ScissorTestEnable");
//};

//D3DDevice_SetRenderState_SlopeScaleDepthBias
//{
//    mangled_ppc("D3DDevice_SetRenderState_SlopeScaleDepthBias");
//};

//D3DDevice_GetRenderState_SlopeScaleDepthBias
//{
//    mangled_ppc("D3DDevice_GetRenderState_SlopeScaleDepthBias");
//};

//D3DDevice_SetRenderState_DepthBias
//{
//    mangled_ppc("D3DDevice_SetRenderState_DepthBias");
//};

//D3DDevice_GetRenderState_DepthBias
//{
//    mangled_ppc("D3DDevice_GetRenderState_DepthBias");
//};

//D3DDevice_SetRenderState_MultiSampleAntiAlias
//{
//    mangled_ppc("D3DDevice_SetRenderState_MultiSampleAntiAlias");
//};

//D3DDevice_GetRenderState_MultiSampleAntiAlias
//{
//    mangled_ppc("D3DDevice_GetRenderState_MultiSampleAntiAlias");
//};

//D3DDevice_SetRenderState_MultiSampleMask
//{
//    mangled_ppc("D3DDevice_SetRenderState_MultiSampleMask");
//};

//D3DDevice_GetRenderState_MultiSampleMask
//{
//    mangled_ppc("D3DDevice_GetRenderState_MultiSampleMask");
//};

//D3DDevice_SetRenderState_ColorWriteEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_ColorWriteEnable");
//};

//D3DDevice_GetRenderState_ColorWriteEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_ColorWriteEnable");
//};

//D3DDevice_SetRenderState_ColorWriteEnable1
//{
//    mangled_ppc("D3DDevice_SetRenderState_ColorWriteEnable1");
//};

//D3DDevice_GetRenderState_ColorWriteEnable1
//{
//    mangled_ppc("D3DDevice_GetRenderState_ColorWriteEnable1");
//};

//D3DDevice_SetRenderState_ColorWriteEnable2
//{
//    mangled_ppc("D3DDevice_SetRenderState_ColorWriteEnable2");
//};

//D3DDevice_GetRenderState_ColorWriteEnable2
//{
//    mangled_ppc("D3DDevice_GetRenderState_ColorWriteEnable2");
//};

//D3DDevice_SetRenderState_ColorWriteEnable3
//{
//    mangled_ppc("D3DDevice_SetRenderState_ColorWriteEnable3");
//};

//D3DDevice_GetRenderState_ColorWriteEnable3
//{
//    mangled_ppc("D3DDevice_GetRenderState_ColorWriteEnable3");
//};

//D3DDevice_SetRenderState_PointSpriteEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_PointSpriteEnable");
//};

//D3DDevice_GetRenderState_PointSpriteEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_PointSpriteEnable");
//};

//D3DDevice_SetRenderState_PointSize
//{
//    mangled_ppc("D3DDevice_SetRenderState_PointSize");
//};

//D3DDevice_GetRenderState_PointSize
//{
//    mangled_ppc("D3DDevice_GetRenderState_PointSize");
//};

//D3DDevice_SetRenderState_PointSizeMin
//{
//    mangled_ppc("D3DDevice_SetRenderState_PointSizeMin");
//};

//D3DDevice_GetRenderState_PointSizeMin
//{
//    mangled_ppc("D3DDevice_GetRenderState_PointSizeMin");
//};

//D3DDevice_SetRenderState_PointSizeMax
//{
//    mangled_ppc("D3DDevice_SetRenderState_PointSizeMax");
//};

//D3DDevice_GetRenderState_PointSizeMax
//{
//    mangled_ppc("D3DDevice_GetRenderState_PointSizeMax");
//};

//void D3DDevice_SetRenderState_Wrap0To7(struct D3DDevice *, unsigned int, unsigned long)
//{
//    mangled_ppc("?D3DDevice_SetRenderState_Wrap0To7@@YAXPAUD3DDevice@@IK@Z");
//};

//unsigned long D3DDevice_GetRenderState_Wrap0To7(struct D3DDevice *, unsigned int)
//{
//    mangled_ppc("?D3DDevice_GetRenderState_Wrap0To7@@YAKPAUD3DDevice@@I@Z");
//};

//void D3DDevice_SetRenderState_Wrap8To15(struct D3DDevice *, unsigned int, unsigned long)
//{
//    mangled_ppc("?D3DDevice_SetRenderState_Wrap8To15@@YAXPAUD3DDevice@@IK@Z");
//};

//unsigned long D3DDevice_GetRenderState_Wrap8To15(struct D3DDevice *, unsigned int)
//{
//    mangled_ppc("?D3DDevice_GetRenderState_Wrap8To15@@YAKPAUD3DDevice@@I@Z");
//};

//D3DDevice_SetRenderState_Wrap0
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap0");
//};

//D3DDevice_SetRenderState_Wrap1
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap1");
//};

//D3DDevice_SetRenderState_Wrap2
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap2");
//};

//D3DDevice_SetRenderState_Wrap3
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap3");
//};

//D3DDevice_SetRenderState_Wrap4
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap4");
//};

//D3DDevice_SetRenderState_Wrap5
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap5");
//};

//D3DDevice_SetRenderState_Wrap6
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap6");
//};

//D3DDevice_SetRenderState_Wrap7
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap7");
//};

//D3DDevice_SetRenderState_Wrap8
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap8");
//};

//D3DDevice_SetRenderState_Wrap9
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap9");
//};

//D3DDevice_SetRenderState_Wrap10
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap10");
//};

//D3DDevice_SetRenderState_Wrap11
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap11");
//};

//D3DDevice_SetRenderState_Wrap12
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap12");
//};

//D3DDevice_SetRenderState_Wrap13
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap13");
//};

//D3DDevice_SetRenderState_Wrap14
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap14");
//};

//D3DDevice_SetRenderState_Wrap15
//{
//    mangled_ppc("D3DDevice_SetRenderState_Wrap15");
//};

//D3DDevice_GetRenderState_Wrap0
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap0");
//};

//D3DDevice_GetRenderState_Wrap1
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap1");
//};

//D3DDevice_GetRenderState_Wrap2
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap2");
//};

//D3DDevice_GetRenderState_Wrap3
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap3");
//};

//D3DDevice_GetRenderState_Wrap4
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap4");
//};

//D3DDevice_GetRenderState_Wrap5
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap5");
//};

//D3DDevice_GetRenderState_Wrap6
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap6");
//};

//D3DDevice_GetRenderState_Wrap7
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap7");
//};

//D3DDevice_GetRenderState_Wrap8
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap8");
//};

//D3DDevice_GetRenderState_Wrap9
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap9");
//};

//D3DDevice_GetRenderState_Wrap10
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap10");
//};

//D3DDevice_GetRenderState_Wrap11
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap11");
//};

//D3DDevice_GetRenderState_Wrap12
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap12");
//};

//D3DDevice_GetRenderState_Wrap13
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap13");
//};

//D3DDevice_GetRenderState_Wrap14
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap14");
//};

//D3DDevice_GetRenderState_Wrap15
//{
//    mangled_ppc("D3DDevice_GetRenderState_Wrap15");
//};

//D3DDevice_SetRenderState_ViewportEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_ViewportEnable");
//};

//D3DDevice_GetRenderState_ViewportEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_ViewportEnable");
//};

//void D3DDevice_SetRenderState_HighPrecisionBlendEnableIndex(struct D3DDevice *, unsigned long, unsigned long)
//{
//    mangled_ppc("?D3DDevice_SetRenderState_HighPrecisionBlendEnableIndex@@YAXPAUD3DDevice@@KK@Z");
//};

//unsigned long D3DDevice_GetRenderState_HighPrecisionBlendEnableIndex(struct D3DDevice *, unsigned long)
//{
//    mangled_ppc("?D3DDevice_GetRenderState_HighPrecisionBlendEnableIndex@@YAKPAUD3DDevice@@K@Z");
//};

//D3DDevice_SetRenderState_HighPrecisionBlendEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_HighPrecisionBlendEnable");
//};

//D3DDevice_GetRenderState_HighPrecisionBlendEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_HighPrecisionBlendEnable");
//};

//D3DDevice_SetRenderState_HighPrecisionBlendEnable1
//{
//    mangled_ppc("D3DDevice_SetRenderState_HighPrecisionBlendEnable1");
//};

//D3DDevice_GetRenderState_HighPrecisionBlendEnable1
//{
//    mangled_ppc("D3DDevice_GetRenderState_HighPrecisionBlendEnable1");
//};

//D3DDevice_SetRenderState_HighPrecisionBlendEnable2
//{
//    mangled_ppc("D3DDevice_SetRenderState_HighPrecisionBlendEnable2");
//};

//D3DDevice_GetRenderState_HighPrecisionBlendEnable2
//{
//    mangled_ppc("D3DDevice_GetRenderState_HighPrecisionBlendEnable2");
//};

//D3DDevice_SetRenderState_HighPrecisionBlendEnable3
//{
//    mangled_ppc("D3DDevice_SetRenderState_HighPrecisionBlendEnable3");
//};

//D3DDevice_GetRenderState_HighPrecisionBlendEnable3
//{
//    mangled_ppc("D3DDevice_GetRenderState_HighPrecisionBlendEnable3");
//};

//D3DDevice_SetRenderState_MinTessellationLevel
//{
//    mangled_ppc("D3DDevice_SetRenderState_MinTessellationLevel");
//};

//D3DDevice_GetRenderState_MinTessellationLevel
//{
//    mangled_ppc("D3DDevice_GetRenderState_MinTessellationLevel");
//};

//D3DDevice_SetRenderState_MaxTessellationLevel
//{
//    mangled_ppc("D3DDevice_SetRenderState_MaxTessellationLevel");
//};

//D3DDevice_GetRenderState_MaxTessellationLevel
//{
//    mangled_ppc("D3DDevice_GetRenderState_MaxTessellationLevel");
//};

//D3DDevice_SetRenderState_TessellationMode
//{
//    mangled_ppc("D3DDevice_SetRenderState_TessellationMode");
//};

//D3DDevice_GetRenderState_TessellationMode
//{
//    mangled_ppc("D3DDevice_GetRenderState_TessellationMode");
//};

//D3DDevice_SetRenderState_HalfPixelOffset
//{
//    mangled_ppc("D3DDevice_SetRenderState_HalfPixelOffset");
//};

//D3DDevice_GetRenderState_HalfPixelOffset
//{
//    mangled_ppc("D3DDevice_GetRenderState_HalfPixelOffset");
//};

//D3DDevice_SetRenderState_PrimitiveResetEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_PrimitiveResetEnable");
//};

//D3DDevice_GetRenderState_PrimitiveResetEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_PrimitiveResetEnable");
//};

//D3DDevice_SetRenderState_PrimitiveResetIndex
//{
//    mangled_ppc("D3DDevice_SetRenderState_PrimitiveResetIndex");
//};

//D3DDevice_GetRenderState_PrimitiveResetIndex
//{
//    mangled_ppc("D3DDevice_GetRenderState_PrimitiveResetIndex");
//};

//D3DDevice_SetRenderState_AlphaToMaskEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_AlphaToMaskEnable");
//};

//D3DDevice_GetRenderState_AlphaToMaskEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_AlphaToMaskEnable");
//};

//D3DDevice_SetRenderState_AlphaToMaskOffsets
//{
//    mangled_ppc("D3DDevice_SetRenderState_AlphaToMaskOffsets");
//};

//D3DDevice_GetRenderState_AlphaToMaskOffsets
//{
//    mangled_ppc("D3DDevice_GetRenderState_AlphaToMaskOffsets");
//};

//D3DDevice_SetRenderState_GuardBand_X
//{
//    mangled_ppc("D3DDevice_SetRenderState_GuardBand_X");
//};

//D3DDevice_GetRenderState_GuardBand_X
//{
//    mangled_ppc("D3DDevice_GetRenderState_GuardBand_X");
//};

//D3DDevice_SetRenderState_GuardBand_Y
//{
//    mangled_ppc("D3DDevice_SetRenderState_GuardBand_Y");
//};

//D3DDevice_GetRenderState_GuardBand_Y
//{
//    mangled_ppc("D3DDevice_GetRenderState_GuardBand_Y");
//};

//D3DDevice_SetRenderState_DiscardBand_X
//{
//    mangled_ppc("D3DDevice_SetRenderState_DiscardBand_X");
//};

//D3DDevice_GetRenderState_DiscardBand_X
//{
//    mangled_ppc("D3DDevice_GetRenderState_DiscardBand_X");
//};

//D3DDevice_SetRenderState_DiscardBand_Y
//{
//    mangled_ppc("D3DDevice_SetRenderState_DiscardBand_Y");
//};

//D3DDevice_GetRenderState_DiscardBand_Y
//{
//    mangled_ppc("D3DDevice_GetRenderState_DiscardBand_Y");
//};

//D3DDevice_SetRenderState_HiZEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_HiZEnable");
//};

//D3DDevice_GetRenderState_HiZEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_HiZEnable");
//};

//D3DDevice_SetRenderState_HiZWriteEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_HiZWriteEnable");
//};

//D3DDevice_GetRenderState_HiZWriteEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_HiZWriteEnable");
//};

//D3DDevice_SetRenderState_HiStencilEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_HiStencilEnable");
//};

//D3DDevice_GetRenderState_HiStencilEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_HiStencilEnable");
//};

//D3DDevice_SetRenderState_HiStencilWriteEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_HiStencilWriteEnable");
//};

//D3DDevice_GetRenderState_HiStencilWriteEnable
//{
//    mangled_ppc("D3DDevice_GetRenderState_HiStencilWriteEnable");
//};

//D3DDevice_SetRenderState_HiStencilFunc
//{
//    mangled_ppc("D3DDevice_SetRenderState_HiStencilFunc");
//};

//D3DDevice_GetRenderState_HiStencilFunc
//{
//    mangled_ppc("D3DDevice_GetRenderState_HiStencilFunc");
//};

//D3DDevice_SetRenderState_HiStencilRef
//{
//    mangled_ppc("D3DDevice_SetRenderState_HiStencilRef");
//};

//D3DDevice_GetRenderState_HiStencilRef
//{
//    mangled_ppc("D3DDevice_GetRenderState_HiStencilRef");
//};

//D3DDevice_SetRenderState_PresentInterval
//{
//    mangled_ppc("D3DDevice_SetRenderState_PresentInterval");
//};

//D3DDevice_GetRenderState_PresentInterval
//{
//    mangled_ppc("D3DDevice_GetRenderState_PresentInterval");
//};

//D3DDevice_SetRenderState_PresentImmediateThreshold
//{
//    mangled_ppc("D3DDevice_SetRenderState_PresentImmediateThreshold");
//};

//D3DDevice_GetRenderState_PresentImmediateThreshold
//{
//    mangled_ppc("D3DDevice_GetRenderState_PresentImmediateThreshold");
//};

//D3DDevice_SetSamplerState_MinFilter
//{
//    mangled_ppc("D3DDevice_SetSamplerState_MinFilter");
//};

//D3DDevice_GetSamplerState_MinFilter
//{
//    mangled_ppc("D3DDevice_GetSamplerState_MinFilter");
//};

//D3DDevice_SetSamplerState_MinFilterZ
//{
//    mangled_ppc("D3DDevice_SetSamplerState_MinFilterZ");
//};

//D3DDevice_GetSamplerState_MinFilterZ
//{
//    mangled_ppc("D3DDevice_GetSamplerState_MinFilterZ");
//};

//D3DDevice_SetSamplerState_MagFilter
//{
//    mangled_ppc("D3DDevice_SetSamplerState_MagFilter");
//};

//D3DDevice_GetSamplerState_MagFilter
//{
//    mangled_ppc("D3DDevice_GetSamplerState_MagFilter");
//};

//D3DDevice_SetSamplerState_MagFilterZ
//{
//    mangled_ppc("D3DDevice_SetSamplerState_MagFilterZ");
//};

//D3DDevice_GetSamplerState_MagFilterZ
//{
//    mangled_ppc("D3DDevice_GetSamplerState_MagFilterZ");
//};

//D3DDevice_SetSamplerState_MipFilter
//{
//    mangled_ppc("D3DDevice_SetSamplerState_MipFilter");
//};

//D3DDevice_GetSamplerState_MipFilter
//{
//    mangled_ppc("D3DDevice_GetSamplerState_MipFilter");
//};

//D3DDevice_SetSamplerState_SeparateZFilterEnable
//{
//    mangled_ppc("D3DDevice_SetSamplerState_SeparateZFilterEnable");
//};

//D3DDevice_GetSamplerState_SeparateZFilterEnable
//{
//    mangled_ppc("D3DDevice_GetSamplerState_SeparateZFilterEnable");
//};

//D3DDevice_SetSamplerState_MaxAnisotropy
//{
//    mangled_ppc("D3DDevice_SetSamplerState_MaxAnisotropy");
//};

//D3DDevice_GetSamplerState_MaxAnisotropy
//{
//    mangled_ppc("D3DDevice_GetSamplerState_MaxAnisotropy");
//};

//D3DDevice_SetSamplerState_AnisotropyBias
//{
//    mangled_ppc("D3DDevice_SetSamplerState_AnisotropyBias");
//};

//D3DDevice_GetSamplerState_AnisotropyBias
//{
//    mangled_ppc("D3DDevice_GetSamplerState_AnisotropyBias");
//};

//D3DDevice_SetSamplerState_MipMapLodBias
//{
//    mangled_ppc("D3DDevice_SetSamplerState_MipMapLodBias");
//};

//D3DDevice_GetSamplerState_MipMapLodBias
//{
//    mangled_ppc("D3DDevice_GetSamplerState_MipMapLodBias");
//};

//D3DDevice_SetSamplerState_MaxMipLevel
//{
//    mangled_ppc("D3DDevice_SetSamplerState_MaxMipLevel");
//};

//D3DDevice_GetSamplerState_MaxMipLevel
//{
//    mangled_ppc("D3DDevice_GetSamplerState_MaxMipLevel");
//};

//D3DDevice_SetSamplerState_MinMipLevel
//{
//    mangled_ppc("D3DDevice_SetSamplerState_MinMipLevel");
//};

//D3DDevice_GetSamplerState_MinMipLevel
//{
//    mangled_ppc("D3DDevice_GetSamplerState_MinMipLevel");
//};

//D3DDevice_SetSamplerState_BorderColor
//{
//    mangled_ppc("D3DDevice_SetSamplerState_BorderColor");
//};

//D3DDevice_GetSamplerState_BorderColor
//{
//    mangled_ppc("D3DDevice_GetSamplerState_BorderColor");
//};

//D3DDevice_SetSamplerState_AddressU
//{
//    mangled_ppc("D3DDevice_SetSamplerState_AddressU");
//};

//D3DDevice_GetSamplerState_AddressU
//{
//    mangled_ppc("D3DDevice_GetSamplerState_AddressU");
//};

//D3DDevice_SetSamplerState_AddressV
//{
//    mangled_ppc("D3DDevice_SetSamplerState_AddressV");
//};

//D3DDevice_GetSamplerState_AddressV
//{
//    mangled_ppc("D3DDevice_GetSamplerState_AddressV");
//};

//D3DDevice_SetSamplerState_AddressW
//{
//    mangled_ppc("D3DDevice_SetSamplerState_AddressW");
//};

//D3DDevice_GetSamplerState_AddressW
//{
//    mangled_ppc("D3DDevice_GetSamplerState_AddressW");
//};

//D3DDevice_SetSamplerState_TrilinearThreshold
//{
//    mangled_ppc("D3DDevice_SetSamplerState_TrilinearThreshold");
//};

//D3DDevice_GetSamplerState_TrilinearThreshold
//{
//    mangled_ppc("D3DDevice_GetSamplerState_TrilinearThreshold");
//};

//D3DDevice_SetSamplerState_HGradientExpBias
//{
//    mangled_ppc("D3DDevice_SetSamplerState_HGradientExpBias");
//};

//D3DDevice_GetSamplerState_HGradientExpBias
//{
//    mangled_ppc("D3DDevice_GetSamplerState_HGradientExpBias");
//};

//D3DDevice_SetSamplerState_VGradientExpBias
//{
//    mangled_ppc("D3DDevice_SetSamplerState_VGradientExpBias");
//};

//D3DDevice_GetSamplerState_VGradientExpBias
//{
//    mangled_ppc("D3DDevice_GetSamplerState_VGradientExpBias");
//};

//D3DDevice_SetSamplerState_WhiteBorderColorW
//{
//    mangled_ppc("D3DDevice_SetSamplerState_WhiteBorderColorW");
//};

//D3DDevice_GetSamplerState_WhiteBorderColorW
//{
//    mangled_ppc("D3DDevice_GetSamplerState_WhiteBorderColorW");
//};

//D3DDevice_SetSamplerState_PointBorderEnable
//{
//    mangled_ppc("D3DDevice_SetSamplerState_PointBorderEnable");
//};

//D3DDevice_GetSamplerState_PointBorderEnable
//{
//    mangled_ppc("D3DDevice_GetSamplerState_PointBorderEnable");
//};

//D3DDevice_SetRenderState_ParameterCheck
//{
//    mangled_ppc("D3DDevice_SetRenderState_ParameterCheck");
//};

//D3DDevice_SetSamplerState_ParameterCheck
//{
//    mangled_ppc("D3DDevice_SetSamplerState_ParameterCheck");
//};

//D3DDevice_GetSamplerState_ParameterCheck
//{
//    mangled_ppc("D3DDevice_GetSamplerState_ParameterCheck");
//};

//D3DDevice_SetScissorRect
//{
//    mangled_ppc("D3DDevice_SetScissorRect");
//};

//D3DDevice_GetScissorRect
//{
//    mangled_ppc("D3DDevice_GetScissorRect");
//};

//D3DDevice_GetViewport
//{
//    mangled_ppc("D3DDevice_GetViewport");
//};

//D3DDevice_GetViewportF
//{
//    mangled_ppc("D3DDevice_GetViewportF");
//};

//D3DDevice_SetStreamSource
//{
//    mangled_ppc("D3DDevice_SetStreamSource");
//};

//D3DDevice_GetStreamSource
//{
//    mangled_ppc("D3DDevice_GetStreamSource");
//};

//D3DDevice_SetIndices
//{
//    mangled_ppc("D3DDevice_SetIndices");
//};

//D3DDevice_GetIndices
//{
//    mangled_ppc("D3DDevice_GetIndices");
//};

//D3DDevice_GetRenderTarget
//{
//    mangled_ppc("D3DDevice_GetRenderTarget");
//};

//D3DDevice_GetDepthStencilSurface
//{
//    mangled_ppc("D3DDevice_GetDepthStencilSurface");
//};

//D3DDevice_GetBackBuffer
//{
//    mangled_ppc("D3DDevice_GetBackBuffer");
//};

//D3DDevice_GetFrontBuffer
//{
//    mangled_ppc("D3DDevice_GetFrontBuffer");
//};

//D3DDevice_SetGammaRamp
//{
//    mangled_ppc("D3DDevice_SetGammaRamp");
//};

//D3DDevice_GetGammaRamp
//{
//    mangled_ppc("D3DDevice_GetGammaRamp");
//};

//D3DDevice_SetPWLGamma
//{
//    mangled_ppc("D3DDevice_SetPWLGamma");
//};

//D3DDevice_GetPWLGamma
//{
//    mangled_ppc("D3DDevice_GetPWLGamma");
//};

//D3DDevice_SetClipPlane
//{
//    mangled_ppc("D3DDevice_SetClipPlane");
//};

//D3DDevice_GetClipPlane
//{
//    mangled_ppc("D3DDevice_GetClipPlane");
//};

//D3DDevice_SetBlendState
//{
//    mangled_ppc("D3DDevice_SetBlendState");
//};

//D3DDevice_GetBlendState
//{
//    mangled_ppc("D3DDevice_GetBlendState");
//};

//D3DDevice_SetVertexFetchConstant
//{
//    mangled_ppc("D3DDevice_SetVertexFetchConstant");
//};

//D3DDevice_SetTextureFetchConstant
//{
//    mangled_ppc("D3DDevice_SetTextureFetchConstant");
//};

//void D3D::ResetAllState(class D3D::CDevice *, int)
//{
//    mangled_ppc("?ResetAllState@D3D@@YAXPAVCDevice@1@H@Z");
//};

//void D3D::SetViewport(struct D3DDevice *, float, float, float, float, float, float, unsigned long)
//{
//    mangled_ppc("?SetViewport@D3D@@YAXPAUD3DDevice@@MMMMMMK@Z");
//};

//D3DDevice_SetRenderState_ScissorTestEnable
//{
//    mangled_ppc("D3DDevice_SetRenderState_ScissorTestEnable");
//};

//D3DDevice_SetViewport
//{
//    mangled_ppc("D3DDevice_SetViewport");
//};

//D3DDevice_SetViewportF
//{
//    mangled_ppc("D3DDevice_SetViewportF");
//};

//void D3D::SetSurfaceInfo(class D3D::CDevice *, struct D3DSurface *)
//{
//    mangled_ppc("?SetSurfaceInfo@D3D@@YAXPAVCDevice@1@PAUD3DSurface@@@Z");
//};

//D3DDevice_SetRenderTarget
//{
//    mangled_ppc("D3DDevice_SetRenderTarget");
//};

//D3DDevice_SetDepthStencilSurface
//{
//    mangled_ppc("D3DDevice_SetDepthStencilSurface");
//};

//D3DDevice_SetSurfaces
//{
//    mangled_ppc("D3DDevice_SetSurfaces");
//};

//D3DDevice_SetRenderTarget_External
//{
//    mangled_ppc("D3DDevice_SetRenderTarget_External");
//};

