/* ---------- headers */

#include "omaha\interface\cui\cui_render.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float cui_render_get_horizontal_scale(bool);
// bool cui_render_get_bitmap_texture_ref_and_data(long, long, long, class c_rasterizer_texture_ref *, struct bitmap_data const **);
// void cui_render_set_model_view_matrix(struct real_matrix4x3const *);
// void cui_render_set_projection_matrix(float const *);
// void cui_render_textured_quad(union real_rectangle2d const *, union argb_color const *, class c_rasterizer_texture_ref, union real_rectangle2d const *);
// void cui_render_emblem(union real_rectangle2d const *, long, long, union argb_color const *, union argb_color const *, union argb_color const *, class c_flags_no_init<enum e_emblem_info_flags, unsigned char, 3, struct s_default_enum_string_resolver>, union real_rectangle2d const *);
// void cui_render_explicitly_shaded_quad(union real_rectangle2d const *, union argb_color const *, class c_rasterizer_texture_ref, class c_rasterizer_texture_ref, union real_rectangle2d const *, bool, long, class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const *);
// void cui_render_simple_text(union real_rectangle2d const *, union argb_color const *, enum e_font_id, wchar_t const *);
// public: void c_draw_string::set_drop_shadow_style(enum e_text_drop_shadow_style);
// public: void c_draw_string::set_display_resolution_scale_adjustment(float);
// public: void c_rasterizer_draw_string::set_aspect_ratio_scale(union vector2d const *);
// public: void c_rasterizer_draw_string::set_use_default_shader(bool);
// void cui_render_complex_text(union real_rectangle2d const *, union argb_color const *, enum e_font_id, enum e_text_justification, enum e_text_drop_shadow_style, union argb_color const *, bool, bool, union real_point2d const *, float, float, wchar_t const *);
// void cui_render_debug_text(union argb_color const *, char const *);
// void cui_render_debug_rect(union real_rectangle2d const *, union argb_color const *);
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
// void cui_render_texture_camera(struct D3DSurface *, class c_rasterizer_texture_ref, struct D3DSurface *, class c_rasterizer_texture_ref, struct D3DSurface *, class c_rasterizer_texture_ref, struct D3DSurface *, class c_rasterizer_texture_ref, union real_point3d const *, union vector3d const *, union vector3d const *, float, float, float, float, float, float, float, unsigned long);
// public: void c_texture_camera_view::set_exposure(float, float);
// public: void c_texture_camera_view::set_clip_planes(float, float);
// public: void c_texture_camera_view::set_pixel_aspect_ratio(float);
// public: void c_texture_camera_view::set_alpha_matte(float);
// void set_shaded_quad_state(union real_rectangle2d const *, union real_rectangle2d const *, union argb_color const *, class c_rasterizer_texture_ref, bool, class c_rasterizer_texture_ref, bool, struct rasterizer_vertex_screen *const, struct rasterizer_dynamic_screen_geometry_parameters *);
// void set_pixel_shader_tint_color(union argb_color const *);
// void set_shader_sampler_state(long, class c_rasterizer_texture_ref, bool, long, struct rasterizer_dynamic_screen_geometry_parameters *);
// void set_pixel_shader_sampler_transform(long, bool);
// void set_shaded_text_state(void);
// void set_pixel_shader_color_scale(void);
// void clear_sampler_state(class c_rasterizer_texture_ref, class c_rasterizer_texture_ref);
// void render_quad(struct rasterizer_dynamic_screen_geometry_parameters const *, struct rasterizer_vertex_screen *);
// void render_debug_linestrip(union int16_point2d const *, long, union argb_color);
// void render_debug_line(union real_point3d, union real_point3d);

//float cui_render_get_horizontal_scale(bool)
//{
//    mangled_ppc("?cui_render_get_horizontal_scale@@YAM_N@Z");
//};

//bool cui_render_get_bitmap_texture_ref_and_data(long, long, long, class c_rasterizer_texture_ref *, struct bitmap_data const **)
//{
//    mangled_ppc("?cui_render_get_bitmap_texture_ref_and_data@@YA_NJJJPAVc_rasterizer_texture_ref@@PAPBUbitmap_data@@@Z");
//};

//void cui_render_set_model_view_matrix(struct real_matrix4x3const *)
//{
//    mangled_ppc("?cui_render_set_model_view_matrix@@YAXPBUreal_matrix4x3@@@Z");
//};

//void cui_render_set_projection_matrix(float const *)
//{
//    mangled_ppc("?cui_render_set_projection_matrix@@YAXPBM@Z");
//};

//void cui_render_textured_quad(union real_rectangle2d const *, union argb_color const *, class c_rasterizer_texture_ref, union real_rectangle2d const *)
//{
//    mangled_ppc("?cui_render_textured_quad@@YAXPBTreal_rectangle2d@@PBTargb_color@@Vc_rasterizer_texture_ref@@0@Z");
//};

//void cui_render_emblem(union real_rectangle2d const *, long, long, union argb_color const *, union argb_color const *, union argb_color const *, class c_flags_no_init<enum e_emblem_info_flags, unsigned char, 3, struct s_default_enum_string_resolver>, union real_rectangle2d const *)
//{
//    mangled_ppc("?cui_render_emblem@@YAXPBTreal_rectangle2d@@JJPBTargb_color@@11V?$c_flags_no_init@W4e_emblem_info_flags@@E$02Us_default_enum_string_resolver@@@@0@Z");
//};

//void cui_render_explicitly_shaded_quad(union real_rectangle2d const *, union argb_color const *, class c_rasterizer_texture_ref, class c_rasterizer_texture_ref, union real_rectangle2d const *, bool, long, class c_static_sized_dynamic_array<struct s_cui_render_explicit_shader_constant, 14> const *)
//{
//    mangled_ppc("?cui_render_explicitly_shaded_quad@@YAXPBTreal_rectangle2d@@PBTargb_color@@Vc_rasterizer_texture_ref@@20_NJPBV?$c_static_sized_dynamic_array@Us_cui_render_explicit_shader_constant@@$0O@@@@Z");
//};

//void cui_render_simple_text(union real_rectangle2d const *, union argb_color const *, enum e_font_id, wchar_t const *)
//{
//    mangled_ppc("?cui_render_simple_text@@YAXPBTreal_rectangle2d@@PBTargb_color@@W4e_font_id@@PB_W@Z");
//};

//public: void c_draw_string::set_drop_shadow_style(enum e_text_drop_shadow_style)
//{
//    mangled_ppc("?set_drop_shadow_style@c_draw_string@@QAAXW4e_text_drop_shadow_style@@@Z");
//};

//public: void c_draw_string::set_display_resolution_scale_adjustment(float)
//{
//    mangled_ppc("?set_display_resolution_scale_adjustment@c_draw_string@@QAAXM@Z");
//};

//public: void c_rasterizer_draw_string::set_aspect_ratio_scale(union vector2d const *)
//{
//    mangled_ppc("?set_aspect_ratio_scale@c_rasterizer_draw_string@@QAAXPBTvector2d@@@Z");
//};

//public: void c_rasterizer_draw_string::set_use_default_shader(bool)
//{
//    mangled_ppc("?set_use_default_shader@c_rasterizer_draw_string@@QAAX_N@Z");
//};

//void cui_render_complex_text(union real_rectangle2d const *, union argb_color const *, enum e_font_id, enum e_text_justification, enum e_text_drop_shadow_style, union argb_color const *, bool, bool, union real_point2d const *, float, float, wchar_t const *)
//{
//    mangled_ppc("?cui_render_complex_text@@YAXPBTreal_rectangle2d@@PBTargb_color@@W4e_font_id@@W4e_text_justification@@W4e_text_drop_shadow_style@@1_N5PBTreal_point2d@@MMPB_W@Z");
//};

//void cui_render_debug_text(union argb_color const *, char const *)
//{
//    mangled_ppc("?cui_render_debug_text@@YAXPBTargb_color@@PBD@Z");
//};

//void cui_render_debug_rect(union real_rectangle2d const *, union argb_color const *)
//{
//    mangled_ppc("?cui_render_debug_rect@@YAXPBTreal_rectangle2d@@PBTargb_color@@@Z");
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

//void cui_render_texture_camera(struct D3DSurface *, class c_rasterizer_texture_ref, struct D3DSurface *, class c_rasterizer_texture_ref, struct D3DSurface *, class c_rasterizer_texture_ref, struct D3DSurface *, class c_rasterizer_texture_ref, union real_point3d const *, union vector3d const *, union vector3d const *, float, float, float, float, float, float, float, unsigned long)
//{
//    mangled_ppc("?cui_render_texture_camera@@YAXPAUD3DSurface@@Vc_rasterizer_texture_ref@@010101PBTreal_point3d@@PBTvector3d@@3MMMMMMMK@Z");
//};

//public: void c_texture_camera_view::set_exposure(float, float)
//{
//    mangled_ppc("?set_exposure@c_texture_camera_view@@QAAXMM@Z");
//};

//public: void c_texture_camera_view::set_clip_planes(float, float)
//{
//    mangled_ppc("?set_clip_planes@c_texture_camera_view@@QAAXMM@Z");
//};

//public: void c_texture_camera_view::set_pixel_aspect_ratio(float)
//{
//    mangled_ppc("?set_pixel_aspect_ratio@c_texture_camera_view@@QAAXM@Z");
//};

//public: void c_texture_camera_view::set_alpha_matte(float)
//{
//    mangled_ppc("?set_alpha_matte@c_texture_camera_view@@QAAXM@Z");
//};

//void set_shaded_quad_state(union real_rectangle2d const *, union real_rectangle2d const *, union argb_color const *, class c_rasterizer_texture_ref, bool, class c_rasterizer_texture_ref, bool, struct rasterizer_vertex_screen *const, struct rasterizer_dynamic_screen_geometry_parameters *)
//{
//    mangled_ppc("?set_shaded_quad_state@@YAXPBTreal_rectangle2d@@0PBTargb_color@@Vc_rasterizer_texture_ref@@_N23QAUrasterizer_vertex_screen@@PAUrasterizer_dynamic_screen_geometry_parameters@@@Z");
//};

//void set_pixel_shader_tint_color(union argb_color const *)
//{
//    mangled_ppc("?set_pixel_shader_tint_color@@YAXPBTargb_color@@@Z");
//};

//void set_shader_sampler_state(long, class c_rasterizer_texture_ref, bool, long, struct rasterizer_dynamic_screen_geometry_parameters *)
//{
//    mangled_ppc("?set_shader_sampler_state@@YAXJVc_rasterizer_texture_ref@@_NJPAUrasterizer_dynamic_screen_geometry_parameters@@@Z");
//};

//void set_pixel_shader_sampler_transform(long, bool)
//{
//    mangled_ppc("?set_pixel_shader_sampler_transform@@YAXJ_N@Z");
//};

//void set_shaded_text_state(void)
//{
//    mangled_ppc("?set_shaded_text_state@@YAXXZ");
//};

//void set_pixel_shader_color_scale(void)
//{
//    mangled_ppc("?set_pixel_shader_color_scale@@YAXXZ");
//};

//void clear_sampler_state(class c_rasterizer_texture_ref, class c_rasterizer_texture_ref)
//{
//    mangled_ppc("?clear_sampler_state@@YAXVc_rasterizer_texture_ref@@0@Z");
//};

//void render_quad(struct rasterizer_dynamic_screen_geometry_parameters const *, struct rasterizer_vertex_screen *)
//{
//    mangled_ppc("?render_quad@@YAXPBUrasterizer_dynamic_screen_geometry_parameters@@PAUrasterizer_vertex_screen@@@Z");
//};

//void render_debug_linestrip(union int16_point2d const *, long, union argb_color)
//{
//    mangled_ppc("?render_debug_linestrip@@YAXPBTint16_point2d@@JTargb_color@@@Z");
//};

//void render_debug_line(union real_point3d, union real_point3d)
//{
//    mangled_ppc("?render_debug_line@@YAXTreal_point3d@@0@Z");
//};

