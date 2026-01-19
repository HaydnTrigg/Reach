/* ---------- headers */

#include "omaha\ai\ai_dialogue.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long const *const const g_involuntary_vocalization_names; // "?g_involuntary_vocalization_names@@3QBJB"
// struct s_priority_definition const *const const global_dialogue_priorities; // "?global_dialogue_priorities@@3QBUs_priority_definition@@B"
// except_record_837A8068; // "except_record_837A8068"
// except_record_837AE230; // "except_record_837AE230"
// except_record_837AE7F0; // "except_record_837AE7F0"
// except_record_837AFAC8; // "except_record_837AFAC8"
// except_record_837B5A68; // "except_record_837B5A68"
// char const **g_response_type_names; // "?g_response_type_names@@3PAPBDA"
// char const **g_dialogue_names; // "?g_dialogue_names@@3PAPBDA"
// char const **g_speaker_type_names; // "?g_speaker_type_names@@3PAPBDA"
// char const **g_hostility_type_names; // "?g_hostility_type_names@@3PAPBDA"
// char const **g_damage_category_names; // "?g_damage_category_names@@3PAPBDA"
// char const **g_danger_category_names; // "?g_danger_category_names@@3PAPBDA"
// char const **g_object_type_names; // "?g_object_type_names@@3PAPBDA"
// char const **g_spatial_relation_names; // "?g_spatial_relation_names@@3PAPBDA"
// char const **g_pattern_match_failure_reasons; // "?g_pattern_match_failure_reasons@@3PAPBDA"
// char const **g_pattern_equipment_type_names; // "?g_pattern_equipment_type_names@@3PAPBDA"
// long volatile `void __cdecl character_runtime_properties_copy<class c_character_runtime_properties<class c_character_vocalization_properties_internal>, class c_character_vocalization_properties_internal>(class c_character_runtime_properties<class c_character_vocalization_properties_internal> *, class c_character_vocalization_properties_internal const *)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@???$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_vocalization_properties_internal@@@@Vc_character_vocalization_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_vocalization_properties_internal@@@@PBVc_character_vocalization_properties_internal@@@Z@4JC"
// short (*g_vocalization_log_by_team)[500]; // "?g_vocalization_log_by_team@@3PAY0BPE@FA"
// short *g_vocalization_log; // "?g_vocalization_log@@3PAFA"
// bool g_dialogue_verbose_pattern_errors; // "?g_dialogue_verbose_pattern_errors@@3_NA"
// bool g_dialogue_datamine_enabled; // "?g_dialogue_datamine_enabled@@3_NA"
// bool g_dialogue_datamine_failed_patterns_enabled; // "?g_dialogue_datamine_failed_patterns_enabled@@3_NA"
// bool g_dialogue_log_failed_patterns_enabled; // "?g_dialogue_log_failed_patterns_enabled@@3_NA"
// bool g_dialogue_debug_enabled; // "?g_dialogue_debug_enabled@@3_NA"
// long g_dialogue_debug_specific_vocalization_name; // "?g_dialogue_debug_specific_vocalization_name@@3JA"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_team_dialogue_state_allocator::*)(void *)> g_team_dialogue_state_allocator; // "?g_team_dialogue_state_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_team_dialogue_state_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_vocalization_record_allocator::*)(void *)> g_vocalization_record_allocator; // "?g_vocalization_record_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_vocalization_record_allocator@@YAXPAX@Z@@A"
// class c_dialogue_record *g_dialogue_record; // "?g_dialogue_record@@3PAVc_dialogue_record@@A"
// struct team_dialogue_state *g_team_dialogue_state; // "?g_team_dialogue_state@@3PAUteam_dialogue_state@@A"
// struct s_data_array *vocalization_record_data; // "?vocalization_record_data@@3PAUs_data_array@@A"

// void __tls_set_g_team_dialogue_state_allocator(void *);
// void __tls_set_g_vocalization_record_allocator(void *);
// public: c_dialogue_event::c_dialogue_event(short, long, long, long, short, struct ai_information_data const *);
// public: void c_dialogue_event::reset(void);
// public: void c_dialogue_event::reset_invalid_fields(void);
// void ai_dialogue_initialize(void);
// public: void c_dialogue_record::clear(void);
// void ai_dialogue_initialize_for_new_map(void);
// void ai_dialogue_dispose_from_old_map(void);
// void ai_dialogue_handle_ai_reset(void);
// void ai_dialogue_update(void);
// struct ai_dialogue_definitions * ai_dialogue_globals_get(void);
// void vocalization_pattern_initialize(struct vocalization_pattern *, short, short, long);
// short vocalization_get_ultimate_parent(struct ai_dialogue_definitions const *, short);
// short find_vocalization_by_string_id(struct ai_dialogue_definitions *, long);
// short ai_dialogue_get_involuntary_vocalization_index(short);
// bool actor_grunt(long, short);
// bool actor_vocalize(long, short, short);
// bool actor_scream(long, short);
// void ai_dialogue_event_aggregate_options(class c_dialogue_event *, class c_dialogue_option *, short *, short);
// short ai_dialogue_event(class c_dialogue_option *, short);
// bool ai_dialogue_event(class c_dialogue_event *);
// bool ai_dialogue_test(class c_dialogue_event *);
// void ai_scripting_fire_dialogue_event(long, char const *, long);
// void dialogue_create_pattern_match_failure_string(struct ai_dialogue_definitions *, class c_dialogue_option const *, class c_dialogue_event const *, class c_static_string<512> *);
// void dialogue_create_speaker_failure_string(struct vocalization_pattern const *, char const *, class c_dialogue_event const *, char const *, class c_static_string<512> *);
// void ai_scripting_play_vocalization(long);
// void ai_scripting_play_vocalization_on_team(long, enum e_campaign_team);
// public: void c_dialogue_option::set(class c_dialogue_event const *, short, short, long, long, long, float, enum e_pattern_match_failure_reason);
// long ai_dialogue_find_best_subject_for_dialogue_event(enum e_campaign_team, long, long *, float *);
// float ai_get_max_dialogue_respond_distance(void);
// bool ai_get_player_in_space(void);
// bool ai_dialogue_event_evaluate_pattern(struct ai_dialogue_definitions *, class c_dialogue_event *, short, struct vocalization_pattern *, class c_dialogue_option *, short, short *, bool);
// bool pattern_match_object_type(struct ai_dialogue_definitions const *, struct vocalization_pattern const *, short, short, long, float *, enum e_pattern_match_failure_reason *);
// float ai_get_max_spartan_nearby_distance(struct ai_dialogue_definitions const *);
// bool vehicle_is_turret(long);
// bool pattern_match_ai_type_name(long, long, float *);
// bool pattern_match_spatial(long, long, short, enum e_pattern_match_failure_reason *);
// bool ai_dialogue_event_internal_proxy(struct ai_dialogue_definitions *, class c_dialogue_event *, class c_dialogue_option *, short, short *);
// void ai_dialogue_remove_dialogue_option(class c_dialogue_option *, short, short *);
// bool ai_dialogue_event_internal(struct ai_dialogue_definitions *, class c_dialogue_event *, class c_dialogue_option *, short, short *, bool);
// bool dialogue_speak(struct ai_dialogue_definitions const *, long, class c_dialogue_option const *, long *);
// void ai_dialogue_started(long, struct unit_speech_item *);
// public: void c_dialogue_record::set(short, short, long, long, struct s_game_sound_deterministic_permutation, short, long, long, long, long, bool);
// public: void c_dialogue_record::datamine(void);
// public: c_dialogue_record::c_dialogue_record(void);
// bool actor_should_play_dialogue_animation(long);
// void ai_dialogue_notify(long, short, short, long, struct ai_information_packet *);
// bool dialogue_reply_event(long, long, long, class c_dialogue_option *, long *);
// void dialogue_emotion(long, short, short);
// void ai_dialogue_finished(long, short, short, long, struct ai_information_packet *);
// short dialogue_unit_can_vocalize(struct ai_dialogue_definitions const *, class c_dialogue_event const *, struct vocalization_pattern const *, long, long, long *, float *, enum e_pattern_match_failure_reason *);
// bool actor_can_vocalize(long, class c_dialogue_event const *, struct vocalization const *, enum e_pattern_match_failure_reason *);
// bool dialogue_category_survives_suppression(short);
// float dialogue_player_weighting(long);
// float ai_get_max_dialogue_player_unit_distance(long);
// short dialogue_find_type_by_name(char const *);
// long dialogue_find_speaker(struct ai_dialogue_definitions const *, class c_dialogue_event *, struct vocalization_pattern const *, bool, bool, bool, long *, short *, float *, float *, enum e_pattern_match_failure_reason *);
// long dialogue_find_speaker_vehicle(struct ai_dialogue_definitions const *, class c_dialogue_event *, struct vocalization_pattern const *, bool, long *, short *, float *, float *, enum e_pattern_match_failure_reason *);
// long dialogue_find_speaker_joint(struct ai_dialogue_definitions const *, class c_dialogue_event *, struct vocalization_pattern const *, bool, long *, short *, float *, float *, enum e_pattern_match_failure_reason *);
// long dialogue_find_speaker_clump(struct ai_dialogue_definitions const *, class c_dialogue_event *, struct vocalization_pattern const *, long *, short *, float *, float *, enum e_pattern_match_failure_reason *);
// long dialogue_task_find_speaker(struct ai_dialogue_definitions const *, class c_dialogue_event *, struct vocalization_pattern const *, long *, short *, float *, float *, enum e_pattern_match_failure_reason *);
// bool reply_filter_close(long, struct ai_information_packet *, long);
// long dialogue_get_team_vocalization_delay(struct ai_dialogue_definitions const *, struct team_dialogue_state *, short);
// short dialogue_team_get(enum e_campaign_team);
// struct team_dialogue_state * team_dialogue_state_get(enum e_campaign_team);
// short dialogue_choose_option(class c_dialogue_option *, short);
// class c_dialogue_record * dialogue_record_new(void);
// public: bool c_dialogue_record::valid(void) const;
// void ai_dialogue_records_update(void);
// public: void c_dialogue_record::update(void);
// void ai_dialogue_render_records(void);
// char const * vocalization_get_line(short);
// char const * dialogue_priority_get_name(short);
// short dialogue_priority_get_by_name(char const *);
// void ai_dialogue_type_get_name(short, char *, long);
// void vocalization_get_name(short, char *, long);
// char const * vocalization_get_name_const(short);
// void ai_dialogue_render_player_weights(void);
// void ai_dialogue_log_reset(void);
// void ai_dialogue_log_dump(char const *);
// public: c_character_runtime_properties<class c_character_vocalization_properties_internal>::c_character_runtime_properties<class c_character_vocalization_properties_internal>(void);
// public: bool c_character_runtime_properties<class c_character_vocalization_properties_internal>::valid(void) const;
// public: c_enum<enum e_pattern_match_failure_reason, long, 0, 150, struct s_default_enum_string_resolver>::c_enum<enum e_pattern_match_failure_reason, long, 0, 150, struct s_default_enum_string_resolver>(enum e_pattern_match_failure_reason);
// public: bool c_enum_no_init<enum e_pattern_match_failure_reason, long, 0, 150, struct s_default_enum_string_resolver>::operator==(enum e_pattern_match_failure_reason) const;
// public: bool c_enum_no_init<enum e_task_follow, short, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_task_follow) const;
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: struct s_vocalization_record * c_data_iterator<struct s_vocalization_record>::get_datum(void) const;
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>::valid(void) const;
// public: bool c_flags_no_init<enum e_clump_fought_flags, short, 2, struct s_default_enum_string_resolver>::test(enum e_clump_fought_flags) const;
// void actor_get_character_definition_properties<class c_character_vocalization_properties_internal, 384>(long, class c_character_runtime_properties<class c_character_vocalization_properties_internal> &);
// public: void c_character_runtime_properties<class c_character_vocalization_properties_internal>::set(class c_character_vocalization_properties_internal const *);
// public: void c_character_runtime_properties<class c_character_vocalization_properties_internal>::invalidate(void);
// public: static void c_character_properties_base<class c_character_vocalization_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_vocalization_properties_internal> *);
// public: static bool c_flags_no_init<enum e_clump_fought_flags, short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_clump_fought_flags);
// private: static short c_flags_no_init<enum e_clump_fought_flags, short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_clump_fought_flags);
// bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_vocalization_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_vocalization_properties_internal> &);
// class c_character_vocalization_properties_internal * character_definition_properties_get_direct<class c_character_vocalization_properties_internal, 384>(long, class c_stimulus_flags const *);
// void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_vocalization_properties_internal>, class c_character_vocalization_properties_internal>(class c_character_runtime_properties<class c_character_vocalization_properties_internal> *, class c_character_vocalization_properties_internal const *);
// public: static bool c_character_runtime_properties<class c_character_vocalization_properties_internal>::static_valid(void *);
// struct s_tag_block * character_definition_property_block_get<384>(long, class c_stimulus_flags const *);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>::free_memory(void);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>::valid(void) const;
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>(void);
// void g_team_dialogue_state_allocator::`dynamic atexit destructor'(void);
// void g_vocalization_record_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_team_dialogue_state_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_team_dialogue_state_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_vocalization_record_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_vocalization_record_allocator@@YAXPAX@Z");
//};

//public: c_dialogue_event::c_dialogue_event(short, long, long, long, short, struct ai_information_data const *)
//{
//    mangled_ppc("??0c_dialogue_event@@QAA@FJJJFPBUai_information_data@@@Z");
//};

//public: void c_dialogue_event::reset(void)
//{
//    mangled_ppc("?reset@c_dialogue_event@@QAAXXZ");
//};

//public: void c_dialogue_event::reset_invalid_fields(void)
//{
//    mangled_ppc("?reset_invalid_fields@c_dialogue_event@@QAAXXZ");
//};

//void ai_dialogue_initialize(void)
//{
//    mangled_ppc("?ai_dialogue_initialize@@YAXXZ");
//};

//public: void c_dialogue_record::clear(void)
//{
//    mangled_ppc("?clear@c_dialogue_record@@QAAXXZ");
//};

//void ai_dialogue_initialize_for_new_map(void)
//{
//    mangled_ppc("?ai_dialogue_initialize_for_new_map@@YAXXZ");
//};

//void ai_dialogue_dispose_from_old_map(void)
//{
//    mangled_ppc("?ai_dialogue_dispose_from_old_map@@YAXXZ");
//};

//void ai_dialogue_handle_ai_reset(void)
//{
//    mangled_ppc("?ai_dialogue_handle_ai_reset@@YAXXZ");
//};

//void ai_dialogue_update(void)
//{
//    mangled_ppc("?ai_dialogue_update@@YAXXZ");
//};

//struct ai_dialogue_definitions * ai_dialogue_globals_get(void)
//{
//    mangled_ppc("?ai_dialogue_globals_get@@YAPAUai_dialogue_definitions@@XZ");
//};

//void vocalization_pattern_initialize(struct vocalization_pattern *, short, short, long)
//{
//    mangled_ppc("?vocalization_pattern_initialize@@YAXPAUvocalization_pattern@@FFJ@Z");
//};

//short vocalization_get_ultimate_parent(struct ai_dialogue_definitions const *, short)
//{
//    mangled_ppc("?vocalization_get_ultimate_parent@@YAFPBUai_dialogue_definitions@@F@Z");
//};

//short find_vocalization_by_string_id(struct ai_dialogue_definitions *, long)
//{
//    mangled_ppc("?find_vocalization_by_string_id@@YAFPAUai_dialogue_definitions@@J@Z");
//};

//short ai_dialogue_get_involuntary_vocalization_index(short)
//{
//    mangled_ppc("?ai_dialogue_get_involuntary_vocalization_index@@YAFF@Z");
//};

//bool actor_grunt(long, short)
//{
//    mangled_ppc("?actor_grunt@@YA_NJF@Z");
//};

//bool actor_vocalize(long, short, short)
//{
//    mangled_ppc("?actor_vocalize@@YA_NJFF@Z");
//};

//bool actor_scream(long, short)
//{
//    mangled_ppc("?actor_scream@@YA_NJF@Z");
//};

//void ai_dialogue_event_aggregate_options(class c_dialogue_event *, class c_dialogue_option *, short *, short)
//{
//    mangled_ppc("?ai_dialogue_event_aggregate_options@@YAXPAVc_dialogue_event@@PAVc_dialogue_option@@PAFF@Z");
//};

//short ai_dialogue_event(class c_dialogue_option *, short)
//{
//    mangled_ppc("?ai_dialogue_event@@YAFPAVc_dialogue_option@@F@Z");
//};

//bool ai_dialogue_event(class c_dialogue_event *)
//{
//    mangled_ppc("?ai_dialogue_event@@YA_NPAVc_dialogue_event@@@Z");
//};

//bool ai_dialogue_test(class c_dialogue_event *)
//{
//    mangled_ppc("?ai_dialogue_test@@YA_NPAVc_dialogue_event@@@Z");
//};

//void ai_scripting_fire_dialogue_event(long, char const *, long)
//{
//    mangled_ppc("?ai_scripting_fire_dialogue_event@@YAXJPBDJ@Z");
//};

//void dialogue_create_pattern_match_failure_string(struct ai_dialogue_definitions *, class c_dialogue_option const *, class c_dialogue_event const *, class c_static_string<512> *)
//{
//    mangled_ppc("?dialogue_create_pattern_match_failure_string@@YAXPAUai_dialogue_definitions@@PBVc_dialogue_option@@PBVc_dialogue_event@@PAV?$c_static_string@$0CAA@@@@Z");
//};

//void dialogue_create_speaker_failure_string(struct vocalization_pattern const *, char const *, class c_dialogue_event const *, char const *, class c_static_string<512> *)
//{
//    mangled_ppc("?dialogue_create_speaker_failure_string@@YAXPBUvocalization_pattern@@PBDPBVc_dialogue_event@@1PAV?$c_static_string@$0CAA@@@@Z");
//};

//void ai_scripting_play_vocalization(long)
//{
//    mangled_ppc("?ai_scripting_play_vocalization@@YAXJ@Z");
//};

//void ai_scripting_play_vocalization_on_team(long, enum e_campaign_team)
//{
//    mangled_ppc("?ai_scripting_play_vocalization_on_team@@YAXJW4e_campaign_team@@@Z");
//};

//public: void c_dialogue_option::set(class c_dialogue_event const *, short, short, long, long, long, float, enum e_pattern_match_failure_reason)
//{
//    mangled_ppc("?set@c_dialogue_option@@QAAXPBVc_dialogue_event@@FFJJJMW4e_pattern_match_failure_reason@@@Z");
//};

//long ai_dialogue_find_best_subject_for_dialogue_event(enum e_campaign_team, long, long *, float *)
//{
//    mangled_ppc("?ai_dialogue_find_best_subject_for_dialogue_event@@YAJW4e_campaign_team@@JPAJPAM@Z");
//};

//float ai_get_max_dialogue_respond_distance(void)
//{
//    mangled_ppc("?ai_get_max_dialogue_respond_distance@@YAMXZ");
//};

//bool ai_get_player_in_space(void)
//{
//    mangled_ppc("?ai_get_player_in_space@@YA_NXZ");
//};

//bool ai_dialogue_event_evaluate_pattern(struct ai_dialogue_definitions *, class c_dialogue_event *, short, struct vocalization_pattern *, class c_dialogue_option *, short, short *, bool)
//{
//    mangled_ppc("?ai_dialogue_event_evaluate_pattern@@YA_NPAUai_dialogue_definitions@@PAVc_dialogue_event@@FPAUvocalization_pattern@@PAVc_dialogue_option@@FPAF_N@Z");
//};

//bool pattern_match_object_type(struct ai_dialogue_definitions const *, struct vocalization_pattern const *, short, short, long, float *, enum e_pattern_match_failure_reason *)
//{
//    mangled_ppc("?pattern_match_object_type@@YA_NPBUai_dialogue_definitions@@PBUvocalization_pattern@@FFJPAMPAW4e_pattern_match_failure_reason@@@Z");
//};

//float ai_get_max_spartan_nearby_distance(struct ai_dialogue_definitions const *)
//{
//    mangled_ppc("?ai_get_max_spartan_nearby_distance@@YAMPBUai_dialogue_definitions@@@Z");
//};

//bool vehicle_is_turret(long)
//{
//    mangled_ppc("?vehicle_is_turret@@YA_NJ@Z");
//};

//bool pattern_match_ai_type_name(long, long, float *)
//{
//    mangled_ppc("?pattern_match_ai_type_name@@YA_NJJPAM@Z");
//};

//bool pattern_match_spatial(long, long, short, enum e_pattern_match_failure_reason *)
//{
//    mangled_ppc("?pattern_match_spatial@@YA_NJJFPAW4e_pattern_match_failure_reason@@@Z");
//};

//bool ai_dialogue_event_internal_proxy(struct ai_dialogue_definitions *, class c_dialogue_event *, class c_dialogue_option *, short, short *)
//{
//    mangled_ppc("?ai_dialogue_event_internal_proxy@@YA_NPAUai_dialogue_definitions@@PAVc_dialogue_event@@PAVc_dialogue_option@@FPAF@Z");
//};

//void ai_dialogue_remove_dialogue_option(class c_dialogue_option *, short, short *)
//{
//    mangled_ppc("?ai_dialogue_remove_dialogue_option@@YAXPAVc_dialogue_option@@FPAF@Z");
//};

//bool ai_dialogue_event_internal(struct ai_dialogue_definitions *, class c_dialogue_event *, class c_dialogue_option *, short, short *, bool)
//{
//    mangled_ppc("?ai_dialogue_event_internal@@YA_NPAUai_dialogue_definitions@@PAVc_dialogue_event@@PAVc_dialogue_option@@FPAF_N@Z");
//};

//bool dialogue_speak(struct ai_dialogue_definitions const *, long, class c_dialogue_option const *, long *)
//{
//    mangled_ppc("?dialogue_speak@@YA_NPBUai_dialogue_definitions@@JPBVc_dialogue_option@@PAJ@Z");
//};

//void ai_dialogue_started(long, struct unit_speech_item *)
//{
//    mangled_ppc("?ai_dialogue_started@@YAXJPAUunit_speech_item@@@Z");
//};

//public: void c_dialogue_record::set(short, short, long, long, struct s_game_sound_deterministic_permutation, short, long, long, long, long, bool)
//{
//    mangled_ppc("?set@c_dialogue_record@@QAAXFFJJUs_game_sound_deterministic_permutation@@FJJJJ_N@Z");
//};

//public: void c_dialogue_record::datamine(void)
//{
//    mangled_ppc("?datamine@c_dialogue_record@@QAAXXZ");
//};

//public: c_dialogue_record::c_dialogue_record(void)
//{
//    mangled_ppc("??0c_dialogue_record@@QAA@XZ");
//};

//bool actor_should_play_dialogue_animation(long)
//{
//    mangled_ppc("?actor_should_play_dialogue_animation@@YA_NJ@Z");
//};

//void ai_dialogue_notify(long, short, short, long, struct ai_information_packet *)
//{
//    mangled_ppc("?ai_dialogue_notify@@YAXJFFJPAUai_information_packet@@@Z");
//};

//bool dialogue_reply_event(long, long, long, class c_dialogue_option *, long *)
//{
//    mangled_ppc("?dialogue_reply_event@@YA_NJJJPAVc_dialogue_option@@PAJ@Z");
//};

//void dialogue_emotion(long, short, short)
//{
//    mangled_ppc("?dialogue_emotion@@YAXJFF@Z");
//};

//void ai_dialogue_finished(long, short, short, long, struct ai_information_packet *)
//{
//    mangled_ppc("?ai_dialogue_finished@@YAXJFFJPAUai_information_packet@@@Z");
//};

//short dialogue_unit_can_vocalize(struct ai_dialogue_definitions const *, class c_dialogue_event const *, struct vocalization_pattern const *, long, long, long *, float *, enum e_pattern_match_failure_reason *)
//{
//    mangled_ppc("?dialogue_unit_can_vocalize@@YAFPBUai_dialogue_definitions@@PBVc_dialogue_event@@PBUvocalization_pattern@@JJPAJPAMPAW4e_pattern_match_failure_reason@@@Z");
//};

//bool actor_can_vocalize(long, class c_dialogue_event const *, struct vocalization const *, enum e_pattern_match_failure_reason *)
//{
//    mangled_ppc("?actor_can_vocalize@@YA_NJPBVc_dialogue_event@@PBUvocalization@@PAW4e_pattern_match_failure_reason@@@Z");
//};

//bool dialogue_category_survives_suppression(short)
//{
//    mangled_ppc("?dialogue_category_survives_suppression@@YA_NF@Z");
//};

//float dialogue_player_weighting(long)
//{
//    mangled_ppc("?dialogue_player_weighting@@YAMJ@Z");
//};

//float ai_get_max_dialogue_player_unit_distance(long)
//{
//    mangled_ppc("?ai_get_max_dialogue_player_unit_distance@@YAMJ@Z");
//};

//short dialogue_find_type_by_name(char const *)
//{
//    mangled_ppc("?dialogue_find_type_by_name@@YAFPBD@Z");
//};

//long dialogue_find_speaker(struct ai_dialogue_definitions const *, class c_dialogue_event *, struct vocalization_pattern const *, bool, bool, bool, long *, short *, float *, float *, enum e_pattern_match_failure_reason *)
//{
//    mangled_ppc("?dialogue_find_speaker@@YAJPBUai_dialogue_definitions@@PAVc_dialogue_event@@PBUvocalization_pattern@@_N33PAJPAFPAM6PAW4e_pattern_match_failure_reason@@@Z");
//};

//long dialogue_find_speaker_vehicle(struct ai_dialogue_definitions const *, class c_dialogue_event *, struct vocalization_pattern const *, bool, long *, short *, float *, float *, enum e_pattern_match_failure_reason *)
//{
//    mangled_ppc("?dialogue_find_speaker_vehicle@@YAJPBUai_dialogue_definitions@@PAVc_dialogue_event@@PBUvocalization_pattern@@_NPAJPAFPAM6PAW4e_pattern_match_failure_reason@@@Z");
//};

//long dialogue_find_speaker_joint(struct ai_dialogue_definitions const *, class c_dialogue_event *, struct vocalization_pattern const *, bool, long *, short *, float *, float *, enum e_pattern_match_failure_reason *)
//{
//    mangled_ppc("?dialogue_find_speaker_joint@@YAJPBUai_dialogue_definitions@@PAVc_dialogue_event@@PBUvocalization_pattern@@_NPAJPAFPAM6PAW4e_pattern_match_failure_reason@@@Z");
//};

//long dialogue_find_speaker_clump(struct ai_dialogue_definitions const *, class c_dialogue_event *, struct vocalization_pattern const *, long *, short *, float *, float *, enum e_pattern_match_failure_reason *)
//{
//    mangled_ppc("?dialogue_find_speaker_clump@@YAJPBUai_dialogue_definitions@@PAVc_dialogue_event@@PBUvocalization_pattern@@PAJPAFPAM5PAW4e_pattern_match_failure_reason@@@Z");
//};

//long dialogue_task_find_speaker(struct ai_dialogue_definitions const *, class c_dialogue_event *, struct vocalization_pattern const *, long *, short *, float *, float *, enum e_pattern_match_failure_reason *)
//{
//    mangled_ppc("?dialogue_task_find_speaker@@YAJPBUai_dialogue_definitions@@PAVc_dialogue_event@@PBUvocalization_pattern@@PAJPAFPAM5PAW4e_pattern_match_failure_reason@@@Z");
//};

//bool reply_filter_close(long, struct ai_information_packet *, long)
//{
//    mangled_ppc("?reply_filter_close@@YA_NJPAUai_information_packet@@J@Z");
//};

//long dialogue_get_team_vocalization_delay(struct ai_dialogue_definitions const *, struct team_dialogue_state *, short)
//{
//    mangled_ppc("?dialogue_get_team_vocalization_delay@@YAJPBUai_dialogue_definitions@@PAUteam_dialogue_state@@F@Z");
//};

//short dialogue_team_get(enum e_campaign_team)
//{
//    mangled_ppc("?dialogue_team_get@@YAFW4e_campaign_team@@@Z");
//};

//struct team_dialogue_state * team_dialogue_state_get(enum e_campaign_team)
//{
//    mangled_ppc("?team_dialogue_state_get@@YAPAUteam_dialogue_state@@W4e_campaign_team@@@Z");
//};

//short dialogue_choose_option(class c_dialogue_option *, short)
//{
//    mangled_ppc("?dialogue_choose_option@@YAFPAVc_dialogue_option@@F@Z");
//};

//class c_dialogue_record * dialogue_record_new(void)
//{
//    mangled_ppc("?dialogue_record_new@@YAPAVc_dialogue_record@@XZ");
//};

//public: bool c_dialogue_record::valid(void) const
//{
//    mangled_ppc("?valid@c_dialogue_record@@QBA_NXZ");
//};

//void ai_dialogue_records_update(void)
//{
//    mangled_ppc("?ai_dialogue_records_update@@YAXXZ");
//};

//public: void c_dialogue_record::update(void)
//{
//    mangled_ppc("?update@c_dialogue_record@@QAAXXZ");
//};

//void ai_dialogue_render_records(void)
//{
//    mangled_ppc("?ai_dialogue_render_records@@YAXXZ");
//};

//char const * vocalization_get_line(short)
//{
//    mangled_ppc("?vocalization_get_line@@YAPBDF@Z");
//};

//char const * dialogue_priority_get_name(short)
//{
//    mangled_ppc("?dialogue_priority_get_name@@YAPBDF@Z");
//};

//short dialogue_priority_get_by_name(char const *)
//{
//    mangled_ppc("?dialogue_priority_get_by_name@@YAFPBD@Z");
//};

//void ai_dialogue_type_get_name(short, char *, long)
//{
//    mangled_ppc("?ai_dialogue_type_get_name@@YAXFPADJ@Z");
//};

//void vocalization_get_name(short, char *, long)
//{
//    mangled_ppc("?vocalization_get_name@@YAXFPADJ@Z");
//};

//char const * vocalization_get_name_const(short)
//{
//    mangled_ppc("?vocalization_get_name_const@@YAPBDF@Z");
//};

//void ai_dialogue_render_player_weights(void)
//{
//    mangled_ppc("?ai_dialogue_render_player_weights@@YAXXZ");
//};

//void ai_dialogue_log_reset(void)
//{
//    mangled_ppc("?ai_dialogue_log_reset@@YAXXZ");
//};

//void ai_dialogue_log_dump(char const *)
//{
//    mangled_ppc("?ai_dialogue_log_dump@@YAXPBD@Z");
//};

//public: c_character_runtime_properties<class c_character_vocalization_properties_internal>::c_character_runtime_properties<class c_character_vocalization_properties_internal>(void)
//{
//    mangled_ppc("??0?$c_character_runtime_properties@Vc_character_vocalization_properties_internal@@@@QAA@XZ");
//};

//public: bool c_character_runtime_properties<class c_character_vocalization_properties_internal>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_character_runtime_properties@Vc_character_vocalization_properties_internal@@@@QBA_NXZ");
//};

//public: c_enum<enum e_pattern_match_failure_reason, long, 0, 150, struct s_default_enum_string_resolver>::c_enum<enum e_pattern_match_failure_reason, long, 0, 150, struct s_default_enum_string_resolver>(enum e_pattern_match_failure_reason)
//{
//    mangled_ppc("??0?$c_enum@W4e_pattern_match_failure_reason@@J$0A@$0JG@Us_default_enum_string_resolver@@@@QAA@W4e_pattern_match_failure_reason@@@Z");
//};

//public: bool c_enum_no_init<enum e_pattern_match_failure_reason, long, 0, 150, struct s_default_enum_string_resolver>::operator==(enum e_pattern_match_failure_reason) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_pattern_match_failure_reason@@J$0A@$0JG@Us_default_enum_string_resolver@@@@QBA_NW4e_pattern_match_failure_reason@@@Z");
//};

//public: bool c_enum_no_init<enum e_task_follow, short, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_task_follow) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_task_follow@@F$0A@$04Us_default_enum_string_resolver@@@@QBA_NW4e_task_follow@@@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_team_dialogue_state_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: struct s_vocalization_record * c_data_iterator<struct s_vocalization_record>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Us_vocalization_record@@@@QBAPAUs_vocalization_record@@XZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_team_dialogue_state_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_clump_fought_flags, short, 2, struct s_default_enum_string_resolver>::test(enum e_clump_fought_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_clump_fought_flags@@F$01Us_default_enum_string_resolver@@@@QBA_NW4e_clump_fought_flags@@@Z");
//};

//void actor_get_character_definition_properties<class c_character_vocalization_properties_internal, 384>(long, class c_character_runtime_properties<class c_character_vocalization_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_character_definition_properties@Vc_character_vocalization_properties_internal@@$0BIA@@@YAXJAAV?$c_character_runtime_properties@Vc_character_vocalization_properties_internal@@@@@Z");
//};

//public: void c_character_runtime_properties<class c_character_vocalization_properties_internal>::set(class c_character_vocalization_properties_internal const *)
//{
//    mangled_ppc("?set@?$c_character_runtime_properties@Vc_character_vocalization_properties_internal@@@@QAAXPBVc_character_vocalization_properties_internal@@@Z");
//};

//public: void c_character_runtime_properties<class c_character_vocalization_properties_internal>::invalidate(void)
//{
//    mangled_ppc("?invalidate@?$c_character_runtime_properties@Vc_character_vocalization_properties_internal@@@@QAAXXZ");
//};

//public: static void c_character_properties_base<class c_character_vocalization_properties_internal>::apply_modifiers(class c_character_properties_base<class c_character_vocalization_properties_internal> *)
//{
//    mangled_ppc("?apply_modifiers@?$c_character_properties_base@Vc_character_vocalization_properties_internal@@@@SAXPAV1@@Z");
//};

//public: static bool c_flags_no_init<enum e_clump_fought_flags, short, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_clump_fought_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_clump_fought_flags@@F$01Us_default_enum_string_resolver@@@@SA_NW4e_clump_fought_flags@@@Z");
//};

//private: static short c_flags_no_init<enum e_clump_fought_flags, short, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_clump_fought_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_clump_fought_flags@@F$01Us_default_enum_string_resolver@@@@CAFW4e_clump_fought_flags@@@Z");
//};

//bool actor_get_cached_character_properties<class c_character_runtime_properties<class c_character_vocalization_properties_internal> >(long, long, class c_character_runtime_properties<class c_character_vocalization_properties_internal> &)
//{
//    mangled_ppc("??$actor_get_cached_character_properties@V?$c_character_runtime_properties@Vc_character_vocalization_properties_internal@@@@@@YA_NJJAAV?$c_character_runtime_properties@Vc_character_vocalization_properties_internal@@@@@Z");
//};

//class c_character_vocalization_properties_internal * character_definition_properties_get_direct<class c_character_vocalization_properties_internal, 384>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Vc_character_vocalization_properties_internal@@$0BIA@@@YAPAVc_character_vocalization_properties_internal@@JPBVc_stimulus_flags@@@Z");
//};

//void character_runtime_properties_copy<class c_character_runtime_properties<class c_character_vocalization_properties_internal>, class c_character_vocalization_properties_internal>(class c_character_runtime_properties<class c_character_vocalization_properties_internal> *, class c_character_vocalization_properties_internal const *)
//{
//    mangled_ppc("??$character_runtime_properties_copy@V?$c_character_runtime_properties@Vc_character_vocalization_properties_internal@@@@Vc_character_vocalization_properties_internal@@@@YAXPAV?$c_character_runtime_properties@Vc_character_vocalization_properties_internal@@@@PBVc_character_vocalization_properties_internal@@@Z");
//};

//public: static bool c_character_runtime_properties<class c_character_vocalization_properties_internal>::static_valid(void *)
//{
//    mangled_ppc("?static_valid@?$c_character_runtime_properties@Vc_character_vocalization_properties_internal@@@@SA_NPAX@Z");
//};

//struct s_tag_block * character_definition_property_block_get<384>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0BIA@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_team_dialogue_state_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_team_dialogue_state_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_team_dialogue_state_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_team_dialogue_state_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_vocalization_record_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_vocalization_record_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_vocalization_record_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_vocalization_record_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_vocalization_record_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_vocalization_record_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_team_dialogue_state_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_team_dialogue_state_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_vocalization_record_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_vocalization_record_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_team_dialogue_state_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_team_dialogue_state_allocator@@YAXXZ");
//};

//void g_vocalization_record_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_vocalization_record_allocator@@YAXXZ");
//};

