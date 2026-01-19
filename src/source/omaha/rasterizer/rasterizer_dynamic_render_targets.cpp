/* ---------- headers */

#include "omaha\rasterizer\rasterizer_dynamic_render_targets.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct D3DSurface *x_global_accumulation_surface; // "?x_global_accumulation_surface@@3PAUD3DSurface@@A"
// struct D3DSurface *x_global_normal_surface; // "?x_global_normal_surface@@3PAUD3DSurface@@A"
// struct D3DSurface *x_global_albedo_surface; // "?x_global_albedo_surface@@3PAUD3DSurface@@A"
// struct D3DSurface *x_global_depth_stencil_surface; // "?x_global_depth_stencil_surface@@3PAUD3DSurface@@A"
// private: static class s_static_array<long, 6> c_dynamic_render_targets::m_used_targets; // "?m_used_targets@c_dynamic_render_targets@@0V?$s_static_array@J$05@@A"
// private: static struct s_data_array *c_dynamic_render_targets::m_targets; // "?m_targets@c_dynamic_render_targets@@0PAUs_data_array@@A"
// private: static long c_dynamic_render_targets::allocated_flags; // "?allocated_flags@c_dynamic_render_targets@@0JA"
// class c_rasterizer_texture_ref x_global_depth_texture; // "?x_global_depth_texture@@3Vc_rasterizer_texture_ref@@A"
// class c_rasterizer_texture_ref x_global_accumulation_texture; // "?x_global_accumulation_texture@@3Vc_rasterizer_texture_ref@@A"
// class c_rasterizer_texture_ref x_global_albedo_texture; // "?x_global_albedo_texture@@3Vc_rasterizer_texture_ref@@A"
// class c_rasterizer_texture_ref x_global_normal_texture; // "?x_global_normal_texture@@3Vc_rasterizer_texture_ref@@A"

// public: static void c_dynamic_render_targets::shell_initialize(void);
// public: static void c_dynamic_render_targets::initialize(void);
// public: static void c_dynamic_render_targets::dispose(void);
// public: static void c_dynamic_render_targets::shell_dispose(void);
// public: static void c_dynamic_render_targets::idle(void);
// public: static long c_dynamic_render_targets::allocate_target(enum e_render_target_type, long, long, long, long, char const *);
// public: static bool c_dynamic_render_targets::target_allocated(enum e_render_target_type);
// public: static long c_dynamic_render_targets::get_target_index_from_type(enum e_render_target_type);
// public: static struct s_dynamic_render_target * c_dynamic_render_targets::get_target_from_target_type(enum e_render_target_type);
// public: static struct s_dynamic_render_target * c_dynamic_render_targets::get_target(long);
// public: static void c_dynamic_render_targets::allocate_global_temporary_buffers(void);
// public: void s_static_array<long, 6>::set_all(long const &);
// public: long & s_static_array<long, 6>::operator[]<enum e_render_target_type>(enum e_render_target_type);
// public: long & s_static_array<long, 6>::operator[]<long>(long);
// public: static bool s_static_array<long, 6>::valid<enum e_render_target_type>(enum e_render_target_type);
// public: static bool s_static_array<long, 6>::valid<long>(long);
// float ceil(float);
// ceilf;

//public: static void c_dynamic_render_targets::shell_initialize(void)
//{
//    mangled_ppc("?shell_initialize@c_dynamic_render_targets@@SAXXZ");
//};

//public: static void c_dynamic_render_targets::initialize(void)
//{
//    mangled_ppc("?initialize@c_dynamic_render_targets@@SAXXZ");
//};

//public: static void c_dynamic_render_targets::dispose(void)
//{
//    mangled_ppc("?dispose@c_dynamic_render_targets@@SAXXZ");
//};

//public: static void c_dynamic_render_targets::shell_dispose(void)
//{
//    mangled_ppc("?shell_dispose@c_dynamic_render_targets@@SAXXZ");
//};

//public: static void c_dynamic_render_targets::idle(void)
//{
//    mangled_ppc("?idle@c_dynamic_render_targets@@SAXXZ");
//};

//public: static long c_dynamic_render_targets::allocate_target(enum e_render_target_type, long, long, long, long, char const *)
//{
//    mangled_ppc("?allocate_target@c_dynamic_render_targets@@SAJW4e_render_target_type@@JJJJPBD@Z");
//};

//public: static bool c_dynamic_render_targets::target_allocated(enum e_render_target_type)
//{
//    mangled_ppc("?target_allocated@c_dynamic_render_targets@@SA_NW4e_render_target_type@@@Z");
//};

//public: static long c_dynamic_render_targets::get_target_index_from_type(enum e_render_target_type)
//{
//    mangled_ppc("?get_target_index_from_type@c_dynamic_render_targets@@SAJW4e_render_target_type@@@Z");
//};

//public: static struct s_dynamic_render_target * c_dynamic_render_targets::get_target_from_target_type(enum e_render_target_type)
//{
//    mangled_ppc("?get_target_from_target_type@c_dynamic_render_targets@@SAPAUs_dynamic_render_target@@W4e_render_target_type@@@Z");
//};

//public: static struct s_dynamic_render_target * c_dynamic_render_targets::get_target(long)
//{
//    mangled_ppc("?get_target@c_dynamic_render_targets@@SAPAUs_dynamic_render_target@@J@Z");
//};

//public: static void c_dynamic_render_targets::allocate_global_temporary_buffers(void)
//{
//    mangled_ppc("?allocate_global_temporary_buffers@c_dynamic_render_targets@@SAXXZ");
//};

//public: void s_static_array<long, 6>::set_all(long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@J$05@@QAAXABJ@Z");
//};

//public: long & s_static_array<long, 6>::operator[]<enum e_render_target_type>(enum e_render_target_type)
//{
//    mangled_ppc("??$?AW4e_render_target_type@@@?$s_static_array@J$05@@QAAAAJW4e_render_target_type@@@Z");
//};

//public: long & s_static_array<long, 6>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$05@@QAAAAJJ@Z");
//};

//public: static bool s_static_array<long, 6>::valid<enum e_render_target_type>(enum e_render_target_type)
//{
//    mangled_ppc("??$valid@W4e_render_target_type@@@?$s_static_array@J$05@@SA_NW4e_render_target_type@@@Z");
//};

//public: static bool s_static_array<long, 6>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@J$05@@SA_NJ@Z");
//};

//float ceil(float)
//{
//    mangled_ppc("?ceil@@YAMM@Z");
//};

//ceilf
//{
//    mangled_ppc("ceilf");
//};

