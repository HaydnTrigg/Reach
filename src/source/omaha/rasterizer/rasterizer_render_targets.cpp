/* ---------- headers */

#include "omaha\rasterizer\rasterizer_render_targets.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static bool c_rasterizer::g_using_albedo_sampler; // "?g_using_albedo_sampler@c_rasterizer@@0_NA"
// public: static unsigned long *c_render_surface::g_surface_resolved_bitfield; // "?g_surface_resolved_bitfield@c_render_surface@@2PAKA"
// private: static class c_surface_group *c_render_surfaces_interface::m_surface_groups; // "?m_surface_groups@c_render_surfaces_interface@@0PAVc_surface_group@@A"
// private: static bool c_render_surfaces_interface::m_initialized; // "?m_initialized@c_render_surfaces_interface@@0_NA"
// private: static long *c_render_surfaces_interface::m_surface_flags; // "?m_surface_flags@c_render_surfaces_interface@@0PAJA"
// public: static long c_render_surface::g_total_surface_count; // "?g_total_surface_count@c_render_surface@@2JA"
// public: static class c_render_surface *c_render_surface::g_surface_buffer; // "?g_surface_buffer@c_render_surface@@2PAV1@A"

// public: static void c_render_surface::initialize_debug_state(void);
// public: static void c_render_surface::clear_debug_state(void);
// public: class c_render_surface * c_surface_group::get_specialized_surface_ex(enum e_surface, enum e_screen_resolution, enum c_surface_tiling::e_configuration);
// public: static enum e_splitscreen_res c_surface::get_current_splitscreen_res(void);
// public: class c_render_surface * c_surface_group::get_specialized_surface(enum e_surface);
// public: static bool c_surface_tiling::get_is_tiling_bracket_active(void);
// public: long c_surface_group::create(struct s_surface_group_description const &, enum e_surface);
// public: long c_surface_group::create(struct s_surface_group_description const &, enum e_surface, struct D3DSurface *);
// XGNextMultiple;
// public: long c_surface_group::release(void);
// private: static void c_surface_group::create_tiling_surface_desc(struct s_surface_description *, enum e_screen_resolution, enum c_surface_tiling::e_configuration);
// public: void c_render_surface::create_resolve_resources(struct s_surface_description const &);
// public: class c_rasterizer_texture_ref & c_rasterizer_texture_ref::operator=(class c_rasterizer_texture_ref);
// public: long c_render_surface::create(struct s_surface_description const &, struct D3DSurface *, long);
// public: long c_render_surface::create(struct s_surface_description const &, long);
// public: static class c_render_surface * c_render_surfaces_interface::get_surface_default(enum e_surface);
// public: class c_render_surface * c_surface_group::get_default_surface(void);
// unsigned long MAKE_GOOD_SRGB_FMT(unsigned long);
// unsigned long MAKE_GOOD_SRGB_FMT_FAST(unsigned long);
// public: long c_render_surface::release(void);
// public: bool c_render_surface::resolve_surface_mismatch(void) const;
// public: static long c_render_surfaces_interface::initialize_surfaces(void);
// bool xenon_d3d::initialize(void);
// public: static long c_render_surfaces_interface::release_surfaces(void);
// public: static void c_render_surfaces_interface::invalidate_all_surfaces(void);
// public: static void c_rasterizer::wait_for_gpu_idle(void);
// public: static unsigned long c_rasterizer::insert_fence(void);
// public: static bool c_rasterizer::is_fence_pending(unsigned long);
// public: static void c_rasterizer::block_on_fence(unsigned long);
// public: static void c_rasterizer::block_on_last_fence(void);
// public: static bool c_rasterizer::device_supports_render_target_format(long, bool, bool);
// public: static long Direct3D::CheckDeviceFormat(unsigned int, enum _D3DDEVTYPE, enum _D3DFORMAT, unsigned long, enum _D3DRESOURCETYPE, enum _D3DFORMAT);
// float floor(float);
// floorf;
// public: c_render_surface::c_render_surface(void);

//public: static void c_render_surface::initialize_debug_state(void)
//{
//    mangled_ppc("?initialize_debug_state@c_render_surface@@SAXXZ");
//};

//public: static void c_render_surface::clear_debug_state(void)
//{
//    mangled_ppc("?clear_debug_state@c_render_surface@@SAXXZ");
//};

//public: class c_render_surface * c_surface_group::get_specialized_surface_ex(enum e_surface, enum e_screen_resolution, enum c_surface_tiling::e_configuration)
//{
//    mangled_ppc("?get_specialized_surface_ex@c_surface_group@@QAAPAVc_render_surface@@W4e_surface@@W4e_screen_resolution@@W4e_configuration@c_surface_tiling@@@Z");
//};

//public: static enum e_splitscreen_res c_surface::get_current_splitscreen_res(void)
//{
//    mangled_ppc("?get_current_splitscreen_res@c_surface@@SA?AW4e_splitscreen_res@@XZ");
//};

//public: class c_render_surface * c_surface_group::get_specialized_surface(enum e_surface)
//{
//    mangled_ppc("?get_specialized_surface@c_surface_group@@QAAPAVc_render_surface@@W4e_surface@@@Z");
//};

//public: static bool c_surface_tiling::get_is_tiling_bracket_active(void)
//{
//    mangled_ppc("?get_is_tiling_bracket_active@c_surface_tiling@@SA_NXZ");
//};

//public: long c_surface_group::create(struct s_surface_group_description const &, enum e_surface)
//{
//    mangled_ppc("?create@c_surface_group@@QAAJABUs_surface_group_description@@W4e_surface@@@Z");
//};

//public: long c_surface_group::create(struct s_surface_group_description const &, enum e_surface, struct D3DSurface *)
//{
//    mangled_ppc("?create@c_surface_group@@QAAJABUs_surface_group_description@@W4e_surface@@PAUD3DSurface@@@Z");
//};

//XGNextMultiple
//{
//    mangled_ppc("XGNextMultiple");
//};

//public: long c_surface_group::release(void)
//{
//    mangled_ppc("?release@c_surface_group@@QAAJXZ");
//};

//private: static void c_surface_group::create_tiling_surface_desc(struct s_surface_description *, enum e_screen_resolution, enum c_surface_tiling::e_configuration)
//{
//    mangled_ppc("?create_tiling_surface_desc@c_surface_group@@CAXPAUs_surface_description@@W4e_screen_resolution@@W4e_configuration@c_surface_tiling@@@Z");
//};

//public: void c_render_surface::create_resolve_resources(struct s_surface_description const &)
//{
//    mangled_ppc("?create_resolve_resources@c_render_surface@@QAAXABUs_surface_description@@@Z");
//};

//public: class c_rasterizer_texture_ref & c_rasterizer_texture_ref::operator=(class c_rasterizer_texture_ref)
//{
//    mangled_ppc("??4c_rasterizer_texture_ref@@QAAAAV0@V0@@Z");
//};

//public: long c_render_surface::create(struct s_surface_description const &, struct D3DSurface *, long)
//{
//    mangled_ppc("?create@c_render_surface@@QAAJABUs_surface_description@@PAUD3DSurface@@J@Z");
//};

//public: long c_render_surface::create(struct s_surface_description const &, long)
//{
//    mangled_ppc("?create@c_render_surface@@QAAJABUs_surface_description@@J@Z");
//};

//public: static class c_render_surface * c_render_surfaces_interface::get_surface_default(enum e_surface)
//{
//    mangled_ppc("?get_surface_default@c_render_surfaces_interface@@SAPAVc_render_surface@@W4e_surface@@@Z");
//};

//public: class c_render_surface * c_surface_group::get_default_surface(void)
//{
//    mangled_ppc("?get_default_surface@c_surface_group@@QAAPAVc_render_surface@@XZ");
//};

//unsigned long MAKE_GOOD_SRGB_FMT(unsigned long)
//{
//    mangled_ppc("?MAKE_GOOD_SRGB_FMT@@YAKK@Z");
//};

//unsigned long MAKE_GOOD_SRGB_FMT_FAST(unsigned long)
//{
//    mangled_ppc("?MAKE_GOOD_SRGB_FMT_FAST@@YAKK@Z");
//};

//public: long c_render_surface::release(void)
//{
//    mangled_ppc("?release@c_render_surface@@QAAJXZ");
//};

//public: bool c_render_surface::resolve_surface_mismatch(void) const
//{
//    mangled_ppc("?resolve_surface_mismatch@c_render_surface@@QBA_NXZ");
//};

//public: static long c_render_surfaces_interface::initialize_surfaces(void)
//{
//    mangled_ppc("?initialize_surfaces@c_render_surfaces_interface@@SAJXZ");
//};

//bool xenon_d3d::initialize(void)
//{
//    mangled_ppc("?initialize@xenon_d3d@@YA_NXZ");
//};

//public: static long c_render_surfaces_interface::release_surfaces(void)
//{
//    mangled_ppc("?release_surfaces@c_render_surfaces_interface@@SAJXZ");
//};

//public: static void c_render_surfaces_interface::invalidate_all_surfaces(void)
//{
//    mangled_ppc("?invalidate_all_surfaces@c_render_surfaces_interface@@SAXXZ");
//};

//public: static void c_rasterizer::wait_for_gpu_idle(void)
//{
//    mangled_ppc("?wait_for_gpu_idle@c_rasterizer@@SAXXZ");
//};

//public: static unsigned long c_rasterizer::insert_fence(void)
//{
//    mangled_ppc("?insert_fence@c_rasterizer@@SAKXZ");
//};

//public: static bool c_rasterizer::is_fence_pending(unsigned long)
//{
//    mangled_ppc("?is_fence_pending@c_rasterizer@@SA_NK@Z");
//};

//public: static void c_rasterizer::block_on_fence(unsigned long)
//{
//    mangled_ppc("?block_on_fence@c_rasterizer@@SAXK@Z");
//};

//public: static void c_rasterizer::block_on_last_fence(void)
//{
//    mangled_ppc("?block_on_last_fence@c_rasterizer@@SAXXZ");
//};

//public: static bool c_rasterizer::device_supports_render_target_format(long, bool, bool)
//{
//    mangled_ppc("?device_supports_render_target_format@c_rasterizer@@SA_NJ_N0@Z");
//};

//public: static long Direct3D::CheckDeviceFormat(unsigned int, enum _D3DDEVTYPE, enum _D3DFORMAT, unsigned long, enum _D3DRESOURCETYPE, enum _D3DFORMAT)
//{
//    mangled_ppc("?CheckDeviceFormat@Direct3D@@SAJIW4_D3DDEVTYPE@@W4_D3DFORMAT@@KW4_D3DRESOURCETYPE@@1@Z");
//};

//float floor(float)
//{
//    mangled_ppc("?floor@@YAMM@Z");
//};

//floorf
//{
//    mangled_ppc("floorf");
//};

//public: c_render_surface::c_render_surface(void)
//{
//    mangled_ppc("??0c_render_surface@@QAA@XZ");
//};

