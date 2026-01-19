/* ---------- headers */

#include "omaha\networking\logic\network_session_interface.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum c_storage_device::e_storage_device_flag const c_flags_no_init<enum c_storage_device::e_storage_device_flag, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_storage_device_flag@c_storage_device@@E$01Us_default_enum_string_resolver@@@@2W4e_storage_device_flag@c_storage_device@@B"
// public: static long const s_static_array<struct s_network_session_interface_user_session_data, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_session_interface_user_session_data@@$03@@2JB"
// public: static long const s_static_array<struct s_network_session_interface_user, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_session_interface_user@@$03@@2JB"
// public: static long const s_static_array<struct s_network_session_interface_user_peer_session_data, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_session_interface_user_peer_session_data@@$03@@2JB"
// public: static enum e_online_user_flags const c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@2W4e_online_user_flags@@B"
// char const **k_peer_status_flag_descriptions; // "?k_peer_status_flag_descriptions@@3PAPBDA"

// bool network_session_interface_initialize(class c_network_session_manager *);
// public: void s_network_session_interface_dlc_monitor::initialize(void);
// void network_session_interface_dispose(void);
// void network_session_interface_update(void);
// void network_session_interface_reset(long);
// bool network_squad_session_set_closed_status(enum e_network_session_closed_status);
// public: bool c_network_session::set_closed_mode(enum e_network_session_closed_status);
// bool network_squad_session_set_countdown_timer(bool, long, enum e_network_game_countdown_delayed_reason, enum e_output_user_index);
// long network_squad_session_get_player_count(void);
// long network_squad_session_get_maximum_player_count(void);
// bool network_squad_session_set_maximum_player_count(long);
// bool network_squad_session_local_peer_is_leader(void);
// bool network_squad_session_local_peer_is_host(void);
// bool network_squad_session_whack_to_offline_session_class(void);
// long network_squad_session_get_best_host_estimated_maximum_player_count(void);
// bool network_squad_session_delegate_leadership(long);
// bool network_squad_session_delegate_host(long);
// bool network_squad_session_boot_player(long, enum e_network_session_boot_reason);
// void network_session_interface_handle_message(enum e_session_network_message);
// bool network_session_interface_local_machine_in_sessions_with_peers(void);
// bool network_session_interface_local_machine_in_session_with_peers(class c_network_session const *);
// void network_session_interface_handle_lost_connection(enum e_network_lost_connection_type);
// bool network_session_interface_was_guide_opened_during_a_multiplayer_session(void);
// void network_session_interface_set_local_name(wchar_t const *, wchar_t const *);
// void network_session_interface_add_local_user(enum e_output_user_index, struct s_player_identifier const *);
// void network_session_interface_remove_local_user(enum e_output_user_index);
// bool network_session_interface_get_is_zombie_local_user(enum e_output_user_index);
// void network_session_interface_set_is_zombie_local_user(enum e_output_user_index, bool);
// bool network_session_interface_local_user_exists(enum e_output_user_index);
// enum e_network_interface_user_state network_session_interface_get_local_user_state(enum e_output_user_index);
// void network_session_interface_set_local_user_state(enum e_output_user_index, enum e_network_interface_user_state);
// bool network_session_interface_get_is_user_signed_in(enum e_output_user_index);
// bool network_session_interface_get_local_user_identifier(enum e_output_user_index, struct s_player_identifier *, bool);
// unsigned __int64 network_session_interface_get_local_user_xuid(enum e_output_user_index);
// bool network_session_interface_is_local_user_silver_or_gold_live(enum e_output_user_index);
// bool network_session_interface_is_local_user_online_enabled(enum e_output_user_index);
// bool network_session_interface_is_user_created_content_allowed(enum e_output_user_index);
// bool network_session_interface_is_friend_created_content_allowed(enum e_output_user_index);
// void network_session_interface_set_local_user_xuid(enum e_output_user_index, unsigned __int64, bool, bool, bool, bool, bool);
// enum e_multiplayer_team network_session_interface_get_team_index(enum e_output_user_index);
// void network_session_interface_set_desired_multiplayer_team(enum e_output_user_index, enum e_multiplayer_team);
// public: long c_network_session::session_index(void) const;
// bool network_session_interface_get_local_user_properties(enum e_output_user_index, enum e_controller_index *, struct s_player_configuration *, struct s_player_voice_settings *);
// void network_session_interface_set_local_user_properties(enum e_output_user_index, enum e_controller_index, struct s_player_configuration const *, struct s_player_voice_settings const *);
// void network_session_interface_set_local_user_override_hopper_directory(enum e_output_user_index, char const *);
// void network_session_interface_set_live_service_qos(struct s_transport_qos_result const *);
// void network_session_interface_clear_peer_status_flags(void);
// void network_session_interface_set_peer_status_flag(enum e_network_session_peer_properties_status_flags, bool);
// bool network_session_interface_test_peer_status_flag(enum e_network_session_peer_properties_status_flags);
// void network_session_interface_set_ready_hopper_identifier(unsigned short);
// void network_session_interface_notify_set_local_specific_film(struct s_saved_film_description const *);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// void network_session_interface_set_matchmaking_team_nonce(unsigned __int64);
// void network_session_interface_clear_matchmaking_team_nonce(void);
// void network_session_interface_set_session_messaging(class c_network_session *, enum e_network_session_parameter_session_messaging_type);
// bool network_session_interface_is_selecting_new_host(void);
// bool network_session_interface_is_connecting_to_new_host(void);
// bool network_session_interface_get_live_connection_info(struct s_transport_qos_result *, enum e_online_nat_type *, long *);
// bool network_session_interface_wants_main_menu_to_load(void);
// wchar_t const * network_squad_session_get_session_name(void);
// enum e_network_session_class network_squad_session_get_session_class(void);
// void network_session_interface_update_local_state(void);
// void cache_files_reset_failed_dlc_maps(void);
// void network_session_interface_update_peer_status_flags(void);
// public: s_hopper_information::s_hopper_information(void);
// void network_session_interface_update_local_users(void);
// void network_session_interface_update_dlc_monitor(void);
// void network_session_set_player_failure_reason(enum e_output_user_index, enum e_network_join_refuse_reason);
// void network_session_interface_update_session(class c_network_session *);
// public: bool c_network_session::is_channel_to_host_connected(void) const;
// void network_session_interface_reset_session_state_if_necessary(class c_network_session const *);
// public: long c_network_session::get_connection_identifier(void) const;
// void network_session_interface_notify_game_variant_changed(class c_network_session *);
// void network_session_interface_set_game_start_warning(enum e_session_game_start_warning);
// void network_session_interface_set_game_start_error(enum e_session_game_start_error);
// void network_session_interface_clear_speculative_migration_history(void);
// public: void c_network_session::reset_speculative_migration_state(void);
// bool network_session_interface_get_social_preferences(struct s_network_social_preferences *, bool);
// bool voice_device_is_connected(enum e_controller_index);
// void network_session_interface_set_social_preferences(struct s_network_social_preferences const *);
// bool network_session_interface_get_squad_session(class c_network_session **);
// bool network_session_interface_get_posse_session(class c_network_session **);
// bool network_session_interface_get_group_session(class c_network_session **);
// bool network_session_interface_get_interactive_session(class c_network_session **);
// bool network_session_interface_interactive_session_is_squad(void);
// bool network_session_interface_interactive_session_is_posse(void);
// bool network_session_interface_interactive_session_is_group(void);
// enum e_life_cycle_session_type network_session_interface_interactive_session_get_type(void);
// class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> network_session_interface_get_session_player_party_mask(class c_network_session *, long, enum e_life_cycle_session_type);
// class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> network_session_interface_get_interactive_session_player_party_mask(long, enum e_life_cycle_session_type);
// void network_session_force_update_all_session_local_peer_properties(void);
// void network_session_update_local_peer_properties(class c_network_session *);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: void s_network_session_peer_properties::clear_for_checksum(void);
// public: bool c_network_session_membership::is_peer_joined(long) const;
// void network_session_calculate_peer_connectivity(class c_network_session const *, struct s_network_session_peer_connectivity *);
// enum e_session_property_priority_state network_session_interface_get_session_property_priority_state(class c_network_session *);
// class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> network_session_build_host_party_masks(class c_network_session const *, class c_network_session const *);
// void network_session_update_session_parameter_transmission_periods(class c_network_session *);
// void network_session_update_network_quality_session_parameter(class c_network_session *);
// void network_session_update_local_specific_parameters(class c_network_session *);
// void network_session_update_user_removal(class c_network_session *, enum e_output_user_index);
// void network_session_update_user_properties(class c_network_session *, enum e_output_user_index);
// void network_session_check_properties(class c_network_session *, bool);
// public: struct s_network_session_player * c_network_session_membership::get_players(void);
// void network_session_update_team_indices(class c_network_session *, bool, long, bool);
// enum e_network_session_map_status network_squad_session_get_map_precache_status(enum e_map_id, long *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *);
// enum e_network_session_map_status network_session_get_map_precache_status(class c_network_session const *, enum e_map_id, long *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *);
// void network_session_interface_join_friend(char const *);
// void network_session_interface_join_squad_to_friend(char const *);
// void network_session_interface_join_sessionid(char const *);
// void network_session_interface_join_squad_to_sessionid(char const *);
// void network_session_interface_enable_join_friend_loop(long);
// void network_session_interface_update_join_a_friend(void);
// bool network_session_interface_is_in_test_loop(void);
// float network_session_interface_calculate_map_progress(enum e_scenario_type, short, char const *);
// void network_session_interface_invalidate_map_progress(void);
// public: c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void);
// public: enum e_hopper_game_type c_enum_no_init<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_hopper_game_type(void) const;
// public: c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>(enum e_session_game_start_warning);
// public: c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>::c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>(enum e_session_game_start_error);
// public: void s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::set_memory(long);
// public: bool s_static_string<128>::is_empty(void) const;
// public: bool c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::test(enum e_network_session_peer_properties_status_flags) const;
// public: void c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::set(enum e_network_session_peer_properties_status_flags, bool);
// public: bool c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver> const &) const;
// public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> & c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator>>=(long);
// public: class c_static_string<1024> c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::to_string(void) const;
// public: struct s_network_session_interface_user & s_static_array<struct s_network_session_interface_user, 4>::operator[]<enum e_output_user_index>(enum e_output_user_index);
// public: struct s_network_session_interface_user_peer_session_data & s_static_array<struct s_network_session_interface_user_peer_session_data, 4>::operator[]<long>(long);
// public: struct s_network_session_interface_user_session_data & s_static_array<struct s_network_session_interface_user_session_data, 4>::operator[]<long>(long);
// public: struct s_network_session_interface_user & s_static_array<struct s_network_session_interface_user, 4>::operator[]<long>(long);
// bool operator!=<enum e_multiplayer_team>(enum e_multiplayer_team const &, enum e_none_sentinel const &);
// public: float & s_static_array<float, 4>::operator[]<enum e_network_social_axis>(enum e_network_social_axis);
// public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> const & s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::operator[]<enum e_life_cycle_session_type>(enum e_life_cycle_session_type) const;
// public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> & s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::operator[]<enum e_life_cycle_session_type>(enum e_life_cycle_session_type);
// unsigned long fast_checksum<struct s_network_session_peer_properties>(unsigned long, struct s_network_session_peer_properties const *);
// unsigned long fast_checksum<struct s_player_configuration_from_client>(unsigned long, struct s_player_configuration_from_client const *);
// public: bool c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::test(enum e_online_user_flags) const;
// public: static bool c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::valid_bit(enum e_network_session_peer_properties_status_flags);
// private: static unsigned long c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_session_peer_properties_status_flags);
// public: bool c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::test(enum e_peer_properties_connection_update) const;
// public: bool c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::valid(void) const;
// public: static bool s_static_array<struct s_network_session_interface_user, 4>::valid<enum e_output_user_index>(enum e_output_user_index);
// public: static bool s_static_array<struct s_network_session_interface_user_peer_session_data, 4>::valid<long>(long);
// public: static bool s_static_array<struct s_network_session_interface_user_session_data, 4>::valid<long>(long);
// public: static bool s_static_array<struct s_network_session_interface_user, 4>::valid<long>(long);
// bool operator==<enum e_multiplayer_team>(enum e_multiplayer_team const &, enum e_none_sentinel const &);
// public: static bool s_static_array<float, 4>::valid<enum e_network_social_axis>(enum e_network_social_axis);
// public: static bool s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::valid<enum e_life_cycle_session_type>(enum e_life_cycle_session_type);
// void prefetch<struct s_network_session_peer_properties>(struct s_network_session_peer_properties const *);
// void prefetch<struct s_player_configuration_from_client>(struct s_player_configuration_from_client const *);
// public: static bool c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::valid_bit(enum e_online_user_flags);
// private: static unsigned long c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::flag_size_type(enum e_online_user_flags);
// public: static bool c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_peer_properties_connection_update);
// private: static unsigned long c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_peer_properties_connection_update);
// public: s_network_session_interface_globals::s_network_session_interface_globals(void);
// public: s_static_array<struct s_network_session_interface_user, 4>::s_static_array<struct s_network_session_interface_user, 4>(void);
// public: s_static_array<struct s_network_session_interface_user_peer_session_data, 4>::s_static_array<struct s_network_session_interface_user_peer_session_data, 4>(void);
// public: s_network_session_interface_user::s_network_session_interface_user(void);
// public: s_network_session_interface_user_peer_session_data::s_network_session_interface_user_peer_session_data(void);
// public: s_static_array<struct s_network_session_interface_user_session_data, 4>::s_static_array<struct s_network_session_interface_user_session_data, 4>(void);
// public: s_network_session_interface_user_session_data::s_network_session_interface_user_session_data(void);

//bool network_session_interface_initialize(class c_network_session_manager *)
//{
//    mangled_ppc("?network_session_interface_initialize@@YA_NPAVc_network_session_manager@@@Z");
//};

//public: void s_network_session_interface_dlc_monitor::initialize(void)
//{
//    mangled_ppc("?initialize@s_network_session_interface_dlc_monitor@@QAAXXZ");
//};

//void network_session_interface_dispose(void)
//{
//    mangled_ppc("?network_session_interface_dispose@@YAXXZ");
//};

//void network_session_interface_update(void)
//{
//    mangled_ppc("?network_session_interface_update@@YAXXZ");
//};

//void network_session_interface_reset(long)
//{
//    mangled_ppc("?network_session_interface_reset@@YAXJ@Z");
//};

//bool network_squad_session_set_closed_status(enum e_network_session_closed_status)
//{
//    mangled_ppc("?network_squad_session_set_closed_status@@YA_NW4e_network_session_closed_status@@@Z");
//};

//public: bool c_network_session::set_closed_mode(enum e_network_session_closed_status)
//{
//    mangled_ppc("?set_closed_mode@c_network_session@@QAA_NW4e_network_session_closed_status@@@Z");
//};

//bool network_squad_session_set_countdown_timer(bool, long, enum e_network_game_countdown_delayed_reason, enum e_output_user_index)
//{
//    mangled_ppc("?network_squad_session_set_countdown_timer@@YA_N_NJW4e_network_game_countdown_delayed_reason@@W4e_output_user_index@@@Z");
//};

//long network_squad_session_get_player_count(void)
//{
//    mangled_ppc("?network_squad_session_get_player_count@@YAJXZ");
//};

//long network_squad_session_get_maximum_player_count(void)
//{
//    mangled_ppc("?network_squad_session_get_maximum_player_count@@YAJXZ");
//};

//bool network_squad_session_set_maximum_player_count(long)
//{
//    mangled_ppc("?network_squad_session_set_maximum_player_count@@YA_NJ@Z");
//};

//bool network_squad_session_local_peer_is_leader(void)
//{
//    mangled_ppc("?network_squad_session_local_peer_is_leader@@YA_NXZ");
//};

//bool network_squad_session_local_peer_is_host(void)
//{
//    mangled_ppc("?network_squad_session_local_peer_is_host@@YA_NXZ");
//};

//bool network_squad_session_whack_to_offline_session_class(void)
//{
//    mangled_ppc("?network_squad_session_whack_to_offline_session_class@@YA_NXZ");
//};

//long network_squad_session_get_best_host_estimated_maximum_player_count(void)
//{
//    mangled_ppc("?network_squad_session_get_best_host_estimated_maximum_player_count@@YAJXZ");
//};

//bool network_squad_session_delegate_leadership(long)
//{
//    mangled_ppc("?network_squad_session_delegate_leadership@@YA_NJ@Z");
//};

//bool network_squad_session_delegate_host(long)
//{
//    mangled_ppc("?network_squad_session_delegate_host@@YA_NJ@Z");
//};

//bool network_squad_session_boot_player(long, enum e_network_session_boot_reason)
//{
//    mangled_ppc("?network_squad_session_boot_player@@YA_NJW4e_network_session_boot_reason@@@Z");
//};

//void network_session_interface_handle_message(enum e_session_network_message)
//{
//    mangled_ppc("?network_session_interface_handle_message@@YAXW4e_session_network_message@@@Z");
//};

//bool network_session_interface_local_machine_in_sessions_with_peers(void)
//{
//    mangled_ppc("?network_session_interface_local_machine_in_sessions_with_peers@@YA_NXZ");
//};

//bool network_session_interface_local_machine_in_session_with_peers(class c_network_session const *)
//{
//    mangled_ppc("?network_session_interface_local_machine_in_session_with_peers@@YA_NPBVc_network_session@@@Z");
//};

//void network_session_interface_handle_lost_connection(enum e_network_lost_connection_type)
//{
//    mangled_ppc("?network_session_interface_handle_lost_connection@@YAXW4e_network_lost_connection_type@@@Z");
//};

//bool network_session_interface_was_guide_opened_during_a_multiplayer_session(void)
//{
//    mangled_ppc("?network_session_interface_was_guide_opened_during_a_multiplayer_session@@YA_NXZ");
//};

//void network_session_interface_set_local_name(wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?network_session_interface_set_local_name@@YAXPB_W0@Z");
//};

//void network_session_interface_add_local_user(enum e_output_user_index, struct s_player_identifier const *)
//{
//    mangled_ppc("?network_session_interface_add_local_user@@YAXW4e_output_user_index@@PBUs_player_identifier@@@Z");
//};

//void network_session_interface_remove_local_user(enum e_output_user_index)
//{
//    mangled_ppc("?network_session_interface_remove_local_user@@YAXW4e_output_user_index@@@Z");
//};

//bool network_session_interface_get_is_zombie_local_user(enum e_output_user_index)
//{
//    mangled_ppc("?network_session_interface_get_is_zombie_local_user@@YA_NW4e_output_user_index@@@Z");
//};

//void network_session_interface_set_is_zombie_local_user(enum e_output_user_index, bool)
//{
//    mangled_ppc("?network_session_interface_set_is_zombie_local_user@@YAXW4e_output_user_index@@_N@Z");
//};

//bool network_session_interface_local_user_exists(enum e_output_user_index)
//{
//    mangled_ppc("?network_session_interface_local_user_exists@@YA_NW4e_output_user_index@@@Z");
//};

//enum e_network_interface_user_state network_session_interface_get_local_user_state(enum e_output_user_index)
//{
//    mangled_ppc("?network_session_interface_get_local_user_state@@YA?AW4e_network_interface_user_state@@W4e_output_user_index@@@Z");
//};

//void network_session_interface_set_local_user_state(enum e_output_user_index, enum e_network_interface_user_state)
//{
//    mangled_ppc("?network_session_interface_set_local_user_state@@YAXW4e_output_user_index@@W4e_network_interface_user_state@@@Z");
//};

//bool network_session_interface_get_is_user_signed_in(enum e_output_user_index)
//{
//    mangled_ppc("?network_session_interface_get_is_user_signed_in@@YA_NW4e_output_user_index@@@Z");
//};

//bool network_session_interface_get_local_user_identifier(enum e_output_user_index, struct s_player_identifier *, bool)
//{
//    mangled_ppc("?network_session_interface_get_local_user_identifier@@YA_NW4e_output_user_index@@PAUs_player_identifier@@_N@Z");
//};

//unsigned __int64 network_session_interface_get_local_user_xuid(enum e_output_user_index)
//{
//    mangled_ppc("?network_session_interface_get_local_user_xuid@@YA_KW4e_output_user_index@@@Z");
//};

//bool network_session_interface_is_local_user_silver_or_gold_live(enum e_output_user_index)
//{
//    mangled_ppc("?network_session_interface_is_local_user_silver_or_gold_live@@YA_NW4e_output_user_index@@@Z");
//};

//bool network_session_interface_is_local_user_online_enabled(enum e_output_user_index)
//{
//    mangled_ppc("?network_session_interface_is_local_user_online_enabled@@YA_NW4e_output_user_index@@@Z");
//};

//bool network_session_interface_is_user_created_content_allowed(enum e_output_user_index)
//{
//    mangled_ppc("?network_session_interface_is_user_created_content_allowed@@YA_NW4e_output_user_index@@@Z");
//};

//bool network_session_interface_is_friend_created_content_allowed(enum e_output_user_index)
//{
//    mangled_ppc("?network_session_interface_is_friend_created_content_allowed@@YA_NW4e_output_user_index@@@Z");
//};

//void network_session_interface_set_local_user_xuid(enum e_output_user_index, unsigned __int64, bool, bool, bool, bool, bool)
//{
//    mangled_ppc("?network_session_interface_set_local_user_xuid@@YAXW4e_output_user_index@@_K_N2222@Z");
//};

//enum e_multiplayer_team network_session_interface_get_team_index(enum e_output_user_index)
//{
//    mangled_ppc("?network_session_interface_get_team_index@@YA?AW4e_multiplayer_team@@W4e_output_user_index@@@Z");
//};

//void network_session_interface_set_desired_multiplayer_team(enum e_output_user_index, enum e_multiplayer_team)
//{
//    mangled_ppc("?network_session_interface_set_desired_multiplayer_team@@YAXW4e_output_user_index@@W4e_multiplayer_team@@@Z");
//};

//public: long c_network_session::session_index(void) const
//{
//    mangled_ppc("?session_index@c_network_session@@QBAJXZ");
//};

//bool network_session_interface_get_local_user_properties(enum e_output_user_index, enum e_controller_index *, struct s_player_configuration *, struct s_player_voice_settings *)
//{
//    mangled_ppc("?network_session_interface_get_local_user_properties@@YA_NW4e_output_user_index@@PAW4e_controller_index@@PAUs_player_configuration@@PAUs_player_voice_settings@@@Z");
//};

//void network_session_interface_set_local_user_properties(enum e_output_user_index, enum e_controller_index, struct s_player_configuration const *, struct s_player_voice_settings const *)
//{
//    mangled_ppc("?network_session_interface_set_local_user_properties@@YAXW4e_output_user_index@@W4e_controller_index@@PBUs_player_configuration@@PBUs_player_voice_settings@@@Z");
//};

//void network_session_interface_set_local_user_override_hopper_directory(enum e_output_user_index, char const *)
//{
//    mangled_ppc("?network_session_interface_set_local_user_override_hopper_directory@@YAXW4e_output_user_index@@PBD@Z");
//};

//void network_session_interface_set_live_service_qos(struct s_transport_qos_result const *)
//{
//    mangled_ppc("?network_session_interface_set_live_service_qos@@YAXPBUs_transport_qos_result@@@Z");
//};

//void network_session_interface_clear_peer_status_flags(void)
//{
//    mangled_ppc("?network_session_interface_clear_peer_status_flags@@YAXXZ");
//};

//void network_session_interface_set_peer_status_flag(enum e_network_session_peer_properties_status_flags, bool)
//{
//    mangled_ppc("?network_session_interface_set_peer_status_flag@@YAXW4e_network_session_peer_properties_status_flags@@_N@Z");
//};

//bool network_session_interface_test_peer_status_flag(enum e_network_session_peer_properties_status_flags)
//{
//    mangled_ppc("?network_session_interface_test_peer_status_flag@@YA_NW4e_network_session_peer_properties_status_flags@@@Z");
//};

//void network_session_interface_set_ready_hopper_identifier(unsigned short)
//{
//    mangled_ppc("?network_session_interface_set_ready_hopper_identifier@@YAXG@Z");
//};

//void network_session_interface_notify_set_local_specific_film(struct s_saved_film_description const *)
//{
//    mangled_ppc("?network_session_interface_notify_set_local_specific_film@@YAXPBUs_saved_film_description@@@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//void network_session_interface_set_matchmaking_team_nonce(unsigned __int64)
//{
//    mangled_ppc("?network_session_interface_set_matchmaking_team_nonce@@YAX_K@Z");
//};

//void network_session_interface_clear_matchmaking_team_nonce(void)
//{
//    mangled_ppc("?network_session_interface_clear_matchmaking_team_nonce@@YAXXZ");
//};

//void network_session_interface_set_session_messaging(class c_network_session *, enum e_network_session_parameter_session_messaging_type)
//{
//    mangled_ppc("?network_session_interface_set_session_messaging@@YAXPAVc_network_session@@W4e_network_session_parameter_session_messaging_type@@@Z");
//};

//bool network_session_interface_is_selecting_new_host(void)
//{
//    mangled_ppc("?network_session_interface_is_selecting_new_host@@YA_NXZ");
//};

//bool network_session_interface_is_connecting_to_new_host(void)
//{
//    mangled_ppc("?network_session_interface_is_connecting_to_new_host@@YA_NXZ");
//};

//bool network_session_interface_get_live_connection_info(struct s_transport_qos_result *, enum e_online_nat_type *, long *)
//{
//    mangled_ppc("?network_session_interface_get_live_connection_info@@YA_NPAUs_transport_qos_result@@PAW4e_online_nat_type@@PAJ@Z");
//};

//bool network_session_interface_wants_main_menu_to_load(void)
//{
//    mangled_ppc("?network_session_interface_wants_main_menu_to_load@@YA_NXZ");
//};

//wchar_t const * network_squad_session_get_session_name(void)
//{
//    mangled_ppc("?network_squad_session_get_session_name@@YAPB_WXZ");
//};

//enum e_network_session_class network_squad_session_get_session_class(void)
//{
//    mangled_ppc("?network_squad_session_get_session_class@@YA?AW4e_network_session_class@@XZ");
//};

//void network_session_interface_update_local_state(void)
//{
//    mangled_ppc("?network_session_interface_update_local_state@@YAXXZ");
//};

//void cache_files_reset_failed_dlc_maps(void)
//{
//    mangled_ppc("?cache_files_reset_failed_dlc_maps@@YAXXZ");
//};

//void network_session_interface_update_peer_status_flags(void)
//{
//    mangled_ppc("?network_session_interface_update_peer_status_flags@@YAXXZ");
//};

//public: s_hopper_information::s_hopper_information(void)
//{
//    mangled_ppc("??0s_hopper_information@@QAA@XZ");
//};

//void network_session_interface_update_local_users(void)
//{
//    mangled_ppc("?network_session_interface_update_local_users@@YAXXZ");
//};

//void network_session_interface_update_dlc_monitor(void)
//{
//    mangled_ppc("?network_session_interface_update_dlc_monitor@@YAXXZ");
//};

//void network_session_set_player_failure_reason(enum e_output_user_index, enum e_network_join_refuse_reason)
//{
//    mangled_ppc("?network_session_set_player_failure_reason@@YAXW4e_output_user_index@@W4e_network_join_refuse_reason@@@Z");
//};

//void network_session_interface_update_session(class c_network_session *)
//{
//    mangled_ppc("?network_session_interface_update_session@@YAXPAVc_network_session@@@Z");
//};

//public: bool c_network_session::is_channel_to_host_connected(void) const
//{
//    mangled_ppc("?is_channel_to_host_connected@c_network_session@@QBA_NXZ");
//};

//void network_session_interface_reset_session_state_if_necessary(class c_network_session const *)
//{
//    mangled_ppc("?network_session_interface_reset_session_state_if_necessary@@YAXPBVc_network_session@@@Z");
//};

//public: long c_network_session::get_connection_identifier(void) const
//{
//    mangled_ppc("?get_connection_identifier@c_network_session@@QBAJXZ");
//};

//void network_session_interface_notify_game_variant_changed(class c_network_session *)
//{
//    mangled_ppc("?network_session_interface_notify_game_variant_changed@@YAXPAVc_network_session@@@Z");
//};

//void network_session_interface_set_game_start_warning(enum e_session_game_start_warning)
//{
//    mangled_ppc("?network_session_interface_set_game_start_warning@@YAXW4e_session_game_start_warning@@@Z");
//};

//void network_session_interface_set_game_start_error(enum e_session_game_start_error)
//{
//    mangled_ppc("?network_session_interface_set_game_start_error@@YAXW4e_session_game_start_error@@@Z");
//};

//void network_session_interface_clear_speculative_migration_history(void)
//{
//    mangled_ppc("?network_session_interface_clear_speculative_migration_history@@YAXXZ");
//};

//public: void c_network_session::reset_speculative_migration_state(void)
//{
//    mangled_ppc("?reset_speculative_migration_state@c_network_session@@QAAXXZ");
//};

//bool network_session_interface_get_social_preferences(struct s_network_social_preferences *, bool)
//{
//    mangled_ppc("?network_session_interface_get_social_preferences@@YA_NPAUs_network_social_preferences@@_N@Z");
//};

//bool voice_device_is_connected(enum e_controller_index)
//{
//    mangled_ppc("?voice_device_is_connected@@YA_NW4e_controller_index@@@Z");
//};

//void network_session_interface_set_social_preferences(struct s_network_social_preferences const *)
//{
//    mangled_ppc("?network_session_interface_set_social_preferences@@YAXPBUs_network_social_preferences@@@Z");
//};

//bool network_session_interface_get_squad_session(class c_network_session **)
//{
//    mangled_ppc("?network_session_interface_get_squad_session@@YA_NPAPAVc_network_session@@@Z");
//};

//bool network_session_interface_get_posse_session(class c_network_session **)
//{
//    mangled_ppc("?network_session_interface_get_posse_session@@YA_NPAPAVc_network_session@@@Z");
//};

//bool network_session_interface_get_group_session(class c_network_session **)
//{
//    mangled_ppc("?network_session_interface_get_group_session@@YA_NPAPAVc_network_session@@@Z");
//};

//bool network_session_interface_get_interactive_session(class c_network_session **)
//{
//    mangled_ppc("?network_session_interface_get_interactive_session@@YA_NPAPAVc_network_session@@@Z");
//};

//bool network_session_interface_interactive_session_is_squad(void)
//{
//    mangled_ppc("?network_session_interface_interactive_session_is_squad@@YA_NXZ");
//};

//bool network_session_interface_interactive_session_is_posse(void)
//{
//    mangled_ppc("?network_session_interface_interactive_session_is_posse@@YA_NXZ");
//};

//bool network_session_interface_interactive_session_is_group(void)
//{
//    mangled_ppc("?network_session_interface_interactive_session_is_group@@YA_NXZ");
//};

//enum e_life_cycle_session_type network_session_interface_interactive_session_get_type(void)
//{
//    mangled_ppc("?network_session_interface_interactive_session_get_type@@YA?AW4e_life_cycle_session_type@@XZ");
//};

//class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> network_session_interface_get_session_player_party_mask(class c_network_session *, long, enum e_life_cycle_session_type)
//{
//    mangled_ppc("?network_session_interface_get_session_player_party_mask@@YA?AV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@PAVc_network_session@@JW4e_life_cycle_session_type@@@Z");
//};

//class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> network_session_interface_get_interactive_session_player_party_mask(long, enum e_life_cycle_session_type)
//{
//    mangled_ppc("?network_session_interface_get_interactive_session_player_party_mask@@YA?AV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@JW4e_life_cycle_session_type@@@Z");
//};

//void network_session_force_update_all_session_local_peer_properties(void)
//{
//    mangled_ppc("?network_session_force_update_all_session_local_peer_properties@@YAXXZ");
//};

//void network_session_update_local_peer_properties(class c_network_session *)
//{
//    mangled_ppc("?network_session_update_local_peer_properties@@YAXPAVc_network_session@@@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//public: void s_network_session_peer_properties::clear_for_checksum(void)
//{
//    mangled_ppc("?clear_for_checksum@s_network_session_peer_properties@@QAAXXZ");
//};

//public: bool c_network_session_membership::is_peer_joined(long) const
//{
//    mangled_ppc("?is_peer_joined@c_network_session_membership@@QBA_NJ@Z");
//};

//void network_session_calculate_peer_connectivity(class c_network_session const *, struct s_network_session_peer_connectivity *)
//{
//    mangled_ppc("?network_session_calculate_peer_connectivity@@YAXPBVc_network_session@@PAUs_network_session_peer_connectivity@@@Z");
//};

//enum e_session_property_priority_state network_session_interface_get_session_property_priority_state(class c_network_session *)
//{
//    mangled_ppc("?network_session_interface_get_session_property_priority_state@@YA?AW4e_session_property_priority_state@@PAVc_network_session@@@Z");
//};

//class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> network_session_build_host_party_masks(class c_network_session const *, class c_network_session const *)
//{
//    mangled_ppc("?network_session_build_host_party_masks@@YA?AV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@PBVc_network_session@@0@Z");
//};

//void network_session_update_session_parameter_transmission_periods(class c_network_session *)
//{
//    mangled_ppc("?network_session_update_session_parameter_transmission_periods@@YAXPAVc_network_session@@@Z");
//};

//void network_session_update_network_quality_session_parameter(class c_network_session *)
//{
//    mangled_ppc("?network_session_update_network_quality_session_parameter@@YAXPAVc_network_session@@@Z");
//};

//void network_session_update_local_specific_parameters(class c_network_session *)
//{
//    mangled_ppc("?network_session_update_local_specific_parameters@@YAXPAVc_network_session@@@Z");
//};

//void network_session_update_user_removal(class c_network_session *, enum e_output_user_index)
//{
//    mangled_ppc("?network_session_update_user_removal@@YAXPAVc_network_session@@W4e_output_user_index@@@Z");
//};

//void network_session_update_user_properties(class c_network_session *, enum e_output_user_index)
//{
//    mangled_ppc("?network_session_update_user_properties@@YAXPAVc_network_session@@W4e_output_user_index@@@Z");
//};

//void network_session_check_properties(class c_network_session *, bool)
//{
//    mangled_ppc("?network_session_check_properties@@YAXPAVc_network_session@@_N@Z");
//};

//public: struct s_network_session_player * c_network_session_membership::get_players(void)
//{
//    mangled_ppc("?get_players@c_network_session_membership@@QAAPAUs_network_session_player@@XZ");
//};

//void network_session_update_team_indices(class c_network_session *, bool, long, bool)
//{
//    mangled_ppc("?network_session_update_team_indices@@YAXPAVc_network_session@@_NJ1@Z");
//};

//enum e_network_session_map_status network_squad_session_get_map_precache_status(enum e_map_id, long *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?network_squad_session_get_map_precache_status@@YA?AW4e_network_session_map_status@@W4e_map_id@@PAJPAV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//enum e_network_session_map_status network_session_get_map_precache_status(class c_network_session const *, enum e_map_id, long *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?network_session_get_map_precache_status@@YA?AW4e_network_session_map_status@@PBVc_network_session@@W4e_map_id@@PAJPAV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@3@Z");
//};

//void network_session_interface_join_friend(char const *)
//{
//    mangled_ppc("?network_session_interface_join_friend@@YAXPBD@Z");
//};

//void network_session_interface_join_squad_to_friend(char const *)
//{
//    mangled_ppc("?network_session_interface_join_squad_to_friend@@YAXPBD@Z");
//};

//void network_session_interface_join_sessionid(char const *)
//{
//    mangled_ppc("?network_session_interface_join_sessionid@@YAXPBD@Z");
//};

//void network_session_interface_join_squad_to_sessionid(char const *)
//{
//    mangled_ppc("?network_session_interface_join_squad_to_sessionid@@YAXPBD@Z");
//};

//void network_session_interface_enable_join_friend_loop(long)
//{
//    mangled_ppc("?network_session_interface_enable_join_friend_loop@@YAXJ@Z");
//};

//void network_session_interface_update_join_a_friend(void)
//{
//    mangled_ppc("?network_session_interface_update_join_a_friend@@YAXXZ");
//};

//bool network_session_interface_is_in_test_loop(void)
//{
//    mangled_ppc("?network_session_interface_is_in_test_loop@@YA_NXZ");
//};

//float network_session_interface_calculate_map_progress(enum e_scenario_type, short, char const *)
//{
//    mangled_ppc("?network_session_interface_calculate_map_progress@@YAMW4e_scenario_type@@FPBD@Z");
//};

//void network_session_interface_invalidate_map_progress(void)
//{
//    mangled_ppc("?network_session_interface_invalidate_map_progress@@YAXXZ");
//};

//public: c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_hopper_player_investment_category@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_hopper_game_type@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: enum e_hopper_game_type c_enum_no_init<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_hopper_game_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_hopper_game_type@@E$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_hopper_game_type@@XZ");
//};

//public: c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>(enum e_session_game_start_warning)
//{
//    mangled_ppc("??0?$c_enum@W4e_session_game_start_warning@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_session_game_start_warning@@@Z");
//};

//public: c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>::c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>(enum e_session_game_start_error)
//{
//    mangled_ppc("??0?$c_enum@W4e_session_game_start_error@@D$0A@$0EJ@Us_default_enum_string_resolver@@@@QAA@W4e_session_game_start_error@@@Z");
//};

//public: void s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@V?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@$01@@QAAXJ@Z");
//};

//public: bool s_static_string<128>::is_empty(void) const
//{
//    mangled_ppc("?is_empty@?$s_static_string@$0IA@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::test(enum e_network_session_peer_properties_status_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_session_peer_properties_status_flags@@K$0BI@Us_default_enum_string_resolver@@@@QBA_NW4e_network_session_peer_properties_status_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::set(enum e_network_session_peer_properties_status_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_session_peer_properties_status_flags@@K$0BI@Us_default_enum_string_resolver@@@@QAAXW4e_network_session_peer_properties_status_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@W4e_network_session_peer_properties_status_flags@@K$0BI@Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> & c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator>>=(long)
//{
//    mangled_ppc("??_2?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QAAAAV0@J@Z");
//};

//public: class c_static_string<1024> c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_flags_no_init@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@QBA?AV?$c_static_string@$0EAA@@@XZ");
//};

//public: struct s_network_session_interface_user & s_static_array<struct s_network_session_interface_user, 4>::operator[]<enum e_output_user_index>(enum e_output_user_index)
//{
//    mangled_ppc("??$?AW4e_output_user_index@@@?$s_static_array@Us_network_session_interface_user@@$03@@QAAAAUs_network_session_interface_user@@W4e_output_user_index@@@Z");
//};

//public: struct s_network_session_interface_user_peer_session_data & s_static_array<struct s_network_session_interface_user_peer_session_data, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_session_interface_user_peer_session_data@@$03@@QAAAAUs_network_session_interface_user_peer_session_data@@J@Z");
//};

//public: struct s_network_session_interface_user_session_data & s_static_array<struct s_network_session_interface_user_session_data, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_session_interface_user_session_data@@$03@@QAAAAUs_network_session_interface_user_session_data@@J@Z");
//};

//public: struct s_network_session_interface_user & s_static_array<struct s_network_session_interface_user, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_session_interface_user@@$03@@QAAAAUs_network_session_interface_user@@J@Z");
//};

//bool operator!=<enum e_multiplayer_team>(enum e_multiplayer_team const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9W4e_multiplayer_team@@@@YA_NABW4e_multiplayer_team@@ABW4e_none_sentinel@@@Z");
//};

//public: float & s_static_array<float, 4>::operator[]<enum e_network_social_axis>(enum e_network_social_axis)
//{
//    mangled_ppc("??$?AW4e_network_social_axis@@@?$s_static_array@M$03@@QAAAAMW4e_network_social_axis@@@Z");
//};

//public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> const & s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::operator[]<enum e_life_cycle_session_type>(enum e_life_cycle_session_type) const
//{
//    mangled_ppc("??$?AW4e_life_cycle_session_type@@@?$s_static_array@V?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@$01@@QBAABV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@W4e_life_cycle_session_type@@@Z");
//};

//public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> & s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::operator[]<enum e_life_cycle_session_type>(enum e_life_cycle_session_type)
//{
//    mangled_ppc("??$?AW4e_life_cycle_session_type@@@?$s_static_array@V?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@$01@@QAAAAV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@W4e_life_cycle_session_type@@@Z");
//};

//unsigned long fast_checksum<struct s_network_session_peer_properties>(unsigned long, struct s_network_session_peer_properties const *)
//{
//    mangled_ppc("??$fast_checksum@Us_network_session_peer_properties@@@@YAKKPBUs_network_session_peer_properties@@@Z");
//};

//unsigned long fast_checksum<struct s_player_configuration_from_client>(unsigned long, struct s_player_configuration_from_client const *)
//{
//    mangled_ppc("??$fast_checksum@Us_player_configuration_from_client@@@@YAKKPBUs_player_configuration_from_client@@@Z");
//};

//public: bool c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::test(enum e_online_user_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@QBA_NW4e_online_user_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::valid_bit(enum e_network_session_peer_properties_status_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_session_peer_properties_status_flags@@K$0BI@Us_default_enum_string_resolver@@@@SA_NW4e_network_session_peer_properties_status_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_session_peer_properties_status_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_session_peer_properties_status_flags@@K$0BI@Us_default_enum_string_resolver@@@@CAKW4e_network_session_peer_properties_status_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::test(enum e_peer_properties_connection_update) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@QBA_NW4e_peer_properties_connection_update@@@Z");
//};

//public: bool c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool s_static_array<struct s_network_session_interface_user, 4>::valid<enum e_output_user_index>(enum e_output_user_index)
//{
//    mangled_ppc("??$valid@W4e_output_user_index@@@?$s_static_array@Us_network_session_interface_user@@$03@@SA_NW4e_output_user_index@@@Z");
//};

//public: static bool s_static_array<struct s_network_session_interface_user_peer_session_data, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_session_interface_user_peer_session_data@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_network_session_interface_user_session_data, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_session_interface_user_session_data@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_network_session_interface_user, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_session_interface_user@@$03@@SA_NJ@Z");
//};

//bool operator==<enum e_multiplayer_team>(enum e_multiplayer_team const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8W4e_multiplayer_team@@@@YA_NABW4e_multiplayer_team@@ABW4e_none_sentinel@@@Z");
//};

//public: static bool s_static_array<float, 4>::valid<enum e_network_social_axis>(enum e_network_social_axis)
//{
//    mangled_ppc("??$valid@W4e_network_social_axis@@@?$s_static_array@M$03@@SA_NW4e_network_social_axis@@@Z");
//};

//public: static bool s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::valid<enum e_life_cycle_session_type>(enum e_life_cycle_session_type)
//{
//    mangled_ppc("??$valid@W4e_life_cycle_session_type@@@?$s_static_array@V?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@$01@@SA_NW4e_life_cycle_session_type@@@Z");
//};

//void prefetch<struct s_network_session_peer_properties>(struct s_network_session_peer_properties const *)
//{
//    mangled_ppc("??$prefetch@Us_network_session_peer_properties@@@@YAXPBUs_network_session_peer_properties@@@Z");
//};

//void prefetch<struct s_player_configuration_from_client>(struct s_player_configuration_from_client const *)
//{
//    mangled_ppc("??$prefetch@Us_player_configuration_from_client@@@@YAXPBUs_player_configuration_from_client@@@Z");
//};

//public: static bool c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::valid_bit(enum e_online_user_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@SA_NW4e_online_user_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_online_user_flags, unsigned long, 18, struct s_default_enum_string_resolver>::flag_size_type(enum e_online_user_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_online_user_flags@@K$0BC@Us_default_enum_string_resolver@@@@CAKW4e_online_user_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_peer_properties_connection_update)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@SA_NW4e_peer_properties_connection_update@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_peer_properties_connection_update)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@CAKW4e_peer_properties_connection_update@@@Z");
//};

//public: s_network_session_interface_globals::s_network_session_interface_globals(void)
//{
//    mangled_ppc("??0s_network_session_interface_globals@@QAA@XZ");
//};

//public: s_static_array<struct s_network_session_interface_user, 4>::s_static_array<struct s_network_session_interface_user, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_network_session_interface_user@@$03@@QAA@XZ");
//};

//public: s_static_array<struct s_network_session_interface_user_peer_session_data, 4>::s_static_array<struct s_network_session_interface_user_peer_session_data, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_network_session_interface_user_peer_session_data@@$03@@QAA@XZ");
//};

//public: s_network_session_interface_user::s_network_session_interface_user(void)
//{
//    mangled_ppc("??0s_network_session_interface_user@@QAA@XZ");
//};

//public: s_network_session_interface_user_peer_session_data::s_network_session_interface_user_peer_session_data(void)
//{
//    mangled_ppc("??0s_network_session_interface_user_peer_session_data@@QAA@XZ");
//};

//public: s_static_array<struct s_network_session_interface_user_session_data, 4>::s_static_array<struct s_network_session_interface_user_session_data, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_network_session_interface_user_session_data@@$03@@QAA@XZ");
//};

//public: s_network_session_interface_user_session_data::s_network_session_interface_user_session_data(void)
//{
//    mangled_ppc("??0s_network_session_interface_user_session_data@@QAA@XZ");
//};

