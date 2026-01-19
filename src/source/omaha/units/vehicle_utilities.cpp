/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void vehicle_update_tricks(long);
// void vehicle_update_brake(long);
// void vehicle_update_boost(long, bool);
// void vehicle_apply_steering_definition(struct s_vehicle_steering_control_definition const *, float *);
// void vehicle_apply_turning_definition(struct s_vehicle_turning_control_definition const *, bool, float, float *);
// float vehicle_update_control_classic(long, union vector3d const *, union vector3d const *, float, float, struct s_vehicle_steering_control_definition const *, struct s_vehicle_turning_control_definition const *, struct physics_variable_speed const *, struct physics_variable_speed const *, bool, bool, float *, float *, float *);
// float physics_variable_speed_from_fraction(struct physics_variable_speed const *, float);
// void vehicle_degrade_variable(float *);
// float vehicle_function_safe_divide(float, float);
// void vehicle_scale_gravity_for_friction_point_vehicle(long, union vector3d const *, float *, float);
// union vector3d * vehicle_compute_acceleration(union vector3d const *, union vector3d const *, float, float, union vector3d *, float);
// float vehicle_compute_throttle1d(long);
// void vehicle_compute_tank_controls(long, bool, union vector3d const *, float, float, bool, bool, float *, bool *, bool *);
// public: void c_vehicle_stop_counter::reset(void);
// public: void c_vehicle_stop_counter::update(long, float, bool);
// public: float c_vehicle_stop_counter::calculate_fraction(long);
// public: void c_vehicle_braking_counter::reset(void);
// public: void c_vehicle_braking_counter::update(long);
// public: bool c_vehicle_braking_counter::is_braking(long);
// void vehicle_try_to_join_local_physics(long, struct s_havok_vehicle_physics_instance const *);
// void vehicle_update_antigravity_hover(struct s_havok_vehicle_physics_instance const *, float *);
// void vehicle_calculate_turning_torque(struct s_havok_vehicle_physics_instance const *, union vector3d const *, union vector3d *, bool, float, float, float);
// void vehicle_compute_relative_throttle(long, union vector3d *);
// void vehicle_create_ground_effects(long, float, float);
// void vehicle_animation_steering_position_update(long, struct s_vehicle_steering_animation_definition const *, float, float *, bool);
// bool vehicle_is_type(long, long);
// float cross_product2d(union vector2d const *, union vector2d const *);

//void vehicle_update_tricks(long)
//{
//    mangled_ppc("?vehicle_update_tricks@@YAXJ@Z");
//};

//void vehicle_update_brake(long)
//{
//    mangled_ppc("?vehicle_update_brake@@YAXJ@Z");
//};

//void vehicle_update_boost(long, bool)
//{
//    mangled_ppc("?vehicle_update_boost@@YAXJ_N@Z");
//};

//void vehicle_apply_steering_definition(struct s_vehicle_steering_control_definition const *, float *)
//{
//    mangled_ppc("?vehicle_apply_steering_definition@@YAXPBUs_vehicle_steering_control_definition@@PAM@Z");
//};

//void vehicle_apply_turning_definition(struct s_vehicle_turning_control_definition const *, bool, float, float *)
//{
//    mangled_ppc("?vehicle_apply_turning_definition@@YAXPBUs_vehicle_turning_control_definition@@_NMPAM@Z");
//};

//float vehicle_update_control_classic(long, union vector3d const *, union vector3d const *, float, float, struct s_vehicle_steering_control_definition const *, struct s_vehicle_turning_control_definition const *, struct physics_variable_speed const *, struct physics_variable_speed const *, bool, bool, float *, float *, float *)
//{
//    mangled_ppc("?vehicle_update_control_classic@@YAMJPBTvector3d@@0MMPBUs_vehicle_steering_control_definition@@PBUs_vehicle_turning_control_definition@@PBUphysics_variable_speed@@3_N4PAM55@Z");
//};

//float physics_variable_speed_from_fraction(struct physics_variable_speed const *, float)
//{
//    mangled_ppc("?physics_variable_speed_from_fraction@@YAMPBUphysics_variable_speed@@M@Z");
//};

//void vehicle_degrade_variable(float *)
//{
//    mangled_ppc("?vehicle_degrade_variable@@YAXPAM@Z");
//};

//float vehicle_function_safe_divide(float, float)
//{
//    mangled_ppc("?vehicle_function_safe_divide@@YAMMM@Z");
//};

//void vehicle_scale_gravity_for_friction_point_vehicle(long, union vector3d const *, float *, float)
//{
//    mangled_ppc("?vehicle_scale_gravity_for_friction_point_vehicle@@YAXJPBTvector3d@@PAMM@Z");
//};

//union vector3d * vehicle_compute_acceleration(union vector3d const *, union vector3d const *, float, float, union vector3d *, float)
//{
//    mangled_ppc("?vehicle_compute_acceleration@@YAPATvector3d@@PBT1@0MMPAT1@M@Z");
//};

//float vehicle_compute_throttle1d(long)
//{
//    mangled_ppc("?vehicle_compute_throttle1d@@YAMJ@Z");
//};

//void vehicle_compute_tank_controls(long, bool, union vector3d const *, float, float, bool, bool, float *, bool *, bool *)
//{
//    mangled_ppc("?vehicle_compute_tank_controls@@YAXJ_NPBTvector3d@@MM00PAMPA_N3@Z");
//};

//public: void c_vehicle_stop_counter::reset(void)
//{
//    mangled_ppc("?reset@c_vehicle_stop_counter@@QAAXXZ");
//};

//public: void c_vehicle_stop_counter::update(long, float, bool)
//{
//    mangled_ppc("?update@c_vehicle_stop_counter@@QAAXJM_N@Z");
//};

//public: float c_vehicle_stop_counter::calculate_fraction(long)
//{
//    mangled_ppc("?calculate_fraction@c_vehicle_stop_counter@@QAAMJ@Z");
//};

//public: void c_vehicle_braking_counter::reset(void)
//{
//    mangled_ppc("?reset@c_vehicle_braking_counter@@QAAXXZ");
//};

//public: void c_vehicle_braking_counter::update(long)
//{
//    mangled_ppc("?update@c_vehicle_braking_counter@@QAAXJ@Z");
//};

//public: bool c_vehicle_braking_counter::is_braking(long)
//{
//    mangled_ppc("?is_braking@c_vehicle_braking_counter@@QAA_NJ@Z");
//};

//void vehicle_try_to_join_local_physics(long, struct s_havok_vehicle_physics_instance const *)
//{
//    mangled_ppc("?vehicle_try_to_join_local_physics@@YAXJPBUs_havok_vehicle_physics_instance@@@Z");
//};

//void vehicle_update_antigravity_hover(struct s_havok_vehicle_physics_instance const *, float *)
//{
//    mangled_ppc("?vehicle_update_antigravity_hover@@YAXPBUs_havok_vehicle_physics_instance@@PAM@Z");
//};

//void vehicle_calculate_turning_torque(struct s_havok_vehicle_physics_instance const *, union vector3d const *, union vector3d *, bool, float, float, float)
//{
//    mangled_ppc("?vehicle_calculate_turning_torque@@YAXPBUs_havok_vehicle_physics_instance@@PBTvector3d@@PAT2@_NMMM@Z");
//};

//void vehicle_compute_relative_throttle(long, union vector3d *)
//{
//    mangled_ppc("?vehicle_compute_relative_throttle@@YAXJPATvector3d@@@Z");
//};

//void vehicle_create_ground_effects(long, float, float)
//{
//    mangled_ppc("?vehicle_create_ground_effects@@YAXJMM@Z");
//};

//void vehicle_animation_steering_position_update(long, struct s_vehicle_steering_animation_definition const *, float, float *, bool)
//{
//    mangled_ppc("?vehicle_animation_steering_position_update@@YAXJPBUs_vehicle_steering_animation_definition@@MPAM_N@Z");
//};

//bool vehicle_is_type(long, long)
//{
//    mangled_ppc("?vehicle_is_type@@YA_NJJ@Z");
//};

//float cross_product2d(union vector2d const *, union vector2d const *)
//{
//    mangled_ppc("?cross_product2d@@YAMPBTvector2d@@0@Z");
//};

