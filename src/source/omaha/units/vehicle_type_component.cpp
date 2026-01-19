/* ---------- headers */

#include "omaha\units\vehicle_type_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum c_vehicle_type_vtol::e_vtol_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_vtol_state@c_vehicle_type_vtol@@E$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum c_vehicle_type_vtol::e_vtol_state const c_enum_no_init<enum c_vehicle_type_vtol::e_vtol_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_vtol_state@c_vehicle_type_vtol@@E$0A@$03Us_default_enum_string_resolver@@@@2W4e_vtol_state@c_vehicle_type_vtol@@B"

// public: void c_vehicle_type_component::reset(long);
// public: void c_vehicle_type_component::handled_changed_vehicle_type(long);
// public: void c_vehicle_type_component::handle_deleted_object(long, long);
// public: void c_vehicle_type_component::accelerate_notify(long, union vector3d const *, union vector3d const *);
// public: void c_vehicle_type_component::set_velocity_notify(long, union vector3d const *, union vector3d const *);
// public: float c_vehicle_type_component::get_camera_yaw_scale(long);
// public: void c_vehicle_type_component::offset_camera_focus_position(long, union real_point3d *);
// public: bool c_vehicle_type_component::apply_custom_camera(long, struct s_unit_camera_info const *, struct s_observer_command *);
// public: bool c_vehicle_type_component::has_variable_camera_up(long) const;
// public: void c_vehicle_type_component::move(long);
// public: float c_vehicle_type_component::get_turret_power_fraction(long);
// public: void c_vehicle_type_component::adjust_gravity(long, float *);
// public: void c_vehicle_type_component::update_control(long);
// public: bool c_vehicle_type_component::should_override_deactivation(long);
// public: void c_vehicle_type_component::deplete_function_variables(long);
// public: void c_vehicle_type_component::update_physics(long, struct s_havok_vehicle_physics_instance *);
// public: bool c_vehicle_type_component::kills_riders_at_terminal_velocity(long);
// public: bool c_vehicle_type_component::physics_disabled(long);
// public: bool c_vehicle_type_component::is_stopped(long);
// public: void c_vehicle_type_component::create_effects(long);
// public: bool c_vehicle_type_component::vector_is_upsides_down(long, union vector3d const *);
// public: bool c_vehicle_type_component::compute_function_value(long, long, float *, bool *);
// public: void c_vehicle_type_component::start_trick(long, long);
// public: bool c_vehicle_type_component::is_running_trick(long);
// public: void c_vehicle_type_component::get_trick_reference_up(long, union vector3d *);
// public: void c_vehicle_type_component::get_trick_reference_frame(long, struct real_matrix4x3*) const;
// public: void c_vehicle_type_component::get_trick_desired_transform(long, struct real_matrix4x3*) const;
// public: void c_vehicle_type_component::finished_trick(long, struct matrix3x3const *);
// public: struct s_unit_trick_definition const * c_vehicle_type_component::get_current_trick_definition(long) const;
// public: long c_vehicle_type_component::get_trick_ticks_left(long) const;
// public: long c_vehicle_type_base::get_trick_ticks_left(long) const;
// public: class c_vehicle_auto_turret * c_vehicle_type_component::get_auto_turret(long);
// public: class c_vehicle_auto_turret * c_vehicle_type_turret::get_auto_turret(void);
// public: class c_vehicle_auto_turret * c_vehicle_type_guardian::get_auto_turret(void);
// public: void c_vehicle_type_component::set_auto_turret_damage_owner(long, long);
// public: bool c_vehicle_type_component::init_auto_turret(long, long, float, float, float, long);
// public: bool c_vehicle_type_component::auto_control(long);
// public: bool c_vehicle_type_component::get_auto_turret_damage_owner(long, struct s_damage_owner *);
// public: bool c_vehicle_type_component::is_e_braking(long);
// public: bool c_vehicle_type_component::is_altitude_locked(long);
// public: bool c_vehicle_type_vtol::is_altitude_locked(long);
// public: void c_vehicle_type_component::force_alternate_state(long, bool);
// public: bool c_vehicle_type_component::is_in_alternate_state(long);
// public: float c_vehicle_type_component::get_turn(long);
// public: float c_vehicle_type_human_jeep::get_turn(void) const;
// public: float c_vehicle_type_human_plane::get_turn(void) const;
// public: float c_vehicle_type_wolverine::get_turn(void) const;
// public: float c_vehicle_type_jackal_glider::get_turn(void) const;
// public: float c_vehicle_type_alien_scout::get_turn(void) const;
// public: float c_vehicle_type_alien_fighter::get_turn(void) const;
// public: float c_vehicle_type_chopper::get_turn(void) const;
// public: float c_vehicle_type_space_fighter::get_turn(void) const;
// public: void c_vehicle_type_component::force_flying(long);
// public: void c_vehicle_type_component::notify_in_soft_ceiling(long, union vector3d const *);
// public: long c_vehicle_type_component::get_active_soft_ceiling_normal(long, union vector3d *);
// public: struct s_vehicle_engine const * c_vehicle_type_component::get_engine(long);
// public: class c_vehicle_type_base * c_vehicle_type_component::get_type_base(void);
// public: class c_vehicle_type_human_tank * c_vehicle_type_component::get_type_human_tank(void);
// public: class c_vehicle_type_human_jeep * c_vehicle_type_component::get_type_human_jeep(void);
// public: class c_vehicle_type_human_plane * c_vehicle_type_component::get_type_human_plane(void);
// public: class c_vehicle_type_wolverine * c_vehicle_type_component::get_type_wolverine(void);
// public: class c_vehicle_type_alien_fighter * c_vehicle_type_component::get_type_alien_fighter(void);
// public: class c_vehicle_type_alien_scout * c_vehicle_type_component::get_type_alien_scout(void);
// public: class c_vehicle_type_jackal_glider * c_vehicle_type_component::get_type_jackal_glider(void);
// public: class c_vehicle_type_turret * c_vehicle_type_component::get_type_turret(void);
// public: class c_vehicle_type_mantis * c_vehicle_type_component::get_type_mantis(void);
// public: class c_vehicle_type_guardian * c_vehicle_type_component::get_type_guardian(void);
// public: class c_vehicle_type_vtol * c_vehicle_type_component::get_type_vtol(void);
// public: class c_vehicle_type_chopper * c_vehicle_type_component::get_type_chopper(void);
// public: class c_vehicle_type_boat * c_vehicle_type_component::get_type_boat(void);
// public: class c_vehicle_type_space_fighter * c_vehicle_type_component::get_type_space_fighter(void);
// public: class c_vehicle_type_revenant * c_vehicle_type_component::get_type_revenant(void);

//public: void c_vehicle_type_component::reset(long)
//{
//    mangled_ppc("?reset@c_vehicle_type_component@@QAAXJ@Z");
//};

//public: void c_vehicle_type_component::handled_changed_vehicle_type(long)
//{
//    mangled_ppc("?handled_changed_vehicle_type@c_vehicle_type_component@@QAAXJ@Z");
//};

//public: void c_vehicle_type_component::handle_deleted_object(long, long)
//{
//    mangled_ppc("?handle_deleted_object@c_vehicle_type_component@@QAAXJJ@Z");
//};

//public: void c_vehicle_type_component::accelerate_notify(long, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?accelerate_notify@c_vehicle_type_component@@QAAXJPBTvector3d@@0@Z");
//};

//public: void c_vehicle_type_component::set_velocity_notify(long, union vector3d const *, union vector3d const *)
//{
//    mangled_ppc("?set_velocity_notify@c_vehicle_type_component@@QAAXJPBTvector3d@@0@Z");
//};

//public: float c_vehicle_type_component::get_camera_yaw_scale(long)
//{
//    mangled_ppc("?get_camera_yaw_scale@c_vehicle_type_component@@QAAMJ@Z");
//};

//public: void c_vehicle_type_component::offset_camera_focus_position(long, union real_point3d *)
//{
//    mangled_ppc("?offset_camera_focus_position@c_vehicle_type_component@@QAAXJPATreal_point3d@@@Z");
//};

//public: bool c_vehicle_type_component::apply_custom_camera(long, struct s_unit_camera_info const *, struct s_observer_command *)
//{
//    mangled_ppc("?apply_custom_camera@c_vehicle_type_component@@QAA_NJPBUs_unit_camera_info@@PAUs_observer_command@@@Z");
//};

//public: bool c_vehicle_type_component::has_variable_camera_up(long) const
//{
//    mangled_ppc("?has_variable_camera_up@c_vehicle_type_component@@QBA_NJ@Z");
//};

//public: void c_vehicle_type_component::move(long)
//{
//    mangled_ppc("?move@c_vehicle_type_component@@QAAXJ@Z");
//};

//public: float c_vehicle_type_component::get_turret_power_fraction(long)
//{
//    mangled_ppc("?get_turret_power_fraction@c_vehicle_type_component@@QAAMJ@Z");
//};

//public: void c_vehicle_type_component::adjust_gravity(long, float *)
//{
//    mangled_ppc("?adjust_gravity@c_vehicle_type_component@@QAAXJPAM@Z");
//};

//public: void c_vehicle_type_component::update_control(long)
//{
//    mangled_ppc("?update_control@c_vehicle_type_component@@QAAXJ@Z");
//};

//public: bool c_vehicle_type_component::should_override_deactivation(long)
//{
//    mangled_ppc("?should_override_deactivation@c_vehicle_type_component@@QAA_NJ@Z");
//};

//public: void c_vehicle_type_component::deplete_function_variables(long)
//{
//    mangled_ppc("?deplete_function_variables@c_vehicle_type_component@@QAAXJ@Z");
//};

//public: void c_vehicle_type_component::update_physics(long, struct s_havok_vehicle_physics_instance *)
//{
//    mangled_ppc("?update_physics@c_vehicle_type_component@@QAAXJPAUs_havok_vehicle_physics_instance@@@Z");
//};

//public: bool c_vehicle_type_component::kills_riders_at_terminal_velocity(long)
//{
//    mangled_ppc("?kills_riders_at_terminal_velocity@c_vehicle_type_component@@QAA_NJ@Z");
//};

//public: bool c_vehicle_type_component::physics_disabled(long)
//{
//    mangled_ppc("?physics_disabled@c_vehicle_type_component@@QAA_NJ@Z");
//};

//public: bool c_vehicle_type_component::is_stopped(long)
//{
//    mangled_ppc("?is_stopped@c_vehicle_type_component@@QAA_NJ@Z");
//};

//public: void c_vehicle_type_component::create_effects(long)
//{
//    mangled_ppc("?create_effects@c_vehicle_type_component@@QAAXJ@Z");
//};

//public: bool c_vehicle_type_component::vector_is_upsides_down(long, union vector3d const *)
//{
//    mangled_ppc("?vector_is_upsides_down@c_vehicle_type_component@@QAA_NJPBTvector3d@@@Z");
//};

//public: bool c_vehicle_type_component::compute_function_value(long, long, float *, bool *)
//{
//    mangled_ppc("?compute_function_value@c_vehicle_type_component@@QAA_NJJPAMPA_N@Z");
//};

//public: void c_vehicle_type_component::start_trick(long, long)
//{
//    mangled_ppc("?start_trick@c_vehicle_type_component@@QAAXJJ@Z");
//};

//public: bool c_vehicle_type_component::is_running_trick(long)
//{
//    mangled_ppc("?is_running_trick@c_vehicle_type_component@@QAA_NJ@Z");
//};

//public: void c_vehicle_type_component::get_trick_reference_up(long, union vector3d *)
//{
//    mangled_ppc("?get_trick_reference_up@c_vehicle_type_component@@QAAXJPATvector3d@@@Z");
//};

//public: void c_vehicle_type_component::get_trick_reference_frame(long, struct real_matrix4x3*) const
//{
//    mangled_ppc("?get_trick_reference_frame@c_vehicle_type_component@@QBAXJPAUreal_matrix4x3@@@Z");
//};

//public: void c_vehicle_type_component::get_trick_desired_transform(long, struct real_matrix4x3*) const
//{
//    mangled_ppc("?get_trick_desired_transform@c_vehicle_type_component@@QBAXJPAUreal_matrix4x3@@@Z");
//};

//public: void c_vehicle_type_component::finished_trick(long, struct matrix3x3const *)
//{
//    mangled_ppc("?finished_trick@c_vehicle_type_component@@QAAXJPBUmatrix3x3@@@Z");
//};

//public: struct s_unit_trick_definition const * c_vehicle_type_component::get_current_trick_definition(long) const
//{
//    mangled_ppc("?get_current_trick_definition@c_vehicle_type_component@@QBAPBUs_unit_trick_definition@@J@Z");
//};

//public: long c_vehicle_type_component::get_trick_ticks_left(long) const
//{
//    mangled_ppc("?get_trick_ticks_left@c_vehicle_type_component@@QBAJJ@Z");
//};

//public: long c_vehicle_type_base::get_trick_ticks_left(long) const
//{
//    mangled_ppc("?get_trick_ticks_left@c_vehicle_type_base@@QBAJJ@Z");
//};

//public: class c_vehicle_auto_turret * c_vehicle_type_component::get_auto_turret(long)
//{
//    mangled_ppc("?get_auto_turret@c_vehicle_type_component@@QAAPAVc_vehicle_auto_turret@@J@Z");
//};

//public: class c_vehicle_auto_turret * c_vehicle_type_turret::get_auto_turret(void)
//{
//    mangled_ppc("?get_auto_turret@c_vehicle_type_turret@@QAAPAVc_vehicle_auto_turret@@XZ");
//};

//public: class c_vehicle_auto_turret * c_vehicle_type_guardian::get_auto_turret(void)
//{
//    mangled_ppc("?get_auto_turret@c_vehicle_type_guardian@@QAAPAVc_vehicle_auto_turret@@XZ");
//};

//public: void c_vehicle_type_component::set_auto_turret_damage_owner(long, long)
//{
//    mangled_ppc("?set_auto_turret_damage_owner@c_vehicle_type_component@@QAAXJJ@Z");
//};

//public: bool c_vehicle_type_component::init_auto_turret(long, long, float, float, float, long)
//{
//    mangled_ppc("?init_auto_turret@c_vehicle_type_component@@QAA_NJJMMMJ@Z");
//};

//public: bool c_vehicle_type_component::auto_control(long)
//{
//    mangled_ppc("?auto_control@c_vehicle_type_component@@QAA_NJ@Z");
//};

//public: bool c_vehicle_type_component::get_auto_turret_damage_owner(long, struct s_damage_owner *)
//{
//    mangled_ppc("?get_auto_turret_damage_owner@c_vehicle_type_component@@QAA_NJPAUs_damage_owner@@@Z");
//};

//public: bool c_vehicle_type_component::is_e_braking(long)
//{
//    mangled_ppc("?is_e_braking@c_vehicle_type_component@@QAA_NJ@Z");
//};

//public: bool c_vehicle_type_component::is_altitude_locked(long)
//{
//    mangled_ppc("?is_altitude_locked@c_vehicle_type_component@@QAA_NJ@Z");
//};

//public: bool c_vehicle_type_vtol::is_altitude_locked(long)
//{
//    mangled_ppc("?is_altitude_locked@c_vehicle_type_vtol@@QAA_NJ@Z");
//};

//public: void c_vehicle_type_component::force_alternate_state(long, bool)
//{
//    mangled_ppc("?force_alternate_state@c_vehicle_type_component@@QAAXJ_N@Z");
//};

//public: bool c_vehicle_type_component::is_in_alternate_state(long)
//{
//    mangled_ppc("?is_in_alternate_state@c_vehicle_type_component@@QAA_NJ@Z");
//};

//public: float c_vehicle_type_component::get_turn(long)
//{
//    mangled_ppc("?get_turn@c_vehicle_type_component@@QAAMJ@Z");
//};

//public: float c_vehicle_type_human_jeep::get_turn(void) const
//{
//    mangled_ppc("?get_turn@c_vehicle_type_human_jeep@@QBAMXZ");
//};

//public: float c_vehicle_type_human_plane::get_turn(void) const
//{
//    mangled_ppc("?get_turn@c_vehicle_type_human_plane@@QBAMXZ");
//};

//public: float c_vehicle_type_wolverine::get_turn(void) const
//{
//    mangled_ppc("?get_turn@c_vehicle_type_wolverine@@QBAMXZ");
//};

//public: float c_vehicle_type_jackal_glider::get_turn(void) const
//{
//    mangled_ppc("?get_turn@c_vehicle_type_jackal_glider@@QBAMXZ");
//};

//public: float c_vehicle_type_alien_scout::get_turn(void) const
//{
//    mangled_ppc("?get_turn@c_vehicle_type_alien_scout@@QBAMXZ");
//};

//public: float c_vehicle_type_alien_fighter::get_turn(void) const
//{
//    mangled_ppc("?get_turn@c_vehicle_type_alien_fighter@@QBAMXZ");
//};

//public: float c_vehicle_type_chopper::get_turn(void) const
//{
//    mangled_ppc("?get_turn@c_vehicle_type_chopper@@QBAMXZ");
//};

//public: float c_vehicle_type_space_fighter::get_turn(void) const
//{
//    mangled_ppc("?get_turn@c_vehicle_type_space_fighter@@QBAMXZ");
//};

//public: void c_vehicle_type_component::force_flying(long)
//{
//    mangled_ppc("?force_flying@c_vehicle_type_component@@QAAXJ@Z");
//};

//public: void c_vehicle_type_component::notify_in_soft_ceiling(long, union vector3d const *)
//{
//    mangled_ppc("?notify_in_soft_ceiling@c_vehicle_type_component@@QAAXJPBTvector3d@@@Z");
//};

//public: long c_vehicle_type_component::get_active_soft_ceiling_normal(long, union vector3d *)
//{
//    mangled_ppc("?get_active_soft_ceiling_normal@c_vehicle_type_component@@QAAJJPATvector3d@@@Z");
//};

//public: struct s_vehicle_engine const * c_vehicle_type_component::get_engine(long)
//{
//    mangled_ppc("?get_engine@c_vehicle_type_component@@QAAPBUs_vehicle_engine@@J@Z");
//};

//public: class c_vehicle_type_base * c_vehicle_type_component::get_type_base(void)
//{
//    mangled_ppc("?get_type_base@c_vehicle_type_component@@QAAPAVc_vehicle_type_base@@XZ");
//};

//public: class c_vehicle_type_human_tank * c_vehicle_type_component::get_type_human_tank(void)
//{
//    mangled_ppc("?get_type_human_tank@c_vehicle_type_component@@QAAPAVc_vehicle_type_human_tank@@XZ");
//};

//public: class c_vehicle_type_human_jeep * c_vehicle_type_component::get_type_human_jeep(void)
//{
//    mangled_ppc("?get_type_human_jeep@c_vehicle_type_component@@QAAPAVc_vehicle_type_human_jeep@@XZ");
//};

//public: class c_vehicle_type_human_plane * c_vehicle_type_component::get_type_human_plane(void)
//{
//    mangled_ppc("?get_type_human_plane@c_vehicle_type_component@@QAAPAVc_vehicle_type_human_plane@@XZ");
//};

//public: class c_vehicle_type_wolverine * c_vehicle_type_component::get_type_wolverine(void)
//{
//    mangled_ppc("?get_type_wolverine@c_vehicle_type_component@@QAAPAVc_vehicle_type_wolverine@@XZ");
//};

//public: class c_vehicle_type_alien_fighter * c_vehicle_type_component::get_type_alien_fighter(void)
//{
//    mangled_ppc("?get_type_alien_fighter@c_vehicle_type_component@@QAAPAVc_vehicle_type_alien_fighter@@XZ");
//};

//public: class c_vehicle_type_alien_scout * c_vehicle_type_component::get_type_alien_scout(void)
//{
//    mangled_ppc("?get_type_alien_scout@c_vehicle_type_component@@QAAPAVc_vehicle_type_alien_scout@@XZ");
//};

//public: class c_vehicle_type_jackal_glider * c_vehicle_type_component::get_type_jackal_glider(void)
//{
//    mangled_ppc("?get_type_jackal_glider@c_vehicle_type_component@@QAAPAVc_vehicle_type_jackal_glider@@XZ");
//};

//public: class c_vehicle_type_turret * c_vehicle_type_component::get_type_turret(void)
//{
//    mangled_ppc("?get_type_turret@c_vehicle_type_component@@QAAPAVc_vehicle_type_turret@@XZ");
//};

//public: class c_vehicle_type_mantis * c_vehicle_type_component::get_type_mantis(void)
//{
//    mangled_ppc("?get_type_mantis@c_vehicle_type_component@@QAAPAVc_vehicle_type_mantis@@XZ");
//};

//public: class c_vehicle_type_guardian * c_vehicle_type_component::get_type_guardian(void)
//{
//    mangled_ppc("?get_type_guardian@c_vehicle_type_component@@QAAPAVc_vehicle_type_guardian@@XZ");
//};

//public: class c_vehicle_type_vtol * c_vehicle_type_component::get_type_vtol(void)
//{
//    mangled_ppc("?get_type_vtol@c_vehicle_type_component@@QAAPAVc_vehicle_type_vtol@@XZ");
//};

//public: class c_vehicle_type_chopper * c_vehicle_type_component::get_type_chopper(void)
//{
//    mangled_ppc("?get_type_chopper@c_vehicle_type_component@@QAAPAVc_vehicle_type_chopper@@XZ");
//};

//public: class c_vehicle_type_boat * c_vehicle_type_component::get_type_boat(void)
//{
//    mangled_ppc("?get_type_boat@c_vehicle_type_component@@QAAPAVc_vehicle_type_boat@@XZ");
//};

//public: class c_vehicle_type_space_fighter * c_vehicle_type_component::get_type_space_fighter(void)
//{
//    mangled_ppc("?get_type_space_fighter@c_vehicle_type_component@@QAAPAVc_vehicle_type_space_fighter@@XZ");
//};

//public: class c_vehicle_type_revenant * c_vehicle_type_component::get_type_revenant(void)
//{
//    mangled_ppc("?get_type_revenant@c_vehicle_type_component@@QAAPAVc_vehicle_type_revenant@@XZ");
//};

