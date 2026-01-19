/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_player_control_flags const c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_player_control_flags@@K$0L@Us_default_enum_string_resolver@@@@2W4e_player_control_flags@@B"
// public: static enum e_player_control_bit const c_flags_no_init<enum e_player_control_bit, unsigned long, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_player_control_bit@@K$00Us_default_enum_string_resolver@@@@2W4e_player_control_bit@@B"
// public: static long const s_static_array<struct s_player_control_non_deterministic_input_user_state, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_player_control_non_deterministic_input_user_state@@$03@@2JB"
// public: static long const s_static_array<struct s_player_input_debug, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_player_input_debug@@$03@@2JB"
// public: static enum e_aim_assist_query_flags const c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_aim_assist_query_flags@@E$01Us_default_enum_string_resolver@@@@2W4e_aim_assist_query_flags@@B"
// class s_static_array<struct s_player_input_debug, 4> g_player_input_debugging; // "?g_player_input_debugging@@3V?$s_static_array@Us_player_input_debug@@$03@@A"
// bool debug_player_control_autoaim_always_active; // "?debug_player_control_autoaim_always_active@@3_NA"
// bool debug_enable_easy_weapon_down_claw; // "?debug_enable_easy_weapon_down_claw@@3_NA"
// bool g_jumperjumper_enabled; // "?g_jumperjumper_enabled@@3_NA"
// bool enable_melee_action; // "?enable_melee_action@@3_NA"
// bool force_player_crouching; // "?force_player_crouching@@3_NA"
// bool force_player_walking; // "?force_player_walking@@3_NA"
// bool debug_player_input; // "?debug_player_input@@3_NA"
// bool debug_player_input_stick_throws; // "?debug_player_input_stick_throws@@3_NA"
// bool debug_controller_latency; // "?debug_controller_latency@@3_NA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_player_control_globals_allocator::*)(void *)> g_player_control_globals_allocator; // "?g_player_control_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_player_control_globals_deterministic_allocator::*)(void *)> g_player_control_globals_deterministic_allocator; // "?g_player_control_globals_deterministic_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_deterministic_allocator@@YAXPAX@Z@@A"
// struct s_player_control_globals *player_control_globals; // "?player_control_globals@@3PAUs_player_control_globals@@A"
// struct s_player_control_globals_deterministic *player_control_globals_deterministic; // "?player_control_globals_deterministic@@3PAUs_player_control_globals_deterministic@@A"

// void __tls_set_g_player_control_globals_allocator(void *);
// void __tls_set_g_player_control_globals_deterministic_allocator(void *);
// long player_control_input_unit_index_get(enum e_input_user_index);
// struct s_player_control_input_state * player_control_input_get(enum e_input_user_index);
// void player_control_initialize(void);
// struct s_player_control_non_deterministic_input_user_state * player_control_non_deterministic_input_user_state_get(enum e_input_user_index);
// void player_control_dispose(void);
// void player_control_initialize_for_new_map(void);
// void player_control_dispose_from_old_map(void);
// bool scripted_player_control_set_camera_control(bool);
// bool test_cinematic_button(struct s_game_input_state *, enum e_button_action);
// public: void c_abstract_button::lock(void);
// public: void c_abstract_button::unlock(void);
// public: bool c_abstract_button::locked(void) const;
// void player_latency_test_render_debug(void);
// void player_control_update(float *const, float *const);
// void player_control_update_player(long, enum e_input_user_index, enum e_controller_index, float, float);
// bool player_control_machinima_available(void);
// void clear_player_control_input(struct s_player_control_input *);
// void scale_player_control_input(struct s_player_control_input *, float);
// void player_control_get_controller_input(enum e_input_user_index, enum e_controller_index, float, float, struct s_game_input_state **, struct s_player_control_input *);
// public: bool c_abstract_button::is_down(void) const;
// public: unsigned short c_abstract_button::down_msec(void);
// bool player_control_camera_control_is_active(void);
// bool player_control_flags_test_all_players(enum e_player_control_bit);
// void player_control_update_stick_throws(struct s_stick_throw_data *const, union real_point2d const *const, float);
// enum e_stick_throw_axis stick_throw_invert_y_axis(enum e_stick_throw_axis);
// void player_control_update_double_tap_jump(struct s_player_control_input_state *, bool, float);
// long player_unit_has_object_relative_aiming(long, struct real_matrix4x3*);
// void player_control_apply_legacy_bias(float *, union real_point2d *);
// void player_control_apply_stick_shape(enum e_input_user_index, enum e_controller_index, long, union real_point2d const *, union real_point2d *);
// void player_control_apply_mapping_function(enum e_input_user_index, enum e_controller_index, long, float, union real_point2d const *, union real_point2d *);
// void player_control_compute_peg(enum e_input_user_index, enum e_controller_index, float, union real_point2d *, union real_point2d *);
// bool player_control_peg_single_axis(float, float, float, float, float, float *);
// bool player_control_compute_input_inhibition(enum e_input_user_index, enum e_controller_index, struct s_game_input_state const *, struct s_player_control_input *);
// public: s_player_control_input::s_player_control_input(void);
// void player_control_build_action(enum e_input_user_index, struct s_player_action *);
// void player_control_update_debug_begin(void);
// void player_control_update_debug_render(void);
// void player_control_update_machinima(void);
// void player_control_update_simple(float, float);
// bool player_control_get_machinima_camera_enabled(void);
// bool player_control_get_machinima_camera_use_old_controls(void);
// bool player_control_get_machinima_camera_debug(void);
// union euler_angles3d const * player_control_get_facing_angles(enum e_output_user_index);
// struct s_player_control_output_state * player_control_output_get(enum e_output_user_index);
// union euler_angles3d const * player_control_get_facing_angles_delta(enum e_output_user_index);
// void player_control_get_aiming_vector(enum e_output_user_index, union vector3d *);
// long player_control_get_aiming_unit_index(enum e_output_user_index);
// float player_control_get_field_of_view(enum e_output_user_index);
// float player_control_get_field_of_view_change_time(enum e_output_user_index);
// void player_control_get_unit_camera_info(enum e_output_user_index, struct s_unit_camera_info *);
// void player_control_input_set_unit_index(enum e_input_user_index, long);
// void player_control_output_set_unit_index(enum e_output_user_index, long);
// float player_control_get_target_autoaim_level(enum e_output_user_index);
// long player_control_get_target_player_index(enum e_output_user_index);
// struct s_aim_assist_targeting_result const * player_control_get_targeting(enum e_output_user_index);
// struct s_player_action_context const * player_control_get_action_context(enum e_output_user_index);
// void player_control_set_external_action(enum e_output_user_index, struct s_player_action const *);
// void player_control_set_deterministic_action_test_flags(long, unsigned long);
// void player_control_get_desired_angles(enum e_input_user_index, union euler_angles3d *);
// void player_control_set_facing(enum e_input_user_index, union vector3d const *);
// void player_control_set_facing(enum e_input_user_index, union vector3d const *, union vector3d const *);
// void player_control_handle_weapon_added(enum e_input_user_index, short);
// void player_control_handle_grenades_swapped(enum e_input_user_index);
// void player_control_handle_weapon_put_away(enum e_input_user_index, short);
// void player_control_suppress_rotate_weapons(enum e_input_user_index);
// struct s_gamepad_stick_settings const * player_control_get_gamepad_stick_settings(enum e_input_user_index, long);
// void player_control_modify_desired_angles(enum e_input_user_index, float, float, union vector2d const *, float, float);
// void player_control_apply_look_acceleration(struct s_player_control_input_state *, struct s_unit_camera_info const *, float, float *, float *);
// void player_control_modify_desired_angles_default(enum e_input_user_index, float, float, float, float);
// float player_control_clamp_desired_yaw_angle_delta(enum e_input_user_index, float);
// void player_control_modify_desired_angles_space_fighter(enum e_input_user_index, long, float, float, union vector2d const *, float, float);
// void player_control_unzoom_all(void);
// void player_control_unzoom(enum e_input_user_index);
// short player_control_get_zoom_level(enum e_output_user_index);
// void player_control_handle_deleted_object(long);
// void player_control_action_test_reset(void);
// void player_control_action_test_reset_dpad_up(void);
// void player_control_action_test_reset_dpad_down(void);
// void player_control_action_test_reset_dpad_left(void);
// void player_control_action_test_reset_dpad_right(void);
// bool player_control_action_test_any_players(enum e_player_control_action_test_bit);
// bool player_control_action_test_any_players_range(enum e_player_control_action_test_bit, enum e_player_control_action_test_bit);
// bool player_control_action_test_accept(void);
// void player_action_test_inhibit_button_flags_set_all_players(enum e_player_control_action_test_bit, bool);
// void player_action_test_testing_for_action_flags_set_all_players(enum e_player_control_action_test_bit, bool);
// bool player_control_action_test_cancel(void);
// bool player_control_action_test_action(void);
// bool player_control_action_test_primary_trigger(void);
// bool player_control_action_test_melee(void);
// bool player_control_action_test_grenade_trigger(void);
// bool player_control_action_test_vision_trigger(void);
// bool player_control_action_test_rotate_weapons(void);
// bool player_control_action_test_rotate_grenades(void);
// bool player_control_action_test_jump(void);
// bool player_control_action_test_equipment(void);
// bool player_control_action_test_context_primary(void);
// bool player_control_action_test_vehicle_trick_primary(void);
// bool player_control_action_test_vehicle_trick_secondary(void);
// bool player_control_action_test_move_relative_all_directions(void);
// bool player_control_action_test_look_relative_all_directions(void);
// bool player_control_action_test_look_relative_left(void);
// bool player_control_action_test_look_relative_right(void);
// bool player_control_action_test_look_relative_up(void);
// bool player_control_action_test_look_relative_down(void);
// bool player_control_action_test_start(void);
// bool player_control_action_test_back(void);
// bool player_control_action_test_lookstick_forward(void);
// bool player_control_action_test_lookstick_backward(void);
// bool player_control_action_test_cinematic_skip(void);
// bool player_control_action_test_dpad_up(void);
// bool player_control_action_test_dpad_down(void);
// bool player_control_action_test_dpad_left(void);
// bool player_control_action_test_dpad_right(void);
// void player_control_action_test_reset(long);
// bool player_control_action_test_accept(long);
// bool player_control_action_test(long, enum e_player_control_action_test_bit);
// void player_action_test_inhibit_button_flags_set(long, enum e_player_control_action_test_bit, bool);
// void player_action_test_testing_for_action_flags_set(long, enum e_player_control_action_test_bit, bool);
// bool player_control_action_test_cancel(long);
// bool player_control_action_test_action(long);
// bool player_control_action_test_melee(long);
// bool player_control_action_test_primary_trigger(long);
// bool player_control_action_test_grenade_trigger(long);
// bool player_control_action_test_vision_trigger(long);
// bool player_control_action_test_rotate_weapons(long);
// bool player_control_action_test_rotate_grenades(long);
// bool player_control_action_test_jump(long);
// bool player_control_action_test_equipment(long);
// bool player_control_action_test_context_primary(long);
// bool player_control_action_test_vehicle_trick_primary(long);
// bool player_control_action_test_vehicle_trick_secondary(long);
// bool player_control_action_test_move_relative_all_directions(long);
// bool player_control_action_test_range(long, enum e_player_control_action_test_bit, enum e_player_control_action_test_bit);
// bool player_control_action_test_look_relative_all_directions(long);
// bool player_control_action_test_look_relative_left(long);
// bool player_control_action_test_look_relative_right(long);
// bool player_control_action_test_look_relative_up(long);
// bool player_control_action_test_look_relative_down(long);
// bool player_control_action_test_start(long);
// bool player_control_action_test_back(long);
// bool player_control_action_test_lookstick_forward(long);
// bool player_control_action_test_lookstick_backward(long);
// bool player_control_action_test_cinematic_skip(long);
// bool player_control_action_test_dpad_up(long);
// bool player_control_action_test_dpad_down(long);
// bool player_control_action_test_dpad_left(long);
// bool player_control_action_test_dpad_right(long);
// void player_control_action_test_input(enum e_input_user_index, struct s_game_input_state *, struct s_player_control_input *);
// void player_invert_look(long);
// bool player0_looking_up(void);
// bool player0_looking_down(void);
// float player0_get_looking_pitch(void);
// void player_set_pitch(long, float, long);
// void player_set_pitch_internal(enum e_input_user_index, float, long);
// bool user_currently_piloting_aircraft(enum e_input_user_index);
// bool process_user_interface_input(enum e_controller_index, struct s_player_control_input *);
// void player_control_scale_all_input_for_player(long, float, float);
// void player_control_scale_all_input(float, float);
// void player_control_fade_out_all_input(float);
// void player_control_fade_in_all_input(float);
// void player_control_fade_out_all_input_for_player(long, float);
// void player_control_fade_in_all_input_for_player(long, float);
// void player_control_lock_gaze(enum e_input_user_index, long, float);
// void player_control_unlock_gaze(enum e_input_user_index);
// void player_control_lock_accept_button_until_pressed(long);
// void player_control_lock_cancel_button_until_pressed(long);
// void player_control_state_clear(struct s_player_control_state *);
// void player_control_state_build_action(struct s_player_control_state const *, struct s_player_action *);
// void player_control_copy_state_from_action(struct s_player_action const *, struct s_player_control_state *);
// void player_control_copy_state_from_unit(long, struct s_player_control_state *);
// void player_control_propagate_output(enum e_input_user_index);
// public: c_flags<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>::c_flags<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>(class c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: struct s_player_input_debug * s_static_array<struct s_player_input_debug, 4>::get_elements(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>::valid(void) const;
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>::valid(void) const;
// public: void c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::test(enum e_player_control_action_test_bit) const;
// public: void c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::set(enum e_player_control_action_test_bit, bool);
// public: bool c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::test_range(enum e_player_control_action_test_bit, enum e_player_control_action_test_bit) const;
// public: unsigned long c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// public: bool c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>::test(enum e_player_action_flags) const;
// public: void c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>::set(enum e_player_action_flags, bool);
// public: class c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver> c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver> const &) const;
// public: bool c_flags_no_init<enum s_unit_boost_definition::e_flag, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum s_unit_boost_definition::e_flag) const;
// public: bool c_flags_no_init<enum s_vehicle_space_fighter_definition::e_turn_back_flag, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum s_vehicle_space_fighter_definition::e_turn_back_flag) const;
// public: void c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::test(enum e_player_control_flags) const;
// public: void c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::set(enum e_player_control_flags, bool);
// public: c_flags<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::c_flags<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_player_control_bit, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum e_player_control_bit) const;
// public: void c_flags_no_init<enum e_player_control_bit, unsigned long, 1, struct s_default_enum_string_resolver>::set(enum e_player_control_bit, bool);
// public: struct s_player_control_non_deterministic_input_user_state & s_static_array<struct s_player_control_non_deterministic_input_user_state, 4>::operator[]<enum e_input_user_index>(enum e_input_user_index);
// void xchg<enum e_stick_throw_axis>(enum e_stick_throw_axis &, enum e_stick_throw_axis &);
// public: struct s_player_input_debug & s_static_array<struct s_player_input_debug, 4>::operator[]<enum e_input_user_index>(enum e_input_user_index);
// public: void c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_aim_assist_query_flags, bool);
// public: c_flags<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: struct s_player_input_debug & s_static_array<struct s_player_input_debug, 4>::operator[]<long>(long);
// public: class c_flags<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver> & s_static_array<class c_flags<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>, 16>::operator[]<long>(long);
// public: struct s_player_control_non_deterministic_input_user_state & s_static_array<struct s_player_control_non_deterministic_input_user_state, 4>::operator[]<long>(long);
// public: bool c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: class c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver> c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver> const &) const;
// public: static class c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver> c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_player_control_action_test_bit, enum e_player_control_action_test_bit);
// public: static bool c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::valid_bit(enum e_player_control_action_test_bit);
// public: bool c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned long c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_control_action_test_bit);
// public: static bool c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>::valid_bit(enum e_player_action_flags);
// private: static unsigned long c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_action_flags);
// public: static bool c_flags_no_init<enum s_unit_boost_definition::e_flag, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_unit_boost_definition::e_flag);
// private: static unsigned long c_flags_no_init<enum s_unit_boost_definition::e_flag, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_unit_boost_definition::e_flag);
// public: static bool c_flags_no_init<enum s_vehicle_space_fighter_definition::e_turn_back_flag, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_vehicle_space_fighter_definition::e_turn_back_flag);
// private: static unsigned long c_flags_no_init<enum s_vehicle_space_fighter_definition::e_turn_back_flag, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_vehicle_space_fighter_definition::e_turn_back_flag);
// public: bool c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::valid_bit(enum e_player_control_flags);
// private: static unsigned long c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_control_flags);
// public: static bool c_flags_no_init<enum e_player_control_bit, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_player_control_bit);
// private: static unsigned long c_flags_no_init<enum e_player_control_bit, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_control_bit);
// public: static bool s_static_array<struct s_player_control_non_deterministic_input_user_state, 4>::valid<enum e_input_user_index>(enum e_input_user_index);
// public: static bool s_static_array<struct s_player_input_debug, 4>::valid<enum e_input_user_index>(enum e_input_user_index);
// public: void c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_aim_assist_query_flags);
// private: static unsigned char c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_aim_assist_query_flags);
// public: static bool s_static_array<struct s_player_input_debug, 4>::valid<long>(long);
// public: static bool s_static_array<class c_flags<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>, 16>::valid<long>(long);
// public: static bool s_static_array<struct s_player_control_non_deterministic_input_user_state, 4>::valid<long>(long);
// private: static unsigned long c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_player_control_action_test_bit);
// private: static unsigned long c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_player_control_flags);
// private: static unsigned char c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_aim_assist_query_flags);
// double magnitude2d(union real64_vector2d const *);
// double magnitude_squared2d(union real64_vector2d const *);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>(void);
// void g_player_control_globals_allocator::`dynamic atexit destructor'(void);
// void g_player_control_globals_deterministic_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_player_control_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_player_control_globals_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_player_control_globals_deterministic_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_player_control_globals_deterministic_allocator@@YAXPAX@Z");
//};

//long player_control_input_unit_index_get(enum e_input_user_index)
//{
//    mangled_ppc("?player_control_input_unit_index_get@@YAJW4e_input_user_index@@@Z");
//};

//struct s_player_control_input_state * player_control_input_get(enum e_input_user_index)
//{
//    mangled_ppc("?player_control_input_get@@YAPAUs_player_control_input_state@@W4e_input_user_index@@@Z");
//};

//void player_control_initialize(void)
//{
//    mangled_ppc("?player_control_initialize@@YAXXZ");
//};

//struct s_player_control_non_deterministic_input_user_state * player_control_non_deterministic_input_user_state_get(enum e_input_user_index)
//{
//    mangled_ppc("?player_control_non_deterministic_input_user_state_get@@YAPAUs_player_control_non_deterministic_input_user_state@@W4e_input_user_index@@@Z");
//};

//void player_control_dispose(void)
//{
//    mangled_ppc("?player_control_dispose@@YAXXZ");
//};

//void player_control_initialize_for_new_map(void)
//{
//    mangled_ppc("?player_control_initialize_for_new_map@@YAXXZ");
//};

//void player_control_dispose_from_old_map(void)
//{
//    mangled_ppc("?player_control_dispose_from_old_map@@YAXXZ");
//};

//bool scripted_player_control_set_camera_control(bool)
//{
//    mangled_ppc("?scripted_player_control_set_camera_control@@YA_N_N@Z");
//};

//bool test_cinematic_button(struct s_game_input_state *, enum e_button_action)
//{
//    mangled_ppc("?test_cinematic_button@@YA_NPAUs_game_input_state@@W4e_button_action@@@Z");
//};

//public: void c_abstract_button::lock(void)
//{
//    mangled_ppc("?lock@c_abstract_button@@QAAXXZ");
//};

//public: void c_abstract_button::unlock(void)
//{
//    mangled_ppc("?unlock@c_abstract_button@@QAAXXZ");
//};

//public: bool c_abstract_button::locked(void) const
//{
//    mangled_ppc("?locked@c_abstract_button@@QBA_NXZ");
//};

//void player_latency_test_render_debug(void)
//{
//    mangled_ppc("?player_latency_test_render_debug@@YAXXZ");
//};

//void player_control_update(float *const, float *const)
//{
//    mangled_ppc("?player_control_update@@YAXQAM0@Z");
//};

//void player_control_update_player(long, enum e_input_user_index, enum e_controller_index, float, float)
//{
//    mangled_ppc("?player_control_update_player@@YAXJW4e_input_user_index@@W4e_controller_index@@MM@Z");
//};

//bool player_control_machinima_available(void)
//{
//    mangled_ppc("?player_control_machinima_available@@YA_NXZ");
//};

//void clear_player_control_input(struct s_player_control_input *)
//{
//    mangled_ppc("?clear_player_control_input@@YAXPAUs_player_control_input@@@Z");
//};

//void scale_player_control_input(struct s_player_control_input *, float)
//{
//    mangled_ppc("?scale_player_control_input@@YAXPAUs_player_control_input@@M@Z");
//};

//void player_control_get_controller_input(enum e_input_user_index, enum e_controller_index, float, float, struct s_game_input_state **, struct s_player_control_input *)
//{
//    mangled_ppc("?player_control_get_controller_input@@YAXW4e_input_user_index@@W4e_controller_index@@MMPAPAUs_game_input_state@@PAUs_player_control_input@@@Z");
//};

//public: bool c_abstract_button::is_down(void) const
//{
//    mangled_ppc("?is_down@c_abstract_button@@QBA_NXZ");
//};

//public: unsigned short c_abstract_button::down_msec(void)
//{
//    mangled_ppc("?down_msec@c_abstract_button@@QAAGXZ");
//};

//bool player_control_camera_control_is_active(void)
//{
//    mangled_ppc("?player_control_camera_control_is_active@@YA_NXZ");
//};

//bool player_control_flags_test_all_players(enum e_player_control_bit)
//{
//    mangled_ppc("?player_control_flags_test_all_players@@YA_NW4e_player_control_bit@@@Z");
//};

//void player_control_update_stick_throws(struct s_stick_throw_data *const, union real_point2d const *const, float)
//{
//    mangled_ppc("?player_control_update_stick_throws@@YAXQAUs_stick_throw_data@@QBTreal_point2d@@M@Z");
//};

//enum e_stick_throw_axis stick_throw_invert_y_axis(enum e_stick_throw_axis)
//{
//    mangled_ppc("?stick_throw_invert_y_axis@@YA?AW4e_stick_throw_axis@@W41@@Z");
//};

//void player_control_update_double_tap_jump(struct s_player_control_input_state *, bool, float)
//{
//    mangled_ppc("?player_control_update_double_tap_jump@@YAXPAUs_player_control_input_state@@_NM@Z");
//};

//long player_unit_has_object_relative_aiming(long, struct real_matrix4x3*)
//{
//    mangled_ppc("?player_unit_has_object_relative_aiming@@YAJJPAUreal_matrix4x3@@@Z");
//};

//void player_control_apply_legacy_bias(float *, union real_point2d *)
//{
//    mangled_ppc("?player_control_apply_legacy_bias@@YAXPAMPATreal_point2d@@@Z");
//};

//void player_control_apply_stick_shape(enum e_input_user_index, enum e_controller_index, long, union real_point2d const *, union real_point2d *)
//{
//    mangled_ppc("?player_control_apply_stick_shape@@YAXW4e_input_user_index@@W4e_controller_index@@JPBTreal_point2d@@PAT3@@Z");
//};

//void player_control_apply_mapping_function(enum e_input_user_index, enum e_controller_index, long, float, union real_point2d const *, union real_point2d *)
//{
//    mangled_ppc("?player_control_apply_mapping_function@@YAXW4e_input_user_index@@W4e_controller_index@@JMPBTreal_point2d@@PAT3@@Z");
//};

//void player_control_compute_peg(enum e_input_user_index, enum e_controller_index, float, union real_point2d *, union real_point2d *)
//{
//    mangled_ppc("?player_control_compute_peg@@YAXW4e_input_user_index@@W4e_controller_index@@MPATreal_point2d@@2@Z");
//};

//bool player_control_peg_single_axis(float, float, float, float, float, float *)
//{
//    mangled_ppc("?player_control_peg_single_axis@@YA_NMMMMMPAM@Z");
//};

//bool player_control_compute_input_inhibition(enum e_input_user_index, enum e_controller_index, struct s_game_input_state const *, struct s_player_control_input *)
//{
//    mangled_ppc("?player_control_compute_input_inhibition@@YA_NW4e_input_user_index@@W4e_controller_index@@PBUs_game_input_state@@PAUs_player_control_input@@@Z");
//};

//public: s_player_control_input::s_player_control_input(void)
//{
//    mangled_ppc("??0s_player_control_input@@QAA@XZ");
//};

//void player_control_build_action(enum e_input_user_index, struct s_player_action *)
//{
//    mangled_ppc("?player_control_build_action@@YAXW4e_input_user_index@@PAUs_player_action@@@Z");
//};

//void player_control_update_debug_begin(void)
//{
//    mangled_ppc("?player_control_update_debug_begin@@YAXXZ");
//};

//void player_control_update_debug_render(void)
//{
//    mangled_ppc("?player_control_update_debug_render@@YAXXZ");
//};

//void player_control_update_machinima(void)
//{
//    mangled_ppc("?player_control_update_machinima@@YAXXZ");
//};

//void player_control_update_simple(float, float)
//{
//    mangled_ppc("?player_control_update_simple@@YAXMM@Z");
//};

//bool player_control_get_machinima_camera_enabled(void)
//{
//    mangled_ppc("?player_control_get_machinima_camera_enabled@@YA_NXZ");
//};

//bool player_control_get_machinima_camera_use_old_controls(void)
//{
//    mangled_ppc("?player_control_get_machinima_camera_use_old_controls@@YA_NXZ");
//};

//bool player_control_get_machinima_camera_debug(void)
//{
//    mangled_ppc("?player_control_get_machinima_camera_debug@@YA_NXZ");
//};

//union euler_angles3d const * player_control_get_facing_angles(enum e_output_user_index)
//{
//    mangled_ppc("?player_control_get_facing_angles@@YAPBTeuler_angles3d@@W4e_output_user_index@@@Z");
//};

//struct s_player_control_output_state * player_control_output_get(enum e_output_user_index)
//{
//    mangled_ppc("?player_control_output_get@@YAPAUs_player_control_output_state@@W4e_output_user_index@@@Z");
//};

//union euler_angles3d const * player_control_get_facing_angles_delta(enum e_output_user_index)
//{
//    mangled_ppc("?player_control_get_facing_angles_delta@@YAPBTeuler_angles3d@@W4e_output_user_index@@@Z");
//};

//void player_control_get_aiming_vector(enum e_output_user_index, union vector3d *)
//{
//    mangled_ppc("?player_control_get_aiming_vector@@YAXW4e_output_user_index@@PATvector3d@@@Z");
//};

//long player_control_get_aiming_unit_index(enum e_output_user_index)
//{
//    mangled_ppc("?player_control_get_aiming_unit_index@@YAJW4e_output_user_index@@@Z");
//};

//float player_control_get_field_of_view(enum e_output_user_index)
//{
//    mangled_ppc("?player_control_get_field_of_view@@YAMW4e_output_user_index@@@Z");
//};

//float player_control_get_field_of_view_change_time(enum e_output_user_index)
//{
//    mangled_ppc("?player_control_get_field_of_view_change_time@@YAMW4e_output_user_index@@@Z");
//};

//void player_control_get_unit_camera_info(enum e_output_user_index, struct s_unit_camera_info *)
//{
//    mangled_ppc("?player_control_get_unit_camera_info@@YAXW4e_output_user_index@@PAUs_unit_camera_info@@@Z");
//};

//void player_control_input_set_unit_index(enum e_input_user_index, long)
//{
//    mangled_ppc("?player_control_input_set_unit_index@@YAXW4e_input_user_index@@J@Z");
//};

//void player_control_output_set_unit_index(enum e_output_user_index, long)
//{
//    mangled_ppc("?player_control_output_set_unit_index@@YAXW4e_output_user_index@@J@Z");
//};

//float player_control_get_target_autoaim_level(enum e_output_user_index)
//{
//    mangled_ppc("?player_control_get_target_autoaim_level@@YAMW4e_output_user_index@@@Z");
//};

//long player_control_get_target_player_index(enum e_output_user_index)
//{
//    mangled_ppc("?player_control_get_target_player_index@@YAJW4e_output_user_index@@@Z");
//};

//struct s_aim_assist_targeting_result const * player_control_get_targeting(enum e_output_user_index)
//{
//    mangled_ppc("?player_control_get_targeting@@YAPBUs_aim_assist_targeting_result@@W4e_output_user_index@@@Z");
//};

//struct s_player_action_context const * player_control_get_action_context(enum e_output_user_index)
//{
//    mangled_ppc("?player_control_get_action_context@@YAPBUs_player_action_context@@W4e_output_user_index@@@Z");
//};

//void player_control_set_external_action(enum e_output_user_index, struct s_player_action const *)
//{
//    mangled_ppc("?player_control_set_external_action@@YAXW4e_output_user_index@@PBUs_player_action@@@Z");
//};

//void player_control_set_deterministic_action_test_flags(long, unsigned long)
//{
//    mangled_ppc("?player_control_set_deterministic_action_test_flags@@YAXJK@Z");
//};

//void player_control_get_desired_angles(enum e_input_user_index, union euler_angles3d *)
//{
//    mangled_ppc("?player_control_get_desired_angles@@YAXW4e_input_user_index@@PATeuler_angles3d@@@Z");
//};

//void player_control_set_facing(enum e_input_user_index, union vector3d const *)
//{
//    mangled_ppc("?player_control_set_facing@@YAXW4e_input_user_index@@PBTvector3d@@@Z");
//};

//void player_control_set_facing(enum e_input_user_index, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?player_control_set_facing@@YAXW4e_input_user_index@@PBTvector3d@@1@Z");
//};

//void player_control_handle_weapon_added(enum e_input_user_index, short)
//{
//    mangled_ppc("?player_control_handle_weapon_added@@YAXW4e_input_user_index@@F@Z");
//};

//void player_control_handle_grenades_swapped(enum e_input_user_index)
//{
//    mangled_ppc("?player_control_handle_grenades_swapped@@YAXW4e_input_user_index@@@Z");
//};

//void player_control_handle_weapon_put_away(enum e_input_user_index, short)
//{
//    mangled_ppc("?player_control_handle_weapon_put_away@@YAXW4e_input_user_index@@F@Z");
//};

//void player_control_suppress_rotate_weapons(enum e_input_user_index)
//{
//    mangled_ppc("?player_control_suppress_rotate_weapons@@YAXW4e_input_user_index@@@Z");
//};

//struct s_gamepad_stick_settings const * player_control_get_gamepad_stick_settings(enum e_input_user_index, long)
//{
//    mangled_ppc("?player_control_get_gamepad_stick_settings@@YAPBUs_gamepad_stick_settings@@W4e_input_user_index@@J@Z");
//};

//void player_control_modify_desired_angles(enum e_input_user_index, float, float, union vector2d const *, float, float)
//{
//    mangled_ppc("?player_control_modify_desired_angles@@YAXW4e_input_user_index@@MMPBTvector2d@@MM@Z");
//};

//void player_control_apply_look_acceleration(struct s_player_control_input_state *, struct s_unit_camera_info const *, float, float *, float *)
//{
//    mangled_ppc("?player_control_apply_look_acceleration@@YAXPAUs_player_control_input_state@@PBUs_unit_camera_info@@MPAM2@Z");
//};

//void player_control_modify_desired_angles_default(enum e_input_user_index, float, float, float, float)
//{
//    mangled_ppc("?player_control_modify_desired_angles_default@@YAXW4e_input_user_index@@MMMM@Z");
//};

//float player_control_clamp_desired_yaw_angle_delta(enum e_input_user_index, float)
//{
//    mangled_ppc("?player_control_clamp_desired_yaw_angle_delta@@YAMW4e_input_user_index@@M@Z");
//};

//void player_control_modify_desired_angles_space_fighter(enum e_input_user_index, long, float, float, union vector2d const *, float, float)
//{
//    mangled_ppc("?player_control_modify_desired_angles_space_fighter@@YAXW4e_input_user_index@@JMMPBTvector2d@@MM@Z");
//};

//void player_control_unzoom_all(void)
//{
//    mangled_ppc("?player_control_unzoom_all@@YAXXZ");
//};

//void player_control_unzoom(enum e_input_user_index)
//{
//    mangled_ppc("?player_control_unzoom@@YAXW4e_input_user_index@@@Z");
//};

//short player_control_get_zoom_level(enum e_output_user_index)
//{
//    mangled_ppc("?player_control_get_zoom_level@@YAFW4e_output_user_index@@@Z");
//};

//void player_control_handle_deleted_object(long)
//{
//    mangled_ppc("?player_control_handle_deleted_object@@YAXJ@Z");
//};

//void player_control_action_test_reset(void)
//{
//    mangled_ppc("?player_control_action_test_reset@@YAXXZ");
//};

//void player_control_action_test_reset_dpad_up(void)
//{
//    mangled_ppc("?player_control_action_test_reset_dpad_up@@YAXXZ");
//};

//void player_control_action_test_reset_dpad_down(void)
//{
//    mangled_ppc("?player_control_action_test_reset_dpad_down@@YAXXZ");
//};

//void player_control_action_test_reset_dpad_left(void)
//{
//    mangled_ppc("?player_control_action_test_reset_dpad_left@@YAXXZ");
//};

//void player_control_action_test_reset_dpad_right(void)
//{
//    mangled_ppc("?player_control_action_test_reset_dpad_right@@YAXXZ");
//};

//bool player_control_action_test_any_players(enum e_player_control_action_test_bit)
//{
//    mangled_ppc("?player_control_action_test_any_players@@YA_NW4e_player_control_action_test_bit@@@Z");
//};

//bool player_control_action_test_any_players_range(enum e_player_control_action_test_bit, enum e_player_control_action_test_bit)
//{
//    mangled_ppc("?player_control_action_test_any_players_range@@YA_NW4e_player_control_action_test_bit@@0@Z");
//};

//bool player_control_action_test_accept(void)
//{
//    mangled_ppc("?player_control_action_test_accept@@YA_NXZ");
//};

//void player_action_test_inhibit_button_flags_set_all_players(enum e_player_control_action_test_bit, bool)
//{
//    mangled_ppc("?player_action_test_inhibit_button_flags_set_all_players@@YAXW4e_player_control_action_test_bit@@_N@Z");
//};

//void player_action_test_testing_for_action_flags_set_all_players(enum e_player_control_action_test_bit, bool)
//{
//    mangled_ppc("?player_action_test_testing_for_action_flags_set_all_players@@YAXW4e_player_control_action_test_bit@@_N@Z");
//};

//bool player_control_action_test_cancel(void)
//{
//    mangled_ppc("?player_control_action_test_cancel@@YA_NXZ");
//};

//bool player_control_action_test_action(void)
//{
//    mangled_ppc("?player_control_action_test_action@@YA_NXZ");
//};

//bool player_control_action_test_primary_trigger(void)
//{
//    mangled_ppc("?player_control_action_test_primary_trigger@@YA_NXZ");
//};

//bool player_control_action_test_melee(void)
//{
//    mangled_ppc("?player_control_action_test_melee@@YA_NXZ");
//};

//bool player_control_action_test_grenade_trigger(void)
//{
//    mangled_ppc("?player_control_action_test_grenade_trigger@@YA_NXZ");
//};

//bool player_control_action_test_vision_trigger(void)
//{
//    mangled_ppc("?player_control_action_test_vision_trigger@@YA_NXZ");
//};

//bool player_control_action_test_rotate_weapons(void)
//{
//    mangled_ppc("?player_control_action_test_rotate_weapons@@YA_NXZ");
//};

//bool player_control_action_test_rotate_grenades(void)
//{
//    mangled_ppc("?player_control_action_test_rotate_grenades@@YA_NXZ");
//};

//bool player_control_action_test_jump(void)
//{
//    mangled_ppc("?player_control_action_test_jump@@YA_NXZ");
//};

//bool player_control_action_test_equipment(void)
//{
//    mangled_ppc("?player_control_action_test_equipment@@YA_NXZ");
//};

//bool player_control_action_test_context_primary(void)
//{
//    mangled_ppc("?player_control_action_test_context_primary@@YA_NXZ");
//};

//bool player_control_action_test_vehicle_trick_primary(void)
//{
//    mangled_ppc("?player_control_action_test_vehicle_trick_primary@@YA_NXZ");
//};

//bool player_control_action_test_vehicle_trick_secondary(void)
//{
//    mangled_ppc("?player_control_action_test_vehicle_trick_secondary@@YA_NXZ");
//};

//bool player_control_action_test_move_relative_all_directions(void)
//{
//    mangled_ppc("?player_control_action_test_move_relative_all_directions@@YA_NXZ");
//};

//bool player_control_action_test_look_relative_all_directions(void)
//{
//    mangled_ppc("?player_control_action_test_look_relative_all_directions@@YA_NXZ");
//};

//bool player_control_action_test_look_relative_left(void)
//{
//    mangled_ppc("?player_control_action_test_look_relative_left@@YA_NXZ");
//};

//bool player_control_action_test_look_relative_right(void)
//{
//    mangled_ppc("?player_control_action_test_look_relative_right@@YA_NXZ");
//};

//bool player_control_action_test_look_relative_up(void)
//{
//    mangled_ppc("?player_control_action_test_look_relative_up@@YA_NXZ");
//};

//bool player_control_action_test_look_relative_down(void)
//{
//    mangled_ppc("?player_control_action_test_look_relative_down@@YA_NXZ");
//};

//bool player_control_action_test_start(void)
//{
//    mangled_ppc("?player_control_action_test_start@@YA_NXZ");
//};

//bool player_control_action_test_back(void)
//{
//    mangled_ppc("?player_control_action_test_back@@YA_NXZ");
//};

//bool player_control_action_test_lookstick_forward(void)
//{
//    mangled_ppc("?player_control_action_test_lookstick_forward@@YA_NXZ");
//};

//bool player_control_action_test_lookstick_backward(void)
//{
//    mangled_ppc("?player_control_action_test_lookstick_backward@@YA_NXZ");
//};

//bool player_control_action_test_cinematic_skip(void)
//{
//    mangled_ppc("?player_control_action_test_cinematic_skip@@YA_NXZ");
//};

//bool player_control_action_test_dpad_up(void)
//{
//    mangled_ppc("?player_control_action_test_dpad_up@@YA_NXZ");
//};

//bool player_control_action_test_dpad_down(void)
//{
//    mangled_ppc("?player_control_action_test_dpad_down@@YA_NXZ");
//};

//bool player_control_action_test_dpad_left(void)
//{
//    mangled_ppc("?player_control_action_test_dpad_left@@YA_NXZ");
//};

//bool player_control_action_test_dpad_right(void)
//{
//    mangled_ppc("?player_control_action_test_dpad_right@@YA_NXZ");
//};

//void player_control_action_test_reset(long)
//{
//    mangled_ppc("?player_control_action_test_reset@@YAXJ@Z");
//};

//bool player_control_action_test_accept(long)
//{
//    mangled_ppc("?player_control_action_test_accept@@YA_NJ@Z");
//};

//bool player_control_action_test(long, enum e_player_control_action_test_bit)
//{
//    mangled_ppc("?player_control_action_test@@YA_NJW4e_player_control_action_test_bit@@@Z");
//};

//void player_action_test_inhibit_button_flags_set(long, enum e_player_control_action_test_bit, bool)
//{
//    mangled_ppc("?player_action_test_inhibit_button_flags_set@@YAXJW4e_player_control_action_test_bit@@_N@Z");
//};

//void player_action_test_testing_for_action_flags_set(long, enum e_player_control_action_test_bit, bool)
//{
//    mangled_ppc("?player_action_test_testing_for_action_flags_set@@YAXJW4e_player_control_action_test_bit@@_N@Z");
//};

//bool player_control_action_test_cancel(long)
//{
//    mangled_ppc("?player_control_action_test_cancel@@YA_NJ@Z");
//};

//bool player_control_action_test_action(long)
//{
//    mangled_ppc("?player_control_action_test_action@@YA_NJ@Z");
//};

//bool player_control_action_test_melee(long)
//{
//    mangled_ppc("?player_control_action_test_melee@@YA_NJ@Z");
//};

//bool player_control_action_test_primary_trigger(long)
//{
//    mangled_ppc("?player_control_action_test_primary_trigger@@YA_NJ@Z");
//};

//bool player_control_action_test_grenade_trigger(long)
//{
//    mangled_ppc("?player_control_action_test_grenade_trigger@@YA_NJ@Z");
//};

//bool player_control_action_test_vision_trigger(long)
//{
//    mangled_ppc("?player_control_action_test_vision_trigger@@YA_NJ@Z");
//};

//bool player_control_action_test_rotate_weapons(long)
//{
//    mangled_ppc("?player_control_action_test_rotate_weapons@@YA_NJ@Z");
//};

//bool player_control_action_test_rotate_grenades(long)
//{
//    mangled_ppc("?player_control_action_test_rotate_grenades@@YA_NJ@Z");
//};

//bool player_control_action_test_jump(long)
//{
//    mangled_ppc("?player_control_action_test_jump@@YA_NJ@Z");
//};

//bool player_control_action_test_equipment(long)
//{
//    mangled_ppc("?player_control_action_test_equipment@@YA_NJ@Z");
//};

//bool player_control_action_test_context_primary(long)
//{
//    mangled_ppc("?player_control_action_test_context_primary@@YA_NJ@Z");
//};

//bool player_control_action_test_vehicle_trick_primary(long)
//{
//    mangled_ppc("?player_control_action_test_vehicle_trick_primary@@YA_NJ@Z");
//};

//bool player_control_action_test_vehicle_trick_secondary(long)
//{
//    mangled_ppc("?player_control_action_test_vehicle_trick_secondary@@YA_NJ@Z");
//};

//bool player_control_action_test_move_relative_all_directions(long)
//{
//    mangled_ppc("?player_control_action_test_move_relative_all_directions@@YA_NJ@Z");
//};

//bool player_control_action_test_range(long, enum e_player_control_action_test_bit, enum e_player_control_action_test_bit)
//{
//    mangled_ppc("?player_control_action_test_range@@YA_NJW4e_player_control_action_test_bit@@0@Z");
//};

//bool player_control_action_test_look_relative_all_directions(long)
//{
//    mangled_ppc("?player_control_action_test_look_relative_all_directions@@YA_NJ@Z");
//};

//bool player_control_action_test_look_relative_left(long)
//{
//    mangled_ppc("?player_control_action_test_look_relative_left@@YA_NJ@Z");
//};

//bool player_control_action_test_look_relative_right(long)
//{
//    mangled_ppc("?player_control_action_test_look_relative_right@@YA_NJ@Z");
//};

//bool player_control_action_test_look_relative_up(long)
//{
//    mangled_ppc("?player_control_action_test_look_relative_up@@YA_NJ@Z");
//};

//bool player_control_action_test_look_relative_down(long)
//{
//    mangled_ppc("?player_control_action_test_look_relative_down@@YA_NJ@Z");
//};

//bool player_control_action_test_start(long)
//{
//    mangled_ppc("?player_control_action_test_start@@YA_NJ@Z");
//};

//bool player_control_action_test_back(long)
//{
//    mangled_ppc("?player_control_action_test_back@@YA_NJ@Z");
//};

//bool player_control_action_test_lookstick_forward(long)
//{
//    mangled_ppc("?player_control_action_test_lookstick_forward@@YA_NJ@Z");
//};

//bool player_control_action_test_lookstick_backward(long)
//{
//    mangled_ppc("?player_control_action_test_lookstick_backward@@YA_NJ@Z");
//};

//bool player_control_action_test_cinematic_skip(long)
//{
//    mangled_ppc("?player_control_action_test_cinematic_skip@@YA_NJ@Z");
//};

//bool player_control_action_test_dpad_up(long)
//{
//    mangled_ppc("?player_control_action_test_dpad_up@@YA_NJ@Z");
//};

//bool player_control_action_test_dpad_down(long)
//{
//    mangled_ppc("?player_control_action_test_dpad_down@@YA_NJ@Z");
//};

//bool player_control_action_test_dpad_left(long)
//{
//    mangled_ppc("?player_control_action_test_dpad_left@@YA_NJ@Z");
//};

//bool player_control_action_test_dpad_right(long)
//{
//    mangled_ppc("?player_control_action_test_dpad_right@@YA_NJ@Z");
//};

//void player_control_action_test_input(enum e_input_user_index, struct s_game_input_state *, struct s_player_control_input *)
//{
//    mangled_ppc("?player_control_action_test_input@@YAXW4e_input_user_index@@PAUs_game_input_state@@PAUs_player_control_input@@@Z");
//};

//void player_invert_look(long)
//{
//    mangled_ppc("?player_invert_look@@YAXJ@Z");
//};

//bool player0_looking_up(void)
//{
//    mangled_ppc("?player0_looking_up@@YA_NXZ");
//};

//bool player0_looking_down(void)
//{
//    mangled_ppc("?player0_looking_down@@YA_NXZ");
//};

//float player0_get_looking_pitch(void)
//{
//    mangled_ppc("?player0_get_looking_pitch@@YAMXZ");
//};

//void player_set_pitch(long, float, long)
//{
//    mangled_ppc("?player_set_pitch@@YAXJMJ@Z");
//};

//void player_set_pitch_internal(enum e_input_user_index, float, long)
//{
//    mangled_ppc("?player_set_pitch_internal@@YAXW4e_input_user_index@@MJ@Z");
//};

//bool user_currently_piloting_aircraft(enum e_input_user_index)
//{
//    mangled_ppc("?user_currently_piloting_aircraft@@YA_NW4e_input_user_index@@@Z");
//};

//bool process_user_interface_input(enum e_controller_index, struct s_player_control_input *)
//{
//    mangled_ppc("?process_user_interface_input@@YA_NW4e_controller_index@@PAUs_player_control_input@@@Z");
//};

//void player_control_scale_all_input_for_player(long, float, float)
//{
//    mangled_ppc("?player_control_scale_all_input_for_player@@YAXJMM@Z");
//};

//void player_control_scale_all_input(float, float)
//{
//    mangled_ppc("?player_control_scale_all_input@@YAXMM@Z");
//};

//void player_control_fade_out_all_input(float)
//{
//    mangled_ppc("?player_control_fade_out_all_input@@YAXM@Z");
//};

//void player_control_fade_in_all_input(float)
//{
//    mangled_ppc("?player_control_fade_in_all_input@@YAXM@Z");
//};

//void player_control_fade_out_all_input_for_player(long, float)
//{
//    mangled_ppc("?player_control_fade_out_all_input_for_player@@YAXJM@Z");
//};

//void player_control_fade_in_all_input_for_player(long, float)
//{
//    mangled_ppc("?player_control_fade_in_all_input_for_player@@YAXJM@Z");
//};

//void player_control_lock_gaze(enum e_input_user_index, long, float)
//{
//    mangled_ppc("?player_control_lock_gaze@@YAXW4e_input_user_index@@JM@Z");
//};

//void player_control_unlock_gaze(enum e_input_user_index)
//{
//    mangled_ppc("?player_control_unlock_gaze@@YAXW4e_input_user_index@@@Z");
//};

//void player_control_lock_accept_button_until_pressed(long)
//{
//    mangled_ppc("?player_control_lock_accept_button_until_pressed@@YAXJ@Z");
//};

//void player_control_lock_cancel_button_until_pressed(long)
//{
//    mangled_ppc("?player_control_lock_cancel_button_until_pressed@@YAXJ@Z");
//};

//void player_control_state_clear(struct s_player_control_state *)
//{
//    mangled_ppc("?player_control_state_clear@@YAXPAUs_player_control_state@@@Z");
//};

//void player_control_state_build_action(struct s_player_control_state const *, struct s_player_action *)
//{
//    mangled_ppc("?player_control_state_build_action@@YAXPBUs_player_control_state@@PAUs_player_action@@@Z");
//};

//void player_control_copy_state_from_action(struct s_player_action const *, struct s_player_control_state *)
//{
//    mangled_ppc("?player_control_copy_state_from_action@@YAXPBUs_player_action@@PAUs_player_control_state@@@Z");
//};

//void player_control_copy_state_from_unit(long, struct s_player_control_state *)
//{
//    mangled_ppc("?player_control_copy_state_from_unit@@YAXJPAUs_player_control_state@@@Z");
//};

//void player_control_propagate_output(enum e_input_user_index)
//{
//    mangled_ppc("?player_control_propagate_output@@YAXW4e_input_user_index@@@Z");
//};

//public: c_flags<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>::c_flags<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>(class c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??0?$c_flags@W4e_player_action_flags@@K$0BI@Us_default_enum_string_resolver@@@@QAA@V?$c_flags_no_init@W4e_player_action_flags@@K$0BI@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_deterministic_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: struct s_player_input_debug * s_static_array<struct s_player_input_debug, 4>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_player_input_debug@@$03@@QAAPAUs_player_input_debug@@XZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_deterministic_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::test(enum e_player_control_action_test_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@QBA_NW4e_player_control_action_test_bit@@@Z");
//};

//public: void c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::set(enum e_player_control_action_test_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@QAAXW4e_player_control_action_test_bit@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::test_range(enum e_player_control_action_test_bit, enum e_player_control_action_test_bit) const
//{
//    mangled_ppc("?test_range@?$c_flags_no_init@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@QBA_NW4e_player_control_action_test_bit@@0@Z");
//};

//public: unsigned long c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: void c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//public: bool c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>::test(enum e_player_action_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_player_action_flags@@K$0BI@Us_default_enum_string_resolver@@@@QBA_NW4e_player_action_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>::set(enum e_player_action_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_player_action_flags@@K$0BI@Us_default_enum_string_resolver@@@@QAAXW4e_player_action_flags@@_N@Z");
//};

//public: class c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver> c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??I?$c_flags_no_init@W4e_player_action_flags@@K$0BI@Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: bool c_flags_no_init<enum s_unit_boost_definition::e_flag, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum s_unit_boost_definition::e_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flag@s_unit_boost_definition@@K$00Us_default_enum_string_resolver@@@@QBA_NW4e_flag@s_unit_boost_definition@@@Z");
//};

//public: bool c_flags_no_init<enum s_vehicle_space_fighter_definition::e_turn_back_flag, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum s_vehicle_space_fighter_definition::e_turn_back_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_turn_back_flag@s_vehicle_space_fighter_definition@@K$00Us_default_enum_string_resolver@@@@QBA_NW4e_turn_back_flag@s_vehicle_space_fighter_definition@@@Z");
//};

//public: void c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_player_control_flags@@K$0L@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::test(enum e_player_control_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_player_control_flags@@K$0L@Us_default_enum_string_resolver@@@@QBA_NW4e_player_control_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::set(enum e_player_control_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_player_control_flags@@K$0L@Us_default_enum_string_resolver@@@@QAAXW4e_player_control_flags@@_N@Z");
//};

//public: c_flags<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::c_flags<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_player_control_flags@@K$0L@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_player_control_bit, unsigned long, 1, struct s_default_enum_string_resolver>::test(enum e_player_control_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_player_control_bit@@K$00Us_default_enum_string_resolver@@@@QBA_NW4e_player_control_bit@@@Z");
//};

//public: void c_flags_no_init<enum e_player_control_bit, unsigned long, 1, struct s_default_enum_string_resolver>::set(enum e_player_control_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_player_control_bit@@K$00Us_default_enum_string_resolver@@@@QAAXW4e_player_control_bit@@_N@Z");
//};

//public: struct s_player_control_non_deterministic_input_user_state & s_static_array<struct s_player_control_non_deterministic_input_user_state, 4>::operator[]<enum e_input_user_index>(enum e_input_user_index)
//{
//    mangled_ppc("??$?AW4e_input_user_index@@@?$s_static_array@Us_player_control_non_deterministic_input_user_state@@$03@@QAAAAUs_player_control_non_deterministic_input_user_state@@W4e_input_user_index@@@Z");
//};

//void xchg<enum e_stick_throw_axis>(enum e_stick_throw_axis &, enum e_stick_throw_axis &)
//{
//    mangled_ppc("??$xchg@W4e_stick_throw_axis@@@@YAXAAW4e_stick_throw_axis@@0@Z");
//};

//public: struct s_player_input_debug & s_static_array<struct s_player_input_debug, 4>::operator[]<enum e_input_user_index>(enum e_input_user_index)
//{
//    mangled_ppc("??$?AW4e_input_user_index@@@?$s_static_array@Us_player_input_debug@@$03@@QAAAAUs_player_input_debug@@W4e_input_user_index@@@Z");
//};

//public: void c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_aim_assist_query_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_aim_assist_query_flags@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_aim_assist_query_flags@@_N@Z");
//};

//public: c_flags<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_aim_assist_query_flags@@E$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: struct s_player_input_debug & s_static_array<struct s_player_input_debug, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_player_input_debug@@$03@@QAAAAUs_player_input_debug@@J@Z");
//};

//public: class c_flags<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver> & s_static_array<class c_flags<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_flags@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@$0BA@@@QAAAAV?$c_flags@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@J@Z");
//};

//public: struct s_player_control_non_deterministic_input_user_state & s_static_array<struct s_player_control_non_deterministic_input_user_state, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_player_control_non_deterministic_input_user_state@@$03@@QAAAAUs_player_control_non_deterministic_input_user_state@@J@Z");
//};

//public: bool c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: class c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver> c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??I?$c_flags_no_init@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: static class c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver> c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_player_control_action_test_bit, enum e_player_control_action_test_bit)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@SA?AV1@W4e_player_control_action_test_bit@@0@Z");
//};

//public: static bool c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::valid_bit(enum e_player_control_action_test_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@SA_NW4e_player_control_action_test_bit@@@Z");
//};

//public: bool c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_control_action_test_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@CAKW4e_player_control_action_test_bit@@@Z");
//};

//public: static bool c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>::valid_bit(enum e_player_action_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_player_action_flags@@K$0BI@Us_default_enum_string_resolver@@@@SA_NW4e_player_action_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_player_action_flags, unsigned long, 24, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_action_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_player_action_flags@@K$0BI@Us_default_enum_string_resolver@@@@CAKW4e_player_action_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum s_unit_boost_definition::e_flag, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_unit_boost_definition::e_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flag@s_unit_boost_definition@@K$00Us_default_enum_string_resolver@@@@SA_NW4e_flag@s_unit_boost_definition@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum s_unit_boost_definition::e_flag, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_unit_boost_definition::e_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flag@s_unit_boost_definition@@K$00Us_default_enum_string_resolver@@@@CAKW4e_flag@s_unit_boost_definition@@@Z");
//};

//public: static bool c_flags_no_init<enum s_vehicle_space_fighter_definition::e_turn_back_flag, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_vehicle_space_fighter_definition::e_turn_back_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_turn_back_flag@s_vehicle_space_fighter_definition@@K$00Us_default_enum_string_resolver@@@@SA_NW4e_turn_back_flag@s_vehicle_space_fighter_definition@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum s_vehicle_space_fighter_definition::e_turn_back_flag, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_vehicle_space_fighter_definition::e_turn_back_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_turn_back_flag@s_vehicle_space_fighter_definition@@K$00Us_default_enum_string_resolver@@@@CAKW4e_turn_back_flag@s_vehicle_space_fighter_definition@@@Z");
//};

//public: bool c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_player_control_flags@@K$0L@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::valid_bit(enum e_player_control_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_player_control_flags@@K$0L@Us_default_enum_string_resolver@@@@SA_NW4e_player_control_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_control_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_player_control_flags@@K$0L@Us_default_enum_string_resolver@@@@CAKW4e_player_control_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_player_control_bit, unsigned long, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_player_control_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_player_control_bit@@K$00Us_default_enum_string_resolver@@@@SA_NW4e_player_control_bit@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_player_control_bit, unsigned long, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_control_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_player_control_bit@@K$00Us_default_enum_string_resolver@@@@CAKW4e_player_control_bit@@@Z");
//};

//public: static bool s_static_array<struct s_player_control_non_deterministic_input_user_state, 4>::valid<enum e_input_user_index>(enum e_input_user_index)
//{
//    mangled_ppc("??$valid@W4e_input_user_index@@@?$s_static_array@Us_player_control_non_deterministic_input_user_state@@$03@@SA_NW4e_input_user_index@@@Z");
//};

//public: static bool s_static_array<struct s_player_input_debug, 4>::valid<enum e_input_user_index>(enum e_input_user_index)
//{
//    mangled_ppc("??$valid@W4e_input_user_index@@@?$s_static_array@Us_player_input_debug@@$03@@SA_NW4e_input_user_index@@@Z");
//};

//public: void c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_aim_assist_query_flags@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_aim_assist_query_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_aim_assist_query_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_aim_assist_query_flags@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_aim_assist_query_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_aim_assist_query_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_aim_assist_query_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_aim_assist_query_flags@@@Z");
//};

//public: static bool s_static_array<struct s_player_input_debug, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_player_input_debug@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_flags<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_flags@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_player_control_non_deterministic_input_user_state, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_player_control_non_deterministic_input_user_state@@$03@@SA_NJ@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_player_control_action_test_bit)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@CAKW4e_player_control_action_test_bit@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_player_control_action_test_bit, unsigned long, 31, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_player_control_action_test_bit@@K$0BP@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_player_control_flags@@K$0L@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_aim_assist_query_flags@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_player_control_flags, unsigned long, 11, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_player_control_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_player_control_flags@@K$0L@Us_default_enum_string_resolver@@@@CAKW4e_player_control_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_aim_assist_query_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_aim_assist_query_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_aim_assist_query_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_aim_assist_query_flags@@@Z");
//};

//double magnitude2d(union real64_vector2d const *)
//{
//    mangled_ppc("?magnitude2d@@YANPBTreal64_vector2d@@@Z");
//};

//double magnitude_squared2d(union real64_vector2d const *)
//{
//    mangled_ppc("?magnitude_squared2d@@YANPBTreal64_vector2d@@@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_deterministic_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_deterministic_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_deterministic_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_deterministic_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_player_control_globals_deterministic_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_player_control_globals_deterministic_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_player_control_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_player_control_globals_allocator@@YAXXZ");
//};

//void g_player_control_globals_deterministic_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_player_control_globals_deterministic_allocator@@YAXXZ");
//};

