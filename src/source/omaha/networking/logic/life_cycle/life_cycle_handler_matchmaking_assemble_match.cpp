/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_life_cycle_component_gather_start_flags const c_flags_no_init<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_life_cycle_component_gather_start_flags@@E$01Us_default_enum_string_resolver@@@@2W4e_life_cycle_component_gather_start_flags@@B"
// public: static enum e_life_cycle_component_search_update_flags const c_flags_no_init<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_life_cycle_component_search_update_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_life_cycle_component_search_update_flags@@B"

// public: void c_life_cycle_state_handler_matchmaking_assemble_match::initialize(class c_life_cycle_state_manager *);
// public: void c_life_cycle_state_handler_matchmaking_assemble_match::dispose(void);
// public: void c_life_cycle_state_handler_matchmaking_assemble_match::get_progress(struct s_life_cycle_matchmaking_progress *);
// public: long c_network_session_membership::get_established_player_count(void) const;
// public: bool c_life_cycle_state_handler_matchmaking_assemble_match::get_search_party_properties(struct s_matchmaking_search_party_properties *);
// public: bool c_life_cycle_state_handler_matchmaking_assemble_match::get_gather_party_properties(struct s_matchmaking_gather_party_properties *);
// public: bool c_life_cycle_state_handler_matchmaking_assemble_match::is_gathering(void) const;
// public: virtual void c_life_cycle_state_handler_matchmaking_assemble_match::update(void);
// public: virtual enum e_life_cycle_state_transition_type c_life_cycle_state_handler_matchmaking_assemble_match::update_for_state_transition(long);
// public: virtual void c_life_cycle_state_handler_matchmaking_assemble_match::enter(class c_life_cycle_state_handler *, long, void *);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// public: virtual void c_life_cycle_state_handler_matchmaking_assemble_match::exit(class c_life_cycle_state_handler *);
// public: virtual void c_life_cycle_state_handler_matchmaking_assemble_match::handle_missing_required_session_parameter(enum e_life_cycle_session_type);
// private: void c_life_cycle_state_handler_matchmaking_assemble_match::update_progress(void);
// private: void c_life_cycle_state_handler_matchmaking_assemble_match::update_group(void);
// private: void c_life_cycle_state_handler_matchmaking_assemble_match::update_posse(void);
// private: void c_life_cycle_state_handler_matchmaking_assemble_match::update_role(void);
// public: long c_hopper_configuration::get_team_matchmaking_team_size(void) const;
// public: enum e_multiplayer_team c_hopper_configuration::get_first_valid_team(void) const;
// private: void c_life_cycle_state_handler_matchmaking_assemble_match::update_searching(void);
// private: void c_life_cycle_state_handler_matchmaking_assemble_match::update_gathering(void);
// private: bool c_life_cycle_state_handler_matchmaking_assemble_match::continue_updating_posse(void);
// private: bool c_life_cycle_state_handler_matchmaking_assemble_match::continue_updating_group(void);
// public: long c_hopper_configuration::get_gather_give_up_seconds(void) const;
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// private: bool c_life_cycle_state_handler_matchmaking_assemble_match::ready_to_start(void);
// public: long c_hopper_configuration::get_minimum_player_count(void) const;
// public: long c_hopper_configuration::get_minimum_team_count(void) const;
// public: long c_hopper_configuration::get_minimum_team_size(enum e_multiplayer_team) const;
// private: bool c_life_cycle_state_handler_matchmaking_assemble_match::ready_to_lockdown(void);
// public: long c_hopper_configuration::get_gather_start_game_early_seconds(void) const;
// private: unsigned long c_life_cycle_state_handler_matchmaking_assemble_match::get_peer_mask_to_evict_for_team_balance(void);
// private: class c_flags<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver> c_life_cycle_state_handler_matchmaking_assemble_match::build_gather_start_flags(void);
// public: class c_flags_no_init<enum e_network_session_matchmaking_composition_build_flags, unsigned char, 3, struct s_default_enum_string_resolver> c_life_cycle_state_handler_matchmaking_assemble_match::get_matchmaking_composition_build_flags(void);
// public: char const * s_static_string<32>::append_print(char const *, ...);
// public: bool c_flags_no_init<enum e_matchmaking_assemble_match_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_matchmaking_assemble_match_flags) const;
// public: void c_flags_no_init<enum e_matchmaking_assemble_match_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_matchmaking_assemble_match_flags, bool);
// public: void c_flags_no_init<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_life_cycle_component_gather_start_flags, bool);
// public: c_flags<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_life_cycle_component_search_update_flags, bool);
// public: c_flags<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: struct s_network_session_matchmaking_composition_parties & s_static_array<struct s_network_session_matchmaking_composition_parties, 2>::operator[]<enum e_life_cycle_session_type>(enum e_life_cycle_session_type);
// public: struct s_matchmaking_session_player_properties & s_static_array<struct s_matchmaking_session_player_properties, 16>::operator[]<long>(long);
// public: long & s_static_array<long, 2>::operator[]<enum e_life_cycle_session_type>(enum e_life_cycle_session_type);
// public: struct s_network_session_party_matchmaking_composition & s_static_array<struct s_network_session_party_matchmaking_composition, 16>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum e_matchmaking_assemble_match_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_assemble_match_flags);
// private: static unsigned char c_flags_no_init<enum e_matchmaking_assemble_match_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_assemble_match_flags);
// public: void c_flags_no_init<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_life_cycle_component_gather_start_flags);
// private: static unsigned char c_flags_no_init<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_life_cycle_component_gather_start_flags);
// public: void c_flags_no_init<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_life_cycle_component_search_update_flags);
// private: static unsigned char c_flags_no_init<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_life_cycle_component_search_update_flags);
// public: static bool s_static_array<struct s_network_session_matchmaking_composition_parties, 2>::valid<enum e_life_cycle_session_type>(enum e_life_cycle_session_type);
// public: static bool s_static_array<struct s_matchmaking_session_player_properties, 16>::valid<long>(long);
// public: static bool s_static_array<long, 2>::valid<enum e_life_cycle_session_type>(enum e_life_cycle_session_type);
// public: static bool s_static_array<struct s_network_session_party_matchmaking_composition, 16>::valid<long>(long);
// private: static unsigned char c_flags_no_init<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_life_cycle_component_gather_start_flags);
// private: static unsigned char c_flags_no_init<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_life_cycle_component_search_update_flags);

//public: void c_life_cycle_state_handler_matchmaking_assemble_match::initialize(class c_life_cycle_state_manager *)
//{
//    mangled_ppc("?initialize@c_life_cycle_state_handler_matchmaking_assemble_match@@QAAXPAVc_life_cycle_state_manager@@@Z");
//};

//public: void c_life_cycle_state_handler_matchmaking_assemble_match::dispose(void)
//{
//    mangled_ppc("?dispose@c_life_cycle_state_handler_matchmaking_assemble_match@@QAAXXZ");
//};

//public: void c_life_cycle_state_handler_matchmaking_assemble_match::get_progress(struct s_life_cycle_matchmaking_progress *)
//{
//    mangled_ppc("?get_progress@c_life_cycle_state_handler_matchmaking_assemble_match@@QAAXPAUs_life_cycle_matchmaking_progress@@@Z");
//};

//public: long c_network_session_membership::get_established_player_count(void) const
//{
//    mangled_ppc("?get_established_player_count@c_network_session_membership@@QBAJXZ");
//};

//public: bool c_life_cycle_state_handler_matchmaking_assemble_match::get_search_party_properties(struct s_matchmaking_search_party_properties *)
//{
//    mangled_ppc("?get_search_party_properties@c_life_cycle_state_handler_matchmaking_assemble_match@@QAA_NPAUs_matchmaking_search_party_properties@@@Z");
//};

//public: bool c_life_cycle_state_handler_matchmaking_assemble_match::get_gather_party_properties(struct s_matchmaking_gather_party_properties *)
//{
//    mangled_ppc("?get_gather_party_properties@c_life_cycle_state_handler_matchmaking_assemble_match@@QAA_NPAUs_matchmaking_gather_party_properties@@@Z");
//};

//public: bool c_life_cycle_state_handler_matchmaking_assemble_match::is_gathering(void) const
//{
//    mangled_ppc("?is_gathering@c_life_cycle_state_handler_matchmaking_assemble_match@@QBA_NXZ");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_assemble_match::update(void)
//{
//    mangled_ppc("?update@c_life_cycle_state_handler_matchmaking_assemble_match@@UAAXXZ");
//};

//public: virtual enum e_life_cycle_state_transition_type c_life_cycle_state_handler_matchmaking_assemble_match::update_for_state_transition(long)
//{
//    mangled_ppc("?update_for_state_transition@c_life_cycle_state_handler_matchmaking_assemble_match@@UAA?AW4e_life_cycle_state_transition_type@@J@Z");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_assemble_match::enter(class c_life_cycle_state_handler *, long, void *)
//{
//    mangled_ppc("?enter@c_life_cycle_state_handler_matchmaking_assemble_match@@UAAXPAVc_life_cycle_state_handler@@JPAX@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_assemble_match::exit(class c_life_cycle_state_handler *)
//{
//    mangled_ppc("?exit@c_life_cycle_state_handler_matchmaking_assemble_match@@UAAXPAVc_life_cycle_state_handler@@@Z");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_assemble_match::handle_missing_required_session_parameter(enum e_life_cycle_session_type)
//{
//    mangled_ppc("?handle_missing_required_session_parameter@c_life_cycle_state_handler_matchmaking_assemble_match@@UAAXW4e_life_cycle_session_type@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_assemble_match::update_progress(void)
//{
//    mangled_ppc("?update_progress@c_life_cycle_state_handler_matchmaking_assemble_match@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_assemble_match::update_group(void)
//{
//    mangled_ppc("?update_group@c_life_cycle_state_handler_matchmaking_assemble_match@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_assemble_match::update_posse(void)
//{
//    mangled_ppc("?update_posse@c_life_cycle_state_handler_matchmaking_assemble_match@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_assemble_match::update_role(void)
//{
//    mangled_ppc("?update_role@c_life_cycle_state_handler_matchmaking_assemble_match@@AAAXXZ");
//};

//public: long c_hopper_configuration::get_team_matchmaking_team_size(void) const
//{
//    mangled_ppc("?get_team_matchmaking_team_size@c_hopper_configuration@@QBAJXZ");
//};

//public: enum e_multiplayer_team c_hopper_configuration::get_first_valid_team(void) const
//{
//    mangled_ppc("?get_first_valid_team@c_hopper_configuration@@QBA?AW4e_multiplayer_team@@XZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_assemble_match::update_searching(void)
//{
//    mangled_ppc("?update_searching@c_life_cycle_state_handler_matchmaking_assemble_match@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_assemble_match::update_gathering(void)
//{
//    mangled_ppc("?update_gathering@c_life_cycle_state_handler_matchmaking_assemble_match@@AAAXXZ");
//};

//private: bool c_life_cycle_state_handler_matchmaking_assemble_match::continue_updating_posse(void)
//{
//    mangled_ppc("?continue_updating_posse@c_life_cycle_state_handler_matchmaking_assemble_match@@AAA_NXZ");
//};

//private: bool c_life_cycle_state_handler_matchmaking_assemble_match::continue_updating_group(void)
//{
//    mangled_ppc("?continue_updating_group@c_life_cycle_state_handler_matchmaking_assemble_match@@AAA_NXZ");
//};

//public: long c_hopper_configuration::get_gather_give_up_seconds(void) const
//{
//    mangled_ppc("?get_gather_give_up_seconds@c_hopper_configuration@@QBAJXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//private: bool c_life_cycle_state_handler_matchmaking_assemble_match::ready_to_start(void)
//{
//    mangled_ppc("?ready_to_start@c_life_cycle_state_handler_matchmaking_assemble_match@@AAA_NXZ");
//};

//public: long c_hopper_configuration::get_minimum_player_count(void) const
//{
//    mangled_ppc("?get_minimum_player_count@c_hopper_configuration@@QBAJXZ");
//};

//public: long c_hopper_configuration::get_minimum_team_count(void) const
//{
//    mangled_ppc("?get_minimum_team_count@c_hopper_configuration@@QBAJXZ");
//};

//public: long c_hopper_configuration::get_minimum_team_size(enum e_multiplayer_team) const
//{
//    mangled_ppc("?get_minimum_team_size@c_hopper_configuration@@QBAJW4e_multiplayer_team@@@Z");
//};

//private: bool c_life_cycle_state_handler_matchmaking_assemble_match::ready_to_lockdown(void)
//{
//    mangled_ppc("?ready_to_lockdown@c_life_cycle_state_handler_matchmaking_assemble_match@@AAA_NXZ");
//};

//public: long c_hopper_configuration::get_gather_start_game_early_seconds(void) const
//{
//    mangled_ppc("?get_gather_start_game_early_seconds@c_hopper_configuration@@QBAJXZ");
//};

//private: unsigned long c_life_cycle_state_handler_matchmaking_assemble_match::get_peer_mask_to_evict_for_team_balance(void)
//{
//    mangled_ppc("?get_peer_mask_to_evict_for_team_balance@c_life_cycle_state_handler_matchmaking_assemble_match@@AAAKXZ");
//};

//private: class c_flags<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver> c_life_cycle_state_handler_matchmaking_assemble_match::build_gather_start_flags(void)
//{
//    mangled_ppc("?build_gather_start_flags@c_life_cycle_state_handler_matchmaking_assemble_match@@AAA?AV?$c_flags@W4e_life_cycle_component_gather_start_flags@@E$01Us_default_enum_string_resolver@@@@XZ");
//};

//public: class c_flags_no_init<enum e_network_session_matchmaking_composition_build_flags, unsigned char, 3, struct s_default_enum_string_resolver> c_life_cycle_state_handler_matchmaking_assemble_match::get_matchmaking_composition_build_flags(void)
//{
//    mangled_ppc("?get_matchmaking_composition_build_flags@c_life_cycle_state_handler_matchmaking_assemble_match@@QAA?AV?$c_flags_no_init@W4e_network_session_matchmaking_composition_build_flags@@E$02Us_default_enum_string_resolver@@@@XZ");
//};

//public: char const * s_static_string<32>::append_print(char const *, ...)
//{
//    mangled_ppc("?append_print@?$s_static_string@$0CA@@@QAAPBDPBDZZ");
//};

//public: bool c_flags_no_init<enum e_matchmaking_assemble_match_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_matchmaking_assemble_match_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_matchmaking_assemble_match_flags@@E$03Us_default_enum_string_resolver@@@@QBA_NW4e_matchmaking_assemble_match_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_matchmaking_assemble_match_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_matchmaking_assemble_match_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_matchmaking_assemble_match_flags@@E$03Us_default_enum_string_resolver@@@@QAAXW4e_matchmaking_assemble_match_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_life_cycle_component_gather_start_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_life_cycle_component_gather_start_flags@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_life_cycle_component_gather_start_flags@@_N@Z");
//};

//public: c_flags<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_life_cycle_component_gather_start_flags@@E$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_life_cycle_component_search_update_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_life_cycle_component_search_update_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_life_cycle_component_search_update_flags@@_N@Z");
//};

//public: c_flags<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_life_cycle_component_search_update_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: struct s_network_session_matchmaking_composition_parties & s_static_array<struct s_network_session_matchmaking_composition_parties, 2>::operator[]<enum e_life_cycle_session_type>(enum e_life_cycle_session_type)
//{
//    mangled_ppc("??$?AW4e_life_cycle_session_type@@@?$s_static_array@Us_network_session_matchmaking_composition_parties@@$01@@QAAAAUs_network_session_matchmaking_composition_parties@@W4e_life_cycle_session_type@@@Z");
//};

//public: struct s_matchmaking_session_player_properties & s_static_array<struct s_matchmaking_session_player_properties, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_matchmaking_session_player_properties@@$0BA@@@QAAAAUs_matchmaking_session_player_properties@@J@Z");
//};

//public: long & s_static_array<long, 2>::operator[]<enum e_life_cycle_session_type>(enum e_life_cycle_session_type)
//{
//    mangled_ppc("??$?AW4e_life_cycle_session_type@@@?$s_static_array@J$01@@QAAAAJW4e_life_cycle_session_type@@@Z");
//};

//public: struct s_network_session_party_matchmaking_composition & s_static_array<struct s_network_session_party_matchmaking_composition, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_session_party_matchmaking_composition@@$0BA@@@QAAAAUs_network_session_party_matchmaking_composition@@J@Z");
//};

//public: static bool c_flags_no_init<enum e_matchmaking_assemble_match_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_assemble_match_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_matchmaking_assemble_match_flags@@E$03Us_default_enum_string_resolver@@@@SA_NW4e_matchmaking_assemble_match_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_matchmaking_assemble_match_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_assemble_match_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_matchmaking_assemble_match_flags@@E$03Us_default_enum_string_resolver@@@@CAEW4e_matchmaking_assemble_match_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_life_cycle_component_gather_start_flags@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_life_cycle_component_gather_start_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_life_cycle_component_gather_start_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_life_cycle_component_gather_start_flags@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_life_cycle_component_gather_start_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_life_cycle_component_gather_start_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_life_cycle_component_gather_start_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_life_cycle_component_gather_start_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_life_cycle_component_search_update_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_life_cycle_component_search_update_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_life_cycle_component_search_update_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_life_cycle_component_search_update_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_life_cycle_component_search_update_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_life_cycle_component_search_update_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_life_cycle_component_search_update_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_life_cycle_component_search_update_flags@@@Z");
//};

//public: static bool s_static_array<struct s_network_session_matchmaking_composition_parties, 2>::valid<enum e_life_cycle_session_type>(enum e_life_cycle_session_type)
//{
//    mangled_ppc("??$valid@W4e_life_cycle_session_type@@@?$s_static_array@Us_network_session_matchmaking_composition_parties@@$01@@SA_NW4e_life_cycle_session_type@@@Z");
//};

//public: static bool s_static_array<struct s_matchmaking_session_player_properties, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_matchmaking_session_player_properties@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 2>::valid<enum e_life_cycle_session_type>(enum e_life_cycle_session_type)
//{
//    mangled_ppc("??$valid@W4e_life_cycle_session_type@@@?$s_static_array@J$01@@SA_NW4e_life_cycle_session_type@@@Z");
//};

//public: static bool s_static_array<struct s_network_session_party_matchmaking_composition, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_session_party_matchmaking_composition@@$0BA@@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_life_cycle_component_gather_start_flags@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_life_cycle_component_search_update_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_life_cycle_component_gather_start_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_life_cycle_component_gather_start_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_life_cycle_component_gather_start_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_life_cycle_component_search_update_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_life_cycle_component_search_update_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_life_cycle_component_search_update_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_life_cycle_component_search_update_flags@@@Z");
//};

