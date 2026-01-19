/* ---------- headers */

#include "omaha\ai\behavior.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_83847218; // "except_record_83847218"
// except_record_838485A0; // "except_record_838485A0"
// except_record_83850E30; // "except_record_83850E30"
// except_record_83852050; // "except_record_83852050"
// except_record_83852280; // "except_record_83852280"
// except_record_83853CE8; // "except_record_83853CE8"
// except_record_83856098; // "except_record_83856098"
// except_record_838575B8; // "except_record_838575B8"
// except_record_83857B08; // "except_record_83857B08"
// except_record_83859108; // "except_record_83859108"
// except_record_83859880; // "except_record_83859880"
// except_record_8385B948; // "except_record_8385B948"
// except_record_8385D260; // "except_record_8385D260"
// except_record_83864F70; // "except_record_83864F70"
// except_record_83866368; // "except_record_83866368"
// except_record_83868D70; // "except_record_83868D70"
// except_record_838694E8; // "except_record_838694E8"
// except_record_8386B350; // "except_record_8386B350"
// except_record_8386D2B0; // "except_record_8386D2B0"
// except_record_8386E320; // "except_record_8386E320"
// except_record_8386ECF0; // "except_record_8386ECF0"
// except_record_8386F270; // "except_record_8386F270"
// except_record_838713E0; // "except_record_838713E0"
// except_record_83872610; // "except_record_83872610"
// except_record_83873500; // "except_record_83873500"
// except_record_83875578; // "except_record_83875578"
// except_record_8387C3D0; // "except_record_8387C3D0"
// except_record_8387CDF0; // "except_record_8387CDF0"
// except_record_8387E590; // "except_record_8387E590"
// except_record_8387F218; // "except_record_8387F218"
// except_record_8387FF28; // "except_record_8387FF28"
// except_record_83882310; // "except_record_83882310"
// except_record_838830C8; // "except_record_838830C8"
// char const **condition_flag_names; // "?condition_flag_names@@3PAPBDA"
// struct behavior_info *global_behavior_info; // "?global_behavior_info@@3PAUbehavior_info@@A"
// char const **behavior_names; // "?behavior_names@@3PAPBDA"
// short *behavior_input_type_compatibility; // "?behavior_input_type_compatibility@@3PAFA"
// short *behavior_tree_roots; // "?behavior_tree_roots@@3PAFA"
// char g_allowed_failure_reason; // "?g_allowed_failure_reason@@3DA"
// long g_action_selection_nonce; // "?g_action_selection_nonce@@3JA"
// long g_current_actions_nonce; // "?g_current_actions_nonce@@3JA"
// struct child_entry *behavior_alert_children; // "?behavior_alert_children@@3PAUchild_entry@@A"
// struct child_entry *behavior_ambush_children; // "?behavior_ambush_children@@3PAUchild_entry@@A"
// long ambush_condition_flags; // "?ambush_condition_flags@@3JA"
// long dive_condition_flags; // "?dive_condition_flags@@3JA"
// long avoid_condition_flags; // "?avoid_condition_flags@@3JA"
// long vehicle_avoid_condition_flags; // "?vehicle_avoid_condition_flags@@3JA"
// long melee_charge_condition_flags; // "?melee_charge_condition_flags@@3JA"
// long leaping_melee_charge_condition_flags; // "?leaping_melee_charge_condition_flags@@3JA"
// struct child_entry *behavior_combat_children; // "?behavior_combat_children@@3PAUchild_entry@@A"
// struct child_entry *behavior_broken_children; // "?behavior_broken_children@@3PAUchild_entry@@A"
// long vehicle_charge_condition_flags; // "?vehicle_charge_condition_flags@@3JA"
// long vehicle_cover_condition_flags; // "?vehicle_cover_condition_flags@@3JA"
// long impulse_proximity_ambush_condition_flags; // "?impulse_proximity_ambush_condition_flags@@3JA"
// long cower_condition_flags; // "?cower_condition_flags@@3JA"
// struct child_entry *behavior_cower_children; // "?behavior_cower_children@@3PAUchild_entry@@A"
// long impulse_danger_crouch_condition_flags; // "?impulse_danger_crouch_condition_flags@@3JA"
// long impulse_grenade_condition_flags; // "?impulse_grenade_condition_flags@@3JA"
// struct child_entry *behavior_engage_children; // "?behavior_engage_children@@3PAUchild_entry@@A"
// long behavior_formation_condition_flags; // "?behavior_formation_condition_flags@@3JA"
// long investigate_condition_flags; // "?investigate_condition_flags@@3JA"
// struct child_entry *behavior_idle_children; // "?behavior_idle_children@@3PAUchild_entry@@A"
// struct child_entry *behavior_patrol_children; // "?behavior_patrol_children@@3PAUchild_entry@@A"
// struct child_entry *behavior_shoot_corpse_children; // "?behavior_shoot_corpse_children@@3PAUchild_entry@@A"
// long check_friend_condition_flags; // "?check_friend_condition_flags@@3JA"
// long postcombat_condition_flags; // "?postcombat_condition_flags@@3JA"
// struct child_entry *behavior_postcombat_children; // "?behavior_postcombat_children@@3PAUchild_entry@@A"
// struct child_entry *behavior_postpostcombat_children; // "?behavior_postpostcombat_children@@3PAUchild_entry@@A"
// long impulse_grenade_uncover_condition_flags; // "?impulse_grenade_uncover_condition_flags@@3JA"
// struct child_entry *behavior_presearch_children; // "?behavior_presearch_children@@3PAUchild_entry@@A"
// long impulse_danger_retreat_condition_flags; // "?impulse_danger_retreat_condition_flags@@3JA"
// long impulse_low_shield_retreat_condition_flags; // "?impulse_low_shield_retreat_condition_flags@@3JA"
// long impulse_nowhere_to_run_ambush_condition_flags; // "?impulse_nowhere_to_run_ambush_condition_flags@@3JA"
// struct child_entry *behavior_retreat_children; // "?behavior_retreat_children@@3PAUchild_entry@@A"
// long search_condition_flags; // "?search_condition_flags@@3JA"
// struct child_entry *behavior_root_children; // "?behavior_root_children@@3PAUchild_entry@@A"
// struct child_entry *behavior_search_children; // "?behavior_search_children@@3PAUchild_entry@@A"
// long pursuit_condition_flags; // "?pursuit_condition_flags@@3JA"
// long proximity_melee_condition_flags; // "?proximity_melee_condition_flags@@3JA"
// long damage_vehicle_cover_condition_flags; // "?damage_vehicle_cover_condition_flags@@3JA"
// long danger_cover_condition_flags; // "?danger_cover_condition_flags@@3JA"
// long exposed_rear_cover_condition_flags; // "?exposed_rear_cover_condition_flags@@3JA"
// long kungfu_cover_condition_flags; // "?kungfu_cover_condition_flags@@3JA"
// struct child_entry *behavior_self_preservation_children; // "?behavior_self_preservation_children@@3PAUchild_entry@@A"
// long uncover_condition_flags; // "?uncover_condition_flags@@3JA"
// long impulse_vehicle_turtle_condition_flags; // "?impulse_vehicle_turtle_condition_flags@@3JA"
// long vehicle_enter_condition_flags; // "?vehicle_enter_condition_flags@@3JA"
// long vehicle_switch_condition_flags; // "?vehicle_switch_condition_flags@@3JA"
// long enter_vehicle_condition_flags; // "?enter_vehicle_condition_flags@@3JA"
// long vehicle_exit_condition_flags; // "?vehicle_exit_condition_flags@@3JA"
// long vehicle_fight_condition_flags; // "?vehicle_fight_condition_flags@@3JA"
// struct child_entry *behavior_ready_children; // "?behavior_ready_children@@3PAUchild_entry@@A"
// long ready_condition_flags; // "?ready_condition_flags@@3JA"
// long vehicle_flip_condition_flags; // "?vehicle_flip_condition_flags@@3JA"
// long impulse_find_throw_interaction_object_condition_flags; // "?impulse_find_throw_interaction_object_condition_flags@@3JA"
// struct child_entry *behavior_activity_children; // "?behavior_activity_children@@3PAUchild_entry@@A"
// short (__cdecl **impulses_to_check)(long, class c_behavior_state *); // "?impulses_to_check@@3PAP6AFJPAVc_behavior_state@@@ZA"
// long volatile `void __cdecl character_runtime_properties_copy<class c_character_runtime_properties<class c_character_search_properties_internal>, class c_character_search_properties_internal>(class c_character_runtime_properties<class c_character_search_properties_internal> *, class c_character_search_properties_internal const *)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@???$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_search_properties_internal@@@@Vc_character_search_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_search_properties_internal@@@@PBVc_character_search_properties_internal@@@Z@4JC"
// long volatile `void __cdecl character_runtime_properties_copy<class c_character_runtime_properties<class c_character_presearch_properties_internal>, class c_character_presearch_properties_internal>(class c_character_runtime_properties<class c_character_presearch_properties_internal> *, class c_character_presearch_properties_internal const *)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@???$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_presearch_properties_internal@@@@Vc_character_presearch_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_presearch_properties_internal@@@@PBVc_character_presearch_properties_internal@@@Z@4JC"
// long volatile `void __cdecl character_runtime_properties_copy<class c_character_runtime_properties<class c_character_kungfu_properties_internal>, class c_character_kungfu_properties_internal>(class c_character_runtime_properties<class c_character_kungfu_properties_internal> *, class c_character_kungfu_properties_internal const *)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@???$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_kungfu_properties_internal@@@@Vc_character_kungfu_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_kungfu_properties_internal@@@@PBVc_character_kungfu_properties_internal@@@Z@4JC"
// long volatile `void __cdecl character_runtime_properties_copy<class c_character_runtime_properties<class c_character_ready_properties_internal>, class c_character_ready_properties_internal>(class c_character_runtime_properties<class c_character_ready_properties_internal> *, class c_character_ready_properties_internal const *)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@???$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_ready_properties_internal@@@@Vc_character_ready_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_ready_properties_internal@@@@PBVc_character_ready_properties_internal@@@Z@4JC"
// long volatile `void __cdecl character_runtime_properties_copy<class c_character_runtime_properties<class c_character_interact_properties_internal>, class c_character_interact_properties_internal>(class c_character_runtime_properties<class c_character_interact_properties_internal> *, class c_character_interact_properties_internal const *)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@???$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_interact_properties_internal@@@@Vc_character_interact_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_interact_properties_internal@@@@PBVc_character_interact_properties_internal@@@Z@4JC"
// long volatile `void __cdecl character_runtime_properties_copy<class c_character_runtime_properties<class c_character_engineer_properties_internal>, class c_character_engineer_properties_internal>(class c_character_runtime_properties<class c_character_engineer_properties_internal> *, class c_character_engineer_properties_internal const *)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@???$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_engineer_properties_internal@@@@Vc_character_engineer_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_engineer_properties_internal@@@@PBVc_character_engineer_properties_internal@@@Z@4JC"
// struct s_cure_isolation_debug g_cure_isolation_debug; // "?g_cure_isolation_debug@@3Us_cure_isolation_debug@@A"
// short current_log_entry; // "?current_log_entry@@3FA"
// struct behavior_log_entry *behavior_log; // "?behavior_log@@3PAUbehavior_log_entry@@A"
// long global_condition_flags; // "?global_condition_flags@@3JA"
// class c_big_flags_typed_no_init<long, 256> global_style_vector; // "?global_style_vector@@3V?$c_big_flags_typed_no_init@J$0BAA@@@A"
// struct child_entry **g_precomputed_child_entries; // "?g_precomputed_child_entries@@3PAPAUchild_entry@@A"
// struct precomputed_child_list (*g_precomputed_child_list_indices)[17]; // "?g_precomputed_child_list_indices@@3PAY0BB@Uprecomputed_child_list@@A"
// class Behavior_impulse dive_impulse; // "?dive_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior arrange_sync_action_behavior; // "?arrange_sync_action_behavior@@3VPrimitive_behavior@@A"
// class Primitive_behavior go_to_behavior; // "?go_to_behavior@@3VPrimitive_behavior@@A"
// class Mutex_group ambush_behavior; // "?ambush_behavior@@3VMutex_group@@A"
// class Primitive_behavior avoid_behavior; // "?avoid_behavior@@3VPrimitive_behavior@@A"
// class Primitive_behavior vehicle_avoid_behavior; // "?vehicle_avoid_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse surprise_berserk_impulse; // "?surprise_berserk_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior melee_charge_behavior; // "?melee_charge_behavior@@3VPrimitive_behavior@@A"
// class Primitive_behavior melee_leaping_charge_behavior; // "?melee_leaping_charge_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse broken_berserk_impulse; // "?broken_berserk_impulse@@3VBehavior_impulse@@A"
// class Mutex_group combat_behavior; // "?combat_behavior@@3VMutex_group@@A"
// class Behavior_impulse broken_kamikaze_impulse; // "?broken_kamikaze_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse broken_flee_impulse; // "?broken_flee_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior kamikaze_behavior; // "?kamikaze_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse broken_scatter_impulse; // "?broken_scatter_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse huddle_impulse; // "?huddle_impulse@@3VBehavior_impulse@@A"
// class Joint_primitive_behavior huddle_behavior; // "?huddle_behavior@@3VJoint_primitive_behavior@@A"
// class Mutex_group broken_behavior; // "?broken_behavior@@3VMutex_group@@A"
// class Primitive_behavior vehicle_ram_behavior; // "?vehicle_ram_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse proximity_ambush_impulse; // "?proximity_ambush_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior vehicle_charge_behavior; // "?vehicle_charge_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse vulnerable_enemy_ambush_impulse; // "?vulnerable_enemy_ambush_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior cover_behavior; // "?cover_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse berserk_wander_impulse; // "?berserk_wander_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior vehicle_cover_behavior; // "?vehicle_cover_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse danger_crouch_impulse; // "?danger_crouch_impulse@@3VBehavior_impulse@@A"
// class Joint_primitive_behavior coordinated_ambush_behavior; // "?coordinated_ambush_behavior@@3VJoint_primitive_behavior@@A"
// class Mutex_group cower_behavior; // "?cower_behavior@@3VMutex_group@@A"
// class Behavior_impulse anti_vehicle_grenade_impulse; // "?anti_vehicle_grenade_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse unassailable_enemy_grenade_impulse; // "?unassailable_enemy_grenade_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse grenade_impulse; // "?grenade_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse stalker_camo_control_impulse; // "?stalker_camo_control_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse evasion_impulse; // "?evasion_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse juke_impulse; // "?juke_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior engage_sync_behavior; // "?engage_sync_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse grenade_uncover_impulse; // "?grenade_uncover_impulse@@3VBehavior_impulse@@A"
// class Mutex_group engage_behavior; // "?engage_behavior@@3VMutex_group@@A"
// class Primitive_behavior fight_behavior; // "?fight_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse overheated_weapon_retreat_impulse; // "?overheated_weapon_retreat_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior fight_positioning_behavior; // "?fight_positioning_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse surprise_retreat_impulse; // "?surprise_retreat_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior flee_behavior; // "?flee_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse scary_target_retreat_impulse; // "?scary_target_retreat_impulse@@3VBehavior_impulse@@A"
// class Joint_primitive_behavior formation_behavior; // "?formation_behavior@@3VJoint_primitive_behavior@@A"
// class Primitive_behavior guard_behavior; // "?guard_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse danger_retreat_impulse; // "?danger_retreat_impulse@@3VBehavior_impulse@@A"
// class Mutex_group idle_behavior; // "?idle_behavior@@3VMutex_group@@A"
// class Primitive_behavior investigate_behavior; // "?investigate_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse low_shield_retreat_impulse; // "?low_shield_retreat_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse proximity_retreat_impulse; // "?proximity_retreat_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse leader_dead_retreat_impulse; // "?leader_dead_retreat_impulse@@3VBehavior_impulse@@A"
// class Mutex_group obey_behavior; // "?obey_behavior@@3VMutex_group@@A"
// class Mutex_group shoot_corpse_behavior; // "?shoot_corpse_behavior@@3VMutex_group@@A"
// class Primitive_behavior check_friend_behavior; // "?check_friend_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse peer_dead_retreat_impulse; // "?peer_dead_retreat_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior postcombat_approach_behavior; // "?postcombat_approach_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse nowhere_to_run_ambush_impulse; // "?nowhere_to_run_ambush_impulse@@3VBehavior_impulse@@A"
// class Mutex_group postcombat_behavior; // "?postcombat_behavior@@3VMutex_group@@A"
// class Mutex_group postpostcombat_behavior; // "?postpostcombat_behavior@@3VMutex_group@@A"
// class Behavior_impulse retreat_grenade_impulse; // "?retreat_grenade_impulse@@3VBehavior_impulse@@A"
// class Mutex_group retreat_behavior; // "?retreat_behavior@@3VMutex_group@@A"
// class Mutex_group root_behavior; // "?root_behavior@@3VMutex_group@@A"
// class Behavior_impulse scary_target_self_preservation_impulse; // "?scary_target_self_preservation_impulse@@3VBehavior_impulse@@A"
// class Mutex_group search_behavior; // "?search_behavior@@3VMutex_group@@A"
// class Primitive_behavior find_pursuit_behavior; // "?find_pursuit_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse unreachable_enemy_self_preservation_impulse; // "?unreachable_enemy_self_preservation_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse unassailable_enemy_self_preservation_impulse; // "?unassailable_enemy_self_preservation_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse proximity_melee_impulse; // "?proximity_melee_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse proximity_self_preserve_impulse; // "?proximity_self_preserve_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse damage_vehicle_cover_impulse; // "?damage_vehicle_cover_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse danger_cover_impulse; // "?danger_cover_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse exposed_rear_cover_impulse; // "?exposed_rear_cover_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse kungfu_cover_impulse; // "?kungfu_cover_impulse@@3VBehavior_impulse@@A"
// class Mutex_group self_preservation_behavior; // "?self_preservation_behavior@@3VMutex_group@@A"
// class Behavior_impulse suppressing_fire_vehicle_impulse; // "?suppressing_fire_vehicle_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior suppress_behavior; // "?suppress_behavior@@3VPrimitive_behavior@@A"
// class Primitive_behavior uncover_behavior; // "?uncover_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse vehicle_engage_patrol_impulse; // "?vehicle_engage_patrol_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse vehicle_engage_wander_impulse; // "?vehicle_engage_wander_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse vehicle_turtle_impulse; // "?vehicle_turtle_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse vehicle_enter_friendly_impulse; // "?vehicle_enter_friendly_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse vehicle_switch_friendly_impulse; // "?vehicle_switch_friendly_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse vehicle_enter_impulse; // "?vehicle_enter_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse vehicle_entry_engage_impulse; // "?vehicle_entry_engage_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior enter_vehicle_behavior; // "?enter_vehicle_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse danger_vehicle_exit_impulse; // "?danger_vehicle_exit_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse vehicle_flip_impulse; // "?vehicle_flip_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior vehicle_pickup_behavior; // "?vehicle_pickup_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse equipment_active_camo_impulse; // "?equipment_active_camo_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior vehicle_fight_behavior; // "?vehicle_fight_behavior@@3VPrimitive_behavior@@A"
// class Primitive_behavior wander_behavior; // "?wander_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse interact_object_impulse; // "?interact_object_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior flight_wander_behavior; // "?flight_wander_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse object_throw_interaction_impulse; // "?object_throw_interaction_impulse@@3VBehavior_impulse@@A"
// class Mutex_group ready_behavior; // "?ready_behavior@@3VMutex_group@@A"
// class Joint_primitive_behavior vehicle_flip_behavior; // "?vehicle_flip_behavior@@3VJoint_primitive_behavior@@A"
// class Primitive_behavior destroy_obstacle_behavior; // "?destroy_obstacle_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse engineer_control_impulse; // "?engineer_control_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior destroy_cover_behavior; // "?destroy_cover_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse boost_allies_impulse; // "?boost_allies_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior leap_on_cover_behavior; // "?leap_on_cover_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse engineer_broken_detonation_impulse; // "?engineer_broken_detonation_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior perch_behavior; // "?perch_behavior@@3VPrimitive_behavior@@A"
// class Behavior_impulse movement_plan_cover_impulse; // "?movement_plan_cover_impulse@@3VBehavior_impulse@@A"
// class Behavior_impulse interruptible_control_impulse; // "?interruptible_control_impulse@@3VBehavior_impulse@@A"
// class Primitive_behavior cure_isolation_behavior; // "?cure_isolation_behavior@@3VPrimitive_behavior@@A"
// class Mutex_group activity_behavior; // "?activity_behavior@@3VMutex_group@@A"
// class Primitive_behavior equipment_impulse; // "?equipment_impulse@@3VPrimitive_behavior@@A"
// class Primitive_behavior interact_object_behavior; // "?interact_object_behavior@@3VPrimitive_behavior@@A"
// class Primitive_behavior engineer_explode_behavior; // "?engineer_explode_behavior@@3VPrimitive_behavior@@A"
// class Primitive_behavior sync_attack_behavior; // "?sync_attack_behavior@@3VPrimitive_behavior@@A"
// class Primitive_behavior control_behavior; // "?control_behavior@@3VPrimitive_behavior@@A"

// void behaviors_initialize(void);
// short construct_child_list_internal(struct child_entry **, struct custom_child_list *, struct child_entry *, short);
// void mark_executing_behaviors(long);
// short actor_executing_layer(long, short);
// bool actor_executing(long, short);
// short behavior_update_running_child(long, short, class c_behavior_state *, short *);
// void clear_stimulus_children(struct child_entry **, short);
// struct child_entry ** child_list_get(long, short, short *);
// short actor_behavior_layer_get_child_index(long, short);
// short behavior_decide_sequential(long, short, class c_behavior_state *);
// short behavior_decide_internal(long, struct child_entry **, short, short, class c_big_flags_typed_no_init<long, 256> *, float (*)(long, short), class c_behavior_state *, class c_behavior_state *, short, short *, short *);
// void test_child_entry(long, struct child_entry const *, short *, short *, class c_behavior_state const *, class c_behavior_state *);
// short behavior_decide_sequential_looping(long, short, class c_behavior_state *);
// short behavior_decide_prioritized(long, short, class c_behavior_state *, class c_big_flags_typed_no_init<long, 256> *);
// short behavior_decide_prioritized(long, short, class c_behavior_state *);
// short behavior_decide_probabilistic(long, short, float (*)(long, short), class c_behavior_state *);
// long behavior_build_condition_flags(long);
// short actor_get_root_behavior(long);
// void action_selection(long);
// void generate_style_vector(long, class c_big_flags_typed_no_init<long, 256> *);
// short behavior_find_layer(struct actor_datum *, short, short);
// void behavior_clear_layer_state(struct actor_datum *, short);
// void behavior_state_fail_child(class c_behavior_state *);
// bool behavior_change(long, short, short, class c_behavior_state *);
// class c_behavior_state * actor_behavior_state_allocate(struct actor_datum *, short);
// void behavior_control(long);
// public: Behavior_header::Behavior_header(short, short, long);
// public: Behavior_impulse::Behavior_impulse(short, long, short (*)(long, class c_behavior_state *));
// public: Behavior::Behavior(short, short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), short, void (*)(class c_behavior_state *));
// public: Behavior::Behavior(short, short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), short, void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, bool), void (*)(long, class c_behavior_state *), void (*)(class c_behavior_state *));
// public: Primitive_behavior::Primitive_behavior(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), short, bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), void (*)(class c_behavior_state *));
// public: Primitive_behavior::Primitive_behavior(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), short, bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, bool), void (*)(long, class c_behavior_state *), void (*)(class c_behavior_state *));
// public: Mutex_group::Mutex_group(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), short, short (*)(long, short, class c_behavior_state *), short, struct child_entry *, void (*)(class c_behavior_state *));
// public: Mutex_group::Mutex_group(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), short, short (*)(long, short, class c_behavior_state *), short, struct child_entry *, void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, bool), void (*)(long, class c_behavior_state *), void (*)(class c_behavior_state *));
// short actor_behavior_state_offset_get(struct actor_datum const *, short);
// bool actor_behavior_layer_valid(struct actor_datum const *, short);
// class c_behavior_state * actor_behavior_state_get(struct actor_datum const *, short);
// short actor_behavior_index_get(struct actor_datum const *, short);
// class Behavior_header * actor_behavior_get(struct actor_datum const *, short);
// void verify_behavior_hierarchy(void);
// void behavior_log_enter(char const *, short, bool);
// void behavior_log_display(void);
// void behavior_log_reset(void);
// short behavior_index_by_name(char const *);
// short behavior_arrange_sync_action_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// public: s_ai_sync_action_arranger_state::s_ai_sync_action_arranger_state(void);
// public: s_ai_sync_action_participant::s_ai_sync_action_participant(void);
// bool behavior_arrange_sync_action_activate(long, class c_behavior_state *);
// void behavior_arrange_sync_action_deactivate(long, class c_behavior_state *);
// bool behavior_arrange_sync_action_perform(long, class c_behavior_state *);
// void behavior_arrange_sync_action_control(long, class c_behavior_state *);
// short behavior_arrange_sync_action_next(long, class c_behavior_state *, class c_behavior_state *);
// void setup_go_to_behavior(class c_behavior_state *, struct s_behavior_arguments const *);
// short behavior_go_to_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_go_to_activate(long, class c_behavior_state *);
// short behavior_go_to_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_go_to_perform(long, class c_behavior_state *);
// short behavior_alert_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_alert_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_alert_activate(long, class c_behavior_state *);
// short behavior_ambush_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_ambush_activate(long, class c_behavior_state *);
// void behavior_ambush_deactivate(long, class c_behavior_state *);
// short behavior_ambush_decide(long, short, class c_behavior_state *);
// short dive_get_impulse(long, class c_behavior_state *);
// bool actor_action_find_escape_from_danger(long, struct s_stimulus_data_information const *, struct s_danger_escape *);
// bool actor_action_try_to_dive(long, struct s_danger_escape *, float);
// bool brace(long, struct s_danger_assessment const *);
// bool behavior_avoid_control_helper(long, class c_avoid_state_data *, struct s_danger_assessment *, struct s_stimulus_data_information *, float, union vector3d *);
// short behavior_avoid_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short get_avoidance_desire(long, float);
// bool behavior_avoid_activate(long, class c_behavior_state *);
// void behavior_avoid_control(long, class c_behavior_state *);
// short behavior_vehicle_avoid_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_vehicle_avoid_activate(long, class c_behavior_state *);
// void behavior_vehicle_avoid_control(long, class c_behavior_state *);
// short berserk_get_impulse(long, class c_behavior_state *);
// short shield_depleted_berserk_get_impulse(long, class c_behavior_state *);
// short proximity_berserk_get_impulse(long, class c_behavior_state *);
// short leader_abandoned_charge_get_impulse(long, class c_behavior_state *);
// short last_man_berserk_get_impulse(long, class c_behavior_state *);
// short surprise_berserk_get_impulse(long, class c_behavior_state *);
// short stuck_with_grenade_berserk_get_impulse(long, class c_behavior_state *);
// short charge_children_next(long, class c_behavior_state *, class c_behavior_state *);
// void charge_movement_helper(long, class c_charge_state_data *, float, bool *, bool *, bool *);
// void charge_setup(short, class c_behavior_state *);
// short behavior_melee_charge_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_melee_charge_perform(long, class c_behavior_state *);
// void behavior_melee_charge_control(long, class c_behavior_state *);
// bool melee_activate_helper(long, class c_behavior_state *, bool);
// bool charge_get_melee_range_and_ticks(long, bool, bool, bool, bool, short *, float *, short *, float *);
// bool behavior_melee_charge_activate(long, class c_behavior_state *);
// void behavior_melee_charge_deactivate(long, class c_behavior_state *);
// short behavior_melee_leaping_charge_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_melee_leaping_charge_perform(long, class c_behavior_state *);
// void behavior_melee_leaping_charge_control(long, class c_behavior_state *);
// bool behavior_melee_leaping_charge_activate(long, class c_behavior_state *);
// void behavior_melee_leaping_charge_deactivate(long, class c_behavior_state *);
// short unreachable_leap_charge_get_impulse(long, class c_behavior_state *);
// short behavior_combat_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_combat_activate(long, class c_behavior_state *);
// short behavior_combat_next(long, class c_behavior_state *, class c_behavior_state *);
// short broken_berserk_impulse_get_impulse(long, class c_behavior_state *);
// short broken_kamikaze_impulse_get_impulse(long, class c_behavior_state *);
// bool behavior_kamikaze_create_grenades(long, class c_kamikaze_state_data *);
// bool behavior_kamikaze_activate(long, class c_behavior_state *);
// void behavior_kamikaze_deactivate(long, class c_behavior_state *);
// void kamikaze_drop_grenades(class c_kamikaze_state_data *);
// short behavior_kamikaze_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_kamikaze_perform(long, class c_behavior_state *);
// void kamikaze_detonate_grenades(class c_kamikaze_state_data *);
// void behavior_kamikaze_control(long, class c_behavior_state *);
// void behavior_kamikaze_flush_object(long, class c_behavior_state *, long);
// short broken_flee_impulse_get_impulse(long, class c_behavior_state *);
// short broken_scatter_get_impulse(long, class c_behavior_state *);
// short huddle_impulse_get_impulse(long, class c_behavior_state *);
// short behavior_huddle_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_huddle_next(long, class c_behavior_state *, class c_behavior_state *);
// long behavior_huddle_activate(long, class c_behavior_state *);
// void behavior_huddle_deactivate(long, class c_behavior_state *, struct joint_state_datum *);
// bool behavior_huddle_perform(long, class c_behavior_state *, struct joint_state_datum *);
// void huddle_choose_firing_position(long, class c_behavior_state *, struct joint_state_datum *);
// void behavior_huddle_control(long, class c_behavior_state *, struct joint_state_datum *);
// void behavior_huddle_debug(long, class c_behavior_state *, struct joint_state_datum *);
// void behavior_huddle_flush_firing_points(long, class c_behavior_state *, bool);
// short behavior_broken_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_broken_activate(long, class c_behavior_state *);
// bool behavior_vehicle_ram_perform(long, class c_behavior_state *);
// float vehicle_charge_get_min_weapon_range(long);
// bool behavior_vehicle_charge_perform(long, class c_behavior_state *);
// void behavior_vehicle_charge_control(long, class c_behavior_state *);
// short behavior_cover_get_desire_helper(long);
// short behavior_cover_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// void behavior_cover_activate_helper(long, class c_behavior_state *);
// short behavior_cover_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_cover_perform(long, class c_behavior_state *);
// bool behavior_cover_find_cover_point(long, class c_cover_state_data *);
// bool behavior_cover_navigate_to_cover_point(long, struct s_firing_position_ref, struct s_firing_position *, class c_cover_state_data *, struct path_state *, bool, long, struct s_firing_position_evaluation_context const *);
// bool cover_point_exposed(long, class c_cover_state_data const *, struct prop_ref_datum const *);
// void cover_update_hologram_state(long, class c_behavior_state *);
// void behavior_cover_control_helper(long, class c_behavior_state *, bool);
// void behavior_cover_control(long, class c_behavior_state *);
// void behavior_cover_deactivate(long, class c_behavior_state *);
// short impulse_proximity_ambush_get_impulse(long, class c_behavior_state *);
// short impulse_vulnerable_enemy_ambush_get_impulse(long, class c_behavior_state *);
// short behavior_coordinated_ambush_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_coordinated_ambush_next(long, class c_behavior_state *, class c_behavior_state *);
// long behavior_coordinated_ambush_activate(long, class c_behavior_state *);
// void joint_deactivate(long, class c_behavior_state *, struct joint_state_datum *);
// short behavior_coordinated_ambush_select_actors(long, long, class c_behavior_state *);
// short behavior_cower_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_cower_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_cower_activate(long, class c_behavior_state *);
// short behavior_cower_decide(long, short, class c_behavior_state *);
// void behavior_cower_flush_structure_indices(long, class c_behavior_state *);
// short berserk_wander_get_impulse(long, class c_behavior_state *);
// short danger_crouch_get_impulse(long, class c_behavior_state *);
// short impulse_grenade_get_impulse(long, class c_behavior_state *);
// bool unit_can_queue_grenade(long);
// short stalker_camo_control_get_impulse(long, class c_behavior_state *);
// short impulse_evasion_get_impulse(long, class c_behavior_state *);
// short juke_impulse_get_impulse(long, class c_behavior_state *);
// short behavior_engage_sync_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_engage_sync_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_engage_sync_activate(long, class c_behavior_state *);
// bool behavior_engage_sync_perform(long, class c_behavior_state *);
// void behavior_engage_sync_control(long, class c_behavior_state *);
// short behavior_engage_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_engage_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_engage_activate(long, class c_behavior_state *);
// short behavior_fight_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool fighting_perception_valid(long);
// bool fight_choose_fight_point(long, class c_fight_state_data *);
// void fight_reset_firing_position_timer(long, class c_fight_state_data *);
// short behavior_flee_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_flee_setup(class c_flee_state_data *, long, long, long);
// bool behavior_flee_activate(long, class c_behavior_state *);
// void behavior_flee_deactivate(long, class c_behavior_state *);
// bool behavior_flee_perform(long, class c_behavior_state *);
// void behavior_flee_control(long, class c_behavior_state *);
// short behavior_flee_next(long, class c_behavior_state *, class c_behavior_state *);
// bool flee_at_flee_position(long, class c_flee_state_data *);
// bool action_flee_current_position_exposed(long, class c_flee_state_data *);
// void action_flee_find_flee_position(long, bool, class c_flee_state_data *);
// void behavior_formation_setup(long, short, long, long, long, class c_formation_data *);
// short behavior_formation_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_formation_next(long, class c_behavior_state *, class c_behavior_state *);
// long behavior_formation_activate(long, class c_behavior_state *);
// bool behavior_formation_perform(long, class c_behavior_state *, struct joint_state_datum *);
// bool formation_get_position(long, short, short, union real_point2d const *, union vector2d const *, union vector2d const *, union real_point2d *);
// short formation_member_get_position_index(short, struct joint_state_datum *);
// class c_behavior_state * formation_member_get_state(struct joint_state_datum const *, short);
// short formation_find_position(long, class c_formation_data *, struct joint_state_datum *, union real_point2d const *, union vector2d const *, union vector2d const *, union real_point2d *);
// short formation_get_member_in_position(struct joint_state_datum *, short);
// bool formation_can_fire_on_target(long, short, short, union vector2d const *, union vector2d const *);
// void behavior_formation_control(long, class c_behavior_state *, struct joint_state_datum *);
// void formation_get_facing(struct joint_state_datum const *, union vector2d *);
// short behavior_formation_select_actors(long, long, class c_behavior_state *);
// short guard_get_guard_state(long);
// void guard_setup(class c_behavior_state *, short, bool);
// short behavior_guard_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_guard_activate(long, class c_behavior_state *);
// short behavior_guard_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_guard_perform(long, class c_behavior_state *);
// void behavior_guard_control(long, class c_behavior_state *);
// void behavior_guard_flush_firing_position_indices(long, class c_behavior_state *, bool);
// short behavior_idle_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_idle_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_idle_activate(long, class c_behavior_state *);
// short behavior_investigate_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// void behavior_investigate_deactivate(long, class c_behavior_state *);
// bool behavior_investigate_activate(long, class c_behavior_state *);
// short behavior_investigate_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_investigate_perform(long, class c_behavior_state *);
// bool behavior_allowed_to_investigate(long, long);
// void behavior_investigate_control(long, class c_behavior_state *);
// void behavior_investigate_debug(long, class c_behavior_state *);
// short behavior_null_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_null_next(long, class c_behavior_state *, class c_behavior_state *);
// short behavior_null_discrete_next(long, class c_behavior_state *, class c_behavior_state *);
// short behavior_obey_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_obey_activate(long, class c_behavior_state *);
// void behavior_obey_deactivate(long, class c_behavior_state *);
// short behavior_obey_next(long, class c_behavior_state *, class c_behavior_state *);
// short behavior_obey_decide(long, short, class c_behavior_state *);
// void patrol_choose_random_point(short, class c_patrol_state_data *, bool);
// short behavior_patrol_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_patrol_activate(long, class c_behavior_state *);
// short behavior_patrol_decide(long, short, class c_behavior_state *);
// bool patrol_choose_next_point(long, class c_patrol_state_data *, class c_ai_point3d *, class c_sector_ref *);
// bool ready_to_move(long, class c_patrol_state_data const *);
// void behavior_patrol_debug(long, class c_behavior_state *);
// short behavior_shoot_corpse_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_shoot_corpse_activate(long, class c_behavior_state *);
// short behavior_shoot_corpse_next(long, class c_behavior_state *, class c_behavior_state *);
// short behavior_decide_shoot_corpse(long, short, class c_behavior_state *);
// short behavior_check_friend_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_check_friend_activate(long, class c_behavior_state *);
// short behavior_check_friend_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_check_friend_perform(long, class c_behavior_state *);
// void behavior_check_friend_control(long, class c_behavior_state *);
// bool behavior_postcombat_activate(long, class c_behavior_state *);
// short behavior_postcombat_next(long, class c_behavior_state *, class c_behavior_state *);
// short behavior_postcombat_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_postcombat_decide(long, short, class c_behavior_state *);
// short postcombat_decide(long, short, class c_behavior_state *);
// void postcombat_flush_structure_indices(long, class c_behavior_state *);
// bool behavior_postpostcombat_activate(long, class c_behavior_state *);
// short impulse_grenade_uncover_get_impulse(long, class c_behavior_state *);
// short behavior_presearch_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_presearch_activate(long, class c_behavior_state *);
// void behavior_presearch_deactivate(long, class c_behavior_state *);
// short behavior_presearch_next(long, class c_behavior_state *, class c_behavior_state *);
// void behavior_presearch_flush_prop(long, class c_behavior_state *, long);
// short overheated_weapon_retreat_get_impulse(long, class c_behavior_state *);
// short surprise_retreat_get_impulse(long, class c_behavior_state *);
// short impulse_scary_target_retreat_get_impulse(long, class c_behavior_state *);
// short impulse_danger_retreat_get_impulse(long, class c_behavior_state *);
// short impulse_low_shield_retreat_get_impulse(long, class c_behavior_state *);
// short impulse_proximity_retreat_get_impulse(long, class c_behavior_state *);
// short leader_dead_retreat_get_impulse(long, class c_behavior_state *);
// short peer_dead_retreat_get_impulse(long, class c_behavior_state *);
// short impulse_nowhere_to_run_ambush_get_impulse(long, class c_behavior_state *);
// short retreat_grenade_get_impulse(long, class c_behavior_state *);
// void retreat_setup(class c_behavior_state *, long, short);
// short behavior_retreat_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_retreat_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_retreat_activate(long, class c_behavior_state *);
// void behavior_retreat_deactivate(long, class c_behavior_state *);
// short behavior_retreat_decide(long, short, class c_behavior_state *);
// void retreat_flush_prop(long, class c_behavior_state *, long);
// short behavior_root_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_root_next(long, class c_behavior_state *, class c_behavior_state *);
// float behavior_search_compute_vocalization_delay(long);
// short behavior_search_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_search_activate(long, class c_behavior_state *);
// void behavior_search_initialize_search_pattern(struct s_prop_search_pattern *);
// void behavior_search_deactivate(long, class c_behavior_state *);
// short behavior_search_next(long, class c_behavior_state *, class c_behavior_state *);
// short behavior_search_decide(long, short, class c_behavior_state *);
// bool self_preserve_behavior_available(long);
// short behavior_self_preserve_time_left(long);
// short scary_target_self_preservation_get_impulse(long, class c_behavior_state *);
// short unreachable_enemy_self_preservation_get_impulse(long, class c_behavior_state *);
// short unassailable_enemy_self_preservation_get_impulse(long, class c_behavior_state *);
// short proximity_melee_get_impulse(long, class c_behavior_state *);
// short proximity_self_preserve_get_impulse(long, class c_behavior_state *);
// short damage_vehicle_cover_get_impulse(long, class c_behavior_state *);
// short danger_cover_get_impulse(long, class c_behavior_state *);
// short player_endangered_cover_get_impulse(long, class c_behavior_state *);
// short exposed_rear_cover_get_impulse(long, class c_behavior_state *);
// short kungfu_cover_get_impulse(long, class c_behavior_state *);
// short behavior_self_preservation_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_self_preservation_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_self_preservation_activate(long, class c_behavior_state *);
// void behavior_self_preservation_setup(short, class c_behavior_state *);
// short behavior_self_preservation_decide(long, short, class c_behavior_state *);
// short suppressing_fire_vehicle_get_impulse(long, class c_behavior_state *);
// void behavior_suppress_weapon_properties(long, bool *, bool *);
// short behavior_suppress_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_suppress_activate(long, class c_behavior_state *);
// short behavior_suppress_next(long, class c_behavior_state *, class c_behavior_state *);
// void behavior_suppress_control(long, class c_behavior_state *);
// short behavior_uncover_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_uncover_activate(long, class c_behavior_state *);
// void behavior_uncover_deactivate(long, class c_behavior_state *);
// short behavior_uncover_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_uncover_perform(long, class c_behavior_state *);
// void behavior_uncover_control(long, class c_behavior_state *);
// short vehicle_engage_patrol_get_impulse(long, class c_behavior_state *);
// bool vehicle_wants_to_move_at_all_costs(long);
// short vehicle_engage_wander_get_impulse(long, class c_behavior_state *);
// short vehicle_turtle_get_impulse(long, class c_behavior_state *);
// short vehicle_enter_friendly_get_impulse(long, class c_behavior_state *);
// long find_nearby_friendly_player_vehicle(long);
// short vehicle_switch_friendly_get_impulse(long, class c_behavior_state *);
// short vehicle_enter_get_impulse(long, class c_behavior_state *);
// short vehicle_entry_engage_get_impulse(long, class c_behavior_state *);
// short behavior_enter_vehicle_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_enter_vehicle_activate(long, class c_behavior_state *);
// bool behavior_enter_vehicle_perform(long, class c_behavior_state *);
// void behavior_enter_vehicle_control(long, class c_behavior_state *);
// bool vehicle_find_destination(long, long, union real_point3d *, class c_ai_point3d *, class c_sector_ref *, bool *, bool);
// short vehicle_exit_get_impulse(long, class c_behavior_state *);
// short danger_vehicle_exit_get_impulse(long, class c_behavior_state *);
// long pickup_find_passenger(long);
// short behavior_vehicle_pickup_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_vehicle_pickup_activate(long, class c_behavior_state *);
// short behavior_vehicle_pickup_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_vehicle_pickup_perform(long, class c_behavior_state *);
// void behavior_vehicle_pickup_control(long, class c_behavior_state *);
// void vehicle_pickup_flush_object(long, class c_behavior_state *, long);
// short behavior_vehicle_fight_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_vehicle_fight_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_vehicle_fight_activate(long, class c_behavior_state *);
// bool behavior_vehicle_fight_perform(long, class c_behavior_state *);
// bool target_on_board(long);
// void behavior_vehicle_fight_control(long, class c_behavior_state *);
// bool global_style_vector_valid(long);
// short behavior_wander_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_ready_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_ready_activate(long, class c_behavior_state *);
// void behavior_ready_deactivate(long, class c_behavior_state *);
// short behavior_ready_next(long, class c_behavior_state *, class c_behavior_state *);
// short behavior_ready_decide(long, short, class c_behavior_state *);
// short vehicle_flip_get_impulse(long, class c_behavior_state *);
// bool behavior_vehicle_flip_perform(long, class c_behavior_state *, struct joint_state_datum *);
// bool flipped_vehicle_accessible(long);
// void actor_ready_to_flip(long, bool, class c_vehicle_flip_data *, struct joint_vehicle_flip_data *);
// bool vehicle_flip_find_target(long, class c_vehicle_flip_data *, struct joint_vehicle_flip_data *);
// bool flip_try_direction(long, long, class c_ai_point3d const *, class c_sector_ref, union vector3d const *, short, bool, class c_ai_point3d *, class c_sector_ref *);
// void behavior_vehicle_flip_control(long, class c_behavior_state *, struct joint_state_datum *);
// void behavior_vehicle_flip_deactivate(long, class c_behavior_state *, struct joint_state_datum *);
// void behavior_vehicle_flip_flush_object(long, class c_behavior_state *, long);
// void behavior_vehicle_flip_flush_structure_indices(long, class c_behavior_state *);
// void behavior_vehicle_flip_debug(long, class c_behavior_state *, struct joint_state_datum *);
// short behavior_destroy_obstacle_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_destroy_obstacle_activate(long, class c_behavior_state *);
// short behavior_destroy_obstacle_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_destroy_obstacle_perform(long, class c_behavior_state *);
// void behavior_destroy_obstacle_control(long, class c_behavior_state *);
// short behavior_destroy_cover_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_destroy_cover_activate(long, class c_behavior_state *);
// short behavior_destroy_cover_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_destroy_cover_perform(long, class c_behavior_state *);
// void behavior_destroy_cover_control(long, class c_behavior_state *);
// bool leap_on_cover_object_get_target_point(long, long, union real_point3d *);
// short behavior_leap_on_cover_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_leap_on_cover_activate(long, class c_behavior_state *);
// void behavior_leap_on_cover_deactivate(long, class c_behavior_state *);
// short behavior_leap_on_cover_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_leap_on_cover_perform(long, class c_behavior_state *);
// void behavior_leap_on_cover_control(long, class c_behavior_state *);
// void leap_on_cover_flush_object(long, class c_behavior_state *, long);
// void behavior_leap_on_cover_flush_structure_indices(long, class c_behavior_state *);
// short behavior_emerge_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// long behavior_emerge_activate(long, class c_behavior_state *);
// short behavior_emerge_next(long, class c_behavior_state *, class c_behavior_state *);
// bool emerge_wait_for_actor(long, long, float *, short *);
// bool behavior_emerge_perform(long, class c_behavior_state *, struct joint_state_datum *);
// void behavior_emerge_control(long, class c_behavior_state *, struct joint_state_datum *);
// short behavior_emerge_select_actors(long, long, class c_behavior_state *);
// short behavior_perch_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_perch_activate(long, class c_behavior_state *);
// short behavior_perch_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_perch_perform(long, class c_behavior_state *);
// void behavior_perch_control(long, class c_behavior_state *);
// void behavior_perch_flush_firing_position_indices(long, class c_behavior_state *, bool);
// bool board_activate_helper(long, class c_vehicle_board_data *);
// bool boarding_find_seat(long, long, long *, short *, short *, bool *);
// void behavior_board_flush_prop(long, class c_behavior_state *, long);
// void behavior_board_flush_object(long, class c_behavior_state *, long);
// void behavior_deploy_turret_setup(class c_behavior_state *, long);
// short behavior_deploy_turret_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_deploy_turret_activate(long, class c_behavior_state *);
// short behavior_deploy_turret_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_deploy_turret_perform(long, class c_behavior_state *);
// void behavior_deploy_turret_control(long, class c_behavior_state *);
// void behavior_deploy_turret_flush_object(long, class c_behavior_state *, long);
// void ai_handle_deployed_turret(long, long);
// short behavior_stalk_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_stalk_activate(long, class c_behavior_state *);
// void behavior_stalk_deactivate(long, class c_behavior_state *);
// short behavior_stalk_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_stalk_perform(long, class c_behavior_state *);
// void behavior_stalk_control(long, class c_behavior_state *);
// void behavior_stalk_flush_prop(long, class c_behavior_state *, long);
// void cure_isolation_debug_store_vector(long, union real_point3d const *, union vector3d const *);
// void cure_isolation_debug_reset(long);
// void behavior_cure_isolation_debug(long, class c_behavior_state *);
// bool cure_isolation_visible_enemy(long, struct path_state *, float, float);
// short cure_isolation_test_vector(long, union vector3d const *, union vector3d const *, struct path_state const *, float, float, float *);
// bool cure_isolation_attached_vehicle(long, struct seat_entry_info const *, class c_cure_isolation_data *, struct path_state *);
// bool cure_isolation_undirected(long, struct path_state *, float, float, short);
// bool cure_isolation_jump(long, struct path_state *, float, float, short);
// short behavior_posture_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_posture_activate(long, class c_behavior_state *);
// void behavior_posture_deactivate(long, class c_behavior_state *);
// short behavior_posture_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_posture_perform(long, class c_behavior_state *);
// void behavior_posture_control(long, class c_behavior_state *);
// short behavior_sleep_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_sleep_activate(long, class c_behavior_state *);
// void behavior_sleep_deactivate(long, class c_behavior_state *);
// short behavior_sleep_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_sleep_perform(long, class c_behavior_state *);
// void behavior_sleep_control(long, class c_behavior_state *);
// short behavior_activity_default_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_activity_default_activate(long, class c_behavior_state *);
// public: void c_motor_request_force_heavy::setup(enum e_action, bool);
// public: c_motor_request_force_heavy::c_motor_request_force_heavy(void);
// public: virtual void const * c_motor_request_force_heavy::cast_to(enum e_motor_task) const;
// void behavior_activity_default_deactivate(long, class c_behavior_state *);
// void behavior_activity_default_control(long, class c_behavior_state *);
// short behavior_activity_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_activity_command_script_allows_activity(long);
// bool behavior_activity_activate(long, class c_behavior_state *);
// short behavior_activity_next(long, class c_behavior_state *, class c_behavior_state *);
// bool command_script_allows_activity_termination(long);
// short behavior_activity_decide(long, short, class c_behavior_state *);
// short equipment_get_impulse(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// void actor_attach_equipment(long);
// void actor_throw_equipment(long, short);
// short equipment_active_camo_control_get_impulse(long, class c_behavior_state *);
// public: struct s_ai_equipement_traits const * s_equipment_type_ai_trait_field::get_active_ai_traits(void) const;
// public: struct s_ai_equipement_traits const * s_equipment_type_ai_trait_field::get_inactive_ai_traits(void) const;
// short behavior_squad_patrol_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_squad_patrol_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_squad_patrol_activate(long, class c_behavior_state *);
// void behavior_squad_patrol_set_casual(long);
// void behavior_squad_patrol_deactivate(long, class c_behavior_state *);
// bool behavior_squad_patrol_perform(long, class c_behavior_state *);
// void behavior_squad_patrol_set_active(long);
// bool actor_should_search(long);
// void behavior_squad_patrol_control(long, class c_behavior_state *);
// bool actor_should_run(long);
// bool behavior_interact_object_activate(long, class c_behavior_state *);
// void behavior_interact_object_deactivate(long, class c_behavior_state *);
// bool object_find_interaction_location(long, long, class c_object_interaction_data *);
// bool object_interact(long, class c_object_interaction_data *);
// bool submit_sync_action(long, long, struct s_animation_sync_action const *, struct s_animation_sync_action_same_type_participant const *, union vector3d *);
// bool can_interact_with_object(long, union real_point3d const *, union vector3d const *);
// bool actor_object_interaction_valid(long);
// bool behavior_interact_object_perform(long, class c_behavior_state *);
// float score_object_interaction(long, long);
// bool behavior_interact_object_should_check_score(class c_object_interaction_data const *);
// void behavior_interact_object_control(long, class c_behavior_state *);
// short interact_object_impulse_get_impulse(long, class c_behavior_state *);
// void behavior_object_interaction_setup(short, class c_behavior_state *);
// short impulse_find_throw_interaction_object_get_impulse(long, class c_behavior_state *);
// short movement_plan_cover_get_impulse(long, class c_behavior_state *);
// struct s_firing_position_ref actor_find_intermediate_cover_point(long);
// bool behavior_allow_movement_planning(long);
// short behavior_sync_attack_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_find_compatible_sync_action_to_run(long, struct prop_ref_datum const *, long *, struct s_animation_sync_action const **, struct s_animation_sync_action_same_type_participant const **);
// bool behavior_sync_attack_activate(long, class c_behavior_state *);
// bool behavior_sync_attack_perform(long, class c_behavior_state *);
// bool submit_sync_action(long, struct s_animation_sync_action const *, struct s_animation_sync_action_same_type_participant const *);
// void behavior_sync_attack_control(long, class c_behavior_state *);
// short behavior_control_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_control_activate(long, class c_behavior_state *);
// bool behavior_control_perform(long, class c_behavior_state *);
// void behavior_control_control(long, class c_behavior_state *);
// short interruptible_control_get_impulse(long, class c_behavior_state *);
// public: bool c_static_stack<struct s_firing_position_influence_point, 48>::full(void) const;
// public: enum e_prop_stimulus c_enum_no_init<enum e_prop_stimulus, char, -1, 4, struct s_default_enum_string_resolver>::operator enum e_prop_stimulus(void) const;
// public: c_character_runtime_properties<class c_character_evasion_properties_internal>::c_character_runtime_properties<class c_character_evasion_properties_internal>(void);
// public: c_character_runtime_properties<class c_character_retreat_properties_internal>::c_character_runtime_properties<class c_character_retreat_properties_internal>(void);
// public: enum e_actor_object_interaction_state c_enum_no_init<enum e_actor_object_interaction_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_actor_object_interaction_state(void) const;
// public: bool c_enum_no_init<enum e_actor_object_interaction_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_actor_object_interaction_state) const;
// public: bool c_static_stack<struct s_behavior_choice, 64>::empty(void) const;
// public: bool c_static_stack<struct s_behavior_choice, 64>::full(void) const;
// public: void c_static_stack<struct s_behavior_choice, 64>::push_back(struct s_behavior_choice const &);
// public: struct s_behavior_choice * c_static_stack<struct s_behavior_choice, 64>::begin(void);
// public: struct s_behavior_choice * c_static_stack<struct s_behavior_choice, 64>::end(void);
// public: c_static_stack<struct s_behavior_choice, 64>::c_static_stack<struct s_behavior_choice, 64>(void);
// public: c_character_runtime_properties<class c_character_search_properties_internal>::c_character_runtime_properties<class c_character_search_properties_internal>(void);
// public: bool c_character_runtime_properties<class c_character_search_properties_internal>::valid(void) const;
// public: c_character_runtime_properties<class c_character_presearch_properties_internal>::c_character_runtime_properties<class c_character_presearch_properties_internal>(void);
// public: bool c_character_runtime_properties<class c_character_presearch_properties_internal>::valid(void) const;
// public: c_character_runtime_properties<class c_character_kungfu_properties_internal>::c_character_runtime_properties<class c_character_kungfu_properties_internal>(void);
// public: bool c_character_runtime_properties<class c_character_kungfu_properties_internal>::valid(void) const;
// public: c_character_runtime_properties<class c_character_ready_properties_internal>::c_character_runtime_properties<class c_character_ready_properties_internal>(void);
// public: bool c_character_runtime_properties<class c_character_ready_properties_internal>::valid(void) const;
// public: c_character_runtime_properties<class c_character_interact_properties_internal>::c_character_runtime_properties<class c_character_interact_properties_internal>(void);
// public: bool c_character_runtime_properties<class c_character_interact_properties_internal>::valid(void) const;
// public: bool c_static_stack<struct s_firing_position_influence_point, 48>::valid(void) const;
// public: bool c_static_stack<struct s_behavior_choice, 64>::valid(void) const;
// public: long c_static_stack<struct s_behavior_choice, 64>::push(void);
// public: struct s_behavior_choice * c_static_stack<struct s_behavior_choice, 64>::get(long);
// public: bool c_static_stack<struct s_behavior_choice, 64>::valid(long) const;
// public: void c_big_flags_typed_no_init<long, 256>::and_range(class c_big_flags_typed_no_init<long, 256> const *, long, long);
// public: void c_flags_no_init<enum e_debug_behavior_failure_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_debug_behavior_failure_flags, bool);
// public: c_flags<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// void actor_get_character_definition_properties<class c_character_evasion_properties_internal, 312>(long, class c_character_runtime_properties<class c_character_evasion_properties_internal> &);
// void actor_get_character_definition_properties<class c_character_weapon_properties_internal, 492>(long, class c_character_runtime_properties<class c_character_weapon_properties_internal> &);
// void actor_get_character_definition_properties<class c_character_retreat_properties_internal, 336>(long, class c_character_runtime_properties<class c_character_retreat_properties_internal> &);
// void actor_get_character_definition_properties<class c_character_search_properties_internal, 348>(long, class c_character_runtime_properties<class c_character_search_properties_internal> &);
// public: bool c_flags_no_init<enum e_patrol_point_flags, short, 1, struct s_default_enum_string_resolver>::test(enum e_patrol_point_flags) const;
// void actor_get_character_definition_properties<class c_character_presearch_properties_internal, 360>(long, class c_character_runtime_properties<class c_character_presearch_properties_internal> &);
// void actor_get_character_definition_properties<class c_character_kungfu_properties_internal, 408>(long, class c_character_runtime_properties<class c_character_kungfu_properties_internal> &);
// void actor_get_character_definition_properties<class c_character_ready_properties_internal, 276>(long, class c_character_runtime_properties<class c_character_ready_properties_internal> &);
// public: bool c_flags_no_init<enum e_obstacle_flags, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_obstacle_flags) const;
// void actor_get_character_definition_properties<class c_character_interact_properties_internal, 120>(long, class c_character_runtime_properties<class c_character_interact_properties_internal> &);
// public: void c_character_runtime_properties<class c_character_search_properties_internal>::set(class c_character_search_properties_internal const *);
// public: void c_character_runtime_properties<class c_character_search_properties_internal>::invalidate(void);
// public: void c_character_runtime_properties<class c_character_presearch_properties_internal>::set(class c_character_presearch_properties_internal const *);
// public: void c_character_runtime_properties<class c_character_presearch_properties_internal>::invalidate(void);
// public: void c_character_runtime_properties<class c_character_kungfu_properties_internal>::set(class c_character_kungfu_properties_internal const *);
// public: void c_character_runtime_properties<class c_character_kungfu_properties_internal>::invalidate(void);
// public: void c_character_runtime_properties<class c_character_ready_properties_internal>::set(class c_character_ready_properties_internal const *);
// public: void c_character_runtime_properties<class c_character_ready_properties_internal>::invalidate(void);
// public: void c_character_runtime_properties<class c_character_interact_properties_internal>::set(class c_character_interact_properties_internal const *);
// public: void c_character_runtime_properties<class c_character_interact_properties_internal>::invalidate(void);
// public: static void c_character_properties_base<class c_character_interact_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_interact_properties_internal> *);
// public: static void c_character_properties_base<class c_character_search_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_search_properties_internal> *);
// public: static void c_character_properties_base<class c_character_presearch_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_presearch_properties_internal> *);
// public: static void c_character_properties_base<class c_character_ready_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_ready_properties_internal> *);
// public: static void c_character_properties_base<class c_character_kungfu_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_kungfu_properties_internal> *);
// public: void c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_evasion_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_evasion_properties_internal> &);
// class c_character_evasion_properties_internal * character_definition_properties_get_direct<class c_character_evasion_properties_internal, 312>(long, class c_stimulus_flags const *);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_weapon_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_weapon_properties_internal> &);
// class c_character_weapon_properties_internal * character_definition_properties_get_direct<class c_character_weapon_properties_internal, 492>(long, class c_stimulus_flags const *);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_retreat_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_retreat_properties_internal> &);
// class c_character_retreat_properties_internal * character_definition_properties_get_direct<class c_character_retreat_properties_internal, 336>(long, class c_stimulus_flags const *);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_search_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_search_properties_internal> &);
// class c_character_search_properties_internal * character_definition_properties_get_direct<class c_character_search_properties_internal, 348>(long, class c_stimulus_flags const *);
// public: static bool c_flags_no_init<enum e_patrol_point_flags, short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_patrol_point_flags);
// private: static short c_flags_no_init<enum e_patrol_point_flags, short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_patrol_point_flags);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_presearch_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_presearch_properties_internal> &);
// class c_character_presearch_properties_internal * character_definition_properties_get_direct<class c_character_presearch_properties_internal, 360>(long, class c_stimulus_flags const *);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_kungfu_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_kungfu_properties_internal> &);
// class c_character_kungfu_properties_internal * character_definition_properties_get_direct<class c_character_kungfu_properties_internal, 408>(long, class c_stimulus_flags const *);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_ready_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_ready_properties_internal> &);
// class c_character_ready_properties_internal * character_definition_properties_get_direct<class c_character_ready_properties_internal, 276>(long, class c_stimulus_flags const *);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_interact_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_interact_properties_internal> &);
// class c_character_interact_properties_internal * character_definition_properties_get_direct<class c_character_interact_properties_internal, 120>(long, class c_stimulus_flags const *);
// void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_search_properties_internal>, class c_character_search_properties_internal>(class c_character_runtime_properties<class c_character_search_properties_internal> *, class c_character_search_properties_internal const *);
// void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_presearch_properties_internal>, class c_character_presearch_properties_internal>(class c_character_runtime_properties<class c_character_presearch_properties_internal> *, class c_character_presearch_properties_internal const *);
// void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_kungfu_properties_internal>, class c_character_kungfu_properties_internal>(class c_character_runtime_properties<class c_character_kungfu_properties_internal> *, class c_character_kungfu_properties_internal const *);
// void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_ready_properties_internal>, class c_character_ready_properties_internal>(class c_character_runtime_properties<class c_character_ready_properties_internal> *, class c_character_ready_properties_internal const *);
// void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_interact_properties_internal>, class c_character_interact_properties_internal>(class c_character_runtime_properties<class c_character_interact_properties_internal> *, class c_character_interact_properties_internal const *);
// public: static bool c_character_runtime_properties<class c_character_search_properties_internal>::static_valid(void *);
// public: static bool c_character_runtime_properties<class c_character_presearch_properties_internal>::static_valid(void *);
// public: static bool c_character_runtime_properties<class c_character_kungfu_properties_internal>::static_valid(void *);
// public: static bool c_character_runtime_properties<class c_character_ready_properties_internal>::static_valid(void *);
// public: static bool c_character_runtime_properties<class c_character_interact_properties_internal>::static_valid(void *);
// private: static unsigned char c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// struct s_tag_block * character_definition_property_block_get<312>(long, class c_stimulus_flags const *);
// struct s_tag_block * character_definition_property_block_get<492>(long, class c_stimulus_flags const *);
// struct s_tag_block * character_definition_property_block_get<336>(long, class c_stimulus_flags const *);
// struct s_tag_block * character_definition_property_block_get<348>(long, class c_stimulus_flags const *);
// struct s_tag_block * character_definition_property_block_get<360>(long, class c_stimulus_flags const *);
// struct s_tag_block * character_definition_property_block_get<408>(long, class c_stimulus_flags const *);
// struct s_tag_block * character_definition_property_block_get<276>(long, class c_stimulus_flags const *);
// struct s_tag_block * character_definition_property_block_get<120>(long, class c_stimulus_flags const *);
// private: static unsigned char c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_ai_sync_action_participant_flags);
// bool behavior_is_allowed(long, class Behavior_header const *);
// public: struct s_stimulus_payload_combat_sync_action const * c_stimulus_payload::get_combat_sync_action_data_const(void) const;
// bool behavior_avoid_perform(long, class c_behavior_state *);
// public: void c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::set_all(void);
// public: bool c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::valid(void) const;
// protected: static unsigned long c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::get_mask_of_second_slice_of_chunk_inclusive(enum e_danger_assessment_flags);
// protected: static enum e_danger_assessment_flags c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::bit_index_to_flag_chunk_index(enum e_danger_assessment_flags);
// protected: static unsigned long c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::get_valid_mask_of_last_chunk(void);
// protected: static unsigned long c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::get_mask_of_first_slice_of_chunk_exclusive(enum e_danger_assessment_flags);
// short behavior_vehicle_avoid_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_vehicle_avoid_perform(long, class c_behavior_state *);
// short behavior_combat_decide(long, short, class c_behavior_state *);
// short behavior_kamikaze_next(long, class c_behavior_state *, class c_behavior_state *);
// short behavior_broken_decide(long, short, class c_behavior_state *);
// short behavior_vehicle_ram_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_vehicle_ram_activate(long, class c_behavior_state *);
// short behavior_vehicle_ram_next(long, class c_behavior_state *, class c_behavior_state *);
// void behavior_vehicle_ram_control(long, class c_behavior_state *);
// short behavior_vehicle_charge_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool vehicle_charge_angle_valid(long, class c_character_vehicle_properties_internal const *, float, long, bool);
// bool vehicle_charge_range_valid(long, float *, long);
// bool behavior_vehicle_charge_activate(long, class c_behavior_state *);
// void behavior_vehicle_charge_deactivate(long, class c_behavior_state *);
// short behavior_vehicle_charge_next(long, class c_behavior_state *, class c_behavior_state *);
// public: class c_character_vehicle_properties_internal const * c_character_runtime_properties<class c_character_vehicle_properties_internal>::get_properties(void);
// bool behavior_cover_activate(long, class c_behavior_state *);
// short behavior_vehicle_cover_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_vehicle_cover_activate(long, class c_behavior_state *);
// short behavior_vehicle_cover_next(long, class c_behavior_state *, class c_behavior_state *);
// bool vehicle_cover_safe(long, long);
// bool behavior_vehicle_cover_perform(long, class c_behavior_state *);
// void behavior_vehicle_cover_control(long, class c_behavior_state *);
// void behavior_cower_clear_non_deterministic_behavior_state(class c_behavior_state *);
// short impulse_anti_vehicle_grenade_get_impulse(long, class c_behavior_state *);
// short unassailable_enemy_grenade_get_impulse(long, class c_behavior_state *);
// short behavior_engage_decide(long, short, class c_behavior_state *);
// bool behavior_fight_activate(long, class c_behavior_state *);
// void behavior_fight_deactivate(long, class c_behavior_state *);
// short behavior_fight_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_fight_perform(long, class c_behavior_state *);
// short fight_predict_visibility(long, union real_point3d const *, long, short);
// void behavior_fight_control(long, class c_behavior_state *);
// void behavior_fight_clear_non_deterministic_behavior_state(class c_behavior_state *);
// short behavior_fight_positioning_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// void behavior_fight_positioning_control(long, class c_behavior_state *);
// void flee_flush_actor(long, class c_behavior_state *, long);
// void flee_flush_firing_position_indices(long, class c_behavior_state *, bool);
// void behavior_guard_deactivate(long, class c_behavior_state *);
// void behavior_postcombat_flush_prop(long, class c_behavior_state *, long);
// short behavior_postombat_approach_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_postombat_approach_activate(long, class c_behavior_state *);
// short behavior_postombat_approach_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_postombat_approach_perform(long, class c_behavior_state *);
// void behavior_postombat_approach_control(long, class c_behavior_state *);
// void behavior_postcombat_approach_flush_actor(long, class c_behavior_state *, long);
// void behavior_postcombat_clear_non_deterministic_behavior_state(class c_behavior_state *);
// short behavior_presearch_decide(long, short, class c_behavior_state *);
// float behavior_presearch_get_child_weight(long, short);
// bool behavior_presearch_child_allowed(long, short);
// short behavior_find_pursuit_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_find_pursuit_next(long, class c_behavior_state *, class c_behavior_state *);
// bool find_pursuit_position(long, long);
// bool find_search_performance(long, long);
// void behavior_find_pursuit_control(long, class c_behavior_state *);
// short behavior_enter_vehicle_next(long, class c_behavior_state *, class c_behavior_state *);
// short behavior_pickup_player_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_pickup_player_activate(long, class c_behavior_state *);
// short behavior_pickup_player_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_pickup_player_perform(long, class c_behavior_state *);
// void behavior_pickup_player_control(long, class c_behavior_state *);
// bool behavior_wander_activate(long, class c_behavior_state *);
// bool behavior_wander_perform(long, class c_behavior_state *);
// void behavior_wander_control(long, class c_behavior_state *);
// short behavior_wander_next(long, class c_behavior_state *, class c_behavior_state *);
// short behavior_flight_wander_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_flight_wander_activate(long, class c_behavior_state *);
// short behavior_flight_wander_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_flight_wander_perform(long, class c_behavior_state *);
// void behavior_flight_wander_control(long, class c_behavior_state *);
// public: struct s_firing_position & c_static_stack<struct s_firing_position, 512>::operator[](long);
// short behavior_vehicle_flip_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// long behavior_vehicle_flip_activate(long, class c_behavior_state *);
// short behavior_vehicle_flip_select_actors(long, long, class c_behavior_state *);
// short behavior_vehicle_flip_next(long, class c_behavior_state *, class c_behavior_state *);
// void behavior_leap_on_cover_clear_non_deterministic_behavior_state(class c_behavior_state *);
// short behavior_board_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// float board_range(long, class c_character_boarding_properties_internal const *, bool);
// bool boarding_seat_available(long, long);
// bool behavior_board_activate(long, class c_behavior_state *);
// void behavior_board_deactivate(long, class c_behavior_state *);
// short behavior_board_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_board_perform(long, class c_behavior_state *);
// void behavior_board_control(long, class c_behavior_state *);
// public: class c_character_boarding_properties_internal const * c_character_runtime_properties<class c_character_boarding_properties_internal>::get_properties(void);
// public: void c_flags_no_init<enum e_prop_ref_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_prop_ref_flags, bool);
// short behavior_cure_isolation_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// short behavior_cure_isolation_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_cure_isolation_activate(long, class c_behavior_state *);
// bool behavior_cure_isolation_perform(long, class c_behavior_state *);
// void behavior_cure_isolation_control(long, class c_behavior_state *);
// void behavior_activity_deactivate(long, class c_behavior_state *);
// short engineer_control_get_impulse(long, class c_behavior_state *);
// bool engineer_has_child(long, long, long *);
// public: c_character_runtime_properties<class c_character_engineer_properties_internal>::c_character_runtime_properties<class c_character_engineer_properties_internal>(void);
// public: bool c_character_runtime_properties<class c_character_engineer_properties_internal>::valid(void) const;
// void actor_get_character_definition_properties<class c_character_engineer_properties_internal, 456>(long, class c_character_runtime_properties<class c_character_engineer_properties_internal> &);
// public: bool c_flags_no_init<enum e_engineer_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_engineer_flags) const;
// public: void c_flags_no_init<enum e_engineer_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_engineer_flags, bool);
// public: void c_character_runtime_properties<class c_character_engineer_properties_internal>::set(class c_character_engineer_properties_internal const *);
// public: void c_character_runtime_properties<class c_character_engineer_properties_internal>::invalidate(void);
// public: static void c_character_properties_base<class c_character_engineer_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_engineer_properties_internal> *);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_engineer_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_engineer_properties_internal> &);
// class c_character_engineer_properties_internal * character_definition_properties_get_direct<class c_character_engineer_properties_internal, 456>(long, class c_stimulus_flags const *);
// public: static bool c_flags_no_init<enum e_engineer_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_engineer_flags);
// private: static unsigned short c_flags_no_init<enum e_engineer_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_engineer_flags);
// void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_engineer_properties_internal>, class c_character_engineer_properties_internal>(class c_character_runtime_properties<class c_character_engineer_properties_internal> *, class c_character_engineer_properties_internal const *);
// public: static bool c_character_runtime_properties<class c_character_engineer_properties_internal>::static_valid(void *);
// struct s_tag_block * character_definition_property_block_get<456>(long, class c_stimulus_flags const *);
// short boost_allies_get_impulse(long, class c_behavior_state *);
// short behavior_engineer_explode_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *);
// bool behavior_engineer_explode_activate(long, class c_behavior_state *);
// short behavior_engineer_explode_next(long, class c_behavior_state *, class c_behavior_state *);
// bool behavior_engineer_explode_perform(long, class c_behavior_state *);
// void behavior_engineer_explode_control(long, class c_behavior_state *);
// short engineer_broken_detonation_get_impulse(long, class c_behavior_state *);

//void behaviors_initialize(void)
//{
//    mangled_ppc("?behaviors_initialize@@YAXXZ");
//};

//short construct_child_list_internal(struct child_entry **, struct custom_child_list *, struct child_entry *, short)
//{
//    mangled_ppc("?construct_child_list_internal@@YAFPAPAUchild_entry@@PAUcustom_child_list@@PAU1@F@Z");
//};

//void mark_executing_behaviors(long)
//{
//    mangled_ppc("?mark_executing_behaviors@@YAXJ@Z");
//};

//short actor_executing_layer(long, short)
//{
//    mangled_ppc("?actor_executing_layer@@YAFJF@Z");
//};

//bool actor_executing(long, short)
//{
//    mangled_ppc("?actor_executing@@YA_NJF@Z");
//};

//short behavior_update_running_child(long, short, class c_behavior_state *, short *)
//{
//    mangled_ppc("?behavior_update_running_child@@YAFJFPAVc_behavior_state@@PAF@Z");
//};

//void clear_stimulus_children(struct child_entry **, short)
//{
//    mangled_ppc("?clear_stimulus_children@@YAXPAPAUchild_entry@@F@Z");
//};

//struct child_entry ** child_list_get(long, short, short *)
//{
//    mangled_ppc("?child_list_get@@YAPAPAUchild_entry@@JFPAF@Z");
//};

//short actor_behavior_layer_get_child_index(long, short)
//{
//    mangled_ppc("?actor_behavior_layer_get_child_index@@YAFJF@Z");
//};

//short behavior_decide_sequential(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_decide_sequential@@YAFJFPAVc_behavior_state@@@Z");
//};

//short behavior_decide_internal(long, struct child_entry **, short, short, class c_big_flags_typed_no_init<long, 256> *, float (*)(long, short), class c_behavior_state *, class c_behavior_state *, short, short *, short *)
//{
//    mangled_ppc("?behavior_decide_internal@@YAFJPAPAUchild_entry@@FFPAV?$c_big_flags_typed_no_init@J$0BAA@@@P6AMJF@ZPAVc_behavior_state@@3FPAF4@Z");
//};

//void test_child_entry(long, struct child_entry const *, short *, short *, class c_behavior_state const *, class c_behavior_state *)
//{
//    mangled_ppc("?test_child_entry@@YAXJPBUchild_entry@@PAF1PBVc_behavior_state@@PAV2@@Z");
//};

//short behavior_decide_sequential_looping(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_decide_sequential_looping@@YAFJFPAVc_behavior_state@@@Z");
//};

//short behavior_decide_prioritized(long, short, class c_behavior_state *, class c_big_flags_typed_no_init<long, 256> *)
//{
//    mangled_ppc("?behavior_decide_prioritized@@YAFJFPAVc_behavior_state@@PAV?$c_big_flags_typed_no_init@J$0BAA@@@@Z");
//};

//short behavior_decide_prioritized(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_decide_prioritized@@YAFJFPAVc_behavior_state@@@Z");
//};

//short behavior_decide_probabilistic(long, short, float (*)(long, short), class c_behavior_state *)
//{
//    mangled_ppc("?behavior_decide_probabilistic@@YAFJFP6AMJF@ZPAVc_behavior_state@@@Z");
//};

//long behavior_build_condition_flags(long)
//{
//    mangled_ppc("?behavior_build_condition_flags@@YAJJ@Z");
//};

//short actor_get_root_behavior(long)
//{
//    mangled_ppc("?actor_get_root_behavior@@YAFJ@Z");
//};

//void action_selection(long)
//{
//    mangled_ppc("?action_selection@@YAXJ@Z");
//};

//void generate_style_vector(long, class c_big_flags_typed_no_init<long, 256> *)
//{
//    mangled_ppc("?generate_style_vector@@YAXJPAV?$c_big_flags_typed_no_init@J$0BAA@@@@Z");
//};

//short behavior_find_layer(struct actor_datum *, short, short)
//{
//    mangled_ppc("?behavior_find_layer@@YAFPAUactor_datum@@FF@Z");
//};

//void behavior_clear_layer_state(struct actor_datum *, short)
//{
//    mangled_ppc("?behavior_clear_layer_state@@YAXPAUactor_datum@@F@Z");
//};

//void behavior_state_fail_child(class c_behavior_state *)
//{
//    mangled_ppc("?behavior_state_fail_child@@YAXPAVc_behavior_state@@@Z");
//};

//bool behavior_change(long, short, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_change@@YA_NJFFPAVc_behavior_state@@@Z");
//};

//class c_behavior_state * actor_behavior_state_allocate(struct actor_datum *, short)
//{
//    mangled_ppc("?actor_behavior_state_allocate@@YAPAVc_behavior_state@@PAUactor_datum@@F@Z");
//};

//void behavior_control(long)
//{
//    mangled_ppc("?behavior_control@@YAXJ@Z");
//};

//public: Behavior_header::Behavior_header(short, short, long)
//{
//    mangled_ppc("??0Behavior_header@@QAA@FFJ@Z");
//};

//public: Behavior_impulse::Behavior_impulse(short, long, short (*)(long, class c_behavior_state *))
//{
//    mangled_ppc("??0Behavior_impulse@@QAA@FJP6AFJPAVc_behavior_state@@@Z@Z");
//};

//public: Behavior::Behavior(short, short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), short, void (*)(class c_behavior_state *))
//{
//    mangled_ppc("??0Behavior@@QAA@FFJP6AFJPBUs_behavior_input@@PBUs_behavior_arguments@@@ZP6AFJPAVc_behavior_state@@3@ZP6A_NJ3@ZP6AXJ3@ZFP6AX3@Z@Z");
//};

//public: Behavior::Behavior(short, short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), short, void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, bool), void (*)(long, class c_behavior_state *), void (*)(class c_behavior_state *))
//{
//    mangled_ppc("??0Behavior@@QAA@FFJP6AFJPBUs_behavior_input@@PBUs_behavior_arguments@@@ZP6AFJPAVc_behavior_state@@3@ZP6A_NJ3@ZP6AXJ3@ZFP6AXJ3J@Z776P6AXJ3_N@Z6P6AX3@Z@Z");
//};

//public: Primitive_behavior::Primitive_behavior(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), short, bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), void (*)(class c_behavior_state *))
//{
//    mangled_ppc("??0Primitive_behavior@@QAA@FJP6AFJPBUs_behavior_input@@PBUs_behavior_arguments@@@ZP6AFJPAVc_behavior_state@@3@ZP6A_NJ3@ZP6AXJ3@ZF56P6AX3@Z@Z");
//};

//public: Primitive_behavior::Primitive_behavior(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), short, bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, bool), void (*)(long, class c_behavior_state *), void (*)(class c_behavior_state *))
//{
//    mangled_ppc("??0Primitive_behavior@@QAA@FJP6AFJPBUs_behavior_input@@PBUs_behavior_arguments@@@ZP6AFJPAVc_behavior_state@@3@ZP6A_NJ3@ZP6AXJ3@ZF56P6AXJ3J@Z776P6AXJ3_N@Z6P6AX3@Z@Z");
//};

//public: Mutex_group::Mutex_group(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), short, short (*)(long, short, class c_behavior_state *), short, struct child_entry *, void (*)(class c_behavior_state *))
//{
//    mangled_ppc("??0Mutex_group@@QAA@FJP6AFJPBUs_behavior_input@@PBUs_behavior_arguments@@@ZP6AFJPAVc_behavior_state@@3@ZP6A_NJ3@ZP6AXJ3@ZFP6AFJF3@ZFPAUchild_entry@@P6AX3@Z@Z");
//};

//public: Mutex_group::Mutex_group(short, long, short (*)(long, struct s_behavior_input const *, struct s_behavior_arguments const *), short (*)(long, class c_behavior_state *, class c_behavior_state *), bool (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *), short, short (*)(long, short, class c_behavior_state *), short, struct child_entry *, void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *, long), void (*)(long, class c_behavior_state *), void (*)(long, class c_behavior_state *, bool), void (*)(long, class c_behavior_state *), void (*)(class c_behavior_state *))
//{
//    mangled_ppc("??0Mutex_group@@QAA@FJP6AFJPBUs_behavior_input@@PBUs_behavior_arguments@@@ZP6AFJPAVc_behavior_state@@3@ZP6A_NJ3@ZP6AXJ3@ZFP6AFJF3@ZFPAUchild_entry@@P6AXJ3J@Z996P6AXJ3_N@Z6P6AX3@Z@Z");
//};

//short actor_behavior_state_offset_get(struct actor_datum const *, short)
//{
//    mangled_ppc("?actor_behavior_state_offset_get@@YAFPBUactor_datum@@F@Z");
//};

//bool actor_behavior_layer_valid(struct actor_datum const *, short)
//{
//    mangled_ppc("?actor_behavior_layer_valid@@YA_NPBUactor_datum@@F@Z");
//};

//class c_behavior_state * actor_behavior_state_get(struct actor_datum const *, short)
//{
//    mangled_ppc("?actor_behavior_state_get@@YAPAVc_behavior_state@@PBUactor_datum@@F@Z");
//};

//short actor_behavior_index_get(struct actor_datum const *, short)
//{
//    mangled_ppc("?actor_behavior_index_get@@YAFPBUactor_datum@@F@Z");
//};

//class Behavior_header * actor_behavior_get(struct actor_datum const *, short)
//{
//    mangled_ppc("?actor_behavior_get@@YAPAVBehavior_header@@PBUactor_datum@@F@Z");
//};

//void verify_behavior_hierarchy(void)
//{
//    mangled_ppc("?verify_behavior_hierarchy@@YAXXZ");
//};

//void behavior_log_enter(char const *, short, bool)
//{
//    mangled_ppc("?behavior_log_enter@@YAXPBDF_N@Z");
//};

//void behavior_log_display(void)
//{
//    mangled_ppc("?behavior_log_display@@YAXXZ");
//};

//void behavior_log_reset(void)
//{
//    mangled_ppc("?behavior_log_reset@@YAXXZ");
//};

//short behavior_index_by_name(char const *)
//{
//    mangled_ppc("?behavior_index_by_name@@YAFPBD@Z");
//};

//short behavior_arrange_sync_action_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_arrange_sync_action_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//public: s_ai_sync_action_arranger_state::s_ai_sync_action_arranger_state(void)
//{
//    mangled_ppc("??0s_ai_sync_action_arranger_state@@QAA@XZ");
//};

//public: s_ai_sync_action_participant::s_ai_sync_action_participant(void)
//{
//    mangled_ppc("??0s_ai_sync_action_participant@@QAA@XZ");
//};

//bool behavior_arrange_sync_action_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_arrange_sync_action_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_arrange_sync_action_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_arrange_sync_action_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_arrange_sync_action_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_arrange_sync_action_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_arrange_sync_action_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_arrange_sync_action_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_arrange_sync_action_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_arrange_sync_action_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//void setup_go_to_behavior(class c_behavior_state *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?setup_go_to_behavior@@YAXPAVc_behavior_state@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_go_to_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_go_to_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_go_to_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_go_to_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_go_to_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_go_to_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_go_to_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_go_to_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_alert_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_alert_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_alert_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_alert_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_alert_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_alert_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_ambush_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_ambush_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_ambush_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_ambush_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_ambush_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_ambush_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_ambush_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_ambush_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//short dive_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?dive_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//bool actor_action_find_escape_from_danger(long, struct s_stimulus_data_information const *, struct s_danger_escape *)
//{
//    mangled_ppc("?actor_action_find_escape_from_danger@@YA_NJPBUs_stimulus_data_information@@PAUs_danger_escape@@@Z");
//};

//bool actor_action_try_to_dive(long, struct s_danger_escape *, float)
//{
//    mangled_ppc("?actor_action_try_to_dive@@YA_NJPAUs_danger_escape@@M@Z");
//};

//bool brace(long, struct s_danger_assessment const *)
//{
//    mangled_ppc("?brace@@YA_NJPBUs_danger_assessment@@@Z");
//};

//bool behavior_avoid_control_helper(long, class c_avoid_state_data *, struct s_danger_assessment *, struct s_stimulus_data_information *, float, union vector3d *)
//{
//    mangled_ppc("?behavior_avoid_control_helper@@YA_NJPAVc_avoid_state_data@@PAUs_danger_assessment@@PAUs_stimulus_data_information@@MPATvector3d@@@Z");
//};

//short behavior_avoid_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_avoid_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short get_avoidance_desire(long, float)
//{
//    mangled_ppc("?get_avoidance_desire@@YAFJM@Z");
//};

//bool behavior_avoid_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_avoid_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_avoid_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_avoid_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_vehicle_avoid_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_vehicle_avoid_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_vehicle_avoid_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_avoid_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_vehicle_avoid_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_avoid_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short berserk_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?berserk_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short shield_depleted_berserk_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?shield_depleted_berserk_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short proximity_berserk_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?proximity_berserk_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short leader_abandoned_charge_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?leader_abandoned_charge_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short last_man_berserk_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?last_man_berserk_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short surprise_berserk_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?surprise_berserk_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short stuck_with_grenade_berserk_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?stuck_with_grenade_berserk_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short charge_children_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?charge_children_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//void charge_movement_helper(long, class c_charge_state_data *, float, bool *, bool *, bool *)
//{
//    mangled_ppc("?charge_movement_helper@@YAXJPAVc_charge_state_data@@MPA_N11@Z");
//};

//void charge_setup(short, class c_behavior_state *)
//{
//    mangled_ppc("?charge_setup@@YAXFPAVc_behavior_state@@@Z");
//};

//short behavior_melee_charge_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_melee_charge_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_melee_charge_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_melee_charge_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_melee_charge_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_melee_charge_control@@YAXJPAVc_behavior_state@@@Z");
//};

//bool melee_activate_helper(long, class c_behavior_state *, bool)
//{
//    mangled_ppc("?melee_activate_helper@@YA_NJPAVc_behavior_state@@_N@Z");
//};

//bool charge_get_melee_range_and_ticks(long, bool, bool, bool, bool, short *, float *, short *, float *)
//{
//    mangled_ppc("?charge_get_melee_range_and_ticks@@YA_NJ_N000PAFPAM12@Z");
//};

//bool behavior_melee_charge_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_melee_charge_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_melee_charge_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_melee_charge_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_melee_leaping_charge_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_melee_leaping_charge_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_melee_leaping_charge_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_melee_leaping_charge_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_melee_leaping_charge_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_melee_leaping_charge_control@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_melee_leaping_charge_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_melee_leaping_charge_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_melee_leaping_charge_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_melee_leaping_charge_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short unreachable_leap_charge_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?unreachable_leap_charge_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short behavior_combat_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_combat_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_combat_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_combat_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_combat_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_combat_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short broken_berserk_impulse_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?broken_berserk_impulse_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short broken_kamikaze_impulse_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?broken_kamikaze_impulse_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//bool behavior_kamikaze_create_grenades(long, class c_kamikaze_state_data *)
//{
//    mangled_ppc("?behavior_kamikaze_create_grenades@@YA_NJPAVc_kamikaze_state_data@@@Z");
//};

//bool behavior_kamikaze_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_kamikaze_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_kamikaze_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_kamikaze_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//void kamikaze_drop_grenades(class c_kamikaze_state_data *)
//{
//    mangled_ppc("?kamikaze_drop_grenades@@YAXPAVc_kamikaze_state_data@@@Z");
//};

//short behavior_kamikaze_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_kamikaze_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_kamikaze_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_kamikaze_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void kamikaze_detonate_grenades(class c_kamikaze_state_data *)
//{
//    mangled_ppc("?kamikaze_detonate_grenades@@YAXPAVc_kamikaze_state_data@@@Z");
//};

//void behavior_kamikaze_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_kamikaze_control@@YAXJPAVc_behavior_state@@@Z");
//};

//void behavior_kamikaze_flush_object(long, class c_behavior_state *, long)
//{
//    mangled_ppc("?behavior_kamikaze_flush_object@@YAXJPAVc_behavior_state@@J@Z");
//};

//short broken_flee_impulse_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?broken_flee_impulse_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short broken_scatter_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?broken_scatter_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short huddle_impulse_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?huddle_impulse_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short behavior_huddle_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_huddle_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_huddle_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_huddle_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//long behavior_huddle_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_huddle_activate@@YAJJPAVc_behavior_state@@@Z");
//};

//void behavior_huddle_deactivate(long, class c_behavior_state *, struct joint_state_datum *)
//{
//    mangled_ppc("?behavior_huddle_deactivate@@YAXJPAVc_behavior_state@@PAUjoint_state_datum@@@Z");
//};

//bool behavior_huddle_perform(long, class c_behavior_state *, struct joint_state_datum *)
//{
//    mangled_ppc("?behavior_huddle_perform@@YA_NJPAVc_behavior_state@@PAUjoint_state_datum@@@Z");
//};

//void huddle_choose_firing_position(long, class c_behavior_state *, struct joint_state_datum *)
//{
//    mangled_ppc("?huddle_choose_firing_position@@YAXJPAVc_behavior_state@@PAUjoint_state_datum@@@Z");
//};

//void behavior_huddle_control(long, class c_behavior_state *, struct joint_state_datum *)
//{
//    mangled_ppc("?behavior_huddle_control@@YAXJPAVc_behavior_state@@PAUjoint_state_datum@@@Z");
//};

//void behavior_huddle_debug(long, class c_behavior_state *, struct joint_state_datum *)
//{
//    mangled_ppc("?behavior_huddle_debug@@YAXJPAVc_behavior_state@@PAUjoint_state_datum@@@Z");
//};

//void behavior_huddle_flush_firing_points(long, class c_behavior_state *, bool)
//{
//    mangled_ppc("?behavior_huddle_flush_firing_points@@YAXJPAVc_behavior_state@@_N@Z");
//};

//short behavior_broken_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_broken_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_broken_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_broken_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool behavior_vehicle_ram_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_ram_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//float vehicle_charge_get_min_weapon_range(long)
//{
//    mangled_ppc("?vehicle_charge_get_min_weapon_range@@YAMJ@Z");
//};

//bool behavior_vehicle_charge_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_charge_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_vehicle_charge_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_charge_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_cover_get_desire_helper(long)
//{
//    mangled_ppc("?behavior_cover_get_desire_helper@@YAFJ@Z");
//};

//short behavior_cover_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_cover_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//void behavior_cover_activate_helper(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cover_activate_helper@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_cover_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cover_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_cover_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cover_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool behavior_cover_find_cover_point(long, class c_cover_state_data *)
//{
//    mangled_ppc("?behavior_cover_find_cover_point@@YA_NJPAVc_cover_state_data@@@Z");
//};

//bool behavior_cover_navigate_to_cover_point(long, struct s_firing_position_ref, struct s_firing_position *, class c_cover_state_data *, struct path_state *, bool, long, struct s_firing_position_evaluation_context const *)
//{
//    mangled_ppc("?behavior_cover_navigate_to_cover_point@@YA_NJUs_firing_position_ref@@PAUs_firing_position@@PAVc_cover_state_data@@PAUpath_state@@_NJPBUs_firing_position_evaluation_context@@@Z");
//};

//bool cover_point_exposed(long, class c_cover_state_data const *, struct prop_ref_datum const *)
//{
//    mangled_ppc("?cover_point_exposed@@YA_NJPBVc_cover_state_data@@PBUprop_ref_datum@@@Z");
//};

//void cover_update_hologram_state(long, class c_behavior_state *)
//{
//    mangled_ppc("?cover_update_hologram_state@@YAXJPAVc_behavior_state@@@Z");
//};

//void behavior_cover_control_helper(long, class c_behavior_state *, bool)
//{
//    mangled_ppc("?behavior_cover_control_helper@@YAXJPAVc_behavior_state@@_N@Z");
//};

//void behavior_cover_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cover_control@@YAXJPAVc_behavior_state@@@Z");
//};

//void behavior_cover_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cover_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short impulse_proximity_ambush_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?impulse_proximity_ambush_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short impulse_vulnerable_enemy_ambush_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?impulse_vulnerable_enemy_ambush_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short behavior_coordinated_ambush_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_coordinated_ambush_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_coordinated_ambush_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_coordinated_ambush_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//long behavior_coordinated_ambush_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_coordinated_ambush_activate@@YAJJPAVc_behavior_state@@@Z");
//};

//void joint_deactivate(long, class c_behavior_state *, struct joint_state_datum *)
//{
//    mangled_ppc("?joint_deactivate@@YAXJPAVc_behavior_state@@PAUjoint_state_datum@@@Z");
//};

//short behavior_coordinated_ambush_select_actors(long, long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_coordinated_ambush_select_actors@@YAFJJPAVc_behavior_state@@@Z");
//};

//short behavior_cower_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_cower_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_cower_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cower_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_cower_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cower_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_cower_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cower_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//void behavior_cower_flush_structure_indices(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cower_flush_structure_indices@@YAXJPAVc_behavior_state@@@Z");
//};

//short berserk_wander_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?berserk_wander_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short danger_crouch_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?danger_crouch_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short impulse_grenade_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?impulse_grenade_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//bool unit_can_queue_grenade(long)
//{
//    mangled_ppc("?unit_can_queue_grenade@@YA_NJ@Z");
//};

//short stalker_camo_control_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?stalker_camo_control_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short impulse_evasion_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?impulse_evasion_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short juke_impulse_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?juke_impulse_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short behavior_engage_sync_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_engage_sync_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_engage_sync_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_engage_sync_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_engage_sync_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_engage_sync_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool behavior_engage_sync_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_engage_sync_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_engage_sync_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_engage_sync_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_engage_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_engage_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_engage_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_engage_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_engage_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_engage_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_fight_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_fight_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool fighting_perception_valid(long)
//{
//    mangled_ppc("?fighting_perception_valid@@YA_NJ@Z");
//};

//bool fight_choose_fight_point(long, class c_fight_state_data *)
//{
//    mangled_ppc("?fight_choose_fight_point@@YA_NJPAVc_fight_state_data@@@Z");
//};

//void fight_reset_firing_position_timer(long, class c_fight_state_data *)
//{
//    mangled_ppc("?fight_reset_firing_position_timer@@YAXJPAVc_fight_state_data@@@Z");
//};

//short behavior_flee_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_flee_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_flee_setup(class c_flee_state_data *, long, long, long)
//{
//    mangled_ppc("?behavior_flee_setup@@YA_NPAVc_flee_state_data@@JJJ@Z");
//};

//bool behavior_flee_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flee_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_flee_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flee_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_flee_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flee_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_flee_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flee_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_flee_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flee_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool flee_at_flee_position(long, class c_flee_state_data *)
//{
//    mangled_ppc("?flee_at_flee_position@@YA_NJPAVc_flee_state_data@@@Z");
//};

//bool action_flee_current_position_exposed(long, class c_flee_state_data *)
//{
//    mangled_ppc("?action_flee_current_position_exposed@@YA_NJPAVc_flee_state_data@@@Z");
//};

//void action_flee_find_flee_position(long, bool, class c_flee_state_data *)
//{
//    mangled_ppc("?action_flee_find_flee_position@@YAXJ_NPAVc_flee_state_data@@@Z");
//};

//void behavior_formation_setup(long, short, long, long, long, class c_formation_data *)
//{
//    mangled_ppc("?behavior_formation_setup@@YAXJFJJJPAVc_formation_data@@@Z");
//};

//short behavior_formation_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_formation_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_formation_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_formation_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//long behavior_formation_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_formation_activate@@YAJJPAVc_behavior_state@@@Z");
//};

//bool behavior_formation_perform(long, class c_behavior_state *, struct joint_state_datum *)
//{
//    mangled_ppc("?behavior_formation_perform@@YA_NJPAVc_behavior_state@@PAUjoint_state_datum@@@Z");
//};

//bool formation_get_position(long, short, short, union real_point2d const *, union vector2d const *, union vector2d const *, union real_point2d *)
//{
//    mangled_ppc("?formation_get_position@@YA_NJFFPBTreal_point2d@@PBTvector2d@@1PAT1@@Z");
//};

//short formation_member_get_position_index(short, struct joint_state_datum *)
//{
//    mangled_ppc("?formation_member_get_position_index@@YAFFPAUjoint_state_datum@@@Z");
//};

//class c_behavior_state * formation_member_get_state(struct joint_state_datum const *, short)
//{
//    mangled_ppc("?formation_member_get_state@@YAPAVc_behavior_state@@PBUjoint_state_datum@@F@Z");
//};

//short formation_find_position(long, class c_formation_data *, struct joint_state_datum *, union real_point2d const *, union vector2d const *, union vector2d const *, union real_point2d *)
//{
//    mangled_ppc("?formation_find_position@@YAFJPAVc_formation_data@@PAUjoint_state_datum@@PBTreal_point2d@@PBTvector2d@@3PAT3@@Z");
//};

//short formation_get_member_in_position(struct joint_state_datum *, short)
//{
//    mangled_ppc("?formation_get_member_in_position@@YAFPAUjoint_state_datum@@F@Z");
//};

//bool formation_can_fire_on_target(long, short, short, union vector2d const *, union vector2d const *)
//{
//    mangled_ppc("?formation_can_fire_on_target@@YA_NJFFPBTvector2d@@0@Z");
//};

//void behavior_formation_control(long, class c_behavior_state *, struct joint_state_datum *)
//{
//    mangled_ppc("?behavior_formation_control@@YAXJPAVc_behavior_state@@PAUjoint_state_datum@@@Z");
//};

//void formation_get_facing(struct joint_state_datum const *, union vector2d *)
//{
//    mangled_ppc("?formation_get_facing@@YAXPBUjoint_state_datum@@PATvector2d@@@Z");
//};

//short behavior_formation_select_actors(long, long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_formation_select_actors@@YAFJJPAVc_behavior_state@@@Z");
//};

//short guard_get_guard_state(long)
//{
//    mangled_ppc("?guard_get_guard_state@@YAFJ@Z");
//};

//void guard_setup(class c_behavior_state *, short, bool)
//{
//    mangled_ppc("?guard_setup@@YAXPAVc_behavior_state@@F_N@Z");
//};

//short behavior_guard_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_guard_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_guard_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_guard_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_guard_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_guard_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_guard_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_guard_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_guard_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_guard_control@@YAXJPAVc_behavior_state@@@Z");
//};

//void behavior_guard_flush_firing_position_indices(long, class c_behavior_state *, bool)
//{
//    mangled_ppc("?behavior_guard_flush_firing_position_indices@@YAXJPAVc_behavior_state@@_N@Z");
//};

//short behavior_idle_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_idle_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_idle_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_idle_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_idle_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_idle_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_investigate_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_investigate_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//void behavior_investigate_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_investigate_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_investigate_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_investigate_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_investigate_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_investigate_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_investigate_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_investigate_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool behavior_allowed_to_investigate(long, long)
//{
//    mangled_ppc("?behavior_allowed_to_investigate@@YA_NJJ@Z");
//};

//void behavior_investigate_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_investigate_control@@YAXJPAVc_behavior_state@@@Z");
//};

//void behavior_investigate_debug(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_investigate_debug@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_null_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_null_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_null_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_null_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short behavior_null_discrete_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_null_discrete_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short behavior_obey_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_obey_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_obey_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_obey_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_obey_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_obey_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_obey_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_obey_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short behavior_obey_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_obey_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//void patrol_choose_random_point(short, class c_patrol_state_data *, bool)
//{
//    mangled_ppc("?patrol_choose_random_point@@YAXFPAVc_patrol_state_data@@_N@Z");
//};

//short behavior_patrol_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_patrol_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_patrol_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_patrol_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_patrol_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_patrol_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//bool patrol_choose_next_point(long, class c_patrol_state_data *, class c_ai_point3d *, class c_sector_ref *)
//{
//    mangled_ppc("?patrol_choose_next_point@@YA_NJPAVc_patrol_state_data@@PAVc_ai_point3d@@PAVc_sector_ref@@@Z");
//};

//bool ready_to_move(long, class c_patrol_state_data const *)
//{
//    mangled_ppc("?ready_to_move@@YA_NJPBVc_patrol_state_data@@@Z");
//};

//void behavior_patrol_debug(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_patrol_debug@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_shoot_corpse_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_shoot_corpse_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_shoot_corpse_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_shoot_corpse_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_shoot_corpse_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_shoot_corpse_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short behavior_decide_shoot_corpse(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_decide_shoot_corpse@@YAFJFPAVc_behavior_state@@@Z");
//};

//short behavior_check_friend_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_check_friend_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_check_friend_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_check_friend_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_check_friend_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_check_friend_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_check_friend_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_check_friend_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_check_friend_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_check_friend_control@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_postcombat_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_postcombat_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_postcombat_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_postcombat_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short behavior_postcombat_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_postcombat_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_postcombat_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_postcombat_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//short postcombat_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?postcombat_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//void postcombat_flush_structure_indices(long, class c_behavior_state *)
//{
//    mangled_ppc("?postcombat_flush_structure_indices@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_postpostcombat_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_postpostcombat_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short impulse_grenade_uncover_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?impulse_grenade_uncover_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short behavior_presearch_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_presearch_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_presearch_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_presearch_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_presearch_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_presearch_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_presearch_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_presearch_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//void behavior_presearch_flush_prop(long, class c_behavior_state *, long)
//{
//    mangled_ppc("?behavior_presearch_flush_prop@@YAXJPAVc_behavior_state@@J@Z");
//};

//short overheated_weapon_retreat_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?overheated_weapon_retreat_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short surprise_retreat_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?surprise_retreat_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short impulse_scary_target_retreat_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?impulse_scary_target_retreat_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short impulse_danger_retreat_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?impulse_danger_retreat_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short impulse_low_shield_retreat_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?impulse_low_shield_retreat_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short impulse_proximity_retreat_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?impulse_proximity_retreat_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short leader_dead_retreat_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?leader_dead_retreat_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short peer_dead_retreat_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?peer_dead_retreat_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short impulse_nowhere_to_run_ambush_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?impulse_nowhere_to_run_ambush_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short retreat_grenade_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?retreat_grenade_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//void retreat_setup(class c_behavior_state *, long, short)
//{
//    mangled_ppc("?retreat_setup@@YAXPAVc_behavior_state@@JF@Z");
//};

//short behavior_retreat_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_retreat_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_retreat_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_retreat_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_retreat_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_retreat_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_retreat_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_retreat_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_retreat_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_retreat_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//void retreat_flush_prop(long, class c_behavior_state *, long)
//{
//    mangled_ppc("?retreat_flush_prop@@YAXJPAVc_behavior_state@@J@Z");
//};

//short behavior_root_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_root_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_root_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_root_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//float behavior_search_compute_vocalization_delay(long)
//{
//    mangled_ppc("?behavior_search_compute_vocalization_delay@@YAMJ@Z");
//};

//short behavior_search_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_search_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_search_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_search_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_search_initialize_search_pattern(struct s_prop_search_pattern *)
//{
//    mangled_ppc("?behavior_search_initialize_search_pattern@@YAXPAUs_prop_search_pattern@@@Z");
//};

//void behavior_search_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_search_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_search_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_search_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short behavior_search_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_search_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//bool self_preserve_behavior_available(long)
//{
//    mangled_ppc("?self_preserve_behavior_available@@YA_NJ@Z");
//};

//short behavior_self_preserve_time_left(long)
//{
//    mangled_ppc("?behavior_self_preserve_time_left@@YAFJ@Z");
//};

//short scary_target_self_preservation_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?scary_target_self_preservation_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short unreachable_enemy_self_preservation_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?unreachable_enemy_self_preservation_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short unassailable_enemy_self_preservation_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?unassailable_enemy_self_preservation_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short proximity_melee_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?proximity_melee_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short proximity_self_preserve_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?proximity_self_preserve_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short damage_vehicle_cover_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?damage_vehicle_cover_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short danger_cover_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?danger_cover_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short player_endangered_cover_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?player_endangered_cover_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short exposed_rear_cover_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?exposed_rear_cover_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short kungfu_cover_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?kungfu_cover_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short behavior_self_preservation_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_self_preservation_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_self_preservation_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_self_preservation_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_self_preservation_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_self_preservation_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_self_preservation_setup(short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_self_preservation_setup@@YAXFPAVc_behavior_state@@@Z");
//};

//short behavior_self_preservation_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_self_preservation_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//short suppressing_fire_vehicle_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?suppressing_fire_vehicle_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//void behavior_suppress_weapon_properties(long, bool *, bool *)
//{
//    mangled_ppc("?behavior_suppress_weapon_properties@@YAXJPA_N0@Z");
//};

//short behavior_suppress_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_suppress_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_suppress_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_suppress_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_suppress_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_suppress_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//void behavior_suppress_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_suppress_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_uncover_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_uncover_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_uncover_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_uncover_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_uncover_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_uncover_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_uncover_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_uncover_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_uncover_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_uncover_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_uncover_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_uncover_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short vehicle_engage_patrol_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?vehicle_engage_patrol_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//bool vehicle_wants_to_move_at_all_costs(long)
//{
//    mangled_ppc("?vehicle_wants_to_move_at_all_costs@@YA_NJ@Z");
//};

//short vehicle_engage_wander_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?vehicle_engage_wander_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short vehicle_turtle_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?vehicle_turtle_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short vehicle_enter_friendly_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?vehicle_enter_friendly_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//long find_nearby_friendly_player_vehicle(long)
//{
//    mangled_ppc("?find_nearby_friendly_player_vehicle@@YAJJ@Z");
//};

//short vehicle_switch_friendly_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?vehicle_switch_friendly_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short vehicle_enter_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?vehicle_enter_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short vehicle_entry_engage_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?vehicle_entry_engage_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short behavior_enter_vehicle_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_enter_vehicle_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_enter_vehicle_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_enter_vehicle_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool behavior_enter_vehicle_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_enter_vehicle_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_enter_vehicle_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_enter_vehicle_control@@YAXJPAVc_behavior_state@@@Z");
//};

//bool vehicle_find_destination(long, long, union real_point3d *, class c_ai_point3d *, class c_sector_ref *, bool *, bool)
//{
//    mangled_ppc("?vehicle_find_destination@@YA_NJJPATreal_point3d@@PAVc_ai_point3d@@PAVc_sector_ref@@PA_N_N@Z");
//};

//short vehicle_exit_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?vehicle_exit_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short danger_vehicle_exit_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?danger_vehicle_exit_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//long pickup_find_passenger(long)
//{
//    mangled_ppc("?pickup_find_passenger@@YAJJ@Z");
//};

//short behavior_vehicle_pickup_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_vehicle_pickup_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_vehicle_pickup_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_pickup_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_vehicle_pickup_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_pickup_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_vehicle_pickup_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_pickup_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_vehicle_pickup_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_pickup_control@@YAXJPAVc_behavior_state@@@Z");
//};

//void vehicle_pickup_flush_object(long, class c_behavior_state *, long)
//{
//    mangled_ppc("?vehicle_pickup_flush_object@@YAXJPAVc_behavior_state@@J@Z");
//};

//short behavior_vehicle_fight_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_vehicle_fight_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_vehicle_fight_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_fight_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_vehicle_fight_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_fight_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool behavior_vehicle_fight_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_fight_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool target_on_board(long)
//{
//    mangled_ppc("?target_on_board@@YA_NJ@Z");
//};

//void behavior_vehicle_fight_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_fight_control@@YAXJPAVc_behavior_state@@@Z");
//};

//bool global_style_vector_valid(long)
//{
//    mangled_ppc("?global_style_vector_valid@@YA_NJ@Z");
//};

//short behavior_wander_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_wander_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_ready_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_ready_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_ready_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_ready_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_ready_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_ready_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_ready_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_ready_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short behavior_ready_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_ready_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//short vehicle_flip_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?vehicle_flip_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//bool behavior_vehicle_flip_perform(long, class c_behavior_state *, struct joint_state_datum *)
//{
//    mangled_ppc("?behavior_vehicle_flip_perform@@YA_NJPAVc_behavior_state@@PAUjoint_state_datum@@@Z");
//};

//bool flipped_vehicle_accessible(long)
//{
//    mangled_ppc("?flipped_vehicle_accessible@@YA_NJ@Z");
//};

//void actor_ready_to_flip(long, bool, class c_vehicle_flip_data *, struct joint_vehicle_flip_data *)
//{
//    mangled_ppc("?actor_ready_to_flip@@YAXJ_NPAVc_vehicle_flip_data@@PAUjoint_vehicle_flip_data@@@Z");
//};

//bool vehicle_flip_find_target(long, class c_vehicle_flip_data *, struct joint_vehicle_flip_data *)
//{
//    mangled_ppc("?vehicle_flip_find_target@@YA_NJPAVc_vehicle_flip_data@@PAUjoint_vehicle_flip_data@@@Z");
//};

//bool flip_try_direction(long, long, class c_ai_point3d const *, class c_sector_ref, union vector3d const *, short, bool, class c_ai_point3d *, class c_sector_ref *)
//{
//    mangled_ppc("?flip_try_direction@@YA_NJJPBVc_ai_point3d@@Vc_sector_ref@@PBTvector3d@@F_NPAV1@PAV2@@Z");
//};

//void behavior_vehicle_flip_control(long, class c_behavior_state *, struct joint_state_datum *)
//{
//    mangled_ppc("?behavior_vehicle_flip_control@@YAXJPAVc_behavior_state@@PAUjoint_state_datum@@@Z");
//};

//void behavior_vehicle_flip_deactivate(long, class c_behavior_state *, struct joint_state_datum *)
//{
//    mangled_ppc("?behavior_vehicle_flip_deactivate@@YAXJPAVc_behavior_state@@PAUjoint_state_datum@@@Z");
//};

//void behavior_vehicle_flip_flush_object(long, class c_behavior_state *, long)
//{
//    mangled_ppc("?behavior_vehicle_flip_flush_object@@YAXJPAVc_behavior_state@@J@Z");
//};

//void behavior_vehicle_flip_flush_structure_indices(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_flip_flush_structure_indices@@YAXJPAVc_behavior_state@@@Z");
//};

//void behavior_vehicle_flip_debug(long, class c_behavior_state *, struct joint_state_datum *)
//{
//    mangled_ppc("?behavior_vehicle_flip_debug@@YAXJPAVc_behavior_state@@PAUjoint_state_datum@@@Z");
//};

//short behavior_destroy_obstacle_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_destroy_obstacle_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_destroy_obstacle_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_destroy_obstacle_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_destroy_obstacle_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_destroy_obstacle_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_destroy_obstacle_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_destroy_obstacle_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_destroy_obstacle_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_destroy_obstacle_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_destroy_cover_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_destroy_cover_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_destroy_cover_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_destroy_cover_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_destroy_cover_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_destroy_cover_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_destroy_cover_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_destroy_cover_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_destroy_cover_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_destroy_cover_control@@YAXJPAVc_behavior_state@@@Z");
//};

//bool leap_on_cover_object_get_target_point(long, long, union real_point3d *)
//{
//    mangled_ppc("?leap_on_cover_object_get_target_point@@YA_NJJPATreal_point3d@@@Z");
//};

//short behavior_leap_on_cover_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_leap_on_cover_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_leap_on_cover_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_leap_on_cover_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_leap_on_cover_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_leap_on_cover_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_leap_on_cover_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_leap_on_cover_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_leap_on_cover_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_leap_on_cover_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_leap_on_cover_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_leap_on_cover_control@@YAXJPAVc_behavior_state@@@Z");
//};

//void leap_on_cover_flush_object(long, class c_behavior_state *, long)
//{
//    mangled_ppc("?leap_on_cover_flush_object@@YAXJPAVc_behavior_state@@J@Z");
//};

//void behavior_leap_on_cover_flush_structure_indices(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_leap_on_cover_flush_structure_indices@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_emerge_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_emerge_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//long behavior_emerge_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_emerge_activate@@YAJJPAVc_behavior_state@@@Z");
//};

//short behavior_emerge_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_emerge_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool emerge_wait_for_actor(long, long, float *, short *)
//{
//    mangled_ppc("?emerge_wait_for_actor@@YA_NJJPAMPAF@Z");
//};

//bool behavior_emerge_perform(long, class c_behavior_state *, struct joint_state_datum *)
//{
//    mangled_ppc("?behavior_emerge_perform@@YA_NJPAVc_behavior_state@@PAUjoint_state_datum@@@Z");
//};

//void behavior_emerge_control(long, class c_behavior_state *, struct joint_state_datum *)
//{
//    mangled_ppc("?behavior_emerge_control@@YAXJPAVc_behavior_state@@PAUjoint_state_datum@@@Z");
//};

//short behavior_emerge_select_actors(long, long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_emerge_select_actors@@YAFJJPAVc_behavior_state@@@Z");
//};

//short behavior_perch_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_perch_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_perch_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_perch_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_perch_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_perch_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_perch_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_perch_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_perch_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_perch_control@@YAXJPAVc_behavior_state@@@Z");
//};

//void behavior_perch_flush_firing_position_indices(long, class c_behavior_state *, bool)
//{
//    mangled_ppc("?behavior_perch_flush_firing_position_indices@@YAXJPAVc_behavior_state@@_N@Z");
//};

//bool board_activate_helper(long, class c_vehicle_board_data *)
//{
//    mangled_ppc("?board_activate_helper@@YA_NJPAVc_vehicle_board_data@@@Z");
//};

//bool boarding_find_seat(long, long, long *, short *, short *, bool *)
//{
//    mangled_ppc("?boarding_find_seat@@YA_NJJPAJPAF1PA_N@Z");
//};

//void behavior_board_flush_prop(long, class c_behavior_state *, long)
//{
//    mangled_ppc("?behavior_board_flush_prop@@YAXJPAVc_behavior_state@@J@Z");
//};

//void behavior_board_flush_object(long, class c_behavior_state *, long)
//{
//    mangled_ppc("?behavior_board_flush_object@@YAXJPAVc_behavior_state@@J@Z");
//};

//void behavior_deploy_turret_setup(class c_behavior_state *, long)
//{
//    mangled_ppc("?behavior_deploy_turret_setup@@YAXPAVc_behavior_state@@J@Z");
//};

//short behavior_deploy_turret_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_deploy_turret_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_deploy_turret_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_deploy_turret_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_deploy_turret_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_deploy_turret_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_deploy_turret_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_deploy_turret_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_deploy_turret_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_deploy_turret_control@@YAXJPAVc_behavior_state@@@Z");
//};

//void behavior_deploy_turret_flush_object(long, class c_behavior_state *, long)
//{
//    mangled_ppc("?behavior_deploy_turret_flush_object@@YAXJPAVc_behavior_state@@J@Z");
//};

//void ai_handle_deployed_turret(long, long)
//{
//    mangled_ppc("?ai_handle_deployed_turret@@YAXJJ@Z");
//};

//short behavior_stalk_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_stalk_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_stalk_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_stalk_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_stalk_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_stalk_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_stalk_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_stalk_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_stalk_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_stalk_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_stalk_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_stalk_control@@YAXJPAVc_behavior_state@@@Z");
//};

//void behavior_stalk_flush_prop(long, class c_behavior_state *, long)
//{
//    mangled_ppc("?behavior_stalk_flush_prop@@YAXJPAVc_behavior_state@@J@Z");
//};

//void cure_isolation_debug_store_vector(long, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?cure_isolation_debug_store_vector@@YAXJPBTreal_point3d@@PBTvector3d@@@Z");
//};

//void cure_isolation_debug_reset(long)
//{
//    mangled_ppc("?cure_isolation_debug_reset@@YAXJ@Z");
//};

//void behavior_cure_isolation_debug(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cure_isolation_debug@@YAXJPAVc_behavior_state@@@Z");
//};

//bool cure_isolation_visible_enemy(long, struct path_state *, float, float)
//{
//    mangled_ppc("?cure_isolation_visible_enemy@@YA_NJPAUpath_state@@MM@Z");
//};

//short cure_isolation_test_vector(long, union vector3d const *, union vector3d const *, struct path_state const *, float, float, float *)
//{
//    mangled_ppc("?cure_isolation_test_vector@@YAFJPBTvector3d@@0PBUpath_state@@MMPAM@Z");
//};

//bool cure_isolation_attached_vehicle(long, struct seat_entry_info const *, class c_cure_isolation_data *, struct path_state *)
//{
//    mangled_ppc("?cure_isolation_attached_vehicle@@YA_NJPBUseat_entry_info@@PAVc_cure_isolation_data@@PAUpath_state@@@Z");
//};

//bool cure_isolation_undirected(long, struct path_state *, float, float, short)
//{
//    mangled_ppc("?cure_isolation_undirected@@YA_NJPAUpath_state@@MMF@Z");
//};

//bool cure_isolation_jump(long, struct path_state *, float, float, short)
//{
//    mangled_ppc("?cure_isolation_jump@@YA_NJPAUpath_state@@MMF@Z");
//};

//short behavior_posture_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_posture_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_posture_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_posture_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_posture_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_posture_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_posture_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_posture_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_posture_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_posture_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_posture_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_posture_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_sleep_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_sleep_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_sleep_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_sleep_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_sleep_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_sleep_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_sleep_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_sleep_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_sleep_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_sleep_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_sleep_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_sleep_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_activity_default_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_activity_default_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_activity_default_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_activity_default_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//public: void c_motor_request_force_heavy::setup(enum e_action, bool)
//{
//    mangled_ppc("?setup@c_motor_request_force_heavy@@QAAXW4e_action@@_N@Z");
//};

//public: c_motor_request_force_heavy::c_motor_request_force_heavy(void)
//{
//    mangled_ppc("??0c_motor_request_force_heavy@@QAA@XZ");
//};

//public: virtual void const * c_motor_request_force_heavy::cast_to(enum e_motor_task) const
//{
//    mangled_ppc("?cast_to@c_motor_request_force_heavy@@UBAPBXW4e_motor_task@@@Z");
//};

//void behavior_activity_default_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_activity_default_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//void behavior_activity_default_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_activity_default_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_activity_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_activity_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_activity_command_script_allows_activity(long)
//{
//    mangled_ppc("?behavior_activity_command_script_allows_activity@@YA_NJ@Z");
//};

//bool behavior_activity_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_activity_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_activity_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_activity_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool command_script_allows_activity_termination(long)
//{
//    mangled_ppc("?command_script_allows_activity_termination@@YA_NJ@Z");
//};

//short behavior_activity_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_activity_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//short equipment_get_impulse(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?equipment_get_impulse@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//void actor_attach_equipment(long)
//{
//    mangled_ppc("?actor_attach_equipment@@YAXJ@Z");
//};

//void actor_throw_equipment(long, short)
//{
//    mangled_ppc("?actor_throw_equipment@@YAXJF@Z");
//};

//short equipment_active_camo_control_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?equipment_active_camo_control_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//public: struct s_ai_equipement_traits const * s_equipment_type_ai_trait_field::get_active_ai_traits(void) const
//{
//    mangled_ppc("?get_active_ai_traits@s_equipment_type_ai_trait_field@@QBAPBUs_ai_equipement_traits@@XZ");
//};

//public: struct s_ai_equipement_traits const * s_equipment_type_ai_trait_field::get_inactive_ai_traits(void) const
//{
//    mangled_ppc("?get_inactive_ai_traits@s_equipment_type_ai_trait_field@@QBAPBUs_ai_equipement_traits@@XZ");
//};

//short behavior_squad_patrol_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_squad_patrol_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_squad_patrol_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_squad_patrol_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_squad_patrol_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_squad_patrol_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_squad_patrol_set_casual(long)
//{
//    mangled_ppc("?behavior_squad_patrol_set_casual@@YAXJ@Z");
//};

//void behavior_squad_patrol_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_squad_patrol_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_squad_patrol_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_squad_patrol_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_squad_patrol_set_active(long)
//{
//    mangled_ppc("?behavior_squad_patrol_set_active@@YAXJ@Z");
//};

//bool actor_should_search(long)
//{
//    mangled_ppc("?actor_should_search@@YA_NJ@Z");
//};

//void behavior_squad_patrol_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_squad_patrol_control@@YAXJPAVc_behavior_state@@@Z");
//};

//bool actor_should_run(long)
//{
//    mangled_ppc("?actor_should_run@@YA_NJ@Z");
//};

//bool behavior_interact_object_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_interact_object_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_interact_object_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_interact_object_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//bool object_find_interaction_location(long, long, class c_object_interaction_data *)
//{
//    mangled_ppc("?object_find_interaction_location@@YA_NJJPAVc_object_interaction_data@@@Z");
//};

//bool object_interact(long, class c_object_interaction_data *)
//{
//    mangled_ppc("?object_interact@@YA_NJPAVc_object_interaction_data@@@Z");
//};

//bool submit_sync_action(long, long, struct s_animation_sync_action const *, struct s_animation_sync_action_same_type_participant const *, union vector3d *)
//{
//    mangled_ppc("?submit_sync_action@@YA_NJJPBUs_animation_sync_action@@PBUs_animation_sync_action_same_type_participant@@PATvector3d@@@Z");
//};

//bool can_interact_with_object(long, union real_point3d const *, union vector3d const *)
//{
//    mangled_ppc("?can_interact_with_object@@YA_NJPBTreal_point3d@@PBTvector3d@@@Z");
//};

//bool actor_object_interaction_valid(long)
//{
//    mangled_ppc("?actor_object_interaction_valid@@YA_NJ@Z");
//};

//bool behavior_interact_object_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_interact_object_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//float score_object_interaction(long, long)
//{
//    mangled_ppc("?score_object_interaction@@YAMJJ@Z");
//};

//bool behavior_interact_object_should_check_score(class c_object_interaction_data const *)
//{
//    mangled_ppc("?behavior_interact_object_should_check_score@@YA_NPBVc_object_interaction_data@@@Z");
//};

//void behavior_interact_object_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_interact_object_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short interact_object_impulse_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?interact_object_impulse_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//void behavior_object_interaction_setup(short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_object_interaction_setup@@YAXFPAVc_behavior_state@@@Z");
//};

//short impulse_find_throw_interaction_object_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?impulse_find_throw_interaction_object_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short movement_plan_cover_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?movement_plan_cover_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//struct s_firing_position_ref actor_find_intermediate_cover_point(long)
//{
//    mangled_ppc("?actor_find_intermediate_cover_point@@YA?AUs_firing_position_ref@@J@Z");
//};

//bool behavior_allow_movement_planning(long)
//{
//    mangled_ppc("?behavior_allow_movement_planning@@YA_NJ@Z");
//};

//short behavior_sync_attack_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_sync_attack_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_find_compatible_sync_action_to_run(long, struct prop_ref_datum const *, long *, struct s_animation_sync_action const **, struct s_animation_sync_action_same_type_participant const **)
//{
//    mangled_ppc("?behavior_find_compatible_sync_action_to_run@@YA_NJPBUprop_ref_datum@@PAJPAPBUs_animation_sync_action@@PAPBUs_animation_sync_action_same_type_participant@@@Z");
//};

//bool behavior_sync_attack_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_sync_attack_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool behavior_sync_attack_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_sync_attack_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool submit_sync_action(long, struct s_animation_sync_action const *, struct s_animation_sync_action_same_type_participant const *)
//{
//    mangled_ppc("?submit_sync_action@@YA_NJPBUs_animation_sync_action@@PBUs_animation_sync_action_same_type_participant@@@Z");
//};

//void behavior_sync_attack_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_sync_attack_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_control_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_control_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_control_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_control_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool behavior_control_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_control_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_control_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_control_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short interruptible_control_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?interruptible_control_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//public: bool c_static_stack<struct s_firing_position_influence_point, 48>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_firing_position_influence_point@@$0DA@@@QBA_NXZ");
//};

//public: enum e_prop_stimulus c_enum_no_init<enum e_prop_stimulus, char, -1, 4, struct s_default_enum_string_resolver>::operator enum e_prop_stimulus(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_prop_stimulus@@D$0?0$03Us_default_enum_string_resolver@@@@QBA?AW4e_prop_stimulus@@XZ");
//};

//public: c_character_runtime_properties<class c_character_evasion_properties_internal>::c_character_runtime_properties<class c_character_evasion_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_evasion_properties_internal@@@@QAA@XZ");
//};

//public: c_character_runtime_properties<class c_character_retreat_properties_internal>::c_character_runtime_properties<class c_character_retreat_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_retreat_properties_internal@@@@QAA@XZ");
//};

//public: enum e_actor_object_interaction_state c_enum_no_init<enum e_actor_object_interaction_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_actor_object_interaction_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_actor_object_interaction_state@@E$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_actor_object_interaction_state@@XZ");
//};

//public: bool c_enum_no_init<enum e_actor_object_interaction_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_actor_object_interaction_state) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_actor_object_interaction_state@@E$0A@$03Us_default_enum_string_resolver@@@@QBA_NW4e_actor_object_interaction_state@@@Z");
//};

//public: bool c_static_stack<struct s_behavior_choice, 64>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_behavior_choice@@$0EA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_behavior_choice, 64>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_behavior_choice@@$0EA@@@QBA_NXZ");
//};

//public: void c_static_stack<struct s_behavior_choice, 64>::push_back(struct s_behavior_choice const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_behavior_choice@@$0EA@@@QAAXABUs_behavior_choice@@@Z");
//};

//public: struct s_behavior_choice * c_static_stack<struct s_behavior_choice, 64>::begin(void)
//{
//    mangled_ppc("?begin@?$c_static_stack@Us_behavior_choice@@$0EA@@@QAAPAUs_behavior_choice@@XZ");
//};

//public: struct s_behavior_choice * c_static_stack<struct s_behavior_choice, 64>::end(void)
//{
//    mangled_ppc("?end@?$c_static_stack@Us_behavior_choice@@$0EA@@@QAAPAUs_behavior_choice@@XZ");
//};

//public: c_static_stack<struct s_behavior_choice, 64>::c_static_stack<struct s_behavior_choice, 64>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_behavior_choice@@$0EA@@@QAA@XZ");
//};

//public: c_character_runtime_properties<class c_character_search_properties_internal>::c_character_runtime_properties<class c_character_search_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_search_properties_internal@@@@QAA@XZ");
//};

//public: bool c_character_runtime_properties<class c_character_search_properties_internal>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_character_runtime_properties@Vc_character_search_properties_internal@@@@QBA_NXZ");
//};

//public: c_character_runtime_properties<class c_character_presearch_properties_internal>::c_character_runtime_properties<class c_character_presearch_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_presearch_properties_internal@@@@QAA@XZ");
//};

//public: bool c_character_runtime_properties<class c_character_presearch_properties_internal>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_character_runtime_properties@Vc_character_presearch_properties_internal@@@@QBA_NXZ");
//};

//public: c_character_runtime_properties<class c_character_kungfu_properties_internal>::c_character_runtime_properties<class c_character_kungfu_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_kungfu_properties_internal@@@@QAA@XZ");
//};

//public: bool c_character_runtime_properties<class c_character_kungfu_properties_internal>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_character_runtime_properties@Vc_character_kungfu_properties_internal@@@@QBA_NXZ");
//};

//public: c_character_runtime_properties<class c_character_ready_properties_internal>::c_character_runtime_properties<class c_character_ready_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_ready_properties_internal@@@@QAA@XZ");
//};

//public: bool c_character_runtime_properties<class c_character_ready_properties_internal>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_character_runtime_properties@Vc_character_ready_properties_internal@@@@QBA_NXZ");
//};

//public: c_character_runtime_properties<class c_character_interact_properties_internal>::c_character_runtime_properties<class c_character_interact_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_interact_properties_internal@@@@QAA@XZ");
//};

//public: bool c_character_runtime_properties<class c_character_interact_properties_internal>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_character_runtime_properties@Vc_character_interact_properties_internal@@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_firing_position_influence_point, 48>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_firing_position_influence_point@@$0DA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_behavior_choice, 64>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_behavior_choice@@$0EA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_behavior_choice, 64>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_behavior_choice@@$0EA@@@QAAJXZ");
//};

//public: struct s_behavior_choice * c_static_stack<struct s_behavior_choice, 64>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_behavior_choice@@$0EA@@@QAAPAUs_behavior_choice@@J@Z");
//};

//public: bool c_static_stack<struct s_behavior_choice, 64>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_behavior_choice@@$0EA@@@QBA_NJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 256>::and_range(class c_big_flags_typed_no_init<long, 256> const *, long, long)
//{
//    mangled_ppc("?and_range@?$c_big_flags_typed_no_init@J$0BAA@@@QAAXPBV1@JJ@Z");
//};

//public: void c_flags_no_init<enum e_debug_behavior_failure_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_debug_behavior_failure_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_debug_behavior_failure_flags@@G$08Us_default_enum_string_resolver@@@@QAAXW4e_debug_behavior_failure_flags@@_N@Z");
//};

//public: c_flags<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_ai_sync_action_participant_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//void actor_get_character_definition_properties<class c_character_evasion_properties_internal, 312>(long, class c_character_runtime_properties<class c_character_evasion_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_evasion_properties_internal@@$0BDI@@@YAXJAAV?$c_character_runtime_properties@Vc_character_evasion_properties_internal@@@@@Z");
//};

//void actor_get_character_definition_properties<class c_character_weapon_properties_internal, 492>(long, class c_character_runtime_properties<class c_character_weapon_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_weapon_properties_internal@@$0BOM@@@YAXJAAV?$c_character_runtime_properties@Vc_character_weapon_properties_internal@@@@@Z");
//};

//void actor_get_character_definition_properties<class c_character_retreat_properties_internal, 336>(long, class c_character_runtime_properties<class c_character_retreat_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_retreat_properties_internal@@$0BFA@@@YAXJAAV?$c_character_runtime_properties@Vc_character_retreat_properties_internal@@@@@Z");
//};

//void actor_get_character_definition_properties<class c_character_search_properties_internal, 348>(long, class c_character_runtime_properties<class c_character_search_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_search_properties_internal@@$0BFM@@@YAXJAAV?$c_character_runtime_properties@Vc_character_search_properties_internal@@@@@Z");
//};

//public: bool c_flags_no_init<enum e_patrol_point_flags, short, 1, struct s_default_enum_string_resolver>::test(enum e_patrol_point_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_patrol_point_flags@@F$00Us_default_enum_string_resolver@@@@QBA_NW4e_patrol_point_flags@@@Z");
//};

//void actor_get_character_definition_properties<class c_character_presearch_properties_internal, 360>(long, class c_character_runtime_properties<class c_character_presearch_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_presearch_properties_internal@@$0BGI@@@YAXJAAV?$c_character_runtime_properties@Vc_character_presearch_properties_internal@@@@@Z");
//};

//void actor_get_character_definition_properties<class c_character_kungfu_properties_internal, 408>(long, class c_character_runtime_properties<class c_character_kungfu_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_kungfu_properties_internal@@$0BJI@@@YAXJAAV?$c_character_runtime_properties@Vc_character_kungfu_properties_internal@@@@@Z");
//};

//void actor_get_character_definition_properties<class c_character_ready_properties_internal, 276>(long, class c_character_runtime_properties<class c_character_ready_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_ready_properties_internal@@$0BBE@@@YAXJAAV?$c_character_runtime_properties@Vc_character_ready_properties_internal@@@@@Z");
//};

//public: bool c_flags_no_init<enum e_obstacle_flags, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_obstacle_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_obstacle_flags@@G$08Us_default_enum_string_resolver@@@@QBA_NW4e_obstacle_flags@@@Z");
//};

//void actor_get_character_definition_properties<class c_character_interact_properties_internal, 120>(long, class c_character_runtime_properties<class c_character_interact_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_interact_properties_internal@@$0HI@@@YAXJAAV?$c_character_runtime_properties@Vc_character_interact_properties_internal@@@@@Z");
//};

//public: void c_character_runtime_properties<class c_character_search_properties_internal>::set(class c_character_search_properties_internal const *)
//{
//    mangled_ppc("?set@?$c_character_runtime_properties@Vc_character_search_properties_internal@@@@QAAXPBVc_character_search_properties_internal@@@Z");
//};

//public: void c_character_runtime_properties<class c_character_search_properties_internal>::invalidate(void)
//{
//    mangled_ppc("?invalidate@?$c_character_runtime_properties@Vc_character_search_properties_internal@@@@QAAXXZ");
//};

//public: void c_character_runtime_properties<class c_character_presearch_properties_internal>::set(class c_character_presearch_properties_internal const *)
//{
//    mangled_ppc("?set@?$c_character_runtime_properties@Vc_character_presearch_properties_internal@@@@QAAXPBVc_character_presearch_properties_internal@@@Z");
//};

//public: void c_character_runtime_properties<class c_character_presearch_properties_internal>::invalidate(void)
//{
//    mangled_ppc("?invalidate@?$c_character_runtime_properties@Vc_character_presearch_properties_internal@@@@QAAXXZ");
//};

//public: void c_character_runtime_properties<class c_character_kungfu_properties_internal>::set(class c_character_kungfu_properties_internal const *)
//{
//    mangled_ppc("?set@?$c_character_runtime_properties@Vc_character_kungfu_properties_internal@@@@QAAXPBVc_character_kungfu_properties_internal@@@Z");
//};

//public: void c_character_runtime_properties<class c_character_kungfu_properties_internal>::invalidate(void)
//{
//    mangled_ppc("?invalidate@?$c_character_runtime_properties@Vc_character_kungfu_properties_internal@@@@QAAXXZ");
//};

//public: void c_character_runtime_properties<class c_character_ready_properties_internal>::set(class c_character_ready_properties_internal const *)
//{
//    mangled_ppc("?set@?$c_character_runtime_properties@Vc_character_ready_properties_internal@@@@QAAXPBVc_character_ready_properties_internal@@@Z");
//};

//public: void c_character_runtime_properties<class c_character_ready_properties_internal>::invalidate(void)
//{
//    mangled_ppc("?invalidate@?$c_character_runtime_properties@Vc_character_ready_properties_internal@@@@QAAXXZ");
//};

//public: void c_character_runtime_properties<class c_character_interact_properties_internal>::set(class c_character_interact_properties_internal const *)
//{
//    mangled_ppc("?set@?$c_character_runtime_properties@Vc_character_interact_properties_internal@@@@QAAXPBVc_character_interact_properties_internal@@@Z");
//};

//public: void c_character_runtime_properties<class c_character_interact_properties_internal>::invalidate(void)
//{
//    mangled_ppc("?invalidate@?$c_character_runtime_properties@Vc_character_interact_properties_internal@@@@QAAXXZ");
//};

//public: static void c_character_properties_base<class c_character_interact_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_interact_properties_internal> *)
//{
//    mangled_ppc("?apply_modifiers@?$c_character_properties_base@Vc_character_interact_properties_internal@@@@SAXPAV1@@Z");
//};

//public: static void c_character_properties_base<class c_character_search_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_search_properties_internal> *)
//{
//    mangled_ppc("?apply_modifiers@?$c_character_properties_base@Vc_character_search_properties_internal@@@@SAXPAV1@@Z");
//};

//public: static void c_character_properties_base<class c_character_presearch_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_presearch_properties_internal> *)
//{
//    mangled_ppc("?apply_modifiers@?$c_character_properties_base@Vc_character_presearch_properties_internal@@@@SAXPAV1@@Z");
//};

//public: static void c_character_properties_base<class c_character_ready_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_ready_properties_internal> *)
//{
//    mangled_ppc("?apply_modifiers@?$c_character_properties_base@Vc_character_ready_properties_internal@@@@SAXPAV1@@Z");
//};

//public: static void c_character_properties_base<class c_character_kungfu_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_kungfu_properties_internal> *)
//{
//    mangled_ppc("?apply_modifiers@?$c_character_properties_base@Vc_character_kungfu_properties_internal@@@@SAXPAV1@@Z");
//};

//public: void c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_ai_sync_action_participant_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_ai_sync_action_participant_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_evasion_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_evasion_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_evasion_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_evasion_properties_internal@@@@@Z");
//};

//class c_character_evasion_properties_internal * character_definition_properties_get_direct<class c_character_evasion_properties_internal, 312>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_evasion_properties_internal@@$0BDI@@@YAPAVc_character_evasion_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_weapon_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_weapon_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_weapon_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_weapon_properties_internal@@@@@Z");
//};

//class c_character_weapon_properties_internal * character_definition_properties_get_direct<class c_character_weapon_properties_internal, 492>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_weapon_properties_internal@@$0BOM@@@YAPAVc_character_weapon_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_retreat_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_retreat_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_retreat_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_retreat_properties_internal@@@@@Z");
//};

//class c_character_retreat_properties_internal * character_definition_properties_get_direct<class c_character_retreat_properties_internal, 336>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_retreat_properties_internal@@$0BFA@@@YAPAVc_character_retreat_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_search_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_search_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_search_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_search_properties_internal@@@@@Z");
//};

//class c_character_search_properties_internal * character_definition_properties_get_direct<class c_character_search_properties_internal, 348>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_search_properties_internal@@$0BFM@@@YAPAVc_character_search_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_patrol_point_flags, short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_patrol_point_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_patrol_point_flags@@F$00Us_default_enum_string_resolver@@@@SA_NW4e_patrol_point_flags@@@Z");
//};

//private: static short c_flags_no_init<enum e_patrol_point_flags, short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_patrol_point_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_patrol_point_flags@@F$00Us_default_enum_string_resolver@@@@CAFW4e_patrol_point_flags@@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_presearch_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_presearch_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_presearch_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_presearch_properties_internal@@@@@Z");
//};

//class c_character_presearch_properties_internal * character_definition_properties_get_direct<class c_character_presearch_properties_internal, 360>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_presearch_properties_internal@@$0BGI@@@YAPAVc_character_presearch_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_kungfu_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_kungfu_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_kungfu_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_kungfu_properties_internal@@@@@Z");
//};

//class c_character_kungfu_properties_internal * character_definition_properties_get_direct<class c_character_kungfu_properties_internal, 408>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_kungfu_properties_internal@@$0BJI@@@YAPAVc_character_kungfu_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_ready_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_ready_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_ready_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_ready_properties_internal@@@@@Z");
//};

//class c_character_ready_properties_internal * character_definition_properties_get_direct<class c_character_ready_properties_internal, 276>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_ready_properties_internal@@$0BBE@@@YAPAVc_character_ready_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_interact_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_interact_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_interact_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_interact_properties_internal@@@@@Z");
//};

//class c_character_interact_properties_internal * character_definition_properties_get_direct<class c_character_interact_properties_internal, 120>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_interact_properties_internal@@$0HI@@@YAPAVc_character_interact_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_search_properties_internal>, class c_character_search_properties_internal>(class c_character_runtime_properties<class c_character_search_properties_internal> *, class c_character_search_properties_internal const *)
//{
//    mangled_ppc("??$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_search_properties_internal@@@@Vc_character_search_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_search_properties_internal@@@@PBVc_character_search_properties_internal@@@Z");
//};

//void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_presearch_properties_internal>, class c_character_presearch_properties_internal>(class c_character_runtime_properties<class c_character_presearch_properties_internal> *, class c_character_presearch_properties_internal const *)
//{
//    mangled_ppc("??$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_presearch_properties_internal@@@@Vc_character_presearch_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_presearch_properties_internal@@@@PBVc_character_presearch_properties_internal@@@Z");
//};

//void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_kungfu_properties_internal>, class c_character_kungfu_properties_internal>(class c_character_runtime_properties<class c_character_kungfu_properties_internal> *, class c_character_kungfu_properties_internal const *)
//{
//    mangled_ppc("??$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_kungfu_properties_internal@@@@Vc_character_kungfu_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_kungfu_properties_internal@@@@PBVc_character_kungfu_properties_internal@@@Z");
//};

//void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_ready_properties_internal>, class c_character_ready_properties_internal>(class c_character_runtime_properties<class c_character_ready_properties_internal> *, class c_character_ready_properties_internal const *)
//{
//    mangled_ppc("??$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_ready_properties_internal@@@@Vc_character_ready_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_ready_properties_internal@@@@PBVc_character_ready_properties_internal@@@Z");
//};

//void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_interact_properties_internal>, class c_character_interact_properties_internal>(class c_character_runtime_properties<class c_character_interact_properties_internal> *, class c_character_interact_properties_internal const *)
//{
//    mangled_ppc("??$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_interact_properties_internal@@@@Vc_character_interact_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_interact_properties_internal@@@@PBVc_character_interact_properties_internal@@@Z");
//};

//public: static bool c_character_runtime_properties<class c_character_search_properties_internal>::static_valid(void *)
//{
//    mangled_ppc("?static_valid@?$c_character_runtime_properties@Vc_character_search_properties_internal@@@@SA_NPAX@Z");
//};

//public: static bool c_character_runtime_properties<class c_character_presearch_properties_internal>::static_valid(void *)
//{
//    mangled_ppc("?static_valid@?$c_character_runtime_properties@Vc_character_presearch_properties_internal@@@@SA_NPAX@Z");
//};

//public: static bool c_character_runtime_properties<class c_character_kungfu_properties_internal>::static_valid(void *)
//{
//    mangled_ppc("?static_valid@?$c_character_runtime_properties@Vc_character_kungfu_properties_internal@@@@SA_NPAX@Z");
//};

//public: static bool c_character_runtime_properties<class c_character_ready_properties_internal>::static_valid(void *)
//{
//    mangled_ppc("?static_valid@?$c_character_runtime_properties@Vc_character_ready_properties_internal@@@@SA_NPAX@Z");
//};

//public: static bool c_character_runtime_properties<class c_character_interact_properties_internal>::static_valid(void *)
//{
//    mangled_ppc("?static_valid@?$c_character_runtime_properties@Vc_character_interact_properties_internal@@@@SA_NPAX@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_ai_sync_action_participant_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//struct s_tag_block * character_definition_property_block_get<312>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0BDI@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//struct s_tag_block * character_definition_property_block_get<492>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0BOM@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//struct s_tag_block * character_definition_property_block_get<336>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0BFA@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//struct s_tag_block * character_definition_property_block_get<348>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0BFM@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//struct s_tag_block * character_definition_property_block_get<360>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0BGI@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//struct s_tag_block * character_definition_property_block_get<408>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0BJI@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//struct s_tag_block * character_definition_property_block_get<276>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0BBE@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//struct s_tag_block * character_definition_property_block_get<120>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0HI@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_ai_sync_action_participant_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_ai_sync_action_participant_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_ai_sync_action_participant_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_ai_sync_action_participant_flags@@@Z");
//};

//bool behavior_is_allowed(long, class Behavior_header const *)
//{
//    mangled_ppc("?behavior_is_allowed@@YA_NJPBVBehavior_header@@@Z");
//};

//public: struct s_stimulus_payload_combat_sync_action const * c_stimulus_payload::get_combat_sync_action_data_const(void) const
//{
//    mangled_ppc("?get_combat_sync_action_data_const@c_stimulus_payload@@QBAPBUs_stimulus_payload_combat_sync_action@@XZ");
//};

//bool behavior_avoid_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_avoid_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//public: void c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::set_all(void)
//{
//    mangled_ppc("?set_all@?$c_big_flags_typed_no_init@W4e_danger_assessment_flags@@$04@@QAAXXZ");
//};

//public: bool c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@W4e_danger_assessment_flags@@$04@@QBA_NXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::get_mask_of_second_slice_of_chunk_inclusive(enum e_danger_assessment_flags)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@W4e_danger_assessment_flags@@$04@@KAKW4e_danger_assessment_flags@@@Z");
//};

//protected: static enum e_danger_assessment_flags c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@W4e_danger_assessment_flags@@$04@@KA?AW4e_danger_assessment_flags@@J@Z");
//};

//protected: static long c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::bit_index_to_flag_chunk_index(enum e_danger_assessment_flags)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@W4e_danger_assessment_flags@@$04@@KAJW4e_danger_assessment_flags@@@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@W4e_danger_assessment_flags@@$04@@KAKXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<enum e_danger_assessment_flags, 5>::get_mask_of_first_slice_of_chunk_exclusive(enum e_danger_assessment_flags)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@W4e_danger_assessment_flags@@$04@@KAKW4e_danger_assessment_flags@@@Z");
//};

//short behavior_vehicle_avoid_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_avoid_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_vehicle_avoid_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_avoid_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_combat_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_combat_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//short behavior_kamikaze_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_kamikaze_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short behavior_broken_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_broken_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//short behavior_vehicle_ram_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_vehicle_ram_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_vehicle_ram_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_ram_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_vehicle_ram_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_ram_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//void behavior_vehicle_ram_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_ram_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_vehicle_charge_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_vehicle_charge_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool vehicle_charge_angle_valid(long, class c_character_vehicle_properties_internal const *, float, long, bool)
//{
//    mangled_ppc("?vehicle_charge_angle_valid@@YA_NJPBVc_character_vehicle_properties_internal@@MJ_N@Z");
//};

//bool vehicle_charge_range_valid(long, float *, long)
//{
//    mangled_ppc("?vehicle_charge_range_valid@@YA_NJPAMJ@Z");
//};

//bool behavior_vehicle_charge_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_charge_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_vehicle_charge_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_charge_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_vehicle_charge_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_charge_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//public: class c_character_vehicle_properties_internal const * c_character_runtime_properties<class c_character_vehicle_properties_internal>::get_properties(void)
//{
//    mangled_ppc("?get_properties@?$c_character_runtime_properties@Vc_character_vehicle_properties_internal@@@@QAAPBVc_character_vehicle_properties_internal@@XZ");
//};

//bool behavior_cover_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cover_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_vehicle_cover_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_vehicle_cover_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_vehicle_cover_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_cover_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_vehicle_cover_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_cover_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool vehicle_cover_safe(long, long)
//{
//    mangled_ppc("?vehicle_cover_safe@@YA_NJJ@Z");
//};

//bool behavior_vehicle_cover_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_cover_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_vehicle_cover_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_cover_control@@YAXJPAVc_behavior_state@@@Z");
//};

//void behavior_cower_clear_non_deterministic_behavior_state(class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cower_clear_non_deterministic_behavior_state@@YAXPAVc_behavior_state@@@Z");
//};

//short impulse_anti_vehicle_grenade_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?impulse_anti_vehicle_grenade_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short unassailable_enemy_grenade_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?unassailable_enemy_grenade_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short behavior_engage_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_engage_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//bool behavior_fight_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_fight_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_fight_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_fight_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_fight_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_fight_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_fight_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_fight_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//short fight_predict_visibility(long, union real_point3d const *, long, short)
//{
//    mangled_ppc("?fight_predict_visibility@@YAFJPBTreal_point3d@@JF@Z");
//};

//void behavior_fight_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_fight_control@@YAXJPAVc_behavior_state@@@Z");
//};

//void behavior_fight_clear_non_deterministic_behavior_state(class c_behavior_state *)
//{
//    mangled_ppc("?behavior_fight_clear_non_deterministic_behavior_state@@YAXPAVc_behavior_state@@@Z");
//};

//short behavior_fight_positioning_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_fight_positioning_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//void behavior_fight_positioning_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_fight_positioning_control@@YAXJPAVc_behavior_state@@@Z");
//};

//void flee_flush_actor(long, class c_behavior_state *, long)
//{
//    mangled_ppc("?flee_flush_actor@@YAXJPAVc_behavior_state@@J@Z");
//};

//void flee_flush_firing_position_indices(long, class c_behavior_state *, bool)
//{
//    mangled_ppc("?flee_flush_firing_position_indices@@YAXJPAVc_behavior_state@@_N@Z");
//};

//void behavior_guard_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_guard_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//void behavior_postcombat_flush_prop(long, class c_behavior_state *, long)
//{
//    mangled_ppc("?behavior_postcombat_flush_prop@@YAXJPAVc_behavior_state@@J@Z");
//};

//short behavior_postombat_approach_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_postombat_approach_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_postombat_approach_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_postombat_approach_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_postombat_approach_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_postombat_approach_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_postombat_approach_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_postombat_approach_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_postombat_approach_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_postombat_approach_control@@YAXJPAVc_behavior_state@@@Z");
//};

//void behavior_postcombat_approach_flush_actor(long, class c_behavior_state *, long)
//{
//    mangled_ppc("?behavior_postcombat_approach_flush_actor@@YAXJPAVc_behavior_state@@J@Z");
//};

//void behavior_postcombat_clear_non_deterministic_behavior_state(class c_behavior_state *)
//{
//    mangled_ppc("?behavior_postcombat_clear_non_deterministic_behavior_state@@YAXPAVc_behavior_state@@@Z");
//};

//short behavior_presearch_decide(long, short, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_presearch_decide@@YAFJFPAVc_behavior_state@@@Z");
//};

//float behavior_presearch_get_child_weight(long, short)
//{
//    mangled_ppc("?behavior_presearch_get_child_weight@@YAMJF@Z");
//};

//bool behavior_presearch_child_allowed(long, short)
//{
//    mangled_ppc("?behavior_presearch_child_allowed@@YA_NJF@Z");
//};

//short behavior_find_pursuit_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_find_pursuit_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_find_pursuit_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_find_pursuit_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool find_pursuit_position(long, long)
//{
//    mangled_ppc("?find_pursuit_position@@YA_NJJ@Z");
//};

//bool find_search_performance(long, long)
//{
//    mangled_ppc("?find_search_performance@@YA_NJJ@Z");
//};

//void behavior_find_pursuit_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_find_pursuit_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_enter_vehicle_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_enter_vehicle_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short behavior_pickup_player_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_pickup_player_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_pickup_player_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_pickup_player_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_pickup_player_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_pickup_player_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_pickup_player_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_pickup_player_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_pickup_player_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_pickup_player_control@@YAXJPAVc_behavior_state@@@Z");
//};

//bool behavior_wander_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_wander_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool behavior_wander_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_wander_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_wander_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_wander_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_wander_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_wander_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//short behavior_flight_wander_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_flight_wander_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_flight_wander_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flight_wander_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_flight_wander_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flight_wander_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_flight_wander_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flight_wander_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_flight_wander_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_flight_wander_control@@YAXJPAVc_behavior_state@@@Z");
//};

//public: struct s_firing_position & c_static_stack<struct s_firing_position, 512>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_firing_position@@$0CAA@@@QAAAAUs_firing_position@@J@Z");
//};

//short behavior_vehicle_flip_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_vehicle_flip_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//long behavior_vehicle_flip_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_flip_activate@@YAJJPAVc_behavior_state@@@Z");
//};

//short behavior_vehicle_flip_select_actors(long, long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_flip_select_actors@@YAFJJPAVc_behavior_state@@@Z");
//};

//short behavior_vehicle_flip_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_vehicle_flip_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//void behavior_leap_on_cover_clear_non_deterministic_behavior_state(class c_behavior_state *)
//{
//    mangled_ppc("?behavior_leap_on_cover_clear_non_deterministic_behavior_state@@YAXPAVc_behavior_state@@@Z");
//};

//short behavior_board_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_board_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//float board_range(long, class c_character_boarding_properties_internal const *, bool)
//{
//    mangled_ppc("?board_range@@YAMJPBVc_character_boarding_properties_internal@@_N@Z");
//};

//bool boarding_seat_available(long, long)
//{
//    mangled_ppc("?boarding_seat_available@@YA_NJJ@Z");
//};

//bool behavior_board_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_board_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_board_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_board_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short behavior_board_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_board_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_board_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_board_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_board_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_board_control@@YAXJPAVc_behavior_state@@@Z");
//};

//public: class c_character_boarding_properties_internal const * c_character_runtime_properties<class c_character_boarding_properties_internal>::get_properties(void)
//{
//    mangled_ppc("?get_properties@?$c_character_runtime_properties@Vc_character_boarding_properties_internal@@@@QAAPBVc_character_boarding_properties_internal@@XZ");
//};

//public: void c_flags_no_init<enum e_prop_ref_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_prop_ref_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_prop_ref_flags@@G$08Us_default_enum_string_resolver@@@@QAAXW4e_prop_ref_flags@@_N@Z");
//};

//short behavior_cure_isolation_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_cure_isolation_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//short behavior_cure_isolation_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cure_isolation_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_cure_isolation_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cure_isolation_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//bool behavior_cure_isolation_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cure_isolation_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_cure_isolation_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_cure_isolation_control@@YAXJPAVc_behavior_state@@@Z");
//};

//void behavior_activity_deactivate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_activity_deactivate@@YAXJPAVc_behavior_state@@@Z");
//};

//short engineer_control_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?engineer_control_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//bool engineer_has_child(long, long, long *)
//{
//    mangled_ppc("?engineer_has_child@@YA_NJJPAJ@Z");
//};

//public: c_character_runtime_properties<class c_character_engineer_properties_internal>::c_character_runtime_properties<class c_character_engineer_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_engineer_properties_internal@@@@QAA@XZ");
//};

//public: bool c_character_runtime_properties<class c_character_engineer_properties_internal>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_character_runtime_properties@Vc_character_engineer_properties_internal@@@@QBA_NXZ");
//};

//void actor_get_character_definition_properties<class c_character_engineer_properties_internal, 456>(long, class c_character_runtime_properties<class c_character_engineer_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_engineer_properties_internal@@$0BMI@@@YAXJAAV?$c_character_runtime_properties@Vc_character_engineer_properties_internal@@@@@Z");
//};

//public: bool c_flags_no_init<enum e_engineer_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_engineer_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_engineer_flags@@G$00Us_default_enum_string_resolver@@@@QBA_NW4e_engineer_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_engineer_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_engineer_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_engineer_flags@@G$00Us_default_enum_string_resolver@@@@QAAXW4e_engineer_flags@@_N@Z");
//};

//public: void c_character_runtime_properties<class c_character_engineer_properties_internal>::set(class c_character_engineer_properties_internal const *)
//{
//    mangled_ppc("?set@?$c_character_runtime_properties@Vc_character_engineer_properties_internal@@@@QAAXPBVc_character_engineer_properties_internal@@@Z");
//};

//public: void c_character_runtime_properties<class c_character_engineer_properties_internal>::invalidate(void)
//{
//    mangled_ppc("?invalidate@?$c_character_runtime_properties@Vc_character_engineer_properties_internal@@@@QAAXXZ");
//};

//public: static void c_character_properties_base<class c_character_engineer_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_engineer_properties_internal> *)
//{
//    mangled_ppc("?apply_modifiers@?$c_character_properties_base@Vc_character_engineer_properties_internal@@@@SAXPAV1@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_engineer_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_engineer_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_engineer_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_engineer_properties_internal@@@@@Z");
//};

//class c_character_engineer_properties_internal * character_definition_properties_get_direct<class c_character_engineer_properties_internal, 456>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_engineer_properties_internal@@$0BMI@@@YAPAVc_character_engineer_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_engineer_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_engineer_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_engineer_flags@@G$00Us_default_enum_string_resolver@@@@SA_NW4e_engineer_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_engineer_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_engineer_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_engineer_flags@@G$00Us_default_enum_string_resolver@@@@CAGW4e_engineer_flags@@@Z");
//};

//void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_engineer_properties_internal>, class c_character_engineer_properties_internal>(class c_character_runtime_properties<class c_character_engineer_properties_internal> *, class c_character_engineer_properties_internal const *)
//{
//    mangled_ppc("??$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_engineer_properties_internal@@@@Vc_character_engineer_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_engineer_properties_internal@@@@PBVc_character_engineer_properties_internal@@@Z");
//};

//public: static bool c_character_runtime_properties<class c_character_engineer_properties_internal>::static_valid(void *)
//{
//    mangled_ppc("?static_valid@?$c_character_runtime_properties@Vc_character_engineer_properties_internal@@@@SA_NPAX@Z");
//};

//struct s_tag_block * character_definition_property_block_get<456>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0BMI@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//short boost_allies_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?boost_allies_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

//short behavior_engineer_explode_get_desire(long, struct s_behavior_input const *, struct s_behavior_arguments const *)
//{
//    mangled_ppc("?behavior_engineer_explode_get_desire@@YAFJPBUs_behavior_input@@PBUs_behavior_arguments@@@Z");
//};

//bool behavior_engineer_explode_activate(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_engineer_explode_activate@@YA_NJPAVc_behavior_state@@@Z");
//};

//short behavior_engineer_explode_next(long, class c_behavior_state *, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_engineer_explode_next@@YAFJPAVc_behavior_state@@0@Z");
//};

//bool behavior_engineer_explode_perform(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_engineer_explode_perform@@YA_NJPAVc_behavior_state@@@Z");
//};

//void behavior_engineer_explode_control(long, class c_behavior_state *)
//{
//    mangled_ppc("?behavior_engineer_explode_control@@YAXJPAVc_behavior_state@@@Z");
//};

//short engineer_broken_detonation_get_impulse(long, class c_behavior_state *)
//{
//    mangled_ppc("?engineer_broken_detonation_get_impulse@@YAFJPAVc_behavior_state@@@Z");
//};

