/* ---------- headers */

#include "omaha\physics\impacts.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_impact_data_allocator::*)(void *)> g_impact_data_allocator; // "?g_impact_data_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_impact_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_impact_array_data_allocator::*)(void *)> g_impact_array_data_allocator; // "?g_impact_array_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_array_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_impact_globals_allocator::*)(void *)> g_impact_globals_allocator; // "?g_impact_globals_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_globals_allocator@@YAXPAX@Z@@A"
// struct s_data_array *g_impact_data; // "?g_impact_data@@3PAUs_data_array@@A"
// struct s_data_array *g_impact_array_data; // "?g_impact_array_data@@3PAUs_data_array@@A"
// struct s_impact_globals *g_impact_globals; // "?g_impact_globals@@3PAUs_impact_globals@@A"

// void __tls_set_g_impact_data_allocator(void *);
// void __tls_set_g_impact_array_data_allocator(void *);
// void __tls_set_g_impact_globals_allocator(void *);
// void impacts_initialize_global_allocations(void);
// void impacts_dispose_global_allocations(void);
// void impacts_initialize(void);
// void impacts_dispose(void);
// void impacts_initialize_for_new_map(void);
// void impacts_dispose_from_old_map(void);
// void impacts_disconnect_from_physics(void);
// void impacts_reconnect_to_physics(void);
// void impacts_load_from_game_state(void);
// bool impacts_disconnected_from_physics(void);
// void impacts_notify_object_deleted(long);
// void impacts_flush(void);
// long impact_new(struct c_impact::s_contact_description const *, enum c_impact::e_states);
// void impact_delete(long);
// public: void c_havok_component::set_constraint_impact_datum_index(long, long);
// public: void c_havok_component::remove_impact(long);
// public: void c_havok_component::c_constraint::set_constraint_impact_datum_index(long);
// void impact_array_add_impact(long, long);
// void impact_array_remove_impact(long, long);
// long impact_array_new(long);
// void impact_array_delete(long);
// long impact_array_impact_count(long);
// long impact_array_impact_get(long, long);
// void impacts_update(void);
// void impacts_create_constraint_impacts_for_havok_component(long);
// void impacts_create_orphaned_impacts(void);
// public: long c_object_iterator_base::get_absolute_index(void) const;
// void impacts_create_orphaned_impact(long, class c_havok_contact_point *, bool);
// void impacts_merge(void);
// void impacts_quicksort(void);
// bool impacts_score_compare(long, long, void const *);
// long impacts_get_highest_score_datum_index(void);
// void impacts_pop_highest_score_datum_index(void);
// long impacts_get_object_water_impact_index(long);
// long impacts_get_maximum_impact_count(void);
// void impacts_render_debug(void);
// bool impact_has_valid_reference_count(long);
// public: bool c_impact::includes_point(struct c_impact::s_contact_description const *, bool);
// public: static bool c_impact::included_in_impact_material(long, class c_global_material_type, class c_global_material_type, class c_global_material_type, class c_global_material_type);
// public: static bool c_impact::included_in_impact_type(long, long, long, long, class c_global_material_type, class c_global_material_type, class c_global_material_type, class c_global_material_type, long, long, bool, bool, long, long);
// public: static bool c_impact::included_in_impact_space(union real_point3d const *, union vector3d const *, union real_point3d const *, union vector3d const *, float *);
// public: static bool c_impact::passes_the_character_test(long, long);
// public: enum c_impact::e_type c_impact::get_type(void) const;
// public: long c_impact::get_reference_count(void) const;
// public: void c_impact::add_reference(long);
// public: void c_impact::remove_reference(long, bool);
// public: class c_global_material_type c_impact::get_global_material_index_a(void) const;
// public: class c_global_material_type c_impact::get_global_material_index_b(void) const;
// public: enum c_impact::e_states c_impact::get_state(void) const;
// public: long c_impact::get_impact_identifier(void) const;
// public: bool c_impact::get_sound_only(void) const;
// public: class c_opaque_data<struct s_water_effects_state, 4100, 4> * c_impact::get_water_effects(void);
// private: void c_impact::calculate_impact_matrix(long, struct matrix3x3*);
// private: void c_impact::calculate_rigid_body_indexes(long, long *, long *);
// public: void c_impact::calculate_effect_parameters(long, long, long, union real_point3d *, union vector3d *, union vector3d *, union vector3d *, float *, float *, bool);
// public: bool c_impact::is_between_pair_of_dynamic_rigid_bodies(void) const;
// private: void c_impact::update_rigid_body_space_positions(union real_point3d const *, long, long);
// private: static bool c_impact::is_b_dominant_body(long, long);
// private: void c_impact::get_material_effects(union real_point3d const *, class c_global_material_type, class c_global_material_type, enum c_impact::e_states, struct s_material_effects_result *);
// private: static void c_impact::get_material_effects(long, long, union vector3d const *, enum e_sweetener_size, bool, union real_point3d const *, class c_global_material_type, class c_global_material_type, enum c_impact::e_states, struct s_material_effects_result *);
// private: bool c_impact::currently_playing_looping_sound(long, long);
// public: void c_impact::update(long);
// public: void c_impact::update_looping_sound_position(void);
// public: void c_impact::update_state(long, long, long);
// enum e_impact_sound_scale_type get_impact_sound_scale_type(long, long, long);
// float get_impact_maximum_collision_magnitude(enum e_impact_sound_scale_type);
// float get_impact_minimum_collision_magnitude(enum e_impact_sound_scale_type);
// float get_impact_minimum_collision_pre_simulation_linear_velocity_magnitude(enum e_impact_sound_scale_type);
// float get_impact_minimum_collision_pre_simulation_angular_velocity_magnitude(enum e_impact_sound_scale_type);
// public: void c_impact::queue_collision(float);
// public: void c_impact::update_effects(long, long, long);
// public: static void c_impact::calculate_water_surface_vector(union real_point3d *, union vector3d *);
// public: static bool c_impact::can_impulse_state_interupt_looping_state(long, float, long, float);
// private: void c_impact::halt_managed_effects(bool, bool);
// public: void c_impact::update_score(void);
// public: bool c_impact::is_managing_effect(void) const;
// public: bool c_impact::recently_played_impulse_effect(void) const;
// public: void c_impact::update_looping_sound(struct s_sound_location *, float *) const;
// public: void c_impact::disconnect_from_physics(void);
// public: void c_impact::update_water_impact(long, float, bool);
// public: void c_impact::update_vehicle_impact(long, struct c_impact::s_contact_description const *, union vector3d const *, float, bool);
// public: void c_impact::update_vehicle_impact_sound_only(long);
// public: void c_impact::render_debug(long);
// public: union real_point3d const * c_impact::get_world_space_position(void) const;
// public: union vector3d const * c_impact::get_normal(void) const;
// public: float c_impact::get_score(void) const;
// private: void c_impact::get_world_space_position_interpolated(union real_point3d *) const;
// public: static float c_impact::calculate_score(union real_point3d const *, enum c_impact::e_states);
// private: static float c_impact::get_impact_state_score_scale(enum c_impact::e_states);
// public: static void c_impact::initialize_contact_description(struct c_impact::s_contact_description *, enum c_impact::e_type, bool, long, long, class c_global_material_type, long, long, class c_global_material_type, union real_point3d const *, union vector3d const *, long, struct s_physics_model_constraint_reference const *);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void c_object_iterator<struct object_datum>::begin_at_index(unsigned long, unsigned char, long);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>(void);
// void g_impact_data_allocator::`dynamic atexit destructor'(void);
// void g_impact_array_data_allocator::`dynamic atexit destructor'(void);
// void g_impact_globals_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_impact_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_impact_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_impact_array_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_impact_array_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_impact_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_impact_globals_allocator@@YAXPAX@Z");
//};

//void impacts_initialize_global_allocations(void)
//{
//    mangled_ppc("?impacts_initialize_global_allocations@@YAXXZ");
//};

//void impacts_dispose_global_allocations(void)
//{
//    mangled_ppc("?impacts_dispose_global_allocations@@YAXXZ");
//};

//void impacts_initialize(void)
//{
//    mangled_ppc("?impacts_initialize@@YAXXZ");
//};

//void impacts_dispose(void)
//{
//    mangled_ppc("?impacts_dispose@@YAXXZ");
//};

//void impacts_initialize_for_new_map(void)
//{
//    mangled_ppc("?impacts_initialize_for_new_map@@YAXXZ");
//};

//void impacts_dispose_from_old_map(void)
//{
//    mangled_ppc("?impacts_dispose_from_old_map@@YAXXZ");
//};

//void impacts_disconnect_from_physics(void)
//{
//    mangled_ppc("?impacts_disconnect_from_physics@@YAXXZ");
//};

//void impacts_reconnect_to_physics(void)
//{
//    mangled_ppc("?impacts_reconnect_to_physics@@YAXXZ");
//};

//void impacts_load_from_game_state(void)
//{
//    mangled_ppc("?impacts_load_from_game_state@@YAXXZ");
//};

//bool impacts_disconnected_from_physics(void)
//{
//    mangled_ppc("?impacts_disconnected_from_physics@@YA_NXZ");
//};

//void impacts_notify_object_deleted(long)
//{
//    mangled_ppc("?impacts_notify_object_deleted@@YAXJ@Z");
//};

//void impacts_flush(void)
//{
//    mangled_ppc("?impacts_flush@@YAXXZ");
//};

//long impact_new(struct c_impact::s_contact_description const *, enum c_impact::e_states)
//{
//    mangled_ppc("?impact_new@@YAJPBUs_contact_description@c_impact@@W4e_states@2@@Z");
//};

//void impact_delete(long)
//{
//    mangled_ppc("?impact_delete@@YAXJ@Z");
//};

//public: void c_havok_component::set_constraint_impact_datum_index(long, long)
//{
//    mangled_ppc("?set_constraint_impact_datum_index@c_havok_component@@QAAXJJ@Z");
//};

//public: void c_havok_component::remove_impact(long)
//{
//    mangled_ppc("?remove_impact@c_havok_component@@QAAXJ@Z");
//};

//public: void c_havok_component::c_constraint::set_constraint_impact_datum_index(long)
//{
//    mangled_ppc("?set_constraint_impact_datum_index@c_constraint@c_havok_component@@QAAXJ@Z");
//};

//void impact_array_add_impact(long, long)
//{
//    mangled_ppc("?impact_array_add_impact@@YAXJJ@Z");
//};

//void impact_array_remove_impact(long, long)
//{
//    mangled_ppc("?impact_array_remove_impact@@YAXJJ@Z");
//};

//long impact_array_new(long)
//{
//    mangled_ppc("?impact_array_new@@YAJJ@Z");
//};

//void impact_array_delete(long)
//{
//    mangled_ppc("?impact_array_delete@@YAXJ@Z");
//};

//long impact_array_impact_count(long)
//{
//    mangled_ppc("?impact_array_impact_count@@YAJJ@Z");
//};

//long impact_array_impact_get(long, long)
//{
//    mangled_ppc("?impact_array_impact_get@@YAJJJ@Z");
//};

//void impacts_update(void)
//{
//    mangled_ppc("?impacts_update@@YAXXZ");
//};

//void impacts_create_constraint_impacts_for_havok_component(long)
//{
//    mangled_ppc("?impacts_create_constraint_impacts_for_havok_component@@YAXJ@Z");
//};

//void impacts_create_orphaned_impacts(void)
//{
//    mangled_ppc("?impacts_create_orphaned_impacts@@YAXXZ");
//};

//public: long c_object_iterator_base::get_absolute_index(void) const
//{
//    mangled_ppc("?get_absolute_index@c_object_iterator_base@@QBAJXZ");
//};

//void impacts_create_orphaned_impact(long, class c_havok_contact_point *, bool)
//{
//    mangled_ppc("?impacts_create_orphaned_impact@@YAXJPAVc_havok_contact_point@@_N@Z");
//};

//void impacts_merge(void)
//{
//    mangled_ppc("?impacts_merge@@YAXXZ");
//};

//void impacts_quicksort(void)
//{
//    mangled_ppc("?impacts_quicksort@@YAXXZ");
//};

//bool impacts_score_compare(long, long, void const *)
//{
//    mangled_ppc("?impacts_score_compare@@YA_NJJPBX@Z");
//};

//long impacts_get_highest_score_datum_index(void)
//{
//    mangled_ppc("?impacts_get_highest_score_datum_index@@YAJXZ");
//};

//void impacts_pop_highest_score_datum_index(void)
//{
//    mangled_ppc("?impacts_pop_highest_score_datum_index@@YAXXZ");
//};

//long impacts_get_object_water_impact_index(long)
//{
//    mangled_ppc("?impacts_get_object_water_impact_index@@YAJJ@Z");
//};

//long impacts_get_maximum_impact_count(void)
//{
//    mangled_ppc("?impacts_get_maximum_impact_count@@YAJXZ");
//};

//void impacts_render_debug(void)
//{
//    mangled_ppc("?impacts_render_debug@@YAXXZ");
//};

//bool impact_has_valid_reference_count(long)
//{
//    mangled_ppc("?impact_has_valid_reference_count@@YA_NJ@Z");
//};

//public: bool c_impact::includes_point(struct c_impact::s_contact_description const *, bool)
//{
//    mangled_ppc("?includes_point@c_impact@@QAA_NPBUs_contact_description@1@_N@Z");
//};

//public: static bool c_impact::included_in_impact_material(long, class c_global_material_type, class c_global_material_type, class c_global_material_type, class c_global_material_type)
//{
//    mangled_ppc("?included_in_impact_material@c_impact@@SA_NJVc_global_material_type@@000@Z");
//};

//public: static bool c_impact::included_in_impact_type(long, long, long, long, class c_global_material_type, class c_global_material_type, class c_global_material_type, class c_global_material_type, long, long, bool, bool, long, long)
//{
//    mangled_ppc("?included_in_impact_type@c_impact@@SA_NJJJJVc_global_material_type@@000JJ_N1JJ@Z");
//};

//public: static bool c_impact::included_in_impact_space(union real_point3d const *, union vector3d const *, union real_point3d const *, union vector3d const *, float *)
//{
//    mangled_ppc("?included_in_impact_space@c_impact@@SA_NPBTreal_point3d@@PBTvector3d@@01PAM@Z");
//};

//public: static bool c_impact::passes_the_character_test(long, long)
//{
//    mangled_ppc("?passes_the_character_test@c_impact@@SA_NJJ@Z");
//};

//public: enum c_impact::e_type c_impact::get_type(void) const
//{
//    mangled_ppc("?get_type@c_impact@@QBA?AW4e_type@1@XZ");
//};

//public: long c_impact::get_reference_count(void) const
//{
//    mangled_ppc("?get_reference_count@c_impact@@QBAJXZ");
//};

//public: void c_impact::add_reference(long)
//{
//    mangled_ppc("?add_reference@c_impact@@QAAXJ@Z");
//};

//public: void c_impact::remove_reference(long, bool)
//{
//    mangled_ppc("?remove_reference@c_impact@@QAAXJ_N@Z");
//};

//public: class c_global_material_type c_impact::get_global_material_index_a(void) const
//{
//    mangled_ppc("?get_global_material_index_a@c_impact@@QBA?AVc_global_material_type@@XZ");
//};

//public: class c_global_material_type c_impact::get_global_material_index_b(void) const
//{
//    mangled_ppc("?get_global_material_index_b@c_impact@@QBA?AVc_global_material_type@@XZ");
//};

//public: enum c_impact::e_states c_impact::get_state(void) const
//{
//    mangled_ppc("?get_state@c_impact@@QBA?AW4e_states@1@XZ");
//};

//public: long c_impact::get_impact_identifier(void) const
//{
//    mangled_ppc("?get_impact_identifier@c_impact@@QBAJXZ");
//};

//public: bool c_impact::get_sound_only(void) const
//{
//    mangled_ppc("?get_sound_only@c_impact@@QBA_NXZ");
//};

//public: class c_opaque_data<struct s_water_effects_state, 4100, 4> * c_impact::get_water_effects(void)
//{
//    mangled_ppc("?get_water_effects@c_impact@@QAAPAV?$c_opaque_data@Us_water_effects_state@@$0BAAE@$03@@XZ");
//};

//private: void c_impact::calculate_impact_matrix(long, struct matrix3x3*)
//{
//    mangled_ppc("?calculate_impact_matrix@c_impact@@AAAXJPAUmatrix3x3@@@Z");
//};

//private: void c_impact::calculate_rigid_body_indexes(long, long *, long *)
//{
//    mangled_ppc("?calculate_rigid_body_indexes@c_impact@@AAAXJPAJ0@Z");
//};

//public: void c_impact::calculate_effect_parameters(long, long, long, union real_point3d *, union vector3d *, union vector3d *, union vector3d *, float *, float *, bool)
//{
//    mangled_ppc("?calculate_effect_parameters@c_impact@@QAAXJJJPATreal_point3d@@PATvector3d@@11PAM2_N@Z");
//};

//public: bool c_impact::is_between_pair_of_dynamic_rigid_bodies(void) const
//{
//    mangled_ppc("?is_between_pair_of_dynamic_rigid_bodies@c_impact@@QBA_NXZ");
//};

//private: void c_impact::update_rigid_body_space_positions(union real_point3d const *, long, long)
//{
//    mangled_ppc("?update_rigid_body_space_positions@c_impact@@AAAXPBTreal_point3d@@JJ@Z");
//};

//private: static bool c_impact::is_b_dominant_body(long, long)
//{
//    mangled_ppc("?is_b_dominant_body@c_impact@@CA_NJJ@Z");
//};

//private: void c_impact::get_material_effects(union real_point3d const *, class c_global_material_type, class c_global_material_type, enum c_impact::e_states, struct s_material_effects_result *)
//{
//    mangled_ppc("?get_material_effects@c_impact@@AAAXPBTreal_point3d@@Vc_global_material_type@@1W4e_states@1@PAUs_material_effects_result@@@Z");
//};

//private: static void c_impact::get_material_effects(long, long, union vector3d const *, enum e_sweetener_size, bool, union real_point3d const *, class c_global_material_type, class c_global_material_type, enum c_impact::e_states, struct s_material_effects_result *)
//{
//    mangled_ppc("?get_material_effects@c_impact@@CAXJJPBTvector3d@@W4e_sweetener_size@@_NPBTreal_point3d@@Vc_global_material_type@@4W4e_states@1@PAUs_material_effects_result@@@Z");
//};

//private: bool c_impact::currently_playing_looping_sound(long, long)
//{
//    mangled_ppc("?currently_playing_looping_sound@c_impact@@AAA_NJJ@Z");
//};

//public: void c_impact::update(long)
//{
//    mangled_ppc("?update@c_impact@@QAAXJ@Z");
//};

//public: void c_impact::update_looping_sound_position(void)
//{
//    mangled_ppc("?update_looping_sound_position@c_impact@@QAAXXZ");
//};

//public: void c_impact::update_state(long, long, long)
//{
//    mangled_ppc("?update_state@c_impact@@QAAXJJJ@Z");
//};

//enum e_impact_sound_scale_type get_impact_sound_scale_type(long, long, long)
//{
//    mangled_ppc("?get_impact_sound_scale_type@@YA?AW4e_impact_sound_scale_type@@JJJ@Z");
//};

//float get_impact_maximum_collision_magnitude(enum e_impact_sound_scale_type)
//{
//    mangled_ppc("?get_impact_maximum_collision_magnitude@@YAMW4e_impact_sound_scale_type@@@Z");
//};

//float get_impact_minimum_collision_magnitude(enum e_impact_sound_scale_type)
//{
//    mangled_ppc("?get_impact_minimum_collision_magnitude@@YAMW4e_impact_sound_scale_type@@@Z");
//};

//float get_impact_minimum_collision_pre_simulation_linear_velocity_magnitude(enum e_impact_sound_scale_type)
//{
//    mangled_ppc("?get_impact_minimum_collision_pre_simulation_linear_velocity_magnitude@@YAMW4e_impact_sound_scale_type@@@Z");
//};

//float get_impact_minimum_collision_pre_simulation_angular_velocity_magnitude(enum e_impact_sound_scale_type)
//{
//    mangled_ppc("?get_impact_minimum_collision_pre_simulation_angular_velocity_magnitude@@YAMW4e_impact_sound_scale_type@@@Z");
//};

//public: void c_impact::queue_collision(float)
//{
//    mangled_ppc("?queue_collision@c_impact@@QAAXM@Z");
//};

//public: void c_impact::update_effects(long, long, long)
//{
//    mangled_ppc("?update_effects@c_impact@@QAAXJJJ@Z");
//};

//public: static void c_impact::calculate_water_surface_vector(union real_point3d *, union vector3d *)
//{
//    mangled_ppc("?calculate_water_surface_vector@c_impact@@SAXPATreal_point3d@@PATvector3d@@@Z");
//};

//public: static bool c_impact::can_impulse_state_interupt_looping_state(long, float, long, float)
//{
//    mangled_ppc("?can_impulse_state_interupt_looping_state@c_impact@@SA_NJMJM@Z");
//};

//private: void c_impact::halt_managed_effects(bool, bool)
//{
//    mangled_ppc("?halt_managed_effects@c_impact@@AAAX_N0@Z");
//};

//public: void c_impact::update_score(void)
//{
//    mangled_ppc("?update_score@c_impact@@QAAXXZ");
//};

//public: bool c_impact::is_managing_effect(void) const
//{
//    mangled_ppc("?is_managing_effect@c_impact@@QBA_NXZ");
//};

//public: bool c_impact::recently_played_impulse_effect(void) const
//{
//    mangled_ppc("?recently_played_impulse_effect@c_impact@@QBA_NXZ");
//};

//public: void c_impact::update_looping_sound(struct s_sound_location *, float *) const
//{
//    mangled_ppc("?update_looping_sound@c_impact@@QBAXPAUs_sound_location@@PAM@Z");
//};

//public: void c_impact::disconnect_from_physics(void)
//{
//    mangled_ppc("?disconnect_from_physics@c_impact@@QAAXXZ");
//};

//public: void c_impact::update_water_impact(long, float, bool)
//{
//    mangled_ppc("?update_water_impact@c_impact@@QAAXJM_N@Z");
//};

//public: void c_impact::update_vehicle_impact(long, struct c_impact::s_contact_description const *, union vector3d const *, float, bool)
//{
//    mangled_ppc("?update_vehicle_impact@c_impact@@QAAXJPBUs_contact_description@1@PBTvector3d@@M_N@Z");
//};

//public: void c_impact::update_vehicle_impact_sound_only(long)
//{
//    mangled_ppc("?update_vehicle_impact_sound_only@c_impact@@QAAXJ@Z");
//};

//public: void c_impact::render_debug(long)
//{
//    mangled_ppc("?render_debug@c_impact@@QAAXJ@Z");
//};

//public: union real_point3d const * c_impact::get_world_space_position(void) const
//{
//    mangled_ppc("?get_world_space_position@c_impact@@QBAPBTreal_point3d@@XZ");
//};

//public: union vector3d const * c_impact::get_normal(void) const
//{
//    mangled_ppc("?get_normal@c_impact@@QBAPBTvector3d@@XZ");
//};

//public: float c_impact::get_score(void) const
//{
//    mangled_ppc("?get_score@c_impact@@QBAMXZ");
//};

//private: void c_impact::get_world_space_position_interpolated(union real_point3d *) const
//{
//    mangled_ppc("?get_world_space_position_interpolated@c_impact@@ABAXPATreal_point3d@@@Z");
//};

//public: static float c_impact::calculate_score(union real_point3d const *, enum c_impact::e_states)
//{
//    mangled_ppc("?calculate_score@c_impact@@SAMPBTreal_point3d@@W4e_states@1@@Z");
//};

//private: static float c_impact::get_impact_state_score_scale(enum c_impact::e_states)
//{
//    mangled_ppc("?get_impact_state_score_scale@c_impact@@CAMW4e_states@1@@Z");
//};

//public: static void c_impact::initialize_contact_description(struct c_impact::s_contact_description *, enum c_impact::e_type, bool, long, long, class c_global_material_type, long, long, class c_global_material_type, union real_point3d const *, union vector3d const *, long, struct s_physics_model_constraint_reference const *)
//{
//    mangled_ppc("?initialize_contact_description@c_impact@@SAXPAUs_contact_description@1@W4e_type@1@_NJJVc_global_material_type@@JJ3PBTreal_point3d@@PBTvector3d@@JPBUs_physics_model_constraint_reference@@@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void c_object_iterator<struct object_datum>::begin_at_index(unsigned long, unsigned char, long)
//{
//    mangled_ppc("?begin_at_index@?$c_object_iterator@Uobject_datum@@@@QAAXKEJ@Z");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_impact_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_impact_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_impact_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_impact_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_impact_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_impact_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_array_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_array_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_array_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_array_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_array_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_array_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_impact_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_impact_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_array_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_array_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_impact_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_impact_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_impact_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_impact_data_allocator@@YAXXZ");
//};

//void g_impact_array_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_impact_array_data_allocator@@YAXXZ");
//};

//void g_impact_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_impact_globals_allocator@@YAXXZ");
//};

