/* ---------- headers */

#include "omaha\networking\logic\life_cycle\life_cycle_handler_pre_game.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_life_cycle_state_handler_pre_game::initialize(class c_life_cycle_state_manager *);
// public: void c_life_cycle_state_handler_pre_game::dispose(void);
// public: virtual void c_life_cycle_state_handler_pre_game::update(void);
// public: virtual enum e_life_cycle_state_transition_type c_life_cycle_state_handler_pre_game::update_for_state_transition(long);
// public: virtual void c_life_cycle_state_handler_pre_game::enter(class c_life_cycle_state_handler *, long, void *);
// void cache_file_map_clear_all_failures(void);
// public: virtual void c_life_cycle_state_handler_pre_game::exit(class c_life_cycle_state_handler *);
// private: void c_life_cycle_state_handler_pre_game::leader_update_countdown(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// private: void c_life_cycle_state_handler_pre_game::host_update_countdown(void);
// bool saved_film_manager_film_valid(struct s_saved_film_reference const *);
// private: void c_life_cycle_state_handler_pre_game::matchmaking_host_update(void);
// public: short c_hopper_configuration::get_hopper_category_identifier(void) const;
// public: long c_hopper_configuration::get_image_index(void) const;
// public: long c_hopper_configuration::get_post_match_countdown_time_seconds(void) const;
// public: enum e_posse_formation c_hopper_configuration::get_posse_formation(void) const;
// public: long c_hopper_configuration::get_repeated_opponents_to_consider_for_penalty(void) const;
// public: long c_hopper_configuration::get_repeated_opponents_skill_throttle_start(void) const;
// public: long c_hopper_configuration::get_repeated_opponents_skill_throttle_stop(void) const;
// public: float c_hopper_configuration::get_trueskill_tau_dynamics_factor(void) const;
// public: long c_hopper_configuration::get_trueskill_draw_probability(void) const;
// public: enum e_hopper_voice_configuration c_hopper_configuration::get_pre_match_voice_configuration(void) const;
// public: enum e_hopper_voice_configuration c_hopper_configuration::get_in_match_voice_configuration(void) const;
// public: enum e_hopper_voice_configuration c_hopper_configuration::get_post_match_voice_configuration(void) const;
// public: bool c_hopper_configuration::get_restrict_open_channel(void) const;
// public: class c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver> c_hopper_configuration::get_player_investment_category(void) const;
// public: bool c_hopper_configuration::is_ranked(void) const;
// public: bool c_hopper_configuration::are_opponents_visible(void) const;
// public: bool c_hopper_configuration::uses_high_score_leaderboard(void) const;
// public: enum e_game_engine_team_options_model_override_type c_hopper_configuration::get_team_model_override(enum e_multiplayer_team) const;
// public: enum e_hopper_team_allegiance c_hopper_configuration::get_team_allegiance(enum e_multiplayer_team) const;
// public: enum e_game_engine_team_options_model_override_type c_hopper_configuration::get_ffa_model_override(void) const;
// public: bool c_hopper_configuration::uses_ffa_scoring_for_leaderboard_writes(void) const;
// private: void c_life_cycle_state_handler_pre_game::squad_game_start_status_update(void);
// private: void c_life_cycle_state_handler_pre_game::squad_game_start_warning_update(class c_network_session const *, struct s_network_session_parameter_game_start_status *);
// private: void c_life_cycle_state_handler_pre_game::clean_disallowed_parameters(void);
// public: class c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver>::operator=(enum e_posse_formation);
// public: c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum e_game_engine_team_options_model_override_type);
// public: class c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>::operator=(enum e_hopper_team_allegiance);
// public: bool c_enum_no_init<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_session_game_start_warning) const;
// public: bool c_enum_no_init<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>::operator==(enum e_session_game_start_status) const;
// public: unsigned long c_network_session_parameter_chunked<struct s_network_session_parameter_game_variant, 20480>::get_last_change_request_chunk_receive_time(void) const;
// public: unsigned long c_network_session_parameter_chunked<struct s_network_session_parameter_map_variant, 28672>::get_last_change_request_chunk_receive_time(void) const;
// public: void c_flags_no_init<unsigned char, unsigned short, 16, struct s_default_enum_string_resolver>::set(unsigned char, bool);
// public: void c_flags_no_init<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_network_session_matchmaking_hopper_flags, bool);
// public: bool c_flags_no_init<enum e_level_flags, unsigned short, 12, struct s_default_enum_string_resolver>::test(enum e_level_flags) const;
// public: struct s_network_session_matchmaking_hopper_team_data & s_static_array<struct s_network_session_matchmaking_hopper_team_data, 8>::operator[]<enum e_multiplayer_team>(enum e_multiplayer_team);
// public: static bool c_flags_no_init<unsigned char, unsigned short, 16, struct s_default_enum_string_resolver>::valid_bit(unsigned char);
// private: static unsigned short c_flags_no_init<unsigned char, unsigned short, 16, struct s_default_enum_string_resolver>::flag_size_type(unsigned char);
// public: static bool c_flags_no_init<enum e_level_flags, unsigned short, 12, struct s_default_enum_string_resolver>::valid_bit(enum e_level_flags);
// private: static unsigned short c_flags_no_init<enum e_level_flags, unsigned short, 12, struct s_default_enum_string_resolver>::flag_size_type(enum e_level_flags);

//public: void c_life_cycle_state_handler_pre_game::initialize(class c_life_cycle_state_manager *)
//{
//    mangled_ppc("?initialize@c_life_cycle_state_handler_pre_game@@QAAXPAVc_life_cycle_state_manager@@@Z");
//};

//public: void c_life_cycle_state_handler_pre_game::dispose(void)
//{
//    mangled_ppc("?dispose@c_life_cycle_state_handler_pre_game@@QAAXXZ");
//};

//public: virtual void c_life_cycle_state_handler_pre_game::update(void)
//{
//    mangled_ppc("?update@c_life_cycle_state_handler_pre_game@@UAAXXZ");
//};

//public: virtual enum e_life_cycle_state_transition_type c_life_cycle_state_handler_pre_game::update_for_state_transition(long)
//{
//    mangled_ppc("?update_for_state_transition@c_life_cycle_state_handler_pre_game@@UAA?AW4e_life_cycle_state_transition_type@@J@Z");
//};

//public: virtual void c_life_cycle_state_handler_pre_game::enter(class c_life_cycle_state_handler *, long, void *)
//{
//    mangled_ppc("?enter@c_life_cycle_state_handler_pre_game@@UAAXPAVc_life_cycle_state_handler@@JPAX@Z");
//};

//void cache_file_map_clear_all_failures(void)
//{
//    mangled_ppc("?cache_file_map_clear_all_failures@@YAXXZ");
//};

//public: virtual void c_life_cycle_state_handler_pre_game::exit(class c_life_cycle_state_handler *)
//{
//    mangled_ppc("?exit@c_life_cycle_state_handler_pre_game@@UAAXPAVc_life_cycle_state_handler@@@Z");
//};

//private: void c_life_cycle_state_handler_pre_game::leader_update_countdown(void)
//{
//    mangled_ppc("?leader_update_countdown@c_life_cycle_state_handler_pre_game@@AAAXXZ");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//private: void c_life_cycle_state_handler_pre_game::host_update_countdown(void)
//{
//    mangled_ppc("?host_update_countdown@c_life_cycle_state_handler_pre_game@@AAAXXZ");
//};

//bool saved_film_manager_film_valid(struct s_saved_film_reference const *)
//{
//    mangled_ppc("?saved_film_manager_film_valid@@YA_NPBUs_saved_film_reference@@@Z");
//};

//private: void c_life_cycle_state_handler_pre_game::matchmaking_host_update(void)
//{
//    mangled_ppc("?matchmaking_host_update@c_life_cycle_state_handler_pre_game@@AAAXXZ");
//};

//public: short c_hopper_configuration::get_hopper_category_identifier(void) const
//{
//    mangled_ppc("?get_hopper_category_identifier@c_hopper_configuration@@QBAFXZ");
//};

//public: long c_hopper_configuration::get_image_index(void) const
//{
//    mangled_ppc("?get_image_index@c_hopper_configuration@@QBAJXZ");
//};

//public: long c_hopper_configuration::get_post_match_countdown_time_seconds(void) const
//{
//    mangled_ppc("?get_post_match_countdown_time_seconds@c_hopper_configuration@@QBAJXZ");
//};

//public: enum e_posse_formation c_hopper_configuration::get_posse_formation(void) const
//{
//    mangled_ppc("?get_posse_formation@c_hopper_configuration@@QBA?AW4e_posse_formation@@XZ");
//};

//public: long c_hopper_configuration::get_repeated_opponents_to_consider_for_penalty(void) const
//{
//    mangled_ppc("?get_repeated_opponents_to_consider_for_penalty@c_hopper_configuration@@QBAJXZ");
//};

//public: long c_hopper_configuration::get_repeated_opponents_skill_throttle_start(void) const
//{
//    mangled_ppc("?get_repeated_opponents_skill_throttle_start@c_hopper_configuration@@QBAJXZ");
//};

//public: long c_hopper_configuration::get_repeated_opponents_skill_throttle_stop(void) const
//{
//    mangled_ppc("?get_repeated_opponents_skill_throttle_stop@c_hopper_configuration@@QBAJXZ");
//};

//public: float c_hopper_configuration::get_trueskill_tau_dynamics_factor(void) const
//{
//    mangled_ppc("?get_trueskill_tau_dynamics_factor@c_hopper_configuration@@QBAMXZ");
//};

//public: long c_hopper_configuration::get_trueskill_draw_probability(void) const
//{
//    mangled_ppc("?get_trueskill_draw_probability@c_hopper_configuration@@QBAJXZ");
//};

//public: enum e_hopper_voice_configuration c_hopper_configuration::get_pre_match_voice_configuration(void) const
//{
//    mangled_ppc("?get_pre_match_voice_configuration@c_hopper_configuration@@QBA?AW4e_hopper_voice_configuration@@XZ");
//};

//public: enum e_hopper_voice_configuration c_hopper_configuration::get_in_match_voice_configuration(void) const
//{
//    mangled_ppc("?get_in_match_voice_configuration@c_hopper_configuration@@QBA?AW4e_hopper_voice_configuration@@XZ");
//};

//public: enum e_hopper_voice_configuration c_hopper_configuration::get_post_match_voice_configuration(void) const
//{
//    mangled_ppc("?get_post_match_voice_configuration@c_hopper_configuration@@QBA?AW4e_hopper_voice_configuration@@XZ");
//};

//public: bool c_hopper_configuration::get_restrict_open_channel(void) const
//{
//    mangled_ppc("?get_restrict_open_channel@c_hopper_configuration@@QBA_NXZ");
//};

//public: class c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver> c_hopper_configuration::get_player_investment_category(void) const
//{
//    mangled_ppc("?get_player_investment_category@c_hopper_configuration@@QBA?AV?$c_enum@W4e_hopper_player_investment_category@@E$0A@$02Us_default_enum_string_resolver@@@@XZ");
//};

//public: bool c_hopper_configuration::is_ranked(void) const
//{
//    mangled_ppc("?is_ranked@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::are_opponents_visible(void) const
//{
//    mangled_ppc("?are_opponents_visible@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::uses_high_score_leaderboard(void) const
//{
//    mangled_ppc("?uses_high_score_leaderboard@c_hopper_configuration@@QBA_NXZ");
//};

//public: enum e_game_engine_team_options_model_override_type c_hopper_configuration::get_team_model_override(enum e_multiplayer_team) const
//{
//    mangled_ppc("?get_team_model_override@c_hopper_configuration@@QBA?AW4e_game_engine_team_options_model_override_type@@W4e_multiplayer_team@@@Z");
//};

//public: enum e_hopper_team_allegiance c_hopper_configuration::get_team_allegiance(enum e_multiplayer_team) const
//{
//    mangled_ppc("?get_team_allegiance@c_hopper_configuration@@QBA?AW4e_hopper_team_allegiance@@W4e_multiplayer_team@@@Z");
//};

//public: enum e_game_engine_team_options_model_override_type c_hopper_configuration::get_ffa_model_override(void) const
//{
//    mangled_ppc("?get_ffa_model_override@c_hopper_configuration@@QBA?AW4e_game_engine_team_options_model_override_type@@XZ");
//};

//public: bool c_hopper_configuration::uses_ffa_scoring_for_leaderboard_writes(void) const
//{
//    mangled_ppc("?uses_ffa_scoring_for_leaderboard_writes@c_hopper_configuration@@QBA_NXZ");
//};

//private: void c_life_cycle_state_handler_pre_game::squad_game_start_status_update(void)
//{
//    mangled_ppc("?squad_game_start_status_update@c_life_cycle_state_handler_pre_game@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_pre_game::squad_game_start_warning_update(class c_network_session const *, struct s_network_session_parameter_game_start_status *)
//{
//    mangled_ppc("?squad_game_start_warning_update@c_life_cycle_state_handler_pre_game@@AAAXPBVc_network_session@@PAUs_network_session_parameter_game_start_status@@@Z");
//};

//private: void c_life_cycle_state_handler_pre_game::clean_disallowed_parameters(void)
//{
//    mangled_ppc("?clean_disallowed_parameters@c_life_cycle_state_handler_pre_game@@AAAXXZ");
//};

//public: class c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver>::operator=(enum e_posse_formation)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_posse_formation@@W41@$0A@$03Us_default_enum_string_resolver@@@@QAAAAV0@W4e_posse_formation@@@Z");
//};

//public: c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum e_game_engine_team_options_model_override_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@QAA@W4e_game_engine_team_options_model_override_type@@@Z");
//};

//public: class c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>::operator=(enum e_hopper_team_allegiance)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_hopper_team_allegiance@@E$0A@$07Us_default_enum_string_resolver@@@@QAAAAV0@W4e_hopper_team_allegiance@@@Z");
//};

//public: bool c_enum_no_init<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_session_game_start_warning) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_session_game_start_warning@@D$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_session_game_start_warning@@@Z");
//};

//public: bool c_enum_no_init<enum e_session_game_start_status, char, 0, 9, struct s_default_enum_string_resolver>::operator==(enum e_session_game_start_status) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_session_game_start_status@@D$0A@$08Us_default_enum_string_resolver@@@@QBA_NW4e_session_game_start_status@@@Z");
//};

//public: unsigned long c_network_session_parameter_chunked<struct s_network_session_parameter_game_variant, 20480>::get_last_change_request_chunk_receive_time(void) const
//{
//    mangled_ppc("?get_last_change_request_chunk_receive_time@?$c_network_session_parameter_chunked@Us_network_session_parameter_game_variant@@$0FAAA@@@QBAKXZ");
//};

//public: unsigned long c_network_session_parameter_chunked<struct s_network_session_parameter_map_variant, 28672>::get_last_change_request_chunk_receive_time(void) const
//{
//    mangled_ppc("?get_last_change_request_chunk_receive_time@?$c_network_session_parameter_chunked@Us_network_session_parameter_map_variant@@$0HAAA@@@QBAKXZ");
//};

//public: void c_flags_no_init<unsigned char, unsigned short, 16, struct s_default_enum_string_resolver>::set(unsigned char, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@EG$0BA@Us_default_enum_string_resolver@@@@QAAXE_N@Z");
//};

//public: void c_flags_no_init<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_network_session_matchmaking_hopper_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_session_matchmaking_hopper_flags@@G$08Us_default_enum_string_resolver@@@@QAAXW4e_network_session_matchmaking_hopper_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_level_flags, unsigned short, 12, struct s_default_enum_string_resolver>::test(enum e_level_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_level_flags@@G$0M@Us_default_enum_string_resolver@@@@QBA_NW4e_level_flags@@@Z");
//};

//public: struct s_network_session_matchmaking_hopper_team_data & s_static_array<struct s_network_session_matchmaking_hopper_team_data, 8>::operator[]<enum e_multiplayer_team>(enum e_multiplayer_team)
//{
//    mangled_ppc("??$?AW4e_multiplayer_team@@@?$s_static_array@Us_network_session_matchmaking_hopper_team_data@@$07@@QAAAAUs_network_session_matchmaking_hopper_team_data@@W4e_multiplayer_team@@@Z");
//};

//public: static bool c_flags_no_init<unsigned char, unsigned short, 16, struct s_default_enum_string_resolver>::valid_bit(unsigned char)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@EG$0BA@Us_default_enum_string_resolver@@@@SA_NE@Z");
//};

//private: static unsigned short c_flags_no_init<unsigned char, unsigned short, 16, struct s_default_enum_string_resolver>::flag_size_type(unsigned char)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@EG$0BA@Us_default_enum_string_resolver@@@@CAGE@Z");
//};

//public: static bool c_flags_no_init<enum e_level_flags, unsigned short, 12, struct s_default_enum_string_resolver>::valid_bit(enum e_level_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_level_flags@@G$0M@Us_default_enum_string_resolver@@@@SA_NW4e_level_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_level_flags, unsigned short, 12, struct s_default_enum_string_resolver>::flag_size_type(enum e_level_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_level_flags@@G$0M@Us_default_enum_string_resolver@@@@CAGW4e_level_flags@@@Z");
//};

