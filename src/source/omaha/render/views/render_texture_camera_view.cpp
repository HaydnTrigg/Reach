/* ---------- headers */

#include "omaha\render\views\render_texture_camera_view.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float g_texture_camera_near_plane; // "?g_texture_camera_near_plane@@3MA"
// float g_texture_cam_exposure; // "?g_texture_cam_exposure@@3MA"
// float g_texture_cam_illum_scale; // "?g_texture_cam_illum_scale@@3MA"
// class c_view_stack g_texture_camera_view_stack_element; // "?g_texture_camera_view_stack_element@@3Vc_view_stack@@A"
// protected: static class c_texture_camera_view c_texture_camera_view::g_texture_camera_view; // "?g_texture_camera_view@c_texture_camera_view@@1V1@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_render_texture_camera_globals_allocator::*)(void *)> g_render_texture_camera_globals_allocator; // "?g_render_texture_camera_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_render_texture_camera_globals_allocator@@YAXPAX@Z@@A"
// struct s_render_texture_camera_globals *g_render_texture_camera_globals; // "?g_render_texture_camera_globals@@3PAUs_render_texture_camera_globals@@A"

// public: static class c_view_stack * c_texture_camera_view::get_view_stack_element(void);
// public: void c_texture_camera_view::initialize(void);
// public: void c_rasterizer_texture_ref::clear(void);
// public: void c_texture_camera_view::setup_camera(struct s_observer_result const *, enum e_output_user_index);
// public: struct s_rasterizer_projection & s_rasterizer_projection::operator=(struct s_rasterizer_projection const &);
// public: static void c_texture_camera_view::render_setup(void);
// public: s_atmosphere_parameters::s_atmosphere_parameters(void);
// public: void c_texture_camera_view::compute_visibility(long);
// public: void c_texture_camera_view::render(void);
// public: void c_lights_view::submit_simple_light_draw_list_to_shader(void) const;
// public: static void c_transparency_renderer::render(void);
// public: static void c_rasterizer::set_albedo_buffer_source_texture(class c_rasterizer_texture_ref, class c_rasterizer_texture_ref, class c_rasterizer_texture_ref);
// public: static void c_rasterizer::clear_albedo_buffer_source_texture(void);
// void invalidate_all_conditional_indices(void);
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
// public: void c_texture_camera_view::render_texture_camera(long);
// void __tls_set_g_render_texture_camera_globals_allocator(void *);
// bool render_texture_camera_is_active(void);
// bool render_texture_camera_bink_is_active(void);
// bool render_texture_camera_dynamic_lights_active(void);
// void render_debug_texture_camera(bool);
// void debug_render_texture_camera(void);
// void render_texture_camera_initialize(void);
// void render_texture_camera_initialize_for_new_map(void);
// void render_texture_camera_dispose_from_old_map(void);
// void render_texture_camera_dispose(void);
// bool render_texture_camera_active(void);
// void render_texture_camera_on(void);
// void render_texture_camera_off(void);
// void render_texture_camera_bink(void);
// bool render_texture_camera_rendering_bink(void);
// void render_texture_camera_render_mode(long);
// long render_texture_camera_get_render_mode(void);
// void render_texture_camera_enable_dynamic_lights(bool);
// long render_texture_camera_get_target_object_index(void);
// void render_texture_camera_set_position(float, float, float);
// void render_texture_camera_set_target(float, float, float);
// void render_texture_camera_attach_to_object(long, long);
// void render_texture_camera_target_object(long, long);
// void render_texture_camera_set_aspect_ratio(float);
// float render_texture_camera_get_aspect_ratio(void);
// void render_texture_camera_set_fov(float);
// void render_texture_camera_set_fov_frame_target(float);
// void render_texture_camera_set_resolution(long, long);
// long render_texture_camera_get_width(void);
// long render_texture_camera_get_height(void);
// void render_texture_camera_position_world_offset(float, float, float);
// void render_texture_camera_set_object_marker(long, long, float);
// void render_texture_camera_set_position_and_direction(bool, union real_point3d const *, union vector3d const *, union vector3d const *, float);
// void render_texture_camera_align_to_attached_object(void);
// bool frame_texture_get_source(enum e_render_target_type, struct s_frame_texture_camera *, class c_player_view const *);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>::valid(void) const;
// float XMVectorGetZ(struct __vector4);
// float XMVectorGetW(struct __vector4);
// struct __vector4 XMVector4Transform(struct __vector4, struct _XMMATRIX);
// public: c_texture_camera_view::c_texture_camera_view(void);
// public: c_player_view::c_player_view(void);
// public: s_rasterizer_projection::s_rasterizer_projection(void);
// public: c_blur::c_blur(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>(void);
// void g_render_texture_camera_globals_allocator::`dynamic atexit destructor'(void);

//public: static class c_view_stack * c_texture_camera_view::get_view_stack_element(void)
//{
//    mangled_ppc("?get_view_stack_element@c_texture_camera_view@@SAPAVc_view_stack@@XZ");
//};

//public: void c_texture_camera_view::initialize(void)
//{
//    mangled_ppc("?initialize@c_texture_camera_view@@QAAXXZ");
//};

//public: void c_rasterizer_texture_ref::clear(void)
//{
//    mangled_ppc("?clear@c_rasterizer_texture_ref@@QAAXXZ");
//};

//public: void c_texture_camera_view::setup_camera(struct s_observer_result const *, enum e_output_user_index)
//{
//    mangled_ppc("?setup_camera@c_texture_camera_view@@QAAXPBUs_observer_result@@W4e_output_user_index@@@Z");
//};

//public: struct s_rasterizer_projection & s_rasterizer_projection::operator=(struct s_rasterizer_projection const &)
//{
//    mangled_ppc("??4s_rasterizer_projection@@QAAAAU0@ABU0@@Z");
//};

//public: static void c_texture_camera_view::render_setup(void)
//{
//    mangled_ppc("?render_setup@c_texture_camera_view@@SAXXZ");
//};

//public: s_atmosphere_parameters::s_atmosphere_parameters(void)
//{
//    mangled_ppc("??0s_atmosphere_parameters@@QAA@XZ");
//};

//public: void c_texture_camera_view::compute_visibility(long)
//{
//    mangled_ppc("?compute_visibility@c_texture_camera_view@@QAAXJ@Z");
//};

//public: void c_texture_camera_view::render(void)
//{
//    mangled_ppc("?render@c_texture_camera_view@@QAAXXZ");
//};

//public: void c_lights_view::submit_simple_light_draw_list_to_shader(void) const
//{
//    mangled_ppc("?submit_simple_light_draw_list_to_shader@c_lights_view@@QBAXXZ");
//};

//public: static void c_transparency_renderer::render(void)
//{
//    mangled_ppc("?render@c_transparency_renderer@@SAXXZ");
//};

//public: static void c_rasterizer::set_albedo_buffer_source_texture(class c_rasterizer_texture_ref, class c_rasterizer_texture_ref, class c_rasterizer_texture_ref)
//{
//    mangled_ppc("?set_albedo_buffer_source_texture@c_rasterizer@@SAXVc_rasterizer_texture_ref@@00@Z");
//};

//public: static void c_rasterizer::clear_albedo_buffer_source_texture(void)
//{
//    mangled_ppc("?clear_albedo_buffer_source_texture@c_rasterizer@@SAXXZ");
//};

//void invalidate_all_conditional_indices(void)
//{
//    mangled_ppc("?invalidate_all_conditional_indices@@YAXXZ");
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

//public: void c_texture_camera_view::render_texture_camera(long)
//{
//    mangled_ppc("?render_texture_camera@c_texture_camera_view@@QAAXJ@Z");
//};

//void __tls_set_g_render_texture_camera_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_render_texture_camera_globals_allocator@@YAXPAX@Z");
//};

//bool render_texture_camera_is_active(void)
//{
//    mangled_ppc("?render_texture_camera_is_active@@YA_NXZ");
//};

//bool render_texture_camera_bink_is_active(void)
//{
//    mangled_ppc("?render_texture_camera_bink_is_active@@YA_NXZ");
//};

//bool render_texture_camera_dynamic_lights_active(void)
//{
//    mangled_ppc("?render_texture_camera_dynamic_lights_active@@YA_NXZ");
//};

//void render_debug_texture_camera(bool)
//{
//    mangled_ppc("?render_debug_texture_camera@@YAX_N@Z");
//};

//void debug_render_texture_camera(void)
//{
//    mangled_ppc("?debug_render_texture_camera@@YAXXZ");
//};

//void render_texture_camera_initialize(void)
//{
//    mangled_ppc("?render_texture_camera_initialize@@YAXXZ");
//};

//void render_texture_camera_initialize_for_new_map(void)
//{
//    mangled_ppc("?render_texture_camera_initialize_for_new_map@@YAXXZ");
//};

//void render_texture_camera_dispose_from_old_map(void)
//{
//    mangled_ppc("?render_texture_camera_dispose_from_old_map@@YAXXZ");
//};

//void render_texture_camera_dispose(void)
//{
//    mangled_ppc("?render_texture_camera_dispose@@YAXXZ");
//};

//bool render_texture_camera_active(void)
//{
//    mangled_ppc("?render_texture_camera_active@@YA_NXZ");
//};

//void render_texture_camera_on(void)
//{
//    mangled_ppc("?render_texture_camera_on@@YAXXZ");
//};

//void render_texture_camera_off(void)
//{
//    mangled_ppc("?render_texture_camera_off@@YAXXZ");
//};

//void render_texture_camera_bink(void)
//{
//    mangled_ppc("?render_texture_camera_bink@@YAXXZ");
//};

//bool render_texture_camera_rendering_bink(void)
//{
//    mangled_ppc("?render_texture_camera_rendering_bink@@YA_NXZ");
//};

//void render_texture_camera_render_mode(long)
//{
//    mangled_ppc("?render_texture_camera_render_mode@@YAXJ@Z");
//};

//long render_texture_camera_get_render_mode(void)
//{
//    mangled_ppc("?render_texture_camera_get_render_mode@@YAJXZ");
//};

//void render_texture_camera_enable_dynamic_lights(bool)
//{
//    mangled_ppc("?render_texture_camera_enable_dynamic_lights@@YAX_N@Z");
//};

//long render_texture_camera_get_target_object_index(void)
//{
//    mangled_ppc("?render_texture_camera_get_target_object_index@@YAJXZ");
//};

//void render_texture_camera_set_position(float, float, float)
//{
//    mangled_ppc("?render_texture_camera_set_position@@YAXMMM@Z");
//};

//void render_texture_camera_set_target(float, float, float)
//{
//    mangled_ppc("?render_texture_camera_set_target@@YAXMMM@Z");
//};

//void render_texture_camera_attach_to_object(long, long)
//{
//    mangled_ppc("?render_texture_camera_attach_to_object@@YAXJJ@Z");
//};

//void render_texture_camera_target_object(long, long)
//{
//    mangled_ppc("?render_texture_camera_target_object@@YAXJJ@Z");
//};

//void render_texture_camera_set_aspect_ratio(float)
//{
//    mangled_ppc("?render_texture_camera_set_aspect_ratio@@YAXM@Z");
//};

//float render_texture_camera_get_aspect_ratio(void)
//{
//    mangled_ppc("?render_texture_camera_get_aspect_ratio@@YAMXZ");
//};

//void render_texture_camera_set_fov(float)
//{
//    mangled_ppc("?render_texture_camera_set_fov@@YAXM@Z");
//};

//void render_texture_camera_set_fov_frame_target(float)
//{
//    mangled_ppc("?render_texture_camera_set_fov_frame_target@@YAXM@Z");
//};

//void render_texture_camera_set_resolution(long, long)
//{
//    mangled_ppc("?render_texture_camera_set_resolution@@YAXJJ@Z");
//};

//long render_texture_camera_get_width(void)
//{
//    mangled_ppc("?render_texture_camera_get_width@@YAJXZ");
//};

//long render_texture_camera_get_height(void)
//{
//    mangled_ppc("?render_texture_camera_get_height@@YAJXZ");
//};

//void render_texture_camera_position_world_offset(float, float, float)
//{
//    mangled_ppc("?render_texture_camera_position_world_offset@@YAXMMM@Z");
//};

//void render_texture_camera_set_object_marker(long, long, float)
//{
//    mangled_ppc("?render_texture_camera_set_object_marker@@YAXJJM@Z");
//};

//void render_texture_camera_set_position_and_direction(bool, union real_point3d const *, union vector3d const *, union vector3d const *, float)
//{
//    mangled_ppc("?render_texture_camera_set_position_and_direction@@YAX_NPBTreal_point3d@@PBTvector3d@@2M@Z");
//};

//void render_texture_camera_align_to_attached_object(void)
//{
//    mangled_ppc("?render_texture_camera_align_to_attached_object@@YAXXZ");
//};

//bool frame_texture_get_source(enum e_render_target_type, struct s_frame_texture_camera *, class c_player_view const *)
//{
//    mangled_ppc("?frame_texture_get_source@@YA_NW4e_render_target_type@@PAUs_frame_texture_camera@@PBVc_player_view@@@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_render_texture_camera_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_render_texture_camera_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//float XMVectorGetZ(struct __vector4)
//{
//    mangled_ppc("?XMVectorGetZ@@YAMU__vector4@@@Z");
//};

//float XMVectorGetW(struct __vector4)
//{
//    mangled_ppc("?XMVectorGetW@@YAMU__vector4@@@Z");
//};

//struct __vector4 XMVector4Transform(struct __vector4, struct _XMMATRIX)
//{
//    mangled_ppc("?XMVector4Transform@@YA?AU__vector4@@U1@U_XMMATRIX@@@Z");
//};

//public: c_texture_camera_view::c_texture_camera_view(void)
//{
//    mangled_ppc("??0c_texture_camera_view@@QAA@XZ");
//};

//public: c_player_view::c_player_view(void)
//{
//    mangled_ppc("??0c_player_view@@QAA@XZ");
//};

//public: s_rasterizer_projection::s_rasterizer_projection(void)
//{
//    mangled_ppc("??0s_rasterizer_projection@@QAA@XZ");
//};

//public: c_blur::c_blur(void)
//{
//    mangled_ppc("??0c_blur@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_render_texture_camera_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_render_texture_camera_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_render_texture_camera_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_render_texture_camera_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_render_texture_camera_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_render_texture_camera_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_render_texture_camera_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_render_texture_camera_globals_allocator@@YAXXZ");
//};

