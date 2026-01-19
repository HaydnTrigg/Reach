/* ---------- headers */

#include "omaha\game\game_engine_survival.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_survival_accumulator_player_satastics, 16>::k_element_count; // "?k_element_count@?$s_static_array@Us_survival_accumulator_player_satastics@@$0BA@@@2JB"
// public: static long const s_static_array<struct s_survival_license_plate, 2>::k_element_count; // "?k_element_count@?$s_static_array@Us_survival_license_plate@@$01@@2JB"
// public: static long const s_static_array<struct c_weighted_randomizer<long, 12>::s_weighted_entry, 12>::k_element_count; // "?k_element_count@?$s_static_array@Us_weighted_entry@?$c_weighted_randomizer@J$0M@@@$0M@@@2JB"
// class c_game_engine *survival_engine; // "?survival_engine@@3PAVc_game_engine@@A"
// bool g_debug_survival_mode; // "?g_debug_survival_mode@@3_NA"
// bool g_survival_performance_mode; // "?g_survival_performance_mode@@3_NA"

// public: virtual bool c_survival_engine::initialize_for_new_map(void) const;
// public: s_survival_globals::s_survival_globals(void);
// public: s_survival_persistent_statistics::s_survival_persistent_statistics(void);
// public: virtual void c_survival_engine::dispose_from_old_map(void) const;
// public: virtual void c_survival_engine::initialize_for_new_round(void) const;
// public: virtual void c_survival_engine::stats_reset_for_round_switch(void) const;
// private: void c_survival_engine::reset_globals(bool) const;
// public: virtual enum e_game_engine_type c_survival_engine::get_type(void) const;
// public: virtual enum e_network_game_simulation_protocol c_survival_engine::get_simulation_protocol(void) const;
// public: virtual bool c_survival_engine::requires_valid_multiplayer_globals_in_scenario(void) const;
// public: virtual bool c_survival_engine::desires_round_based_fading(void) const;
// public: virtual bool c_survival_engine::competitive_game_in_progress(void) const;
// public: virtual void c_survival_engine::player_update(long) const;
// public: virtual void c_survival_engine::prepare_for_new_state(long) const;
// public: virtual void c_survival_engine::apply_game_engine_traits_for_player(long, class c_player_traits *) const;
// public: class c_player_traits const * s_custom_skull::get_spartan_traits(void) const;
// public: class c_player_traits const * s_custom_skull::get_elite_traits(void) const;
// public: class c_player_traits const * c_game_engine_survival_variant::get_spartan_traits(void) const;
// public: class c_player_traits const * c_game_engine_survival_variant::get_elite_traits(void) const;
// public: struct s_custom_skull const * c_game_engine_survival_variant::get_custom_skull_traits(long) const;
// public: virtual void c_survival_engine::apply_ai_traits(class c_ai_traits *) const;
// public: class c_ai_traits const * s_custom_skull::get_ai_traits(void) const;
// public: class c_ai_traits const * c_game_engine_survival_variant::get_ai_traits(void) const;
// public: virtual enum e_game_engine_status c_survival_engine::get_player_state_index(long, bool *) const;
// public: virtual bool c_survival_engine::desires_garbage_collection(void) const;
// public: virtual bool c_survival_engine::desires_influence_based_spawning(void) const;
// public: virtual void c_survival_engine::get_hud_interface_state(long, struct game_engine_interface_state *) const;
// public: virtual void c_survival_engine::handle_incident(long, long, long, struct s_damage_reporting_info const &) const;
// public: virtual enum e_multiplayer_team_designator c_survival_engine::get_player_team_designator(long) const;
// void survival_mode_sudden_death(bool);
// short hs_survival_get_time_limit(void);
// unsigned char hs_survival_get_set_count(void);
// public: unsigned char c_game_engine_survival_variant::get_set_count(void) const;
// char hs_survival_get_bonus_lives_awarded(void);
// public: char c_game_engine_survival_variant::get_bonus_lives_awarded(void) const;
// short hs_survival_get_bonus_lives_on_elite_player_death(void);
// public: short c_game_engine_survival_variant::get_bonus_lives_on_elite_player_death(void) const;
// short hs_survival_get_bonus_target(void);
// public: short c_game_engine_survival_variant::get_bonus_target(void) const;
// short hs_survival_get_shared_team_life_count(void);
// public: short c_game_engine_survival_variant::get_shared_team_life_count(void) const;
// short hs_survival_get_elite_life_count(void);
// public: short c_game_engine_survival_variant::get_elite_life_count(void) const;
// short hs_survival_get_max_lives(void);
// public: short c_game_engine_survival_variant::get_maximum_lives(void) const;
// short hs_survival_get_generator_count(void);
// public: short c_game_engine_survival_variant::get_generator_count(void) const;
// bool hs_survival_get_enable_scenario_hazards(void);
// public: bool c_game_engine_survival_variant::get_enable_scenario_hazards(void) const;
// bool hs_survival_get_enable_weapon_drops(void);
// public: bool c_game_engine_survival_variant::get_enable_weapon_drops(void) const;
// bool hs_survival_get_enable_ammo_crates(void);
// public: bool c_game_engine_survival_variant::get_enable_ammo_crates(void) const;
// bool hs_survival_get_generator_defend_all(void);
// public: bool c_game_engine_survival_variant::get_generator_defend_all(void) const;
// bool hs_survival_get_generator_random_spawn(void);
// public: bool c_game_engine_survival_variant::get_generator_random_spawn(void) const;
// long hs_survival_get_respawn_time_seconds(enum e_multiplayer_team);
// bool hs_survival_get_team_respawns_on_wave(enum e_campaign_team);
// bool survival_current_wave_is_bonus(void);
// bool survival_current_wave_is_initial(void);
// bool survival_current_wave_is_boss(void);
// bool survival_current_wave_is_last_in_set(void);
// void survival_mode_update_skulls(void);
// public: class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> c_game_engine_survival_variant::get_round_skulls(long) const;
// public: class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> c_game_engine_survival_variant::get_bonus_round_skulls(void) const;
// void survival_accumulator_reset(struct s_survival_accumulator_statistics *);
// void survival_accumulator_submit_deathless_incidents(long, long, struct s_survival_accumulator_statistics const &);
// void submit_wave_incidents(void);
// void survival_mode_begin_new_set(void);
// void survival_mode_end_set(void);
// void survival_mode_begin_new_wave(void);
// public: class c_game_engine_survival_variant const * c_game_variant::get_survival_variant(void) const;
// public: class c_enum<enum e_wave_squad_advance_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> c_game_engine_survival_variant::get_wave_squad_advance_type(long) const;
// public: long c_game_engine_survival_variant::get_wave_squad_type_count(long) const;
// void survival_mode_end_wave(void);
// void survival_mode_award_hero_medal(void);
// enum e_campaign_team & operator++(enum e_campaign_team &);
// void survival_mode_respawn_dead_players(void);
// void survival_mode_send_event(struct s_game_engine_event_data *);
// void survival_mode_incident_new(long);
// void survival_mode_debug_render(void);
// bool survival_mode_disables_respawning(enum e_campaign_team);
// bool survival_mode_has_infinite_lives(enum e_campaign_team);
// bool survival_mode_has_lives(enum e_campaign_team);
// long survival_mode_get_lives(enum e_campaign_team);
// void survival_mode_increment_lives(enum e_campaign_team, long);
// void survival_mode_decrement_lives(enum e_campaign_team, long);
// void survival_mode_set_lives(enum e_campaign_team, long);
// short survival_mode_get_set_index(void);
// short survival_mode_get_round_index(void);
// short survival_mode_get_wave_index(void);
// float survival_mode_get_set_multiplier(void);
// void survival_mode_set_set_multiplier(float);
// float survival_mode_get_bonus_multiplier(void);
// void survival_mode_set_bonus_multiplier(float);
// short survival_mode_get_waves_per_round(void);
// bool survival_mode_get_bonus_round_active(void);
// short survival_mode_get_rounds_per_set(void);
// long survival_mode_get_wave_squad_type(void);
// public: char c_game_engine_survival_variant::get_wave_squad_type(long, long) const;
// bool survival_mode_current_wave_uses_dropship(void);
// public: bool c_game_engine_survival_variant::get_wave_uses_dropship(long) const;
// short survival_mode_get_current_wave_time_limit(void);
// public: short c_game_engine_survival_variant::get_bonus_round_duration(void) const;
// void survival_mode_increment_human_score(long);
// void survival_mode_increment_elite_score(long);
// long survival_mode_find_wave_template_definition_by_name(long);
// struct s_survival_mode_wave_template_definition const * survival_mode_get_wave_template_definition(long);
// long survival_mode_get_wave_template_definition_name(long);
// bool survival_mode_in_range(short, short, short, short);
// long survival_mode_player_count_by_team(enum e_campaign_team);
// long survival_players_by_team(enum e_campaign_team);
// long survival_mode_get_enemy_player_kills(long);
// class c_ai_traits const * survival_mode_get_ai_traits(void);
// void survival_mode_set_spartan_license_plate(long, long, long, long, long);
// void survival_mode_set_elite_license_plate(long, long, long, long, long);
// class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> survival_mode_get_highest_skull_combo(void);
// long survival_mode_get_waves_completed(void);
// long survival_mode_get_full_rounds_completed(void);
// long survival_mode_get_sets_completed(void);
// struct s_survival_globals * get_survival_globals(void);
// public: c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>(unsigned long);
// public: enum e_wave_squad_advance_type c_enum_no_init<enum e_wave_squad_advance_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_wave_squad_advance_type(void) const;
// public: c_weighted_randomizer<long, 12>::c_weighted_randomizer<long, 12>(void);
// public: float c_weighted_randomizer<long, 12>::get_total_weight(void);
// public: long c_weighted_randomizer<long, 12>::get_random_entry(char const *);
// public: void c_weighted_randomizer<long, 12>::set_entry(long, float);
// private: long c_weighted_randomizer<long, 12>::find_entry(float);
// public: bool c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::test_range(enum e_game_skulls, enum e_game_skulls) const;
// public: long c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::count_set(void) const;
// public: class c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> const &);
// public: bool c_flags_no_init<enum e_survival_wave_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_survival_wave_flags) const;
// public: bool c_flags_no_init<enum e_survival_variant_flags, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_survival_variant_flags) const;
// public: char c_game_engine_option<struct s_survival_wave_properties::c_wave_squad_count_game_engine_option_metadata>::get_value(void) const;
// public: char c_game_engine_option<struct s_survival_wave_properties::c_possible_wave_squad_game_engine_option_metadata>::get_value(void) const;
// public: unsigned long c_game_engine_option<struct c_skull_flags_game_engine_option_metadata>::get_value(void) const;
// public: short c_game_engine_option<struct s_survival_bonus_round_properties::c_duration_seconds_game_engine_option_metadata>::get_value(void) const;
// public: unsigned char c_game_engine_option<struct c_game_engine_survival_variant::c_set_count_game_engine_option_metadata>::get_value(void) const;
// public: char c_game_engine_option<struct c_game_engine_survival_variant::c_bonus_lives_awarded_game_engine_option_metadata>::get_value(void) const;
// public: short c_game_engine_option<struct c_game_engine_survival_variant::c_bonus_target_game_engine_option_metadata>::get_value(void) const;
// public: short c_game_engine_option<struct c_game_engine_survival_variant::c_bonus_lives_on_elite_player_death_game_engine_option_metadata>::get_value(void) const;
// public: short c_game_engine_option<struct c_game_engine_survival_variant::c_shared_team_life_count_game_engine_option_metadata>::get_value(void) const;
// public: short c_game_engine_option<struct c_game_engine_survival_variant::c_elite_life_count_game_engine_option_metadata>::get_value(void) const;
// public: short c_game_engine_option<struct c_game_engine_survival_variant::c_maximum_lives_game_engine_option_metadata>::get_value(void) const;
// public: short c_game_engine_option<struct c_game_engine_survival_variant::c_generator_count_game_engine_option_metadata>::get_value(void) const;
// public: struct s_survival_round_properties const & s_static_array<struct s_survival_round_properties, 3>::operator[]<long>(long) const;
// public: struct s_custom_skull const & s_static_array<struct s_custom_skull, 3>::operator[]<long>(long) const;
// public: struct s_survival_license_plate & s_static_array<struct s_survival_license_plate, 2>::operator[]<long>(long);
// public: struct s_survival_license_plate & s_static_array<struct s_survival_license_plate, 2>::operator[]<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator);
// public: struct s_survival_accumulator_player_satastics & s_static_array<struct s_survival_accumulator_player_satastics, 16>::operator[]<long>(long);
// public: struct s_survival_accumulator_player_satastics const & s_static_array<struct s_survival_accumulator_player_satastics, 16>::operator[]<long>(long) const;
// public: long & s_static_array<long, 8>::operator[]<enum e_campaign_team>(enum e_campaign_team);
// public: struct c_weighted_randomizer<long, 12>::s_weighted_entry & s_static_array<struct c_weighted_randomizer<long, 12>::s_weighted_entry, 12>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum e_survival_wave_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_survival_wave_flags);
// private: static unsigned char c_flags_no_init<enum e_survival_wave_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_survival_wave_flags);
// public: static bool c_flags_no_init<enum e_survival_variant_flags, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_survival_variant_flags);
// private: static unsigned char c_flags_no_init<enum e_survival_variant_flags, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_survival_variant_flags);
// protected: void c_game_engine_option<struct s_survival_wave_properties::c_wave_squad_count_game_engine_option_metadata>::assert_parameters_valid(void) const;
// protected: void c_game_engine_option<struct s_survival_wave_properties::c_possible_wave_squad_game_engine_option_metadata>::assert_parameters_valid(void) const;
// protected: void c_game_engine_option<struct c_skull_flags_game_engine_option_metadata>::assert_parameters_valid(void) const;
// protected: void c_game_engine_option<struct s_survival_bonus_round_properties::c_duration_seconds_game_engine_option_metadata>::assert_parameters_valid(void) const;
// protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_set_count_game_engine_option_metadata>::assert_parameters_valid(void) const;
// protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_bonus_lives_awarded_game_engine_option_metadata>::assert_parameters_valid(void) const;
// protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_bonus_target_game_engine_option_metadata>::assert_parameters_valid(void) const;
// protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_bonus_lives_on_elite_player_death_game_engine_option_metadata>::assert_parameters_valid(void) const;
// protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_shared_team_life_count_game_engine_option_metadata>::assert_parameters_valid(void) const;
// protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_elite_life_count_game_engine_option_metadata>::assert_parameters_valid(void) const;
// protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_maximum_lives_game_engine_option_metadata>::assert_parameters_valid(void) const;
// protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_generator_count_game_engine_option_metadata>::assert_parameters_valid(void) const;
// public: static bool s_static_array<struct s_survival_round_properties, 3>::valid<long>(long);
// public: static bool s_static_array<struct s_custom_skull, 3>::valid<long>(long);
// public: static bool s_static_array<struct s_survival_license_plate, 2>::valid<long>(long);
// public: static bool s_static_array<struct s_survival_license_plate, 2>::valid<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator);
// public: static bool s_static_array<struct s_survival_accumulator_player_satastics, 16>::valid<long>(long);
// public: static bool s_static_array<long, 8>::valid<enum e_campaign_team>(enum e_campaign_team);
// public: static bool s_static_array<struct c_weighted_randomizer<long, 12>::s_weighted_entry, 12>::valid<long>(long);
// public: c_survival_engine::c_survival_engine(void);
// public: virtual bool c_survival_engine::desires_teleporters(void) const;

//public: virtual bool c_survival_engine::initialize_for_new_map(void) const
//{
//    mangled_ppc("?initialize_for_new_map@c_survival_engine@@UBA_NXZ");
//};

//public: s_survival_globals::s_survival_globals(void)
//{
//    mangled_ppc("??0s_survival_globals@@QAA@XZ");
//};

//public: s_survival_persistent_statistics::s_survival_persistent_statistics(void)
//{
//    mangled_ppc("??0s_survival_persistent_statistics@@QAA@XZ");
//};

//public: virtual void c_survival_engine::dispose_from_old_map(void) const
//{
//    mangled_ppc("?dispose_from_old_map@c_survival_engine@@UBAXXZ");
//};

//public: virtual void c_survival_engine::initialize_for_new_round(void) const
//{
//    mangled_ppc("?initialize_for_new_round@c_survival_engine@@UBAXXZ");
//};

//public: virtual void c_survival_engine::stats_reset_for_round_switch(void) const
//{
//    mangled_ppc("?stats_reset_for_round_switch@c_survival_engine@@UBAXXZ");
//};

//private: void c_survival_engine::reset_globals(bool) const
//{
//    mangled_ppc("?reset_globals@c_survival_engine@@ABAX_N@Z");
//};

//public: virtual enum e_game_engine_type c_survival_engine::get_type(void) const
//{
//    mangled_ppc("?get_type@c_survival_engine@@UBA?AW4e_game_engine_type@@XZ");
//};

//public: virtual enum e_network_game_simulation_protocol c_survival_engine::get_simulation_protocol(void) const
//{
//    mangled_ppc("?get_simulation_protocol@c_survival_engine@@UBA?AW4e_network_game_simulation_protocol@@XZ");
//};

//public: virtual bool c_survival_engine::requires_valid_multiplayer_globals_in_scenario(void) const
//{
//    mangled_ppc("?requires_valid_multiplayer_globals_in_scenario@c_survival_engine@@UBA_NXZ");
//};

//public: virtual bool c_survival_engine::desires_round_based_fading(void) const
//{
//    mangled_ppc("?desires_round_based_fading@c_survival_engine@@UBA_NXZ");
//};

//public: virtual bool c_survival_engine::competitive_game_in_progress(void) const
//{
//    mangled_ppc("?competitive_game_in_progress@c_survival_engine@@UBA_NXZ");
//};

//public: virtual void c_survival_engine::player_update(long) const
//{
//    mangled_ppc("?player_update@c_survival_engine@@UBAXJ@Z");
//};

//public: virtual void c_survival_engine::prepare_for_new_state(long) const
//{
//    mangled_ppc("?prepare_for_new_state@c_survival_engine@@UBAXJ@Z");
//};

//public: virtual void c_survival_engine::apply_game_engine_traits_for_player(long, class c_player_traits *) const
//{
//    mangled_ppc("?apply_game_engine_traits_for_player@c_survival_engine@@UBAXJPAVc_player_traits@@@Z");
//};

//public: class c_player_traits const * s_custom_skull::get_spartan_traits(void) const
//{
//    mangled_ppc("?get_spartan_traits@s_custom_skull@@QBAPBVc_player_traits@@XZ");
//};

//public: class c_player_traits const * s_custom_skull::get_elite_traits(void) const
//{
//    mangled_ppc("?get_elite_traits@s_custom_skull@@QBAPBVc_player_traits@@XZ");
//};

//public: class c_player_traits const * c_game_engine_survival_variant::get_spartan_traits(void) const
//{
//    mangled_ppc("?get_spartan_traits@c_game_engine_survival_variant@@QBAPBVc_player_traits@@XZ");
//};

//public: class c_player_traits const * c_game_engine_survival_variant::get_elite_traits(void) const
//{
//    mangled_ppc("?get_elite_traits@c_game_engine_survival_variant@@QBAPBVc_player_traits@@XZ");
//};

//public: struct s_custom_skull const * c_game_engine_survival_variant::get_custom_skull_traits(long) const
//{
//    mangled_ppc("?get_custom_skull_traits@c_game_engine_survival_variant@@QBAPBUs_custom_skull@@J@Z");
//};

//public: virtual void c_survival_engine::apply_ai_traits(class c_ai_traits *) const
//{
//    mangled_ppc("?apply_ai_traits@c_survival_engine@@UBAXPAVc_ai_traits@@@Z");
//};

//public: class c_ai_traits const * s_custom_skull::get_ai_traits(void) const
//{
//    mangled_ppc("?get_ai_traits@s_custom_skull@@QBAPBVc_ai_traits@@XZ");
//};

//public: class c_ai_traits const * c_game_engine_survival_variant::get_ai_traits(void) const
//{
//    mangled_ppc("?get_ai_traits@c_game_engine_survival_variant@@QBAPBVc_ai_traits@@XZ");
//};

//public: virtual enum e_game_engine_status c_survival_engine::get_player_state_index(long, bool *) const
//{
//    mangled_ppc("?get_player_state_index@c_survival_engine@@UBA?AW4e_game_engine_status@@JPA_N@Z");
//};

//public: virtual bool c_survival_engine::desires_garbage_collection(void) const
//{
//    mangled_ppc("?desires_garbage_collection@c_survival_engine@@UBA_NXZ");
//};

//public: virtual bool c_survival_engine::desires_influence_based_spawning(void) const
//{
//    mangled_ppc("?desires_influence_based_spawning@c_survival_engine@@UBA_NXZ");
//};

//public: virtual void c_survival_engine::get_hud_interface_state(long, struct game_engine_interface_state *) const
//{
//    mangled_ppc("?get_hud_interface_state@c_survival_engine@@UBAXJPAUgame_engine_interface_state@@@Z");
//};

//public: virtual void c_survival_engine::handle_incident(long, long, long, struct s_damage_reporting_info const &) const
//{
//    mangled_ppc("?handle_incident@c_survival_engine@@UBAXJJJABUs_damage_reporting_info@@@Z");
//};

//public: virtual enum e_multiplayer_team_designator c_survival_engine::get_player_team_designator(long) const
//{
//    mangled_ppc("?get_player_team_designator@c_survival_engine@@UBA?AW4e_multiplayer_team_designator@@J@Z");
//};

//void survival_mode_sudden_death(bool)
//{
//    mangled_ppc("?survival_mode_sudden_death@@YAX_N@Z");
//};

//short hs_survival_get_time_limit(void)
//{
//    mangled_ppc("?hs_survival_get_time_limit@@YAFXZ");
//};

//unsigned char hs_survival_get_set_count(void)
//{
//    mangled_ppc("?hs_survival_get_set_count@@YAEXZ");
//};

//public: unsigned char c_game_engine_survival_variant::get_set_count(void) const
//{
//    mangled_ppc("?get_set_count@c_game_engine_survival_variant@@QBAEXZ");
//};

//char hs_survival_get_bonus_lives_awarded(void)
//{
//    mangled_ppc("?hs_survival_get_bonus_lives_awarded@@YADXZ");
//};

//public: char c_game_engine_survival_variant::get_bonus_lives_awarded(void) const
//{
//    mangled_ppc("?get_bonus_lives_awarded@c_game_engine_survival_variant@@QBADXZ");
//};

//short hs_survival_get_bonus_lives_on_elite_player_death(void)
//{
//    mangled_ppc("?hs_survival_get_bonus_lives_on_elite_player_death@@YAFXZ");
//};

//public: short c_game_engine_survival_variant::get_bonus_lives_on_elite_player_death(void) const
//{
//    mangled_ppc("?get_bonus_lives_on_elite_player_death@c_game_engine_survival_variant@@QBAFXZ");
//};

//short hs_survival_get_bonus_target(void)
//{
//    mangled_ppc("?hs_survival_get_bonus_target@@YAFXZ");
//};

//public: short c_game_engine_survival_variant::get_bonus_target(void) const
//{
//    mangled_ppc("?get_bonus_target@c_game_engine_survival_variant@@QBAFXZ");
//};

//short hs_survival_get_shared_team_life_count(void)
//{
//    mangled_ppc("?hs_survival_get_shared_team_life_count@@YAFXZ");
//};

//public: short c_game_engine_survival_variant::get_shared_team_life_count(void) const
//{
//    mangled_ppc("?get_shared_team_life_count@c_game_engine_survival_variant@@QBAFXZ");
//};

//short hs_survival_get_elite_life_count(void)
//{
//    mangled_ppc("?hs_survival_get_elite_life_count@@YAFXZ");
//};

//public: short c_game_engine_survival_variant::get_elite_life_count(void) const
//{
//    mangled_ppc("?get_elite_life_count@c_game_engine_survival_variant@@QBAFXZ");
//};

//short hs_survival_get_max_lives(void)
//{
//    mangled_ppc("?hs_survival_get_max_lives@@YAFXZ");
//};

//public: short c_game_engine_survival_variant::get_maximum_lives(void) const
//{
//    mangled_ppc("?get_maximum_lives@c_game_engine_survival_variant@@QBAFXZ");
//};

//short hs_survival_get_generator_count(void)
//{
//    mangled_ppc("?hs_survival_get_generator_count@@YAFXZ");
//};

//public: short c_game_engine_survival_variant::get_generator_count(void) const
//{
//    mangled_ppc("?get_generator_count@c_game_engine_survival_variant@@QBAFXZ");
//};

//bool hs_survival_get_enable_scenario_hazards(void)
//{
//    mangled_ppc("?hs_survival_get_enable_scenario_hazards@@YA_NXZ");
//};

//public: bool c_game_engine_survival_variant::get_enable_scenario_hazards(void) const
//{
//    mangled_ppc("?get_enable_scenario_hazards@c_game_engine_survival_variant@@QBA_NXZ");
//};

//bool hs_survival_get_enable_weapon_drops(void)
//{
//    mangled_ppc("?hs_survival_get_enable_weapon_drops@@YA_NXZ");
//};

//public: bool c_game_engine_survival_variant::get_enable_weapon_drops(void) const
//{
//    mangled_ppc("?get_enable_weapon_drops@c_game_engine_survival_variant@@QBA_NXZ");
//};

//bool hs_survival_get_enable_ammo_crates(void)
//{
//    mangled_ppc("?hs_survival_get_enable_ammo_crates@@YA_NXZ");
//};

//public: bool c_game_engine_survival_variant::get_enable_ammo_crates(void) const
//{
//    mangled_ppc("?get_enable_ammo_crates@c_game_engine_survival_variant@@QBA_NXZ");
//};

//bool hs_survival_get_generator_defend_all(void)
//{
//    mangled_ppc("?hs_survival_get_generator_defend_all@@YA_NXZ");
//};

//public: bool c_game_engine_survival_variant::get_generator_defend_all(void) const
//{
//    mangled_ppc("?get_generator_defend_all@c_game_engine_survival_variant@@QBA_NXZ");
//};

//bool hs_survival_get_generator_random_spawn(void)
//{
//    mangled_ppc("?hs_survival_get_generator_random_spawn@@YA_NXZ");
//};

//public: bool c_game_engine_survival_variant::get_generator_random_spawn(void) const
//{
//    mangled_ppc("?get_generator_random_spawn@c_game_engine_survival_variant@@QBA_NXZ");
//};

//long hs_survival_get_respawn_time_seconds(enum e_multiplayer_team)
//{
//    mangled_ppc("?hs_survival_get_respawn_time_seconds@@YAJW4e_multiplayer_team@@@Z");
//};

//bool hs_survival_get_team_respawns_on_wave(enum e_campaign_team)
//{
//    mangled_ppc("?hs_survival_get_team_respawns_on_wave@@YA_NW4e_campaign_team@@@Z");
//};

//bool survival_current_wave_is_bonus(void)
//{
//    mangled_ppc("?survival_current_wave_is_bonus@@YA_NXZ");
//};

//bool survival_current_wave_is_initial(void)
//{
//    mangled_ppc("?survival_current_wave_is_initial@@YA_NXZ");
//};

//bool survival_current_wave_is_boss(void)
//{
//    mangled_ppc("?survival_current_wave_is_boss@@YA_NXZ");
//};

//bool survival_current_wave_is_last_in_set(void)
//{
//    mangled_ppc("?survival_current_wave_is_last_in_set@@YA_NXZ");
//};

//void survival_mode_update_skulls(void)
//{
//    mangled_ppc("?survival_mode_update_skulls@@YAXXZ");
//};

//public: class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> c_game_engine_survival_variant::get_round_skulls(long) const
//{
//    mangled_ppc("?get_round_skulls@c_game_engine_survival_variant@@QBA?AV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@J@Z");
//};

//public: class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> c_game_engine_survival_variant::get_bonus_round_skulls(void) const
//{
//    mangled_ppc("?get_bonus_round_skulls@c_game_engine_survival_variant@@QBA?AV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@XZ");
//};

//void survival_accumulator_reset(struct s_survival_accumulator_statistics *)
//{
//    mangled_ppc("?survival_accumulator_reset@@YAXPAUs_survival_accumulator_statistics@@@Z");
//};

//void survival_accumulator_submit_deathless_incidents(long, long, struct s_survival_accumulator_statistics const &)
//{
//    mangled_ppc("?survival_accumulator_submit_deathless_incidents@@YAXJJABUs_survival_accumulator_statistics@@@Z");
//};

//void submit_wave_incidents(void)
//{
//    mangled_ppc("?submit_wave_incidents@@YAXXZ");
//};

//void survival_mode_begin_new_set(void)
//{
//    mangled_ppc("?survival_mode_begin_new_set@@YAXXZ");
//};

//void survival_mode_end_set(void)
//{
//    mangled_ppc("?survival_mode_end_set@@YAXXZ");
//};

//void survival_mode_begin_new_wave(void)
//{
//    mangled_ppc("?survival_mode_begin_new_wave@@YAXXZ");
//};

//public: class c_game_engine_survival_variant const * c_game_variant::get_survival_variant(void) const
//{
//    mangled_ppc("?get_survival_variant@c_game_variant@@QBAPBVc_game_engine_survival_variant@@XZ");
//};

//public: class c_enum<enum e_wave_squad_advance_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> c_game_engine_survival_variant::get_wave_squad_advance_type(long) const
//{
//    mangled_ppc("?get_wave_squad_advance_type@c_game_engine_survival_variant@@QBA?AV?$c_enum@W4e_wave_squad_advance_type@@E$0A@$01Us_default_enum_string_resolver@@@@J@Z");
//};

//public: long c_game_engine_survival_variant::get_wave_squad_type_count(long) const
//{
//    mangled_ppc("?get_wave_squad_type_count@c_game_engine_survival_variant@@QBAJJ@Z");
//};

//void survival_mode_end_wave(void)
//{
//    mangled_ppc("?survival_mode_end_wave@@YAXXZ");
//};

//void survival_mode_award_hero_medal(void)
//{
//    mangled_ppc("?survival_mode_award_hero_medal@@YAXXZ");
//};

//enum e_campaign_team & operator++(enum e_campaign_team &)
//{
//    mangled_ppc("??E@YAAAW4e_campaign_team@@AAW40@@Z");
//};

//void survival_mode_respawn_dead_players(void)
//{
//    mangled_ppc("?survival_mode_respawn_dead_players@@YAXXZ");
//};

//void survival_mode_send_event(struct s_game_engine_event_data *)
//{
//    mangled_ppc("?survival_mode_send_event@@YAXPAUs_game_engine_event_data@@@Z");
//};

//void survival_mode_incident_new(long)
//{
//    mangled_ppc("?survival_mode_incident_new@@YAXJ@Z");
//};

//void survival_mode_debug_render(void)
//{
//    mangled_ppc("?survival_mode_debug_render@@YAXXZ");
//};

//bool survival_mode_disables_respawning(enum e_campaign_team)
//{
//    mangled_ppc("?survival_mode_disables_respawning@@YA_NW4e_campaign_team@@@Z");
//};

//bool survival_mode_has_infinite_lives(enum e_campaign_team)
//{
//    mangled_ppc("?survival_mode_has_infinite_lives@@YA_NW4e_campaign_team@@@Z");
//};

//bool survival_mode_has_lives(enum e_campaign_team)
//{
//    mangled_ppc("?survival_mode_has_lives@@YA_NW4e_campaign_team@@@Z");
//};

//long survival_mode_get_lives(enum e_campaign_team)
//{
//    mangled_ppc("?survival_mode_get_lives@@YAJW4e_campaign_team@@@Z");
//};

//void survival_mode_increment_lives(enum e_campaign_team, long)
//{
//    mangled_ppc("?survival_mode_increment_lives@@YAXW4e_campaign_team@@J@Z");
//};

//void survival_mode_decrement_lives(enum e_campaign_team, long)
//{
//    mangled_ppc("?survival_mode_decrement_lives@@YAXW4e_campaign_team@@J@Z");
//};

//void survival_mode_set_lives(enum e_campaign_team, long)
//{
//    mangled_ppc("?survival_mode_set_lives@@YAXW4e_campaign_team@@J@Z");
//};

//short survival_mode_get_set_index(void)
//{
//    mangled_ppc("?survival_mode_get_set_index@@YAFXZ");
//};

//short survival_mode_get_round_index(void)
//{
//    mangled_ppc("?survival_mode_get_round_index@@YAFXZ");
//};

//short survival_mode_get_wave_index(void)
//{
//    mangled_ppc("?survival_mode_get_wave_index@@YAFXZ");
//};

//float survival_mode_get_set_multiplier(void)
//{
//    mangled_ppc("?survival_mode_get_set_multiplier@@YAMXZ");
//};

//void survival_mode_set_set_multiplier(float)
//{
//    mangled_ppc("?survival_mode_set_set_multiplier@@YAXM@Z");
//};

//float survival_mode_get_bonus_multiplier(void)
//{
//    mangled_ppc("?survival_mode_get_bonus_multiplier@@YAMXZ");
//};

//void survival_mode_set_bonus_multiplier(float)
//{
//    mangled_ppc("?survival_mode_set_bonus_multiplier@@YAXM@Z");
//};

//short survival_mode_get_waves_per_round(void)
//{
//    mangled_ppc("?survival_mode_get_waves_per_round@@YAFXZ");
//};

//bool survival_mode_get_bonus_round_active(void)
//{
//    mangled_ppc("?survival_mode_get_bonus_round_active@@YA_NXZ");
//};

//short survival_mode_get_rounds_per_set(void)
//{
//    mangled_ppc("?survival_mode_get_rounds_per_set@@YAFXZ");
//};

//long survival_mode_get_wave_squad_type(void)
//{
//    mangled_ppc("?survival_mode_get_wave_squad_type@@YAJXZ");
//};

//public: char c_game_engine_survival_variant::get_wave_squad_type(long, long) const
//{
//    mangled_ppc("?get_wave_squad_type@c_game_engine_survival_variant@@QBADJJ@Z");
//};

//bool survival_mode_current_wave_uses_dropship(void)
//{
//    mangled_ppc("?survival_mode_current_wave_uses_dropship@@YA_NXZ");
//};

//public: bool c_game_engine_survival_variant::get_wave_uses_dropship(long) const
//{
//    mangled_ppc("?get_wave_uses_dropship@c_game_engine_survival_variant@@QBA_NJ@Z");
//};

//short survival_mode_get_current_wave_time_limit(void)
//{
//    mangled_ppc("?survival_mode_get_current_wave_time_limit@@YAFXZ");
//};

//public: short c_game_engine_survival_variant::get_bonus_round_duration(void) const
//{
//    mangled_ppc("?get_bonus_round_duration@c_game_engine_survival_variant@@QBAFXZ");
//};

//void survival_mode_increment_human_score(long)
//{
//    mangled_ppc("?survival_mode_increment_human_score@@YAXJ@Z");
//};

//void survival_mode_increment_elite_score(long)
//{
//    mangled_ppc("?survival_mode_increment_elite_score@@YAXJ@Z");
//};

//long survival_mode_find_wave_template_definition_by_name(long)
//{
//    mangled_ppc("?survival_mode_find_wave_template_definition_by_name@@YAJJ@Z");
//};

//struct s_survival_mode_wave_template_definition const * survival_mode_get_wave_template_definition(long)
//{
//    mangled_ppc("?survival_mode_get_wave_template_definition@@YAPBUs_survival_mode_wave_template_definition@@J@Z");
//};

//long survival_mode_get_wave_template_definition_name(long)
//{
//    mangled_ppc("?survival_mode_get_wave_template_definition_name@@YAJJ@Z");
//};

//bool survival_mode_in_range(short, short, short, short)
//{
//    mangled_ppc("?survival_mode_in_range@@YA_NFFFF@Z");
//};

//long survival_mode_player_count_by_team(enum e_campaign_team)
//{
//    mangled_ppc("?survival_mode_player_count_by_team@@YAJW4e_campaign_team@@@Z");
//};

//long survival_players_by_team(enum e_campaign_team)
//{
//    mangled_ppc("?survival_players_by_team@@YAJW4e_campaign_team@@@Z");
//};

//long survival_mode_get_enemy_player_kills(long)
//{
//    mangled_ppc("?survival_mode_get_enemy_player_kills@@YAJJ@Z");
//};

//class c_ai_traits const * survival_mode_get_ai_traits(void)
//{
//    mangled_ppc("?survival_mode_get_ai_traits@@YAPBVc_ai_traits@@XZ");
//};

//void survival_mode_set_spartan_license_plate(long, long, long, long, long)
//{
//    mangled_ppc("?survival_mode_set_spartan_license_plate@@YAXJJJJJ@Z");
//};

//void survival_mode_set_elite_license_plate(long, long, long, long, long)
//{
//    mangled_ppc("?survival_mode_set_elite_license_plate@@YAXJJJJJ@Z");
//};

//class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> survival_mode_get_highest_skull_combo(void)
//{
//    mangled_ppc("?survival_mode_get_highest_skull_combo@@YA?AV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@XZ");
//};

//long survival_mode_get_waves_completed(void)
//{
//    mangled_ppc("?survival_mode_get_waves_completed@@YAJXZ");
//};

//long survival_mode_get_full_rounds_completed(void)
//{
//    mangled_ppc("?survival_mode_get_full_rounds_completed@@YAJXZ");
//};

//long survival_mode_get_sets_completed(void)
//{
//    mangled_ppc("?survival_mode_get_sets_completed@@YAJXZ");
//};

//struct s_survival_globals * get_survival_globals(void)
//{
//    mangled_ppc("?get_survival_globals@@YAPAUs_survival_globals@@XZ");
//};

//public: c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>(unsigned long)
//{
//    mangled_ppc("??0?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@QAA@K@Z");
//};

//public: enum e_wave_squad_advance_type c_enum_no_init<enum e_wave_squad_advance_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_wave_squad_advance_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_wave_squad_advance_type@@E$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_wave_squad_advance_type@@XZ");
//};

//public: c_weighted_randomizer<long, 12>::c_weighted_randomizer<long, 12>(void)
//{
//    mangled_ppc("??0?$c_weighted_randomizer@J$0M@@@QAA@XZ");
//};

//public: float c_weighted_randomizer<long, 12>::get_total_weight(void)
//{
//    mangled_ppc("?get_total_weight@?$c_weighted_randomizer@J$0M@@@QAAMXZ");
//};

//public: long c_weighted_randomizer<long, 12>::get_random_entry(char const *)
//{
//    mangled_ppc("?get_random_entry@?$c_weighted_randomizer@J$0M@@@QAAJPBD@Z");
//};

//public: void c_weighted_randomizer<long, 12>::set_entry(long, float)
//{
//    mangled_ppc("?set_entry@?$c_weighted_randomizer@J$0M@@@QAAXJM@Z");
//};

//private: long c_weighted_randomizer<long, 12>::find_entry(float)
//{
//    mangled_ppc("?find_entry@?$c_weighted_randomizer@J$0M@@@AAAJM@Z");
//};

//public: bool c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::test_range(enum e_game_skulls, enum e_game_skulls) const
//{
//    mangled_ppc("?test_range@?$c_flags_no_init@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@QBA_NW4e_game_skulls@@0@Z");
//};

//public: long c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: class c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_5?$c_flags_no_init@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: bool c_flags_no_init<enum e_survival_wave_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_survival_wave_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_survival_wave_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_survival_wave_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_survival_variant_flags, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_survival_variant_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_survival_variant_flags@@E$04Us_default_enum_string_resolver@@@@QBA_NW4e_survival_variant_flags@@@Z");
//};

//public: char c_game_engine_option<struct s_survival_wave_properties::c_wave_squad_count_game_engine_option_metadata>::get_value(void) const
//{
//    mangled_ppc("?get_value@?$c_game_engine_option@Uc_wave_squad_count_game_engine_option_metadata@s_survival_wave_properties@@@@QBADXZ");
//};

//public: char c_game_engine_option<struct s_survival_wave_properties::c_possible_wave_squad_game_engine_option_metadata>::get_value(void) const
//{
//    mangled_ppc("?get_value@?$c_game_engine_option@Uc_possible_wave_squad_game_engine_option_metadata@s_survival_wave_properties@@@@QBADXZ");
//};

//public: unsigned long c_game_engine_option<struct c_skull_flags_game_engine_option_metadata>::get_value(void) const
//{
//    mangled_ppc("?get_value@?$c_game_engine_option@Uc_skull_flags_game_engine_option_metadata@@@@QBAKXZ");
//};

//public: short c_game_engine_option<struct s_survival_bonus_round_properties::c_duration_seconds_game_engine_option_metadata>::get_value(void) const
//{
//    mangled_ppc("?get_value@?$c_game_engine_option@Uc_duration_seconds_game_engine_option_metadata@s_survival_bonus_round_properties@@@@QBAFXZ");
//};

//public: unsigned char c_game_engine_option<struct c_game_engine_survival_variant::c_set_count_game_engine_option_metadata>::get_value(void) const
//{
//    mangled_ppc("?get_value@?$c_game_engine_option@Uc_set_count_game_engine_option_metadata@c_game_engine_survival_variant@@@@QBAEXZ");
//};

//public: char c_game_engine_option<struct c_game_engine_survival_variant::c_bonus_lives_awarded_game_engine_option_metadata>::get_value(void) const
//{
//    mangled_ppc("?get_value@?$c_game_engine_option@Uc_bonus_lives_awarded_game_engine_option_metadata@c_game_engine_survival_variant@@@@QBADXZ");
//};

//public: short c_game_engine_option<struct c_game_engine_survival_variant::c_bonus_target_game_engine_option_metadata>::get_value(void) const
//{
//    mangled_ppc("?get_value@?$c_game_engine_option@Uc_bonus_target_game_engine_option_metadata@c_game_engine_survival_variant@@@@QBAFXZ");
//};

//public: short c_game_engine_option<struct c_game_engine_survival_variant::c_bonus_lives_on_elite_player_death_game_engine_option_metadata>::get_value(void) const
//{
//    mangled_ppc("?get_value@?$c_game_engine_option@Uc_bonus_lives_on_elite_player_death_game_engine_option_metadata@c_game_engine_survival_variant@@@@QBAFXZ");
//};

//public: short c_game_engine_option<struct c_game_engine_survival_variant::c_shared_team_life_count_game_engine_option_metadata>::get_value(void) const
//{
//    mangled_ppc("?get_value@?$c_game_engine_option@Uc_shared_team_life_count_game_engine_option_metadata@c_game_engine_survival_variant@@@@QBAFXZ");
//};

//public: short c_game_engine_option<struct c_game_engine_survival_variant::c_elite_life_count_game_engine_option_metadata>::get_value(void) const
//{
//    mangled_ppc("?get_value@?$c_game_engine_option@Uc_elite_life_count_game_engine_option_metadata@c_game_engine_survival_variant@@@@QBAFXZ");
//};

//public: short c_game_engine_option<struct c_game_engine_survival_variant::c_maximum_lives_game_engine_option_metadata>::get_value(void) const
//{
//    mangled_ppc("?get_value@?$c_game_engine_option@Uc_maximum_lives_game_engine_option_metadata@c_game_engine_survival_variant@@@@QBAFXZ");
//};

//public: short c_game_engine_option<struct c_game_engine_survival_variant::c_generator_count_game_engine_option_metadata>::get_value(void) const
//{
//    mangled_ppc("?get_value@?$c_game_engine_option@Uc_generator_count_game_engine_option_metadata@c_game_engine_survival_variant@@@@QBAFXZ");
//};

//public: struct s_survival_round_properties const & s_static_array<struct s_survival_round_properties, 3>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_survival_round_properties@@$02@@QBAABUs_survival_round_properties@@J@Z");
//};

//public: struct s_custom_skull const & s_static_array<struct s_custom_skull, 3>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_custom_skull@@$02@@QBAABUs_custom_skull@@J@Z");
//};

//public: struct s_survival_license_plate & s_static_array<struct s_survival_license_plate, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_survival_license_plate@@$01@@QAAAAUs_survival_license_plate@@J@Z");
//};

//public: struct s_survival_license_plate & s_static_array<struct s_survival_license_plate, 2>::operator[]<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator)
//{
//    mangled_ppc("??$?AW4e_multiplayer_team_designator@@@?$s_static_array@Us_survival_license_plate@@$01@@QAAAAUs_survival_license_plate@@W4e_multiplayer_team_designator@@@Z");
//};

//public: struct s_survival_accumulator_player_satastics & s_static_array<struct s_survival_accumulator_player_satastics, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_survival_accumulator_player_satastics@@$0BA@@@QAAAAUs_survival_accumulator_player_satastics@@J@Z");
//};

//public: struct s_survival_accumulator_player_satastics const & s_static_array<struct s_survival_accumulator_player_satastics, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_survival_accumulator_player_satastics@@$0BA@@@QBAABUs_survival_accumulator_player_satastics@@J@Z");
//};

//public: long & s_static_array<long, 8>::operator[]<enum e_campaign_team>(enum e_campaign_team)
//{
//    mangled_ppc("??$?AW4e_campaign_team@@@?$s_static_array@J$07@@QAAAAJW4e_campaign_team@@@Z");
//};

//public: struct c_weighted_randomizer<long, 12>::s_weighted_entry & s_static_array<struct c_weighted_randomizer<long, 12>::s_weighted_entry, 12>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_weighted_entry@?$c_weighted_randomizer@J$0M@@@$0M@@@QAAAAUs_weighted_entry@?$c_weighted_randomizer@J$0M@@@J@Z");
//};

//public: static bool c_flags_no_init<enum e_survival_wave_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_survival_wave_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_survival_wave_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_survival_wave_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_survival_wave_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_survival_wave_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_survival_wave_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_survival_wave_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_survival_variant_flags, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_survival_variant_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_survival_variant_flags@@E$04Us_default_enum_string_resolver@@@@SA_NW4e_survival_variant_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_survival_variant_flags, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_survival_variant_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_survival_variant_flags@@E$04Us_default_enum_string_resolver@@@@CAEW4e_survival_variant_flags@@@Z");
//};

//protected: void c_game_engine_option<struct s_survival_wave_properties::c_wave_squad_count_game_engine_option_metadata>::assert_parameters_valid(void) const
//{
//    mangled_ppc("?assert_parameters_valid@?$c_game_engine_option@Uc_wave_squad_count_game_engine_option_metadata@s_survival_wave_properties@@@@IBAXXZ");
//};

//protected: void c_game_engine_option<struct s_survival_wave_properties::c_possible_wave_squad_game_engine_option_metadata>::assert_parameters_valid(void) const
//{
//    mangled_ppc("?assert_parameters_valid@?$c_game_engine_option@Uc_possible_wave_squad_game_engine_option_metadata@s_survival_wave_properties@@@@IBAXXZ");
//};

//protected: void c_game_engine_option<struct c_skull_flags_game_engine_option_metadata>::assert_parameters_valid(void) const
//{
//    mangled_ppc("?assert_parameters_valid@?$c_game_engine_option@Uc_skull_flags_game_engine_option_metadata@@@@IBAXXZ");
//};

//protected: void c_game_engine_option<struct s_survival_bonus_round_properties::c_duration_seconds_game_engine_option_metadata>::assert_parameters_valid(void) const
//{
//    mangled_ppc("?assert_parameters_valid@?$c_game_engine_option@Uc_duration_seconds_game_engine_option_metadata@s_survival_bonus_round_properties@@@@IBAXXZ");
//};

//protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_set_count_game_engine_option_metadata>::assert_parameters_valid(void) const
//{
//    mangled_ppc("?assert_parameters_valid@?$c_game_engine_option@Uc_set_count_game_engine_option_metadata@c_game_engine_survival_variant@@@@IBAXXZ");
//};

//protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_bonus_lives_awarded_game_engine_option_metadata>::assert_parameters_valid(void) const
//{
//    mangled_ppc("?assert_parameters_valid@?$c_game_engine_option@Uc_bonus_lives_awarded_game_engine_option_metadata@c_game_engine_survival_variant@@@@IBAXXZ");
//};

//protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_bonus_target_game_engine_option_metadata>::assert_parameters_valid(void) const
//{
//    mangled_ppc("?assert_parameters_valid@?$c_game_engine_option@Uc_bonus_target_game_engine_option_metadata@c_game_engine_survival_variant@@@@IBAXXZ");
//};

//protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_bonus_lives_on_elite_player_death_game_engine_option_metadata>::assert_parameters_valid(void) const
//{
//    mangled_ppc("?assert_parameters_valid@?$c_game_engine_option@Uc_bonus_lives_on_elite_player_death_game_engine_option_metadata@c_game_engine_survival_variant@@@@IBAXXZ");
//};

//protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_shared_team_life_count_game_engine_option_metadata>::assert_parameters_valid(void) const
//{
//    mangled_ppc("?assert_parameters_valid@?$c_game_engine_option@Uc_shared_team_life_count_game_engine_option_metadata@c_game_engine_survival_variant@@@@IBAXXZ");
//};

//protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_elite_life_count_game_engine_option_metadata>::assert_parameters_valid(void) const
//{
//    mangled_ppc("?assert_parameters_valid@?$c_game_engine_option@Uc_elite_life_count_game_engine_option_metadata@c_game_engine_survival_variant@@@@IBAXXZ");
//};

//protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_maximum_lives_game_engine_option_metadata>::assert_parameters_valid(void) const
//{
//    mangled_ppc("?assert_parameters_valid@?$c_game_engine_option@Uc_maximum_lives_game_engine_option_metadata@c_game_engine_survival_variant@@@@IBAXXZ");
//};

//protected: void c_game_engine_option<struct c_game_engine_survival_variant::c_generator_count_game_engine_option_metadata>::assert_parameters_valid(void) const
//{
//    mangled_ppc("?assert_parameters_valid@?$c_game_engine_option@Uc_generator_count_game_engine_option_metadata@c_game_engine_survival_variant@@@@IBAXXZ");
//};

//public: static bool s_static_array<struct s_survival_round_properties, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_survival_round_properties@@$02@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_custom_skull, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_custom_skull@@$02@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_survival_license_plate, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_survival_license_plate@@$01@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_survival_license_plate, 2>::valid<enum e_multiplayer_team_designator>(enum e_multiplayer_team_designator)
//{
//    mangled_ppc("??$valid@W4e_multiplayer_team_designator@@@?$s_static_array@Us_survival_license_plate@@$01@@SA_NW4e_multiplayer_team_designator@@@Z");
//};

//public: static bool s_static_array<struct s_survival_accumulator_player_satastics, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_survival_accumulator_player_satastics@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 8>::valid<enum e_campaign_team>(enum e_campaign_team)
//{
//    mangled_ppc("??$valid@W4e_campaign_team@@@?$s_static_array@J$07@@SA_NW4e_campaign_team@@@Z");
//};

//public: static bool s_static_array<struct c_weighted_randomizer<long, 12>::s_weighted_entry, 12>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_weighted_entry@?$c_weighted_randomizer@J$0M@@@$0M@@@SA_NJ@Z");
//};

//public: c_survival_engine::c_survival_engine(void)
//{
//    mangled_ppc("??0c_survival_engine@@QAA@XZ");
//};

//public: virtual bool c_survival_engine::desires_teleporters(void) const
//{
//    mangled_ppc("?desires_teleporters@c_survival_engine@@UBA_NXZ");
//};

