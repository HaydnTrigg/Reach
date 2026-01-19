/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_83805938; // "except_record_83805938"
// except_record_8380C0B8; // "except_record_8380C0B8"
// except_record_8380D710; // "except_record_8380D710"
// struct obstacles g_obstacles_cache; // "?g_obstacles_cache@@3Uobstacles@@A"

// public: void c_destination_orders::clear(void);
// public: void c_destination_orders::set(enum e_destination_flags);
// public: void c_destination_orders::set(enum e_destination_flags, bool);
// public: bool c_destination_orders::test(enum e_destination_flags) const;
// public: bool c_destination_orders::equals(long, class c_destination_orders *);
// public: bool c_destination_orders::ground_destination(void);
// public: bool c_destination_orders::air_destination(void);
// public: bool c_destination_orders::is_to_prop(long) const;
// public: bool c_destination_orders::is_to_object(long);
// public: bool c_destination_orders::to_raw(long, class c_path_destination *, enum e_pathfinding_mode *);
// public: bool c_destination_orders::to_point(class c_ai_point3d const *, class c_sector_ref const *);
// public: bool c_destination_orders::to_point(union real_point3d const *, class c_sector_ref const *);
// public: bool c_destination_orders::to_air_point(class c_ai_point3d const *);
// public: bool c_destination_orders::to_air_point(union real_point3d const *);
// public: bool c_destination_orders::to_firing_position(struct s_firing_position_ref);
// public: bool c_destination_orders::to_prop(long);
// public: bool c_destination_orders::bunker(long, class c_ai_point3d const *, union vector3d const *, enum e_bunker_direction, enum e_bunker_height, enum e_bunker_state);
// public: bool c_destination_orders::posture(long, class c_ai_point3d const *, union vector3d const *, long);
// public: bool c_destination_orders::perch(long, union vector3d const *);
// public: bool c_destination_orders::land(long);
// void actor_path_get_current_vector(long, union vector3d *);
// bool actor_advance_path(long);
// void path_step_finish(long, short);
// void path_step_update(long);
// void actor_destination_update(long);
// bool actor_test_destination(long);
// bool actor_test_destination_internal(long, float);
// void actor_get_destination(long, union real_point3d *);
// bool actor_set_persistent_movement_override(long, short, union real_point3d const *, union vector3d const *, float, short);
// void actor_persistent_movement_override_clear(long, short);
// bool actor_move_freeze(long, short);
// void actor_move_update(long);
// bool actor_persistent_override_get_movement(long, union vector3d *);
// void actor_movement_update_posing(long);
// void actor_weapon_crouch(long);
// void actor_moving_fix_throttle(long, union vector3d const *, union vector3d *);
// bool actor_move_halt(long);
// bool actor_move(long, class c_destination_orders *);
// bool actor_move_calculate_facing_alignment_parameters(long, bool *, union vector3d const *, union vector3d *, union vector3d *, union vector3d *, union vector3d *, float *);
// void actor_reset_stopping_parameters(long);
// void actor_reset_stopping_state(long);
// void actor_moving_calculate_stopping_distance(long);
// long actor_moving_get_direction_change_stationary_ticks(long, union vector3d *, union vector3d *, bool);
// bool actor_move(long, class c_destination_orders *, struct path_state *);
// enum c_character_physics_component::e_mode actor_get_physics_mode(long);
// enum e_ai_posture actor_get_posture(long);
// bool actor_move_animation_busy(long);
// bool actor_move_try_evasion_vector(long, union vector3d const *, float, float, bool *, float *);
// bool actor_move_find_evasion_direction(long, union vector3d const *, union vector3d const *, short *, float, bool *);
// bool actor_aim_jump(long, bool, bool, float, union real_point3d const *, float *, union vector3d *);
// bool actor_aim_ballistic_and_succeed(float, float, struct s_location, union real_point3d const *, union real_point3d const *, bool, union vector3d *, float *, float *, float *);
// bool actor_impulse_available(long, long);
// bool actor_impulse_submit(long, long, union vector3d const *);
// bool actor_impulse_submit(long, long, bool, union vector3d const *);
// enum e_movement_result actor_move_calculate_climbing_movement(long, union vector3d const *, union vector3d *, union vector3d *, short);
// enum e_actor_movement_type behaviour_get_default_movement_type(long);
// float actor_get_max_jump_speed(long, bool *);
// bool actor_test_jump(long, union real_point3d const *, union real_point3d const *);
// bool actor_test_jump(long, union real_point3d *);
// bool actor_moving_jump(long, union real_point3d const *, bool);
// bool actor_moving_jump(long, class c_hint_ref *, bool, char, class c_ai_point3d const *, class c_ai_point3d const *, class c_sector_ref, bool);
// bool actor_path_find_jump(long, float *, union vector3d *);
// void actor_move_calculate_free(long, bool, union vector3d const *, union vector3d const *, union vector3d *);
// bool actor_path_has_path(long);
// bool actor_path_executing(long);
// void path_result_reset(long, bool);
// void actor_path_clear(long);
// bool actor_path_finished(long);
// bool actor_path_failed(long);
// void actor_set_arrived(long, bool);
// bool actor_path_end_is_arrival(long);
// void path_finish(long, bool);
// float actor_path_distance_remaining(long, short);
// float actor_path_distance_remaining(long);
// float actor_point_distance_to_path(long, union real_point3d const *, short *, float *);
// short actor_get_next_hint_step(long);
// bool actor_path_step_get_vector(long, short, union vector3d *);
// void actor_check_player_in_front(long, struct path_state *);
// bool actor_path_refresh(long, bool, struct path_state *);
// void actor_move_to_firing_position_update_status(long, struct s_firing_position_ref);
// void path_fail(long);
// void actor_path_input_new(long, struct path_input *, bool);
// bool actor_special_movement_new(long, struct special_movement *);
// void actor_penalty_cache_new(long, struct s_hint_penalty_cache *);
// bool hint_penalty_compare(long, long, void const *);
// bool actor_moving_vehicle_test_destination(long, long, union real_point3d *, float, bool, bool *, bool *, union vector3d *);
// float actor_moving_vehicle_round_turn(long, long, short, union real_point2d *, union real_point2d const *, union vector2d *, struct obstacles const *);
// bool steering_control2d(long, long, union vector3d const *, float, float, float, float, float *, union vector3d *);
// float deceleration_obstacle_attenuation(long, long, float, float, float, float, union vector2d const *, union real_point3d *, float *, enum e_deceleration_obstacle_results *);
// float rays_nearest_distance(union real_point2d const *, union vector2d const *, union real_point2d const *, union vector2d const *, bool *, float *, float *);
// float actor_moving_vehicle_desired_speed(long, long, union real_point2d const *, union vector2d const *, union vector2d const *, union vector2d const *, union vector2d const *, float, bool);
// long actor_movement_type_get_string_id(long, enum e_actor_movement_type);
// long actor_old_movement_type_get_string_id(short);
// void actor_resolve_movement_type(long);
// void actor_clear_movement_mapping(struct actor_movement_mapping *);
// bool actor_movement_mapping_valid(struct actor_movement_mapping const *);
// struct actor_movement_mapping * actor_get_movement_mapping(long);
// bool actor_select_movement_mapping(long, long, struct actor_movement_mapping *);
// public: c_character_runtime_properties<class c_character_idle_properties_internal>::c_character_runtime_properties<class c_character_idle_properties_internal>(void);
// public: bool c_flags_no_init<enum e_destination_flags, unsigned short, 10, struct s_default_enum_string_resolver>::test(enum e_destination_flags) const;
// public: void c_flags_no_init<enum e_destination_flags, unsigned short, 10, struct s_default_enum_string_resolver>::set(enum e_destination_flags, bool);
// public: bool c_flags_no_init<enum e_destination_flags, unsigned short, 10, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_destination_flags, unsigned short, 10, struct s_default_enum_string_resolver> const &) const;
// void actor_get_character_definition_properties<class c_character_idle_properties_internal, 372>(long, class c_character_runtime_properties<class c_character_idle_properties_internal> &);
// public: static bool c_flags_no_init<enum e_destination_flags, unsigned short, 10, struct s_default_enum_string_resolver>::valid_bit(enum e_destination_flags);
// private: static unsigned short c_flags_no_init<enum e_destination_flags, unsigned short, 10, struct s_default_enum_string_resolver>::flag_size_type(enum e_destination_flags);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_idle_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_idle_properties_internal> &);
// class c_character_idle_properties_internal * character_definition_properties_get_direct<class c_character_idle_properties_internal, 372>(long, class c_stimulus_flags const *);
// struct s_tag_block * character_definition_property_block_get<372>(long, class c_stimulus_flags const *);
// public: struct pathfinding_data const * c_hint_ref::pathfinding_data(void);

//public: void c_destination_orders::clear(void)
//{
//    mangled_ppc("?clear@c_destination_orders@@QAAXXZ");
//};

//public: void c_destination_orders::set(enum e_destination_flags)
//{
//    mangled_ppc("?set@c_destination_orders@@QAAXW4e_destination_flags@@@Z");
//};

//public: void c_destination_orders::set(enum e_destination_flags, bool)
//{
//    mangled_ppc("?set@c_destination_orders@@QAAXW4e_destination_flags@@_N@Z");
//};

//public: bool c_destination_orders::test(enum e_destination_flags) const
//{
//    mangled_ppc("?test@c_destination_orders@@QBA_NW4e_destination_flags@@@Z");
//};

//public: bool c_destination_orders::equals(long, class c_destination_orders *)
//{
//    mangled_ppc("?equals@c_destination_orders@@QAA_NJPAV1@@Z");
//};

//public: bool c_destination_orders::ground_destination(void)
//{
//    mangled_ppc("?ground_destination@c_destination_orders@@QAA_NXZ");
//};

//public: bool c_destination_orders::air_destination(void)
//{
//    mangled_ppc("?air_destination@c_destination_orders@@QAA_NXZ");
//};

//public: bool c_destination_orders::is_to_prop(long) const
//{
//    mangled_ppc("?is_to_prop@c_destination_orders@@QBA_NJ@Z");
//};

//public: bool c_destination_orders::is_to_object(long)
//{
//    mangled_ppc("?is_to_object@c_destination_orders@@QAA_NJ@Z");
//};

//public: bool c_destination_orders::to_raw(long, class c_path_destination *, enum e_pathfinding_mode *)
//{
//    mangled_ppc("?to_raw@c_destination_orders@@QAA_NJPAVc_path_destination@@PAW4e_pathfinding_mode@@@Z");
//};

//public: bool c_destination_orders::to_point(class c_ai_point3d const *, class c_sector_ref const *)
//{
//    mangled_ppc("?to_point@c_destination_orders@@QAA_NPBVc_ai_point3d@@PBVc_sector_ref@@@Z");
//};

//public: bool c_destination_orders::to_point(union real_point3d const *, class c_sector_ref const *)
//{
//    mangled_ppc("?to_point@c_destination_orders@@QAA_NPBTreal_point3d@@PBVc_sector_ref@@@Z");
//};

//public: bool c_destination_orders::to_air_point(class c_ai_point3d const *)
//{
//    mangled_ppc("?to_air_point@c_destination_orders@@QAA_NPBVc_ai_point3d@@@Z");
//};

//public: bool c_destination_orders::to_air_point(union real_point3d const *)
//{
//    mangled_ppc("?to_air_point@c_destination_orders@@QAA_NPBTreal_point3d@@@Z");
//};

//public: bool c_destination_orders::to_firing_position(struct s_firing_position_ref)
//{
//    mangled_ppc("?to_firing_position@c_destination_orders@@QAA_NUs_firing_position_ref@@@Z");
//};

//public: bool c_destination_orders::to_prop(long)
//{
//    mangled_ppc("?to_prop@c_destination_orders@@QAA_NJ@Z");
//};

//public: bool c_destination_orders::bunker(long, class c_ai_point3d const *, union vector3d const *, enum e_bunker_direction, enum e_bunker_height, enum e_bunker_state)
//{
//    mangled_ppc("?bunker@c_destination_orders@@QAA_NJPBVc_ai_point3d@@PBTvector3d@@W4e_bunker_direction@@W4e_bunker_height@@W4e_bunker_state@@@Z");
//};

//public: bool c_destination_orders::posture(long, class c_ai_point3d const *, union vector3d const *, long)
//{
//    mangled_ppc("?posture@c_destination_orders@@QAA_NJPBVc_ai_point3d@@PBTvector3d@@J@Z");
//};

//public: bool c_destination_orders::perch(long, union vector3d const *)
//{
//    mangled_ppc("?perch@c_destination_orders@@QAA_NJPBTvector3d@@@Z");
//};

//public: bool c_destination_orders::land(long)
//{
//    mangled_ppc("?land@c_destination_orders@@QAA_NJ@Z");
//};

//void actor_path_get_current_vector(long, union vector3d *)
//{
//    mangled_ppc("?actor_path_get_current_vector@@YAXJPATvector3d@@@Z");
//};

//bool actor_advance_path(long)
//{
//    mangled_ppc("?actor_advance_path@@YA_NJ@Z");
//};

//void path_step_finish(long, short)
//{
//    mangled_ppc("?path_step_finish@@YAXJF@Z");
//};

//void path_step_update(long)
//{
//    mangled_ppc("?path_step_update@@YAXJ@Z");
//};

//void actor_destination_update(long)
//{
//    mangled_ppc("?actor_destination_update@@YAXJ@Z");
//};

//bool actor_test_destination(long)
//{
//    mangled_ppc("?actor_test_destination@@YA_NJ@Z");
//};

//bool actor_test_destination_internal(long, float)
//{
//    mangled_ppc("?actor_test_destination_internal@@YA_NJM@Z");
//};

//void actor_get_destination(long, union real_point3d *)
//{
//    mangled_ppc("?actor_get_destination@@YAXJPATreal_point3d@@@Z");
//};

//bool actor_set_persistent_movement_override(long, short, union real_point3d const *, union vector3d const *, float, short)
//{
//    mangled_ppc("?actor_set_persistent_movement_override@@YA_NJFPBTreal_point3d@@PBTvector3d@@MF@Z");
//};

//void actor_persistent_movement_override_clear(long, short)
//{
//    mangled_ppc("?actor_persistent_movement_override_clear@@YAXJF@Z");
//};

//bool actor_move_freeze(long, short)
//{
//    mangled_ppc("?actor_move_freeze@@YA_NJF@Z");
//};

//void actor_move_update(long)
//{
//    mangled_ppc("?actor_move_update@@YAXJ@Z");
//};

//bool actor_persistent_override_get_movement(long, union vector3d *)
//{
//    mangled_ppc("?actor_persistent_override_get_movement@@YA_NJPATvector3d@@@Z");
//};

//void actor_movement_update_posing(long)
//{
//    mangled_ppc("?actor_movement_update_posing@@YAXJ@Z");
//};

//void actor_weapon_crouch(long)
//{
//    mangled_ppc("?actor_weapon_crouch@@YAXJ@Z");
//};

//void actor_moving_fix_throttle(long, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?actor_moving_fix_throttle@@YAXJPBTvector3d@@PAT1@@Z");
//};

//bool actor_move_halt(long)
//{
//    mangled_ppc("?actor_move_halt@@YA_NJ@Z");
//};

//bool actor_move(long, class c_destination_orders *)
//{
//    mangled_ppc("?actor_move@@YA_NJPAVc_destination_orders@@@Z");
//};

//bool actor_move_calculate_facing_alignment_parameters(long, bool *, union vector3d const *, union vector3d *, union vector3d *, union vector3d *, union vector3d *, float *)
//{
//    mangled_ppc("?actor_move_calculate_facing_alignment_parameters@@YA_NJPA_NPBTvector3d@@PAT1@222PAM@Z");
//};

//void actor_reset_stopping_parameters(long)
//{
//    mangled_ppc("?actor_reset_stopping_parameters@@YAXJ@Z");
//};

//void actor_reset_stopping_state(long)
//{
//    mangled_ppc("?actor_reset_stopping_state@@YAXJ@Z");
//};

//void actor_moving_calculate_stopping_distance(long)
//{
//    mangled_ppc("?actor_moving_calculate_stopping_distance@@YAXJ@Z");
//};

//long actor_moving_get_direction_change_stationary_ticks(long, union vector3d *, union vector3d *, bool)
//{
//    mangled_ppc("?actor_moving_get_direction_change_stationary_ticks@@YAJJPATvector3d@@0_N@Z");
//};

//bool actor_move(long, class c_destination_orders *, struct path_state *)
//{
//    mangled_ppc("?actor_move@@YA_NJPAVc_destination_orders@@PAUpath_state@@@Z");
//};

//enum c_character_physics_component::e_mode actor_get_physics_mode(long)
//{
//    mangled_ppc("?actor_get_physics_mode@@YA?AW4e_mode@c_character_physics_component@@J@Z");
//};

//enum e_ai_posture actor_get_posture(long)
//{
//    mangled_ppc("?actor_get_posture@@YA?AW4e_ai_posture@@J@Z");
//};

//bool actor_move_animation_busy(long)
//{
//    mangled_ppc("?actor_move_animation_busy@@YA_NJ@Z");
//};

//bool actor_move_try_evasion_vector(long, union vector3d const *, float, float, bool *, float *)
//{
//    mangled_ppc("?actor_move_try_evasion_vector@@YA_NJPBTvector3d@@MMPA_NPAM@Z");
//};

//bool actor_move_find_evasion_direction(long, union vector3d const *, union vector3d const *, short *, float, bool *)
//{
//    mangled_ppc("?actor_move_find_evasion_direction@@YA_NJPBTvector3d@@0PAFMPA_N@Z");
//};

//bool actor_aim_jump(long, bool, bool, float, union real_point3d const *, float *, union vector3d *)
//{
//    mangled_ppc("?actor_aim_jump@@YA_NJ_N0MPBTreal_point3d@@PAMPATvector3d@@@Z");
//};

//bool actor_aim_ballistic_and_succeed(float, float, struct s_location, union real_point3d const *, union real_point3d const *, bool, union vector3d *, float *, float *, float *)
//{
//    mangled_ppc("?actor_aim_ballistic_and_succeed@@YA_NMMUs_location@@PBTreal_point3d@@1_NPATvector3d@@PAM44@Z");
//};

//bool actor_impulse_available(long, long)
//{
//    mangled_ppc("?actor_impulse_available@@YA_NJJ@Z");
//};

//bool actor_impulse_submit(long, long, union vector3d const *)
//{
//    mangled_ppc("?actor_impulse_submit@@YA_NJJPBTvector3d@@@Z");
//};

//bool actor_impulse_submit(long, long, bool, union vector3d const *)
//{
//    mangled_ppc("?actor_impulse_submit@@YA_NJJ_NPBTvector3d@@@Z");
//};

//enum e_movement_result actor_move_calculate_climbing_movement(long, union vector3d const *, union vector3d *, union vector3d *, short)
//{
//    mangled_ppc("?actor_move_calculate_climbing_movement@@YA?AW4e_movement_result@@JPBTvector3d@@PAT2@1F@Z");
//};

//enum e_actor_movement_type behaviour_get_default_movement_type(long)
//{
//    mangled_ppc("?behaviour_get_default_movement_type@@YA?AW4e_actor_movement_type@@J@Z");
//};

//float actor_get_max_jump_speed(long, bool *)
//{
//    mangled_ppc("?actor_get_max_jump_speed@@YAMJPA_N@Z");
//};

//bool actor_test_jump(long, union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?actor_test_jump@@YA_NJPBTreal_point3d@@0@Z");
//};

//bool actor_test_jump(long, union real_point3d *)
//{
//    mangled_ppc("?actor_test_jump@@YA_NJPATreal_point3d@@@Z");
//};

//bool actor_moving_jump(long, union real_point3d const *, bool)
//{
//    mangled_ppc("?actor_moving_jump@@YA_NJPBTreal_point3d@@_N@Z");
//};

//bool actor_moving_jump(long, class c_hint_ref *, bool, char, class c_ai_point3d const *, class c_ai_point3d const *, class c_sector_ref, bool)
//{
//    mangled_ppc("?actor_moving_jump@@YA_NJPAVc_hint_ref@@_NDPBVc_ai_point3d@@2Vc_sector_ref@@1@Z");
//};

//bool actor_path_find_jump(long, float *, union vector3d *)
//{
//    mangled_ppc("?actor_path_find_jump@@YA_NJPAMPATvector3d@@@Z");
//};

//void actor_move_calculate_free(long, bool, union vector3d const *, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?actor_move_calculate_free@@YAXJ_NPBTvector3d@@1PAT1@@Z");
//};

//bool actor_path_has_path(long)
//{
//    mangled_ppc("?actor_path_has_path@@YA_NJ@Z");
//};

//bool actor_path_executing(long)
//{
//    mangled_ppc("?actor_path_executing@@YA_NJ@Z");
//};

//void path_result_reset(long, bool)
//{
//    mangled_ppc("?path_result_reset@@YAXJ_N@Z");
//};

//void actor_path_clear(long)
//{
//    mangled_ppc("?actor_path_clear@@YAXJ@Z");
//};

//bool actor_path_finished(long)
//{
//    mangled_ppc("?actor_path_finished@@YA_NJ@Z");
//};

//bool actor_path_failed(long)
//{
//    mangled_ppc("?actor_path_failed@@YA_NJ@Z");
//};

//void actor_set_arrived(long, bool)
//{
//    mangled_ppc("?actor_set_arrived@@YAXJ_N@Z");
//};

//bool actor_path_end_is_arrival(long)
//{
//    mangled_ppc("?actor_path_end_is_arrival@@YA_NJ@Z");
//};

//void path_finish(long, bool)
//{
//    mangled_ppc("?path_finish@@YAXJ_N@Z");
//};

//float actor_path_distance_remaining(long, short)
//{
//    mangled_ppc("?actor_path_distance_remaining@@YAMJF@Z");
//};

//float actor_path_distance_remaining(long)
//{
//    mangled_ppc("?actor_path_distance_remaining@@YAMJ@Z");
//};

//float actor_point_distance_to_path(long, union real_point3d const *, short *, float *)
//{
//    mangled_ppc("?actor_point_distance_to_path@@YAMJPBTreal_point3d@@PAFPAM@Z");
//};

//short actor_get_next_hint_step(long)
//{
//    mangled_ppc("?actor_get_next_hint_step@@YAFJ@Z");
//};

//bool actor_path_step_get_vector(long, short, union vector3d *)
//{
//    mangled_ppc("?actor_path_step_get_vector@@YA_NJFPATvector3d@@@Z");
//};

//void actor_check_player_in_front(long, struct path_state *)
//{
//    mangled_ppc("?actor_check_player_in_front@@YAXJPAUpath_state@@@Z");
//};

//bool actor_path_refresh(long, bool, struct path_state *)
//{
//    mangled_ppc("?actor_path_refresh@@YA_NJ_NPAUpath_state@@@Z");
//};

//void actor_move_to_firing_position_update_status(long, struct s_firing_position_ref)
//{
//    mangled_ppc("?actor_move_to_firing_position_update_status@@YAXJUs_firing_position_ref@@@Z");
//};

//void path_fail(long)
//{
//    mangled_ppc("?path_fail@@YAXJ@Z");
//};

//void actor_path_input_new(long, struct path_input *, bool)
//{
//    mangled_ppc("?actor_path_input_new@@YAXJPAUpath_input@@_N@Z");
//};

//bool actor_special_movement_new(long, struct special_movement *)
//{
//    mangled_ppc("?actor_special_movement_new@@YA_NJPAUspecial_movement@@@Z");
//};

//void actor_penalty_cache_new(long, struct s_hint_penalty_cache *)
//{
//    mangled_ppc("?actor_penalty_cache_new@@YAXJPAUs_hint_penalty_cache@@@Z");
//};

//bool hint_penalty_compare(long, long, void const *)
//{
//    mangled_ppc("?hint_penalty_compare@@YA_NJJPBX@Z");
//};

//bool actor_moving_vehicle_test_destination(long, long, union real_point3d *, float, bool, bool *, bool *, union vector3d *)
//{
//    mangled_ppc("?actor_moving_vehicle_test_destination@@YA_NJJPATreal_point3d@@M_NPA_N2PATvector3d@@@Z");
//};

//float actor_moving_vehicle_round_turn(long, long, short, union real_point2d *, union real_point2d const *, union vector2d *, struct obstacles const *)
//{
//    mangled_ppc("?actor_moving_vehicle_round_turn@@YAMJJFPATreal_point2d@@PBT1@PATvector2d@@PBUobstacles@@@Z");
//};

//bool steering_control2d(long, long, union vector3d const *, float, float, float, float, float *, union vector3d *)
//{
//    mangled_ppc("?steering_control2d@@YA_NJJPBTvector3d@@MMMMPAMPAT1@@Z");
//};

//float deceleration_obstacle_attenuation(long, long, float, float, float, float, union vector2d const *, union real_point3d *, float *, enum e_deceleration_obstacle_results *)
//{
//    mangled_ppc("?deceleration_obstacle_attenuation@@YAMJJMMMMPBTvector2d@@PATreal_point3d@@PAMPAW4e_deceleration_obstacle_results@@@Z");
//};

//float rays_nearest_distance(union real_point2d const *, union vector2d const *, union real_point2d const *, union vector2d const *, bool *, float *, float *)
//{
//    mangled_ppc("?rays_nearest_distance@@YAMPBTreal_point2d@@PBTvector2d@@01PA_NPAM3@Z");
//};

//float actor_moving_vehicle_desired_speed(long, long, union real_point2d const *, union vector2d const *, union vector2d const *, union vector2d const *, union vector2d const *, float, bool)
//{
//    mangled_ppc("?actor_moving_vehicle_desired_speed@@YAMJJPBTreal_point2d@@PBTvector2d@@111M_N@Z");
//};

//long actor_movement_type_get_string_id(long, enum e_actor_movement_type)
//{
//    mangled_ppc("?actor_movement_type_get_string_id@@YAJJW4e_actor_movement_type@@@Z");
//};

//long actor_old_movement_type_get_string_id(short)
//{
//    mangled_ppc("?actor_old_movement_type_get_string_id@@YAJF@Z");
//};

//void actor_resolve_movement_type(long)
//{
//    mangled_ppc("?actor_resolve_movement_type@@YAXJ@Z");
//};

//void actor_clear_movement_mapping(struct actor_movement_mapping *)
//{
//    mangled_ppc("?actor_clear_movement_mapping@@YAXPAUactor_movement_mapping@@@Z");
//};

//bool actor_movement_mapping_valid(struct actor_movement_mapping const *)
//{
//    mangled_ppc("?actor_movement_mapping_valid@@YA_NPBUactor_movement_mapping@@@Z");
//};

//struct actor_movement_mapping * actor_get_movement_mapping(long)
//{
//    mangled_ppc("?actor_get_movement_mapping@@YAPAUactor_movement_mapping@@J@Z");
//};

//bool actor_select_movement_mapping(long, long, struct actor_movement_mapping *)
//{
//    mangled_ppc("?actor_select_movement_mapping@@YA_NJJPAUactor_movement_mapping@@@Z");
//};

//public: c_character_runtime_properties<class c_character_idle_properties_internal>::c_character_runtime_properties<class c_character_idle_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_idle_properties_internal@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_destination_flags, unsigned short, 10, struct s_default_enum_string_resolver>::test(enum e_destination_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_destination_flags@@G$09Us_default_enum_string_resolver@@@@QBA_NW4e_destination_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_destination_flags, unsigned short, 10, struct s_default_enum_string_resolver>::set(enum e_destination_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_destination_flags@@G$09Us_default_enum_string_resolver@@@@QAAXW4e_destination_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_destination_flags, unsigned short, 10, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_destination_flags, unsigned short, 10, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@W4e_destination_flags@@G$09Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//void actor_get_character_definition_properties<class c_character_idle_properties_internal, 372>(long, class c_character_runtime_properties<class c_character_idle_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_idle_properties_internal@@$0BHE@@@YAXJAAV?$c_character_runtime_properties@Vc_character_idle_properties_internal@@@@@Z");
//};

//public: static bool c_flags_no_init<enum e_destination_flags, unsigned short, 10, struct s_default_enum_string_resolver>::valid_bit(enum e_destination_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_destination_flags@@G$09Us_default_enum_string_resolver@@@@SA_NW4e_destination_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_destination_flags, unsigned short, 10, struct s_default_enum_string_resolver>::flag_size_type(enum e_destination_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_destination_flags@@G$09Us_default_enum_string_resolver@@@@CAGW4e_destination_flags@@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_idle_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_idle_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_idle_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_idle_properties_internal@@@@@Z");
//};

//class c_character_idle_properties_internal * character_definition_properties_get_direct<class c_character_idle_properties_internal, 372>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_idle_properties_internal@@$0BHE@@@YAPAVc_character_idle_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//struct s_tag_block * character_definition_property_block_get<372>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0BHE@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//public: struct pathfinding_data const * c_hint_ref::pathfinding_data(void)
//{
//    mangled_ppc("?pathfinding_data@c_hint_ref@@QAAPBU0@XZ");
//};

