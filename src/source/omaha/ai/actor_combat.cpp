/* ---------- headers */

#include "omaha\ai\actor_combat.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_837C64D8; // "except_record_837C64D8"
// except_record_837CA578; // "except_record_837CA578"
// except_record_837CC460; // "except_record_837CC460"
// long volatile `void __cdecl character_runtime_properties_copy<class c_character_runtime_properties<class c_character_engage_properties_internal>, class c_character_engage_properties_internal>(class c_character_runtime_properties<class c_character_engage_properties_internal> *, class c_character_engage_properties_internal const *)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@???$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_engage_properties_internal@@@@Vc_character_engage_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_engage_properties_internal@@@@PBVc_character_engage_properties_internal@@@Z@4JC"

// void actor_get_gun_position(long, enum e_actor_gun_position_query, union real_point3d *);
// bool actor_should_lower_weapon(long);
// void actor_combat_update(long);
// bool actor_combat_enable_special_fire_situation(long, short);
// bool actor_combat_allow_special_fire_situation(long, short);
// void actor_combat_fire_wildly(long, long);
// void actor_combat_disable_bursts(long, long);
// bool actor_firing_blindly(long);
// bool actor_combat_currently_firing_burst(long);
// bool actor_aim_projectile(long, union real_point3d const *, union vector3d *, float *, float *, long *);
// float actor_weapon_is_spewing(long);
// struct weapon_definition * actor_get_weapon_definition(long);
// void actor_get_weapon_vector(long, union vector3d *);
// bool character_firing_pattern_calculate(long, float, struct character_firing_pattern *);
// void actor_start_burst(long, long, class c_character_weapon_properties_internal const *, struct character_firing_pattern const *);
// void actor_combat_find_nearby_target(union real_point3d *, float);
// void actor_start_pause(long, class c_character_weapon_properties_internal const *, struct character_firing_pattern const *);
// bool actor_start_first_burst_delay(long, class c_character_weapon_properties_internal const *, struct character_firing_pattern *);
// long actor_aim_grenade(long, union real_point3d const *, union vector3d *);
// bool actor_combat_retarget_grenade(long, class c_ai_point3d const *);
// bool actor_combat_reaim_grenade(long, union real_point3d const *);
// long actor_get_grenade_definition(short);
// bool actor_override_grenade(long, long *);
// bool actor_request_grenade_throw(long, bool);
// bool actor_combat_find_grenade_target(long, union real_point3d const *, long, long *);
// bool actor_combat_check_collateral_damage(long, float, float, union real_point3d const *, short *, short *);
// bool actor_combat_plan_grenade_trajectory(long, short, class c_ai_point3d const *, long, long, short);
// bool actor_combat_build_grenade_trajectory(long, struct s_location, union real_point3d const *, float, float, union real_point3d const *, float *, bool, union vector3d *, float *, float *, union vector3d *, float *);
// bool actor_weapon_aim(long, short, union real_point3d const *, union real_point3d const *, bool, union vector3d *, float *, float *, float *, bool *);
// bool actor_target_get_target_point(long, long, union real_point3d *, class c_ai_point3d *);
// bool actor_target_choose_target_creature(long, long);
// bool actor_target_choose_target_marker(long, long);
// void actor_suppress_shooting(long, short);
// void actor_handle_projectile_impact(long, long);
// bool actor_firing_blocked(long);
// bool actor_get_weapon_bounds(long, class c_character_weapon_properties_internal const *, float *, float *, float *);
// bool actor_aim_equipment(long, long, union vector3d *);
// public: c_character_runtime_properties<class c_character_engage_properties_internal>::c_character_runtime_properties<class c_character_engage_properties_internal>(void);
// public: bool c_character_runtime_properties<class c_character_engage_properties_internal>::valid(void) const;
// public: class c_character_weapon_properties_internal const * c_character_runtime_properties<class c_character_weapon_properties_internal>::get_properties(void);
// void actor_get_character_definition_properties<class c_character_engage_properties_internal, 288>(long, class c_character_runtime_properties<class c_character_engage_properties_internal> &);
// public: void c_flags_no_init<enum e_target_flags, unsigned short, 5, struct s_default_enum_string_resolver>::set(enum e_target_flags, bool);
// public: void c_character_runtime_properties<class c_character_engage_properties_internal>::set(class c_character_engage_properties_internal const *);
// public: void c_character_runtime_properties<class c_character_engage_properties_internal>::invalidate(void);
// public: static void c_character_properties_base<class c_character_engage_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_engage_properties_internal> *);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_engage_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_engage_properties_internal> &);
// class c_character_engage_properties_internal * character_definition_properties_get_direct<class c_character_engage_properties_internal, 288>(long, class c_stimulus_flags const *);
// void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_engage_properties_internal>, class c_character_engage_properties_internal>(class c_character_runtime_properties<class c_character_engage_properties_internal> *, class c_character_engage_properties_internal const *);
// public: static bool c_character_runtime_properties<class c_character_engage_properties_internal>::static_valid(void *);
// struct s_tag_block * character_definition_property_block_get<288>(long, class c_stimulus_flags const *);
// public: bool c_character_firing_pattern_properties::valid(void) const;

//void actor_get_gun_position(long, enum e_actor_gun_position_query, union real_point3d *)
//{
//    mangled_ppc("?actor_get_gun_position@@YAXJW4e_actor_gun_position_query@@PATreal_point3d@@@Z");
//};

//bool actor_should_lower_weapon(long)
//{
//    mangled_ppc("?actor_should_lower_weapon@@YA_NJ@Z");
//};

//void actor_combat_update(long)
//{
//    mangled_ppc("?actor_combat_update@@YAXJ@Z");
//};

//bool actor_combat_enable_special_fire_situation(long, short)
//{
//    mangled_ppc("?actor_combat_enable_special_fire_situation@@YA_NJF@Z");
//};

//bool actor_combat_allow_special_fire_situation(long, short)
//{
//    mangled_ppc("?actor_combat_allow_special_fire_situation@@YA_NJF@Z");
//};

//void actor_combat_fire_wildly(long, long)
//{
//    mangled_ppc("?actor_combat_fire_wildly@@YAXJJ@Z");
//};

//void actor_combat_disable_bursts(long, long)
//{
//    mangled_ppc("?actor_combat_disable_bursts@@YAXJJ@Z");
//};

//bool actor_firing_blindly(long)
//{
//    mangled_ppc("?actor_firing_blindly@@YA_NJ@Z");
//};

//bool actor_combat_currently_firing_burst(long)
//{
//    mangled_ppc("?actor_combat_currently_firing_burst@@YA_NJ@Z");
//};

//bool actor_aim_projectile(long, union real_point3d const *, union vector3d *, float *, float *, long *)
//{
//    mangled_ppc("?actor_aim_projectile@@YA_NJPBTreal_point3d@@PATvector3d@@PAM2PAJ@Z");
//};

//float actor_weapon_is_spewing(long)
//{
//    mangled_ppc("?actor_weapon_is_spewing@@YAMJ@Z");
//};

//struct weapon_definition * actor_get_weapon_definition(long)
//{
//    mangled_ppc("?actor_get_weapon_definition@@YAPAUweapon_definition@@J@Z");
//};

//void actor_get_weapon_vector(long, union vector3d *)
//{
//    mangled_ppc("?actor_get_weapon_vector@@YAXJPATvector3d@@@Z");
//};

//bool character_firing_pattern_calculate(long, float, struct character_firing_pattern *)
//{
//    mangled_ppc("?character_firing_pattern_calculate@@YA_NJMPAUcharacter_firing_pattern@@@Z");
//};

//void actor_start_burst(long, long, class c_character_weapon_properties_internal const *, struct character_firing_pattern const *)
//{
//    mangled_ppc("?actor_start_burst@@YAXJJPBVc_character_weapon_properties_internal@@PBUcharacter_firing_pattern@@@Z");
//};

//void actor_combat_find_nearby_target(union real_point3d *, float)
//{
//    mangled_ppc("?actor_combat_find_nearby_target@@YAXPATreal_point3d@@M@Z");
//};

//void actor_start_pause(long, class c_character_weapon_properties_internal const *, struct character_firing_pattern const *)
//{
//    mangled_ppc("?actor_start_pause@@YAXJPBVc_character_weapon_properties_internal@@PBUcharacter_firing_pattern@@@Z");
//};

//bool actor_start_first_burst_delay(long, class c_character_weapon_properties_internal const *, struct character_firing_pattern *)
//{
//    mangled_ppc("?actor_start_first_burst_delay@@YA_NJPBVc_character_weapon_properties_internal@@PAUcharacter_firing_pattern@@@Z");
//};

//long actor_aim_grenade(long, union real_point3d const *, union vector3d *)
//{
//    mangled_ppc("?actor_aim_grenade@@YAJJPBTreal_point3d@@PATvector3d@@@Z");
//};

//bool actor_combat_retarget_grenade(long, class c_ai_point3d const *)
//{
//    mangled_ppc("?actor_combat_retarget_grenade@@YA_NJPBVc_ai_point3d@@@Z");
//};

//bool actor_combat_reaim_grenade(long, union real_point3d const *)
//{
//    mangled_ppc("?actor_combat_reaim_grenade@@YA_NJPBTreal_point3d@@@Z");
//};

//long actor_get_grenade_definition(short)
//{
//    mangled_ppc("?actor_get_grenade_definition@@YAJF@Z");
//};

//bool actor_override_grenade(long, long *)
//{
//    mangled_ppc("?actor_override_grenade@@YA_NJPAJ@Z");
//};

//bool actor_request_grenade_throw(long, bool)
//{
//    mangled_ppc("?actor_request_grenade_throw@@YA_NJ_N@Z");
//};

//bool actor_combat_find_grenade_target(long, union real_point3d const *, long, long *)
//{
//    mangled_ppc("?actor_combat_find_grenade_target@@YA_NJPBTreal_point3d@@JPAJ@Z");
//};

//bool actor_combat_check_collateral_damage(long, float, float, union real_point3d const *, short *, short *)
//{
//    mangled_ppc("?actor_combat_check_collateral_damage@@YA_NJMMPBTreal_point3d@@PAF1@Z");
//};

//bool actor_combat_plan_grenade_trajectory(long, short, class c_ai_point3d const *, long, long, short)
//{
//    mangled_ppc("?actor_combat_plan_grenade_trajectory@@YA_NJFPBVc_ai_point3d@@JJF@Z");
//};

//bool actor_combat_build_grenade_trajectory(long, struct s_location, union real_point3d const *, float, float, union real_point3d const *, float *, bool, union vector3d *, float *, float *, union vector3d *, float *)
//{
//    mangled_ppc("?actor_combat_build_grenade_trajectory@@YA_NJUs_location@@PBTreal_point3d@@MM1PAM_NPATvector3d@@2242@Z");
//};

//bool actor_weapon_aim(long, short, union real_point3d const *, union real_point3d const *, bool, union vector3d *, float *, float *, float *, bool *)
//{
//    mangled_ppc("?actor_weapon_aim@@YA_NJFPBTreal_point3d@@0_NPATvector3d@@PAM33PA_N@Z");
//};

//bool actor_target_get_target_point(long, long, union real_point3d *, class c_ai_point3d *)
//{
//    mangled_ppc("?actor_target_get_target_point@@YA_NJJPATreal_point3d@@PAVc_ai_point3d@@@Z");
//};

//bool actor_target_choose_target_creature(long, long)
//{
//    mangled_ppc("?actor_target_choose_target_creature@@YA_NJJ@Z");
//};

//bool actor_target_choose_target_marker(long, long)
//{
//    mangled_ppc("?actor_target_choose_target_marker@@YA_NJJ@Z");
//};

//void actor_suppress_shooting(long, short)
//{
//    mangled_ppc("?actor_suppress_shooting@@YAXJF@Z");
//};

//void actor_handle_projectile_impact(long, long)
//{
//    mangled_ppc("?actor_handle_projectile_impact@@YAXJJ@Z");
//};

//bool actor_firing_blocked(long)
//{
//    mangled_ppc("?actor_firing_blocked@@YA_NJ@Z");
//};

//bool actor_get_weapon_bounds(long, class c_character_weapon_properties_internal const *, float *, float *, float *)
//{
//    mangled_ppc("?actor_get_weapon_bounds@@YA_NJPBVc_character_weapon_properties_internal@@PAM11@Z");
//};

//bool actor_aim_equipment(long, long, union vector3d *)
//{
//    mangled_ppc("?actor_aim_equipment@@YA_NJJPATvector3d@@@Z");
//};

//public: c_character_runtime_properties<class c_character_engage_properties_internal>::c_character_runtime_properties<class c_character_engage_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_engage_properties_internal@@@@QAA@XZ");
//};

//public: bool c_character_runtime_properties<class c_character_engage_properties_internal>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_character_runtime_properties@Vc_character_engage_properties_internal@@@@QBA_NXZ");
//};

//public: class c_character_weapon_properties_internal const * c_character_runtime_properties<class c_character_weapon_properties_internal>::get_properties(void)
//{
//    mangled_ppc("?get_properties@?$c_character_runtime_properties@Vc_character_weapon_properties_internal@@@@QAAPBVc_character_weapon_properties_internal@@XZ");
//};

//void actor_get_character_definition_properties<class c_character_engage_properties_internal, 288>(long, class c_character_runtime_properties<class c_character_engage_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_engage_properties_internal@@$0BCA@@@YAXJAAV?$c_character_runtime_properties@Vc_character_engage_properties_internal@@@@@Z");
//};

//public: void c_flags_no_init<enum e_target_flags, unsigned short, 5, struct s_default_enum_string_resolver>::set(enum e_target_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_target_flags@@G$04Us_default_enum_string_resolver@@@@QAAXW4e_target_flags@@_N@Z");
//};

//public: void c_character_runtime_properties<class c_character_engage_properties_internal>::set(class c_character_engage_properties_internal const *)
//{
//    mangled_ppc("?set@?$c_character_runtime_properties@Vc_character_engage_properties_internal@@@@QAAXPBVc_character_engage_properties_internal@@@Z");
//};

//public: void c_character_runtime_properties<class c_character_engage_properties_internal>::invalidate(void)
//{
//    mangled_ppc("?invalidate@?$c_character_runtime_properties@Vc_character_engage_properties_internal@@@@QAAXXZ");
//};

//public: static void c_character_properties_base<class c_character_engage_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_engage_properties_internal> *)
//{
//    mangled_ppc("?apply_modifiers@?$c_character_properties_base@Vc_character_engage_properties_internal@@@@SAXPAV1@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_engage_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_engage_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_engage_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_engage_properties_internal@@@@@Z");
//};

//class c_character_engage_properties_internal * character_definition_properties_get_direct<class c_character_engage_properties_internal, 288>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_engage_properties_internal@@$0BCA@@@YAPAVc_character_engage_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_engage_properties_internal>, class c_character_engage_properties_internal>(class c_character_runtime_properties<class c_character_engage_properties_internal> *, class c_character_engage_properties_internal const *)
//{
//    mangled_ppc("??$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_engage_properties_internal@@@@Vc_character_engage_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_engage_properties_internal@@@@PBVc_character_engage_properties_internal@@@Z");
//};

//public: static bool c_character_runtime_properties<class c_character_engage_properties_internal>::static_valid(void *)
//{
//    mangled_ppc("?static_valid@?$c_character_runtime_properties@Vc_character_engage_properties_internal@@@@SA_NPAX@Z");
//};

//struct s_tag_block * character_definition_property_block_get<288>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0BCA@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//public: bool c_character_firing_pattern_properties::valid(void) const
//{
//    mangled_ppc("?valid@c_character_firing_pattern_properties@@QBA_NXZ");
//};

