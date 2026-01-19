/* ---------- headers */

#include "omaha\ai\actor_perception.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// except_record_8391E698; // "except_record_8391E698"
// except_record_8391F620; // "except_record_8391F620"
// except_record_839210C0; // "except_record_839210C0"
// except_record_83921990; // "except_record_83921990"
// except_record_83922150; // "except_record_83922150"
// except_record_83922560; // "except_record_83922560"
// except_record_83923670; // "except_record_83923670"
// except_record_839284C0; // "except_record_839284C0"
// char const **g_perception_mode_names; // "?g_perception_mode_names@@3PAPBDA"
// float g_fireteam_target_selection_preference_bonus; // "?g_fireteam_target_selection_preference_bonus@@3MA"

// enum e_perception_mode actor_get_perception_mode(long);
// void actor_perception_update(long);
// void prop_state_machine_update(long, long);
// void actor_acknowledged_props_update(long);
// int perception_qsort_compare_tracks(void const *, void const *);
// void update_prop_timers(long, long);
// void actor_visibility_test_frustum(long, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *, float, float, float *, float *, bool *);
// short actor_visibility_at_point(long, struct actor_position_data const *, union real_point3d const *, union real_point3d const *, float, bool, bool, bool *, bool *, float *);
// void actor_get_vision_distances(long, float, float, float, float *, float *, bool *);
// short actor_audibility_at_point(long, struct actor_position_data const *, union real_point3d const *, struct s_location const *, short, float, short);
// void actor_perception_find_target_data(long, struct actor_position_data *);
// bool actor_perception_find_sense_position(long, union real_point3d const *, struct actor_position_data *);
// void force_prop_position_refresh(long, long);
// short actor_prop_facing_category(union vector3d const *, union vector3d const *, float);
// void actor_prop_state_refresh(long, long, struct actor_position_data const *, struct actor_position_data const *, bool);
// void prop_status_refresh(long, long, struct actor_position_data *, struct actor_position_data const *);
// void prop_compute_light_perception_properties(long, long, struct actor_position_data *, struct actor_position_data const *, short *, short *, short *);
// void prop_compute_full_perception_properties(long, long, struct actor_position_data *, struct actor_position_data const *, short *, float *, short *, short *, short *);
// void prop_hologram_status_refresh(long, long, bool, struct actor_position_data *, struct actor_position_data const *);
// long actor_perception_find_killer_prop_index(long, long, bool);
// long actor_perception_find_recent_damaging_prop_ref_index(long, bool);
// void actor_perception_forget_recent_damage(long);
// void actor_perception_unreachable(long, long, bool, bool);
// void actor_perception_unassailable(long, long, bool, bool);
// void actor_perception_clear_unassailability(long);
// void actor_compute_prop_salience_all(long);
// void actor_compute_prop_salience(long, long);
// void actor_compute_prop_salience(long, long, enum e_prop_stimulus);
// void actor_situation_update(long);
// void actor_situation_dialog_update(long, short);
// void actor_combat_status_update(long);
// short calculate_prop_class(long, enum e_ai_posture, struct prop_ref_datum const *);
// void calculate_awareness(struct prop_ref_datum const *, struct prop_view *);
// float actor_get_inherent_scariness(long);
// bool actor_is_majorly_scary(long);
// bool actor_prop_is_majorly_scary(long);
// bool actor_prop_has_scary_weapon(long);
// bool unit_has_scary_weapon(long);
// bool actor_has_scary_weapon(long);
// void calculate_scariness(long, struct prop_ref_datum const *, struct prop_datum const *, struct prop_view *);
// void actor_perception_set_target(long, long);
// void actor_perception_dialogue_handle_target_changed(long, long);
// void actor_perception_discovered_hologram(long, long, enum e_hologram_discovery_type, long);
// short actor_perception_aiming_vector_test_blockage(union real_point3d const *, union vector3d const *, union real_point3d const *, long, union vector3d *, float *);
// void actor_emotion_update(long);
// float get_awareness_delta(long, long);
// float get_inverse_awareness_delta(long, long);
// void get_active_camouflage_perception(class c_character_runtime_properties<class c_character_perception_properties_internal> const &, float, float, float *, float *);
// short target_get_prop_class(struct actor_datum const *);
// void debug_render_vehicle_interest(void);
// public: c_enum<enum e_prop_stimulus, char, -1, 4, struct s_default_enum_string_resolver>::c_enum<enum e_prop_stimulus, char, -1, 4, struct s_default_enum_string_resolver>(enum e_prop_stimulus);
// public: c_character_runtime_properties<class c_character_emotions_properties_internal>::c_character_runtime_properties<class c_character_emotions_properties_internal>(void);
// public: c_character_runtime_properties<class c_character_target_properties_internal>::c_character_runtime_properties<class c_character_target_properties_internal>(void);
// void actor_get_character_definition_properties<class c_character_target_properties_internal, 180>(long, class c_character_runtime_properties<class c_character_target_properties_internal> &);
// void actor_get_character_definition_properties<class c_character_emotions_properties_internal, 132>(long, class c_character_runtime_properties<class c_character_emotions_properties_internal> &);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_target_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_target_properties_internal> &);
// class c_character_target_properties_internal * character_definition_properties_get_direct<class c_character_target_properties_internal, 180>(long, class c_stimulus_flags const *);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_emotions_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_emotions_properties_internal> &);
// class c_character_emotions_properties_internal * character_definition_properties_get_direct<class c_character_emotions_properties_internal, 132>(long, class c_stimulus_flags const *);
// struct s_tag_block * character_definition_property_block_get<180>(long, class c_stimulus_flags const *);
// struct s_tag_block * character_definition_property_block_get<132>(long, class c_stimulus_flags const *);
// public: void prop_datum::set_object_index(long);

//enum e_perception_mode actor_get_perception_mode(long)
//{
//    mangled_ppc("?actor_get_perception_mode@@YA?AW4e_perception_mode@@J@Z");
//};

//void actor_perception_update(long)
//{
//    mangled_ppc("?actor_perception_update@@YAXJ@Z");
//};

//void prop_state_machine_update(long, long)
//{
//    mangled_ppc("?prop_state_machine_update@@YAXJJ@Z");
//};

//void actor_acknowledged_props_update(long)
//{
//    mangled_ppc("?actor_acknowledged_props_update@@YAXJ@Z");
//};

//int perception_qsort_compare_tracks(void const *, void const *)
//{
//    mangled_ppc("?perception_qsort_compare_tracks@@YAHPBX0@Z");
//};

//void update_prop_timers(long, long)
//{
//    mangled_ppc("?update_prop_timers@@YAXJJ@Z");
//};

//void actor_visibility_test_frustum(long, union vector3d const *, union vector3d const *, union vector3d const *, union vector3d const *, float, float, float *, float *, bool *)
//{
//    mangled_ppc("?actor_visibility_test_frustum@@YAXJPBTvector3d@@000MMPAM1PA_N@Z");
//};

//short actor_visibility_at_point(long, struct actor_position_data const *, union real_point3d const *, union real_point3d const *, float, bool, bool, bool *, bool *, float *)
//{
//    mangled_ppc("?actor_visibility_at_point@@YAFJPBUactor_position_data@@PBTreal_point3d@@1M_N2PA_N3PAM@Z");
//};

//void actor_get_vision_distances(long, float, float, float, float *, float *, bool *)
//{
//    mangled_ppc("?actor_get_vision_distances@@YAXJMMMPAM0PA_N@Z");
//};

//short actor_audibility_at_point(long, struct actor_position_data const *, union real_point3d const *, struct s_location const *, short, float, short)
//{
//    mangled_ppc("?actor_audibility_at_point@@YAFJPBUactor_position_data@@PBTreal_point3d@@PBUs_location@@FMF@Z");
//};

//void actor_perception_find_target_data(long, struct actor_position_data *)
//{
//    mangled_ppc("?actor_perception_find_target_data@@YAXJPAUactor_position_data@@@Z");
//};

//bool actor_perception_find_sense_position(long, union real_point3d const *, struct actor_position_data *)
//{
//    mangled_ppc("?actor_perception_find_sense_position@@YA_NJPBTreal_point3d@@PAUactor_position_data@@@Z");
//};

//void force_prop_position_refresh(long, long)
//{
//    mangled_ppc("?force_prop_position_refresh@@YAXJJ@Z");
//};

//short actor_prop_facing_category(union vector3d const *, union vector3d const *, float)
//{
//    mangled_ppc("?actor_prop_facing_category@@YAFPBTvector3d@@0M@Z");
//};

//void actor_prop_state_refresh(long, long, struct actor_position_data const *, struct actor_position_data const *, bool)
//{
//    mangled_ppc("?actor_prop_state_refresh@@YAXJJPBUactor_position_data@@0_N@Z");
//};

//void prop_status_refresh(long, long, struct actor_position_data *, struct actor_position_data const *)
//{
//    mangled_ppc("?prop_status_refresh@@YAXJJPAUactor_position_data@@PBU1@@Z");
//};

//void prop_compute_light_perception_properties(long, long, struct actor_position_data *, struct actor_position_data const *, short *, short *, short *)
//{
//    mangled_ppc("?prop_compute_light_perception_properties@@YAXJJPAUactor_position_data@@PBU1@PAF22@Z");
//};

//void prop_compute_full_perception_properties(long, long, struct actor_position_data *, struct actor_position_data const *, short *, float *, short *, short *, short *)
//{
//    mangled_ppc("?prop_compute_full_perception_properties@@YAXJJPAUactor_position_data@@PBU1@PAFPAM222@Z");
//};

//void prop_hologram_status_refresh(long, long, bool, struct actor_position_data *, struct actor_position_data const *)
//{
//    mangled_ppc("?prop_hologram_status_refresh@@YAXJJ_NPAUactor_position_data@@PBU1@@Z");
//};

//long actor_perception_find_killer_prop_index(long, long, bool)
//{
//    mangled_ppc("?actor_perception_find_killer_prop_index@@YAJJJ_N@Z");
//};

//long actor_perception_find_recent_damaging_prop_ref_index(long, bool)
//{
//    mangled_ppc("?actor_perception_find_recent_damaging_prop_ref_index@@YAJJ_N@Z");
//};

//void actor_perception_forget_recent_damage(long)
//{
//    mangled_ppc("?actor_perception_forget_recent_damage@@YAXJ@Z");
//};

//void actor_perception_unreachable(long, long, bool, bool)
//{
//    mangled_ppc("?actor_perception_unreachable@@YAXJJ_N0@Z");
//};

//void actor_perception_unassailable(long, long, bool, bool)
//{
//    mangled_ppc("?actor_perception_unassailable@@YAXJJ_N0@Z");
//};

//void actor_perception_clear_unassailability(long)
//{
//    mangled_ppc("?actor_perception_clear_unassailability@@YAXJ@Z");
//};

//void actor_compute_prop_salience_all(long)
//{
//    mangled_ppc("?actor_compute_prop_salience_all@@YAXJ@Z");
//};

//void actor_compute_prop_salience(long, long)
//{
//    mangled_ppc("?actor_compute_prop_salience@@YAXJJ@Z");
//};

//void actor_compute_prop_salience(long, long, enum e_prop_stimulus)
//{
//    mangled_ppc("?actor_compute_prop_salience@@YAXJJW4e_prop_stimulus@@@Z");
//};

//void actor_situation_update(long)
//{
//    mangled_ppc("?actor_situation_update@@YAXJ@Z");
//};

//void actor_situation_dialog_update(long, short)
//{
//    mangled_ppc("?actor_situation_dialog_update@@YAXJF@Z");
//};

//void actor_combat_status_update(long)
//{
//    mangled_ppc("?actor_combat_status_update@@YAXJ@Z");
//};

//short calculate_prop_class(long, enum e_ai_posture, struct prop_ref_datum const *)
//{
//    mangled_ppc("?calculate_prop_class@@YAFJW4e_ai_posture@@PBUprop_ref_datum@@@Z");
//};

//void calculate_awareness(struct prop_ref_datum const *, struct prop_view *)
//{
//    mangled_ppc("?calculate_awareness@@YAXPBUprop_ref_datum@@PAUprop_view@@@Z");
//};

//float actor_get_inherent_scariness(long)
//{
//    mangled_ppc("?actor_get_inherent_scariness@@YAMJ@Z");
//};

//bool actor_is_majorly_scary(long)
//{
//    mangled_ppc("?actor_is_majorly_scary@@YA_NJ@Z");
//};

//bool actor_prop_is_majorly_scary(long)
//{
//    mangled_ppc("?actor_prop_is_majorly_scary@@YA_NJ@Z");
//};

//bool actor_prop_has_scary_weapon(long)
//{
//    mangled_ppc("?actor_prop_has_scary_weapon@@YA_NJ@Z");
//};

//bool unit_has_scary_weapon(long)
//{
//    mangled_ppc("?unit_has_scary_weapon@@YA_NJ@Z");
//};

//bool actor_has_scary_weapon(long)
//{
//    mangled_ppc("?actor_has_scary_weapon@@YA_NJ@Z");
//};

//void calculate_scariness(long, struct prop_ref_datum const *, struct prop_datum const *, struct prop_view *)
//{
//    mangled_ppc("?calculate_scariness@@YAXJPBUprop_ref_datum@@PBUprop_datum@@PAUprop_view@@@Z");
//};

//void actor_perception_set_target(long, long)
//{
//    mangled_ppc("?actor_perception_set_target@@YAXJJ@Z");
//};

//void actor_perception_dialogue_handle_target_changed(long, long)
//{
//    mangled_ppc("?actor_perception_dialogue_handle_target_changed@@YAXJJ@Z");
//};

//void actor_perception_discovered_hologram(long, long, enum e_hologram_discovery_type, long)
//{
//    mangled_ppc("?actor_perception_discovered_hologram@@YAXJJW4e_hologram_discovery_type@@J@Z");
//};

//short actor_perception_aiming_vector_test_blockage(union real_point3d const *, union vector3d const *, union real_point3d const *, long, union vector3d *, float *)
//{
//    mangled_ppc("?actor_perception_aiming_vector_test_blockage@@YAFPBTreal_point3d@@PBTvector3d@@0JPAT2@PAM@Z");
//};

//void actor_emotion_update(long)
//{
//    mangled_ppc("?actor_emotion_update@@YAXJ@Z");
//};

//float get_awareness_delta(long, long)
//{
//    mangled_ppc("?get_awareness_delta@@YAMJJ@Z");
//};

//float get_inverse_awareness_delta(long, long)
//{
//    mangled_ppc("?get_inverse_awareness_delta@@YAMJJ@Z");
//};

//void get_active_camouflage_perception(class c_character_runtime_properties<class c_character_perception_properties_internal> const &, float, float, float *, float *)
//{
//    mangled_ppc("?get_active_camouflage_perception@@YAXABV?$c_character_runtime_properties@Vc_character_perception_properties_internal@@@@MMPAM1@Z");
//};

//short target_get_prop_class(struct actor_datum const *)
//{
//    mangled_ppc("?target_get_prop_class@@YAFPBUactor_datum@@@Z");
//};

//void debug_render_vehicle_interest(void)
//{
//    mangled_ppc("?debug_render_vehicle_interest@@YAXXZ");
//};

//public: c_enum<enum e_prop_stimulus, char, -1, 4, struct s_default_enum_string_resolver>::c_enum<enum e_prop_stimulus, char, -1, 4, struct s_default_enum_string_resolver>(enum e_prop_stimulus)
//{
//    mangled_ppc("??0?$c_enum@W4e_prop_stimulus@@D$0?0$03Us_default_enum_string_resolver@@@@QAA@W4e_prop_stimulus@@@Z");
//};

//public: c_character_runtime_properties<class c_character_emotions_properties_internal>::c_character_runtime_properties<class c_character_emotions_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_emotions_properties_internal@@@@QAA@XZ");
//};

//public: c_character_runtime_properties<class c_character_target_properties_internal>::c_character_runtime_properties<class c_character_target_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_target_properties_internal@@@@QAA@XZ");
//};

//void actor_get_character_definition_properties<class c_character_target_properties_internal, 180>(long, class c_character_runtime_properties<class c_character_target_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_target_properties_internal@@$0LE@@@YAXJAAV?$c_character_runtime_properties@Vc_character_target_properties_internal@@@@@Z");
//};

//void actor_get_character_definition_properties<class c_character_emotions_properties_internal, 132>(long, class c_character_runtime_properties<class c_character_emotions_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_emotions_properties_internal@@$0IE@@@YAXJAAV?$c_character_runtime_properties@Vc_character_emotions_properties_internal@@@@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_target_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_target_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_target_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_target_properties_internal@@@@@Z");
//};

//class c_character_target_properties_internal * character_definition_properties_get_direct<class c_character_target_properties_internal, 180>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_target_properties_internal@@$0LE@@@YAPAVc_character_target_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_emotions_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_emotions_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_emotions_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_emotions_properties_internal@@@@@Z");
//};

//class c_character_emotions_properties_internal * character_definition_properties_get_direct<class c_character_emotions_properties_internal, 132>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_emotions_properties_internal@@$0IE@@@YAPAVc_character_emotions_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//struct s_tag_block * character_definition_property_block_get<180>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0LE@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//struct s_tag_block * character_definition_property_block_get<132>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0IE@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//public: void prop_datum::set_object_index(long)
//{
//    mangled_ppc("?set_object_index@prop_datum@@QAAXJ@Z");
//};

