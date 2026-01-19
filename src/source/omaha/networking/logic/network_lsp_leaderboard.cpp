/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<unsigned __int64, 4>::k_element_count; // "?k_element_count@?$s_static_array@_K$03@@2JB"
// public: static enum e_lsp_leaderboard_user_current_season_flags const c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_lsp_leaderboard_user_current_season_flags@@E$01Us_default_enum_string_resolver@@@@2W4e_lsp_leaderboard_user_current_season_flags@@B"
// public: static long const s_static_array<struct s_network_lsp_leaderboard_hopper_stats_internal, 8>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_lsp_leaderboard_hopper_stats_internal@@$07@@2JB"
// public: static enum e_lsp_leaderboard_user_previous_season_flags const c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_lsp_leaderboard_user_previous_season_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_lsp_leaderboard_user_previous_season_flags@@B"
// public: static long const s_static_array<struct s_network_lsp_leaderboard_player_season_result, 8>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_lsp_leaderboard_player_season_result@@$07@@2JB"
// public: static enum e_lsp_leaderboard_user_flags const c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_lsp_leaderboard_user_flags@@E$01Us_default_enum_string_resolver@@@@2W4e_lsp_leaderboard_user_flags@@B"
// public: static enum e_lsp_leaderboard_global_data_flags const c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_lsp_leaderboard_global_data_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_lsp_leaderboard_global_data_flags@@B"
// public: static enum e_lsp_leaderboard_flags const c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_lsp_leaderboard_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_lsp_leaderboard_flags@@B"
// public: static long const s_static_array<struct s_lsp_leaderboard_user, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_lsp_leaderboard_user@@$03@@2JB"
// public: static int const c_enum_no_init<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_controller_index const c_enum_no_init<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@2W4e_controller_index@@B"

// bool network_lsp_leaderboard_initialize(void);
// void network_lsp_leaderboard_update(void);
// void network_lsp_leaderboard_dispose(void);
// void network_lsp_leaderboard_submit_results(class c_game_results const *);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// bool network_lsp_leaderboard_submission_in_progress(void);
// enum e_network_file_load_status network_lsp_leaderboard_get_load_status(void);
// bool network_lsp_leaderboard_ready(void);
// long network_lsp_leaderboard_get_current_season(void);
// bool network_lsp_leaderboard_enabled(void);
// void network_lsp_leaderboard_force_set_season(long);
// void network_lsp_leaderboard_suppress_popup(bool);
// void network_lsp_leaderboard_write_blfs_to_file(bool);
// void network_lsp_leaderboard_test_screen(enum e_controller_index, long, long, long);
// public: s_lsp_leaderboard_user_previous_season_results::s_lsp_leaderboard_user_previous_season_results(void);
// void network_lsp_leaderboard_set_stats(enum e_controller_index, long, long);
// public: virtual bool c_lsp_leaderboard_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: virtual void c_lsp_leaderboard_controller_monitor::handle_controller_sign_in(enum e_controller_index);
// public: virtual void c_lsp_leaderboard_controller_monitor::handle_controller_sign_out(enum e_controller_index);
// void network_lsp_leaderboard_initialize_global_and_user_data(void);
// void network_lsp_leaderboard_initialize_user(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// void network_lsp_leaderboard_register_online_user_notification(void);
// public: c_lsp_leaderboard_controller_monitor::c_lsp_leaderboard_controller_monitor(void);
// void network_lsp_leaderboard_unregister_online_user_notification(void);
// struct s_network_session_matchmaking_hopper const * network_lsp_leaderboard_get_current_squad_lsp_enabled_hopper(void);
// void network_lsp_leaderboard_get_current_squad_hopper_name(unsigned short, class c_static_wchar_string<32> *);
// void network_lsp_leaderboard_update_users(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: enum e_output_user_index c_controller_interface::get_output_user_index(void) const;
// bool network_lsp_leaderboard_user_get_profile_data(enum e_controller_index, struct s_lsp_leaderboard_profile_arena_data *);
// void network_lsp_leaderboard_user_profile_handle_arena_welcome(enum e_controller_index);
// bool network_lsp_leaderboard_user_set_profile_data(enum e_controller_index, struct s_lsp_leaderboard_profile_arena_data const *);
// bool network_lsp_leaderboard_user_can_set_profile_data(enum e_controller_index);
// public: s_lsp_leaderboard_profile_arena_data::s_lsp_leaderboard_profile_arena_data(void);
// public: s_static_array<struct s_lsp_leaderboard_profile_arena_hopper_data, 8>::s_static_array<struct s_lsp_leaderboard_profile_arena_hopper_data, 8>(void);
// public: s_lsp_leaderboard_profile_arena_hopper_data::s_lsp_leaderboard_profile_arena_hopper_data(void);
// void network_lsp_leaderboard_user_profile_handle_new_season(enum e_controller_index);
// void network_lsp_leaderboard_user_profile_update_hopper(enum e_controller_index, struct s_network_session_matchmaking_hopper const *);
// void network_lsp_leaderboard_update_users_build_hopper_stats(struct s_network_session_matchmaking_hopper const *, struct s_network_lsp_leaderboard_hopper_stats const *, struct s_queried_player_hopper_lsp_statistics *);
// struct s_network_lsp_leaderboard_hopper_stats_internal * network_lsp_leaderboard_user_get_current_season_hopper_stats(enum e_controller_index, unsigned short);
// void network_lsp_leaderboard_build_local_xuid_list(struct s_lsp_leaderboard_xuid_list *);
// bool network_lsp_leaderboard_has_previous_season(void);
// long network_lsp_leaderboard_get_previous_season(void);
// bool network_lsp_leaderboard_in_matchmaking_arena_pre_game_lobby(void);
// void network_lsp_leaderboard_update_toasts(void);
// void network_lsp_leaderboard_update_queries(void);
// void network_lsp_leaderboard_initiate_query(enum e_lsp_leaderboard_query_state);
// void network_lsp_leaderboard_log_local_xuid_list(enum e_event_level, struct s_lsp_leaderboard_xuid_list const *);
// bool network_lsp_leaderboard_handle_stat_query_result(struct s_network_lsp_leaderboard_player_stat_collection_blf_chunk const *, struct s_lsp_leaderboard_xuid_list const *);
// bool network_lsp_leaderboard_handle_stat_collection(struct s_network_lsp_leaderboard_player_stat_collection const *, struct s_lsp_leaderboard_xuid_list const *, bool);
// class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> network_lsp_leaderboard_get_local_user_by_xuid(unsigned __int64);
// void network_lsp_leaderboard_notify_users_current_season_stats_updated(struct s_lsp_leaderboard_xuid_list const *, bool);
// void network_lsp_leaderboard_set_hopper_stats_for_user(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, struct s_network_lsp_leaderboard_hopper_stats const *);
// void network_lsp_leaderboard_set_and_scrub_hopper_stats(struct s_network_lsp_leaderboard_hopper_stats const *, struct s_network_lsp_leaderboard_hopper_stats_internal *, bool);
// bool network_lsp_leaderboard_stat_collection_valid(struct s_network_lsp_leaderboard_player_stat_collection const *, bool);
// bool network_lsp_leaderboard_handle_season_results_query_result(struct s_network_lsp_leaderboard_season_result_collection_blf_chunk const *, struct s_lsp_leaderboard_xuid_list const *, long);
// bool network_lsp_leaderboard_handle_season_result_collection(struct s_network_lsp_leaderboard_player_season_result_collection const *, struct s_lsp_leaderboard_xuid_list const *, long);
// void network_lsp_leaderboard_notify_users_previous_season_stats_updated(struct s_lsp_leaderboard_xuid_list const *, long);
// void network_lsp_leaderboard_set_previous_season_results_for_user(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, struct s_network_lsp_leaderboard_player_season_result const *);
// bool network_lsp_leaderboard_desires_current_season_stats(void);
// bool network_lsp_leaderboard_desires_previous_season_stats(void);
// void network_lsp_leaderboard_update_submissions(void);
// bool network_lsp_leaderboard_handle_game_results_submission_result(struct s_network_lsp_leaderboard_player_stat_collection_blf_chunk const *, struct s_lsp_leaderboard_xuid_list const *);
// bool network_lsp_leaderboard_can_issue_queries(void);
// bool network_lsp_leaderboard_can_apply_query_results(void);
// bool network_lsp_leaderboard_can_submit_game_results(void);
// bool network_lsp_leaderboard_can_apply_submitted_game_results(void);
// bool network_lsp_leaderboard_can_display_user_messages(enum e_controller_index);
// bool network_lsp_leaderboard_in_arena_post_match_countdown(void);
// public: s_life_cycle_matchmaking_progress::s_life_cycle_matchmaking_progress(void);
// public: s_life_cycle_matchmaking_progress_configuring_match::s_life_cycle_matchmaking_progress_configuring_match(void);
// bool network_lsp_leaderboard_user_message_active(void);
// public: bool c_cui_screen_reference::is_valid(void) const;
// public: bool c_cui_screen_pipe_endpoint::is_connected(void) const;
// private: long c_cui_screen_pipe::get_reference_count(void) const;
// public: bool c_cui_screen_pipe_endpoint::is_open(void) const;
// void network_lsp_leaderboard_display_user_message(enum e_controller_index, long, struct s_network_lsp_leaderboard_hopper_stats_internal const *, struct s_lsp_leaderboard_user_previous_season_results const *);
// long network_lsp_leaderboard_get_season_days_remaining(void);
// void network_lsp_leaderboard_write_to_disk(char const *, void const *, long);
// public: unsigned __int64* s_static_array<unsigned __int64, 4>::get_elements(void);
// public: c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>::c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>(enum e_controller_index);
// public: enum e_controller_index c_enum_no_init<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>::operator enum e_controller_index(void) const;
// public: void c_flags_no_init<enum e_queried_player_hopper_lsp_statistics_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_queried_player_hopper_lsp_statistics_flags, bool);
// public: bool c_flags_no_init<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_network_session_matchmaking_hopper_flags) const;
// public: c_flags<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_lsp_leaderboard_profile_arena_hopper_flags) const;
// public: void c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_lsp_leaderboard_profile_arena_hopper_flags, bool);
// public: c_flags<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_lsp_leaderboard_profile_arena_flags) const;
// public: void c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_lsp_leaderboard_profile_arena_flags, bool);
// public: c_flags<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: struct s_lsp_leaderboard_profile_arena_hopper_data & s_static_array<struct s_lsp_leaderboard_profile_arena_hopper_data, 8>::operator[]<long>(long);
// public: c_static_wchar_string<32>::c_static_wchar_string<32>(void);
// public: void c_static_wchar_string<32>::clear(void);
// public: void c_static_wchar_string<32>::set_utf8(struct utf8const *);
// public: wchar_t const * c_static_wchar_string<32>::get_string(void) const;
// public: bool c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_lsp_leaderboard_user_current_season_flags) const;
// public: void c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_lsp_leaderboard_user_current_season_flags, bool);
// public: bool c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_lsp_leaderboard_user_previous_season_flags) const;
// public: void c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_lsp_leaderboard_user_previous_season_flags, bool);
// public: c_flags<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_lsp_leaderboard_user_flags) const;
// public: void c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_lsp_leaderboard_user_flags, bool);
// public: bool c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_lsp_leaderboard_global_data_flags) const;
// public: void c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_lsp_leaderboard_global_data_flags, bool);
// public: bool c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_lsp_leaderboard_flags) const;
// public: void c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_lsp_leaderboard_flags, bool);
// public: unsigned __int64& s_static_array<unsigned __int64, 4>::operator[]<long>(long);
// public: struct s_network_lsp_leaderboard_player_game_results & s_static_array<struct s_network_lsp_leaderboard_player_game_results, 4>::operator[]<long>(long);
// public: struct s_network_lsp_leaderboard_player_season_result & s_static_array<struct s_network_lsp_leaderboard_player_season_result, 8>::operator[]<int>(int);
// public: struct s_lsp_leaderboard_user & s_static_array<struct s_lsp_leaderboard_user, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: struct s_network_lsp_leaderboard_hopper_stats_internal & s_static_array<struct s_network_lsp_leaderboard_hopper_stats_internal, 8>::operator[]<int>(int);
// public: struct s_lsp_leaderboard_user & s_static_array<struct s_lsp_leaderboard_user, 4>::operator[]<class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> >(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// public: struct s_network_lsp_leaderboard_hopper_stats_internal & s_static_array<struct s_network_lsp_leaderboard_hopper_stats_internal, 8>::operator[]<long>(long);
// public: unsigned __int64const & s_static_array<unsigned __int64, 4>::operator[]<long>(long) const;
// public: unsigned __int64const & s_static_array<unsigned __int64, 4>::operator[]<int>(int) const;
// public: wchar_t const * c_static_wchar_string<1024>::print(wchar_t const *, ...);
// public: wchar_t const * c_static_wchar_string<1024>::get_string(void) const;
// public: struct s_network_lsp_leaderboard_player_stats const & s_static_array<struct s_network_lsp_leaderboard_player_stats, 32>::operator[]<long>(long) const;
// public: struct s_network_lsp_leaderboard_player_season_result & s_static_array<struct s_network_lsp_leaderboard_player_season_result, 8>::operator[]<long>(long);
// public: struct s_network_lsp_leaderboard_player_season_result const & s_static_array<struct s_network_lsp_leaderboard_player_season_result, 32>::operator[]<long>(long) const;
// public: struct s_network_lsp_leaderboard_player_season_result const & s_static_array<struct s_network_lsp_leaderboard_player_season_result, 8>::operator[]<long>(long) const;
// public: static bool c_flags_no_init<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_network_session_matchmaking_hopper_flags);
// private: static unsigned short c_flags_no_init<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_session_matchmaking_hopper_flags);
// public: void c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_lsp_leaderboard_profile_arena_hopper_flags);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_lsp_leaderboard_profile_arena_hopper_flags);
// public: void c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_lsp_leaderboard_profile_arena_flags);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_lsp_leaderboard_profile_arena_flags);
// public: static bool s_static_array<struct s_lsp_leaderboard_profile_arena_hopper_data, 8>::valid<long>(long);
// public: static bool c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_lsp_leaderboard_user_current_season_flags);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_lsp_leaderboard_user_current_season_flags);
// public: void c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_lsp_leaderboard_user_previous_season_flags);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_lsp_leaderboard_user_previous_season_flags);
// public: static bool c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_lsp_leaderboard_user_flags);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_lsp_leaderboard_user_flags);
// public: static bool c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_lsp_leaderboard_global_data_flags);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_lsp_leaderboard_global_data_flags);
// public: static bool c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_lsp_leaderboard_flags);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_lsp_leaderboard_flags);
// public: static bool s_static_array<unsigned __int64, 4>::valid<long>(long);
// public: static bool s_static_array<struct s_network_lsp_leaderboard_player_game_results, 4>::valid<long>(long);
// public: static bool s_static_array<struct s_network_lsp_leaderboard_player_season_result, 8>::valid<int>(int);
// public: static bool s_static_array<struct s_lsp_leaderboard_user, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: static bool s_static_array<struct s_network_lsp_leaderboard_hopper_stats_internal, 8>::valid<int>(int);
// public: static bool s_static_array<struct s_lsp_leaderboard_user, 4>::valid<class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> >(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// public: static bool s_static_array<struct s_network_lsp_leaderboard_hopper_stats_internal, 8>::valid<long>(long);
// public: static bool s_static_array<unsigned __int64, 4>::valid<int>(int);
// public: static bool s_static_array<struct s_network_lsp_leaderboard_player_stats, 32>::valid<long>(long);
// public: static bool s_static_array<struct s_network_lsp_leaderboard_player_season_result, 8>::valid<long>(long);
// public: static bool s_static_array<struct s_network_lsp_leaderboard_player_season_result, 32>::valid<long>(long);
// private: static unsigned char c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_life_cycle_matchmaking_progress_configuring_match_flags);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_lsp_leaderboard_profile_arena_hopper_flags);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_lsp_leaderboard_profile_arena_flags);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_lsp_leaderboard_user_previous_season_flags);
// difftime;
// time;
// public: s_network_lsp_leaderboard_globals::s_network_lsp_leaderboard_globals(void);
// public: s_network_lsp_leaderboard_players_game_results_blf_chunk::s_network_lsp_leaderboard_players_game_results_blf_chunk(void);
// public: s_lsp_leaderboard_global::s_lsp_leaderboard_global(void);
// public: s_static_array<struct s_lsp_leaderboard_user, 4>::s_static_array<struct s_lsp_leaderboard_user, 4>(void);
// public: s_lsp_leaderboard_user::s_lsp_leaderboard_user(void);
// public: s_lsp_leaderboard_user_current_season::s_lsp_leaderboard_user_current_season(void);
// public: c_http_stored_buffer_downloader<1904>::c_http_stored_buffer_downloader<1904>(void);
// public: c_http_stored_buffer_downloader<994>::c_http_stored_buffer_downloader<994>(void);
// merged_828BD490;
// public: virtual c_http_stored_buffer_downloader<1904>::~c_http_stored_buffer_downloader<1904>(void);
// merged_828BD500;
// public: virtual c_http_stored_buffer_downloader<994>::~c_http_stored_buffer_downloader<994>(void);
// public: c_flags<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_lsp_leaderboard_user_current_season_flags);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_lsp_leaderboard_user_flags);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_lsp_leaderboard_global_data_flags);
// private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_lsp_leaderboard_flags);
// public: s_network_lsp_leaderboard_globals::~s_network_lsp_leaderboard_globals(void);
// void network_lsp_leaderboard_globals::`dynamic atexit destructor'(void);

//bool network_lsp_leaderboard_initialize(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_initialize@@YA_NXZ");
//};

//void network_lsp_leaderboard_update(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_update@@YAXXZ");
//};

//void network_lsp_leaderboard_dispose(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_dispose@@YAXXZ");
//};

//void network_lsp_leaderboard_submit_results(class c_game_results const *)
//{
//    mangled_ppc("?network_lsp_leaderboard_submit_results@@YAXPBVc_game_results@@@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//bool network_lsp_leaderboard_submission_in_progress(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_submission_in_progress@@YA_NXZ");
//};

//enum e_network_file_load_status network_lsp_leaderboard_get_load_status(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_get_load_status@@YA?AW4e_network_file_load_status@@XZ");
//};

//bool network_lsp_leaderboard_ready(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_ready@@YA_NXZ");
//};

//long network_lsp_leaderboard_get_current_season(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_get_current_season@@YAJXZ");
//};

//bool network_lsp_leaderboard_enabled(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_enabled@@YA_NXZ");
//};

//void network_lsp_leaderboard_force_set_season(long)
//{
//    mangled_ppc("?network_lsp_leaderboard_force_set_season@@YAXJ@Z");
//};

//void network_lsp_leaderboard_suppress_popup(bool)
//{
//    mangled_ppc("?network_lsp_leaderboard_suppress_popup@@YAX_N@Z");
//};

//void network_lsp_leaderboard_write_blfs_to_file(bool)
//{
//    mangled_ppc("?network_lsp_leaderboard_write_blfs_to_file@@YAX_N@Z");
//};

//void network_lsp_leaderboard_test_screen(enum e_controller_index, long, long, long)
//{
//    mangled_ppc("?network_lsp_leaderboard_test_screen@@YAXW4e_controller_index@@JJJ@Z");
//};

//public: s_lsp_leaderboard_user_previous_season_results::s_lsp_leaderboard_user_previous_season_results(void)
//{
//    mangled_ppc("??0s_lsp_leaderboard_user_previous_season_results@@QAA@XZ");
//};

//void network_lsp_leaderboard_set_stats(enum e_controller_index, long, long)
//{
//    mangled_ppc("?network_lsp_leaderboard_set_stats@@YAXW4e_controller_index@@JJ@Z");
//};

//public: virtual bool c_lsp_leaderboard_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?controller_should_be_monitored@c_lsp_leaderboard_controller_monitor@@UAA_NW4e_controller_index@@V?$c_flags@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: virtual void c_lsp_leaderboard_controller_monitor::handle_controller_sign_in(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_in@c_lsp_leaderboard_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//public: virtual void c_lsp_leaderboard_controller_monitor::handle_controller_sign_out(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_out@c_lsp_leaderboard_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//void network_lsp_leaderboard_initialize_global_and_user_data(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_initialize_global_and_user_data@@YAXXZ");
//};

//void network_lsp_leaderboard_initialize_user(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?network_lsp_leaderboard_initialize_user@@YAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//void network_lsp_leaderboard_register_online_user_notification(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_register_online_user_notification@@YAXXZ");
//};

//public: c_lsp_leaderboard_controller_monitor::c_lsp_leaderboard_controller_monitor(void)
//{
//    mangled_ppc("??0c_lsp_leaderboard_controller_monitor@@QAA@XZ");
//};

//void network_lsp_leaderboard_unregister_online_user_notification(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_unregister_online_user_notification@@YAXXZ");
//};

//struct s_network_session_matchmaking_hopper const * network_lsp_leaderboard_get_current_squad_lsp_enabled_hopper(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_get_current_squad_lsp_enabled_hopper@@YAPBUs_network_session_matchmaking_hopper@@XZ");
//};

//void network_lsp_leaderboard_get_current_squad_hopper_name(unsigned short, class c_static_wchar_string<32> *)
//{
//    mangled_ppc("?network_lsp_leaderboard_get_current_squad_hopper_name@@YAXGPAV?$c_static_wchar_string@$0CA@@@@Z");
//};

//void network_lsp_leaderboard_update_users(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_update_users@@YAXXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//public: enum e_output_user_index c_controller_interface::get_output_user_index(void) const
//{
//    mangled_ppc("?get_output_user_index@c_controller_interface@@QBA?AW4e_output_user_index@@XZ");
//};

//bool network_lsp_leaderboard_user_get_profile_data(enum e_controller_index, struct s_lsp_leaderboard_profile_arena_data *)
//{
//    mangled_ppc("?network_lsp_leaderboard_user_get_profile_data@@YA_NW4e_controller_index@@PAUs_lsp_leaderboard_profile_arena_data@@@Z");
//};

//void network_lsp_leaderboard_user_profile_handle_arena_welcome(enum e_controller_index)
//{
//    mangled_ppc("?network_lsp_leaderboard_user_profile_handle_arena_welcome@@YAXW4e_controller_index@@@Z");
//};

//bool network_lsp_leaderboard_user_set_profile_data(enum e_controller_index, struct s_lsp_leaderboard_profile_arena_data const *)
//{
//    mangled_ppc("?network_lsp_leaderboard_user_set_profile_data@@YA_NW4e_controller_index@@PBUs_lsp_leaderboard_profile_arena_data@@@Z");
//};

//bool network_lsp_leaderboard_user_can_set_profile_data(enum e_controller_index)
//{
//    mangled_ppc("?network_lsp_leaderboard_user_can_set_profile_data@@YA_NW4e_controller_index@@@Z");
//};

//public: s_lsp_leaderboard_profile_arena_data::s_lsp_leaderboard_profile_arena_data(void)
//{
//    mangled_ppc("??0s_lsp_leaderboard_profile_arena_data@@QAA@XZ");
//};

//public: s_static_array<struct s_lsp_leaderboard_profile_arena_hopper_data, 8>::s_static_array<struct s_lsp_leaderboard_profile_arena_hopper_data, 8>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_lsp_leaderboard_profile_arena_hopper_data@@$07@@QAA@XZ");
//};

//public: s_lsp_leaderboard_profile_arena_hopper_data::s_lsp_leaderboard_profile_arena_hopper_data(void)
//{
//    mangled_ppc("??0s_lsp_leaderboard_profile_arena_hopper_data@@QAA@XZ");
//};

//void network_lsp_leaderboard_user_profile_handle_new_season(enum e_controller_index)
//{
//    mangled_ppc("?network_lsp_leaderboard_user_profile_handle_new_season@@YAXW4e_controller_index@@@Z");
//};

//void network_lsp_leaderboard_user_profile_update_hopper(enum e_controller_index, struct s_network_session_matchmaking_hopper const *)
//{
//    mangled_ppc("?network_lsp_leaderboard_user_profile_update_hopper@@YAXW4e_controller_index@@PBUs_network_session_matchmaking_hopper@@@Z");
//};

//void network_lsp_leaderboard_update_users_build_hopper_stats(struct s_network_session_matchmaking_hopper const *, struct s_network_lsp_leaderboard_hopper_stats const *, struct s_queried_player_hopper_lsp_statistics *)
//{
//    mangled_ppc("?network_lsp_leaderboard_update_users_build_hopper_stats@@YAXPBUs_network_session_matchmaking_hopper@@PBUs_network_lsp_leaderboard_hopper_stats@@PAUs_queried_player_hopper_lsp_statistics@@@Z");
//};

//struct s_network_lsp_leaderboard_hopper_stats_internal * network_lsp_leaderboard_user_get_current_season_hopper_stats(enum e_controller_index, unsigned short)
//{
//    mangled_ppc("?network_lsp_leaderboard_user_get_current_season_hopper_stats@@YAPAUs_network_lsp_leaderboard_hopper_stats_internal@@W4e_controller_index@@G@Z");
//};

//void network_lsp_leaderboard_build_local_xuid_list(struct s_lsp_leaderboard_xuid_list *)
//{
//    mangled_ppc("?network_lsp_leaderboard_build_local_xuid_list@@YAXPAUs_lsp_leaderboard_xuid_list@@@Z");
//};

//bool network_lsp_leaderboard_has_previous_season(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_has_previous_season@@YA_NXZ");
//};

//long network_lsp_leaderboard_get_previous_season(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_get_previous_season@@YAJXZ");
//};

//bool network_lsp_leaderboard_in_matchmaking_arena_pre_game_lobby(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_in_matchmaking_arena_pre_game_lobby@@YA_NXZ");
//};

//void network_lsp_leaderboard_update_toasts(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_update_toasts@@YAXXZ");
//};

//void network_lsp_leaderboard_update_queries(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_update_queries@@YAXXZ");
//};

//void network_lsp_leaderboard_initiate_query(enum e_lsp_leaderboard_query_state)
//{
//    mangled_ppc("?network_lsp_leaderboard_initiate_query@@YAXW4e_lsp_leaderboard_query_state@@@Z");
//};

//void network_lsp_leaderboard_log_local_xuid_list(enum e_event_level, struct s_lsp_leaderboard_xuid_list const *)
//{
//    mangled_ppc("?network_lsp_leaderboard_log_local_xuid_list@@YAXW4e_event_level@@PBUs_lsp_leaderboard_xuid_list@@@Z");
//};

//bool network_lsp_leaderboard_handle_stat_query_result(struct s_network_lsp_leaderboard_player_stat_collection_blf_chunk const *, struct s_lsp_leaderboard_xuid_list const *)
//{
//    mangled_ppc("?network_lsp_leaderboard_handle_stat_query_result@@YA_NPBUs_network_lsp_leaderboard_player_stat_collection_blf_chunk@@PBUs_lsp_leaderboard_xuid_list@@@Z");
//};

//bool network_lsp_leaderboard_handle_stat_collection(struct s_network_lsp_leaderboard_player_stat_collection const *, struct s_lsp_leaderboard_xuid_list const *, bool)
//{
//    mangled_ppc("?network_lsp_leaderboard_handle_stat_collection@@YA_NPBUs_network_lsp_leaderboard_player_stat_collection@@PBUs_lsp_leaderboard_xuid_list@@_N@Z");
//};

//class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> network_lsp_leaderboard_get_local_user_by_xuid(unsigned __int64)
//{
//    mangled_ppc("?network_lsp_leaderboard_get_local_user_by_xuid@@YA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@_K@Z");
//};

//void network_lsp_leaderboard_notify_users_current_season_stats_updated(struct s_lsp_leaderboard_xuid_list const *, bool)
//{
//    mangled_ppc("?network_lsp_leaderboard_notify_users_current_season_stats_updated@@YAXPBUs_lsp_leaderboard_xuid_list@@_N@Z");
//};

//void network_lsp_leaderboard_set_hopper_stats_for_user(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, struct s_network_lsp_leaderboard_hopper_stats const *)
//{
//    mangled_ppc("?network_lsp_leaderboard_set_hopper_stats_for_user@@YAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@PBUs_network_lsp_leaderboard_hopper_stats@@@Z");
//};

//void network_lsp_leaderboard_set_and_scrub_hopper_stats(struct s_network_lsp_leaderboard_hopper_stats const *, struct s_network_lsp_leaderboard_hopper_stats_internal *, bool)
//{
//    mangled_ppc("?network_lsp_leaderboard_set_and_scrub_hopper_stats@@YAXPBUs_network_lsp_leaderboard_hopper_stats@@PAUs_network_lsp_leaderboard_hopper_stats_internal@@_N@Z");
//};

//bool network_lsp_leaderboard_stat_collection_valid(struct s_network_lsp_leaderboard_player_stat_collection const *, bool)
//{
//    mangled_ppc("?network_lsp_leaderboard_stat_collection_valid@@YA_NPBUs_network_lsp_leaderboard_player_stat_collection@@_N@Z");
//};

//bool network_lsp_leaderboard_handle_season_results_query_result(struct s_network_lsp_leaderboard_season_result_collection_blf_chunk const *, struct s_lsp_leaderboard_xuid_list const *, long)
//{
//    mangled_ppc("?network_lsp_leaderboard_handle_season_results_query_result@@YA_NPBUs_network_lsp_leaderboard_season_result_collection_blf_chunk@@PBUs_lsp_leaderboard_xuid_list@@J@Z");
//};

//bool network_lsp_leaderboard_handle_season_result_collection(struct s_network_lsp_leaderboard_player_season_result_collection const *, struct s_lsp_leaderboard_xuid_list const *, long)
//{
//    mangled_ppc("?network_lsp_leaderboard_handle_season_result_collection@@YA_NPBUs_network_lsp_leaderboard_player_season_result_collection@@PBUs_lsp_leaderboard_xuid_list@@J@Z");
//};

//void network_lsp_leaderboard_notify_users_previous_season_stats_updated(struct s_lsp_leaderboard_xuid_list const *, long)
//{
//    mangled_ppc("?network_lsp_leaderboard_notify_users_previous_season_stats_updated@@YAXPBUs_lsp_leaderboard_xuid_list@@J@Z");
//};

//void network_lsp_leaderboard_set_previous_season_results_for_user(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, struct s_network_lsp_leaderboard_player_season_result const *)
//{
//    mangled_ppc("?network_lsp_leaderboard_set_previous_season_results_for_user@@YAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@PBUs_network_lsp_leaderboard_player_season_result@@@Z");
//};

//bool network_lsp_leaderboard_desires_current_season_stats(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_desires_current_season_stats@@YA_NXZ");
//};

//bool network_lsp_leaderboard_desires_previous_season_stats(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_desires_previous_season_stats@@YA_NXZ");
//};

//void network_lsp_leaderboard_update_submissions(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_update_submissions@@YAXXZ");
//};

//bool network_lsp_leaderboard_handle_game_results_submission_result(struct s_network_lsp_leaderboard_player_stat_collection_blf_chunk const *, struct s_lsp_leaderboard_xuid_list const *)
//{
//    mangled_ppc("?network_lsp_leaderboard_handle_game_results_submission_result@@YA_NPBUs_network_lsp_leaderboard_player_stat_collection_blf_chunk@@PBUs_lsp_leaderboard_xuid_list@@@Z");
//};

//bool network_lsp_leaderboard_can_issue_queries(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_can_issue_queries@@YA_NXZ");
//};

//bool network_lsp_leaderboard_can_apply_query_results(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_can_apply_query_results@@YA_NXZ");
//};

//bool network_lsp_leaderboard_can_submit_game_results(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_can_submit_game_results@@YA_NXZ");
//};

//bool network_lsp_leaderboard_can_apply_submitted_game_results(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_can_apply_submitted_game_results@@YA_NXZ");
//};

//bool network_lsp_leaderboard_can_display_user_messages(enum e_controller_index)
//{
//    mangled_ppc("?network_lsp_leaderboard_can_display_user_messages@@YA_NW4e_controller_index@@@Z");
//};

//bool network_lsp_leaderboard_in_arena_post_match_countdown(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_in_arena_post_match_countdown@@YA_NXZ");
//};

//public: s_life_cycle_matchmaking_progress::s_life_cycle_matchmaking_progress(void)
//{
//    mangled_ppc("??0s_life_cycle_matchmaking_progress@@QAA@XZ");
//};

//public: s_life_cycle_matchmaking_progress_configuring_match::s_life_cycle_matchmaking_progress_configuring_match(void)
//{
//    mangled_ppc("??0s_life_cycle_matchmaking_progress_configuring_match@@QAA@XZ");
//};

//bool network_lsp_leaderboard_user_message_active(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_user_message_active@@YA_NXZ");
//};

//public: bool c_cui_screen_reference::is_valid(void) const
//{
//    mangled_ppc("?is_valid@c_cui_screen_reference@@QBA_NXZ");
//};

//public: bool c_cui_screen_pipe_endpoint::is_connected(void) const
//{
//    mangled_ppc("?is_connected@c_cui_screen_pipe_endpoint@@QBA_NXZ");
//};

//private: long c_cui_screen_pipe::get_reference_count(void) const
//{
//    mangled_ppc("?get_reference_count@c_cui_screen_pipe@@ABAJXZ");
//};

//public: bool c_cui_screen_pipe_endpoint::is_open(void) const
//{
//    mangled_ppc("?is_open@c_cui_screen_pipe_endpoint@@QBA_NXZ");
//};

//void network_lsp_leaderboard_display_user_message(enum e_controller_index, long, struct s_network_lsp_leaderboard_hopper_stats_internal const *, struct s_lsp_leaderboard_user_previous_season_results const *)
//{
//    mangled_ppc("?network_lsp_leaderboard_display_user_message@@YAXW4e_controller_index@@JPBUs_network_lsp_leaderboard_hopper_stats_internal@@PBUs_lsp_leaderboard_user_previous_season_results@@@Z");
//};

//long network_lsp_leaderboard_get_season_days_remaining(void)
//{
//    mangled_ppc("?network_lsp_leaderboard_get_season_days_remaining@@YAJXZ");
//};

//void network_lsp_leaderboard_write_to_disk(char const *, void const *, long)
//{
//    mangled_ppc("?network_lsp_leaderboard_write_to_disk@@YAXPBDPBXJ@Z");
//};

//public: unsigned __int64* s_static_array<unsigned __int64, 4>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@_K$03@@QAAPA_KXZ");
//};

//public: c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>::c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>(enum e_controller_index)
//{
//    mangled_ppc("??0?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@QAA@W4e_controller_index@@@Z");
//};

//public: enum e_controller_index c_enum_no_init<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>::operator enum e_controller_index(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@QBA?AW4e_controller_index@@XZ");
//};

//public: void c_flags_no_init<enum e_queried_player_hopper_lsp_statistics_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_queried_player_hopper_lsp_statistics_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_queried_player_hopper_lsp_statistics_flags@@E$03Us_default_enum_string_resolver@@@@QAAXW4e_queried_player_hopper_lsp_statistics_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_network_session_matchmaking_hopper_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_session_matchmaking_hopper_flags@@G$08Us_default_enum_string_resolver@@@@QBA_NW4e_network_session_matchmaking_hopper_flags@@@Z");
//};

//public: c_flags<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_life_cycle_matchmaking_progress_configuring_match_flags@@E$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_hopper_flags@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_lsp_leaderboard_profile_arena_hopper_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_hopper_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_lsp_leaderboard_profile_arena_hopper_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_lsp_leaderboard_profile_arena_hopper_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_hopper_flags@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_lsp_leaderboard_profile_arena_hopper_flags@@_N@Z");
//};

//public: c_flags<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_lsp_leaderboard_profile_arena_hopper_flags@@E$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_lsp_leaderboard_profile_arena_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_lsp_leaderboard_profile_arena_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_lsp_leaderboard_profile_arena_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_lsp_leaderboard_profile_arena_flags@@_N@Z");
//};

//public: c_flags<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_lsp_leaderboard_profile_arena_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: struct s_lsp_leaderboard_profile_arena_hopper_data & s_static_array<struct s_lsp_leaderboard_profile_arena_hopper_data, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_lsp_leaderboard_profile_arena_hopper_data@@$07@@QAAAAUs_lsp_leaderboard_profile_arena_hopper_data@@J@Z");
//};

//public: c_static_wchar_string<32>::c_static_wchar_string<32>(void)
//{
//    mangled_ppc("??0?$c_static_wchar_string@$0CA@@@QAA@XZ");
//};

//public: void c_static_wchar_string<32>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_wchar_string@$0CA@@@QAAXXZ");
//};

//public: void c_static_wchar_string<32>::set_utf8(struct utf8const *)
//{
//    mangled_ppc("?set_utf8@?$c_static_wchar_string@$0CA@@@QAAXPBUutf8@@@Z");
//};

//public: wchar_t const * c_static_wchar_string<32>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$c_static_wchar_string@$0CA@@@QBAPB_WXZ");
//};

//public: bool c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_lsp_leaderboard_user_current_season_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_lsp_leaderboard_user_current_season_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_lsp_leaderboard_user_current_season_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_lsp_leaderboard_user_current_season_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_lsp_leaderboard_user_current_season_flags@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_lsp_leaderboard_user_current_season_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_lsp_leaderboard_user_previous_season_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_lsp_leaderboard_user_previous_season_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_lsp_leaderboard_user_previous_season_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_lsp_leaderboard_user_previous_season_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_lsp_leaderboard_user_previous_season_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_lsp_leaderboard_user_previous_season_flags@@_N@Z");
//};

//public: c_flags<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_lsp_leaderboard_user_previous_season_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_lsp_leaderboard_user_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_lsp_leaderboard_user_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_lsp_leaderboard_user_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_lsp_leaderboard_user_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_lsp_leaderboard_user_flags@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_lsp_leaderboard_user_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_lsp_leaderboard_global_data_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_lsp_leaderboard_global_data_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_lsp_leaderboard_global_data_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_lsp_leaderboard_global_data_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_lsp_leaderboard_global_data_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_lsp_leaderboard_global_data_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_lsp_leaderboard_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_lsp_leaderboard_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_lsp_leaderboard_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_lsp_leaderboard_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_lsp_leaderboard_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_lsp_leaderboard_flags@@_N@Z");
//};

//public: unsigned __int64& s_static_array<unsigned __int64, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@_K$03@@QAAAA_KJ@Z");
//};

//public: struct s_network_lsp_leaderboard_player_game_results & s_static_array<struct s_network_lsp_leaderboard_player_game_results, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_lsp_leaderboard_player_game_results@@$03@@QAAAAUs_network_lsp_leaderboard_player_game_results@@J@Z");
//};

//public: struct s_network_lsp_leaderboard_player_season_result & s_static_array<struct s_network_lsp_leaderboard_player_season_result, 8>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_network_lsp_leaderboard_player_season_result@@$07@@QAAAAUs_network_lsp_leaderboard_player_season_result@@H@Z");
//};

//public: struct s_lsp_leaderboard_user & s_static_array<struct s_lsp_leaderboard_user, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@Us_lsp_leaderboard_user@@$03@@QAAAAUs_lsp_leaderboard_user@@W4e_controller_index@@@Z");
//};

//public: struct s_network_lsp_leaderboard_hopper_stats_internal & s_static_array<struct s_network_lsp_leaderboard_hopper_stats_internal, 8>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_network_lsp_leaderboard_hopper_stats_internal@@$07@@QAAAAUs_network_lsp_leaderboard_hopper_stats_internal@@H@Z");
//};

//public: struct s_lsp_leaderboard_user & s_static_array<struct s_lsp_leaderboard_user, 4>::operator[]<class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> >(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@?$s_static_array@Us_lsp_leaderboard_user@@$03@@QAAAAUs_lsp_leaderboard_user@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//public: struct s_network_lsp_leaderboard_hopper_stats_internal & s_static_array<struct s_network_lsp_leaderboard_hopper_stats_internal, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_lsp_leaderboard_hopper_stats_internal@@$07@@QAAAAUs_network_lsp_leaderboard_hopper_stats_internal@@J@Z");
//};

//public: unsigned __int64const & s_static_array<unsigned __int64, 4>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@_K$03@@QBAAB_KJ@Z");
//};

//public: unsigned __int64const & s_static_array<unsigned __int64, 4>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@_K$03@@QBAAB_KH@Z");
//};

//public: wchar_t const * c_static_wchar_string<1024>::print(wchar_t const *, ...)
//{
//    mangled_ppc("?print@?$c_static_wchar_string@$0EAA@@@QAAPB_WPB_WZZ");
//};

//public: wchar_t const * c_static_wchar_string<1024>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$c_static_wchar_string@$0EAA@@@QBAPB_WXZ");
//};

//public: struct s_network_lsp_leaderboard_player_stats const & s_static_array<struct s_network_lsp_leaderboard_player_stats, 32>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_lsp_leaderboard_player_stats@@$0CA@@@QBAABUs_network_lsp_leaderboard_player_stats@@J@Z");
//};

//public: struct s_network_lsp_leaderboard_player_season_result & s_static_array<struct s_network_lsp_leaderboard_player_season_result, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_lsp_leaderboard_player_season_result@@$07@@QAAAAUs_network_lsp_leaderboard_player_season_result@@J@Z");
//};

//public: struct s_network_lsp_leaderboard_player_season_result const & s_static_array<struct s_network_lsp_leaderboard_player_season_result, 32>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_lsp_leaderboard_player_season_result@@$0CA@@@QBAABUs_network_lsp_leaderboard_player_season_result@@J@Z");
//};

//public: struct s_network_lsp_leaderboard_player_season_result const & s_static_array<struct s_network_lsp_leaderboard_player_season_result, 8>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_lsp_leaderboard_player_season_result@@$07@@QBAABUs_network_lsp_leaderboard_player_season_result@@J@Z");
//};

//public: static bool c_flags_no_init<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_network_session_matchmaking_hopper_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_session_matchmaking_hopper_flags@@G$08Us_default_enum_string_resolver@@@@SA_NW4e_network_session_matchmaking_hopper_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_session_matchmaking_hopper_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_session_matchmaking_hopper_flags@@G$08Us_default_enum_string_resolver@@@@CAGW4e_network_session_matchmaking_hopper_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_life_cycle_matchmaking_progress_configuring_match_flags@@E$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_life_cycle_matchmaking_progress_configuring_match_flags@@E$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_hopper_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_lsp_leaderboard_profile_arena_hopper_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_hopper_flags@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_lsp_leaderboard_profile_arena_hopper_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_lsp_leaderboard_profile_arena_hopper_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_hopper_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_lsp_leaderboard_profile_arena_hopper_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_lsp_leaderboard_profile_arena_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_lsp_leaderboard_profile_arena_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_lsp_leaderboard_profile_arena_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_lsp_leaderboard_profile_arena_flags@@@Z");
//};

//public: static bool s_static_array<struct s_lsp_leaderboard_profile_arena_hopper_data, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_lsp_leaderboard_profile_arena_hopper_data@@$07@@SA_NJ@Z");
//};

//public: static bool c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_lsp_leaderboard_user_current_season_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_lsp_leaderboard_user_current_season_flags@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_lsp_leaderboard_user_current_season_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_lsp_leaderboard_user_current_season_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_user_current_season_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_lsp_leaderboard_user_current_season_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_lsp_leaderboard_user_previous_season_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_lsp_leaderboard_user_previous_season_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_lsp_leaderboard_user_previous_season_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_lsp_leaderboard_user_previous_season_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_lsp_leaderboard_user_previous_season_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_lsp_leaderboard_user_previous_season_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_user_previous_season_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_lsp_leaderboard_user_previous_season_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_lsp_leaderboard_user_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_lsp_leaderboard_user_flags@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_lsp_leaderboard_user_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_lsp_leaderboard_user_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_user_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_lsp_leaderboard_user_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_lsp_leaderboard_global_data_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_lsp_leaderboard_global_data_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_lsp_leaderboard_global_data_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_lsp_leaderboard_global_data_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_global_data_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_lsp_leaderboard_global_data_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_lsp_leaderboard_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_lsp_leaderboard_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_lsp_leaderboard_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_lsp_leaderboard_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_lsp_leaderboard_flags@@@Z");
//};

//public: static bool s_static_array<unsigned __int64, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@_K$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_network_lsp_leaderboard_player_game_results, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_lsp_leaderboard_player_game_results@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_network_lsp_leaderboard_player_season_result, 8>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_network_lsp_leaderboard_player_season_result@@$07@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_lsp_leaderboard_user, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@Us_lsp_leaderboard_user@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: static bool s_static_array<struct s_network_lsp_leaderboard_hopper_stats_internal, 8>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_network_lsp_leaderboard_hopper_stats_internal@@$07@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_lsp_leaderboard_user, 4>::valid<class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> >(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$valid@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@?$s_static_array@Us_lsp_leaderboard_user@@$03@@SA_NV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool s_static_array<struct s_network_lsp_leaderboard_hopper_stats_internal, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_lsp_leaderboard_hopper_stats_internal@@$07@@SA_NJ@Z");
//};

//public: static bool s_static_array<unsigned __int64, 4>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@_K$03@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_network_lsp_leaderboard_player_stats, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_lsp_leaderboard_player_stats@@$0CA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_network_lsp_leaderboard_player_season_result, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_lsp_leaderboard_player_season_result@@$07@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_network_lsp_leaderboard_player_season_result, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_lsp_leaderboard_player_season_result@@$0CA@@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_life_cycle_matchmaking_progress_configuring_match_flags@@E$04Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_hopper_flags@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_user_previous_season_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_life_cycle_matchmaking_progress_configuring_match_flags, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_life_cycle_matchmaking_progress_configuring_match_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_life_cycle_matchmaking_progress_configuring_match_flags@@E$04Us_default_enum_string_resolver@@@@CAEW4e_life_cycle_matchmaking_progress_configuring_match_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_profile_arena_hopper_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_lsp_leaderboard_profile_arena_hopper_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_hopper_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_lsp_leaderboard_profile_arena_hopper_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_profile_arena_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_lsp_leaderboard_profile_arena_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_profile_arena_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_lsp_leaderboard_profile_arena_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_previous_season_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_lsp_leaderboard_user_previous_season_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_user_previous_season_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_lsp_leaderboard_user_previous_season_flags@@@Z");
//};

//difftime
//{
//    mangled_ppc("difftime");
//};

//time
//{
//    mangled_ppc("time");
//};

//public: s_network_lsp_leaderboard_globals::s_network_lsp_leaderboard_globals(void)
//{
//    mangled_ppc("??0s_network_lsp_leaderboard_globals@@QAA@XZ");
//};

//public: s_network_lsp_leaderboard_players_game_results_blf_chunk::s_network_lsp_leaderboard_players_game_results_blf_chunk(void)
//{
//    mangled_ppc("??0s_network_lsp_leaderboard_players_game_results_blf_chunk@@QAA@XZ");
//};

//public: s_lsp_leaderboard_global::s_lsp_leaderboard_global(void)
//{
//    mangled_ppc("??0s_lsp_leaderboard_global@@QAA@XZ");
//};

//public: s_static_array<struct s_lsp_leaderboard_user, 4>::s_static_array<struct s_lsp_leaderboard_user, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_lsp_leaderboard_user@@$03@@QAA@XZ");
//};

//public: s_lsp_leaderboard_user::s_lsp_leaderboard_user(void)
//{
//    mangled_ppc("??0s_lsp_leaderboard_user@@QAA@XZ");
//};

//public: s_lsp_leaderboard_user_current_season::s_lsp_leaderboard_user_current_season(void)
//{
//    mangled_ppc("??0s_lsp_leaderboard_user_current_season@@QAA@XZ");
//};

//public: c_http_stored_buffer_downloader<1904>::c_http_stored_buffer_downloader<1904>(void)
//{
//    mangled_ppc("??0?$c_http_stored_buffer_downloader@$0HHA@@@QAA@XZ");
//};

//public: c_http_stored_buffer_downloader<994>::c_http_stored_buffer_downloader<994>(void)
//{
//    mangled_ppc("??0?$c_http_stored_buffer_downloader@$0DOC@@@QAA@XZ");
//};

//merged_828BD490
//{
//    mangled_ppc("merged_828BD490");
//};

//public: virtual c_http_stored_buffer_downloader<1904>::~c_http_stored_buffer_downloader<1904>(void)
//{
//    mangled_ppc("??1?$c_http_stored_buffer_downloader@$0HHA@@@UAA@XZ");
//};

//merged_828BD500
//{
//    mangled_ppc("merged_828BD500");
//};

//public: virtual c_http_stored_buffer_downloader<994>::~c_http_stored_buffer_downloader<994>(void)
//{
//    mangled_ppc("??1?$c_http_stored_buffer_downloader@$0DOC@@@UAA@XZ");
//};

//public: c_flags<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_lsp_leaderboard_user_current_season_flags@@E$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_lsp_leaderboard_user_flags@@E$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_lsp_leaderboard_global_data_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_lsp_leaderboard_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_lsp_leaderboard_user_current_season_flags@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_lsp_leaderboard_user_current_season_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_lsp_leaderboard_user_flags@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_lsp_leaderboard_user_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_lsp_leaderboard_global_data_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_lsp_leaderboard_global_data_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_lsp_leaderboard_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_lsp_leaderboard_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_user_current_season_flags@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_user_flags@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_global_data_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_current_season_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_lsp_leaderboard_user_current_season_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_user_current_season_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_lsp_leaderboard_user_current_season_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_user_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_lsp_leaderboard_user_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_user_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_lsp_leaderboard_user_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_global_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_lsp_leaderboard_global_data_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_global_data_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_lsp_leaderboard_global_data_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_lsp_leaderboard_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_lsp_leaderboard_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_lsp_leaderboard_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_lsp_leaderboard_flags@@@Z");
//};

//public: s_network_lsp_leaderboard_globals::~s_network_lsp_leaderboard_globals(void)
//{
//    mangled_ppc("??1s_network_lsp_leaderboard_globals@@QAA@XZ");
//};

//void network_lsp_leaderboard_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fnetwork_lsp_leaderboard_globals@@YAXXZ");
//};

