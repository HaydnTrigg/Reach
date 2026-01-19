/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum c_surface::e_render_mode c_surface::g_LDR_render_mode; // "?g_LDR_render_mode@c_surface@@2W4e_render_mode@1@A"
// public: static enum c_surface::e_render_mode c_surface::g_HDR_render_mode; // "?g_HDR_render_mode@c_surface@@2W4e_render_mode@1@A"
// public: static enum e_screen_resolution c_surface::g_screen_resolution; // "?g_screen_resolution@c_surface@@2W4e_screen_resolution@@A"
// public: static enum c_surface_tiling::e_configuration c_surface_tiling::g_configuration; // "?g_configuration@c_surface_tiling@@2W4e_configuration@1@A"
// public: static enum e_splitscreen_res c_surface::g_current_splitscreen_res; // "?g_current_splitscreen_res@c_surface@@2W4e_splitscreen_res@@A"
// public: static bool c_surface_tiling::g_tiling_force_4x_msaa; // "?g_tiling_force_4x_msaa@c_surface_tiling@@2_NA"
// public: static bool c_surface_tiling::g_tiling_force_tiling; // "?g_tiling_force_tiling@c_surface_tiling@@2_NA"
// public: static bool c_surface_tiling::g_use_alpha_to_coverage; // "?g_use_alpha_to_coverage@c_surface_tiling@@2_NA"
// public: static long c_surface_tiling::g_tiling_resolve_fragment_index; // "?g_tiling_resolve_fragment_index@c_surface_tiling@@2JA"
// public: static union real_point2d c_surface_tiling::g_tiling_viewport_offset; // "?g_tiling_viewport_offset@c_surface_tiling@@2Treal_point2d@@A"
// private: static enum e_surface c_surface::g_depth_stencil_surface; // "?g_depth_stencil_surface@c_surface@@0W4e_surface@@A"
// private: static enum e_surface *c_surface::g_color_surfaces; // "?g_color_surfaces@c_surface@@0PAW4e_surface@@A"
// public: static enum e_screen_resolution c_surface::g_screen_resolution_debug; // "?g_screen_resolution_debug@c_surface@@2W4e_screen_resolution@@A"
// public: static enum c_surface_tiling::e_configuration c_surface_tiling::g_configuration_threadsafe; // "?g_configuration_threadsafe@c_surface_tiling@@2W4e_configuration@1@A"

// public: static bool c_surface::initialize_after_device_creation_or_reset(void);
// public: static void c_surface::set_depth_stencil(enum e_surface);
// public: struct D3DSurface * c_render_surface::get_d3d_surface(void);
// public: static long Direct3D::CheckDepthStencilMatch(unsigned int, enum _D3DDEVTYPE, enum _D3DFORMAT, enum _D3DFORMAT, enum _D3DFORMAT);
// public: static void c_surface::set_depth_stencil(struct D3DSurface *);
// public: static void c_surface::set(long, enum e_surface);
// public: void c_render_surface::set_debug_state_rendering(void) const;
// public: static void c_surface::set_all(enum e_surface, enum e_surface, enum e_surface, enum e_surface, enum e_surface);
// public: static void c_surface::set(long, struct D3DSurface *, bool);
// public: static void c_surface::set_resolve_surface(long, enum e_surface);
// public: struct D3DSurface * c_render_surface::get_d3d_resolve_surface(void);
// public: static float c_surface::get_alpha_multiplier(long);
// public: static enum e_surface c_surface::get(long);
// public: static void c_surface::resolve(class c_rasterizer_texture_ref, long, union short_rectangle2d const *, long, long);
// public: static void c_surface::resolve_srgb_format_HACK(class c_rasterizer_texture_ref, struct D3DSurface *, long, union short_rectangle2d const *, long, long);
// public: static void c_surface::resolve_msaa_override(enum e_surface, long, unsigned long);
// public: struct D3DTexture * c_render_surface::get_d3d_resolve_texture(void);
// public: void c_render_surface::set_debug_state_resolved(void) const;
// public: static void c_surface::resolve(enum e_surface, long, union short_rectangle2d const *, long, long);
// public: static void c_surface::set_surface_as_texture(long, enum e_surface);
// public: static void c_surface::set_possibly_stale_surface_as_texture(long, enum e_surface);
// public: static void c_surface::set_surface_as_vertex_texture(long, enum e_surface);
// public: static void c_surface::set_surface_as_texture_with_format(long, enum e_surface, long);
// public: static void c_surface::debug_save_surface(enum e_surface, char const *);
// public: static void c_surface::debug_save_surface_as_format(enum e_surface, long, char const *);
// public: static void c_surface::debug_save_texture(class c_rasterizer_texture_ref, char const *);
// public: static enum e_surface c_surface::get_surface_accum_LDR(bool);
// public: static class c_rasterizer_texture_ref c_surface::get_surface_texture(enum e_surface);
// public: c_rasterizer_texture_ref::c_rasterizer_texture_ref(class c_rasterizer_texture_ref const &);
// public: class c_rasterizer_texture_ref c_render_surface::get_surface_texture_ref(void);
// public: static bool c_surface::surface_valid(enum e_surface);
// public: bool c_render_surface::debug_state_resolved(void) const;
// public: static void c_surface::invalidate_all_surfaces(void);
// public: static long c_surface::get_surface_width(enum e_surface);
// public: static long c_surface::get_surface_height(enum e_surface);
// public: static long c_surface::get_surface_mipmap_count(enum e_surface);
// public: static long c_surface::get_surface_format(enum e_surface);
// public: static long c_surface::get_surface_type(enum e_surface);
// public: static bool c_surface::lock_surface(enum e_surface, unsigned long, char **, long *);
// public: static void c_surface::unlock_surface(enum e_surface);
// public: static bool c_surface::lock_surface_as_texture(enum e_surface, unsigned long, char **, long *);
// public: static void c_surface::unlock_surface_as_texture(enum e_surface);
// public: static void c_surface::resolve_and_clear(enum e_surface, long, union vector4d *);
// public: static void c_surface::resolve_tiled(enum e_surface, long, bool, bool);
// public: long D3DDevice::SetRenderTarget(unsigned long, struct D3DSurface *);
// public: long D3DDevice::SetDepthStencilSurface(struct D3DSurface *);
// public: long D3DDevice::SetTexture(unsigned long, struct D3DBaseTexture *);
// D3DDevice_SetTexture_Inline;
// public: long D3DDevice::Resolve(unsigned long, struct _D3DRECT const *, struct D3DBaseTexture *, struct _D3DPOINT const *, unsigned int, unsigned int, struct __vector4const *, float, unsigned long, struct _D3DRESOLVE_PARAMETERS const *);
// public: unsigned long D3DBaseTexture::GetLevelCount(void);
// public: long D3DSurface::GetDesc(struct _D3DSURFACE_DESC *);
// public: long D3DSurface::LockRect(struct _D3DLOCKED_RECT *, struct tagRECT const *, unsigned long);
// public: long D3DSurface::UnlockRect(void);

//public: static bool c_surface::initialize_after_device_creation_or_reset(void)
//{
//    mangled_ppc("?initialize_after_device_creation_or_reset@c_surface@@SA_NXZ");
//};

//public: static void c_surface::set_depth_stencil(enum e_surface)
//{
//    mangled_ppc("?set_depth_stencil@c_surface@@SAXW4e_surface@@@Z");
//};

//public: struct D3DSurface * c_render_surface::get_d3d_surface(void)
//{
//    mangled_ppc("?get_d3d_surface@c_render_surface@@QAAPAUD3DSurface@@XZ");
//};

//public: static long Direct3D::CheckDepthStencilMatch(unsigned int, enum _D3DDEVTYPE, enum _D3DFORMAT, enum _D3DFORMAT, enum _D3DFORMAT)
//{
//    mangled_ppc("?CheckDepthStencilMatch@Direct3D@@SAJIW4_D3DDEVTYPE@@W4_D3DFORMAT@@11@Z");
//};

//public: static void c_surface::set_depth_stencil(struct D3DSurface *)
//{
//    mangled_ppc("?set_depth_stencil@c_surface@@SAXPAUD3DSurface@@@Z");
//};

//public: static void c_surface::set(long, enum e_surface)
//{
//    mangled_ppc("?set@c_surface@@SAXJW4e_surface@@@Z");
//};

//public: void c_render_surface::set_debug_state_rendering(void) const
//{
//    mangled_ppc("?set_debug_state_rendering@c_render_surface@@QBAXXZ");
//};

//public: static void c_surface::set_all(enum e_surface, enum e_surface, enum e_surface, enum e_surface, enum e_surface)
//{
//    mangled_ppc("?set_all@c_surface@@SAXW4e_surface@@0000@Z");
//};

//public: static void c_surface::set(long, struct D3DSurface *, bool)
//{
//    mangled_ppc("?set@c_surface@@SAXJPAUD3DSurface@@_N@Z");
//};

//public: static void c_surface::set_resolve_surface(long, enum e_surface)
//{
//    mangled_ppc("?set_resolve_surface@c_surface@@SAXJW4e_surface@@@Z");
//};

//public: struct D3DSurface * c_render_surface::get_d3d_resolve_surface(void)
//{
//    mangled_ppc("?get_d3d_resolve_surface@c_render_surface@@QAAPAUD3DSurface@@XZ");
//};

//public: static float c_surface::get_alpha_multiplier(long)
//{
//    mangled_ppc("?get_alpha_multiplier@c_surface@@SAMJ@Z");
//};

//public: static enum e_surface c_surface::get(long)
//{
//    mangled_ppc("?get@c_surface@@SA?AW4e_surface@@J@Z");
//};

//public: static void c_surface::resolve(class c_rasterizer_texture_ref, long, union short_rectangle2d const *, long, long)
//{
//    mangled_ppc("?resolve@c_surface@@SAXVc_rasterizer_texture_ref@@JPBTshort_rectangle2d@@JJ@Z");
//};

//public: static void c_surface::resolve_srgb_format_HACK(class c_rasterizer_texture_ref, struct D3DSurface *, long, union short_rectangle2d const *, long, long)
//{
//    mangled_ppc("?resolve_srgb_format_HACK@c_surface@@SAXVc_rasterizer_texture_ref@@PAUD3DSurface@@JPBTshort_rectangle2d@@JJ@Z");
//};

//public: static void c_surface::resolve_msaa_override(enum e_surface, long, unsigned long)
//{
//    mangled_ppc("?resolve_msaa_override@c_surface@@SAXW4e_surface@@JK@Z");
//};

//public: struct D3DTexture * c_render_surface::get_d3d_resolve_texture(void)
//{
//    mangled_ppc("?get_d3d_resolve_texture@c_render_surface@@QAAPAUD3DTexture@@XZ");
//};

//public: void c_render_surface::set_debug_state_resolved(void) const
//{
//    mangled_ppc("?set_debug_state_resolved@c_render_surface@@QBAXXZ");
//};

//public: static void c_surface::resolve(enum e_surface, long, union short_rectangle2d const *, long, long)
//{
//    mangled_ppc("?resolve@c_surface@@SAXW4e_surface@@JPBTshort_rectangle2d@@JJ@Z");
//};

//public: static void c_surface::set_surface_as_texture(long, enum e_surface)
//{
//    mangled_ppc("?set_surface_as_texture@c_surface@@SAXJW4e_surface@@@Z");
//};

//public: static void c_surface::set_possibly_stale_surface_as_texture(long, enum e_surface)
//{
//    mangled_ppc("?set_possibly_stale_surface_as_texture@c_surface@@SAXJW4e_surface@@@Z");
//};

//public: static void c_surface::set_surface_as_vertex_texture(long, enum e_surface)
//{
//    mangled_ppc("?set_surface_as_vertex_texture@c_surface@@SAXJW4e_surface@@@Z");
//};

//public: static void c_surface::set_surface_as_texture_with_format(long, enum e_surface, long)
//{
//    mangled_ppc("?set_surface_as_texture_with_format@c_surface@@SAXJW4e_surface@@J@Z");
//};

//public: static void c_surface::debug_save_surface(enum e_surface, char const *)
//{
//    mangled_ppc("?debug_save_surface@c_surface@@SAXW4e_surface@@PBD@Z");
//};

//public: static void c_surface::debug_save_surface_as_format(enum e_surface, long, char const *)
//{
//    mangled_ppc("?debug_save_surface_as_format@c_surface@@SAXW4e_surface@@JPBD@Z");
//};

//public: static void c_surface::debug_save_texture(class c_rasterizer_texture_ref, char const *)
//{
//    mangled_ppc("?debug_save_texture@c_surface@@SAXVc_rasterizer_texture_ref@@PBD@Z");
//};

//public: static enum e_surface c_surface::get_surface_accum_LDR(bool)
//{
//    mangled_ppc("?get_surface_accum_LDR@c_surface@@SA?AW4e_surface@@_N@Z");
//};

//public: static class c_rasterizer_texture_ref c_surface::get_surface_texture(enum e_surface)
//{
//    mangled_ppc("?get_surface_texture@c_surface@@SA?AVc_rasterizer_texture_ref@@W4e_surface@@@Z");
//};

//public: c_rasterizer_texture_ref::c_rasterizer_texture_ref(class c_rasterizer_texture_ref const &)
//{
//    mangled_ppc("??0c_rasterizer_texture_ref@@QAA@ABV0@@Z");
//};

//public: class c_rasterizer_texture_ref c_render_surface::get_surface_texture_ref(void)
//{
//    mangled_ppc("?get_surface_texture_ref@c_render_surface@@QAA?AVc_rasterizer_texture_ref@@XZ");
//};

//public: static bool c_surface::surface_valid(enum e_surface)
//{
//    mangled_ppc("?surface_valid@c_surface@@SA_NW4e_surface@@@Z");
//};

//public: bool c_render_surface::debug_state_resolved(void) const
//{
//    mangled_ppc("?debug_state_resolved@c_render_surface@@QBA_NXZ");
//};

//public: static void c_surface::invalidate_all_surfaces(void)
//{
//    mangled_ppc("?invalidate_all_surfaces@c_surface@@SAXXZ");
//};

//public: static long c_surface::get_surface_width(enum e_surface)
//{
//    mangled_ppc("?get_surface_width@c_surface@@SAJW4e_surface@@@Z");
//};

//public: static long c_surface::get_surface_height(enum e_surface)
//{
//    mangled_ppc("?get_surface_height@c_surface@@SAJW4e_surface@@@Z");
//};

//public: static long c_surface::get_surface_mipmap_count(enum e_surface)
//{
//    mangled_ppc("?get_surface_mipmap_count@c_surface@@SAJW4e_surface@@@Z");
//};

//public: static long c_surface::get_surface_format(enum e_surface)
//{
//    mangled_ppc("?get_surface_format@c_surface@@SAJW4e_surface@@@Z");
//};

//public: static long c_surface::get_surface_type(enum e_surface)
//{
//    mangled_ppc("?get_surface_type@c_surface@@SAJW4e_surface@@@Z");
//};

//public: static bool c_surface::lock_surface(enum e_surface, unsigned long, char **, long *)
//{
//    mangled_ppc("?lock_surface@c_surface@@SA_NW4e_surface@@KPAPADPAJ@Z");
//};

//public: static void c_surface::unlock_surface(enum e_surface)
//{
//    mangled_ppc("?unlock_surface@c_surface@@SAXW4e_surface@@@Z");
//};

//public: static bool c_surface::lock_surface_as_texture(enum e_surface, unsigned long, char **, long *)
//{
//    mangled_ppc("?lock_surface_as_texture@c_surface@@SA_NW4e_surface@@KPAPADPAJ@Z");
//};

//public: static void c_surface::unlock_surface_as_texture(enum e_surface)
//{
//    mangled_ppc("?unlock_surface_as_texture@c_surface@@SAXW4e_surface@@@Z");
//};

//public: static void c_surface::resolve_and_clear(enum e_surface, long, union vector4d *)
//{
//    mangled_ppc("?resolve_and_clear@c_surface@@SAXW4e_surface@@JPATvector4d@@@Z");
//};

//public: static void c_surface::resolve_tiled(enum e_surface, long, bool, bool)
//{
//    mangled_ppc("?resolve_tiled@c_surface@@SAXW4e_surface@@J_N1@Z");
//};

//public: long D3DDevice::SetRenderTarget(unsigned long, struct D3DSurface *)
//{
//    mangled_ppc("?SetRenderTarget@D3DDevice@@QAAJKPAUD3DSurface@@@Z");
//};

//public: long D3DDevice::SetDepthStencilSurface(struct D3DSurface *)
//{
//    mangled_ppc("?SetDepthStencilSurface@D3DDevice@@QAAJPAUD3DSurface@@@Z");
//};

//public: long D3DDevice::SetTexture(unsigned long, struct D3DBaseTexture *)
//{
//    mangled_ppc("?SetTexture@D3DDevice@@QAAJKPAUD3DBaseTexture@@@Z");
//};

//D3DDevice_SetTexture_Inline
//{
//    mangled_ppc("D3DDevice_SetTexture_Inline");
//};

//public: long D3DDevice::Resolve(unsigned long, struct _D3DRECT const *, struct D3DBaseTexture *, struct _D3DPOINT const *, unsigned int, unsigned int, struct __vector4const *, float, unsigned long, struct _D3DRESOLVE_PARAMETERS const *)
//{
//    mangled_ppc("?Resolve@D3DDevice@@QAAJKPBU_D3DRECT@@PAUD3DBaseTexture@@PBU_D3DPOINT@@IIPBU__vector4@@MKPBU_D3DRESOLVE_PARAMETERS@@@Z");
//};

//public: unsigned long D3DBaseTexture::GetLevelCount(void)
//{
//    mangled_ppc("?GetLevelCount@D3DBaseTexture@@QAAKXZ");
//};

//public: long D3DSurface::GetDesc(struct _D3DSURFACE_DESC *)
//{
//    mangled_ppc("?GetDesc@D3DSurface@@QAAJPAU_D3DSURFACE_DESC@@@Z");
//};

//public: long D3DSurface::LockRect(struct _D3DLOCKED_RECT *, struct tagRECT const *, unsigned long)
//{
//    mangled_ppc("?LockRect@D3DSurface@@QAAJPAU_D3DLOCKED_RECT@@PBUtagRECT@@K@Z");
//};

//public: long D3DSurface::UnlockRect(void)
//{
//    mangled_ppc("?UnlockRect@D3DSurface@@QAAJXZ");
//};

