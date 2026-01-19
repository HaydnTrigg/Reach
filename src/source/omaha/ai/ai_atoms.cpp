/* ---------- headers */

#include "omaha\ai\ai_atoms.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_839AB838; // "except_record_839AB838"
// struct s_atom_definition g_atom_pause; // "?g_atom_pause@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_play_sound; // "?g_atom_play_sound@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_sync_action; // "?g_atom_sync_action@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_face; // "?g_atom_face@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_custom_animation; // "?g_atom_custom_animation@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_go_to; // "?g_atom_go_to@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_go_by; // "?g_atom_go_by@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_go_to_and_face; // "?g_atom_go_to_and_face@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_fly_to; // "?g_atom_fly_to@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_fly_by; // "?g_atom_fly_by@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_fly_to_and_face; // "?g_atom_fly_to_and_face@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_go_to_and_posture; // "?g_atom_go_to_and_posture@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_move_direction; // "?g_atom_move_direction@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_move_towards_point; // "?g_atom_move_towards_point@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_move_towards; // "?g_atom_move_towards@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_grenade; // "?g_atom_grenade@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_equipment; // "?g_atom_equipment@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_jump; // "?g_atom_jump@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_targeted_jump; // "?g_atom_targeted_jump@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_vehicle; // "?g_atom_vehicle@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_recording; // "?g_atom_recording@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_action; // "?g_atom_action@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_vocalize; // "?g_atom_vocalize@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_die; // "?g_atom_die@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_behavior; // "?g_atom_behavior@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_formation; // "?g_atom_formation@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_deploy_turret; // "?g_atom_deploy_turret@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_approach; // "?g_atom_approach@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_melee; // "?g_atom_melee@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_smash; // "?g_atom_smash@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_swarm_to; // "?g_atom_swarm_to@@3Us_atom_definition@@A"
// struct s_atom_definition g_atom_swarm_from; // "?g_atom_swarm_from@@3Us_atom_definition@@A"

// bool pause_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short pause_update(long, long, struct cs_command *, struct s_atom_control *, long);
// short pause_progress(long, long, struct cs_command *, struct s_atom_control *, long);
// bool sync_action_atom_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short sync_action_atom_update(long, long, struct cs_command *, struct s_atom_control *, long);
// bool face_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short face_update(long, long, struct cs_command *, struct s_atom_control *, long);
// void face_atom_handle_deleted_object(long, long, long);
// short face_atom_progress(long, long, struct cs_command *, struct s_atom_control *, long);
// bool custom_animation_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short custom_animation_update(long, long, struct cs_command *, struct s_atom_control *, long);
// short custom_animation_progress(long, long, struct cs_command *, struct s_atom_control *, long);
// bool move_atom_start(long, long, struct cs_command *, struct s_atom_control *, long);
// bool cs_get_point_from_command_script(struct cs_command const *, struct cs_point *);
// bool cs_movement_perform(long, struct cs_command const *, long, bool *);
// short move_atom_update(long, long, struct cs_command *, struct s_atom_control *, long);
// short move_atom_progress(long, long, struct cs_command *, struct s_atom_control *, long);
// bool move_direction_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short move_direction_update(long, long, struct cs_command *, struct s_atom_control *, long);
// void cs_directmovement_update_facing(long, long, struct s_atom_control *);
// bool move_towards_point_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short move_towards_point_update(long, long, struct cs_command *, struct s_atom_control *, long);
// bool move_towards_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short move_towards_update(long, long, struct cs_command *, struct s_atom_control *, long);
// bool grenade_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short grenade_update(long, long, struct cs_command *, struct s_atom_control *, long);
// bool equipment_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short equipment_update(long, long, struct cs_command *, struct s_atom_control *, long);
// bool jump_start(long, long, struct cs_command *, struct s_atom_control *, long);
// bool jump_targeted_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short jump_update(long, long, struct cs_command *, struct s_atom_control *, long);
// bool vehicle_atom_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short vehicle_atom_update(long, long, struct cs_command *, struct s_atom_control *, long);
// void vehicle_atom_handle_deleted_object(long, long, long);
// bool recording_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short recording_update(long, long, struct cs_command *, struct s_atom_control *, long);
// bool action_atom_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short action_atom_update(long, long, struct cs_command *, struct s_atom_control *, long);
// bool vocalize_atom_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short vocalize_atom_update(long, long, struct cs_command *, struct s_atom_control *, long);
// bool die_atom_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short die_atom_update(long, long, struct cs_command *, struct s_atom_control *, long);
// short behavior_atom_update(long, long, struct cs_command *, struct s_atom_control *, long);
// short formation_atom_update(long, long, struct cs_command *, struct s_atom_control *, long);
// short deploy_atom_update(long, long, struct cs_command *, struct s_atom_control *, long);
// bool approach_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short approach_update(long, long, struct cs_command *, struct s_atom_control *, long);
// void cs_approach_reset(long);
// void approach_atom_end(long, long, struct s_atom_control *, long);
// void approach_atom_handle_deleted_object(long, long, long);
// bool melee_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short melee_update(long, long, struct cs_command *, struct s_atom_control *, long);
// bool smash_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short smash_update(long, long, struct cs_command *, struct s_atom_control *, long);
// bool swarm_to_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short swarm_to_update(long, long, struct cs_command *, struct s_atom_control *, long);
// bool swarm_from_start(long, long, struct cs_command *, struct s_atom_control *, long);
// short swarm_from_update(long, long, struct cs_command *, struct s_atom_control *, long);

//bool pause_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?pause_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short pause_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?pause_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short pause_progress(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?pause_progress@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool sync_action_atom_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?sync_action_atom_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short sync_action_atom_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?sync_action_atom_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool face_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?face_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short face_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?face_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//void face_atom_handle_deleted_object(long, long, long)
//{
//    mangled_ppc("?face_atom_handle_deleted_object@@YAXJJJ@Z");
//};

//short face_atom_progress(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?face_atom_progress@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool custom_animation_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?custom_animation_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short custom_animation_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?custom_animation_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short custom_animation_progress(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?custom_animation_progress@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool move_atom_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?move_atom_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool cs_get_point_from_command_script(struct cs_command const *, struct cs_point *)
//{
//    mangled_ppc("?cs_get_point_from_command_script@@YA_NPBUcs_command@@PAUcs_point@@@Z");
//};

//bool cs_movement_perform(long, struct cs_command const *, long, bool *)
//{
//    mangled_ppc("?cs_movement_perform@@YA_NJPBUcs_command@@JPA_N@Z");
//};

//short move_atom_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?move_atom_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short move_atom_progress(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?move_atom_progress@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool move_direction_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?move_direction_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short move_direction_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?move_direction_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//void cs_directmovement_update_facing(long, long, struct s_atom_control *)
//{
//    mangled_ppc("?cs_directmovement_update_facing@@YAXJJPAUs_atom_control@@@Z");
//};

//bool move_towards_point_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?move_towards_point_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short move_towards_point_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?move_towards_point_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool move_towards_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?move_towards_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short move_towards_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?move_towards_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool grenade_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?grenade_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short grenade_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?grenade_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool equipment_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?equipment_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short equipment_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?equipment_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool jump_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?jump_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool jump_targeted_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?jump_targeted_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short jump_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?jump_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool vehicle_atom_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?vehicle_atom_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short vehicle_atom_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?vehicle_atom_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//void vehicle_atom_handle_deleted_object(long, long, long)
//{
//    mangled_ppc("?vehicle_atom_handle_deleted_object@@YAXJJJ@Z");
//};

//bool recording_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?recording_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short recording_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?recording_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool action_atom_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?action_atom_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short action_atom_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?action_atom_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool vocalize_atom_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?vocalize_atom_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short vocalize_atom_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?vocalize_atom_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool die_atom_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?die_atom_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short die_atom_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?die_atom_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short behavior_atom_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?behavior_atom_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short formation_atom_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?formation_atom_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short deploy_atom_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?deploy_atom_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool approach_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?approach_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short approach_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?approach_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//void cs_approach_reset(long)
//{
//    mangled_ppc("?cs_approach_reset@@YAXJ@Z");
//};

//void approach_atom_end(long, long, struct s_atom_control *, long)
//{
//    mangled_ppc("?approach_atom_end@@YAXJJPAUs_atom_control@@J@Z");
//};

//void approach_atom_handle_deleted_object(long, long, long)
//{
//    mangled_ppc("?approach_atom_handle_deleted_object@@YAXJJJ@Z");
//};

//bool melee_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?melee_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short melee_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?melee_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool smash_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?smash_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short smash_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?smash_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool swarm_to_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?swarm_to_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short swarm_to_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?swarm_to_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//bool swarm_from_start(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?swarm_from_start@@YA_NJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

//short swarm_from_update(long, long, struct cs_command *, struct s_atom_control *, long)
//{
//    mangled_ppc("?swarm_from_update@@YAFJJPAUcs_command@@PAUs_atom_control@@J@Z");
//};

