/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool cs_moving(long, long);
// bool cs_running_atom(long);
// bool cs_running_atom_internal(long, short);
// bool cs_running_atom_movement(long);
// bool cs_running_atom_action(long);
// bool cs_running_atom_dialogue(long);
// bool cs_running_atom_type(long, short);
// void cs_fly_to(long, long, bool, long);
// void cs_fly_to2(long, long, bool, long, float);
// void cs_fly_to_and_face(long, long, bool, long, long);
// void cs_fly_to_and_face2(long, long, bool, long, long, float);
// void cs_fly_by(long, long, bool, long);
// void cs_fly_by2(long, long, bool, long, float);
// void cs_go_to(long, long, bool, long);
// void cs_go_to2(long, long, bool, long, float);
// void cs_go_to_position(long, long, bool, union real_point3d const *);
// void cs_go_to_position2(long, long, bool, union real_point3d const *, float);
// void cs_go_by(long, long, bool, long, long);
// void cs_go_by2(long, long, bool, long, long, float);
// void cs_go_by_position(long, long, bool, union real_point3d const *, union real_point3d const *);
// void cs_go_by_position2(long, long, bool, union real_point3d const *, union real_point3d const *, float);
// void cs_go_to_and_face(long, long, bool, long, long);
// void cs_go_to_position_and_face_position(long, long, bool, union real_point3d const *, union real_point3d const *);
// void cs_go_to_and_posture(long, long, bool, long, long);
// void cs_go_to_nearest(long, long, bool, long);
// void cs_approach(long, long, bool, long, float, float, float);
// void cs_approach_player(long, long, bool, float, float, float);
// void cs_move_in_direction(long, long, bool, float, float, float);
// void cs_move_towards(long, long, bool, long);
// void cs_move_towards2(long, long, bool, long, bool);
// void cs_move_towards_point(long, long, bool, long, float);
// void cs_swarm_to(long, long, bool, long, float);
// void cs_swarm_from(long, long, bool, long, float);
// void cs_pause(long, long, bool, float);
// void cs_grenade(long, long, bool, long, short);
// void cs_use_equipment(long, long, bool, float);
// void cs_jump(long, long, bool, float, float);
// void cs_jump_to_point(long, long, bool, float, float);
// void cs_action(long, long, bool, long, short);
// void cs_action_internal(long, long, bool, class c_ai_direction *, short);
// void cs_action_at_object(long, long, bool, long, short);
// void cs_action_at_player(long, long, bool, short);
// void cs_vocalize(long, long, bool, short);
// void cs_die(long, long, bool, short);
// void cs_deploy_turret(long, long, bool, long);
// void cs_go_to_vehicle(long, long, bool, long);
// void cs_go_to_vehicle2(long, long, bool, long, long);
// float ai_scripting_play_sound_internal(long, long, bool, long, long, float, float);
// void cs_play_sound(long, long, bool, long);
// void cs_play_sound2(long, long, bool, long, float);
// void cs_play_sound3(long, long, bool, long, float, float);
// void cs_flying_attach_to_spline(long, long, bool, long);
// void cs_start_custom_animation(long, long, bool, long, long, bool);
// void cs_start_custom_animation_internal(long, long, bool, bool, long, long, bool, long, bool, float, float);
// void cs_start_custom_animation_death(long, long, bool, long, long, bool);
// void cs_start_custom_animation2(long, long, bool, long, long, bool, long);
// void cs_start_custom_animation_death2(long, long, bool, long, long, bool, long);
// void cs_start_looping_custom_animation(long, long, long, long, bool);
// void cs_start_looping_custom_animation2(long, long, long, long, bool, long);
// void cs_play_line(long, long, bool, long);
// void cs_set_style(long, long, long);
// void cs_force_combat_status(long, long, short);
// void cs_enable_targeting(long, long, bool);
// void cs_enable_looking(long, long, bool);
// void cs_enable_moving(long, long, bool);
// void cs_enable_dialogue(long, long, bool);
// void cs_suppress_activity_termination(long, long, bool);
// void cs_suppress_dialogue_global(long, long, bool);
// void cs_look(long, long, bool, long);
// void cs_look_position(long, long, bool, union real_point3d const *);
// void cs_look_player(long, long, bool);
// long cs_find_player_unit(long);
// void cs_look_object(long, long, bool, long);
// void cs_aim(long, long, bool, long);
// void cs_aim_position(long, long, bool, union real_point3d const *);
// void cs_aim_player(long, long, bool);
// void cs_aim_object(long, long, bool, long);
// void cs_face(long, long, bool, long);
// void cs_face_position(long, long, bool, union real_point3d const *);
// void cs_face_object(long, long, bool, long);
// void cs_face_player(long, long, bool);
// void cs_stationary_face(long, long, bool, bool, long);
// void cs_stationary_face_position(long, long, bool, bool, union real_point3d const *);
// void cs_stationary_face_object(long, long, bool, bool, long);
// void cs_stationary_face_player(long, long, bool, bool);
// void cs_shoot_at_target(long, long, bool);
// void cs_shoot_at_target2(long, long, bool, long);
// void cs_shoot_at_point(long, long, bool, long);
// void cs_shoot_at_position(long, long, bool, union real_point3d const *);
// void cs_shoot_secondary_trigger(long, long, bool);
// void cs_lower_weapon(long, long, bool);
// void cs_vehicle_speed(long, long, float);
// void cs_vehicle_speed_instantaneous(long, long, float);
// void cs_boost(long, long, bool);
// void cs_turn_sharpness(long, long, bool, float);
// void cs_enable_pathfinding_failsafe(long, long, bool);
// void cs_set_pathfinding_radius(long, long, float);
// void cs_ignore_obstacles(long, long, bool);
// void cs_approach_stop(long, long);
// void cs_push_stance(long, long, long);
// void cs_crouch(long, long, bool);
// void cs_crouch2(long, long, bool, float);
// void cs_walk(long, long, bool);
// void cs_posture_set(long, long, long, bool);
// void cs_posture_exit(long, long);
// void cs_stow(long, long, bool);
// void cs_teleport_position(long, long, union real_point3d const *, union real_point3d const *);
// void cs_teleport(long, long, long, long);
// void cs_stop_custom_animation(long, long);
// void cs_stop_sound(long, long, long);
// void cs_melee_direction(long, long, bool, long);
// void cs_player_melee(long, long, bool, long);
// void cs_smash_direction(long, long, bool, long);

//bool cs_moving(long, long)
//{
//    mangled_ppc("?cs_moving@@YA_NJJ@Z");
//};

//bool cs_running_atom(long)
//{
//    mangled_ppc("?cs_running_atom@@YA_NJ@Z");
//};

//bool cs_running_atom_internal(long, short)
//{
//    mangled_ppc("?cs_running_atom_internal@@YA_NJF@Z");
//};

//bool cs_running_atom_movement(long)
//{
//    mangled_ppc("?cs_running_atom_movement@@YA_NJ@Z");
//};

//bool cs_running_atom_action(long)
//{
//    mangled_ppc("?cs_running_atom_action@@YA_NJ@Z");
//};

//bool cs_running_atom_dialogue(long)
//{
//    mangled_ppc("?cs_running_atom_dialogue@@YA_NJ@Z");
//};

//bool cs_running_atom_type(long, short)
//{
//    mangled_ppc("?cs_running_atom_type@@YA_NJF@Z");
//};

//void cs_fly_to(long, long, bool, long)
//{
//    mangled_ppc("?cs_fly_to@@YAXJJ_NJ@Z");
//};

//void cs_fly_to2(long, long, bool, long, float)
//{
//    mangled_ppc("?cs_fly_to2@@YAXJJ_NJM@Z");
//};

//void cs_fly_to_and_face(long, long, bool, long, long)
//{
//    mangled_ppc("?cs_fly_to_and_face@@YAXJJ_NJJ@Z");
//};

//void cs_fly_to_and_face2(long, long, bool, long, long, float)
//{
//    mangled_ppc("?cs_fly_to_and_face2@@YAXJJ_NJJM@Z");
//};

//void cs_fly_by(long, long, bool, long)
//{
//    mangled_ppc("?cs_fly_by@@YAXJJ_NJ@Z");
//};

//void cs_fly_by2(long, long, bool, long, float)
//{
//    mangled_ppc("?cs_fly_by2@@YAXJJ_NJM@Z");
//};

//void cs_go_to(long, long, bool, long)
//{
//    mangled_ppc("?cs_go_to@@YAXJJ_NJ@Z");
//};

//void cs_go_to2(long, long, bool, long, float)
//{
//    mangled_ppc("?cs_go_to2@@YAXJJ_NJM@Z");
//};

//void cs_go_to_position(long, long, bool, union real_point3d const *)
//{
//    mangled_ppc("?cs_go_to_position@@YAXJJ_NPBTreal_point3d@@@Z");
//};

//void cs_go_to_position2(long, long, bool, union real_point3d const *, float)
//{
//    mangled_ppc("?cs_go_to_position2@@YAXJJ_NPBTreal_point3d@@M@Z");
//};

//void cs_go_by(long, long, bool, long, long)
//{
//    mangled_ppc("?cs_go_by@@YAXJJ_NJJ@Z");
//};

//void cs_go_by2(long, long, bool, long, long, float)
//{
//    mangled_ppc("?cs_go_by2@@YAXJJ_NJJM@Z");
//};

//void cs_go_by_position(long, long, bool, union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?cs_go_by_position@@YAXJJ_NPBTreal_point3d@@1@Z");
//};

//void cs_go_by_position2(long, long, bool, union real_point3d const *, union real_point3d const *, float)
//{
//    mangled_ppc("?cs_go_by_position2@@YAXJJ_NPBTreal_point3d@@1M@Z");
//};

//void cs_go_to_and_face(long, long, bool, long, long)
//{
//    mangled_ppc("?cs_go_to_and_face@@YAXJJ_NJJ@Z");
//};

//void cs_go_to_position_and_face_position(long, long, bool, union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?cs_go_to_position_and_face_position@@YAXJJ_NPBTreal_point3d@@1@Z");
//};

//void cs_go_to_and_posture(long, long, bool, long, long)
//{
//    mangled_ppc("?cs_go_to_and_posture@@YAXJJ_NJJ@Z");
//};

//void cs_go_to_nearest(long, long, bool, long)
//{
//    mangled_ppc("?cs_go_to_nearest@@YAXJJ_NJ@Z");
//};

//void cs_approach(long, long, bool, long, float, float, float)
//{
//    mangled_ppc("?cs_approach@@YAXJJ_NJMMM@Z");
//};

//void cs_approach_player(long, long, bool, float, float, float)
//{
//    mangled_ppc("?cs_approach_player@@YAXJJ_NMMM@Z");
//};

//void cs_move_in_direction(long, long, bool, float, float, float)
//{
//    mangled_ppc("?cs_move_in_direction@@YAXJJ_NMMM@Z");
//};

//void cs_move_towards(long, long, bool, long)
//{
//    mangled_ppc("?cs_move_towards@@YAXJJ_NJ@Z");
//};

//void cs_move_towards2(long, long, bool, long, bool)
//{
//    mangled_ppc("?cs_move_towards2@@YAXJJ_NJ0@Z");
//};

//void cs_move_towards_point(long, long, bool, long, float)
//{
//    mangled_ppc("?cs_move_towards_point@@YAXJJ_NJM@Z");
//};

//void cs_swarm_to(long, long, bool, long, float)
//{
//    mangled_ppc("?cs_swarm_to@@YAXJJ_NJM@Z");
//};

//void cs_swarm_from(long, long, bool, long, float)
//{
//    mangled_ppc("?cs_swarm_from@@YAXJJ_NJM@Z");
//};

//void cs_pause(long, long, bool, float)
//{
//    mangled_ppc("?cs_pause@@YAXJJ_NM@Z");
//};

//void cs_grenade(long, long, bool, long, short)
//{
//    mangled_ppc("?cs_grenade@@YAXJJ_NJF@Z");
//};

//void cs_use_equipment(long, long, bool, float)
//{
//    mangled_ppc("?cs_use_equipment@@YAXJJ_NM@Z");
//};

//void cs_jump(long, long, bool, float, float)
//{
//    mangled_ppc("?cs_jump@@YAXJJ_NMM@Z");
//};

//void cs_jump_to_point(long, long, bool, float, float)
//{
//    mangled_ppc("?cs_jump_to_point@@YAXJJ_NMM@Z");
//};

//void cs_action(long, long, bool, long, short)
//{
//    mangled_ppc("?cs_action@@YAXJJ_NJF@Z");
//};

//void cs_action_internal(long, long, bool, class c_ai_direction *, short)
//{
//    mangled_ppc("?cs_action_internal@@YAXJJ_NPAVc_ai_direction@@F@Z");
//};

//void cs_action_at_object(long, long, bool, long, short)
//{
//    mangled_ppc("?cs_action_at_object@@YAXJJ_NJF@Z");
//};

//void cs_action_at_player(long, long, bool, short)
//{
//    mangled_ppc("?cs_action_at_player@@YAXJJ_NF@Z");
//};

//void cs_vocalize(long, long, bool, short)
//{
//    mangled_ppc("?cs_vocalize@@YAXJJ_NF@Z");
//};

//void cs_die(long, long, bool, short)
//{
//    mangled_ppc("?cs_die@@YAXJJ_NF@Z");
//};

//void cs_deploy_turret(long, long, bool, long)
//{
//    mangled_ppc("?cs_deploy_turret@@YAXJJ_NJ@Z");
//};

//void cs_go_to_vehicle(long, long, bool, long)
//{
//    mangled_ppc("?cs_go_to_vehicle@@YAXJJ_NJ@Z");
//};

//void cs_go_to_vehicle2(long, long, bool, long, long)
//{
//    mangled_ppc("?cs_go_to_vehicle2@@YAXJJ_NJJ@Z");
//};

//float ai_scripting_play_sound_internal(long, long, bool, long, long, float, float)
//{
//    mangled_ppc("?ai_scripting_play_sound_internal@@YAMJJ_NJJMM@Z");
//};

//void cs_play_sound(long, long, bool, long)
//{
//    mangled_ppc("?cs_play_sound@@YAXJJ_NJ@Z");
//};

//void cs_play_sound2(long, long, bool, long, float)
//{
//    mangled_ppc("?cs_play_sound2@@YAXJJ_NJM@Z");
//};

//void cs_play_sound3(long, long, bool, long, float, float)
//{
//    mangled_ppc("?cs_play_sound3@@YAXJJ_NJMM@Z");
//};

//void cs_flying_attach_to_spline(long, long, bool, long)
//{
//    mangled_ppc("?cs_flying_attach_to_spline@@YAXJJ_NJ@Z");
//};

//void cs_start_custom_animation(long, long, bool, long, long, bool)
//{
//    mangled_ppc("?cs_start_custom_animation@@YAXJJ_NJJ0@Z");
//};

//void cs_start_custom_animation_internal(long, long, bool, bool, long, long, bool, long, bool, float, float)
//{
//    mangled_ppc("?cs_start_custom_animation_internal@@YAXJJ_N0JJ0J0MM@Z");
//};

//void cs_start_custom_animation_death(long, long, bool, long, long, bool)
//{
//    mangled_ppc("?cs_start_custom_animation_death@@YAXJJ_NJJ0@Z");
//};

//void cs_start_custom_animation2(long, long, bool, long, long, bool, long)
//{
//    mangled_ppc("?cs_start_custom_animation2@@YAXJJ_NJJ0J@Z");
//};

//void cs_start_custom_animation_death2(long, long, bool, long, long, bool, long)
//{
//    mangled_ppc("?cs_start_custom_animation_death2@@YAXJJ_NJJ0J@Z");
//};

//void cs_start_looping_custom_animation(long, long, long, long, bool)
//{
//    mangled_ppc("?cs_start_looping_custom_animation@@YAXJJJJ_N@Z");
//};

//void cs_start_looping_custom_animation2(long, long, long, long, bool, long)
//{
//    mangled_ppc("?cs_start_looping_custom_animation2@@YAXJJJJ_NJ@Z");
//};

//void cs_play_line(long, long, bool, long)
//{
//    mangled_ppc("?cs_play_line@@YAXJJ_NJ@Z");
//};

//void cs_set_style(long, long, long)
//{
//    mangled_ppc("?cs_set_style@@YAXJJJ@Z");
//};

//void cs_force_combat_status(long, long, short)
//{
//    mangled_ppc("?cs_force_combat_status@@YAXJJF@Z");
//};

//void cs_enable_targeting(long, long, bool)
//{
//    mangled_ppc("?cs_enable_targeting@@YAXJJ_N@Z");
//};

//void cs_enable_looking(long, long, bool)
//{
//    mangled_ppc("?cs_enable_looking@@YAXJJ_N@Z");
//};

//void cs_enable_moving(long, long, bool)
//{
//    mangled_ppc("?cs_enable_moving@@YAXJJ_N@Z");
//};

//void cs_enable_dialogue(long, long, bool)
//{
//    mangled_ppc("?cs_enable_dialogue@@YAXJJ_N@Z");
//};

//void cs_suppress_activity_termination(long, long, bool)
//{
//    mangled_ppc("?cs_suppress_activity_termination@@YAXJJ_N@Z");
//};

//void cs_suppress_dialogue_global(long, long, bool)
//{
//    mangled_ppc("?cs_suppress_dialogue_global@@YAXJJ_N@Z");
//};

//void cs_look(long, long, bool, long)
//{
//    mangled_ppc("?cs_look@@YAXJJ_NJ@Z");
//};

//void cs_look_position(long, long, bool, union real_point3d const *)
//{
//    mangled_ppc("?cs_look_position@@YAXJJ_NPBTreal_point3d@@@Z");
//};

//void cs_look_player(long, long, bool)
//{
//    mangled_ppc("?cs_look_player@@YAXJJ_N@Z");
//};

//long cs_find_player_unit(long)
//{
//    mangled_ppc("?cs_find_player_unit@@YAJJ@Z");
//};

//void cs_look_object(long, long, bool, long)
//{
//    mangled_ppc("?cs_look_object@@YAXJJ_NJ@Z");
//};

//void cs_aim(long, long, bool, long)
//{
//    mangled_ppc("?cs_aim@@YAXJJ_NJ@Z");
//};

//void cs_aim_position(long, long, bool, union real_point3d const *)
//{
//    mangled_ppc("?cs_aim_position@@YAXJJ_NPBTreal_point3d@@@Z");
//};

//void cs_aim_player(long, long, bool)
//{
//    mangled_ppc("?cs_aim_player@@YAXJJ_N@Z");
//};

//void cs_aim_object(long, long, bool, long)
//{
//    mangled_ppc("?cs_aim_object@@YAXJJ_NJ@Z");
//};

//void cs_face(long, long, bool, long)
//{
//    mangled_ppc("?cs_face@@YAXJJ_NJ@Z");
//};

//void cs_face_position(long, long, bool, union real_point3d const *)
//{
//    mangled_ppc("?cs_face_position@@YAXJJ_NPBTreal_point3d@@@Z");
//};

//void cs_face_object(long, long, bool, long)
//{
//    mangled_ppc("?cs_face_object@@YAXJJ_NJ@Z");
//};

//void cs_face_player(long, long, bool)
//{
//    mangled_ppc("?cs_face_player@@YAXJJ_N@Z");
//};

//void cs_stationary_face(long, long, bool, bool, long)
//{
//    mangled_ppc("?cs_stationary_face@@YAXJJ_N0J@Z");
//};

//void cs_stationary_face_position(long, long, bool, bool, union real_point3d const *)
//{
//    mangled_ppc("?cs_stationary_face_position@@YAXJJ_N0PBTreal_point3d@@@Z");
//};

//void cs_stationary_face_object(long, long, bool, bool, long)
//{
//    mangled_ppc("?cs_stationary_face_object@@YAXJJ_N0J@Z");
//};

//void cs_stationary_face_player(long, long, bool, bool)
//{
//    mangled_ppc("?cs_stationary_face_player@@YAXJJ_N0@Z");
//};

//void cs_shoot_at_target(long, long, bool)
//{
//    mangled_ppc("?cs_shoot_at_target@@YAXJJ_N@Z");
//};

//void cs_shoot_at_target2(long, long, bool, long)
//{
//    mangled_ppc("?cs_shoot_at_target2@@YAXJJ_NJ@Z");
//};

//void cs_shoot_at_point(long, long, bool, long)
//{
//    mangled_ppc("?cs_shoot_at_point@@YAXJJ_NJ@Z");
//};

//void cs_shoot_at_position(long, long, bool, union real_point3d const *)
//{
//    mangled_ppc("?cs_shoot_at_position@@YAXJJ_NPBTreal_point3d@@@Z");
//};

//void cs_shoot_secondary_trigger(long, long, bool)
//{
//    mangled_ppc("?cs_shoot_secondary_trigger@@YAXJJ_N@Z");
//};

//void cs_lower_weapon(long, long, bool)
//{
//    mangled_ppc("?cs_lower_weapon@@YAXJJ_N@Z");
//};

//void cs_vehicle_speed(long, long, float)
//{
//    mangled_ppc("?cs_vehicle_speed@@YAXJJM@Z");
//};

//void cs_vehicle_speed_instantaneous(long, long, float)
//{
//    mangled_ppc("?cs_vehicle_speed_instantaneous@@YAXJJM@Z");
//};

//void cs_boost(long, long, bool)
//{
//    mangled_ppc("?cs_boost@@YAXJJ_N@Z");
//};

//void cs_turn_sharpness(long, long, bool, float)
//{
//    mangled_ppc("?cs_turn_sharpness@@YAXJJ_NM@Z");
//};

//void cs_enable_pathfinding_failsafe(long, long, bool)
//{
//    mangled_ppc("?cs_enable_pathfinding_failsafe@@YAXJJ_N@Z");
//};

//void cs_set_pathfinding_radius(long, long, float)
//{
//    mangled_ppc("?cs_set_pathfinding_radius@@YAXJJM@Z");
//};

//void cs_ignore_obstacles(long, long, bool)
//{
//    mangled_ppc("?cs_ignore_obstacles@@YAXJJ_N@Z");
//};

//void cs_approach_stop(long, long)
//{
//    mangled_ppc("?cs_approach_stop@@YAXJJ@Z");
//};

//void cs_push_stance(long, long, long)
//{
//    mangled_ppc("?cs_push_stance@@YAXJJJ@Z");
//};

//void cs_crouch(long, long, bool)
//{
//    mangled_ppc("?cs_crouch@@YAXJJ_N@Z");
//};

//void cs_crouch2(long, long, bool, float)
//{
//    mangled_ppc("?cs_crouch2@@YAXJJ_NM@Z");
//};

//void cs_walk(long, long, bool)
//{
//    mangled_ppc("?cs_walk@@YAXJJ_N@Z");
//};

//void cs_posture_set(long, long, long, bool)
//{
//    mangled_ppc("?cs_posture_set@@YAXJJJ_N@Z");
//};

//void cs_posture_exit(long, long)
//{
//    mangled_ppc("?cs_posture_exit@@YAXJJ@Z");
//};

//void cs_stow(long, long, bool)
//{
//    mangled_ppc("?cs_stow@@YAXJJ_N@Z");
//};

//void cs_teleport_position(long, long, union real_point3d const *, union real_point3d const *)
//{
//    mangled_ppc("?cs_teleport_position@@YAXJJPBTreal_point3d@@0@Z");
//};

//void cs_teleport(long, long, long, long)
//{
//    mangled_ppc("?cs_teleport@@YAXJJJJ@Z");
//};

//void cs_stop_custom_animation(long, long)
//{
//    mangled_ppc("?cs_stop_custom_animation@@YAXJJ@Z");
//};

//void cs_stop_sound(long, long, long)
//{
//    mangled_ppc("?cs_stop_sound@@YAXJJJ@Z");
//};

//void cs_melee_direction(long, long, bool, long)
//{
//    mangled_ppc("?cs_melee_direction@@YAXJJ_NJ@Z");
//};

//void cs_player_melee(long, long, bool, long)
//{
//    mangled_ppc("?cs_player_melee@@YAXJJ_NJ@Z");
//};

//void cs_smash_direction(long, long, bool, long)
//{
//    mangled_ppc("?cs_smash_direction@@YAXJJ_NJ@Z");
//};

