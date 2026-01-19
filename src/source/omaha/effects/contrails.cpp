/* ---------- headers */

#include "omaha\effects\contrails.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static enum e_effect_holdback_type const c_contrail_system::x_holdback_type; // "?x_holdback_type@c_contrail_system@@0W4e_effect_holdback_type@@B"
// private: static enum e_effect_holdback_type const c_contrail_location::x_holdback_type; // "?x_holdback_type@c_contrail_location@@0W4e_effect_holdback_type@@B"
// private: static enum e_effect_holdback_type const c_contrail::x_holdback_type; // "?x_holdback_type@c_contrail@@0W4e_effect_holdback_type@@B"
// bool g_contrail_create; // "?g_contrail_create@@3_NA"
// bool g_contrail_pulse; // "?g_contrail_pulse@@3_NA"
// bool g_contrail_frame_advance; // "?g_contrail_frame_advance@@3_NA"
// bool g_contrail_submit; // "?g_contrail_submit@@3_NA"
// struct s_contrail_information_by_priority *g_contrail_information_by_priority; // "?g_contrail_information_by_priority@@3PAUs_contrail_information_by_priority@@A"
// public: static union argb_color c_contrail_profile::x_default_initial_color; // "?x_default_initial_color@c_contrail_profile@@2Targb_color@@A"
// long volatile `void __cdecl data_dump<class c_contrail>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`22'::x_event_category_index; // "?x_event_category_index@?BG@???$data_dump@Vc_contrail@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_contrail>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`15'::x_event_category_index; // "?x_event_category_index@?P@???$data_dump@Vc_contrail@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_contrail>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`6'::x_event_category_index; // "?x_event_category_index@?5???$data_dump@Vc_contrail@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_contrail_system>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`22'::x_event_category_index; // "?x_event_category_index@?BG@???$data_dump@Vc_contrail_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_contrail_system>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`15'::x_event_category_index; // "?x_event_category_index@?P@???$data_dump@Vc_contrail_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_contrail_system>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`6'::x_event_category_index; // "?x_event_category_index@?5???$data_dump@Vc_contrail_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_contrail_location>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`22'::x_event_category_index; // "?x_event_category_index@?BG@???$data_dump@Vc_contrail_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_contrail_location>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`15'::x_event_category_index; // "?x_event_category_index@?P@???$data_dump@Vc_contrail_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_contrail_location>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`6'::x_event_category_index; // "?x_event_category_index@?5???$data_dump@Vc_contrail_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_contrail_profile>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`22'::x_event_category_index; // "?x_event_category_index@?BG@???$data_dump@Vc_contrail_profile@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_contrail_profile>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`15'::x_event_category_index; // "?x_event_category_index@?P@???$data_dump@Vc_contrail_profile@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_contrail_profile>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`6'::x_event_category_index; // "?x_event_category_index@?5???$data_dump@Vc_contrail_profile@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// struct s_contrail_information g_contrail_information; // "?g_contrail_information@@3Us_contrail_information@@A"
// bool g_contrail_dump; // "?g_contrail_dump@@3_NA"
// class t_restricted_allocation_manager<3, 0, 0, void (__cdecl __tls_set_g_contrail_system_allocator::*)(void *)> g_contrail_system_allocator; // "?g_contrail_system_allocator@@3V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_system_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<3, 0, 0, void (__cdecl __tls_set_g_contrail_location_allocator::*)(void *)> g_contrail_location_allocator; // "?g_contrail_location_allocator@@3V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_location_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<3, 0, 0, void (__cdecl __tls_set_g_contrail_allocator::*)(void *)> g_contrail_allocator; // "?g_contrail_allocator@@3V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<3, 0, 0, void (__cdecl __tls_set_g_contrail_profile_allocator::*)(void *)> g_contrail_profile_allocator; // "?g_contrail_profile_allocator@@3V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_profile_allocator@@YAXPAX@Z@@A"
// bool `void __cdecl data_dump<class c_contrail>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`2'::done_already; // "?done_already@?1???$data_dump@Vc_contrail@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4_NA"
// bool `void __cdecl data_dump<class c_contrail_system>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`2'::done_already; // "?done_already@?1???$data_dump@Vc_contrail_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4_NA"
// bool `void __cdecl data_dump<class c_contrail_location>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`2'::done_already; // "?done_already@?1???$data_dump@Vc_contrail_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4_NA"
// bool `void __cdecl data_dump<class c_contrail_profile>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`2'::done_already; // "?done_already@?1???$data_dump@Vc_contrail_profile@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4_NA"
// public: static struct s_data_array *c_contrail_system::x_data_array; // "?x_data_array@c_contrail_system@@2PAUs_data_array@@A"
// public: static struct s_data_array *c_contrail_location::x_data_array; // "?x_data_array@c_contrail_location@@2PAUs_data_array@@A"
// public: static struct s_data_array *c_contrail::x_data_array; // "?x_data_array@c_contrail@@2PAUs_data_array@@A"
// public: static struct s_data_array *c_contrail_profile::x_data_array; // "?x_data_array@c_contrail_profile@@2PAUs_data_array@@A"

// void __tls_set_g_contrail_system_allocator(void *);
// public: static void c_contrail_system::initialize_for_game(void);
// public: static void c_contrail_system::initialize_for_map(void);
// public: static void c_contrail_system::dispose_from_map(void);
// public: static void c_contrail_system::dispose_from_game(void);
// public: static void c_contrail_system::initialize_for_new_structure_bsp(void);
// public: static void c_contrail_system::prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *);
// public: static void c_contrail_system::handle_tag_changes(void);
// public: static long c_contrail_system::create(unsigned char, class c_tag_index, long, unsigned short, unsigned short, class c_tag_index, unsigned char, long);
// public: void c_contrail_system::set_should_live(bool);
// public: void c_contrail_system::set_should_pulse(bool);
// public: void c_contrail_system::set_should_frame_advance(bool);
// public: void c_contrail_system::set_should_render(bool);
// public: void c_contrail_system::set_ever_frame_advanced(bool);
// public: static void c_contrail_system::destroy(long);
// public: long c_contrail_system::add_contrail_location(struct real_matrix4x3const *, unsigned long);
// public: long c_contrail_system::to_datum_index(void) const;
// public: unsigned char c_contrail_system::get_priority(void) const;
// public: void c_contrail_system::remove_further_contrail_locations(long);
// public: void c_contrail_location::clear_next_sibling(void);
// public: static void c_contrail_system::pulse_all(float);
// public: static void c_contrail_system::frame_advance_all(float);
// public: bool c_contrail_system::get_should_live(void) const;
// public: bool c_contrail_system::get_should_frame_advance(void) const;
// public: static void c_contrail_system::frame_advance_all_gpu(float);
// public: static void c_contrail_system::submit_all(enum e_output_user_index, enum e_effect_pass);
// public: bool c_contrail_system::get_should_render(void) const;
// public: void c_contrail_system::query_effect(float);
// public: float c_contrail_system::get_age(void) const;
// public: void c_contrail_system::pulse(float, bool);
// public: long c_contrail_location::get_next_sibling_index(void) const;
// public: void c_contrail_system::frame_advance(float);
// public: bool c_contrail_location::get_should_frame_advance(void) const;
// public: void c_contrail_system::submit(long, enum e_effect_pass);
// public: unsigned char c_contrail_system::get_camera_mode(void) const;
// public: long c_contrail_system::count(void) const;
// public: static void c_contrail_system::count_by_priority(void);
// void __tls_set_g_contrail_location_allocator(void *);
// public: static void c_contrail_location::initialize_for_game(void);
// public: static void c_contrail_location::initialize_for_map(void);
// public: static void c_contrail_location::dispose_from_map(void);
// public: static void c_contrail_location::dispose_from_game(void);
// public: static long c_contrail_location::create(unsigned char, long, struct real_matrix4x3const *, unsigned long);
// public: long c_contrail_system_definition::get_contrail_count(void) const;
// public: long c_contrail_system::get_weapon_index(void);
// public: void c_contrail::set_next_sibling_index(long);
// public: static void c_contrail_location::destroy(long);
// public: void c_contrail_location::add_sibling(long);
// public: void c_contrail_location::move_to(float, struct real_matrix4x3const *);
// public: void c_contrail_location::set_matrix(struct real_matrix4x3const *);
// public: union real_point3d const * c_contrail_location::get_position(void) const;
// public: void c_contrail_location::set_velocity(union vector3d const *);
// public: void c_contrail_location::pulse(float, bool, class c_contrail_states *);
// public: long c_contrail::get_next_sibling_index(void) const;
// public: void c_contrail_location::frame_advance(float);
// public: void c_contrail_location::set_should_frame_advance(bool);
// public: bool c_contrail::get_should_frame_advance(void) const;
// public: void c_contrail_location::submit(void);
// public: long c_contrail_location::count(void) const;
// void __tls_set_g_contrail_allocator(void *);
// public: static void c_contrail::initialize_for_game(void);
// public: static void c_contrail::initialize_for_map(void);
// public: static void c_contrail::dispose_from_map(void);
// public: static void c_contrail::dispose_from_game(void);
// public: static long c_contrail::create(unsigned char, long, long, unsigned long);
// public: bool c_contrail_definition::get_random_u_offset(void) const;
// public: bool c_contrail_definition::get_random_v_offset(void) const;
// public: char const * c_contrail_location::get_name(void) const;
// public: void c_contrail::set_should_frame_advance(bool);
// public: float c_contrail::real_internal_random_range(float, float) const;
// public: static void c_contrail::destroy(long);
// public: static class c_contrail_profile * c_contrail_profile::get(long);
// public: long c_contrail_profile::get_next_sibling_index(void) const;
// private: void c_contrail::initialize_profile(class c_contrail_profile *, class c_contrail_states *, union vector3d const *, float);
// public: void c_contrail_states::set_contrail_profile(class c_contrail_profile const *);
// public: void c_contrail_states::invalidate_states(unsigned long);
// public: bool c_contrail_definition::get_tint_from_lightmap(void) const;
// public: bool c_contrail_definition::get_profile_opacity_from_scale_a(void) const;
// public: float c_contrail_definition::evaluate_profile_lifespan(class c_contrail_states const *) const;
// public: long c_contrail_system::get_lightprobe_index(void) const;
// public: float c_contrail_system::get_effect_scale_a(void) const;
// public: bool c_contrail::get_initialized(void) const;
// public: void c_contrail_profile::set_lifespan(float);
// public: void c_contrail_profile::set_position(union real_point3d const *);
// public: void c_contrail_profile::set_velocity(union vector3d const *);
// public: void c_contrail_profile::set_cumulative_length(float);
// public: void c_contrail_profile::set_initial_color(union argb_color const &);
// public: void c_contrail_profile::set_initial_alpha(float);
// private: void c_contrail::create_profile(unsigned char, class c_contrail_states *, bool, union vector3d const *, float);
// public: void c_contrail::set_initialized(bool);
// public: bool c_contrail_profile::get_temporary(void) const;
// public: void c_contrail_profile::set_temporary(bool);
// public: void c_contrail_profile::set_next_sibling_index(long);
// public: void c_contrail::pulse(float, bool, class c_contrail_states *);
// public: float c_contrail_definition::evaluate_emission_rate(class c_contrail_states const *) const;
// private: void c_contrail::extend(unsigned char, class c_contrail_states *, bool, union vector3d const *, float);
// public: bool c_contrail_definition::get_origin_faded(void) const;
// public: void c_contrail::frame_advance(float);
// public: bool c_contrail_gpu::get_alive(void) const;
// private: static void c_contrail::render_callback(void const *, long, short, short);
// public: void c_contrail::render(void) const;
// public: void c_contrail::submit(void) const;
// public: float c_contrail_definition::get_sort_bias(void) const;
// public: long c_contrail::count(void) const;
// void __tls_set_g_contrail_profile_allocator(void *);
// public: static void c_contrail_profile::initialize_for_game(void);
// public: static void c_contrail_profile::initialize_for_map(void);
// public: static void c_contrail_profile::dispose_from_map(void);
// public: static void c_contrail_profile::dispose_from_game(void);
// public: static long c_contrail_profile::create(class c_contrail const *);
// public: static void c_contrail_profile::destroy(long);
// public: float c_editable_property<class c_contrail_states>::evaluate(class c_contrail_states const *) const;
// public: void c_data_iterator<class c_contrail_system>::begin(struct s_data_array *);
// public: bool c_data_iterator<class c_contrail_system>::next(void);
// public: class c_contrail_system * c_data_iterator<class c_contrail_system>::get_datum(void) const;
// public: long c_data_iterator<class c_contrail_system>::get_index(void) const;
// void data_dump<class c_contrail_system>(struct s_data_array const *, char const *, enum e_event_level);
// void data_dump<class c_contrail>(struct s_data_array const *, char const *, enum e_event_level, bool);
// void data_dump<class c_contrail_location>(struct s_data_array const *, char const *, enum e_event_level);
// void data_dump<class c_contrail>(struct s_data_array const *, char const *, enum e_event_level);
// void data_dump<class c_contrail_profile>(struct s_data_array const *, char const *, enum e_event_level);
// public: float c_editable_property_base::evaluate<class c_contrail_states>(class c_contrail_states const *) const;
// public: void c_data_iterator<class c_contrail>::begin(struct s_data_array *);
// public: bool c_data_iterator<class c_contrail>::next(void);
// public: class c_contrail * c_data_iterator<class c_contrail>::get_datum(void) const;
// void data_dump<class c_contrail_system>(struct s_data_array const *, char const *, enum e_event_level, bool);
// void data_dump<class c_contrail_location>(struct s_data_array const *, char const *, enum e_event_level, bool);
// void data_dump<class c_contrail_profile>(struct s_data_array const *, char const *, enum e_event_level, bool);
// public: static char const * c_contrail_profile::get_name(void);
// public: void c_data_iterator<class c_contrail_location>::begin(struct s_data_array *);
// public: bool c_data_iterator<class c_contrail_location>::next(void);
// public: class c_contrail_location * c_data_iterator<class c_contrail_location>::get_datum(void) const;
// public: void c_data_iterator<class c_contrail_profile>::begin(struct s_data_array *);
// public: bool c_data_iterator<class c_contrail_profile>::next(void);
// public: class c_contrail_profile * c_data_iterator<class c_contrail_profile>::get_datum(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>(void);
// void g_contrail_system_allocator::`dynamic atexit destructor'(void);
// void g_contrail_location_allocator::`dynamic atexit destructor'(void);
// void g_contrail_allocator::`dynamic atexit destructor'(void);
// void g_contrail_profile_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_contrail_system_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_contrail_system_allocator@@YAXPAX@Z");
//};

//public: static void c_contrail_system::initialize_for_game(void)
//{
//    mangled_ppc("?initialize_for_game@c_contrail_system@@SAXXZ");
//};

//public: static void c_contrail_system::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@c_contrail_system@@SAXXZ");
//};

//public: static void c_contrail_system::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@c_contrail_system@@SAXXZ");
//};

//public: static void c_contrail_system::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@c_contrail_system@@SAXXZ");
//};

//public: static void c_contrail_system::initialize_for_new_structure_bsp(void)
//{
//    mangled_ppc("?initialize_for_new_structure_bsp@c_contrail_system@@SAXXZ");
//};

//public: static void c_contrail_system::prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *)
//{
//    mangled_ppc("?prepare_for_non_bsp_zone_set_switch@c_contrail_system@@SAXPBUs_game_non_bsp_zone_set@@0PAVc_scenario_resource_registry@@@Z");
//};

//public: static void c_contrail_system::handle_tag_changes(void)
//{
//    mangled_ppc("?handle_tag_changes@c_contrail_system@@SAXXZ");
//};

//public: static long c_contrail_system::create(unsigned char, class c_tag_index, long, unsigned short, unsigned short, class c_tag_index, unsigned char, long)
//{
//    mangled_ppc("?create@c_contrail_system@@SAJEVc_tag_index@@JGG0EJ@Z");
//};

//public: void c_contrail_system::set_should_live(bool)
//{
//    mangled_ppc("?set_should_live@c_contrail_system@@QAAX_N@Z");
//};

//public: void c_contrail_system::set_should_pulse(bool)
//{
//    mangled_ppc("?set_should_pulse@c_contrail_system@@QAAX_N@Z");
//};

//public: void c_contrail_system::set_should_frame_advance(bool)
//{
//    mangled_ppc("?set_should_frame_advance@c_contrail_system@@QAAX_N@Z");
//};

//public: void c_contrail_system::set_should_render(bool)
//{
//    mangled_ppc("?set_should_render@c_contrail_system@@QAAX_N@Z");
//};

//public: void c_contrail_system::set_ever_frame_advanced(bool)
//{
//    mangled_ppc("?set_ever_frame_advanced@c_contrail_system@@QAAX_N@Z");
//};

//public: static void c_contrail_system::destroy(long)
//{
//    mangled_ppc("?destroy@c_contrail_system@@SAXJ@Z");
//};

//public: long c_contrail_system::add_contrail_location(struct real_matrix4x3const *, unsigned long)
//{
//    mangled_ppc("?add_contrail_location@c_contrail_system@@QAAJPBUreal_matrix4x3@@K@Z");
//};

//public: long c_contrail_system::to_datum_index(void) const
//{
//    mangled_ppc("?to_datum_index@c_contrail_system@@QBAJXZ");
//};

//public: unsigned char c_contrail_system::get_priority(void) const
//{
//    mangled_ppc("?get_priority@c_contrail_system@@QBAEXZ");
//};

//public: void c_contrail_system::remove_further_contrail_locations(long)
//{
//    mangled_ppc("?remove_further_contrail_locations@c_contrail_system@@QAAXJ@Z");
//};

//public: void c_contrail_location::clear_next_sibling(void)
//{
//    mangled_ppc("?clear_next_sibling@c_contrail_location@@QAAXXZ");
//};

//public: static void c_contrail_system::pulse_all(float)
//{
//    mangled_ppc("?pulse_all@c_contrail_system@@SAXM@Z");
//};

//public: static void c_contrail_system::frame_advance_all(float)
//{
//    mangled_ppc("?frame_advance_all@c_contrail_system@@SAXM@Z");
//};

//public: bool c_contrail_system::get_should_live(void) const
//{
//    mangled_ppc("?get_should_live@c_contrail_system@@QBA_NXZ");
//};

//public: bool c_contrail_system::get_should_frame_advance(void) const
//{
//    mangled_ppc("?get_should_frame_advance@c_contrail_system@@QBA_NXZ");
//};

//public: static void c_contrail_system::frame_advance_all_gpu(float)
//{
//    mangled_ppc("?frame_advance_all_gpu@c_contrail_system@@SAXM@Z");
//};

//public: static void c_contrail_system::submit_all(enum e_output_user_index, enum e_effect_pass)
//{
//    mangled_ppc("?submit_all@c_contrail_system@@SAXW4e_output_user_index@@W4e_effect_pass@@@Z");
//};

//public: bool c_contrail_system::get_should_render(void) const
//{
//    mangled_ppc("?get_should_render@c_contrail_system@@QBA_NXZ");
//};

//public: void c_contrail_system::query_effect(float)
//{
//    mangled_ppc("?query_effect@c_contrail_system@@QAAXM@Z");
//};

//public: float c_contrail_system::get_age(void) const
//{
//    mangled_ppc("?get_age@c_contrail_system@@QBAMXZ");
//};

//public: void c_contrail_system::pulse(float, bool)
//{
//    mangled_ppc("?pulse@c_contrail_system@@QAAXM_N@Z");
//};

//public: long c_contrail_location::get_next_sibling_index(void) const
//{
//    mangled_ppc("?get_next_sibling_index@c_contrail_location@@QBAJXZ");
//};

//public: void c_contrail_system::frame_advance(float)
//{
//    mangled_ppc("?frame_advance@c_contrail_system@@QAAXM@Z");
//};

//public: bool c_contrail_location::get_should_frame_advance(void) const
//{
//    mangled_ppc("?get_should_frame_advance@c_contrail_location@@QBA_NXZ");
//};

//public: void c_contrail_system::submit(long, enum e_effect_pass)
//{
//    mangled_ppc("?submit@c_contrail_system@@QAAXJW4e_effect_pass@@@Z");
//};

//public: unsigned char c_contrail_system::get_camera_mode(void) const
//{
//    mangled_ppc("?get_camera_mode@c_contrail_system@@QBAEXZ");
//};

//public: long c_contrail_system::count(void) const
//{
//    mangled_ppc("?count@c_contrail_system@@QBAJXZ");
//};

//public: static void c_contrail_system::count_by_priority(void)
//{
//    mangled_ppc("?count_by_priority@c_contrail_system@@SAXXZ");
//};

//void __tls_set_g_contrail_location_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_contrail_location_allocator@@YAXPAX@Z");
//};

//public: static void c_contrail_location::initialize_for_game(void)
//{
//    mangled_ppc("?initialize_for_game@c_contrail_location@@SAXXZ");
//};

//public: static void c_contrail_location::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@c_contrail_location@@SAXXZ");
//};

//public: static void c_contrail_location::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@c_contrail_location@@SAXXZ");
//};

//public: static void c_contrail_location::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@c_contrail_location@@SAXXZ");
//};

//public: static long c_contrail_location::create(unsigned char, long, struct real_matrix4x3const *, unsigned long)
//{
//    mangled_ppc("?create@c_contrail_location@@SAJEJPBUreal_matrix4x3@@K@Z");
//};

//public: long c_contrail_system_definition::get_contrail_count(void) const
//{
//    mangled_ppc("?get_contrail_count@c_contrail_system_definition@@QBAJXZ");
//};

//public: long c_contrail_system::get_weapon_index(void)
//{
//    mangled_ppc("?get_weapon_index@c_contrail_system@@QAAJXZ");
//};

//public: void c_contrail::set_next_sibling_index(long)
//{
//    mangled_ppc("?set_next_sibling_index@c_contrail@@QAAXJ@Z");
//};

//public: static void c_contrail_location::destroy(long)
//{
//    mangled_ppc("?destroy@c_contrail_location@@SAXJ@Z");
//};

//public: void c_contrail_location::add_sibling(long)
//{
//    mangled_ppc("?add_sibling@c_contrail_location@@QAAXJ@Z");
//};

//public: void c_contrail_location::move_to(float, struct real_matrix4x3const *)
//{
//    mangled_ppc("?move_to@c_contrail_location@@QAAXMPBUreal_matrix4x3@@@Z");
//};

//public: void c_contrail_location::set_matrix(struct real_matrix4x3const *)
//{
//    mangled_ppc("?set_matrix@c_contrail_location@@QAAXPBUreal_matrix4x3@@@Z");
//};

//public: union real_point3d const * c_contrail_location::get_position(void) const
//{
//    mangled_ppc("?get_position@c_contrail_location@@QBAPBTreal_point3d@@XZ");
//};

//public: void c_contrail_location::set_velocity(union vector3d const *)
//{
//    mangled_ppc("?set_velocity@c_contrail_location@@QAAXPBTvector3d@@@Z");
//};

//public: void c_contrail_location::pulse(float, bool, class c_contrail_states *)
//{
//    mangled_ppc("?pulse@c_contrail_location@@QAAXM_NPAVc_contrail_states@@@Z");
//};

//public: long c_contrail::get_next_sibling_index(void) const
//{
//    mangled_ppc("?get_next_sibling_index@c_contrail@@QBAJXZ");
//};

//public: void c_contrail_location::frame_advance(float)
//{
//    mangled_ppc("?frame_advance@c_contrail_location@@QAAXM@Z");
//};

//public: void c_contrail_location::set_should_frame_advance(bool)
//{
//    mangled_ppc("?set_should_frame_advance@c_contrail_location@@QAAX_N@Z");
//};

//public: bool c_contrail::get_should_frame_advance(void) const
//{
//    mangled_ppc("?get_should_frame_advance@c_contrail@@QBA_NXZ");
//};

//public: void c_contrail_location::submit(void)
//{
//    mangled_ppc("?submit@c_contrail_location@@QAAXXZ");
//};

//public: long c_contrail_location::count(void) const
//{
//    mangled_ppc("?count@c_contrail_location@@QBAJXZ");
//};

//void __tls_set_g_contrail_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_contrail_allocator@@YAXPAX@Z");
//};

//public: static void c_contrail::initialize_for_game(void)
//{
//    mangled_ppc("?initialize_for_game@c_contrail@@SAXXZ");
//};

//public: static void c_contrail::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@c_contrail@@SAXXZ");
//};

//public: static void c_contrail::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@c_contrail@@SAXXZ");
//};

//public: static void c_contrail::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@c_contrail@@SAXXZ");
//};

//public: static long c_contrail::create(unsigned char, long, long, unsigned long)
//{
//    mangled_ppc("?create@c_contrail@@SAJEJJK@Z");
//};

//public: bool c_contrail_definition::get_random_u_offset(void) const
//{
//    mangled_ppc("?get_random_u_offset@c_contrail_definition@@QBA_NXZ");
//};

//public: bool c_contrail_definition::get_random_v_offset(void) const
//{
//    mangled_ppc("?get_random_v_offset@c_contrail_definition@@QBA_NXZ");
//};

//public: char const * c_contrail_location::get_name(void) const
//{
//    mangled_ppc("?get_name@c_contrail_location@@QBAPBDXZ");
//};

//public: void c_contrail::set_should_frame_advance(bool)
//{
//    mangled_ppc("?set_should_frame_advance@c_contrail@@QAAX_N@Z");
//};

//public: float c_contrail::real_internal_random_range(float, float) const
//{
//    mangled_ppc("?real_internal_random_range@c_contrail@@QBAMMM@Z");
//};

//public: static void c_contrail::destroy(long)
//{
//    mangled_ppc("?destroy@c_contrail@@SAXJ@Z");
//};

//public: static class c_contrail_profile * c_contrail_profile::get(long)
//{
//    mangled_ppc("?get@c_contrail_profile@@SAPAV1@J@Z");
//};

//public: long c_contrail_profile::get_next_sibling_index(void) const
//{
//    mangled_ppc("?get_next_sibling_index@c_contrail_profile@@QBAJXZ");
//};

//private: void c_contrail::initialize_profile(class c_contrail_profile *, class c_contrail_states *, union vector3d const *, float)
//{
//    mangled_ppc("?initialize_profile@c_contrail@@AAAXPAVc_contrail_profile@@PAVc_contrail_states@@PBTvector3d@@M@Z");
//};

//public: void c_contrail_states::set_contrail_profile(class c_contrail_profile const *)
//{
//    mangled_ppc("?set_contrail_profile@c_contrail_states@@QAAXPBVc_contrail_profile@@@Z");
//};

//public: void c_contrail_states::invalidate_states(unsigned long)
//{
//    mangled_ppc("?invalidate_states@c_contrail_states@@QAAXK@Z");
//};

//public: bool c_contrail_definition::get_tint_from_lightmap(void) const
//{
//    mangled_ppc("?get_tint_from_lightmap@c_contrail_definition@@QBA_NXZ");
//};

//public: bool c_contrail_definition::get_profile_opacity_from_scale_a(void) const
//{
//    mangled_ppc("?get_profile_opacity_from_scale_a@c_contrail_definition@@QBA_NXZ");
//};

//public: float c_contrail_definition::evaluate_profile_lifespan(class c_contrail_states const *) const
//{
//    mangled_ppc("?evaluate_profile_lifespan@c_contrail_definition@@QBAMPBVc_contrail_states@@@Z");
//};

//public: long c_contrail_system::get_lightprobe_index(void) const
//{
//    mangled_ppc("?get_lightprobe_index@c_contrail_system@@QBAJXZ");
//};

//public: float c_contrail_system::get_effect_scale_a(void) const
//{
//    mangled_ppc("?get_effect_scale_a@c_contrail_system@@QBAMXZ");
//};

//public: bool c_contrail::get_initialized(void) const
//{
//    mangled_ppc("?get_initialized@c_contrail@@QBA_NXZ");
//};

//public: void c_contrail_profile::set_lifespan(float)
//{
//    mangled_ppc("?set_lifespan@c_contrail_profile@@QAAXM@Z");
//};

//public: void c_contrail_profile::set_position(union real_point3d const *)
//{
//    mangled_ppc("?set_position@c_contrail_profile@@QAAXPBTreal_point3d@@@Z");
//};

//public: void c_contrail_profile::set_velocity(union vector3d const *)
//{
//    mangled_ppc("?set_velocity@c_contrail_profile@@QAAXPBTvector3d@@@Z");
//};

//public: void c_contrail_profile::set_cumulative_length(float)
//{
//    mangled_ppc("?set_cumulative_length@c_contrail_profile@@QAAXM@Z");
//};

//public: void c_contrail_profile::set_initial_color(union argb_color const &)
//{
//    mangled_ppc("?set_initial_color@c_contrail_profile@@QAAXABTargb_color@@@Z");
//};

//public: void c_contrail_profile::set_initial_alpha(float)
//{
//    mangled_ppc("?set_initial_alpha@c_contrail_profile@@QAAXM@Z");
//};

//private: void c_contrail::create_profile(unsigned char, class c_contrail_states *, bool, union vector3d const *, float)
//{
//    mangled_ppc("?create_profile@c_contrail@@AAAXEPAVc_contrail_states@@_NPBTvector3d@@M@Z");
//};

//public: void c_contrail::set_initialized(bool)
//{
//    mangled_ppc("?set_initialized@c_contrail@@QAAX_N@Z");
//};

//public: bool c_contrail_profile::get_temporary(void) const
//{
//    mangled_ppc("?get_temporary@c_contrail_profile@@QBA_NXZ");
//};

//public: void c_contrail_profile::set_temporary(bool)
//{
//    mangled_ppc("?set_temporary@c_contrail_profile@@QAAX_N@Z");
//};

//public: void c_contrail_profile::set_next_sibling_index(long)
//{
//    mangled_ppc("?set_next_sibling_index@c_contrail_profile@@QAAXJ@Z");
//};

//public: void c_contrail::pulse(float, bool, class c_contrail_states *)
//{
//    mangled_ppc("?pulse@c_contrail@@QAAXM_NPAVc_contrail_states@@@Z");
//};

//public: float c_contrail_definition::evaluate_emission_rate(class c_contrail_states const *) const
//{
//    mangled_ppc("?evaluate_emission_rate@c_contrail_definition@@QBAMPBVc_contrail_states@@@Z");
//};

//private: void c_contrail::extend(unsigned char, class c_contrail_states *, bool, union vector3d const *, float)
//{
//    mangled_ppc("?extend@c_contrail@@AAAXEPAVc_contrail_states@@_NPBTvector3d@@M@Z");
//};

//public: bool c_contrail_definition::get_origin_faded(void) const
//{
//    mangled_ppc("?get_origin_faded@c_contrail_definition@@QBA_NXZ");
//};

//public: void c_contrail::frame_advance(float)
//{
//    mangled_ppc("?frame_advance@c_contrail@@QAAXM@Z");
//};

//public: bool c_contrail_gpu::get_alive(void) const
//{
//    mangled_ppc("?get_alive@c_contrail_gpu@@QBA_NXZ");
//};

//private: static void c_contrail::render_callback(void const *, long, short, short)
//{
//    mangled_ppc("?render_callback@c_contrail@@CAXPBXJFF@Z");
//};

//public: void c_contrail::render(void) const
//{
//    mangled_ppc("?render@c_contrail@@QBAXXZ");
//};

//public: void c_contrail::submit(void) const
//{
//    mangled_ppc("?submit@c_contrail@@QBAXXZ");
//};

//public: float c_contrail_definition::get_sort_bias(void) const
//{
//    mangled_ppc("?get_sort_bias@c_contrail_definition@@QBAMXZ");
//};

//public: long c_contrail::count(void) const
//{
//    mangled_ppc("?count@c_contrail@@QBAJXZ");
//};

//void __tls_set_g_contrail_profile_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_contrail_profile_allocator@@YAXPAX@Z");
//};

//public: static void c_contrail_profile::initialize_for_game(void)
//{
//    mangled_ppc("?initialize_for_game@c_contrail_profile@@SAXXZ");
//};

//public: static void c_contrail_profile::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@c_contrail_profile@@SAXXZ");
//};

//public: static void c_contrail_profile::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@c_contrail_profile@@SAXXZ");
//};

//public: static void c_contrail_profile::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@c_contrail_profile@@SAXXZ");
//};

//public: static long c_contrail_profile::create(class c_contrail const *)
//{
//    mangled_ppc("?create@c_contrail_profile@@SAJPBVc_contrail@@@Z");
//};

//public: static void c_contrail_profile::destroy(long)
//{
//    mangled_ppc("?destroy@c_contrail_profile@@SAXJ@Z");
//};

//public: float c_editable_property<class c_contrail_states>::evaluate(class c_contrail_states const *) const
//{
//    mangled_ppc("?evaluate@?$c_editable_property@Vc_contrail_states@@@@QBAMPBVc_contrail_states@@@Z");
//};

//public: void c_data_iterator<class c_contrail_system>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Vc_contrail_system@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<class c_contrail_system>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Vc_contrail_system@@@@QAA_NXZ");
//};

//public: class c_contrail_system * c_data_iterator<class c_contrail_system>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Vc_contrail_system@@@@QBAPAVc_contrail_system@@XZ");
//};

//public: long c_data_iterator<class c_contrail_system>::get_index(void) const
//{
//    mangled_ppc("?get_index@?$c_data_iterator@Vc_contrail_system@@@@QBAJXZ");
//};

//void data_dump<class c_contrail_system>(struct s_data_array const *, char const *, enum e_event_level)
//{
//    mangled_ppc("??$data_dump@Vc_contrail_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@@Z");
//};

//void data_dump<class c_contrail>(struct s_data_array const *, char const *, enum e_event_level, bool)
//{
//    mangled_ppc("??$data_dump@Vc_contrail@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z");
//};

//void data_dump<class c_contrail_location>(struct s_data_array const *, char const *, enum e_event_level)
//{
//    mangled_ppc("??$data_dump@Vc_contrail_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@@Z");
//};

//void data_dump<class c_contrail>(struct s_data_array const *, char const *, enum e_event_level)
//{
//    mangled_ppc("??$data_dump@Vc_contrail@@@@YAXPBUs_data_array@@PBDW4e_event_level@@@Z");
//};

//void data_dump<class c_contrail_profile>(struct s_data_array const *, char const *, enum e_event_level)
//{
//    mangled_ppc("??$data_dump@Vc_contrail_profile@@@@YAXPBUs_data_array@@PBDW4e_event_level@@@Z");
//};

//public: float c_editable_property_base::evaluate<class c_contrail_states>(class c_contrail_states const *) const
//{
//    mangled_ppc("??$evaluate@Vc_contrail_states@@@c_editable_property_base@@QBAMPBVc_contrail_states@@@Z");
//};

//public: void c_data_iterator<class c_contrail>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Vc_contrail@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<class c_contrail>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Vc_contrail@@@@QAA_NXZ");
//};

//public: class c_contrail * c_data_iterator<class c_contrail>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Vc_contrail@@@@QBAPAVc_contrail@@XZ");
//};

//void data_dump<class c_contrail_system>(struct s_data_array const *, char const *, enum e_event_level, bool)
//{
//    mangled_ppc("??$data_dump@Vc_contrail_system@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z");
//};

//void data_dump<class c_contrail_location>(struct s_data_array const *, char const *, enum e_event_level, bool)
//{
//    mangled_ppc("??$data_dump@Vc_contrail_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z");
//};

//void data_dump<class c_contrail_profile>(struct s_data_array const *, char const *, enum e_event_level, bool)
//{
//    mangled_ppc("??$data_dump@Vc_contrail_profile@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z");
//};

//public: static char const * c_contrail_profile::get_name(void)
//{
//    mangled_ppc("?get_name@c_contrail_profile@@SAPBDXZ");
//};

//public: void c_data_iterator<class c_contrail_location>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Vc_contrail_location@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<class c_contrail_location>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Vc_contrail_location@@@@QAA_NXZ");
//};

//public: class c_contrail_location * c_data_iterator<class c_contrail_location>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Vc_contrail_location@@@@QBAPAVc_contrail_location@@XZ");
//};

//public: void c_data_iterator<class c_contrail_profile>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Vc_contrail_profile@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<class c_contrail_profile>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Vc_contrail_profile@@@@QAA_NXZ");
//};

//public: class c_contrail_profile * c_data_iterator<class c_contrail_profile>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Vc_contrail_profile@@@@QBAPAVc_contrail_profile@@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_system_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_system_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_system_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_system_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_system_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_system_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_location_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_location_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_location_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_location_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_location_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_location_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_profile_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_profile_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_profile_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_profile_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_profile_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_profile_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_system_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_system_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_location_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_location_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_contrail_profile_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_contrail_profile_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_contrail_system_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_contrail_system_allocator@@YAXXZ");
//};

//void g_contrail_location_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_contrail_location_allocator@@YAXXZ");
//};

//void g_contrail_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_contrail_allocator@@YAXXZ");
//};

//void g_contrail_profile_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_contrail_profile_allocator@@YAXXZ");
//};

