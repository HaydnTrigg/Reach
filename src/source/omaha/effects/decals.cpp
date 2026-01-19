/* ---------- headers */

#include "omaha\effects\decals.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static struct s_shader_extern_info const c_decal::x_shader_extern_info; // "?x_shader_extern_info@c_decal@@2Us_shader_extern_info@@B"
// public: static long const s_static_array<unsigned short, 1024>::k_element_count; // "?k_element_count@?$s_static_array@G$0EAA@@@2JB"
// private: static float c_decal::x_floating_z_bias; // "?x_floating_z_bias@c_decal@@0MA"
// public: static struct c_decal::s_profile_information c_decal::x_profile_information; // "?x_profile_information@c_decal@@2Us_profile_information@1@A"
// unsigned short *x_srcatch_indices; // "?x_srcatch_indices@@3PAGA"
// struct rasterizer_vertex_world *x_scratch_vertices; // "?x_scratch_vertices@@3PAUrasterizer_vertex_world@@A"
// private: static bool c_decal::x_apply_floating_z_bias_always; // "?x_apply_floating_z_bias_always@c_decal@@0_NA"
// private: static bool c_decal::x_using_scratch_mesh_buffers; // "?x_using_scratch_mesh_buffers@c_decal@@0_NA"
// private: static class c_decal const *const c_decal::x_currently_submitting_decal; // "?x_currently_submitting_decal@c_decal@@0PBV1@B"
// private: static class c_decal const * (*c_decal::x_runtime_to_render_this_frame)[256]; // "?x_runtime_to_render_this_frame@c_decal@@0PAY0BAA@PBV1@A"
// private: static long *c_decal::x_runtime_to_render_this_frame_count; // "?x_runtime_to_render_this_frame_count@c_decal@@0PAJA"
// class t_restricted_allocation_manager<6, 0, 0, void (__cdecl __tls_set_g_decal_array_allocator::*)(void *)> g_decal_array_allocator; // "?g_decal_array_allocator@@3V?$t_restricted_allocation_manager@$05$0A@$0A@$1?__tls_set_g_decal_array_allocator@@YAXPAX@Z@@A"
// private: static class decal_workspace::c_vertex_allocator c_decal::x_scratch_vertex_allocater; // "?x_scratch_vertex_allocater@c_decal@@0Vc_vertex_allocator@decal_workspace@@A"
// private: static class decal_workspace::c_index_allocator c_decal::x_scratch_index_allocator; // "?x_scratch_index_allocator@c_decal@@0Vc_index_allocator@decal_workspace@@A"
// private: static class decal_workspace::c_vertex_allocator c_decal::x_runtime_vertex_allocator; // "?x_runtime_vertex_allocator@c_decal@@0Vc_vertex_allocator@decal_workspace@@A"
// private: static class decal_workspace::c_index_allocator c_decal::x_runtime_index_allocator; // "?x_runtime_index_allocator@c_decal@@0Vc_index_allocator@decal_workspace@@A"
// public: static struct s_data_array *c_decal::x_data_array; // "?x_data_array@c_decal@@2PAUs_data_array@@A"

// public: bool c_collision_surface_edge_iterator::get_opposing_surface_fold(union real_point3d const *, union real_point3d const *, struct s_fold *, bool, bool) const;
// public: class c_collision_edge_reference const c_collision_surface_edge_iterator::get_datum(void) const;
// public: bool s_decal_projection_builder::build_projection(struct s_fold const *);
// public: bool s_decal_projection_builder::get_initialized(void) const;
// public: void s_decal_projection_builder::set_built(bool);
// public: void s_decal_projection_builder::set_folded(bool);
// public: bool s_decal_projection_builder::get_left_handed(void) const;
// public: bool s_decal_projection_builder::get_needs_renormalize(void) const;
// void __tls_set_g_decal_array_allocator(void *);
// public: char * c_decal::s_profile_information::dump(char *, unsigned long);
// public: static bool c_decal::cache_build_in_progress(void);
// public: static void c_decal::initialize_for_game(void);
// public: void c_decal::s_profile_information::reset(void);
// public: static void c_decal::initialize_for_map(void);
// public: static void c_decal::dispose_from_map(void);
// public: static void c_decal::dispose_from_game(void);
// public: static long c_decal::create(unsigned char, long, long, float, float);
// public: float c_decal_definition::get_bitmap_aspect(void) const;
// public: float c_decal_definition::get_radius_min(void) const;
// public: float c_decal_definition::get_radius_max(void) const;
// public: float c_decal_definition::get_decay_min(void) const;
// public: float c_decal_definition::get_decay_max(void) const;
// public: float c_decal_definition::get_lifespan_min(void) const;
// public: float c_decal_definition::get_lifespan_max(void) const;
// public: bool c_decal_system_definition::get_respects_negative_scale_x(void) const;
// public: bool c_decal_system_definition::get_respects_negative_scale_y(void) const;
// public: static unsigned long c_decal::get_current_count(void);
// public: static bool c_decal::check_current_count(void);
// public: static unsigned long c_decal::get_max_count(void);
// public: static void c_decal::increment_current_count(void);
// public: void c_decal::set_alive(bool);
// public: static void c_decal::destroy(long);
// public: static void c_decal::decrement_current_count(void);
// public: static float c_decal::shader_function_callback(long, long, long);
// private: long c_decal::get_vertex_start(void) const;
// public: char const * c_decal::get_name(void) const;
// public: char const * c_decal::get_profile_name(void) const;
// public: class c_decal_system const * c_decal::get_parent_system(void) const;
// public: class c_decal_definition const * c_decal::get_definition(void) const;
// public: static class c_decal * c_decal::get(long);
// public: static unsigned long * c_decal::get_current_count_modifiable(void);
// private: class decal_workspace::c_vertex_allocator * c_decal::get_vertex_allocator(void) const;
// private: class decal_workspace::c_index_allocator * c_decal::get_index_allocator(void) const;
// private: void c_decal::vertices_unlock(void) const;
// private: void c_decal::indices_unlock(void) const;
// private: long c_decal::get_index_start(void) const;
// private: unsigned short const * c_decal::indices_read_lock(void) const;
// private: unsigned short * c_decal::indices_write_lock(void);
// private: struct rasterizer_vertex_world const * c_decal::vertices_read_lock(void) const;
// private: struct rasterizer_vertex_world * c_decal::vertices_write_lock(void);
// public: void c_decal::frame_advance(float);
// public: static void c_decal::frame_reset(void);
// public: void c_decal::s_profile_information::frame_reset(void);
// public: void s_decal_profile_set::frame_reset(void);
// public: void c_decal::set_instance_flags(void) const;
// public: void c_decal::push_instance_single_pass_rendering_distance(void) const;
// public: void c_decal::submit(void) const;
// public: static void c_decal::render_all(enum c_decal_definition::e_pass);
// public: static void c_decal::render_core(long, class c_decal_definition const *, union real_point2d const *, union vector2d const *, enum c_decal_definition::e_pass, class c_rasterizer_vertex_buffer const *, class c_rasterizer_index_buffer const *, long, long, long, long, float, float, bool, class c_decal const *);
// public: class c_render_method_shader_decal const * c_decal_definition::get_shader(void) const;
// public: bool c_decal_definition::get_tangent_frame_required(void) const;
// public: bool c_decal_definition::get_debug_border_color_white(void) const;
// D3DDevice_SetSamplerState;
// D3DDevice_SetSamplerState_AddressU_Inline;
// D3DTag_Index;
// D3DTag_SamplerMask;
// D3DTag_SubsetMask;
// D3DTagCollection_Set;
// D3DDevice_SetSamplerState_AddressV_Inline;
// D3DDevice_SetSamplerState_AddressW_Inline;
// D3DDevice_SetSamplerState_MipFilter_Inline;
// D3DDevice_SetSamplerState_BorderColor_Inline;
// D3DDevice_SetSamplerState_TrilinearThreshold_Inline;
// D3DDevice_SetSamplerState_HGradientExpBias_Inline;
// D3DDevice_SetSamplerState_VGradientExpBias_Inline;
// D3DDevice_SetSamplerState_WhiteBorderColorW_Inline;
// D3DDevice_SetSamplerState_PointBorderEnable_Inline;
// D3DDevice_SetPixelShaderConstantF;
// D3DTag_ShaderConstantMask;
// D3DDevice_SetPixelShaderConstantF1;
// D3DVECTOR4_SetX;
// D3DVECTOR4_SetY;
// D3DVECTOR4_SetZ;
// D3DVECTOR4_SetW;
// public: void c_decal::render(void) const;
// public: void c_decal::choose_sprite(void);
// public: bool c_decal_definition::get_has_sprite(void) const;
// private: static void c_decal::write_normalized_vector(long *, union vector3d const *);
// private: static void c_decal::build_tangent_frame(struct rasterizer_vertex_world *, struct real_matrix4x3const *, union vector3d const *, union vector3d const *, bool);
// private: void c_decal::build_floating_quad(struct plane3d const *, struct real_matrix4x3const *, struct real_matrix4x3const *, struct s_decal_mesh_builder *, struct decal_workspace::s_fragment *);
// private: union vector2d const * c_decal::get_texture_scale(void) const;
// private: bool c_decal::build_mesh_fragment_recursive(struct s_decal_mesh_builder *, struct s_decal_mesh_fragment_builder *);
// public: float c_decal_definition::get_clamp_angle(void) const;
// public: float c_decal_definition::get_cull_angle(void) const;
// private: bool c_decal_system::get_left_handed(void) const;
// public: c_collision_surface_vertex_iterator::c_collision_surface_vertex_iterator(long, long, long);
// public: c_collision_surface_edge_iterator::c_collision_surface_edge_iterator(long, long, long);
// public: void c_collision_surface_vertex_iterator::next(void);
// public: void c_collision_surface_edge_iterator::next(void);
// public: class c_collision_vertex_reference const c_collision_surface_vertex_iterator::get_datum(void) const;
// public: void s_decal_projection_builder::initialize(struct real_matrix4x3const *, float, float, bool);
// public: void s_decal_projection_builder::set_initialized(bool);
// public: bool s_decal_projection_builder::get_built(void) const;
// public: void s_decal_projection_builder::set_left_handed(bool);
// public: void s_decal_projection_builder::set_needs_renormalize(bool);
// public: struct real_matrix4x3const * s_decal_projection_builder::get_projection(void) const;
// public: bool s_decal_mesh_fragment_builder::push_neighbor_surface(long, struct s_fold const *);
// public: void s_decal_mesh_fragment_builder::pop_neighbor_surface(void);
// bool line_segment_intersects_unit_texture_tile(union real_point2d const *, union real_point2d const *);
// private: bool c_decal::build_mesh_fragment(struct s_decal_mesh_builder *, struct decal_workspace::s_fragment *, bool);
// public: struct plane3d const * s_decal_collision_result::get_plane(void) const;
// public: s_decal_mesh_fragment_builder::s_decal_mesh_fragment_builder(void);
// public: s_decal_mesh_fragment_builder::s_neighbor_surface::s_neighbor_surface(void);
// public: s_decal_projection_builder::s_decal_projection_builder(void);
// private: static void c_decal::smooth_mesh_fragment(struct s_decal_mesh_builder *, struct decal_workspace::s_fragment *);
// private: void c_decal::write_mesh_fragment(struct rasterizer_vertex_world *, unsigned short *, struct s_decal_mesh_builder const *, struct decal_workspace::s_fragment const *);
// void quantize_real_point3d_to_UDec4_real_point3d(union vector4d const *, union real_rectangle3d const *, union vector4d *);
// public: bool c_decal::build_mesh(unsigned char, class c_static_sized_dynamic_array<struct s_decal_collision_result, 16> const *);
// public: s_decal_mesh_builder::s_decal_mesh_builder(void);
// bool local_compare_working_vertices(short, short, void const *);
// long build_index_of_global_instance_list(long, long);
// public: void c_decal::stack_push_corresponding_instance_index(long);
// public: void decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::initialize_for_game(void *);
// public: static void decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::initialize_for_map(void);
// public: void decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::dispose_from_map(void);
// public: void decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::dispose_from_game(void);
// public: bool decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::is_valid(void);
// public: long decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::new_elements(long);
// public: void decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::delete_elements(long);
// public: unsigned long decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::get_offset(long) const;
// public: struct rasterizer_vertex_world const * decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::read_lock(long);
// public: struct rasterizer_vertex_world * decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::write_lock(long);
// public: void decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::unlock(void);
// public: class c_rasterizer_vertex_buffer const * decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::get_buffer_reference(void) const;
// public: void decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::initialize_for_game(void *);
// public: static void decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::initialize_for_map(void);
// public: void decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::dispose_from_map(void);
// public: void decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::dispose_from_game(void);
// public: bool decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::is_valid(void);
// public: long decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::new_elements(long);
// public: void decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::delete_elements(long);
// public: unsigned long decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::get_offset(long) const;
// public: unsigned short const * decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::read_lock(long);
// public: unsigned short * decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::write_lock(long);
// public: void decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::unlock(void);
// public: class c_rasterizer_index_buffer const * decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::get_buffer_reference(void) const;
// ??0?$c_decal_sorter@Us_working_vertex@decal_workspace@@$0EAA@@@QAA@PBUs_working_vertex@decal_workspace@@Q6A_NFFPBX@Z@Z;
// public: void c_decal_sorter<struct decal_workspace::s_working_vertex, 1024>::sort(void);
// public: unsigned short c_decal_sorter<struct decal_workspace::s_working_vertex, 1024>::get_order_entry(long) const;
// public: void c_decal_sorter<struct decal_workspace::s_working_vertex, 1024>::set_start(long);
// public: void c_decal_sorter<struct decal_workspace::s_working_vertex, 1024>::set_count(long);
// public: void c_decal_sorter<struct decal_workspace::s_working_vertex, 1024>::fill(void);
// public: c_render_section_scope<class c_decal>::c_render_section_scope<class c_decal>(class c_decal const *);
// public: c_render_section_scope<class c_decal>::~c_render_section_scope<class c_decal>(void);
// public: struct s_decal_collision_result const & c_array_operator_interface<class c_static_sized_dynamic_array<struct s_decal_collision_result, 16>, struct s_decal_collision_result>::operator[](long) const;
// public: bool decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::need_raw_buffer(void);
// protected: static void decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::delete_block_proc(void *, long, bool, bool);
// protected: static bool decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::locked_block_proc(void *, long);
// protected: static unsigned char decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::usage_block_proc(void *, long);
// public: bool decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::need_raw_buffer(void);
// protected: static void decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::delete_block_proc(void *, long, bool, bool);
// protected: static bool decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::locked_block_proc(void *, long);
// protected: static unsigned char decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::usage_block_proc(void *, long);
// public: unsigned short * s_static_array<unsigned short, 1024>::get_elements(void);
// public: struct s_decal_collision_result const * c_static_sized_dynamic_array<struct s_decal_collision_result, 16>::begin(void) const;
// public: struct s_decal_collision_result const * s_static_array<struct s_decal_collision_result, 16>::begin(void) const;
// void data_dump<class c_decal>(struct s_data_array const *, char const *, enum e_event_level);
// public: unsigned short const & s_static_array<unsigned short, 1024>::operator[]<long>(long) const;
// public: unsigned short & s_static_array<unsigned short, 1024>::operator[]<long>(long);
// public: static bool s_static_array<unsigned short, 1024>::valid<long>(long);
// public: t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>::t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>::valid(void) const;
// public: decal_workspace::c_vertex_allocator::c_vertex_allocator(unsigned long);
// public: virtual void decal_workspace::c_vertex_allocator::create_buffer(void);
// public: decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>(unsigned long);
// public: decal_workspace::c_index_allocator::c_index_allocator(unsigned long);
// public: virtual void decal_workspace::c_index_allocator::create_buffer(void);
// public: decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>(unsigned long);
// public: t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>::~t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>(void);
// void g_decal_array_allocator::`dynamic atexit destructor'(void);

//public: bool c_collision_surface_edge_iterator::get_opposing_surface_fold(union real_point3d const *, union real_point3d const *, struct s_fold *, bool, bool) const
//{
//    mangled_ppc("?get_opposing_surface_fold@c_collision_surface_edge_iterator@@QBA_NPBTreal_point3d@@0PAUs_fold@@_N2@Z");
//};

//public: class c_collision_edge_reference const c_collision_surface_edge_iterator::get_datum(void) const
//{
//    mangled_ppc("?get_datum@c_collision_surface_edge_iterator@@QBA?BVc_collision_edge_reference@@XZ");
//};

//public: bool s_decal_projection_builder::build_projection(struct s_fold const *)
//{
//    mangled_ppc("?build_projection@s_decal_projection_builder@@QAA_NPBUs_fold@@@Z");
//};

//public: bool s_decal_projection_builder::get_initialized(void) const
//{
//    mangled_ppc("?get_initialized@s_decal_projection_builder@@QBA_NXZ");
//};

//public: void s_decal_projection_builder::set_built(bool)
//{
//    mangled_ppc("?set_built@s_decal_projection_builder@@QAAX_N@Z");
//};

//public: void s_decal_projection_builder::set_folded(bool)
//{
//    mangled_ppc("?set_folded@s_decal_projection_builder@@QAAX_N@Z");
//};

//public: bool s_decal_projection_builder::get_left_handed(void) const
//{
//    mangled_ppc("?get_left_handed@s_decal_projection_builder@@QBA_NXZ");
//};

//public: bool s_decal_projection_builder::get_needs_renormalize(void) const
//{
//    mangled_ppc("?get_needs_renormalize@s_decal_projection_builder@@QBA_NXZ");
//};

//void __tls_set_g_decal_array_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_decal_array_allocator@@YAXPAX@Z");
//};

//public: char * c_decal::s_profile_information::dump(char *, unsigned long)
//{
//    mangled_ppc("?dump@s_profile_information@c_decal@@QAAPADPADK@Z");
//};

//public: static bool c_decal::cache_build_in_progress(void)
//{
//    mangled_ppc("?cache_build_in_progress@c_decal@@SA_NXZ");
//};

//public: static void c_decal::initialize_for_game(void)
//{
//    mangled_ppc("?initialize_for_game@c_decal@@SAXXZ");
//};

//public: void c_decal::s_profile_information::reset(void)
//{
//    mangled_ppc("?reset@s_profile_information@c_decal@@QAAXXZ");
//};

//public: static void c_decal::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@c_decal@@SAXXZ");
//};

//public: static void c_decal::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@c_decal@@SAXXZ");
//};

//public: static void c_decal::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@c_decal@@SAXXZ");
//};

//public: static long c_decal::create(unsigned char, long, long, float, float)
//{
//    mangled_ppc("?create@c_decal@@SAJEJJMM@Z");
//};

//public: float c_decal_definition::get_bitmap_aspect(void) const
//{
//    mangled_ppc("?get_bitmap_aspect@c_decal_definition@@QBAMXZ");
//};

//public: float c_decal_definition::get_radius_min(void) const
//{
//    mangled_ppc("?get_radius_min@c_decal_definition@@QBAMXZ");
//};

//public: float c_decal_definition::get_radius_max(void) const
//{
//    mangled_ppc("?get_radius_max@c_decal_definition@@QBAMXZ");
//};

//public: float c_decal_definition::get_decay_min(void) const
//{
//    mangled_ppc("?get_decay_min@c_decal_definition@@QBAMXZ");
//};

//public: float c_decal_definition::get_decay_max(void) const
//{
//    mangled_ppc("?get_decay_max@c_decal_definition@@QBAMXZ");
//};

//public: float c_decal_definition::get_lifespan_min(void) const
//{
//    mangled_ppc("?get_lifespan_min@c_decal_definition@@QBAMXZ");
//};

//public: float c_decal_definition::get_lifespan_max(void) const
//{
//    mangled_ppc("?get_lifespan_max@c_decal_definition@@QBAMXZ");
//};

//public: bool c_decal_system_definition::get_respects_negative_scale_x(void) const
//{
//    mangled_ppc("?get_respects_negative_scale_x@c_decal_system_definition@@QBA_NXZ");
//};

//public: bool c_decal_system_definition::get_respects_negative_scale_y(void) const
//{
//    mangled_ppc("?get_respects_negative_scale_y@c_decal_system_definition@@QBA_NXZ");
//};

//public: static unsigned long c_decal::get_current_count(void)
//{
//    mangled_ppc("?get_current_count@c_decal@@SAKXZ");
//};

//public: static bool c_decal::check_current_count(void)
//{
//    mangled_ppc("?check_current_count@c_decal@@SA_NXZ");
//};

//public: static unsigned long c_decal::get_max_count(void)
//{
//    mangled_ppc("?get_max_count@c_decal@@SAKXZ");
//};

//public: static void c_decal::increment_current_count(void)
//{
//    mangled_ppc("?increment_current_count@c_decal@@SAXXZ");
//};

//public: void c_decal::set_alive(bool)
//{
//    mangled_ppc("?set_alive@c_decal@@QAAX_N@Z");
//};

//public: static void c_decal::destroy(long)
//{
//    mangled_ppc("?destroy@c_decal@@SAXJ@Z");
//};

//public: static void c_decal::decrement_current_count(void)
//{
//    mangled_ppc("?decrement_current_count@c_decal@@SAXXZ");
//};

//public: static float c_decal::shader_function_callback(long, long, long)
//{
//    mangled_ppc("?shader_function_callback@c_decal@@SAMJJJ@Z");
//};

//private: long c_decal::get_vertex_start(void) const
//{
//    mangled_ppc("?get_vertex_start@c_decal@@ABAJXZ");
//};

//public: char const * c_decal::get_name(void) const
//{
//    mangled_ppc("?get_name@c_decal@@QBAPBDXZ");
//};

//public: char const * c_decal::get_profile_name(void) const
//{
//    mangled_ppc("?get_profile_name@c_decal@@QBAPBDXZ");
//};

//public: class c_decal_system const * c_decal::get_parent_system(void) const
//{
//    mangled_ppc("?get_parent_system@c_decal@@QBAPBVc_decal_system@@XZ");
//};

//public: class c_decal_definition const * c_decal::get_definition(void) const
//{
//    mangled_ppc("?get_definition@c_decal@@QBAPBVc_decal_definition@@XZ");
//};

//public: static class c_decal * c_decal::get(long)
//{
//    mangled_ppc("?get@c_decal@@SAPAV1@J@Z");
//};

//public: static unsigned long * c_decal::get_current_count_modifiable(void)
//{
//    mangled_ppc("?get_current_count_modifiable@c_decal@@SAPAKXZ");
//};

//private: class decal_workspace::c_vertex_allocator * c_decal::get_vertex_allocator(void) const
//{
//    mangled_ppc("?get_vertex_allocator@c_decal@@ABAPAVc_vertex_allocator@decal_workspace@@XZ");
//};

//private: class decal_workspace::c_index_allocator * c_decal::get_index_allocator(void) const
//{
//    mangled_ppc("?get_index_allocator@c_decal@@ABAPAVc_index_allocator@decal_workspace@@XZ");
//};

//private: void c_decal::vertices_unlock(void) const
//{
//    mangled_ppc("?vertices_unlock@c_decal@@ABAXXZ");
//};

//private: void c_decal::indices_unlock(void) const
//{
//    mangled_ppc("?indices_unlock@c_decal@@ABAXXZ");
//};

//private: long c_decal::get_index_start(void) const
//{
//    mangled_ppc("?get_index_start@c_decal@@ABAJXZ");
//};

//private: unsigned short const * c_decal::indices_read_lock(void) const
//{
//    mangled_ppc("?indices_read_lock@c_decal@@ABAPBGXZ");
//};

//private: unsigned short * c_decal::indices_write_lock(void)
//{
//    mangled_ppc("?indices_write_lock@c_decal@@AAAPAGXZ");
//};

//private: struct rasterizer_vertex_world const * c_decal::vertices_read_lock(void) const
//{
//    mangled_ppc("?vertices_read_lock@c_decal@@ABAPBUrasterizer_vertex_world@@XZ");
//};

//private: struct rasterizer_vertex_world * c_decal::vertices_write_lock(void)
//{
//    mangled_ppc("?vertices_write_lock@c_decal@@AAAPAUrasterizer_vertex_world@@XZ");
//};

//public: void c_decal::frame_advance(float)
//{
//    mangled_ppc("?frame_advance@c_decal@@QAAXM@Z");
//};

//public: static void c_decal::frame_reset(void)
//{
//    mangled_ppc("?frame_reset@c_decal@@SAXXZ");
//};

//public: void c_decal::s_profile_information::frame_reset(void)
//{
//    mangled_ppc("?frame_reset@s_profile_information@c_decal@@QAAXXZ");
//};

//public: void s_decal_profile_set::frame_reset(void)
//{
//    mangled_ppc("?frame_reset@s_decal_profile_set@@QAAXXZ");
//};

//public: void c_decal::set_instance_flags(void) const
//{
//    mangled_ppc("?set_instance_flags@c_decal@@QBAXXZ");
//};

//public: void c_decal::push_instance_single_pass_rendering_distance(void) const
//{
//    mangled_ppc("?push_instance_single_pass_rendering_distance@c_decal@@QBAXXZ");
//};

//public: void c_decal::submit(void) const
//{
//    mangled_ppc("?submit@c_decal@@QBAXXZ");
//};

//public: static void c_decal::render_all(enum c_decal_definition::e_pass)
//{
//    mangled_ppc("?render_all@c_decal@@SAXW4e_pass@c_decal_definition@@@Z");
//};

//public: static void c_decal::render_core(long, class c_decal_definition const *, union real_point2d const *, union vector2d const *, enum c_decal_definition::e_pass, class c_rasterizer_vertex_buffer const *, class c_rasterizer_index_buffer const *, long, long, long, long, float, float, bool, class c_decal const *)
//{
//    mangled_ppc("?render_core@c_decal@@SAXJPBVc_decal_definition@@PBTreal_point2d@@PBTvector2d@@W4e_pass@2@PBVc_rasterizer_vertex_buffer@@PBVc_rasterizer_index_buffer@@JJJJMM_NPBV1@@Z");
//};

//public: class c_render_method_shader_decal const * c_decal_definition::get_shader(void) const
//{
//    mangled_ppc("?get_shader@c_decal_definition@@QBAPBVc_render_method_shader_decal@@XZ");
//};

//public: bool c_decal_definition::get_tangent_frame_required(void) const
//{
//    mangled_ppc("?get_tangent_frame_required@c_decal_definition@@QBA_NXZ");
//};

//public: bool c_decal_definition::get_debug_border_color_white(void) const
//{
//    mangled_ppc("?get_debug_border_color_white@c_decal_definition@@QBA_NXZ");
//};

//D3DDevice_SetSamplerState
//{
//    mangled_ppc("D3DDevice_SetSamplerState");
//};

//D3DDevice_SetSamplerState_AddressU_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_AddressU_Inline");
//};

//D3DTag_Index
//{
//    mangled_ppc("D3DTag_Index");
//};

//D3DTag_SamplerMask
//{
//    mangled_ppc("D3DTag_SamplerMask");
//};

//D3DTag_SubsetMask
//{
//    mangled_ppc("D3DTag_SubsetMask");
//};

//D3DTagCollection_Set
//{
//    mangled_ppc("D3DTagCollection_Set");
//};

//D3DDevice_SetSamplerState_AddressV_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_AddressV_Inline");
//};

//D3DDevice_SetSamplerState_AddressW_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_AddressW_Inline");
//};

//D3DDevice_SetSamplerState_MipFilter_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_MipFilter_Inline");
//};

//D3DDevice_SetSamplerState_BorderColor_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_BorderColor_Inline");
//};

//D3DDevice_SetSamplerState_TrilinearThreshold_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_TrilinearThreshold_Inline");
//};

//D3DDevice_SetSamplerState_HGradientExpBias_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_HGradientExpBias_Inline");
//};

//D3DDevice_SetSamplerState_VGradientExpBias_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_VGradientExpBias_Inline");
//};

//D3DDevice_SetSamplerState_WhiteBorderColorW_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_WhiteBorderColorW_Inline");
//};

//D3DDevice_SetSamplerState_PointBorderEnable_Inline
//{
//    mangled_ppc("D3DDevice_SetSamplerState_PointBorderEnable_Inline");
//};

//D3DDevice_SetPixelShaderConstantF
//{
//    mangled_ppc("D3DDevice_SetPixelShaderConstantF");
//};

//D3DTag_ShaderConstantMask
//{
//    mangled_ppc("D3DTag_ShaderConstantMask");
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

//public: void c_decal::render(void) const
//{
//    mangled_ppc("?render@c_decal@@QBAXXZ");
//};

//public: void c_decal::choose_sprite(void)
//{
//    mangled_ppc("?choose_sprite@c_decal@@QAAXXZ");
//};

//public: bool c_decal_definition::get_has_sprite(void) const
//{
//    mangled_ppc("?get_has_sprite@c_decal_definition@@QBA_NXZ");
//};

//private: static void c_decal::write_normalized_vector(long *, union vector3d const *)
//{
//    mangled_ppc("?write_normalized_vector@c_decal@@CAXPAJPBTvector3d@@@Z");
//};

//private: static void c_decal::build_tangent_frame(struct rasterizer_vertex_world *, struct real_matrix4x3const *, union vector3d const *, union vector3d const *, bool)
//{
//    mangled_ppc("?build_tangent_frame@c_decal@@CAXPAUrasterizer_vertex_world@@PBUreal_matrix4x3@@PBTvector3d@@2_N@Z");
//};

//private: void c_decal::build_floating_quad(struct plane3d const *, struct real_matrix4x3const *, struct real_matrix4x3const *, struct s_decal_mesh_builder *, struct decal_workspace::s_fragment *)
//{
//    mangled_ppc("?build_floating_quad@c_decal@@AAAXPBUplane3d@@PBUreal_matrix4x3@@1PAUs_decal_mesh_builder@@PAUs_fragment@decal_workspace@@@Z");
//};

//private: union vector2d const * c_decal::get_texture_scale(void) const
//{
//    mangled_ppc("?get_texture_scale@c_decal@@ABAPBTvector2d@@XZ");
//};

//private: bool c_decal::build_mesh_fragment_recursive(struct s_decal_mesh_builder *, struct s_decal_mesh_fragment_builder *)
//{
//    mangled_ppc("?build_mesh_fragment_recursive@c_decal@@AAA_NPAUs_decal_mesh_builder@@PAUs_decal_mesh_fragment_builder@@@Z");
//};

//public: float c_decal_definition::get_clamp_angle(void) const
//{
//    mangled_ppc("?get_clamp_angle@c_decal_definition@@QBAMXZ");
//};

//public: float c_decal_definition::get_cull_angle(void) const
//{
//    mangled_ppc("?get_cull_angle@c_decal_definition@@QBAMXZ");
//};

//private: bool c_decal_system::get_left_handed(void) const
//{
//    mangled_ppc("?get_left_handed@c_decal_system@@ABA_NXZ");
//};

//public: c_collision_surface_vertex_iterator::c_collision_surface_vertex_iterator(long, long, long)
//{
//    mangled_ppc("??0c_collision_surface_vertex_iterator@@QAA@JJJ@Z");
//};

//public: c_collision_surface_edge_iterator::c_collision_surface_edge_iterator(long, long, long)
//{
//    mangled_ppc("??0c_collision_surface_edge_iterator@@QAA@JJJ@Z");
//};

//public: void c_collision_surface_vertex_iterator::next(void)
//{
//    mangled_ppc("?next@c_collision_surface_vertex_iterator@@QAAXXZ");
//};

//public: void c_collision_surface_edge_iterator::next(void)
//{
//    mangled_ppc("?next@c_collision_surface_edge_iterator@@QAAXXZ");
//};

//public: class c_collision_vertex_reference const c_collision_surface_vertex_iterator::get_datum(void) const
//{
//    mangled_ppc("?get_datum@c_collision_surface_vertex_iterator@@QBA?BVc_collision_vertex_reference@@XZ");
//};

//public: void s_decal_projection_builder::initialize(struct real_matrix4x3const *, float, float, bool)
//{
//    mangled_ppc("?initialize@s_decal_projection_builder@@QAAXPBUreal_matrix4x3@@MM_N@Z");
//};

//public: void s_decal_projection_builder::set_initialized(bool)
//{
//    mangled_ppc("?set_initialized@s_decal_projection_builder@@QAAX_N@Z");
//};

//public: bool s_decal_projection_builder::get_built(void) const
//{
//    mangled_ppc("?get_built@s_decal_projection_builder@@QBA_NXZ");
//};

//public: void s_decal_projection_builder::set_left_handed(bool)
//{
//    mangled_ppc("?set_left_handed@s_decal_projection_builder@@QAAX_N@Z");
//};

//public: void s_decal_projection_builder::set_needs_renormalize(bool)
//{
//    mangled_ppc("?set_needs_renormalize@s_decal_projection_builder@@QAAX_N@Z");
//};

//public: struct real_matrix4x3const * s_decal_projection_builder::get_projection(void) const
//{
//    mangled_ppc("?get_projection@s_decal_projection_builder@@QBAPBUreal_matrix4x3@@XZ");
//};

//public: bool s_decal_mesh_fragment_builder::push_neighbor_surface(long, struct s_fold const *)
//{
//    mangled_ppc("?push_neighbor_surface@s_decal_mesh_fragment_builder@@QAA_NJPBUs_fold@@@Z");
//};

//public: void s_decal_mesh_fragment_builder::pop_neighbor_surface(void)
//{
//    mangled_ppc("?pop_neighbor_surface@s_decal_mesh_fragment_builder@@QAAXXZ");
//};

//bool line_segment_intersects_unit_texture_tile(union real_point2d const *, union real_point2d const *)
//{
//    mangled_ppc("?line_segment_intersects_unit_texture_tile@@YA_NPBTreal_point2d@@0@Z");
//};

//private: bool c_decal::build_mesh_fragment(struct s_decal_mesh_builder *, struct decal_workspace::s_fragment *, bool)
//{
//    mangled_ppc("?build_mesh_fragment@c_decal@@AAA_NPAUs_decal_mesh_builder@@PAUs_fragment@decal_workspace@@_N@Z");
//};

//public: struct plane3d const * s_decal_collision_result::get_plane(void) const
//{
//    mangled_ppc("?get_plane@s_decal_collision_result@@QBAPBUplane3d@@XZ");
//};

//public: s_decal_mesh_fragment_builder::s_decal_mesh_fragment_builder(void)
//{
//    mangled_ppc("??0s_decal_mesh_fragment_builder@@QAA@XZ");
//};

//public: s_decal_mesh_fragment_builder::s_neighbor_surface::s_neighbor_surface(void)
//{
//    mangled_ppc("??0s_neighbor_surface@s_decal_mesh_fragment_builder@@QAA@XZ");
//};

//public: s_decal_projection_builder::s_decal_projection_builder(void)
//{
//    mangled_ppc("??0s_decal_projection_builder@@QAA@XZ");
//};

//private: static void c_decal::smooth_mesh_fragment(struct s_decal_mesh_builder *, struct decal_workspace::s_fragment *)
//{
//    mangled_ppc("?smooth_mesh_fragment@c_decal@@CAXPAUs_decal_mesh_builder@@PAUs_fragment@decal_workspace@@@Z");
//};

//private: void c_decal::write_mesh_fragment(struct rasterizer_vertex_world *, unsigned short *, struct s_decal_mesh_builder const *, struct decal_workspace::s_fragment const *)
//{
//    mangled_ppc("?write_mesh_fragment@c_decal@@AAAXPAUrasterizer_vertex_world@@PAGPBUs_decal_mesh_builder@@PBUs_fragment@decal_workspace@@@Z");
//};

//void quantize_real_point3d_to_UDec4_real_point3d(union vector4d const *, union real_rectangle3d const *, union vector4d *)
//{
//    mangled_ppc("?quantize_real_point3d_to_UDec4_real_point3d@@YAXPBTvector4d@@PBTreal_rectangle3d@@PAT1@@Z");
//};

//public: bool c_decal::build_mesh(unsigned char, class c_static_sized_dynamic_array<struct s_decal_collision_result, 16> const *)
//{
//    mangled_ppc("?build_mesh@c_decal@@QAA_NEPBV?$c_static_sized_dynamic_array@Us_decal_collision_result@@$0BA@@@@Z");
//};

//public: s_decal_mesh_builder::s_decal_mesh_builder(void)
//{
//    mangled_ppc("??0s_decal_mesh_builder@@QAA@XZ");
//};

//bool local_compare_working_vertices(short, short, void const *)
//{
//    mangled_ppc("?local_compare_working_vertices@@YA_NFFPBX@Z");
//};

//long build_index_of_global_instance_list(long, long)
//{
//    mangled_ppc("?build_index_of_global_instance_list@@YAJJJ@Z");
//};

//public: void c_decal::stack_push_corresponding_instance_index(long)
//{
//    mangled_ppc("?stack_push_corresponding_instance_index@c_decal@@QAAXJ@Z");
//};

//public: void decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::initialize_for_game(void *)
//{
//    mangled_ppc("?initialize_for_game@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@QAAXPAX@Z");
//};

//public: static void decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@SAXXZ");
//};

//public: void decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@QAAXXZ");
//};

//public: void decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@QAAXXZ");
//};

//public: bool decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::is_valid(void)
//{
//    mangled_ppc("?is_valid@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@QAA_NXZ");
//};

//public: long decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::new_elements(long)
//{
//    mangled_ppc("?new_elements@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@QAAJJ@Z");
//};

//public: void decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::delete_elements(long)
//{
//    mangled_ppc("?delete_elements@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@QAAXJ@Z");
//};

//public: unsigned long decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::get_offset(long) const
//{
//    mangled_ppc("?get_offset@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@QBAKJ@Z");
//};

//public: struct rasterizer_vertex_world const * decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::read_lock(long)
//{
//    mangled_ppc("?read_lock@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@QAAPBUrasterizer_vertex_world@@J@Z");
//};

//public: struct rasterizer_vertex_world * decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::write_lock(long)
//{
//    mangled_ppc("?write_lock@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@QAAPAUrasterizer_vertex_world@@J@Z");
//};

//public: void decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::unlock(void)
//{
//    mangled_ppc("?unlock@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@QAAXXZ");
//};

//public: class c_rasterizer_vertex_buffer const * decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::get_buffer_reference(void) const
//{
//    mangled_ppc("?get_buffer_reference@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@QBAPBVc_rasterizer_vertex_buffer@@XZ");
//};

//public: void decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::initialize_for_game(void *)
//{
//    mangled_ppc("?initialize_for_game@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@QAAXPAX@Z");
//};

//public: static void decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@SAXXZ");
//};

//public: void decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@QAAXXZ");
//};

//public: void decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@QAAXXZ");
//};

//public: bool decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::is_valid(void)
//{
//    mangled_ppc("?is_valid@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@QAA_NXZ");
//};

//public: long decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::new_elements(long)
//{
//    mangled_ppc("?new_elements@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@QAAJJ@Z");
//};

//public: void decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::delete_elements(long)
//{
//    mangled_ppc("?delete_elements@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@QAAXJ@Z");
//};

//public: unsigned long decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::get_offset(long) const
//{
//    mangled_ppc("?get_offset@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@QBAKJ@Z");
//};

//public: unsigned short const * decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::read_lock(long)
//{
//    mangled_ppc("?read_lock@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@QAAPBGJ@Z");
//};

//public: unsigned short * decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::write_lock(long)
//{
//    mangled_ppc("?write_lock@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@QAAPAGJ@Z");
//};

//public: void decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::unlock(void)
//{
//    mangled_ppc("?unlock@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@QAAXXZ");
//};

//public: class c_rasterizer_index_buffer const * decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::get_buffer_reference(void) const
//{
//    mangled_ppc("?get_buffer_reference@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@QBAPBVc_rasterizer_index_buffer@@XZ");
//};

//??0?$c_decal_sorter@Us_working_vertex@decal_workspace@@$0EAA@@@QAA@PBUs_working_vertex@decal_workspace@@Q6A_NFFPBX@Z@Z
//{
//    mangled_ppc("??0?$c_decal_sorter@Us_working_vertex@decal_workspace@@$0EAA@@@QAA@PBUs_working_vertex@decal_workspace@@Q6A_NFFPBX@Z@Z");
//};

//public: void c_decal_sorter<struct decal_workspace::s_working_vertex, 1024>::sort(void)
//{
//    mangled_ppc("?sort@?$c_decal_sorter@Us_working_vertex@decal_workspace@@$0EAA@@@QAAXXZ");
//};

//public: unsigned short c_decal_sorter<struct decal_workspace::s_working_vertex, 1024>::get_order_entry(long) const
//{
//    mangled_ppc("?get_order_entry@?$c_decal_sorter@Us_working_vertex@decal_workspace@@$0EAA@@@QBAGJ@Z");
//};

//public: void c_decal_sorter<struct decal_workspace::s_working_vertex, 1024>::set_start(long)
//{
//    mangled_ppc("?set_start@?$c_decal_sorter@Us_working_vertex@decal_workspace@@$0EAA@@@QAAXJ@Z");
//};

//public: void c_decal_sorter<struct decal_workspace::s_working_vertex, 1024>::set_count(long)
//{
//    mangled_ppc("?set_count@?$c_decal_sorter@Us_working_vertex@decal_workspace@@$0EAA@@@QAAXJ@Z");
//};

//public: void c_decal_sorter<struct decal_workspace::s_working_vertex, 1024>::fill(void)
//{
//    mangled_ppc("?fill@?$c_decal_sorter@Us_working_vertex@decal_workspace@@$0EAA@@@QAAXXZ");
//};

//public: c_render_section_scope<class c_decal>::c_render_section_scope<class c_decal>(class c_decal const *)
//{
//    mangled_ppc("??0?$c_render_section_scope@Vc_decal@@@@QAA@PBVc_decal@@@Z");
//};

//public: c_render_section_scope<class c_decal>::~c_render_section_scope<class c_decal>(void)
//{
//    mangled_ppc("??1?$c_render_section_scope@Vc_decal@@@@QAA@XZ");
//};

//public: struct s_decal_collision_result const & c_array_operator_interface<class c_static_sized_dynamic_array<struct s_decal_collision_result, 16>, struct s_decal_collision_result>::operator[](long) const
//{
//    mangled_ppc("??A?$c_array_operator_interface@V?$c_static_sized_dynamic_array@Us_decal_collision_result@@$0BA@@@Us_decal_collision_result@@@@QBAABUs_decal_collision_result@@J@Z");
//};

//public: bool decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::need_raw_buffer(void)
//{
//    mangled_ppc("?need_raw_buffer@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@QAA_NXZ");
//};

//protected: static void decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::delete_block_proc(void *, long, bool, bool)
//{
//    mangled_ppc("?delete_block_proc@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@KAXPAXJ_N1@Z");
//};

//protected: static bool decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::locked_block_proc(void *, long)
//{
//    mangled_ppc("?locked_block_proc@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@KA_NPAXJ@Z");
//};

//protected: static unsigned char decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::usage_block_proc(void *, long)
//{
//    mangled_ppc("?usage_block_proc@?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@KAEPAXJ@Z");
//};

//public: bool decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::need_raw_buffer(void)
//{
//    mangled_ppc("?need_raw_buffer@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@QAA_NXZ");
//};

//protected: static void decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::delete_block_proc(void *, long, bool, bool)
//{
//    mangled_ppc("?delete_block_proc@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@KAXPAXJ_N1@Z");
//};

//protected: static bool decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::locked_block_proc(void *, long)
//{
//    mangled_ppc("?locked_block_proc@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@KA_NPAXJ@Z");
//};

//protected: static unsigned char decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::usage_block_proc(void *, long)
//{
//    mangled_ppc("?usage_block_proc@?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@KAEPAXJ@Z");
//};

//public: unsigned short * s_static_array<unsigned short, 1024>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@G$0EAA@@@QAAPAGXZ");
//};

//public: struct s_decal_collision_result const * c_static_sized_dynamic_array<struct s_decal_collision_result, 16>::begin(void) const
//{
//    mangled_ppc("?begin@?$c_static_sized_dynamic_array@Us_decal_collision_result@@$0BA@@@QBAPBUs_decal_collision_result@@XZ");
//};

//public: struct s_decal_collision_result const * s_static_array<struct s_decal_collision_result, 16>::begin(void) const
//{
//    mangled_ppc("?begin@?$s_static_array@Us_decal_collision_result@@$0BA@@@QBAPBUs_decal_collision_result@@XZ");
//};

//void data_dump<class c_decal>(struct s_data_array const *, char const *, enum e_event_level)
//{
//    mangled_ppc("??$data_dump@Vc_decal@@@@YAXPBUs_data_array@@PBDW4e_event_level@@@Z");
//};

//public: unsigned short const & s_static_array<unsigned short, 1024>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@G$0EAA@@@QBAABGJ@Z");
//};

//public: unsigned short & s_static_array<unsigned short, 1024>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@G$0EAA@@@QAAAAGJ@Z");
//};

//public: static bool s_static_array<unsigned short, 1024>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@G$0EAA@@@SA_NJ@Z");
//};

//public: t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>::t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$05$0A@$0A@$1?__tls_set_g_decal_array_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$05$0A@$0A@$1?__tls_set_g_decal_array_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$05$0A@$0A@$1?__tls_set_g_decal_array_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$05$0A@$0A@$1?__tls_set_g_decal_array_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$05$0A@$0A@$1?__tls_set_g_decal_array_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$05$0A@$0A@$1?__tls_set_g_decal_array_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: decal_workspace::c_vertex_allocator::c_vertex_allocator(unsigned long)
//{
//    mangled_ppc("??0c_vertex_allocator@decal_workspace@@QAA@K@Z");
//};

//public: virtual void decal_workspace::c_vertex_allocator::create_buffer(void)
//{
//    mangled_ppc("?create_buffer@c_vertex_allocator@decal_workspace@@UAAXXZ");
//};

//public: decal_workspace::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>::c_mesh_allocator<class c_rasterizer_vertex_buffer, struct rasterizer_vertex_world>(unsigned long)
//{
//    mangled_ppc("??0?$c_mesh_allocator@Vc_rasterizer_vertex_buffer@@Urasterizer_vertex_world@@@decal_workspace@@QAA@K@Z");
//};

//public: decal_workspace::c_index_allocator::c_index_allocator(unsigned long)
//{
//    mangled_ppc("??0c_index_allocator@decal_workspace@@QAA@K@Z");
//};

//public: virtual void decal_workspace::c_index_allocator::create_buffer(void)
//{
//    mangled_ppc("?create_buffer@c_index_allocator@decal_workspace@@UAAXXZ");
//};

//public: decal_workspace::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>::c_mesh_allocator<class c_rasterizer_index_buffer, unsigned short>(unsigned long)
//{
//    mangled_ppc("??0?$c_mesh_allocator@Vc_rasterizer_index_buffer@@G@decal_workspace@@QAA@K@Z");
//};

//public: t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>::~t_restricted_allocation_manager<6, 0, 0, void (__tls_set_g_decal_array_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$05$0A@$0A@$1?__tls_set_g_decal_array_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_decal_array_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_decal_array_allocator@@YAXXZ");
//};

