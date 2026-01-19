/* ---------- headers */

#include "omaha\models\damage_info.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// struct s_block_index_custom_search_definition damage_section_search_definition; // "?damage_section_search_definition@@3Us_block_index_custom_search_definition@@A"
// long volatile `void __cdecl character_runtime_properties_copy<class c_character_runtime_properties<class c_character_vitality_properties_internal>, class c_character_vitality_properties_internal>(class c_character_runtime_properties<class c_character_vitality_properties_internal> *, class c_character_vitality_properties_internal const *)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@???$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_vitality_properties_internal@@@@Vc_character_vitality_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_vitality_properties_internal@@@@PBVc_character_vitality_properties_internal@@@Z@4JC"

// long object_get_model_definition_index(long);
// bool model_definition_has_damage_info(long);
// bool model_damage_info_get_no_ai_damage(long);
// enum e_damage_reporting_type model_damage_info_get_collision_reporting_type(long);
// enum e_damage_reporting_type model_damage_info_get_response_reporting_type(long);
// class c_global_material_type model_damage_info_get_indirect_material_type(long);
// long model_damage_info_get_damage_section_count(long);
// long model_damage_info_get_constraint_count(long);
// long model_damage_info_get_node_count(long);
// class c_global_material_type model_damage_info_get_shield_material_type(long);
// bool model_damage_info_get_shield_depletion_force_hard_ping(long);
// float model_damage_info_get_body_vitality(long);
// float model_damage_info_get_shield_vitality(long);
// float object_get_body_vitality(long);
// void object_set_body_vitality(long, float);
// long object_get_primary_body_damage_section_index(long);
// float object_get_shield_vitality(long);
// float object_get_shield_vitality_recursive(long);
// long object_get_primary_shield_damage_section_index(long);
// bool object_damage_section_should_be_networked(long, long);
// struct s_shield_parameters const * object_get_active_shield_render_parameters(long, long, bool);
// float object_get_active_shield_vitality(long);
// long object_get_active_shield_section_index(long);
// void object_set_shield_vitality(long, float);
// short object_get_body_stun_ticks(long);
// void object_set_body_stun_ticks(long, short);
// void object_set_body_stun_ticks_internal(long, short);
// void object_set_body_stun_ticks_from_authority(long, short);
// short object_get_shield_stun_ticks(long);
// void object_set_shield_stun_ticks(long, short);
// void object_set_shield_stun_ticks_internal(long, short);
// void object_set_shield_stun_ticks_from_authority(long, short);
// short object_get_body_stun_duration(long);
// short object_get_shield_stun_duration(long);
// long model_damage_section_get_response_count(long, long);
// float model_damage_section_get_vitality(long, long);
// long model_damage_response_get_delay_effect(long, long, long);
// struct s_damage_node * model_damage_info_get_node(long, long);
// struct s_new_model_damage_section * damage_info_get_body_damage_section(struct s_model_definition const *);
// struct s_new_model_damage_section * damage_info_get_shield_damage_section(struct s_model_definition const *);
// void object_damage_new(long);
// bool object_damage_update(long);
// void object_cause_damage(struct s_damage_data *, long, short, short, short, enum e_predictability);
// void object_cause_damage_simple(struct s_damage_data *, long, enum e_predictability);
// void object_apply_damage_aftermath(long, struct s_damage_aftermath_result_data const *);
// void object_apply_damage_aftermath_from_authority(long, struct s_damage_aftermath_result_data const *);
// void object_damage_damage_section_hs(long, long, float);
// void object_initialize_vitality(long, float *, float *);
// void object_destroy(long);
// void object_destroy_without_delayed_effects(long);
// void object_kill_instantly(long, bool, bool, bool, struct s_damage_owner const *, struct s_damage_reporting_info const &);
// void object_deplete_shield(long, bool, struct s_damage_owner const *);
// void object_deplete_body(long, struct s_damage_owner const *, struct s_damage_reporting_info const &);
// void object_deplete_body_silent(long, struct s_damage_owner const *, struct s_damage_reporting_info const &);
// void object_cause_fatal_damage_aftermath(long, long, bool, char, short, union vector3d const *, struct s_damage_reporting_info const &, long, long);
// void render_debug_object_damage(void);
// bool object_constraint_is_broken(long, enum e_physics_model_constraint_type, long);
// bool object_constraint_is_loosened(long, enum e_physics_model_constraint_type, long);
// void object_damage_constraints(long, unsigned short, unsigned short);
// void object_damage_handle_resurrection(long);
// void damage_section_response_fire_from_simulation_event(long, long, long, struct s_damage_reporting_info const &, enum e_damage_section_response_type);
// bool object_scripting_vitality_pinned(long);
// long area_of_effect_cause_damage(struct s_damage_data *, long, enum e_predictability);
// long area_of_effect_cause_damage(struct s_damage_data *, long, long, enum e_predictability);
// void damage_handle_vehicle_exit(long, long);
// void damage_effect_new_on_weapon(long, long);
// void object_damage_stop_recharging_effect(long, long);
// void object_scripting_ignores_emp(long, bool);
// bool material_is_headshotable(long, struct s_model_material const *);
// void model_postprocess_build_damage(long);
// void damage_info_postprocess(long);
// bool resolve_damage_section_block(long, struct s_tag_field const *, void const *, void const *, __int64, struct s_tag_block_resolve_custom_result *);
// bool block_definition_can_match_damage_section_block(struct s_tag_field const *, struct s_tag_block_definition const *);
// public: c_character_runtime_properties<class c_character_vitality_properties_internal>::c_character_runtime_properties<class c_character_vitality_properties_internal>(void);
// public: bool c_character_runtime_properties<class c_character_vitality_properties_internal>::valid(void) const;
// public: bool c_flags_no_init<enum e_new_damage_section_flag, unsigned long, 12, struct s_default_enum_string_resolver>::test(enum e_new_damage_section_flag) const;
// void actor_get_character_definition_properties<class c_character_vitality_properties_internal, 144>(long, class c_character_runtime_properties<class c_character_vitality_properties_internal> &);
// public: void c_character_runtime_properties<class c_character_vitality_properties_internal>::set(class c_character_vitality_properties_internal const *);
// public: void c_character_runtime_properties<class c_character_vitality_properties_internal>::invalidate(void);
// public: static bool c_flags_no_init<enum e_new_damage_section_flag, unsigned long, 12, struct s_default_enum_string_resolver>::valid_bit(enum e_new_damage_section_flag);
// private: static unsigned long c_flags_no_init<enum e_new_damage_section_flag, unsigned long, 12, struct s_default_enum_string_resolver>::flag_size_type(enum e_new_damage_section_flag);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_vitality_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_vitality_properties_internal> &);
// class c_character_vitality_properties_internal * character_definition_properties_get_direct<class c_character_vitality_properties_internal, 144>(long, class c_stimulus_flags const *);
// void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_vitality_properties_internal>, class c_character_vitality_properties_internal>(class c_character_runtime_properties<class c_character_vitality_properties_internal> *, class c_character_vitality_properties_internal const *);
// public: static bool c_character_runtime_properties<class c_character_vitality_properties_internal>::static_valid(void *);
// struct s_tag_block * character_definition_property_block_get<144>(long, class c_stimulus_flags const *);

//long object_get_model_definition_index(long)
//{
//    mangled_ppc("?object_get_model_definition_index@@YAJJ@Z");
//};

//bool model_definition_has_damage_info(long)
//{
//    mangled_ppc("?model_definition_has_damage_info@@YA_NJ@Z");
//};

//bool model_damage_info_get_no_ai_damage(long)
//{
//    mangled_ppc("?model_damage_info_get_no_ai_damage@@YA_NJ@Z");
//};

//enum e_damage_reporting_type model_damage_info_get_collision_reporting_type(long)
//{
//    mangled_ppc("?model_damage_info_get_collision_reporting_type@@YA?AW4e_damage_reporting_type@@J@Z");
//};

//enum e_damage_reporting_type model_damage_info_get_response_reporting_type(long)
//{
//    mangled_ppc("?model_damage_info_get_response_reporting_type@@YA?AW4e_damage_reporting_type@@J@Z");
//};

//class c_global_material_type model_damage_info_get_indirect_material_type(long)
//{
//    mangled_ppc("?model_damage_info_get_indirect_material_type@@YA?AVc_global_material_type@@J@Z");
//};

//long model_damage_info_get_damage_section_count(long)
//{
//    mangled_ppc("?model_damage_info_get_damage_section_count@@YAJJ@Z");
//};

//long model_damage_info_get_constraint_count(long)
//{
//    mangled_ppc("?model_damage_info_get_constraint_count@@YAJJ@Z");
//};

//long model_damage_info_get_node_count(long)
//{
//    mangled_ppc("?model_damage_info_get_node_count@@YAJJ@Z");
//};

//class c_global_material_type model_damage_info_get_shield_material_type(long)
//{
//    mangled_ppc("?model_damage_info_get_shield_material_type@@YA?AVc_global_material_type@@J@Z");
//};

//bool model_damage_info_get_shield_depletion_force_hard_ping(long)
//{
//    mangled_ppc("?model_damage_info_get_shield_depletion_force_hard_ping@@YA_NJ@Z");
//};

//float model_damage_info_get_body_vitality(long)
//{
//    mangled_ppc("?model_damage_info_get_body_vitality@@YAMJ@Z");
//};

//float model_damage_info_get_shield_vitality(long)
//{
//    mangled_ppc("?model_damage_info_get_shield_vitality@@YAMJ@Z");
//};

//float object_get_body_vitality(long)
//{
//    mangled_ppc("?object_get_body_vitality@@YAMJ@Z");
//};

//void object_set_body_vitality(long, float)
//{
//    mangled_ppc("?object_set_body_vitality@@YAXJM@Z");
//};

//long object_get_primary_body_damage_section_index(long)
//{
//    mangled_ppc("?object_get_primary_body_damage_section_index@@YAJJ@Z");
//};

//float object_get_shield_vitality(long)
//{
//    mangled_ppc("?object_get_shield_vitality@@YAMJ@Z");
//};

//float object_get_shield_vitality_recursive(long)
//{
//    mangled_ppc("?object_get_shield_vitality_recursive@@YAMJ@Z");
//};

//long object_get_primary_shield_damage_section_index(long)
//{
//    mangled_ppc("?object_get_primary_shield_damage_section_index@@YAJJ@Z");
//};

//bool object_damage_section_should_be_networked(long, long)
//{
//    mangled_ppc("?object_damage_section_should_be_networked@@YA_NJJ@Z");
//};

//struct s_shield_parameters const * object_get_active_shield_render_parameters(long, long, bool)
//{
//    mangled_ppc("?object_get_active_shield_render_parameters@@YAPBUs_shield_parameters@@JJ_N@Z");
//};

//float object_get_active_shield_vitality(long)
//{
//    mangled_ppc("?object_get_active_shield_vitality@@YAMJ@Z");
//};

//long object_get_active_shield_section_index(long)
//{
//    mangled_ppc("?object_get_active_shield_section_index@@YAJJ@Z");
//};

//void object_set_shield_vitality(long, float)
//{
//    mangled_ppc("?object_set_shield_vitality@@YAXJM@Z");
//};

//short object_get_body_stun_ticks(long)
//{
//    mangled_ppc("?object_get_body_stun_ticks@@YAFJ@Z");
//};

//void object_set_body_stun_ticks(long, short)
//{
//    mangled_ppc("?object_set_body_stun_ticks@@YAXJF@Z");
//};

//void object_set_body_stun_ticks_internal(long, short)
//{
//    mangled_ppc("?object_set_body_stun_ticks_internal@@YAXJF@Z");
//};

//void object_set_body_stun_ticks_from_authority(long, short)
//{
//    mangled_ppc("?object_set_body_stun_ticks_from_authority@@YAXJF@Z");
//};

//short object_get_shield_stun_ticks(long)
//{
//    mangled_ppc("?object_get_shield_stun_ticks@@YAFJ@Z");
//};

//void object_set_shield_stun_ticks(long, short)
//{
//    mangled_ppc("?object_set_shield_stun_ticks@@YAXJF@Z");
//};

//void object_set_shield_stun_ticks_internal(long, short)
//{
//    mangled_ppc("?object_set_shield_stun_ticks_internal@@YAXJF@Z");
//};

//void object_set_shield_stun_ticks_from_authority(long, short)
//{
//    mangled_ppc("?object_set_shield_stun_ticks_from_authority@@YAXJF@Z");
//};

//short object_get_body_stun_duration(long)
//{
//    mangled_ppc("?object_get_body_stun_duration@@YAFJ@Z");
//};

//short object_get_shield_stun_duration(long)
//{
//    mangled_ppc("?object_get_shield_stun_duration@@YAFJ@Z");
//};

//long model_damage_section_get_response_count(long, long)
//{
//    mangled_ppc("?model_damage_section_get_response_count@@YAJJJ@Z");
//};

//float model_damage_section_get_vitality(long, long)
//{
//    mangled_ppc("?model_damage_section_get_vitality@@YAMJJ@Z");
//};

//long model_damage_response_get_delay_effect(long, long, long)
//{
//    mangled_ppc("?model_damage_response_get_delay_effect@@YAJJJJ@Z");
//};

//struct s_damage_node * model_damage_info_get_node(long, long)
//{
//    mangled_ppc("?model_damage_info_get_node@@YAPAUs_damage_node@@JJ@Z");
//};

//struct s_new_model_damage_section * damage_info_get_body_damage_section(struct s_model_definition const *)
//{
//    mangled_ppc("?damage_info_get_body_damage_section@@YAPAUs_new_model_damage_section@@PBUs_model_definition@@@Z");
//};

//struct s_new_model_damage_section * damage_info_get_shield_damage_section(struct s_model_definition const *)
//{
//    mangled_ppc("?damage_info_get_shield_damage_section@@YAPAUs_new_model_damage_section@@PBUs_model_definition@@@Z");
//};

//void object_damage_new(long)
//{
//    mangled_ppc("?object_damage_new@@YAXJ@Z");
//};

//bool object_damage_update(long)
//{
//    mangled_ppc("?object_damage_update@@YA_NJ@Z");
//};

//void object_cause_damage(struct s_damage_data *, long, short, short, short, enum e_predictability)
//{
//    mangled_ppc("?object_cause_damage@@YAXPAUs_damage_data@@JFFFW4e_predictability@@@Z");
//};

//void object_cause_damage_simple(struct s_damage_data *, long, enum e_predictability)
//{
//    mangled_ppc("?object_cause_damage_simple@@YAXPAUs_damage_data@@JW4e_predictability@@@Z");
//};

//void object_apply_damage_aftermath(long, struct s_damage_aftermath_result_data const *)
//{
//    mangled_ppc("?object_apply_damage_aftermath@@YAXJPBUs_damage_aftermath_result_data@@@Z");
//};

//void object_apply_damage_aftermath_from_authority(long, struct s_damage_aftermath_result_data const *)
//{
//    mangled_ppc("?object_apply_damage_aftermath_from_authority@@YAXJPBUs_damage_aftermath_result_data@@@Z");
//};

//void object_damage_damage_section_hs(long, long, float)
//{
//    mangled_ppc("?object_damage_damage_section_hs@@YAXJJM@Z");
//};

//void object_initialize_vitality(long, float *, float *)
//{
//    mangled_ppc("?object_initialize_vitality@@YAXJPAM0@Z");
//};

//void object_destroy(long)
//{
//    mangled_ppc("?object_destroy@@YAXJ@Z");
//};

//void object_destroy_without_delayed_effects(long)
//{
//    mangled_ppc("?object_destroy_without_delayed_effects@@YAXJ@Z");
//};

//void object_kill_instantly(long, bool, bool, bool, struct s_damage_owner const *, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_kill_instantly@@YAXJ_N00PBUs_damage_owner@@ABUs_damage_reporting_info@@@Z");
//};

//void object_deplete_shield(long, bool, struct s_damage_owner const *)
//{
//    mangled_ppc("?object_deplete_shield@@YAXJ_NPBUs_damage_owner@@@Z");
//};

//void object_deplete_body(long, struct s_damage_owner const *, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_deplete_body@@YAXJPBUs_damage_owner@@ABUs_damage_reporting_info@@@Z");
//};

//void object_deplete_body_silent(long, struct s_damage_owner const *, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?object_deplete_body_silent@@YAXJPBUs_damage_owner@@ABUs_damage_reporting_info@@@Z");
//};

//void object_cause_fatal_damage_aftermath(long, long, bool, char, short, union vector3d const *, struct s_damage_reporting_info const &, long, long)
//{
//    mangled_ppc("?object_cause_fatal_damage_aftermath@@YAXJJ_NDFPBTvector3d@@ABUs_damage_reporting_info@@JJ@Z");
//};

//void render_debug_object_damage(void)
//{
//    mangled_ppc("?render_debug_object_damage@@YAXXZ");
//};

//bool object_constraint_is_broken(long, enum e_physics_model_constraint_type, long)
//{
//    mangled_ppc("?object_constraint_is_broken@@YA_NJW4e_physics_model_constraint_type@@J@Z");
//};

//bool object_constraint_is_loosened(long, enum e_physics_model_constraint_type, long)
//{
//    mangled_ppc("?object_constraint_is_loosened@@YA_NJW4e_physics_model_constraint_type@@J@Z");
//};

//void object_damage_constraints(long, unsigned short, unsigned short)
//{
//    mangled_ppc("?object_damage_constraints@@YAXJGG@Z");
//};

//void object_damage_handle_resurrection(long)
//{
//    mangled_ppc("?object_damage_handle_resurrection@@YAXJ@Z");
//};

//void damage_section_response_fire_from_simulation_event(long, long, long, struct s_damage_reporting_info const &, enum e_damage_section_response_type)
//{
//    mangled_ppc("?damage_section_response_fire_from_simulation_event@@YAXJJJABUs_damage_reporting_info@@W4e_damage_section_response_type@@@Z");
//};

//bool object_scripting_vitality_pinned(long)
//{
//    mangled_ppc("?object_scripting_vitality_pinned@@YA_NJ@Z");
//};

//long area_of_effect_cause_damage(struct s_damage_data *, long, enum e_predictability)
//{
//    mangled_ppc("?area_of_effect_cause_damage@@YAJPAUs_damage_data@@JW4e_predictability@@@Z");
//};

//long area_of_effect_cause_damage(struct s_damage_data *, long, long, enum e_predictability)
//{
//    mangled_ppc("?area_of_effect_cause_damage@@YAJPAUs_damage_data@@JJW4e_predictability@@@Z");
//};

//void damage_handle_vehicle_exit(long, long)
//{
//    mangled_ppc("?damage_handle_vehicle_exit@@YAXJJ@Z");
//};

//void damage_effect_new_on_weapon(long, long)
//{
//    mangled_ppc("?damage_effect_new_on_weapon@@YAXJJ@Z");
//};

//void object_damage_stop_recharging_effect(long, long)
//{
//    mangled_ppc("?object_damage_stop_recharging_effect@@YAXJJ@Z");
//};

//void object_scripting_ignores_emp(long, bool)
//{
//    mangled_ppc("?object_scripting_ignores_emp@@YAXJ_N@Z");
//};

//bool material_is_headshotable(long, struct s_model_material const *)
//{
//    mangled_ppc("?material_is_headshotable@@YA_NJPBUs_model_material@@@Z");
//};

//void model_postprocess_build_damage(long)
//{
//    mangled_ppc("?model_postprocess_build_damage@@YAXJ@Z");
//};

//void damage_info_postprocess(long)
//{
//    mangled_ppc("?damage_info_postprocess@@YAXJ@Z");
//};

//bool resolve_damage_section_block(long, struct s_tag_field const *, void const *, void const *, __int64, struct s_tag_block_resolve_custom_result *)
//{
//    mangled_ppc("?resolve_damage_section_block@@YA_NJPBUs_tag_field@@PBX1_JPAUs_tag_block_resolve_custom_result@@@Z");
//};

//bool block_definition_can_match_damage_section_block(struct s_tag_field const *, struct s_tag_block_definition const *)
//{
//    mangled_ppc("?block_definition_can_match_damage_section_block@@YA_NPBUs_tag_field@@PBUs_tag_block_definition@@@Z");
//};

//public: c_character_runtime_properties<class c_character_vitality_properties_internal>::c_character_runtime_properties<class c_character_vitality_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_vitality_properties_internal@@@@QAA@XZ");
//};

//public: bool c_character_runtime_properties<class c_character_vitality_properties_internal>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_character_runtime_properties@Vc_character_vitality_properties_internal@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_new_damage_section_flag, unsigned long, 12, struct s_default_enum_string_resolver>::test(enum e_new_damage_section_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_new_damage_section_flag@@K$0M@Us_default_enum_string_resolver@@@@QBA_NW4e_new_damage_section_flag@@@Z");
//};

//void actor_get_character_definition_properties<class c_character_vitality_properties_internal, 144>(long, class c_character_runtime_properties<class c_character_vitality_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_vitality_properties_internal@@$0JA@@@YAXJAAV?$c_character_runtime_properties@Vc_character_vitality_properties_internal@@@@@Z");
//};

//public: void c_character_runtime_properties<class c_character_vitality_properties_internal>::set(class c_character_vitality_properties_internal const *)
//{
//    mangled_ppc("?set@?$c_character_runtime_properties@Vc_character_vitality_properties_internal@@@@QAAXPBVc_character_vitality_properties_internal@@@Z");
//};

//public: void c_character_runtime_properties<class c_character_vitality_properties_internal>::invalidate(void)
//{
//    mangled_ppc("?invalidate@?$c_character_runtime_properties@Vc_character_vitality_properties_internal@@@@QAAXXZ");
//};

//public: static bool c_flags_no_init<enum e_new_damage_section_flag, unsigned long, 12, struct s_default_enum_string_resolver>::valid_bit(enum e_new_damage_section_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_new_damage_section_flag@@K$0M@Us_default_enum_string_resolver@@@@SA_NW4e_new_damage_section_flag@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_new_damage_section_flag, unsigned long, 12, struct s_default_enum_string_resolver>::flag_size_type(enum e_new_damage_section_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_new_damage_section_flag@@K$0M@Us_default_enum_string_resolver@@@@CAKW4e_new_damage_section_flag@@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_vitality_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_vitality_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_vitality_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_vitality_properties_internal@@@@@Z");
//};

//class c_character_vitality_properties_internal * character_definition_properties_get_direct<class c_character_vitality_properties_internal, 144>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_vitality_properties_internal@@$0JA@@@YAPAVc_character_vitality_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_vitality_properties_internal>, class c_character_vitality_properties_internal>(class c_character_runtime_properties<class c_character_vitality_properties_internal> *, class c_character_vitality_properties_internal const *)
//{
//    mangled_ppc("??$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_vitality_properties_internal@@@@Vc_character_vitality_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_vitality_properties_internal@@@@PBVc_character_vitality_properties_internal@@@Z");
//};

//public: static bool c_character_runtime_properties<class c_character_vitality_properties_internal>::static_valid(void *)
//{
//    mangled_ppc("?static_valid@?$c_character_runtime_properties@Vc_character_vitality_properties_internal@@@@SA_NPAX@Z");
//};

//struct s_tag_block * character_definition_property_block_get<144>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0JA@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

