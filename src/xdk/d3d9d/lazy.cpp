/* ---------- headers */

#include "xdk\d3d9d\lazy.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// D3D__DisableConstantOverwriteCheck; // "D3D__DisableConstantOverwriteCheck"
// D3D__DisableHiStencilDirtyCheck; // "D3D__DisableHiStencilDirtyCheck"
// D3D__AllowMultipleMixedMemoryExports; // "D3D__AllowMultipleMixedMemoryExports"

// unsigned long * D3D::SetPending_Split(class D3D::CDevice *, unsigned int *, unsigned long &, unsigned long, unsigned int *, unsigned long, unsigned long);
// void D3D::SetPending_RenderStates(class D3D::CDevice *, unsigned __int64, unsigned long, void *);
// void D3D::SetPending_FetchConstants(class D3D::CDevice *, unsigned __int64);
// unsigned long D3D::GetFullConstIndex(union GPUVERTEX_FETCH_INSTRUCTION const *);
// unsigned long D3D::GetNumberOfDWORDs(unsigned long);
// int D3D::CompareVFetches(union GPUVERTEX_FETCH_INSTRUCTION const *, union GPUVERTEX_FETCH_INSTRUCTION const *, int);
// unsigned long D3D::CombineSwizzle(union D3D::SwizzleVector, unsigned long);
// void D3D::VerifyShaderComponentsMatch(struct _UCODE_R500VSUCODE *, struct _UCODE_R500PSUCODE *);
// __lvx;
// __stvx;
// unsigned long D3D::CompareInterpolatorHeaders(struct _UCODE_R500VSUCODE const *, struct _UCODE_R500PSUCODE const *);
// void D3D::PatchBoundInterpolatorHeadersToMatch(struct _UCODE_R500VSUCODE *, struct _UCODE_R500PSUCODE const *);
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS;
// GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS;
// SetVertexStream;
// void D3D::ReportUnexpectedMemexport(int);
// D3DDWORDToPtr;
// D3DTag_Index;
// D3DTag_SubsetMask;
// D3DTag_Mask;
// D3DTag_ShaderConstantMask;
// D3DTagCollection_TestAny;
// D3DTagCollection_TestAll;
// int D3D::IsLazySet(struct _D3DTAGCOLLECTION const *, enum D3D::LazyState);
// public: bool D3D::ConstantTracker<0, 98, 128>::CTBitSet<128>::test(unsigned int);
// public: bool D3D::ConstantTracker<0, 99, 256>::CTBitSet<256>::test(unsigned int);
// public: bool D3D::ConstantTracker<0, 105, 16>::CTBitSet<16>::test(unsigned int);
// public: bool D3D::ConstantTracker<1, 98, 128>::CTBitSet<128>::test(unsigned int);
// public: bool D3D::ConstantTracker<1, 99, 256>::CTBitSet<256>::test(unsigned int);
// public: bool D3D::ConstantTracker<1, 105, 16>::CTBitSet<16>::test(unsigned int);
// InterpolatorsMatch;
// public: void D3D::CDevice::SetLazyDirect(unsigned __int64*, enum D3D::LazyState, unsigned long);
// public: void D3D::CDevice::ClearLazyDirect(unsigned __int64*, enum D3D::LazyState, unsigned long);
// public: int D3D::CDevice::TestLazyDirect(unsigned __int64, enum D3D::LazyState, unsigned long);
// public: unsigned __int64 D3D::CDevice::GetDeviceUniquenessAndFrameNumber(void);
// int D3D::MustResetHiZ(class D3D::CDevice *);
// int D3D::CanEnableHiZ(class D3D::CDevice *, unsigned long);
// unsigned __int64 D3D::SetPending_HiZEnable(class D3D::CDevice *, unsigned __int64);
// unsigned __int64 D3D::SetPending_Predicated(class D3D::CDevice *, unsigned __int64, unsigned long);
// void D3D::SetPending_ClipPlanes(class D3D::CDevice *, unsigned __int64);
// void D3D::SetPending_AluConstants(class D3D::CDevice *, unsigned __int64, unsigned long, void *);
// void D3D::PatchVertexShaderToMatchVertexDeclaration(class D3D::CVertexShader *, unsigned long *, class D3D::CVertexDeclaration const *, unsigned char const *, unsigned long);
// void D3D::VertexShaderStubOutput(struct _UCODE_R500VSUCODE const *, union GPUSHADER_INSTRUCTION *, union _UCODE_VSOUTPUTDECLARATION const *);
// void D3D::VertexShaderRedirectOutput(struct _UCODE_R500VSUCODE const *, union GPUSHADER_INSTRUCTION *, union _UCODE_VSOUTPUTDECLARATION const *, union _UCODE_PSINPUTDECLARATION const *);
// void D3D::PatchVertexShaderToMatchPixelShader(struct PIXPatchVertexShaderToMatchPixelShaderData *, struct _UCODE_R500VSUCODE const *, union GPUSHADER_INSTRUCTION *, union GPU_PROGRAMCONTROL *, struct _UCODE_R500PSUCODE *);
// public: void D3D::ConstantTracker<0, 98, 128>::ValidateLiteral(unsigned int);
// public: void D3D::ConstantTracker<0, 98, 128>::ValidateUserConstant(unsigned int, unsigned int);
// public: void D3D::ConstantTracker<0, 99, 256>::ValidateLiteral(unsigned int);
// public: void D3D::ConstantTracker<0, 99, 256>::ValidateUserConstant(unsigned int, unsigned int);
// public: void D3D::ConstantTracker<0, 105, 16>::ValidateLiteral(unsigned int);
// public: void D3D::ConstantTracker<0, 105, 16>::ValidateUserConstant(unsigned int, unsigned int);
// public: void D3D::ConstantTracker<1, 98, 128>::ValidateLiteral(unsigned int);
// public: void D3D::ConstantTracker<1, 98, 128>::ValidateUserConstant(unsigned int, unsigned int);
// public: void D3D::ConstantTracker<1, 99, 256>::ValidateLiteral(unsigned int);
// public: void D3D::ConstantTracker<1, 99, 256>::ValidateUserConstant(unsigned int, unsigned int);
// public: void D3D::ConstantTracker<1, 105, 16>::ValidateLiteral(unsigned int);
// public: void D3D::ConstantTracker<1, 105, 16>::ValidateUserConstant(unsigned int, unsigned int);
// void D3D::PutPIXDebuggerHintHeader(class D3D::CDevice *, unsigned long *&, enum PIXMeta, unsigned long, struct _UCODE_R500_DEBUGGER_HINT_HEADER const *);
// void D3D::PIXMetaLoadVertexShaderImp(class D3D::CDevice *, class D3D::CVertexShader *);
// void D3D::PIXMetaLoadPixelShaderImp(class D3D::CDevice *, class D3D::CPixelShader *);
// void D3D::SetLiteralShaderConstants(class D3D::CDevice *, struct _UCODE_HEADER *, void *);
// int D3D::DirectShaderPatch(class D3D::CDevice *, class D3D::CVertexShader *, class D3D::CVertexDeclaration *, unsigned long);
// long D3D::LazyDetectSmashedPixelShaderLiteralConstants_EnumerateLiteralsCallback(void *, unsigned long, unsigned long, unsigned long, void const *);
// void D3D::LazyDetectSmashedPixelShaderLiteralConstants(class D3D::CDevice *);
// long D3D::LazyDetectSmashedVertexShaderLiteralConstants_EnumerateLiteralsCallback(void *, unsigned long, unsigned long, unsigned long, void const *);
// void D3D::LazyDetectSmashedVertexShaderLiteralConstants(class D3D::CDevice *);
// void D3D::LazyParameterCheck(class D3D::CDevice *, enum D3D::LazyPrim, struct _D3DTAGCOLLECTION const *);
// D3DVertexShader_Bind;
// void D3D::IncrementalShaderPatchAndLoad(class D3D::CDevice *, int, class D3D::CVertexShader *, union GPU_PROGRAMCONTROL *, class D3D::CVertexDeclaration *, struct _UCODE_R500VSUCODE *, struct _UCODE_R500PSUCODE *, unsigned long);
// unsigned __int64 D3D::SetPending_Shaders(class D3D::CDevice *, unsigned __int64);

//unsigned long * D3D::SetPending_Split(class D3D::CDevice *, unsigned int *, unsigned long &, unsigned long, unsigned int *, unsigned long, unsigned long)
//{
//    mangled_ppc("?SetPending_Split@D3D@@YAPAKPAVCDevice@1@PIAKK1KK@Z");
//};

//void D3D::SetPending_RenderStates(class D3D::CDevice *, unsigned __int64, unsigned long, void *)
//{
//    mangled_ppc("?SetPending_RenderStates@D3D@@YAXPAVCDevice@1@_KKPAX@Z");
//};

//void D3D::SetPending_FetchConstants(class D3D::CDevice *, unsigned __int64)
//{
//    mangled_ppc("?SetPending_FetchConstants@D3D@@YAXPAVCDevice@1@_K@Z");
//};

//unsigned long D3D::GetFullConstIndex(union GPUVERTEX_FETCH_INSTRUCTION const *)
//{
//    mangled_ppc("?GetFullConstIndex@D3D@@YAKPBTGPUVERTEX_FETCH_INSTRUCTION@@@Z");
//};

//unsigned long D3D::GetNumberOfDWORDs(unsigned long)
//{
//    mangled_ppc("?GetNumberOfDWORDs@D3D@@YAKK@Z");
//};

//int D3D::CompareVFetches(union GPUVERTEX_FETCH_INSTRUCTION const *, union GPUVERTEX_FETCH_INSTRUCTION const *, int)
//{
//    mangled_ppc("?CompareVFetches@D3D@@YAHPBTGPUVERTEX_FETCH_INSTRUCTION@@0H@Z");
//};

//unsigned long D3D::CombineSwizzle(union D3D::SwizzleVector, unsigned long)
//{
//    mangled_ppc("?CombineSwizzle@D3D@@YAKTSwizzleVector@1@K@Z");
//};

//void D3D::VerifyShaderComponentsMatch(struct _UCODE_R500VSUCODE *, struct _UCODE_R500PSUCODE *)
//{
//    mangled_ppc("?VerifyShaderComponentsMatch@D3D@@YAXPAU_UCODE_R500VSUCODE@@PAU_UCODE_R500PSUCODE@@@Z");
//};

//__lvx
//{
//    mangled_ppc("__lvx");
//};

//__stvx
//{
//    mangled_ppc("__stvx");
//};

//unsigned long D3D::CompareInterpolatorHeaders(struct _UCODE_R500VSUCODE const *, struct _UCODE_R500PSUCODE const *)
//{
//    mangled_ppc("?CompareInterpolatorHeaders@D3D@@YAKPBU_UCODE_R500VSUCODE@@PBU_UCODE_R500PSUCODE@@@Z");
//};

//void D3D::PatchBoundInterpolatorHeadersToMatch(struct _UCODE_R500VSUCODE *, struct _UCODE_R500PSUCODE const *)
//{
//    mangled_ppc("?PatchBoundInterpolatorHeadersToMatch@D3D@@YAXPAU_UCODE_R500VSUCODE@@PBU_UCODE_R500PSUCODE@@@Z");
//};

//GPU_CONVERT_CPU_TO_GPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_GPU_ADDRESS");
//};

//GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_GPU_TO_CPU_CACHED_READONLY_ADDRESS");
//};

//GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_CPU_CACHED_READONLY_ADDRESS");
//};

//SetVertexStream
//{
//    mangled_ppc("SetVertexStream");
//};

//void D3D::ReportUnexpectedMemexport(int)
//{
//    mangled_ppc("?ReportUnexpectedMemexport@D3D@@YAXH@Z");
//};

//D3DDWORDToPtr
//{
//    mangled_ppc("D3DDWORDToPtr");
//};

//D3DTag_Index
//{
//    mangled_ppc("D3DTag_Index");
//};

//D3DTag_SubsetMask
//{
//    mangled_ppc("D3DTag_SubsetMask");
//};

//D3DTag_Mask
//{
//    mangled_ppc("D3DTag_Mask");
//};

//D3DTag_ShaderConstantMask
//{
//    mangled_ppc("D3DTag_ShaderConstantMask");
//};

//D3DTagCollection_TestAny
//{
//    mangled_ppc("D3DTagCollection_TestAny");
//};

//D3DTagCollection_TestAll
//{
//    mangled_ppc("D3DTagCollection_TestAll");
//};

//int D3D::IsLazySet(struct _D3DTAGCOLLECTION const *, enum D3D::LazyState)
//{
//    mangled_ppc("?IsLazySet@D3D@@YAHPBU_D3DTAGCOLLECTION@@W4LazyState@1@@Z");
//};

//public: bool D3D::ConstantTracker<0, 98, 128>::CTBitSet<128>::test(unsigned int)
//{
//    mangled_ppc("?test@?$CTBitSet@$0IA@@?$ConstantTracker@$0A@$0GC@$0IA@@D3D@@QAA_NI@Z");
//};

//public: bool D3D::ConstantTracker<0, 99, 256>::CTBitSet<256>::test(unsigned int)
//{
//    mangled_ppc("?test@?$CTBitSet@$0BAA@@?$ConstantTracker@$0A@$0GD@$0BAA@@D3D@@QAA_NI@Z");
//};

//public: bool D3D::ConstantTracker<0, 105, 16>::CTBitSet<16>::test(unsigned int)
//{
//    mangled_ppc("?test@?$CTBitSet@$0BA@@?$ConstantTracker@$0A@$0GJ@$0BA@@D3D@@QAA_NI@Z");
//};

//public: bool D3D::ConstantTracker<1, 98, 128>::CTBitSet<128>::test(unsigned int)
//{
//    mangled_ppc("?test@?$CTBitSet@$0IA@@?$ConstantTracker@$00$0GC@$0IA@@D3D@@QAA_NI@Z");
//};

//public: bool D3D::ConstantTracker<1, 99, 256>::CTBitSet<256>::test(unsigned int)
//{
//    mangled_ppc("?test@?$CTBitSet@$0BAA@@?$ConstantTracker@$00$0GD@$0BAA@@D3D@@QAA_NI@Z");
//};

//public: bool D3D::ConstantTracker<1, 105, 16>::CTBitSet<16>::test(unsigned int)
//{
//    mangled_ppc("?test@?$CTBitSet@$0BA@@?$ConstantTracker@$00$0GJ@$0BA@@D3D@@QAA_NI@Z");
//};

//InterpolatorsMatch
//{
//    mangled_ppc("InterpolatorsMatch");
//};

//public: void D3D::CDevice::SetLazyDirect(unsigned __int64*, enum D3D::LazyState, unsigned long)
//{
//    mangled_ppc("?SetLazyDirect@CDevice@D3D@@QAAXPA_KW4LazyState@2@K@Z");
//};

//public: void D3D::CDevice::ClearLazyDirect(unsigned __int64*, enum D3D::LazyState, unsigned long)
//{
//    mangled_ppc("?ClearLazyDirect@CDevice@D3D@@QAAXPA_KW4LazyState@2@K@Z");
//};

//public: int D3D::CDevice::TestLazyDirect(unsigned __int64, enum D3D::LazyState, unsigned long)
//{
//    mangled_ppc("?TestLazyDirect@CDevice@D3D@@QAAH_KW4LazyState@2@K@Z");
//};

//public: unsigned __int64 D3D::CDevice::GetDeviceUniquenessAndFrameNumber(void)
//{
//    mangled_ppc("?GetDeviceUniquenessAndFrameNumber@CDevice@D3D@@QAA_KXZ");
//};

//int D3D::MustResetHiZ(class D3D::CDevice *)
//{
//    mangled_ppc("?MustResetHiZ@D3D@@YAHPAVCDevice@1@@Z");
//};

//int D3D::CanEnableHiZ(class D3D::CDevice *, unsigned long)
//{
//    mangled_ppc("?CanEnableHiZ@D3D@@YAHPAVCDevice@1@K@Z");
//};

//unsigned __int64 D3D::SetPending_HiZEnable(class D3D::CDevice *, unsigned __int64)
//{
//    mangled_ppc("?SetPending_HiZEnable@D3D@@YA_KPAVCDevice@1@_K@Z");
//};

//unsigned __int64 D3D::SetPending_Predicated(class D3D::CDevice *, unsigned __int64, unsigned long)
//{
//    mangled_ppc("?SetPending_Predicated@D3D@@YA_KPAVCDevice@1@_KK@Z");
//};

//void D3D::SetPending_ClipPlanes(class D3D::CDevice *, unsigned __int64)
//{
//    mangled_ppc("?SetPending_ClipPlanes@D3D@@YAXPAVCDevice@1@_K@Z");
//};

//void D3D::SetPending_AluConstants(class D3D::CDevice *, unsigned __int64, unsigned long, void *)
//{
//    mangled_ppc("?SetPending_AluConstants@D3D@@YAXPAVCDevice@1@_KKPAX@Z");
//};

//void D3D::PatchVertexShaderToMatchVertexDeclaration(class D3D::CVertexShader *, unsigned long *, class D3D::CVertexDeclaration const *, unsigned char const *, unsigned long)
//{
//    mangled_ppc("?PatchVertexShaderToMatchVertexDeclaration@D3D@@YAXPAVCVertexShader@1@PAKPBVCVertexDeclaration@1@PBEK@Z");
//};

//void D3D::VertexShaderStubOutput(struct _UCODE_R500VSUCODE const *, union GPUSHADER_INSTRUCTION *, union _UCODE_VSOUTPUTDECLARATION const *)
//{
//    mangled_ppc("?VertexShaderStubOutput@D3D@@YAXPBU_UCODE_R500VSUCODE@@PATGPUSHADER_INSTRUCTION@@PBT_UCODE_VSOUTPUTDECLARATION@@@Z");
//};

//void D3D::VertexShaderRedirectOutput(struct _UCODE_R500VSUCODE const *, union GPUSHADER_INSTRUCTION *, union _UCODE_VSOUTPUTDECLARATION const *, union _UCODE_PSINPUTDECLARATION const *)
//{
//    mangled_ppc("?VertexShaderRedirectOutput@D3D@@YAXPBU_UCODE_R500VSUCODE@@PATGPUSHADER_INSTRUCTION@@PBT_UCODE_VSOUTPUTDECLARATION@@PBT_UCODE_PSINPUTDECLARATION@@@Z");
//};

//void D3D::PatchVertexShaderToMatchPixelShader(struct PIXPatchVertexShaderToMatchPixelShaderData *, struct _UCODE_R500VSUCODE const *, union GPUSHADER_INSTRUCTION *, union GPU_PROGRAMCONTROL *, struct _UCODE_R500PSUCODE *)
//{
//    mangled_ppc("?PatchVertexShaderToMatchPixelShader@D3D@@YAXPAUPIXPatchVertexShaderToMatchPixelShaderData@@PBU_UCODE_R500VSUCODE@@PATGPUSHADER_INSTRUCTION@@PATGPU_PROGRAMCONTROL@@PAU_UCODE_R500PSUCODE@@@Z");
//};

//public: void D3D::ConstantTracker<0, 98, 128>::ValidateLiteral(unsigned int)
//{
//    mangled_ppc("?ValidateLiteral@?$ConstantTracker@$0A@$0GC@$0IA@@D3D@@QAAXI@Z");
//};

//public: void D3D::ConstantTracker<0, 98, 128>::ValidateUserConstant(unsigned int, unsigned int)
//{
//    mangled_ppc("?ValidateUserConstant@?$ConstantTracker@$0A@$0GC@$0IA@@D3D@@QAAXII@Z");
//};

//public: void D3D::ConstantTracker<0, 99, 256>::ValidateLiteral(unsigned int)
//{
//    mangled_ppc("?ValidateLiteral@?$ConstantTracker@$0A@$0GD@$0BAA@@D3D@@QAAXI@Z");
//};

//public: void D3D::ConstantTracker<0, 99, 256>::ValidateUserConstant(unsigned int, unsigned int)
//{
//    mangled_ppc("?ValidateUserConstant@?$ConstantTracker@$0A@$0GD@$0BAA@@D3D@@QAAXII@Z");
//};

//public: void D3D::ConstantTracker<0, 105, 16>::ValidateLiteral(unsigned int)
//{
//    mangled_ppc("?ValidateLiteral@?$ConstantTracker@$0A@$0GJ@$0BA@@D3D@@QAAXI@Z");
//};

//public: void D3D::ConstantTracker<0, 105, 16>::ValidateUserConstant(unsigned int, unsigned int)
//{
//    mangled_ppc("?ValidateUserConstant@?$ConstantTracker@$0A@$0GJ@$0BA@@D3D@@QAAXII@Z");
//};

//public: void D3D::ConstantTracker<1, 98, 128>::ValidateLiteral(unsigned int)
//{
//    mangled_ppc("?ValidateLiteral@?$ConstantTracker@$00$0GC@$0IA@@D3D@@QAAXI@Z");
//};

//public: void D3D::ConstantTracker<1, 98, 128>::ValidateUserConstant(unsigned int, unsigned int)
//{
//    mangled_ppc("?ValidateUserConstant@?$ConstantTracker@$00$0GC@$0IA@@D3D@@QAAXII@Z");
//};

//public: void D3D::ConstantTracker<1, 99, 256>::ValidateLiteral(unsigned int)
//{
//    mangled_ppc("?ValidateLiteral@?$ConstantTracker@$00$0GD@$0BAA@@D3D@@QAAXI@Z");
//};

//public: void D3D::ConstantTracker<1, 99, 256>::ValidateUserConstant(unsigned int, unsigned int)
//{
//    mangled_ppc("?ValidateUserConstant@?$ConstantTracker@$00$0GD@$0BAA@@D3D@@QAAXII@Z");
//};

//public: void D3D::ConstantTracker<1, 105, 16>::ValidateLiteral(unsigned int)
//{
//    mangled_ppc("?ValidateLiteral@?$ConstantTracker@$00$0GJ@$0BA@@D3D@@QAAXI@Z");
//};

//public: void D3D::ConstantTracker<1, 105, 16>::ValidateUserConstant(unsigned int, unsigned int)
//{
//    mangled_ppc("?ValidateUserConstant@?$ConstantTracker@$00$0GJ@$0BA@@D3D@@QAAXII@Z");
//};

//void D3D::PutPIXDebuggerHintHeader(class D3D::CDevice *, unsigned long *&, enum PIXMeta, unsigned long, struct _UCODE_R500_DEBUGGER_HINT_HEADER const *)
//{
//    mangled_ppc("?PutPIXDebuggerHintHeader@D3D@@YAXPAVCDevice@1@AAPAKW4PIXMeta@@KPBU_UCODE_R500_DEBUGGER_HINT_HEADER@@@Z");
//};

//void D3D::PIXMetaLoadVertexShaderImp(class D3D::CDevice *, class D3D::CVertexShader *)
//{
//    mangled_ppc("?PIXMetaLoadVertexShaderImp@D3D@@YAXPAVCDevice@1@PAVCVertexShader@1@@Z");
//};

//void D3D::PIXMetaLoadPixelShaderImp(class D3D::CDevice *, class D3D::CPixelShader *)
//{
//    mangled_ppc("?PIXMetaLoadPixelShaderImp@D3D@@YAXPAVCDevice@1@PAVCPixelShader@1@@Z");
//};

//void D3D::SetLiteralShaderConstants(class D3D::CDevice *, struct _UCODE_HEADER *, void *)
//{
//    mangled_ppc("?SetLiteralShaderConstants@D3D@@YAXPAVCDevice@1@PAU_UCODE_HEADER@@PAX@Z");
//};

//int D3D::DirectShaderPatch(class D3D::CDevice *, class D3D::CVertexShader *, class D3D::CVertexDeclaration *, unsigned long)
//{
//    mangled_ppc("?DirectShaderPatch@D3D@@YAHPAVCDevice@1@PAVCVertexShader@1@PAVCVertexDeclaration@1@K@Z");
//};

//long D3D::LazyDetectSmashedPixelShaderLiteralConstants_EnumerateLiteralsCallback(void *, unsigned long, unsigned long, unsigned long, void const *)
//{
//    mangled_ppc("?LazyDetectSmashedPixelShaderLiteralConstants_EnumerateLiteralsCallback@D3D@@YAJPAXKKKPBX@Z");
//};

//void D3D::LazyDetectSmashedPixelShaderLiteralConstants(class D3D::CDevice *)
//{
//    mangled_ppc("?LazyDetectSmashedPixelShaderLiteralConstants@D3D@@YAXPAVCDevice@1@@Z");
//};

//long D3D::LazyDetectSmashedVertexShaderLiteralConstants_EnumerateLiteralsCallback(void *, unsigned long, unsigned long, unsigned long, void const *)
//{
//    mangled_ppc("?LazyDetectSmashedVertexShaderLiteralConstants_EnumerateLiteralsCallback@D3D@@YAJPAXKKKPBX@Z");
//};

//void D3D::LazyDetectSmashedVertexShaderLiteralConstants(class D3D::CDevice *)
//{
//    mangled_ppc("?LazyDetectSmashedVertexShaderLiteralConstants@D3D@@YAXPAVCDevice@1@@Z");
//};

//void D3D::LazyParameterCheck(class D3D::CDevice *, enum D3D::LazyPrim, struct _D3DTAGCOLLECTION const *)
//{
//    mangled_ppc("?LazyParameterCheck@D3D@@YAXPAVCDevice@1@W4LazyPrim@1@PBU_D3DTAGCOLLECTION@@@Z");
//};

//D3DVertexShader_Bind
//{
//    mangled_ppc("D3DVertexShader_Bind");
//};

//void D3D::IncrementalShaderPatchAndLoad(class D3D::CDevice *, int, class D3D::CVertexShader *, union GPU_PROGRAMCONTROL *, class D3D::CVertexDeclaration *, struct _UCODE_R500VSUCODE *, struct _UCODE_R500PSUCODE *, unsigned long)
//{
//    mangled_ppc("?IncrementalShaderPatchAndLoad@D3D@@YAXPAVCDevice@1@HPAVCVertexShader@1@PATGPU_PROGRAMCONTROL@@PAVCVertexDeclaration@1@PAU_UCODE_R500VSUCODE@@PAU_UCODE_R500PSUCODE@@K@Z");
//};

//unsigned __int64 D3D::SetPending_Shaders(class D3D::CDevice *, unsigned __int64)
//{
//    mangled_ppc("?SetPending_Shaders@D3D@@YA_KPAVCDevice@1@_K@Z");
//};

