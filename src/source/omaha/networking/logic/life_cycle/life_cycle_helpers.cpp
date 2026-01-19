/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static void c_life_cycle_helpers::update_advertised_session(struct s_matchmaking_session_properties const *);
// public: static void c_life_cycle_helpers::close_advertised_session(class c_network_session *, bool);
// public: bool c_network_session_membership::are_slots_locked(void) const;
// private: static void c_life_cycle_helpers::close_advertised_session_user_state(void);
// public: static void c_life_cycle_helpers::session_host_abort_matchmaking(class c_network_session *);
// public: static bool c_life_cycle_helpers::setup_initial_participants(class c_network_session *, class c_flags<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>);
// private: static void c_life_cycle_helpers::build_player_options(struct s_network_session_player const *, unsigned long, struct s_machine_identifier const *, class c_game_variant const *, long, long, class c_flags<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>, long, struct game_player_options *);
// private: static void c_life_cycle_helpers::update_session_messaging_by_disband_reason(class c_network_session *, enum e_life_cycle_disbanding_reason);
// public: static void c_life_cycle_helpers::disband_session(class c_network_session *, enum e_life_cycle_disbanding_reason);
// public: static void c_life_cycle_helpers::return_session_to_pre_game(class c_network_session *, enum e_life_cycle_disbanding_reason);
// public: static void c_life_cycle_helpers::return_session_to_matchmaking_start(class c_network_session *, enum e_life_cycle_disbanding_reason);
// public: static void c_life_cycle_helpers::return_session_to_matchmaking_recycle(class c_network_session *, enum e_life_cycle_disbanding_reason);
// public: static bool c_life_cycle_helpers::session_state_valid_for_current_hopper(class c_network_session const *);
// public: static bool c_life_cycle_helpers::session_composition_valid_for_current_hopper(class c_network_session const *, enum e_life_cycle_session_type);
// public: static bool c_life_cycle_helpers::session_composition_valid_for_current_hopper_allow_player_drop(class c_network_session const *, enum e_life_cycle_session_type, struct s_network_session_matchmaking_composition *);
// public: static bool c_life_cycle_helpers::session_has_minimum_player_and_peer_count_to_start_game_in_hopper(class c_network_session const *);
// public: static bool c_life_cycle_helpers::session_has_full_team_for_team_matchmaking(class c_network_session const *);
// public: static void c_life_cycle_helpers::get_matchmaking_progress_for_search(class c_network_session const *, struct s_life_cycle_matchmaking_progress *);
// public: static void c_life_cycle_helpers::get_matchmaking_progress_for_setting_up_match(class c_network_session *, class c_network_session *, struct s_life_cycle_matchmaking_progress *);
// public: static void c_life_cycle_helpers::update_search_progress(class c_network_session *, class c_life_cycle_component_search const *, class c_network_session const *, struct s_life_cycle_qos_listener_data *);
// public: static void c_life_cycle_helpers::update_gather_progress(class c_network_session *, long, class c_network_session const *, struct s_life_cycle_qos_listener_data *);
// long network_time_since(unsigned long);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: static bool c_life_cycle_helpers::pick_teams(class c_network_session *, enum e_life_cycle_session_type, bool);
// public: static bool c_life_cycle_helpers::can_pick_teams_with_party_exclude_mask(class c_network_session *, enum e_life_cycle_session_type, unsigned long);
// public: static bool c_life_cycle_helpers::session_peers_established_in_session(class c_network_session const *, class c_network_session const *);
// public: static void c_life_cycle_helpers::update_matchmaking_search_criteria(class c_network_session *, enum e_life_cycle_session_type, class c_network_session *, enum e_life_cycle_session_type, bool);
// public: static void c_life_cycle_helpers::matchmaking_update_required_files_for_hopper(class c_network_session const *);
// public: static void c_life_cycle_helpers::update_qos_listener_data(class c_network_session *, struct s_qos_listener_data *);
// public: static bool c_life_cycle_helpers::all_peers_have_main_menu_ready(class c_network_session const *);
// public: static void c_life_cycle_helpers::update_main_menu_precaching(void);
// public: static enum e_life_cycle_state c_life_cycle_helpers::session_get_life_cycle_state(class c_network_session const *);
// public: static long c_life_cycle_helpers::session_get_life_cycle_state_token(class c_network_session const *);
// public: static enum e_life_cycle_mode c_life_cycle_helpers::session_get_life_cycle_mode(class c_network_session const *);
// public: static enum e_life_cycle_disbanding_reason c_life_cycle_helpers::session_get_life_cycle_disbanding_reason(class c_network_session const *);
// public: static enum e_life_cycle_matchmaking_role c_life_cycle_helpers::determine_matchmaking_role(long);
// public: static enum e_life_cycle_state_transition_type c_life_cycle_helpers::update_sleeping_squad_for_state_transition(class c_life_cycle_state_manager *);
// public: static enum e_life_cycle_state_transition_type c_life_cycle_helpers::update_sleeping_posse_for_state_transition(class c_life_cycle_state_manager *);
// public: static enum e_life_cycle_state_transition_type c_life_cycle_helpers::update_for_state_token_changes(class c_life_cycle_state_manager *, long, class c_network_session const *, enum e_life_cycle_state, long, void const *);
// public: static long c_life_cycle_helpers::get_find_and_assemble_gather_wait_time_before_searching_ms(void);
// public: static long c_life_cycle_helpers::get_assemble_gather_wait_time_before_searching_ms(void);
// public: static bool c_life_cycle_helpers::update_simulation_aborted(class c_network_session *, bool *, unsigned long *);
// public: static void c_life_cycle_helpers::update_game_termination(class c_network_session *, unsigned __int64, unsigned long *, bool *);
// bool saved_film_manager_film_is_ended(float *);
// public: static void c_life_cycle_helpers::update_sign_out_detection(bool *, bool *);
// public: static void c_life_cycle_helpers::update_role_for_find_and_assemble(class c_network_session *, enum e_life_cycle_matchmaking_role *, unsigned long *, class c_life_cycle_component_search *, class c_life_cycle_component_gather *, class c_matchmaking_quality *, class c_flags<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>);
// public: long c_hopper_configuration::get_gather_start_threshold_seconds(void) const;
// public: static void c_life_cycle_helpers::update_role_for_assemble(class c_network_session *, long *, unsigned long *, class c_life_cycle_component_search *, class c_life_cycle_component_gather *, class c_matchmaking_quality *, class c_flags<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>);
// public: static bool c_life_cycle_helpers::get_search_party_properties(class c_network_session const *, class c_life_cycle_component_search const *, struct s_matchmaking_search_party_properties *);
// public: static bool c_life_cycle_helpers::get_gather_party_properties(class c_network_session const *, class c_life_cycle_component_search const *, class c_life_cycle_component_gather const *, struct s_matchmaking_gather_party_properties *);
// public: static long c_life_cycle_helpers::qos_listener_data_get_replies_sent(class c_network_session const *, struct s_life_cycle_qos_listener_data *);
// private: static bool c_life_cycle_helpers::pick_teams_internal(class c_network_session *, enum e_life_cycle_session_type, bool, unsigned long);
// public: static void c_life_cycle_helpers::write_advertised_session_properties_to_log(char const *, struct s_matchmaking_session_properties const *, struct s_matchmaking_session_weighted_properties *);
// public: static bool c_life_cycle_helpers::is_gathering(class c_life_cycle_component_gather const *);
// public: static void c_life_cycle_helpers::initial_participants_build_fireteam_indices(bool, class c_network_session const *, class c_game_variant const *, struct game_player_options const *, struct game_player_options *);
// public: static bool c_life_cycle_helpers::target_session_state_valid_for_search_component(class c_network_session const *, class c_life_cycle_component_search const *);
// public: static void c_life_cycle_helpers::handle_in_game_or_match_exit_for_game_results(void);
// public: static bool c_life_cycle_helpers::all_players_in_group_are_in_single_posse(class c_network_session const *);
// private: static void c_life_cycle_helpers::get_searching_party_values(struct s_network_session_matchmaking_composition const *, class c_hopper_configuration const *, long *, long *, bool *);
// public: void s_life_cycle_qos_listener_data::initialize(void);
// public: class c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator=(enum e_matchmaking_search_query_state);
// public: struct s_replicated_life_cycle_matchmaking_query_result * s_static_array<struct s_replicated_life_cycle_matchmaking_query_result, 25>::get_elements(void);
// public: static long s_static_array<struct s_replicated_life_cycle_matchmaking_query_result, 25>::get_count(void);
// public: class c_static_string<1024> c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::to_string(void) const;
// public: class c_static_string<1024> c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::to_string(void) const;
// public: class c_static_string<1024> c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::to_string(void) const;
// public: struct s_matchmaking_session_weighted_property & s_static_array<struct s_matchmaking_session_weighted_property, 17>::operator[]<enum e_hopper_query_weight>(enum e_hopper_query_weight);
// public: bool c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_initial_participants_setup_flags) const;
// public: struct s_network_session_player_matchmaking_composition & s_static_array<struct s_network_session_player_matchmaking_composition, 16>::operator[]<long>(long);
// public: float const & s_static_array<float, 4>::operator[]<enum e_network_social_axis>(enum e_network_social_axis) const;
// public: long const & s_static_array<long, 16>::operator[]<int>(int) const;
// public: struct s_matchmaking_session_weighted_property & s_static_array<struct s_matchmaking_session_weighted_property, 17>::operator[]<long>(long);
// public: bool c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_dlc_map_pack) const;
// public: static bool s_static_array<struct s_matchmaking_session_weighted_property, 17>::valid<enum e_hopper_query_weight>(enum e_hopper_query_weight);
// public: static bool s_static_array<struct s_network_session_player_matchmaking_composition, 16>::valid<long>(long);
// public: static bool s_static_array<long, 16>::valid<int>(int);
// public: static bool s_static_array<struct s_matchmaking_session_weighted_property, 17>::valid<long>(long);

//public: static void c_life_cycle_helpers::update_advertised_session(struct s_matchmaking_session_properties const *)
//{
//    mangled_ppc("?update_advertised_session@c_life_cycle_helpers@@SAXPBUs_matchmaking_session_properties@@@Z");
//};

//public: static void c_life_cycle_helpers::close_advertised_session(class c_network_session *, bool)
//{
//    mangled_ppc("?close_advertised_session@c_life_cycle_helpers@@SAXPAVc_network_session@@_N@Z");
//};

//public: bool c_network_session_membership::are_slots_locked(void) const
//{
//    mangled_ppc("?are_slots_locked@c_network_session_membership@@QBA_NXZ");
//};

//private: static void c_life_cycle_helpers::close_advertised_session_user_state(void)
//{
//    mangled_ppc("?close_advertised_session_user_state@c_life_cycle_helpers@@CAXXZ");
//};

//public: static void c_life_cycle_helpers::session_host_abort_matchmaking(class c_network_session *)
//{
//    mangled_ppc("?session_host_abort_matchmaking@c_life_cycle_helpers@@SAXPAVc_network_session@@@Z");
//};

//public: static bool c_life_cycle_helpers::setup_initial_participants(class c_network_session *, class c_flags<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?setup_initial_participants@c_life_cycle_helpers@@SA_NPAVc_network_session@@V?$c_flags@W4e_initial_participants_setup_flags@@E$01Us_default_enum_string_resolver@@@@@Z");
//};

//private: static void c_life_cycle_helpers::build_player_options(struct s_network_session_player const *, unsigned long, struct s_machine_identifier const *, class c_game_variant const *, long, long, class c_flags<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>, long, struct game_player_options *)
//{
//    mangled_ppc("?build_player_options@c_life_cycle_helpers@@CAXPBUs_network_session_player@@KPBUs_machine_identifier@@PBVc_game_variant@@JJV?$c_flags@W4e_initial_participants_setup_flags@@E$01Us_default_enum_string_resolver@@@@JPAUgame_player_options@@@Z");
//};

//private: static void c_life_cycle_helpers::update_session_messaging_by_disband_reason(class c_network_session *, enum e_life_cycle_disbanding_reason)
//{
//    mangled_ppc("?update_session_messaging_by_disband_reason@c_life_cycle_helpers@@CAXPAVc_network_session@@W4e_life_cycle_disbanding_reason@@@Z");
//};

//public: static void c_life_cycle_helpers::disband_session(class c_network_session *, enum e_life_cycle_disbanding_reason)
//{
//    mangled_ppc("?disband_session@c_life_cycle_helpers@@SAXPAVc_network_session@@W4e_life_cycle_disbanding_reason@@@Z");
//};

//public: static void c_life_cycle_helpers::return_session_to_pre_game(class c_network_session *, enum e_life_cycle_disbanding_reason)
//{
//    mangled_ppc("?return_session_to_pre_game@c_life_cycle_helpers@@SAXPAVc_network_session@@W4e_life_cycle_disbanding_reason@@@Z");
//};

//public: static void c_life_cycle_helpers::return_session_to_matchmaking_start(class c_network_session *, enum e_life_cycle_disbanding_reason)
//{
//    mangled_ppc("?return_session_to_matchmaking_start@c_life_cycle_helpers@@SAXPAVc_network_session@@W4e_life_cycle_disbanding_reason@@@Z");
//};

//public: static void c_life_cycle_helpers::return_session_to_matchmaking_recycle(class c_network_session *, enum e_life_cycle_disbanding_reason)
//{
//    mangled_ppc("?return_session_to_matchmaking_recycle@c_life_cycle_helpers@@SAXPAVc_network_session@@W4e_life_cycle_disbanding_reason@@@Z");
//};

//public: static bool c_life_cycle_helpers::session_state_valid_for_current_hopper(class c_network_session const *)
//{
//    mangled_ppc("?session_state_valid_for_current_hopper@c_life_cycle_helpers@@SA_NPBVc_network_session@@@Z");
//};

//public: static bool c_life_cycle_helpers::session_composition_valid_for_current_hopper(class c_network_session const *, enum e_life_cycle_session_type)
//{
//    mangled_ppc("?session_composition_valid_for_current_hopper@c_life_cycle_helpers@@SA_NPBVc_network_session@@W4e_life_cycle_session_type@@@Z");
//};

//public: static bool c_life_cycle_helpers::session_composition_valid_for_current_hopper_allow_player_drop(class c_network_session const *, enum e_life_cycle_session_type, struct s_network_session_matchmaking_composition *)
//{
//    mangled_ppc("?session_composition_valid_for_current_hopper_allow_player_drop@c_life_cycle_helpers@@SA_NPBVc_network_session@@W4e_life_cycle_session_type@@PAUs_network_session_matchmaking_composition@@@Z");
//};

//public: static bool c_life_cycle_helpers::session_has_minimum_player_and_peer_count_to_start_game_in_hopper(class c_network_session const *)
//{
//    mangled_ppc("?session_has_minimum_player_and_peer_count_to_start_game_in_hopper@c_life_cycle_helpers@@SA_NPBVc_network_session@@@Z");
//};

//public: static bool c_life_cycle_helpers::session_has_full_team_for_team_matchmaking(class c_network_session const *)
//{
//    mangled_ppc("?session_has_full_team_for_team_matchmaking@c_life_cycle_helpers@@SA_NPBVc_network_session@@@Z");
//};

//public: static void c_life_cycle_helpers::get_matchmaking_progress_for_search(class c_network_session const *, struct s_life_cycle_matchmaking_progress *)
//{
//    mangled_ppc("?get_matchmaking_progress_for_search@c_life_cycle_helpers@@SAXPBVc_network_session@@PAUs_life_cycle_matchmaking_progress@@@Z");
//};

//public: static void c_life_cycle_helpers::get_matchmaking_progress_for_setting_up_match(class c_network_session *, class c_network_session *, struct s_life_cycle_matchmaking_progress *)
//{
//    mangled_ppc("?get_matchmaking_progress_for_setting_up_match@c_life_cycle_helpers@@SAXPAVc_network_session@@0PAUs_life_cycle_matchmaking_progress@@@Z");
//};

//public: static void c_life_cycle_helpers::update_search_progress(class c_network_session *, class c_life_cycle_component_search const *, class c_network_session const *, struct s_life_cycle_qos_listener_data *)
//{
//    mangled_ppc("?update_search_progress@c_life_cycle_helpers@@SAXPAVc_network_session@@PBVc_life_cycle_component_search@@PBV2@PAUs_life_cycle_qos_listener_data@@@Z");
//};

//public: static void c_life_cycle_helpers::update_gather_progress(class c_network_session *, long, class c_network_session const *, struct s_life_cycle_qos_listener_data *)
//{
//    mangled_ppc("?update_gather_progress@c_life_cycle_helpers@@SAXPAVc_network_session@@JPBV2@PAUs_life_cycle_qos_listener_data@@@Z");
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

//public: static bool c_life_cycle_helpers::pick_teams(class c_network_session *, enum e_life_cycle_session_type, bool)
//{
//    mangled_ppc("?pick_teams@c_life_cycle_helpers@@SA_NPAVc_network_session@@W4e_life_cycle_session_type@@_N@Z");
//};

//public: static bool c_life_cycle_helpers::can_pick_teams_with_party_exclude_mask(class c_network_session *, enum e_life_cycle_session_type, unsigned long)
//{
//    mangled_ppc("?can_pick_teams_with_party_exclude_mask@c_life_cycle_helpers@@SA_NPAVc_network_session@@W4e_life_cycle_session_type@@K@Z");
//};

//public: static bool c_life_cycle_helpers::session_peers_established_in_session(class c_network_session const *, class c_network_session const *)
//{
//    mangled_ppc("?session_peers_established_in_session@c_life_cycle_helpers@@SA_NPBVc_network_session@@0@Z");
//};

//public: static void c_life_cycle_helpers::update_matchmaking_search_criteria(class c_network_session *, enum e_life_cycle_session_type, class c_network_session *, enum e_life_cycle_session_type, bool)
//{
//    mangled_ppc("?update_matchmaking_search_criteria@c_life_cycle_helpers@@SAXPAVc_network_session@@W4e_life_cycle_session_type@@01_N@Z");
//};

//public: static void c_life_cycle_helpers::matchmaking_update_required_files_for_hopper(class c_network_session const *)
//{
//    mangled_ppc("?matchmaking_update_required_files_for_hopper@c_life_cycle_helpers@@SAXPBVc_network_session@@@Z");
//};

//public: static void c_life_cycle_helpers::update_qos_listener_data(class c_network_session *, struct s_qos_listener_data *)
//{
//    mangled_ppc("?update_qos_listener_data@c_life_cycle_helpers@@SAXPAVc_network_session@@PAUs_qos_listener_data@@@Z");
//};

//public: static bool c_life_cycle_helpers::all_peers_have_main_menu_ready(class c_network_session const *)
//{
//    mangled_ppc("?all_peers_have_main_menu_ready@c_life_cycle_helpers@@SA_NPBVc_network_session@@@Z");
//};

//public: static void c_life_cycle_helpers::update_main_menu_precaching(void)
//{
//    mangled_ppc("?update_main_menu_precaching@c_life_cycle_helpers@@SAXXZ");
//};

//public: static enum e_life_cycle_state c_life_cycle_helpers::session_get_life_cycle_state(class c_network_session const *)
//{
//    mangled_ppc("?session_get_life_cycle_state@c_life_cycle_helpers@@SA?AW4e_life_cycle_state@@PBVc_network_session@@@Z");
//};

//public: static long c_life_cycle_helpers::session_get_life_cycle_state_token(class c_network_session const *)
//{
//    mangled_ppc("?session_get_life_cycle_state_token@c_life_cycle_helpers@@SAJPBVc_network_session@@@Z");
//};

//public: static enum e_life_cycle_mode c_life_cycle_helpers::session_get_life_cycle_mode(class c_network_session const *)
//{
//    mangled_ppc("?session_get_life_cycle_mode@c_life_cycle_helpers@@SA?AW4e_life_cycle_mode@@PBVc_network_session@@@Z");
//};

//public: static enum e_life_cycle_disbanding_reason c_life_cycle_helpers::session_get_life_cycle_disbanding_reason(class c_network_session const *)
//{
//    mangled_ppc("?session_get_life_cycle_disbanding_reason@c_life_cycle_helpers@@SA?AW4e_life_cycle_disbanding_reason@@PBVc_network_session@@@Z");
//};

//public: static enum e_life_cycle_matchmaking_role c_life_cycle_helpers::determine_matchmaking_role(long)
//{
//    mangled_ppc("?determine_matchmaking_role@c_life_cycle_helpers@@SA?AW4e_life_cycle_matchmaking_role@@J@Z");
//};

//public: static enum e_life_cycle_state_transition_type c_life_cycle_helpers::update_sleeping_squad_for_state_transition(class c_life_cycle_state_manager *)
//{
//    mangled_ppc("?update_sleeping_squad_for_state_transition@c_life_cycle_helpers@@SA?AW4e_life_cycle_state_transition_type@@PAVc_life_cycle_state_manager@@@Z");
//};

//public: static enum e_life_cycle_state_transition_type c_life_cycle_helpers::update_sleeping_posse_for_state_transition(class c_life_cycle_state_manager *)
//{
//    mangled_ppc("?update_sleeping_posse_for_state_transition@c_life_cycle_helpers@@SA?AW4e_life_cycle_state_transition_type@@PAVc_life_cycle_state_manager@@@Z");
//};

//public: static enum e_life_cycle_state_transition_type c_life_cycle_helpers::update_for_state_token_changes(class c_life_cycle_state_manager *, long, class c_network_session const *, enum e_life_cycle_state, long, void const *)
//{
//    mangled_ppc("?update_for_state_token_changes@c_life_cycle_helpers@@SA?AW4e_life_cycle_state_transition_type@@PAVc_life_cycle_state_manager@@JPBVc_network_session@@W4e_life_cycle_state@@JPBX@Z");
//};

//public: static long c_life_cycle_helpers::get_find_and_assemble_gather_wait_time_before_searching_ms(void)
//{
//    mangled_ppc("?get_find_and_assemble_gather_wait_time_before_searching_ms@c_life_cycle_helpers@@SAJXZ");
//};

//public: static long c_life_cycle_helpers::get_assemble_gather_wait_time_before_searching_ms(void)
//{
//    mangled_ppc("?get_assemble_gather_wait_time_before_searching_ms@c_life_cycle_helpers@@SAJXZ");
//};

//public: static bool c_life_cycle_helpers::update_simulation_aborted(class c_network_session *, bool *, unsigned long *)
//{
//    mangled_ppc("?update_simulation_aborted@c_life_cycle_helpers@@SA_NPAVc_network_session@@PA_NPAK@Z");
//};

//public: static void c_life_cycle_helpers::update_game_termination(class c_network_session *, unsigned __int64, unsigned long *, bool *)
//{
//    mangled_ppc("?update_game_termination@c_life_cycle_helpers@@SAXPAVc_network_session@@_KPAKPA_N@Z");
//};

//bool saved_film_manager_film_is_ended(float *)
//{
//    mangled_ppc("?saved_film_manager_film_is_ended@@YA_NPAM@Z");
//};

//public: static void c_life_cycle_helpers::update_sign_out_detection(bool *, bool *)
//{
//    mangled_ppc("?update_sign_out_detection@c_life_cycle_helpers@@SAXPA_N0@Z");
//};

//public: static void c_life_cycle_helpers::update_role_for_find_and_assemble(class c_network_session *, enum e_life_cycle_matchmaking_role *, unsigned long *, class c_life_cycle_component_search *, class c_life_cycle_component_gather *, class c_matchmaking_quality *, class c_flags<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?update_role_for_find_and_assemble@c_life_cycle_helpers@@SAXPAVc_network_session@@PAW4e_life_cycle_matchmaking_role@@PAKPAVc_life_cycle_component_search@@PAVc_life_cycle_component_gather@@PAVc_matchmaking_quality@@V?$c_flags@W4e_life_cycle_component_gather_start_flags@@E$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_hopper_configuration::get_gather_start_threshold_seconds(void) const
//{
//    mangled_ppc("?get_gather_start_threshold_seconds@c_hopper_configuration@@QBAJXZ");
//};

//public: static void c_life_cycle_helpers::update_role_for_assemble(class c_network_session *, long *, unsigned long *, class c_life_cycle_component_search *, class c_life_cycle_component_gather *, class c_matchmaking_quality *, class c_flags<enum e_life_cycle_component_gather_start_flags, unsigned char, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?update_role_for_assemble@c_life_cycle_helpers@@SAXPAVc_network_session@@PAJPAKPAVc_life_cycle_component_search@@PAVc_life_cycle_component_gather@@PAVc_matchmaking_quality@@V?$c_flags@W4e_life_cycle_component_gather_start_flags@@E$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool c_life_cycle_helpers::get_search_party_properties(class c_network_session const *, class c_life_cycle_component_search const *, struct s_matchmaking_search_party_properties *)
//{
//    mangled_ppc("?get_search_party_properties@c_life_cycle_helpers@@SA_NPBVc_network_session@@PBVc_life_cycle_component_search@@PAUs_matchmaking_search_party_properties@@@Z");
//};

//public: static bool c_life_cycle_helpers::get_gather_party_properties(class c_network_session const *, class c_life_cycle_component_search const *, class c_life_cycle_component_gather const *, struct s_matchmaking_gather_party_properties *)
//{
//    mangled_ppc("?get_gather_party_properties@c_life_cycle_helpers@@SA_NPBVc_network_session@@PBVc_life_cycle_component_search@@PBVc_life_cycle_component_gather@@PAUs_matchmaking_gather_party_properties@@@Z");
//};

//public: static long c_life_cycle_helpers::qos_listener_data_get_replies_sent(class c_network_session const *, struct s_life_cycle_qos_listener_data *)
//{
//    mangled_ppc("?qos_listener_data_get_replies_sent@c_life_cycle_helpers@@SAJPBVc_network_session@@PAUs_life_cycle_qos_listener_data@@@Z");
//};

//private: static bool c_life_cycle_helpers::pick_teams_internal(class c_network_session *, enum e_life_cycle_session_type, bool, unsigned long)
//{
//    mangled_ppc("?pick_teams_internal@c_life_cycle_helpers@@CA_NPAVc_network_session@@W4e_life_cycle_session_type@@_NK@Z");
//};

//public: static void c_life_cycle_helpers::write_advertised_session_properties_to_log(char const *, struct s_matchmaking_session_properties const *, struct s_matchmaking_session_weighted_properties *)
//{
//    mangled_ppc("?write_advertised_session_properties_to_log@c_life_cycle_helpers@@SAXPBDPBUs_matchmaking_session_properties@@PAUs_matchmaking_session_weighted_properties@@@Z");
//};

//public: static bool c_life_cycle_helpers::is_gathering(class c_life_cycle_component_gather const *)
//{
//    mangled_ppc("?is_gathering@c_life_cycle_helpers@@SA_NPBVc_life_cycle_component_gather@@@Z");
//};

//public: static void c_life_cycle_helpers::initial_participants_build_fireteam_indices(bool, class c_network_session const *, class c_game_variant const *, struct game_player_options const *, struct game_player_options *)
//{
//    mangled_ppc("?initial_participants_build_fireteam_indices@c_life_cycle_helpers@@SAX_NPBVc_network_session@@PBVc_game_variant@@PBUgame_player_options@@PAU4@@Z");
//};

//public: static bool c_life_cycle_helpers::target_session_state_valid_for_search_component(class c_network_session const *, class c_life_cycle_component_search const *)
//{
//    mangled_ppc("?target_session_state_valid_for_search_component@c_life_cycle_helpers@@SA_NPBVc_network_session@@PBVc_life_cycle_component_search@@@Z");
//};

//public: static void c_life_cycle_helpers::handle_in_game_or_match_exit_for_game_results(void)
//{
//    mangled_ppc("?handle_in_game_or_match_exit_for_game_results@c_life_cycle_helpers@@SAXXZ");
//};

//public: static bool c_life_cycle_helpers::all_players_in_group_are_in_single_posse(class c_network_session const *)
//{
//    mangled_ppc("?all_players_in_group_are_in_single_posse@c_life_cycle_helpers@@SA_NPBVc_network_session@@@Z");
//};

//private: static void c_life_cycle_helpers::get_searching_party_values(struct s_network_session_matchmaking_composition const *, class c_hopper_configuration const *, long *, long *, bool *)
//{
//    mangled_ppc("?get_searching_party_values@c_life_cycle_helpers@@CAXPBUs_network_session_matchmaking_composition@@PBVc_hopper_configuration@@PAJ2PA_N@Z");
//};

//public: void s_life_cycle_qos_listener_data::initialize(void)
//{
//    mangled_ppc("?initialize@s_life_cycle_qos_listener_data@@QAAXXZ");
//};

//public: class c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator=(enum e_matchmaking_search_query_state)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_matchmaking_search_query_state@@E$0A@$02Us_default_enum_string_resolver@@@@QAAAAV0@W4e_matchmaking_search_query_state@@@Z");
//};

//public: struct s_replicated_life_cycle_matchmaking_query_result * s_static_array<struct s_replicated_life_cycle_matchmaking_query_result, 25>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_replicated_life_cycle_matchmaking_query_result@@$0BJ@@@QAAPAUs_replicated_life_cycle_matchmaking_query_result@@XZ");
//};

//public: static long s_static_array<struct s_replicated_life_cycle_matchmaking_query_result, 25>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_replicated_life_cycle_matchmaking_query_result@@$0BJ@@@SAJXZ");
//};

//public: class c_static_string<1024> c_flags_no_init<enum e_network_session_matchmaking_composition_flags, unsigned char, 6, struct s_default_enum_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_flags_no_init@W4e_network_session_matchmaking_composition_flags@@E$05Us_default_enum_string_resolver@@@@QBA?AV?$c_static_string@$0EAA@@@XZ");
//};

//public: class c_static_string<1024> c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_flags_no_init@W4e_dlc_map_pack@@E$05Us_default_enum_string_resolver@@@@QBA?AV?$c_static_string@$0EAA@@@XZ");
//};

//public: class c_static_string<1024> c_flags_no_init<enum e_matchmaking_preference_flags, unsigned char, 3, struct s_default_enum_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_flags_no_init@W4e_matchmaking_preference_flags@@E$02Us_default_enum_string_resolver@@@@QBA?AV?$c_static_string@$0EAA@@@XZ");
//};

//public: struct s_matchmaking_session_weighted_property & s_static_array<struct s_matchmaking_session_weighted_property, 17>::operator[]<enum e_hopper_query_weight>(enum e_hopper_query_weight)
//{
//    mangled_ppc("??$?AW4e_hopper_query_weight@@@?$s_static_array@Us_matchmaking_session_weighted_property@@$0BB@@@QAAAAUs_matchmaking_session_weighted_property@@W4e_hopper_query_weight@@@Z");
//};

//public: bool c_flags_no_init<enum e_initial_participants_setup_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_initial_participants_setup_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_initial_participants_setup_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_initial_participants_setup_flags@@@Z");
//};

//public: struct s_network_session_player_matchmaking_composition & s_static_array<struct s_network_session_player_matchmaking_composition, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_session_player_matchmaking_composition@@$0BA@@@QAAAAUs_network_session_player_matchmaking_composition@@J@Z");
//};

//public: float const & s_static_array<float, 4>::operator[]<enum e_network_social_axis>(enum e_network_social_axis) const
//{
//    mangled_ppc("??$?AW4e_network_social_axis@@@?$s_static_array@M$03@@QBAABMW4e_network_social_axis@@@Z");
//};

//public: long const & s_static_array<long, 16>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@J$0BA@@@QBAABJH@Z");
//};

//public: struct s_matchmaking_session_weighted_property & s_static_array<struct s_matchmaking_session_weighted_property, 17>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_matchmaking_session_weighted_property@@$0BB@@@QAAAAUs_matchmaking_session_weighted_property@@J@Z");
//};

//public: bool c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_dlc_map_pack) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_dlc_map_pack@@E$05Us_default_enum_string_resolver@@@@QBA_NW4e_dlc_map_pack@@@Z");
//};

//public: static bool s_static_array<struct s_matchmaking_session_weighted_property, 17>::valid<enum e_hopper_query_weight>(enum e_hopper_query_weight)
//{
//    mangled_ppc("??$valid@W4e_hopper_query_weight@@@?$s_static_array@Us_matchmaking_session_weighted_property@@$0BB@@@SA_NW4e_hopper_query_weight@@@Z");
//};

//public: static bool s_static_array<struct s_network_session_player_matchmaking_composition, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_session_player_matchmaking_composition@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 16>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@J$0BA@@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_matchmaking_session_weighted_property, 17>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_matchmaking_session_weighted_property@@$0BB@@@SA_NJ@Z");
//};

