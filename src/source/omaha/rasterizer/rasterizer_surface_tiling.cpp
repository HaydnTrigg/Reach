/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// __vmx@00000000000000000000000000000000; // "__vmx@00000000000000000000000000000000"
// bool g_force_buffer_2_frames; // "?g_force_buffer_2_frames@@3_NA"
// bool g_old_buffer_2_frames_setting; // "?g_old_buffer_2_frames_setting@@3_NA"

// public: static struct c_surface_tiling::s_settings const * c_surface_tiling::get_settings(enum e_screen_resolution, enum c_surface_tiling::e_configuration);
// public: static void c_surface_tiling::update_tiling_configuration(void);
// public: static bool c_surface_tiling::get_is_tiling_enabled(void);
// public: static long c_surface_tiling::get_tiling_rect_count(void);
// public: static union int32_point4d const * c_surface_tiling::get_tiling_rects(void);
// public: static struct c_surface_tiling::s_settings const * c_surface_tiling::get_current_settings(void);
// public: static void c_surface_tiling::begin_tiling(void);
// public: static void c_surface_tiling::end_tiling(void);
// public: static void c_surface_tiling::refresh_tiling_render_targets(void);
// public: long D3DDevice::GetRenderTarget(unsigned long, struct D3DSurface **);
// public: long D3DDevice::GetDepthStencilSurface(struct D3DSurface **);
// public: long D3DDevice::SetPredication(unsigned long);
// public: long D3DDevice::BeginTiling(unsigned long, unsigned long, struct _D3DRECT const *, struct __vector4const *, float, unsigned long);
// public: long D3DDevice::EndTiling(unsigned long, struct _D3DRECT const *, struct D3DBaseTexture *, struct __vector4const *, float, unsigned long, struct _D3DRESOLVE_PARAMETERS const *);
// D3DDevice_SetRenderState;
// D3DDevice_SetPixelShaderConstantF;
// D3DTag_ShaderConstantMask;
// D3DTag_SubsetMask;
// D3DDevice_SetPixelShaderConstantF1;
// D3DVECTOR4_SetX;
// D3DVECTOR4_SetY;
// D3DVECTOR4_SetZ;
// D3DVECTOR4_SetW;
// D3DTag_Index;
// D3DTagCollection_Set;
// public: long D3DDevice::SetSurfaces(struct _D3DSURFACES const *, unsigned long);
// public: void D3DDevice::GpuOwnPixelShaderConstantF(unsigned long, unsigned long);
// D3DDevice_GpuOwnPixelShaderConstantF;
// D3DTagCollection_Clear;
// public: void D3DDevice::GpuDisownPixelShaderConstantF(unsigned long, unsigned long);
// D3DDevice_GpuDisownPixelShaderConstantF;
// public: long D3DDevice::GpuBeginPixelShaderConstantF4(unsigned int, struct __vector4**, unsigned long);
// public: void D3DDevice::GpuEndPixelShaderConstantF4(void);
// D3DDevice_GpuEndShaderConstantF4;
// public: unsigned long D3DResource::Release(void);

//public: static struct c_surface_tiling::s_settings const * c_surface_tiling::get_settings(enum e_screen_resolution, enum c_surface_tiling::e_configuration)
//{
//    mangled_ppc("?get_settings@c_surface_tiling@@SAPBUs_settings@1@W4e_screen_resolution@@W4e_configuration@1@@Z");
//};

//public: static void c_surface_tiling::update_tiling_configuration(void)
//{
//    mangled_ppc("?update_tiling_configuration@c_surface_tiling@@SAXXZ");
//};

//public: static bool c_surface_tiling::get_is_tiling_enabled(void)
//{
//    mangled_ppc("?get_is_tiling_enabled@c_surface_tiling@@SA_NXZ");
//};

//public: static long c_surface_tiling::get_tiling_rect_count(void)
//{
//    mangled_ppc("?get_tiling_rect_count@c_surface_tiling@@SAJXZ");
//};

//public: static union int32_point4d const * c_surface_tiling::get_tiling_rects(void)
//{
//    mangled_ppc("?get_tiling_rects@c_surface_tiling@@SAPBTint32_point4d@@XZ");
//};

//public: static struct c_surface_tiling::s_settings const * c_surface_tiling::get_current_settings(void)
//{
//    mangled_ppc("?get_current_settings@c_surface_tiling@@SAPBUs_settings@1@XZ");
//};

//public: static void c_surface_tiling::begin_tiling(void)
//{
//    mangled_ppc("?begin_tiling@c_surface_tiling@@SAXXZ");
//};

//public: static void c_surface_tiling::end_tiling(void)
//{
//    mangled_ppc("?end_tiling@c_surface_tiling@@SAXXZ");
//};

//public: static void c_surface_tiling::refresh_tiling_render_targets(void)
//{
//    mangled_ppc("?refresh_tiling_render_targets@c_surface_tiling@@SAXXZ");
//};

//public: long D3DDevice::GetRenderTarget(unsigned long, struct D3DSurface **)
//{
//    mangled_ppc("?GetRenderTarget@D3DDevice@@QAAJKPAPAUD3DSurface@@@Z");
//};

//public: long D3DDevice::GetDepthStencilSurface(struct D3DSurface **)
//{
//    mangled_ppc("?GetDepthStencilSurface@D3DDevice@@QAAJPAPAUD3DSurface@@@Z");
//};

//public: long D3DDevice::SetPredication(unsigned long)
//{
//    mangled_ppc("?SetPredication@D3DDevice@@QAAJK@Z");
//};

//public: long D3DDevice::BeginTiling(unsigned long, unsigned long, struct _D3DRECT const *, struct __vector4const *, float, unsigned long)
//{
//    mangled_ppc("?BeginTiling@D3DDevice@@QAAJKKPBU_D3DRECT@@PBU__vector4@@MK@Z");
//};

//public: long D3DDevice::EndTiling(unsigned long, struct _D3DRECT const *, struct D3DBaseTexture *, struct __vector4const *, float, unsigned long, struct _D3DRESOLVE_PARAMETERS const *)
//{
//    mangled_ppc("?EndTiling@D3DDevice@@QAAJKPBU_D3DRECT@@PAUD3DBaseTexture@@PBU__vector4@@MKPBU_D3DRESOLVE_PARAMETERS@@@Z");
//};

//D3DDevice_SetRenderState
//{
//    mangled_ppc("D3DDevice_SetRenderState");
//};

//D3DDevice_SetPixelShaderConstantF
//{
//    mangled_ppc("D3DDevice_SetPixelShaderConstantF");
//};

//D3DTag_ShaderConstantMask
//{
//    mangled_ppc("D3DTag_ShaderConstantMask");
//};

//D3DTag_SubsetMask
//{
//    mangled_ppc("D3DTag_SubsetMask");
//};

//D3DDevice_SetPixelShaderConstantF1
//{
//    mangled_ppc("D3DDevice_SetPixelShaderConstantF1");
//};

//D3DVECTOR4_SetX
//{
//    mangled_ppc("D3DVECTOR4_SetX");
//};

//D3DVECTOR4_SetY
//{
//    mangled_ppc("D3DVECTOR4_SetY");
//};

//D3DVECTOR4_SetZ
//{
//    mangled_ppc("D3DVECTOR4_SetZ");
//};

//D3DVECTOR4_SetW
//{
//    mangled_ppc("D3DVECTOR4_SetW");
//};

//D3DTag_Index
//{
//    mangled_ppc("D3DTag_Index");
//};

//D3DTagCollection_Set
//{
//    mangled_ppc("D3DTagCollection_Set");
//};

//public: long D3DDevice::SetSurfaces(struct _D3DSURFACES const *, unsigned long)
//{
//    mangled_ppc("?SetSurfaces@D3DDevice@@QAAJPBU_D3DSURFACES@@K@Z");
//};

//public: void D3DDevice::GpuOwnPixelShaderConstantF(unsigned long, unsigned long)
//{
//    mangled_ppc("?GpuOwnPixelShaderConstantF@D3DDevice@@QAAXKK@Z");
//};

//D3DDevice_GpuOwnPixelShaderConstantF
//{
//    mangled_ppc("D3DDevice_GpuOwnPixelShaderConstantF");
//};

//D3DTagCollection_Clear
//{
//    mangled_ppc("D3DTagCollection_Clear");
//};

//public: void D3DDevice::GpuDisownPixelShaderConstantF(unsigned long, unsigned long)
//{
//    mangled_ppc("?GpuDisownPixelShaderConstantF@D3DDevice@@QAAXKK@Z");
//};

//D3DDevice_GpuDisownPixelShaderConstantF
//{
//    mangled_ppc("D3DDevice_GpuDisownPixelShaderConstantF");
//};

//public: long D3DDevice::GpuBeginPixelShaderConstantF4(unsigned int, struct __vector4**, unsigned long)
//{
//    mangled_ppc("?GpuBeginPixelShaderConstantF4@D3DDevice@@QAAJIPAPAU__vector4@@K@Z");
//};

//public: void D3DDevice::GpuEndPixelShaderConstantF4(void)
//{
//    mangled_ppc("?GpuEndPixelShaderConstantF4@D3DDevice@@QAAXXZ");
//};

//D3DDevice_GpuEndShaderConstantF4
//{
//    mangled_ppc("D3DDevice_GpuEndShaderConstantF4");
//};

//public: unsigned long D3DResource::Release(void)
//{
//    mangled_ppc("?Release@D3DResource@@QAAKXZ");
//};

