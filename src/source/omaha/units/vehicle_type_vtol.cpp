/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_vehicle_type_vtol::reset(long);
// public: void c_vehicle_type_vtol::update_control(long);
// public: bool c_vehicle_type_vtol::should_override_deactivation(long);
// public: void c_vehicle_type_vtol::deplete_function_variables(long);
// public: void c_vehicle_type_vtol::update_physics(long, struct s_havok_vehicle_physics_instance *);
// private: void c_vehicle_type_vtol::update_interpolated_parameters(long, struct s_havok_vehicle_physics_instance const *, struct s_vehicle_vtol_definition const *, float, struct s_vehicle_vtol_interpolated_parameters *);
// private: void c_vehicle_type_vtol::update_keyframed_physics(long, struct s_havok_vehicle_physics_instance const *);
// private: void c_vehicle_type_vtol::update_state(long, struct s_havok_vehicle_physics_instance const *, union vector3d *);
// private: float c_vehicle_type_vtol::get_state_scale(long) const;
// public: void c_vehicle_type_vtol::accelerate_notify(long, union vector3d const *, union vector3d const *);
// public: void c_vehicle_type_vtol::set_velocity_notify(long, union vector3d const *, union vector3d const *);
// public: void c_vehicle_type_vtol::force_flying(long);
// private: void c_vehicle_type_vtol::update_lift_vector(long, struct s_havok_vehicle_physics_instance const *, struct s_vehicle_vtol_interpolated_parameters const *, struct real_matrix4x3const *, union vector3d const *, float, long, union vector3d *, union real_point3d *, union euler_angles2d *, union euler_angles2d *, union vector2d *, union vector2d *, float *);
// private: static void c_vehicle_type_vtol::interpolate_lift_angles(long, union euler_angles2d *, union vector2d *, union euler_angles2d const *, bool);
// private: float c_vehicle_type_vtol::calculate_lift_turn_acceleration(long, struct s_havok_vehicle_physics_instance const *, union vector3d const *);
// private: static void c_vehicle_type_vtol::update_rotor_damping(long, struct s_havok_vehicle_physics_instance const *, struct s_vehicle_vtol_interpolated_parameters const *, union vector3d *);
// private: static void c_vehicle_type_vtol::apply_thrust(long, struct s_havok_vehicle_physics_instance const *, union vector3d const *, union real_point3d const *, long, float, union vector3d *, union vector3d *);
// public: static bool c_vehicle_type_vtol::kills_riders_at_terminal_velocity(void);
// public: bool c_vehicle_type_vtol::physics_disabled(long);
// public: void c_vehicle_type_vtol::create_effects(long);
// public: bool c_vehicle_type_vtol::compute_function_value(long, long, float *, bool *) const;
// private: void c_vehicle_type_vtol::compute_engine_scales(float *, float *) const;
// float calculate_desired_acceleration(float, float, float, float);
// float calculate_acceleration_magnitude_vtol(bool, bool, float, float, float, float, float, float, float, bool, float *);
// public: c_enum<enum c_vehicle_type_vtol::e_vtol_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum c_vehicle_type_vtol::e_vtol_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum c_vehicle_type_vtol::e_vtol_state);
// public: enum c_vehicle_type_vtol::e_vtol_state c_enum_no_init<enum c_vehicle_type_vtol::e_vtol_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum c_vehicle_type_vtol::e_vtol_state(void) const;
// public: bool c_enum_no_init<enum c_vehicle_type_vtol::e_vtol_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum c_vehicle_type_vtol::e_vtol_state) const;

//public: void c_vehicle_type_vtol::reset(long)
//{
//    mangled_ppc("?reset@c_vehicle_type_vtol@@QAAXJ@Z");
//};

//public: void c_vehicle_type_vtol::update_control(long)
//{
//    mangled_ppc("?update_control@c_vehicle_type_vtol@@QAAXJ@Z");
//};

//public: bool c_vehicle_type_vtol::should_override_deactivation(long)
//{
//    mangled_ppc("?should_override_deactivation@c_vehicle_type_vtol@@QAA_NJ@Z");
//};

//public: void c_vehicle_type_vtol::deplete_function_variables(long)
//{
//    mangled_ppc("?deplete_function_variables@c_vehicle_type_vtol@@QAAXJ@Z");
//};

//public: void c_vehicle_type_vtol::update_physics(long, struct s_havok_vehicle_physics_instance *)
//{
//    mangled_ppc("?update_physics@c_vehicle_type_vtol@@QAAXJPAUs_havok_vehicle_physics_instance@@@Z");
//};

//private: void c_vehicle_type_vtol::update_interpolated_parameters(long, struct s_havok_vehicle_physics_instance const *, struct s_vehicle_vtol_definition const *, float, struct s_vehicle_vtol_interpolated_parameters *)
//{
//    mangled_ppc("?update_interpolated_parameters@c_vehicle_type_vtol@@AAAXJPBUs_havok_vehicle_physics_instance@@PBUs_vehicle_vtol_definition@@MPAUs_vehicle_vtol_interpolated_parameters@@@Z");
//};

//private: void c_vehicle_type_vtol::update_keyframed_physics(long, struct s_havok_vehicle_physics_instance const *)
//{
//    mangled_ppc("?update_keyframed_physics@c_vehicle_type_vtol@@AAAXJPBUs_havok_vehicle_physics_instance@@@Z");
//};

//private: void c_vehicle_type_vtol::update_state(long, struct s_havok_vehicle_physics_instance const *, union vector3d *)
//{
//    mangled_ppc("?update_state@c_vehicle_type_vtol@@AAAXJPBUs_havok_vehicle_physics_instance@@PATvector3d@@@Z");
//};

//private: float c_vehicle_type_vtol::get_state_scale(long) const
//{
//    mangled_ppc("?get_state_scale@c_vehicle_type_vtol@@ABAMJ@Z");
//};

//public: void c_vehicle_type_vtol::accelerate_notify(long, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?accelerate_notify@c_vehicle_type_vtol@@QAAXJPBTvector3d@@0@Z");
//};

//public: void c_vehicle_type_vtol::set_velocity_notify(long, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?set_velocity_notify@c_vehicle_type_vtol@@QAAXJPBTvector3d@@0@Z");
//};

//public: void c_vehicle_type_vtol::force_flying(long)
//{
//    mangled_ppc("?force_flying@c_vehicle_type_vtol@@QAAXJ@Z");
//};

//private: void c_vehicle_type_vtol::update_lift_vector(long, struct s_havok_vehicle_physics_instance const *, struct s_vehicle_vtol_interpolated_parameters const *, struct real_matrix4x3const *, union vector3d const *, float, long, union vector3d *, union real_point3d *, union euler_angles2d *, union euler_angles2d *, union vector2d *, union vector2d *, float *)
//{
//    mangled_ppc("?update_lift_vector@c_vehicle_type_vtol@@AAAXJPBUs_havok_vehicle_physics_instance@@PBUs_vehicle_vtol_interpolated_parameters@@PBUreal_matrix4x3@@PBTvector3d@@MJPAT5@PATreal_point3d@@PATeuler_angles2d@@6PATvector2d@@7PAM@Z");
//};

//private: static void c_vehicle_type_vtol::interpolate_lift_angles(long, union euler_angles2d *, union vector2d *, union euler_angles2d const *, bool)
//{
//    mangled_ppc("?interpolate_lift_angles@c_vehicle_type_vtol@@CAXJPATeuler_angles2d@@PATvector2d@@PBT2@_N@Z");
//};

//private: float c_vehicle_type_vtol::calculate_lift_turn_acceleration(long, struct s_havok_vehicle_physics_instance const *, union vector3d const *)
//{
//    mangled_ppc("?calculate_lift_turn_acceleration@c_vehicle_type_vtol@@AAAMJPBUs_havok_vehicle_physics_instance@@PBTvector3d@@@Z");
//};

//private: static void c_vehicle_type_vtol::update_rotor_damping(long, struct s_havok_vehicle_physics_instance const *, struct s_vehicle_vtol_interpolated_parameters const *, union vector3d *)
//{
//    mangled_ppc("?update_rotor_damping@c_vehicle_type_vtol@@CAXJPBUs_havok_vehicle_physics_instance@@PBUs_vehicle_vtol_interpolated_parameters@@PATvector3d@@@Z");
//};

//private: static void c_vehicle_type_vtol::apply_thrust(long, struct s_havok_vehicle_physics_instance const *, union vector3d const *, union real_point3d const *, long, float, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?apply_thrust@c_vehicle_type_vtol@@CAXJPBUs_havok_vehicle_physics_instance@@PBTvector3d@@PBTreal_point3d@@JMPAT3@3@Z");
//};

//public: static bool c_vehicle_type_vtol::kills_riders_at_terminal_velocity(void)
//{
//    mangled_ppc("?kills_riders_at_terminal_velocity@c_vehicle_type_vtol@@SA_NXZ");
//};

//public: bool c_vehicle_type_vtol::physics_disabled(long)
//{
//    mangled_ppc("?physics_disabled@c_vehicle_type_vtol@@QAA_NJ@Z");
//};

//public: void c_vehicle_type_vtol::create_effects(long)
//{
//    mangled_ppc("?create_effects@c_vehicle_type_vtol@@QAAXJ@Z");
//};

//public: bool c_vehicle_type_vtol::compute_function_value(long, long, float *, bool *) const
//{
//    mangled_ppc("?compute_function_value@c_vehicle_type_vtol@@QBA_NJJPAMPA_N@Z");
//};

//private: void c_vehicle_type_vtol::compute_engine_scales(float *, float *) const
//{
//    mangled_ppc("?compute_engine_scales@c_vehicle_type_vtol@@ABAXPAM0@Z");
//};

//float calculate_desired_acceleration(float, float, float, float)
//{
//    mangled_ppc("?calculate_desired_acceleration@@YAMMMMM@Z");
//};

//float calculate_acceleration_magnitude_vtol(bool, bool, float, float, float, float, float, float, float, bool, float *)
//{
//    mangled_ppc("?calculate_acceleration_magnitude_vtol@@YAM_N0MMMMMMM0PAM@Z");
//};

//public: c_enum<enum c_vehicle_type_vtol::e_vtol_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum c_vehicle_type_vtol::e_vtol_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum c_vehicle_type_vtol::e_vtol_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_vtol_state@c_vehicle_type_vtol@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_vtol_state@c_vehicle_type_vtol@@@Z");
//};

//public: enum c_vehicle_type_vtol::e_vtol_state c_enum_no_init<enum c_vehicle_type_vtol::e_vtol_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum c_vehicle_type_vtol::e_vtol_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_vtol_state@c_vehicle_type_vtol@@E$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_vtol_state@c_vehicle_type_vtol@@XZ");
//};

//public: bool c_enum_no_init<enum c_vehicle_type_vtol::e_vtol_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum c_vehicle_type_vtol::e_vtol_state) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_vtol_state@c_vehicle_type_vtol@@E$0A@$03Us_default_enum_string_resolver@@@@QBA_NW4e_vtol_state@c_vehicle_type_vtol@@@Z");
//};

