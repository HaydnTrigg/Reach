/* ---------- headers */

#include "omaha\rasterizer\dx9\rasterizer_dx9_dynamic_geometry.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float g_screenspace_scale_x; // "?g_screenspace_scale_x@@3MA"
// float g_screenspace_scale_y; // "?g_screenspace_scale_y@@3MA"
// float g_screenspace_pixel_center; // "?g_screenspace_pixel_center@@3MA"
// float g_screenspace_offset_x; // "?g_screenspace_offset_x@@3MA"
// float g_screenspace_offset_y; // "?g_screenspace_offset_y@@3MA"

// public: static void c_rasterizer_dynamic_geometry::draw_dynamic_geometry(void (**)(struct c_rasterizer_dynamic_geometry::s_rasterizer_dynamic_geometry_user_data *), struct c_rasterizer_dynamic_geometry::s_rasterizer_dynamic_geometry_user_data *);
// public: static void * c_rasterizer_dynamic_geometry::allocate_dynamic_buffer(long);
// public: static void c_rasterizer_dynamic_geometry::kickoff_indexed_dynamic_geometry(enum e_primitive_type, unsigned short *, unsigned short, void const *);
// public: static void c_rasterizer_dynamic_geometry::kickoff_dynamic_geometry(enum e_primitive_type, unsigned short, void const *);
// void draw_tesselated_quad(void);
// void build_single_quad(struct rasterizer_vertex_screen *, long, float, float, float, float);
// public: static void c_rasterizer_dynamic_geometry::draw_fullscreen_quad(void);
// public: static void c_rasterizer_dynamic_geometry::draw_fullscreen_quad(int, int);
// public: static void c_rasterizer_dynamic_geometry::draw_fullscreen_quad_msaa(int, int);
// public: static void c_rasterizer_dynamic_geometry::draw_tesselated_fullscreen_quad_GPU(int, int, int, int);
// public: static void c_rasterizer_dynamic_geometry::draw_tesselated_fullscreen_quad_GPU_rect(int, int, int, int);
// public: static void c_rasterizer_dynamic_geometry::draw_fullscreen_quad_with_texture_xform(int, int, union real_rectangle2d const *);
// public: static void c_rasterizer_dynamic_geometry::draw_screen_quad_with_texture_transform(int, int, union real_rectangle2d const *, union real_rectangle2d const *);
// public: static void c_rasterizer_dynamic_geometry::draw_textured_screen_quad(float, float, float, float);
// public: static void c_rasterizer_dynamic_geometry::draw_textured_screen_quad(struct rasterizer_vertex_screen const *, bool);
// public: static void c_rasterizer_dynamic_geometry::draw_textured_screen_triangle_list(struct rasterizer_vertex_screen const *, long);
// public: static void c_rasterizer_dynamic_geometry::draw_textured_screen_quad_list(struct rasterizer_vertex_screen const *, long);
// public: static void c_rasterizer_dynamic_geometry::draw_worldspace_polygon(union real_point3d const *, long);
// public: static void c_rasterizer_dynamic_geometry::draw_worldspace_polygon(struct rasterizer_vertex_world const *, long);
// public: static void c_rasterizer_dynamic_geometry::draw_debug_line(union real_point3d const &, union real_point3d const &, unsigned long, unsigned long);
// bool rasterizer_set_explicit_debug_shader(enum c_rasterizer_globals::e_explicit_shader);
// public: static class c_rasterizer_vertex_shader const * c_rasterizer_vertex_shader::get(long);
// public: static class c_rasterizer_pixel_shader const * c_rasterizer_pixel_shader::get(long);
// public: struct s_tag_reference const * c_rasterizer_globals::get_explicit_vertex_shader_ref(long) const;
// public: struct s_tag_reference const * c_rasterizer_globals::get_explicit_pixel_shader_ref(long) const;
// public: static void c_rasterizer_dynamic_geometry::draw_debug_line_list_explicit(struct rasterizer_vertex_debug const *, long, bool);
// public: static void c_rasterizer_dynamic_geometry::draw_debug_polygon(struct rasterizer_vertex_debug const *, long, enum e_primitive_type);
// public: static void c_rasterizer_dynamic_geometry::draw_debug_polygon2d(struct rasterizer_vertex_debug const *, long, enum e_primitive_type);
// public: static void c_rasterizer_dynamic_geometry::draw_debug_line2d(union real_point3d const &, union real_point3d const &, unsigned long, unsigned long);
// public: static void c_rasterizer_dynamic_geometry::draw_debug_line_list2d_explicit(struct rasterizer_vertex_debug const *, long);
// public: static void c_rasterizer_dynamic_geometry::draw_debug_linestrip2d(union int16_point2d const *, long, unsigned long);
// public: static void c_rasterizer_dynamic_geometry::draw_rigid_world_geometry(struct rasterizer_vertex_transparent const *, long, enum e_alpha_blend_mode, enum e_primitive_type, bool, bool);
// public: static void c_rasterizer_dynamic_geometry::draw_textured_transparent_polygons(struct rasterizer_vertex_transparent const *, long, enum e_alpha_blend_mode, enum e_primitive_type);
// public: static void c_rasterizer_dynamic_geometry::draw_textured_transparent_quad(struct rasterizer_vertex_transparent const *, enum e_alpha_blend_mode);
// void rasterizer_quad_screenspace(union int16_point2d const (&)[4], unsigned long, struct s_tag_reference const *, short, bool);
// public: struct s_tag_reference const * c_rasterizer_globals::get_default_texture_ref(long) const;
// void rasterizer_quad_screenspace_explicit(union int16_point2d const (&)[4], unsigned long, class c_rasterizer_texture_ref, bool, enum e_alpha_blend_mode);
// public: long D3DDevice::DrawPrimitiveUP(enum _D3DPRIMITIVETYPE, unsigned int, void const *, unsigned int);
// public: rasterizer_dynamic_screen_geometry_parameters::rasterizer_dynamic_screen_geometry_parameters(void);
// void rasterizer_psuedo_dynamic_screen_quad_draw(struct rasterizer_dynamic_screen_geometry_parameters const *, struct rasterizer_vertex_screen *);
// public: static void c_rasterizer_dynamic_geometry::normalize_screenspace_vertices(float, float, float, float, struct rasterizer_vertex_screen *, long);
// public: long D3DDevice::SetIndices(struct D3DIndexBuffer *);
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
// void rasterizer_draw_screen_facing_lens_flare(struct rasterizer_vertex_screen const *const, long, long, float, float, float);

//public: static void c_rasterizer_dynamic_geometry::draw_dynamic_geometry(void (**)(struct c_rasterizer_dynamic_geometry::s_rasterizer_dynamic_geometry_user_data *), struct c_rasterizer_dynamic_geometry::s_rasterizer_dynamic_geometry_user_data *)
//{
//    mangled_ppc("?draw_dynamic_geometry@c_rasterizer_dynamic_geometry@@SAXPAP6AXPAUs_rasterizer_dynamic_geometry_user_data@1@@Z0@Z");
//};

//public: static void * c_rasterizer_dynamic_geometry::allocate_dynamic_buffer(long)
//{
//    mangled_ppc("?allocate_dynamic_buffer@c_rasterizer_dynamic_geometry@@SAPAXJ@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::kickoff_indexed_dynamic_geometry(enum e_primitive_type, unsigned short *, unsigned short, void const *)
//{
//    mangled_ppc("?kickoff_indexed_dynamic_geometry@c_rasterizer_dynamic_geometry@@SAXW4e_primitive_type@@PAGGPBX@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::kickoff_dynamic_geometry(enum e_primitive_type, unsigned short, void const *)
//{
//    mangled_ppc("?kickoff_dynamic_geometry@c_rasterizer_dynamic_geometry@@SAXW4e_primitive_type@@GPBX@Z");
//};

//void draw_tesselated_quad(void)
//{
//    mangled_ppc("?draw_tesselated_quad@@YAXXZ");
//};

//void build_single_quad(struct rasterizer_vertex_screen *, long, float, float, float, float)
//{
//    mangled_ppc("?build_single_quad@@YAXPAUrasterizer_vertex_screen@@JMMMM@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_fullscreen_quad(void)
//{
//    mangled_ppc("?draw_fullscreen_quad@c_rasterizer_dynamic_geometry@@SAXXZ");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_fullscreen_quad(int, int)
//{
//    mangled_ppc("?draw_fullscreen_quad@c_rasterizer_dynamic_geometry@@SAXHH@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_fullscreen_quad_msaa(int, int)
//{
//    mangled_ppc("?draw_fullscreen_quad_msaa@c_rasterizer_dynamic_geometry@@SAXHH@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_tesselated_fullscreen_quad_GPU(int, int, int, int)
//{
//    mangled_ppc("?draw_tesselated_fullscreen_quad_GPU@c_rasterizer_dynamic_geometry@@SAXHHHH@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_tesselated_fullscreen_quad_GPU_rect(int, int, int, int)
//{
//    mangled_ppc("?draw_tesselated_fullscreen_quad_GPU_rect@c_rasterizer_dynamic_geometry@@SAXHHHH@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_fullscreen_quad_with_texture_xform(int, int, union real_rectangle2d const *)
//{
//    mangled_ppc("?draw_fullscreen_quad_with_texture_xform@c_rasterizer_dynamic_geometry@@SAXHHPBTreal_rectangle2d@@@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_screen_quad_with_texture_transform(int, int, union real_rectangle2d const *, union real_rectangle2d const *)
//{
//    mangled_ppc("?draw_screen_quad_with_texture_transform@c_rasterizer_dynamic_geometry@@SAXHHPBTreal_rectangle2d@@0@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_textured_screen_quad(float, float, float, float)
//{
//    mangled_ppc("?draw_textured_screen_quad@c_rasterizer_dynamic_geometry@@SAXMMMM@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_textured_screen_quad(struct rasterizer_vertex_screen const *, bool)
//{
//    mangled_ppc("?draw_textured_screen_quad@c_rasterizer_dynamic_geometry@@SAXPBUrasterizer_vertex_screen@@_N@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_textured_screen_triangle_list(struct rasterizer_vertex_screen const *, long)
//{
//    mangled_ppc("?draw_textured_screen_triangle_list@c_rasterizer_dynamic_geometry@@SAXPBUrasterizer_vertex_screen@@J@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_textured_screen_quad_list(struct rasterizer_vertex_screen const *, long)
//{
//    mangled_ppc("?draw_textured_screen_quad_list@c_rasterizer_dynamic_geometry@@SAXPBUrasterizer_vertex_screen@@J@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_worldspace_polygon(union real_point3d const *, long)
//{
//    mangled_ppc("?draw_worldspace_polygon@c_rasterizer_dynamic_geometry@@SAXPBTreal_point3d@@J@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_worldspace_polygon(struct rasterizer_vertex_world const *, long)
//{
//    mangled_ppc("?draw_worldspace_polygon@c_rasterizer_dynamic_geometry@@SAXPBUrasterizer_vertex_world@@J@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_debug_line(union real_point3d const &, union real_point3d const &, unsigned long, unsigned long)
//{
//    mangled_ppc("?draw_debug_line@c_rasterizer_dynamic_geometry@@SAXABTreal_point3d@@0KK@Z");
//};

//bool rasterizer_set_explicit_debug_shader(enum c_rasterizer_globals::e_explicit_shader)
//{
//    mangled_ppc("?rasterizer_set_explicit_debug_shader@@YA_NW4e_explicit_shader@c_rasterizer_globals@@@Z");
//};

//public: static class c_rasterizer_vertex_shader const * c_rasterizer_vertex_shader::get(long)
//{
//    mangled_ppc("?get@c_rasterizer_vertex_shader@@SAPBV1@J@Z");
//};

//public: static class c_rasterizer_pixel_shader const * c_rasterizer_pixel_shader::get(long)
//{
//    mangled_ppc("?get@c_rasterizer_pixel_shader@@SAPBV1@J@Z");
//};

//public: struct s_tag_reference const * c_rasterizer_globals::get_explicit_vertex_shader_ref(long) const
//{
//    mangled_ppc("?get_explicit_vertex_shader_ref@c_rasterizer_globals@@QBAPBUs_tag_reference@@J@Z");
//};

//public: struct s_tag_reference const * c_rasterizer_globals::get_explicit_pixel_shader_ref(long) const
//{
//    mangled_ppc("?get_explicit_pixel_shader_ref@c_rasterizer_globals@@QBAPBUs_tag_reference@@J@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_debug_line_list_explicit(struct rasterizer_vertex_debug const *, long, bool)
//{
//    mangled_ppc("?draw_debug_line_list_explicit@c_rasterizer_dynamic_geometry@@SAXPBUrasterizer_vertex_debug@@J_N@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_debug_polygon(struct rasterizer_vertex_debug const *, long, enum e_primitive_type)
//{
//    mangled_ppc("?draw_debug_polygon@c_rasterizer_dynamic_geometry@@SAXPBUrasterizer_vertex_debug@@JW4e_primitive_type@@@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_debug_polygon2d(struct rasterizer_vertex_debug const *, long, enum e_primitive_type)
//{
//    mangled_ppc("?draw_debug_polygon2d@c_rasterizer_dynamic_geometry@@SAXPBUrasterizer_vertex_debug@@JW4e_primitive_type@@@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_debug_line2d(union real_point3d const &, union real_point3d const &, unsigned long, unsigned long)
//{
//    mangled_ppc("?draw_debug_line2d@c_rasterizer_dynamic_geometry@@SAXABTreal_point3d@@0KK@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_debug_line_list2d_explicit(struct rasterizer_vertex_debug const *, long)
//{
//    mangled_ppc("?draw_debug_line_list2d_explicit@c_rasterizer_dynamic_geometry@@SAXPBUrasterizer_vertex_debug@@J@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_debug_linestrip2d(union int16_point2d const *, long, unsigned long)
//{
//    mangled_ppc("?draw_debug_linestrip2d@c_rasterizer_dynamic_geometry@@SAXPBTint16_point2d@@JK@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_rigid_world_geometry(struct rasterizer_vertex_transparent const *, long, enum e_alpha_blend_mode, enum e_primitive_type, bool, bool)
//{
//    mangled_ppc("?draw_rigid_world_geometry@c_rasterizer_dynamic_geometry@@SAXPBUrasterizer_vertex_transparent@@JW4e_alpha_blend_mode@@W4e_primitive_type@@_N3@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_textured_transparent_polygons(struct rasterizer_vertex_transparent const *, long, enum e_alpha_blend_mode, enum e_primitive_type)
//{
//    mangled_ppc("?draw_textured_transparent_polygons@c_rasterizer_dynamic_geometry@@SAXPBUrasterizer_vertex_transparent@@JW4e_alpha_blend_mode@@W4e_primitive_type@@@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::draw_textured_transparent_quad(struct rasterizer_vertex_transparent const *, enum e_alpha_blend_mode)
//{
//    mangled_ppc("?draw_textured_transparent_quad@c_rasterizer_dynamic_geometry@@SAXPBUrasterizer_vertex_transparent@@W4e_alpha_blend_mode@@@Z");
//};

//void rasterizer_quad_screenspace(union int16_point2d const (&)[4], unsigned long, struct s_tag_reference const *, short, bool)
//{
//    mangled_ppc("?rasterizer_quad_screenspace@@YAXAAY03$$CBTint16_point2d@@KPBUs_tag_reference@@F_N@Z");
//};

//public: struct s_tag_reference const * c_rasterizer_globals::get_default_texture_ref(long) const
//{
//    mangled_ppc("?get_default_texture_ref@c_rasterizer_globals@@QBAPBUs_tag_reference@@J@Z");
//};

//void rasterizer_quad_screenspace_explicit(union int16_point2d const (&)[4], unsigned long, class c_rasterizer_texture_ref, bool, enum e_alpha_blend_mode)
//{
//    mangled_ppc("?rasterizer_quad_screenspace_explicit@@YAXAAY03$$CBTint16_point2d@@KVc_rasterizer_texture_ref@@_NW4e_alpha_blend_mode@@@Z");
//};

//public: long D3DDevice::DrawPrimitiveUP(enum _D3DPRIMITIVETYPE, unsigned int, void const *, unsigned int)
//{
//    mangled_ppc("?DrawPrimitiveUP@D3DDevice@@QAAJW4_D3DPRIMITIVETYPE@@IPBXI@Z");
//};

//public: rasterizer_dynamic_screen_geometry_parameters::rasterizer_dynamic_screen_geometry_parameters(void)
//{
//    mangled_ppc("??0rasterizer_dynamic_screen_geometry_parameters@@QAA@XZ");
//};

//void rasterizer_psuedo_dynamic_screen_quad_draw(struct rasterizer_dynamic_screen_geometry_parameters const *, struct rasterizer_vertex_screen *)
//{
//    mangled_ppc("?rasterizer_psuedo_dynamic_screen_quad_draw@@YAXPBUrasterizer_dynamic_screen_geometry_parameters@@PAUrasterizer_vertex_screen@@@Z");
//};

//public: static void c_rasterizer_dynamic_geometry::normalize_screenspace_vertices(float, float, float, float, struct rasterizer_vertex_screen *, long)
//{
//    mangled_ppc("?normalize_screenspace_vertices@c_rasterizer_dynamic_geometry@@SAXMMMMPAUrasterizer_vertex_screen@@J@Z");
//};

//public: long D3DDevice::SetIndices(struct D3DIndexBuffer *)
//{
//    mangled_ppc("?SetIndices@D3DDevice@@QAAJPAUD3DIndexBuffer@@@Z");
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

//void rasterizer_draw_screen_facing_lens_flare(struct rasterizer_vertex_screen const *const, long, long, float, float, float)
//{
//    mangled_ppc("?rasterizer_draw_screen_facing_lens_flare@@YAXQBUrasterizer_vertex_screen@@JJMMM@Z");
//};

