/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_initial_participants_setup_flags const c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_initial_participants_setup_flags@@E$01Us_default_enum_string_resolver@@@@2W4e_initial_participants_setup_flags@@B"
// char const **k_arbitration_failsafe_stage_descriptions; // "?k_arbitration_failsafe_stage_descriptions@@3PAPBDA"

// public: void c_life_cycle_state_handler_matchmaking_arbitration::initialize(class c_life_cycle_state_manager *);
// public: void c_life_cycle_state_handler_matchmaking_arbitration::dispose(void);
// public: void c_life_cycle_state_handler_matchmaking_arbitration::get_progress(struct s_life_cycle_matchmaking_progress *);
// public: class c_flags_no_init<enum e_network_session_matchmaking_composition_build_flags, unsigned char, 3, struct s_default_enum_string_resolver> c_life_cycle_state_handler_matchmaking_arbitration::get_matchmaking_composition_build_flags(void);
// public: bool c_hopper_configuration::is_team_matching_enabled(void) const;
// public: virtual void c_life_cycle_state_handler_matchmaking_arbitration::update(void);
// public: bool c_hopper_configuration::require_hosts_on_multiple_teams(void) const;
// public: bool c_hopper_configuration::get_games_use_syncronous_networking(void) const;
// public: bool c_hopper_configuration::get_games_are_campaign(void) const;
// public: bool c_hopper_configuration::get_games_are_firefight(void) const;
// public: bool c_hopper_configuration::should_modify_skill_update_weight_with_game_quality(void) const;
// long network_time_since(unsigned long);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: virtual enum e_life_cycle_state_transition_type c_life_cycle_state_handler_matchmaking_arbitration::update_for_state_transition(long);
// public: virtual void c_life_cycle_state_handler_matchmaking_arbitration::enter(class c_life_cycle_state_handler *, long, void *);
// public: virtual void c_life_cycle_state_handler_matchmaking_arbitration::exit(class c_life_cycle_state_handler *);
// public: virtual void c_life_cycle_state_handler_matchmaking_arbitration::handle_missing_required_session_parameter(enum e_life_cycle_session_type);
// private: void c_life_cycle_state_handler_matchmaking_arbitration::update_progress(void);
// private: void c_life_cycle_state_handler_matchmaking_arbitration::update_arbitration(void);
// private: bool c_life_cycle_state_handler_matchmaking_arbitration::session_membership_matches_arbitration_registration_results(void);
// public: bool c_hopper_configuration::is_arbitrated(void) const;
// private: void c_life_cycle_state_handler_matchmaking_arbitration::mark_arbitration_complete(void);
// private: void c_life_cycle_state_handler_matchmaking_arbitration::mark_arbitration_failed(void);
// private: void c_life_cycle_state_handler_matchmaking_arbitration::update_start_match(void);
// private: void c_life_cycle_state_handler_matchmaking_arbitration::update_initial_stats_write(void);
// private: bool c_life_cycle_state_handler_matchmaking_arbitration::ready_to_start(void);
// private: void c_life_cycle_state_handler_matchmaking_arbitration::start_match_mark_complete(void);
// private: void c_life_cycle_state_handler_matchmaking_arbitration::start_match_mark_failed(void);
// private: void c_life_cycle_state_handler_matchmaking_arbitration::initial_stats_write_mark_complete(void);
// private: void c_life_cycle_state_handler_matchmaking_arbitration::initial_stats_write_mark_failed(void);
// private: bool c_life_cycle_state_handler_matchmaking_arbitration::ready_to_update_repeated_play(void);
// private: void c_life_cycle_state_handler_matchmaking_arbitration::update_repeated_play(void);
// private: void c_life_cycle_state_handler_matchmaking_arbitration::advance_failsafe_stage(enum e_arbitration_failsafe_stage);
// public: void c_flags_no_init<enum e_network_session_matchmaking_composition_build_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_network_session_matchmaking_composition_build_flags, bool);
// public: bool c_flags_no_init<enum e_matchmaking_arbitration_flags, unsigned long, 21, struct s_default_enum_string_resolver>::test(enum e_matchmaking_arbitration_flags) const;
// public: void c_flags_no_init<enum e_matchmaking_arbitration_flags, unsigned long, 21, struct s_default_enum_string_resolver>::set(enum e_matchmaking_arbitration_flags, bool);
// public: void c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_initial_participants_setup_flags, bool);
// public: c_flags<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: unsigned long const * c_big_flags_typed_no_init<long, 16>::get_bits_direct(void) const;
// public: static bool c_flags_no_init<enum e_network_session_matchmaking_composition_build_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_network_session_matchmaking_composition_build_flags);
// private: static unsigned char c_flags_no_init<enum e_network_session_matchmaking_composition_build_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_session_matchmaking_composition_build_flags);
// public: static bool c_flags_no_init<enum e_matchmaking_arbitration_flags, unsigned long, 21, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_arbitration_flags);
// private: static unsigned long c_flags_no_init<enum e_matchmaking_arbitration_flags, unsigned long, 21, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_arbitration_flags);
// public: bool c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_initial_participants_setup_flags);
// private: static unsigned char c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_initial_participants_setup_flags);
// private: static unsigned char c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_initial_participants_setup_flags);

//public: void c_life_cycle_state_handler_matchmaking_arbitration::initialize(class c_life_cycle_state_manager *)
//{
//    mangled_ppc("?initialize@c_life_cycle_state_handler_matchmaking_arbitration@@QAAXPAVc_life_cycle_state_manager@@@Z");
//};

//public: void c_life_cycle_state_handler_matchmaking_arbitration::dispose(void)
//{
//    mangled_ppc("?dispose@c_life_cycle_state_handler_matchmaking_arbitration@@QAAXXZ");
//};

//public: void c_life_cycle_state_handler_matchmaking_arbitration::get_progress(struct s_life_cycle_matchmaking_progress *)
//{
//    mangled_ppc("?get_progress@c_life_cycle_state_handler_matchmaking_arbitration@@QAAXPAUs_life_cycle_matchmaking_progress@@@Z");
//};

//public: class c_flags_no_init<enum e_network_session_matchmaking_composition_build_flags, unsigned char, 3, struct s_default_enum_string_resolver> c_life_cycle_state_handler_matchmaking_arbitration::get_matchmaking_composition_build_flags(void)
//{
//    mangled_ppc("?get_matchmaking_composition_build_flags@c_life_cycle_state_handler_matchmaking_arbitration@@QAA?AV?$c_flags_no_init@W4e_network_session_matchmaking_composition_build_flags@@E$02Us_default_enum_string_resolver@@@@XZ");
//};

//public: bool c_hopper_configuration::is_team_matching_enabled(void) const
//{
//    mangled_ppc("?is_team_matching_enabled@c_hopper_configuration@@QBA_NXZ");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_arbitration::update(void)
//{
//    mangled_ppc("?update@c_life_cycle_state_handler_matchmaking_arbitration@@UAAXXZ");
//};

//public: bool c_hopper_configuration::require_hosts_on_multiple_teams(void) const
//{
//    mangled_ppc("?require_hosts_on_multiple_teams@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::get_games_use_syncronous_networking(void) const
//{
//    mangled_ppc("?get_games_use_syncronous_networking@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::get_games_are_campaign(void) const
//{
//    mangled_ppc("?get_games_are_campaign@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::get_games_are_firefight(void) const
//{
//    mangled_ppc("?get_games_are_firefight@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::should_modify_skill_update_weight_with_game_quality(void) const
//{
//    mangled_ppc("?should_modify_skill_update_weight_with_game_quality@c_hopper_configuration@@QBA_NXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//public: virtual enum e_life_cycle_state_transition_type c_life_cycle_state_handler_matchmaking_arbitration::update_for_state_transition(long)
//{
//    mangled_ppc("?update_for_state_transition@c_life_cycle_state_handler_matchmaking_arbitration@@UAA?AW4e_life_cycle_state_transition_type@@J@Z");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_arbitration::enter(class c_life_cycle_state_handler *, long, void *)
//{
//    mangled_ppc("?enter@c_life_cycle_state_handler_matchmaking_arbitration@@UAAXPAVc_life_cycle_state_handler@@JPAX@Z");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_arbitration::exit(class c_life_cycle_state_handler *)
//{
//    mangled_ppc("?exit@c_life_cycle_state_handler_matchmaking_arbitration@@UAAXPAVc_life_cycle_state_handler@@@Z");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_arbitration::handle_missing_required_session_parameter(enum e_life_cycle_session_type)
//{
//    mangled_ppc("?handle_missing_required_session_parameter@c_life_cycle_state_handler_matchmaking_arbitration@@UAAXW4e_life_cycle_session_type@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_arbitration::update_progress(void)
//{
//    mangled_ppc("?update_progress@c_life_cycle_state_handler_matchmaking_arbitration@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_arbitration::update_arbitration(void)
//{
//    mangled_ppc("?update_arbitration@c_life_cycle_state_handler_matchmaking_arbitration@@AAAXXZ");
//};

//private: bool c_life_cycle_state_handler_matchmaking_arbitration::session_membership_matches_arbitration_registration_results(void)
//{
//    mangled_ppc("?session_membership_matches_arbitration_registration_results@c_life_cycle_state_handler_matchmaking_arbitration@@AAA_NXZ");
//};

//public: bool c_hopper_configuration::is_arbitrated(void) const
//{
//    mangled_ppc("?is_arbitrated@c_hopper_configuration@@QBA_NXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_arbitration::mark_arbitration_complete(void)
//{
//    mangled_ppc("?mark_arbitration_complete@c_life_cycle_state_handler_matchmaking_arbitration@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_arbitration::mark_arbitration_failed(void)
//{
//    mangled_ppc("?mark_arbitration_failed@c_life_cycle_state_handler_matchmaking_arbitration@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_arbitration::update_start_match(void)
//{
//    mangled_ppc("?update_start_match@c_life_cycle_state_handler_matchmaking_arbitration@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_arbitration::update_initial_stats_write(void)
//{
//    mangled_ppc("?update_initial_stats_write@c_life_cycle_state_handler_matchmaking_arbitration@@AAAXXZ");
//};

//private: bool c_life_cycle_state_handler_matchmaking_arbitration::ready_to_start(void)
//{
//    mangled_ppc("?ready_to_start@c_life_cycle_state_handler_matchmaking_arbitration@@AAA_NXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_arbitration::start_match_mark_complete(void)
//{
//    mangled_ppc("?start_match_mark_complete@c_life_cycle_state_handler_matchmaking_arbitration@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_arbitration::start_match_mark_failed(void)
//{
//    mangled_ppc("?start_match_mark_failed@c_life_cycle_state_handler_matchmaking_arbitration@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_arbitration::initial_stats_write_mark_complete(void)
//{
//    mangled_ppc("?initial_stats_write_mark_complete@c_life_cycle_state_handler_matchmaking_arbitration@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_arbitration::initial_stats_write_mark_failed(void)
//{
//    mangled_ppc("?initial_stats_write_mark_failed@c_life_cycle_state_handler_matchmaking_arbitration@@AAAXXZ");
//};

//private: bool c_life_cycle_state_handler_matchmaking_arbitration::ready_to_update_repeated_play(void)
//{
//    mangled_ppc("?ready_to_update_repeated_play@c_life_cycle_state_handler_matchmaking_arbitration@@AAA_NXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_arbitration::update_repeated_play(void)
//{
//    mangled_ppc("?update_repeated_play@c_life_cycle_state_handler_matchmaking_arbitration@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_arbitration::advance_failsafe_stage(enum e_arbitration_failsafe_stage)
//{
//    mangled_ppc("?advance_failsafe_stage@c_life_cycle_state_handler_matchmaking_arbitration@@AAAXW4e_arbitration_failsafe_stage@@@Z");
//};

//public: void c_flags_no_init<enum e_network_session_matchmaking_composition_build_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_network_session_matchmaking_composition_build_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_session_matchmaking_composition_build_flags@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_network_session_matchmaking_composition_build_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_matchmaking_arbitration_flags, unsigned long, 21, struct s_default_enum_string_resolver>::test(enum e_matchmaking_arbitration_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_matchmaking_arbitration_flags@@K$0BF@Us_default_enum_string_resolver@@@@QBA_NW4e_matchmaking_arbitration_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_matchmaking_arbitration_flags, unsigned long, 21, struct s_default_enum_string_resolver>::set(enum e_matchmaking_arbitration_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_matchmaking_arbitration_flags@@K$0BF@Us_default_enum_string_resolver@@@@QAAXW4e_matchmaking_arbitration_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_initial_participants_setup_flags@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_initial_participants_setup_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_initial_participants_setup_flags@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_initial_participants_setup_flags@@_N@Z");
//};

//public: c_flags<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_initial_participants_setup_flags@@E$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: unsigned long const * c_big_flags_typed_no_init<long, 16>::get_bits_direct(void) const
//{
//    mangled_ppc("?get_bits_direct@?$c_big_flags_typed_no_init@J$0BA@@@QBAPBKXZ");
//};

//public: static bool c_flags_no_init<enum e_network_session_matchmaking_composition_build_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_network_session_matchmaking_composition_build_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_session_matchmaking_composition_build_flags@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_network_session_matchmaking_composition_build_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_session_matchmaking_composition_build_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_session_matchmaking_composition_build_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_session_matchmaking_composition_build_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_network_session_matchmaking_composition_build_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_matchmaking_arbitration_flags, unsigned long, 21, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_arbitration_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_matchmaking_arbitration_flags@@K$0BF@Us_default_enum_string_resolver@@@@SA_NW4e_matchmaking_arbitration_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_matchmaking_arbitration_flags, unsigned long, 21, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_arbitration_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_matchmaking_arbitration_flags@@K$0BF@Us_default_enum_string_resolver@@@@CAKW4e_matchmaking_arbitration_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_initial_participants_setup_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_initial_participants_setup_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_initial_participants_setup_flags@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_initial_participants_setup_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_initial_participants_setup_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_initial_participants_setup_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_initial_participants_setup_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_initial_participants_setup_flags@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_initial_participants_setup_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_initial_participants_setup_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_initial_participants_setup_flags@@@Z");
//};

