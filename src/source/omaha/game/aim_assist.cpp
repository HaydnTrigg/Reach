/* ---------- headers */

#include "omaha\game\aim_assist.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_aim_assist_target, 64>::k_element_count; // "?k_element_count@?$s_static_array@Us_aim_assist_target@@$0EA@@@2JB"
// bool collision_hierarchy_objects_in_cone_enabled; // "?collision_hierarchy_objects_in_cone_enabled@@3_NA"
// struct s_debugland g_debugland; // "?g_debugland@@3Us_debugland@@A"
// bool g_aim_assist_log; // "?g_aim_assist_log@@3_NA"
// bool debug_aim_assist_targets_enabled; // "?debug_aim_assist_targets_enabled@@3_NA"
// bool debug_aim_assist_targets_names; // "?debug_aim_assist_targets_names@@3_NA"
// bool debug_aim_assist_vectors; // "?debug_aim_assist_vectors@@3_NA"
// bool debug_aim_assist_lead_vectors_disabled; // "?debug_aim_assist_lead_vectors_disabled@@3_NA"
// bool aim_assist_disable_target_lead_vector; // "?aim_assist_disable_target_lead_vector@@3_NA"
// struct s_per_user_aim_assist_debug *g_per_user_debug_info; // "?g_per_user_debug_info@@3PAUs_per_user_aim_assist_debug@@A"

// void aim_assist_targeting_clear(struct s_aim_assist_targeting_result *);
// void aim_assist_targeting_encode(class c_bitstream *, struct s_aim_assist_targeting_result const *);
// bool aim_assist_targeting_decode(class c_bitstream *, struct s_aim_assist_targeting_result *);
// bool aim_assist_targeting_valid(struct s_aim_assist_targeting_result const *);
// void player_aim_assist(enum e_input_user_index, class c_flags<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>, union vector3d const *, short, struct s_aim_assist_control_result *, struct s_aim_assist_targeting_result *);
// public: s_aim_assist_target::s_aim_assist_target(void);
// public: s_aim_assist_query::s_aim_assist_query(void);
// public: aim_assist_parameters::aim_assist_parameters(void);
// void player_aim_assist_update_lead_vector(long, union vector3d const *, struct s_aim_assist_targeting_result *);
// void aim_assist_debug_render(void);
// long player_aim_assist_get_player_under_crosshair(enum e_output_user_index);
// bool player_aim_projectile_internal(long, struct s_aim_assist_targeting_result const *, long, bool, union real_point3d const *, union real_point3d const *, union vector3d const *, bool, struct s_aim_projectile_internal_result *);
// void player_aim_projectile_build_auto_aim_cone_origin_and_projectile_direction(struct s_aim_assist_targeting_result const *, long, bool, bool, bool, float, union vector3d const *, union real_point3d *, union vector3d *, union real_point3d *);
// void player_build_auto_aim_cone_origin(long, bool, union vector3d const *, union real_point3d *, union real_point3d *);
// void player_build_auto_aim_cone_origin_and_camera_direction(long, bool, union vector3d const *, union real_point3d *, union vector3d *, union real_point3d *);
// bool player_aim_projectile(long, struct s_aim_assist_targeting_result const *, long, enum e_projectile_source, bool, union real_point3d const *, union real_point3d const *, union vector3d *);
// bool aim_assist_get_ghost_reticule_position(long, struct s_aim_assist_targeting_result const *, union real_point3d *);
// void aim_assist_get_implied_aiming_vector(long, struct s_aim_assist_targeting_result const *, union vector3d *);
// bool aim_assist_build_query_parameters(long, class c_flags<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>, short, struct s_aim_assist_query *);
// long aim_assist_guess_weapon_projectile_definition_index(long);
// long aim_assist_get_unit_weapon(long);
// bool aim_assist_compute(long, struct s_aim_assist_query const *, union real_point3d const *, union vector3d const *, long, long, class c_game_team, struct s_aim_assist_target *);
// public: s_static_array<struct s_aim_assist_target, 64>::s_static_array<struct s_aim_assist_target, 64>(void);
// long find_aim_assist_targets(long, struct s_aim_assist_query const *, struct s_cluster_reference, union real_point3d const *, union vector3d const *, long, long, class c_game_team, class s_static_array<struct s_aim_assist_target, 64> &);
// void debug_aim_assist_targets_add(long, union real_point3d const *, union vector3d const *, class s_static_array<struct s_aim_assist_target, 64> &, long, long);
// void debug_aim_assist_clear(enum e_input_user_index);
// void debug_aim_assist_angles_add(enum e_input_user_index, struct s_aim_assist_query const *);
// void debug_aim_assist_result_add(enum e_input_user_index, struct s_aim_assist_targeting_result const *);
// void debug_aim_assist_targets(void);
// bool aim_assist_calculate_lead_vectors(void);
// long find_aim_assist_targets_recursive(struct s_aim_assist_query const *, long, union real_point3d const *, union vector3d const *, float, float, float, long, long, class c_game_team, long, class s_static_array<struct s_aim_assist_target, 64> &);
// long find_aim_assist_laser_designation_targets(long, struct s_aim_assist_query const *, union real_point3d const *, union vector3d const *, float, float, float, long, long, class s_static_array<struct s_aim_assist_target, 64> &);
// bool aim_assist_object_can_be_considered(long);
// bool aim_assist_object_within_cone(long, union real_point3d const *, union vector3d const *, float, float, float);
// bool aim_assist_object_should_be_aimed_at(long, long, long, class c_game_team, bool, bool *, bool *);
// bool aim_assist_teamless_vehicle_should_be_aimed_at(long, long, long, class c_game_team, bool, bool *, bool *);
// bool aim_assist_teamless_unit_has_passenger(long, class c_game_team, bool *);
// long aim_assist_compute_targets_from_object(struct s_aim_assist_query const *, long, long, bool, bool, union real_point3d const *, union vector3d const *, long, class s_static_array<struct s_aim_assist_target, 64> &);
// bool aim_assist_build_target(long, union real_point3d const *, union vector3d const *, struct s_aim_assist_target *);
// bool aim_assist_build_target(struct s_aim_assist_query const *, long, long, bool, bool, bool, long, struct s_model_target const *, struct real_matrix4x3const *, struct real_matrix4x3const *, union real_point3d const *, union vector3d const *, struct s_aim_assist_target *);
// void aim_assist_compute_target_velocity_offset(long, union real_point3d const *, union real_point3d const *, float, float, union vector3d *);
// bool aim_assist_evaluate_target(struct s_aim_assist_query const *, float, struct s_aim_assist_target *);
// float compute_composite_attenuation(float, float, float, float, float, float);
// float compute_attenuation(float, float, float, float);
// bool biped_compute_autoaim_target(long, union real_point3d const *, union vector3d const *, union real_point3d *);
// void pill_compute_autoaim_target(union real_point3d const *, union vector3d const *, float, union real_point3d const *, union vector3d const *, union real_point3d *);
// void sphere_compute_autoaim_target(union real_point3d const *, float, union real_point3d const *, union vector3d const *, union real_point3d *);
// int compare_targets(void const *, void const *);
// bool aim_assist_clear_line_of_sight(union real_point3d const *, union real_point3d const *, float, long, long, bool);
// void aim_assist_object_get_translational_velocity(long, bool, union vector3d *, long *, long *, long *);
// bool aim_assist_from_targeting(struct s_aim_assist_query const *, union real_point3d const *, union vector3d const *, long, long, class c_game_team, struct s_aim_assist_targeting_result const *, bool, bool, struct s_aim_assist_target *);
// bool aim_assist_retrieve_targeting_info(struct s_aim_assist_targeting_result const *, struct s_model_target const **, struct real_matrix4x3*, struct real_matrix4x3*, bool *);
// bool pin_aiming_for_player(long);
// long unit_ignore_object_index_get(long);
// public: void s_per_user_aim_assist_debug::clear(void);
// public: void s_per_user_aim_assist_debug::set_targets(long, union real_point3d const *, union vector3d const *, class s_static_array<struct s_aim_assist_target, 64> &, long, long);
// public: void s_per_user_aim_assist_debug::set_query_info(struct s_aim_assist_query const *);
// public: void s_per_user_aim_assist_debug::set_result(struct s_aim_assist_targeting_result const *);
// public: void s_per_user_aim_assist_debug::render(enum e_output_user_index) const;
// private: void s_per_user_aim_assist_debug::render_target(long) const;
// private: void s_per_user_aim_assist_debug::render_autoaim(enum e_output_user_index) const;
// private: void s_per_user_aim_assist_debug::render_angles(enum e_output_user_index) const;
// private: void s_per_user_aim_assist_debug::render_lead_vector(void) const;
// public: void s_angle_with_falloff::clear(void);
// public: void s_angle_with_falloff::set(float, float, float, float);
// public: void s_angle_with_falloff::render_first_person(enum e_output_user_index, union argb_color const *) const;
// public: void s_angle_with_falloff::render_third_person(union real_point3d const *, union vector3d const *, union argb_color const *) const;
// public: struct s_lasing_datum * c_data_iterator<struct s_lasing_datum>::get_datum(void) const;
// public: c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>::c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>(unsigned short);
// public: struct s_aim_assist_target * s_static_array<struct s_aim_assist_target, 64>::get_elements(void);
// public: bool c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_aim_assist_parameters_flags) const;
// public: void c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum e_aim_assist_parameters_flags, bool);
// public: c_flags<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_model_target_lock_on_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_model_target_lock_on_flags) const;
// public: bool c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_aim_assist_query_flags) const;
// public: void c_bitstream::write_flags<class c_flags<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver> *);
// public: struct s_aim_assist_target & s_static_array<struct s_aim_assist_target, 64>::operator[]<long>(long);
// public: struct s_aim_assist_target const & s_static_array<struct s_aim_assist_target, 64>::operator[]<long>(long) const;
// public: void c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_aim_assist_parameters_flags);
// private: static unsigned char c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_aim_assist_parameters_flags);
// public: unsigned char c_flags_no_init<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: static bool c_flags_no_init<enum e_model_target_lock_on_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_model_target_lock_on_flags);
// private: static unsigned char c_flags_no_init<enum e_model_target_lock_on_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_model_target_lock_on_flags);
// public: static bool s_static_array<struct s_aim_assist_target, 64>::valid<long>(long);
// private: static unsigned char c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: bool c_flags_no_init<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_aim_assist_parameters_flags);
// public: s_per_user_aim_assist_debug::s_per_user_aim_assist_debug(void);

//void aim_assist_targeting_clear(struct s_aim_assist_targeting_result *)
//{
//    mangled_ppc("?aim_assist_targeting_clear@@YAXPAUs_aim_assist_targeting_result@@@Z");
//};

//void aim_assist_targeting_encode(class c_bitstream *, struct s_aim_assist_targeting_result const *)
//{
//    mangled_ppc("?aim_assist_targeting_encode@@YAXPAVc_bitstream@@PBUs_aim_assist_targeting_result@@@Z");
//};

//bool aim_assist_targeting_decode(class c_bitstream *, struct s_aim_assist_targeting_result *)
//{
//    mangled_ppc("?aim_assist_targeting_decode@@YA_NPAVc_bitstream@@PAUs_aim_assist_targeting_result@@@Z");
//};

//bool aim_assist_targeting_valid(struct s_aim_assist_targeting_result const *)
//{
//    mangled_ppc("?aim_assist_targeting_valid@@YA_NPBUs_aim_assist_targeting_result@@@Z");
//};

//void player_aim_assist(enum e_input_user_index, class c_flags<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>, union vector3d const *, short, struct s_aim_assist_control_result *, struct s_aim_assist_targeting_result *)
//{
//    mangled_ppc("?player_aim_assist@@YAXW4e_input_user_index@@V?$c_flags@W4e_aim_assist_query_flags@@E$01Us_default_enum_string_resolver@@@@PBTvector3d@@FPAUs_aim_assist_control_result@@PAUs_aim_assist_targeting_result@@@Z");
//};

//public: s_aim_assist_target::s_aim_assist_target(void)
//{
//    mangled_ppc("??0s_aim_assist_target@@QAA@XZ");
//};

//public: s_aim_assist_query::s_aim_assist_query(void)
//{
//    mangled_ppc("??0s_aim_assist_query@@QAA@XZ");
//};

//public: aim_assist_parameters::aim_assist_parameters(void)
//{
//    mangled_ppc("??0aim_assist_parameters@@QAA@XZ");
//};

//void player_aim_assist_update_lead_vector(long, union vector3d const *, struct s_aim_assist_targeting_result *)
//{
//    mangled_ppc("?player_aim_assist_update_lead_vector@@YAXJPBTvector3d@@PAUs_aim_assist_targeting_result@@@Z");
//};

//void aim_assist_debug_render(void)
//{
//    mangled_ppc("?aim_assist_debug_render@@YAXXZ");
//};

//long player_aim_assist_get_player_under_crosshair(enum e_output_user_index)
//{
//    mangled_ppc("?player_aim_assist_get_player_under_crosshair@@YAJW4e_output_user_index@@@Z");
//};

//bool player_aim_projectile_internal(long, struct s_aim_assist_targeting_result const *, long, bool, union real_point3d const *, union real_point3d const *, union vector3d const *, bool, struct s_aim_projectile_internal_result *)
//{
//    mangled_ppc("?player_aim_projectile_internal@@YA_NJPBUs_aim_assist_targeting_result@@J_NPBTreal_point3d@@2PBTvector3d@@1PAUs_aim_projectile_internal_result@@@Z");
//};

//void player_aim_projectile_build_auto_aim_cone_origin_and_projectile_direction(struct s_aim_assist_targeting_result const *, long, bool, bool, bool, float, union vector3d const *, union real_point3d *, union vector3d *, union real_point3d *)
//{
//    mangled_ppc("?player_aim_projectile_build_auto_aim_cone_origin_and_projectile_direction@@YAXPBUs_aim_assist_targeting_result@@J_N11MPBTvector3d@@PATreal_point3d@@PAT2@3@Z");
//};

//void player_build_auto_aim_cone_origin(long, bool, union vector3d const *, union real_point3d *, union real_point3d *)
//{
//    mangled_ppc("?player_build_auto_aim_cone_origin@@YAXJ_NPBTvector3d@@PATreal_point3d@@2@Z");
//};

//void player_build_auto_aim_cone_origin_and_camera_direction(long, bool, union vector3d const *, union real_point3d *, union vector3d *, union real_point3d *)
//{
//    mangled_ppc("?player_build_auto_aim_cone_origin_and_camera_direction@@YAXJ_NPBTvector3d@@PATreal_point3d@@PAT1@2@Z");
//};

//bool player_aim_projectile(long, struct s_aim_assist_targeting_result const *, long, enum e_projectile_source, bool, union real_point3d const *, union real_point3d const *, union vector3d *)
//{
//    mangled_ppc("?player_aim_projectile@@YA_NJPBUs_aim_assist_targeting_result@@JW4e_projectile_source@@_NPBTreal_point3d@@3PATvector3d@@@Z");
//};

//bool aim_assist_get_ghost_reticule_position(long, struct s_aim_assist_targeting_result const *, union real_point3d *)
//{
//    mangled_ppc("?aim_assist_get_ghost_reticule_position@@YA_NJPBUs_aim_assist_targeting_result@@PATreal_point3d@@@Z");
//};

//void aim_assist_get_implied_aiming_vector(long, struct s_aim_assist_targeting_result const *, union vector3d *)
//{
//    mangled_ppc("?aim_assist_get_implied_aiming_vector@@YAXJPBUs_aim_assist_targeting_result@@PATvector3d@@@Z");
//};

//bool aim_assist_build_query_parameters(long, class c_flags<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>, short, struct s_aim_assist_query *)
//{
//    mangled_ppc("?aim_assist_build_query_parameters@@YA_NJV?$c_flags@W4e_aim_assist_query_flags@@E$01Us_default_enum_string_resolver@@@@FPAUs_aim_assist_query@@@Z");
//};

//long aim_assist_guess_weapon_projectile_definition_index(long)
//{
//    mangled_ppc("?aim_assist_guess_weapon_projectile_definition_index@@YAJJ@Z");
//};

//long aim_assist_get_unit_weapon(long)
//{
//    mangled_ppc("?aim_assist_get_unit_weapon@@YAJJ@Z");
//};

//bool aim_assist_compute(long, struct s_aim_assist_query const *, union real_point3d const *, union vector3d const *, long, long, class c_game_team, struct s_aim_assist_target *)
//{
//    mangled_ppc("?aim_assist_compute@@YA_NJPBUs_aim_assist_query@@PBTreal_point3d@@PBTvector3d@@JJVc_game_team@@PAUs_aim_assist_target@@@Z");
//};

//public: s_static_array<struct s_aim_assist_target, 64>::s_static_array<struct s_aim_assist_target, 64>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_aim_assist_target@@$0EA@@@QAA@XZ");
//};

//long find_aim_assist_targets(long, struct s_aim_assist_query const *, struct s_cluster_reference, union real_point3d const *, union vector3d const *, long, long, class c_game_team, class s_static_array<struct s_aim_assist_target, 64> &)
//{
//    mangled_ppc("?find_aim_assist_targets@@YAJJPBUs_aim_assist_query@@Us_cluster_reference@@PBTreal_point3d@@PBTvector3d@@JJVc_game_team@@AAV?$s_static_array@Us_aim_assist_target@@$0EA@@@@Z");
//};

//void debug_aim_assist_targets_add(long, union real_point3d const *, union vector3d const *, class s_static_array<struct s_aim_assist_target, 64> &, long, long)
//{
//    mangled_ppc("?debug_aim_assist_targets_add@@YAXJPBTreal_point3d@@PBTvector3d@@AAV?$s_static_array@Us_aim_assist_target@@$0EA@@@JJ@Z");
//};

//void debug_aim_assist_clear(enum e_input_user_index)
//{
//    mangled_ppc("?debug_aim_assist_clear@@YAXW4e_input_user_index@@@Z");
//};

//void debug_aim_assist_angles_add(enum e_input_user_index, struct s_aim_assist_query const *)
//{
//    mangled_ppc("?debug_aim_assist_angles_add@@YAXW4e_input_user_index@@PBUs_aim_assist_query@@@Z");
//};

//void debug_aim_assist_result_add(enum e_input_user_index, struct s_aim_assist_targeting_result const *)
//{
//    mangled_ppc("?debug_aim_assist_result_add@@YAXW4e_input_user_index@@PBUs_aim_assist_targeting_result@@@Z");
//};

//void debug_aim_assist_targets(void)
//{
//    mangled_ppc("?debug_aim_assist_targets@@YAXXZ");
//};

//bool aim_assist_calculate_lead_vectors(void)
//{
//    mangled_ppc("?aim_assist_calculate_lead_vectors@@YA_NXZ");
//};

//long find_aim_assist_targets_recursive(struct s_aim_assist_query const *, long, union real_point3d const *, union vector3d const *, float, float, float, long, long, class c_game_team, long, class s_static_array<struct s_aim_assist_target, 64> &)
//{
//    mangled_ppc("?find_aim_assist_targets_recursive@@YAJPBUs_aim_assist_query@@JPBTreal_point3d@@PBTvector3d@@MMMJJVc_game_team@@JAAV?$s_static_array@Us_aim_assist_target@@$0EA@@@@Z");
//};

//long find_aim_assist_laser_designation_targets(long, struct s_aim_assist_query const *, union real_point3d const *, union vector3d const *, float, float, float, long, long, class s_static_array<struct s_aim_assist_target, 64> &)
//{
//    mangled_ppc("?find_aim_assist_laser_designation_targets@@YAJJPBUs_aim_assist_query@@PBTreal_point3d@@PBTvector3d@@MMMJJAAV?$s_static_array@Us_aim_assist_target@@$0EA@@@@Z");
//};

//bool aim_assist_object_can_be_considered(long)
//{
//    mangled_ppc("?aim_assist_object_can_be_considered@@YA_NJ@Z");
//};

//bool aim_assist_object_within_cone(long, union real_point3d const *, union vector3d const *, float, float, float)
//{
//    mangled_ppc("?aim_assist_object_within_cone@@YA_NJPBTreal_point3d@@PBTvector3d@@MMM@Z");
//};

//bool aim_assist_object_should_be_aimed_at(long, long, long, class c_game_team, bool, bool *, bool *)
//{
//    mangled_ppc("?aim_assist_object_should_be_aimed_at@@YA_NJJJVc_game_team@@_NPA_N2@Z");
//};

//bool aim_assist_teamless_vehicle_should_be_aimed_at(long, long, long, class c_game_team, bool, bool *, bool *)
//{
//    mangled_ppc("?aim_assist_teamless_vehicle_should_be_aimed_at@@YA_NJJJVc_game_team@@_NPA_N2@Z");
//};

//bool aim_assist_teamless_unit_has_passenger(long, class c_game_team, bool *)
//{
//    mangled_ppc("?aim_assist_teamless_unit_has_passenger@@YA_NJVc_game_team@@PA_N@Z");
//};

//long aim_assist_compute_targets_from_object(struct s_aim_assist_query const *, long, long, bool, bool, union real_point3d const *, union vector3d const *, long, class s_static_array<struct s_aim_assist_target, 64> &)
//{
//    mangled_ppc("?aim_assist_compute_targets_from_object@@YAJPBUs_aim_assist_query@@JJ_N1PBTreal_point3d@@PBTvector3d@@JAAV?$s_static_array@Us_aim_assist_target@@$0EA@@@@Z");
//};

//bool aim_assist_build_target(long, union real_point3d const *, union vector3d const *, struct s_aim_assist_target *)
//{
//    mangled_ppc("?aim_assist_build_target@@YA_NJPBTreal_point3d@@PBTvector3d@@PAUs_aim_assist_target@@@Z");
//};

//bool aim_assist_build_target(struct s_aim_assist_query const *, long, long, bool, bool, bool, long, struct s_model_target const *, struct real_matrix4x3const *, struct real_matrix4x3const *, union real_point3d const *, union vector3d const *, struct s_aim_assist_target *)
//{
//    mangled_ppc("?aim_assist_build_target@@YA_NPBUs_aim_assist_query@@JJ_N11JPBUs_model_target@@PBUreal_matrix4x3@@3PBTreal_point3d@@PBTvector3d@@PAUs_aim_assist_target@@@Z");
//};

//void aim_assist_compute_target_velocity_offset(long, union real_point3d const *, union real_point3d const *, float, float, union vector3d *)
//{
//    mangled_ppc("?aim_assist_compute_target_velocity_offset@@YAXJPBTreal_point3d@@0MMPATvector3d@@@Z");
//};

//bool aim_assist_evaluate_target(struct s_aim_assist_query const *, float, struct s_aim_assist_target *)
//{
//    mangled_ppc("?aim_assist_evaluate_target@@YA_NPBUs_aim_assist_query@@MPAUs_aim_assist_target@@@Z");
//};

//float compute_composite_attenuation(float, float, float, float, float, float)
//{
//    mangled_ppc("?compute_composite_attenuation@@YAMMMMMMM@Z");
//};

//float compute_attenuation(float, float, float, float)
//{
//    mangled_ppc("?compute_attenuation@@YAMMMMM@Z");
//};

//bool biped_compute_autoaim_target(long, union real_point3d const *, union vector3d const *, union real_point3d *)
//{
//    mangled_ppc("?biped_compute_autoaim_target@@YA_NJPBTreal_point3d@@PBTvector3d@@PAT1@@Z");
//};

//void pill_compute_autoaim_target(union real_point3d const *, union vector3d const *, float, union real_point3d const *, union vector3d const *, union real_point3d *)
//{
//    mangled_ppc("?pill_compute_autoaim_target@@YAXPBTreal_point3d@@PBTvector3d@@M01PAT1@@Z");
//};

//void sphere_compute_autoaim_target(union real_point3d const *, float, union real_point3d const *, union vector3d const *, union real_point3d *)
//{
//    mangled_ppc("?sphere_compute_autoaim_target@@YAXPBTreal_point3d@@M0PBTvector3d@@PAT1@@Z");
//};

//int compare_targets(void const *, void const *)
//{
//    mangled_ppc("?compare_targets@@YAHPBX0@Z");
//};

//bool aim_assist_clear_line_of_sight(union real_point3d const *, union real_point3d const *, float, long, long, bool)
//{
//    mangled_ppc("?aim_assist_clear_line_of_sight@@YA_NPBTreal_point3d@@0MJJ_N@Z");
//};

//void aim_assist_object_get_translational_velocity(long, bool, union vector3d *, long *, long *, long *)
//{
//    mangled_ppc("?aim_assist_object_get_translational_velocity@@YAXJ_NPATvector3d@@PAJ22@Z");
//};

//bool aim_assist_from_targeting(struct s_aim_assist_query const *, union real_point3d const *, union vector3d const *, long, long, class c_game_team, struct s_aim_assist_targeting_result const *, bool, bool, struct s_aim_assist_target *)
//{
//    mangled_ppc("?aim_assist_from_targeting@@YA_NPBUs_aim_assist_query@@PBTreal_point3d@@PBTvector3d@@JJVc_game_team@@PBUs_aim_assist_targeting_result@@_N5PAUs_aim_assist_target@@@Z");
//};

//bool aim_assist_retrieve_targeting_info(struct s_aim_assist_targeting_result const *, struct s_model_target const **, struct real_matrix4x3*, struct real_matrix4x3*, bool *)
//{
//    mangled_ppc("?aim_assist_retrieve_targeting_info@@YA_NPBUs_aim_assist_targeting_result@@PAPBUs_model_target@@PAUreal_matrix4x3@@2PA_N@Z");
//};

//bool pin_aiming_for_player(long)
//{
//    mangled_ppc("?pin_aiming_for_player@@YA_NJ@Z");
//};

//long unit_ignore_object_index_get(long)
//{
//    mangled_ppc("?unit_ignore_object_index_get@@YAJJ@Z");
//};

//public: void s_per_user_aim_assist_debug::clear(void)
//{
//    mangled_ppc("?clear@s_per_user_aim_assist_debug@@QAAXXZ");
//};

//public: void s_per_user_aim_assist_debug::set_targets(long, union real_point3d const *, union vector3d const *, class s_static_array<struct s_aim_assist_target, 64> &, long, long)
//{
//    mangled_ppc("?set_targets@s_per_user_aim_assist_debug@@QAAXJPBTreal_point3d@@PBTvector3d@@AAV?$s_static_array@Us_aim_assist_target@@$0EA@@@JJ@Z");
//};

//public: void s_per_user_aim_assist_debug::set_query_info(struct s_aim_assist_query const *)
//{
//    mangled_ppc("?set_query_info@s_per_user_aim_assist_debug@@QAAXPBUs_aim_assist_query@@@Z");
//};

//public: void s_per_user_aim_assist_debug::set_result(struct s_aim_assist_targeting_result const *)
//{
//    mangled_ppc("?set_result@s_per_user_aim_assist_debug@@QAAXPBUs_aim_assist_targeting_result@@@Z");
//};

//public: void s_per_user_aim_assist_debug::render(enum e_output_user_index) const
//{
//    mangled_ppc("?render@s_per_user_aim_assist_debug@@QBAXW4e_output_user_index@@@Z");
//};

//private: void s_per_user_aim_assist_debug::render_target(long) const
//{
//    mangled_ppc("?render_target@s_per_user_aim_assist_debug@@ABAXJ@Z");
//};

//private: void s_per_user_aim_assist_debug::render_autoaim(enum e_output_user_index) const
//{
//    mangled_ppc("?render_autoaim@s_per_user_aim_assist_debug@@ABAXW4e_output_user_index@@@Z");
//};

//private: void s_per_user_aim_assist_debug::render_angles(enum e_output_user_index) const
//{
//    mangled_ppc("?render_angles@s_per_user_aim_assist_debug@@ABAXW4e_output_user_index@@@Z");
//};

//private: void s_per_user_aim_assist_debug::render_lead_vector(void) const
//{
//    mangled_ppc("?render_lead_vector@s_per_user_aim_assist_debug@@ABAXXZ");
//};

//public: void s_angle_with_falloff::clear(void)
//{
//    mangled_ppc("?clear@s_angle_with_falloff@@QAAXXZ");
//};

//public: void s_angle_with_falloff::set(float, float, float, float)
//{
//    mangled_ppc("?set@s_angle_with_falloff@@QAAXMMMM@Z");
//};

//public: void s_angle_with_falloff::render_first_person(enum e_output_user_index, union argb_color const *) const
//{
//    mangled_ppc("?render_first_person@s_angle_with_falloff@@QBAXW4e_output_user_index@@PBTargb_color@@@Z");
//};

//public: void s_angle_with_falloff::render_third_person(union real_point3d const *, union vector3d const *, union argb_color const *) const
//{
//    mangled_ppc("?render_third_person@s_angle_with_falloff@@QBAXPBTreal_point3d@@PBTvector3d@@PBTargb_color@@@Z");
//};

//public: struct s_lasing_datum * c_data_iterator<struct s_lasing_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_lasing_datum@@@@QBAPAUs_lasing_datum@@XZ");
//};

//public: c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>::c_flags<enum e_object_collision_cull_flag, unsigned short, 13, struct s_default_enum_string_resolver>(unsigned short)
//{
//    mangled_ppc("??0?$c_flags@W4e_object_collision_cull_flag@@G$0N@Us_default_enum_string_resolver@@@@QAA@G@Z");
//};

//public: struct s_aim_assist_target * s_static_array<struct s_aim_assist_target, 64>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_aim_assist_target@@$0EA@@@QAAPAUs_aim_assist_target@@XZ");
//};

//public: bool c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_aim_assist_parameters_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_aim_assist_parameters_flags@@E$04Us_default_enum_string_resolver@@@@QBA_NW4e_aim_assist_parameters_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum e_aim_assist_parameters_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_aim_assist_parameters_flags@@E$04Us_default_enum_string_resolver@@@@QAAXW4e_aim_assist_parameters_flags@@_N@Z");
//};

//public: c_flags<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_aim_assist_parameters_flags@@E$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_model_target_lock_on_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_model_target_lock_on_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_model_target_lock_on_flags@@E$03Us_default_enum_string_resolver@@@@QBA_NW4e_model_target_lock_on_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_aim_assist_query_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_aim_assist_query_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_aim_assist_query_flags@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_aim_assist_targeting_result_flags@@E$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_aim_assist_targeting_result_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_aim_assist_targeting_result_flags@@E$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_aim_assist_targeting_result_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: struct s_aim_assist_target & s_static_array<struct s_aim_assist_target, 64>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_aim_assist_target@@$0EA@@@QAAAAUs_aim_assist_target@@J@Z");
//};

//public: struct s_aim_assist_target const & s_static_array<struct s_aim_assist_target, 64>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_aim_assist_target@@$0EA@@@QBAABUs_aim_assist_target@@J@Z");
//};

//public: void c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_aim_assist_parameters_flags@@E$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_aim_assist_parameters_flags@@E$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_aim_assist_parameters_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_aim_assist_parameters_flags@@E$04Us_default_enum_string_resolver@@@@SA_NW4e_aim_assist_parameters_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_aim_assist_parameters_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_aim_assist_parameters_flags@@E$04Us_default_enum_string_resolver@@@@CAEW4e_aim_assist_parameters_flags@@@Z");
//};

//public: unsigned char c_flags_no_init<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_aim_assist_targeting_result_flags@@E$02Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_aim_assist_targeting_result_flags@@E$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: static bool c_flags_no_init<enum e_model_target_lock_on_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_model_target_lock_on_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_model_target_lock_on_flags@@E$03Us_default_enum_string_resolver@@@@SA_NW4e_model_target_lock_on_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_model_target_lock_on_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_model_target_lock_on_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_model_target_lock_on_flags@@E$03Us_default_enum_string_resolver@@@@CAEW4e_model_target_lock_on_flags@@@Z");
//};

//public: static bool s_static_array<struct s_aim_assist_target, 64>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_aim_assist_target@@$0EA@@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_aim_assist_parameters_flags@@E$04Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: bool c_flags_no_init<enum e_aim_assist_targeting_result_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_aim_assist_targeting_result_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_aim_assist_parameters_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_aim_assist_parameters_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_aim_assist_parameters_flags@@E$04Us_default_enum_string_resolver@@@@CAEW4e_aim_assist_parameters_flags@@@Z");
//};

//public: s_per_user_aim_assist_debug::s_per_user_aim_assist_debug(void)
//{
//    mangled_ppc("??0s_per_user_aim_assist_debug@@QAA@XZ");
//};

