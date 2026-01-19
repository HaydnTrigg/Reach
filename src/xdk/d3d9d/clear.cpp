/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct __vector4const `struct __vector4 __cdecl XMLoadColor(struct _XMCOLOR const *)'::`2'::UnpackOffset; // "?UnpackOffset@?1??XMLoadColor@@YA?AU__vector4@@PBU_XMCOLOR@@@Z@4U2@B"
// struct __vector4const `struct __vector4 __cdecl XMLoadColor(struct _XMCOLOR const *)'::`2'::UnpackScale; // "?UnpackScale@?1??XMLoadColor@@YA?AU__vector4@@PBU_XMCOLOR@@@Z@4U2@B"
// D3D__EnableFastClears; // "D3D__EnableFastClears"

// long D3D::NextMultipleSlow<long, int>(long, int);
// long D3D::PreviousMultipleSlow<long, int>(long, int);
// GPU_CONVERT_CPU_TO_GPU_ADDRESS;
// D3DTag_Index;
// D3DTag_SubsetMask;
// D3DTag_Mask;
// D3DTagCollection_Set;
// D3DTagCollection_Clear;
// D3DTagCollection_TestAny;
// int D3D::Is32BitEdramFormat(unsigned long);
// public: int D3D::CDevice::IsLazy(enum D3D::LazyState);
// public: unsigned __int64 D3D::CDevice::GetLazy(enum D3D::LazyState);
// public: void D3D::CDevice::ClearLazyRange(enum D3D::LazyState);
// unsigned long D3D::CalculateAaConfig(union GPU_SURFACEINFO);
// void D3D::SetPendingSimpleState(class D3D::CDevice *);
// unsigned long * D3D::SetCommonResolveAndClearState(class D3D::CDevice *, unsigned long *);
// void D3D::DirtyCommonResolveAndClearState(class D3D::CDevice *);
// public: D3D::TimingMarker::TimingMarker(enum _PixDataOpcodesType, enum _PixGroupsType);
// public: D3D::TimingMarker::~TimingMarker(void);
// void D3D::GetEdramTileDimensions(unsigned long, unsigned long *, unsigned long *);
// unsigned long D3D::GetGPUAddress<float volatile>(float volatile *);
// struct __vector4 XMLoadColor(struct _XMCOLOR const *);
// void D3D::ClearRects(class D3D::CDevice *, unsigned long, struct _D3DRECT const *, struct __vector4const *, float, union GPU_SURFACEINFO, union GPU_COLORINFO, unsigned long, unsigned long);
// void D3D::ClearRect(class D3D::CDevice *, long, long, long, long, struct __vector4const *, float, union GPU_SURFACEINFO, union GPU_COLORINFO, unsigned long, unsigned long, unsigned long, unsigned long);
// void D3D::ClearSurface(class D3D::CDevice *, unsigned long, unsigned long, long, long, long, long, struct __vector4const *, float, unsigned long);
// void D3D::ClearF(class D3D::CDevice *, unsigned long, struct _D3DRECT const *, struct __vector4const *, float, unsigned long);
// D3DDevice_ClearF;
// D3DDevice_Clear;

//long D3D::NextMultipleSlow<long, int>(long, int)
//{
//    mangled_ppc("??$NextMultipleSlow@JH@D3D@@YAJJH@Z");
//};

//long D3D::PreviousMultipleSlow<long, int>(long, int)
//{
//    mangled_ppc("??$PreviousMultipleSlow@JH@D3D@@YAJJH@Z");
//};

//GPU_CONVERT_CPU_TO_GPU_ADDRESS
//{
//    mangled_ppc("GPU_CONVERT_CPU_TO_GPU_ADDRESS");
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

//int D3D::Is32BitEdramFormat(unsigned long)
//{
//    mangled_ppc("?Is32BitEdramFormat@D3D@@YAHK@Z");
//};

//public: int D3D::CDevice::IsLazy(enum D3D::LazyState)
//{
//    mangled_ppc("?IsLazy@CDevice@D3D@@QAAHW4LazyState@2@@Z");
//};

//public: unsigned __int64 D3D::CDevice::GetLazy(enum D3D::LazyState)
//{
//    mangled_ppc("?GetLazy@CDevice@D3D@@QAA_KW4LazyState@2@@Z");
//};

//public: void D3D::CDevice::ClearLazyRange(enum D3D::LazyState)
//{
//    mangled_ppc("?ClearLazyRange@CDevice@D3D@@QAAXW4LazyState@2@@Z");
//};

//unsigned long D3D::CalculateAaConfig(union GPU_SURFACEINFO)
//{
//    mangled_ppc("?CalculateAaConfig@D3D@@YAKTGPU_SURFACEINFO@@@Z");
//};

//void D3D::SetPendingSimpleState(class D3D::CDevice *)
//{
//    mangled_ppc("?SetPendingSimpleState@D3D@@YAXPAVCDevice@1@@Z");
//};

//unsigned long * D3D::SetCommonResolveAndClearState(class D3D::CDevice *, unsigned long *)
//{
//    mangled_ppc("?SetCommonResolveAndClearState@D3D@@YAPAKPAVCDevice@1@PAK@Z");
//};

//void D3D::DirtyCommonResolveAndClearState(class D3D::CDevice *)
//{
//    mangled_ppc("?DirtyCommonResolveAndClearState@D3D@@YAXPAVCDevice@1@@Z");
//};

//public: D3D::TimingMarker::TimingMarker(enum _PixDataOpcodesType, enum _PixGroupsType)
//{
//    mangled_ppc("??0TimingMarker@D3D@@QAA@W4_PixDataOpcodesType@@W4_PixGroupsType@@@Z");
//};

//public: D3D::TimingMarker::~TimingMarker(void)
//{
//    mangled_ppc("??1TimingMarker@D3D@@QAA@XZ");
//};

//void D3D::GetEdramTileDimensions(unsigned long, unsigned long *, unsigned long *)
//{
//    mangled_ppc("?GetEdramTileDimensions@D3D@@YAXKPAK0@Z");
//};

//unsigned long D3D::GetGPUAddress<float volatile>(float volatile *)
//{
//    mangled_ppc("??$GetGPUAddress@$$CCM@D3D@@YAKPCM@Z");
//};

//struct __vector4 XMLoadColor(struct _XMCOLOR const *)
//{
//    mangled_ppc("?XMLoadColor@@YA?AU__vector4@@PBU_XMCOLOR@@@Z");
//};

//void D3D::ClearRects(class D3D::CDevice *, unsigned long, struct _D3DRECT const *, struct __vector4const *, float, union GPU_SURFACEINFO, union GPU_COLORINFO, unsigned long, unsigned long)
//{
//    mangled_ppc("?ClearRects@D3D@@YAXPAVCDevice@1@KPBU_D3DRECT@@PBU__vector4@@MTGPU_SURFACEINFO@@TGPU_COLORINFO@@KK@Z");
//};

//void D3D::ClearRect(class D3D::CDevice *, long, long, long, long, struct __vector4const *, float, union GPU_SURFACEINFO, union GPU_COLORINFO, unsigned long, unsigned long, unsigned long, unsigned long)
//{
//    mangled_ppc("?ClearRect@D3D@@YAXPAVCDevice@1@JJJJPBU__vector4@@MTGPU_SURFACEINFO@@TGPU_COLORINFO@@KKKK@Z");
//};

//void D3D::ClearSurface(class D3D::CDevice *, unsigned long, unsigned long, long, long, long, long, struct __vector4const *, float, unsigned long)
//{
//    mangled_ppc("?ClearSurface@D3D@@YAXPAVCDevice@1@KKJJJJPBU__vector4@@MK@Z");
//};

//void D3D::ClearF(class D3D::CDevice *, unsigned long, struct _D3DRECT const *, struct __vector4const *, float, unsigned long)
//{
//    mangled_ppc("?ClearF@D3D@@YAXPAVCDevice@1@KPBU_D3DRECT@@PBU__vector4@@MK@Z");
//};

//D3DDevice_ClearF
//{
//    mangled_ppc("D3DDevice_ClearF");
//};

//D3DDevice_Clear
//{
//    mangled_ppc("D3DDevice_Clear");
//};

