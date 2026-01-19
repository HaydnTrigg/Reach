/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct D3D::MajorMode1PrimRegs const *const const D3D::MM1_PrimRegs; // "?MM1_PrimRegs@D3D@@3QBUMajorMode1PrimRegs@1@B"
// struct D3D::MajorMode1PrimRegs const *const const D3D::MM1_PrimRegsAdaptive; // "?MM1_PrimRegsAdaptive@D3D@@3QBUMajorMode1PrimRegs@1@B"
// struct D3D::MajorMode1InputRegs const *const const D3D::MM1_TessInputRegs16; // "?MM1_TessInputRegs16@D3D@@3QBUMajorMode1InputRegs@1@B"
// struct D3D::MajorMode1InputRegs const *const const D3D::MM1_TessInputRegs32; // "?MM1_TessInputRegs32@D3D@@3QBUMajorMode1InputRegs@1@B"
// struct D3D::MajorMode1InputRegs const *const const D3D::MM1_TessInputRegsAdaptive; // "?MM1_TessInputRegsAdaptive@D3D@@3QBUMajorMode1InputRegs@1@B"
// union GPU_GROUPVECTFMTCONTROL const D3D::MM1_GroupVectFmtControlIndex16; // "?MM1_GroupVectFmtControlIndex16@D3D@@3TGPU_GROUPVECTFMTCONTROL@@B"
// union GPU_GROUPVECTFMTCONTROL const D3D::MM1_GroupVectFmtControlIndex32; // "?MM1_GroupVectFmtControlIndex32@D3D@@3TGPU_GROUPVECTFMTCONTROL@@B"
// union GPU_GROUPVECTFMTCONTROL const D3D::MM1_GroupVectFmtControlAutoPrim; // "?MM1_GroupVectFmtControlAutoPrim@D3D@@3TGPU_GROUPVECTFMTCONTROL@@B"
// union GPU_GROUPVECTFMTCONTROL const D3D::MM1_GroupVectFmtControlTessFactors; // "?MM1_GroupVectFmtControlTessFactors@D3D@@3TGPU_GROUPVECTFMTCONTROL@@B"

// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// D3DPtrToDWORD;
// D3DTag_Index;
// D3DTag_SubsetMask;
// D3DTagCollection_Set;
// D3DTagCollection_Clear;
// D3DTagCollection_TestAny;
// int IsGpuSmallOpcode(enum _PixSmallOpcodesType);
// unsigned __int64 D3D::GetLazyBits(unsigned __int64, enum D3D::LazyState);
// void D3D::SetPendingState(class D3D::CDevice *, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, enum D3D::LazyPrim);
// void D3D::SetPendingState(class D3D::CDevice *, enum D3D::LazyPrim);
// void D3D::PixCpuAddSmall(enum _PixSmallOpcodesType);
// public: D3D::GPUTimingMarkerSmall::GPUTimingMarkerSmall(enum _PixSmallOpcodesType, class D3D::CDevice *);
// public: D3D::GPUTimingMarkerSmall::~GPUTimingMarkerSmall(void);
// D3DDevice_EndVertices;
// D3DDevice_EndIndexedVertices;
// D3DDevice_BeginVertices;
// D3DDevice_DrawVerticesUP;
// D3DDevice_BeginIndexedVertices;
// D3DDevice_DrawIndexedVerticesUP;
// D3DDevice_DrawVertices;
// D3DDevice_DrawIndexedVertices;
// D3DDevice_DrawTessellatedVertices;
// D3DDevice_DrawIndexedTessellatedVertices;
// __FusionFlushVertexCache;

//GPU_CONVERT_CPU_TO_GPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_GPU_ADDRESS");
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

//D3DTagCollection_Clear
//{
//    mangled_ppc("D3DTagCollection_Clear");
//};

//D3DTagCollection_TestAny
//{
//    mangled_ppc("D3DTagCollection_TestAny");
//};

//int IsGpuSmallOpcode(enum _PixSmallOpcodesType)
//{
//    mangled_ppc("?IsGpuSmallOpcode@@YAHW4_PixSmallOpcodesType@@@Z");
//};

//unsigned __int64 D3D::GetLazyBits(unsigned __int64, enum D3D::LazyState)
//{
//    mangled_ppc("?GetLazyBits@D3D@@YA_K_KW4LazyState@1@@Z");
//};

//void D3D::SetPendingState(class D3D::CDevice *, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, enum D3D::LazyPrim)
//{
//    mangled_ppc("?SetPendingState@D3D@@YAXPAVCDevice@1@_K1111W4LazyPrim@1@@Z");
//};

//void D3D::SetPendingState(class D3D::CDevice *, enum D3D::LazyPrim)
//{
//    mangled_ppc("?SetPendingState@D3D@@YAXPAVCDevice@1@W4LazyPrim@1@@Z");
//};

//void D3D::PixCpuAddSmall(enum _PixSmallOpcodesType)
//{
//    mangled_ppc("?PixCpuAddSmall@D3D@@YAXW4_PixSmallOpcodesType@@@Z");
//};

//public: D3D::GPUTimingMarkerSmall::GPUTimingMarkerSmall(enum _PixSmallOpcodesType, class D3D::CDevice *)
//{
//    mangled_ppc("??0GPUTimingMarkerSmall@D3D@@QAA@W4_PixSmallOpcodesType@@PAVCDevice@1@@Z");
//};

//public: D3D::GPUTimingMarkerSmall::~GPUTimingMarkerSmall(void)
//{
//    mangled_ppc("??1GPUTimingMarkerSmall@D3D@@QAA@XZ");
//};

//D3DDevice_EndVertices
//{
//    mangled_ppc("D3DDevice_EndVertices");
//};

//D3DDevice_EndIndexedVertices
//{
//    mangled_ppc("D3DDevice_EndIndexedVertices");
//};

//D3DDevice_BeginVertices
//{
//    mangled_ppc("D3DDevice_BeginVertices");
//};

//D3DDevice_DrawVerticesUP
//{
//    mangled_ppc("D3DDevice_DrawVerticesUP");
//};

//D3DDevice_BeginIndexedVertices
//{
//    mangled_ppc("D3DDevice_BeginIndexedVertices");
//};

//D3DDevice_DrawIndexedVerticesUP
//{
//    mangled_ppc("D3DDevice_DrawIndexedVerticesUP");
//};

//D3DDevice_DrawVertices
//{
//    mangled_ppc("D3DDevice_DrawVertices");
//};

//D3DDevice_DrawIndexedVertices
//{
//    mangled_ppc("D3DDevice_DrawIndexedVertices");
//};

//D3DDevice_DrawTessellatedVertices
//{
//    mangled_ppc("D3DDevice_DrawTessellatedVertices");
//};

//D3DDevice_DrawIndexedTessellatedVertices
//{
//    mangled_ppc("D3DDevice_DrawIndexedTessellatedVertices");
//};

//__FusionFlushVertexCache
//{
//    mangled_ppc("__FusionFlushVertexCache");
//};

