/* ---------- headers */

#include "omaha\motor\motor_system_biped.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool debug_animation_camera_offset_disable; // "?debug_animation_camera_offset_disable@@3_NA"

// void biped_update_desired_facing(long, bool, short *, union vector3d *, bool *);
// void biped_move_calculate_controlled_by_aiming(long, union vector3d const *, union vector3d const *, union vector3d const *, bool, union vector3d *, union vector3d *, union vector3d *, short *);
// void biped_build_axes_from_desired_facing(union vector3d const *, union vector3d const *, union vector3d const *, union vector3d *);
// void biped_get_control_vectors(long, bool, union vector3d *, union vector3d *, union vector3d *);
// void biped_set_forward_vector(long, union vector3d const *);
// void biped_snap_facing_to_desired_facing(long);
// bool motor_system_biped_physics_preupdate_moving(long, struct s_character_physics_update_input_datum *, struct s_character_physics_update_output_datum *, bool, bool, float, bool, bool);
// void biped_initialize_character_physics_update_input(long, struct s_character_physics_update_input_datum *, bool, bool, float, bool, bool);
// float biped_get_player_specific_scale(long);
// void motor_system_biped_physics_postupdate_moving(long, struct s_character_physics_update_input_datum const *, struct s_character_physics_update_output_datum *, bool *);
// void biped_physics_update_crouch(long, struct s_character_physics_update_output_datum *, bool *);
// float biped_calculate_crouch_delta(long);
// void biped_clear_pathfinding_cache(long);
// void biped_update_pathfinding_cache(long, struct s_character_physics_move_output_datum const *);
// public: unsigned int c_havok_contact_point::get_environment_shape_key(void) const;
// public: long c_havok_contact_point::get_structure_bsp_index(void) const;
// void values_from_shape_key(long *, long *, long *, unsigned int);
// bool biped_calculate_crouch_velocity_delta(long, float *);
// bool biped_falling_damage(long);
// void biped_adjust_aiming(long, union euler_angles2d *, float *, float *);
// bool motor_system_biped_move(long, bool, bool, bool, bool, struct s_character_physics_move_output_datum *);
// void biped_initialize_character_physics_move_input(long, struct s_character_physics_move_input_datum *, bool, bool, bool, bool, bool);
// void motor_system_biped_clear_crouch_velocity(long);
// bool biped_can_melee_target_unit(long, long);
// void biped_ground_plane_fix_transform_to_physics(long, struct real_matrix4x3*);
// void biped_ground_plane_fix_transform_from_physics(long, struct real_matrix4x3*);

//void biped_update_desired_facing(long, bool, short *, union vector3d *, bool *)
//{
//    mangled_ppc("?biped_update_desired_facing@@YAXJ_NPAFPATvector3d@@PA_N@Z");
//};

//void biped_move_calculate_controlled_by_aiming(long, union vector3d const *, union vector3d const *, union vector3d const *, bool, union vector3d *, union vector3d *, union vector3d *, short *)
//{
//    mangled_ppc("?biped_move_calculate_controlled_by_aiming@@YAXJPBTvector3d@@00_NPAT1@22PAF@Z");
//};

//void biped_build_axes_from_desired_facing(union vector3d const *, union vector3d const *, union vector3d const *, union vector3d *)
//{
//    mangled_ppc("?biped_build_axes_from_desired_facing@@YAXPBTvector3d@@00PAT1@@Z");
//};

//void biped_get_control_vectors(long, bool, union vector3d *, union vector3d *, union vector3d *)
//{
//    mangled_ppc("?biped_get_control_vectors@@YAXJ_NPATvector3d@@11@Z");
//};

//void biped_set_forward_vector(long, union vector3d const *)
//{
//    mangled_ppc("?biped_set_forward_vector@@YAXJPBTvector3d@@@Z");
//};

//void biped_snap_facing_to_desired_facing(long)
//{
//    mangled_ppc("?biped_snap_facing_to_desired_facing@@YAXJ@Z");
//};

//bool motor_system_biped_physics_preupdate_moving(long, struct s_character_physics_update_input_datum *, struct s_character_physics_update_output_datum *, bool, bool, float, bool, bool)
//{
//    mangled_ppc("?motor_system_biped_physics_preupdate_moving@@YA_NJPAUs_character_physics_update_input_datum@@PAUs_character_physics_update_output_datum@@_N2M22@Z");
//};

//void biped_initialize_character_physics_update_input(long, struct s_character_physics_update_input_datum *, bool, bool, float, bool, bool)
//{
//    mangled_ppc("?biped_initialize_character_physics_update_input@@YAXJPAUs_character_physics_update_input_datum@@_N1M11@Z");
//};

//float biped_get_player_specific_scale(long)
//{
//    mangled_ppc("?biped_get_player_specific_scale@@YAMJ@Z");
//};

//void motor_system_biped_physics_postupdate_moving(long, struct s_character_physics_update_input_datum const *, struct s_character_physics_update_output_datum *, bool *)
//{
//    mangled_ppc("?motor_system_biped_physics_postupdate_moving@@YAXJPBUs_character_physics_update_input_datum@@PAUs_character_physics_update_output_datum@@PA_N@Z");
//};

//void biped_physics_update_crouch(long, struct s_character_physics_update_output_datum *, bool *)
//{
//    mangled_ppc("?biped_physics_update_crouch@@YAXJPAUs_character_physics_update_output_datum@@PA_N@Z");
//};

//float biped_calculate_crouch_delta(long)
//{
//    mangled_ppc("?biped_calculate_crouch_delta@@YAMJ@Z");
//};

//void biped_clear_pathfinding_cache(long)
//{
//    mangled_ppc("?biped_clear_pathfinding_cache@@YAXJ@Z");
//};

//void biped_update_pathfinding_cache(long, struct s_character_physics_move_output_datum const *)
//{
//    mangled_ppc("?biped_update_pathfinding_cache@@YAXJPBUs_character_physics_move_output_datum@@@Z");
//};

//public: unsigned int c_havok_contact_point::get_environment_shape_key(void) const
//{
//    mangled_ppc("?get_environment_shape_key@c_havok_contact_point@@QBAIXZ");
//};

//public: long c_havok_contact_point::get_structure_bsp_index(void) const
//{
//    mangled_ppc("?get_structure_bsp_index@c_havok_contact_point@@QBAJXZ");
//};

//void values_from_shape_key(long *, long *, long *, unsigned int)
//{
//    mangled_ppc("?values_from_shape_key@@YAXPAJ00I@Z");
//};

//bool biped_calculate_crouch_velocity_delta(long, float *)
//{
//    mangled_ppc("?biped_calculate_crouch_velocity_delta@@YA_NJPAM@Z");
//};

//bool biped_falling_damage(long)
//{
//    mangled_ppc("?biped_falling_damage@@YA_NJ@Z");
//};

//void biped_adjust_aiming(long, union euler_angles2d *, float *, float *)
//{
//    mangled_ppc("?biped_adjust_aiming@@YAXJPATeuler_angles2d@@PAM1@Z");
//};

//bool motor_system_biped_move(long, bool, bool, bool, bool, struct s_character_physics_move_output_datum *)
//{
//    mangled_ppc("?motor_system_biped_move@@YA_NJ_N000PAUs_character_physics_move_output_datum@@@Z");
//};

//void biped_initialize_character_physics_move_input(long, struct s_character_physics_move_input_datum *, bool, bool, bool, bool, bool)
//{
//    mangled_ppc("?biped_initialize_character_physics_move_input@@YAXJPAUs_character_physics_move_input_datum@@_N1111@Z");
//};

//void motor_system_biped_clear_crouch_velocity(long)
//{
//    mangled_ppc("?motor_system_biped_clear_crouch_velocity@@YAXJ@Z");
//};

//bool biped_can_melee_target_unit(long, long)
//{
//    mangled_ppc("?biped_can_melee_target_unit@@YA_NJJ@Z");
//};

//void biped_ground_plane_fix_transform_to_physics(long, struct real_matrix4x3*)
//{
//    mangled_ppc("?biped_ground_plane_fix_transform_to_physics@@YAXJPAUreal_matrix4x3@@@Z");
//};

//void biped_ground_plane_fix_transform_from_physics(long, struct real_matrix4x3*)
//{
//    mangled_ppc("?biped_ground_plane_fix_transform_from_physics@@YAXJPAUreal_matrix4x3@@@Z");
//};

