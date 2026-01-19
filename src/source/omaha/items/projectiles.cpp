/* ---------- headers */

#include "omaha\items\projectiles.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float g_debug_projectiles_duration_post_death; // "?g_debug_projectiles_duration_post_death@@3MA"
// long global_projectile_last_damaged_ultimate_parent_object_index; // "?global_projectile_last_damaged_ultimate_parent_object_index@@3JA"
// struct s_debug_projectiles_data global_debug_projectiles_data; // "?global_debug_projectiles_data@@3Us_debug_projectiles_data@@A"
// bool g_debug_projectiles; // "?g_debug_projectiles@@3_NA"
// bool g_debug_projectiles_network; // "?g_debug_projectiles_network@@3_NA"
// bool g_debug_projectiles_disable_authoritative_sticks; // "?g_debug_projectiles_disable_authoritative_sticks@@3_NA"

// void projectiles_initialize(void);
// void projectiles_initialize_for_new_map(void);
// void projectiles_dispose_from_old_map(void);
// void projectiles_dispose(void);
// void projectile_kill_tracer(long);
// void projectiles_delete_all(void);
// void projectile_get_networking_debug_label(long, union argb_color const **, char const **);
// void render_debug_projectiles(void);
// void projectile_render_debug(long, union argb_color const *);
// bool projectile_new(long, struct s_object_placement_data *, bool *);
// void projectile_targeting_data_new(struct s_projectile_targeting_data *);
// bool projectile_targeting_data_valid(struct s_projectile_targeting_data const *);
// void projectile_targeting_data_get_ideal_point(struct s_projectile_targeting_data const *, union real_point3d *);
// void projectile_targeting_data_get_target_velocity(struct s_projectile_targeting_data const *, union vector3d *);
// void projectile_get_target_point(long, union real_point3d *);
// void projectile_set_targeting_data(long, struct s_projectile_targeting_data const *);
// void projectile_set_as_boarding(long);
// void projectile_make_tracer(long);
// bool projectile_update(long);
// void projectile_update_timers(long);
// bool projectile_can_tethered_projectile_start_detonation_timer(long);
// void projectile_execute_action(long, bool, bool, long, class c_global_material_type const *);
// void projectile_delete(long);
// void projectile_translate(long, union vector3d *);
// void projectile_translate_with_initial_test_against_object_type(long, union vector3d *, enum e_object_type);
// void projectile_initial_update(long, bool, unsigned char, bool *, unsigned char *, enum e_object_type);
// public: projectile_datum::~projectile_datum(void);
// public: _object_datum::~_object_datum(void);
// bool projectile_test_water(long, union real_point3d const *, class c_global_material_type *);
// public: s_water_physics_test_vector_result::s_water_physics_test_vector_result(void);
// public: s_effect_creation_data::s_effect_creation_data(void);
// public: c_tag_index::c_tag_index(void);
// float projectile_get_ballistic_acceleration(long, struct s_location);
// bool projectile_aim_ballistic(float, float, struct s_location, union real_point3d const *, union real_point3d const *, float *, float *, float *, bool, union vector3d *, float *, float *, float *, float *, float *);
// bool projectile_aim_ballistic(float, float, union real_point3d const *, union real_point3d const *, float *, float *, float *, bool, union vector3d *, float *, float *, float *, float *, float *);
// bool projectile_aim_linear(float, union real_point3d const *, union real_point3d const *, union vector3d *, float *, float *, float *);
// bool projectile_aim(long, union real_point3d const *, union real_point3d const *, bool, float *, float *, float *, float *, bool, union vector3d *, float *, float *, float *, bool *);
// float projectile_estimate_time_to_target(long, float, bool);
// float projectile_definition_get_autoaim_max_lead_time(long);
// void projectile_accelerate(long, union vector3d const *, union vector3d const *);
// void projectile_notify_acceleration(long, union vector3d const *);
// bool dangerous_projectiles_near_player(long *);
// void projectile_handle_deleted_object(long, long);
// void projectile_hide(long);
// void projectile_set_action(long, enum e_projectile_actions, enum e_projectile_action_reasons);
// long projectile_get_super_detonation_object_index(long);
// bool projectile_collision(long, struct collision_result *, union real_point3d *, union vector3d *, union vector3d *, float, long, bool *, enum e_object_type);
// bool projectile_cannot_be_affected_by_object_collision(long, enum e_object_type);
// public: projectile_datum::projectile_datum(void);
// public: struct projectile_datum & projectile_datum::operator=(struct projectile_datum const &);
// public: _object_datum::_object_datum(void);
// public: _projectile_datum::_projectile_datum(void);
// public: struct _projectile_datum & _projectile_datum::operator=(struct _projectile_datum const &);
// void projectile_effect_new(long, long, long, long, struct s_effect_creation_data *, enum e_effect_deterministic);
// void projectile_adjust_for_angular_velocity_change(long);
// bool projectile_compute_function_value(long, long, long, float *, bool *, bool *);
// void projectile_calculate_maximum_damage_distance(long);
// bool projectile_collision_test_line(long, union real_point3d const *, enum e_object_type, struct collision_result *);
// void projectile_collision_adjust_impact_for_obstructed_headshots(long, union real_point3d const *, union real_point3d const *, struct collision_result *);
// public: struct collision_result & collision_result::operator=(struct collision_result const &);
// void render_debug_projectile_impact(struct collision_result const *);
// void render_debug_projectile_vector(union real_point3d const *, union real_point3d const *);
// void projectile_collision_build_fat_test_points(union real_point3d const *, union real_point3d const *, float, long, union real_point3d *, union real_point3d *);
// void projectile_detonate_external(long);
// void projectile_check_for_supercombine(long);
// void projectile_detonate_effects_and_damage_shared(long, union real_point3d const *, union vector3d const *, union vector3d const *, struct s_effect_vector const *, float, struct s_damage_owner const *, long, struct s_location *, short, class c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>, class c_global_material_type, bool, bool, bool, long, enum e_predictability);
// void projectile_apply_detonation_damage(long, union real_point3d const *, union vector3d const *, union vector3d const *, float, struct s_damage_owner const *, long, struct s_location *, short, bool, bool, bool, long, enum e_predictability);
// void projectiles_react_to_authoritative_detonation_on_player(long, long, bool);
// void projectile_apply_detonation_damage_locally(long, union real_point3d const *, union vector3d const *, float, long, struct s_location *, bool, enum e_predictability);
// long projectile_supercombine_attached_projectiles_recursive(long, long, long, union real_point3d *);
// void projectile_detonate(long, long, class c_global_material_type const *, enum e_projectile_action_reasons);
// void projectile_detonate_effects_and_damage(long, union real_point3d const *, union vector3d const *, struct s_effect_vector const *, float, long, class c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>, class c_global_material_type, union vector3d const *, struct s_location *, bool, bool, long, enum e_predictability);
// void projectile_supercombine_attached_projectiles(long, long);
// void projectile_detonation_effect(long, union real_point3d const *, union vector3d const *, union vector3d const *, struct s_damage_owner const *, struct s_damage_reporting_info const &, bool, bool, struct s_location const *, class c_global_material_type, struct s_effect_vector const *);
// void projectile_material_detonation_effect(long, union real_point3d const *, union vector3d const *, struct s_damage_owner const *, class c_global_material_type, union vector3d const *, struct s_location const *);
// void projectile_impact_detonation_effect(long, float, float, union vector3d const *, union real_point3d const *, union vector3d const *, class c_global_material_type, bool, long, long, bool, bool);
// void projectile_get_damage_reporting_info(long, struct s_damage_reporting_info *);
// void projectile_handle_instant_networked_creation(long);
// long projectile_count_attached_to_object_for_supercombine(long, long, long *, long *);
// long projectile_count_attached_to_object_for_supercombine_recursive(long, long, long *);
// bool projectile_handle_parent_destroyed(long);
// bool projectile_effected_by_phantom_volumes(long);
// void debug_projectile_material_response_criteria_fail(long, class c_global_material_type, long, char const *);
// void debug_projectile_material_response_match_found(long, class c_global_material_type, long);
// void debug_projectile_material_response_match_fail(long, class c_global_material_type, float, float, long);
// struct s_projectile_material_response_definition const * projectile_definition_find_material_response(long, class c_global_material_type, long, float, float);
// struct s_projectile_material_response_definition const * projectile_definition_find_material_response_internal(long, class c_global_material_type, long, float, float);
// void projectile_attach(long, long, short, union real_point3d const *, struct s_location const *);
// void projectile_get_effects(bool, union real_point3d const *, struct projectile_definition const *, enum e_effect_type, class c_global_material_type, struct s_material_effects_result *);
// void projectile_get_effects_by_projectile(long, union real_point3d const *, struct projectile_definition const *, enum e_effect_type, class c_global_material_type, bool, struct s_material_effects_result *);
// float projectile_definition_get_angular_velocity_multiplier(long, bool);
// float projectile_definition_get_velocity_multiplier(long, bool);
// bool projectile_estimate_collision_along_arc(long, float, float, long, struct s_collision_test_flags, bool, union real_point3d *, float *);
// void projectile_tether_update(long);
// union vector3d const * projectile_hit_normal_get(long, union vector3d *);
// struct s_grounded_friction_definition * projectile_get_grounded_friction_definition(long);
// void projectile_flyby_play_effects(long, enum e_output_user_index, float);
// long projectile_get_first_parent_biped_index(long);
// bool projectile_response_causes_projectile_attachment(short);
// public: c_entity_update_throttler<30>::c_entity_update_throttler<30>(void);
// public: void c_object_iterator<struct projectile_datum>::begin(unsigned long, unsigned char);
// public: bool c_object_iterator<struct projectile_datum>::next(void);
// public: struct projectile_datum * c_object_iterator<struct projectile_datum>::get_datum(void);
// public: long c_static_stack<union real_point2d, 16>::count(void) const;
// public: void c_static_stack<union real_point2d, 16>::push_back(union real_point2d const &);
// public: union real_point2d & c_static_stack<union real_point2d, 16>::operator[](long);
// public: c_static_stack<union real_point2d, 16>::c_static_stack<union real_point2d, 16>(void);
// public: void c_static_stack<float, 16>::push_back(float const &);
// public: float & c_static_stack<float, 16>::operator[](long);
// public: c_static_stack<float, 16>::c_static_stack<float, 16>(void);
// public: long c_static_stack<long, 16>::count(void) const;
// public: void c_static_stack<long, 16>::push_back(long const &);
// public: long & c_static_stack<long, 16>::operator[](long);
// public: c_static_stack<long, 16>::c_static_stack<long, 16>(void);
// public: bool c_static_stack<union real_point2d, 16>::valid(long) const;
// public: long c_static_stack<union real_point2d, 16>::push(void);
// public: union real_point2d * c_static_stack<union real_point2d, 16>::get(long);
// public: bool c_static_stack<float, 16>::valid(long) const;
// public: long c_static_stack<float, 16>::push(void);
// public: float * c_static_stack<float, 16>::get(long);
// public: bool c_static_stack<long, 16>::valid(long) const;
// public: long c_static_stack<long, 16>::push(void);
// public: long * c_static_stack<long, 16>::get(long);
// public: bool c_static_stack<union real_point2d, 16>::valid(void) const;
// public: bool c_static_stack<union real_point2d, 16>::full(void) const;
// public: bool c_static_stack<float, 16>::valid(void) const;
// public: bool c_static_stack<float, 16>::full(void) const;
// public: bool c_static_stack<long, 16>::valid(void) const;
// public: bool c_static_stack<long, 16>::full(void) const;
// public: c_flags<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>::c_flags<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>(void);
// public: c_flags<enum e_object_serial_motion_task, unsigned short, 10, struct s_default_enum_string_resolver>::c_flags<enum e_object_serial_motion_task, unsigned short, 10, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_object_inhibited_flags, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_object_inhibited_flags, unsigned char, 4, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_object_physics_flags, unsigned long, 28, struct s_default_enum_string_resolver>::c_flags<enum e_object_physics_flags, unsigned long, 28, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_object_ai_flags, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_object_ai_flags, unsigned char, 4, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_object_simulation_flags, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_object_simulation_flags, unsigned char, 5, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_object_damage_flags, unsigned long, 25, struct s_default_enum_string_resolver>::c_flags<enum e_object_damage_flags, unsigned long, 25, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_collision_test_flag, unsigned long, 24, struct s_default_enum_string_resolver>::set(enum e_collision_test_flag, bool);
// public: void c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>::set(enum e_collision_test_objects_flag, bool);
// public: unsigned long c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::set(enum e_simulation_projectile_effect_flag, bool);
// public: c_flags<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::c_flags<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_damage_definition_flags, unsigned long, 26, struct s_default_enum_string_resolver>::test(enum e_damage_definition_flags) const;
// public: void c_flags_no_init<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::set(enum e_effect_creation_flags, bool);
// public: c_flags<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::c_flags<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>(void);
// bool operator!=<enum e_input_user_index>(enum e_input_user_index const &, enum e_none_sentinel const &);
// public: void c_flags_no_init<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_object_serial_motion_task, unsigned short, 10, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_object_inhibited_flags, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_object_inhibited_flags, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_object_physics_flags, unsigned long, 28, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_object_ai_flags, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_object_ai_flags, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_object_simulation_flags, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_object_damage_flags, unsigned long, 25, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_object_damage_flags, unsigned long, 25, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_collision_test_flag, unsigned long, 24, struct s_default_enum_string_resolver>::valid_bit(enum e_collision_test_flag);
// private: static unsigned long c_flags_no_init<enum e_collision_test_flag, unsigned long, 24, struct s_default_enum_string_resolver>::flag_size_type(enum e_collision_test_flag);
// public: static bool c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>::valid_bit(enum e_collision_test_objects_flag);
// private: static unsigned long c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>::flag_size_type(enum e_collision_test_objects_flag);
// public: void c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_damage_definition_flags, unsigned long, 26, struct s_default_enum_string_resolver>::valid_bit(enum e_damage_definition_flags);
// private: static unsigned long c_flags_no_init<enum e_damage_definition_flags, unsigned long, 26, struct s_default_enum_string_resolver>::flag_size_type(enum e_damage_definition_flags);
// public: bool c_flags_no_init<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_effect_creation_flags);
// private: static unsigned long c_flags_no_init<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_effect_creation_flags);
// bool operator==<enum e_input_user_index>(enum e_input_user_index const &, enum e_none_sentinel const &);
// private: static unsigned short c_flags_no_init<enum e_object_serial_motion_task, unsigned short, 10, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_object_inhibited_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_object_physics_flags, unsigned long, 28, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_object_ai_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_object_simulation_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_object_damage_flags, unsigned long, 25, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_object_serial_motion_task, unsigned short, 10, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_object_serial_motion_task);
// private: static unsigned char c_flags_no_init<enum e_object_inhibited_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_object_inhibited_flags);
// private: static unsigned long c_flags_no_init<enum e_object_physics_flags, unsigned long, 28, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_object_physics_flags);
// private: static unsigned char c_flags_no_init<enum e_object_ai_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_object_ai_flags);
// private: static unsigned char c_flags_no_init<enum e_object_simulation_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_object_simulation_flags);
// private: static unsigned long c_flags_no_init<enum e_object_damage_flags, unsigned long, 25, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_object_damage_flags);
// private: static unsigned char c_flags_no_init<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_object_recycling_flags);
// private: static unsigned long c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_projectile_flags);
// private: static unsigned long c_flags_no_init<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_effect_creation_flags);
// union euler_angles2d * set_real_euler_angles2d(union euler_angles2d *, float, float);
// public: virtual hkpSphereShape::~hkpSphereShape(void);
// public: virtual hkpConvexShape::~hkpConvexShape(void);
// public: virtual hkpSphereRepShape::~hkpSphereRepShape(void);
// public: virtual hkpShape::~hkpShape(void);
// public: virtual hkReferencedObject::~hkReferencedObject(void);
// public: virtual hkBaseObject::~hkBaseObject(void);
// merged_82B95560;
// merged_82B955A8;
// public: static void hkReferencedObject::operator delete(void *);

//void projectiles_initialize(void)
//{
//    mangled_ppc("?projectiles_initialize@@YAXXZ");
//};

//void projectiles_initialize_for_new_map(void)
//{
//    mangled_ppc("?projectiles_initialize_for_new_map@@YAXXZ");
//};

//void projectiles_dispose_from_old_map(void)
//{
//    mangled_ppc("?projectiles_dispose_from_old_map@@YAXXZ");
//};

//void projectiles_dispose(void)
//{
//    mangled_ppc("?projectiles_dispose@@YAXXZ");
//};

//void projectile_kill_tracer(long)
//{
//    mangled_ppc("?projectile_kill_tracer@@YAXJ@Z");
//};

//void projectiles_delete_all(void)
//{
//    mangled_ppc("?projectiles_delete_all@@YAXXZ");
//};

//void projectile_get_networking_debug_label(long, union argb_color const **, char const **)
//{
//    mangled_ppc("?projectile_get_networking_debug_label@@YAXJPAPBTargb_color@@PAPBD@Z");
//};

//void render_debug_projectiles(void)
//{
//    mangled_ppc("?render_debug_projectiles@@YAXXZ");
//};

//void projectile_render_debug(long, union argb_color const *)
//{
//    mangled_ppc("?projectile_render_debug@@YAXJPBTargb_color@@@Z");
//};

//bool projectile_new(long, struct s_object_placement_data *, bool *)
//{
//    mangled_ppc("?projectile_new@@YA_NJPAUs_object_placement_data@@PA_N@Z");
//};

//void projectile_targeting_data_new(struct s_projectile_targeting_data *)
//{
//    mangled_ppc("?projectile_targeting_data_new@@YAXPAUs_projectile_targeting_data@@@Z");
//};

//bool projectile_targeting_data_valid(struct s_projectile_targeting_data const *)
//{
//    mangled_ppc("?projectile_targeting_data_valid@@YA_NPBUs_projectile_targeting_data@@@Z");
//};

//void projectile_targeting_data_get_ideal_point(struct s_projectile_targeting_data const *, union real_point3d *)
//{
//    mangled_ppc("?projectile_targeting_data_get_ideal_point@@YAXPBUs_projectile_targeting_data@@PATreal_point3d@@@Z");
//};

//void projectile_targeting_data_get_target_velocity(struct s_projectile_targeting_data const *, union vector3d *)
//{
//    mangled_ppc("?projectile_targeting_data_get_target_velocity@@YAXPBUs_projectile_targeting_data@@PATvector3d@@@Z");
//};

//void projectile_get_target_point(long, union real_point3d *)
//{
//    mangled_ppc("?projectile_get_target_point@@YAXJPATreal_point3d@@@Z");
//};

//void projectile_set_targeting_data(long, struct s_projectile_targeting_data const *)
//{
//    mangled_ppc("?projectile_set_targeting_data@@YAXJPBUs_projectile_targeting_data@@@Z");
//};

//void projectile_set_as_boarding(long)
//{
//    mangled_ppc("?projectile_set_as_boarding@@YAXJ@Z");
//};

//void projectile_make_tracer(long)
//{
//    mangled_ppc("?projectile_make_tracer@@YAXJ@Z");
//};

//bool projectile_update(long)
//{
//    mangled_ppc("?projectile_update@@YA_NJ@Z");
//};

//void projectile_update_timers(long)
//{
//    mangled_ppc("?projectile_update_timers@@YAXJ@Z");
//};

//bool projectile_can_tethered_projectile_start_detonation_timer(long)
//{
//    mangled_ppc("?projectile_can_tethered_projectile_start_detonation_timer@@YA_NJ@Z");
//};

//void projectile_execute_action(long, bool, bool, long, class c_global_material_type const *)
//{
//    mangled_ppc("?projectile_execute_action@@YAXJ_N0JPBVc_global_material_type@@@Z");
//};

//void projectile_delete(long)
//{
//    mangled_ppc("?projectile_delete@@YAXJ@Z");
//};

//void projectile_translate(long, union vector3d *)
//{
//    mangled_ppc("?projectile_translate@@YAXJPATvector3d@@@Z");
//};

//void projectile_translate_with_initial_test_against_object_type(long, union vector3d *, enum e_object_type)
//{
//    mangled_ppc("?projectile_translate_with_initial_test_against_object_type@@YAXJPATvector3d@@W4e_object_type@@@Z");
//};

//void projectile_initial_update(long, bool, unsigned char, bool *, unsigned char *, enum e_object_type)
//{
//    mangled_ppc("?projectile_initial_update@@YAXJ_NEPA_NPAEW4e_object_type@@@Z");
//};

//public: projectile_datum::~projectile_datum(void)
//{
//    mangled_ppc("??1projectile_datum@@QAA@XZ");
//};

//public: _object_datum::~_object_datum(void)
//{
//    mangled_ppc("??1_object_datum@@QAA@XZ");
//};

//bool projectile_test_water(long, union real_point3d const *, class c_global_material_type *)
//{
//    mangled_ppc("?projectile_test_water@@YA_NJPBTreal_point3d@@PAVc_global_material_type@@@Z");
//};

//public: s_water_physics_test_vector_result::s_water_physics_test_vector_result(void)
//{
//    mangled_ppc("??0s_water_physics_test_vector_result@@QAA@XZ");
//};

//public: s_effect_creation_data::s_effect_creation_data(void)
//{
//    mangled_ppc("??0s_effect_creation_data@@QAA@XZ");
//};

//public: c_tag_index::c_tag_index(void)
//{
//    mangled_ppc("??0c_tag_index@@QAA@XZ");
//};

//float projectile_get_ballistic_acceleration(long, struct s_location)
//{
//    mangled_ppc("?projectile_get_ballistic_acceleration@@YAMJUs_location@@@Z");
//};

//bool projectile_aim_ballistic(float, float, struct s_location, union real_point3d const *, union real_point3d const *, float *, float *, float *, bool, union vector3d *, float *, float *, float *, float *, float *)
//{
//    mangled_ppc("?projectile_aim_ballistic@@YA_NMMUs_location@@PBTreal_point3d@@1PAM22_NPATvector3d@@22222@Z");
//};

//bool projectile_aim_ballistic(float, float, union real_point3d const *, union real_point3d const *, float *, float *, float *, bool, union vector3d *, float *, float *, float *, float *, float *)
//{
//    mangled_ppc("?projectile_aim_ballistic@@YA_NMMPBTreal_point3d@@0PAM11_NPATvector3d@@11111@Z");
//};

//bool projectile_aim_linear(float, union real_point3d const *, union real_point3d const *, union vector3d *, float *, float *, float *)
//{
//    mangled_ppc("?projectile_aim_linear@@YA_NMPBTreal_point3d@@0PATvector3d@@PAM22@Z");
//};

//bool projectile_aim(long, union real_point3d const *, union real_point3d const *, bool, float *, float *, float *, float *, bool, union vector3d *, float *, float *, float *, bool *)
//{
//    mangled_ppc("?projectile_aim@@YA_NJPBTreal_point3d@@0_NPAM2221PATvector3d@@222PA_N@Z");
//};

//float projectile_estimate_time_to_target(long, float, bool)
//{
//    mangled_ppc("?projectile_estimate_time_to_target@@YAMJM_N@Z");
//};

//float projectile_definition_get_autoaim_max_lead_time(long)
//{
//    mangled_ppc("?projectile_definition_get_autoaim_max_lead_time@@YAMJ@Z");
//};

//void projectile_accelerate(long, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?projectile_accelerate@@YAXJPBTvector3d@@0@Z");
//};

//void projectile_notify_acceleration(long, union vector3d const *)
//{
//    mangled_ppc("?projectile_notify_acceleration@@YAXJPBTvector3d@@@Z");
//};

//bool dangerous_projectiles_near_player(long *)
//{
//    mangled_ppc("?dangerous_projectiles_near_player@@YA_NPAJ@Z");
//};

//void projectile_handle_deleted_object(long, long)
//{
//    mangled_ppc("?projectile_handle_deleted_object@@YAXJJ@Z");
//};

//void projectile_hide(long)
//{
//    mangled_ppc("?projectile_hide@@YAXJ@Z");
//};

//void projectile_set_action(long, enum e_projectile_actions, enum e_projectile_action_reasons)
//{
//    mangled_ppc("?projectile_set_action@@YAXJW4e_projectile_actions@@W4e_projectile_action_reasons@@@Z");
//};

//long projectile_get_super_detonation_object_index(long)
//{
//    mangled_ppc("?projectile_get_super_detonation_object_index@@YAJJ@Z");
//};

//bool projectile_collision(long, struct collision_result *, union real_point3d *, union vector3d *, union vector3d *, float, long, bool *, enum e_object_type)
//{
//    mangled_ppc("?projectile_collision@@YA_NJPAUcollision_result@@PATreal_point3d@@PATvector3d@@2MJPA_NW4e_object_type@@@Z");
//};

//bool projectile_cannot_be_affected_by_object_collision(long, enum e_object_type)
//{
//    mangled_ppc("?projectile_cannot_be_affected_by_object_collision@@YA_NJW4e_object_type@@@Z");
//};

//public: projectile_datum::projectile_datum(void)
//{
//    mangled_ppc("??0projectile_datum@@QAA@XZ");
//};

//public: struct projectile_datum & projectile_datum::operator=(struct projectile_datum const &)
//{
//    mangled_ppc("??4projectile_datum@@QAAAAU0@ABU0@@Z");
//};

//public: _object_datum::_object_datum(void)
//{
//    mangled_ppc("??0_object_datum@@QAA@XZ");
//};

//public: _projectile_datum::_projectile_datum(void)
//{
//    mangled_ppc("??0_projectile_datum@@QAA@XZ");
//};

//public: struct _projectile_datum & _projectile_datum::operator=(struct _projectile_datum const &)
//{
//    mangled_ppc("??4_projectile_datum@@QAAAAU0@ABU0@@Z");
//};

//void projectile_effect_new(long, long, long, long, struct s_effect_creation_data *, enum e_effect_deterministic)
//{
//    mangled_ppc("?projectile_effect_new@@YAXJJJJPAUs_effect_creation_data@@W4e_effect_deterministic@@@Z");
//};

//void projectile_adjust_for_angular_velocity_change(long)
//{
//    mangled_ppc("?projectile_adjust_for_angular_velocity_change@@YAXJ@Z");
//};

//bool projectile_compute_function_value(long, long, long, float *, bool *, bool *)
//{
//    mangled_ppc("?projectile_compute_function_value@@YA_NJJJPAMPA_N1@Z");
//};

//void projectile_calculate_maximum_damage_distance(long)
//{
//    mangled_ppc("?projectile_calculate_maximum_damage_distance@@YAXJ@Z");
//};

//bool projectile_collision_test_line(long, union real_point3d const *, enum e_object_type, struct collision_result *)
//{
//    mangled_ppc("?projectile_collision_test_line@@YA_NJPBTreal_point3d@@W4e_object_type@@PAUcollision_result@@@Z");
//};

//void projectile_collision_adjust_impact_for_obstructed_headshots(long, union real_point3d const *, union real_point3d const *, struct collision_result *)
//{
//    mangled_ppc("?projectile_collision_adjust_impact_for_obstructed_headshots@@YAXJPBTreal_point3d@@0PAUcollision_result@@@Z");
//};

//public: struct collision_result & collision_result::operator=(struct collision_result const &)
//{
//    mangled_ppc("??4collision_result@@QAAAAU0@ABU0@@Z");
//};

//void render_debug_projectile_impact(struct collision_result const *)
//{
//    mangled_ppc("?render_debug_projectile_impact@@YAXPBUcollision_result@@@Z");
//};

//void render_debug_projectile_vector(union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?render_debug_projectile_vector@@YAXPBTreal_point3d@@0@Z");
//};

//void projectile_collision_build_fat_test_points(union real_point3d const *, union real_point3d const *, float, long, union real_point3d *, union real_point3d *)
//{
//    mangled_ppc("?projectile_collision_build_fat_test_points@@YAXPBTreal_point3d@@0MJPAT1@1@Z");
//};

//void projectile_detonate_external(long)
//{
//    mangled_ppc("?projectile_detonate_external@@YAXJ@Z");
//};

//void projectile_check_for_supercombine(long)
//{
//    mangled_ppc("?projectile_check_for_supercombine@@YAXJ@Z");
//};

//void projectile_detonate_effects_and_damage_shared(long, union real_point3d const *, union vector3d const *, union vector3d const *, struct s_effect_vector const *, float, struct s_damage_owner const *, long, struct s_location *, short, class c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>, class c_global_material_type, bool, bool, bool, long, enum e_predictability)
//{
//    mangled_ppc("?projectile_detonate_effects_and_damage_shared@@YAXJPBTreal_point3d@@PBTvector3d@@1PBUs_effect_vector@@MPBUs_damage_owner@@JPAUs_location@@FV?$c_flags@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@Vc_global_material_type@@_N77JW4e_predictability@@@Z");
//};

//void projectile_apply_detonation_damage(long, union real_point3d const *, union vector3d const *, union vector3d const *, float, struct s_damage_owner const *, long, struct s_location *, short, bool, bool, bool, long, enum e_predictability)
//{
//    mangled_ppc("?projectile_apply_detonation_damage@@YAXJPBTreal_point3d@@PBTvector3d@@1MPBUs_damage_owner@@JPAUs_location@@F_N44JW4e_predictability@@@Z");
//};

//void projectiles_react_to_authoritative_detonation_on_player(long, long, bool)
//{
//    mangled_ppc("?projectiles_react_to_authoritative_detonation_on_player@@YAXJJ_N@Z");
//};

//void projectile_apply_detonation_damage_locally(long, union real_point3d const *, union vector3d const *, float, long, struct s_location *, bool, enum e_predictability)
//{
//    mangled_ppc("?projectile_apply_detonation_damage_locally@@YAXJPBTreal_point3d@@PBTvector3d@@MJPAUs_location@@_NW4e_predictability@@@Z");
//};

//long projectile_supercombine_attached_projectiles_recursive(long, long, long, union real_point3d *)
//{
//    mangled_ppc("?projectile_supercombine_attached_projectiles_recursive@@YAJJJJPATreal_point3d@@@Z");
//};

//void projectile_detonate(long, long, class c_global_material_type const *, enum e_projectile_action_reasons)
//{
//    mangled_ppc("?projectile_detonate@@YAXJJPBVc_global_material_type@@W4e_projectile_action_reasons@@@Z");
//};

//void projectile_detonate_effects_and_damage(long, union real_point3d const *, union vector3d const *, struct s_effect_vector const *, float, long, class c_flags<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>, class c_global_material_type, union vector3d const *, struct s_location *, bool, bool, long, enum e_predictability)
//{
//    mangled_ppc("?projectile_detonate_effects_and_damage@@YAXJPBTreal_point3d@@PBTvector3d@@PBUs_effect_vector@@MJV?$c_flags@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@Vc_global_material_type@@1PAUs_location@@_N6JW4e_predictability@@@Z");
//};

//void projectile_supercombine_attached_projectiles(long, long)
//{
//    mangled_ppc("?projectile_supercombine_attached_projectiles@@YAXJJ@Z");
//};

//void projectile_detonation_effect(long, union real_point3d const *, union vector3d const *, union vector3d const *, struct s_damage_owner const *, struct s_damage_reporting_info const &, bool, bool, struct s_location const *, class c_global_material_type, struct s_effect_vector const *)
//{
//    mangled_ppc("?projectile_detonation_effect@@YAXJPBTreal_point3d@@PBTvector3d@@1PBUs_damage_owner@@ABUs_damage_reporting_info@@_N4PBUs_location@@Vc_global_material_type@@PBUs_effect_vector@@@Z");
//};

//void projectile_material_detonation_effect(long, union real_point3d const *, union vector3d const *, struct s_damage_owner const *, class c_global_material_type, union vector3d const *, struct s_location const *)
//{
//    mangled_ppc("?projectile_material_detonation_effect@@YAXJPBTreal_point3d@@PBTvector3d@@PBUs_damage_owner@@Vc_global_material_type@@1PBUs_location@@@Z");
//};

//void projectile_impact_detonation_effect(long, float, float, union vector3d const *, union real_point3d const *, union vector3d const *, class c_global_material_type, bool, long, long, bool, bool)
//{
//    mangled_ppc("?projectile_impact_detonation_effect@@YAXJMMPBTvector3d@@PBTreal_point3d@@0Vc_global_material_type@@_NJJ33@Z");
//};

//void projectile_get_damage_reporting_info(long, struct s_damage_reporting_info *)
//{
//    mangled_ppc("?projectile_get_damage_reporting_info@@YAXJPAUs_damage_reporting_info@@@Z");
//};

//void projectile_handle_instant_networked_creation(long)
//{
//    mangled_ppc("?projectile_handle_instant_networked_creation@@YAXJ@Z");
//};

//long projectile_count_attached_to_object_for_supercombine(long, long, long *, long *)
//{
//    mangled_ppc("?projectile_count_attached_to_object_for_supercombine@@YAJJJPAJ0@Z");
//};

//long projectile_count_attached_to_object_for_supercombine_recursive(long, long, long *)
//{
//    mangled_ppc("?projectile_count_attached_to_object_for_supercombine_recursive@@YAJJJPAJ@Z");
//};

//bool projectile_handle_parent_destroyed(long)
//{
//    mangled_ppc("?projectile_handle_parent_destroyed@@YA_NJ@Z");
//};

//bool projectile_effected_by_phantom_volumes(long)
//{
//    mangled_ppc("?projectile_effected_by_phantom_volumes@@YA_NJ@Z");
//};

//void debug_projectile_material_response_criteria_fail(long, class c_global_material_type, long, char const *)
//{
//    mangled_ppc("?debug_projectile_material_response_criteria_fail@@YAXJVc_global_material_type@@JPBD@Z");
//};

//void debug_projectile_material_response_match_found(long, class c_global_material_type, long)
//{
//    mangled_ppc("?debug_projectile_material_response_match_found@@YAXJVc_global_material_type@@J@Z");
//};

//void debug_projectile_material_response_match_fail(long, class c_global_material_type, float, float, long)
//{
//    mangled_ppc("?debug_projectile_material_response_match_fail@@YAXJVc_global_material_type@@MMJ@Z");
//};

//struct s_projectile_material_response_definition const * projectile_definition_find_material_response(long, class c_global_material_type, long, float, float)
//{
//    mangled_ppc("?projectile_definition_find_material_response@@YAPBUs_projectile_material_response_definition@@JVc_global_material_type@@JMM@Z");
//};

//struct s_projectile_material_response_definition const * projectile_definition_find_material_response_internal(long, class c_global_material_type, long, float, float)
//{
//    mangled_ppc("?projectile_definition_find_material_response_internal@@YAPBUs_projectile_material_response_definition@@JVc_global_material_type@@JMM@Z");
//};

//void projectile_attach(long, long, short, union real_point3d const *, struct s_location const *)
//{
//    mangled_ppc("?projectile_attach@@YAXJJFPBTreal_point3d@@PBUs_location@@@Z");
//};

//void projectile_get_effects(bool, union real_point3d const *, struct projectile_definition const *, enum e_effect_type, class c_global_material_type, struct s_material_effects_result *)
//{
//    mangled_ppc("?projectile_get_effects@@YAX_NPBTreal_point3d@@PBUprojectile_definition@@W4e_effect_type@@Vc_global_material_type@@PAUs_material_effects_result@@@Z");
//};

//void projectile_get_effects_by_projectile(long, union real_point3d const *, struct projectile_definition const *, enum e_effect_type, class c_global_material_type, bool, struct s_material_effects_result *)
//{
//    mangled_ppc("?projectile_get_effects_by_projectile@@YAXJPBTreal_point3d@@PBUprojectile_definition@@W4e_effect_type@@Vc_global_material_type@@_NPAUs_material_effects_result@@@Z");
//};

//float projectile_definition_get_angular_velocity_multiplier(long, bool)
//{
//    mangled_ppc("?projectile_definition_get_angular_velocity_multiplier@@YAMJ_N@Z");
//};

//float projectile_definition_get_velocity_multiplier(long, bool)
//{
//    mangled_ppc("?projectile_definition_get_velocity_multiplier@@YAMJ_N@Z");
//};

//bool projectile_estimate_collision_along_arc(long, float, float, long, struct s_collision_test_flags, bool, union real_point3d *, float *)
//{
//    mangled_ppc("?projectile_estimate_collision_along_arc@@YA_NJMMJUs_collision_test_flags@@_NPATreal_point3d@@PAM@Z");
//};

//void projectile_tether_update(long)
//{
//    mangled_ppc("?projectile_tether_update@@YAXJ@Z");
//};

//union vector3d const * projectile_hit_normal_get(long, union vector3d *)
//{
//    mangled_ppc("?projectile_hit_normal_get@@YAPBTvector3d@@JPAT1@@Z");
//};

//struct s_grounded_friction_definition * projectile_get_grounded_friction_definition(long)
//{
//    mangled_ppc("?projectile_get_grounded_friction_definition@@YAPAUs_grounded_friction_definition@@J@Z");
//};

//void projectile_flyby_play_effects(long, enum e_output_user_index, float)
//{
//    mangled_ppc("?projectile_flyby_play_effects@@YAXJW4e_output_user_index@@M@Z");
//};

//long projectile_get_first_parent_biped_index(long)
//{
//    mangled_ppc("?projectile_get_first_parent_biped_index@@YAJJ@Z");
//};

//bool projectile_response_causes_projectile_attachment(short)
//{
//    mangled_ppc("?projectile_response_causes_projectile_attachment@@YA_NF@Z");
//};

//public: c_entity_update_throttler<30>::c_entity_update_throttler<30>(void)
//{
//    mangled_ppc("??0?$c_entity_update_throttler@$0BO@@@QAA@XZ");
//};

//public: void c_object_iterator<struct projectile_datum>::begin(unsigned long, unsigned char)
//{
//    mangled_ppc("?begin@?$c_object_iterator@Uprojectile_datum@@@@QAAXKE@Z");
//};

//public: bool c_object_iterator<struct projectile_datum>::next(void)
//{
//    mangled_ppc("?next@?$c_object_iterator@Uprojectile_datum@@@@QAA_NXZ");
//};

//public: struct projectile_datum * c_object_iterator<struct projectile_datum>::get_datum(void)
//{
//    mangled_ppc("?get_datum@?$c_object_iterator@Uprojectile_datum@@@@QAAPAUprojectile_datum@@XZ");
//};

//public: long c_static_stack<union real_point2d, 16>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Treal_point2d@@$0BA@@@QBAJXZ");
//};

//public: void c_static_stack<union real_point2d, 16>::push_back(union real_point2d const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Treal_point2d@@$0BA@@@QAAXABTreal_point2d@@@Z");
//};

//public: union real_point2d & c_static_stack<union real_point2d, 16>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Treal_point2d@@$0BA@@@QAAAATreal_point2d@@J@Z");
//};

//public: c_static_stack<union real_point2d, 16>::c_static_stack<union real_point2d, 16>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Treal_point2d@@$0BA@@@QAA@XZ");
//};

//public: void c_static_stack<float, 16>::push_back(float const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@M$0BA@@@QAAXABM@Z");
//};

//public: float & c_static_stack<float, 16>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@M$0BA@@@QAAAAMJ@Z");
//};

//public: c_static_stack<float, 16>::c_static_stack<float, 16>(void)
//{
//    mangled_ppc("??0?$c_static_stack@M$0BA@@@QAA@XZ");
//};

//public: long c_static_stack<long, 16>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@J$0BA@@@QBAJXZ");
//};

//public: void c_static_stack<long, 16>::push_back(long const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@J$0BA@@@QAAXABJ@Z");
//};

//public: long & c_static_stack<long, 16>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@J$0BA@@@QAAAAJJ@Z");
//};

//public: c_static_stack<long, 16>::c_static_stack<long, 16>(void)
//{
//    mangled_ppc("??0?$c_static_stack@J$0BA@@@QAA@XZ");
//};

//public: bool c_static_stack<union real_point2d, 16>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Treal_point2d@@$0BA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<union real_point2d, 16>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Treal_point2d@@$0BA@@@QAAJXZ");
//};

//public: union real_point2d * c_static_stack<union real_point2d, 16>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Treal_point2d@@$0BA@@@QAAPATreal_point2d@@J@Z");
//};

//public: bool c_static_stack<float, 16>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@M$0BA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<float, 16>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@M$0BA@@@QAAJXZ");
//};

//public: float * c_static_stack<float, 16>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@M$0BA@@@QAAPAMJ@Z");
//};

//public: bool c_static_stack<long, 16>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$0BA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<long, 16>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@J$0BA@@@QAAJXZ");
//};

//public: long * c_static_stack<long, 16>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@J$0BA@@@QAAPAJJ@Z");
//};

//public: bool c_static_stack<union real_point2d, 16>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Treal_point2d@@$0BA@@@QBA_NXZ");
//};

//public: bool c_static_stack<union real_point2d, 16>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Treal_point2d@@$0BA@@@QBA_NXZ");
//};

//public: bool c_static_stack<float, 16>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@M$0BA@@@QBA_NXZ");
//};

//public: bool c_static_stack<float, 16>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@M$0BA@@@QBA_NXZ");
//};

//public: bool c_static_stack<long, 16>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$0BA@@@QBA_NXZ");
//};

//public: bool c_static_stack<long, 16>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@J$0BA@@@QBA_NXZ");
//};

//public: c_flags<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>::c_flags<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_object_data_flags@@K$0CA@Us_object_data_flags_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_object_serial_motion_task, unsigned short, 10, struct s_default_enum_string_resolver>::c_flags<enum e_object_serial_motion_task, unsigned short, 10, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_object_serial_motion_task@@G$09Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_object_inhibited_flags, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_object_inhibited_flags, unsigned char, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_object_inhibited_flags@@E$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_object_physics_flags, unsigned long, 28, struct s_default_enum_string_resolver>::c_flags<enum e_object_physics_flags, unsigned long, 28, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_object_physics_flags@@K$0BM@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_object_ai_flags, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_object_ai_flags, unsigned char, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_object_ai_flags@@E$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_object_simulation_flags, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_object_simulation_flags, unsigned char, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_object_simulation_flags@@E$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_object_damage_flags, unsigned long, 25, struct s_default_enum_string_resolver>::c_flags<enum e_object_damage_flags, unsigned long, 25, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_object_damage_flags@@K$0BJ@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_object_recycling_flags@@E$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_collision_test_flag, unsigned long, 24, struct s_default_enum_string_resolver>::set(enum e_collision_test_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_collision_test_flag@@K$0BI@Us_default_enum_string_resolver@@@@QAAXW4e_collision_test_flag@@_N@Z");
//};

//public: void c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_collision_test_objects_flag@@K$0BA@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>::set(enum e_collision_test_objects_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_collision_test_objects_flag@@K$0BA@Us_default_enum_string_resolver@@@@QAAXW4e_collision_test_objects_flag@@_N@Z");
//};

//public: unsigned long c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_collision_test_objects_flag@@K$0BA@Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: void c_flags_no_init<enum e_simulation_projectile_effect_flag, unsigned char, 6, struct s_default_enum_string_resolver>::set(enum e_simulation_projectile_effect_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_simulation_projectile_effect_flag@@E$05Us_default_enum_string_resolver@@@@QAAXW4e_simulation_projectile_effect_flag@@_N@Z");
//};

//public: c_flags<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::c_flags<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_projectile_flags@@K$0BL@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_damage_definition_flags, unsigned long, 26, struct s_default_enum_string_resolver>::test(enum e_damage_definition_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_damage_definition_flags@@K$0BK@Us_default_enum_string_resolver@@@@QBA_NW4e_damage_definition_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_effect_creation_flags@@K$05Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::set(enum e_effect_creation_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_effect_creation_flags@@K$05Us_default_enum_string_resolver@@@@QAAXW4e_effect_creation_flags@@_N@Z");
//};

//public: c_flags<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::c_flags<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_effect_creation_flags@@K$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//bool operator!=<enum e_input_user_index>(enum e_input_user_index const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9W4e_input_user_index@@@@YA_NABW4e_input_user_index@@ABW4e_none_sentinel@@@Z");
//};

//public: void c_flags_no_init<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_object_data_flags@@K$0CA@Us_object_data_flags_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_object_data_flags, unsigned long, 32, struct s_object_data_flags_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_object_data_flags@@K$0CA@Us_object_data_flags_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_object_serial_motion_task, unsigned short, 10, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_object_serial_motion_task@@G$09Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_object_inhibited_flags, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_object_inhibited_flags@@E$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_object_inhibited_flags, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_object_inhibited_flags@@E$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_object_physics_flags, unsigned long, 28, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_object_physics_flags@@K$0BM@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_object_ai_flags, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_object_ai_flags@@E$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_object_ai_flags, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_object_ai_flags@@E$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_object_simulation_flags, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_object_simulation_flags@@E$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_object_damage_flags, unsigned long, 25, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_object_damage_flags@@K$0BJ@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_object_damage_flags, unsigned long, 25, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_object_damage_flags@@K$0BJ@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_object_recycling_flags@@E$05Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_object_recycling_flags@@E$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_collision_test_flag, unsigned long, 24, struct s_default_enum_string_resolver>::valid_bit(enum e_collision_test_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_collision_test_flag@@K$0BI@Us_default_enum_string_resolver@@@@SA_NW4e_collision_test_flag@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_collision_test_flag, unsigned long, 24, struct s_default_enum_string_resolver>::flag_size_type(enum e_collision_test_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_collision_test_flag@@K$0BI@Us_default_enum_string_resolver@@@@CAKW4e_collision_test_flag@@@Z");
//};

//public: static bool c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>::valid_bit(enum e_collision_test_objects_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_collision_test_objects_flag@@K$0BA@Us_default_enum_string_resolver@@@@SA_NW4e_collision_test_objects_flag@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_collision_test_objects_flag, unsigned long, 16, struct s_default_enum_string_resolver>::flag_size_type(enum e_collision_test_objects_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_collision_test_objects_flag@@K$0BA@Us_default_enum_string_resolver@@@@CAKW4e_collision_test_objects_flag@@@Z");
//};

//public: void c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_projectile_flags@@K$0BL@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_projectile_flags@@K$0BL@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_damage_definition_flags, unsigned long, 26, struct s_default_enum_string_resolver>::valid_bit(enum e_damage_definition_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_damage_definition_flags@@K$0BK@Us_default_enum_string_resolver@@@@SA_NW4e_damage_definition_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_damage_definition_flags, unsigned long, 26, struct s_default_enum_string_resolver>::flag_size_type(enum e_damage_definition_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_damage_definition_flags@@K$0BK@Us_default_enum_string_resolver@@@@CAKW4e_damage_definition_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_effect_creation_flags@@K$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_effect_creation_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_effect_creation_flags@@K$05Us_default_enum_string_resolver@@@@SA_NW4e_effect_creation_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_effect_creation_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_effect_creation_flags@@K$05Us_default_enum_string_resolver@@@@CAKW4e_effect_creation_flags@@@Z");
//};

//bool operator==<enum e_input_user_index>(enum e_input_user_index const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8W4e_input_user_index@@@@YA_NABW4e_input_user_index@@ABW4e_none_sentinel@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_object_serial_motion_task, unsigned short, 10, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_object_serial_motion_task@@G$09Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_object_inhibited_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_object_inhibited_flags@@E$03Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_object_physics_flags, unsigned long, 28, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_object_physics_flags@@K$0BM@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_object_ai_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_object_ai_flags@@E$03Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_object_simulation_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_object_simulation_flags@@E$04Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_object_damage_flags, unsigned long, 25, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_object_damage_flags@@K$0BJ@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_object_recycling_flags@@E$05Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_projectile_flags@@K$0BL@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_effect_creation_flags@@K$05Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_object_serial_motion_task, unsigned short, 10, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_object_serial_motion_task)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_object_serial_motion_task@@G$09Us_default_enum_string_resolver@@@@CAGW4e_object_serial_motion_task@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_object_inhibited_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_object_inhibited_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_object_inhibited_flags@@E$03Us_default_enum_string_resolver@@@@CAEW4e_object_inhibited_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_object_physics_flags, unsigned long, 28, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_object_physics_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_object_physics_flags@@K$0BM@Us_default_enum_string_resolver@@@@CAKW4e_object_physics_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_object_ai_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_object_ai_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_object_ai_flags@@E$03Us_default_enum_string_resolver@@@@CAEW4e_object_ai_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_object_simulation_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_object_simulation_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_object_simulation_flags@@E$04Us_default_enum_string_resolver@@@@CAEW4e_object_simulation_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_object_damage_flags, unsigned long, 25, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_object_damage_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_object_damage_flags@@K$0BJ@Us_default_enum_string_resolver@@@@CAKW4e_object_damage_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_object_recycling_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_object_recycling_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_object_recycling_flags@@E$05Us_default_enum_string_resolver@@@@CAEW4e_object_recycling_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_projectile_flags, unsigned long, 27, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_projectile_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_projectile_flags@@K$0BL@Us_default_enum_string_resolver@@@@CAKW4e_projectile_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_effect_creation_flags, unsigned long, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_effect_creation_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_effect_creation_flags@@K$05Us_default_enum_string_resolver@@@@CAKW4e_effect_creation_flags@@@Z");
//};

//union euler_angles2d * set_real_euler_angles2d(union euler_angles2d *, float, float)
//{
//    mangled_ppc("?set_real_euler_angles2d@@YAPATeuler_angles2d@@PAT1@MM@Z");
//};

//public: virtual hkpSphereShape::~hkpSphereShape(void)
//{
//    mangled_ppc("??1hkpSphereShape@@UAA@XZ");
//};

//public: virtual hkpConvexShape::~hkpConvexShape(void)
//{
//    mangled_ppc("??1hkpConvexShape@@UAA@XZ");
//};

//public: virtual hkpSphereRepShape::~hkpSphereRepShape(void)
//{
//    mangled_ppc("??1hkpSphereRepShape@@UAA@XZ");
//};

//public: virtual hkpShape::~hkpShape(void)
//{
//    mangled_ppc("??1hkpShape@@UAA@XZ");
//};

//public: virtual hkReferencedObject::~hkReferencedObject(void)
//{
//    mangled_ppc("??1hkReferencedObject@@UAA@XZ");
//};

//public: virtual hkBaseObject::~hkBaseObject(void)
//{
//    mangled_ppc("??1hkBaseObject@@UAA@XZ");
//};

//merged_82B95560
//{
//    mangled_ppc("merged_82B95560");
//};

//merged_82B955A8
//{
//    mangled_ppc("merged_82B955A8");
//};

//public: static void hkReferencedObject::operator delete(void *)
//{
//    mangled_ppc("??3hkReferencedObject@@SAXPAX@Z");
//};

