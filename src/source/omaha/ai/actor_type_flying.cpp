/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_83971578; // "except_record_83971578"
// struct child_entry *behavior_flying_combat_children; // "?behavior_flying_combat_children@@3PAUchild_entry@@A"
// struct child_entry *behavior_flying_root_children; // "?behavior_flying_root_children@@3PAUchild_entry@@A"
// class Behavior_impulse flying_dodge_impulse; // "?flying_dodge_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior flying_idle_behavior; // "?flying_idle_behavior@@3VPrimitive_behavior@@A"
// class Primitive_behavior flying_cover_behavior; // "?flying_cover_behavior@@3VPrimitive_behavior@@A"
// class Primitive_behavior flying_evade_behavior; // "?flying_evade_behavior@@3VPrimitive_behavior@@A"
// class Primitive_behavior flying_approach_behavior; // "?flying_approach_behavior@@3VPrimitive_behavior@@A"
// class Primitive_behavior flying_strafe_behavior; // "?flying_strafe_behavior@@3VPrimitive_behavior@@A"
// class Primitive_behavior flying_tail_behavior; // "?flying_tail_behavior@@3VPrimitive_behavior@@A"
// class Primitive_behavior flying_retreat_behavior; // "?flying_retreat_behavior@@3VPrimitive_behavior@@A"
// class Mutex_group flying_combat_behavior; // "?flying_combat_behavior@@3VMutex_group@@A"
// class Mutex_group flying_root_behavior; // "?flying_root_behavior@@3VMutex_group@@A"

// void behavior_flying_get_movement_properties(long, class c_character_runtime_properties<class c_character_flying_movement_properties_internal> &);
// void actor_flying_set_default_movement_properties(class c_character_flying_movement_properties_internal *);
// bool actor_flying_compute_spline_approach_target(long, union real_point3d *);
// float actor_flying_estimate_max_speed(long);
// bool actor_flying_get_bounding_volume(long, class c_character_flying_movement_properties_internal const *, struct s_flying_volume *);
// void actor_flying_handle_task_change(long);
// void actor_flying_reset_bogey_timer(long);
// short behavior_flying_idle_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_flying_idle_next(long, class c_behavior_state *, class c_behavior_state *);
// short behavior_flying_cover_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_flying_cover_get_desire_helper(long);
// bool flying_object_is_behind_target_object(long, long);
// bool flying_actor_is_aggressive(long);
// short behavior_flying_cover_next(long, class c_behavior_state *, class c_behavior_state *);
// short actor_flying_has_spline(long);
// short behavior_flying_evade_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool flying_target_is_flying(long);
// short behavior_flying_evade_next(long, class c_behavior_state *, class c_behavior_state *);
// bool flying_actor_task_kungfu_disallowed(long);
// short behavior_flying_approach_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool flying_point_in_bounding_volume(union real_point3d const *, struct s_flying_volume const *, float);
// short behavior_flying_approach_next(long, class c_behavior_state *, class c_behavior_state *);
// bool flying_compute_ray_tail_cone_scores(long, long, float *, float *);
// void flying_store_target_tail_cone(long, long, union real_point3d const *, union vector3d const *, float, float, float, struct s_flying_tail_cone_evaluation *const);
// void flying_clear_target_tail_cone(long);
// float flying_compute_ray_tail_cone_score(struct s_flying_tail_cone_evaluation *const, union real_point3d const *, union vector3d const *, float, float, float, union real_point3d const *, union vector3d const *);
// float flying_compute_point_tail_cone_score(union real_point3d const *, union vector3d const *, float, float, float, union real_point3d const *);
// float flying_compute_preferred_tail_distance(float, float);
// float flying_compute_ray_tail_cone_distance_score(union real_point3d const *, union real_point3d const *, float, float);
// float flying_compute_ray_tail_cone_score_at_plane(enum e_flying_tail_cone_location, struct s_flying_tail_cone_evaluation *const, union real_point3d const *, union vector3d const *, float, float, float, float, union real_point3d const *, union vector3d const *);
// void behavior_flying_evade_input_setup(struct s_behavior_input *, long);
// short behavior_flying_strafe_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_flying_strafe_next(long, class c_behavior_state *, class c_behavior_state *);
// short behavior_flying_tail_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_flying_tail_next(long, class c_behavior_state *, class c_behavior_state *);
// short behavior_flying_retreat_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_flying_retreat_next(long, class c_behavior_state *, class c_behavior_state *);
// short behavior_flying_combat_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_flying_combat_next(long, class c_behavior_state *, class c_behavior_state *);
// short behavior_flying_root_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_flying_root_next(long, class c_behavior_state *, class c_behavior_state *);
// public: c_enum<enum e_flying_bounding_volume_type, long, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_flying_bounding_volume_type, long, 0, 2, struct s_default_enum_string_resolver>(enum e_flying_bounding_volume_type);
// bool behavior_flying_idle_activate(long, class c_behavior_state *);
// bool behavior_flying_idle_perform(long, class c_behavior_state *);
// bool flying_idle_destination_reselect(long, struct s_flying_volume const *, class c_character_flying_movement_properties_internal const *);
// bool flying_select_bounding_volume(long, class c_character_flying_movement_properties_internal const *, bool);
// long flying_find_closest_player(struct s_task const *, long);
// void flying_update_shooting_state(long, class c_character_flying_movement_properties_internal const *);
// bool flying_select_destination(long, long, class c_behavior_state const *, struct s_flying_volume const *, class c_character_flying_movement_properties_internal const *, union real_point3d *);
// void flying_store_movement_vector(long, union vector3d *, float, short);
// void flying_clear_movement_vectors(long);
// bool flying_compute_bounding_volume_avoidance_vector(long, struct s_flying_volume const *, class c_character_flying_movement_properties_internal const *, union vector3d *);
// bool flying_compute_zone_area_volume_avoidance_vector(long, union real_point2d const *, long, float, float, class c_character_flying_movement_properties_internal const *, union vector3d *);
// bool flying_compute_sphere_volume_avoidance_vector(long, union real_point3d const *, float, class c_character_flying_movement_properties_internal const *, union vector3d *);
// void flying_movement_vector_clip_to_volume(struct s_flying_volume const *, union real_point3d const *, union real_point3d *, float);
// void behavior_flying_idle_control(long, class c_behavior_state *);
// bool behavior_flying_cover_activate(long, class c_behavior_state *);
// void behavior_flying_cover_deactivate(long, class c_behavior_state *);
// bool behavior_flying_cover_perform(long, class c_behavior_state *);
// void behavior_flying_compute_cover_reselect_timer(class c_behavior_state *, class c_character_flying_movement_properties_internal const *);
// void behavior_flying_compute_cover_heading(long, class c_behavior_state *, class c_character_flying_movement_properties_internal const *);
// void flying_cover_compute_volume_center(union real_point3d *, struct s_avoidance_volume const *, union real_point3d *);
// bool behavior_flying_cover_find_avoidance_volume(long, class c_behavior_state *, class c_character_flying_movement_properties_internal const *);
// float behavior_flying_cover_score_avoidance_volume(long, struct s_avoidance_volume const *);
// float flying_cover_get_orbit_radius(long);
// bool behavior_flying_cover_is_orbiting_volume(long, class c_behavior_state *);
// bool behavior_flying_cover_is_occluded_by_volume(long, class c_behavior_state *);
// bool behavior_flying_cover_find_spline(long, class c_character_flying_movement_properties_internal const *, class c_behavior_state *);
// bool behavior_flying_cover_check_spline_in_use(short);
// void behavior_flying_cover_control(long, class c_behavior_state *);
// long int_pin<long, int, short>(long const &, int const &, short const &);
// bool behavior_flying_evade_activate(long, class c_behavior_state *);
// void behavior_flying_evade_deactivate(long, class c_behavior_state *);
// bool behavior_flying_evade_perform(long, class c_behavior_state *);
// void behavior_flying_approach_deactivate(long, class c_behavior_state *);
// bool behavior_flying_approach_activate(long, class c_behavior_state *);
// bool behavior_flying_approach_perform(long, class c_behavior_state *);
// void flying_update_bogey_timer(long, class c_character_flying_movement_properties_internal const *);
// void behavior_flying_approach_control(long, class c_behavior_state *);
// float flying_update_desired_throttle(long, class c_character_flying_movement_properties_internal const *, float);
// bool behavior_flying_strafe_activate(long, class c_behavior_state *);
// void behavior_flying_strafe_deactivate(long, class c_behavior_state *);
// bool behavior_flying_strafe_perform(long, class c_behavior_state *);
// void behavior_flying_strafe_control(long, class c_behavior_state *);
// bool behavior_flying_tail_activate(long, class c_behavior_state *);
// void behavior_flying_tail_deactivate(long, class c_behavior_state *);
// bool behavior_flying_tail_perform(long, class c_behavior_state *);
// void behavior_flying_tail_control(long, class c_behavior_state *);
// bool behavior_flying_retreat_activate(long, class c_behavior_state *);
// bool behavior_flying_retreat_perform(long, class c_behavior_state *);
// void behavior_flying_retreat_control(long, class c_behavior_state *);
// short flying_dodge_get_impulse(long, class c_behavior_state *);
// void flying_actor_stimulus_set_dodge_change(long, class c_character_flying_movement_properties_internal const *, long);
// bool flying_actor_action_find_escape_from_danger(long, class c_character_flying_movement_properties_internal const *, struct s_stimulus_data_information const *, struct s_danger_escape *);
// bool flying_actor_move_try_evasion_vector(long, union vector3d const *, float);

//void behavior_flying_get_movement_properties(long, class c_character_runtime_properties<class c_character_flying_movement_properties_internal> &)
//{
//    mangled_ppc("?behavior_flying_get_movement_properties@@YAXJAAV?$c_character_runtime_properties@Vc_character_flying_movement_properties_internal@@@@@Z");
//};

//void actor_flying_set_default_movement_properties(class c_character_flying_movement_properties_internal *)
//{
//    mangled_ppc("?actor_flying_set_default_movement_properties@@YAXPAVc_character_flying_movement_properties_internal@@@Z");
//};

//bool actor_flying_compute_spline_approach_target(long, union real_point3d *)
//{
//    mangled_ppc("?actor_flying_compute_spline_approach_target@@YA_NJPATreal_point3d@@@Z");
//};

//float actor_flying_estimate_max_speed(long)
//{
//    mangled_ppc("?actor_flying_estimate_max_speed@@YAMJ@Z");
//};

//bool actor_flying_get_bounding_volume(long, class c_character_flying_movement_properties_internal const *, struct s_flying_volume *)
//{
//    mangled_ppc("?actor_flying_get_bounding_volume@@YA_NJPBVc_character_flying_movement_properties_internal@@PAUs_flying_volume@@@Z");
//};

//void actor_flying_handle_task_change(long)
//{
//    mangled_ppc("?actor_flying_handle_task_change@@YAXJ@Z");
//};

//void actor_flying_reset_bogey_timer(long)
//{
//    mangled_ppc("?actor_flying_reset_bogey_timer@@YAXJ@Z");
//};

//short behavior_flying_idle_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_flying_idle_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_flying_idle_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_idle_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short behavior_flying_cover_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_flying_cover_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_flying_cover_get_desire_helper(long)
//{
//    mangled_ppc("?behavior_flying_cover_get_desire_helper@@YA_NJ@Z");
//};

//bool flying_object_is_behind_target_object(long, long)
//{
//    mangled_ppc("?flying_object_is_behind_target_object@@YA_NJJ@Z");
//};

//bool flying_actor_is_aggressive(long)
//{
//    mangled_ppc("?flying_actor_is_aggressive@@YA_NJ@Z");
//};

//short behavior_flying_cover_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_cover_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short actor_flying_has_spline(long)
//{
//    mangled_ppc("?actor_flying_has_spline@@YAFJ@Z");
//};

//short behavior_flying_evade_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_flying_evade_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool flying_target_is_flying(long)
//{
//    mangled_ppc("?flying_target_is_flying@@YA_NJ@Z");
//};

//short behavior_flying_evade_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_evade_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool flying_actor_task_kungfu_disallowed(long)
//{
//    mangled_ppc("?flying_actor_task_kungfu_disallowed@@YA_NJ@Z");
//};

//short behavior_flying_approach_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_flying_approach_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool flying_point_in_bounding_volume(union real_point3d const *, struct s_flying_volume const *, float)
//{
//    mangled_ppc("?flying_point_in_bounding_volume@@YA_NPBTreal_point3d@@PBUs_flying_volume@@M@Z");
//};

//short behavior_flying_approach_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_approach_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool flying_compute_ray_tail_cone_scores(long, long, float *, float *)
//{
//    mangled_ppc("?flying_compute_ray_tail_cone_scores@@YA_NJJPAM0@Z");
//};

//void flying_store_target_tail_cone(long, long, union real_point3d const *, union vector3d const *, float, float, float, struct s_flying_tail_cone_evaluation *const)
//{
//    mangled_ppc("?flying_store_target_tail_cone@@YAXJJPBTreal_point3d@@PBTvector3d@@MMMQAUs_flying_tail_cone_evaluation@@@Z");
//};

//void flying_clear_target_tail_cone(long)
//{
//    mangled_ppc("?flying_clear_target_tail_cone@@YAXJ@Z");
//};

//float flying_compute_ray_tail_cone_score(struct s_flying_tail_cone_evaluation *const, union real_point3d const *, union vector3d const *, float, float, float, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?flying_compute_ray_tail_cone_score@@YAMQAUs_flying_tail_cone_evaluation@@PBTreal_point3d@@PBTvector3d@@MMM12@Z");
//};

//float flying_compute_point_tail_cone_score(union real_point3d const *, union vector3d const *, float, float, float, union real_point3d const *)
//{
//    mangled_ppc("?flying_compute_point_tail_cone_score@@YAMPBTreal_point3d@@PBTvector3d@@MMM0@Z");
//};

//float flying_compute_preferred_tail_distance(float, float)
//{
//    mangled_ppc("?flying_compute_preferred_tail_distance@@YAMMM@Z");
//};

//float flying_compute_ray_tail_cone_distance_score(union real_point3d const *, union real_point3d const *, float, float)
//{
//    mangled_ppc("?flying_compute_ray_tail_cone_distance_score@@YAMPBTreal_point3d@@0MM@Z");
//};

//float flying_compute_ray_tail_cone_score_at_plane(enum e_flying_tail_cone_location, struct s_flying_tail_cone_evaluation *const, union real_point3d const *, union vector3d const *, float, float, float, float, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?flying_compute_ray_tail_cone_score_at_plane@@YAMW4e_flying_tail_cone_location@@QAUs_flying_tail_cone_evaluation@@PBTreal_point3d@@PBTvector3d@@MMMM23@Z");
//};

//void behavior_flying_evade_input_setup(struct s_behavior_input *, long)
//{
//    mangled_ppc("?behavior_flying_evade_input_setup@@YAXPAUs_behavior_input@@J@Z");
//};

//short behavior_flying_strafe_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_flying_strafe_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_flying_strafe_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_strafe_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short behavior_flying_tail_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_flying_tail_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_flying_tail_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_tail_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short behavior_flying_retreat_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_flying_retreat_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_flying_retreat_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_retreat_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short behavior_flying_combat_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_flying_combat_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_flying_combat_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_combat_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short behavior_flying_root_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_flying_root_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_flying_root_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_root_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//public: c_enum<enum e_flying_bounding_volume_type, long, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_flying_bounding_volume_type, long, 0, 2, struct s_default_enum_string_resolver>(enum e_flying_bounding_volume_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_flying_bounding_volume_type@@J$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_flying_bounding_volume_type@@@Z");
//};

//bool behavior_flying_idle_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_idle_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool behavior_flying_idle_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_idle_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool flying_idle_destination_reselect(long, struct s_flying_volume const *, class c_character_flying_movement_properties_internal const *)
//{
//    mangled_ppc("?flying_idle_destination_reselect@@YA_NJPBUs_flying_volume@@PBVc_character_flying_movement_properties_internal@@@Z");
//};

//bool flying_select_bounding_volume(long, class c_character_flying_movement_properties_internal const *, bool)
//{
//    mangled_ppc("?flying_select_bounding_volume@@YA_NJPBVc_character_flying_movement_properties_internal@@_N@Z");
//};

//long flying_find_closest_player(struct s_task const *, long)
//{
//    mangled_ppc("?flying_find_closest_player@@YAJPBUs_task@@J@Z");
//};

//void flying_update_shooting_state(long, class c_character_flying_movement_properties_internal const *)
//{
//    mangled_ppc("?flying_update_shooting_state@@YAXJPBVc_character_flying_movement_properties_internal@@@Z");
//};

//bool flying_select_destination(long, long, class c_behavior_state const *, struct s_flying_volume const *, class c_character_flying_movement_properties_internal const *, union real_point3d *)
//{
//    mangled_ppc("?flying_select_destination@@YA_NJJPBVc_behavior_state@@PBUs_flying_volume@@PBVc_character_flying_movement_properties_internal@@PATreal_point3d@@@Z");
//};

//void flying_store_movement_vector(long, union vector3d *, float, short)
//{
//    mangled_ppc("?flying_store_movement_vector@@YAXJPATvector3d@@MF@Z");
//};

//void flying_clear_movement_vectors(long)
//{
//    mangled_ppc("?flying_clear_movement_vectors@@YAXJ@Z");
//};

//bool flying_compute_bounding_volume_avoidance_vector(long, struct s_flying_volume const *, class c_character_flying_movement_properties_internal const *, union vector3d *)
//{
//    mangled_ppc("?flying_compute_bounding_volume_avoidance_vector@@YA_NJPBUs_flying_volume@@PBVc_character_flying_movement_properties_internal@@PATvector3d@@@Z");
//};

//bool flying_compute_zone_area_volume_avoidance_vector(long, union real_point2d const *, long, float, float, class c_character_flying_movement_properties_internal const *, union vector3d *)
//{
//    mangled_ppc("?flying_compute_zone_area_volume_avoidance_vector@@YA_NJPBTreal_point2d@@JMMPBVc_character_flying_movement_properties_internal@@PATvector3d@@@Z");
//};

//bool flying_compute_sphere_volume_avoidance_vector(long, union real_point3d const *, float, class c_character_flying_movement_properties_internal const *, union vector3d *)
//{
//    mangled_ppc("?flying_compute_sphere_volume_avoidance_vector@@YA_NJPBTreal_point3d@@MPBVc_character_flying_movement_properties_internal@@PATvector3d@@@Z");
//};

//void flying_movement_vector_clip_to_volume(struct s_flying_volume const *, union real_point3d const *, union real_point3d *, float)
//{
//    mangled_ppc("?flying_movement_vector_clip_to_volume@@YAXPBUs_flying_volume@@PBTreal_point3d@@PAT2@M@Z");
//};

//void behavior_flying_idle_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_idle_control@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_flying_cover_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_cover_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_flying_cover_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_cover_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_flying_cover_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_cover_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_flying_compute_cover_reselect_timer(class c_behavior_state *, class c_character_flying_movement_properties_internal const *)
//{
//    mangled_ppc("?behavior_flying_compute_cover_reselect_timer@@YAXPAVc_behavior_state@@PBVc_character_flying_movement_properties_internal@@@Z");
//};

//void behavior_flying_compute_cover_heading(long, class c_behavior_state *, class c_character_flying_movement_properties_internal const *)
//{
//    mangled_ppc("?behavior_flying_compute_cover_heading@@YAXJPAVc_behavior_state@@PBVc_character_flying_movement_properties_internal@@@Z");
//};

//void flying_cover_compute_volume_center(union real_point3d *, struct s_avoidance_volume const *, union real_point3d *)
//{
//    mangled_ppc("?flying_cover_compute_volume_center@@YAXPATreal_point3d@@PBUs_avoidance_volume@@0@Z");
//};

//bool behavior_flying_cover_find_avoidance_volume(long, class c_behavior_state *, class c_character_flying_movement_properties_internal const *)
//{
//    mangled_ppc("?behavior_flying_cover_find_avoidance_volume@@YA_NJPAVc_behavior_state@@PBVc_character_flying_movement_properties_internal@@@Z");
//};

//float behavior_flying_cover_score_avoidance_volume(long, struct s_avoidance_volume const *)
//{
//    mangled_ppc("?behavior_flying_cover_score_avoidance_volume@@YAMJPBUs_avoidance_volume@@@Z");
//};

//float flying_cover_get_orbit_radius(long)
//{
//    mangled_ppc("?flying_cover_get_orbit_radius@@YAMJ@Z");
//};

//bool behavior_flying_cover_is_orbiting_volume(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_cover_is_orbiting_volume@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool behavior_flying_cover_is_occluded_by_volume(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_cover_is_occluded_by_volume@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool behavior_flying_cover_find_spline(long, class c_character_flying_movement_properties_internal const *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_cover_find_spline@@YA_NJPBVc_character_flying_movement_properties_internal@@PAVc_behavior_state@@@Z");
//};

//bool behavior_flying_cover_check_spline_in_use(short)
//{
//    mangled_ppc("?behavior_flying_cover_check_spline_in_use@@YA_NF@Z");
//};

//void behavior_flying_cover_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_cover_control@@YAXJPAVc_behavior_state@@@Z");
//};

//long int_pin<long, int, short>(long const &, int const &, short const &)
//{
//    mangled_ppc("??$int_pin@JHF@@YAJABJABHABF@Z");
//};

//bool behavior_flying_evade_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_evade_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_flying_evade_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_evade_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_flying_evade_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_evade_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_flying_approach_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_approach_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_flying_approach_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_approach_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool behavior_flying_approach_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_approach_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void flying_update_bogey_timer(long, class c_character_flying_movement_properties_internal const *)
//{
//    mangled_ppc("?flying_update_bogey_timer@@YAXJPBVc_character_flying_movement_properties_internal@@@Z");
//};

//void behavior_flying_approach_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_approach_control@@YAXJPAVc_behavior_state@@@Z");
//};

//float flying_update_desired_throttle(long, class c_character_flying_movement_properties_internal const *, float)
//{
//    mangled_ppc("?flying_update_desired_throttle@@YAMJPBVc_character_flying_movement_properties_internal@@M@Z");
//};

//bool behavior_flying_strafe_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_strafe_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_flying_strafe_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_strafe_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_flying_strafe_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_strafe_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_flying_strafe_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_strafe_control@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_flying_tail_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_tail_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_flying_tail_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_tail_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_flying_tail_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_tail_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_flying_tail_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_tail_control@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_flying_retreat_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_retreat_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool behavior_flying_retreat_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_retreat_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_flying_retreat_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flying_retreat_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short flying_dodge_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?flying_dodge_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//void flying_actor_stimulus_set_dodge_change(long, class c_character_flying_movement_properties_internal const *, long)
//{
//    mangled_ppc("?flying_actor_stimulus_set_dodge_change@@YAXJPBVc_character_flying_movement_properties_internal@@J@Z");
//};

//bool flying_actor_action_find_escape_from_danger(long, class c_character_flying_movement_properties_internal const *, struct s_stimulus_data_information const *, struct s_danger_escape *)
//{
//    mangled_ppc("?flying_actor_action_find_escape_from_danger@@YA_NJPBVc_character_flying_movement_properties_internal@@PBUs_stimulus_data_information@@PAUs_danger_escape@@@Z");
//};

//bool flying_actor_move_try_evasion_vector(long, union vector3d const *, float)
//{
//    mangled_ppc("?flying_actor_move_try_evasion_vector@@YA_NJPBTvector3d@@M@Z");
//};

