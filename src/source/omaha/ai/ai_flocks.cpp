/* ---------- headers */

#include "omaha\ai\ai_flocks.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_838BAA90; // "except_record_838BAA90"
// except_record_838BB3A8; // "except_record_838BB3A8"
// except_record_838BBFB8; // "except_record_838BBFB8"
// except_record_838BD598; // "except_record_838BD598"
// except_record_838BE018; // "except_record_838BE018"
// except_record_838BE3F8; // "except_record_838BE3F8"
// except_record_838BEB20; // "except_record_838BEB20"
// except_record_838BF8F8; // "except_record_838BF8F8"
// except_record_838C0FE8; // "except_record_838C0FE8"
// except_record_838C3DC8; // "except_record_838C3DC8"
// except_record_838C50E0; // "except_record_838C50E0"
// except_record_838C5B40; // "except_record_838C5B40"
// except_record_838C72E8; // "except_record_838C72E8"
// except_record_838C85B8; // "except_record_838C85B8"
// except_record_838C8D08; // "except_record_838C8D08"
// except_record_838C9750; // "except_record_838C9750"
// struct s_tag_struct_definition flock_palette_block_struct_definition; // "?flock_palette_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_block_definition flock_palette_block; // "?flock_palette_block@@3Us_tag_block_definition@@A"
// struct s_tag_block_definition flock_instance_block; // "?flock_instance_block@@3Us_tag_block_definition@@A"
// struct s_tag_block_definition flock_block; // "?flock_block@@3Us_tag_block_definition@@A"
// struct s_tag_struct_definition flock_instance_block_struct_definition; // "?flock_instance_block_struct_definition@@3Us_tag_struct_definition@@A"
// struct s_tag_group flock_group; // "?flock_group@@3Us_tag_group@@A"
// bool g_flocks_disable_timeslicing; // "?g_flocks_disable_timeslicing@@3_NA"
// struct s_tag_group_legacy_vtable legacy_flock_vtable; // "?legacy_flock_vtable@@3Us_tag_group_legacy_vtable@@A"
// struct s_tag_group_stream_definition legacy_flock_stream_definition; // "?legacy_flock_stream_definition@@3Us_tag_group_stream_definition@@A"
// struct s_tag_group_sync_definition legacy_flock_xsync_declaration; // "?legacy_flock_xsync_declaration@@3Us_tag_group_sync_definition@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_flocks_data_allocator::*)(void *)> g_flocks_data_allocator; // "?g_flocks_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_flocks_data_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_boids_data_allocator::*)(void *)> g_boids_data_allocator; // "?g_boids_data_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_boids_data_allocator@@YAXPAX@Z@@A"
// class c_legacy_tag_group_vtable_shim legacy_flock_vtable_shim; // "?legacy_flock_vtable_shim@@3Vc_legacy_tag_group_vtable_shim@@A"
// struct s_data_array *flocks_data; // "?flocks_data@@3PAUs_data_array@@A"
// struct s_data_array *boids_data; // "?boids_data@@3PAUs_data_array@@A"

// void __tls_set_g_flocks_data_allocator(void *);
// void __tls_set_g_boids_data_allocator(void *);
// void ai_handle_flock_deletion(unsigned long const *);
// void flocks_initialize(void);
// void flocks_initialize_for_new_map(void);
// void flocks_create_for_new_map(void);
// void flocks_dispose_from_old_map(void);
// void flocks_initialize_for_new_structure_bsp(unsigned long);
// void flocks_dispose_from_old_structure_bsp(unsigned long);
// void flock_render(struct s_flock_definition const *);
// bool flock_place(long);
// long flock_new(short, long);
// void flock_boid_state_set_destination_index(long, struct boid_state *, short);
// void boid_state_set_front_penetration_distance(struct boid_state *, float);
// void flock_delete(long, bool);
// bool flock_is_big_battle_squad(long);
// void flocks_update(void);
// void flock_set_spewing(struct flock_datum *, struct s_flock_instance *, bool);
// short flock_choose_source(struct flock_datum *, struct s_flock_instance const *);
// void flock_update(long, bool);
// void boid_state_delete_boid(struct boid_state *);
// void boid_state_set_inactive_ticks(struct boid_state *, short);
// void boid_state_set_target_update_ticks(struct boid_state *, short);
// long flock_create_creature(long, short);
// void boid_state_initialize(long, struct boid_state *, short);
// void boid_state_clear_target(struct boid_state *);
// void boid_state_set_want_to_move_ticks(struct boid_state *, short);
// void boid_state_set_source_index(struct boid_state *, short);
// void boid_state_set_constant_scale(struct boid_state *, float);
// void flock_compute_new_boid_transform(struct s_flock_instance const *, struct s_flock_source const *, bool, union real_point3d *, union vector3d *, union vector3d *, float *);
// long flock_create_big_battle_unit(long, short);
// void boid_state_set_dynamic_scale(struct boid_state *, float);
// void boid_state_set_orientation(struct boid_state const *, union vector3d const *, union vector3d const *);
// short flock_chose_random_destination(long);
// void flock_delete_big_battle_boid(long);
// bool flock_add_creature(long, long);
// void flock_add_boid_datum(long, long, short);
// void boid_datum_set_angular_velocity(struct s_boid_datum *, float, union vector3d const *);
// bool flock_remove_boid_datum(long, long);
// bool flock_update_activation_status(long, bool);
// void flock_update_bounding_volumes(long, bool);
// bool boid_state_get_bounding_sphere_position(struct boid_state const *, union real_point3d *);
// float boid_state_get_radius(struct boid_state const *);
// public: flock_boid_state_iterator::flock_boid_state_iterator(void);
// void flock_update_danger(long, bool);
// void flock_update_destroy(long);
// void flock_kill_big_battle_boid(long);
// bool boid_state_get_position(struct boid_state const *, union real_point3d *);
// bool boid_state_get_orientation(struct boid_state const *, union vector3d *, union vector3d *);
// struct s_creature_definition_internal * flock_get_creature_definition(long);
// void boid_update_target(long, struct boid_state *);
// bool boid_state_has_target(struct boid_state const *);
// void boid_state_set_creature_target(struct boid_state *, long);
// void boid_state_set_boid_datum_target(struct boid_state *, long);
// void boid_state_set_target_shooting_ticks(struct boid_state *, short);
// void flock_mark_modified(long);
// void boundary_force_bounding_volume(struct s_flock_instance const *, union real_point3d *, float *, union vector3d *, bool, bool *);
// void boid_update(long, struct boid_state *, long, float);
// bool boid_state_get_target_position(struct boid_state const *, union real_point3d *);
// bool boid_state_set_position(struct boid_state const *, union real_point3d const *);
// bool boid_state_get_velocity(struct boid_state const *, union vector3d *);
// bool boid_state_is_targeted_by_actor(struct boid_state const *);
// void boid_state_set_targeted_by_actor(struct boid_state const *, bool);
// void flock_control_ground_big_battle_boid(long, struct s_creature_control_data *, float);
// bool boid_state_set_velocity(struct boid_state const *, union vector3d const *);
// void boid_datum_get_angular_velocity(struct s_boid_datum const *, float, union vector3d *);
// void flock_control_set_boid_interpolation(struct boid_state *, float, bool, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *);
// void boid_state_set_interpolants(struct boid_state *, union vector3d const *, union vector3d const *, struct real32_quaternion const *);
// void boid_state_set_interpolated_position(struct boid_state *, union real_point3d const *);
// void boid_state_set_interpolated_orientation(struct boid_state const *, union vector3d const *, union vector3d const *);
// void boid_state_snap_to_ground(struct boid_state *, union real_point3d *, union vector3d *, union vector3d *);
// void flock_control_directional_flying_big_battle_boid(long, struct s_creature_control_data *, float);
// void flock_control_non_directional_flying_big_battle_boid(long, struct s_creature_control_data *, float);
// void accumulate_danger_vector(struct flock_datum const *, struct s_flock_instance const *, struct s_flock_definition const *, struct boid_state const *, union real_point3d const *, float *, union vector3d *, bool, float *);
// void accumulate_danger_from_object(bool, long, float, union real_point3d const *, union vector3d *, float *);
// void flock_get_danger_radii(struct flock_datum const *, struct s_flock_definition const *, float *, float *, float *);
// void boid_update_scale(long, struct boid_state *);
// float boid_state_get_constant_scale(struct boid_state const *);
// void boid_update_destination(struct flock_datum const *, struct boid_state *, union real_point3d const *);
// float boid_state_get_front_penetration_distance(struct boid_state const *);
// bool boid_create_destination_vector(struct boid_state const *, struct s_flock_destination const *, struct s_flock_runtime_destination const *, union real_point3d const *, union vector3d *);
// float boid_state_get_front_edge_parameter(struct boid_state const *);
// void boid_control_shooting(struct s_flock_definition const *, struct boid_state *, long, float);
// void boid_update_effects_timers(struct s_creature_definition_internal const *, struct boid_state *, union vector3d const *);
// void boid_fire_cheap_weapon(struct s_creature_definition_internal const *, struct boid_state const *, union vector3d const *);
// void boid_interpolate(long, struct boid_state *, long, float);
// void flock_interpolate_big_battle_boid(long, long, float);
// void flock_handle_creature_death(long, long, short);
// bool flock_remove_creature(long, long);
// void flock_handle_creature_delete(long);
// void flocks_handle_weapon_detonation(union real_point3d const *);
// void flock_iterator_new(struct flock_iterator *);
// struct flock_datum * flock_iterator_next(struct flock_iterator *);
// void flock_creature_boid_iterator_new(long, struct flock_creature_boid_iterator *);
// struct creature_datum * flock_creature_boid_iterator_next(struct flock_creature_boid_iterator *);
// void flock_big_battle_boid_iterator_new(long, struct flock_big_battle_boid_iterator *);
// struct s_boid_datum * flock_big_battle_boid_iterator_next(struct flock_big_battle_boid_iterator *);
// void flock_boid_state_iterator_new(long, struct flock_boid_state_iterator *);
// struct boid_state * flock_boid_state_iterator_next(struct flock_boid_state_iterator *);
// short flock_instance_get_by_name(long);
// long flock_get_by_name(long);
// short flock_destination_get_by_name(long, long);
// void flock_unperch(long);
// void debug_render_flocks(void);
// void debug_render_flock_danger(void);
// void debug_render_flock_boid_properties(void);
// void debug_render_flock_boid_destinations(void);
// bool boid_datum_vectors_are_valid(long, struct s_creature_control_data const *);
// void boid_datum_verify_vectors(long, struct s_creature_control_data const *, char const *);
// public: struct flock_datum * c_data_iterator<struct flock_datum>::get_datum(void) const;
// public: c_static_stack<union real_point3d, 32>::c_static_stack<union real_point3d, 32>(void);
// public: bool c_flags_no_init<enum e_flock_source_flags, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum e_flock_source_flags) const;
// public: bool c_flags_no_init<enum e_flock_instance_flags, unsigned short, 8, struct s_default_enum_string_resolver>::test(enum e_flock_instance_flags) const;
// public: void c_flags_no_init<enum e_boid_state_flags, unsigned char, 7, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_boid_state_flags, unsigned char, 7, struct s_default_enum_string_resolver>::test(enum e_boid_state_flags) const;
// public: void c_flags_no_init<enum e_boid_state_flags, unsigned char, 7, struct s_default_enum_string_resolver>::set(enum e_boid_state_flags, bool);
// public: bool c_flags_no_init<enum e_boid_datum_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_boid_datum_flags) const;
// public: void c_flags_no_init<enum e_boid_datum_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_boid_datum_flags, bool);
// public: bool c_flags_no_init<enum e_flock_runtime_destination_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_flock_runtime_destination_flags) const;
// public: void c_flags_no_init<enum e_flock_runtime_flags, unsigned short, 5, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_flock_runtime_flags, unsigned short, 5, struct s_default_enum_string_resolver>::test(enum e_flock_runtime_flags) const;
// public: void c_flags_no_init<enum e_flock_runtime_flags, unsigned short, 5, struct s_default_enum_string_resolver>::set(enum e_flock_runtime_flags, bool);
// public: void c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum e_boid_state_iterator_flags) const;
// public: void c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum e_boid_state_iterator_flags, bool);
// public: c_flags<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::c_flags<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_creature_big_battle_definition_flags, unsigned long, 3, struct s_default_enum_string_resolver>::test(enum e_creature_big_battle_definition_flags) const;
// public: static bool c_flags_no_init<enum e_flock_source_flags, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_flock_source_flags);
// private: static unsigned long c_flags_no_init<enum e_flock_source_flags, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_flock_source_flags);
// public: static bool c_flags_no_init<enum e_flock_instance_flags, unsigned short, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_flock_instance_flags);
// private: static unsigned short c_flags_no_init<enum e_flock_instance_flags, unsigned short, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_flock_instance_flags);
// public: static bool c_flags_no_init<enum e_boid_state_flags, unsigned char, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_boid_state_flags);
// private: static unsigned char c_flags_no_init<enum e_boid_state_flags, unsigned char, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_boid_state_flags);
// public: static bool c_flags_no_init<enum e_boid_datum_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_boid_datum_flags);
// private: static unsigned char c_flags_no_init<enum e_boid_datum_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_boid_datum_flags);
// public: static bool c_flags_no_init<enum e_flock_runtime_destination_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_flock_runtime_destination_flags);
// private: static unsigned short c_flags_no_init<enum e_flock_runtime_destination_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_flock_runtime_destination_flags);
// public: static bool c_flags_no_init<enum e_flock_runtime_flags, unsigned short, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_flock_runtime_flags);
// private: static unsigned short c_flags_no_init<enum e_flock_runtime_flags, unsigned short, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_flock_runtime_flags);
// public: bool c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_boid_state_iterator_flags);
// private: static unsigned short c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_boid_state_iterator_flags);
// public: static bool c_flags_no_init<enum e_creature_big_battle_definition_flags, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_creature_big_battle_definition_flags);
// private: static unsigned long c_flags_no_init<enum e_creature_big_battle_definition_flags, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_creature_big_battle_definition_flags);
// private: static unsigned short c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_boid_state_iterator_flags);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>(void);
// void g_flocks_data_allocator::`dynamic atexit destructor'(void);
// void g_boids_data_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_flocks_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_flocks_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_boids_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_boids_data_allocator@@YAXPAX@Z");
//};

//void ai_handle_flock_deletion(unsigned long const *)
//{
//    mangled_ppc("?ai_handle_flock_deletion@@YAXPBK@Z");
//};

//void flocks_initialize(void)
//{
//    mangled_ppc("?flocks_initialize@@YAXXZ");
//};

//void flocks_initialize_for_new_map(void)
//{
//    mangled_ppc("?flocks_initialize_for_new_map@@YAXXZ");
//};

//void flocks_create_for_new_map(void)
//{
//    mangled_ppc("?flocks_create_for_new_map@@YAXXZ");
//};

//void flocks_dispose_from_old_map(void)
//{
//    mangled_ppc("?flocks_dispose_from_old_map@@YAXXZ");
//};

//void flocks_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?flocks_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void flocks_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?flocks_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//void flock_render(struct s_flock_definition const *)
//{
//    mangled_ppc("?flock_render@@YAXPBUs_flock_definition@@@Z");
//};

//bool flock_place(long)
//{
//    mangled_ppc("?flock_place@@YA_NJ@Z");
//};

//long flock_new(short, long)
//{
//    mangled_ppc("?flock_new@@YAJFJ@Z");
//};

//void flock_boid_state_set_destination_index(long, struct boid_state *, short)
//{
//    mangled_ppc("?flock_boid_state_set_destination_index@@YAXJPAUboid_state@@F@Z");
//};

//void boid_state_set_front_penetration_distance(struct boid_state *, float)
//{
//    mangled_ppc("?boid_state_set_front_penetration_distance@@YAXPAUboid_state@@M@Z");
//};

//void flock_delete(long, bool)
//{
//    mangled_ppc("?flock_delete@@YAXJ_N@Z");
//};

//bool flock_is_big_battle_squad(long)
//{
//    mangled_ppc("?flock_is_big_battle_squad@@YA_NJ@Z");
//};

//void flocks_update(void)
//{
//    mangled_ppc("?flocks_update@@YAXXZ");
//};

//void flock_set_spewing(struct flock_datum *, struct s_flock_instance *, bool)
//{
//    mangled_ppc("?flock_set_spewing@@YAXPAUflock_datum@@PAUs_flock_instance@@_N@Z");
//};

//short flock_choose_source(struct flock_datum *, struct s_flock_instance const *)
//{
//    mangled_ppc("?flock_choose_source@@YAFPAUflock_datum@@PBUs_flock_instance@@@Z");
//};

//void flock_update(long, bool)
//{
//    mangled_ppc("?flock_update@@YAXJ_N@Z");
//};

//void boid_state_delete_boid(struct boid_state *)
//{
//    mangled_ppc("?boid_state_delete_boid@@YAXPAUboid_state@@@Z");
//};

//void boid_state_set_inactive_ticks(struct boid_state *, short)
//{
//    mangled_ppc("?boid_state_set_inactive_ticks@@YAXPAUboid_state@@F@Z");
//};

//void boid_state_set_target_update_ticks(struct boid_state *, short)
//{
//    mangled_ppc("?boid_state_set_target_update_ticks@@YAXPAUboid_state@@F@Z");
//};

//long flock_create_creature(long, short)
//{
//    mangled_ppc("?flock_create_creature@@YAJJF@Z");
//};

//void boid_state_initialize(long, struct boid_state *, short)
//{
//    mangled_ppc("?boid_state_initialize@@YAXJPAUboid_state@@F@Z");
//};

//void boid_state_clear_target(struct boid_state *)
//{
//    mangled_ppc("?boid_state_clear_target@@YAXPAUboid_state@@@Z");
//};

//void boid_state_set_want_to_move_ticks(struct boid_state *, short)
//{
//    mangled_ppc("?boid_state_set_want_to_move_ticks@@YAXPAUboid_state@@F@Z");
//};

//void boid_state_set_source_index(struct boid_state *, short)
//{
//    mangled_ppc("?boid_state_set_source_index@@YAXPAUboid_state@@F@Z");
//};

//void boid_state_set_constant_scale(struct boid_state *, float)
//{
//    mangled_ppc("?boid_state_set_constant_scale@@YAXPAUboid_state@@M@Z");
//};

//void flock_compute_new_boid_transform(struct s_flock_instance const *, struct s_flock_source const *, bool, union real_point3d *, union vector3d *, union vector3d *, float *)
//{
//    mangled_ppc("?flock_compute_new_boid_transform@@YAXPBUs_flock_instance@@PBUs_flock_source@@_NPATreal_point3d@@PATvector3d@@4PAM@Z");
//};

//long flock_create_big_battle_unit(long, short)
//{
//    mangled_ppc("?flock_create_big_battle_unit@@YAJJF@Z");
//};

//void boid_state_set_dynamic_scale(struct boid_state *, float)
//{
//    mangled_ppc("?boid_state_set_dynamic_scale@@YAXPAUboid_state@@M@Z");
//};

//void boid_state_set_orientation(struct boid_state const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?boid_state_set_orientation@@YAXPBUboid_state@@PBTvector3d@@1@Z");
//};

//short flock_chose_random_destination(long)
//{
//    mangled_ppc("?flock_chose_random_destination@@YAFJ@Z");
//};

//void flock_delete_big_battle_boid(long)
//{
//    mangled_ppc("?flock_delete_big_battle_boid@@YAXJ@Z");
//};

//bool flock_add_creature(long, long)
//{
//    mangled_ppc("?flock_add_creature@@YA_NJJ@Z");
//};

//void flock_add_boid_datum(long, long, short)
//{
//    mangled_ppc("?flock_add_boid_datum@@YAXJJF@Z");
//};

//void boid_datum_set_angular_velocity(struct s_boid_datum *, float, union vector3d const *)
//{
//    mangled_ppc("?boid_datum_set_angular_velocity@@YAXPAUs_boid_datum@@MPBTvector3d@@@Z");
//};

//bool flock_remove_boid_datum(long, long)
//{
//    mangled_ppc("?flock_remove_boid_datum@@YA_NJJ@Z");
//};

//bool flock_update_activation_status(long, bool)
//{
//    mangled_ppc("?flock_update_activation_status@@YA_NJ_N@Z");
//};

//void flock_update_bounding_volumes(long, bool)
//{
//    mangled_ppc("?flock_update_bounding_volumes@@YAXJ_N@Z");
//};

//bool boid_state_get_bounding_sphere_position(struct boid_state const *, union real_point3d *)
//{
//    mangled_ppc("?boid_state_get_bounding_sphere_position@@YA_NPBUboid_state@@PATreal_point3d@@@Z");
//};

//float boid_state_get_radius(struct boid_state const *)
//{
//    mangled_ppc("?boid_state_get_radius@@YAMPBUboid_state@@@Z");
//};

//public: flock_boid_state_iterator::flock_boid_state_iterator(void)
//{
//    mangled_ppc("??0flock_boid_state_iterator@@QAA@XZ");
//};

//void flock_update_danger(long, bool)
//{
//    mangled_ppc("?flock_update_danger@@YAXJ_N@Z");
//};

//void flock_update_destroy(long)
//{
//    mangled_ppc("?flock_update_destroy@@YAXJ@Z");
//};

//void flock_kill_big_battle_boid(long)
//{
//    mangled_ppc("?flock_kill_big_battle_boid@@YAXJ@Z");
//};

//bool boid_state_get_position(struct boid_state const *, union real_point3d *)
//{
//    mangled_ppc("?boid_state_get_position@@YA_NPBUboid_state@@PATreal_point3d@@@Z");
//};

//bool boid_state_get_orientation(struct boid_state const *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?boid_state_get_orientation@@YA_NPBUboid_state@@PATvector3d@@1@Z");
//};

//struct s_creature_definition_internal * flock_get_creature_definition(long)
//{
//    mangled_ppc("?flock_get_creature_definition@@YAPAUs_creature_definition_internal@@J@Z");
//};

//void boid_update_target(long, struct boid_state *)
//{
//    mangled_ppc("?boid_update_target@@YAXJPAUboid_state@@@Z");
//};

//bool boid_state_has_target(struct boid_state const *)
//{
//    mangled_ppc("?boid_state_has_target@@YA_NPBUboid_state@@@Z");
//};

//void boid_state_set_creature_target(struct boid_state *, long)
//{
//    mangled_ppc("?boid_state_set_creature_target@@YAXPAUboid_state@@J@Z");
//};

//void boid_state_set_boid_datum_target(struct boid_state *, long)
//{
//    mangled_ppc("?boid_state_set_boid_datum_target@@YAXPAUboid_state@@J@Z");
//};

//void boid_state_set_target_shooting_ticks(struct boid_state *, short)
//{
//    mangled_ppc("?boid_state_set_target_shooting_ticks@@YAXPAUboid_state@@F@Z");
//};

//void flock_mark_modified(long)
//{
//    mangled_ppc("?flock_mark_modified@@YAXJ@Z");
//};

//void boundary_force_bounding_volume(struct s_flock_instance const *, union real_point3d *, float *, union vector3d *, bool, bool *)
//{
//    mangled_ppc("?boundary_force_bounding_volume@@YAXPBUs_flock_instance@@PATreal_point3d@@PAMPATvector3d@@_NPA_N@Z");
//};

//void boid_update(long, struct boid_state *, long, float)
//{
//    mangled_ppc("?boid_update@@YAXJPAUboid_state@@JM@Z");
//};

//bool boid_state_get_target_position(struct boid_state const *, union real_point3d *)
//{
//    mangled_ppc("?boid_state_get_target_position@@YA_NPBUboid_state@@PATreal_point3d@@@Z");
//};

//bool boid_state_set_position(struct boid_state const *, union real_point3d const *)
//{
//    mangled_ppc("?boid_state_set_position@@YA_NPBUboid_state@@PBTreal_point3d@@@Z");
//};

//bool boid_state_get_velocity(struct boid_state const *, union vector3d *)
//{
//    mangled_ppc("?boid_state_get_velocity@@YA_NPBUboid_state@@PATvector3d@@@Z");
//};

//bool boid_state_is_targeted_by_actor(struct boid_state const *)
//{
//    mangled_ppc("?boid_state_is_targeted_by_actor@@YA_NPBUboid_state@@@Z");
//};

//void boid_state_set_targeted_by_actor(struct boid_state const *, bool)
//{
//    mangled_ppc("?boid_state_set_targeted_by_actor@@YAXPBUboid_state@@_N@Z");
//};

//void flock_control_ground_big_battle_boid(long, struct s_creature_control_data *, float)
//{
//    mangled_ppc("?flock_control_ground_big_battle_boid@@YAXJPAUs_creature_control_data@@M@Z");
//};

//bool boid_state_set_velocity(struct boid_state const *, union vector3d const *)
//{
//    mangled_ppc("?boid_state_set_velocity@@YA_NPBUboid_state@@PBTvector3d@@@Z");
//};

//void boid_datum_get_angular_velocity(struct s_boid_datum const *, float, union vector3d *)
//{
//    mangled_ppc("?boid_datum_get_angular_velocity@@YAXPBUs_boid_datum@@MPATvector3d@@@Z");
//};

//void flock_control_set_boid_interpolation(struct boid_state *, float, bool, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *, union real_point3d const *, union vector3d const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?flock_control_set_boid_interpolation@@YAXPAUboid_state@@M_NPBTreal_point3d@@PBTvector3d@@332333@Z");
//};

//void boid_state_set_interpolants(struct boid_state *, union vector3d const *, union vector3d const *, struct real32_quaternion const *)
//{
//    mangled_ppc("?boid_state_set_interpolants@@YAXPAUboid_state@@PBTvector3d@@1PBUreal32_quaternion@@@Z");
//};

//void boid_state_set_interpolated_position(struct boid_state *, union real_point3d const *)
//{
//    mangled_ppc("?boid_state_set_interpolated_position@@YAXPAUboid_state@@PBTreal_point3d@@@Z");
//};

//void boid_state_set_interpolated_orientation(struct boid_state const *, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?boid_state_set_interpolated_orientation@@YAXPBUboid_state@@PBTvector3d@@1@Z");
//};

//void boid_state_snap_to_ground(struct boid_state *, union real_point3d *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?boid_state_snap_to_ground@@YAXPAUboid_state@@PATreal_point3d@@PATvector3d@@2@Z");
//};

//void flock_control_directional_flying_big_battle_boid(long, struct s_creature_control_data *, float)
//{
//    mangled_ppc("?flock_control_directional_flying_big_battle_boid@@YAXJPAUs_creature_control_data@@M@Z");
//};

//void flock_control_non_directional_flying_big_battle_boid(long, struct s_creature_control_data *, float)
//{
//    mangled_ppc("?flock_control_non_directional_flying_big_battle_boid@@YAXJPAUs_creature_control_data@@M@Z");
//};

//void accumulate_danger_vector(struct flock_datum const *, struct s_flock_instance const *, struct s_flock_definition const *, struct boid_state const *, union real_point3d const *, float *, union vector3d *, bool, float *)
//{
//    mangled_ppc("?accumulate_danger_vector@@YAXPBUflock_datum@@PBUs_flock_instance@@PBUs_flock_definition@@PBUboid_state@@PBTreal_point3d@@PAMPATvector3d@@_N5@Z");
//};

//void accumulate_danger_from_object(bool, long, float, union real_point3d const *, union vector3d *, float *)
//{
//    mangled_ppc("?accumulate_danger_from_object@@YAX_NJMPBTreal_point3d@@PATvector3d@@PAM@Z");
//};

//void flock_get_danger_radii(struct flock_datum const *, struct s_flock_definition const *, float *, float *, float *)
//{
//    mangled_ppc("?flock_get_danger_radii@@YAXPBUflock_datum@@PBUs_flock_definition@@PAM22@Z");
//};

//void boid_update_scale(long, struct boid_state *)
//{
//    mangled_ppc("?boid_update_scale@@YAXJPAUboid_state@@@Z");
//};

//float boid_state_get_constant_scale(struct boid_state const *)
//{
//    mangled_ppc("?boid_state_get_constant_scale@@YAMPBUboid_state@@@Z");
//};

//void boid_update_destination(struct flock_datum const *, struct boid_state *, union real_point3d const *)
//{
//    mangled_ppc("?boid_update_destination@@YAXPBUflock_datum@@PAUboid_state@@PBTreal_point3d@@@Z");
//};

//float boid_state_get_front_penetration_distance(struct boid_state const *)
//{
//    mangled_ppc("?boid_state_get_front_penetration_distance@@YAMPBUboid_state@@@Z");
//};

//bool boid_create_destination_vector(struct boid_state const *, struct s_flock_destination const *, struct s_flock_runtime_destination const *, union real_point3d const *, union vector3d *)
//{
//    mangled_ppc("?boid_create_destination_vector@@YA_NPBUboid_state@@PBUs_flock_destination@@PBUs_flock_runtime_destination@@PBTreal_point3d@@PATvector3d@@@Z");
//};

//float boid_state_get_front_edge_parameter(struct boid_state const *)
//{
//    mangled_ppc("?boid_state_get_front_edge_parameter@@YAMPBUboid_state@@@Z");
//};

//void boid_control_shooting(struct s_flock_definition const *, struct boid_state *, long, float)
//{
//    mangled_ppc("?boid_control_shooting@@YAXPBUs_flock_definition@@PAUboid_state@@JM@Z");
//};

//void boid_update_effects_timers(struct s_creature_definition_internal const *, struct boid_state *, union vector3d const *)
//{
//    mangled_ppc("?boid_update_effects_timers@@YAXPBUs_creature_definition_internal@@PAUboid_state@@PBTvector3d@@@Z");
//};

//void boid_fire_cheap_weapon(struct s_creature_definition_internal const *, struct boid_state const *, union vector3d const *)
//{
//    mangled_ppc("?boid_fire_cheap_weapon@@YAXPBUs_creature_definition_internal@@PBUboid_state@@PBTvector3d@@@Z");
//};

//void boid_interpolate(long, struct boid_state *, long, float)
//{
//    mangled_ppc("?boid_interpolate@@YAXJPAUboid_state@@JM@Z");
//};

//void flock_interpolate_big_battle_boid(long, long, float)
//{
//    mangled_ppc("?flock_interpolate_big_battle_boid@@YAXJJM@Z");
//};

//void flock_handle_creature_death(long, long, short)
//{
//    mangled_ppc("?flock_handle_creature_death@@YAXJJF@Z");
//};

//bool flock_remove_creature(long, long)
//{
//    mangled_ppc("?flock_remove_creature@@YA_NJJ@Z");
//};

//void flock_handle_creature_delete(long)
//{
//    mangled_ppc("?flock_handle_creature_delete@@YAXJ@Z");
//};

//void flocks_handle_weapon_detonation(union real_point3d const *)
//{
//    mangled_ppc("?flocks_handle_weapon_detonation@@YAXPBTreal_point3d@@@Z");
//};

//void flock_iterator_new(struct flock_iterator *)
//{
//    mangled_ppc("?flock_iterator_new@@YAXPAUflock_iterator@@@Z");
//};

//struct flock_datum * flock_iterator_next(struct flock_iterator *)
//{
//    mangled_ppc("?flock_iterator_next@@YAPAUflock_datum@@PAUflock_iterator@@@Z");
//};

//void flock_creature_boid_iterator_new(long, struct flock_creature_boid_iterator *)
//{
//    mangled_ppc("?flock_creature_boid_iterator_new@@YAXJPAUflock_creature_boid_iterator@@@Z");
//};

//struct creature_datum * flock_creature_boid_iterator_next(struct flock_creature_boid_iterator *)
//{
//    mangled_ppc("?flock_creature_boid_iterator_next@@YAPAUcreature_datum@@PAUflock_creature_boid_iterator@@@Z");
//};

//void flock_big_battle_boid_iterator_new(long, struct flock_big_battle_boid_iterator *)
//{
//    mangled_ppc("?flock_big_battle_boid_iterator_new@@YAXJPAUflock_big_battle_boid_iterator@@@Z");
//};

//struct s_boid_datum * flock_big_battle_boid_iterator_next(struct flock_big_battle_boid_iterator *)
//{
//    mangled_ppc("?flock_big_battle_boid_iterator_next@@YAPAUs_boid_datum@@PAUflock_big_battle_boid_iterator@@@Z");
//};

//void flock_boid_state_iterator_new(long, struct flock_boid_state_iterator *)
//{
//    mangled_ppc("?flock_boid_state_iterator_new@@YAXJPAUflock_boid_state_iterator@@@Z");
//};

//struct boid_state * flock_boid_state_iterator_next(struct flock_boid_state_iterator *)
//{
//    mangled_ppc("?flock_boid_state_iterator_next@@YAPAUboid_state@@PAUflock_boid_state_iterator@@@Z");
//};

//short flock_instance_get_by_name(long)
//{
//    mangled_ppc("?flock_instance_get_by_name@@YAFJ@Z");
//};

//long flock_get_by_name(long)
//{
//    mangled_ppc("?flock_get_by_name@@YAJJ@Z");
//};

//short flock_destination_get_by_name(long, long)
//{
//    mangled_ppc("?flock_destination_get_by_name@@YAFJJ@Z");
//};

//void flock_unperch(long)
//{
//    mangled_ppc("?flock_unperch@@YAXJ@Z");
//};

//void debug_render_flocks(void)
//{
//    mangled_ppc("?debug_render_flocks@@YAXXZ");
//};

//void debug_render_flock_danger(void)
//{
//    mangled_ppc("?debug_render_flock_danger@@YAXXZ");
//};

//void debug_render_flock_boid_properties(void)
//{
//    mangled_ppc("?debug_render_flock_boid_properties@@YAXXZ");
//};

//void debug_render_flock_boid_destinations(void)
//{
//    mangled_ppc("?debug_render_flock_boid_destinations@@YAXXZ");
//};

//bool boid_datum_vectors_are_valid(long, struct s_creature_control_data const *)
//{
//    mangled_ppc("?boid_datum_vectors_are_valid@@YA_NJPBUs_creature_control_data@@@Z");
//};

//void boid_datum_verify_vectors(long, struct s_creature_control_data const *, char const *)
//{
//    mangled_ppc("?boid_datum_verify_vectors@@YAXJPBUs_creature_control_data@@PBD@Z");
//};

//public: struct flock_datum * c_data_iterator<struct flock_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Uflock_datum@@@@QBAPAUflock_datum@@XZ");
//};

//public: c_static_stack<union real_point3d, 32>::c_static_stack<union real_point3d, 32>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Treal_point3d@@$0CA@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_flock_source_flags, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum e_flock_source_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flock_source_flags@@K$00Us_default_enum_string_resolver@@@@QBA_NW4e_flock_source_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_flock_instance_flags, unsigned short, 8, struct s_default_enum_string_resolver>::test(enum e_flock_instance_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flock_instance_flags@@G$07Us_default_enum_string_resolver@@@@QBA_NW4e_flock_instance_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_boid_state_flags, unsigned char, 7, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_boid_state_flags@@E$06Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_boid_state_flags, unsigned char, 7, struct s_default_enum_string_resolver>::test(enum e_boid_state_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_boid_state_flags@@E$06Us_default_enum_string_resolver@@@@QBA_NW4e_boid_state_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_boid_state_flags, unsigned char, 7, struct s_default_enum_string_resolver>::set(enum e_boid_state_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_boid_state_flags@@E$06Us_default_enum_string_resolver@@@@QAAXW4e_boid_state_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_boid_datum_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_boid_datum_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_boid_datum_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_boid_datum_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_boid_datum_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_boid_datum_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_boid_datum_flags@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_boid_datum_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_flock_runtime_destination_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_flock_runtime_destination_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flock_runtime_destination_flags@@G$00Us_default_enum_string_resolver@@@@QBA_NW4e_flock_runtime_destination_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_flock_runtime_flags, unsigned short, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_flock_runtime_flags@@G$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_flock_runtime_flags, unsigned short, 5, struct s_default_enum_string_resolver>::test(enum e_flock_runtime_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flock_runtime_flags@@G$04Us_default_enum_string_resolver@@@@QBA_NW4e_flock_runtime_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_flock_runtime_flags, unsigned short, 5, struct s_default_enum_string_resolver>::set(enum e_flock_runtime_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_flock_runtime_flags@@G$04Us_default_enum_string_resolver@@@@QAAXW4e_flock_runtime_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_boid_state_iterator_flags@@G$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::test(enum e_boid_state_iterator_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_boid_state_iterator_flags@@G$01Us_default_enum_string_resolver@@@@QBA_NW4e_boid_state_iterator_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum e_boid_state_iterator_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_boid_state_iterator_flags@@G$01Us_default_enum_string_resolver@@@@QAAXW4e_boid_state_iterator_flags@@_N@Z");
//};

//public: c_flags<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::c_flags<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_boid_state_iterator_flags@@G$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_creature_big_battle_definition_flags, unsigned long, 3, struct s_default_enum_string_resolver>::test(enum e_creature_big_battle_definition_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_creature_big_battle_definition_flags@@K$02Us_default_enum_string_resolver@@@@QBA_NW4e_creature_big_battle_definition_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_flock_source_flags, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_flock_source_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flock_source_flags@@K$00Us_default_enum_string_resolver@@@@SA_NW4e_flock_source_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_flock_source_flags, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_flock_source_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flock_source_flags@@K$00Us_default_enum_string_resolver@@@@CAKW4e_flock_source_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_flock_instance_flags, unsigned short, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_flock_instance_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flock_instance_flags@@G$07Us_default_enum_string_resolver@@@@SA_NW4e_flock_instance_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_flock_instance_flags, unsigned short, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_flock_instance_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flock_instance_flags@@G$07Us_default_enum_string_resolver@@@@CAGW4e_flock_instance_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_boid_state_flags, unsigned char, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_boid_state_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_boid_state_flags@@E$06Us_default_enum_string_resolver@@@@SA_NW4e_boid_state_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_boid_state_flags, unsigned char, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_boid_state_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_boid_state_flags@@E$06Us_default_enum_string_resolver@@@@CAEW4e_boid_state_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_boid_datum_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_boid_datum_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_boid_datum_flags@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_boid_datum_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_boid_datum_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_boid_datum_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_boid_datum_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_boid_datum_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_flock_runtime_destination_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_flock_runtime_destination_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flock_runtime_destination_flags@@G$00Us_default_enum_string_resolver@@@@SA_NW4e_flock_runtime_destination_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_flock_runtime_destination_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_flock_runtime_destination_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flock_runtime_destination_flags@@G$00Us_default_enum_string_resolver@@@@CAGW4e_flock_runtime_destination_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_flock_runtime_flags, unsigned short, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_flock_runtime_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flock_runtime_flags@@G$04Us_default_enum_string_resolver@@@@SA_NW4e_flock_runtime_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_flock_runtime_flags, unsigned short, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_flock_runtime_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flock_runtime_flags@@G$04Us_default_enum_string_resolver@@@@CAGW4e_flock_runtime_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_boid_state_iterator_flags@@G$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_boid_state_iterator_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_boid_state_iterator_flags@@G$01Us_default_enum_string_resolver@@@@SA_NW4e_boid_state_iterator_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_boid_state_iterator_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_boid_state_iterator_flags@@G$01Us_default_enum_string_resolver@@@@CAGW4e_boid_state_iterator_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_creature_big_battle_definition_flags, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_creature_big_battle_definition_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_creature_big_battle_definition_flags@@K$02Us_default_enum_string_resolver@@@@SA_NW4e_creature_big_battle_definition_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_creature_big_battle_definition_flags, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_creature_big_battle_definition_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_creature_big_battle_definition_flags@@K$02Us_default_enum_string_resolver@@@@CAKW4e_creature_big_battle_definition_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_boid_state_iterator_flags@@G$01Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_boid_state_iterator_flags, unsigned short, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_boid_state_iterator_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_boid_state_iterator_flags@@G$01Us_default_enum_string_resolver@@@@CAGW4e_boid_state_iterator_flags@@@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_flocks_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_flocks_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_flocks_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_flocks_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_flocks_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_flocks_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_boids_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_boids_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_boids_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_boids_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_boids_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_boids_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_flocks_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_flocks_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_boids_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_boids_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_flocks_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_flocks_data_allocator@@YAXXZ");
//};

//void g_boids_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_boids_data_allocator@@YAXXZ");
//};

