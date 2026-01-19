/* ---------- headers */

#include "omaha\effects\particle_emitter.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static enum e_effect_holdback_type const c_particle_emitter::x_holdback_type; // "?x_holdback_type@c_particle_emitter@@0W4e_effect_holdback_type@@B"
// long volatile `void __cdecl data_dump<class c_particle_emitter>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`22'::x_event_category_index; // "?x_event_category_index@?BG@???$data_dump@Vc_particle_emitter@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_particle_emitter>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`15'::x_event_category_index; // "?x_event_category_index@?P@???$data_dump@Vc_particle_emitter@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// long volatile `void __cdecl data_dump<class c_particle_emitter>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`6'::x_event_category_index; // "?x_event_category_index@?5???$data_dump@Vc_particle_emitter@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4JC"
// bool `void __cdecl data_dump<class c_particle_emitter>(struct s_data_array const *, char const *, enum e_event_level, bool)'::`2'::done_already; // "?done_already@?1???$data_dump@Vc_particle_emitter@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z@4_NA"
// class t_restricted_allocation_manager<3, 0, 0, void (__cdecl __tls_set_g_particle_emitter_data_array_allocator::*)(void *)> g_particle_emitter_data_array_allocator; // "?g_particle_emitter_data_array_allocator@@3V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_emitter_data_array_allocator@@YAXPAX@Z@@A"
// public: static struct s_data_array *c_particle_emitter::x_data_array; // "?x_data_array@c_particle_emitter@@2PAUs_data_array@@A"

// void __tls_set_g_particle_emitter_data_array_allocator(void *);
// public: static void c_particle_emitter::initialize_for_game(void);
// public: static void c_particle_emitter::initialize_for_map(void);
// public: static void c_particle_emitter::dispose_from_map(void);
// public: static void c_particle_emitter::dispose_from_game(void);
// public: static long c_particle_emitter::create(unsigned char, long, long);
// public: long c_particle_location::get_parent_system_index(void) const;
// public: static void c_particle_emitter::destroy(long);
// public: char const * c_particle_emitter::get_name(void) const;
// public: long c_particle_emitter::frame_advance(class c_particle_state_list *, float);
// public: long c_particle_emitter::get_emitter_gpu_index(void) const;
// public: bool c_particle_emitter::get_passed_visibility_last_frame(void) const;
// public: void c_particle_emitter::set_passed_visibility_last_frame(bool);
// public: bool c_particle_emitter::get_failed_visibility_last_frame(void) const;
// public: void c_particle_emitter::set_failed_visibility_last_frame(bool);
// public: void c_particle_emitter::set_was_frame_advanced_this_frame(bool);
// public: void c_particle_state_list::set_particle(class c_particle const *);
// public: unsigned short c_particle_emitter_gpu::get_particle_count(void) const;
// public: void c_particle_emitter_definition::evaluate_particle_self_acceleration_if_not_constant_over_time(class c_particle_state_list const *, union vector3d *) const;
// public: union vector3d c_particle_emitter_definition::evaluate_particle_self_acceleration(class c_particle_state_list const *) const;
// public: bool c_particle_emitter_definition::becomes_gpu_when_at_rest(void) const;
// public: static class c_particle * c_particle::get(long);
// public: void c_particle::kill(void);
// public: bool c_particle::get_is_deleted(void) const;
// public: bool c_particle::get_is_at_rest(void) const;
// public: bool c_particle::get_can_update(void) const;
// public: bool c_particle::get_run_physics(void) const;
// public: bool c_particle_definition::get_particle_dies_at_rest(void) const;
// public: static void c_particle_emitter::render_callback(void const *, long, short, short);
// public: void c_particle_emitter::submit(enum e_effect_pass);
// public: static class c_particle_emitter_gpu const * c_particle_emitter_gpu::get_const(long);
// public: float c_particle_system_definition::get_sort_bias(void) const;
// public: float c_particle_location::get_bounding_sphere_radius(void) const;
// void FastIntersectSpherePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&);
// public: float c_particle_emitter::calc_matrix(class c_particle_emitter_definition const *, class c_particle_system const *, class c_particle_state_list const *);
// public: void c_particle_emitter::set_matrix_initialized(bool);
// public: void c_particle_emitter_definition::evaluate_emitter_offset_if_not_constant_over_time(class c_particle_state_list const *, union real_point3d *) const;
// public: union real_point3d c_particle_emitter_definition::evaluate_emitter_offset(class c_particle_state_list const *) const;
// public: void c_particle_emitter_definition::evaluate_emitter_direction_if_not_constant_over_time(class c_particle_state_list const *, union vector3d *) const;
// public: union vector3d c_particle_emitter_definition::evaluate_emitter_direction(class c_particle_state_list const *) const;
// public: struct real_matrix4x3const * c_particle_location::get_matrix(void) const;
// public: long c_particle_emitter::pulse(float, class c_particle_state_list *, struct s_effect_information *);
// public: bool c_particle_emitter::get_matrix_initialized(void) const;
// public: float c_particle_emitter_definition::evaluate_emitter_starting_count(class c_particle_state_list const *) const;
// public: float c_particle_emitter_definition::evaluate_emitter_max_count(class c_particle_state_list const *) const;
// public: float c_particle_emitter_definition::evaluate_emission_rate(class c_particle_state_list const *) const;
// public: bool c_particle_system::get_should_pulse(void) const;
// private: void c_particle_emitter::spawn_particle(class c_particle_state_list *, class c_particle_system const *, class c_particle_emitter_definition const *, union real_point3d const &, float, float, float);
// public: long c_particle_emitter::to_datum_index(void) const;
// public: c_global_material_type::c_global_material_type(enum c_global_material_type::e_base_types);
// public: long c_particle_emitter_definition::get_emission_shape(void) const;
// public: bool c_particle_system_definition::get_inherit_effect_velocity(void) const;
// public: float c_particle_system_definition::get_random_inherit_velocity_percent_within_range(void) const;
// public: bool c_particle_emitter_definition::is_gpu(void) const;
// public: bool c_particle_definition::get_particle_has_birth_attachment(void) const;
// public: c_particle_collision_event::c_particle_collision_event(void);
// public: void c_particle_emitter::kill_particle(class c_particle_system const *, class c_particle *, class c_particle_state_list *);
// public: bool c_particle_definition::get_particle_has_death_attachment(void) const;
// public: long c_particle_emitter::release_particles(void);
// public: void c_particle_emitter::add_to_list(long *, long *);
// public: union real_point3d const * c_particle_emitter::get_position_world(union real_point3d *, class c_particle_system const *, class c_particle_system_definition const *) const;
// public: struct real_matrix4x3const * c_particle_emitter::get_render_matrix(struct real_matrix4x3*, class c_particle_system const *, class c_particle_system_definition const *) const;
// public: void c_particle_emitter::count_by_priority(unsigned char) const;
// public: void c_particle_emitter::check_particle_counts(long *, long *, long *) const;
// public: union real_point3d const c_editable_property_type<class c_particle_state_list, union real_point3d>::evaluate(class c_particle_state_list const *) const;
// protected: union real_point3d const c_editable_property_type_base<union real_point3d>::interpolate(float) const;
// public: union vector3d const c_editable_property_type<class c_particle_state_list, union vector3d>::evaluate(class c_particle_state_list const *) const;
// protected: union vector3d const c_editable_property_type_base<union vector3d>::interpolate(float) const;
// public: static bool c_editable_property_base::property_value_is_initialized<union real_point3d>(union real_point3d const *);
// public: static bool c_editable_property_base::property_value_is_initialized<union vector3d>(union vector3d const *);
// void data_dump<class c_particle_emitter>(struct s_data_array const *, char const *, enum e_event_level);
// void data_dump<class c_particle_emitter>(struct s_data_array const *, char const *, enum e_event_level, bool);
// public: void c_data_iterator<class c_particle_emitter>::begin(struct s_data_array *);
// public: bool c_data_iterator<class c_particle_emitter>::next(void);
// public: class c_particle_emitter * c_data_iterator<class c_particle_emitter>::get_datum(void) const;
// union vector3d * subtract_vector3d(union vector3d const *, union vector3d const *, union vector3d *);
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>(void);
// void g_particle_emitter_data_array_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_particle_emitter_data_array_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_particle_emitter_data_array_allocator@@YAXPAX@Z");
//};

//public: static void c_particle_emitter::initialize_for_game(void)
//{
//    mangled_ppc("?initialize_for_game@c_particle_emitter@@SAXXZ");
//};

//public: static void c_particle_emitter::initialize_for_map(void)
//{
//    mangled_ppc("?initialize_for_map@c_particle_emitter@@SAXXZ");
//};

//public: static void c_particle_emitter::dispose_from_map(void)
//{
//    mangled_ppc("?dispose_from_map@c_particle_emitter@@SAXXZ");
//};

//public: static void c_particle_emitter::dispose_from_game(void)
//{
//    mangled_ppc("?dispose_from_game@c_particle_emitter@@SAXXZ");
//};

//public: static long c_particle_emitter::create(unsigned char, long, long)
//{
//    mangled_ppc("?create@c_particle_emitter@@SAJEJJ@Z");
//};

//public: long c_particle_location::get_parent_system_index(void) const
//{
//    mangled_ppc("?get_parent_system_index@c_particle_location@@QBAJXZ");
//};

//public: static void c_particle_emitter::destroy(long)
//{
//    mangled_ppc("?destroy@c_particle_emitter@@SAXJ@Z");
//};

//public: char const * c_particle_emitter::get_name(void) const
//{
//    mangled_ppc("?get_name@c_particle_emitter@@QBAPBDXZ");
//};

//public: long c_particle_emitter::frame_advance(class c_particle_state_list *, float)
//{
//    mangled_ppc("?frame_advance@c_particle_emitter@@QAAJPAVc_particle_state_list@@M@Z");
//};

//public: long c_particle_emitter::get_emitter_gpu_index(void) const
//{
//    mangled_ppc("?get_emitter_gpu_index@c_particle_emitter@@QBAJXZ");
//};

//public: bool c_particle_emitter::get_passed_visibility_last_frame(void) const
//{
//    mangled_ppc("?get_passed_visibility_last_frame@c_particle_emitter@@QBA_NXZ");
//};

//public: void c_particle_emitter::set_passed_visibility_last_frame(bool)
//{
//    mangled_ppc("?set_passed_visibility_last_frame@c_particle_emitter@@QAAX_N@Z");
//};

//public: bool c_particle_emitter::get_failed_visibility_last_frame(void) const
//{
//    mangled_ppc("?get_failed_visibility_last_frame@c_particle_emitter@@QBA_NXZ");
//};

//public: void c_particle_emitter::set_failed_visibility_last_frame(bool)
//{
//    mangled_ppc("?set_failed_visibility_last_frame@c_particle_emitter@@QAAX_N@Z");
//};

//public: void c_particle_emitter::set_was_frame_advanced_this_frame(bool)
//{
//    mangled_ppc("?set_was_frame_advanced_this_frame@c_particle_emitter@@QAAX_N@Z");
//};

//public: void c_particle_state_list::set_particle(class c_particle const *)
//{
//    mangled_ppc("?set_particle@c_particle_state_list@@QAAXPBVc_particle@@@Z");
//};

//public: unsigned short c_particle_emitter_gpu::get_particle_count(void) const
//{
//    mangled_ppc("?get_particle_count@c_particle_emitter_gpu@@QBAGXZ");
//};

//public: void c_particle_emitter_definition::evaluate_particle_self_acceleration_if_not_constant_over_time(class c_particle_state_list const *, union vector3d *) const
//{
//    mangled_ppc("?evaluate_particle_self_acceleration_if_not_constant_over_time@c_particle_emitter_definition@@QBAXPBVc_particle_state_list@@PATvector3d@@@Z");
//};

//public: union vector3d c_particle_emitter_definition::evaluate_particle_self_acceleration(class c_particle_state_list const *) const
//{
//    mangled_ppc("?evaluate_particle_self_acceleration@c_particle_emitter_definition@@QBA?ATvector3d@@PBVc_particle_state_list@@@Z");
//};

//public: bool c_particle_emitter_definition::becomes_gpu_when_at_rest(void) const
//{
//    mangled_ppc("?becomes_gpu_when_at_rest@c_particle_emitter_definition@@QBA_NXZ");
//};

//public: static class c_particle * c_particle::get(long)
//{
//    mangled_ppc("?get@c_particle@@SAPAV1@J@Z");
//};

//public: void c_particle::kill(void)
//{
//    mangled_ppc("?kill@c_particle@@QAAXXZ");
//};

//public: bool c_particle::get_is_deleted(void) const
//{
//    mangled_ppc("?get_is_deleted@c_particle@@QBA_NXZ");
//};

//public: bool c_particle::get_is_at_rest(void) const
//{
//    mangled_ppc("?get_is_at_rest@c_particle@@QBA_NXZ");
//};

//public: bool c_particle::get_can_update(void) const
//{
//    mangled_ppc("?get_can_update@c_particle@@QBA_NXZ");
//};

//public: bool c_particle::get_run_physics(void) const
//{
//    mangled_ppc("?get_run_physics@c_particle@@QBA_NXZ");
//};

//public: bool c_particle_definition::get_particle_dies_at_rest(void) const
//{
//    mangled_ppc("?get_particle_dies_at_rest@c_particle_definition@@QBA_NXZ");
//};

//public: static void c_particle_emitter::render_callback(void const *, long, short, short)
//{
//    mangled_ppc("?render_callback@c_particle_emitter@@SAXPBXJFF@Z");
//};

//public: void c_particle_emitter::submit(enum e_effect_pass)
//{
//    mangled_ppc("?submit@c_particle_emitter@@QAAXW4e_effect_pass@@@Z");
//};

//public: static class c_particle_emitter_gpu const * c_particle_emitter_gpu::get_const(long)
//{
//    mangled_ppc("?get_const@c_particle_emitter_gpu@@SAPBV1@J@Z");
//};

//public: float c_particle_system_definition::get_sort_bias(void) const
//{
//    mangled_ppc("?get_sort_bias@c_particle_system_definition@@QBAMXZ");
//};

//public: float c_particle_location::get_bounding_sphere_radius(void) const
//{
//    mangled_ppc("?get_bounding_sphere_radius@c_particle_location@@QBAMXZ");
//};

//void FastIntersectSpherePlane(struct __vector4, struct __vector4, struct __vector4, struct __vector4&, struct __vector4&)
//{
//    mangled_ppc("?FastIntersectSpherePlane@@YAXU__vector4@@00AAU1@1@Z");
//};

//public: float c_particle_emitter::calc_matrix(class c_particle_emitter_definition const *, class c_particle_system const *, class c_particle_state_list const *)
//{
//    mangled_ppc("?calc_matrix@c_particle_emitter@@QAAMPBVc_particle_emitter_definition@@PBVc_particle_system@@PBVc_particle_state_list@@@Z");
//};

//public: void c_particle_emitter::set_matrix_initialized(bool)
//{
//    mangled_ppc("?set_matrix_initialized@c_particle_emitter@@QAAX_N@Z");
//};

//public: void c_particle_emitter_definition::evaluate_emitter_offset_if_not_constant_over_time(class c_particle_state_list const *, union real_point3d *) const
//{
//    mangled_ppc("?evaluate_emitter_offset_if_not_constant_over_time@c_particle_emitter_definition@@QBAXPBVc_particle_state_list@@PATreal_point3d@@@Z");
//};

//public: union real_point3d c_particle_emitter_definition::evaluate_emitter_offset(class c_particle_state_list const *) const
//{
//    mangled_ppc("?evaluate_emitter_offset@c_particle_emitter_definition@@QBA?ATreal_point3d@@PBVc_particle_state_list@@@Z");
//};

//public: void c_particle_emitter_definition::evaluate_emitter_direction_if_not_constant_over_time(class c_particle_state_list const *, union vector3d *) const
//{
//    mangled_ppc("?evaluate_emitter_direction_if_not_constant_over_time@c_particle_emitter_definition@@QBAXPBVc_particle_state_list@@PATvector3d@@@Z");
//};

//public: union vector3d c_particle_emitter_definition::evaluate_emitter_direction(class c_particle_state_list const *) const
//{
//    mangled_ppc("?evaluate_emitter_direction@c_particle_emitter_definition@@QBA?ATvector3d@@PBVc_particle_state_list@@@Z");
//};

//public: struct real_matrix4x3const * c_particle_location::get_matrix(void) const
//{
//    mangled_ppc("?get_matrix@c_particle_location@@QBAPBUreal_matrix4x3@@XZ");
//};

//public: long c_particle_emitter::pulse(float, class c_particle_state_list *, struct s_effect_information *)
//{
//    mangled_ppc("?pulse@c_particle_emitter@@QAAJMPAVc_particle_state_list@@PAUs_effect_information@@@Z");
//};

//public: bool c_particle_emitter::get_matrix_initialized(void) const
//{
//    mangled_ppc("?get_matrix_initialized@c_particle_emitter@@QBA_NXZ");
//};

//public: float c_particle_emitter_definition::evaluate_emitter_starting_count(class c_particle_state_list const *) const
//{
//    mangled_ppc("?evaluate_emitter_starting_count@c_particle_emitter_definition@@QBAMPBVc_particle_state_list@@@Z");
//};

//public: float c_particle_emitter_definition::evaluate_emitter_max_count(class c_particle_state_list const *) const
//{
//    mangled_ppc("?evaluate_emitter_max_count@c_particle_emitter_definition@@QBAMPBVc_particle_state_list@@@Z");
//};

//public: float c_particle_emitter_definition::evaluate_emission_rate(class c_particle_state_list const *) const
//{
//    mangled_ppc("?evaluate_emission_rate@c_particle_emitter_definition@@QBAMPBVc_particle_state_list@@@Z");
//};

//public: bool c_particle_system::get_should_pulse(void) const
//{
//    mangled_ppc("?get_should_pulse@c_particle_system@@QBA_NXZ");
//};

//private: void c_particle_emitter::spawn_particle(class c_particle_state_list *, class c_particle_system const *, class c_particle_emitter_definition const *, union real_point3d const &, float, float, float)
//{
//    mangled_ppc("?spawn_particle@c_particle_emitter@@AAAXPAVc_particle_state_list@@PBVc_particle_system@@PBVc_particle_emitter_definition@@ABTreal_point3d@@MMM@Z");
//};

//public: long c_particle_emitter::to_datum_index(void) const
//{
//    mangled_ppc("?to_datum_index@c_particle_emitter@@QBAJXZ");
//};

//public: c_global_material_type::c_global_material_type(enum c_global_material_type::e_base_types)
//{
//    mangled_ppc("??0c_global_material_type@@QAA@W4e_base_types@0@@Z");
//};

//public: long c_particle_emitter_definition::get_emission_shape(void) const
//{
//    mangled_ppc("?get_emission_shape@c_particle_emitter_definition@@QBAJXZ");
//};

//public: bool c_particle_system_definition::get_inherit_effect_velocity(void) const
//{
//    mangled_ppc("?get_inherit_effect_velocity@c_particle_system_definition@@QBA_NXZ");
//};

//public: float c_particle_system_definition::get_random_inherit_velocity_percent_within_range(void) const
//{
//    mangled_ppc("?get_random_inherit_velocity_percent_within_range@c_particle_system_definition@@QBAMXZ");
//};

//public: bool c_particle_emitter_definition::is_gpu(void) const
//{
//    mangled_ppc("?is_gpu@c_particle_emitter_definition@@QBA_NXZ");
//};

//public: bool c_particle_definition::get_particle_has_birth_attachment(void) const
//{
//    mangled_ppc("?get_particle_has_birth_attachment@c_particle_definition@@QBA_NXZ");
//};

//public: c_particle_collision_event::c_particle_collision_event(void)
//{
//    mangled_ppc("??0c_particle_collision_event@@QAA@XZ");
//};

//public: void c_particle_emitter::kill_particle(class c_particle_system const *, class c_particle *, class c_particle_state_list *)
//{
//    mangled_ppc("?kill_particle@c_particle_emitter@@QAAXPBVc_particle_system@@PAVc_particle@@PAVc_particle_state_list@@@Z");
//};

//public: bool c_particle_definition::get_particle_has_death_attachment(void) const
//{
//    mangled_ppc("?get_particle_has_death_attachment@c_particle_definition@@QBA_NXZ");
//};

//public: long c_particle_emitter::release_particles(void)
//{
//    mangled_ppc("?release_particles@c_particle_emitter@@QAAJXZ");
//};

//public: void c_particle_emitter::add_to_list(long *, long *)
//{
//    mangled_ppc("?add_to_list@c_particle_emitter@@QAAXPAJ0@Z");
//};

//public: union real_point3d const * c_particle_emitter::get_position_world(union real_point3d *, class c_particle_system const *, class c_particle_system_definition const *) const
//{
//    mangled_ppc("?get_position_world@c_particle_emitter@@QBAPBTreal_point3d@@PAT2@PBVc_particle_system@@PBVc_particle_system_definition@@@Z");
//};

//public: struct real_matrix4x3const * c_particle_emitter::get_render_matrix(struct real_matrix4x3*, class c_particle_system const *, class c_particle_system_definition const *) const
//{
//    mangled_ppc("?get_render_matrix@c_particle_emitter@@QBAPBUreal_matrix4x3@@PAU2@PBVc_particle_system@@PBVc_particle_system_definition@@@Z");
//};

//public: void c_particle_emitter::count_by_priority(unsigned char) const
//{
//    mangled_ppc("?count_by_priority@c_particle_emitter@@QBAXE@Z");
//};

//public: void c_particle_emitter::check_particle_counts(long *, long *, long *) const
//{
//    mangled_ppc("?check_particle_counts@c_particle_emitter@@QBAXPAJ00@Z");
//};

//public: union real_point3d const c_editable_property_type<class c_particle_state_list, union real_point3d>::evaluate(class c_particle_state_list const *) const
//{
//    mangled_ppc("?evaluate@?$c_editable_property_type@Vc_particle_state_list@@Treal_point3d@@@@QBA?BTreal_point3d@@PBVc_particle_state_list@@@Z");
//};

//protected: union real_point3d const c_editable_property_type_base<union real_point3d>::interpolate(float) const
//{
//    mangled_ppc("?interpolate@?$c_editable_property_type_base@Treal_point3d@@@@IBA?BTreal_point3d@@M@Z");
//};

//public: union vector3d const c_editable_property_type<class c_particle_state_list, union vector3d>::evaluate(class c_particle_state_list const *) const
//{
//    mangled_ppc("?evaluate@?$c_editable_property_type@Vc_particle_state_list@@Tvector3d@@@@QBA?BTvector3d@@PBVc_particle_state_list@@@Z");
//};

//protected: union vector3d const c_editable_property_type_base<union vector3d>::interpolate(float) const
//{
//    mangled_ppc("?interpolate@?$c_editable_property_type_base@Tvector3d@@@@IBA?BTvector3d@@M@Z");
//};

//public: static bool c_editable_property_base::property_value_is_initialized<union real_point3d>(union real_point3d const *)
//{
//    mangled_ppc("??$property_value_is_initialized@Treal_point3d@@@c_editable_property_base@@SA_NPBTreal_point3d@@@Z");
//};

//public: static bool c_editable_property_base::property_value_is_initialized<union vector3d>(union vector3d const *)
//{
//    mangled_ppc("??$property_value_is_initialized@Tvector3d@@@c_editable_property_base@@SA_NPBTvector3d@@@Z");
//};

//void data_dump<class c_particle_emitter>(struct s_data_array const *, char const *, enum e_event_level)
//{
//    mangled_ppc("??$data_dump@Vc_particle_emitter@@@@YAXPBUs_data_array@@PBDW4e_event_level@@@Z");
//};

//void data_dump<class c_particle_emitter>(struct s_data_array const *, char const *, enum e_event_level, bool)
//{
//    mangled_ppc("??$data_dump@Vc_particle_emitter@@@@YAXPBUs_data_array@@PBDW4e_event_level@@_N@Z");
//};

//public: void c_data_iterator<class c_particle_emitter>::begin(struct s_data_array *)
//{
//    mangled_ppc("?begin@?$c_data_iterator@Vc_particle_emitter@@@@QAAXPAUs_data_array@@@Z");
//};

//public: bool c_data_iterator<class c_particle_emitter>::next(void)
//{
//    mangled_ppc("?next@?$c_data_iterator@Vc_particle_emitter@@@@QAA_NXZ");
//};

//public: class c_particle_emitter * c_data_iterator<class c_particle_emitter>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Vc_particle_emitter@@@@QBAPAVc_particle_emitter@@XZ");
//};

//union vector3d * subtract_vector3d(union vector3d const *, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?subtract_vector3d@@YAPATvector3d@@PBT1@0PAT1@@Z");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_emitter_data_array_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_emitter_data_array_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_emitter_data_array_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_emitter_data_array_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_emitter_data_array_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_emitter_data_array_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_particle_emitter_data_array_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_particle_emitter_data_array_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_particle_emitter_data_array_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_particle_emitter_data_array_allocator@@YAXXZ");
//};

