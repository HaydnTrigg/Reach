/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// float k_driver_max_downward_force; // "?k_driver_max_downward_force@@3MA"
// float k_driver_max_upward_force; // "?k_driver_max_upward_force@@3MA"
// float k_driver_downward_velocity_scale; // "?k_driver_downward_velocity_scale@@3MA"
// float k_driver_upward_velocity_scale; // "?k_driver_upward_velocity_scale@@3MA"
// float k_driver_ground_velocity_falloff; // "?k_driver_ground_velocity_falloff@@3MA"
// float k_driver_airborne_velocity_falloff; // "?k_driver_airborne_velocity_falloff@@3MA"
// bool g_debug_objects_vehicle_suspensions; // "?g_debug_objects_vehicle_suspensions@@3_NA"
// class c_motor_program_definition vehicle_program_definition; // "?vehicle_program_definition@@3Vc_motor_program_definition@@A"

// bool vehicle_program_default_finished(long, class c_motor_task *);
// enum e_motor_result vehicle_surge_submit(long, class c_motor_request_base const *);
// bool vehicle_surge_update(long, class c_motor_task *);
// bool vehicle_surge_finished(long, class c_motor_task *);
// enum e_motor_result unit_phase_submit(long, class c_motor_request_base const *);
// bool unit_phase_update(long, class c_motor_task *);
// enum e_motor_result vehicle_flip_submit(long, class c_motor_request_base const *);
// enum e_motor_result vehicle_animated_trick_submit(long, class c_motor_request_base const *);
// bool vehicle_animated_trick_finished(long, class c_motor_task *);
// enum e_motor_result vehicle_animation_task_submit(long, class c_motor_request_base const *);
// bool vehicle_animation_finished(long, class c_motor_task *);
// bool vehicle_program_activate(long);
// bool vehicle_program_update(long);
// bool vehicle_update_wheelie_popping_force(long);
// bool vehicle_update_flipping(long);
// void create_vehicle_specific_effects(long);
// bool update_suspension(long, bool);
// bool collision_test_suspension(long, union real_point3d const *, union vector3d const *, struct s_vehicle_suspension_cache *, float *, bool);
// void compute_airborne_ticks(long, struct s_havok_vehicle_physics_instance const *);
// bool vehicle_has_dynamic_rigid_bodies(long);
// public: s_havok_vehicle_physics_instance::s_havok_vehicle_physics_instance(void);
// public: s_friction_vehicle_physics_point_datum::s_friction_vehicle_physics_point_datum(void);
// bool vehicle_is_actively_controlled_turret(long);
// enum e_motor_program vehicle_program_move(long);
// void vehicle_program_handle_deleted_object(long, long);

//bool vehicle_program_default_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?vehicle_program_default_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result vehicle_surge_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?vehicle_surge_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool vehicle_surge_update(long, class c_motor_task *)
//{
//    mangled_ppc("?vehicle_surge_update@@YA_NJPAVc_motor_task@@@Z");
//};

//bool vehicle_surge_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?vehicle_surge_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result unit_phase_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?unit_phase_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool unit_phase_update(long, class c_motor_task *)
//{
//    mangled_ppc("?unit_phase_update@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result vehicle_flip_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?vehicle_flip_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result vehicle_animated_trick_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?vehicle_animated_trick_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool vehicle_animated_trick_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?vehicle_animated_trick_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result vehicle_animation_task_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?vehicle_animation_task_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool vehicle_animation_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?vehicle_animation_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//bool vehicle_program_activate(long)
//{
//    mangled_ppc("?vehicle_program_activate@@YA_NJ@Z");
//};

//bool vehicle_program_update(long)
//{
//    mangled_ppc("?vehicle_program_update@@YA_NJ@Z");
//};

//bool vehicle_update_wheelie_popping_force(long)
//{
//    mangled_ppc("?vehicle_update_wheelie_popping_force@@YA_NJ@Z");
//};

//bool vehicle_update_flipping(long)
//{
//    mangled_ppc("?vehicle_update_flipping@@YA_NJ@Z");
//};

//void create_vehicle_specific_effects(long)
//{
//    mangled_ppc("?create_vehicle_specific_effects@@YAXJ@Z");
//};

//bool update_suspension(long, bool)
//{
//    mangled_ppc("?update_suspension@@YA_NJ_N@Z");
//};

//bool collision_test_suspension(long, union real_point3d const *, union vector3d const *, struct s_vehicle_suspension_cache *, float *, bool)
//{
//    mangled_ppc("?collision_test_suspension@@YA_NJPBTreal_point3d@@PBTvector3d@@PAUs_vehicle_suspension_cache@@PAM_N@Z");
//};

//void compute_airborne_ticks(long, struct s_havok_vehicle_physics_instance const *)
//{
//    mangled_ppc("?compute_airborne_ticks@@YAXJPBUs_havok_vehicle_physics_instance@@@Z");
//};

//bool vehicle_has_dynamic_rigid_bodies(long)
//{
//    mangled_ppc("?vehicle_has_dynamic_rigid_bodies@@YA_NJ@Z");
//};

//public: s_havok_vehicle_physics_instance::s_havok_vehicle_physics_instance(void)
//{
//    mangled_ppc("??0s_havok_vehicle_physics_instance@@QAA@XZ");
//};

//public: s_friction_vehicle_physics_point_datum::s_friction_vehicle_physics_point_datum(void)
//{
//    mangled_ppc("??0s_friction_vehicle_physics_point_datum@@QAA@XZ");
//};

//bool vehicle_is_actively_controlled_turret(long)
//{
//    mangled_ppc("?vehicle_is_actively_controlled_turret@@YA_NJ@Z");
//};

//enum e_motor_program vehicle_program_move(long)
//{
//    mangled_ppc("?vehicle_program_move@@YA?AW4e_motor_program@@J@Z");
//};

//void vehicle_program_handle_deleted_object(long, long)
//{
//    mangled_ppc("?vehicle_program_handle_deleted_object@@YAXJJ@Z");
//};

