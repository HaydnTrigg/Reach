/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool g_biped_fake_soft_landing; // "?g_biped_fake_soft_landing@@3_NA"
// float g_biped_pivot_on_foot_fixup_scale; // "?g_biped_pivot_on_foot_fixup_scale@@3MA"
// float g_biped_soft_landing_recovery_scale; // "?g_biped_soft_landing_recovery_scale@@3MA"
// float g_biped_hard_landing_recovery_scale; // "?g_biped_hard_landing_recovery_scale@@3MA"
// float g_biped_landing_absorbtion; // "?g_biped_landing_absorbtion@@3MA"
// struct s_motor_task_definition g_biped_ground_animated_jump_task; // "?g_biped_ground_animated_jump_task@@3Us_motor_task_definition@@A"
// bool g_biped_fake_hard_landing; // "?g_biped_fake_hard_landing@@3_NA"
// bool debug_animation_turn_radius_draw; // "?debug_animation_turn_radius_draw@@3_NA"
// class c_motor_program_definition biped_ground_program_definition; // "?biped_ground_program_definition@@3Vc_motor_program_definition@@A"

// bool biped_ground_default_event(long, class c_motor_task *, enum e_motor_event);
// bool biped_ground_default_finished(long, class c_motor_task *);
// enum e_motor_result biped_ground_jump_submit(long, class c_motor_request_base const *);
// bool biped_ground_jump_finished(long, class c_motor_task *);
// bool biped_ground_jump_interrupted(long, class c_motor_task *);
// enum e_motor_result biped_ground_animated_jump_submit(long, class c_motor_request_base const *);
// public: void c_channel_base::set_playback_flags(class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>);
// void biped_animated_jump_set_state(long, class c_motor_task *, enum e_animated_jump_state);
// float biped_ground_compute_animated_jump_playback_speed(long, class c_motor_task *, enum e_animation_frame_event_types);
// public: float c_animation_channel::get_blended_animation_weight(long) const;
// float biped_ground_compute_animated_jump_frame_duration(class c_model_animation const *, enum e_animation_frame_event_types);
// float biped_animated_jump_compute_landing_key_frame(long, class c_motor_task *);
// bool biped_ground_animated_jump_update(long, class c_motor_task *);
// float biped_animated_jump_compute_anticipation_key_frame(long, class c_motor_task *);
// float biped_animated_jump_compute_apex_key_frame(long, class c_motor_task *);
// bool biped_animated_jump_anticipation_update(long, class c_motor_task *);
// bool biped_animated_jump_ground_arc_update(long, class c_motor_task *);
// bool biped_animated_jump_airborne_arc_update(long, class c_motor_task *);
// bool biped_ground_animated_jump_finished(long, class c_motor_task *);
// bool biped_ground_animated_jump_interrupted(long, class c_motor_task *);
// enum e_motor_result biped_ground_dash_submit(long, class c_motor_request_base const *);
// enum e_motor_result biped_ground_land_submit(long, class c_motor_request_base const *);
// bool biped_ground_takeoff_finished(long, class c_motor_task *);
// enum e_motor_result biped_ground_takeoff_submit(long, class c_motor_request_base const *);
// bool biped_ground_takeoff_update(long, class c_motor_task *);
// bool biped_ground_takeoff_interrupted(long, class c_motor_task *);
// enum e_motor_result biped_bunker_close_submit(long, class c_motor_request_base const *);
// enum e_motor_result biped_bunker_open_submit(long, class c_motor_request_base const *);
// enum e_motor_result animation_task_submit(long, class c_motor_request_base const *);
// enum e_motor_result transient_posture_task_submit(long, class c_motor_request_base const *);
// bool transient_posture_task_update(long, class c_motor_task *);
// public: bool c_interaction_target::valid(void) const;
// bool transient_posture_task_finished(long, class c_motor_task *);
// bool transient_posture_task_interrupted(long, class c_motor_task *);
// enum e_motor_result hoist_task_submit(long, class c_motor_request_base const *);
// bool hoist_task_update(long, class c_motor_task *);
// bool hoist_task_interrupted(long, class c_motor_task *);
// bool hoist_task_finished(long, class c_motor_task *);
// enum e_motor_result get_infected_task_submit(long, class c_motor_request_base const *);
// bool get_infected_task_interrupted(long, class c_motor_task *);
// bool get_infected_task_finished(long, class c_motor_task *);
// void biped_stop_landing(long);
// bool biped_jump(long);
// public: float c_player_trait_movement::get_jump_modifier(void) const;
// void biped_start_landing(long, float);
// bool biped_ground_validate_state_change(long, struct s_animation_state_change_settings *);
// void biped_ground_render_debug(long);
// bool biped_ground_activate(long);
// void biped_ground_deactivate(long);
// bool biped_ground_update(long);
// void biped_ground_update_ground_fit_normal(long);
// bool biped_ground_update_turning(long, struct s_animation_control_data *);
// float limit_moving_turn_amount_using_pivot(long, float);
// void biped_ground_update_turn_radius(long);
// bool biped_ground_update_moving(long, struct s_animation_control_data *, struct s_character_physics_update_input_datum const *, struct s_character_physics_update_output_datum const *);
// void biped_update_choose_seat_and_state_from_physics_animation_state(long, enum e_physics_animation_state, bool, long, enum e_physics_animation_state, bool, long *, enum e_physics_animation_state *, bool *);
// public: struct s_animation_gait_settings const * c_animation_manager::get_gait(void) const;
// long biped_ground_get_desired_mode(long);
// void biped_landing_animation(long, struct s_animation_control_data *);
// void biped_slipping_sounds(long, struct s_animation_control_data *);
// char get_biped_state_index_from_animation_manager_state(class c_animation_manager *, enum e_physics_animation_state, long);
// void biped_try_to_make_footsteps(long);
// bool biped_update_jumping(long);
// enum e_motor_program biped_ground_move(long);
// bool biped_ground_transition_to_airborne(long);

//bool biped_ground_default_event(long, class c_motor_task *, enum e_motor_event)
//{
//    mangled_ppc("?biped_ground_default_event@@YA_NJPAVc_motor_task@@W4e_motor_event@@@Z");
//};

//bool biped_ground_default_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_ground_default_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result biped_ground_jump_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_ground_jump_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool biped_ground_jump_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_ground_jump_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//bool biped_ground_jump_interrupted(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_ground_jump_interrupted@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result biped_ground_animated_jump_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_ground_animated_jump_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//public: void c_channel_base::set_playback_flags(class c_flags<enum e_animation_playback_flags, unsigned long, 18, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_playback_flags@c_channel_base@@QAAXV?$c_flags@W4e_animation_playback_flags@@K$0BC@Us_default_enum_string_resolver@@@@@Z");
//};

//void biped_animated_jump_set_state(long, class c_motor_task *, enum e_animated_jump_state)
//{
//    mangled_ppc("?biped_animated_jump_set_state@@YAXJPAVc_motor_task@@W4e_animated_jump_state@@@Z");
//};

//float biped_ground_compute_animated_jump_playback_speed(long, class c_motor_task *, enum e_animation_frame_event_types)
//{
//    mangled_ppc("?biped_ground_compute_animated_jump_playback_speed@@YAMJPAVc_motor_task@@W4e_animation_frame_event_types@@@Z");
//};

//public: float c_animation_channel::get_blended_animation_weight(long) const
//{
//    mangled_ppc("?get_blended_animation_weight@c_animation_channel@@QBAMJ@Z");
//};

//float biped_ground_compute_animated_jump_frame_duration(class c_model_animation const *, enum e_animation_frame_event_types)
//{
//    mangled_ppc("?biped_ground_compute_animated_jump_frame_duration@@YAMPBVc_model_animation@@W4e_animation_frame_event_types@@@Z");
//};

//float biped_animated_jump_compute_landing_key_frame(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_animated_jump_compute_landing_key_frame@@YAMJPAVc_motor_task@@@Z");
//};

//bool biped_ground_animated_jump_update(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_ground_animated_jump_update@@YA_NJPAVc_motor_task@@@Z");
//};

//float biped_animated_jump_compute_anticipation_key_frame(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_animated_jump_compute_anticipation_key_frame@@YAMJPAVc_motor_task@@@Z");
//};

//float biped_animated_jump_compute_apex_key_frame(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_animated_jump_compute_apex_key_frame@@YAMJPAVc_motor_task@@@Z");
//};

//bool biped_animated_jump_anticipation_update(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_animated_jump_anticipation_update@@YA_NJPAVc_motor_task@@@Z");
//};

//bool biped_animated_jump_ground_arc_update(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_animated_jump_ground_arc_update@@YA_NJPAVc_motor_task@@@Z");
//};

//bool biped_animated_jump_airborne_arc_update(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_animated_jump_airborne_arc_update@@YA_NJPAVc_motor_task@@@Z");
//};

//bool biped_ground_animated_jump_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_ground_animated_jump_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//bool biped_ground_animated_jump_interrupted(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_ground_animated_jump_interrupted@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result biped_ground_dash_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_ground_dash_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result biped_ground_land_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_ground_land_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool biped_ground_takeoff_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_ground_takeoff_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result biped_ground_takeoff_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_ground_takeoff_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool biped_ground_takeoff_update(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_ground_takeoff_update@@YA_NJPAVc_motor_task@@@Z");
//};

//bool biped_ground_takeoff_interrupted(long, class c_motor_task *)
//{
//    mangled_ppc("?biped_ground_takeoff_interrupted@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result biped_bunker_close_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_bunker_close_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result biped_bunker_open_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_bunker_open_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result animation_task_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?animation_task_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result transient_posture_task_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?transient_posture_task_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool transient_posture_task_update(long, class c_motor_task *)
//{
//    mangled_ppc("?transient_posture_task_update@@YA_NJPAVc_motor_task@@@Z");
//};

//public: bool c_interaction_target::valid(void) const
//{
//    mangled_ppc("?valid@c_interaction_target@@QBA_NXZ");
//};

//bool transient_posture_task_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?transient_posture_task_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//bool transient_posture_task_interrupted(long, class c_motor_task *)
//{
//    mangled_ppc("?transient_posture_task_interrupted@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result hoist_task_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?hoist_task_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool hoist_task_update(long, class c_motor_task *)
//{
//    mangled_ppc("?hoist_task_update@@YA_NJPAVc_motor_task@@@Z");
//};

//bool hoist_task_interrupted(long, class c_motor_task *)
//{
//    mangled_ppc("?hoist_task_interrupted@@YA_NJPAVc_motor_task@@@Z");
//};

//bool hoist_task_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?hoist_task_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result get_infected_task_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?get_infected_task_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool get_infected_task_interrupted(long, class c_motor_task *)
//{
//    mangled_ppc("?get_infected_task_interrupted@@YA_NJPAVc_motor_task@@@Z");
//};

//bool get_infected_task_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?get_infected_task_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//void biped_stop_landing(long)
//{
//    mangled_ppc("?biped_stop_landing@@YAXJ@Z");
//};

//bool biped_jump(long)
//{
//    mangled_ppc("?biped_jump@@YA_NJ@Z");
//};

//public: float c_player_trait_movement::get_jump_modifier(void) const
//{
//    mangled_ppc("?get_jump_modifier@c_player_trait_movement@@QBAMXZ");
//};

//void biped_start_landing(long, float)
//{
//    mangled_ppc("?biped_start_landing@@YAXJM@Z");
//};

//bool biped_ground_validate_state_change(long, struct s_animation_state_change_settings *)
//{
//    mangled_ppc("?biped_ground_validate_state_change@@YA_NJPAUs_animation_state_change_settings@@@Z");
//};

//void biped_ground_render_debug(long)
//{
//    mangled_ppc("?biped_ground_render_debug@@YAXJ@Z");
//};

//bool biped_ground_activate(long)
//{
//    mangled_ppc("?biped_ground_activate@@YA_NJ@Z");
//};

//void biped_ground_deactivate(long)
//{
//    mangled_ppc("?biped_ground_deactivate@@YAXJ@Z");
//};

//bool biped_ground_update(long)
//{
//    mangled_ppc("?biped_ground_update@@YA_NJ@Z");
//};

//void biped_ground_update_ground_fit_normal(long)
//{
//    mangled_ppc("?biped_ground_update_ground_fit_normal@@YAXJ@Z");
//};

//bool biped_ground_update_turning(long, struct s_animation_control_data *)
//{
//    mangled_ppc("?biped_ground_update_turning@@YA_NJPAUs_animation_control_data@@@Z");
//};

//float limit_moving_turn_amount_using_pivot(long, float)
//{
//    mangled_ppc("?limit_moving_turn_amount_using_pivot@@YAMJM@Z");
//};

//void biped_ground_update_turn_radius(long)
//{
//    mangled_ppc("?biped_ground_update_turn_radius@@YAXJ@Z");
//};

//bool biped_ground_update_moving(long, struct s_animation_control_data *, struct s_character_physics_update_input_datum const *, struct s_character_physics_update_output_datum const *)
//{
//    mangled_ppc("?biped_ground_update_moving@@YA_NJPAUs_animation_control_data@@PBUs_character_physics_update_input_datum@@PBUs_character_physics_update_output_datum@@@Z");
//};

//void biped_update_choose_seat_and_state_from_physics_animation_state(long, enum e_physics_animation_state, bool, long, enum e_physics_animation_state, bool, long *, enum e_physics_animation_state *, bool *)
//{
//    mangled_ppc("?biped_update_choose_seat_and_state_from_physics_animation_state@@YAXJW4e_physics_animation_state@@_NJ01PAJPAW41@PA_N@Z");
//};

//public: struct s_animation_gait_settings const * c_animation_manager::get_gait(void) const
//{
//    mangled_ppc("?get_gait@c_animation_manager@@QBAPBUs_animation_gait_settings@@XZ");
//};

//long biped_ground_get_desired_mode(long)
//{
//    mangled_ppc("?biped_ground_get_desired_mode@@YAJJ@Z");
//};

//void biped_landing_animation(long, struct s_animation_control_data *)
//{
//    mangled_ppc("?biped_landing_animation@@YAXJPAUs_animation_control_data@@@Z");
//};

//void biped_slipping_sounds(long, struct s_animation_control_data *)
//{
//    mangled_ppc("?biped_slipping_sounds@@YAXJPAUs_animation_control_data@@@Z");
//};

//char get_biped_state_index_from_animation_manager_state(class c_animation_manager *, enum e_physics_animation_state, long)
//{
//    mangled_ppc("?get_biped_state_index_from_animation_manager_state@@YADPAVc_animation_manager@@W4e_physics_animation_state@@J@Z");
//};

//void biped_try_to_make_footsteps(long)
//{
//    mangled_ppc("?biped_try_to_make_footsteps@@YAXJ@Z");
//};

//bool biped_update_jumping(long)
//{
//    mangled_ppc("?biped_update_jumping@@YA_NJ@Z");
//};

//enum e_motor_program biped_ground_move(long)
//{
//    mangled_ppc("?biped_ground_move@@YA?AW4e_motor_program@@J@Z");
//};

//bool biped_ground_transition_to_airborne(long)
//{
//    mangled_ppc("?biped_ground_transition_to_airborne@@YA_NJ@Z");
//};

