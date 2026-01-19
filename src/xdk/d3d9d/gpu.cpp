/* ---------- headers */

#include "xdk\d3d9d\gpu.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct D3D::TagDescription *D3D::g_TagDescription; // "?g_TagDescription@D3D@@3PAUTagDescription@1@A"

// D3DTagCollection_SetVertexShaderConstantFTag_ParameterCheck;
// D3DTagCollection_SetPixelShaderConstantFTag_ParameterCheck;
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// D3DPtrToDWORD;
// D3DDWORDToPtr;
// D3DTag_Index;
// D3DTag_SubsetMask;
// D3DTag_Mask;
// D3DTag_ShaderConstantMask;
// D3DTagCollection_Set;
// D3DTagCollection_Clear;
// D3DTagCollection_TestAll;
// public: struct _UCODE_R500PSUCODE * D3D::CPixelShader::GetUCode(void);
// public: unsigned long D3D::CPixelShader::GetPhysicalMicrocodeSize(void);
// public: int D3D::CPixelShader::UsesMemexport(void);
// public: int D3D::CVertexShader::UsesMemexport(void);
// void D3D::CheckPixelShaderForMemexport(unsigned long, class D3D::CPixelShader *);
// void D3D::CheckVertexShaderForMemexport(unsigned long, class D3D::CVertexShader *);
// void D3D::PIXMetaLoadVertexShader(class D3D::CDevice *, class D3D::CVertexShader *);
// void D3D::PIXMetaLoadPixelShader(class D3D::CDevice *, class D3D::CPixelShader *);
// void D3D::TimeStampPredicatedResource(class D3D::CDevice *, struct D3DResource *);
// unsigned long D3D::CPUtoGPUTextureAddressDWORD(unsigned long);
// void D3D::PrintTags(unsigned long, unsigned __int64);
// void D3D::GpuOwnershipFailure(class D3D::CDevice *, unsigned long, unsigned __int64);
// void D3D::D3DOwnershipFailure(class D3D::CDevice *, unsigned long, unsigned __int64);
// void D3D::D3DInheritanceFailure(class D3D::CDevice *, unsigned long, unsigned __int64);
// D3DDevice_GpuOwn_ParameterCheck;
// D3DDevice_GpuDisown_ParameterCheck;
// D3DDevice_GpuDisownAll;
// D3DDevice_GpuEndShaderConstantF4_ParameterCheck;
// public: unsigned long * D3D::CPixelShader::GetPhysicalMicrocode(void);
// public: void D3D::CDevice::VerifyGpuOwnership(unsigned long, unsigned __int64);
// public: void D3D::CDevice::VerifyGpuOwnershipTag(enum _D3DTAG);
// void D3D::GpuLoadLiteralConstants(class D3D::CDevice *, struct _UCODE_HEADER *, void *, unsigned char *, unsigned long, int, int);
// D3DDevice_GpuLoadShadersFast;
// D3DDevice_GpuSetVertexFetchConstant;
// D3DDevice_GpuSetTextureFetchConstant;
// D3DDevice_GpuSetColorMask;
// D3DDevice_GpuSetBlendFactor;
// D3DDevice_GpuSetAlphaRef;
// D3DDevice_GpuSetBlendControl;
// D3DDevice_GpuSetColorControl;
// D3DDevice_GpuBeginShaderConstantF4;
// D3DDevice_GpuLoadShaderConstantF4;
// D3DDevice_GpuLoadShaderConstantF4Pointer;

//D3DTagCollection_SetVertexShaderConstantFTag_ParameterCheck
//{
//    mangled_ppc("D3DTagCollection_SetVertexShaderConstantFTag_ParameterCheck");
//};

//D3DTagCollection_SetPixelShaderConstantFTag_ParameterCheck
//{
//    mangled_ppc("D3DTagCollection_SetPixelShaderConstantFTag_ParameterCheck");
//};

//GPU_CONVERT_CPU_TO_GPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_GPU_ADDRESS");
//};

//D3DPtrToDWORD
//{
//    mangled_ppc("D3DPtrToDWORD");
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

//D3DTagCollection_Set
//{
//    mangled_ppc("D3DTagCollection_Set");
//};

//D3DTagCollection_Clear
//{
//    mangled_ppc("D3DTagCollection_Clear");
//};

//D3DTagCollection_TestAll
//{
//    mangled_ppc("D3DTagCollection_TestAll");
//};

//public: struct _UCODE_R500PSUCODE * D3D::CPixelShader::GetUCode(void)
//{
//    mangled_ppc("?GetUCode@CPixelShader@D3D@@QAAPAU_UCODE_R500PSUCODE@@XZ");
//};

//public: unsigned long D3D::CPixelShader::GetPhysicalMicrocodeSize(void)
//{
//    mangled_ppc("?GetPhysicalMicrocodeSize@CPixelShader@D3D@@QAAKXZ");
//};

//public: int D3D::CPixelShader::UsesMemexport(void)
//{
//    mangled_ppc("?UsesMemexport@CPixelShader@D3D@@QAAHXZ");
//};

//public: int D3D::CVertexShader::UsesMemexport(void)
//{
//    mangled_ppc("?UsesMemexport@CVertexShader@D3D@@QAAHXZ");
//};

//void D3D::CheckPixelShaderForMemexport(unsigned long, class D3D::CPixelShader *)
//{
//    mangled_ppc("?CheckPixelShaderForMemexport@D3D@@YAXKPAVCPixelShader@1@@Z");
//};

//void D3D::CheckVertexShaderForMemexport(unsigned long, class D3D::CVertexShader *)
//{
//    mangled_ppc("?CheckVertexShaderForMemexport@D3D@@YAXKPAVCVertexShader@1@@Z");
//};

//void D3D::PIXMetaLoadVertexShader(class D3D::CDevice *, class D3D::CVertexShader *)
//{
//    mangled_ppc("?PIXMetaLoadVertexShader@D3D@@YAXPAVCDevice@1@PAVCVertexShader@1@@Z");
//};

//void D3D::PIXMetaLoadPixelShader(class D3D::CDevice *, class D3D::CPixelShader *)
//{
//    mangled_ppc("?PIXMetaLoadPixelShader@D3D@@YAXPAVCDevice@1@PAVCPixelShader@1@@Z");
//};

//void D3D::TimeStampPredicatedResource(class D3D::CDevice *, struct D3DResource *)
//{
//    mangled_ppc("?TimeStampPredicatedResource@D3D@@YAXPAVCDevice@1@PAUD3DResource@@@Z");
//};

//unsigned long D3D::CPUtoGPUTextureAddressDWORD(unsigned long)
//{
//    mangled_ppc("?CPUtoGPUTextureAddressDWORD@D3D@@YAKK@Z");
//};

//void D3D::PrintTags(unsigned long, unsigned __int64)
//{
//    mangled_ppc("?PrintTags@D3D@@YAXK_K@Z");
//};

//void D3D::GpuOwnershipFailure(class D3D::CDevice *, unsigned long, unsigned __int64)
//{
//    mangled_ppc("?GpuOwnershipFailure@D3D@@YAXPAVCDevice@1@K_K@Z");
//};

//void D3D::D3DOwnershipFailure(class D3D::CDevice *, unsigned long, unsigned __int64)
//{
//    mangled_ppc("?D3DOwnershipFailure@D3D@@YAXPAVCDevice@1@K_K@Z");
//};

//void D3D::D3DInheritanceFailure(class D3D::CDevice *, unsigned long, unsigned __int64)
//{
//    mangled_ppc("?D3DInheritanceFailure@D3D@@YAXPAVCDevice@1@K_K@Z");
//};

//D3DDevice_GpuOwn_ParameterCheck
//{
//    mangled_ppc("D3DDevice_GpuOwn_ParameterCheck");
//};

//D3DDevice_GpuDisown_ParameterCheck
//{
//    mangled_ppc("D3DDevice_GpuDisown_ParameterCheck");
//};

//D3DDevice_GpuDisownAll
//{
//    mangled_ppc("D3DDevice_GpuDisownAll");
//};

//D3DDevice_GpuEndShaderConstantF4_ParameterCheck
//{
//    mangled_ppc("D3DDevice_GpuEndShaderConstantF4_ParameterCheck");
//};

//public: unsigned long * D3D::CPixelShader::GetPhysicalMicrocode(void)
//{
//    mangled_ppc("?GetPhysicalMicrocode@CPixelShader@D3D@@QAAPAKXZ");
//};

//public: void D3D::CDevice::VerifyGpuOwnership(unsigned long, unsigned __int64)
//{
//    mangled_ppc("?VerifyGpuOwnership@CDevice@D3D@@QAAXK_K@Z");
//};

//public: void D3D::CDevice::VerifyGpuOwnershipTag(enum _D3DTAG)
//{
//    mangled_ppc("?VerifyGpuOwnershipTag@CDevice@D3D@@QAAXW4_D3DTAG@@@Z");
//};

//void D3D::GpuLoadLiteralConstants(class D3D::CDevice *, struct _UCODE_HEADER *, void *, unsigned char *, unsigned long, int, int)
//{
//    mangled_ppc("?GpuLoadLiteralConstants@D3D@@YAXPAVCDevice@1@PAU_UCODE_HEADER@@PAXPAEKHH@Z");
//};

//D3DDevice_GpuLoadShadersFast
//{
//    mangled_ppc("D3DDevice_GpuLoadShadersFast");
//};

//D3DDevice_GpuSetVertexFetchConstant
//{
//    mangled_ppc("D3DDevice_GpuSetVertexFetchConstant");
//};

//D3DDevice_GpuSetTextureFetchConstant
//{
//    mangled_ppc("D3DDevice_GpuSetTextureFetchConstant");
//};

//D3DDevice_GpuSetColorMask
//{
//    mangled_ppc("D3DDevice_GpuSetColorMask");
//};

//D3DDevice_GpuSetBlendFactor
//{
//    mangled_ppc("D3DDevice_GpuSetBlendFactor");
//};

//D3DDevice_GpuSetAlphaRef
//{
//    mangled_ppc("D3DDevice_GpuSetAlphaRef");
//};

//D3DDevice_GpuSetBlendControl
//{
//    mangled_ppc("D3DDevice_GpuSetBlendControl");
//};

//D3DDevice_GpuSetColorControl
//{
//    mangled_ppc("D3DDevice_GpuSetColorControl");
//};

//D3DDevice_GpuBeginShaderConstantF4
//{
//    mangled_ppc("D3DDevice_GpuBeginShaderConstantF4");
//};

//D3DDevice_GpuLoadShaderConstantF4
//{
//    mangled_ppc("D3DDevice_GpuLoadShaderConstantF4");
//};

//D3DDevice_GpuLoadShaderConstantF4Pointer
//{
//    mangled_ppc("D3DDevice_GpuLoadShaderConstantF4Pointer");
//};

