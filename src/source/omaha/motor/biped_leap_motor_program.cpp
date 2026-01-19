/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float g_leap_flight_path_scale; // "?g_leap_flight_path_scale@@3MA"
// float g_leap_departure_power; // "?g_leap_departure_power@@3MA"
// float g_leap_departure_scale; // "?g_leap_departure_scale@@3MA"
// float g_leap_arrival_power; // "?g_leap_arrival_power@@3MA"
// float g_leap_arrival_scale; // "?g_leap_arrival_scale@@3MA"
// float g_leap_twist_power; // "?g_leap_twist_power@@3MA"
// float g_leap_cannonball_power; // "?g_leap_cannonball_power@@3MA"
// float g_leap_cannonball_scale; // "?g_leap_cannonball_scale@@3MA"
// float g_leap_idle_power; // "?g_leap_idle_power@@3MA"
// float g_leap_idle_scale; // "?g_leap_idle_scale@@3MA"
// float g_leap_overlay_power; // "?g_leap_overlay_power@@3MA"
// float g_leap_overlay_scale; // "?g_leap_overlay_scale@@3MA"
// struct s_motor_task_definition g_biped_leap_task; // "?g_biped_leap_task@@3Us_motor_task_definition@@A"
// bool g_leap_force_start_rotation; // "?g_leap_force_start_rotation@@3_NA"
// bool g_leap_force_end_rotation; // "?g_leap_force_end_rotation@@3_NA"
// bool g_leap_force_flight_start_rotation; // "?g_leap_force_flight_start_rotation@@3_NA"
// bool g_leap_force_flight_end_rotation; // "?g_leap_force_flight_end_rotation@@3_NA"
// float g_leap_interpolation_limit; // "?g_leap_interpolation_limit@@3MA"
// class c_motor_program_definition biped_leap_program_definition; // "?biped_leap_program_definition@@3Vc_motor_program_definition@@A"

// bool leap_build_trajectory(long, union real_point3d const *, union vector3d const *, float const *, union vector3d *, float *, short *, float *);
// bool leap_execute(long, class c_biped_leap_state const *);
// enum e_motor_result biped_leap_submit(long, class c_motor_request_base const *);
// void project_world_matrix_to_up_vector(union vector3d const *, struct real_matrix4x3const *, struct real_matrix4x3*);
// void biped_leap_render_debug(long);
// bool biped_leap_activate(long);
// bool biped_leap_update(long);
// bool leap_orientation_update(long);
// float compute_biped_leap_completion_ratio(class c_biped_leap_state const *, struct real_matrix4x3const *, float);
// void leap_animation_update(long, struct s_animation_control_data *);
// enum e_motor_program biped_leap_move(long);
// void handle_leap_motor_program_exit(long, union vector3d const *, float);
// bool biped_leap_in_airborne_state(long);
// void leaping_biped_ground_plane_fix_transform_to_physics(long, struct real_matrix4x3*);
// void leaping_biped_ground_plane_fix_transform_from_physics(long, struct real_matrix4x3*);
// void leaping_preprocess_node_orientations(long, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *);

//bool leap_build_trajectory(long, union real_point3d const *, union vector3d const *, float const *, union vector3d *, float *, short *, float *)
//{
//    mangled_ppc("?leap_build_trajectory@@YA_NJPBTreal_point3d@@PBTvector3d@@PBMPAT2@PAMPAF4@Z");
//};

//bool leap_execute(long, class c_biped_leap_state const *)
//{
//    mangled_ppc("?leap_execute@@YA_NJPBVc_biped_leap_state@@@Z");
//};

//enum e_motor_result biped_leap_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_leap_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//void project_world_matrix_to_up_vector(union vector3d const *, struct real_matrix4x3const *, struct real_matrix4x3*)
//{
//    mangled_ppc("?project_world_matrix_to_up_vector@@YAXPBTvector3d@@PBUreal_matrix4x3@@PAU2@@Z");
//};

//void biped_leap_render_debug(long)
//{
//    mangled_ppc("?biped_leap_render_debug@@YAXJ@Z");
//};

//bool biped_leap_activate(long)
//{
//    mangled_ppc("?biped_leap_activate@@YA_NJ@Z");
//};

//bool biped_leap_update(long)
//{
//    mangled_ppc("?biped_leap_update@@YA_NJ@Z");
//};

//bool leap_orientation_update(long)
//{
//    mangled_ppc("?leap_orientation_update@@YA_NJ@Z");
//};

//float compute_biped_leap_completion_ratio(class c_biped_leap_state const *, struct real_matrix4x3const *, float)
//{
//    mangled_ppc("?compute_biped_leap_completion_ratio@@YAMPBVc_biped_leap_state@@PBUreal_matrix4x3@@M@Z");
//};

//void leap_animation_update(long, struct s_animation_control_data *)
//{
//    mangled_ppc("?leap_animation_update@@YAXJPAUs_animation_control_data@@@Z");
//};

//enum e_motor_program biped_leap_move(long)
//{
//    mangled_ppc("?biped_leap_move@@YA?AW4e_motor_program@@J@Z");
//};

//void handle_leap_motor_program_exit(long, union vector3d const *, float)
//{
//    mangled_ppc("?handle_leap_motor_program_exit@@YAXJPBTvector3d@@M@Z");
//};

//bool biped_leap_in_airborne_state(long)
//{
//    mangled_ppc("?biped_leap_in_airborne_state@@YA_NJ@Z");
//};

//void leaping_biped_ground_plane_fix_transform_to_physics(long, struct real_matrix4x3*)
//{
//    mangled_ppc("?leaping_biped_ground_plane_fix_transform_to_physics@@YAXJPAUreal_matrix4x3@@@Z");
//};

//void leaping_biped_ground_plane_fix_transform_from_physics(long, struct real_matrix4x3*)
//{
//    mangled_ppc("?leaping_biped_ground_plane_fix_transform_from_physics@@YAXJPAUreal_matrix4x3@@@Z");
//};

//void leaping_preprocess_node_orientations(long, class c_big_flags_typed_no_init<long, 256> const *, long, struct real_orientation *)
//{
//    mangled_ppc("?leaping_preprocess_node_orientations@@YAXJPBV?$c_big_flags_typed_no_init@J$0BAA@@@JPAUreal_orientation@@@Z");
//};

