/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_network_leaderboard_statistic, 44>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_leaderboard_statistic@@$0CM@@@2JB"
// public: static enum e_network_leaderboard_game_results_flags const c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_network_leaderboard_game_results_flags@@E$03Us_default_enum_string_resolver@@@@2W4e_network_leaderboard_game_results_flags@@B"
// public: static long const s_static_array<struct s_network_leaderboard_query_user_statistics, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_leaderboard_query_user_statistics@@$03@@2JB"
// public: static long const s_static_array<struct s_network_leaderboard_write_statistics, 16>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_leaderboard_write_statistics@@$0BA@@@2JB"
// char const **k_leaderboard_statistic_names; // "?k_leaderboard_statistic_names@@3PAPBDA"
// struct s_network_leaderboard_globals network_leaderboard_globals; // "?network_leaderboard_globals@@3Us_network_leaderboard_globals@@A"

// bool network_leaderboard_initialize(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// void network_leaderboard_dispose(void);
// void network_leaderboard_update(void);
// void network_leaderboard_write_stats(long, class c_game_results const *);
// void build_relative_player_scores_from_game_results(class c_game_results const *, struct s_network_leaderboard_game_results const *, long *, long);
// public: s_network_leaderboard_game_results::s_network_leaderboard_game_results(void);
// public: s_network_leaderboard_player_game_results::s_network_leaderboard_player_game_results(void);
// void network_leaderboard_write_initial_stats(long, unsigned short, bool, bool, long, float, float, struct game_player_options const *);
// enum e_network_leaderboard_write_status network_leaderboard_get_write_status(void);
// bool network_leaderboard_player_stats_valid(struct s_network_session_player const *);
// enum e_network_file_load_status network_leaderboard_get_query_status(void);
// void network_leaderboard_notify_host_properties_set_for_controller(enum e_controller_index, struct s_calculated_player_statistics const *, enum e_network_session_type);
// void network_leaderboard_clear_user(enum e_network_leaderboard_clear_type, long);
// void network_leaderboard_clear(enum e_network_leaderboard_clear_type, char const *);
// bool network_leaderboard_get_user_query_status(enum e_controller_index, struct c_status_line *);
// bool network_leaderboard_get_player_write_status(long, struct c_status_line *);
// void network_leaderboard_set_user_stats(long, float, float, long, long, long);
// void network_leaderboard_set_user_game_stats(long, long, long, long, long);
// void network_leaderboard_refresh(void);
// void network_leaderboard_build_leaderboard_game_results_from_game_results(class c_game_results const *, struct s_network_leaderboard_game_results *);
// void network_leaderboard_build_leaderboard_player_game_results_from_game_results(long, struct s_network_leaderboard_game_results const *, class c_game_results const *, long, struct s_network_leaderboard_player_game_results *);
// void network_leaderboard_build_leaderboard_game_results_from_initial(unsigned short, bool, bool, long, float, float, struct s_network_leaderboard_game_results *);
// void network_leaderboard_build_leaderboard_player_game_results_from_initial(struct game_player_options const *, struct s_network_leaderboard_player_game_results *);
// void network_leaderboard_write_stats_internal(long, struct s_network_leaderboard_game_results const *, struct s_network_leaderboard_player_game_results const *, bool);
// bool online_xuid_is_guest_account(unsigned __int64);
// void network_leaderboard_build_global_matchmade_stats(struct s_network_leaderboard_game_results const *, struct s_online_stat_write *);
// void network_leaderboard_build_skill_stats(long, struct s_network_leaderboard_player_game_results const *, struct s_online_stat_write *, bool, bool);
// void network_leaderboard_build_hopper_stats(struct s_network_leaderboard_game_results const *, struct s_network_leaderboard_player_game_results const *, struct s_online_stat_write *);
// void network_leaderboard_build_property_from_statistic_and_results(enum e_leaderboard_statistic, struct s_network_leaderboard_game_results const *, struct s_network_leaderboard_player_game_results const *, struct s_online_property *);
// void network_leaderboard_add_unused_parameter_to_stat_write(struct s_online_stat_write *);
// void network_leaderboard_add_high_score_to_stat_write(struct s_network_leaderboard_game_results const *, struct s_network_leaderboard_player_game_results const *, struct s_online_stat_write *);
// void network_leaderboard_build_global_unarbitrated_stats(struct s_network_leaderboard_game_results const *, struct s_network_leaderboard_player_game_results const *, struct s_online_stat_write *);
// public: s_online_stat_write::s_online_stat_write(void);
// public: s_network_leaderboard_matchmade_stats_write::s_network_leaderboard_matchmade_stats_write(void);
// public: s_network_leaderboard_custom_stats_write::s_network_leaderboard_custom_stats_write(void);
// void network_leaderboard_update_leaderboards(void);
// void network_leaderboard_clear_query_stats(enum e_controller_index);
// void network_leaderboard_update_queries(void);
// void network_leaderboard_update_queries_in_progress(void);
// void network_leaderboard_update_queries_refresh(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// void network_leaderboard_update_queries_request(void);
// void network_leaderboard_update_queries_initiate(void);
// void network_leaderboard_submit_query_for_user(enum e_controller_index);
// void network_leaderboard_build_query_from_statistic_list(struct s_online_stat_query *, enum e_online_leaderboard_id, long, enum e_leaderboard_statistic const *);
// void network_leaderboard_update_session(void);
// void network_leaderboard_push_stats_to_session(enum e_controller_index);
// void network_leaderboard_build_user_stats(enum e_controller_index, struct s_queried_player_statistics *);
// public: s_static_array<struct s_network_leaderboard_statistic, 44>::s_static_array<struct s_network_leaderboard_statistic, 44>(void);
// public: s_network_leaderboard_statistic::s_network_leaderboard_statistic(void);
// void network_leaderboard_get_results(enum e_controller_index);
// bool network_leaderboard_id_valid_for_query(enum e_online_leaderboard_id);
// enum e_controller_index network_leaderboard_get_controller_by_xuid(unsigned __int64);
// void network_leaderboard_log_user_stats_read(enum e_controller_index, class s_static_array<struct s_network_leaderboard_statistic, 44> const *);
// void network_leaderboard_update_writes(void);
// void network_leaderboard_update_writes_in_progress(void);
// enum e_online_property_id network_leaderboard_get_property_id_by_statistic(enum e_leaderboard_statistic);
// enum e_online_leaderboard_column_id network_leaderboard_get_column_id_by_statistic(enum e_leaderboard_statistic, enum e_online_leaderboard_id);
// enum e_leaderboard_statistic network_leaderboard_get_statistic_by_column_id(enum e_online_leaderboard_column_id, enum e_online_leaderboard_id);
// void network_leaderboard_user_query_failed(enum e_controller_index);
// void network_leaderboard_clear_user_stats(enum e_controller_index, enum e_network_leaderboard_player_stats_clear_type);
// void network_leaderboard_log_global_stat_write(struct s_online_stat_write const *, bool);
// void network_leaderboard_log_player_stat_write(long, struct s_network_leaderboard_player_game_results const *, struct s_online_stat_write const *, bool);
// public: virtual bool c_leaderboard_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: virtual void c_leaderboard_controller_monitor::handle_controller_sign_in(enum e_controller_index);
// public: virtual void c_leaderboard_controller_monitor::handle_controller_sign_out(enum e_controller_index);
// void network_leaderboard_register_online_user_notification(void);
// public: c_leaderboard_controller_monitor::c_leaderboard_controller_monitor(void);
// void network_leaderboard_unregister_online_user_notification(void);
// public: c_enum<enum e_online_data_type, unsigned char, 0, 255, struct s_default_enum_string_resolver>::c_enum<enum e_online_data_type, unsigned char, 0, 255, struct s_default_enum_string_resolver>(enum e_online_data_type);
// public: enum e_online_data_type c_enum_no_init<enum e_online_data_type, unsigned char, 0, 255, struct s_default_enum_string_resolver>::operator enum e_online_data_type(void) const;
// public: struct s_network_leaderboard_statistic * s_static_array<struct s_network_leaderboard_statistic, 44>::get_elements(void);
// public: static long s_static_array<struct s_network_leaderboard_statistic, 44>::get_count(void);
// public: unsigned int s_static_array<struct s_network_leaderboard_statistic, 44>::get_total_element_size(void) const;
// public: static long s_static_array<struct s_network_leaderboard_query_user_statistics, 4>::get_count(void);
// public: static long s_static_array<struct s_network_leaderboard_write_statistics, 16>::get_count(void);
// public: bool c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_network_leaderboard_game_results_flags) const;
// public: void c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_network_leaderboard_game_results_flags, bool);
// public: c_flags<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>(void);
// public: struct s_network_leaderboard_write_statistics & s_static_array<struct s_network_leaderboard_write_statistics, 16>::operator[]<long>(long);
// public: struct s_network_leaderboard_query_user_statistics & s_static_array<struct s_network_leaderboard_query_user_statistics, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: struct s_network_leaderboard_statistic & s_static_array<struct s_network_leaderboard_statistic, 44>::operator[]<long>(long);
// public: struct s_network_leaderboard_query_user_statistics & s_static_array<struct s_network_leaderboard_query_user_statistics, 4>::operator[]<long>(long);
// public: struct s_network_leaderboard_statistic & s_static_array<struct s_network_leaderboard_statistic, 44>::operator[]<enum e_leaderboard_statistic>(enum e_leaderboard_statistic);
// bool operator==<enum e_online_leaderboard_id>(enum e_online_leaderboard_id const &, enum e_none_sentinel const &);
// bool operator!=<enum e_online_leaderboard_id>(enum e_online_leaderboard_id const &, enum e_none_sentinel const &);
// public: struct s_network_leaderboard_statistic const & s_static_array<struct s_network_leaderboard_statistic, 44>::operator[]<long>(long) const;
// public: void c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_network_leaderboard_game_results_flags);
// private: static unsigned char c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_leaderboard_game_results_flags);
// public: static bool s_static_array<struct s_network_leaderboard_write_statistics, 16>::valid<long>(long);
// public: static bool s_static_array<struct s_network_leaderboard_query_user_statistics, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: static bool s_static_array<struct s_network_leaderboard_statistic, 44>::valid<long>(long);
// public: static bool s_static_array<struct s_network_leaderboard_query_user_statistics, 4>::valid<long>(long);
// public: static bool s_static_array<struct s_network_leaderboard_statistic, 44>::valid<enum e_leaderboard_statistic>(enum e_leaderboard_statistic);
// private: static unsigned char c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_leaderboard_game_results_flags);
// public: s_static_array<struct s_network_leaderboard_query_user_statistics, 4>::s_static_array<struct s_network_leaderboard_query_user_statistics, 4>(void);
// public: s_network_leaderboard_query_user_statistics::s_network_leaderboard_query_user_statistics(void);
// public: s_network_leaderboard_query_statistics::s_network_leaderboard_query_statistics(void);

//bool network_leaderboard_initialize(void)
//{
//    mangled_ppc("?network_leaderboard_initialize@@YA_NXZ");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//void network_leaderboard_dispose(void)
//{
//    mangled_ppc("?network_leaderboard_dispose@@YAXXZ");
//};

//void network_leaderboard_update(void)
//{
//    mangled_ppc("?network_leaderboard_update@@YAXXZ");
//};

//void network_leaderboard_write_stats(long, class c_game_results const *)
//{
//    mangled_ppc("?network_leaderboard_write_stats@@YAXJPBVc_game_results@@@Z");
//};

//void build_relative_player_scores_from_game_results(class c_game_results const *, struct s_network_leaderboard_game_results const *, long *, long)
//{
//    mangled_ppc("?build_relative_player_scores_from_game_results@@YAXPBVc_game_results@@PBUs_network_leaderboard_game_results@@PAJJ@Z");
//};

//public: s_network_leaderboard_game_results::s_network_leaderboard_game_results(void)
//{
//    mangled_ppc("??0s_network_leaderboard_game_results@@QAA@XZ");
//};

//public: s_network_leaderboard_player_game_results::s_network_leaderboard_player_game_results(void)
//{
//    mangled_ppc("??0s_network_leaderboard_player_game_results@@QAA@XZ");
//};

//void network_leaderboard_write_initial_stats(long, unsigned short, bool, bool, long, float, float, struct game_player_options const *)
//{
//    mangled_ppc("?network_leaderboard_write_initial_stats@@YAXJG_N0JMMPBUgame_player_options@@@Z");
//};

//enum e_network_leaderboard_write_status network_leaderboard_get_write_status(void)
//{
//    mangled_ppc("?network_leaderboard_get_write_status@@YA?AW4e_network_leaderboard_write_status@@XZ");
//};

//bool network_leaderboard_player_stats_valid(struct s_network_session_player const *)
//{
//    mangled_ppc("?network_leaderboard_player_stats_valid@@YA_NPBUs_network_session_player@@@Z");
//};

//enum e_network_file_load_status network_leaderboard_get_query_status(void)
//{
//    mangled_ppc("?network_leaderboard_get_query_status@@YA?AW4e_network_file_load_status@@XZ");
//};

//void network_leaderboard_notify_host_properties_set_for_controller(enum e_controller_index, struct s_calculated_player_statistics const *, enum e_network_session_type)
//{
//    mangled_ppc("?network_leaderboard_notify_host_properties_set_for_controller@@YAXW4e_controller_index@@PBUs_calculated_player_statistics@@W4e_network_session_type@@@Z");
//};

//void network_leaderboard_clear_user(enum e_network_leaderboard_clear_type, long)
//{
//    mangled_ppc("?network_leaderboard_clear_user@@YAXW4e_network_leaderboard_clear_type@@J@Z");
//};

//void network_leaderboard_clear(enum e_network_leaderboard_clear_type, char const *)
//{
//    mangled_ppc("?network_leaderboard_clear@@YAXW4e_network_leaderboard_clear_type@@PBD@Z");
//};

//bool network_leaderboard_get_user_query_status(enum e_controller_index, struct c_status_line *)
//{
//    mangled_ppc("?network_leaderboard_get_user_query_status@@YA_NW4e_controller_index@@PAUc_status_line@@@Z");
//};

//bool network_leaderboard_get_player_write_status(long, struct c_status_line *)
//{
//    mangled_ppc("?network_leaderboard_get_player_write_status@@YA_NJPAUc_status_line@@@Z");
//};

//void network_leaderboard_set_user_stats(long, float, float, long, long, long)
//{
//    mangled_ppc("?network_leaderboard_set_user_stats@@YAXJMMJJJ@Z");
//};

//void network_leaderboard_set_user_game_stats(long, long, long, long, long)
//{
//    mangled_ppc("?network_leaderboard_set_user_game_stats@@YAXJJJJJ@Z");
//};

//void network_leaderboard_refresh(void)
//{
//    mangled_ppc("?network_leaderboard_refresh@@YAXXZ");
//};

//void network_leaderboard_build_leaderboard_game_results_from_game_results(class c_game_results const *, struct s_network_leaderboard_game_results *)
//{
//    mangled_ppc("?network_leaderboard_build_leaderboard_game_results_from_game_results@@YAXPBVc_game_results@@PAUs_network_leaderboard_game_results@@@Z");
//};

//void network_leaderboard_build_leaderboard_player_game_results_from_game_results(long, struct s_network_leaderboard_game_results const *, class c_game_results const *, long, struct s_network_leaderboard_player_game_results *)
//{
//    mangled_ppc("?network_leaderboard_build_leaderboard_player_game_results_from_game_results@@YAXJPBUs_network_leaderboard_game_results@@PBVc_game_results@@JPAUs_network_leaderboard_player_game_results@@@Z");
//};

//void network_leaderboard_build_leaderboard_game_results_from_initial(unsigned short, bool, bool, long, float, float, struct s_network_leaderboard_game_results *)
//{
//    mangled_ppc("?network_leaderboard_build_leaderboard_game_results_from_initial@@YAXG_N0JMMPAUs_network_leaderboard_game_results@@@Z");
//};

//void network_leaderboard_build_leaderboard_player_game_results_from_initial(struct game_player_options const *, struct s_network_leaderboard_player_game_results *)
//{
//    mangled_ppc("?network_leaderboard_build_leaderboard_player_game_results_from_initial@@YAXPBUgame_player_options@@PAUs_network_leaderboard_player_game_results@@@Z");
//};

//void network_leaderboard_write_stats_internal(long, struct s_network_leaderboard_game_results const *, struct s_network_leaderboard_player_game_results const *, bool)
//{
//    mangled_ppc("?network_leaderboard_write_stats_internal@@YAXJPBUs_network_leaderboard_game_results@@PBUs_network_leaderboard_player_game_results@@_N@Z");
//};

//bool online_xuid_is_guest_account(unsigned __int64)
//{
//    mangled_ppc("?online_xuid_is_guest_account@@YA_N_K@Z");
//};

//void network_leaderboard_build_global_matchmade_stats(struct s_network_leaderboard_game_results const *, struct s_online_stat_write *)
//{
//    mangled_ppc("?network_leaderboard_build_global_matchmade_stats@@YAXPBUs_network_leaderboard_game_results@@PAUs_online_stat_write@@@Z");
//};

//void network_leaderboard_build_skill_stats(long, struct s_network_leaderboard_player_game_results const *, struct s_online_stat_write *, bool, bool)
//{
//    mangled_ppc("?network_leaderboard_build_skill_stats@@YAXJPBUs_network_leaderboard_player_game_results@@PAUs_online_stat_write@@_N2@Z");
//};

//void network_leaderboard_build_hopper_stats(struct s_network_leaderboard_game_results const *, struct s_network_leaderboard_player_game_results const *, struct s_online_stat_write *)
//{
//    mangled_ppc("?network_leaderboard_build_hopper_stats@@YAXPBUs_network_leaderboard_game_results@@PBUs_network_leaderboard_player_game_results@@PAUs_online_stat_write@@@Z");
//};

//void network_leaderboard_build_property_from_statistic_and_results(enum e_leaderboard_statistic, struct s_network_leaderboard_game_results const *, struct s_network_leaderboard_player_game_results const *, struct s_online_property *)
//{
//    mangled_ppc("?network_leaderboard_build_property_from_statistic_and_results@@YAXW4e_leaderboard_statistic@@PBUs_network_leaderboard_game_results@@PBUs_network_leaderboard_player_game_results@@PAUs_online_property@@@Z");
//};

//void network_leaderboard_add_unused_parameter_to_stat_write(struct s_online_stat_write *)
//{
//    mangled_ppc("?network_leaderboard_add_unused_parameter_to_stat_write@@YAXPAUs_online_stat_write@@@Z");
//};

//void network_leaderboard_add_high_score_to_stat_write(struct s_network_leaderboard_game_results const *, struct s_network_leaderboard_player_game_results const *, struct s_online_stat_write *)
//{
//    mangled_ppc("?network_leaderboard_add_high_score_to_stat_write@@YAXPBUs_network_leaderboard_game_results@@PBUs_network_leaderboard_player_game_results@@PAUs_online_stat_write@@@Z");
//};

//void network_leaderboard_build_global_unarbitrated_stats(struct s_network_leaderboard_game_results const *, struct s_network_leaderboard_player_game_results const *, struct s_online_stat_write *)
//{
//    mangled_ppc("?network_leaderboard_build_global_unarbitrated_stats@@YAXPBUs_network_leaderboard_game_results@@PBUs_network_leaderboard_player_game_results@@PAUs_online_stat_write@@@Z");
//};

//public: s_online_stat_write::s_online_stat_write(void)
//{
//    mangled_ppc("??0s_online_stat_write@@QAA@XZ");
//};

//public: s_network_leaderboard_matchmade_stats_write::s_network_leaderboard_matchmade_stats_write(void)
//{
//    mangled_ppc("??0s_network_leaderboard_matchmade_stats_write@@QAA@XZ");
//};

//public: s_network_leaderboard_custom_stats_write::s_network_leaderboard_custom_stats_write(void)
//{
//    mangled_ppc("??0s_network_leaderboard_custom_stats_write@@QAA@XZ");
//};

//void network_leaderboard_update_leaderboards(void)
//{
//    mangled_ppc("?network_leaderboard_update_leaderboards@@YAXXZ");
//};

//void network_leaderboard_clear_query_stats(enum e_controller_index)
//{
//    mangled_ppc("?network_leaderboard_clear_query_stats@@YAXW4e_controller_index@@@Z");
//};

//void network_leaderboard_update_queries(void)
//{
//    mangled_ppc("?network_leaderboard_update_queries@@YAXXZ");
//};

//void network_leaderboard_update_queries_in_progress(void)
//{
//    mangled_ppc("?network_leaderboard_update_queries_in_progress@@YAXXZ");
//};

//void network_leaderboard_update_queries_refresh(void)
//{
//    mangled_ppc("?network_leaderboard_update_queries_refresh@@YAXXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//void network_leaderboard_update_queries_request(void)
//{
//    mangled_ppc("?network_leaderboard_update_queries_request@@YAXXZ");
//};

//void network_leaderboard_update_queries_initiate(void)
//{
//    mangled_ppc("?network_leaderboard_update_queries_initiate@@YAXXZ");
//};

//void network_leaderboard_submit_query_for_user(enum e_controller_index)
//{
//    mangled_ppc("?network_leaderboard_submit_query_for_user@@YAXW4e_controller_index@@@Z");
//};

//void network_leaderboard_build_query_from_statistic_list(struct s_online_stat_query *, enum e_online_leaderboard_id, long, enum e_leaderboard_statistic const *)
//{
//    mangled_ppc("?network_leaderboard_build_query_from_statistic_list@@YAXPAUs_online_stat_query@@W4e_online_leaderboard_id@@JPBW4e_leaderboard_statistic@@@Z");
//};

//void network_leaderboard_update_session(void)
//{
//    mangled_ppc("?network_leaderboard_update_session@@YAXXZ");
//};

//void network_leaderboard_push_stats_to_session(enum e_controller_index)
//{
//    mangled_ppc("?network_leaderboard_push_stats_to_session@@YAXW4e_controller_index@@@Z");
//};

//void network_leaderboard_build_user_stats(enum e_controller_index, struct s_queried_player_statistics *)
//{
//    mangled_ppc("?network_leaderboard_build_user_stats@@YAXW4e_controller_index@@PAUs_queried_player_statistics@@@Z");
//};

//public: s_static_array<struct s_network_leaderboard_statistic, 44>::s_static_array<struct s_network_leaderboard_statistic, 44>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_network_leaderboard_statistic@@$0CM@@@QAA@XZ");
//};

//public: s_network_leaderboard_statistic::s_network_leaderboard_statistic(void)
//{
//    mangled_ppc("??0s_network_leaderboard_statistic@@QAA@XZ");
//};

//void network_leaderboard_get_results(enum e_controller_index)
//{
//    mangled_ppc("?network_leaderboard_get_results@@YAXW4e_controller_index@@@Z");
//};

//bool network_leaderboard_id_valid_for_query(enum e_online_leaderboard_id)
//{
//    mangled_ppc("?network_leaderboard_id_valid_for_query@@YA_NW4e_online_leaderboard_id@@@Z");
//};

//enum e_controller_index network_leaderboard_get_controller_by_xuid(unsigned __int64)
//{
//    mangled_ppc("?network_leaderboard_get_controller_by_xuid@@YA?AW4e_controller_index@@_K@Z");
//};

//void network_leaderboard_log_user_stats_read(enum e_controller_index, class s_static_array<struct s_network_leaderboard_statistic, 44> const *)
//{
//    mangled_ppc("?network_leaderboard_log_user_stats_read@@YAXW4e_controller_index@@PBV?$s_static_array@Us_network_leaderboard_statistic@@$0CM@@@@Z");
//};

//void network_leaderboard_update_writes(void)
//{
//    mangled_ppc("?network_leaderboard_update_writes@@YAXXZ");
//};

//void network_leaderboard_update_writes_in_progress(void)
//{
//    mangled_ppc("?network_leaderboard_update_writes_in_progress@@YAXXZ");
//};

//enum e_online_property_id network_leaderboard_get_property_id_by_statistic(enum e_leaderboard_statistic)
//{
//    mangled_ppc("?network_leaderboard_get_property_id_by_statistic@@YA?AW4e_online_property_id@@W4e_leaderboard_statistic@@@Z");
//};

//enum e_online_leaderboard_column_id network_leaderboard_get_column_id_by_statistic(enum e_leaderboard_statistic, enum e_online_leaderboard_id)
//{
//    mangled_ppc("?network_leaderboard_get_column_id_by_statistic@@YA?AW4e_online_leaderboard_column_id@@W4e_leaderboard_statistic@@W4e_online_leaderboard_id@@@Z");
//};

//enum e_leaderboard_statistic network_leaderboard_get_statistic_by_column_id(enum e_online_leaderboard_column_id, enum e_online_leaderboard_id)
//{
//    mangled_ppc("?network_leaderboard_get_statistic_by_column_id@@YA?AW4e_leaderboard_statistic@@W4e_online_leaderboard_column_id@@W4e_online_leaderboard_id@@@Z");
//};

//void network_leaderboard_user_query_failed(enum e_controller_index)
//{
//    mangled_ppc("?network_leaderboard_user_query_failed@@YAXW4e_controller_index@@@Z");
//};

//void network_leaderboard_clear_user_stats(enum e_controller_index, enum e_network_leaderboard_player_stats_clear_type)
//{
//    mangled_ppc("?network_leaderboard_clear_user_stats@@YAXW4e_controller_index@@W4e_network_leaderboard_player_stats_clear_type@@@Z");
//};

//void network_leaderboard_log_global_stat_write(struct s_online_stat_write const *, bool)
//{
//    mangled_ppc("?network_leaderboard_log_global_stat_write@@YAXPBUs_online_stat_write@@_N@Z");
//};

//void network_leaderboard_log_player_stat_write(long, struct s_network_leaderboard_player_game_results const *, struct s_online_stat_write const *, bool)
//{
//    mangled_ppc("?network_leaderboard_log_player_stat_write@@YAXJPBUs_network_leaderboard_player_game_results@@PBUs_online_stat_write@@_N@Z");
//};

//public: virtual bool c_leaderboard_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?controller_should_be_monitored@c_leaderboard_controller_monitor@@UAA_NW4e_controller_index@@V?$c_flags@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: virtual void c_leaderboard_controller_monitor::handle_controller_sign_in(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_in@c_leaderboard_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//public: virtual void c_leaderboard_controller_monitor::handle_controller_sign_out(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_out@c_leaderboard_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//void network_leaderboard_register_online_user_notification(void)
//{
//    mangled_ppc("?network_leaderboard_register_online_user_notification@@YAXXZ");
//};

//public: c_leaderboard_controller_monitor::c_leaderboard_controller_monitor(void)
//{
//    mangled_ppc("??0c_leaderboard_controller_monitor@@QAA@XZ");
//};

//void network_leaderboard_unregister_online_user_notification(void)
//{
//    mangled_ppc("?network_leaderboard_unregister_online_user_notification@@YAXXZ");
//};

//public: c_enum<enum e_online_data_type, unsigned char, 0, 255, struct s_default_enum_string_resolver>::c_enum<enum e_online_data_type, unsigned char, 0, 255, struct s_default_enum_string_resolver>(enum e_online_data_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_online_data_type@@E$0A@$0PP@Us_default_enum_string_resolver@@@@QAA@W4e_online_data_type@@@Z");
//};

//public: enum e_online_data_type c_enum_no_init<enum e_online_data_type, unsigned char, 0, 255, struct s_default_enum_string_resolver>::operator enum e_online_data_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_online_data_type@@E$0A@$0PP@Us_default_enum_string_resolver@@@@QBA?AW4e_online_data_type@@XZ");
//};

//public: struct s_network_leaderboard_statistic * s_static_array<struct s_network_leaderboard_statistic, 44>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_network_leaderboard_statistic@@$0CM@@@QAAPAUs_network_leaderboard_statistic@@XZ");
//};

//public: static long s_static_array<struct s_network_leaderboard_statistic, 44>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_network_leaderboard_statistic@@$0CM@@@SAJXZ");
//};

//public: unsigned int s_static_array<struct s_network_leaderboard_statistic, 44>::get_total_element_size(void) const
//{
//    mangled_ppc("?get_total_element_size@?$s_static_array@Us_network_leaderboard_statistic@@$0CM@@@QBAIXZ");
//};

//public: static long s_static_array<struct s_network_leaderboard_query_user_statistics, 4>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_network_leaderboard_query_user_statistics@@$03@@SAJXZ");
//};

//public: static long s_static_array<struct s_network_leaderboard_write_statistics, 16>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_network_leaderboard_write_statistics@@$0BA@@@SAJXZ");
//};

//public: bool c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_network_leaderboard_game_results_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_leaderboard_game_results_flags@@E$03Us_default_enum_string_resolver@@@@QBA_NW4e_network_leaderboard_game_results_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_network_leaderboard_game_results_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_leaderboard_game_results_flags@@E$03Us_default_enum_string_resolver@@@@QAAXW4e_network_leaderboard_game_results_flags@@_N@Z");
//};

//public: c_flags<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_leaderboard_game_results_flags@@E$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: struct s_network_leaderboard_write_statistics & s_static_array<struct s_network_leaderboard_write_statistics, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_leaderboard_write_statistics@@$0BA@@@QAAAAUs_network_leaderboard_write_statistics@@J@Z");
//};

//public: struct s_network_leaderboard_query_user_statistics & s_static_array<struct s_network_leaderboard_query_user_statistics, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@Us_network_leaderboard_query_user_statistics@@$03@@QAAAAUs_network_leaderboard_query_user_statistics@@W4e_controller_index@@@Z");
//};

//public: struct s_network_leaderboard_statistic & s_static_array<struct s_network_leaderboard_statistic, 44>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_leaderboard_statistic@@$0CM@@@QAAAAUs_network_leaderboard_statistic@@J@Z");
//};

//public: struct s_network_leaderboard_query_user_statistics & s_static_array<struct s_network_leaderboard_query_user_statistics, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_leaderboard_query_user_statistics@@$03@@QAAAAUs_network_leaderboard_query_user_statistics@@J@Z");
//};

//public: struct s_network_leaderboard_statistic & s_static_array<struct s_network_leaderboard_statistic, 44>::operator[]<enum e_leaderboard_statistic>(enum e_leaderboard_statistic)
//{
//    mangled_ppc("??$?AW4e_leaderboard_statistic@@@?$s_static_array@Us_network_leaderboard_statistic@@$0CM@@@QAAAAUs_network_leaderboard_statistic@@W4e_leaderboard_statistic@@@Z");
//};

//bool operator==<enum e_online_leaderboard_id>(enum e_online_leaderboard_id const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8W4e_online_leaderboard_id@@@@YA_NABW4e_online_leaderboard_id@@ABW4e_none_sentinel@@@Z");
//};

//bool operator!=<enum e_online_leaderboard_id>(enum e_online_leaderboard_id const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9W4e_online_leaderboard_id@@@@YA_NABW4e_online_leaderboard_id@@ABW4e_none_sentinel@@@Z");
//};

//public: struct s_network_leaderboard_statistic const & s_static_array<struct s_network_leaderboard_statistic, 44>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_leaderboard_statistic@@$0CM@@@QBAABUs_network_leaderboard_statistic@@J@Z");
//};

//public: void c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_leaderboard_game_results_flags@@E$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_network_leaderboard_game_results_flags@@E$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_network_leaderboard_game_results_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_leaderboard_game_results_flags@@E$03Us_default_enum_string_resolver@@@@SA_NW4e_network_leaderboard_game_results_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_leaderboard_game_results_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_leaderboard_game_results_flags@@E$03Us_default_enum_string_resolver@@@@CAEW4e_network_leaderboard_game_results_flags@@@Z");
//};

//public: static bool s_static_array<struct s_network_leaderboard_write_statistics, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_leaderboard_write_statistics@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_network_leaderboard_query_user_statistics, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@Us_network_leaderboard_query_user_statistics@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: static bool s_static_array<struct s_network_leaderboard_statistic, 44>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_leaderboard_statistic@@$0CM@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_network_leaderboard_query_user_statistics, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_leaderboard_query_user_statistics@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_network_leaderboard_statistic, 44>::valid<enum e_leaderboard_statistic>(enum e_leaderboard_statistic)
//{
//    mangled_ppc("??$valid@W4e_leaderboard_statistic@@@?$s_static_array@Us_network_leaderboard_statistic@@$0CM@@@SA_NW4e_leaderboard_statistic@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_network_leaderboard_game_results_flags@@E$03Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_leaderboard_game_results_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_leaderboard_game_results_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_network_leaderboard_game_results_flags@@E$03Us_default_enum_string_resolver@@@@CAEW4e_network_leaderboard_game_results_flags@@@Z");
//};

//public: s_static_array<struct s_network_leaderboard_query_user_statistics, 4>::s_static_array<struct s_network_leaderboard_query_user_statistics, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_network_leaderboard_query_user_statistics@@$03@@QAA@XZ");
//};

//public: s_network_leaderboard_query_user_statistics::s_network_leaderboard_query_user_statistics(void)
//{
//    mangled_ppc("??0s_network_leaderboard_query_user_statistics@@QAA@XZ");
//};

//public: s_network_leaderboard_query_statistics::s_network_leaderboard_query_statistics(void)
//{
//    mangled_ppc("??0s_network_leaderboard_query_statistics@@QAA@XZ");
//};

