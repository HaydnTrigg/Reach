/* ---------- headers */

#include "omaha\gpu_particle\contrail_gpu.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static bool const *const const c_contrail_gpu::s_spawn_vertex_shader_constant_list::x_in_place; // "?x_in_place@s_spawn_vertex_shader_constant_list@c_contrail_gpu@@2QB_NB"
// public: static bool const *const const c_contrail_gpu::s_update_vertex_shader_constant_list::x_in_place; // "?x_in_place@s_update_vertex_shader_constant_list@c_contrail_gpu@@2QB_NB"
// public: static bool const *const const c_contrail_gpu::s_render_vertex_shader_constant_list::x_in_place; // "?x_in_place@s_render_vertex_shader_constant_list@c_contrail_gpu@@2QB_NB"
// public: static long const *const const c_contrail_gpu::s_spawn_vertex_shader_constant_list::x_names; // "?x_names@s_spawn_vertex_shader_constant_list@c_contrail_gpu@@2QBJB"
// public: static long const *const const c_contrail_gpu::s_update_vertex_shader_constant_list::x_names; // "?x_names@s_update_vertex_shader_constant_list@c_contrail_gpu@@2QBJB"
// public: static long const *const const c_contrail_gpu::s_render_vertex_shader_constant_list::x_names; // "?x_names@s_render_vertex_shader_constant_list@c_contrail_gpu@@2QBJB"
// private: static enum e_effect_holdback_type const c_contrail_gpu::x_holdback_type; // "?x_holdback_type@c_contrail_gpu@@0W4e_effect_holdback_type@@B"
// private: static enum e_effect_holdback_type const c_contrail_gpu::x_queue_holdback_type; // "?x_queue_holdback_type@c_contrail_gpu@@0W4e_effect_holdback_type@@B"
// public: static enum e_effect_holdback_type const c_contrail_gpu::s_row::x_holdback_type; // "?x_holdback_type@s_row@c_contrail_gpu@@2W4e_effect_holdback_type@@B"
// struct _D3DVERTEXELEMENT9const `public: void __cdecl s_gpu_layout<18, enum c_contrail_gpu::e_state>::initialize(enum e_vertex_type, struct s_gpu_buffer_base *)'::`74'::x_terminator_element; // "?x_terminator_element@?EK@??initialize@?$s_gpu_layout@$0BC@W4e_state@c_contrail_gpu@@@@QAAXW4e_vertex_type@@PAUs_gpu_buffer_base@@@Z@4U_D3DVERTEXELEMENT9@@B"
// struct _D3DVERTEXELEMENT9const `public: void __cdecl s_gpu_layout<17, enum e_gpu_address_state>::initialize(enum e_vertex_type, struct s_gpu_buffer_base *)'::`74'::x_terminator_element; // "?x_terminator_element@?EK@??initialize@?$s_gpu_layout@$0BB@W4e_gpu_address_state@@@@QAAXW4e_vertex_type@@PAUs_gpu_buffer_base@@@Z@4U_D3DVERTEXELEMENT9@@B"
// long volatile `public: void __cdecl s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)'::`27'::x_event_category_index; // "?x_event_category_index@?BL@??initialize@?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z@4JC"
// long volatile `public: void __cdecl s_gpu_constant_table<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)'::`27'::x_event_category_index; // "?x_event_category_index@?BL@??initialize@?$s_gpu_constant_table@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z@4JC"
// long volatile `public: void __cdecl s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)'::`27'::x_event_category_index; // "?x_event_category_index@?BL@??initialize@?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z@4JC"
// long volatile `public: void __cdecl s_gpu_buffer_base::create(void)'::`8'::x_event_category_index; // "?x_event_category_index@?7??create@s_gpu_buffer_base@@QAAXXZ@4JC"
// long volatile `public: void __cdecl s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>::reset(void)'::`8'::x_event_category_index; // "?x_event_category_index@?7??reset@?$s_queued_gpu_buffer@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAXXZ@4JC"
// long volatile `private: void __cdecl c_contrail_gpu::set_shader_functions<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *) const'::`20'::x_event_category_index; // "?x_event_category_index@?BE@???$set_shader_functions@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@@Z@4JC"
// long volatile `private: void __cdecl c_contrail_gpu::set_shader_functions<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *) const'::`8'::x_event_category_index; // "?x_event_category_index@?7???$set_shader_functions@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@@Z@4JC"
// long volatile `private: void __cdecl c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`32'::x_event_category_index; // "?x_event_category_index@?CA@???$set_shader_state@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@PBVc_contrail_states@@@Z@4JC"
// long volatile `private: void __cdecl c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`20'::x_event_category_index; // "?x_event_category_index@?BE@???$set_shader_state@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@PBVc_contrail_states@@@Z@4JC"
// long volatile `private: void __cdecl c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`8'::x_event_category_index; // "?x_event_category_index@?7???$set_shader_state@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@PBVc_contrail_states@@@Z@4JC"
// long volatile `private: void __cdecl c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`32'::x_event_category_index; // "?x_event_category_index@?CA@???$set_shader_state@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@PBVc_contrail_states@@@Z@4JC"
// long volatile `private: void __cdecl c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`20'::x_event_category_index; // "?x_event_category_index@?BE@???$set_shader_state@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@PBVc_contrail_states@@@Z@4JC"
// long volatile `private: void __cdecl c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`8'::x_event_category_index; // "?x_event_category_index@?7???$set_shader_state@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@PBVc_contrail_states@@@Z@4JC"
// long volatile `private: void __cdecl c_contrail_gpu::set_shader_strip<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *) const'::`11'::x_event_category_index; // "?x_event_category_index@?L@???$set_shader_strip@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@@Z@4JC"
// long volatile `void __cdecl data_dump<struct c_contrail_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`22'::x_event_category_index; // "?x_event_category_index@?BG@???$data_dump@Us_row@c_contrail_gpu@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<struct c_contrail_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`15'::x_event_category_index; // "?x_event_category_index@?P@???$data_dump@Us_row@c_contrail_gpu@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<struct c_contrail_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`6'::x_event_category_index; // "?x_event_category_index@?5???$data_dump@Us_row@c_contrail_gpu@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// private: static unsigned long c_contrail_gpu::x_overall_profile_count; // "?x_overall_profile_count@c_contrail_gpu@@0KA"
// private: static unsigned long c_contrail_gpu::x_spawning_profile_count; // "?x_spawning_profile_count@c_contrail_gpu@@0KA"
// private: static bool c_contrail_gpu::x_queued_buffer_locked; // "?x_queued_buffer_locked@c_contrail_gpu@@0_NA"
// private: static bool c_contrail_gpu::x_debug_synchronous; // "?x_debug_synchronous@c_contrail_gpu@@0_NA"
// private: static class t_restricted_allocation_manager<3, 0, 0, void (__cdecl c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)> c_contrail_gpu::x_data_array_manager; // "?x_data_array_manager@c_contrail_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_contrail_gpu@@CAXPAX@Z@@A"
// public: static class t_restricted_allocation_manager<3, 0, 0, void (__cdecl c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)> c_contrail_gpu::s_row::x_data_array_manager; // "?x_data_array_manager@s_row@c_contrail_gpu@@2V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_contrail_gpu@@SAXPAX@Z@@A"
// private: static class t_restricted_allocation_manager<3, 0, 0, void (__cdecl c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)> c_contrail_gpu::x_gamestate_storage_manager; // "?x_gamestate_storage_manager@c_contrail_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_contrail_gpu@@CAXPAX@Z@@A"
// private: static struct s_gpu_buffer<18, 16, 160> c_contrail_gpu::x_overall_storage; // "?x_overall_storage@c_contrail_gpu@@0U?$s_gpu_buffer@$0BC@$0BA@$0KA@@@A"
// private: static struct s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256> c_contrail_gpu::x_queued_buffer_system; // "?x_queued_buffer_system@c_contrail_gpu@@0U?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@A"
// private: static struct c_contrail_gpu::s_layout c_contrail_gpu::x_layout; // "?x_layout@c_contrail_gpu@@0Us_layout@1@A"
// private: static struct s_gpu_shader_pair<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list> c_contrail_gpu::x_spawn_shader_pair; // "?x_spawn_shader_pair@c_contrail_gpu@@0U?$s_gpu_shader_pair@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@Us_gpu_empty_constant_list@@@@A"
// private: static struct s_gpu_shader_pair<struct c_contrail_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list> c_contrail_gpu::x_update_shader_pair; // "?x_update_shader_pair@c_contrail_gpu@@0U?$s_gpu_shader_pair@Us_update_vertex_shader_constant_list@c_contrail_gpu@@Us_gpu_empty_constant_list@@@@A"
// private: static struct s_gpu_global_vertex_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list> c_contrail_gpu::x_render_vertex_shader; // "?x_render_vertex_shader@c_contrail_gpu@@0U?$s_gpu_global_vertex_shader@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@A"
// bool `void __cdecl data_dump<struct c_contrail_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`2'::done_already; // "?done_already@?1???$data_dump@Us_row@c_contrail_gpu@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4_NA"
// private: static struct s_data_array *c_contrail_gpu::x_data_array; // "?x_data_array@c_contrail_gpu@@0PAUs_data_array@@A"
// public: static struct s_data_array *c_contrail_gpu::s_row::x_data_array; // "?x_data_array@s_row@c_contrail_gpu@@2PAUs_data_array@@A"
// private: static void *c_contrail_gpu::x_gamestate_storage; // "?x_gamestate_storage@c_contrail_gpu@@0PAXA"

// public: static void c_contrail_gpu::shell_initialize(void);
// public: static void c_contrail_gpu::initialize_for_game(void);
// public: static unsigned long c_contrail_gpu::s_pc_proxy::s_overall_storage::get_buffer_size(void);
// public: static unsigned long c_contrail_gpu::s_pc_proxy::s_overall_storage::get_buffer_alignment_bits(void);
// public: static void c_contrail_gpu::initialize_for_map(void);
// public: static void c_contrail_gpu::dispose_from_map(void);
// public: static void c_contrail_gpu::dispose_from_game(void);
// public: static void c_contrail_gpu::reset(void);
// public: static long c_contrail_gpu::create(unsigned char, long);
// public: static class c_contrail_gpu * c_contrail_gpu::get(long);
// public: static void c_contrail_gpu::destroy(long);
// public: char const * c_contrail_gpu::get_name(void) const;
// public: char const * c_contrail::get_name(void) const;
// public: char const * c_contrail_system::get_name(void) const;
// public: class c_contrail_system const * c_contrail_location::get_parent_system(void) const;
// public: static class c_contrail_system * c_contrail_system::get(long);
// public: static class c_contrail * c_contrail::get(long);
// public: class c_contrail_location const * c_contrail::get_parent_location(void) const;
// public: static class c_contrail_location * c_contrail_location::get(long);
// public: char const * c_contrail_gpu::get_profile_name(void) const;
// public: static long c_contrail_gpu::s_row::create(unsigned char, long);
// public: static struct c_contrail_gpu::s_row * c_contrail_gpu::s_row::get(long);
// public: static struct c_contrail_gpu::s_row * c_contrail_gpu::s_row::try_get(long);
// public: static void c_contrail_gpu::s_row::destroy(long, bool);
// private: static void c_contrail_gpu::initialize_layout(void);
// private: static void c_contrail_gpu::initialize_data_buffers(void);
// private: static void c_contrail_gpu::initialize_gamestate_data_buffers(void);
// private: static void c_contrail_gpu::initialize_shaders(void);
// private: static void c_contrail_gpu::dispose_shaders(void);
// private: unsigned long c_contrail_gpu::allocate_profile(unsigned char, class c_contrail_profile const *);
// public: long c_contrail_gpu::s_row::get_last_allocated(void) const;
// private: bool c_contrail_gpu::get_prev_profile_temporary(void) const;
// public: float c_contrail_profile::get_age(void) const;
// public: float c_contrail_profile::get_lifespan(void) const;
// public: void c_contrail_gpu::queue_profile(unsigned char, class c_contrail_profile const *, bool);
// private: void c_contrail_gpu::set_prev_profile_temporary(bool);
// public: union real_point3d const * c_contrail_profile::get_position(void) const;
// public: union vector3d const * c_contrail_profile::get_velocity(void) const;
// public: float c_contrail_profile::get_cumulative_length(void) const;
// public: union argb_color const & c_contrail_profile::get_initial_color(void) const;
// public: float c_contrail_profile::get_initial_alpha(void) const;
// public: unsigned short const * c_contrail_profile::get_random_seed_ref(void) const;
// public: static void c_contrail_gpu::lock_queue_buffer(void);
// public: static void c_contrail_gpu::unlock_queue_buffer(void);
// public: static void c_contrail_gpu::spawn_all(void);
// public: static void c_contrail_gpu::frame_advance_all(float);
// public: c_contrail_states::c_contrail_states(void);
// private: void c_contrail_gpu::frame_advance(float, class c_contrail_states *);
// public: long c_contrail_gpu::s_row::get_used_start(void) const;
// public: long c_contrail_gpu::s_row::get_used_count(void) const;
// public: void c_contrail_gpu::render(class c_contrail_states const *) const;
// public: bool c_contrail_definition::get_double_sided(void) const;
// public: bool c_contrail_definition::get_fogged(void) const;
// public: class c_render_method_shader_contrail const * c_contrail_definition::get_shader(void) const;
// public: unsigned char c_contrail_definition::get_profile_type(void) const;
// public: unsigned char c_contrail_definition::get_ngon_sides(void) const;
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
// public: long c_contrail_system::get_definition_tag_index(void) const;
// public: class c_contrail_definition const * c_contrail::get_definition(void) const;
// public: class c_contrail_definition const * c_contrail_system_definition::get_contrail_definition(long) const;
// public: class c_contrail_system_definition const * c_contrail_system::get_definition(void) const;
// public: static class c_contrail_system_definition const * c_contrail_system_definition::get(long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// private: static void c_contrail_gpu::__tls_set_x_gamestate_storage_manager(void *);
// public: void s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::initialize_layout(enum e_vertex_type);
// public: void s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::initialize_data_buffers(void);
// public: void s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::reset_active(void);
// public: struct c_contrail_gpu::s_layout * s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::get_active_state_layout(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status);
// public: struct s_gpu_address_layout * s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::get_active_address_layout(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status);
// public: struct s_gpu_buffer_base const * s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::get_active_state_buffer(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status);
// public: struct s_gpu_buffer_base const * s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::get_active_address_buffer(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status);
// public: long s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::get_active_count(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status);
// public: long s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::increment_active_count(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status);
// public: void s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::lock_active_buffer(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status);
// public: void s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::unlock_active_buffer(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status);
// public: bool s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::active_buffer_locked(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status);
// public: void s_gpu_shader_pair<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::initialize(void);
// public: void s_gpu_shader_pair<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::dispose(void);
// public: void s_gpu_shader_pair<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::set_shader_pair(void);
// public: void s_gpu_shader_pair<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::unset_shader_pair(void);
// public: struct s_gpu_constant_table<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list> const * s_gpu_vertex_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::get_constant_table(void) const;
// public: void s_gpu_shader_pair<struct c_contrail_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::initialize(void);
// public: void s_gpu_shader_pair<struct c_contrail_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::dispose(void);
// public: void s_gpu_shader_pair<struct c_contrail_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::set_shader_pair(void);
// public: void s_gpu_shader_pair<struct c_contrail_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::unset_shader_pair(void);
// public: struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const * s_gpu_vertex_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::get_constant_table(void) const;
// public: void s_gpu_global_vertex_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::initialize(struct s_tag_reference const *);
// public: struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const * s_gpu_global_vertex_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::get_constant_table(void) const;
// public: bool s_gpu_global_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::is_initialized(void) const;
// public: void s_gpu_global_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::dispose(void);
// public: void c_data_iterator<class c_contrail_gpu>::begin(struct s_data_array *);
// public: bool c_data_iterator<class c_contrail_gpu>::next(void);
// public: class c_contrail_gpu * c_data_iterator<class c_contrail_gpu>::get_datum(void) const;
// public: c_render_section_scope<class c_contrail_gpu>::c_render_section_scope<class c_contrail_gpu>(class c_contrail_gpu const *);
// public: c_render_section_scope<class c_contrail_gpu>::~c_render_section_scope<class c_contrail_gpu>(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::valid(void) const;
// private: struct s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256> * s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::get_active_buffer(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status);
// public: void s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>::lock_gpu_buffers(void);
// public: void s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>::unlock_gpu_buffers(void);
// public: bool s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>::gpu_buffer_locked(void) const;
// public: bool s_gpu_buffer_base::locked(void) const;
// public: void s_gpu_vertex_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::initialize(void);
// public: bool s_gpu_vertex_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::set_shader(void);
// D3DDevice_GpuOwnVertexShaderConstantF;
// D3DTagCollection_Clear;
// D3DDevice_GpuOwnPixelShaderConstantF;
// public: void s_gpu_vertex_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::unset_shader(void);
// D3DDevice_GpuDisownVertexShaderConstantF;
// D3DDevice_GpuDisownPixelShaderConstantF;
// public: void s_gpu_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::dispose(void);
// public: void s_gpu_vertex_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::initialize(void);
// public: bool s_gpu_vertex_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::set_shader(void);
// public: void s_gpu_vertex_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::unset_shader(void);
// public: void s_gpu_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::dispose(void);
// private: class c_rasterizer_constant_table_definition const * s_gpu_global_vertex_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::initialize_constant_table(void);
// public: void s_gpu_global_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *);
// private: class c_rasterizer_constant_table_definition const * s_gpu_vertex_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::initialize_constant_table(void);
// public: void s_gpu_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *);
// private: class c_rasterizer_constant_table_definition const * s_gpu_vertex_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::initialize_constant_table(void);
// public: void s_gpu_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *);
// public: void s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *);
// public: void s_gpu_constant_table<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *);
// public: void s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *);
// public: void s_gpu_storage<union vector4d, 0, 38, 7, 2, 3, 1713062, -1>::set_value(unsigned long, unsigned long, struct __vector4const &);
// public: void s_gpu_storage<unsigned __int64, 0, 32, 7, 1, 16, 1712992, 5>::set_value(unsigned long, unsigned long, struct __vector4const &);
// public: void s_gpu_storage<unsigned __int64, 0, 26, 0, 1, 10, 1712218, -1>::set_value(unsigned long, unsigned long, unsigned __int64const &);
// public: void s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::set_value(unsigned long, unsigned long, struct __vector4const &);
// public: static unsigned long s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::pack(struct __vector4const &);
// public: void s_gpu_storage<unsigned long, 0, 31, 7, 1, 15, 2892639, 3>::set_value(unsigned long, unsigned long, struct __vector4const &);
// public: void s_gpu_storage<unsigned long, 1, 6, 0, 2, 6, 1583238, 0>::set_value(unsigned long, unsigned long, struct __vector4const &);
// public: void s_gpu_layout<18, enum c_contrail_gpu::e_state>::initialize(enum e_vertex_type, struct s_gpu_buffer_base *);
// public: void s_gpu_layout<18, enum c_contrail_gpu::e_state>::initialize_data_buffers(struct s_gpu_buffer_base *);
// public: void s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::swap(void);
// public: void s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>::initialize_layout(enum e_vertex_type);
// public: void s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>::initialize_data_buffers(void);
// public: void s_gpu_buffer_base::create(void);
// public: void s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>::reset(void);
// void data_dump<struct c_contrail_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level);
// public: void s_gpu_layout<18, enum c_contrail_gpu::e_state>::set_memexport<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list> const *);
// public: void s_gpu_layout<18, enum c_contrail_gpu::e_state>::set_memexport<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *);
// private: void c_contrail_gpu::set_shader_functions<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *) const;
// public: float const (* c_contrail_definition::get_gpu_function_data(void) const)[16];
// public: float const (* c_contrail_definition::s_gpu_data::get_functions(void) const)[16];
// public: float const (* c_contrail_definition::get_gpu_color_data(void) const)[4];
// public: float const (* c_contrail_definition::s_gpu_data::get_colors(void) const)[4];
// public: float const (* c_contrail_definition::get_gpu_property_data(void) const)[4];
// public: float const (* c_contrail_definition::s_gpu_data::get_properties(void) const)[4];
// public: long c_contrail_definition::get_gpu_function_count(void) const;
// public: long c_contrail_definition::s_gpu_data::get_function_count(void) const;
// public: long c_contrail_definition::get_gpu_color_count(void) const;
// public: long c_contrail_definition::s_gpu_data::get_color_count(void) const;
// public: long c_contrail_definition::get_gpu_property_count(void) const;
// public: long c_contrail_definition::s_gpu_data::get_property_count(void) const;
// private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *, class c_contrail_states const *) const;
// public: float c_contrail_states::get_state_value(long) const;
// public: unsigned long c_contrail_definition::get_used_states(void) const;
// public: unsigned long c_contrail_definition::get_appearance_flags(void) const;
// public: union vector2d const * c_contrail_definition::get_uv_tiling_rate(void) const;
// public: union vector2d const * c_contrail_definition::get_uv_scroll_rate(void) const;
// public: float const c_contrail_definition::get_origin_fade_range(void) const;
// public: float const c_contrail_definition::get_origin_fade_cutoff(void) const;
// public: float const c_contrail_definition::get_edge_fade_range(void) const;
// public: float const c_contrail_definition::get_edge_fade_cutoff(void) const;
// public: union real_point3d const * c_contrail_location::get_origin(void) const;
// public: union real_point2d const * c_contrail::get_uv_offset(void) const;
// public: float s_render_time::get_game_time_seconds_repeat_arbitrary(long);
// private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *, class c_contrail_states const *) const;
// private: void c_contrail_gpu::set_shader_strip<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *) const;
// private: struct s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256> const * s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::set_active_buffer(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status, struct s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256> *);
// public: void s_gpu_storage<union vector4d, 0, 38, 7, 2, 3, 1713062, -1>::set_value(unsigned long, unsigned long, union vector4d const &);
// public: void s_gpu_storage<unsigned __int64, 0, 32, 7, 1, 16, 1712992, 5>::set_value(unsigned long, unsigned long, unsigned __int64const &);
// public: void s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::set_value(unsigned long, unsigned long, unsigned long const &);
// public: void s_gpu_storage<unsigned long, 0, 31, 7, 1, 15, 2892639, 3>::set_value(unsigned long, unsigned long, unsigned long const &);
// public: void s_gpu_storage<unsigned long, 1, 6, 0, 2, 6, 1583238, 0>::set_value(unsigned long, unsigned long, unsigned long const &);
// public: void s_gpu_layout<17, enum e_gpu_address_state>::initialize(enum e_vertex_type, struct s_gpu_buffer_base *);
// void data_dump<struct c_contrail_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level, bool);
// public: static char const * c_contrail_gpu::s_row::get_name(void);
// public: void s_gpu_constant_table<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::set_struct<struct s_gpu_layout<18, enum c_contrail_gpu::e_state>::s_memexport_set>(enum c_contrail_gpu::s_spawn_vertex_shader_constant_list::e_index, struct s_gpu_layout<18, enum c_contrail_gpu::e_state>::s_memexport_set const *) const;
// public: void s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::set_struct<struct s_gpu_layout<18, enum c_contrail_gpu::e_state>::s_memexport_set>(enum c_contrail_gpu::s_update_vertex_shader_constant_list::e_index, struct s_gpu_layout<18, enum c_contrail_gpu::e_state>::s_memexport_set const *) const;
// public: void s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::set_struct_partial<float const[16]>(enum c_contrail_gpu::s_update_vertex_shader_constant_list::e_index, unsigned long, float const (*)[16]) const;
// public: void s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::set_struct_partial<float const[4]>(enum c_contrail_gpu::s_update_vertex_shader_constant_list::e_index, unsigned long, float const (*)[4]) const;
// public: void s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::set_struct<struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state>(enum c_contrail_gpu::s_update_vertex_shader_constant_list::e_index, struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state const *) const;
// public: void s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::set_struct<struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state>(enum c_contrail_gpu::s_render_vertex_shader_constant_list::e_index, struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state const *) const;
// public: void s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::set_struct<struct `private: void c_contrail_gpu::set_shader_strip<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_strip>(enum c_contrail_gpu::s_render_vertex_shader_constant_list::e_index, struct `private: void c_contrail_gpu::set_shader_strip<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_strip const *) const;
// public: void c_data_iterator<struct c_contrail_gpu::s_row>::begin(struct s_data_array *);
// public: bool c_data_iterator<struct c_contrail_gpu::s_row>::next(void);
// public: struct c_contrail_gpu::s_row * c_data_iterator<struct c_contrail_gpu::s_row>::get_datum(void) const;
// public: void s_gpu_constant_table_base::set_struct<struct s_gpu_layout<18, enum c_contrail_gpu::e_state>::s_memexport_set>(unsigned long, struct s_gpu_layout<18, enum c_contrail_gpu::e_state>::s_memexport_set const *) const;
// D3DDevice_GpuEndShaderConstantF4;
// public: void s_gpu_constant_table_base::set_struct<struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state>(unsigned long, struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state const *) const;
// public: void s_gpu_constant_table_base::set_struct<struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state>(unsigned long, struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state const *) const;
// public: void s_gpu_constant_table_base::set_struct<struct `private: void c_contrail_gpu::set_shader_strip<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_strip>(unsigned long, struct `private: void c_contrail_gpu::set_shader_strip<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_strip const *) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// private: static void c_contrail_gpu::__tls_set_x_data_array_manager(void *);
// public: void t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: static void c_contrail_gpu::s_row::__tls_set_x_data_array_manager(void *);
// public: void t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::free_memory(void);
// public: s_gpu_buffer<18, 16, 160>::s_gpu_buffer<18, 16, 160>(void);
// public: s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>(void);
// public: s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>::s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>(void);
// public: s_gpu_address_layout::s_gpu_address_layout(void);
// public: c_contrail_gpu::s_layout::s_layout(void);
// public: s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>(enum e_rasterizer_vertex_attribute const &, unsigned long const &);
// public: virtual unsigned int s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::get_size(void) const;
// public: virtual long s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::get_vertex_format(void) const;
// public: virtual long s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::get_d3d_type(void) const;
// public: s_gpu_layout<17, enum e_gpu_address_state>::s_gpu_layout<17, enum e_gpu_address_state>(void);
// public: s_gpu_layout<18, enum c_contrail_gpu::e_state>::s_gpu_layout<18, enum c_contrail_gpu::e_state>(void);
// public: s_gpu_buffer<18, 256, 1>::s_gpu_buffer<18, 256, 1>(void);
// public: s_gpu_buffer<17, 256, 1>::s_gpu_buffer<17, 256, 1>(void);
// public: virtual void s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::initialize_layout(unsigned long, unsigned long);
// public: virtual void s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::initialize_data_buffers(void);
// public: virtual void s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::fill(struct __vector4const &);
// public: virtual void s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::fill(unsigned short, struct __vector4const &);
// public: s_gpu_shader_pair<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::s_gpu_shader_pair<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type);
// public: s_gpu_vertex_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::s_gpu_vertex_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type);
// public: s_gpu_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::s_gpu_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader);
// public: s_gpu_constant_table<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::s_gpu_constant_table<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>(void);
// public: s_gpu_shader_pair<struct c_contrail_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::s_gpu_shader_pair<struct c_contrail_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type);
// public: s_gpu_vertex_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::s_gpu_vertex_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type);
// public: s_gpu_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::s_gpu_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader);
// public: s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(void);
// public: s_gpu_global_vertex_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::s_gpu_global_vertex_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(enum e_vertex_type);
// public: s_gpu_global_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::s_gpu_global_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(void);
// public: s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>(void);
// ??__F?x_data_array_manager@c_contrail_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_contrail_gpu@@CAXPAX@Z@@A@@YAXXZ;
// ??__F?x_data_array_manager@s_row@c_contrail_gpu@@2V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_contrail_gpu@@SAXPAX@Z@@A@@YAXXZ;
// ??__F?x_gamestate_storage_manager@c_contrail_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_contrail_gpu@@CAXPAX@Z@@A@@YAXXZ;

//public: static void c_contrail_gpu::shell_initialize(void)
//{
//    mangled_ppc("?shell_initialize@c_contrail_gpu@@SAXXZ");
//};

//public: static void c_contrail_gpu::initialize_for_game(void)
//{
//    mangled_ppc("?initialize_for_game@c_contrail_gpu@@SAXXZ");
//};

//public: static unsigned long c_contrail_gpu::s_pc_proxy::s_overall_storage::get_buffer_size(void)
//{
//    mangled_ppc("?get_buffer_size@s_overall_storage@s_pc_proxy@c_contrail_gpu@@SAKXZ");
//};

//public: static unsigned long c_contrail_gpu::s_pc_proxy::s_overall_storage::get_buffer_alignment_bits(void)
//{
//    mangled_ppc("?get_buffer_alignment_bits@s_overall_storage@s_pc_proxy@c_contrail_gpu@@SAKXZ");
//};

//public: static void c_contrail_gpu::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@c_contrail_gpu@@SAXXZ");
//};

//public: static void c_contrail_gpu::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@c_contrail_gpu@@SAXXZ");
//};

//public: static void c_contrail_gpu::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@c_contrail_gpu@@SAXXZ");
//};

//public: static void c_contrail_gpu::reset(void)
//{
//    mangled_ppc("?reset@c_contrail_gpu@@SAXXZ");
//};

//public: static long c_contrail_gpu::create(unsigned char, long)
//{
//    mangled_ppc("?create@c_contrail_gpu@@SAJEJ@Z");
//};

//public: static class c_contrail_gpu * c_contrail_gpu::get(long)
//{
//    mangled_ppc("?get@c_contrail_gpu@@SAPAV1@J@Z");
//};

//public: static void c_contrail_gpu::destroy(long)
//{
//    mangled_ppc("?destroy@c_contrail_gpu@@SAXJ@Z");
//};

//public: char const * c_contrail_gpu::get_name(void) const
//{
//    mangled_ppc("?get_name@c_contrail_gpu@@QBAPBDXZ");
//};

//public: char const * c_contrail::get_name(void) const
//{
//    mangled_ppc("?get_name@c_contrail@@QBAPBDXZ");
//};

//public: char const * c_contrail_system::get_name(void) const
//{
//    mangled_ppc("?get_name@c_contrail_system@@QBAPBDXZ");
//};

//public: class c_contrail_system const * c_contrail_location::get_parent_system(void) const
//{
//    mangled_ppc("?get_parent_system@c_contrail_location@@QBAPBVc_contrail_system@@XZ");
//};

//public: static class c_contrail_system * c_contrail_system::get(long)
//{
//    mangled_ppc("?get@c_contrail_system@@SAPAV1@J@Z");
//};

//public: static class c_contrail * c_contrail::get(long)
//{
//    mangled_ppc("?get@c_contrail@@SAPAV1@J@Z");
//};

//public: class c_contrail_location const * c_contrail::get_parent_location(void) const
//{
//    mangled_ppc("?get_parent_location@c_contrail@@QBAPBVc_contrail_location@@XZ");
//};

//public: static class c_contrail_location * c_contrail_location::get(long)
//{
//    mangled_ppc("?get@c_contrail_location@@SAPAV1@J@Z");
//};

//public: char const * c_contrail_gpu::get_profile_name(void) const
//{
//    mangled_ppc("?get_profile_name@c_contrail_gpu@@QBAPBDXZ");
//};

//public: static long c_contrail_gpu::s_row::create(unsigned char, long)
//{
//    mangled_ppc("?create@s_row@c_contrail_gpu@@SAJEJ@Z");
//};

//public: static struct c_contrail_gpu::s_row * c_contrail_gpu::s_row::get(long)
//{
//    mangled_ppc("?get@s_row@c_contrail_gpu@@SAPAU12@J@Z");
//};

//public: static struct c_contrail_gpu::s_row * c_contrail_gpu::s_row::try_get(long)
//{
//    mangled_ppc("?try_get@s_row@c_contrail_gpu@@SAPAU12@J@Z");
//};

//public: static void c_contrail_gpu::s_row::destroy(long, bool)
//{
//    mangled_ppc("?destroy@s_row@c_contrail_gpu@@SAXJ_N@Z");
//};

//private: static void c_contrail_gpu::initialize_layout(void)
//{
//    mangled_ppc("?initialize_layout@c_contrail_gpu@@CAXXZ");
//};

//private: static void c_contrail_gpu::initialize_data_buffers(void)
//{
//    mangled_ppc("?initialize_data_buffers@c_contrail_gpu@@CAXXZ");
//};

//private: static void c_contrail_gpu::initialize_gamestate_data_buffers(void)
//{
//    mangled_ppc("?initialize_gamestate_data_buffers@c_contrail_gpu@@CAXXZ");
//};

//private: static void c_contrail_gpu::initialize_shaders(void)
//{
//    mangled_ppc("?initialize_shaders@c_contrail_gpu@@CAXXZ");
//};

//private: static void c_contrail_gpu::dispose_shaders(void)
//{
//    mangled_ppc("?dispose_shaders@c_contrail_gpu@@CAXXZ");
//};

//private: unsigned long c_contrail_gpu::allocate_profile(unsigned char, class c_contrail_profile const *)
//{
//    mangled_ppc("?allocate_profile@c_contrail_gpu@@AAAKEPBVc_contrail_profile@@@Z");
//};

//public: long c_contrail_gpu::s_row::get_last_allocated(void) const
//{
//    mangled_ppc("?get_last_allocated@s_row@c_contrail_gpu@@QBAJXZ");
//};

//private: bool c_contrail_gpu::get_prev_profile_temporary(void) const
//{
//    mangled_ppc("?get_prev_profile_temporary@c_contrail_gpu@@ABA_NXZ");
//};

//public: float c_contrail_profile::get_age(void) const
//{
//    mangled_ppc("?get_age@c_contrail_profile@@QBAMXZ");
//};

//public: float c_contrail_profile::get_lifespan(void) const
//{
//    mangled_ppc("?get_lifespan@c_contrail_profile@@QBAMXZ");
//};

//public: void c_contrail_gpu::queue_profile(unsigned char, class c_contrail_profile const *, bool)
//{
//    mangled_ppc("?queue_profile@c_contrail_gpu@@QAAXEPBVc_contrail_profile@@_N@Z");
//};

//private: void c_contrail_gpu::set_prev_profile_temporary(bool)
//{
//    mangled_ppc("?set_prev_profile_temporary@c_contrail_gpu@@AAAX_N@Z");
//};

//public: union real_point3d const * c_contrail_profile::get_position(void) const
//{
//    mangled_ppc("?get_position@c_contrail_profile@@QBAPBTreal_point3d@@XZ");
//};

//public: union vector3d const * c_contrail_profile::get_velocity(void) const
//{
//    mangled_ppc("?get_velocity@c_contrail_profile@@QBAPBTvector3d@@XZ");
//};

//public: float c_contrail_profile::get_cumulative_length(void) const
//{
//    mangled_ppc("?get_cumulative_length@c_contrail_profile@@QBAMXZ");
//};

//public: union argb_color const & c_contrail_profile::get_initial_color(void) const
//{
//    mangled_ppc("?get_initial_color@c_contrail_profile@@QBAABTargb_color@@XZ");
//};

//public: float c_contrail_profile::get_initial_alpha(void) const
//{
//    mangled_ppc("?get_initial_alpha@c_contrail_profile@@QBAMXZ");
//};

//public: unsigned short const * c_contrail_profile::get_random_seed_ref(void) const
//{
//    mangled_ppc("?get_random_seed_ref@c_contrail_profile@@QBAPBGXZ");
//};

//public: static void c_contrail_gpu::lock_queue_buffer(void)
//{
//    mangled_ppc("?lock_queue_buffer@c_contrail_gpu@@SAXXZ");
//};

//public: static void c_contrail_gpu::unlock_queue_buffer(void)
//{
//    mangled_ppc("?unlock_queue_buffer@c_contrail_gpu@@SAXXZ");
//};

//public: static void c_contrail_gpu::spawn_all(void)
//{
//    mangled_ppc("?spawn_all@c_contrail_gpu@@SAXXZ");
//};

//public: static void c_contrail_gpu::frame_advance_all(float)
//{
//    mangled_ppc("?frame_advance_all@c_contrail_gpu@@SAXM@Z");
//};

//public: c_contrail_states::c_contrail_states(void)
//{
//    mangled_ppc("??0c_contrail_states@@QAA@XZ");
//};

//private: void c_contrail_gpu::frame_advance(float, class c_contrail_states *)
//{
//    mangled_ppc("?frame_advance@c_contrail_gpu@@AAAXMPAVc_contrail_states@@@Z");
//};

//public: long c_contrail_gpu::s_row::get_used_start(void) const
//{
//    mangled_ppc("?get_used_start@s_row@c_contrail_gpu@@QBAJXZ");
//};

//public: long c_contrail_gpu::s_row::get_used_count(void) const
//{
//    mangled_ppc("?get_used_count@s_row@c_contrail_gpu@@QBAJXZ");
//};

//public: void c_contrail_gpu::render(class c_contrail_states const *) const
//{
//    mangled_ppc("?render@c_contrail_gpu@@QBAXPBVc_contrail_states@@@Z");
//};

//public: bool c_contrail_definition::get_double_sided(void) const
//{
//    mangled_ppc("?get_double_sided@c_contrail_definition@@QBA_NXZ");
//};

//public: bool c_contrail_definition::get_fogged(void) const
//{
//    mangled_ppc("?get_fogged@c_contrail_definition@@QBA_NXZ");
//};

//public: class c_render_method_shader_contrail const * c_contrail_definition::get_shader(void) const
//{
//    mangled_ppc("?get_shader@c_contrail_definition@@QBAPBVc_render_method_shader_contrail@@XZ");
//};

//public: unsigned char c_contrail_definition::get_profile_type(void) const
//{
//    mangled_ppc("?get_profile_type@c_contrail_definition@@QBAEXZ");
//};

//public: unsigned char c_contrail_definition::get_ngon_sides(void) const
//{
//    mangled_ppc("?get_ngon_sides@c_contrail_definition@@QBAEXZ");
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

//public: long c_contrail_system::get_definition_tag_index(void) const
//{
//    mangled_ppc("?get_definition_tag_index@c_contrail_system@@QBAJXZ");
//};

//public: class c_contrail_definition const * c_contrail::get_definition(void) const
//{
//    mangled_ppc("?get_definition@c_contrail@@QBAPBVc_contrail_definition@@XZ");
//};

//public: class c_contrail_definition const * c_contrail_system_definition::get_contrail_definition(long) const
//{
//    mangled_ppc("?get_contrail_definition@c_contrail_system_definition@@QBAPBVc_contrail_definition@@J@Z");
//};

//public: class c_contrail_system_definition const * c_contrail_system::get_definition(void) const
//{
//    mangled_ppc("?get_definition@c_contrail_system@@QBAPBVc_contrail_system_definition@@XZ");
//};

//public: static class c_contrail_system_definition const * c_contrail_system_definition::get(long)
//{
//    mangled_ppc("?get@c_contrail_system_definition@@SAPBV1@J@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_contrail_gpu@@CAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//private: static void c_contrail_gpu::__tls_set_x_gamestate_storage_manager(void *)
//{
//    mangled_ppc("?__tls_set_x_gamestate_storage_manager@c_contrail_gpu@@CAXPAX@Z");
//};

//public: void s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::initialize_layout(enum e_vertex_type)
//{
//    mangled_ppc("?initialize_layout@?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAXW4e_vertex_type@@@Z");
//};

//public: void s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::initialize_data_buffers(void)
//{
//    mangled_ppc("?initialize_data_buffers@?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAXXZ");
//};

//public: void s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::reset_active(void)
//{
//    mangled_ppc("?reset_active@?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAXXZ");
//};

//public: struct c_contrail_gpu::s_layout * s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::get_active_state_layout(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status)
//{
//    mangled_ppc("?get_active_state_layout@?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAPAUs_layout@c_contrail_gpu@@W4e_status@1@@Z");
//};

//public: struct s_gpu_address_layout * s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::get_active_address_layout(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status)
//{
//    mangled_ppc("?get_active_address_layout@?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAPAUs_gpu_address_layout@@W4e_status@1@@Z");
//};

//public: struct s_gpu_buffer_base const * s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::get_active_state_buffer(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status)
//{
//    mangled_ppc("?get_active_state_buffer@?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAPBUs_gpu_buffer_base@@W4e_status@1@@Z");
//};

//public: struct s_gpu_buffer_base const * s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::get_active_address_buffer(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status)
//{
//    mangled_ppc("?get_active_address_buffer@?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAPBUs_gpu_buffer_base@@W4e_status@1@@Z");
//};

//public: long s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::get_active_count(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status)
//{
//    mangled_ppc("?get_active_count@?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAJW4e_status@1@@Z");
//};

//public: long s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::increment_active_count(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status)
//{
//    mangled_ppc("?increment_active_count@?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAJW4e_status@1@@Z");
//};

//public: void s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::lock_active_buffer(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status)
//{
//    mangled_ppc("?lock_active_buffer@?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAXW4e_status@1@@Z");
//};

//public: void s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::unlock_active_buffer(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status)
//{
//    mangled_ppc("?unlock_active_buffer@?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAXW4e_status@1@@Z");
//};

//public: bool s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::active_buffer_locked(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status)
//{
//    mangled_ppc("?active_buffer_locked@?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAA_NW4e_status@1@@Z");
//};

//public: void s_gpu_shader_pair<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::initialize(void)
//{
//    mangled_ppc("?initialize@?$s_gpu_shader_pair@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: void s_gpu_shader_pair<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::dispose(void)
//{
//    mangled_ppc("?dispose@?$s_gpu_shader_pair@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: void s_gpu_shader_pair<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::set_shader_pair(void)
//{
//    mangled_ppc("?set_shader_pair@?$s_gpu_shader_pair@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: void s_gpu_shader_pair<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::unset_shader_pair(void)
//{
//    mangled_ppc("?unset_shader_pair@?$s_gpu_shader_pair@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: struct s_gpu_constant_table<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list> const * s_gpu_vertex_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::get_constant_table(void) const
//{
//    mangled_ppc("?get_constant_table@?$s_gpu_vertex_shader@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@@QBAPBU?$s_gpu_constant_table@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@@XZ");
//};

//public: void s_gpu_shader_pair<struct c_contrail_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::initialize(void)
//{
//    mangled_ppc("?initialize@?$s_gpu_shader_pair@Us_update_vertex_shader_constant_list@c_contrail_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: void s_gpu_shader_pair<struct c_contrail_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::dispose(void)
//{
//    mangled_ppc("?dispose@?$s_gpu_shader_pair@Us_update_vertex_shader_constant_list@c_contrail_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: void s_gpu_shader_pair<struct c_contrail_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::set_shader_pair(void)
//{
//    mangled_ppc("?set_shader_pair@?$s_gpu_shader_pair@Us_update_vertex_shader_constant_list@c_contrail_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: void s_gpu_shader_pair<struct c_contrail_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::unset_shader_pair(void)
//{
//    mangled_ppc("?unset_shader_pair@?$s_gpu_shader_pair@Us_update_vertex_shader_constant_list@c_contrail_gpu@@Us_gpu_empty_constant_list@@@@QAAXXZ");
//};

//public: struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const * s_gpu_vertex_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::get_constant_table(void) const
//{
//    mangled_ppc("?get_constant_table@?$s_gpu_vertex_shader@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@QBAPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@XZ");
//};

//public: void s_gpu_global_vertex_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::initialize(struct s_tag_reference const *)
//{
//    mangled_ppc("?initialize@?$s_gpu_global_vertex_shader@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXPBUs_tag_reference@@@Z");
//};

//public: struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const * s_gpu_global_vertex_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::get_constant_table(void) const
//{
//    mangled_ppc("?get_constant_table@?$s_gpu_global_vertex_shader@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@QBAPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@XZ");
//};

//public: bool s_gpu_global_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::is_initialized(void) const
//{
//    mangled_ppc("?is_initialized@?$s_gpu_global_shader@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@QBA_NXZ");
//};

//public: void s_gpu_global_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::dispose(void)
//{
//    mangled_ppc("?dispose@?$s_gpu_global_shader@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXXZ");
//};

//public: void c_data_iterator<class c_contrail_gpu>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Vc_contrail_gpu@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<class c_contrail_gpu>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Vc_contrail_gpu@@@@QAA_NXZ");
//};

//public: class c_contrail_gpu * c_data_iterator<class c_contrail_gpu>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Vc_contrail_gpu@@@@QBAPAVc_contrail_gpu@@XZ");
//};

//public: c_render_section_scope<class c_contrail_gpu>::c_render_section_scope<class c_contrail_gpu>(class c_contrail_gpu const *)
//{
//    mangled_ppc("??0?$c_render_section_scope@Vc_contrail_gpu@@@@QAA@PBVc_contrail_gpu@@@Z");
//};

//public: c_render_section_scope<class c_contrail_gpu>::~c_render_section_scope<class c_contrail_gpu>(void)
//{
//    mangled_ppc("??1?$c_render_section_scope@Vc_contrail_gpu@@@@QAA@XZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_contrail_gpu@@CAXPAX@Z@@QBA_NXZ");
//};

//private: struct s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256> * s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::get_active_buffer(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status)
//{
//    mangled_ppc("?get_active_buffer@?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@AAAPAU?$s_queued_gpu_buffer@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@W4e_status@1@@Z");
//};

//public: void s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>::lock_gpu_buffers(void)
//{
//    mangled_ppc("?lock_gpu_buffers@?$s_queued_gpu_buffer@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAXXZ");
//};

//public: void s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>::unlock_gpu_buffers(void)
//{
//    mangled_ppc("?unlock_gpu_buffers@?$s_queued_gpu_buffer@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAXXZ");
//};

//public: bool s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>::gpu_buffer_locked(void) const
//{
//    mangled_ppc("?gpu_buffer_locked@?$s_queued_gpu_buffer@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QBA_NXZ");
//};

//public: bool s_gpu_buffer_base::locked(void) const
//{
//    mangled_ppc("?locked@s_gpu_buffer_base@@QBA_NXZ");
//};

//public: void s_gpu_vertex_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::initialize(void)
//{
//    mangled_ppc("?initialize@?$s_gpu_vertex_shader@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXXZ");
//};

//public: bool s_gpu_vertex_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::set_shader(void)
//{
//    mangled_ppc("?set_shader@?$s_gpu_vertex_shader@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@@QAA_NXZ");
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

//public: void s_gpu_vertex_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::unset_shader(void)
//{
//    mangled_ppc("?unset_shader@?$s_gpu_vertex_shader@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXXZ");
//};

//D3DDevice_GpuDisownVertexShaderConstantF
//{
//    mangled_ppc("D3DDevice_GpuDisownVertexShaderConstantF");
//};

//D3DDevice_GpuDisownPixelShaderConstantF
//{
//    mangled_ppc("D3DDevice_GpuDisownPixelShaderConstantF");
//};

//public: void s_gpu_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::dispose(void)
//{
//    mangled_ppc("?dispose@?$s_gpu_shader@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXXZ");
//};

//public: void s_gpu_vertex_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::initialize(void)
//{
//    mangled_ppc("?initialize@?$s_gpu_vertex_shader@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXXZ");
//};

//public: bool s_gpu_vertex_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::set_shader(void)
//{
//    mangled_ppc("?set_shader@?$s_gpu_vertex_shader@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@QAA_NXZ");
//};

//public: void s_gpu_vertex_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::unset_shader(void)
//{
//    mangled_ppc("?unset_shader@?$s_gpu_vertex_shader@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXXZ");
//};

//public: void s_gpu_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::dispose(void)
//{
//    mangled_ppc("?dispose@?$s_gpu_shader@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXXZ");
//};

//private: class c_rasterizer_constant_table_definition const * s_gpu_global_vertex_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::initialize_constant_table(void)
//{
//    mangled_ppc("?initialize_constant_table@?$s_gpu_global_vertex_shader@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@AAAPBVc_rasterizer_constant_table_definition@@XZ");
//};

//public: void s_gpu_global_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)
//{
//    mangled_ppc("?initialize@?$s_gpu_global_shader@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z");
//};

//private: class c_rasterizer_constant_table_definition const * s_gpu_vertex_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::initialize_constant_table(void)
//{
//    mangled_ppc("?initialize_constant_table@?$s_gpu_vertex_shader@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@@AAAPBVc_rasterizer_constant_table_definition@@XZ");
//};

//public: void s_gpu_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)
//{
//    mangled_ppc("?initialize@?$s_gpu_shader@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z");
//};

//private: class c_rasterizer_constant_table_definition const * s_gpu_vertex_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::initialize_constant_table(void)
//{
//    mangled_ppc("?initialize_constant_table@?$s_gpu_vertex_shader@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@AAAPBVc_rasterizer_constant_table_definition@@XZ");
//};

//public: void s_gpu_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)
//{
//    mangled_ppc("?initialize@?$s_gpu_shader@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z");
//};

//public: void s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)
//{
//    mangled_ppc("?initialize@?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z");
//};

//public: void s_gpu_constant_table<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)
//{
//    mangled_ppc("?initialize@?$s_gpu_constant_table@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z");
//};

//public: void s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::initialize(class c_rasterizer_constant_table_definition const *)
//{
//    mangled_ppc("?initialize@?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@QAAXPBVc_rasterizer_constant_table_definition@@@Z");
//};

//public: void s_gpu_storage<union vector4d, 0, 38, 7, 2, 3, 1713062, -1>::set_value(unsigned long, unsigned long, struct __vector4const &)
//{
//    mangled_ppc("?set_value@?$s_gpu_storage@Tvector4d@@$0A@$0CG@$06$01$02$0BKCDKG@$0?0@@QAAXKKABU__vector4@@@Z");
//};

//public: void s_gpu_storage<unsigned __int64, 0, 32, 7, 1, 16, 1712992, 5>::set_value(unsigned long, unsigned long, struct __vector4const &)
//{
//    mangled_ppc("?set_value@?$s_gpu_storage@_K$0A@$0CA@$06$00$0BA@$0BKCDGA@$04@@QAAXKKABU__vector4@@@Z");
//};

//public: void s_gpu_storage<unsigned __int64, 0, 26, 0, 1, 10, 1712218, -1>::set_value(unsigned long, unsigned long, unsigned __int64const &)
//{
//    mangled_ppc("?set_value@?$s_gpu_storage@_K$0A@$0BK@$0A@$00$09$0BKCAFK@$0?0@@QAAXKKAB_K@Z");
//};

//public: void s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::set_value(unsigned long, unsigned long, struct __vector4const &)
//{
//    mangled_ppc("?set_value@?$s_gpu_storage@K$0A@$0BJ@$01$00$06$0CMCCFJ@$0?0@@QAAXKKABU__vector4@@@Z");
//};

//public: static unsigned long s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::pack(struct __vector4const &)
//{
//    mangled_ppc("?pack@?$s_gpu_storage@K$0A@$0BJ@$01$00$06$0CMCCFJ@$0?0@@SAKABU__vector4@@@Z");
//};

//public: void s_gpu_storage<unsigned long, 0, 31, 7, 1, 15, 2892639, 3>::set_value(unsigned long, unsigned long, struct __vector4const &)
//{
//    mangled_ppc("?set_value@?$s_gpu_storage@K$0A@$0BP@$06$00$0P@$0CMCDFP@$02@@QAAXKKABU__vector4@@@Z");
//};

//public: void s_gpu_storage<unsigned long, 1, 6, 0, 2, 6, 1583238, 0>::set_value(unsigned long, unsigned long, struct __vector4const &)
//{
//    mangled_ppc("?set_value@?$s_gpu_storage@K$00$05$0A@$01$05$0BICIIG@$0A@@@QAAXKKABU__vector4@@@Z");
//};

//public: void s_gpu_layout<18, enum c_contrail_gpu::e_state>::initialize(enum e_vertex_type, struct s_gpu_buffer_base *)
//{
//    mangled_ppc("?initialize@?$s_gpu_layout@$0BC@W4e_state@c_contrail_gpu@@@@QAAXW4e_vertex_type@@PAUs_gpu_buffer_base@@@Z");
//};

//public: void s_gpu_layout<18, enum c_contrail_gpu::e_state>::initialize_data_buffers(struct s_gpu_buffer_base *)
//{
//    mangled_ppc("?initialize_data_buffers@?$s_gpu_layout@$0BC@W4e_state@c_contrail_gpu@@@@QAAXPAUs_gpu_buffer_base@@@Z");
//};

//public: void s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::swap(void)
//{
//    mangled_ppc("?swap@?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAXXZ");
//};

//public: void s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>::initialize_layout(enum e_vertex_type)
//{
//    mangled_ppc("?initialize_layout@?$s_queued_gpu_buffer@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAXW4e_vertex_type@@@Z");
//};

//public: void s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>::initialize_data_buffers(void)
//{
//    mangled_ppc("?initialize_data_buffers@?$s_queued_gpu_buffer@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAXXZ");
//};

//public: void s_gpu_buffer_base::create(void)
//{
//    mangled_ppc("?create@s_gpu_buffer_base@@QAAXXZ");
//};

//public: void s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>::reset(void)
//{
//    mangled_ppc("?reset@?$s_queued_gpu_buffer@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAAXXZ");
//};

//void data_dump<struct c_contrail_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level)
//{
//    mangled_ppc("??$data_dump@Us_row@c_contrail_gpu@@@@YAXPBUs_data_array@@PBDW4e_event_level@@@Z");
//};

//public: void s_gpu_layout<18, enum c_contrail_gpu::e_state>::set_memexport<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list> const *)
//{
//    mangled_ppc("??$set_memexport@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@?$s_gpu_layout@$0BC@W4e_state@c_contrail_gpu@@@@QAAXPBU?$s_gpu_constant_table@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@@@Z");
//};

//public: void s_gpu_layout<18, enum c_contrail_gpu::e_state>::set_memexport<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *)
//{
//    mangled_ppc("??$set_memexport@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@?$s_gpu_layout@$0BC@W4e_state@c_contrail_gpu@@@@QAAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@@Z");
//};

//private: void c_contrail_gpu::set_shader_functions<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *) const
//{
//    mangled_ppc("??$set_shader_functions@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@@Z");
//};

//public: float const (* c_contrail_definition::get_gpu_function_data(void) const)[16]
//{
//    mangled_ppc("?get_gpu_function_data@c_contrail_definition@@QBAPAY0BA@$$CBMXZ");
//};

//public: float const (* c_contrail_definition::s_gpu_data::get_functions(void) const)[16]
//{
//    mangled_ppc("?get_functions@s_gpu_data@c_contrail_definition@@QBAPAY0BA@$$CBMXZ");
//};

//public: float const (* c_contrail_definition::get_gpu_color_data(void) const)[4]
//{
//    mangled_ppc("?get_gpu_color_data@c_contrail_definition@@QBAPAY03$$CBMXZ");
//};

//public: float const (* c_contrail_definition::s_gpu_data::get_colors(void) const)[4]
//{
//    mangled_ppc("?get_colors@s_gpu_data@c_contrail_definition@@QBAPAY03$$CBMXZ");
//};

//public: float const (* c_contrail_definition::get_gpu_property_data(void) const)[4]
//{
//    mangled_ppc("?get_gpu_property_data@c_contrail_definition@@QBAPAY03$$CBMXZ");
//};

//public: float const (* c_contrail_definition::s_gpu_data::get_properties(void) const)[4]
//{
//    mangled_ppc("?get_properties@s_gpu_data@c_contrail_definition@@QBAPAY03$$CBMXZ");
//};

//public: long c_contrail_definition::get_gpu_function_count(void) const
//{
//    mangled_ppc("?get_gpu_function_count@c_contrail_definition@@QBAJXZ");
//};

//public: long c_contrail_definition::s_gpu_data::get_function_count(void) const
//{
//    mangled_ppc("?get_function_count@s_gpu_data@c_contrail_definition@@QBAJXZ");
//};

//public: long c_contrail_definition::get_gpu_color_count(void) const
//{
//    mangled_ppc("?get_gpu_color_count@c_contrail_definition@@QBAJXZ");
//};

//public: long c_contrail_definition::s_gpu_data::get_color_count(void) const
//{
//    mangled_ppc("?get_color_count@s_gpu_data@c_contrail_definition@@QBAJXZ");
//};

//public: long c_contrail_definition::get_gpu_property_count(void) const
//{
//    mangled_ppc("?get_gpu_property_count@c_contrail_definition@@QBAJXZ");
//};

//public: long c_contrail_definition::s_gpu_data::get_property_count(void) const
//{
//    mangled_ppc("?get_property_count@s_gpu_data@c_contrail_definition@@QBAJXZ");
//};

//private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *, class c_contrail_states const *) const
//{
//    mangled_ppc("??$set_shader_state@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@PBVc_contrail_states@@@Z");
//};

//public: float c_contrail_states::get_state_value(long) const
//{
//    mangled_ppc("?get_state_value@c_contrail_states@@QBAMJ@Z");
//};

//public: unsigned long c_contrail_definition::get_used_states(void) const
//{
//    mangled_ppc("?get_used_states@c_contrail_definition@@QBAKXZ");
//};

//public: unsigned long c_contrail_definition::get_appearance_flags(void) const
//{
//    mangled_ppc("?get_appearance_flags@c_contrail_definition@@QBAKXZ");
//};

//public: union vector2d const * c_contrail_definition::get_uv_tiling_rate(void) const
//{
//    mangled_ppc("?get_uv_tiling_rate@c_contrail_definition@@QBAPBTvector2d@@XZ");
//};

//public: union vector2d const * c_contrail_definition::get_uv_scroll_rate(void) const
//{
//    mangled_ppc("?get_uv_scroll_rate@c_contrail_definition@@QBAPBTvector2d@@XZ");
//};

//public: float const c_contrail_definition::get_origin_fade_range(void) const
//{
//    mangled_ppc("?get_origin_fade_range@c_contrail_definition@@QBA?BMXZ");
//};

//public: float const c_contrail_definition::get_origin_fade_cutoff(void) const
//{
//    mangled_ppc("?get_origin_fade_cutoff@c_contrail_definition@@QBA?BMXZ");
//};

//public: float const c_contrail_definition::get_edge_fade_range(void) const
//{
//    mangled_ppc("?get_edge_fade_range@c_contrail_definition@@QBA?BMXZ");
//};

//public: float const c_contrail_definition::get_edge_fade_cutoff(void) const
//{
//    mangled_ppc("?get_edge_fade_cutoff@c_contrail_definition@@QBA?BMXZ");
//};

//public: union real_point3d const * c_contrail_location::get_origin(void) const
//{
//    mangled_ppc("?get_origin@c_contrail_location@@QBAPBTreal_point3d@@XZ");
//};

//public: union real_point2d const * c_contrail::get_uv_offset(void) const
//{
//    mangled_ppc("?get_uv_offset@c_contrail@@QBAPBTreal_point2d@@XZ");
//};

//public: float s_render_time::get_game_time_seconds_repeat_arbitrary(long)
//{
//    mangled_ppc("?get_game_time_seconds_repeat_arbitrary@s_render_time@@QAAMJ@Z");
//};

//private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *, class c_contrail_states const *) const
//{
//    mangled_ppc("??$set_shader_state@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@PBVc_contrail_states@@@Z");
//};

//private: void c_contrail_gpu::set_shader_strip<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *) const
//{
//    mangled_ppc("??$set_shader_strip@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@@Z");
//};

//private: struct s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256> const * s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::set_active_buffer(enum s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::e_status, struct s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256> *)
//{
//    mangled_ppc("?set_active_buffer@?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@AAAPBU?$s_queued_gpu_buffer@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@W4e_status@1@PAU2@@Z");
//};

//public: void s_gpu_storage<union vector4d, 0, 38, 7, 2, 3, 1713062, -1>::set_value(unsigned long, unsigned long, union vector4d const &)
//{
//    mangled_ppc("?set_value@?$s_gpu_storage@Tvector4d@@$0A@$0CG@$06$01$02$0BKCDKG@$0?0@@QAAXKKABTvector4d@@@Z");
//};

//public: void s_gpu_storage<unsigned __int64, 0, 32, 7, 1, 16, 1712992, 5>::set_value(unsigned long, unsigned long, unsigned __int64const &)
//{
//    mangled_ppc("?set_value@?$s_gpu_storage@_K$0A@$0CA@$06$00$0BA@$0BKCDGA@$04@@QAAXKKAB_K@Z");
//};

//public: void s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::set_value(unsigned long, unsigned long, unsigned long const &)
//{
//    mangled_ppc("?set_value@?$s_gpu_storage@K$0A@$0BJ@$01$00$06$0CMCCFJ@$0?0@@QAAXKKABK@Z");
//};

//public: void s_gpu_storage<unsigned long, 0, 31, 7, 1, 15, 2892639, 3>::set_value(unsigned long, unsigned long, unsigned long const &)
//{
//    mangled_ppc("?set_value@?$s_gpu_storage@K$0A@$0BP@$06$00$0P@$0CMCDFP@$02@@QAAXKKABK@Z");
//};

//public: void s_gpu_storage<unsigned long, 1, 6, 0, 2, 6, 1583238, 0>::set_value(unsigned long, unsigned long, unsigned long const &)
//{
//    mangled_ppc("?set_value@?$s_gpu_storage@K$00$05$0A@$01$05$0BICIIG@$0A@@@QAAXKKABK@Z");
//};

//public: void s_gpu_layout<17, enum e_gpu_address_state>::initialize(enum e_vertex_type, struct s_gpu_buffer_base *)
//{
//    mangled_ppc("?initialize@?$s_gpu_layout@$0BB@W4e_gpu_address_state@@@@QAAXW4e_vertex_type@@PAUs_gpu_buffer_base@@@Z");
//};

//void data_dump<struct c_contrail_gpu::s_row>(struct s_data_array const *, char const *, enum e_event_level, bool)
//{
//    mangled_ppc("??$data_dump@Us_row@c_contrail_gpu@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z");
//};

//public: static char const * c_contrail_gpu::s_row::get_name(void)
//{
//    mangled_ppc("?get_name@s_row@c_contrail_gpu@@SAPBDXZ");
//};

//public: void s_gpu_constant_table<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::set_struct<struct s_gpu_layout<18, enum c_contrail_gpu::e_state>::s_memexport_set>(enum c_contrail_gpu::s_spawn_vertex_shader_constant_list::e_index, struct s_gpu_layout<18, enum c_contrail_gpu::e_state>::s_memexport_set const *) const
//{
//    mangled_ppc("??$set_struct@Us_memexport_set@?$s_gpu_layout@$0BC@W4e_state@c_contrail_gpu@@@@@?$s_gpu_constant_table@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@@QBAXW4e_index@s_spawn_vertex_shader_constant_list@c_contrail_gpu@@PBUs_memexport_set@?$s_gpu_layout@$0BC@W4e_state@c_contrail_gpu@@@@@Z");
//};

//public: void s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::set_struct<struct s_gpu_layout<18, enum c_contrail_gpu::e_state>::s_memexport_set>(enum c_contrail_gpu::s_update_vertex_shader_constant_list::e_index, struct s_gpu_layout<18, enum c_contrail_gpu::e_state>::s_memexport_set const *) const
//{
//    mangled_ppc("??$set_struct@Us_memexport_set@?$s_gpu_layout@$0BC@W4e_state@c_contrail_gpu@@@@@?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@QBAXW4e_index@s_update_vertex_shader_constant_list@c_contrail_gpu@@PBUs_memexport_set@?$s_gpu_layout@$0BC@W4e_state@c_contrail_gpu@@@@@Z");
//};

//public: void s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::set_struct_partial<float const[16]>(enum c_contrail_gpu::s_update_vertex_shader_constant_list::e_index, unsigned long, float const (*)[16]) const
//{
//    mangled_ppc("??$set_struct_partial@$$BY0BA@$$CBM@?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@QBAXW4e_index@s_update_vertex_shader_constant_list@c_contrail_gpu@@KPAY0BA@$$CBM@Z");
//};

//public: void s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::set_struct_partial<float const[4]>(enum c_contrail_gpu::s_update_vertex_shader_constant_list::e_index, unsigned long, float const (*)[4]) const
//{
//    mangled_ppc("??$set_struct_partial@$$BY03$$CBM@?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@QBAXW4e_index@s_update_vertex_shader_constant_list@c_contrail_gpu@@KPAY03$$CBM@Z");
//};

//public: void s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::set_struct<struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state>(enum c_contrail_gpu::s_update_vertex_shader_constant_list::e_index, struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state const *) const
//{
//    mangled_ppc("??$set_struct@Us_overall_state@?CG@???$set_shader_state@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@PBVc_contrail_states@@@Z@@?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@QBAXW4e_index@s_update_vertex_shader_constant_list@c_contrail_gpu@@PBUs_overall_state@?CG@???$set_shader_state@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@3@ABAXPBU0@PBVc_contrail_states@@@Z@@Z");
//};

//public: void s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::set_struct<struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state>(enum c_contrail_gpu::s_render_vertex_shader_constant_list::e_index, struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state const *) const
//{
//    mangled_ppc("??$set_struct@Us_overall_state@?CG@???$set_shader_state@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@PBVc_contrail_states@@@Z@@?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@QBAXW4e_index@s_render_vertex_shader_constant_list@c_contrail_gpu@@PBUs_overall_state@?CG@???$set_shader_state@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@3@ABAXPBU0@PBVc_contrail_states@@@Z@@Z");
//};

//public: void s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::set_struct<struct `private: void c_contrail_gpu::set_shader_strip<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_strip>(enum c_contrail_gpu::s_render_vertex_shader_constant_list::e_index, struct `private: void c_contrail_gpu::set_shader_strip<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_strip const *) const
//{
//    mangled_ppc("??$set_struct@Us_strip@?1???$set_shader_strip@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@@Z@@?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@QBAXW4e_index@s_render_vertex_shader_constant_list@c_contrail_gpu@@PBUs_strip@?1???$set_shader_strip@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@3@ABAXPBU0@@Z@@Z");
//};

//public: void c_data_iterator<struct c_contrail_gpu::s_row>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Us_row@c_contrail_gpu@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<struct c_contrail_gpu::s_row>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Us_row@c_contrail_gpu@@@@QAA_NXZ");
//};

//public: struct c_contrail_gpu::s_row * c_data_iterator<struct c_contrail_gpu::s_row>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_row@c_contrail_gpu@@@@QBAPAUs_row@c_contrail_gpu@@XZ");
//};

//public: void s_gpu_constant_table_base::set_struct<struct s_gpu_layout<18, enum c_contrail_gpu::e_state>::s_memexport_set>(unsigned long, struct s_gpu_layout<18, enum c_contrail_gpu::e_state>::s_memexport_set const *) const
//{
//    mangled_ppc("??$set_struct@Us_memexport_set@?$s_gpu_layout@$0BC@W4e_state@c_contrail_gpu@@@@@s_gpu_constant_table_base@@QBAXKPBUs_memexport_set@?$s_gpu_layout@$0BC@W4e_state@c_contrail_gpu@@@@@Z");
//};

//D3DDevice_GpuEndShaderConstantF4
//{
//    mangled_ppc("D3DDevice_GpuEndShaderConstantF4");
//};

//public: void s_gpu_constant_table_base::set_struct<struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state>(unsigned long, struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state const *) const
//{
//    mangled_ppc("??$set_struct@Us_overall_state@?CG@???$set_shader_state@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@PBVc_contrail_states@@@Z@@s_gpu_constant_table_base@@QBAXKPBUs_overall_state@?CG@???$set_shader_state@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@PBVc_contrail_states@@@Z@@Z");
//};

//public: void s_gpu_constant_table_base::set_struct<struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state>(unsigned long, struct `private: void c_contrail_gpu::set_shader_state<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *, class c_contrail_states const *) const'::`38'::s_overall_state const *) const
//{
//    mangled_ppc("??$set_struct@Us_overall_state@?CG@???$set_shader_state@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@PBVc_contrail_states@@@Z@@s_gpu_constant_table_base@@QBAXKPBUs_overall_state@?CG@???$set_shader_state@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@PBVc_contrail_states@@@Z@@Z");
//};

//public: void s_gpu_constant_table_base::set_struct<struct `private: void c_contrail_gpu::set_shader_strip<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_strip>(unsigned long, struct `private: void c_contrail_gpu::set_shader_strip<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(struct s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list> const *) const'::`2'::s_strip const *) const
//{
//    mangled_ppc("??$set_struct@Us_strip@?1???$set_shader_strip@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@@Z@@s_gpu_constant_table_base@@QBAXKPBUs_strip@?1???$set_shader_strip@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@c_contrail_gpu@@ABAXPBU?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@@Z@@Z");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_contrail_gpu@@CAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_contrail_gpu@@CAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_contrail_gpu@@CAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_contrail_gpu@@CAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//private: static void c_contrail_gpu::__tls_set_x_data_array_manager(void *)
//{
//    mangled_ppc("?__tls_set_x_data_array_manager@c_contrail_gpu@@CAXPAX@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_contrail_gpu@@CAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_contrail_gpu@@CAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_contrail_gpu@@SAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_contrail_gpu@@SAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_contrail_gpu@@SAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_contrail_gpu@@SAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: static void c_contrail_gpu::s_row::__tls_set_x_data_array_manager(void *)
//{
//    mangled_ppc("?__tls_set_x_data_array_manager@s_row@c_contrail_gpu@@SAXPAX@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_contrail_gpu@@SAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_contrail_gpu@@SAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_contrail_gpu@@CAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_contrail_gpu@@CAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_contrail_gpu@@CAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_contrail_gpu@@CAXPAX@Z@@QAAXXZ");
//};

//public: s_gpu_buffer<18, 16, 160>::s_gpu_buffer<18, 16, 160>(void)
//{
//    mangled_ppc("??0?$s_gpu_buffer@$0BC@$0BA@$0KA@@@QAA@XZ");
//};

//public: s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>::s_queued_gpu_buffer_system<18, struct c_contrail_gpu::s_layout, 256>(void)
//{
//    mangled_ppc("??0?$s_queued_gpu_buffer_system@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAA@XZ");
//};

//public: s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>::s_queued_gpu_buffer<18, struct c_contrail_gpu::s_layout, 256>(void)
//{
//    mangled_ppc("??0?$s_queued_gpu_buffer@$0BC@Us_layout@c_contrail_gpu@@$0BAA@@@QAA@XZ");
//};

//public: s_gpu_address_layout::s_gpu_address_layout(void)
//{
//    mangled_ppc("??0s_gpu_address_layout@@QAA@XZ");
//};

//public: c_contrail_gpu::s_layout::s_layout(void)
//{
//    mangled_ppc("??0s_layout@c_contrail_gpu@@QAA@XZ");
//};

//public: s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>(enum e_rasterizer_vertex_attribute const &, unsigned long const &)
//{
//    mangled_ppc("??0?$s_gpu_storage@K$0A@$0BJ@$01$00$06$0CMCCFJ@$0?0@@QAA@ABW4e_rasterizer_vertex_attribute@@ABK@Z");
//};

//public: virtual unsigned int s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::get_size(void) const
//{
//    mangled_ppc("?get_size@?$s_gpu_storage@K$0A@$0BJ@$01$00$06$0CMCCFJ@$0?0@@UBAIXZ");
//};

//public: virtual long s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::get_vertex_format(void) const
//{
//    mangled_ppc("?get_vertex_format@?$s_gpu_storage@K$0A@$0BJ@$01$00$06$0CMCCFJ@$0?0@@UBAJXZ");
//};

//public: virtual long s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::get_d3d_type(void) const
//{
//    mangled_ppc("?get_d3d_type@?$s_gpu_storage@K$0A@$0BJ@$01$00$06$0CMCCFJ@$0?0@@UBAJXZ");
//};

//public: s_gpu_layout<17, enum e_gpu_address_state>::s_gpu_layout<17, enum e_gpu_address_state>(void)
//{
//    mangled_ppc("??0?$s_gpu_layout@$0BB@W4e_gpu_address_state@@@@QAA@XZ");
//};

//public: s_gpu_layout<18, enum c_contrail_gpu::e_state>::s_gpu_layout<18, enum c_contrail_gpu::e_state>(void)
//{
//    mangled_ppc("??0?$s_gpu_layout@$0BC@W4e_state@c_contrail_gpu@@@@QAA@XZ");
//};

//public: s_gpu_buffer<18, 256, 1>::s_gpu_buffer<18, 256, 1>(void)
//{
//    mangled_ppc("??0?$s_gpu_buffer@$0BC@$0BAA@$00@@QAA@XZ");
//};

//public: s_gpu_buffer<17, 256, 1>::s_gpu_buffer<17, 256, 1>(void)
//{
//    mangled_ppc("??0?$s_gpu_buffer@$0BB@$0BAA@$00@@QAA@XZ");
//};

//public: virtual void s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::initialize_layout(unsigned long, unsigned long)
//{
//    mangled_ppc("?initialize_layout@?$s_gpu_storage@K$0A@$0BJ@$01$00$06$0CMCCFJ@$0?0@@UAAXKK@Z");
//};

//public: virtual void s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::initialize_data_buffers(void)
//{
//    mangled_ppc("?initialize_data_buffers@?$s_gpu_storage@K$0A@$0BJ@$01$00$06$0CMCCFJ@$0?0@@UAAXXZ");
//};

//public: virtual void s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::fill(struct __vector4const &)
//{
//    mangled_ppc("?fill@?$s_gpu_storage@K$0A@$0BJ@$01$00$06$0CMCCFJ@$0?0@@UAAXABU__vector4@@@Z");
//};

//public: virtual void s_gpu_storage<unsigned long, 0, 25, 2, 1, 7, 2892377, -1>::fill(unsigned short, struct __vector4const &)
//{
//    mangled_ppc("?fill@?$s_gpu_storage@K$0A@$0BJ@$01$00$06$0CMCCFJ@$0?0@@UAAXGABU__vector4@@@Z");
//};

//public: s_gpu_shader_pair<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::s_gpu_shader_pair<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list, struct s_gpu_empty_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type)
//{
//    mangled_ppc("??0?$s_gpu_shader_pair@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@Us_gpu_empty_constant_list@@@@QAA@W4e_explicit_shader@c_rasterizer_globals@@W4e_vertex_type@@@Z");
//};

//public: s_gpu_vertex_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::s_gpu_vertex_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type)
//{
//    mangled_ppc("??0?$s_gpu_vertex_shader@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@@QAA@W4e_explicit_shader@c_rasterizer_globals@@W4e_vertex_type@@@Z");
//};

//public: s_gpu_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::s_gpu_shader<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader)
//{
//    mangled_ppc("??0?$s_gpu_shader@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@@QAA@W4e_explicit_shader@c_rasterizer_globals@@@Z");
//};

//public: s_gpu_constant_table<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>::s_gpu_constant_table<struct c_contrail_gpu::s_spawn_vertex_shader_constant_list>(void)
//{
//    mangled_ppc("??0?$s_gpu_constant_table@Us_spawn_vertex_shader_constant_list@c_contrail_gpu@@@@QAA@XZ");
//};

//public: s_gpu_shader_pair<struct c_contrail_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>::s_gpu_shader_pair<struct c_contrail_gpu::s_update_vertex_shader_constant_list, struct s_gpu_empty_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type)
//{
//    mangled_ppc("??0?$s_gpu_shader_pair@Us_update_vertex_shader_constant_list@c_contrail_gpu@@Us_gpu_empty_constant_list@@@@QAA@W4e_explicit_shader@c_rasterizer_globals@@W4e_vertex_type@@@Z");
//};

//public: s_gpu_vertex_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::s_gpu_vertex_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader, enum e_vertex_type)
//{
//    mangled_ppc("??0?$s_gpu_vertex_shader@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@QAA@W4e_explicit_shader@c_rasterizer_globals@@W4e_vertex_type@@@Z");
//};

//public: s_gpu_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::s_gpu_shader<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(enum c_rasterizer_globals::e_explicit_shader)
//{
//    mangled_ppc("??0?$s_gpu_shader@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@QAA@W4e_explicit_shader@c_rasterizer_globals@@@Z");
//};

//public: s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list>::s_gpu_constant_table<struct c_contrail_gpu::s_update_vertex_shader_constant_list>(void)
//{
//    mangled_ppc("??0?$s_gpu_constant_table@Us_update_vertex_shader_constant_list@c_contrail_gpu@@@@QAA@XZ");
//};

//public: s_gpu_global_vertex_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::s_gpu_global_vertex_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(enum e_vertex_type)
//{
//    mangled_ppc("??0?$s_gpu_global_vertex_shader@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@QAA@W4e_vertex_type@@@Z");
//};

//public: s_gpu_global_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::s_gpu_global_shader<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(void)
//{
//    mangled_ppc("??0?$s_gpu_global_shader@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@QAA@XZ");
//};

//public: s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list>::s_gpu_constant_table<struct c_contrail_gpu::s_render_vertex_shader_constant_list>(void)
//{
//    mangled_ppc("??0?$s_gpu_constant_table@Us_render_vertex_shader_constant_list@c_contrail_gpu@@@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_data_array_manager::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_contrail_gpu@@CAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::s_row::__tls_set_x_data_array_manager::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_contrail_gpu@@SAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (c_contrail_gpu::__tls_set_x_gamestate_storage_manager::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_contrail_gpu@@CAXPAX@Z@@QAA@XZ");
//};

//??__F?x_data_array_manager@c_contrail_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_contrail_gpu@@CAXPAX@Z@@A@@YAXXZ
//{
//    mangled_ppc("??__F?x_data_array_manager@c_contrail_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@c_contrail_gpu@@CAXPAX@Z@@A@@YAXXZ");
//};

//??__F?x_data_array_manager@s_row@c_contrail_gpu@@2V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_contrail_gpu@@SAXPAX@Z@@A@@YAXXZ
//{
//    mangled_ppc("??__F?x_data_array_manager@s_row@c_contrail_gpu@@2V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_data_array_manager@s_row@c_contrail_gpu@@SAXPAX@Z@@A@@YAXXZ");
//};

//??__F?x_gamestate_storage_manager@c_contrail_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_contrail_gpu@@CAXPAX@Z@@A@@YAXXZ
//{
//    mangled_ppc("??__F?x_gamestate_storage_manager@c_contrail_gpu@@0V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_x_gamestate_storage_manager@c_contrail_gpu@@CAXPAX@Z@@A@@YAXXZ");
//};

