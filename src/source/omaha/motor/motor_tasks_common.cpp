/* ---------- headers */

#include "omaha\motor\motor_tasks_common.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_motor_task_definition g_biped_animation_task; // "?g_biped_animation_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_unit_die_task; // "?g_unit_die_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_biped_stun_task; // "?g_biped_stun_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_unit_enter_task; // "?g_unit_enter_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_unit_exit_task; // "?g_unit_exit_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_biped_accelerate_task; // "?g_biped_accelerate_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_posture_exit_task; // "?g_posture_exit_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_weapon_animation_task; // "?g_weapon_animation_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_weapon_stow_task; // "?g_weapon_stow_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_weapon_draw_task; // "?g_weapon_draw_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_grenade_task; // "?g_grenade_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_equipment_task; // "?g_equipment_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_melee_task; // "?g_melee_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_ping_task; // "?g_ping_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_biped_posture_ping_task; // "?g_biped_posture_ping_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_biped_posture_animation_task; // "?g_biped_posture_animation_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_biped_force_airborne_task; // "?g_biped_force_airborne_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_creature_default_task; // "?g_creature_default_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_biped_force_heavy_task; // "?g_biped_force_heavy_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_biped_leap_anticipation_task; // "?g_biped_leap_anticipation_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_biped_leap_recovery_task; // "?g_biped_leap_recovery_task@@3Us_motor_task_definition@@A"
// struct s_motor_task_definition g_unit_synchronized_animation; // "?g_unit_synchronized_animation@@3Us_motor_task_definition@@A"

// enum e_motor_result animation_task_submit(long, class c_motor_request_base const *);
// enum e_motor_result animated_task_submit(long, enum e_motor_task, class c_motor_request_base const *);
// enum e_motor_result unit_die_submit(long, class c_motor_request_base const *);
// enum e_motor_result biped_stun_submit(long, class c_motor_request_base const *);
// enum e_motor_result unit_enter_submit(long, class c_motor_request_base const *);
// bool unit_enter_finished(long, class c_motor_task *);
// enum e_motor_result unit_exit_submit(long, class c_motor_request_base const *);
// bool unit_exit_finished(long, class c_motor_task *);
// enum e_motor_result biped_accelerate_submit(long, class c_motor_request_base const *);
// void biped_accelerate(long, union vector3d const *, union real_point3d const *);
// enum e_motor_result posture_exit_submit(long, class c_motor_request_base const *);
// bool posture_exit_finished(long, class c_motor_task *);
// bool posture_exit_interrupted(long, class c_motor_task *);
// enum e_motor_result weapon_animation_submit(long, class c_motor_request_base const *);
// bool weapon_animation_finished(long, class c_motor_task *);
// enum e_motor_result weapon_stow_submit(long, class c_motor_request_base const *);
// bool weapon_stow_finished(long, class c_motor_task *);
// enum e_motor_result weapon_draw_submit(long, class c_motor_request_base const *);
// bool weapon_draw_event(long, class c_motor_task *, enum e_motor_event);
// bool weapon_draw_interrupted(long, class c_motor_task *);
// enum e_motor_result throw_grenade_submit(long, class c_motor_request_base const *);
// enum e_motor_result throw_equipment_submit(long, class c_motor_request_base const *);
// enum e_motor_result melee_task_submit(long, class c_motor_request_base const *);
// void motor_ping_get_animation_data(short, long *, long *, long *);
// enum e_motor_result ping_task_submit(long, class c_motor_request_base const *);
// public: float c_model_animation::get_override_blend_in_time(void) const;
// enum e_motor_result posture_ping_task_submit(long, class c_motor_request_base const *);
// public: class c_motor_request_ping & c_motor_request_ping::operator=(class c_motor_request_ping const &);
// public: class c_motor_request_base & c_motor_request_base::operator=(class c_motor_request_base const &);
// enum e_motor_result posture_animation_task_submit(long, class c_motor_request_base const *);
// enum e_motor_result biped_force_airborne_submit(long, class c_motor_request_base const *);
// bool creature_ground_default_finished(long, class c_motor_task *);
// enum e_motor_result biped_force_heavy_submit(long, class c_motor_request_base const *);
// enum e_motor_result leap_anticipation_task_submit(long, class c_motor_request_base const *);
// enum e_motor_result leap_recovery_task_submit(long, class c_motor_request_base const *);
// enum e_motor_result sync_action_animation_submit(long, class c_motor_request_base const *);
// bool sync_action_animation_update(long, class c_motor_task *);
// bool sync_action_animation_finished(long, class c_motor_task *);
// bool sync_action_animation_motor_event(long, class c_motor_task *, enum e_motor_event);
// bool sync_action_animation_interrupted(long, class c_motor_task *);

//enum e_motor_result animation_task_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?animation_task_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result animated_task_submit(long, enum e_motor_task, class c_motor_request_base const *)
//{
//    mangled_ppc("?animated_task_submit@@YA?AW4e_motor_result@@JW4e_motor_task@@PBVc_motor_request_base@@@Z");
//};

//enum e_motor_result unit_die_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?unit_die_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result biped_stun_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_stun_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result unit_enter_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?unit_enter_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool unit_enter_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?unit_enter_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result unit_exit_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?unit_exit_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool unit_exit_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?unit_exit_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result biped_accelerate_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_accelerate_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//void biped_accelerate(long, union vector3d const *, union real_point3d const *)
//{
//    mangled_ppc("?biped_accelerate@@YAXJPBTvector3d@@PBTreal_point3d@@@Z");
//};

//enum e_motor_result posture_exit_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?posture_exit_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool posture_exit_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?posture_exit_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//bool posture_exit_interrupted(long, class c_motor_task *)
//{
//    mangled_ppc("?posture_exit_interrupted@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result weapon_animation_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?weapon_animation_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool weapon_animation_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?weapon_animation_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result weapon_stow_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?weapon_stow_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool weapon_stow_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?weapon_stow_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result weapon_draw_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?weapon_draw_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool weapon_draw_event(long, class c_motor_task *, enum e_motor_event)
//{
//    mangled_ppc("?weapon_draw_event@@YA_NJPAVc_motor_task@@W4e_motor_event@@@Z");
//};

//bool weapon_draw_interrupted(long, class c_motor_task *)
//{
//    mangled_ppc("?weapon_draw_interrupted@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result throw_grenade_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?throw_grenade_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result throw_equipment_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?throw_equipment_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result melee_task_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?melee_task_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//void motor_ping_get_animation_data(short, long *, long *, long *)
//{
//    mangled_ppc("?motor_ping_get_animation_data@@YAXFPAJ00@Z");
//};

//enum e_motor_result ping_task_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?ping_task_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//public: float c_model_animation::get_override_blend_in_time(void) const
//{
//    mangled_ppc("?get_override_blend_in_time@c_model_animation@@QBAMXZ");
//};

//enum e_motor_result posture_ping_task_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?posture_ping_task_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//public: class c_motor_request_ping & c_motor_request_ping::operator=(class c_motor_request_ping const &)
//{
//    mangled_ppc("??4c_motor_request_ping@@QAAAAV0@ABV0@@Z");
//};

//public: class c_motor_request_base & c_motor_request_base::operator=(class c_motor_request_base const &)
//{
//    mangled_ppc("??4c_motor_request_base@@QAAAAV0@ABV0@@Z");
//};

//enum e_motor_result posture_animation_task_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?posture_animation_task_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result biped_force_airborne_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_force_airborne_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool creature_ground_default_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?creature_ground_default_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//enum e_motor_result biped_force_heavy_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?biped_force_heavy_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result leap_anticipation_task_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?leap_anticipation_task_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result leap_recovery_task_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?leap_recovery_task_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//enum e_motor_result sync_action_animation_submit(long, class c_motor_request_base const *)
//{
//    mangled_ppc("?sync_action_animation_submit@@YA?AW4e_motor_result@@JPBVc_motor_request_base@@@Z");
//};

//bool sync_action_animation_update(long, class c_motor_task *)
//{
//    mangled_ppc("?sync_action_animation_update@@YA_NJPAVc_motor_task@@@Z");
//};

//bool sync_action_animation_finished(long, class c_motor_task *)
//{
//    mangled_ppc("?sync_action_animation_finished@@YA_NJPAVc_motor_task@@@Z");
//};

//bool sync_action_animation_motor_event(long, class c_motor_task *, enum e_motor_event)
//{
//    mangled_ppc("?sync_action_animation_motor_event@@YA_NJPAVc_motor_task@@W4e_motor_event@@@Z");
//};

//bool sync_action_animation_interrupted(long, class c_motor_task *)
//{
//    mangled_ppc("?sync_action_animation_interrupted@@YA_NJPAVc_motor_task@@@Z");
//};

