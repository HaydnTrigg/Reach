/* ---------- headers */

#include "omaha\gpu_particle\particle_block.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static bool const *const const c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list::x_in_place; // "?x_in_place@s_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@2QB_NB"
// public: static bool const *const const c_particle_emitter_gpu::s_update_vertex_shader_constant_list::x_in_place; // "?x_in_place@s_update_vertex_shader_constant_list@c_particle_emitter_gpu@@2QB_NB"
// public: static bool const *const const c_particle_emitter_gpu::s_render_vertex_shader_constant_list::x_in_place; // "?x_in_place@s_render_vertex_shader_constant_list@c_particle_emitter_gpu@@2QB_NB"
// public: static long const *const const c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list::x_names; // "?x_names@s_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@2QBJB"
// public: static long const *const const c_particle_emitter_gpu::s_update_vertex_shader_constant_list::x_names; // "?x_names@s_update_vertex_shader_constant_list@c_particle_emitter_gpu@@2QBJB"
// public: static long const *const const c_particle_emitter_gpu::s_render_vertex_shader_constant_list::x_names; // "?x_names@s_render_vertex_shader_constant_list@c_particle_emitter_gpu@@2QBJB"
// private: static enum e_effect_holdback_type const c_particle_emitter_gpu::x_holdback_type; // "?x_holdback_type@c_particle_emitter_gpu@@0W4e_effect_holdback_type@@B"
// private: static enum e_effect_holdback_type const c_particle_emitter_gpu::x_queue_holdback_type; // "?x_queue_holdback_type@c_particle_emitter_gpu@@0W4e_effect_holdback_type@@B"
// public: static enum e_effect_holdback_type const c_particle_emitter_gpu::s_row::x_holdback_type; // "?x_holdback_type@s_row@c_particle_emitter_gpu@@2W4e_effect_holdback_type@@B"
// public: static long const c_particle_movement_definition::k_particle_countdown_reset; // "?k_particle_countdown_reset@c_particle_movement_definition@@2JB"
// public: static unsigned long const c_particle_definition::s_gpu_data::s_frames::_max_frames; // "?_max_frames@s_frames@s_gpu_data@c_particle_definition@@2KB"
// public: static unsigned long const c_particle_model_definition::s_gpu_data::s_variants::_max_variants; // "?_max_variants@s_variants@s_gpu_data@c_particle_model_definition@@2KB"
// struct _D3DVERTEXELEMENT9const `public: void __cdecl s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::initialize(enum e_vertex_type, struct s_gpu_buffer_base *)'::`74'::x_terminator_element; // "?x_terminator_element@?EK@??initialize@?$s_gpu_layout@$0BA@W4e_state@c_particle_emitter_gpu@@@@QAAXW4e_vertex_type@@PAUs_gpu_buffer_base@@@Z@4U_D3DVERTEXELEMENT9@@B"
// long volatile `public: void __cdecl s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)'::`27'::x_event_category_index; // "?x_event_category_index@?BL@??initialize@?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z@4JC"
// long volatile `public: void __cdecl s_gpu_constant_table<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)'::`27'::x_event_category_index; // "?x_event_category_index@?BL@??initialize@?$s_gpu_constant_table@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z@4JC"
// long volatile `public: void __cdecl s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)'::`27'::x_event_category_index; // "?x_event_category_index@?BL@??initialize@?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z@4JC"
// long volatile `public: void __cdecl s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>::reset(void)'::`8'::x_event_category_index; // "?x_event_category_index@?7??reset@?$s_queued_gpu_buffer@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAXXZ@4JC"
// long volatile `private: void __cdecl c_particle_emitter_gpu::frame_advance<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(float, struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list *)'::`14'::x_event_category_index; // "?x_event_category_index@?O@???$frame_advance@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@AAAXMPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@PAVc_particle_state_list@@@Z@4JC"
// long volatile `void __cdecl data_dump<struct c_particle_emitter_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`22'::x_event_category_index; // "?x_event_category_index@?BG@???$data_dump@Us_row@c_particle_emitter_gpu@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<struct c_particle_emitter_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`15'::x_event_category_index; // "?x_event_category_index@?P@???$data_dump@Us_row@c_particle_emitter_gpu@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<struct c_particle_emitter_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`6'::x_event_category_index; // "?x_event_category_index@?5???$data_dump@Us_row@c_particle_emitter_gpu@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// private: static unsigned long c_particle_emitter_gpu::x_overall_particle_count; // "?x_overall_particle_count@c_particle_emitter_gpu@@0KA"
// private: static unsigned long c_particle_emitter_gpu::x_spawning_particle_count; // "?x_spawning_particle_count@c_particle_emitter_gpu@@0KA"
// private: static bool c_particle_emitter_gpu::x_queued_buffer_locked; // "?x_queued_buffer_locked@c_particle_emitter_gpu@@0_NA"
// private: static bool c_particle_emitter_gpu::x_debug_synchronous; // "?x_debug_synchronous@c_particle_emitter_gpu@@0_NA"
// private: static class t_restricted_allocation_manager<3, 0, 0, void (__cdecl c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)> c_particle_emitter_gpu::x_data_array_manager; // "?x_data_array_manager@c_particle_emitter_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_particle_emitter_gpu@@CAXPAX@Z@@A"
// public: static class t_restricted_allocation_manager<3, 0, 0, void (__cdecl c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)> c_particle_emitter_gpu::s_row::x_data_array_manager; // "?x_data_array_manager@s_row@c_particle_emitter_gpu@@2V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_particle_emitter_gpu@@SAXPAX@Z@@A"
// private: static class t_restricted_allocation_manager<3, 0, 0, void (__cdecl c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)> c_particle_emitter_gpu::x_gamestate_storage_manager; // "?x_gamestate_storage_manager@c_particle_emitter_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_particle_emitter_gpu@@CAXPAX@Z@@A"
// private: static struct s_gpu_buffer<16, 16, 448> c_particle_emitter_gpu::x_overall_storage; // "?x_overall_storage@c_particle_emitter_gpu@@0U?$s_gpu_buffer@$0BA@$0BA@$0BMA@@@A"
// private: static struct s_gpu_shader_pair<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list> c_particle_emitter_gpu::x_update_shader_pair; // "?x_update_shader_pair@c_particle_emitter_gpu@@0U?$s_gpu_shader_pair@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@Us_gpu_empty_constant_list@@@@A"
// private: static struct s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576> c_particle_emitter_gpu::x_queued_buffer_system; // "?x_queued_buffer_system@c_particle_emitter_gpu@@0U?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@A"
// private: static struct c_particle_emitter_gpu::s_layout c_particle_emitter_gpu::x_layout; // "?x_layout@c_particle_emitter_gpu@@0Us_layout@1@A"
// private: static struct s_gpu_shader_pair<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list> c_particle_emitter_gpu::x_spawn_shader_pair; // "?x_spawn_shader_pair@c_particle_emitter_gpu@@0U?$s_gpu_shader_pair@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@Us_gpu_empty_constant_list@@@@A"
// private: static struct s_gpu_global_vertex_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> c_particle_emitter_gpu::x_render_vertex_shader; // "?x_render_vertex_shader@c_particle_emitter_gpu@@0U?$s_gpu_global_vertex_shader@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@A"
// private: static struct s_gpu_global_vertex_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> c_particle_emitter_gpu::x_render_model_vertex_shader; // "?x_render_model_vertex_shader@c_particle_emitter_gpu@@0U?$s_gpu_global_vertex_shader@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@A"
// bool `void __cdecl data_dump<struct c_particle_emitter_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`2'::done_already; // "?done_already@?1???$data_dump@Us_row@c_particle_emitter_gpu@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4_NA"
// private: static struct s_data_array *c_particle_emitter_gpu::x_data_array; // "?x_data_array@c_particle_emitter_gpu@@0PAUs_data_array@@A"
// public: static struct s_data_array *c_particle_emitter_gpu::s_row::x_data_array; // "?x_data_array@s_row@c_particle_emitter_gpu@@2PAUs_data_array@@A"
// private: static void *c_particle_emitter_gpu::x_gamestate_storage; // "?x_gamestate_storage@c_particle_emitter_gpu@@0PAXA"

// public: static void c_particle_emitter_gpu::handle_game_state_after_load(void);
// public: static void c_particle_emitter_gpu::shell_initialize(void);
// public: static void c_particle_emitter_gpu::initialize_for_game(void);
// public: static unsigned long c_particle_emitter_gpu::s_pc_proxy::s_overall_storage::get_buffer_size(void);
// public: static unsigned long c_particle_emitter_gpu::s_pc_proxy::s_overall_storage::get_buffer_alignment_bits(void);
// public: static void c_particle_emitter_gpu::initialize_for_map(void);
// public: static void c_particle_emitter_gpu::dispose_from_map(void);
// public: static void c_particle_emitter_gpu::dispose_from_game(void);
// public: static void c_particle_emitter_gpu::reset(void);
// public: static long c_particle_emitter_gpu::create(unsigned char, long, long, long);
// public: static class c_particle_emitter_gpu * c_particle_emitter_gpu::get(long);
// public: class c_particle_emitter_definition const * c_particle_system_definition::get_emitter(long) const;
// public: static class c_particle_system * c_particle_system::get(long);
// public: void c_particle_emitter_gpu::clear(void);
// public: static void c_particle_emitter_gpu::destroy(long);
// public: char const * c_particle_emitter_gpu::get_name(void) const;
// public: char const * c_particle_system::get_effect_name(void) const;
// public: char const * c_particle_emitter_gpu::get_profile_name(void) const;
// public: static long c_particle_emitter_gpu::s_row::create(unsigned char, long, bool);
// public: static struct c_particle_emitter_gpu::s_row * c_particle_emitter_gpu::s_row::get(long);
// public: static struct c_particle_emitter_gpu::s_row * c_particle_emitter_gpu::s_row::try_get(long);
// public: static void c_particle_emitter_gpu::s_row::destroy(long, bool);
// private: static void c_particle_emitter_gpu::initialize_layout(void);
// private: static void c_particle_emitter_gpu::initialize_data_buffers(void);
// private: static void c_particle_emitter_gpu::initialize_gamestate_data_buffers(void);
// private: static void c_particle_emitter_gpu::initialize_shaders(void);
// private: static void c_particle_emitter_gpu::dispose_shaders(void);
// private: void c_particle_emitter_gpu::check_valid_gpu_address(unsigned long);
// public: long c_particle_emitter_gpu::s_row::get_used_start(bool) const;
// private: unsigned long c_particle_emitter_gpu::allocate_particle(unsigned char, float, bool);
// public: long c_particle_emitter_gpu::s_row::get_used_count(void) const;
// public: unsigned long c_particle_emitter_gpu::queue_particle(unsigned char, class c_particle const *, float, bool, bool);
// public: static void c_particle_emitter_gpu::lock_queue_buffer(void);
// public: static void c_particle_emitter_gpu::unlock_queue_buffer(void);
// public: static void c_particle_emitter_gpu::spawn_all(void);
// public: static void c_particle_emitter_gpu::frame_advance_all(float);
// public: c_particle_state_list::c_particle_state_list(void);
// public: void c_particle_state_list::set_null_particle(void);
// public: void c_particle_emitter_gpu::render(void) const;
// public: long c_particle_system::get_tag_definition_index(void) const;
// public: long c_particle_system::get_lightprobe_index(void) const;
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
// public: class c_render_method_shader_particle const * c_particle_definition::get_shader(void) const;
// public: bool c_particle_definition::get_particle_motion_blur(void) const;
// public: bool c_particle_definition::get_particle_double_sided(void) const;
// public: bool c_particle_definition::get_particle_fogged(void) const;
// public: bool c_particle_definition::get_particle_lightmap_lit(void) const;
// public: bool c_particle_definition::get_particle_depth_fade_active(void) const;
// public: bool c_particle_definition::get_particle_distortion_active(void) const;
// public: bool c_particle_definition::get_particle_is_particle_model(void) const;
// public: bool c_particle_definition::get_particle_tighter_mask(void) const;
// public: bool c_particle_definition::get_particle_uses_smoke_lighting(void) const;
// public: static class c_particle_definition const * c_particle_definition::get(long);
// public: static class c_particle_location * c_particle_location::get(long);
// public: union real_point3d const * c_particle_location::get_position(void) const;
// public: static class c_particle_emitter * c_particle_emitter::get(long);
// public: long c_particle_emitter::get_parent_location_index(void) const;
// public: struct c_particle_model_definition::s_gpu_data::s_variants::s_variant const * c_particle_model_definition::get_gpu_variant_data(void) const;
// public: struct c_particle_model_definition::s_gpu_data::s_variants::s_variant const * c_particle_model_definition::s_gpu_data::get_variants(void) const;
// public: void * t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// private: static void c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager(void *);
// public: void s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::initialize_layout(enum e_vertex_type);
// public: void s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::initialize_data_buffers(void);
// public: void s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::reset_active(void);
// public: struct c_particle_emitter_gpu::s_layout * s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::get_active_state_layout(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status);
// public: struct s_gpu_address_layout * s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::get_active_address_layout(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status);
// public: struct s_gpu_buffer_base const * s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::get_active_state_buffer(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status);
// public: struct s_gpu_buffer_base const * s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::get_active_address_buffer(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status);
// public: long s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::get_active_count(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status);
// public: long s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::increment_active_count(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status);
// public: void s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::lock_active_buffer(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status);
// public: void s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::unlock_active_buffer(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status);
// public: bool s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::active_buffer_locked(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status);
// public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::initialize(void);
// public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::dispose(void);
// public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::set_shader_pair(void);
// public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::unset_shader_pair(void);
// public: struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list> const * s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::get_constant_table(void) const;
// public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::initialize(void);
// public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::dispose(void);
// public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::set_shader_pair(void);
// public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::unset_shader_pair(void);
// public: struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const * s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::get_constant_table(void) const;
// public: void s_gpu_global_vertex_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::initialize(struct s_tag_reference const *);
// public: struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const * s_gpu_global_vertex_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::get_constant_table(void) const;
// public: bool s_gpu_global_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::is_initialized(void) const;
// public: void s_gpu_global_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::dispose(void);
// public: void c_data_iterator<class c_particle_emitter_gpu>::begin(struct s_data_array *);
// public: bool c_data_iterator<class c_particle_emitter_gpu>::next(void);
// public: class c_particle_emitter_gpu * c_data_iterator<class c_particle_emitter_gpu>::get_datum(void) const;
// public: c_render_section_scope<class c_particle_emitter_gpu>::c_render_section_scope<class c_particle_emitter_gpu>(class c_particle_emitter_gpu const *);
// public: c_render_section_scope<class c_particle_emitter_gpu>::~c_render_section_scope<class c_particle_emitter_gpu>(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::valid(void) const;
// private: struct s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576> * s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::get_active_buffer(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status);
// public: void s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>::lock_gpu_buffers(void);
// public: void s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>::unlock_gpu_buffers(void);
// public: bool s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>::gpu_buffer_locked(void) const;
// public: void s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::initialize(void);
// public: bool s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::set_shader(void);
// D3DDevice_GpuOwnVertexShaderConstantF;
// D3DTagCollection_Clear;
// D3DDevice_GpuOwnPixelShaderConstantF;
// public: void s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::unset_shader(void);
// D3DDevice_GpuDisownVertexShaderConstantF;
// D3DDevice_GpuDisownPixelShaderConstantF;
// public: void s_gpu_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::dispose(void);
// public: void s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::initialize(void);
// public: bool s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::set_shader(void);
// public: void s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::unset_shader(void);
// public: void s_gpu_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::dispose(void);
// private: class c_rasterizer_constant_table_definition const * s_gpu_global_vertex_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::initialize_constant_table(void);
// public: void s_gpu_global_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *);
// private: class c_rasterizer_constant_table_definition const * s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::initialize_constant_table(void);
// public: void s_gpu_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *);
// private: class c_rasterizer_constant_table_definition const * s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::initialize_constant_table(void);
// public: void s_gpu_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *);
// public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *);
// public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *);
// public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *);
// public: void s_gpu_storage<unsigned __int64, 0, 26, 0, 1, 10, 1712218, -1>::set_value(unsigned long, unsigned long, struct __vector4const &);
// public: void s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::set_value(unsigned long, unsigned long, struct __vector4const &);
// public: static unsigned long s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::pack(struct __vector4const &);
// public: void s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::initialize(enum e_vertex_type, struct s_gpu_buffer_base *);
// public: void s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::initialize_data_buffers(struct s_gpu_buffer_base *);
// public: void s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::swap(void);
// public: void s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>::initialize_layout(enum e_vertex_type);
// public: void s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>::initialize_data_buffers(void);
// public: void s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>::reset(void);
// void data_dump<struct c_particle_emitter_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level);
// public: void s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::set_memexport<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list> const *);
// public: void s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::set_memexport<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *);
// private: void c_particle_emitter_gpu::frame_advance<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(float, struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list *);
// public: long c_particle_system::get_effect_index(void) const;
// public: bool c_particle_system::get_attached_to_camera(void) const;
// public: bool c_particle_emitter::get_was_frame_advanced_this_frame(void) const;
// public: float c_editable_property<class c_particle_state_list>::evaluate(class c_particle_state_list const *) const;
// private: void c_particle_emitter_gpu::set_shader_variants<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *) const;
// public: struct c_particle_definition::s_gpu_data::s_sprite const * c_particle_definition::get_gpu_sprite_data(void) const;
// public: struct c_particle_definition::s_gpu_data::s_sprite const * c_particle_definition::s_gpu_data::get_sprite(void) const;
// public: struct c_particle_definition::s_gpu_data::s_frames::s_frame const * c_particle_definition::get_gpu_frame_data(void) const;
// public: struct c_particle_definition::s_gpu_data::s_frames::s_frame const * c_particle_definition::s_gpu_data::get_frames(void) const;
// public: long c_particle_definition::get_gpu_frame_count(void) const;
// public: long c_particle_definition::s_gpu_data::get_frame_count(void) const;
// public: long c_particle_model_definition::get_gpu_variant_count(void) const;
// public: long c_particle_model_definition::s_gpu_data::get_variant_count(void) const;
// private: void c_particle_emitter_gpu::set_shader_render_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *, unsigned long) const;
// public: union vector2d const * c_particle_emitter_definition::get_uv_scroll_rate(void) const;
// public: bool c_particle_location::get_first_person(void) const;
// private: void c_particle_emitter_gpu::set_shader_motion_blur_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *) const;
// public: static struct s_observer_result const * c_particle_system::get_observer_result(void);
// public: float c_editable_property_base::evaluate<class c_particle_state_list>(class c_particle_state_list const *) const;
// public: float c_particle_state_list::get_state_value(long) const;
// private: struct s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576> const * s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::set_active_buffer(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status, struct s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576> *);
// public: void s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::set_value(unsigned long, unsigned long, unsigned long const &);
// void data_dump<struct c_particle_emitter_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level, bool);
// public: static char const * c_particle_emitter_gpu::s_row::get_name(void);
// public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::set_struct<struct s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::s_memexport_set>(enum c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list::e_index, struct s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::s_memexport_set const *) const;
// public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::set_struct<struct s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::s_memexport_set>(enum c_particle_emitter_gpu::s_update_vertex_shader_constant_list::e_index, struct s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::s_memexport_set const *) const;
// private: void c_particle_emitter_gpu::set_shader_functions<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *) const;
// public: float const (* c_particle_emitter_definition::get_gpu_function_data(void) const)[16];
// public: float const (* c_particle_emitter_definition::s_gpu_data::get_functions(void) const)[16];
// public: float const (* c_particle_emitter_definition::get_gpu_color_data(void) const)[4];
// public: float const (* c_particle_emitter_definition::s_gpu_data::get_colors(void) const)[4];
// public: float const (* c_particle_emitter_definition::get_gpu_property_data(void) const)[4];
// public: float const (* c_particle_emitter_definition::s_gpu_data::get_properties(void) const)[4];
// public: long c_particle_emitter_definition::get_gpu_function_count(void) const;
// public: long c_particle_emitter_definition::s_gpu_data::get_function_count(void) const;
// public: long c_particle_emitter_definition::get_gpu_color_count(void) const;
// public: long c_particle_emitter_definition::s_gpu_data::get_color_count(void) const;
// public: long c_particle_emitter_definition::get_gpu_property_count(void) const;
// public: long c_particle_emitter_definition::s_gpu_data::get_property_count(void) const;
// private: void c_particle_emitter_gpu::set_shader_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const;
// public: unsigned long c_particle_emitter_definition::get_used_particle_states(void) const;
// private: void c_particle_emitter_gpu::set_shader_update_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const;
// public: unsigned short c_particle_movement_definition::get_flags(void) const;
// public: bool c_particle_emitter_definition::is_cpu(void) const;
// public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::set_struct<struct c_particle_definition::s_gpu_data::s_sprite>(enum c_particle_emitter_gpu::s_render_vertex_shader_constant_list::e_index, struct c_particle_definition::s_gpu_data::s_sprite const *) const;
// public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::set_struct_partial<struct c_particle_definition::s_gpu_data::s_frames::s_frame>(enum c_particle_emitter_gpu::s_render_vertex_shader_constant_list::e_index, unsigned long, struct c_particle_definition::s_gpu_data::s_frames::s_frame const *) const;
// public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::set_struct_partial<struct c_particle_model_definition::s_gpu_data::s_variants::s_variant>(enum c_particle_emitter_gpu::s_render_vertex_shader_constant_list::e_index, unsigned long, struct c_particle_model_definition::s_gpu_data::s_variants::s_variant const *) const;
// public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::set_struct<struct `private: void c_particle_emitter_gpu::set_shader_render_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *, unsigned long) const'::`2'::s_render_state>(enum c_particle_emitter_gpu::s_render_vertex_shader_constant_list::e_index, struct `private: void c_particle_emitter_gpu::set_shader_render_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *, unsigned long) const'::`2'::s_render_state const *) const;
// public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::set_struct<struct `private: void c_particle_emitter_gpu::set_shader_motion_blur_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_motion_blur_state>(enum c_particle_emitter_gpu::s_render_vertex_shader_constant_list::e_index, struct `private: void c_particle_emitter_gpu::set_shader_motion_blur_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_motion_blur_state const *) const;
// public: void c_data_iterator<struct c_particle_emitter_gpu::s_row>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct c_particle_emitter_gpu::s_row>::next(void);
// public: struct c_particle_emitter_gpu::s_row * c_data_iterator<struct c_particle_emitter_gpu::s_row>::get_datum(void) const;
// public: void s_gpu_constant_table_base::set_struct<struct s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::s_memexport_set>(unsigned long, struct s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::s_memexport_set const *) const;
// D3DDevice_GpuEndShaderConstantF4;
// public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::set_struct_partial<float const[16]>(enum c_particle_emitter_gpu::s_update_vertex_shader_constant_list::e_index, unsigned long, float const (*)[16]) const;
// public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::set_struct_partial<float const[4]>(enum c_particle_emitter_gpu::s_update_vertex_shader_constant_list::e_index, unsigned long, float const (*)[4]) const;
// public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::set_struct_partial<struct `private: void c_particle_emitter_gpu::set_shader_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`2'::s_gpu_single_state>(enum c_particle_emitter_gpu::s_update_vertex_shader_constant_list::e_index, unsigned long, struct `private: void c_particle_emitter_gpu::set_shader_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`2'::s_gpu_single_state const *) const;
// public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::set_struct<struct `private: void c_particle_emitter_gpu::set_shader_update_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`5'::s_update_state>(enum c_particle_emitter_gpu::s_update_vertex_shader_constant_list::e_index, struct `private: void c_particle_emitter_gpu::set_shader_update_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`5'::s_update_state const *) const;
// public: void s_gpu_constant_table_base::set_struct<struct c_particle_definition::s_gpu_data::s_sprite>(unsigned long, struct c_particle_definition::s_gpu_data::s_sprite const *) const;
// public: void s_gpu_constant_table_base::set_struct_partial<struct c_particle_definition::s_gpu_data::s_frames::s_frame>(unsigned long, unsigned long, struct c_particle_definition::s_gpu_data::s_frames::s_frame const *) const;
// public: void s_gpu_constant_table_base::set_struct_partial<struct c_particle_model_definition::s_gpu_data::s_variants::s_variant>(unsigned long, unsigned long, struct c_particle_model_definition::s_gpu_data::s_variants::s_variant const *) const;
// public: void s_gpu_constant_table_base::set_struct<struct `private: void c_particle_emitter_gpu::set_shader_render_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *, unsigned long) const'::`2'::s_render_state>(unsigned long, struct `private: void c_particle_emitter_gpu::set_shader_render_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *, unsigned long) const'::`2'::s_render_state const *) const;
// public: void s_gpu_constant_table_base::set_struct<struct `private: void c_particle_emitter_gpu::set_shader_motion_blur_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_motion_blur_state>(unsigned long, struct `private: void c_particle_emitter_gpu::set_shader_motion_blur_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_motion_blur_state const *) const;
// public: void s_gpu_constant_table_base::set_struct_partial<struct `private: void c_particle_emitter_gpu::set_shader_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`2'::s_gpu_single_state>(unsigned long, unsigned long, struct `private: void c_particle_emitter_gpu::set_shader_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`2'::s_gpu_single_state const *) const;
// public: void s_gpu_constant_table_base::set_struct<struct `private: void c_particle_emitter_gpu::set_shader_update_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`5'::s_update_state>(unsigned long, struct `private: void c_particle_emitter_gpu::set_shader_update_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`5'::s_update_state const *) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// private: static void c_particle_emitter_gpu::__tls_set_x_data_array_manager(void *);
// public: void t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: static void c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager(void *);
// public: void t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::free_memory(void);
// public: s_gpu_buffer<16, 16, 448>::s_gpu_buffer<16, 16, 448>(void);
// public: s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>(void);
// public: s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>::s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>(void);
// public: c_particle_emitter_gpu::s_layout::s_layout(void);
// public: s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>(enum e_rasterizer_vertex_attribute const &, unsigned long const &);
// public: virtual unsigned int s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::get_size(void) const;
// public: virtual long s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::get_vertex_format(void) const;
// public: virtual long s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::get_d3d_type(void) const;
// public: s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>(enum e_rasterizer_vertex_attribute const &, unsigned long const &);
// public: virtual unsigned int s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::get_size(void) const;
// public: virtual long s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::get_vertex_format(void) const;
// public: virtual long s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::get_d3d_type(void) const;
// public: s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>(void);
// public: s_gpu_buffer<16, 576, 1>::s_gpu_buffer<16, 576, 1>(void);
// public: s_gpu_buffer<17, 576, 1>::s_gpu_buffer<17, 576, 1>(void);
// public: virtual void s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::initialize_layout(unsigned long, unsigned long);
// public: virtual void s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::initialize_data_buffers(void);
// public: virtual void s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::fill(struct __vector4const &);
// public: static unsigned long s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::pack(struct __vector4const &);
// public: virtual void s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::fill(unsigned short, struct __vector4const &);
// public: virtual void s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::initialize_layout(unsigned long, unsigned long);
// public: virtual void s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::initialize_data_buffers(void);
// public: virtual void s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::fill(struct __vector4const &);
// public: virtual void s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::fill(unsigned short, struct __vector4const &);
// public: s_gpu_shader_pair<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::s_gpu_shader_pair<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type);
// public: s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type);
// public: s_gpu_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::s_gpu_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader);
// public: s_gpu_constant_table<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::s_gpu_constant_table<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>(void);
// public: s_gpu_shader_pair<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::s_gpu_shader_pair<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type);
// public: s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type);
// public: s_gpu_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::s_gpu_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader);
// public: s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(void);
// public: s_gpu_global_vertex_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::s_gpu_global_vertex_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(enum e_vertex_type);
// public: s_gpu_global_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::s_gpu_global_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(void);
// public: s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>(void);
// ??__F?x_data_array_manager@c_particle_emitter_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_particle_emitter_gpu@@CAXPAX@Z@@A@@YAXXZ;
// ??__F?x_data_array_manager@s_row@c_particle_emitter_gpu@@2V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_particle_emitter_gpu@@SAXPAX@Z@@A@@YAXXZ;
// ??__F?x_gamestate_storage_manager@c_particle_emitter_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_particle_emitter_gpu@@CAXPAX@Z@@A@@YAXXZ;

//public: static void c_particle_emitter_gpu::handle_game_state_after_load(void)
//{
//    mangled_ppc("?handle_game_state_after_load@c_particle_emitter_gpu@@SAXXZ");
//};

//public: static void c_particle_emitter_gpu::shell_initialize(void)
//{
//    mangled_ppc("?shell_initialize@c_particle_emitter_gpu@@SAXXZ");
//};

//public: static void c_particle_emitter_gpu::initialize_for_game(void)
//{
//    mangled_ppc("?initialize_for_game@c_particle_emitter_gpu@@SAXXZ");
//};

//public: static unsigned long c_particle_emitter_gpu::s_pc_proxy::s_overall_storage::get_buffer_size(void)
//{
//    mangled_ppc("?get_buffer_size@s_overall_storage@s_pc_proxy@c_particle_emitter_gpu@@SAKXZ");
//};

//public: static unsigned long c_particle_emitter_gpu::s_pc_proxy::s_overall_storage::get_buffer_alignment_bits(void)
//{
//    mangled_ppc("?get_buffer_alignment_bits@s_overall_storage@s_pc_proxy@c_particle_emitter_gpu@@SAKXZ");
//};

//public: static void c_particle_emitter_gpu::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@c_particle_emitter_gpu@@SAXXZ");
//};

//public: static void c_particle_emitter_gpu::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@c_particle_emitter_gpu@@SAXXZ");
//};

//public: static void c_particle_emitter_gpu::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@c_particle_emitter_gpu@@SAXXZ");
//};

//public: static void c_particle_emitter_gpu::reset(void)
//{
//    mangled_ppc("?reset@c_particle_emitter_gpu@@SAXXZ");
//};

//public: static long c_particle_emitter_gpu::create(unsigned char, long, long, long)
//{
//    mangled_ppc("?create@c_particle_emitter_gpu@@SAJEJJJ@Z");
//};

//public: static class c_particle_emitter_gpu * c_particle_emitter_gpu::get(long)
//{
//    mangled_ppc("?get@c_particle_emitter_gpu@@SAPAV1@J@Z");
//};

//public: class c_particle_emitter_definition const * c_particle_system_definition::get_emitter(long) const
//{
//    mangled_ppc("?get_emitter@c_particle_system_definition@@QBAPBVc_particle_emitter_definition@@J@Z");
//};

//public: static class c_particle_system * c_particle_system::get(long)
//{
//    mangled_ppc("?get@c_particle_system@@SAPAV1@J@Z");
//};

//public: void c_particle_emitter_gpu::clear(void)
//{
//    mangled_ppc("?clear@c_particle_emitter_gpu@@QAAXXZ");
//};

//public: static void c_particle_emitter_gpu::destroy(long)
//{
//    mangled_ppc("?destroy@c_particle_emitter_gpu@@SAXJ@Z");
//};

//public: char const * c_particle_emitter_gpu::get_name(void) const
//{
//    mangled_ppc("?get_name@c_particle_emitter_gpu@@QBAPBDXZ");
//};

//public: char const * c_particle_system::get_effect_name(void) const
//{
//    mangled_ppc("?get_effect_name@c_particle_system@@QBAPBDXZ");
//};

//public: char const * c_particle_emitter_gpu::get_profile_name(void) const
//{
//    mangled_ppc("?get_profile_name@c_particle_emitter_gpu@@QBAPBDXZ");
//};

//public: static long c_particle_emitter_gpu::s_row::create(unsigned char, long, bool)
//{
//    mangled_ppc("?create@s_row@c_particle_emitter_gpu@@SAJEJ_N@Z");
//};

//public: static struct c_particle_emitter_gpu::s_row * c_particle_emitter_gpu::s_row::get(long)
//{
//    mangled_ppc("?get@s_row@c_particle_emitter_gpu@@SAPAU12@J@Z");
//};

//public: static struct c_particle_emitter_gpu::s_row * c_particle_emitter_gpu::s_row::try_get(long)
//{
//    mangled_ppc("?try_get@s_row@c_particle_emitter_gpu@@SAPAU12@J@Z");
//};

//public: static void c_particle_emitter_gpu::s_row::destroy(long, bool)
//{
//    mangled_ppc("?destroy@s_row@c_particle_emitter_gpu@@SAXJ_N@Z");
//};

//private: static void c_particle_emitter_gpu::initialize_layout(void)
//{
//    mangled_ppc("?initialize_layout@c_particle_emitter_gpu@@CAXXZ");
//};

//private: static void c_particle_emitter_gpu::initialize_data_buffers(void)
//{
//    mangled_ppc("?initialize_data_buffers@c_particle_emitter_gpu@@CAXXZ");
//};

//private: static void c_particle_emitter_gpu::initialize_gamestate_data_buffers(void)
//{
//    mangled_ppc("?initialize_gamestate_data_buffers@c_particle_emitter_gpu@@CAXXZ");
//};

//private: static void c_particle_emitter_gpu::initialize_shaders(void)
//{
//    mangled_ppc("?initialize_shaders@c_particle_emitter_gpu@@CAXXZ");
//};

//private: static void c_particle_emitter_gpu::dispose_shaders(void)
//{
//    mangled_ppc("?dispose_shaders@c_particle_emitter_gpu@@CAXXZ");
//};

//private: void c_particle_emitter_gpu::check_valid_gpu_address(unsigned long)
//{
//    mangled_ppc("?check_valid_gpu_address@c_particle_emitter_gpu@@AAAXK@Z");
//};

//public: long c_particle_emitter_gpu::s_row::get_used_start(bool) const
//{
//    mangled_ppc("?get_used_start@s_row@c_particle_emitter_gpu@@QBAJ_N@Z");
//};

//private: unsigned long c_particle_emitter_gpu::allocate_particle(unsigned char, float, bool)
//{
//    mangled_ppc("?allocate_particle@c_particle_emitter_gpu@@AAAKEM_N@Z");
//};

//public: long c_particle_emitter_gpu::s_row::get_used_count(void) const
//{
//    mangled_ppc("?get_used_count@s_row@c_particle_emitter_gpu@@QBAJXZ");
//};

//public: unsigned long c_particle_emitter_gpu::queue_particle(unsigned char, class c_particle const *, float, bool, bool)
//{
//    mangled_ppc("?queue_particle@c_particle_emitter_gpu@@QAAKEPBVc_particle@@M_N1@Z");
//};

//public: static void c_particle_emitter_gpu::lock_queue_buffer(void)
//{
//    mangled_ppc("?lock_queue_buffer@c_particle_emitter_gpu@@SAXXZ");
//};

//public: static void c_particle_emitter_gpu::unlock_queue_buffer(void)
//{
//    mangled_ppc("?unlock_queue_buffer@c_particle_emitter_gpu@@SAXXZ");
//};

//public: static void c_particle_emitter_gpu::spawn_all(void)
//{
//    mangled_ppc("?spawn_all@c_particle_emitter_gpu@@SAXXZ");
//};

//public: static void c_particle_emitter_gpu::frame_advance_all(float)
//{
//    mangled_ppc("?frame_advance_all@c_particle_emitter_gpu@@SAXM@Z");
//};

//public: c_particle_state_list::c_particle_state_list(void)
//{
//    mangled_ppc("??0c_particle_state_list@@QAA@XZ");
//};

//public: void c_particle_state_list::set_null_particle(void)
//{
//    mangled_ppc("?set_null_particle@c_particle_state_list@@QAAXXZ");
//};

//public: void c_particle_emitter_gpu::render(void) const
//{
//    mangled_ppc("?render@c_particle_emitter_gpu@@QBAXXZ");
//};

//public: long c_particle_system::get_tag_definition_index(void) const
//{
//    mangled_ppc("?get_tag_definition_index@c_particle_system@@QBAJXZ");
//};

//public: long c_particle_system::get_lightprobe_index(void) const
//{
//    mangled_ppc("?get_lightprobe_index@c_particle_system@@QBAJXZ");
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

//public: class c_render_method_shader_particle const * c_particle_definition::get_shader(void) const
//{
//    mangled_ppc("?get_shader@c_particle_definition@@QBAPBVc_render_method_shader_particle@@XZ");
//};

//public: bool c_particle_definition::get_particle_motion_blur(void) const
//{
//    mangled_ppc("?get_particle_motion_blur@c_particle_definition@@QBA_NXZ");
//};

//public: bool c_particle_definition::get_particle_double_sided(void) const
//{
//    mangled_ppc("?get_particle_double_sided@c_particle_definition@@QBA_NXZ");
//};

//public: bool c_particle_definition::get_particle_fogged(void) const
//{
//    mangled_ppc("?get_particle_fogged@c_particle_definition@@QBA_NXZ");
//};

//public: bool c_particle_definition::get_particle_lightmap_lit(void) const
//{
//    mangled_ppc("?get_particle_lightmap_lit@c_particle_definition@@QBA_NXZ");
//};

//public: bool c_particle_definition::get_particle_depth_fade_active(void) const
//{
//    mangled_ppc("?get_particle_depth_fade_active@c_particle_definition@@QBA_NXZ");
//};

//public: bool c_particle_definition::get_particle_distortion_active(void) const
//{
//    mangled_ppc("?get_particle_distortion_active@c_particle_definition@@QBA_NXZ");
//};

//public: bool c_particle_definition::get_particle_is_particle_model(void) const
//{
//    mangled_ppc("?get_particle_is_particle_model@c_particle_definition@@QBA_NXZ");
//};

//public: bool c_particle_definition::get_particle_tighter_mask(void) const
//{
//    mangled_ppc("?get_particle_tighter_mask@c_particle_definition@@QBA_NXZ");
//};

//public: bool c_particle_definition::get_particle_uses_smoke_lighting(void) const
//{
//    mangled_ppc("?get_particle_uses_smoke_lighting@c_particle_definition@@QBA_NXZ");
//};

//public: static class c_particle_definition const * c_particle_definition::get(long)
//{
//    mangled_ppc("?get@c_particle_definition@@SAPBV1@J@Z");
//};

//public: static class c_particle_location * c_particle_location::get(long)
//{
//    mangled_ppc("?get@c_particle_location@@SAPAV1@J@Z");
//};

//public: union real_point3d const * c_particle_location::get_position(void) const
//{
//    mangled_ppc("?get_position@c_particle_location@@QBAPBTreal_point3d@@XZ");
//};

//public: static class c_particle_emitter * c_particle_emitter::get(long)
//{
//    mangled_ppc("?get@c_particle_emitter@@SAPAV1@J@Z");
//};

//public: long c_particle_emitter::get_parent_location_index(void) const
//{
//    mangled_ppc("?get_parent_location_index@c_particle_emitter@@QBAJXZ");
//};

//public: struct c_particle_model_definition::s_gpu_data::s_variants::s_variant const * c_particle_model_definition::get_gpu_variant_data(void) const
//{
//    mangled_ppc("?get_gpu_variant_data@c_particle_model_definition@@QBAPBUs_variant@s_variants@s_gpu_data@1@XZ");
//};

//public: struct c_particle_model_definition::s_gpu_data::s_variants::s_variant const * c_particle_model_definition::s_gpu_data::get_variants(void) const
//{
//    mangled_ppc("?get_variants@s_gpu_data@c_particle_model_definition@@QBAPBUs_variant@s_variants@12@XZ");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_particle_emitter_gpu@@CAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//private: static void c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager(void *)
//{
//    mangled_ppc("?__tls_set_x_gamestate_storage_manager@c_particle_emitter_gpu@@CAXPAX@Z");
//};

//public: void s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::initialize_layout(enum e_vertex_type)
//{
//    mangled_ppc("?initialize_layout@?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAXW4e_vertex_type@@@Z");
//};

//public: void s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::initialize_data_buffers(void)
//{
//    mangled_ppc("?initialize_data_buffers@?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAXXZ");
//};

//public: void s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::reset_active(void)
//{
//    mangled_ppc("?reset_active@?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAXXZ");
//};

//public: struct c_particle_emitter_gpu::s_layout * s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::get_active_state_layout(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status)
//{
//    mangled_ppc("?get_active_state_layout@?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAPAUs_layout@c_particle_emitter_gpu@@W4e_status@1@@Z");
//};

//public: struct s_gpu_address_layout * s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::get_active_address_layout(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status)
//{
//    mangled_ppc("?get_active_address_layout@?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAPAUs_gpu_address_layout@@W4e_status@1@@Z");
//};

//public: struct s_gpu_buffer_base const * s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::get_active_state_buffer(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status)
//{
//    mangled_ppc("?get_active_state_buffer@?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAPBUs_gpu_buffer_base@@W4e_status@1@@Z");
//};

//public: struct s_gpu_buffer_base const * s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::get_active_address_buffer(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status)
//{
//    mangled_ppc("?get_active_address_buffer@?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAPBUs_gpu_buffer_base@@W4e_status@1@@Z");
//};

//public: long s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::get_active_count(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status)
//{
//    mangled_ppc("?get_active_count@?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAJW4e_status@1@@Z");
//};

//public: long s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::increment_active_count(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status)
//{
//    mangled_ppc("?increment_active_count@?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAJW4e_status@1@@Z");
//};

//public: void s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::lock_active_buffer(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status)
//{
//    mangled_ppc("?lock_active_buffer@?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAXW4e_status@1@@Z");
//};

//public: void s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::unlock_active_buffer(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status)
//{
//    mangled_ppc("?unlock_active_buffer@?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAXW4e_status@1@@Z");
//};

//public: bool s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::active_buffer_locked(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status)
//{
//    mangled_ppc("?active_buffer_locked@?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAA_NW4e_status@1@@Z");
//};

//public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::initialize(void)
//{
//    mangled_ppc("?initialize@?$s_gpu_shader_pair@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::dispose(void)
//{
//    mangled_ppc("?dispose@?$s_gpu_shader_pair@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::set_shader_pair(void)
//{
//    mangled_ppc("?set_shader_pair@?$s_gpu_shader_pair@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::unset_shader_pair(void)
//{
//    mangled_ppc("?unset_shader_pair@?$s_gpu_shader_pair@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list> const * s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::get_constant_table(void) const
//{
//    mangled_ppc("?get_constant_table@?$s_gpu_vertex_shader@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QBAPBU?$s_gpu_constant_table@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@@XZ");
//};

//public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::initialize(void)
//{
//    mangled_ppc("?initialize@?$s_gpu_shader_pair@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::dispose(void)
//{
//    mangled_ppc("?dispose@?$s_gpu_shader_pair@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::set_shader_pair(void)
//{
//    mangled_ppc("?set_shader_pair@?$s_gpu_shader_pair@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: void s_gpu_shader_pair<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::unset_shader_pair(void)
//{
//    mangled_ppc("?unset_shader_pair@?$s_gpu_shader_pair@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const * s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::get_constant_table(void) const
//{
//    mangled_ppc("?get_constant_table@?$s_gpu_vertex_shader@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QBAPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@XZ");
//};

//public: void s_gpu_global_vertex_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::initialize(struct s_tag_reference const *)
//{
//    mangled_ppc("?initialize@?$s_gpu_global_vertex_shader@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXPBUs_tag_reference@@@Z");
//};

//public: struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const * s_gpu_global_vertex_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::get_constant_table(void) const
//{
//    mangled_ppc("?get_constant_table@?$s_gpu_global_vertex_shader@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QBAPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@XZ");
//};

//public: bool s_gpu_global_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::is_initialized(void) const
//{
//    mangled_ppc("?is_initialized@?$s_gpu_global_shader@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QBA_NXZ");
//};

//public: void s_gpu_global_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::dispose(void)
//{
//    mangled_ppc("?dispose@?$s_gpu_global_shader@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXXZ");
//};

//public: void c_data_iterator<class c_particle_emitter_gpu>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Vc_particle_emitter_gpu@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<class c_particle_emitter_gpu>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Vc_particle_emitter_gpu@@@@QAA_NXZ");
//};

//public: class c_particle_emitter_gpu * c_data_iterator<class c_particle_emitter_gpu>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Vc_particle_emitter_gpu@@@@QBAPAVc_particle_emitter_gpu@@XZ");
//};

//public: c_render_section_scope<class c_particle_emitter_gpu>::c_render_section_scope<class c_particle_emitter_gpu>(class c_particle_emitter_gpu const *)
//{
//    mangled_ppc("??0?$c_render_section_scope@Vc_particle_emitter_gpu@@@@QAA@PBVc_particle_emitter_gpu@@@Z");
//};

//public: c_render_section_scope<class c_particle_emitter_gpu>::~c_render_section_scope<class c_particle_emitter_gpu>(void)
//{
//    mangled_ppc("??1?$c_render_section_scope@Vc_particle_emitter_gpu@@@@QAA@XZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_particle_emitter_gpu@@CAXPAX@Z@@QBA_NXZ");
//};

//private: struct s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576> * s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::get_active_buffer(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status)
//{
//    mangled_ppc("?get_active_buffer@?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@AAAPAU?$s_queued_gpu_buffer@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@W4e_status@1@@Z");
//};

//public: void s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>::lock_gpu_buffers(void)
//{
//    mangled_ppc("?lock_gpu_buffers@?$s_queued_gpu_buffer@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAXXZ");
//};

//public: void s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>::unlock_gpu_buffers(void)
//{
//    mangled_ppc("?unlock_gpu_buffers@?$s_queued_gpu_buffer@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAXXZ");
//};

//public: bool s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>::gpu_buffer_locked(void) const
//{
//    mangled_ppc("?gpu_buffer_locked@?$s_queued_gpu_buffer@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QBA_NXZ");
//};

//public: void s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::initialize(void)
//{
//    mangled_ppc("?initialize@?$s_gpu_vertex_shader@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXXZ");
//};

//public: bool s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::set_shader(void)
//{
//    mangled_ppc("?set_shader@?$s_gpu_vertex_shader@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAA_NXZ");
//};

//D3DDevice_GpuOwnVertexShaderConstantF
//{
//    mangled_ppc("D3DDevice_GpuOwnVertexShaderConstantF");
//};

//D3DTagCollection_Clear
//{
//    mangled_ppc("D3DTagCollection_Clear");
//};

//D3DDevice_GpuOwnPixelShaderConstantF
//{
//    mangled_ppc("D3DDevice_GpuOwnPixelShaderConstantF");
//};

//public: void s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::unset_shader(void)
//{
//    mangled_ppc("?unset_shader@?$s_gpu_vertex_shader@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXXZ");
//};

//D3DDevice_GpuDisownVertexShaderConstantF
//{
//    mangled_ppc("D3DDevice_GpuDisownVertexShaderConstantF");
//};

//D3DDevice_GpuDisownPixelShaderConstantF
//{
//    mangled_ppc("D3DDevice_GpuDisownPixelShaderConstantF");
//};

//public: void s_gpu_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::dispose(void)
//{
//    mangled_ppc("?dispose@?$s_gpu_shader@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXXZ");
//};

//public: void s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::initialize(void)
//{
//    mangled_ppc("?initialize@?$s_gpu_vertex_shader@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXXZ");
//};

//public: bool s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::set_shader(void)
//{
//    mangled_ppc("?set_shader@?$s_gpu_vertex_shader@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAA_NXZ");
//};

//public: void s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::unset_shader(void)
//{
//    mangled_ppc("?unset_shader@?$s_gpu_vertex_shader@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXXZ");
//};

//public: void s_gpu_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::dispose(void)
//{
//    mangled_ppc("?dispose@?$s_gpu_shader@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXXZ");
//};

//private: class c_rasterizer_constant_table_definition const * s_gpu_global_vertex_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::initialize_constant_table(void)
//{
//    mangled_ppc("?initialize_constant_table@?$s_gpu_global_vertex_shader@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@AAAPBVc_rasterizer_constant_table_definition@@XZ");
//};

//public: void s_gpu_global_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)
//{
//    mangled_ppc("?initialize@?$s_gpu_global_shader@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z");
//};

//private: class c_rasterizer_constant_table_definition const * s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::initialize_constant_table(void)
//{
//    mangled_ppc("?initialize_constant_table@?$s_gpu_vertex_shader@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@@AAAPBVc_rasterizer_constant_table_definition@@XZ");
//};

//public: void s_gpu_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)
//{
//    mangled_ppc("?initialize@?$s_gpu_shader@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z");
//};

//private: class c_rasterizer_constant_table_definition const * s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::initialize_constant_table(void)
//{
//    mangled_ppc("?initialize_constant_table@?$s_gpu_vertex_shader@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@AAAPBVc_rasterizer_constant_table_definition@@XZ");
//};

//public: void s_gpu_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)
//{
//    mangled_ppc("?initialize@?$s_gpu_shader@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z");
//};

//public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)
//{
//    mangled_ppc("?initialize@?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z");
//};

//public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)
//{
//    mangled_ppc("?initialize@?$s_gpu_constant_table@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z");
//};

//public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)
//{
//    mangled_ppc("?initialize@?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z");
//};

//public: void s_gpu_storage<unsigned __int64, 0, 26, 0, 1, 10, 1712218, -1>::set_value(unsigned long, unsigned long, struct __vector4const &)
//{
//    mangled_ppc("?set_value@?$s_gpu_storage@_K$0A@$0BK@$0A@$00$09$0BKCAFK@$0?0@@QAAXKKABU__vector4@@@Z");
//};

//public: void s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::set_value(unsigned long, unsigned long, struct __vector4const &)
//{
//    mangled_ppc("?set_value@?$s_gpu_storage@K$0A@$06$00$01$0BB@$0CKCBIH@$01@@QAAXKKABU__vector4@@@Z");
//};

//public: static unsigned long s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::pack(struct __vector4const &)
//{
//    mangled_ppc("?pack@?$s_gpu_storage@K$0A@$06$00$01$0BB@$0CKCBIH@$01@@SAKABU__vector4@@@Z");
//};

//public: void s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::initialize(enum e_vertex_type, struct s_gpu_buffer_base *)
//{
//    mangled_ppc("?initialize@?$s_gpu_layout@$0BA@W4e_state@c_particle_emitter_gpu@@@@QAAXW4e_vertex_type@@PAUs_gpu_buffer_base@@@Z");
//};

//public: void s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::initialize_data_buffers(struct s_gpu_buffer_base *)
//{
//    mangled_ppc("?initialize_data_buffers@?$s_gpu_layout@$0BA@W4e_state@c_particle_emitter_gpu@@@@QAAXPAUs_gpu_buffer_base@@@Z");
//};

//public: void s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::swap(void)
//{
//    mangled_ppc("?swap@?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAXXZ");
//};

//public: void s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>::initialize_layout(enum e_vertex_type)
//{
//    mangled_ppc("?initialize_layout@?$s_queued_gpu_buffer@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAXW4e_vertex_type@@@Z");
//};

//public: void s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>::initialize_data_buffers(void)
//{
//    mangled_ppc("?initialize_data_buffers@?$s_queued_gpu_buffer@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAXXZ");
//};

//public: void s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>::reset(void)
//{
//    mangled_ppc("?reset@?$s_queued_gpu_buffer@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAAXXZ");
//};

//void data_dump<struct c_particle_emitter_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level)
//{
//    mangled_ppc("??$data_dump@Us_row@c_particle_emitter_gpu@@@@YAXPBUs_data_array@@PBDW4e_event_level@@@Z");
//};

//public: void s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::set_memexport<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list> const *)
//{
//    mangled_ppc("??$set_memexport@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@?$s_gpu_layout@$0BA@W4e_state@c_particle_emitter_gpu@@@@QAAXPBU?$s_gpu_constant_table@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@@@Z");
//};

//public: void s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::set_memexport<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *)
//{
//    mangled_ppc("??$set_memexport@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@?$s_gpu_layout@$0BA@W4e_state@c_particle_emitter_gpu@@@@QAAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@@Z");
//};

//private: void c_particle_emitter_gpu::frame_advance<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(float, struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list *)
//{
//    mangled_ppc("??$frame_advance@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@AAAXMPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@PAVc_particle_state_list@@@Z");
//};

//public: long c_particle_system::get_effect_index(void) const
//{
//    mangled_ppc("?get_effect_index@c_particle_system@@QBAJXZ");
//};

//public: bool c_particle_system::get_attached_to_camera(void) const
//{
//    mangled_ppc("?get_attached_to_camera@c_particle_system@@QBA_NXZ");
//};

//public: bool c_particle_emitter::get_was_frame_advanced_this_frame(void) const
//{
//    mangled_ppc("?get_was_frame_advanced_this_frame@c_particle_emitter@@QBA_NXZ");
//};

//public: float c_editable_property<class c_particle_state_list>::evaluate(class c_particle_state_list const *) const
//{
//    mangled_ppc("?evaluate@?$c_editable_property@Vc_particle_state_list@@@@QBAMPBVc_particle_state_list@@@Z");
//};

//private: void c_particle_emitter_gpu::set_shader_variants<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *) const
//{
//    mangled_ppc("??$set_shader_variants@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@@Z");
//};

//public: struct c_particle_definition::s_gpu_data::s_sprite const * c_particle_definition::get_gpu_sprite_data(void) const
//{
//    mangled_ppc("?get_gpu_sprite_data@c_particle_definition@@QBAPBUs_sprite@s_gpu_data@1@XZ");
//};

//public: struct c_particle_definition::s_gpu_data::s_sprite const * c_particle_definition::s_gpu_data::get_sprite(void) const
//{
//    mangled_ppc("?get_sprite@s_gpu_data@c_particle_definition@@QBAPBUs_sprite@12@XZ");
//};

//public: struct c_particle_definition::s_gpu_data::s_frames::s_frame const * c_particle_definition::get_gpu_frame_data(void) const
//{
//    mangled_ppc("?get_gpu_frame_data@c_particle_definition@@QBAPBUs_frame@s_frames@s_gpu_data@1@XZ");
//};

//public: struct c_particle_definition::s_gpu_data::s_frames::s_frame const * c_particle_definition::s_gpu_data::get_frames(void) const
//{
//    mangled_ppc("?get_frames@s_gpu_data@c_particle_definition@@QBAPBUs_frame@s_frames@12@XZ");
//};

//public: long c_particle_definition::get_gpu_frame_count(void) const
//{
//    mangled_ppc("?get_gpu_frame_count@c_particle_definition@@QBAJXZ");
//};

//public: long c_particle_definition::s_gpu_data::get_frame_count(void) const
//{
//    mangled_ppc("?get_frame_count@s_gpu_data@c_particle_definition@@QBAJXZ");
//};

//public: long c_particle_model_definition::get_gpu_variant_count(void) const
//{
//    mangled_ppc("?get_gpu_variant_count@c_particle_model_definition@@QBAJXZ");
//};

//public: long c_particle_model_definition::s_gpu_data::get_variant_count(void) const
//{
//    mangled_ppc("?get_variant_count@s_gpu_data@c_particle_model_definition@@QBAJXZ");
//};

//private: void c_particle_emitter_gpu::set_shader_render_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *, unsigned long) const
//{
//    mangled_ppc("??$set_shader_render_state@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@K@Z");
//};

//public: union vector2d const * c_particle_emitter_definition::get_uv_scroll_rate(void) const
//{
//    mangled_ppc("?get_uv_scroll_rate@c_particle_emitter_definition@@QBAPBTvector2d@@XZ");
//};

//public: bool c_particle_location::get_first_person(void) const
//{
//    mangled_ppc("?get_first_person@c_particle_location@@QBA_NXZ");
//};

//private: void c_particle_emitter_gpu::set_shader_motion_blur_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *) const
//{
//    mangled_ppc("??$set_shader_motion_blur_state@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@@Z");
//};

//public: static struct s_observer_result const * c_particle_system::get_observer_result(void)
//{
//    mangled_ppc("?get_observer_result@c_particle_system@@SAPBUs_observer_result@@XZ");
//};

//public: float c_editable_property_base::evaluate<class c_particle_state_list>(class c_particle_state_list const *) const
//{
//    mangled_ppc("??$evaluate@Vc_particle_state_list@@@c_editable_property_base@@QBAMPBVc_particle_state_list@@@Z");
//};

//public: float c_particle_state_list::get_state_value(long) const
//{
//    mangled_ppc("?get_state_value@c_particle_state_list@@QBAMJ@Z");
//};

//private: struct s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576> const * s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::set_active_buffer(enum s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::e_status, struct s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576> *)
//{
//    mangled_ppc("?set_active_buffer@?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@AAAPBU?$s_queued_gpu_buffer@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@W4e_status@1@PAU2@@Z");
//};

//public: void s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::set_value(unsigned long, unsigned long, unsigned long const &)
//{
//    mangled_ppc("?set_value@?$s_gpu_storage@K$0A@$06$00$01$0BB@$0CKCBIH@$01@@QAAXKKABK@Z");
//};

//void data_dump<struct c_particle_emitter_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level, bool)
//{
//    mangled_ppc("??$data_dump@Us_row@c_particle_emitter_gpu@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z");
//};

//public: static char const * c_particle_emitter_gpu::s_row::get_name(void)
//{
//    mangled_ppc("?get_name@s_row@c_particle_emitter_gpu@@SAPBDXZ");
//};

//public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::set_struct<struct s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::s_memexport_set>(enum c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list::e_index, struct s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::s_memexport_set const *) const
//{
//    mangled_ppc("??$set_struct@Us_memexport_set@?$s_gpu_layout@$0BA@W4e_state@c_particle_emitter_gpu@@@@@?$s_gpu_constant_table@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QBAXW4e_index@s_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@PBUs_memexport_set@?$s_gpu_layout@$0BA@W4e_state@c_particle_emitter_gpu@@@@@Z");
//};

//public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::set_struct<struct s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::s_memexport_set>(enum c_particle_emitter_gpu::s_update_vertex_shader_constant_list::e_index, struct s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::s_memexport_set const *) const
//{
//    mangled_ppc("??$set_struct@Us_memexport_set@?$s_gpu_layout@$0BA@W4e_state@c_particle_emitter_gpu@@@@@?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QBAXW4e_index@s_update_vertex_shader_constant_list@c_particle_emitter_gpu@@PBUs_memexport_set@?$s_gpu_layout@$0BA@W4e_state@c_particle_emitter_gpu@@@@@Z");
//};

//private: void c_particle_emitter_gpu::set_shader_functions<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *) const
//{
//    mangled_ppc("??$set_shader_functions@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@@Z");
//};

//public: float const (* c_particle_emitter_definition::get_gpu_function_data(void) const)[16]
//{
//    mangled_ppc("?get_gpu_function_data@c_particle_emitter_definition@@QBAPAY0BA@$$CBMXZ");
//};

//public: float const (* c_particle_emitter_definition::s_gpu_data::get_functions(void) const)[16]
//{
//    mangled_ppc("?get_functions@s_gpu_data@c_particle_emitter_definition@@QBAPAY0BA@$$CBMXZ");
//};

//public: float const (* c_particle_emitter_definition::get_gpu_color_data(void) const)[4]
//{
//    mangled_ppc("?get_gpu_color_data@c_particle_emitter_definition@@QBAPAY03$$CBMXZ");
//};

//public: float const (* c_particle_emitter_definition::s_gpu_data::get_colors(void) const)[4]
//{
//    mangled_ppc("?get_colors@s_gpu_data@c_particle_emitter_definition@@QBAPAY03$$CBMXZ");
//};

//public: float const (* c_particle_emitter_definition::get_gpu_property_data(void) const)[4]
//{
//    mangled_ppc("?get_gpu_property_data@c_particle_emitter_definition@@QBAPAY03$$CBMXZ");
//};

//public: float const (* c_particle_emitter_definition::s_gpu_data::get_properties(void) const)[4]
//{
//    mangled_ppc("?get_properties@s_gpu_data@c_particle_emitter_definition@@QBAPAY03$$CBMXZ");
//};

//public: long c_particle_emitter_definition::get_gpu_function_count(void) const
//{
//    mangled_ppc("?get_gpu_function_count@c_particle_emitter_definition@@QBAJXZ");
//};

//public: long c_particle_emitter_definition::s_gpu_data::get_function_count(void) const
//{
//    mangled_ppc("?get_function_count@s_gpu_data@c_particle_emitter_definition@@QBAJXZ");
//};

//public: long c_particle_emitter_definition::get_gpu_color_count(void) const
//{
//    mangled_ppc("?get_gpu_color_count@c_particle_emitter_definition@@QBAJXZ");
//};

//public: long c_particle_emitter_definition::s_gpu_data::get_color_count(void) const
//{
//    mangled_ppc("?get_color_count@s_gpu_data@c_particle_emitter_definition@@QBAJXZ");
//};

//public: long c_particle_emitter_definition::get_gpu_property_count(void) const
//{
//    mangled_ppc("?get_gpu_property_count@c_particle_emitter_definition@@QBAJXZ");
//};

//public: long c_particle_emitter_definition::s_gpu_data::get_property_count(void) const
//{
//    mangled_ppc("?get_property_count@s_gpu_data@c_particle_emitter_definition@@QBAJXZ");
//};

//private: void c_particle_emitter_gpu::set_shader_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const
//{
//    mangled_ppc("??$set_shader_state@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@PBVc_particle_state_list@@@Z");
//};

//public: unsigned long c_particle_emitter_definition::get_used_particle_states(void) const
//{
//    mangled_ppc("?get_used_particle_states@c_particle_emitter_definition@@QBAKXZ");
//};

//private: void c_particle_emitter_gpu::set_shader_update_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const
//{
//    mangled_ppc("??$set_shader_update_state@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@PBVc_particle_state_list@@@Z");
//};

//public: unsigned short c_particle_movement_definition::get_flags(void) const
//{
//    mangled_ppc("?get_flags@c_particle_movement_definition@@QBAGXZ");
//};

//public: bool c_particle_emitter_definition::is_cpu(void) const
//{
//    mangled_ppc("?is_cpu@c_particle_emitter_definition@@QBA_NXZ");
//};

//public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::set_struct<struct c_particle_definition::s_gpu_data::s_sprite>(enum c_particle_emitter_gpu::s_render_vertex_shader_constant_list::e_index, struct c_particle_definition::s_gpu_data::s_sprite const *) const
//{
//    mangled_ppc("??$set_struct@Us_sprite@s_gpu_data@c_particle_definition@@@?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QBAXW4e_index@s_render_vertex_shader_constant_list@c_particle_emitter_gpu@@PBUs_sprite@s_gpu_data@c_particle_definition@@@Z");
//};

//public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::set_struct_partial<struct c_particle_definition::s_gpu_data::s_frames::s_frame>(enum c_particle_emitter_gpu::s_render_vertex_shader_constant_list::e_index, unsigned long, struct c_particle_definition::s_gpu_data::s_frames::s_frame const *) const
//{
//    mangled_ppc("??$set_struct_partial@Us_frame@s_frames@s_gpu_data@c_particle_definition@@@?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QBAXW4e_index@s_render_vertex_shader_constant_list@c_particle_emitter_gpu@@KPBUs_frame@s_frames@s_gpu_data@c_particle_definition@@@Z");
//};

//public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::set_struct_partial<struct c_particle_model_definition::s_gpu_data::s_variants::s_variant>(enum c_particle_emitter_gpu::s_render_vertex_shader_constant_list::e_index, unsigned long, struct c_particle_model_definition::s_gpu_data::s_variants::s_variant const *) const
//{
//    mangled_ppc("??$set_struct_partial@Us_variant@s_variants@s_gpu_data@c_particle_model_definition@@@?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QBAXW4e_index@s_render_vertex_shader_constant_list@c_particle_emitter_gpu@@KPBUs_variant@s_variants@s_gpu_data@c_particle_model_definition@@@Z");
//};

//public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::set_struct<struct `private: void c_particle_emitter_gpu::set_shader_render_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *, unsigned long) const'::`2'::s_render_state>(enum c_particle_emitter_gpu::s_render_vertex_shader_constant_list::e_index, struct `private: void c_particle_emitter_gpu::set_shader_render_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *, unsigned long) const'::`2'::s_render_state const *) const
//{
//    mangled_ppc("??$set_struct@Us_render_state@?1???$set_shader_render_state@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@K@Z@@?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QBAXW4e_index@s_render_vertex_shader_constant_list@c_particle_emitter_gpu@@PBUs_render_state@?1???$set_shader_render_state@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@3@ABAXPBU0@K@Z@@Z");
//};

//public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::set_struct<struct `private: void c_particle_emitter_gpu::set_shader_motion_blur_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_motion_blur_state>(enum c_particle_emitter_gpu::s_render_vertex_shader_constant_list::e_index, struct `private: void c_particle_emitter_gpu::set_shader_motion_blur_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_motion_blur_state const *) const
//{
//    mangled_ppc("??$set_struct@Us_motion_blur_state@?1???$set_shader_motion_blur_state@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@@Z@@?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QBAXW4e_index@s_render_vertex_shader_constant_list@c_particle_emitter_gpu@@PBUs_motion_blur_state@?1???$set_shader_motion_blur_state@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@3@ABAXPBU0@@Z@@Z");
//};

//public: void c_data_iterator<struct c_particle_emitter_gpu::s_row>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_row@c_particle_emitter_gpu@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct c_particle_emitter_gpu::s_row>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_row@c_particle_emitter_gpu@@@@QAA_NXZ");
//};

//public: struct c_particle_emitter_gpu::s_row * c_data_iterator<struct c_particle_emitter_gpu::s_row>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_row@c_particle_emitter_gpu@@@@QBAPAUs_row@c_particle_emitter_gpu@@XZ");
//};

//public: void s_gpu_constant_table_base::set_struct<struct s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::s_memexport_set>(unsigned long, struct s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::s_memexport_set const *) const
//{
//    mangled_ppc("??$set_struct@Us_memexport_set@?$s_gpu_layout@$0BA@W4e_state@c_particle_emitter_gpu@@@@@s_gpu_constant_table_base@@QBAXKPBUs_memexport_set@?$s_gpu_layout@$0BA@W4e_state@c_particle_emitter_gpu@@@@@Z");
//};

//D3DDevice_GpuEndShaderConstantF4
//{
//    mangled_ppc("D3DDevice_GpuEndShaderConstantF4");
//};

//public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::set_struct_partial<float const[16]>(enum c_particle_emitter_gpu::s_update_vertex_shader_constant_list::e_index, unsigned long, float const (*)[16]) const
//{
//    mangled_ppc("??$set_struct_partial@$$BY0BA@$$CBM@?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QBAXW4e_index@s_update_vertex_shader_constant_list@c_particle_emitter_gpu@@KPAY0BA@$$CBM@Z");
//};

//public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::set_struct_partial<float const[4]>(enum c_particle_emitter_gpu::s_update_vertex_shader_constant_list::e_index, unsigned long, float const (*)[4]) const
//{
//    mangled_ppc("??$set_struct_partial@$$BY03$$CBM@?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QBAXW4e_index@s_update_vertex_shader_constant_list@c_particle_emitter_gpu@@KPAY03$$CBM@Z");
//};

//public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::set_struct_partial<struct `private: void c_particle_emitter_gpu::set_shader_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`2'::s_gpu_single_state>(enum c_particle_emitter_gpu::s_update_vertex_shader_constant_list::e_index, unsigned long, struct `private: void c_particle_emitter_gpu::set_shader_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`2'::s_gpu_single_state const *) const
//{
//    mangled_ppc("??$set_struct_partial@Us_gpu_single_state@?1???$set_shader_state@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@PBVc_particle_state_list@@@Z@@?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QBAXW4e_index@s_update_vertex_shader_constant_list@c_particle_emitter_gpu@@KPBUs_gpu_single_state@?1???$set_shader_state@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@3@ABAXPBU0@PBVc_particle_state_list@@@Z@@Z");
//};

//public: void s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::set_struct<struct `private: void c_particle_emitter_gpu::set_shader_update_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`5'::s_update_state>(enum c_particle_emitter_gpu::s_update_vertex_shader_constant_list::e_index, struct `private: void c_particle_emitter_gpu::set_shader_update_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`5'::s_update_state const *) const
//{
//    mangled_ppc("??$set_struct@Us_update_state@?4???$set_shader_update_state@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@PBVc_particle_state_list@@@Z@@?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QBAXW4e_index@s_update_vertex_shader_constant_list@c_particle_emitter_gpu@@PBUs_update_state@?4???$set_shader_update_state@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@3@ABAXPBU0@PBVc_particle_state_list@@@Z@@Z");
//};

//public: void s_gpu_constant_table_base::set_struct<struct c_particle_definition::s_gpu_data::s_sprite>(unsigned long, struct c_particle_definition::s_gpu_data::s_sprite const *) const
//{
//    mangled_ppc("??$set_struct@Us_sprite@s_gpu_data@c_particle_definition@@@s_gpu_constant_table_base@@QBAXKPBUs_sprite@s_gpu_data@c_particle_definition@@@Z");
//};

//public: void s_gpu_constant_table_base::set_struct_partial<struct c_particle_definition::s_gpu_data::s_frames::s_frame>(unsigned long, unsigned long, struct c_particle_definition::s_gpu_data::s_frames::s_frame const *) const
//{
//    mangled_ppc("??$set_struct_partial@Us_frame@s_frames@s_gpu_data@c_particle_definition@@@s_gpu_constant_table_base@@QBAXKKPBUs_frame@s_frames@s_gpu_data@c_particle_definition@@@Z");
//};

//public: void s_gpu_constant_table_base::set_struct_partial<struct c_particle_model_definition::s_gpu_data::s_variants::s_variant>(unsigned long, unsigned long, struct c_particle_model_definition::s_gpu_data::s_variants::s_variant const *) const
//{
//    mangled_ppc("??$set_struct_partial@Us_variant@s_variants@s_gpu_data@c_particle_model_definition@@@s_gpu_constant_table_base@@QBAXKKPBUs_variant@s_variants@s_gpu_data@c_particle_model_definition@@@Z");
//};

//public: void s_gpu_constant_table_base::set_struct<struct `private: void c_particle_emitter_gpu::set_shader_render_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *, unsigned long) const'::`2'::s_render_state>(unsigned long, struct `private: void c_particle_emitter_gpu::set_shader_render_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *, unsigned long) const'::`2'::s_render_state const *) const
//{
//    mangled_ppc("??$set_struct@Us_render_state@?1???$set_shader_render_state@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@K@Z@@s_gpu_constant_table_base@@QBAXKPBUs_render_state@?1???$set_shader_render_state@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@K@Z@@Z");
//};

//public: void s_gpu_constant_table_base::set_struct<struct `private: void c_particle_emitter_gpu::set_shader_motion_blur_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_motion_blur_state>(unsigned long, struct `private: void c_particle_emitter_gpu::set_shader_motion_blur_state<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_motion_blur_state const *) const
//{
//    mangled_ppc("??$set_struct@Us_motion_blur_state@?1???$set_shader_motion_blur_state@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@@Z@@s_gpu_constant_table_base@@QBAXKPBUs_motion_blur_state@?1???$set_shader_motion_blur_state@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@@Z@@Z");
//};

//public: void s_gpu_constant_table_base::set_struct_partial<struct `private: void c_particle_emitter_gpu::set_shader_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`2'::s_gpu_single_state>(unsigned long, unsigned long, struct `private: void c_particle_emitter_gpu::set_shader_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`2'::s_gpu_single_state const *) const
//{
//    mangled_ppc("??$set_struct_partial@Us_gpu_single_state@?1???$set_shader_state@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@PBVc_particle_state_list@@@Z@@s_gpu_constant_table_base@@QBAXKKPBUs_gpu_single_state@?1???$set_shader_state@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@PBVc_particle_state_list@@@Z@@Z");
//};

//public: void s_gpu_constant_table_base::set_struct<struct `private: void c_particle_emitter_gpu::set_shader_update_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`5'::s_update_state>(unsigned long, struct `private: void c_particle_emitter_gpu::set_shader_update_state<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list> const *, class c_particle_state_list const *) const'::`5'::s_update_state const *) const
//{
//    mangled_ppc("??$set_struct@Us_update_state@?4???$set_shader_update_state@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@PBVc_particle_state_list@@@Z@@s_gpu_constant_table_base@@QBAXKPBUs_update_state@?4???$set_shader_update_state@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@c_particle_emitter_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@PBVc_particle_state_list@@@Z@@Z");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_particle_emitter_gpu@@CAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_particle_emitter_gpu@@CAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_particle_emitter_gpu@@CAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_particle_emitter_gpu@@CAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//private: static void c_particle_emitter_gpu::__tls_set_x_data_array_manager(void *)
//{
//    mangled_ppc("?__tls_set_x_data_array_manager@c_particle_emitter_gpu@@CAXPAX@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_particle_emitter_gpu@@CAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_particle_emitter_gpu@@CAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_particle_emitter_gpu@@SAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_particle_emitter_gpu@@SAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_particle_emitter_gpu@@SAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_particle_emitter_gpu@@SAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: static void c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager(void *)
//{
//    mangled_ppc("?__tls_set_x_data_array_manager@s_row@c_particle_emitter_gpu@@SAXPAX@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_particle_emitter_gpu@@SAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_particle_emitter_gpu@@SAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_particle_emitter_gpu@@CAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_particle_emitter_gpu@@CAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_particle_emitter_gpu@@CAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_particle_emitter_gpu@@CAXPAX@Z@@QAAXXZ");
//};

//public: s_gpu_buffer<16, 16, 448>::s_gpu_buffer<16, 16, 448>(void)
//{
//    mangled_ppc("??0?$s_gpu_buffer@$0BA@$0BA@$0BMA@@@QAA@XZ");
//};

//public: s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>::s_queued_gpu_buffer_system<16, struct c_particle_emitter_gpu::s_layout, 576>(void)
//{
//    mangled_ppc("??0?$s_queued_gpu_buffer_system@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAA@XZ");
//};

//public: s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>::s_queued_gpu_buffer<16, struct c_particle_emitter_gpu::s_layout, 576>(void)
//{
//    mangled_ppc("??0?$s_queued_gpu_buffer@$0BA@Us_layout@c_particle_emitter_gpu@@$0CEA@@@QAA@XZ");
//};

//public: c_particle_emitter_gpu::s_layout::s_layout(void)
//{
//    mangled_ppc("??0s_layout@c_particle_emitter_gpu@@QAA@XZ");
//};

//public: s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>(enum e_rasterizer_vertex_attribute const &, unsigned long const &)
//{
//    mangled_ppc("??0?$s_gpu_storage@K$0A@$0BJ@$0A@$00$08$0CMCAFJ@$0?0@@QAA@ABW4e_rasterizer_vertex_attribute@@ABK@Z");
//};

//public: virtual unsigned int s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::get_size(void) const
//{
//    mangled_ppc("?get_size@?$s_gpu_storage@K$0A@$0BJ@$0A@$00$08$0CMCAFJ@$0?0@@UBAIXZ");
//};

//public: virtual long s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::get_vertex_format(void) const
//{
//    mangled_ppc("?get_vertex_format@?$s_gpu_storage@K$0A@$0BJ@$0A@$00$08$0CMCAFJ@$0?0@@UBAJXZ");
//};

//public: virtual long s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::get_d3d_type(void) const
//{
//    mangled_ppc("?get_d3d_type@?$s_gpu_storage@K$0A@$0BJ@$0A@$00$08$0CMCAFJ@$0?0@@UBAJXZ");
//};

//public: s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>(enum e_rasterizer_vertex_attribute const &, unsigned long const &)
//{
//    mangled_ppc("??0?$s_gpu_storage@K$0A@$06$00$01$0BB@$0CKCBIH@$01@@QAA@ABW4e_rasterizer_vertex_attribute@@ABK@Z");
//};

//public: virtual unsigned int s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::get_size(void) const
//{
//    mangled_ppc("?get_size@?$s_gpu_storage@K$0A@$06$00$01$0BB@$0CKCBIH@$01@@UBAIXZ");
//};

//public: virtual long s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::get_vertex_format(void) const
//{
//    mangled_ppc("?get_vertex_format@?$s_gpu_storage@K$0A@$06$00$01$0BB@$0CKCBIH@$01@@UBAJXZ");
//};

//public: virtual long s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::get_d3d_type(void) const
//{
//    mangled_ppc("?get_d3d_type@?$s_gpu_storage@K$0A@$06$00$01$0BB@$0CKCBIH@$01@@UBAJXZ");
//};

//public: s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>::s_gpu_layout<16, enum c_particle_emitter_gpu::e_state>(void)
//{
//    mangled_ppc("??0?$s_gpu_layout@$0BA@W4e_state@c_particle_emitter_gpu@@@@QAA@XZ");
//};

//public: s_gpu_buffer<16, 576, 1>::s_gpu_buffer<16, 576, 1>(void)
//{
//    mangled_ppc("??0?$s_gpu_buffer@$0BA@$0CEA@$00@@QAA@XZ");
//};

//public: s_gpu_buffer<17, 576, 1>::s_gpu_buffer<17, 576, 1>(void)
//{
//    mangled_ppc("??0?$s_gpu_buffer@$0BB@$0CEA@$00@@QAA@XZ");
//};

//public: virtual void s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::initialize_layout(unsigned long, unsigned long)
//{
//    mangled_ppc("?initialize_layout@?$s_gpu_storage@K$0A@$0BJ@$0A@$00$08$0CMCAFJ@$0?0@@UAAXKK@Z");
//};

//public: virtual void s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::initialize_data_buffers(void)
//{
//    mangled_ppc("?initialize_data_buffers@?$s_gpu_storage@K$0A@$0BJ@$0A@$00$08$0CMCAFJ@$0?0@@UAAXXZ");
//};

//public: virtual void s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::fill(struct __vector4const &)
//{
//    mangled_ppc("?fill@?$s_gpu_storage@K$0A@$0BJ@$0A@$00$08$0CMCAFJ@$0?0@@UAAXABU__vector4@@@Z");
//};

//public: static unsigned long s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::pack(struct __vector4const &)
//{
//    mangled_ppc("?pack@?$s_gpu_storage@K$0A@$0BJ@$0A@$00$08$0CMCAFJ@$0?0@@SAKABU__vector4@@@Z");
//};

//public: virtual void s_gpu_storage<unsigned long, 0, 25, 0, 1, 9, 2891865, -1>::fill(unsigned short, struct __vector4const &)
//{
//    mangled_ppc("?fill@?$s_gpu_storage@K$0A@$0BJ@$0A@$00$08$0CMCAFJ@$0?0@@UAAXGABU__vector4@@@Z");
//};

//public: virtual void s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::initialize_layout(unsigned long, unsigned long)
//{
//    mangled_ppc("?initialize_layout@?$s_gpu_storage@K$0A@$06$00$01$0BB@$0CKCBIH@$01@@UAAXKK@Z");
//};

//public: virtual void s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::initialize_data_buffers(void)
//{
//    mangled_ppc("?initialize_data_buffers@?$s_gpu_storage@K$0A@$06$00$01$0BB@$0CKCBIH@$01@@UAAXXZ");
//};

//public: virtual void s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::fill(struct __vector4const &)
//{
//    mangled_ppc("?fill@?$s_gpu_storage@K$0A@$06$00$01$0BB@$0CKCBIH@$01@@UAAXABU__vector4@@@Z");
//};

//public: virtual void s_gpu_storage<unsigned long, 0, 7, 1, 2, 17, 2761095, 2>::fill(unsigned short, struct __vector4const &)
//{
//    mangled_ppc("?fill@?$s_gpu_storage@K$0A@$06$00$01$0BB@$0CKCBIH@$01@@UAAXGABU__vector4@@@Z");
//};

//public: s_gpu_shader_pair<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::s_gpu_shader_pair<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type)
//{
//    mangled_ppc("??0?$s_gpu_shader_pair@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@Us_gpu_empty_constant_list@@@@QAA@W4e_explicit_shader@c_rasterizer_globals@@W4e_vertex_type@@@Z");
//};

//public: s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type)
//{
//    mangled_ppc("??0?$s_gpu_vertex_shader@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAA@W4e_explicit_shader@c_rasterizer_globals@@W4e_vertex_type@@@Z");
//};

//public: s_gpu_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::s_gpu_shader<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader)
//{
//    mangled_ppc("??0?$s_gpu_shader@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAA@W4e_explicit_shader@c_rasterizer_globals@@@Z");
//};

//public: s_gpu_constant_table<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>::s_gpu_constant_table<struct c_particle_emitter_gpu::s_spawn_vertex_shader_constant_list>(void)
//{
//    mangled_ppc("??0?$s_gpu_constant_table@Us_spawn_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAA@XZ");
//};

//public: s_gpu_shader_pair<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::s_gpu_shader_pair<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type)
//{
//    mangled_ppc("??0?$s_gpu_shader_pair@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@Us_gpu_empty_constant_list@@@@QAA@W4e_explicit_shader@c_rasterizer_globals@@W4e_vertex_type@@@Z");
//};

//public: s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::s_gpu_vertex_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type)
//{
//    mangled_ppc("??0?$s_gpu_vertex_shader@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAA@W4e_explicit_shader@c_rasterizer_globals@@W4e_vertex_type@@@Z");
//};

//public: s_gpu_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::s_gpu_shader<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader)
//{
//    mangled_ppc("??0?$s_gpu_shader@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAA@W4e_explicit_shader@c_rasterizer_globals@@@Z");
//};

//public: s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>::s_gpu_constant_table<struct c_particle_emitter_gpu::s_update_vertex_shader_constant_list>(void)
//{
//    mangled_ppc("??0?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAA@XZ");
//};

//public: s_gpu_global_vertex_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::s_gpu_global_vertex_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(enum e_vertex_type)
//{
//    mangled_ppc("??0?$s_gpu_global_vertex_shader@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAA@W4e_vertex_type@@@Z");
//};

//public: s_gpu_global_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::s_gpu_global_shader<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(void)
//{
//    mangled_ppc("??0?$s_gpu_global_shader@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAA@XZ");
//};

//public: s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>::s_gpu_constant_table<struct c_particle_emitter_gpu::s_render_vertex_shader_constant_list>(void)
//{
//    mangled_ppc("??0?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_particle_emitter_gpu@@@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_data_array_manager::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_particle_emitter_gpu@@CAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_particle_emitter_gpu@@SAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (c_particle_emitter_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_particle_emitter_gpu@@CAXPAX@Z@@QAA@XZ");
//};

//??__F?x_data_array_manager@c_particle_emitter_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_particle_emitter_gpu@@CAXPAX@Z@@A@@YAXXZ
//{
//    mangled_ppc("??__F?x_data_array_manager@c_particle_emitter_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_particle_emitter_gpu@@CAXPAX@Z@@A@@YAXXZ");
//};

//??__F?x_data_array_manager@s_row@c_particle_emitter_gpu@@2V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_particle_emitter_gpu@@SAXPAX@Z@@A@@YAXXZ
//{
//    mangled_ppc("??__F?x_data_array_manager@s_row@c_particle_emitter_gpu@@2V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_particle_emitter_gpu@@SAXPAX@Z@@A@@YAXXZ");
//};

//??__F?x_gamestate_storage_manager@c_particle_emitter_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_particle_emitter_gpu@@CAXPAX@Z@@A@@YAXXZ
//{
//    mangled_ppc("??__F?x_gamestate_storage_manager@c_particle_emitter_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_particle_emitter_gpu@@CAXPAX@Z@@A@@YAXXZ");
//};

