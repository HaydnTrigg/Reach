/* ---------- headers */

#include "omaha\effects\particle_location.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static enum e_effect_holdback_type const c_particle_location::x_holdback_type; // "?x_holdback_type@c_particle_location@@0W4e_effect_holdback_type@@B"
// float shape_scale; // "?shape_scale@@3MA"
// long volatile `void __cdecl data_dump<class c_particle_location>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`22'::x_event_category_index; // "?x_event_category_index@?BG@???$data_dump@Vc_particle_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_particle_location>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`15'::x_event_category_index; // "?x_event_category_index@?P@???$data_dump@Vc_particle_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_particle_location>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`6'::x_event_category_index; // "?x_event_category_index@?5???$data_dump@Vc_particle_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// struct real_matrix4x3identity_transform; // "?identity_transform@@3Ureal_matrix4x3@@A"
// union real_point3d *transformed_list; // "?transformed_list@@3PATreal_point3d@@A"
// union real_point3d *segment_list; // "?segment_list@@3PATreal_point3d@@A"
// struct real_matrix4x3const *const shape_transform; // "?shape_transform@@3PBUreal_matrix4x3@@B"
// long segment_index; // "?segment_index@@3JA"
// class t_restricted_allocation_manager<3, 0, 0, void (__cdecl __tls_set_g_particle_location_data_array_allocator::*)(void *)> g_particle_location_data_array_allocator; // "?g_particle_location_data_array_allocator@@3V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_location_data_array_allocator@@YAXPAX@Z@@A"
// bool `void __cdecl data_dump<class c_particle_location>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`2'::done_already; // "?done_already@?1???$data_dump@Vc_particle_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4_NA"
// public: static struct s_data_array *c_particle_location::x_data_array; // "?x_data_array@c_particle_location@@2PAUs_data_array@@A"

// void __tls_set_g_particle_location_data_array_allocator(void *);
// public: static void c_particle_location::initialize_for_game(void);
// public: static void c_particle_location::initialize_for_map(void);
// public: static void c_particle_location::dispose_from_map(void);
// public: static void c_particle_location::dispose_from_game(void);
// public: static long c_particle_location::create(unsigned char, long, unsigned long);
// public: static void c_particle_location::destroy(long);
// public: long c_particle_emitter::get_next_emitter(void) const;
// public: char const * c_particle_location::get_name(void) const;
// public: float c_particle_location::calc_lod_amount(enum e_output_user_index) const;
// public: bool c_particle_system::get_is_weather(void) const;
// public: float c_particle_system::calc_lod_amount(float) const;
// public: void c_particle_location::update_lod_amount(void);
// public: long c_particle_location::frame_advance(class c_particle_state_list *, float);
// public: void c_particle_location::set_passed_visibility_last_frame(bool);
// public: void c_particle_location::set_failed_visibility_last_frame(bool);
// public: long c_particle_location::pulse(float, class c_particle_state_list *, struct s_effect_information *);
// public: bool c_particle_location::get_bounding_sphere_initialized(void) const;
// public: void c_particle_location::set_bounding_sphere_initialized(bool);
// public: bool c_particle_location::get_passed_visibility_last_frame(void) const;
// public: bool c_particle_location::get_failed_visibility_last_frame(void) const;
// public: struct real_matrix4x3const * c_particle_emitter::get_matrix(void) const;
// public: struct c_particle_emitter::s_property_values * c_particle_emitter::get_property_values(void);
// public: long c_particle_emitter::get_definition_block_index(void);
// public: bool c_particle_system_definition::get_continue_when_offscreen(void) const;
// public: static struct s_particle_emitter_custom_points * s_particle_emitter_custom_points::get(long);
// public: struct s_particle_emitter_custom_points::s_point * s_particle_emitter_custom_points::get_point(long);
// void add_point(union real_point3d *);
// void draw_shape(void);
// void draw_points(float);
// public: void c_particle_location::submit(enum e_output_user_index, bool, enum e_effect_pass);
// public: long c_particle_location::get_first_emitter(void) const;
// public: void c_particle_location::count_by_priority(unsigned char) const;
// public: void c_particle_location::check_particle_counts(long *, long *, long *) const;
// public: void c_particle_location::add_to_list(long *, long *);
// void data_dump<class c_particle_location>(struct s_data_array const *, char const *, enum e_event_level);
// void data_dump<class c_particle_location>(struct s_data_array const *, char const *, enum e_event_level, bool);
// public: void c_data_iterator<class c_particle_location>::begin(struct s_data_array *);
// public: bool c_data_iterator<class c_particle_location>::next(void);
// public: class c_particle_location * c_data_iterator<class c_particle_location>::get_datum(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>(void);
// void g_particle_location_data_array_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_particle_location_data_array_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_particle_location_data_array_allocator@@YAXPAX@Z");
//};

//public: static void c_particle_location::initialize_for_game(void)
//{
//    mangled_ppc("?initialize_for_game@c_particle_location@@SAXXZ");
//};

//public: static void c_particle_location::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@c_particle_location@@SAXXZ");
//};

//public: static void c_particle_location::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@c_particle_location@@SAXXZ");
//};

//public: static void c_particle_location::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@c_particle_location@@SAXXZ");
//};

//public: static long c_particle_location::create(unsigned char, long, unsigned long)
//{
//    mangled_ppc("?create@c_particle_location@@SAJEJK@Z");
//};

//public: static void c_particle_location::destroy(long)
//{
//    mangled_ppc("?destroy@c_particle_location@@SAXJ@Z");
//};

//public: long c_particle_emitter::get_next_emitter(void) const
//{
//    mangled_ppc("?get_next_emitter@c_particle_emitter@@QBAJXZ");
//};

//public: char const * c_particle_location::get_name(void) const
//{
//    mangled_ppc("?get_name@c_particle_location@@QBAPBDXZ");
//};

//public: float c_particle_location::calc_lod_amount(enum e_output_user_index) const
//{
//    mangled_ppc("?calc_lod_amount@c_particle_location@@QBAMW4e_output_user_index@@@Z");
//};

//public: bool c_particle_system::get_is_weather(void) const
//{
//    mangled_ppc("?get_is_weather@c_particle_system@@QBA_NXZ");
//};

//public: float c_particle_system::calc_lod_amount(float) const
//{
//    mangled_ppc("?calc_lod_amount@c_particle_system@@QBAMM@Z");
//};

//public: void c_particle_location::update_lod_amount(void)
//{
//    mangled_ppc("?update_lod_amount@c_particle_location@@QAAXXZ");
//};

//public: long c_particle_location::frame_advance(class c_particle_state_list *, float)
//{
//    mangled_ppc("?frame_advance@c_particle_location@@QAAJPAVc_particle_state_list@@M@Z");
//};

//public: void c_particle_location::set_passed_visibility_last_frame(bool)
//{
//    mangled_ppc("?set_passed_visibility_last_frame@c_particle_location@@QAAX_N@Z");
//};

//public: void c_particle_location::set_failed_visibility_last_frame(bool)
//{
//    mangled_ppc("?set_failed_visibility_last_frame@c_particle_location@@QAAX_N@Z");
//};

//public: long c_particle_location::pulse(float, class c_particle_state_list *, struct s_effect_information *)
//{
//    mangled_ppc("?pulse@c_particle_location@@QAAJMPAVc_particle_state_list@@PAUs_effect_information@@@Z");
//};

//public: bool c_particle_location::get_bounding_sphere_initialized(void) const
//{
//    mangled_ppc("?get_bounding_sphere_initialized@c_particle_location@@QBA_NXZ");
//};

//public: void c_particle_location::set_bounding_sphere_initialized(bool)
//{
//    mangled_ppc("?set_bounding_sphere_initialized@c_particle_location@@QAAX_N@Z");
//};

//public: bool c_particle_location::get_passed_visibility_last_frame(void) const
//{
//    mangled_ppc("?get_passed_visibility_last_frame@c_particle_location@@QBA_NXZ");
//};

//public: bool c_particle_location::get_failed_visibility_last_frame(void) const
//{
//    mangled_ppc("?get_failed_visibility_last_frame@c_particle_location@@QBA_NXZ");
//};

//public: struct real_matrix4x3const * c_particle_emitter::get_matrix(void) const
//{
//    mangled_ppc("?get_matrix@c_particle_emitter@@QBAPBUreal_matrix4x3@@XZ");
//};

//public: struct c_particle_emitter::s_property_values * c_particle_emitter::get_property_values(void)
//{
//    mangled_ppc("?get_property_values@c_particle_emitter@@QAAPAUs_property_values@1@XZ");
//};

//public: long c_particle_emitter::get_definition_block_index(void)
//{
//    mangled_ppc("?get_definition_block_index@c_particle_emitter@@QAAJXZ");
//};

//public: bool c_particle_system_definition::get_continue_when_offscreen(void) const
//{
//    mangled_ppc("?get_continue_when_offscreen@c_particle_system_definition@@QBA_NXZ");
//};

//public: static struct s_particle_emitter_custom_points * s_particle_emitter_custom_points::get(long)
//{
//    mangled_ppc("?get@s_particle_emitter_custom_points@@SAPAU1@J@Z");
//};

//public: struct s_particle_emitter_custom_points::s_point * s_particle_emitter_custom_points::get_point(long)
//{
//    mangled_ppc("?get_point@s_particle_emitter_custom_points@@QAAPAUs_point@1@J@Z");
//};

//void add_point(union real_point3d *)
//{
//    mangled_ppc("?add_point@@YAXPATreal_point3d@@@Z");
//};

//void draw_shape(void)
//{
//    mangled_ppc("?draw_shape@@YAXXZ");
//};

//void draw_points(float)
//{
//    mangled_ppc("?draw_points@@YAXM@Z");
//};

//public: void c_particle_location::submit(enum e_output_user_index, bool, enum e_effect_pass)
//{
//    mangled_ppc("?submit@c_particle_location@@QAAXW4e_output_user_index@@_NW4e_effect_pass@@@Z");
//};

//public: long c_particle_location::get_first_emitter(void) const
//{
//    mangled_ppc("?get_first_emitter@c_particle_location@@QBAJXZ");
//};

//public: void c_particle_location::count_by_priority(unsigned char) const
//{
//    mangled_ppc("?count_by_priority@c_particle_location@@QBAXE@Z");
//};

//public: void c_particle_location::check_particle_counts(long *, long *, long *) const
//{
//    mangled_ppc("?check_particle_counts@c_particle_location@@QBAXPAJ00@Z");
//};

//public: void c_particle_location::add_to_list(long *, long *)
//{
//    mangled_ppc("?add_to_list@c_particle_location@@QAAXPAJ0@Z");
//};

//void data_dump<class c_particle_location>(struct s_data_array const *, char const *, enum e_event_level)
//{
//    mangled_ppc("??$data_dump@Vc_particle_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@@Z");
//};

//void data_dump<class c_particle_location>(struct s_data_array const *, char const *, enum e_event_level, bool)
//{
//    mangled_ppc("??$data_dump@Vc_particle_location@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z");
//};

//public: void c_data_iterator<class c_particle_location>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Vc_particle_location@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<class c_particle_location>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Vc_particle_location@@@@QAA_NXZ");
//};

//public: class c_particle_location * c_data_iterator<class c_particle_location>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Vc_particle_location@@@@QBAPAVc_particle_location@@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_location_data_array_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_location_data_array_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_location_data_array_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_location_data_array_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_location_data_array_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_location_data_array_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_location_data_array_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_location_data_array_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_particle_location_data_array_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_particle_location_data_array_allocator@@YAXXZ");
//};

