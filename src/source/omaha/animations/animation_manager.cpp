/* ---------- headers */

#include "omaha\animations\animation_manager.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_animation_blend_types, char, 0, 2, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_animation_blend_types@@D$0A@$01Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_animation_blend_types const c_enum_no_init<enum e_animation_blend_types, char, 0, 2, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_animation_blend_types@@D$0A@$01Us_default_enum_string_resolver@@@@2W4e_animation_blend_types@@B"
// bool debug_animation_gait_preserve_frame_ratio; // "?debug_animation_gait_preserve_frame_ratio@@3_NA"
// bool debug_animation_move_preserve_frame_ratio; // "?debug_animation_move_preserve_frame_ratio@@3_NA"
// bool debug_animation_footlock_draw_raw; // "?debug_animation_footlock_draw_raw@@3_NA"
// bool debug_animation_footlock_draw_turned; // "?debug_animation_footlock_draw_turned@@3_NA"
// bool debug_animation_footlock_draw_fitted; // "?debug_animation_footlock_draw_fitted@@3_NA"
// float g_animation_turn_speed_blend_scale; // "?g_animation_turn_speed_blend_scale@@3MA"
// bool disable_node_interpolation; // "?disable_node_interpolation@@3_NA"
// bool disable_analog_movement; // "?disable_analog_movement@@3_NA"
// bool disable_transition_animations; // "?disable_transition_animations@@3_NA"
// bool disable_animated_source_interpolation; // "?disable_animated_source_interpolation@@3_NA"
// bool debug_animation_ik_chains_disable; // "?debug_animation_ik_chains_disable@@3_NA"
// bool debug_animation_footlock_disable; // "?debug_animation_footlock_disable@@3_NA"
// bool debug_animation_precomputed_velocity_boundaries_disable; // "?debug_animation_precomputed_velocity_boundaries_disable@@3_NA"
// bool debug_animation_footlock_draw; // "?debug_animation_footlock_draw@@3_NA"
// bool debug_animation_footlock_draw_turn_sampling; // "?debug_animation_footlock_draw_turn_sampling@@3_NA"
// bool debug_animation_footlock_draw_grid_sampling; // "?debug_animation_footlock_draw_grid_sampling@@3_NA"
// bool debug_animation_footlock_draw_raycast; // "?debug_animation_footlock_draw_raycast@@3_NA"
// bool debug_animation_footlock_draw_contact; // "?debug_animation_footlock_draw_contact@@3_NA"
// bool debug_animation_footlock_draw_displacement; // "?debug_animation_footlock_draw_displacement@@3_NA"
// bool g_force_unit_walking; // "?g_force_unit_walking@@3_NA"
// bool g_facial_animation_testing_enabled; // "?g_facial_animation_testing_enabled@@3_NA"
// long debug_objects_animation_pose_channel; // "?debug_objects_animation_pose_channel@@3JA"
// class c_animation_preferred_list g_animation_preferred_list; // "?g_animation_preferred_list@@3Vc_animation_preferred_list@@A"

// bool animation_loops(long);
// long find_matched_state(long, struct s_matched_animation_state const *, long);
// public: void s_animation_goal_settings::clear(void);
// public: c_animation_manager::c_animation_manager(void);
// public: void c_animation_manager::finalize_intialization(long);
// public: void c_animation_manager::initialize(long, long, long, long, long);
// private: void c_animation_graph_search_cache::clear(void);
// public: c_animation_manager::c_animation_manager(class c_animation_manager const &);
// public: class c_animation_manager & c_animation_manager::operator=(class c_animation_manager const &);
// public: static bool c_animation_manager::validate_graph(long, long);
// public: bool c_animation_manager::reset_graph(long, long, bool);
// public: class c_animation_id c_animation_manager::locate_new_animation_id_on_graph_change(class c_animation_id, long, enum e_animation_graph_location, long, long) const;
// public: class c_vehicle_suspension const * c_model_animation_graph::find_suspension(long) const;
// public: struct s_function_overlay const * c_model_animation_graph::find_function_overlay(long) const;
// public: bool c_animation_manager::update_animation_channel_on_graph_change(class c_animation_channel *, long, long) const;
// public: bool c_animation_manager::update_animation_channel_on_weapon_change(class c_animation_channel *, long, long) const;
// public: class c_animation_id c_animation_manager::choose_random_variation(class c_animation_id) const;
// public: bool c_animation_manager::get_randomness_affects_game_state(void) const;
// public: static float c_animation_manager::choose_random_playback_speed(class c_animation_id);
// public: static long c_animation_manager::choose_random_start_time(class c_animation_id);
// private: bool c_animation_manager::internal_setup_animation_channel(class c_animation_channel *, class c_animation_channel_settings *, class c_flags<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>) const;
// private: bool c_animation_manager::internal_setup_auxilary_channel(class c_auxilary_channel *, class c_auxilary_channel_settings *) const;
// private: bool c_animation_manager::internal_setup_aiming_channel(class c_aiming_channel *, class c_aiming_channel_settings *) const;
// public: bool c_animation_manager::setup_animation_channel_by_index(class c_animation_channel *, class c_animation_id, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>) const;
// public: bool c_animation_manager::setup_animation_channel_by_name(class c_animation_channel *, long, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>) const;
// public: bool c_animation_manager::setup_animation_channel_by_parallel_impulse(class c_animation_channel *, long, long, long, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>) const;
// public: bool c_animation_manager::set_weapon(long, long);
// public: bool c_animation_manager::validate_weapon(long, long) const;
// public: void c_animation_manager::reset_weapon(void);
// public: bool c_animation_manager::weapon_is_valid(void) const;
// public: bool c_animation_manager::update_animation_channel(class c_animation_channel *, void (*)(struct s_animation_event_data const *, long), long) const;
// public: void c_animation_manager::pause_playback(bool);
// public: void c_animation_manager::pause_state_channel(bool);
// public: bool c_animation_manager::update_state_animation(void (*)(struct s_animation_event_data const *, long), long, long, struct real_orientation *, struct real_orientation const *);
// public: bool c_animation_manager::update_interpolation_animation(void (*)(struct s_animation_event_data const *, long), long);
// public: bool c_animation_manager::update_pending_match_animation(void (*)(struct s_animation_event_data const *, long), long);
// void match_channel_playback_to_match_frame(class c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>, class c_animation_channel *);
// bool state_flags_get_first_match(class c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>, enum e_animation_state_flags *);
// bool state_flags_get_next_match(class c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>, enum e_animation_state_flags, enum e_animation_state_flags *);
// bool state_flag_to_frame_event_matches(enum e_animation_state_flags, enum e_animation_frame_event_types *);
// bool active_state_matches_next(class c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>, class c_model_animation const *);
// bool frame_event_matches_to_state_flag(enum e_animation_frame_event_types, enum e_animation_state_flags *);
// public: bool c_animation_manager::update_animation(void (*)(struct s_animation_event_data const *, long), long, long, struct real_orientation *, struct real_orientation *);
// public: bool c_animation_manager::validate_mode(long) const;
// public: bool c_animation_manager::validate_state(long, long, long) const;
// public: class c_animation_id c_animation_manager::find_state_animation_id(long, long, long) const;
// public: class c_animation_id c_animation_manager::find_parallel_impulse_animation_id(long, long, long) const;
// public: class c_model_animation const * c_animation_manager::find_impulse_or_state_animation(long, long, long) const;
// public: class c_animation_id c_animation_manager::find_impulse_or_state_animation_id(long, long, long) const;
// public: class c_animation_id c_animation_manager::find_death_or_damage_animation_id(long, long, short, short, short *, short *) const;
// public: bool c_animation_manager::setup_animation_channel_by_death_or_damage(class c_animation_channel *, long, long, short, short, short *, short *) const;
// public: bool c_animation_manager::set_goal_by_death_or_damage(long, short, short, short *, short *);
// public: bool c_animation_manager::find_next_function_overlay(class function_overlay_iterator *) const;
// public: bool c_animation_manager::find_next_vehicle_suspension(class suspension_animation_iterator *) const;
// public: bool c_animation_manager::setup_animation_channel_from_vehicle_suspension_iterator(class c_animation_channel *, class suspension_animation_iterator const *) const;
// public: bool c_animation_manager::setup_animation_channel_from_function_overlay_iterator(class c_animation_channel *, class function_overlay_iterator const *) const;
// public: bool c_animation_manager::find_next_mode_ik_point(class ik_point_iterator *) const;
// public: bool c_animation_manager::find_next_weapon_ik_point(class ik_point_iterator *) const;
// public: class c_animation_id c_animation_manager::find_animation(long) const;
// public: class c_animation_id c_animation_manager::find_overlay_animation(long, long, long, long, long) const;
// public: long c_animation_manager::find_hierarchical_property_index_and_graph(enum e_animation_graph_node_property, long, long, long, long, long, long, long *) const;
// public: void c_animation_manager::node_matrices_from_orientations(struct real_matrix4x3*, struct real_orientation const *, struct real_matrix4x3const *) const;
// public: void c_animation_manager::node_matrices_from_orientations_with_gun_hand_swap(struct real_matrix4x3*, struct real_orientation const *, struct real_matrix4x3const *, long, long) const;
// public: class c_model_animation const * c_animation_manager::get_animation(class c_animation_id) const;
// public: bool c_animation_manager::build_model_mapping_table(long, long *, long *, long);
// public: long c_animation_manager::find_node_by_name(long) const;
// public: struct animation_graph_sound_reference const * c_animation_manager::get_sound_reference(long) const;
// public: long c_animation_manager::get_node_count(void) const;
// public: void c_animation_manager::animation_get_root_starting_point(class c_animation_id, union real_point3d *) const;
// public: void c_animation_manager::animation_get_root_orientation(class c_animation_id, float, struct render_model_definition const *, struct real_orientation *) const;
// public: void c_animation_manager::animation_get_root_matrix(class c_animation_id, float, struct real_matrix4x3*) const;
// public: void c_animation_manager::animation_get_root_velocity(class c_animation_id, float, float, union vector3d *) const;
// public: void c_animation_manager::animation_get_current_root_velocity(union vector3d *) const;
// public: void c_animation_manager::animation_get_interpolation_settings(class c_animation_id, float *, bool *);
// public: bool c_animation_manager::current_mode_contains_acceleration_screen(void) const;
// public: char const * c_animation_manager::get_graph_name(void) const;
// public: class c_animation_id c_animation_manager::find_facial_animation_base(void) const;
// public: class c_animation_id c_animation_manager::find_facial_animation_cinematic_base(void) const;
// public: class c_animation_id c_animation_manager::find_facial_animation_overlay(void) const;
// public: class c_animation_id c_animation_manager::find_mouth_aperature_animation(void) const;
// public: class c_animation_id c_animation_manager::find_acceleration_axis_animation(long) const;
// public: class c_animation_id c_animation_manager::find_parallel_impulse(long) const;
// public: bool c_animation_manager::start_interpolation(float, bool, bool, long, struct real_orientation *, struct real_orientation const *);
// public: bool c_animation_manager::start_interpolation(float, bool, bool);
// public: void c_animation_manager::stop_interpolation(void);
// public: void c_animation_manager::interpolate_node_orientations(short, class c_big_flags_typed_no_init<long, 256> const *, struct real_orientation *, struct real_orientation *);
// public: class c_model_animation_graph const * c_animation_manager::get_graph(void) const;
// public: class c_model_animation_graph const * c_animation_manager::get_subgraph(class c_animation_id) const;
// private: long c_animation_manager::filter_weapon_class_name(long, long) const;
// public: long c_model_animation_graph::find_weapon_class_name(long) const;
// private: void c_animation_manager::internal_initialize_search_cache(void);
// private: void c_animation_manager::internal_determine_goal_state(long, long, long, long, enum e_physics_animation_state, struct s_animation_goal_settings *) const;
// private: bool c_animation_manager::internal_validate_goal_state(long, long, long, long, long, enum e_physics_animation_state, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver> *, struct s_animation_goal_settings *, struct s_animation_goal_settings *, class c_animation_id *) const;
// public: class c_weapon_type const * c_model_animation_graph::find_weapon_type(long, long, long, class c_animation_graph_search_cache *) const;
// public: class c_weapon_type const * c_weapon_class::find_type(long) const;
// public: class c_weapon_class const * c_model_animation_graph::find_weapon_class(long, long, class c_animation_graph_search_cache *) const;
// public: bool c_animation_manager::set_custom_goal(class c_animation_id, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>);
// public: float c_animation_manager::get_state_playback_ratio(void) const;
// public: float c_animation_manager::get_authored_state_time(void) const;
// public: float c_animation_manager::get_authored_state_duration(void) const;
// public: void c_animation_manager::set_state_position(float);
// public: void c_animation_manager::set_state_position_from_authored_time(float);
// public: void c_animation_manager::set_state_position_from_playback_ratio(float);
// public: void c_animation_manager::set_state_position_from_playback_time(float);
// public: void c_animation_manager::update_state_position(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long);
// public: void c_animation_manager::update_state_position_from_authored_time(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long);
// public: void c_animation_manager::update_state_position_from_playback_ratio(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long);
// public: void c_animation_manager::update_state_position_from_playback_time(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long);
// public: void c_animation_manager::set_state_playback_speed(float);
// public: void c_animation_manager::reset_state_channels(void);
// public: void c_animation_manager::reset_auxilary_channels(void);
// public: class c_animation_id c_animation_manager::locate_blend_animation(long, long, long, long, long *) const;
// public: class c_animation_id c_animation_manager::locate_transition_animation(long, long, long, long) const;
// public: bool c_animation_manager::find_goal(long, long, long, long, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>) const;
// public: class c_animation_id c_animation_manager::find_goal_animation_id(long, long, long, long, long, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>) const;
// public: class c_animation_id c_animation_manager::find_goal_animation_id(long, long, long, long, long, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, struct s_animation_goal_settings *) const;
// public: enum e_physics_animation_state c_animation_manager::get_physics_animation_state(void) const;
// public: bool c_animation_manager::tags_have_changed(void) const;
// public: bool c_animation_manager::handle_tag_change(void);
// public: bool c_animation_manager::update_interpolators(void);
// public: class c_animation_channel const * c_animation_manager::get_active_channel(void) const;
// public: class c_animation_channel * c_animation_manager::get_writable_active_channel(void);
// public: void c_animation_manager::get_node_orientations(struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long);
// public: void c_animation_manager::adjust_node_orientations_for_rendering(struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long);
// bool get_world_space_data_from_ik_chain_target(long, class c_model_animation_graph const *, class c_enum<enum e_animation_types, char, 0, 4, struct s_default_enum_string_resolver>, struct s_ik_chain_target const *, bool, struct real_orientation const *, long, struct real_matrix4x3const *, struct real_orientation *, union real_point3d *);
// public: void c_animation_manager::lock_search_cache(void);
// public: class c_animation_graph_search_cache * c_animation_manager::get_search_cache(void) const;
// public: void c_animation_manager::unlock_search_cache(void);
// public: void c_animation_manager::clear_search_cache(void);
// public: void c_animation_manager::clear_search_cache_function(void);
// public: long c_animation_manager::get_node_index_for_foot(class c_enum<enum e_locking_foot_types, char, 0, 2, struct s_default_enum_string_resolver>) const;
// public: void c_animation_manager::apply_ik_footlocking(struct real_matrix4x3*, long, class c_big_flags_typed_no_init<long, 256> *);
// public: void c_animation_manager::apply_ik_chains(struct real_matrix4x3*, long, class c_big_flags_typed_no_init<long, 256> *);
// void blend_raw_ik_chain_targets(long, class c_model_animation_graph const *, class c_enum<enum e_animation_types, char, 0, 4, struct s_default_enum_string_resolver>, long, struct s_ik_chain_target const *, struct real_orientation const *, long, struct real_matrix4x3const *, long, struct s_ik_chain_target *);
// long get_raw_ik_chain_target_index(long, long);
// void blend_ik_chain_target_with_data(float, class c_enum<enum e_animation_blend_types, char, 0, 2, struct s_default_enum_string_resolver>, bool, struct real_orientation const *, union real_point3d const *, struct s_ik_chain_target *);
// void setup_ik_chain_targets_for_animation_channel(class c_model_animation_graph const *, class c_animation_channel const *, long, struct s_ik_chain_target *);
// void setup_ik_chain_targets_for_animation(class c_model_animation_graph const *, class c_animation_id, long, float, float, bool, long, struct s_ik_chain_target *);
// public: struct s_tag_block const & c_model_animation::get_ik_chain_events(void) const;
// void setup_ik_chain_target_for_animation(class c_model_animation_graph const *, class c_animation_id, float, struct s_animation_ik_chain_event const *, class c_animation_data const *, bool, struct s_ik_chain_target *);
// public: struct s_tag_block const & c_model_animation::get_ik_chain_proxies(void) const;
// void blend_two_ik_chain_targets(long, class c_model_animation_graph const *, class c_enum<enum e_animation_types, char, 0, 4, struct s_default_enum_string_resolver>, float, struct real_orientation const *, long, struct real_matrix4x3const *, long, struct real_matrix4x3const *, long, struct s_ik_chain_target const *, long, struct s_ik_chain_target const *, long, struct s_ik_chain_target *);
// bool test_runtime_blend_flags(class c_flags<enum e_ik_chain_target_flags, unsigned short, 2, struct s_default_enum_string_resolver>, class c_flags<enum e_ik_chain_target_flags, unsigned short, 2, struct s_default_enum_string_resolver>);
// void convert_ik_chain_targets_to_world_space(long, class c_model_animation_graph const *, class c_enum<enum e_animation_types, char, 0, 4, struct s_default_enum_string_resolver>, struct real_orientation const *, long, struct real_matrix4x3const *, long, struct s_ik_chain_target *);
// public: s_ik_chain_target::s_ik_chain_target(void);
// public: bool c_animation_manager::active_channel_contains_motion_data(void) const;
// public: float c_animation_manager::read_active_channel_playback_speed(void) const;
// public: void c_animation_manager::read_active_channel_motion_rates(long, union vector3d *, union vector3d *) const;
// public: void c_animation_manager::read_active_channel_motion_offsets(long, union vector3d *, union vector3d *) const;
// public: bool c_animation_manager::update_analog_movement_from_desired_velocity(long, union vector3d const *, bool);
// public: bool c_animation_manager::update_analog_movement_from_throttle(long, union vector3d const *, bool);
// private: bool c_animation_manager::internal_find_extremal_gait_parameters(struct s_animation_goal_settings const *, float *, float *) const;
// private: void c_animation_manager::internal_clamp_original_gait_facing(struct s_animation_goal_settings const *, struct s_animation_gait_settings *);
// float internal_compute_facing_turn_complete_angle(long, struct s_animation_goal_settings const *, struct s_animation_gait_settings const *);
// private: bool c_animation_manager::internal_compute_turning_gait_settings_for_state(struct s_animation_goal_settings const *, struct s_animation_gait_settings *) const;
// private: union vector3d c_animation_manager::internal_compute_object_gait_parameter_vector_for_state(struct s_animation_goal_settings const *, struct s_animation_gait_settings const *, bool, bool) const;
// bool validate_gait_speeds(class c_model_animation_graph const *, struct s_animation_gait const *, class c_animation_id, class c_animation_id, float, float);
// bool validate_transition_distances(class c_model_animation_graph const *, struct s_animation_gait const *, class c_animation_id, class c_animation_id, float, float);
// public: bool c_animation_manager::compute_stopping_parameters_for_fastest_possible_throttle_to_target(enum e_physics_animation_state, float, float *, float *, float *, float *);
// public: c_animation_gait_info::c_animation_gait_info(void);
// public: void c_animation_gait_info::clear(void);
// void movement_gait_find_neighbors(class c_animation_manager const *, struct s_animation_goal_settings const *, long, class c_animation_gait_info const *, class c_animation_gait_info *, class c_animation_gait_info *);
// public: bool c_animation_gait_info::valid(void) const;
// bool movement_gait_find_best_stopping_parameters(class c_animation_manager const *, struct s_animation_goal_settings const *, class c_animation_gait_info const *, class c_animation_gait_info const *, class c_animation_gait_info const *, float, float *, float *, float *, float *);
// bool use_player_physics(long);
// void movement_gait_vector_compute(enum e_physics_animation_state, float, float, union vector3d *, union vector3d *);
// public: c_animation_gait_info::~c_animation_gait_info(void);
// public: long c_animation_manager::compute_animation_state_from_character_physics_state(long, long, long, enum e_physics_animation_state);
// public: void c_animation_manager::compute_blend_ratio_between_animations_from_gait_parameter_in_state(enum e_physics_animation_state, class c_model_animation_graph const *, class c_animation_id, class c_animation_id, union vector3d const *, float *, float *) const;
// public: bool c_animation_manager::setup_gait_for_state(struct s_animation_goal_settings const *, struct s_animation_state_change_settings const *, struct s_animation_state_change_settings *) const;
// class c_animation_id find_best_transition_in_gait(class c_model_animation_graph const *, bool, union vector3d const *, float, float, class c_animation_id, class c_animation_id, class c_animation_id, float *);
// public: bool c_animation_manager::setup_gait_for_transition(struct s_animation_goal_settings const *, struct s_animation_state_change_settings const *, class c_animation_channel_settings *) const;
// public: bool c_animation_manager::get_movement_animations_velocity_boundaries(enum e_physics_animation_state, float *, float *) const;
// public: bool c_animation_manager::get_movement_animations_velocity_boundaries(long, long, long, enum e_physics_animation_state, float *, float *) const;
// public: void c_animation_manager::get_overlay_group_graph_and_definition_index(long *, long *) const;
// public: void c_animation_manager::set_overlay_group_graph_and_definition_index(long, long);
// private: bool c_animation_manager::find_and_setup_best_gait(struct s_animation_goal_settings const *, union vector3d const *, class c_animation_id *, class c_animation_id *, struct s_animation_gait_settings *, struct s_animation_gait const **) const;
// public: bool c_animation_manager::get_active_movement_heading(union vector3d *) const;
// public: union vector3d const * c_model_animation::get_movement_heading(void) const;
// public: bool c_animation_manager::get_animation_id_and_gait_parameter(class c_model_animation_graph const *, struct s_animation_goal_settings const *, long, class c_animation_id *, float *) const;
// public: float c_model_animation::get_animation_gait_parameter(enum e_physics_animation_state) const;
// public: float c_model_animation::get_average_linear_rate(void) const;
// public: float c_model_animation::get_average_translation_magnitude(void) const;
// public: float c_model_animation::get_total_angular_offset(void) const;
// public: class c_animation_id c_animation_manager::find_action(long, long, long, long, long, long *, long *, long *, long *, long *) const;
// public: class c_animation_id c_animation_manager::find_transition(long, long, long, long, long, long, long) const;
// public: short c_animation_manager::find_gait_group(long, long, long, long) const;
// public: bool c_animation_manager::find_velocity_boundaries(long, long, long, long, enum e_physics_animation_state, float *, float *) const;
// private: bool c_animation_manager::select_best_animations_in_gait(class c_model_animation_graph const *, struct s_animation_goal_settings const *, long, float, class c_animation_id *, class c_animation_id *) const;
// public: short c_model_animation::get_next_animation_index(void) const;
// public: bool c_animation_manager::can_play_transition_animations(void) const;
// public: bool c_animation_manager::can_use_unit_throttle_for_gait_blending(void) const;
// public: bool c_animation_manager::can_update_gait_for_active_channel(void);
// public: bool c_animation_manager::update_gait_for_active_channel(bool);
// private: bool c_animation_manager::internal_can_update_gait_for_state(void);
// public: class c_enum<enum e_animation_frame_info_types, char, 0, 5, struct s_default_enum_string_resolver> c_model_animation::get_frame_info_type(void) const;
// private: bool c_animation_manager::internal_update_gait_for_state(union vector3d const *, bool);
// private: bool c_animation_manager::internal_can_change_gait_animations(class c_animation_id, class c_animation_id);
// private: bool c_animation_manager::internal_can_update_gait_for_transition(void);
// private: bool c_animation_manager::internal_update_gait_for_transition(union vector3d const *, bool);
// public: void c_animation_manager::append_debug_string(char *, long) const;
// public: void c_animation_manager::append_debug_string_mixing_board(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>, char *, long) const;
// enum e_mixing_board_component_type operator++(enum e_mixing_board_component_type &, int);
// public: char const * c_mixing_board_definition::get_component_name(long, long) const;
// public: bool c_mixing_board_definition::validate_component_index(long, long) const;
// public: bool c_animation_manager::get_pill_offset_data(union real_point3d *, union vector3d *) const;
// public: bool c_animation_manager::get_pill_offset_data_from_animation(class c_animation_id, long, union real_point3d *, union vector3d *) const;
// public: bool c_animation_manager::get_scaled_pill_offset_data_from_animation(class c_animation_id, long, float, union real_point3d *, union vector3d *) const;
// public: void c_animation_manager::set_state_position_to_last_frame(void);
// public: bool c_animation_manager::active_channel_paused(void) const;
// public: bool c_animation_manager::active_channel_playing(void) const;
// public: bool c_animation_manager::state_channel_complete(void) const;
// public: bool c_animation_manager::state_channel_reached_last_frame(void) const;
// public: long c_animation_manager::get_mixing_board_address(void) const;
// public: long c_animation_manager::get_interpolation_mixing_board_address(void) const;
// public: void c_animation_manager::reset_mixing_board(void);
// public: void c_animation_manager::reset_all_mixing_boards(void);
// public: class c_pose_blend_channel * c_animation_manager::get_mixing_board_pose_blend_channel(long) const;
// public: class c_mixing_board_slider * c_animation_manager::get_mixing_board_slider(long) const;
// public: class c_animation_channel * c_animation_manager::get_mixing_board_animation_channel(long) const;
// public: class c_auxilary_channel * c_animation_manager::get_mixing_board_auxilary_channel(long) const;
// public: class c_aiming_channel * c_animation_manager::get_mixing_board_aiming_channel(long) const;
// public: class c_facial_animation_channel * c_animation_manager::get_mixing_board_facial_animation_channel(void) const;
// public: class t_short_fixed<13> c_animation_manager::get_slider_value_from_chain(class c_mixing_board_slider const *) const;
// private: long c_animation_manager::internal_get_mixing_board_address(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>, class c_mixing_board_definition const *) const;
// private: void c_animation_manager::internal_reset_mixing_board(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>);
// private: class t_short_fixed<13> c_animation_manager::internal_get_slider_value_from_chain(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>, class c_mixing_board_slider const *) const;
// public: long c_mixing_board_slider::get_parent_slider_index(void) const;
// public: class c_enum<enum e_mixing_board_parent_slider_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> c_mixing_board_slider::get_parent_slider_type(void) const;
// public: bool c_mixing_board_slider::parent_slider_valid(void) const;
// private: class c_mixing_board_slider * c_animation_manager::internal_get_mixing_board_slider(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>, long) const;
// public: class t_short_fixed<13> c_animation_manager::get_slider_value_from_chain(long, enum e_mixing_board_parent_slider_type) const;
// public: bool c_animation_manager::update_state_mixing_board_components(void (*)(struct s_animation_event_data const *, long), long) const;
// public: bool c_mixing_board_component_iterator::get(class c_mixing_board_slider **);
// public: bool c_animation_manager::update_interpolation_mixing_board_components(void (*)(struct s_animation_event_data const *, long), long) const;
// public: void c_animation_manager::copy_mixing_board(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>, class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>);
// public: c_auxilary_channel_settings::c_auxilary_channel_settings(void);
// public: void c_auxilary_channel_settings::clear(void);
// public: c_aiming_channel_settings::c_aiming_channel_settings(void);
// public: void c_aiming_channel_settings::clear(void);
// public: c_facial_animation_channel_settings::c_facial_animation_channel_settings(void);
// public: void c_facial_animation_channel_settings::clear(void);
// public: c_pose_blend_channel_settings::c_pose_blend_channel_settings(void);
// public: void c_pose_blend_channel_settings::clear(void);
// public: class c_mixing_board_slider & c_mixing_board_slider::operator=(class c_mixing_board_slider const &);
// public: c_auxilary_channel_settings::~c_auxilary_channel_settings(void);
// public: c_aiming_channel_settings::~c_aiming_channel_settings(void);
// public: c_facial_animation_channel_settings::~c_facial_animation_channel_settings(void);
// public: c_pose_blend_channel_settings::~c_pose_blend_channel_settings(void);
// public: void c_animation_manager::get_mixing_board_node_orientations(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>, struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long);
// void accumulate_object_space_offset_node_flags(class c_pose_blend_channel const *, class c_big_flags_typed_no_init<long, 256> const *, class c_big_flags_typed_no_init<long, 256> *);
// void store_object_space_offset_nodes_from_flags(long, class c_model_animation_graph const *, long, struct real_orientation const *, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, long *);
// void compute_object_space_orientations_from_local_space_orientations(class c_model_animation_graph const *, long, struct real_orientation const *, long, struct real_orientation *);
// public: void c_animation_manager::get_mixing_board_ik_chain_targets(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>, float, struct real_orientation const *, long, struct real_matrix4x3const *, long, struct s_ik_chain_target *, long, struct s_ik_chain_target *, long, struct s_ik_chain_target *);
// void setup_ik_chain_targets_for_pose_blend_channel(class c_model_animation_graph const *, class c_pose_blend_channel const *, long, struct s_ik_chain_target *);
// public: void c_animation_manager::get_mixing_board_render_time_node_orientations(struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long);
// public: bool c_animation_manager::setup_animation_channel(class c_animation_channel *, class c_animation_channel_settings const *) const;
// public: bool c_animation_manager::render_time_node_orientations_requested(class c_big_flags_typed_no_init<long, 256> *) const;
// public: bool c_animation_manager::setup_auxilary_channel(class c_auxilary_channel *, long, long, long, unsigned long) const;
// public: bool c_animation_manager::setup_pose_blend_channel(class c_pose_blend_channel *, class c_pose_blend_channel_settings const *) const;
// public: bool c_animation_manager::setup_aiming_channel(class c_aiming_channel *, long, long, long, unsigned long) const;
// public: void c_animation_manager::link_component_to_slider(enum e_mixing_board_component_type, long, long, enum e_mixing_board_parent_slider_type) const;
// public: bool c_animation_manager::setup_additional_state_animation_blend(long, long, float);
// public: bool c_animation_manager::get_current_foot_tracking_state(long, class c_enum<enum e_foot_tracking_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> *, float *, short *) const;
// public: struct s_tag_block const & c_model_animation::get_foot_tracking_data(void) const;
// bool test_value_in_range_with_wrapping(float, float, float, float, float *);
// public: enum e_foot_tracking_state c_animation_manager::get_default_foot_tracking_state(long) const;
// public: float c_animation_manager::get_transition_playback_time_remaining(void) const;
// public: float c_animation_manager::get_transition_playback_ratio_remaining(void) const;
// public: void c_animation_manager::get_current_settings(struct s_animation_state_change_settings *) const;
// public: bool c_animation_manager::recommend_state_change(long, long, long, long, enum e_physics_animation_state, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>, struct s_animation_state_change_settings *) const;
// public: struct s_animation_goal_settings const * c_animation_manager::get_previous_goal(void) const;
// bool active_animation_matches_next(class c_model_animation const *, class c_model_animation const *, short, bool, short *, short *, short *);
// long int_max(short, int);
// bool frame_compare_function(short, short, void const *);
// public: long c_animation_manager::active_channel_get_all_match_frames(struct s_animation_state_change_settings const *, short *, short *, long);
// public: bool c_animation_manager::active_channel_has_match_frames(struct s_animation_state_change_settings const *);
// public: bool c_animation_manager::execute_state_change(struct s_animation_state_change_settings const *);
// public: class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver> & c_channel_base::access_playback_flags(void);
// public: bool c_animation_manager::recommend_auxilary_change(struct s_state_changes_requested const *) const;
// public: bool c_animation_manager::set_goal(long, long, long, long, enum e_physics_animation_state, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>);
// private: void c_animation_manager::apply_random_permutations_to_settings(class c_animation_channel_settings *) const;
// public: void c_animation_manager::set_target_emotion(long, float, float);
// public: void c_animation_manager::set_target_emotion_by_name(long, float, float);
// public: void c_animation_manager::reset_facial_animation_channels(void);
// public: void c_animation_manager::handle_lipsync_data_stream(long, long, long, float);
// public: void c_animation_manager::handle_lipsync_data_ending(long);
// public: bool c_animation_preferred_list::active_for_object(long) const;
// public: class c_animation_id c_animation_preferred_list::find_preferred_variant(long, class c_model_animation_graph const *, class c_animation_id);
// public: bool c_animation_preferred_list::add(long, long);
// public: void c_animation_preferred_list::remove(long);
// public: void c_animation_preferred_list::clear(void);
// bool animation_manager_add_preferred_animation(long, long);
// void animation_manager_clear_preferred_animations(void);
// public: void c_animation_manager::reset_interpolators(void);
// public: void c_animation_manager::locate_auxilary_animations(void *, long);
// public: void c_animation_manager::stance_iterator_new(struct s_animation_stance_iterator *) const;
// public: bool c_animation_manager::stance_iterator_next(struct s_animation_stance_iterator *) const;
// public: long c_animation_manager::get_top_stance(void) const;
// public: void c_animation_manager::clear_stance_layer(class c_enum<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver>);
// public: void c_animation_manager::clear_temporary_stance_layers(void);
// public: bool c_animation_manager::push_stance(long, class c_enum<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver>);
// public: void c_animation_manager::set_animation_set_name(long);
// public: long c_animation_manager::get_animation_set_name(void) const;
// public: long c_animation_manager::setup_ranged_action(union real_point3d const *, union vector3d const *, union vector3d const *, long, union vector2d const *, class c_enum<enum e_triangulation_blend_weight_type, char, 0, 2, struct s_default_enum_string_resolver>, struct s_blended_animations *, float *, float *, long *) const;
// public: bool c_animation_manager::setup_state_settings_from_blend_animations(struct s_blended_animations *, long, struct s_animation_state_change_settings *);
// public: struct s_animation_ranged_action const * c_animation_manager::find_ranged_action(long, long, long) const;
// public: struct s_animation_sync_action const * c_animation_manager::find_sync_action(long, long, long) const;
// public: bool c_animation_manager::uses_data_driven_mixing_board(void) const;
// private: long c_animation_manager::internal_find_mode_or_stance_alias(long) const;
// void animation_update_analog_blending(long, float);
// public: float c_animation_manager::get_translation_magnitude_from_settings(float, float, class c_animation_channel_settings *);
// public: t_short_fixed<13>::t_short_fixed<13>(long);
// public: class t_short_fixed<13> & t_short_fixed<13>::operator=(class t_short_fixed<13> const &);
// public: class t_short_fixed<13> & t_short_fixed<13>::operator*=(class t_short_fixed<13> const &);
// public: class t_short_fixed<8> & t_short_fixed<8>::operator=(class t_short_fixed<8> const &);
// public: enum e_mixing_board_parent_slider_type c_enum_no_init<enum e_mixing_board_parent_slider_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_mixing_board_parent_slider_type(void) const;
// public: bool c_enum_no_init<enum e_animation_graph_location, char, 0, 9, struct s_default_enum_string_resolver>::operator==(enum e_animation_graph_location) const;
// public: c_enum<enum e_interpolation_type, unsigned short, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_interpolation_type, unsigned short, 0, 5, struct s_default_enum_string_resolver>(enum e_interpolation_type);
// public: enum e_animation_stance_layers c_enum_no_init<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver>::operator enum e_animation_stance_layers(void) const;
// public: static enum e_animation_stance_layers c_enum_no_init<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver>::begin(void);
// public: static enum e_animation_stance_layers c_enum_no_init<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver>::end(void);
// public: class c_enum_no_init<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver>::operator++(void);
// public: class c_enum_no_init<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver> c_enum_no_init<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver>::operator++(int);
// public: bool c_static_stack<struct s_animation_stance_entry, 4>::empty(void) const;
// public: bool c_static_stack<struct s_animation_stance_entry, 4>::full(void) const;
// public: long c_static_stack<struct s_animation_stance_entry, 4>::top(void) const;
// public: long c_static_stack<struct s_animation_stance_entry, 4>::count(void) const;
// public: void c_static_stack<struct s_animation_stance_entry, 4>::clear(void);
// public: long c_static_stack<struct s_animation_stance_entry, 4>::push(void);
// public: struct s_animation_stance_entry const & c_static_stack<struct s_animation_stance_entry, 4>::operator[](long) const;
// public: struct s_animation_stance_entry & c_static_stack<struct s_animation_stance_entry, 4>::operator[](long);
// public: struct s_animation_stance_entry const * c_static_stack<struct s_animation_stance_entry, 4>::get_top(void) const;
// public: struct s_animation_stance_entry * c_static_stack<struct s_animation_stance_entry, 4>::begin(void);
// public: struct s_animation_stance_entry * c_static_stack<struct s_animation_stance_entry, 4>::end(void);
// public: c_static_stack<struct s_animation_stance_entry, 4>::c_static_stack<struct s_animation_stance_entry, 4>(void);
// public: enum e_animation_frame_event_types c_enum_no_init<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>::operator enum e_animation_frame_event_types(void) const;
// public: class c_enum_no_init<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver> c_enum_no_init<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>::operator++(int);
// public: enum e_animation_gait_directions c_enum_no_init<enum e_animation_gait_directions, short, 0, 6, struct s_default_enum_string_resolver>::operator enum e_animation_gait_directions(void) const;
// public: bool c_enum_no_init<enum e_animation_gait_directions, short, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_animation_gait_directions) const;
// public: c_enum<enum e_animation_types, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_animation_types, char, 0, 4, struct s_default_enum_string_resolver>(enum e_animation_types);
// public: enum e_animation_frame_info_types c_enum_no_init<enum e_animation_frame_info_types, char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_animation_frame_info_types(void) const;
// public: c_enum<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>::c_enum<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>(void);
// public: c_enum<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>::c_enum<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>(enum e_animation_ik_chain_event_usage);
// public: enum e_animation_ik_chain_event_usage c_enum_no_init<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>::operator enum e_animation_ik_chain_event_usage(void) const;
// public: bool c_enum_no_init<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>::operator==(enum e_animation_ik_chain_event_usage) const;
// public: class c_static_string<64> c_enum_no_init<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>::to_string(void) const;
// public: static void s_animation_ik_chain_event_usage_string_resolver::to_string(long, class c_static_string<64> *);
// public: bool c_enum_no_init<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const;
// public: c_enum<enum e_animation_blend_types, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_animation_blend_types, char, 0, 2, struct s_default_enum_string_resolver>(enum e_animation_blend_types);
// public: enum e_animation_blend_types c_enum_no_init<enum e_animation_blend_types, char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_animation_blend_types(void) const;
// public: bool c_enum_no_init<enum e_locking_foot_types, char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_locking_foot_types) const;
// public: c_enum<enum e_animation_debug_trace_source_types, long, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_animation_debug_trace_source_types, long, 0, 2, struct s_default_enum_string_resolver>(enum e_animation_debug_trace_source_types);
// public: bool c_static_stack<struct s_animation_stance_entry, 4>::valid(void) const;
// public: bool c_static_stack<struct s_animation_stance_entry, 4>::valid(long) const;
// public: struct s_animation_stance_entry const * c_static_stack<struct s_animation_stance_entry, 4>::get(long) const;
// public: bool c_enum_no_init<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>::in_range(void) const;
// public: long c_big_flags_typed_no_init<long, 256>::get_highest_bit_set(void) const;
// public: bool c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::test(enum e_channel_settings_comparison_flags) const;
// public: bool c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver> const &) const;
// public: void c_flags_no_init<enum e_animation_manager_flags, unsigned long, 5, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_animation_manager_flags, unsigned long, 5, struct s_default_enum_string_resolver>::set(enum e_animation_manager_flags, bool);
// public: c_flags<enum e_animation_manager_flags, unsigned long, 5, struct s_default_enum_string_resolver>::c_flags<enum e_animation_manager_flags, unsigned long, 5, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_ik_chain_target_flags, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum e_ik_chain_target_flags, bool);
// bool sample_extended_block_data<struct real_orientation>(class c_model_animation_graph const *, class c_animation_id, long, long, float, float, unsigned char, enum e_internal_data_type, class c_animation_data const *, struct real_orientation *);
// void direct_decompress_extended_block_data(unsigned char const *, long const *, unsigned char, long, long, float, float, struct real_orientation *);
// bool sample_extended_block_data<float>(class c_model_animation_graph const *, class c_animation_id, long, long, float, float, unsigned char, enum e_internal_data_type, class c_animation_data const *, float *);
// void direct_decompress_extended_block_data(unsigned char const *, long const *, unsigned char, long, long, float, float, float *);
// bool sample_extended_block_data<union real_point3d>(class c_model_animation_graph const *, class c_animation_id, long, long, float, float, unsigned char, enum e_internal_data_type, class c_animation_data const *, union real_point3d *);
// void direct_decompress_extended_block_data(unsigned char const *, long const *, unsigned char, long, long, float, float, union real_point3d *);
// short int_pin<short, short, short>(short const &, short const &, short const &);
// class t_short_fixed<13> operator-<13>(class t_short_fixed<13> const &, class t_short_fixed<13> const &);
// public: class t_short_fixed<13> & t_short_fixed<13>::operator-=(class t_short_fixed<13> const &);
// public: bool c_flags_no_init<enum e_animation_manager_flags, unsigned long, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// short int_floor<short, short>(short const &, short const &);
// short int_ceiling<short, short>(short const &, short const &);
// private: static unsigned long c_flags_no_init<enum e_animation_manager_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// short int_max<short>(short const &, short const &);
// short int_min<short>(short const &, short const &);
// private: static unsigned long c_flags_no_init<enum e_animation_manager_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_animation_manager_flags);
// public: c_animation_preferred_list::c_animation_preferred_list(void);
// public: c_animation_preferred_list::~c_animation_preferred_list(void);
// void g_animation_preferred_list::`dynamic atexit destructor'(void);

//bool animation_loops(long)
//{
//    mangled_ppc("?animation_loops@@YA_NJ@Z");
//};

//long find_matched_state(long, struct s_matched_animation_state const *, long)
//{
//    mangled_ppc("?find_matched_state@@YAJJPBUs_matched_animation_state@@J@Z");
//};

//public: void s_animation_goal_settings::clear(void)
//{
//    mangled_ppc("?clear@s_animation_goal_settings@@QAAXXZ");
//};

//public: c_animation_manager::c_animation_manager(void)
//{
//    mangled_ppc("??0c_animation_manager@@QAA@XZ");
//};

//public: void c_animation_manager::finalize_intialization(long)
//{
//    mangled_ppc("?finalize_intialization@c_animation_manager@@QAAXJ@Z");
//};

//public: void c_animation_manager::initialize(long, long, long, long, long)
//{
//    mangled_ppc("?initialize@c_animation_manager@@QAAXJJJJJ@Z");
//};

//private: void c_animation_graph_search_cache::clear(void)
//{
//    mangled_ppc("?clear@c_animation_graph_search_cache@@AAAXXZ");
//};

//public: c_animation_manager::c_animation_manager(class c_animation_manager const &)
//{
//    mangled_ppc("??0c_animation_manager@@QAA@ABV0@@Z");
//};

//public: class c_animation_manager & c_animation_manager::operator=(class c_animation_manager const &)
//{
//    mangled_ppc("??4c_animation_manager@@QAAAAV0@ABV0@@Z");
//};

//public: static bool c_animation_manager::validate_graph(long, long)
//{
//    mangled_ppc("?validate_graph@c_animation_manager@@SA_NJJ@Z");
//};

//public: bool c_animation_manager::reset_graph(long, long, bool)
//{
//    mangled_ppc("?reset_graph@c_animation_manager@@QAA_NJJ_N@Z");
//};

//public: class c_animation_id c_animation_manager::locate_new_animation_id_on_graph_change(class c_animation_id, long, enum e_animation_graph_location, long, long) const
//{
//    mangled_ppc("?locate_new_animation_id_on_graph_change@c_animation_manager@@QBA?AVc_animation_id@@V2@JW4e_animation_graph_location@@JJ@Z");
//};

//public: class c_vehicle_suspension const * c_model_animation_graph::find_suspension(long) const
//{
//    mangled_ppc("?find_suspension@c_model_animation_graph@@QBAPBVc_vehicle_suspension@@J@Z");
//};

//public: struct s_function_overlay const * c_model_animation_graph::find_function_overlay(long) const
//{
//    mangled_ppc("?find_function_overlay@c_model_animation_graph@@QBAPBUs_function_overlay@@J@Z");
//};

//public: bool c_animation_manager::update_animation_channel_on_graph_change(class c_animation_channel *, long, long) const
//{
//    mangled_ppc("?update_animation_channel_on_graph_change@c_animation_manager@@QBA_NPAVc_animation_channel@@JJ@Z");
//};

//public: bool c_animation_manager::update_animation_channel_on_weapon_change(class c_animation_channel *, long, long) const
//{
//    mangled_ppc("?update_animation_channel_on_weapon_change@c_animation_manager@@QBA_NPAVc_animation_channel@@JJ@Z");
//};

//public: class c_animation_id c_animation_manager::choose_random_variation(class c_animation_id) const
//{
//    mangled_ppc("?choose_random_variation@c_animation_manager@@QBA?AVc_animation_id@@V2@@Z");
//};

//public: bool c_animation_manager::get_randomness_affects_game_state(void) const
//{
//    mangled_ppc("?get_randomness_affects_game_state@c_animation_manager@@QBA_NXZ");
//};

//public: static float c_animation_manager::choose_random_playback_speed(class c_animation_id)
//{
//    mangled_ppc("?choose_random_playback_speed@c_animation_manager@@SAMVc_animation_id@@@Z");
//};

//public: static long c_animation_manager::choose_random_start_time(class c_animation_id)
//{
//    mangled_ppc("?choose_random_start_time@c_animation_manager@@SAJVc_animation_id@@@Z");
//};

//private: bool c_animation_manager::internal_setup_animation_channel(class c_animation_channel *, class c_animation_channel_settings *, class c_flags<enum e_setup_animation_channel_flags, unsigned long, 3, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("?internal_setup_animation_channel@c_animation_manager@@ABA_NPAVc_animation_channel@@PAVc_animation_channel_settings@@V?$c_flags@W4e_setup_animation_channel_flags@@K$02Us_default_enum_string_resolver@@@@@Z");
//};

//private: bool c_animation_manager::internal_setup_auxilary_channel(class c_auxilary_channel *, class c_auxilary_channel_settings *) const
//{
//    mangled_ppc("?internal_setup_auxilary_channel@c_animation_manager@@ABA_NPAVc_auxilary_channel@@PAVc_auxilary_channel_settings@@@Z");
//};

//private: bool c_animation_manager::internal_setup_aiming_channel(class c_aiming_channel *, class c_aiming_channel_settings *) const
//{
//    mangled_ppc("?internal_setup_aiming_channel@c_animation_manager@@ABA_NPAVc_aiming_channel@@PAVc_aiming_channel_settings@@@Z");
//};

//public: bool c_animation_manager::setup_animation_channel_by_index(class c_animation_channel *, class c_animation_id, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("?setup_animation_channel_by_index@c_animation_manager@@QBA_NPAVc_animation_channel@@Vc_animation_id@@V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_animation_manager::setup_animation_channel_by_name(class c_animation_channel *, long, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("?setup_animation_channel_by_name@c_animation_manager@@QBA_NPAVc_animation_channel@@JV?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_animation_manager::setup_animation_channel_by_parallel_impulse(class c_animation_channel *, long, long, long, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("?setup_animation_channel_by_parallel_impulse@c_animation_manager@@QBA_NPAVc_animation_channel@@JJJV?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_animation_manager::set_weapon(long, long)
//{
//    mangled_ppc("?set_weapon@c_animation_manager@@QAA_NJJ@Z");
//};

//public: bool c_animation_manager::validate_weapon(long, long) const
//{
//    mangled_ppc("?validate_weapon@c_animation_manager@@QBA_NJJ@Z");
//};

//public: void c_animation_manager::reset_weapon(void)
//{
//    mangled_ppc("?reset_weapon@c_animation_manager@@QAAXXZ");
//};

//public: bool c_animation_manager::weapon_is_valid(void) const
//{
//    mangled_ppc("?weapon_is_valid@c_animation_manager@@QBA_NXZ");
//};

//public: bool c_animation_manager::update_animation_channel(class c_animation_channel *, void (*)(struct s_animation_event_data const *, long), long) const
//{
//    mangled_ppc("?update_animation_channel@c_animation_manager@@QBA_NPAVc_animation_channel@@P6AXPBUs_animation_event_data@@J@ZJ@Z");
//};

//public: void c_animation_manager::pause_playback(bool)
//{
//    mangled_ppc("?pause_playback@c_animation_manager@@QAAX_N@Z");
//};

//public: void c_animation_manager::pause_state_channel(bool)
//{
//    mangled_ppc("?pause_state_channel@c_animation_manager@@QAAX_N@Z");
//};

//public: bool c_animation_manager::update_state_animation(void (*)(struct s_animation_event_data const *, long), long, long, struct real_orientation *, struct real_orientation const *)
//{
//    mangled_ppc("?update_state_animation@c_animation_manager@@QAA_NP6AXPBUs_animation_event_data@@J@ZJJPAUreal_orientation@@PBU3@@Z");
//};

//public: bool c_animation_manager::update_interpolation_animation(void (*)(struct s_animation_event_data const *, long), long)
//{
//    mangled_ppc("?update_interpolation_animation@c_animation_manager@@QAA_NP6AXPBUs_animation_event_data@@J@ZJ@Z");
//};

//public: bool c_animation_manager::update_pending_match_animation(void (*)(struct s_animation_event_data const *, long), long)
//{
//    mangled_ppc("?update_pending_match_animation@c_animation_manager@@QAA_NP6AXPBUs_animation_event_data@@J@ZJ@Z");
//};

//void match_channel_playback_to_match_frame(class c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>, class c_animation_channel *)
//{
//    mangled_ppc("?match_channel_playback_to_match_frame@@YAXV?$c_flags@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@PAVc_animation_channel@@@Z");
//};

//bool state_flags_get_first_match(class c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>, enum e_animation_state_flags *)
//{
//    mangled_ppc("?state_flags_get_first_match@@YA_NV?$c_flags@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@PAW4e_animation_state_flags@@@Z");
//};

//bool state_flags_get_next_match(class c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>, enum e_animation_state_flags, enum e_animation_state_flags *)
//{
//    mangled_ppc("?state_flags_get_next_match@@YA_NV?$c_flags@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@W4e_animation_state_flags@@PAW42@@Z");
//};

//bool state_flag_to_frame_event_matches(enum e_animation_state_flags, enum e_animation_frame_event_types *)
//{
//    mangled_ppc("?state_flag_to_frame_event_matches@@YA_NW4e_animation_state_flags@@PAW4e_animation_frame_event_types@@@Z");
//};

//bool active_state_matches_next(class c_flags<enum e_animation_state_flags, unsigned long, 10, struct s_default_enum_string_resolver>, class c_model_animation const *)
//{
//    mangled_ppc("?active_state_matches_next@@YA_NV?$c_flags@W4e_animation_state_flags@@K$09Us_default_enum_string_resolver@@@@PBVc_model_animation@@@Z");
//};

//bool frame_event_matches_to_state_flag(enum e_animation_frame_event_types, enum e_animation_state_flags *)
//{
//    mangled_ppc("?frame_event_matches_to_state_flag@@YA_NW4e_animation_frame_event_types@@PAW4e_animation_state_flags@@@Z");
//};

//public: bool c_animation_manager::update_animation(void (*)(struct s_animation_event_data const *, long), long, long, struct real_orientation *, struct real_orientation *)
//{
//    mangled_ppc("?update_animation@c_animation_manager@@QAA_NP6AXPBUs_animation_event_data@@J@ZJJPAUreal_orientation@@2@Z");
//};

//public: bool c_animation_manager::validate_mode(long) const
//{
//    mangled_ppc("?validate_mode@c_animation_manager@@QBA_NJ@Z");
//};

//public: bool c_animation_manager::validate_state(long, long, long) const
//{
//    mangled_ppc("?validate_state@c_animation_manager@@QBA_NJJJ@Z");
//};

//public: class c_animation_id c_animation_manager::find_state_animation_id(long, long, long) const
//{
//    mangled_ppc("?find_state_animation_id@c_animation_manager@@QBA?AVc_animation_id@@JJJ@Z");
//};

//public: class c_animation_id c_animation_manager::find_parallel_impulse_animation_id(long, long, long) const
//{
//    mangled_ppc("?find_parallel_impulse_animation_id@c_animation_manager@@QBA?AVc_animation_id@@JJJ@Z");
//};

//public: class c_model_animation const * c_animation_manager::find_impulse_or_state_animation(long, long, long) const
//{
//    mangled_ppc("?find_impulse_or_state_animation@c_animation_manager@@QBAPBVc_model_animation@@JJJ@Z");
//};

//public: class c_animation_id c_animation_manager::find_impulse_or_state_animation_id(long, long, long) const
//{
//    mangled_ppc("?find_impulse_or_state_animation_id@c_animation_manager@@QBA?AVc_animation_id@@JJJ@Z");
//};

//public: class c_animation_id c_animation_manager::find_death_or_damage_animation_id(long, long, short, short, short *, short *) const
//{
//    mangled_ppc("?find_death_or_damage_animation_id@c_animation_manager@@QBA?AVc_animation_id@@JJFFPAF0@Z");
//};

//public: bool c_animation_manager::setup_animation_channel_by_death_or_damage(class c_animation_channel *, long, long, short, short, short *, short *) const
//{
//    mangled_ppc("?setup_animation_channel_by_death_or_damage@c_animation_manager@@QBA_NPAVc_animation_channel@@JJFFPAF1@Z");
//};

//public: bool c_animation_manager::set_goal_by_death_or_damage(long, short, short, short *, short *)
//{
//    mangled_ppc("?set_goal_by_death_or_damage@c_animation_manager@@QAA_NJFFPAF0@Z");
//};

//public: bool c_animation_manager::find_next_function_overlay(class function_overlay_iterator *) const
//{
//    mangled_ppc("?find_next_function_overlay@c_animation_manager@@QBA_NPAVfunction_overlay_iterator@@@Z");
//};

//public: bool c_animation_manager::find_next_vehicle_suspension(class suspension_animation_iterator *) const
//{
//    mangled_ppc("?find_next_vehicle_suspension@c_animation_manager@@QBA_NPAVsuspension_animation_iterator@@@Z");
//};

//public: bool c_animation_manager::setup_animation_channel_from_vehicle_suspension_iterator(class c_animation_channel *, class suspension_animation_iterator const *) const
//{
//    mangled_ppc("?setup_animation_channel_from_vehicle_suspension_iterator@c_animation_manager@@QBA_NPAVc_animation_channel@@PBVsuspension_animation_iterator@@@Z");
//};

//public: bool c_animation_manager::setup_animation_channel_from_function_overlay_iterator(class c_animation_channel *, class function_overlay_iterator const *) const
//{
//    mangled_ppc("?setup_animation_channel_from_function_overlay_iterator@c_animation_manager@@QBA_NPAVc_animation_channel@@PBVfunction_overlay_iterator@@@Z");
//};

//public: bool c_animation_manager::find_next_mode_ik_point(class ik_point_iterator *) const
//{
//    mangled_ppc("?find_next_mode_ik_point@c_animation_manager@@QBA_NPAVik_point_iterator@@@Z");
//};

//public: bool c_animation_manager::find_next_weapon_ik_point(class ik_point_iterator *) const
//{
//    mangled_ppc("?find_next_weapon_ik_point@c_animation_manager@@QBA_NPAVik_point_iterator@@@Z");
//};

//public: class c_animation_id c_animation_manager::find_animation(long) const
//{
//    mangled_ppc("?find_animation@c_animation_manager@@QBA?AVc_animation_id@@J@Z");
//};

//public: class c_animation_id c_animation_manager::find_overlay_animation(long, long, long, long, long) const
//{
//    mangled_ppc("?find_overlay_animation@c_animation_manager@@QBA?AVc_animation_id@@JJJJJ@Z");
//};

//public: long c_animation_manager::find_hierarchical_property_index_and_graph(enum e_animation_graph_node_property, long, long, long, long, long, long, long *) const
//{
//    mangled_ppc("?find_hierarchical_property_index_and_graph@c_animation_manager@@QBAJW4e_animation_graph_node_property@@JJJJJJPAJ@Z");
//};

//public: void c_animation_manager::node_matrices_from_orientations(struct real_matrix4x3*, struct real_orientation const *, struct real_matrix4x3const *) const
//{
//    mangled_ppc("?node_matrices_from_orientations@c_animation_manager@@QBAXPAUreal_matrix4x3@@PBUreal_orientation@@PBU2@@Z");
//};

//public: void c_animation_manager::node_matrices_from_orientations_with_gun_hand_swap(struct real_matrix4x3*, struct real_orientation const *, struct real_matrix4x3const *, long, long) const
//{
//    mangled_ppc("?node_matrices_from_orientations_with_gun_hand_swap@c_animation_manager@@QBAXPAUreal_matrix4x3@@PBUreal_orientation@@PBU2@JJ@Z");
//};

//public: class c_model_animation const * c_animation_manager::get_animation(class c_animation_id) const
//{
//    mangled_ppc("?get_animation@c_animation_manager@@QBAPBVc_model_animation@@Vc_animation_id@@@Z");
//};

//public: bool c_animation_manager::build_model_mapping_table(long, long *, long *, long)
//{
//    mangled_ppc("?build_model_mapping_table@c_animation_manager@@QAA_NJPAJ0J@Z");
//};

//public: long c_animation_manager::find_node_by_name(long) const
//{
//    mangled_ppc("?find_node_by_name@c_animation_manager@@QBAJJ@Z");
//};

//public: struct animation_graph_sound_reference const * c_animation_manager::get_sound_reference(long) const
//{
//    mangled_ppc("?get_sound_reference@c_animation_manager@@QBAPBUanimation_graph_sound_reference@@J@Z");
//};

//public: long c_animation_manager::get_node_count(void) const
//{
//    mangled_ppc("?get_node_count@c_animation_manager@@QBAJXZ");
//};

//public: void c_animation_manager::animation_get_root_starting_point(class c_animation_id, union real_point3d *) const
//{
//    mangled_ppc("?animation_get_root_starting_point@c_animation_manager@@QBAXVc_animation_id@@PATreal_point3d@@@Z");
//};

//public: void c_animation_manager::animation_get_root_orientation(class c_animation_id, float, struct render_model_definition const *, struct real_orientation *) const
//{
//    mangled_ppc("?animation_get_root_orientation@c_animation_manager@@QBAXVc_animation_id@@MPBUrender_model_definition@@PAUreal_orientation@@@Z");
//};

//public: void c_animation_manager::animation_get_root_matrix(class c_animation_id, float, struct real_matrix4x3*) const
//{
//    mangled_ppc("?animation_get_root_matrix@c_animation_manager@@QBAXVc_animation_id@@MPAUreal_matrix4x3@@@Z");
//};

//public: void c_animation_manager::animation_get_root_velocity(class c_animation_id, float, float, union vector3d *) const
//{
//    mangled_ppc("?animation_get_root_velocity@c_animation_manager@@QBAXVc_animation_id@@MMPATvector3d@@@Z");
//};

//public: void c_animation_manager::animation_get_current_root_velocity(union vector3d *) const
//{
//    mangled_ppc("?animation_get_current_root_velocity@c_animation_manager@@QBAXPATvector3d@@@Z");
//};

//public: void c_animation_manager::animation_get_interpolation_settings(class c_animation_id, float *, bool *)
//{
//    mangled_ppc("?animation_get_interpolation_settings@c_animation_manager@@QAAXVc_animation_id@@PAMPA_N@Z");
//};

//public: bool c_animation_manager::current_mode_contains_acceleration_screen(void) const
//{
//    mangled_ppc("?current_mode_contains_acceleration_screen@c_animation_manager@@QBA_NXZ");
//};

//public: char const * c_animation_manager::get_graph_name(void) const
//{
//    mangled_ppc("?get_graph_name@c_animation_manager@@QBAPBDXZ");
//};

//public: class c_animation_id c_animation_manager::find_facial_animation_base(void) const
//{
//    mangled_ppc("?find_facial_animation_base@c_animation_manager@@QBA?AVc_animation_id@@XZ");
//};

//public: class c_animation_id c_animation_manager::find_facial_animation_cinematic_base(void) const
//{
//    mangled_ppc("?find_facial_animation_cinematic_base@c_animation_manager@@QBA?AVc_animation_id@@XZ");
//};

//public: class c_animation_id c_animation_manager::find_facial_animation_overlay(void) const
//{
//    mangled_ppc("?find_facial_animation_overlay@c_animation_manager@@QBA?AVc_animation_id@@XZ");
//};

//public: class c_animation_id c_animation_manager::find_mouth_aperature_animation(void) const
//{
//    mangled_ppc("?find_mouth_aperature_animation@c_animation_manager@@QBA?AVc_animation_id@@XZ");
//};

//public: class c_animation_id c_animation_manager::find_acceleration_axis_animation(long) const
//{
//    mangled_ppc("?find_acceleration_axis_animation@c_animation_manager@@QBA?AVc_animation_id@@J@Z");
//};

//public: class c_animation_id c_animation_manager::find_parallel_impulse(long) const
//{
//    mangled_ppc("?find_parallel_impulse@c_animation_manager@@QBA?AVc_animation_id@@J@Z");
//};

//public: bool c_animation_manager::start_interpolation(float, bool, bool, long, struct real_orientation *, struct real_orientation const *)
//{
//    mangled_ppc("?start_interpolation@c_animation_manager@@QAA_NM_N0JPAUreal_orientation@@PBU2@@Z");
//};

//public: bool c_animation_manager::start_interpolation(float, bool, bool)
//{
//    mangled_ppc("?start_interpolation@c_animation_manager@@QAA_NM_N0@Z");
//};

//public: void c_animation_manager::stop_interpolation(void)
//{
//    mangled_ppc("?stop_interpolation@c_animation_manager@@QAAXXZ");
//};

//public: void c_animation_manager::interpolate_node_orientations(short, class c_big_flags_typed_no_init<long, 256> const *, struct real_orientation *, struct real_orientation *)
//{
//    mangled_ppc("?interpolate_node_orientations@c_animation_manager@@QAAXFPBV?$c_big_flags_typed_no_init@J$0BAA@@@PAUreal_orientation@@1@Z");
//};

//public: class c_model_animation_graph const * c_animation_manager::get_graph(void) const
//{
//    mangled_ppc("?get_graph@c_animation_manager@@QBAPBVc_model_animation_graph@@XZ");
//};

//public: class c_model_animation_graph const * c_animation_manager::get_subgraph(class c_animation_id) const
//{
//    mangled_ppc("?get_subgraph@c_animation_manager@@QBAPBVc_model_animation_graph@@Vc_animation_id@@@Z");
//};

//private: long c_animation_manager::filter_weapon_class_name(long, long) const
//{
//    mangled_ppc("?filter_weapon_class_name@c_animation_manager@@ABAJJJ@Z");
//};

//public: long c_model_animation_graph::find_weapon_class_name(long) const
//{
//    mangled_ppc("?find_weapon_class_name@c_model_animation_graph@@QBAJJ@Z");
//};

//private: void c_animation_manager::internal_initialize_search_cache(void)
//{
//    mangled_ppc("?internal_initialize_search_cache@c_animation_manager@@AAAXXZ");
//};

//private: void c_animation_manager::internal_determine_goal_state(long, long, long, long, enum e_physics_animation_state, struct s_animation_goal_settings *) const
//{
//    mangled_ppc("?internal_determine_goal_state@c_animation_manager@@ABAXJJJJW4e_physics_animation_state@@PAUs_animation_goal_settings@@@Z");
//};

//private: bool c_animation_manager::internal_validate_goal_state(long, long, long, long, long, enum e_physics_animation_state, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver> *, struct s_animation_goal_settings *, struct s_animation_goal_settings *, class c_animation_id *) const
//{
//    mangled_ppc("?internal_validate_goal_state@c_animation_manager@@ABA_NJJJJJW4e_physics_animation_state@@V?$c_flags@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@PAV3@PAUs_animation_goal_settings@@3PAVc_animation_id@@@Z");
//};

//public: class c_weapon_type const * c_model_animation_graph::find_weapon_type(long, long, long, class c_animation_graph_search_cache *) const
//{
//    mangled_ppc("?find_weapon_type@c_model_animation_graph@@QBAPBVc_weapon_type@@JJJPAVc_animation_graph_search_cache@@@Z");
//};

//public: class c_weapon_type const * c_weapon_class::find_type(long) const
//{
//    mangled_ppc("?find_type@c_weapon_class@@QBAPBVc_weapon_type@@J@Z");
//};

//public: class c_weapon_class const * c_model_animation_graph::find_weapon_class(long, long, class c_animation_graph_search_cache *) const
//{
//    mangled_ppc("?find_weapon_class@c_model_animation_graph@@QBAPBVc_weapon_class@@JJPAVc_animation_graph_search_cache@@@Z");
//};

//public: bool c_animation_manager::set_custom_goal(class c_animation_id, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_custom_goal@c_animation_manager@@QAA_NVc_animation_id@@V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@@Z");
//};

//public: float c_animation_manager::get_state_playback_ratio(void) const
//{
//    mangled_ppc("?get_state_playback_ratio@c_animation_manager@@QBAMXZ");
//};

//public: float c_animation_manager::get_authored_state_time(void) const
//{
//    mangled_ppc("?get_authored_state_time@c_animation_manager@@QBAMXZ");
//};

//public: float c_animation_manager::get_authored_state_duration(void) const
//{
//    mangled_ppc("?get_authored_state_duration@c_animation_manager@@QBAMXZ");
//};

//public: void c_animation_manager::set_state_position(float)
//{
//    mangled_ppc("?set_state_position@c_animation_manager@@QAAXM@Z");
//};

//public: void c_animation_manager::set_state_position_from_authored_time(float)
//{
//    mangled_ppc("?set_state_position_from_authored_time@c_animation_manager@@QAAXM@Z");
//};

//public: void c_animation_manager::set_state_position_from_playback_ratio(float)
//{
//    mangled_ppc("?set_state_position_from_playback_ratio@c_animation_manager@@QAAXM@Z");
//};

//public: void c_animation_manager::set_state_position_from_playback_time(float)
//{
//    mangled_ppc("?set_state_position_from_playback_time@c_animation_manager@@QAAXM@Z");
//};

//public: void c_animation_manager::update_state_position(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long)
//{
//    mangled_ppc("?update_state_position@c_animation_manager@@QAAXMPBV1@P6AXPBUs_animation_event_data@@J@ZJ@Z");
//};

//public: void c_animation_manager::update_state_position_from_authored_time(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long)
//{
//    mangled_ppc("?update_state_position_from_authored_time@c_animation_manager@@QAAXMPBV1@P6AXPBUs_animation_event_data@@J@ZJ@Z");
//};

//public: void c_animation_manager::update_state_position_from_playback_ratio(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long)
//{
//    mangled_ppc("?update_state_position_from_playback_ratio@c_animation_manager@@QAAXMPBV1@P6AXPBUs_animation_event_data@@J@ZJ@Z");
//};

//public: void c_animation_manager::update_state_position_from_playback_time(float, class c_animation_manager const *, void (*)(struct s_animation_event_data const *, long), long)
//{
//    mangled_ppc("?update_state_position_from_playback_time@c_animation_manager@@QAAXMPBV1@P6AXPBUs_animation_event_data@@J@ZJ@Z");
//};

//public: void c_animation_manager::set_state_playback_speed(float)
//{
//    mangled_ppc("?set_state_playback_speed@c_animation_manager@@QAAXM@Z");
//};

//public: void c_animation_manager::reset_state_channels(void)
//{
//    mangled_ppc("?reset_state_channels@c_animation_manager@@QAAXXZ");
//};

//public: void c_animation_manager::reset_auxilary_channels(void)
//{
//    mangled_ppc("?reset_auxilary_channels@c_animation_manager@@QAAXXZ");
//};

//public: class c_animation_id c_animation_manager::locate_blend_animation(long, long, long, long, long *) const
//{
//    mangled_ppc("?locate_blend_animation@c_animation_manager@@QBA?AVc_animation_id@@JJJJPAJ@Z");
//};

//public: class c_animation_id c_animation_manager::locate_transition_animation(long, long, long, long) const
//{
//    mangled_ppc("?locate_transition_animation@c_animation_manager@@QBA?AVc_animation_id@@JJJJ@Z");
//};

//public: bool c_animation_manager::find_goal(long, long, long, long, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("?find_goal@c_animation_manager@@QBA_NJJJJV?$c_flags@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_animation_id c_animation_manager::find_goal_animation_id(long, long, long, long, long, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("?find_goal_animation_id@c_animation_manager@@QBA?AVc_animation_id@@JJJJJV?$c_flags@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_animation_id c_animation_manager::find_goal_animation_id(long, long, long, long, long, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, struct s_animation_goal_settings *) const
//{
//    mangled_ppc("?find_goal_animation_id@c_animation_manager@@QBA?AVc_animation_id@@JJJJJV?$c_flags@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@PAUs_animation_goal_settings@@@Z");
//};

//public: enum e_physics_animation_state c_animation_manager::get_physics_animation_state(void) const
//{
//    mangled_ppc("?get_physics_animation_state@c_animation_manager@@QBA?AW4e_physics_animation_state@@XZ");
//};

//public: bool c_animation_manager::tags_have_changed(void) const
//{
//    mangled_ppc("?tags_have_changed@c_animation_manager@@QBA_NXZ");
//};

//public: bool c_animation_manager::handle_tag_change(void)
//{
//    mangled_ppc("?handle_tag_change@c_animation_manager@@QAA_NXZ");
//};

//public: bool c_animation_manager::update_interpolators(void)
//{
//    mangled_ppc("?update_interpolators@c_animation_manager@@QAA_NXZ");
//};

//public: class c_animation_channel const * c_animation_manager::get_active_channel(void) const
//{
//    mangled_ppc("?get_active_channel@c_animation_manager@@QBAPBVc_animation_channel@@XZ");
//};

//public: class c_animation_channel * c_animation_manager::get_writable_active_channel(void)
//{
//    mangled_ppc("?get_writable_active_channel@c_animation_manager@@QAAPAVc_animation_channel@@XZ");
//};

//public: void c_animation_manager::get_node_orientations(struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long)
//{
//    mangled_ppc("?get_node_orientations@c_animation_manager@@QAAXPBUrender_model_definition@@MPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@Vc_animation_id@@PBKM@ZJ@Z");
//};

//public: void c_animation_manager::adjust_node_orientations_for_rendering(struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long)
//{
//    mangled_ppc("?adjust_node_orientations_for_rendering@c_animation_manager@@QAAXPBUrender_model_definition@@MPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@Vc_animation_id@@PBKM@ZJ@Z");
//};

//bool get_world_space_data_from_ik_chain_target(long, class c_model_animation_graph const *, class c_enum<enum e_animation_types, char, 0, 4, struct s_default_enum_string_resolver>, struct s_ik_chain_target const *, bool, struct real_orientation const *, long, struct real_matrix4x3const *, struct real_orientation *, union real_point3d *)
//{
//    mangled_ppc("?get_world_space_data_from_ik_chain_target@@YA_NJPBVc_model_animation_graph@@V?$c_enum@W4e_animation_types@@D$0A@$03Us_default_enum_string_resolver@@@@PBUs_ik_chain_target@@_NPBUreal_orientation@@JPBUreal_matrix4x3@@PAU4@PATreal_point3d@@@Z");
//};

//public: void c_animation_manager::lock_search_cache(void)
//{
//    mangled_ppc("?lock_search_cache@c_animation_manager@@QAAXXZ");
//};

//public: class c_animation_graph_search_cache * c_animation_manager::get_search_cache(void) const
//{
//    mangled_ppc("?get_search_cache@c_animation_manager@@QBAPAVc_animation_graph_search_cache@@XZ");
//};

//public: void c_animation_manager::unlock_search_cache(void)
//{
//    mangled_ppc("?unlock_search_cache@c_animation_manager@@QAAXXZ");
//};

//public: void c_animation_manager::clear_search_cache(void)
//{
//    mangled_ppc("?clear_search_cache@c_animation_manager@@QAAXXZ");
//};

//public: void c_animation_manager::clear_search_cache_function(void)
//{
//    mangled_ppc("?clear_search_cache_function@c_animation_manager@@QAAXXZ");
//};

//public: long c_animation_manager::get_node_index_for_foot(class c_enum<enum e_locking_foot_types, char, 0, 2, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("?get_node_index_for_foot@c_animation_manager@@QBAJV?$c_enum@W4e_locking_foot_types@@D$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_animation_manager::apply_ik_footlocking(struct real_matrix4x3*, long, class c_big_flags_typed_no_init<long, 256> *)
//{
//    mangled_ppc("?apply_ik_footlocking@c_animation_manager@@QAAXPAUreal_matrix4x3@@JPAV?$c_big_flags_typed_no_init@J$0BAA@@@@Z");
//};

//public: void c_animation_manager::apply_ik_chains(struct real_matrix4x3*, long, class c_big_flags_typed_no_init<long, 256> *)
//{
//    mangled_ppc("?apply_ik_chains@c_animation_manager@@QAAXPAUreal_matrix4x3@@JPAV?$c_big_flags_typed_no_init@J$0BAA@@@@Z");
//};

//void blend_raw_ik_chain_targets(long, class c_model_animation_graph const *, class c_enum<enum e_animation_types, char, 0, 4, struct s_default_enum_string_resolver>, long, struct s_ik_chain_target const *, struct real_orientation const *, long, struct real_matrix4x3const *, long, struct s_ik_chain_target *)
//{
//    mangled_ppc("?blend_raw_ik_chain_targets@@YAXJPBVc_model_animation_graph@@V?$c_enum@W4e_animation_types@@D$0A@$03Us_default_enum_string_resolver@@@@JPBUs_ik_chain_target@@PBUreal_orientation@@JPBUreal_matrix4x3@@JPAU3@@Z");
//};

//long get_raw_ik_chain_target_index(long, long)
//{
//    mangled_ppc("?get_raw_ik_chain_target_index@@YAJJJ@Z");
//};

//void blend_ik_chain_target_with_data(float, class c_enum<enum e_animation_blend_types, char, 0, 2, struct s_default_enum_string_resolver>, bool, struct real_orientation const *, union real_point3d const *, struct s_ik_chain_target *)
//{
//    mangled_ppc("?blend_ik_chain_target_with_data@@YAXMV?$c_enum@W4e_animation_blend_types@@D$0A@$01Us_default_enum_string_resolver@@@@_NPBUreal_orientation@@PBTreal_point3d@@PAUs_ik_chain_target@@@Z");
//};

//void setup_ik_chain_targets_for_animation_channel(class c_model_animation_graph const *, class c_animation_channel const *, long, struct s_ik_chain_target *)
//{
//    mangled_ppc("?setup_ik_chain_targets_for_animation_channel@@YAXPBVc_model_animation_graph@@PBVc_animation_channel@@JPAUs_ik_chain_target@@@Z");
//};

//void setup_ik_chain_targets_for_animation(class c_model_animation_graph const *, class c_animation_id, long, float, float, bool, long, struct s_ik_chain_target *)
//{
//    mangled_ppc("?setup_ik_chain_targets_for_animation@@YAXPBVc_model_animation_graph@@Vc_animation_id@@JMM_NJPAUs_ik_chain_target@@@Z");
//};

//public: struct s_tag_block const & c_model_animation::get_ik_chain_events(void) const
//{
//    mangled_ppc("?get_ik_chain_events@c_model_animation@@QBAABUs_tag_block@@XZ");
//};

//void setup_ik_chain_target_for_animation(class c_model_animation_graph const *, class c_animation_id, float, struct s_animation_ik_chain_event const *, class c_animation_data const *, bool, struct s_ik_chain_target *)
//{
//    mangled_ppc("?setup_ik_chain_target_for_animation@@YAXPBVc_model_animation_graph@@Vc_animation_id@@MPBUs_animation_ik_chain_event@@PBVc_animation_data@@_NPAUs_ik_chain_target@@@Z");
//};

//public: struct s_tag_block const & c_model_animation::get_ik_chain_proxies(void) const
//{
//    mangled_ppc("?get_ik_chain_proxies@c_model_animation@@QBAABUs_tag_block@@XZ");
//};

//void blend_two_ik_chain_targets(long, class c_model_animation_graph const *, class c_enum<enum e_animation_types, char, 0, 4, struct s_default_enum_string_resolver>, float, struct real_orientation const *, long, struct real_matrix4x3const *, long, struct real_matrix4x3const *, long, struct s_ik_chain_target const *, long, struct s_ik_chain_target const *, long, struct s_ik_chain_target *)
//{
//    mangled_ppc("?blend_two_ik_chain_targets@@YAXJPBVc_model_animation_graph@@V?$c_enum@W4e_animation_types@@D$0A@$03Us_default_enum_string_resolver@@@@MPBUreal_orientation@@JPBUreal_matrix4x3@@J3JPBUs_ik_chain_target@@J4JPAU5@@Z");
//};

//bool test_runtime_blend_flags(class c_flags<enum e_ik_chain_target_flags, unsigned short, 2, struct s_default_enum_string_resolver>, class c_flags<enum e_ik_chain_target_flags, unsigned short, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?test_runtime_blend_flags@@YA_NV?$c_flags@W4e_ik_chain_target_flags@@G$01Us_default_enum_string_resolver@@@@0@Z");
//};

//void convert_ik_chain_targets_to_world_space(long, class c_model_animation_graph const *, class c_enum<enum e_animation_types, char, 0, 4, struct s_default_enum_string_resolver>, struct real_orientation const *, long, struct real_matrix4x3const *, long, struct s_ik_chain_target *)
//{
//    mangled_ppc("?convert_ik_chain_targets_to_world_space@@YAXJPBVc_model_animation_graph@@V?$c_enum@W4e_animation_types@@D$0A@$03Us_default_enum_string_resolver@@@@PBUreal_orientation@@JPBUreal_matrix4x3@@JPAUs_ik_chain_target@@@Z");
//};

//public: s_ik_chain_target::s_ik_chain_target(void)
//{
//    mangled_ppc("??0s_ik_chain_target@@QAA@XZ");
//};

//public: bool c_animation_manager::active_channel_contains_motion_data(void) const
//{
//    mangled_ppc("?active_channel_contains_motion_data@c_animation_manager@@QBA_NXZ");
//};

//public: float c_animation_manager::read_active_channel_playback_speed(void) const
//{
//    mangled_ppc("?read_active_channel_playback_speed@c_animation_manager@@QBAMXZ");
//};

//public: void c_animation_manager::read_active_channel_motion_rates(long, union vector3d *, union vector3d *) const
//{
//    mangled_ppc("?read_active_channel_motion_rates@c_animation_manager@@QBAXJPATvector3d@@0@Z");
//};

//public: void c_animation_manager::read_active_channel_motion_offsets(long, union vector3d *, union vector3d *) const
//{
//    mangled_ppc("?read_active_channel_motion_offsets@c_animation_manager@@QBAXJPATvector3d@@0@Z");
//};

//public: bool c_animation_manager::update_analog_movement_from_desired_velocity(long, union vector3d const *, bool)
//{
//    mangled_ppc("?update_analog_movement_from_desired_velocity@c_animation_manager@@QAA_NJPBTvector3d@@_N@Z");
//};

//public: bool c_animation_manager::update_analog_movement_from_throttle(long, union vector3d const *, bool)
//{
//    mangled_ppc("?update_analog_movement_from_throttle@c_animation_manager@@QAA_NJPBTvector3d@@_N@Z");
//};

//private: bool c_animation_manager::internal_find_extremal_gait_parameters(struct s_animation_goal_settings const *, float *, float *) const
//{
//    mangled_ppc("?internal_find_extremal_gait_parameters@c_animation_manager@@ABA_NPBUs_animation_goal_settings@@PAM1@Z");
//};

//private: void c_animation_manager::internal_clamp_original_gait_facing(struct s_animation_goal_settings const *, struct s_animation_gait_settings *)
//{
//    mangled_ppc("?internal_clamp_original_gait_facing@c_animation_manager@@AAAXPBUs_animation_goal_settings@@PAUs_animation_gait_settings@@@Z");
//};

//float internal_compute_facing_turn_complete_angle(long, struct s_animation_goal_settings const *, struct s_animation_gait_settings const *)
//{
//    mangled_ppc("?internal_compute_facing_turn_complete_angle@@YAMJPBUs_animation_goal_settings@@PBUs_animation_gait_settings@@@Z");
//};

//private: bool c_animation_manager::internal_compute_turning_gait_settings_for_state(struct s_animation_goal_settings const *, struct s_animation_gait_settings *) const
//{
//    mangled_ppc("?internal_compute_turning_gait_settings_for_state@c_animation_manager@@ABA_NPBUs_animation_goal_settings@@PAUs_animation_gait_settings@@@Z");
//};

//private: union vector3d c_animation_manager::internal_compute_object_gait_parameter_vector_for_state(struct s_animation_goal_settings const *, struct s_animation_gait_settings const *, bool, bool) const
//{
//    mangled_ppc("?internal_compute_object_gait_parameter_vector_for_state@c_animation_manager@@ABA?ATvector3d@@PBUs_animation_goal_settings@@PBUs_animation_gait_settings@@_N2@Z");
//};

//bool validate_gait_speeds(class c_model_animation_graph const *, struct s_animation_gait const *, class c_animation_id, class c_animation_id, float, float)
//{
//    mangled_ppc("?validate_gait_speeds@@YA_NPBVc_model_animation_graph@@PBUs_animation_gait@@Vc_animation_id@@2MM@Z");
//};

//bool validate_transition_distances(class c_model_animation_graph const *, struct s_animation_gait const *, class c_animation_id, class c_animation_id, float, float)
//{
//    mangled_ppc("?validate_transition_distances@@YA_NPBVc_model_animation_graph@@PBUs_animation_gait@@Vc_animation_id@@2MM@Z");
//};

//public: bool c_animation_manager::compute_stopping_parameters_for_fastest_possible_throttle_to_target(enum e_physics_animation_state, float, float *, float *, float *, float *)
//{
//    mangled_ppc("?compute_stopping_parameters_for_fastest_possible_throttle_to_target@c_animation_manager@@QAA_NW4e_physics_animation_state@@MPAM111@Z");
//};

//public: c_animation_gait_info::c_animation_gait_info(void)
//{
//    mangled_ppc("??0c_animation_gait_info@@QAA@XZ");
//};

//public: void c_animation_gait_info::clear(void)
//{
//    mangled_ppc("?clear@c_animation_gait_info@@QAAXXZ");
//};

//void movement_gait_find_neighbors(class c_animation_manager const *, struct s_animation_goal_settings const *, long, class c_animation_gait_info const *, class c_animation_gait_info *, class c_animation_gait_info *)
//{
//    mangled_ppc("?movement_gait_find_neighbors@@YAXPBVc_animation_manager@@PBUs_animation_goal_settings@@JPBVc_animation_gait_info@@PAV3@3@Z");
//};

//public: bool c_animation_gait_info::valid(void) const
//{
//    mangled_ppc("?valid@c_animation_gait_info@@QBA_NXZ");
//};

//bool movement_gait_find_best_stopping_parameters(class c_animation_manager const *, struct s_animation_goal_settings const *, class c_animation_gait_info const *, class c_animation_gait_info const *, class c_animation_gait_info const *, float, float *, float *, float *, float *)
//{
//    mangled_ppc("?movement_gait_find_best_stopping_parameters@@YA_NPBVc_animation_manager@@PBUs_animation_goal_settings@@PBVc_animation_gait_info@@22MPAM333@Z");
//};

//bool use_player_physics(long)
//{
//    mangled_ppc("?use_player_physics@@YA_NJ@Z");
//};

//void movement_gait_vector_compute(enum e_physics_animation_state, float, float, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?movement_gait_vector_compute@@YAXW4e_physics_animation_state@@MMPATvector3d@@1@Z");
//};

//public: c_animation_gait_info::~c_animation_gait_info(void)
//{
//    mangled_ppc("??1c_animation_gait_info@@QAA@XZ");
//};

//public: long c_animation_manager::compute_animation_state_from_character_physics_state(long, long, long, enum e_physics_animation_state)
//{
//    mangled_ppc("?compute_animation_state_from_character_physics_state@c_animation_manager@@QAAJJJJW4e_physics_animation_state@@@Z");
//};

//public: void c_animation_manager::compute_blend_ratio_between_animations_from_gait_parameter_in_state(enum e_physics_animation_state, class c_model_animation_graph const *, class c_animation_id, class c_animation_id, union vector3d const *, float *, float *) const
//{
//    mangled_ppc("?compute_blend_ratio_between_animations_from_gait_parameter_in_state@c_animation_manager@@QBAXW4e_physics_animation_state@@PBVc_model_animation_graph@@Vc_animation_id@@2PBTvector3d@@PAM4@Z");
//};

//public: bool c_animation_manager::setup_gait_for_state(struct s_animation_goal_settings const *, struct s_animation_state_change_settings const *, struct s_animation_state_change_settings *) const
//{
//    mangled_ppc("?setup_gait_for_state@c_animation_manager@@QBA_NPBUs_animation_goal_settings@@PBUs_animation_state_change_settings@@PAU3@@Z");
//};

//class c_animation_id find_best_transition_in_gait(class c_model_animation_graph const *, bool, union vector3d const *, float, float, class c_animation_id, class c_animation_id, class c_animation_id, float *)
//{
//    mangled_ppc("?find_best_transition_in_gait@@YA?AVc_animation_id@@PBVc_model_animation_graph@@_NPBTvector3d@@MMV1@33PAM@Z");
//};

//public: bool c_animation_manager::setup_gait_for_transition(struct s_animation_goal_settings const *, struct s_animation_state_change_settings const *, class c_animation_channel_settings *) const
//{
//    mangled_ppc("?setup_gait_for_transition@c_animation_manager@@QBA_NPBUs_animation_goal_settings@@PBUs_animation_state_change_settings@@PAVc_animation_channel_settings@@@Z");
//};

//public: bool c_animation_manager::get_movement_animations_velocity_boundaries(enum e_physics_animation_state, float *, float *) const
//{
//    mangled_ppc("?get_movement_animations_velocity_boundaries@c_animation_manager@@QBA_NW4e_physics_animation_state@@PAM1@Z");
//};

//public: bool c_animation_manager::get_movement_animations_velocity_boundaries(long, long, long, enum e_physics_animation_state, float *, float *) const
//{
//    mangled_ppc("?get_movement_animations_velocity_boundaries@c_animation_manager@@QBA_NJJJW4e_physics_animation_state@@PAM1@Z");
//};

//public: void c_animation_manager::get_overlay_group_graph_and_definition_index(long *, long *) const
//{
//    mangled_ppc("?get_overlay_group_graph_and_definition_index@c_animation_manager@@QBAXPAJ0@Z");
//};

//public: void c_animation_manager::set_overlay_group_graph_and_definition_index(long, long)
//{
//    mangled_ppc("?set_overlay_group_graph_and_definition_index@c_animation_manager@@QAAXJJ@Z");
//};

//private: bool c_animation_manager::find_and_setup_best_gait(struct s_animation_goal_settings const *, union vector3d const *, class c_animation_id *, class c_animation_id *, struct s_animation_gait_settings *, struct s_animation_gait const **) const
//{
//    mangled_ppc("?find_and_setup_best_gait@c_animation_manager@@ABA_NPBUs_animation_goal_settings@@PBTvector3d@@PAVc_animation_id@@2PAUs_animation_gait_settings@@PAPBUs_animation_gait@@@Z");
//};

//public: bool c_animation_manager::get_active_movement_heading(union vector3d *) const
//{
//    mangled_ppc("?get_active_movement_heading@c_animation_manager@@QBA_NPATvector3d@@@Z");
//};

//public: union vector3d const * c_model_animation::get_movement_heading(void) const
//{
//    mangled_ppc("?get_movement_heading@c_model_animation@@QBAPBTvector3d@@XZ");
//};

//public: bool c_animation_manager::get_animation_id_and_gait_parameter(class c_model_animation_graph const *, struct s_animation_goal_settings const *, long, class c_animation_id *, float *) const
//{
//    mangled_ppc("?get_animation_id_and_gait_parameter@c_animation_manager@@QBA_NPBVc_model_animation_graph@@PBUs_animation_goal_settings@@JPAVc_animation_id@@PAM@Z");
//};

//public: float c_model_animation::get_animation_gait_parameter(enum e_physics_animation_state) const
//{
//    mangled_ppc("?get_animation_gait_parameter@c_model_animation@@QBAMW4e_physics_animation_state@@@Z");
//};

//public: float c_model_animation::get_average_linear_rate(void) const
//{
//    mangled_ppc("?get_average_linear_rate@c_model_animation@@QBAMXZ");
//};

//public: float c_model_animation::get_average_translation_magnitude(void) const
//{
//    mangled_ppc("?get_average_translation_magnitude@c_model_animation@@QBAMXZ");
//};

//public: float c_model_animation::get_total_angular_offset(void) const
//{
//    mangled_ppc("?get_total_angular_offset@c_model_animation@@QBAMXZ");
//};

//public: class c_animation_id c_animation_manager::find_action(long, long, long, long, long, long *, long *, long *, long *, long *) const
//{
//    mangled_ppc("?find_action@c_animation_manager@@QBA?AVc_animation_id@@JJJJJPAJ0000@Z");
//};

//public: class c_animation_id c_animation_manager::find_transition(long, long, long, long, long, long, long) const
//{
//    mangled_ppc("?find_transition@c_animation_manager@@QBA?AVc_animation_id@@JJJJJJJ@Z");
//};

//public: short c_animation_manager::find_gait_group(long, long, long, long) const
//{
//    mangled_ppc("?find_gait_group@c_animation_manager@@QBAFJJJJ@Z");
//};

//public: bool c_animation_manager::find_velocity_boundaries(long, long, long, long, enum e_physics_animation_state, float *, float *) const
//{
//    mangled_ppc("?find_velocity_boundaries@c_animation_manager@@QBA_NJJJJW4e_physics_animation_state@@PAM1@Z");
//};

//private: bool c_animation_manager::select_best_animations_in_gait(class c_model_animation_graph const *, struct s_animation_goal_settings const *, long, float, class c_animation_id *, class c_animation_id *) const
//{
//    mangled_ppc("?select_best_animations_in_gait@c_animation_manager@@ABA_NPBVc_model_animation_graph@@PBUs_animation_goal_settings@@JMPAVc_animation_id@@2@Z");
//};

//public: short c_model_animation::get_next_animation_index(void) const
//{
//    mangled_ppc("?get_next_animation_index@c_model_animation@@QBAFXZ");
//};

//public: bool c_animation_manager::can_play_transition_animations(void) const
//{
//    mangled_ppc("?can_play_transition_animations@c_animation_manager@@QBA_NXZ");
//};

//public: bool c_animation_manager::can_use_unit_throttle_for_gait_blending(void) const
//{
//    mangled_ppc("?can_use_unit_throttle_for_gait_blending@c_animation_manager@@QBA_NXZ");
//};

//public: bool c_animation_manager::can_update_gait_for_active_channel(void)
//{
//    mangled_ppc("?can_update_gait_for_active_channel@c_animation_manager@@QAA_NXZ");
//};

//public: bool c_animation_manager::update_gait_for_active_channel(bool)
//{
//    mangled_ppc("?update_gait_for_active_channel@c_animation_manager@@QAA_N_N@Z");
//};

//private: bool c_animation_manager::internal_can_update_gait_for_state(void)
//{
//    mangled_ppc("?internal_can_update_gait_for_state@c_animation_manager@@AAA_NXZ");
//};

//public: class c_enum<enum e_animation_frame_info_types, char, 0, 5, struct s_default_enum_string_resolver> c_model_animation::get_frame_info_type(void) const
//{
//    mangled_ppc("?get_frame_info_type@c_model_animation@@QBA?AV?$c_enum@W4e_animation_frame_info_types@@D$0A@$04Us_default_enum_string_resolver@@@@XZ");
//};

//private: bool c_animation_manager::internal_update_gait_for_state(union vector3d const *, bool)
//{
//    mangled_ppc("?internal_update_gait_for_state@c_animation_manager@@AAA_NPBTvector3d@@_N@Z");
//};

//private: bool c_animation_manager::internal_can_change_gait_animations(class c_animation_id, class c_animation_id)
//{
//    mangled_ppc("?internal_can_change_gait_animations@c_animation_manager@@AAA_NVc_animation_id@@0@Z");
//};

//private: bool c_animation_manager::internal_can_update_gait_for_transition(void)
//{
//    mangled_ppc("?internal_can_update_gait_for_transition@c_animation_manager@@AAA_NXZ");
//};

//private: bool c_animation_manager::internal_update_gait_for_transition(union vector3d const *, bool)
//{
//    mangled_ppc("?internal_update_gait_for_transition@c_animation_manager@@AAA_NPBTvector3d@@_N@Z");
//};

//public: void c_animation_manager::append_debug_string(char *, long) const
//{
//    mangled_ppc("?append_debug_string@c_animation_manager@@QBAXPADJ@Z");
//};

//public: void c_animation_manager::append_debug_string_mixing_board(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>, char *, long) const
//{
//    mangled_ppc("?append_debug_string_mixing_board@c_animation_manager@@QBAXV?$c_enum@W4e_mixing_board_indices@@E$0A@$01Us_default_enum_string_resolver@@@@PADJ@Z");
//};

//enum e_mixing_board_component_type operator++(enum e_mixing_board_component_type &, int)
//{
//    mangled_ppc("??E@YA?AW4e_mixing_board_component_type@@AAW40@H@Z");
//};

//public: char const * c_mixing_board_definition::get_component_name(long, long) const
//{
//    mangled_ppc("?get_component_name@c_mixing_board_definition@@QBAPBDJJ@Z");
//};

//public: bool c_mixing_board_definition::validate_component_index(long, long) const
//{
//    mangled_ppc("?validate_component_index@c_mixing_board_definition@@QBA_NJJ@Z");
//};

//public: bool c_animation_manager::get_pill_offset_data(union real_point3d *, union vector3d *) const
//{
//    mangled_ppc("?get_pill_offset_data@c_animation_manager@@QBA_NPATreal_point3d@@PATvector3d@@@Z");
//};

//public: bool c_animation_manager::get_pill_offset_data_from_animation(class c_animation_id, long, union real_point3d *, union vector3d *) const
//{
//    mangled_ppc("?get_pill_offset_data_from_animation@c_animation_manager@@QBA_NVc_animation_id@@JPATreal_point3d@@PATvector3d@@@Z");
//};

//public: bool c_animation_manager::get_scaled_pill_offset_data_from_animation(class c_animation_id, long, float, union real_point3d *, union vector3d *) const
//{
//    mangled_ppc("?get_scaled_pill_offset_data_from_animation@c_animation_manager@@QBA_NVc_animation_id@@JMPATreal_point3d@@PATvector3d@@@Z");
//};

//public: void c_animation_manager::set_state_position_to_last_frame(void)
//{
//    mangled_ppc("?set_state_position_to_last_frame@c_animation_manager@@QAAXXZ");
//};

//public: bool c_animation_manager::active_channel_paused(void) const
//{
//    mangled_ppc("?active_channel_paused@c_animation_manager@@QBA_NXZ");
//};

//public: bool c_animation_manager::active_channel_playing(void) const
//{
//    mangled_ppc("?active_channel_playing@c_animation_manager@@QBA_NXZ");
//};

//public: bool c_animation_manager::state_channel_complete(void) const
//{
//    mangled_ppc("?state_channel_complete@c_animation_manager@@QBA_NXZ");
//};

//public: bool c_animation_manager::state_channel_reached_last_frame(void) const
//{
//    mangled_ppc("?state_channel_reached_last_frame@c_animation_manager@@QBA_NXZ");
//};

//public: long c_animation_manager::get_mixing_board_address(void) const
//{
//    mangled_ppc("?get_mixing_board_address@c_animation_manager@@QBAJXZ");
//};

//public: long c_animation_manager::get_interpolation_mixing_board_address(void) const
//{
//    mangled_ppc("?get_interpolation_mixing_board_address@c_animation_manager@@QBAJXZ");
//};

//public: void c_animation_manager::reset_mixing_board(void)
//{
//    mangled_ppc("?reset_mixing_board@c_animation_manager@@QAAXXZ");
//};

//public: void c_animation_manager::reset_all_mixing_boards(void)
//{
//    mangled_ppc("?reset_all_mixing_boards@c_animation_manager@@QAAXXZ");
//};

//public: class c_pose_blend_channel * c_animation_manager::get_mixing_board_pose_blend_channel(long) const
//{
//    mangled_ppc("?get_mixing_board_pose_blend_channel@c_animation_manager@@QBAPAVc_pose_blend_channel@@J@Z");
//};

//public: class c_mixing_board_slider * c_animation_manager::get_mixing_board_slider(long) const
//{
//    mangled_ppc("?get_mixing_board_slider@c_animation_manager@@QBAPAVc_mixing_board_slider@@J@Z");
//};

//public: class c_animation_channel * c_animation_manager::get_mixing_board_animation_channel(long) const
//{
//    mangled_ppc("?get_mixing_board_animation_channel@c_animation_manager@@QBAPAVc_animation_channel@@J@Z");
//};

//public: class c_auxilary_channel * c_animation_manager::get_mixing_board_auxilary_channel(long) const
//{
//    mangled_ppc("?get_mixing_board_auxilary_channel@c_animation_manager@@QBAPAVc_auxilary_channel@@J@Z");
//};

//public: class c_aiming_channel * c_animation_manager::get_mixing_board_aiming_channel(long) const
//{
//    mangled_ppc("?get_mixing_board_aiming_channel@c_animation_manager@@QBAPAVc_aiming_channel@@J@Z");
//};

//public: class c_facial_animation_channel * c_animation_manager::get_mixing_board_facial_animation_channel(void) const
//{
//    mangled_ppc("?get_mixing_board_facial_animation_channel@c_animation_manager@@QBAPAVc_facial_animation_channel@@XZ");
//};

//public: class t_short_fixed<13> c_animation_manager::get_slider_value_from_chain(class c_mixing_board_slider const *) const
//{
//    mangled_ppc("?get_slider_value_from_chain@c_animation_manager@@QBA?AV?$t_short_fixed@$0N@@@PBVc_mixing_board_slider@@@Z");
//};

//private: long c_animation_manager::internal_get_mixing_board_address(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>, class c_mixing_board_definition const *) const
//{
//    mangled_ppc("?internal_get_mixing_board_address@c_animation_manager@@ABAJV?$c_enum@W4e_mixing_board_indices@@E$0A@$01Us_default_enum_string_resolver@@@@PBVc_mixing_board_definition@@@Z");
//};

//private: void c_animation_manager::internal_reset_mixing_board(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?internal_reset_mixing_board@c_animation_manager@@AAAXV?$c_enum@W4e_mixing_board_indices@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//private: class t_short_fixed<13> c_animation_manager::internal_get_slider_value_from_chain(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>, class c_mixing_board_slider const *) const
//{
//    mangled_ppc("?internal_get_slider_value_from_chain@c_animation_manager@@ABA?AV?$t_short_fixed@$0N@@@V?$c_enum@W4e_mixing_board_indices@@E$0A@$01Us_default_enum_string_resolver@@@@PBVc_mixing_board_slider@@@Z");
//};

//public: long c_mixing_board_slider::get_parent_slider_index(void) const
//{
//    mangled_ppc("?get_parent_slider_index@c_mixing_board_slider@@QBAJXZ");
//};

//public: class c_enum<enum e_mixing_board_parent_slider_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> c_mixing_board_slider::get_parent_slider_type(void) const
//{
//    mangled_ppc("?get_parent_slider_type@c_mixing_board_slider@@QBA?AV?$c_enum@W4e_mixing_board_parent_slider_type@@E$0A@$02Us_default_enum_string_resolver@@@@XZ");
//};

//public: bool c_mixing_board_slider::parent_slider_valid(void) const
//{
//    mangled_ppc("?parent_slider_valid@c_mixing_board_slider@@QBA_NXZ");
//};

//private: class c_mixing_board_slider * c_animation_manager::internal_get_mixing_board_slider(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>, long) const
//{
//    mangled_ppc("?internal_get_mixing_board_slider@c_animation_manager@@ABAPAVc_mixing_board_slider@@V?$c_enum@W4e_mixing_board_indices@@E$0A@$01Us_default_enum_string_resolver@@@@J@Z");
//};

//public: class t_short_fixed<13> c_animation_manager::get_slider_value_from_chain(long, enum e_mixing_board_parent_slider_type) const
//{
//    mangled_ppc("?get_slider_value_from_chain@c_animation_manager@@QBA?AV?$t_short_fixed@$0N@@@JW4e_mixing_board_parent_slider_type@@@Z");
//};

//public: bool c_animation_manager::update_state_mixing_board_components(void (*)(struct s_animation_event_data const *, long), long) const
//{
//    mangled_ppc("?update_state_mixing_board_components@c_animation_manager@@QBA_NP6AXPBUs_animation_event_data@@J@ZJ@Z");
//};

//public: bool c_mixing_board_component_iterator::get(class c_mixing_board_slider **)
//{
//    mangled_ppc("?get@c_mixing_board_component_iterator@@QAA_NPAPAVc_mixing_board_slider@@@Z");
//};

//public: bool c_animation_manager::update_interpolation_mixing_board_components(void (*)(struct s_animation_event_data const *, long), long) const
//{
//    mangled_ppc("?update_interpolation_mixing_board_components@c_animation_manager@@QBA_NP6AXPBUs_animation_event_data@@J@ZJ@Z");
//};

//public: void c_animation_manager::copy_mixing_board(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>, class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?copy_mixing_board@c_animation_manager@@QAAXV?$c_enum@W4e_mixing_board_indices@@E$0A@$01Us_default_enum_string_resolver@@@@0@Z");
//};

//public: c_auxilary_channel_settings::c_auxilary_channel_settings(void)
//{
//    mangled_ppc("??0c_auxilary_channel_settings@@QAA@XZ");
//};

//public: void c_auxilary_channel_settings::clear(void)
//{
//    mangled_ppc("?clear@c_auxilary_channel_settings@@QAAXXZ");
//};

//public: c_aiming_channel_settings::c_aiming_channel_settings(void)
//{
//    mangled_ppc("??0c_aiming_channel_settings@@QAA@XZ");
//};

//public: void c_aiming_channel_settings::clear(void)
//{
//    mangled_ppc("?clear@c_aiming_channel_settings@@QAAXXZ");
//};

//public: c_facial_animation_channel_settings::c_facial_animation_channel_settings(void)
//{
//    mangled_ppc("??0c_facial_animation_channel_settings@@QAA@XZ");
//};

//public: void c_facial_animation_channel_settings::clear(void)
//{
//    mangled_ppc("?clear@c_facial_animation_channel_settings@@QAAXXZ");
//};

//public: c_pose_blend_channel_settings::c_pose_blend_channel_settings(void)
//{
//    mangled_ppc("??0c_pose_blend_channel_settings@@QAA@XZ");
//};

//public: void c_pose_blend_channel_settings::clear(void)
//{
//    mangled_ppc("?clear@c_pose_blend_channel_settings@@QAAXXZ");
//};

//public: class c_mixing_board_slider & c_mixing_board_slider::operator=(class c_mixing_board_slider const &)
//{
//    mangled_ppc("??4c_mixing_board_slider@@QAAAAV0@ABV0@@Z");
//};

//public: c_auxilary_channel_settings::~c_auxilary_channel_settings(void)
//{
//    mangled_ppc("??1c_auxilary_channel_settings@@QAA@XZ");
//};

//public: c_aiming_channel_settings::~c_aiming_channel_settings(void)
//{
//    mangled_ppc("??1c_aiming_channel_settings@@QAA@XZ");
//};

//public: c_facial_animation_channel_settings::~c_facial_animation_channel_settings(void)
//{
//    mangled_ppc("??1c_facial_animation_channel_settings@@QAA@XZ");
//};

//public: c_pose_blend_channel_settings::~c_pose_blend_channel_settings(void)
//{
//    mangled_ppc("??1c_pose_blend_channel_settings@@QAA@XZ");
//};

//public: void c_animation_manager::get_mixing_board_node_orientations(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>, struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long)
//{
//    mangled_ppc("?get_mixing_board_node_orientations@c_animation_manager@@QAAXV?$c_enum@W4e_mixing_board_indices@@E$0A@$01Us_default_enum_string_resolver@@@@PBUrender_model_definition@@MPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@Vc_animation_id@@PBKM@ZJ@Z");
//};

//void accumulate_object_space_offset_node_flags(class c_pose_blend_channel const *, class c_big_flags_typed_no_init<long, 256> const *, class c_big_flags_typed_no_init<long, 256> *)
//{
//    mangled_ppc("?accumulate_object_space_offset_node_flags@@YAXPBVc_pose_blend_channel@@PBV?$c_big_flags_typed_no_init@J$0BAA@@@PAV2@@Z");
//};

//void store_object_space_offset_nodes_from_flags(long, class c_model_animation_graph const *, long, struct real_orientation const *, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, long *)
//{
//    mangled_ppc("?store_object_space_offset_nodes_from_flags@@YAXJPBVc_model_animation_graph@@JPBUreal_orientation@@PBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAU2@PAJ@Z");
//};

//void compute_object_space_orientations_from_local_space_orientations(class c_model_animation_graph const *, long, struct real_orientation const *, long, struct real_orientation *)
//{
//    mangled_ppc("?compute_object_space_orientations_from_local_space_orientations@@YAXPBVc_model_animation_graph@@JPBUreal_orientation@@JPAU2@@Z");
//};

//public: void c_animation_manager::get_mixing_board_ik_chain_targets(class c_enum<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>, float, struct real_orientation const *, long, struct real_matrix4x3const *, long, struct s_ik_chain_target *, long, struct s_ik_chain_target *, long, struct s_ik_chain_target *)
//{
//    mangled_ppc("?get_mixing_board_ik_chain_targets@c_animation_manager@@QAAXV?$c_enum@W4e_mixing_board_indices@@E$0A@$01Us_default_enum_string_resolver@@@@MPBUreal_orientation@@JPBUreal_matrix4x3@@JPAUs_ik_chain_target@@J3J3@Z");
//};

//void setup_ik_chain_targets_for_pose_blend_channel(class c_model_animation_graph const *, class c_pose_blend_channel const *, long, struct s_ik_chain_target *)
//{
//    mangled_ppc("?setup_ik_chain_targets_for_pose_blend_channel@@YAXPBVc_model_animation_graph@@PBVc_pose_blend_channel@@JPAUs_ik_chain_target@@@Z");
//};

//public: void c_animation_manager::get_mixing_board_render_time_node_orientations(struct render_model_definition const *, float, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *, void (*)(long, class c_model_animation_graph const *, class c_animation_id, unsigned long const *, float), long)
//{
//    mangled_ppc("?get_mixing_board_render_time_node_orientations@c_animation_manager@@QAAXPBUrender_model_definition@@MPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@P6AXJPBVc_model_animation_graph@@Vc_animation_id@@PBKM@ZJ@Z");
//};

//public: bool c_animation_manager::setup_animation_channel(class c_animation_channel *, class c_animation_channel_settings const *) const
//{
//    mangled_ppc("?setup_animation_channel@c_animation_manager@@QBA_NPAVc_animation_channel@@PBVc_animation_channel_settings@@@Z");
//};

//public: bool c_animation_manager::render_time_node_orientations_requested(class c_big_flags_typed_no_init<long, 256> *) const
//{
//    mangled_ppc("?render_time_node_orientations_requested@c_animation_manager@@QBA_NPAV?$c_big_flags_typed_no_init@J$0BAA@@@@Z");
//};

//public: bool c_animation_manager::setup_auxilary_channel(class c_auxilary_channel *, long, long, long, unsigned long) const
//{
//    mangled_ppc("?setup_auxilary_channel@c_animation_manager@@QBA_NPAVc_auxilary_channel@@JJJK@Z");
//};

//public: bool c_animation_manager::setup_pose_blend_channel(class c_pose_blend_channel *, class c_pose_blend_channel_settings const *) const
//{
//    mangled_ppc("?setup_pose_blend_channel@c_animation_manager@@QBA_NPAVc_pose_blend_channel@@PBVc_pose_blend_channel_settings@@@Z");
//};

//public: bool c_animation_manager::setup_aiming_channel(class c_aiming_channel *, long, long, long, unsigned long) const
//{
//    mangled_ppc("?setup_aiming_channel@c_animation_manager@@QBA_NPAVc_aiming_channel@@JJJK@Z");
//};

//public: void c_animation_manager::link_component_to_slider(enum e_mixing_board_component_type, long, long, enum e_mixing_board_parent_slider_type) const
//{
//    mangled_ppc("?link_component_to_slider@c_animation_manager@@QBAXW4e_mixing_board_component_type@@JJW4e_mixing_board_parent_slider_type@@@Z");
//};

//public: bool c_animation_manager::setup_additional_state_animation_blend(long, long, float)
//{
//    mangled_ppc("?setup_additional_state_animation_blend@c_animation_manager@@QAA_NJJM@Z");
//};

//public: bool c_animation_manager::get_current_foot_tracking_state(long, class c_enum<enum e_foot_tracking_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> *, float *, short *) const
//{
//    mangled_ppc("?get_current_foot_tracking_state@c_animation_manager@@QBA_NJPAV?$c_enum@W4e_foot_tracking_state@@E$0A@$03Us_default_enum_string_resolver@@@@PAMPAF@Z");
//};

//public: struct s_tag_block const & c_model_animation::get_foot_tracking_data(void) const
//{
//    mangled_ppc("?get_foot_tracking_data@c_model_animation@@QBAABUs_tag_block@@XZ");
//};

//bool test_value_in_range_with_wrapping(float, float, float, float, float *)
//{
//    mangled_ppc("?test_value_in_range_with_wrapping@@YA_NMMMMPAM@Z");
//};

//public: enum e_foot_tracking_state c_animation_manager::get_default_foot_tracking_state(long) const
//{
//    mangled_ppc("?get_default_foot_tracking_state@c_animation_manager@@QBA?AW4e_foot_tracking_state@@J@Z");
//};

//public: float c_animation_manager::get_transition_playback_time_remaining(void) const
//{
//    mangled_ppc("?get_transition_playback_time_remaining@c_animation_manager@@QBAMXZ");
//};

//public: float c_animation_manager::get_transition_playback_ratio_remaining(void) const
//{
//    mangled_ppc("?get_transition_playback_ratio_remaining@c_animation_manager@@QBAMXZ");
//};

//public: void c_animation_manager::get_current_settings(struct s_animation_state_change_settings *) const
//{
//    mangled_ppc("?get_current_settings@c_animation_manager@@QBAXPAUs_animation_state_change_settings@@@Z");
//};

//public: bool c_animation_manager::recommend_state_change(long, long, long, long, enum e_physics_animation_state, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>, struct s_animation_state_change_settings *) const
//{
//    mangled_ppc("?recommend_state_change@c_animation_manager@@QBA_NJJJJW4e_physics_animation_state@@V?$c_flags@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@PAUs_animation_state_change_settings@@@Z");
//};

//public: struct s_animation_goal_settings const * c_animation_manager::get_previous_goal(void) const
//{
//    mangled_ppc("?get_previous_goal@c_animation_manager@@QBAPBUs_animation_goal_settings@@XZ");
//};

//bool active_animation_matches_next(class c_model_animation const *, class c_model_animation const *, short, bool, short *, short *, short *)
//{
//    mangled_ppc("?active_animation_matches_next@@YA_NPBVc_model_animation@@0F_NPAF22@Z");
//};

//long int_max(short, int)
//{
//    mangled_ppc("?int_max@@YAJFH@Z");
//};

//bool frame_compare_function(short, short, void const *)
//{
//    mangled_ppc("?frame_compare_function@@YA_NFFPBX@Z");
//};

//public: long c_animation_manager::active_channel_get_all_match_frames(struct s_animation_state_change_settings const *, short *, short *, long)
//{
//    mangled_ppc("?active_channel_get_all_match_frames@c_animation_manager@@QAAJPBUs_animation_state_change_settings@@PAF1J@Z");
//};

//public: bool c_animation_manager::active_channel_has_match_frames(struct s_animation_state_change_settings const *)
//{
//    mangled_ppc("?active_channel_has_match_frames@c_animation_manager@@QAA_NPBUs_animation_state_change_settings@@@Z");
//};

//public: bool c_animation_manager::execute_state_change(struct s_animation_state_change_settings const *)
//{
//    mangled_ppc("?execute_state_change@c_animation_manager@@QAA_NPBUs_animation_state_change_settings@@@Z");
//};

//public: class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver> & c_channel_base::access_playback_flags(void)
//{
//    mangled_ppc("?access_playback_flags@c_channel_base@@QAAAAV?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@XZ");
//};

//public: bool c_animation_manager::recommend_auxilary_change(struct s_state_changes_requested const *) const
//{
//    mangled_ppc("?recommend_auxilary_change@c_animation_manager@@QBA_NPBUs_state_changes_requested@@@Z");
//};

//public: bool c_animation_manager::set_goal(long, long, long, long, enum e_physics_animation_state, class c_flags<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>, class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_goal@c_animation_manager@@QAA_NJJJJW4e_physics_animation_state@@V?$c_flags@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@V?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@@Z");
//};

//private: void c_animation_manager::apply_random_permutations_to_settings(class c_animation_channel_settings *) const
//{
//    mangled_ppc("?apply_random_permutations_to_settings@c_animation_manager@@ABAXPAVc_animation_channel_settings@@@Z");
//};

//public: void c_animation_manager::set_target_emotion(long, float, float)
//{
//    mangled_ppc("?set_target_emotion@c_animation_manager@@QAAXJMM@Z");
//};

//public: void c_animation_manager::set_target_emotion_by_name(long, float, float)
//{
//    mangled_ppc("?set_target_emotion_by_name@c_animation_manager@@QAAXJMM@Z");
//};

//public: void c_animation_manager::reset_facial_animation_channels(void)
//{
//    mangled_ppc("?reset_facial_animation_channels@c_animation_manager@@QAAXXZ");
//};

//public: void c_animation_manager::handle_lipsync_data_stream(long, long, long, float)
//{
//    mangled_ppc("?handle_lipsync_data_stream@c_animation_manager@@QAAXJJJM@Z");
//};

//public: void c_animation_manager::handle_lipsync_data_ending(long)
//{
//    mangled_ppc("?handle_lipsync_data_ending@c_animation_manager@@QAAXJ@Z");
//};

//public: bool c_animation_preferred_list::active_for_object(long) const
//{
//    mangled_ppc("?active_for_object@c_animation_preferred_list@@QBA_NJ@Z");
//};

//public: class c_animation_id c_animation_preferred_list::find_preferred_variant(long, class c_model_animation_graph const *, class c_animation_id)
//{
//    mangled_ppc("?find_preferred_variant@c_animation_preferred_list@@QAA?AVc_animation_id@@JPBVc_model_animation_graph@@V2@@Z");
//};

//public: bool c_animation_preferred_list::add(long, long)
//{
//    mangled_ppc("?add@c_animation_preferred_list@@QAA_NJJ@Z");
//};

//public: void c_animation_preferred_list::remove(long)
//{
//    mangled_ppc("?remove@c_animation_preferred_list@@QAAXJ@Z");
//};

//public: void c_animation_preferred_list::clear(void)
//{
//    mangled_ppc("?clear@c_animation_preferred_list@@QAAXXZ");
//};

//bool animation_manager_add_preferred_animation(long, long)
//{
//    mangled_ppc("?animation_manager_add_preferred_animation@@YA_NJJ@Z");
//};

//void animation_manager_clear_preferred_animations(void)
//{
//    mangled_ppc("?animation_manager_clear_preferred_animations@@YAXXZ");
//};

//public: void c_animation_manager::reset_interpolators(void)
//{
//    mangled_ppc("?reset_interpolators@c_animation_manager@@QAAXXZ");
//};

//public: void c_animation_manager::locate_auxilary_animations(void *, long)
//{
//    mangled_ppc("?locate_auxilary_animations@c_animation_manager@@QAAXPAXJ@Z");
//};

//public: void c_animation_manager::stance_iterator_new(struct s_animation_stance_iterator *) const
//{
//    mangled_ppc("?stance_iterator_new@c_animation_manager@@QBAXPAUs_animation_stance_iterator@@@Z");
//};

//public: bool c_animation_manager::stance_iterator_next(struct s_animation_stance_iterator *) const
//{
//    mangled_ppc("?stance_iterator_next@c_animation_manager@@QBA_NPAUs_animation_stance_iterator@@@Z");
//};

//public: long c_animation_manager::get_top_stance(void) const
//{
//    mangled_ppc("?get_top_stance@c_animation_manager@@QBAJXZ");
//};

//public: void c_animation_manager::clear_stance_layer(class c_enum<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?clear_stance_layer@c_animation_manager@@QAAXV?$c_enum@W4e_animation_stance_layers@@J$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_animation_manager::clear_temporary_stance_layers(void)
//{
//    mangled_ppc("?clear_temporary_stance_layers@c_animation_manager@@QAAXXZ");
//};

//public: bool c_animation_manager::push_stance(long, class c_enum<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?push_stance@c_animation_manager@@QAA_NJV?$c_enum@W4e_animation_stance_layers@@J$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_animation_manager::set_animation_set_name(long)
//{
//    mangled_ppc("?set_animation_set_name@c_animation_manager@@QAAXJ@Z");
//};

//public: long c_animation_manager::get_animation_set_name(void) const
//{
//    mangled_ppc("?get_animation_set_name@c_animation_manager@@QBAJXZ");
//};

//public: long c_animation_manager::setup_ranged_action(union real_point3d const *, union vector3d const *, union vector3d const *, long, union vector2d const *, class c_enum<enum e_triangulation_blend_weight_type, char, 0, 2, struct s_default_enum_string_resolver>, struct s_blended_animations *, float *, float *, long *) const
//{
//    mangled_ppc("?setup_ranged_action@c_animation_manager@@QBAJPBTreal_point3d@@PBTvector3d@@1JPBTvector2d@@V?$c_enum@W4e_triangulation_blend_weight_type@@D$0A@$01Us_default_enum_string_resolver@@@@PAUs_blended_animations@@PAM5PAJ@Z");
//};

//public: bool c_animation_manager::setup_state_settings_from_blend_animations(struct s_blended_animations *, long, struct s_animation_state_change_settings *)
//{
//    mangled_ppc("?setup_state_settings_from_blend_animations@c_animation_manager@@QAA_NPAUs_blended_animations@@JPAUs_animation_state_change_settings@@@Z");
//};

//public: struct s_animation_ranged_action const * c_animation_manager::find_ranged_action(long, long, long) const
//{
//    mangled_ppc("?find_ranged_action@c_animation_manager@@QBAPBUs_animation_ranged_action@@JJJ@Z");
//};

//public: struct s_animation_sync_action const * c_animation_manager::find_sync_action(long, long, long) const
//{
//    mangled_ppc("?find_sync_action@c_animation_manager@@QBAPBUs_animation_sync_action@@JJJ@Z");
//};

//public: bool c_animation_manager::uses_data_driven_mixing_board(void) const
//{
//    mangled_ppc("?uses_data_driven_mixing_board@c_animation_manager@@QBA_NXZ");
//};

//private: long c_animation_manager::internal_find_mode_or_stance_alias(long) const
//{
//    mangled_ppc("?internal_find_mode_or_stance_alias@c_animation_manager@@ABAJJ@Z");
//};

//void animation_update_analog_blending(long, float)
//{
//    mangled_ppc("?animation_update_analog_blending@@YAXJM@Z");
//};

//public: float c_animation_manager::get_translation_magnitude_from_settings(float, float, class c_animation_channel_settings *)
//{
//    mangled_ppc("?get_translation_magnitude_from_settings@c_animation_manager@@QAAMMMPAVc_animation_channel_settings@@@Z");
//};

//public: t_short_fixed<13>::t_short_fixed<13>(long)
//{
//    mangled_ppc("??0?$t_short_fixed@$0N@@@QAA@J@Z");
//};

//public: class t_short_fixed<13> & t_short_fixed<13>::operator=(class t_short_fixed<13> const &)
//{
//    mangled_ppc("??4?$t_short_fixed@$0N@@@QAAAAV0@ABV0@@Z");
//};

//public: class t_short_fixed<13> & t_short_fixed<13>::operator*=(class t_short_fixed<13> const &)
//{
//    mangled_ppc("??X?$t_short_fixed@$0N@@@QAAAAV0@ABV0@@Z");
//};

//public: class t_short_fixed<8> & t_short_fixed<8>::operator=(class t_short_fixed<8> const &)
//{
//    mangled_ppc("??4?$t_short_fixed@$07@@QAAAAV0@ABV0@@Z");
//};

//public: enum e_mixing_board_parent_slider_type c_enum_no_init<enum e_mixing_board_parent_slider_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_mixing_board_parent_slider_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_mixing_board_parent_slider_type@@E$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_mixing_board_parent_slider_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_animation_graph_location, char, 0, 9, struct s_default_enum_string_resolver>::operator==(enum e_animation_graph_location) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_animation_graph_location@@D$0A@$08Us_default_enum_string_resolver@@@@QBA_NW4e_animation_graph_location@@@Z");
//};

//public: c_enum<enum e_interpolation_type, unsigned short, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_interpolation_type, unsigned short, 0, 5, struct s_default_enum_string_resolver>(enum e_interpolation_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_interpolation_type@@G$0A@$04Us_default_enum_string_resolver@@@@QAA@W4e_interpolation_type@@@Z");
//};

//public: enum e_animation_stance_layers c_enum_no_init<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver>::operator enum e_animation_stance_layers(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_animation_stance_layers@@J$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_animation_stance_layers@@XZ");
//};

//public: static enum e_animation_stance_layers c_enum_no_init<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver>::begin(void)
//{
//    mangled_ppc("?begin@?$c_enum_no_init@W4e_animation_stance_layers@@J$0A@$05Us_default_enum_string_resolver@@@@SA?AW4e_animation_stance_layers@@XZ");
//};

//public: static enum e_animation_stance_layers c_enum_no_init<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver>::end(void)
//{
//    mangled_ppc("?end@?$c_enum_no_init@W4e_animation_stance_layers@@J$0A@$05Us_default_enum_string_resolver@@@@SA?AW4e_animation_stance_layers@@XZ");
//};

//public: class c_enum_no_init<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver>::operator++(void)
//{
//    mangled_ppc("??E?$c_enum_no_init@W4e_animation_stance_layers@@J$0A@$05Us_default_enum_string_resolver@@@@QAAAAV0@XZ");
//};

//public: class c_enum_no_init<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver> c_enum_no_init<enum e_animation_stance_layers, long, 0, 6, struct s_default_enum_string_resolver>::operator++(int)
//{
//    mangled_ppc("??E?$c_enum_no_init@W4e_animation_stance_layers@@J$0A@$05Us_default_enum_string_resolver@@@@QAA?AV0@H@Z");
//};

//public: bool c_static_stack<struct s_animation_stance_entry, 4>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_animation_stance_entry@@$03@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_animation_stance_entry, 4>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_animation_stance_entry@@$03@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_animation_stance_entry, 4>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@Us_animation_stance_entry@@$03@@QBAJXZ");
//};

//public: long c_static_stack<struct s_animation_stance_entry, 4>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_animation_stance_entry@@$03@@QBAJXZ");
//};

//public: void c_static_stack<struct s_animation_stance_entry, 4>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_animation_stance_entry@@$03@@QAAXXZ");
//};

//public: long c_static_stack<struct s_animation_stance_entry, 4>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_animation_stance_entry@@$03@@QAAJXZ");
//};

//public: struct s_animation_stance_entry const & c_static_stack<struct s_animation_stance_entry, 4>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@Us_animation_stance_entry@@$03@@QBAABUs_animation_stance_entry@@J@Z");
//};

//public: struct s_animation_stance_entry & c_static_stack<struct s_animation_stance_entry, 4>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_animation_stance_entry@@$03@@QAAAAUs_animation_stance_entry@@J@Z");
//};

//public: struct s_animation_stance_entry const * c_static_stack<struct s_animation_stance_entry, 4>::get_top(void) const
//{
//    mangled_ppc("?get_top@?$c_static_stack@Us_animation_stance_entry@@$03@@QBAPBUs_animation_stance_entry@@XZ");
//};

//public: struct s_animation_stance_entry * c_static_stack<struct s_animation_stance_entry, 4>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_stack@Us_animation_stance_entry@@$03@@QAAPAUs_animation_stance_entry@@XZ");
//};

//public: struct s_animation_stance_entry * c_static_stack<struct s_animation_stance_entry, 4>::end(void)
//{
//    mangled_ppc("?end@?$c_static_stack@Us_animation_stance_entry@@$03@@QAAPAUs_animation_stance_entry@@XZ");
//};

//public: c_static_stack<struct s_animation_stance_entry, 4>::c_static_stack<struct s_animation_stance_entry, 4>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_animation_stance_entry@@$03@@QAA@XZ");
//};

//public: enum e_animation_frame_event_types c_enum_no_init<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>::operator enum e_animation_frame_event_types(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_animation_frame_event_types@@F$0A@$0BH@Us_default_enum_string_resolver@@@@QBA?AW4e_animation_frame_event_types@@XZ");
//};

//public: class c_enum_no_init<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver> c_enum_no_init<enum e_animation_frame_event_types, short, 0, 23, struct s_default_enum_string_resolver>::operator++(int)
//{
//    mangled_ppc("??E?$c_enum_no_init@W4e_animation_frame_event_types@@F$0A@$0BH@Us_default_enum_string_resolver@@@@QAA?AV0@H@Z");
//};

//public: enum e_animation_gait_directions c_enum_no_init<enum e_animation_gait_directions, short, 0, 6, struct s_default_enum_string_resolver>::operator enum e_animation_gait_directions(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_animation_gait_directions@@F$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_animation_gait_directions@@XZ");
//};

//public: bool c_enum_no_init<enum e_animation_gait_directions, short, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_animation_gait_directions) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_animation_gait_directions@@F$0A@$05Us_default_enum_string_resolver@@@@QBA_NW4e_animation_gait_directions@@@Z");
//};

//public: c_enum<enum e_animation_types, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_animation_types, char, 0, 4, struct s_default_enum_string_resolver>(enum e_animation_types)
//{
//    mangled_ppc("??0?$c_enum@W4e_animation_types@@D$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_animation_types@@@Z");
//};

//public: enum e_animation_frame_info_types c_enum_no_init<enum e_animation_frame_info_types, char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_animation_frame_info_types(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_animation_frame_info_types@@D$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_animation_frame_info_types@@XZ");
//};

//public: c_enum<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>::c_enum<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_animation_ik_chain_event_usage@@F$0A@$06Us_animation_ik_chain_event_usage_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>::c_enum<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>(enum e_animation_ik_chain_event_usage)
//{
//    mangled_ppc("??0?$c_enum@W4e_animation_ik_chain_event_usage@@F$0A@$06Us_animation_ik_chain_event_usage_string_resolver@@@@QAA@W4e_animation_ik_chain_event_usage@@@Z");
//};

//public: enum e_animation_ik_chain_event_usage c_enum_no_init<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>::operator enum e_animation_ik_chain_event_usage(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_animation_ik_chain_event_usage@@F$0A@$06Us_animation_ik_chain_event_usage_string_resolver@@@@QBA?AW4e_animation_ik_chain_event_usage@@XZ");
//};

//public: bool c_enum_no_init<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>::operator==(enum e_animation_ik_chain_event_usage) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_animation_ik_chain_event_usage@@F$0A@$06Us_animation_ik_chain_event_usage_string_resolver@@@@QBA_NW4e_animation_ik_chain_event_usage@@@Z");
//};

//public: class c_static_string<64> c_enum_no_init<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_enum_no_init@W4e_animation_ik_chain_event_usage@@F$0A@$06Us_animation_ik_chain_event_usage_string_resolver@@@@QBA?AV?$c_static_string@$0EA@@@XZ");
//};

//public: static void s_animation_ik_chain_event_usage_string_resolver::to_string(long, class c_static_string<64> *)
//{
//    mangled_ppc("?to_string@s_animation_ik_chain_event_usage_string_resolver@@SAXJPAV?$c_static_string@$0EA@@@@Z");
//};

//public: bool c_enum_no_init<enum e_mixing_board_indices, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_mixing_board_indices@@E$0A@$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: c_enum<enum e_animation_blend_types, char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_animation_blend_types, char, 0, 2, struct s_default_enum_string_resolver>(enum e_animation_blend_types)
//{
//    mangled_ppc("??0?$c_enum@W4e_animation_blend_types@@D$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_animation_blend_types@@@Z");
//};

//public: enum e_animation_blend_types c_enum_no_init<enum e_animation_blend_types, char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_animation_blend_types(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_animation_blend_types@@D$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_animation_blend_types@@XZ");
//};

//public: bool c_enum_no_init<enum e_locking_foot_types, char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_locking_foot_types) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_locking_foot_types@@D$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_locking_foot_types@@@Z");
//};

//public: c_enum<enum e_animation_debug_trace_source_types, long, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_animation_debug_trace_source_types, long, 0, 2, struct s_default_enum_string_resolver>(enum e_animation_debug_trace_source_types)
//{
//    mangled_ppc("??0?$c_enum@W4e_animation_debug_trace_source_types@@J$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_animation_debug_trace_source_types@@@Z");
//};

//public: bool c_static_stack<struct s_animation_stance_entry, 4>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_animation_stance_entry@@$03@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_animation_stance_entry, 4>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_animation_stance_entry@@$03@@QBA_NJ@Z");
//};

//public: struct s_animation_stance_entry const * c_static_stack<struct s_animation_stance_entry, 4>::get(long) const
//{
//    mangled_ppc("?get@?$c_static_stack@Us_animation_stance_entry@@$03@@QBAPBUs_animation_stance_entry@@J@Z");
//};

//public: bool c_enum_no_init<enum e_animation_ik_chain_event_usage, short, 0, 7, struct s_animation_ik_chain_event_usage_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_animation_ik_chain_event_usage@@F$0A@$06Us_animation_ik_chain_event_usage_string_resolver@@@@QBA_NXZ");
//};

//public: long c_big_flags_typed_no_init<long, 256>::get_highest_bit_set(void) const
//{
//    mangled_ppc("?get_highest_bit_set@?$c_big_flags_typed_no_init@J$0BAA@@@QBAJXZ");
//};

//public: bool c_flags_no_init<enum e_channel_settings_comparison_flags, unsigned long, 10, struct s_default_enum_string_resolver>::test(enum e_channel_settings_comparison_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_channel_settings_comparison_flags@@K$09Us_default_enum_string_resolver@@@@QBA_NW4e_channel_settings_comparison_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_animation_state_change_flags, unsigned short, 16, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@W4e_animation_state_change_flags@@G$0BA@Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: void c_flags_no_init<enum e_animation_manager_flags, unsigned long, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_animation_manager_flags@@K$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_animation_manager_flags, unsigned long, 5, struct s_default_enum_string_resolver>::set(enum e_animation_manager_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_animation_manager_flags@@K$04Us_default_enum_string_resolver@@@@QAAXW4e_animation_manager_flags@@_N@Z");
//};

//public: c_flags<enum e_animation_manager_flags, unsigned long, 5, struct s_default_enum_string_resolver>::c_flags<enum e_animation_manager_flags, unsigned long, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_animation_manager_flags@@K$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_ik_chain_target_flags, unsigned short, 2, struct s_default_enum_string_resolver>::set(enum e_ik_chain_target_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_ik_chain_target_flags@@G$01Us_default_enum_string_resolver@@@@QAAXW4e_ik_chain_target_flags@@_N@Z");
//};

//bool sample_extended_block_data<struct real_orientation>(class c_model_animation_graph const *, class c_animation_id, long, long, float, float, unsigned char, enum e_internal_data_type, class c_animation_data const *, struct real_orientation *)
//{
//    mangled_ppc("??$sample_extended_block_data@Ureal_orientation@@@@YA_NPBVc_model_animation_graph@@Vc_animation_id@@JJMMEW4e_internal_data_type@@PBVc_animation_data@@PAUreal_orientation@@@Z");
//};

//void direct_decompress_extended_block_data(unsigned char const *, long const *, unsigned char, long, long, float, float, struct real_orientation *)
//{
//    mangled_ppc("?direct_decompress_extended_block_data@@YAXPBEPBJEJJMMPAUreal_orientation@@@Z");
//};

//bool sample_extended_block_data<float>(class c_model_animation_graph const *, class c_animation_id, long, long, float, float, unsigned char, enum e_internal_data_type, class c_animation_data const *, float *)
//{
//    mangled_ppc("??$sample_extended_block_data@M@@YA_NPBVc_model_animation_graph@@Vc_animation_id@@JJMMEW4e_internal_data_type@@PBVc_animation_data@@PAM@Z");
//};

//void direct_decompress_extended_block_data(unsigned char const *, long const *, unsigned char, long, long, float, float, float *)
//{
//    mangled_ppc("?direct_decompress_extended_block_data@@YAXPBEPBJEJJMMPAM@Z");
//};

//bool sample_extended_block_data<union real_point3d>(class c_model_animation_graph const *, class c_animation_id, long, long, float, float, unsigned char, enum e_internal_data_type, class c_animation_data const *, union real_point3d *)
//{
//    mangled_ppc("??$sample_extended_block_data@Treal_point3d@@@@YA_NPBVc_model_animation_graph@@Vc_animation_id@@JJMMEW4e_internal_data_type@@PBVc_animation_data@@PATreal_point3d@@@Z");
//};

//void direct_decompress_extended_block_data(unsigned char const *, long const *, unsigned char, long, long, float, float, union real_point3d *)
//{
//    mangled_ppc("?direct_decompress_extended_block_data@@YAXPBEPBJEJJMMPATreal_point3d@@@Z");
//};

//short int_pin<short, short, short>(short const &, short const &, short const &)
//{
//    mangled_ppc("??$int_pin@FFF@@YAFABF00@Z");
//};

//class t_short_fixed<13> operator-<13>(class t_short_fixed<13> const &, class t_short_fixed<13> const &)
//{
//    mangled_ppc("??$?G$0N@@@YA?AV?$t_short_fixed@$0N@@@ABV0@0@Z");
//};

//public: class t_short_fixed<13> & t_short_fixed<13>::operator-=(class t_short_fixed<13> const &)
//{
//    mangled_ppc("??Z?$t_short_fixed@$0N@@@QAAAAV0@ABV0@@Z");
//};

//public: bool c_flags_no_init<enum e_animation_manager_flags, unsigned long, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_animation_manager_flags@@K$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//short int_floor<short, short>(short const &, short const &)
//{
//    mangled_ppc("??$int_floor@FF@@YAFABF0@Z");
//};

//short int_ceiling<short, short>(short const &, short const &)
//{
//    mangled_ppc("??$int_ceiling@FF@@YAFABF0@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_animation_manager_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_animation_manager_flags@@K$04Us_default_enum_string_resolver@@@@CAKXZ");
//};

//short int_max<short>(short const &, short const &)
//{
//    mangled_ppc("??$int_max@F@@YAFABF0@Z");
//};

//short int_min<short>(short const &, short const &)
//{
//    mangled_ppc("??$int_min@F@@YAFABF0@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_animation_manager_flags, unsigned long, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_animation_manager_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_animation_manager_flags@@K$04Us_default_enum_string_resolver@@@@CAKW4e_animation_manager_flags@@@Z");
//};

//public: c_animation_preferred_list::c_animation_preferred_list(void)
//{
//    mangled_ppc("??0c_animation_preferred_list@@QAA@XZ");
//};

//public: c_animation_preferred_list::~c_animation_preferred_list(void)
//{
//    mangled_ppc("??1c_animation_preferred_list@@QAA@XZ");
//};

//void g_animation_preferred_list::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_animation_preferred_list@@YAXXZ");
//};

