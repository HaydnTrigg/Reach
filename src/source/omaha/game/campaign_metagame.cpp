/* ---------- headers */

#include "omaha\game\campaign_metagame.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_survival_round_properties, 3>::k_element_count; // "?k_element_count@?$s_static_array@Us_survival_round_properties@@$02@@2JB"
// public: static long const s_static_array<struct s_custom_skull, 3>::k_element_count; // "?k_element_count@?$s_static_array@Us_custom_skull@@$02@@2JB"
// char const **global_skull_names; // "?global_skull_names@@3PAPBDA"
// bool debug_skulls; // "?debug_skulls@@3_NA"
// bool debug_campaign_metagame_verbose; // "?debug_campaign_metagame_verbose@@3_NA"
// bool campaign_metagame_datamine; // "?campaign_metagame_datamine@@3_NA"
// bool chud_debug_metagame; // "?chud_debug_metagame@@3_NA"
// bool debug_campaign_metagame; // "?debug_campaign_metagame@@3_NA"
// class s_static_array<struct c_status_line, 16> g_campaign_metagame_status_lines; // "?g_campaign_metagame_status_lines@@3V?$s_static_array@Uc_status_line@@$0BA@@@A"
// class t_restricted_allocation_manager<1, 0, 0, void (__cdecl __tls_set_g_campaign_metagame_allocator::*)(void *)> g_campaign_metagame_allocator; // "?g_campaign_metagame_allocator@@3V?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_campaign_metagame_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<5, 0, 0, void (__cdecl __tls_set_g_campaign_metagame_secondary_allocator::*)(void *)> g_campaign_metagame_secondary_allocator; // "?g_campaign_metagame_secondary_allocator@@3V?$t_restricted_allocation_manager@$04$0A@$0A@$1?__tls_set_g_campaign_metagame_secondary_allocator@@YAXPAX@Z@@A"
// struct s_campaign_metagame_runtime_globals *g_campaign_metagame_runtime_globals; // "?g_campaign_metagame_runtime_globals@@3PAUs_campaign_metagame_runtime_globals@@A"
// struct s_campaign_metagame_runtime_globals_secondary *g_campaign_metagame_runtime_globals_secondary; // "?g_campaign_metagame_runtime_globals_secondary@@3PAUs_campaign_metagame_runtime_globals_secondary@@A"

// void __tls_set_g_campaign_metagame_allocator(void *);
// void __tls_set_g_campaign_metagame_secondary_allocator(void *);
// void campaign_metagame_initialize(void);
// void campaign_metagame_dispose(void);
// void campaign_metagame_initialize_for_new_map(void);
// void campaign_metagame_dispose_from_old_map(void);
// void campaign_metagame_time_pause(bool);
// void campaign_metagame_award_points_to_player(long, long);
// void campaign_metagame_award_points(long, long);
// void campaign_metagame_award_skull(long, enum e_game_skulls);
// void campaign_metagame_award_campaign_completion_achievements(enum e_controller_index);
// enum e_campaign_difficulty_level & operator++(enum e_campaign_difficulty_level &);
// void campaign_metagame_react_to_new_completed_level(enum e_controller_index, enum e_map_id, enum e_campaign_difficulty_level);
// bool campaign_metagame_enabled(void);
// void campaign_metagame_update(void);
// void campaign_metagame_handle_incident_begin(void);
// void campaign_metagame_handle_incident_end(void);
// void campaign_metagame_handle_incident(long, long, long, long, long, struct s_damage_reporting_info const &);
// long campaign_metagame_get_player_score(long);
// long campaign_metagame_get_team_score(enum e_multiplayer_team);
// void render_debug_campaign_metagame(void);
// struct s_campaign_metagame_bucket const * campaign_metagame_object_bucket_get(long);
// struct s_campaign_metagame_runtime_globals const * campaign_metagame_runtime_globals_get(void);
// struct s_campaign_metagame_runtime_globals_secondary const * campaign_metagame_runtime_globals_secondary_get(void);
// enum e_campaign_metagame_bucket_type campaign_metagame_bucket_type_get(long);
// long campaign_metagame_globals_player_get_player_index(struct s_player_identifier const *);
// long campaign_metagame_globals_secondary_player_get_player_index(struct s_player_identifier const *);
// struct s_metagame_state * metagame_state_get_or_create(long);
// struct s_metagame_state * metagame_state_try_and_get(long);
// struct s_metagame_state_secondary * metagame_state_secondary_get_or_create(long);
// struct s_metagame_state_secondary * metagame_state_secondary_try_and_get(long);
// float campaign_metagame_scenario_completion_multiplier_get(long, float *);
// float campaign_metagame_scenario_difficulty_multiplier_get(enum e_campaign_difficulty_level);
// float campaign_metagame_scenario_difficulty_multiplier_get(void);
// float campaign_metagame_scenario_skull_multiplier_get(enum e_game_skulls);
// float campaign_metagame_scenario_skull_multiplier_get(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>);
// float campaign_metagame_scenario_skull_multiplier_get(void);
// float campaign_metagame_scenario_subtotal_multiplier_get(void);
// void campaign_metagame_finalize(void);
// void campaign_metagame_initialize_before_film_persisted_subsection(long);
// void campaign_metagame_save_to_game_state(long);
// void campaign_metagame_initialize_for_saved_game(long);
// void campaign_metagame_initialize_after_film_persisted_subsection(long);
// void campaign_metagame_get_hud_interface_state(enum e_output_user_index, struct s_campaign_metagame_interface_state *);
// public: unsigned char c_game_engine_miscellaneous_options::get_round_limit(void) const;
// public: class c_game_engine_miscellaneous_options const * c_game_engine_base_variant::get_miscellaneous_options(void) const;
// public: enum e_campaign_metagame_bucket_type c_enum_no_init<enum e_campaign_metagame_bucket_type, char, 0, 35, struct s_default_enum_string_resolver>::operator enum e_campaign_metagame_bucket_type(void) const;
// public: enum e_campaign_metagame_bucket_class c_enum_no_init<enum e_campaign_metagame_bucket_class, char, 0, 8, struct s_default_enum_string_resolver>::operator enum e_campaign_metagame_bucket_class(void) const;
// public: c_enum<enum e_campaign_metagame_damage_event_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_campaign_metagame_damage_event_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_campaign_metagame_damage_event_type);
// public: enum e_campaign_metagame_damage_event_type c_enum_no_init<enum e_campaign_metagame_damage_event_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_campaign_metagame_damage_event_type(void) const;
// public: static long s_static_array<struct s_metagame_state, 4>::get_count(void);
// public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void * t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>::valid(void) const;
// public: bool t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>::valid(void) const;
// public: bool c_flags_no_init<enum s_campaign_metagame_runtime_globals::e_metagame_flags, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum s_campaign_metagame_runtime_globals::e_metagame_flags) const;
// public: void c_flags_no_init<enum s_campaign_metagame_runtime_globals::e_metagame_flags, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum s_campaign_metagame_runtime_globals::e_metagame_flags, bool);
// public: void c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::set(enum e_game_skulls, bool);
// bool operator!=<enum e_achievement>(enum e_achievement const &, enum e_none_sentinel const &);
// public: struct c_status_line & s_static_array<struct c_status_line, 16>::operator[]<int>(int);
// public: struct s_campaign_metagame_damage_event & s_static_array<struct s_campaign_metagame_damage_event, 3>::operator[]<long>(long);
// public: struct s_campaign_metagame_damage_event & s_static_array<struct s_campaign_metagame_damage_event, 3>::operator[]<short>(short);
// struct s_campaign_metagame_bucket * character_definition_properties_get_direct<struct s_campaign_metagame_bucket, 588>(long, class c_stimulus_flags const *);
// long campaign_metagame_player_find_by_identifier<struct s_campaign_metagame_runtime_globals>(struct s_campaign_metagame_runtime_globals const *, struct s_player_identifier const *);
// long campaign_metagame_player_find_by_identifier<struct s_campaign_metagame_runtime_globals_secondary>(struct s_campaign_metagame_runtime_globals_secondary const *, struct s_player_identifier const *);
// struct s_metagame_state * template_metagame_state_get<struct s_metagame_state, struct s_campaign_metagame_runtime_globals>(struct s_campaign_metagame_runtime_globals *, long, bool);
// struct s_metagame_state_secondary * template_metagame_state_get<struct s_metagame_state_secondary, struct s_campaign_metagame_runtime_globals_secondary>(struct s_campaign_metagame_runtime_globals_secondary *, long, bool);
// public: struct s_metagame_state & s_static_array<struct s_metagame_state, 4>::operator[]<short>(short);
// public: struct s_metagame_state_secondary & s_static_array<struct s_metagame_state_secondary, 4>::operator[]<short>(short);
// public: struct s_campaign_metagame_interface_state::s_player_data & s_static_array<struct s_campaign_metagame_interface_state::s_player_data, 4>::operator[]<long>(long);
// public: struct s_campaign_metagame_interface_state::s_team_data & s_static_array<struct s_campaign_metagame_interface_state::s_team_data, 8>::operator[]<enum e_multiplayer_team>(enum e_multiplayer_team);
// public: struct s_campaign_metagame_interface_state::s_team_data & s_static_array<struct s_campaign_metagame_interface_state::s_team_data, 8>::operator[]<int>(int);
// public: struct s_campaign_metagame_interface_state::s_team_data & s_static_array<struct s_campaign_metagame_interface_state::s_team_data, 8>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum s_campaign_metagame_runtime_globals::e_metagame_flags, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum s_campaign_metagame_runtime_globals::e_metagame_flags);
// private: static unsigned char c_flags_no_init<enum s_campaign_metagame_runtime_globals::e_metagame_flags, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum s_campaign_metagame_runtime_globals::e_metagame_flags);
// bool operator==<enum e_achievement>(enum e_achievement const &, enum e_none_sentinel const &);
// public: static bool s_static_array<struct c_status_line, 16>::valid<int>(int);
// public: static bool s_static_array<struct s_campaign_metagame_damage_event, 3>::valid<long>(long);
// public: static bool s_static_array<struct s_campaign_metagame_damage_event, 3>::valid<short>(short);
// struct s_tag_block * character_definition_property_block_get<588>(long, class c_stimulus_flags const *);
// public: struct s_metagame_state const & s_static_array<struct s_metagame_state, 4>::operator[]<long>(long) const;
// public: struct s_metagame_state_secondary const & s_static_array<struct s_metagame_state_secondary, 4>::operator[]<long>(long) const;
// public: struct s_metagame_state & s_static_array<struct s_metagame_state, 4>::operator[]<long>(long);
// public: struct s_metagame_state_secondary & s_static_array<struct s_metagame_state_secondary, 4>::operator[]<long>(long);
// public: static bool s_static_array<struct s_metagame_state, 4>::valid<short>(short);
// public: static bool s_static_array<struct s_metagame_state_secondary, 4>::valid<short>(short);
// public: static bool s_static_array<struct s_campaign_metagame_interface_state::s_player_data, 4>::valid<long>(long);
// public: static bool s_static_array<struct s_campaign_metagame_interface_state::s_team_data, 8>::valid<enum e_multiplayer_team>(enum e_multiplayer_team);
// public: static bool s_static_array<struct s_campaign_metagame_interface_state::s_team_data, 8>::valid<int>(int);
// public: static bool s_static_array<struct s_campaign_metagame_interface_state::s_team_data, 8>::valid<long>(long);
// public: static bool s_static_array<struct s_metagame_state, 4>::valid<long>(long);
// public: static bool s_static_array<struct s_metagame_state_secondary, 4>::valid<long>(long);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>::t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>::~t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>(void);
// void g_campaign_metagame_allocator::`dynamic atexit destructor'(void);
// void g_campaign_metagame_secondary_allocator::`dynamic atexit destructor'(void);

//void __tls_set_g_campaign_metagame_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_campaign_metagame_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_campaign_metagame_secondary_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_campaign_metagame_secondary_allocator@@YAXPAX@Z");
//};

//void campaign_metagame_initialize(void)
//{
//    mangled_ppc("?campaign_metagame_initialize@@YAXXZ");
//};

//void campaign_metagame_dispose(void)
//{
//    mangled_ppc("?campaign_metagame_dispose@@YAXXZ");
//};

//void campaign_metagame_initialize_for_new_map(void)
//{
//    mangled_ppc("?campaign_metagame_initialize_for_new_map@@YAXXZ");
//};

//void campaign_metagame_dispose_from_old_map(void)
//{
//    mangled_ppc("?campaign_metagame_dispose_from_old_map@@YAXXZ");
//};

//void campaign_metagame_time_pause(bool)
//{
//    mangled_ppc("?campaign_metagame_time_pause@@YAX_N@Z");
//};

//void campaign_metagame_award_points_to_player(long, long)
//{
//    mangled_ppc("?campaign_metagame_award_points_to_player@@YAXJJ@Z");
//};

//void campaign_metagame_award_points(long, long)
//{
//    mangled_ppc("?campaign_metagame_award_points@@YAXJJ@Z");
//};

//void campaign_metagame_award_skull(long, enum e_game_skulls)
//{
//    mangled_ppc("?campaign_metagame_award_skull@@YAXJW4e_game_skulls@@@Z");
//};

//void campaign_metagame_award_campaign_completion_achievements(enum e_controller_index)
//{
//    mangled_ppc("?campaign_metagame_award_campaign_completion_achievements@@YAXW4e_controller_index@@@Z");
//};

//enum e_campaign_difficulty_level & operator++(enum e_campaign_difficulty_level &)
//{
//    mangled_ppc("??E@YAAAW4e_campaign_difficulty_level@@AAW40@@Z");
//};

//void campaign_metagame_react_to_new_completed_level(enum e_controller_index, enum e_map_id, enum e_campaign_difficulty_level)
//{
//    mangled_ppc("?campaign_metagame_react_to_new_completed_level@@YAXW4e_controller_index@@W4e_map_id@@W4e_campaign_difficulty_level@@@Z");
//};

//bool campaign_metagame_enabled(void)
//{
//    mangled_ppc("?campaign_metagame_enabled@@YA_NXZ");
//};

//void campaign_metagame_update(void)
//{
//    mangled_ppc("?campaign_metagame_update@@YAXXZ");
//};

//void campaign_metagame_handle_incident_begin(void)
//{
//    mangled_ppc("?campaign_metagame_handle_incident_begin@@YAXXZ");
//};

//void campaign_metagame_handle_incident_end(void)
//{
//    mangled_ppc("?campaign_metagame_handle_incident_end@@YAXXZ");
//};

//void campaign_metagame_handle_incident(long, long, long, long, long, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?campaign_metagame_handle_incident@@YAXJJJJJABUs_damage_reporting_info@@@Z");
//};

//long campaign_metagame_get_player_score(long)
//{
//    mangled_ppc("?campaign_metagame_get_player_score@@YAJJ@Z");
//};

//long campaign_metagame_get_team_score(enum e_multiplayer_team)
//{
//    mangled_ppc("?campaign_metagame_get_team_score@@YAJW4e_multiplayer_team@@@Z");
//};

//void render_debug_campaign_metagame(void)
//{
//    mangled_ppc("?render_debug_campaign_metagame@@YAXXZ");
//};

//struct s_campaign_metagame_bucket const * campaign_metagame_object_bucket_get(long)
//{
//    mangled_ppc("?campaign_metagame_object_bucket_get@@YAPBUs_campaign_metagame_bucket@@J@Z");
//};

//struct s_campaign_metagame_runtime_globals const * campaign_metagame_runtime_globals_get(void)
//{
//    mangled_ppc("?campaign_metagame_runtime_globals_get@@YAPBUs_campaign_metagame_runtime_globals@@XZ");
//};

//struct s_campaign_metagame_runtime_globals_secondary const * campaign_metagame_runtime_globals_secondary_get(void)
//{
//    mangled_ppc("?campaign_metagame_runtime_globals_secondary_get@@YAPBUs_campaign_metagame_runtime_globals_secondary@@XZ");
//};

//enum e_campaign_metagame_bucket_type campaign_metagame_bucket_type_get(long)
//{
//    mangled_ppc("?campaign_metagame_bucket_type_get@@YA?AW4e_campaign_metagame_bucket_type@@J@Z");
//};

//long campaign_metagame_globals_player_get_player_index(struct s_player_identifier const *)
//{
//    mangled_ppc("?campaign_metagame_globals_player_get_player_index@@YAJPBUs_player_identifier@@@Z");
//};

//long campaign_metagame_globals_secondary_player_get_player_index(struct s_player_identifier const *)
//{
//    mangled_ppc("?campaign_metagame_globals_secondary_player_get_player_index@@YAJPBUs_player_identifier@@@Z");
//};

//struct s_metagame_state * metagame_state_get_or_create(long)
//{
//    mangled_ppc("?metagame_state_get_or_create@@YAPAUs_metagame_state@@J@Z");
//};

//struct s_metagame_state * metagame_state_try_and_get(long)
//{
//    mangled_ppc("?metagame_state_try_and_get@@YAPAUs_metagame_state@@J@Z");
//};

//struct s_metagame_state_secondary * metagame_state_secondary_get_or_create(long)
//{
//    mangled_ppc("?metagame_state_secondary_get_or_create@@YAPAUs_metagame_state_secondary@@J@Z");
//};

//struct s_metagame_state_secondary * metagame_state_secondary_try_and_get(long)
//{
//    mangled_ppc("?metagame_state_secondary_try_and_get@@YAPAUs_metagame_state_secondary@@J@Z");
//};

//float campaign_metagame_scenario_completion_multiplier_get(long, float *)
//{
//    mangled_ppc("?campaign_metagame_scenario_completion_multiplier_get@@YAMJPAM@Z");
//};

//float campaign_metagame_scenario_difficulty_multiplier_get(enum e_campaign_difficulty_level)
//{
//    mangled_ppc("?campaign_metagame_scenario_difficulty_multiplier_get@@YAMW4e_campaign_difficulty_level@@@Z");
//};

//float campaign_metagame_scenario_difficulty_multiplier_get(void)
//{
//    mangled_ppc("?campaign_metagame_scenario_difficulty_multiplier_get@@YAMXZ");
//};

//float campaign_metagame_scenario_skull_multiplier_get(enum e_game_skulls)
//{
//    mangled_ppc("?campaign_metagame_scenario_skull_multiplier_get@@YAMW4e_game_skulls@@@Z");
//};

//float campaign_metagame_scenario_skull_multiplier_get(class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?campaign_metagame_scenario_skull_multiplier_get@@YAMV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//float campaign_metagame_scenario_skull_multiplier_get(void)
//{
//    mangled_ppc("?campaign_metagame_scenario_skull_multiplier_get@@YAMXZ");
//};

//float campaign_metagame_scenario_subtotal_multiplier_get(void)
//{
//    mangled_ppc("?campaign_metagame_scenario_subtotal_multiplier_get@@YAMXZ");
//};

//void campaign_metagame_finalize(void)
//{
//    mangled_ppc("?campaign_metagame_finalize@@YAXXZ");
//};

//void campaign_metagame_initialize_before_film_persisted_subsection(long)
//{
//    mangled_ppc("?campaign_metagame_initialize_before_film_persisted_subsection@@YAXJ@Z");
//};

//void campaign_metagame_save_to_game_state(long)
//{
//    mangled_ppc("?campaign_metagame_save_to_game_state@@YAXJ@Z");
//};

//void campaign_metagame_initialize_for_saved_game(long)
//{
//    mangled_ppc("?campaign_metagame_initialize_for_saved_game@@YAXJ@Z");
//};

//void campaign_metagame_initialize_after_film_persisted_subsection(long)
//{
//    mangled_ppc("?campaign_metagame_initialize_after_film_persisted_subsection@@YAXJ@Z");
//};

//void campaign_metagame_get_hud_interface_state(enum e_output_user_index, struct s_campaign_metagame_interface_state *)
//{
//    mangled_ppc("?campaign_metagame_get_hud_interface_state@@YAXW4e_output_user_index@@PAUs_campaign_metagame_interface_state@@@Z");
//};

//public: unsigned char c_game_engine_miscellaneous_options::get_round_limit(void) const
//{
//    mangled_ppc("?get_round_limit@c_game_engine_miscellaneous_options@@QBAEXZ");
//};

//public: class c_game_engine_miscellaneous_options const * c_game_engine_base_variant::get_miscellaneous_options(void) const
//{
//    mangled_ppc("?get_miscellaneous_options@c_game_engine_base_variant@@QBAPBVc_game_engine_miscellaneous_options@@XZ");
//};

//public: enum e_campaign_metagame_bucket_type c_enum_no_init<enum e_campaign_metagame_bucket_type, char, 0, 35, struct s_default_enum_string_resolver>::operator enum e_campaign_metagame_bucket_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_campaign_metagame_bucket_type@@D$0A@$0CD@Us_default_enum_string_resolver@@@@QBA?AW4e_campaign_metagame_bucket_type@@XZ");
//};

//public: enum e_campaign_metagame_bucket_class c_enum_no_init<enum e_campaign_metagame_bucket_class, char, 0, 8, struct s_default_enum_string_resolver>::operator enum e_campaign_metagame_bucket_class(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_campaign_metagame_bucket_class@@D$0A@$07Us_default_enum_string_resolver@@@@QBA?AW4e_campaign_metagame_bucket_class@@XZ");
//};

//public: c_enum<enum e_campaign_metagame_damage_event_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_campaign_metagame_damage_event_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_campaign_metagame_damage_event_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_campaign_metagame_damage_event_type@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_campaign_metagame_damage_event_type@@@Z");
//};

//public: enum e_campaign_metagame_damage_event_type c_enum_no_init<enum e_campaign_metagame_damage_event_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_campaign_metagame_damage_event_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_campaign_metagame_damage_event_type@@E$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_campaign_metagame_damage_event_type@@XZ");
//};

//public: static long s_static_array<struct s_metagame_state, 4>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_metagame_state@@$03@@SAJXZ");
//};

//public: void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_campaign_metagame_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void * t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$04$0A@$0A@$1?__tls_set_g_campaign_metagame_secondary_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_campaign_metagame_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$04$0A@$0A@$1?__tls_set_g_campaign_metagame_secondary_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum s_campaign_metagame_runtime_globals::e_metagame_flags, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum s_campaign_metagame_runtime_globals::e_metagame_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_metagame_flags@s_campaign_metagame_runtime_globals@@E$04Us_default_enum_string_resolver@@@@QBA_NW4e_metagame_flags@s_campaign_metagame_runtime_globals@@@Z");
//};

//public: void c_flags_no_init<enum s_campaign_metagame_runtime_globals::e_metagame_flags, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum s_campaign_metagame_runtime_globals::e_metagame_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_metagame_flags@s_campaign_metagame_runtime_globals@@E$04Us_default_enum_string_resolver@@@@QAAXW4e_metagame_flags@s_campaign_metagame_runtime_globals@@_N@Z");
//};

//public: void c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::set(enum e_game_skulls, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@QAAXW4e_game_skulls@@_N@Z");
//};

//bool operator!=<enum e_achievement>(enum e_achievement const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9W4e_achievement@@@@YA_NABW4e_achievement@@ABW4e_none_sentinel@@@Z");
//};

//public: struct c_status_line & s_static_array<struct c_status_line, 16>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Uc_status_line@@$0BA@@@QAAAAUc_status_line@@H@Z");
//};

//public: struct s_campaign_metagame_damage_event & s_static_array<struct s_campaign_metagame_damage_event, 3>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_campaign_metagame_damage_event@@$02@@QAAAAUs_campaign_metagame_damage_event@@J@Z");
//};

//public: struct s_campaign_metagame_damage_event & s_static_array<struct s_campaign_metagame_damage_event, 3>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@Us_campaign_metagame_damage_event@@$02@@QAAAAUs_campaign_metagame_damage_event@@F@Z");
//};

//struct s_campaign_metagame_bucket * character_definition_properties_get_direct<struct s_campaign_metagame_bucket, 588>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_properties_get_direct@Us_campaign_metagame_bucket@@$0CEM@@@YAPAUs_campaign_metagame_bucket@@JPBVc_stimulus_flags@@@Z");
//};

//long campaign_metagame_player_find_by_identifier<struct s_campaign_metagame_runtime_globals>(struct s_campaign_metagame_runtime_globals const *, struct s_player_identifier const *)
//{
//    mangled_ppc("??$campaign_metagame_player_find_by_identifier@Us_campaign_metagame_runtime_globals@@@@YAJPBUs_campaign_metagame_runtime_globals@@PBUs_player_identifier@@@Z");
//};

//long campaign_metagame_player_find_by_identifier<struct s_campaign_metagame_runtime_globals_secondary>(struct s_campaign_metagame_runtime_globals_secondary const *, struct s_player_identifier const *)
//{
//    mangled_ppc("??$campaign_metagame_player_find_by_identifier@Us_campaign_metagame_runtime_globals_secondary@@@@YAJPBUs_campaign_metagame_runtime_globals_secondary@@PBUs_player_identifier@@@Z");
//};

//struct s_metagame_state * template_metagame_state_get<struct s_metagame_state, struct s_campaign_metagame_runtime_globals>(struct s_campaign_metagame_runtime_globals *, long, bool)
//{
//    mangled_ppc("??$template_metagame_state_get@Us_metagame_state@@Us_campaign_metagame_runtime_globals@@@@YAPAUs_metagame_state@@PAUs_campaign_metagame_runtime_globals@@J_N@Z");
//};

//struct s_metagame_state_secondary * template_metagame_state_get<struct s_metagame_state_secondary, struct s_campaign_metagame_runtime_globals_secondary>(struct s_campaign_metagame_runtime_globals_secondary *, long, bool)
//{
//    mangled_ppc("??$template_metagame_state_get@Us_metagame_state_secondary@@Us_campaign_metagame_runtime_globals_secondary@@@@YAPAUs_metagame_state_secondary@@PAUs_campaign_metagame_runtime_globals_secondary@@J_N@Z");
//};

//public: struct s_metagame_state & s_static_array<struct s_metagame_state, 4>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@Us_metagame_state@@$03@@QAAAAUs_metagame_state@@F@Z");
//};

//public: struct s_metagame_state_secondary & s_static_array<struct s_metagame_state_secondary, 4>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@Us_metagame_state_secondary@@$03@@QAAAAUs_metagame_state_secondary@@F@Z");
//};

//public: struct s_campaign_metagame_interface_state::s_player_data & s_static_array<struct s_campaign_metagame_interface_state::s_player_data, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_player_data@s_campaign_metagame_interface_state@@$03@@QAAAAUs_player_data@s_campaign_metagame_interface_state@@J@Z");
//};

//public: struct s_campaign_metagame_interface_state::s_team_data & s_static_array<struct s_campaign_metagame_interface_state::s_team_data, 8>::operator[]<enum e_multiplayer_team>(enum e_multiplayer_team)
//{
//    mangled_ppc("??$?AW4e_multiplayer_team@@@?$s_static_array@Us_team_data@s_campaign_metagame_interface_state@@$07@@QAAAAUs_team_data@s_campaign_metagame_interface_state@@W4e_multiplayer_team@@@Z");
//};

//public: struct s_campaign_metagame_interface_state::s_team_data & s_static_array<struct s_campaign_metagame_interface_state::s_team_data, 8>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_team_data@s_campaign_metagame_interface_state@@$07@@QAAAAUs_team_data@s_campaign_metagame_interface_state@@H@Z");
//};

//public: struct s_campaign_metagame_interface_state::s_team_data & s_static_array<struct s_campaign_metagame_interface_state::s_team_data, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_team_data@s_campaign_metagame_interface_state@@$07@@QAAAAUs_team_data@s_campaign_metagame_interface_state@@J@Z");
//};

//public: static bool c_flags_no_init<enum s_campaign_metagame_runtime_globals::e_metagame_flags, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum s_campaign_metagame_runtime_globals::e_metagame_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_metagame_flags@s_campaign_metagame_runtime_globals@@E$04Us_default_enum_string_resolver@@@@SA_NW4e_metagame_flags@s_campaign_metagame_runtime_globals@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum s_campaign_metagame_runtime_globals::e_metagame_flags, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum s_campaign_metagame_runtime_globals::e_metagame_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_metagame_flags@s_campaign_metagame_runtime_globals@@E$04Us_default_enum_string_resolver@@@@CAEW4e_metagame_flags@s_campaign_metagame_runtime_globals@@@Z");
//};

//bool operator==<enum e_achievement>(enum e_achievement const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8W4e_achievement@@@@YA_NABW4e_achievement@@ABW4e_none_sentinel@@@Z");
//};

//public: static bool s_static_array<struct c_status_line, 16>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Uc_status_line@@$0BA@@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_campaign_metagame_damage_event, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_campaign_metagame_damage_event@@$02@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_campaign_metagame_damage_event, 3>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@Us_campaign_metagame_damage_event@@$02@@SA_NF@Z");
//};

//struct s_tag_block * character_definition_property_block_get<588>(long, class c_stimulus_flags const *)
//{
//    mangled_ppc("??$character_definition_property_block_get@$0CEM@@@YAPAUs_tag_block@@JPBVc_stimulus_flags@@@Z");
//};

//public: struct s_metagame_state const & s_static_array<struct s_metagame_state, 4>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_metagame_state@@$03@@QBAABUs_metagame_state@@J@Z");
//};

//public: struct s_metagame_state_secondary const & s_static_array<struct s_metagame_state_secondary, 4>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_metagame_state_secondary@@$03@@QBAABUs_metagame_state_secondary@@J@Z");
//};

//public: struct s_metagame_state & s_static_array<struct s_metagame_state, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_metagame_state@@$03@@QAAAAUs_metagame_state@@J@Z");
//};

//public: struct s_metagame_state_secondary & s_static_array<struct s_metagame_state_secondary, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_metagame_state_secondary@@$03@@QAAAAUs_metagame_state_secondary@@J@Z");
//};

//public: static bool s_static_array<struct s_metagame_state, 4>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@Us_metagame_state@@$03@@SA_NF@Z");
//};

//public: static bool s_static_array<struct s_metagame_state_secondary, 4>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@Us_metagame_state_secondary@@$03@@SA_NF@Z");
//};

//public: static bool s_static_array<struct s_campaign_metagame_interface_state::s_player_data, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_player_data@s_campaign_metagame_interface_state@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_campaign_metagame_interface_state::s_team_data, 8>::valid<enum e_multiplayer_team>(enum e_multiplayer_team)
//{
//    mangled_ppc("??$valid@W4e_multiplayer_team@@@?$s_static_array@Us_team_data@s_campaign_metagame_interface_state@@$07@@SA_NW4e_multiplayer_team@@@Z");
//};

//public: static bool s_static_array<struct s_campaign_metagame_interface_state::s_team_data, 8>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_team_data@s_campaign_metagame_interface_state@@$07@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_campaign_metagame_interface_state::s_team_data, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_team_data@s_campaign_metagame_interface_state@@$07@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_metagame_state, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_metagame_state@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_metagame_state_secondary, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_metagame_state_secondary@@$03@@SA_NJ@Z");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>::t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_campaign_metagame_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_campaign_metagame_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_campaign_metagame_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_campaign_metagame_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>::t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$04$0A@$0A@$1?__tls_set_g_campaign_metagame_secondary_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$04$0A@$0A@$1?__tls_set_g_campaign_metagame_secondary_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$04$0A@$0A@$1?__tls_set_g_campaign_metagame_secondary_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$04$0A@$0A@$1?__tls_set_g_campaign_metagame_secondary_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>::~t_restricted_allocation_manager<1, 0, 0, void (__tls_set_g_campaign_metagame_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$00$0A@$0A@$1?__tls_set_g_campaign_metagame_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>::~t_restricted_allocation_manager<5, 0, 0, void (__tls_set_g_campaign_metagame_secondary_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$04$0A@$0A@$1?__tls_set_g_campaign_metagame_secondary_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_campaign_metagame_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_campaign_metagame_allocator@@YAXXZ");
//};

//void g_campaign_metagame_secondary_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_campaign_metagame_secondary_allocator@@YAXXZ");
//};

