/* ---------- headers */

#include "omaha\networking\logic\life_cycle\life_cycle_handler_matchmaking_prepare_map.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_life_cycle_state_handler_matchmaking_prepare_map::initialize(class c_life_cycle_state_manager *);
// public: void c_life_cycle_state_handler_matchmaking_prepare_map::dispose(void);
// public: void c_life_cycle_state_handler_matchmaking_prepare_map::get_progress(struct s_life_cycle_matchmaking_progress *);
// public: virtual void c_life_cycle_state_handler_matchmaking_prepare_map::update(void);
// public: virtual enum e_life_cycle_state_transition_type c_life_cycle_state_handler_matchmaking_prepare_map::update_for_state_transition(long);
// public: virtual void c_life_cycle_state_handler_matchmaking_prepare_map::enter(class c_life_cycle_state_handler *, long, void *);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// public: virtual void c_life_cycle_state_handler_matchmaking_prepare_map::exit(class c_life_cycle_state_handler *);
// public: virtual void c_life_cycle_state_handler_matchmaking_prepare_map::handle_missing_required_session_parameter(enum e_life_cycle_session_type);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::handle_host_assumption(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::get_replicated_progress(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::set_replicated_progress(struct s_replicated_life_cycle_matchmaking_progress_configuring_match const *);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::start_next_voting_round(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *);
// public: unsigned __int64 c_network_session_membership::get_available_map_mask(void) const;
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::initialize_replicated_progress_for_voting_round(long, struct s_replicated_life_cycle_matchmaking_progress_configuring_match *);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::reset_replicated_progress_timer(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::initialize_voting_results_for_voting_round(long, struct s_network_session_parameter_matchmaking_voting_results *);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::initialize_voting_descriptions_for_voting_round(long, struct s_network_session_parameter_matchmaking_voting_round const *, enum e_hopper_game_type, struct s_network_session_parameter_matchmaking_voting_descriptions *);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_voting(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_loading(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_countdown(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_option_loading(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *, struct s_network_session_parameter_matchmaking_voting_option const *);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_game_configuration(struct s_game_set_entry const *);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_map(struct s_game_set_entry const *);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_game_variant_download(struct s_game_set_file const *);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_map_variant_download(struct s_game_set_file const *, enum e_map_id);
// public: enum e_map_id c_map_variant::get_map_id(void) const;
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_loading_progress(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_friends_leaderboard_query(bool);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_matchmaking_quality_voting(void);
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::get_map_loading_progress(enum e_network_session_map_status *, long *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *) const;
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::get_game_variant_loading_progress(bool *) const;
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::get_map_variant_loading_progress(bool *) const;
// private: enum e_matchmaking_load_failure_type c_life_cycle_state_handler_matchmaking_prepare_map::get_load_failure(class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *) const;
// private: bool c_life_cycle_state_handler_matchmaking_prepare_map::get_session_voting_results(enum e_matchmaking_configuring_match_state, bool, long, class s_static_array<unsigned long, 4> *) const;
// private: bool c_life_cycle_state_handler_matchmaking_prepare_map::game_configuration_session_parameter_matches_game_set(struct s_game_set_entry const *);
// private: bool c_life_cycle_state_handler_matchmaking_prepare_map::map_session_parameter_matches_game_set(struct s_game_set_entry const *);
// private: bool c_life_cycle_state_handler_matchmaking_prepare_map::game_variant_session_parameter_matches_game_set(struct s_game_set_file const *);
// private: bool c_life_cycle_state_handler_matchmaking_prepare_map::map_variant_session_parameter_matches_game_set(struct s_game_set_file const *);
// private: bool c_life_cycle_state_handler_matchmaking_prepare_map::hopper_uses_game_variants(void) const;
// private: bool c_life_cycle_state_handler_matchmaking_prepare_map::hopper_uses_map_variants(void) const;
// private: enum e_hopper_game_type c_life_cycle_state_handler_matchmaking_prepare_map::hopper_get_game_type(void) const;
// private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_and_submit_matchmaking_quality(void);
// public: class c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>::operator=(enum e_matchmaking_load_failure_type);
// public: class c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>::operator=(enum e_matchmaking_configuring_match_state);
// public: enum e_matchmaking_configuring_match_state c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>::operator enum e_matchmaking_configuring_match_state(void) const;
// public: bool c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>::operator==(enum e_matchmaking_configuring_match_state) const;
// public: void s_static_array<unsigned long, 4>::set_all(unsigned long const &);
// public: struct s_machine_locality * s_static_array<struct s_machine_locality, 16>::get_elements(void);
// public: bool c_flags_no_init<enum e_matchmaking_prepare_map_flags, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_matchmaking_prepare_map_flags) const;
// public: void c_flags_no_init<enum e_matchmaking_prepare_map_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_matchmaking_prepare_map_flags, bool);
// public: void c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::test(unsigned long) const;
// public: bool c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::test(unsigned long) const;
// public: void c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::set(unsigned long, bool);
// public: bool c_flags_no_init<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_matchmaking_voting_description_flags) const;
// public: void c_flags_no_init<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_matchmaking_game_configuration_flags, bool);
// public: void c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::set_all(void);
// public: bool c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_life_cycle_matchmaking_progress_configuring_match_flags) const;
// public: void c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum e_life_cycle_matchmaking_progress_configuring_match_flags, bool);
// public: struct s_network_session_parameter_matchmaking_voting_option const & s_static_array<struct s_network_session_parameter_matchmaking_voting_option, 3>::operator[]<int>(int) const;
// public: struct s_network_session_parameter_matchmaking_peer_voting_results & s_static_array<struct s_network_session_parameter_matchmaking_peer_voting_results, 16>::operator[]<long>(long);
// public: unsigned long & s_static_array<unsigned long, 4>::operator[]<long>(long);
// public: struct s_network_session_parameter_matchmaking_load_failure & s_static_array<struct s_network_session_parameter_matchmaking_load_failure, 4>::operator[]<long>(long);
// public: struct s_network_session_parameter_matchmaking_peer_voting_results const & s_static_array<struct s_network_session_parameter_matchmaking_peer_voting_results, 16>::operator[]<long>(long) const;
// public: unsigned long & s_static_array<unsigned long, 4>::operator[]<int>(int);
// public: struct s_machine_locality & s_static_array<struct s_machine_locality, 16>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum e_matchmaking_prepare_map_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_prepare_map_flags);
// private: static unsigned short c_flags_no_init<enum e_matchmaking_prepare_map_flags, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_prepare_map_flags);
// public: static bool c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(unsigned long);
// private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(unsigned long);
// public: static bool c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::valid_bit(unsigned long);
// private: static unsigned long c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::flag_size_type(unsigned long);
// public: static bool c_flags_no_init<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_game_configuration_flags);
// private: static unsigned char c_flags_no_init<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_game_configuration_flags);
// public: static bool c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_life_cycle_matchmaking_progress_configuring_match_flags);
// private: static unsigned char c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_life_cycle_matchmaking_progress_configuring_match_flags);
// public: static bool s_static_array<struct s_network_session_parameter_matchmaking_voting_option, 3>::valid<int>(int);
// public: static bool s_static_array<struct s_network_session_parameter_matchmaking_peer_voting_results, 16>::valid<long>(long);
// public: static bool s_static_array<unsigned long, 4>::valid<long>(long);
// public: static bool s_static_array<unsigned long, 4>::valid<int>(int);
// public: static bool s_static_array<struct s_machine_locality, 16>::valid<long>(long);

//public: void c_life_cycle_state_handler_matchmaking_prepare_map::initialize(class c_life_cycle_state_manager *)
//{
//    mangled_ppc("?initialize@c_life_cycle_state_handler_matchmaking_prepare_map@@QAAXPAVc_life_cycle_state_manager@@@Z");
//};

//public: void c_life_cycle_state_handler_matchmaking_prepare_map::dispose(void)
//{
//    mangled_ppc("?dispose@c_life_cycle_state_handler_matchmaking_prepare_map@@QAAXXZ");
//};

//public: void c_life_cycle_state_handler_matchmaking_prepare_map::get_progress(struct s_life_cycle_matchmaking_progress *)
//{
//    mangled_ppc("?get_progress@c_life_cycle_state_handler_matchmaking_prepare_map@@QAAXPAUs_life_cycle_matchmaking_progress@@@Z");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_prepare_map::update(void)
//{
//    mangled_ppc("?update@c_life_cycle_state_handler_matchmaking_prepare_map@@UAAXXZ");
//};

//public: virtual enum e_life_cycle_state_transition_type c_life_cycle_state_handler_matchmaking_prepare_map::update_for_state_transition(long)
//{
//    mangled_ppc("?update_for_state_transition@c_life_cycle_state_handler_matchmaking_prepare_map@@UAA?AW4e_life_cycle_state_transition_type@@J@Z");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_prepare_map::enter(class c_life_cycle_state_handler *, long, void *)
//{
//    mangled_ppc("?enter@c_life_cycle_state_handler_matchmaking_prepare_map@@UAAXPAVc_life_cycle_state_handler@@JPAX@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_prepare_map::exit(class c_life_cycle_state_handler *)
//{
//    mangled_ppc("?exit@c_life_cycle_state_handler_matchmaking_prepare_map@@UAAXPAVc_life_cycle_state_handler@@@Z");
//};

//public: virtual void c_life_cycle_state_handler_matchmaking_prepare_map::handle_missing_required_session_parameter(enum e_life_cycle_session_type)
//{
//    mangled_ppc("?handle_missing_required_session_parameter@c_life_cycle_state_handler_matchmaking_prepare_map@@UAAXW4e_life_cycle_session_type@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::handle_host_assumption(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *)
//{
//    mangled_ppc("?handle_host_assumption@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXPAUs_replicated_life_cycle_matchmaking_progress_configuring_match@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::get_replicated_progress(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *)
//{
//    mangled_ppc("?get_replicated_progress@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXPAUs_replicated_life_cycle_matchmaking_progress_configuring_match@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::set_replicated_progress(struct s_replicated_life_cycle_matchmaking_progress_configuring_match const *)
//{
//    mangled_ppc("?set_replicated_progress@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXPBUs_replicated_life_cycle_matchmaking_progress_configuring_match@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::start_next_voting_round(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *)
//{
//    mangled_ppc("?start_next_voting_round@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXPAUs_replicated_life_cycle_matchmaking_progress_configuring_match@@@Z");
//};

//public: unsigned __int64 c_network_session_membership::get_available_map_mask(void) const
//{
//    mangled_ppc("?get_available_map_mask@c_network_session_membership@@QBA_KXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::initialize_replicated_progress_for_voting_round(long, struct s_replicated_life_cycle_matchmaking_progress_configuring_match *)
//{
//    mangled_ppc("?initialize_replicated_progress_for_voting_round@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXJPAUs_replicated_life_cycle_matchmaking_progress_configuring_match@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::reset_replicated_progress_timer(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *)
//{
//    mangled_ppc("?reset_replicated_progress_timer@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXPAUs_replicated_life_cycle_matchmaking_progress_configuring_match@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::initialize_voting_results_for_voting_round(long, struct s_network_session_parameter_matchmaking_voting_results *)
//{
//    mangled_ppc("?initialize_voting_results_for_voting_round@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXJPAUs_network_session_parameter_matchmaking_voting_results@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::initialize_voting_descriptions_for_voting_round(long, struct s_network_session_parameter_matchmaking_voting_round const *, enum e_hopper_game_type, struct s_network_session_parameter_matchmaking_voting_descriptions *)
//{
//    mangled_ppc("?initialize_voting_descriptions_for_voting_round@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXJPBUs_network_session_parameter_matchmaking_voting_round@@W4e_hopper_game_type@@PAUs_network_session_parameter_matchmaking_voting_descriptions@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_voting(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *)
//{
//    mangled_ppc("?update_voting@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXPAUs_replicated_life_cycle_matchmaking_progress_configuring_match@@@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_loading(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *)
//{
//    mangled_ppc("?update_loading@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXPAUs_replicated_life_cycle_matchmaking_progress_configuring_match@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_countdown(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *)
//{
//    mangled_ppc("?update_countdown@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXPAUs_replicated_life_cycle_matchmaking_progress_configuring_match@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_option_loading(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *, struct s_network_session_parameter_matchmaking_voting_option const *)
//{
//    mangled_ppc("?update_option_loading@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXPAUs_replicated_life_cycle_matchmaking_progress_configuring_match@@PBUs_network_session_parameter_matchmaking_voting_option@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_game_configuration(struct s_game_set_entry const *)
//{
//    mangled_ppc("?update_game_configuration@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXPBUs_game_set_entry@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_map(struct s_game_set_entry const *)
//{
//    mangled_ppc("?update_map@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXPBUs_game_set_entry@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_game_variant_download(struct s_game_set_file const *)
//{
//    mangled_ppc("?update_game_variant_download@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXPBUs_game_set_file@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_map_variant_download(struct s_game_set_file const *, enum e_map_id)
//{
//    mangled_ppc("?update_map_variant_download@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXPBUs_game_set_file@@W4e_map_id@@@Z");
//};

//public: enum e_map_id c_map_variant::get_map_id(void) const
//{
//    mangled_ppc("?get_map_id@c_map_variant@@QBA?AW4e_map_id@@XZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_loading_progress(struct s_replicated_life_cycle_matchmaking_progress_configuring_match *)
//{
//    mangled_ppc("?update_loading_progress@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXPAUs_replicated_life_cycle_matchmaking_progress_configuring_match@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_friends_leaderboard_query(bool)
//{
//    mangled_ppc("?update_friends_leaderboard_query@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAX_N@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_matchmaking_quality_voting(void)
//{
//    mangled_ppc("?update_matchmaking_quality_voting@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXXZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::get_map_loading_progress(enum e_network_session_map_status *, long *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_map_loading_progress@c_life_cycle_state_handler_matchmaking_prepare_map@@ABAXPAW4e_network_session_map_status@@PAJPAV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::get_game_variant_loading_progress(bool *) const
//{
//    mangled_ppc("?get_game_variant_loading_progress@c_life_cycle_state_handler_matchmaking_prepare_map@@ABAXPA_N@Z");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::get_map_variant_loading_progress(bool *) const
//{
//    mangled_ppc("?get_map_variant_loading_progress@c_life_cycle_state_handler_matchmaking_prepare_map@@ABAXPA_N@Z");
//};

//private: enum e_matchmaking_load_failure_type c_life_cycle_state_handler_matchmaking_prepare_map::get_load_failure(class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *) const
//{
//    mangled_ppc("?get_load_failure@c_life_cycle_state_handler_matchmaking_prepare_map@@ABA?AW4e_matchmaking_load_failure_type@@PAV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//private: bool c_life_cycle_state_handler_matchmaking_prepare_map::get_session_voting_results(enum e_matchmaking_configuring_match_state, bool, long, class s_static_array<unsigned long, 4> *) const
//{
//    mangled_ppc("?get_session_voting_results@c_life_cycle_state_handler_matchmaking_prepare_map@@ABA_NW4e_matchmaking_configuring_match_state@@_NJPAV?$s_static_array@K$03@@@Z");
//};

//private: bool c_life_cycle_state_handler_matchmaking_prepare_map::game_configuration_session_parameter_matches_game_set(struct s_game_set_entry const *)
//{
//    mangled_ppc("?game_configuration_session_parameter_matches_game_set@c_life_cycle_state_handler_matchmaking_prepare_map@@AAA_NPBUs_game_set_entry@@@Z");
//};

//private: bool c_life_cycle_state_handler_matchmaking_prepare_map::map_session_parameter_matches_game_set(struct s_game_set_entry const *)
//{
//    mangled_ppc("?map_session_parameter_matches_game_set@c_life_cycle_state_handler_matchmaking_prepare_map@@AAA_NPBUs_game_set_entry@@@Z");
//};

//private: bool c_life_cycle_state_handler_matchmaking_prepare_map::game_variant_session_parameter_matches_game_set(struct s_game_set_file const *)
//{
//    mangled_ppc("?game_variant_session_parameter_matches_game_set@c_life_cycle_state_handler_matchmaking_prepare_map@@AAA_NPBUs_game_set_file@@@Z");
//};

//private: bool c_life_cycle_state_handler_matchmaking_prepare_map::map_variant_session_parameter_matches_game_set(struct s_game_set_file const *)
//{
//    mangled_ppc("?map_variant_session_parameter_matches_game_set@c_life_cycle_state_handler_matchmaking_prepare_map@@AAA_NPBUs_game_set_file@@@Z");
//};

//private: bool c_life_cycle_state_handler_matchmaking_prepare_map::hopper_uses_game_variants(void) const
//{
//    mangled_ppc("?hopper_uses_game_variants@c_life_cycle_state_handler_matchmaking_prepare_map@@ABA_NXZ");
//};

//private: bool c_life_cycle_state_handler_matchmaking_prepare_map::hopper_uses_map_variants(void) const
//{
//    mangled_ppc("?hopper_uses_map_variants@c_life_cycle_state_handler_matchmaking_prepare_map@@ABA_NXZ");
//};

//private: enum e_hopper_game_type c_life_cycle_state_handler_matchmaking_prepare_map::hopper_get_game_type(void) const
//{
//    mangled_ppc("?hopper_get_game_type@c_life_cycle_state_handler_matchmaking_prepare_map@@ABA?AW4e_hopper_game_type@@XZ");
//};

//private: void c_life_cycle_state_handler_matchmaking_prepare_map::update_and_submit_matchmaking_quality(void)
//{
//    mangled_ppc("?update_and_submit_matchmaking_quality@c_life_cycle_state_handler_matchmaking_prepare_map@@AAAXXZ");
//};

//public: class c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>::operator=(enum e_matchmaking_load_failure_type)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_matchmaking_load_failure_type@@W41@$0A@$03Us_default_enum_string_resolver@@@@QAAAAV0@W4e_matchmaking_load_failure_type@@@Z");
//};

//public: class c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>::operator=(enum e_matchmaking_configuring_match_state)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_matchmaking_configuring_match_state@@W41@$0A@$06Us_default_enum_string_resolver@@@@QAAAAV0@W4e_matchmaking_configuring_match_state@@@Z");
//};

//public: enum e_matchmaking_configuring_match_state c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>::operator enum e_matchmaking_configuring_match_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_matchmaking_configuring_match_state@@W41@$0A@$06Us_default_enum_string_resolver@@@@QBA?AW4e_matchmaking_configuring_match_state@@XZ");
//};

//public: bool c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>::operator==(enum e_matchmaking_configuring_match_state) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_matchmaking_configuring_match_state@@W41@$0A@$06Us_default_enum_string_resolver@@@@QBA_NW4e_matchmaking_configuring_match_state@@@Z");
//};

//public: void s_static_array<unsigned long, 4>::set_all(unsigned long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@K$03@@QAAXABK@Z");
//};

//public: struct s_machine_locality * s_static_array<struct s_machine_locality, 16>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_machine_locality@@$0BA@@@QAAPAUs_machine_locality@@XZ");
//};

//public: bool c_flags_no_init<enum e_matchmaking_prepare_map_flags, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_matchmaking_prepare_map_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_matchmaking_prepare_map_flags@@G$08Us_default_enum_string_resolver@@@@QBA_NW4e_matchmaking_prepare_map_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_matchmaking_prepare_map_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_matchmaking_prepare_map_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_matchmaking_prepare_map_flags@@G$08Us_default_enum_string_resolver@@@@QAAXW4e_matchmaking_prepare_map_flags@@_N@Z");
//};

//public: void c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@KE$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::test(unsigned long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@KE$03Us_default_enum_string_resolver@@@@QBA_NK@Z");
//};

//public: bool c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::test(unsigned long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@KK$0BA@Us_default_enum_string_resolver@@@@QBA_NK@Z");
//};

//public: void c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::set(unsigned long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@KK$0BA@Us_default_enum_string_resolver@@@@QAAXK_N@Z");
//};

//public: bool c_flags_no_init<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_matchmaking_voting_description_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_matchmaking_voting_description_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_matchmaking_voting_description_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_matchmaking_game_configuration_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_matchmaking_game_configuration_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_matchmaking_game_configuration_flags@@_N@Z");
//};

//public: void c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::set_all(void)
//{
//    mangled_ppc("?set_all@?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_life_cycle_matchmaking_progress_configuring_match_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_life_cycle_matchmaking_progress_configuring_match_flags@@E$04Us_default_enum_string_resolver@@@@QBA_NW4e_life_cycle_matchmaking_progress_configuring_match_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum e_life_cycle_matchmaking_progress_configuring_match_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_life_cycle_matchmaking_progress_configuring_match_flags@@E$04Us_default_enum_string_resolver@@@@QAAXW4e_life_cycle_matchmaking_progress_configuring_match_flags@@_N@Z");
//};

//public: struct s_network_session_parameter_matchmaking_voting_option const & s_static_array<struct s_network_session_parameter_matchmaking_voting_option, 3>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_network_session_parameter_matchmaking_voting_option@@$02@@QBAABUs_network_session_parameter_matchmaking_voting_option@@H@Z");
//};

//public: struct s_network_session_parameter_matchmaking_peer_voting_results & s_static_array<struct s_network_session_parameter_matchmaking_peer_voting_results, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_session_parameter_matchmaking_peer_voting_results@@$0BA@@@QAAAAUs_network_session_parameter_matchmaking_peer_voting_results@@J@Z");
//};

//public: unsigned long & s_static_array<unsigned long, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@K$03@@QAAAAKJ@Z");
//};

//public: struct s_network_session_parameter_matchmaking_load_failure & s_static_array<struct s_network_session_parameter_matchmaking_load_failure, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_session_parameter_matchmaking_load_failure@@$03@@QAAAAUs_network_session_parameter_matchmaking_load_failure@@J@Z");
//};

//public: struct s_network_session_parameter_matchmaking_peer_voting_results const & s_static_array<struct s_network_session_parameter_matchmaking_peer_voting_results, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_session_parameter_matchmaking_peer_voting_results@@$0BA@@@QBAABUs_network_session_parameter_matchmaking_peer_voting_results@@J@Z");
//};

//public: unsigned long & s_static_array<unsigned long, 4>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@K$03@@QAAAAKH@Z");
//};

//public: struct s_machine_locality & s_static_array<struct s_machine_locality, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_machine_locality@@$0BA@@@QAAAAUs_machine_locality@@J@Z");
//};

//public: static bool c_flags_no_init<enum e_matchmaking_prepare_map_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_prepare_map_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_matchmaking_prepare_map_flags@@G$08Us_default_enum_string_resolver@@@@SA_NW4e_matchmaking_prepare_map_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_matchmaking_prepare_map_flags, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_prepare_map_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_matchmaking_prepare_map_flags@@G$08Us_default_enum_string_resolver@@@@CAGW4e_matchmaking_prepare_map_flags@@@Z");
//};

//public: static bool c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(unsigned long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@KE$03Us_default_enum_string_resolver@@@@SA_NK@Z");
//};

//private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(unsigned long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@KE$03Us_default_enum_string_resolver@@@@CAEK@Z");
//};

//public: static bool c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::valid_bit(unsigned long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@KK$0BA@Us_default_enum_string_resolver@@@@SA_NK@Z");
//};

//private: static unsigned long c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::flag_size_type(unsigned long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@KK$0BA@Us_default_enum_string_resolver@@@@CAKK@Z");
//};

//public: static bool c_flags_no_init<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_game_configuration_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_matchmaking_game_configuration_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_matchmaking_game_configuration_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_game_configuration_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_matchmaking_game_configuration_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_matchmaking_game_configuration_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_life_cycle_matchmaking_progress_configuring_match_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_life_cycle_matchmaking_progress_configuring_match_flags@@E$04Us_default_enum_string_resolver@@@@SA_NW4e_life_cycle_matchmaking_progress_configuring_match_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_life_cycle_matchmaking_progress_configuring_match_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_life_cycle_matchmaking_progress_configuring_match_flags@@E$04Us_default_enum_string_resolver@@@@CAEW4e_life_cycle_matchmaking_progress_configuring_match_flags@@@Z");
//};

//public: static bool s_static_array<struct s_network_session_parameter_matchmaking_voting_option, 3>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_network_session_parameter_matchmaking_voting_option@@$02@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_network_session_parameter_matchmaking_peer_voting_results, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_session_parameter_matchmaking_peer_voting_results@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<unsigned long, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@K$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<unsigned long, 4>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@K$03@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_machine_locality, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_machine_locality@@$0BA@@@SA_NJ@Z");
//};

