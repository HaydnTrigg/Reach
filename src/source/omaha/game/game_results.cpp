/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_integer_statistic, 142>::k_element_count; // "?k_element_count@?$s_static_array@Us_integer_statistic@@$0IO@@@2JB"
// public: static long const s_static_array<struct s_game_results_local_player_rewards_cache_per_controller, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_game_results_local_player_rewards_cache_per_controller@@$03@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 145>::k_maximum_count; // "?k_maximum_count@?$c_big_flags_typed_no_init@J$0JB@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 145>::k_flag_chunk_count; // "?k_flag_chunk_count@?$c_big_flags_typed_no_init@J$0JB@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 82>::k_maximum_count; // "?k_maximum_count@?$c_big_flags_typed_no_init@J$0FC@@@2JB"
// public: static long const c_big_flags_typed_no_init<long, 82>::k_flag_chunk_count; // "?k_flag_chunk_count@?$c_big_flags_typed_no_init@J$0FC@@@2JB"
// struct s_integer_statistic_definition *g_game_results_statistic_definitions; // "?g_game_results_statistic_definitions@@3PAUs_integer_statistic_definition@@A"
// struct s_integer_statistic_definition *g_game_results_reward_statistic_definitions; // "?g_game_results_reward_statistic_definitions@@3PAUs_integer_statistic_definition@@A"
// struct s_integer_statistic_definition *g_game_results_damage_statistic_definitions; // "?g_game_results_damage_statistic_definitions@@3PAUs_integer_statistic_definition@@A"
// struct s_real_statistic_definition *g_game_results_griefing_statistic_definitions; // "?g_game_results_griefing_statistic_definitions@@3PAUs_real_statistic_definition@@A"
// struct s_integer_statistic_definition *g_game_results_player_vs_player_statistic_definitions; // "?g_game_results_player_vs_player_statistic_definitions@@3PAUs_integer_statistic_definition@@A"
// struct s_integer_statistic_definition *g_game_results_player_vs_ai_statistic_definitions; // "?g_game_results_player_vs_ai_statistic_definitions@@3PAUs_integer_statistic_definition@@A"
// long volatile `public: void __cdecl c_big_flags_typed_no_init<long, 145>::clear(void)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??clear@?$c_big_flags_typed_no_init@J$0JB@@@QAAXXZ@4JC"
// long volatile `public: void __cdecl c_big_flags_typed_no_init<long, 82>::clear(void)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??clear@?$c_big_flags_typed_no_init@J$0FC@@@QAAXXZ@4JC"
// struct s_game_results_globals g_game_results_globals; // "?g_game_results_globals@@3Us_game_results_globals@@A"
// class c_game_results g_current_game_results; // "?g_current_game_results@@3Vc_game_results@@A"

// void game_results_initialize(void);
// void game_results_initialize_statistic_definitions(long, struct s_integer_statistic_definition const *);
// void game_results_initialize_statistic_definitions(long, struct s_real_statistic_definition const *);
// void game_results_dispose(void);
// void game_results_initialize_for_new_map(void);
// public: unsigned __int64 c_map_variant::get_unique_id(void) const;
// public: struct s_content_item_metadata const * c_game_engine_base_variant::get_metadata(void) const;
// void game_results_dispose_from_old_map(void);
// bool game_results_get_game_finalized(void);
// bool game_results_get_game_started(void);
// void game_results_update(void);
// public: s_user_interface_session_player_index::s_user_interface_session_player_index(void);
// public: void s_user_interface_session_player_index::clear(void);
// void game_results_clear(void);
// void game_results_finalize(void);
// void game_results_set_game_finished(void);
// void game_results_start_recording(void);
// void game_results_stop_recording(void);
// void game_results_set_recording_pause(bool);
// bool game_results_get_game_recording(void);
// void game_results_start_updating(void);
// void game_results_stop_updating(void);
// bool game_results_get_game_updating(void);
// void game_results_handle_incident(long, long, long, long, long, struct s_damage_reporting_info const &);
// void game_results_notify_player_indices_changed(void);
// void game_results_notify_active_teams_changed(void);
// void game_results_statistic_increment(long, enum e_multiplayer_team, enum e_game_results_statistic, long);
// void game_results_statistic_set(long, enum e_multiplayer_team, enum e_game_results_statistic, long);
// long game_results_statistic_get_direct(long, enum e_multiplayer_team, enum e_game_results_statistic);
// long game_results_statistic_get_current(long, enum e_multiplayer_team, enum e_game_results_statistic);
// long game_results_get_final_statistic(long, enum e_multiplayer_team, enum e_game_results_statistic);
// long game_results_get_final_damage_statistic(long, enum e_game_results_damage_statistic, enum e_damage_reporting_type);
// bool game_results_get_final_player_alive_at_end_game(long);
// long game_results_get_current_medal_statistic(long, long);
// long game_results_get_final_medal_statistic(long, long);
// long game_results_get_final_player_vs_player_statistic(long, long, enum e_game_results_player_vs_player_statistic);
// class c_game_results const * game_results_get_current_results(void);
// class c_game_results const * game_results_get_final_results(void);
// enum e_game_engine_type game_results_get_game_type(void);
// void game_results_set_final_player_score_and_standing(long, long, long);
// void game_results_set_final_team_score_and_standing(enum e_multiplayer_team, long, long);
// long game_results_get_final_player_score(long);
// long game_results_get_final_team_score(enum e_multiplayer_team);
// long game_results_get_final_player_standing(long);
// long game_results_get_final_team_standing(enum e_multiplayer_team);
// wchar_t * game_results_get_final_player_name(long);
// struct s_player_identifier * game_results_get_final_player_identifier(long);
// enum e_multiplayer_team game_results_get_final_player_team_index(long);
// void game_results_get_final_player_appearance(long, struct s_player_appearance *);
// long game_results_get_final_player_skill_level(long);
// void game_results_player_vs_player_statistic_increment(long, long, enum e_game_results_player_vs_player_statistic, long);
// void game_results_player_vs_ai_statistic_increment(long, long, enum e_campaign_metagame_bucket_type, enum e_campaign_metagame_bucket_class, enum e_game_results_player_vs_ai_statistic, long);
// void game_results_damage_statistic_increment(long, enum e_game_results_damage_statistic, enum e_damage_reporting_type, long);
// void game_results_griefing_statistic_increment(long, enum e_game_results_player_griefing_statistic, float);
// enum e_damage_reporting_type game_results_tracked_damage_type_from_damage_reporting_info(struct s_damage_reporting_info const &);
// enum e_damage_reporting_modifier game_results_tracked_damage_modifier_from_damage_reporting_info(struct s_damage_reporting_info const &);
// void game_results_medal_increment(long, long, long);
// void game_results_incident_increment(long, long, long);
// void game_results_award_achievement(long, enum e_achievement);
// void game_results_cookies_add(long, long, enum e_cookie_award_host_authoritative_type);
// void game_results_commendation_increment(long, long);
// void game_results_local_cookies_add(enum e_controller_index, long, enum e_cookie_award_client_authoritative_type);
// void game_results_local_commendation_increment(enum e_controller_index, long);
// void game_results_insert_event(struct s_game_results_event const *);
// void game_results_insert_event(struct s_game_results_medal_event const *);
// enum e_damage_reporting_type game_results_get_dead_unit_weapon(long);
// void game_results_insert_kill_event(long, long, struct s_damage_reporting_info const &, long);
// void game_results_insert_ai_kill_event(long, long, struct s_damage_reporting_info const &, long);
// void game_results_insert_betrayal_event(long, long, struct s_damage_reporting_info const &, long);
// void game_results_insert_ai_betrayal_event(long, long, struct s_damage_reporting_info const &, long);
// void game_results_insert_ai_death_event(long, long, struct s_damage_reporting_info const &, long);
// void game_results_insert_score_event(long, enum e_game_results_event_score_type, long);
// void game_results_insert_carry_event(long, enum e_game_results_event_carry_type, long);
// void game_results_insert_medal_event(long, long);
// void game_results_get_incremental(struct s_game_results_incremental *);
// void game_results_set_incremental(struct s_game_results_incremental const *);
// void get_game_results_statistic_definition(struct s_integer_statistic_definition *, long, void *);
// void get_game_results_player_vs_player_statistic_definition(struct s_integer_statistic_definition *, long, void *);
// void get_game_results_player_vs_ai_statistic_definition(struct s_integer_statistic_definition *, long, void *);
// void get_game_results_damage_statistic_definitions(struct s_integer_statistic_definition *, long, void *);
// void get_game_results_griefing_statistic_definition(struct s_real_statistic_definition *, long, void *);
// void get_game_results_reward_statistic_definition(struct s_integer_statistic_definition *, long, void *);
// void get_medal_statistic_definition(struct s_integer_statistic_definition *, long, void *);
// void get_incident_statistic_definition(struct s_integer_statistic_definition *, long, void *);
// void game_results_statistics_encode(class c_bitstream *, struct s_integer_statistic_update const *, long, void (*)(struct s_integer_statistic_definition *, long, void *), void *);
// bool game_results_statistics_decode(class c_bitstream *, struct s_integer_statistic_update *, long, void (*)(struct s_integer_statistic_definition *, long, void *), void *);
// void game_results_incremental_update_encode(class c_bitstream *, struct s_game_results_incremental_update const *);
// bool game_results_incremental_update_decode(class c_bitstream *, struct s_game_results_incremental_update *);
// bool game_results_calculate_incremental_update(struct s_game_results_incremental const *, struct s_game_results_incremental_update *);
// void game_results_calculate_incremental_statistics_update(struct s_integer_statistic const *, struct s_integer_statistic const *, long, bool *, struct s_integer_statistic_update *, long);
// bool game_results_incremental_update_clear_for_comparison(struct s_game_results_incremental_update *, struct s_game_results_incremental_update *);
// void game_results_apply_incremental_statistics_update(struct s_integer_statistic_update const *, long, struct s_integer_statistic *, long);
// void game_results_apply_player_configuration_update(struct s_game_results_player_data *, struct s_game_results_player_data_update const *);
// void game_results_apply_incremental_update(struct s_game_results_incremental *, struct s_game_results_incremental_update const *);
// void game_results_get_final_sorted_players_and_teams(long *const, long *, long *const, long *);
// bool game_results_sort_players(long, long, void const *);
// bool game_results_sort_teams(long, long, void const *);
// public: long c_game_results::get_first_unreferenced_machine_index(void);
// public: long c_game_results::add_machine(struct s_machine_identifier const *);
// public: static struct s_machine_identifier const * c_game_results::get_local_machine_identifier(void);
// public: long c_game_results::get_local_machine_index(void) const;
// public: long c_game_results::get_machine_index(struct s_machine_identifier const *) const;
// public: long c_game_results::get_host_machine_index(void) const;
// public: bool c_game_results::validate(void) const;
// long game_results_count_damage_statistic(long, enum e_game_results_damage_statistic, enum e_damage_reporting_breakdown_type);
// long game_results_get_maximum_rounds_completed(void);
// void game_results_post_game_sort_player_indices_for_game_results(long *const, long, class c_game_results const *);
// void game_results_post_game_mvp_sort_player_indices_for_game_results(long *const, long, class c_game_results const *);
// void game_results_post_game_sort_team_indices_for_game_results(long *const, long, class c_game_results const *);
// bool game_results_player_won_internal(long, class c_game_results const *, bool);
// bool game_results_player_won(long, class c_game_results const *);
// bool game_results_player_won_uncontested(long, class c_game_results const *);
// void game_results_notify_machine_leave_reason(struct s_machine_identifier const *, enum e_game_results_leave_reason);
// long get_machine_data_index_from_identifier(struct s_machine_identifier const *);
// void game_results_notify_only_machine_with_full_connectivity(struct s_machine_identifier const *);
// void game_results_notify_machine_on_only_team_with_full_connectivity(struct s_machine_identifier const *);
// void game_results_set_game_started(void);
// bool game_results_player_exists(long);
// bool game_results_team_exists(enum e_multiplayer_team);
// void game_results_set_host(long);
// bool game_results_get_object_position(long, union real_point3d *);
// bool game_results_get_player_position(long, union real_point3d *);
// void game_results_encode_player_data(class c_bitstream *, struct s_game_results_player_data_update const *);
// void game_results_decode_player_data(class c_bitstream *, struct s_game_results_player_data_update *);
// void game_results_respond_to_single_achievement_update(long, enum e_achievement);
// enum e_controller_index game_results_get_local_controller_from_player(class c_game_results const *, long);
// void game_results_respond_to_achievement_update(long, class c_big_flags_typed_no_init<long, 256> const &);
// void game_results_reconcile_player_rewards(void);
// void game_results_award_achievements_from_finalized_results(class c_game_results const *);
// void game_results_award_player_rewards_from_finalized_results(class c_game_results *);
// void game_results_award_challenges_from_finalized_results(class c_game_results const *);
// void game_results_award_completion_from_finalized_results(class c_game_results const *);
// int post_game_carnage_players_sort_proc(void const *, void const *);
// int post_game_carnage_teams_sort_proc(void const *, void const *);
// int post_game_carnage_mvp_sort_proc(void const *, void const *);
// long game_results_get_player_index_from_player_identifier(struct s_player_identifier const *);
// void build_game_engine_snapshot(struct s_game_results_game_engine_snapshot *);
// void game_results_copy_current_game_variant(void);
// void game_results_randomize_completely(struct s_game_results *);
// void game_results_randomize_edge_cases(struct s_game_results *);
// enum e_map_id random_map_id(enum e_game_mode);
// void game_results_statistics_randomize(struct s_integer_statistic *, long, void (*)(struct s_integer_statistic_definition *, long, void *), void *);
// void game_results_randomize_realistic(long);
// struct s_game_results_game_engine_snapshot const * game_results_get_game_engine_snapshot(void);
// public: void s_game_results_game_engine_snapshot::encode(class c_bitstream *) const;
// public: void s_game_results_game_engine_snapshot::decode(class c_bitstream *);
// void game_results_get_visible_model_and_team(class c_game_results const *, enum e_multiplayer_team, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver>, enum e_multiplayer_team *, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> *);
// void game_results_notify_game_end_reason(enum e_game_results_game_end_reason);
// public: class c_enum_no_init<enum e_game_results_event_score_type, char, 0, 3, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_game_results_event_score_type, char, 0, 3, struct s_default_enum_string_resolver>::operator=(enum e_game_results_event_score_type);
// public: class c_enum_no_init<enum e_game_results_event_carry_type, char, 0, 5, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_game_results_event_carry_type, char, 0, 5, struct s_default_enum_string_resolver>::operator=(enum e_game_results_event_carry_type);
// public: c_enum<enum e_game_results_event_type, char, 0, 9, struct s_default_enum_string_resolver>::c_enum<enum e_game_results_event_type, char, 0, 9, struct s_default_enum_string_resolver>(enum e_game_results_event_type);
// public: enum e_game_results_event_type c_enum_no_init<enum e_game_results_event_type, char, 0, 9, struct s_default_enum_string_resolver>::operator enum e_game_results_event_type(void) const;
// public: c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>::c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>(enum e_game_engine_type);
// public: c_enum<enum e_game_results_game_end_reason, unsigned char, 0, 15, struct s_default_enum_string_resolver>::c_enum<enum e_game_results_game_end_reason, unsigned char, 0, 15, struct s_default_enum_string_resolver>(enum e_game_results_game_end_reason);
// public: c_big_flags<145>::c_big_flags<145>(void);
// public: c_big_flags<82>::c_big_flags<82>(void);
// public: bool c_big_flags_typed_no_init<long, 256>::operator!=(class c_big_flags_typed_no_init<long, 256> const &) const;
// public: bool c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_player_data_update_bit) const;
// public: void c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::set(enum e_player_data_update_bit, bool);
// public: bool c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::test_range(enum e_player_data_update_bit, enum e_player_data_update_bit) const;
// public: bool c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver> const &) const;
// public: bool c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::test(enum e_machine_data_update_bit) const;
// public: void c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::set(enum e_machine_data_update_bit, bool);
// public: bool c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver> const &) const;
// public: bool c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::test(char) const;
// public: bool c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver> const &) const;
// public: enum e_multiplayer_team & s_static_array<enum e_multiplayer_team, 8>::operator[]<long>(long);
// public: struct s_game_results_local_player_rewards_cache_per_controller & s_static_array<struct s_game_results_local_player_rewards_cache_per_controller, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: struct s_integer_statistic & s_static_array<struct s_integer_statistic, 142>::operator[]<enum e_game_results_player_rewards_statistic>(enum e_game_results_player_rewards_statistic);
// public: void c_big_flags_typed_no_init<long, 145>::set(long, bool);
// public: c_big_flags_typed<long, 145>::c_big_flags_typed<long, 145>(void);
// class c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver> bit_block_flags_build<class c_big_flags<145> >(class c_big_flags<145>, long, long);
// class c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver> bit_block_flags_build<class c_big_flags_typed_no_init<long, 256> >(class c_big_flags_typed_no_init<long, 256>, long, long);
// public: void c_big_flags_typed_no_init<long, 82>::set(long, bool);
// public: c_big_flags_typed<long, 82>::c_big_flags_typed<long, 82>(void);
// class c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver> bit_block_flags_build<class c_big_flags<82> >(class c_big_flags<82>, long, long);
// void game_results_statistics_encode<6>(class c_bitstream *, struct s_real_statistic_array_update<6> const *, void (*)(struct s_real_statistic_definition *, long, void *), void *);
// public: void c_bitstream::write_enum<class c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>);
// bool game_results_statistics_decode<6>(class c_bitstream *, struct s_real_statistic_array_update<6> *, void (*)(struct s_real_statistic_definition *, long, void *), void *);
// public: void c_bitstream::read_enum<class c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver> *);
// bool struct_is_zeroed<struct s_game_results_incremental_update>(struct s_game_results_incremental_update const *);
// void game_results_calculate_incremental_statistics_update<6>(struct s_real_statistic_array<6> const *, struct s_real_statistic_array<6> const *, struct s_real_statistic_array_update<6> *);
// void game_results_apply_incremental_statistics_update<6>(struct s_real_statistic_array_update<6> const *, struct s_real_statistic_array<6> *);
// public: struct s_integer_statistic & s_static_array<struct s_integer_statistic, 142>::operator[]<long>(long);
// void _random_flags<class c_flags<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver> >(unsigned long *, char const *, char const *, unsigned long, class c_flags<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver> *);
// void _random_flags<class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> >(unsigned long *, char const *, char const *, unsigned long, class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> *);
// void _random_flags<class c_big_flags_typed_no_init<long, 256> >(unsigned long *, char const *, char const *, unsigned long, class c_big_flags_typed_no_init<long, 256> *);
// void _random_flags<class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> >(unsigned long *, char const *, char const *, unsigned long, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> *);
// void game_results_statistics_randomize<6>(struct s_real_statistic_array<6> *, void (*)(struct s_real_statistic_definition *, long, void *), void *);
// public: bool c_enum_no_init<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: bool c_big_flags_typed_no_init<long, 256>::operator==(class c_big_flags_typed_no_init<long, 256> const &) const;
// public: class c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver> c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver> const &) const;
// public: static class c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver> c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_player_data_update_bit, enum e_player_data_update_bit);
// public: static bool c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_player_data_update_bit);
// private: static unsigned char c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_data_update_bit);
// public: static bool c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_machine_data_update_bit);
// private: static unsigned char c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_machine_data_update_bit);
// public: void c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::set(char, bool);
// public: static bool c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(char);
// private: static unsigned char c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(char);
// public: static bool s_static_array<enum e_multiplayer_team, 8>::valid<long>(long);
// public: static bool s_static_array<struct s_game_results_local_player_rewards_cache_per_controller, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: static bool s_static_array<struct s_integer_statistic, 142>::valid<enum e_game_results_player_rewards_statistic>(enum e_game_results_player_rewards_statistic);
// public: void c_big_flags_typed_no_init<long, 145>::clear(void);
// public: bool c_big_flags_typed_no_init<long, 145>::is_clear(void) const;
// public: bool c_big_flags_typed_no_init<long, 145>::test(long) const;
// public: static bool c_big_flags_typed_no_init<long, 145>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 145>::valid(void) const;
// public: void c_big_flags_typed_no_init<long, 82>::clear(void);
// public: bool c_big_flags_typed_no_init<long, 82>::is_clear(void) const;
// public: bool c_big_flags_typed_no_init<long, 82>::test(long) const;
// public: static bool c_big_flags_typed_no_init<long, 82>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 82>::valid(void) const;
// public: void c_bitstream::write_flags<class c_flags<char, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags<char, unsigned char, 6, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver> >(class c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags<char, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags<char, unsigned char, 6, struct s_default_enum_string_resolver> *);
// public: static enum e_game_results_leave_reason c_enum_no_init<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static bool s_static_array<struct s_integer_statistic, 142>::valid<long>(long);
// public: void c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: unsigned char c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// protected: static unsigned long c_big_flags_typed_no_init<long, 145>::get_mask_of_second_slice_of_chunk_inclusive(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 82>::get_mask_of_second_slice_of_chunk_inclusive(long);
// public: bool c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::valid(void) const;
// public: bool c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::valid(void) const;
// protected: static long c_big_flags_typed_no_init<long, 145>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 145>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 145>::get_valid_mask_of_last_chunk(void);
// protected: static long c_big_flags_typed_no_init<long, 82>::flag_chunk_index_to_bit_index(long);
// protected: static long c_big_flags_typed_no_init<long, 82>::bit_index_to_flag_chunk_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 82>::get_valid_mask_of_last_chunk(void);
// protected: static unsigned long c_big_flags_typed_no_init<long, 145>::get_mask_of_first_slice_of_chunk_exclusive(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 82>::get_mask_of_first_slice_of_chunk_exclusive(long);

//void game_results_initialize(void)
//{
//    mangled_ppc("?game_results_initialize@@YAXXZ");
//};

//void game_results_initialize_statistic_definitions(long, struct s_integer_statistic_definition const *)
//{
//    mangled_ppc("?game_results_initialize_statistic_definitions@@YAXJPBUs_integer_statistic_definition@@@Z");
//};

//void game_results_initialize_statistic_definitions(long, struct s_real_statistic_definition const *)
//{
//    mangled_ppc("?game_results_initialize_statistic_definitions@@YAXJPBUs_real_statistic_definition@@@Z");
//};

//void game_results_dispose(void)
//{
//    mangled_ppc("?game_results_dispose@@YAXXZ");
//};

//void game_results_initialize_for_new_map(void)
//{
//    mangled_ppc("?game_results_initialize_for_new_map@@YAXXZ");
//};

//public: unsigned __int64 c_map_variant::get_unique_id(void) const
//{
//    mangled_ppc("?get_unique_id@c_map_variant@@QBA_KXZ");
//};

//public: struct s_content_item_metadata const * c_game_engine_base_variant::get_metadata(void) const
//{
//    mangled_ppc("?get_metadata@c_game_engine_base_variant@@QBAPBUs_content_item_metadata@@XZ");
//};

//void game_results_dispose_from_old_map(void)
//{
//    mangled_ppc("?game_results_dispose_from_old_map@@YAXXZ");
//};

//bool game_results_get_game_finalized(void)
//{
//    mangled_ppc("?game_results_get_game_finalized@@YA_NXZ");
//};

//bool game_results_get_game_started(void)
//{
//    mangled_ppc("?game_results_get_game_started@@YA_NXZ");
//};

//void game_results_update(void)
//{
//    mangled_ppc("?game_results_update@@YAXXZ");
//};

//public: s_user_interface_session_player_index::s_user_interface_session_player_index(void)
//{
//    mangled_ppc("??0s_user_interface_session_player_index@@QAA@XZ");
//};

//public: void s_user_interface_session_player_index::clear(void)
//{
//    mangled_ppc("?clear@s_user_interface_session_player_index@@QAAXXZ");
//};

//void game_results_clear(void)
//{
//    mangled_ppc("?game_results_clear@@YAXXZ");
//};

//void game_results_finalize(void)
//{
//    mangled_ppc("?game_results_finalize@@YAXXZ");
//};

//void game_results_set_game_finished(void)
//{
//    mangled_ppc("?game_results_set_game_finished@@YAXXZ");
//};

//void game_results_start_recording(void)
//{
//    mangled_ppc("?game_results_start_recording@@YAXXZ");
//};

//void game_results_stop_recording(void)
//{
//    mangled_ppc("?game_results_stop_recording@@YAXXZ");
//};

//void game_results_set_recording_pause(bool)
//{
//    mangled_ppc("?game_results_set_recording_pause@@YAX_N@Z");
//};

//bool game_results_get_game_recording(void)
//{
//    mangled_ppc("?game_results_get_game_recording@@YA_NXZ");
//};

//void game_results_start_updating(void)
//{
//    mangled_ppc("?game_results_start_updating@@YAXXZ");
//};

//void game_results_stop_updating(void)
//{
//    mangled_ppc("?game_results_stop_updating@@YAXXZ");
//};

//bool game_results_get_game_updating(void)
//{
//    mangled_ppc("?game_results_get_game_updating@@YA_NXZ");
//};

//void game_results_handle_incident(long, long, long, long, long, struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?game_results_handle_incident@@YAXJJJJJABUs_damage_reporting_info@@@Z");
//};

//void game_results_notify_player_indices_changed(void)
//{
//    mangled_ppc("?game_results_notify_player_indices_changed@@YAXXZ");
//};

//void game_results_notify_active_teams_changed(void)
//{
//    mangled_ppc("?game_results_notify_active_teams_changed@@YAXXZ");
//};

//void game_results_statistic_increment(long, enum e_multiplayer_team, enum e_game_results_statistic, long)
//{
//    mangled_ppc("?game_results_statistic_increment@@YAXJW4e_multiplayer_team@@W4e_game_results_statistic@@J@Z");
//};

//void game_results_statistic_set(long, enum e_multiplayer_team, enum e_game_results_statistic, long)
//{
//    mangled_ppc("?game_results_statistic_set@@YAXJW4e_multiplayer_team@@W4e_game_results_statistic@@J@Z");
//};

//long game_results_statistic_get_direct(long, enum e_multiplayer_team, enum e_game_results_statistic)
//{
//    mangled_ppc("?game_results_statistic_get_direct@@YAJJW4e_multiplayer_team@@W4e_game_results_statistic@@@Z");
//};

//long game_results_statistic_get_current(long, enum e_multiplayer_team, enum e_game_results_statistic)
//{
//    mangled_ppc("?game_results_statistic_get_current@@YAJJW4e_multiplayer_team@@W4e_game_results_statistic@@@Z");
//};

//long game_results_get_final_statistic(long, enum e_multiplayer_team, enum e_game_results_statistic)
//{
//    mangled_ppc("?game_results_get_final_statistic@@YAJJW4e_multiplayer_team@@W4e_game_results_statistic@@@Z");
//};

//long game_results_get_final_damage_statistic(long, enum e_game_results_damage_statistic, enum e_damage_reporting_type)
//{
//    mangled_ppc("?game_results_get_final_damage_statistic@@YAJJW4e_game_results_damage_statistic@@W4e_damage_reporting_type@@@Z");
//};

//bool game_results_get_final_player_alive_at_end_game(long)
//{
//    mangled_ppc("?game_results_get_final_player_alive_at_end_game@@YA_NJ@Z");
//};

//long game_results_get_current_medal_statistic(long, long)
//{
//    mangled_ppc("?game_results_get_current_medal_statistic@@YAJJJ@Z");
//};

//long game_results_get_final_medal_statistic(long, long)
//{
//    mangled_ppc("?game_results_get_final_medal_statistic@@YAJJJ@Z");
//};

//long game_results_get_final_player_vs_player_statistic(long, long, enum e_game_results_player_vs_player_statistic)
//{
//    mangled_ppc("?game_results_get_final_player_vs_player_statistic@@YAJJJW4e_game_results_player_vs_player_statistic@@@Z");
//};

//class c_game_results const * game_results_get_current_results(void)
//{
//    mangled_ppc("?game_results_get_current_results@@YAPBVc_game_results@@XZ");
//};

//class c_game_results const * game_results_get_final_results(void)
//{
//    mangled_ppc("?game_results_get_final_results@@YAPBVc_game_results@@XZ");
//};

//enum e_game_engine_type game_results_get_game_type(void)
//{
//    mangled_ppc("?game_results_get_game_type@@YA?AW4e_game_engine_type@@XZ");
//};

//void game_results_set_final_player_score_and_standing(long, long, long)
//{
//    mangled_ppc("?game_results_set_final_player_score_and_standing@@YAXJJJ@Z");
//};

//void game_results_set_final_team_score_and_standing(enum e_multiplayer_team, long, long)
//{
//    mangled_ppc("?game_results_set_final_team_score_and_standing@@YAXW4e_multiplayer_team@@JJ@Z");
//};

//long game_results_get_final_player_score(long)
//{
//    mangled_ppc("?game_results_get_final_player_score@@YAJJ@Z");
//};

//long game_results_get_final_team_score(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_results_get_final_team_score@@YAJW4e_multiplayer_team@@@Z");
//};

//long game_results_get_final_player_standing(long)
//{
//    mangled_ppc("?game_results_get_final_player_standing@@YAJJ@Z");
//};

//long game_results_get_final_team_standing(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_results_get_final_team_standing@@YAJW4e_multiplayer_team@@@Z");
//};

//wchar_t * game_results_get_final_player_name(long)
//{
//    mangled_ppc("?game_results_get_final_player_name@@YAPA_WJ@Z");
//};

//struct s_player_identifier * game_results_get_final_player_identifier(long)
//{
//    mangled_ppc("?game_results_get_final_player_identifier@@YAPAUs_player_identifier@@J@Z");
//};

//enum e_multiplayer_team game_results_get_final_player_team_index(long)
//{
//    mangled_ppc("?game_results_get_final_player_team_index@@YA?AW4e_multiplayer_team@@J@Z");
//};

//void game_results_get_final_player_appearance(long, struct s_player_appearance *)
//{
//    mangled_ppc("?game_results_get_final_player_appearance@@YAXJPAUs_player_appearance@@@Z");
//};

//long game_results_get_final_player_skill_level(long)
//{
//    mangled_ppc("?game_results_get_final_player_skill_level@@YAJJ@Z");
//};

//void game_results_player_vs_player_statistic_increment(long, long, enum e_game_results_player_vs_player_statistic, long)
//{
//    mangled_ppc("?game_results_player_vs_player_statistic_increment@@YAXJJW4e_game_results_player_vs_player_statistic@@J@Z");
//};

//void game_results_player_vs_ai_statistic_increment(long, long, enum e_campaign_metagame_bucket_type, enum e_campaign_metagame_bucket_class, enum e_game_results_player_vs_ai_statistic, long)
//{
//    mangled_ppc("?game_results_player_vs_ai_statistic_increment@@YAXJJW4e_campaign_metagame_bucket_type@@W4e_campaign_metagame_bucket_class@@W4e_game_results_player_vs_ai_statistic@@J@Z");
//};

//void game_results_damage_statistic_increment(long, enum e_game_results_damage_statistic, enum e_damage_reporting_type, long)
//{
//    mangled_ppc("?game_results_damage_statistic_increment@@YAXJW4e_game_results_damage_statistic@@W4e_damage_reporting_type@@J@Z");
//};

//void game_results_griefing_statistic_increment(long, enum e_game_results_player_griefing_statistic, float)
//{
//    mangled_ppc("?game_results_griefing_statistic_increment@@YAXJW4e_game_results_player_griefing_statistic@@M@Z");
//};

//enum e_damage_reporting_type game_results_tracked_damage_type_from_damage_reporting_info(struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?game_results_tracked_damage_type_from_damage_reporting_info@@YA?AW4e_damage_reporting_type@@ABUs_damage_reporting_info@@@Z");
//};

//enum e_damage_reporting_modifier game_results_tracked_damage_modifier_from_damage_reporting_info(struct s_damage_reporting_info const &)
//{
//    mangled_ppc("?game_results_tracked_damage_modifier_from_damage_reporting_info@@YA?AW4e_damage_reporting_modifier@@ABUs_damage_reporting_info@@@Z");
//};

//void game_results_medal_increment(long, long, long)
//{
//    mangled_ppc("?game_results_medal_increment@@YAXJJJ@Z");
//};

//void game_results_incident_increment(long, long, long)
//{
//    mangled_ppc("?game_results_incident_increment@@YAXJJJ@Z");
//};

//void game_results_award_achievement(long, enum e_achievement)
//{
//    mangled_ppc("?game_results_award_achievement@@YAXJW4e_achievement@@@Z");
//};

//void game_results_cookies_add(long, long, enum e_cookie_award_host_authoritative_type)
//{
//    mangled_ppc("?game_results_cookies_add@@YAXJJW4e_cookie_award_host_authoritative_type@@@Z");
//};

//void game_results_commendation_increment(long, long)
//{
//    mangled_ppc("?game_results_commendation_increment@@YAXJJ@Z");
//};

//void game_results_local_cookies_add(enum e_controller_index, long, enum e_cookie_award_client_authoritative_type)
//{
//    mangled_ppc("?game_results_local_cookies_add@@YAXW4e_controller_index@@JW4e_cookie_award_client_authoritative_type@@@Z");
//};

//void game_results_local_commendation_increment(enum e_controller_index, long)
//{
//    mangled_ppc("?game_results_local_commendation_increment@@YAXW4e_controller_index@@J@Z");
//};

//void game_results_insert_event(struct s_game_results_event const *)
//{
//    mangled_ppc("?game_results_insert_event@@YAXPBUs_game_results_event@@@Z");
//};

//void game_results_insert_event(struct s_game_results_medal_event const *)
//{
//    mangled_ppc("?game_results_insert_event@@YAXPBUs_game_results_medal_event@@@Z");
//};

//enum e_damage_reporting_type game_results_get_dead_unit_weapon(long)
//{
//    mangled_ppc("?game_results_get_dead_unit_weapon@@YA?AW4e_damage_reporting_type@@J@Z");
//};

//void game_results_insert_kill_event(long, long, struct s_damage_reporting_info const &, long)
//{
//    mangled_ppc("?game_results_insert_kill_event@@YAXJJABUs_damage_reporting_info@@J@Z");
//};

//void game_results_insert_ai_kill_event(long, long, struct s_damage_reporting_info const &, long)
//{
//    mangled_ppc("?game_results_insert_ai_kill_event@@YAXJJABUs_damage_reporting_info@@J@Z");
//};

//void game_results_insert_betrayal_event(long, long, struct s_damage_reporting_info const &, long)
//{
//    mangled_ppc("?game_results_insert_betrayal_event@@YAXJJABUs_damage_reporting_info@@J@Z");
//};

//void game_results_insert_ai_betrayal_event(long, long, struct s_damage_reporting_info const &, long)
//{
//    mangled_ppc("?game_results_insert_ai_betrayal_event@@YAXJJABUs_damage_reporting_info@@J@Z");
//};

//void game_results_insert_ai_death_event(long, long, struct s_damage_reporting_info const &, long)
//{
//    mangled_ppc("?game_results_insert_ai_death_event@@YAXJJABUs_damage_reporting_info@@J@Z");
//};

//void game_results_insert_score_event(long, enum e_game_results_event_score_type, long)
//{
//    mangled_ppc("?game_results_insert_score_event@@YAXJW4e_game_results_event_score_type@@J@Z");
//};

//void game_results_insert_carry_event(long, enum e_game_results_event_carry_type, long)
//{
//    mangled_ppc("?game_results_insert_carry_event@@YAXJW4e_game_results_event_carry_type@@J@Z");
//};

//void game_results_insert_medal_event(long, long)
//{
//    mangled_ppc("?game_results_insert_medal_event@@YAXJJ@Z");
//};

//void game_results_get_incremental(struct s_game_results_incremental *)
//{
//    mangled_ppc("?game_results_get_incremental@@YAXPAUs_game_results_incremental@@@Z");
//};

//void game_results_set_incremental(struct s_game_results_incremental const *)
//{
//    mangled_ppc("?game_results_set_incremental@@YAXPBUs_game_results_incremental@@@Z");
//};

//void get_game_results_statistic_definition(struct s_integer_statistic_definition *, long, void *)
//{
//    mangled_ppc("?get_game_results_statistic_definition@@YAXPAUs_integer_statistic_definition@@JPAX@Z");
//};

//void get_game_results_player_vs_player_statistic_definition(struct s_integer_statistic_definition *, long, void *)
//{
//    mangled_ppc("?get_game_results_player_vs_player_statistic_definition@@YAXPAUs_integer_statistic_definition@@JPAX@Z");
//};

//void get_game_results_player_vs_ai_statistic_definition(struct s_integer_statistic_definition *, long, void *)
//{
//    mangled_ppc("?get_game_results_player_vs_ai_statistic_definition@@YAXPAUs_integer_statistic_definition@@JPAX@Z");
//};

//void get_game_results_damage_statistic_definitions(struct s_integer_statistic_definition *, long, void *)
//{
//    mangled_ppc("?get_game_results_damage_statistic_definitions@@YAXPAUs_integer_statistic_definition@@JPAX@Z");
//};

//void get_game_results_griefing_statistic_definition(struct s_real_statistic_definition *, long, void *)
//{
//    mangled_ppc("?get_game_results_griefing_statistic_definition@@YAXPAUs_real_statistic_definition@@JPAX@Z");
//};

//void get_game_results_reward_statistic_definition(struct s_integer_statistic_definition *, long, void *)
//{
//    mangled_ppc("?get_game_results_reward_statistic_definition@@YAXPAUs_integer_statistic_definition@@JPAX@Z");
//};

//void get_medal_statistic_definition(struct s_integer_statistic_definition *, long, void *)
//{
//    mangled_ppc("?get_medal_statistic_definition@@YAXPAUs_integer_statistic_definition@@JPAX@Z");
//};

//void get_incident_statistic_definition(struct s_integer_statistic_definition *, long, void *)
//{
//    mangled_ppc("?get_incident_statistic_definition@@YAXPAUs_integer_statistic_definition@@JPAX@Z");
//};

//void game_results_statistics_encode(class c_bitstream *, struct s_integer_statistic_update const *, long, void (*)(struct s_integer_statistic_definition *, long, void *), void *)
//{
//    mangled_ppc("?game_results_statistics_encode@@YAXPAVc_bitstream@@PBUs_integer_statistic_update@@JP6AXPAUs_integer_statistic_definition@@JPAX@Z3@Z");
//};

//bool game_results_statistics_decode(class c_bitstream *, struct s_integer_statistic_update *, long, void (*)(struct s_integer_statistic_definition *, long, void *), void *)
//{
//    mangled_ppc("?game_results_statistics_decode@@YA_NPAVc_bitstream@@PAUs_integer_statistic_update@@JP6AXPAUs_integer_statistic_definition@@JPAX@Z3@Z");
//};

//void game_results_incremental_update_encode(class c_bitstream *, struct s_game_results_incremental_update const *)
//{
//    mangled_ppc("?game_results_incremental_update_encode@@YAXPAVc_bitstream@@PBUs_game_results_incremental_update@@@Z");
//};

//bool game_results_incremental_update_decode(class c_bitstream *, struct s_game_results_incremental_update *)
//{
//    mangled_ppc("?game_results_incremental_update_decode@@YA_NPAVc_bitstream@@PAUs_game_results_incremental_update@@@Z");
//};

//bool game_results_calculate_incremental_update(struct s_game_results_incremental const *, struct s_game_results_incremental_update *)
//{
//    mangled_ppc("?game_results_calculate_incremental_update@@YA_NPBUs_game_results_incremental@@PAUs_game_results_incremental_update@@@Z");
//};

//void game_results_calculate_incremental_statistics_update(struct s_integer_statistic const *, struct s_integer_statistic const *, long, bool *, struct s_integer_statistic_update *, long)
//{
//    mangled_ppc("?game_results_calculate_incremental_statistics_update@@YAXPBUs_integer_statistic@@0JPA_NPAUs_integer_statistic_update@@J@Z");
//};

//bool game_results_incremental_update_clear_for_comparison(struct s_game_results_incremental_update *, struct s_game_results_incremental_update *)
//{
//    mangled_ppc("?game_results_incremental_update_clear_for_comparison@@YA_NPAUs_game_results_incremental_update@@0@Z");
//};

//void game_results_apply_incremental_statistics_update(struct s_integer_statistic_update const *, long, struct s_integer_statistic *, long)
//{
//    mangled_ppc("?game_results_apply_incremental_statistics_update@@YAXPBUs_integer_statistic_update@@JPAUs_integer_statistic@@J@Z");
//};

//void game_results_apply_player_configuration_update(struct s_game_results_player_data *, struct s_game_results_player_data_update const *)
//{
//    mangled_ppc("?game_results_apply_player_configuration_update@@YAXPAUs_game_results_player_data@@PBUs_game_results_player_data_update@@@Z");
//};

//void game_results_apply_incremental_update(struct s_game_results_incremental *, struct s_game_results_incremental_update const *)
//{
//    mangled_ppc("?game_results_apply_incremental_update@@YAXPAUs_game_results_incremental@@PBUs_game_results_incremental_update@@@Z");
//};

//void game_results_get_final_sorted_players_and_teams(long *const, long *, long *const, long *)
//{
//    mangled_ppc("?game_results_get_final_sorted_players_and_teams@@YAXQAJPAJ01@Z");
//};

//bool game_results_sort_players(long, long, void const *)
//{
//    mangled_ppc("?game_results_sort_players@@YA_NJJPBX@Z");
//};

//bool game_results_sort_teams(long, long, void const *)
//{
//    mangled_ppc("?game_results_sort_teams@@YA_NJJPBX@Z");
//};

//public: long c_game_results::get_first_unreferenced_machine_index(void)
//{
//    mangled_ppc("?get_first_unreferenced_machine_index@c_game_results@@QAAJXZ");
//};

//public: long c_game_results::add_machine(struct s_machine_identifier const *)
//{
//    mangled_ppc("?add_machine@c_game_results@@QAAJPBUs_machine_identifier@@@Z");
//};

//public: static struct s_machine_identifier const * c_game_results::get_local_machine_identifier(void)
//{
//    mangled_ppc("?get_local_machine_identifier@c_game_results@@SAPBUs_machine_identifier@@XZ");
//};

//public: long c_game_results::get_local_machine_index(void) const
//{
//    mangled_ppc("?get_local_machine_index@c_game_results@@QBAJXZ");
//};

//public: long c_game_results::get_machine_index(struct s_machine_identifier const *) const
//{
//    mangled_ppc("?get_machine_index@c_game_results@@QBAJPBUs_machine_identifier@@@Z");
//};

//public: long c_game_results::get_host_machine_index(void) const
//{
//    mangled_ppc("?get_host_machine_index@c_game_results@@QBAJXZ");
//};

//public: bool c_game_results::validate(void) const
//{
//    mangled_ppc("?validate@c_game_results@@QBA_NXZ");
//};

//long game_results_count_damage_statistic(long, enum e_game_results_damage_statistic, enum e_damage_reporting_breakdown_type)
//{
//    mangled_ppc("?game_results_count_damage_statistic@@YAJJW4e_game_results_damage_statistic@@W4e_damage_reporting_breakdown_type@@@Z");
//};

//long game_results_get_maximum_rounds_completed(void)
//{
//    mangled_ppc("?game_results_get_maximum_rounds_completed@@YAJXZ");
//};

//void game_results_post_game_sort_player_indices_for_game_results(long *const, long, class c_game_results const *)
//{
//    mangled_ppc("?game_results_post_game_sort_player_indices_for_game_results@@YAXQAJJPBVc_game_results@@@Z");
//};

//void game_results_post_game_mvp_sort_player_indices_for_game_results(long *const, long, class c_game_results const *)
//{
//    mangled_ppc("?game_results_post_game_mvp_sort_player_indices_for_game_results@@YAXQAJJPBVc_game_results@@@Z");
//};

//void game_results_post_game_sort_team_indices_for_game_results(long *const, long, class c_game_results const *)
//{
//    mangled_ppc("?game_results_post_game_sort_team_indices_for_game_results@@YAXQAJJPBVc_game_results@@@Z");
//};

//bool game_results_player_won_internal(long, class c_game_results const *, bool)
//{
//    mangled_ppc("?game_results_player_won_internal@@YA_NJPBVc_game_results@@_N@Z");
//};

//bool game_results_player_won(long, class c_game_results const *)
//{
//    mangled_ppc("?game_results_player_won@@YA_NJPBVc_game_results@@@Z");
//};

//bool game_results_player_won_uncontested(long, class c_game_results const *)
//{
//    mangled_ppc("?game_results_player_won_uncontested@@YA_NJPBVc_game_results@@@Z");
//};

//void game_results_notify_machine_leave_reason(struct s_machine_identifier const *, enum e_game_results_leave_reason)
//{
//    mangled_ppc("?game_results_notify_machine_leave_reason@@YAXPBUs_machine_identifier@@W4e_game_results_leave_reason@@@Z");
//};

//long get_machine_data_index_from_identifier(struct s_machine_identifier const *)
//{
//    mangled_ppc("?get_machine_data_index_from_identifier@@YAJPBUs_machine_identifier@@@Z");
//};

//void game_results_notify_only_machine_with_full_connectivity(struct s_machine_identifier const *)
//{
//    mangled_ppc("?game_results_notify_only_machine_with_full_connectivity@@YAXPBUs_machine_identifier@@@Z");
//};

//void game_results_notify_machine_on_only_team_with_full_connectivity(struct s_machine_identifier const *)
//{
//    mangled_ppc("?game_results_notify_machine_on_only_team_with_full_connectivity@@YAXPBUs_machine_identifier@@@Z");
//};

//void game_results_set_game_started(void)
//{
//    mangled_ppc("?game_results_set_game_started@@YAXXZ");
//};

//bool game_results_player_exists(long)
//{
//    mangled_ppc("?game_results_player_exists@@YA_NJ@Z");
//};

//bool game_results_team_exists(enum e_multiplayer_team)
//{
//    mangled_ppc("?game_results_team_exists@@YA_NW4e_multiplayer_team@@@Z");
//};

//void game_results_set_host(long)
//{
//    mangled_ppc("?game_results_set_host@@YAXJ@Z");
//};

//bool game_results_get_object_position(long, union real_point3d *)
//{
//    mangled_ppc("?game_results_get_object_position@@YA_NJPATreal_point3d@@@Z");
//};

//bool game_results_get_player_position(long, union real_point3d *)
//{
//    mangled_ppc("?game_results_get_player_position@@YA_NJPATreal_point3d@@@Z");
//};

//void game_results_encode_player_data(class c_bitstream *, struct s_game_results_player_data_update const *)
//{
//    mangled_ppc("?game_results_encode_player_data@@YAXPAVc_bitstream@@PBUs_game_results_player_data_update@@@Z");
//};

//void game_results_decode_player_data(class c_bitstream *, struct s_game_results_player_data_update *)
//{
//    mangled_ppc("?game_results_decode_player_data@@YAXPAVc_bitstream@@PAUs_game_results_player_data_update@@@Z");
//};

//void game_results_respond_to_single_achievement_update(long, enum e_achievement)
//{
//    mangled_ppc("?game_results_respond_to_single_achievement_update@@YAXJW4e_achievement@@@Z");
//};

//enum e_controller_index game_results_get_local_controller_from_player(class c_game_results const *, long)
//{
//    mangled_ppc("?game_results_get_local_controller_from_player@@YA?AW4e_controller_index@@PBVc_game_results@@J@Z");
//};

//void game_results_respond_to_achievement_update(long, class c_big_flags_typed_no_init<long, 256> const &)
//{
//    mangled_ppc("?game_results_respond_to_achievement_update@@YAXJABV?$c_big_flags_typed_no_init@J$0BAA@@@@Z");
//};

//void game_results_reconcile_player_rewards(void)
//{
//    mangled_ppc("?game_results_reconcile_player_rewards@@YAXXZ");
//};

//void game_results_award_achievements_from_finalized_results(class c_game_results const *)
//{
//    mangled_ppc("?game_results_award_achievements_from_finalized_results@@YAXPBVc_game_results@@@Z");
//};

//void game_results_award_player_rewards_from_finalized_results(class c_game_results *)
//{
//    mangled_ppc("?game_results_award_player_rewards_from_finalized_results@@YAXPAVc_game_results@@@Z");
//};

//void game_results_award_challenges_from_finalized_results(class c_game_results const *)
//{
//    mangled_ppc("?game_results_award_challenges_from_finalized_results@@YAXPBVc_game_results@@@Z");
//};

//void game_results_award_completion_from_finalized_results(class c_game_results const *)
//{
//    mangled_ppc("?game_results_award_completion_from_finalized_results@@YAXPBVc_game_results@@@Z");
//};

//int post_game_carnage_players_sort_proc(void const *, void const *)
//{
//    mangled_ppc("?post_game_carnage_players_sort_proc@@YAHPBX0@Z");
//};

//int post_game_carnage_teams_sort_proc(void const *, void const *)
//{
//    mangled_ppc("?post_game_carnage_teams_sort_proc@@YAHPBX0@Z");
//};

//int post_game_carnage_mvp_sort_proc(void const *, void const *)
//{
//    mangled_ppc("?post_game_carnage_mvp_sort_proc@@YAHPBX0@Z");
//};

//long game_results_get_player_index_from_player_identifier(struct s_player_identifier const *)
//{
//    mangled_ppc("?game_results_get_player_index_from_player_identifier@@YAJPBUs_player_identifier@@@Z");
//};

//void build_game_engine_snapshot(struct s_game_results_game_engine_snapshot *)
//{
//    mangled_ppc("?build_game_engine_snapshot@@YAXPAUs_game_results_game_engine_snapshot@@@Z");
//};

//void game_results_copy_current_game_variant(void)
//{
//    mangled_ppc("?game_results_copy_current_game_variant@@YAXXZ");
//};

//void game_results_randomize_completely(struct s_game_results *)
//{
//    mangled_ppc("?game_results_randomize_completely@@YAXPAUs_game_results@@@Z");
//};

//void game_results_randomize_edge_cases(struct s_game_results *)
//{
//    mangled_ppc("?game_results_randomize_edge_cases@@YAXPAUs_game_results@@@Z");
//};

//enum e_map_id random_map_id(enum e_game_mode)
//{
//    mangled_ppc("?random_map_id@@YA?AW4e_map_id@@W4e_game_mode@@@Z");
//};

//void game_results_statistics_randomize(struct s_integer_statistic *, long, void (*)(struct s_integer_statistic_definition *, long, void *), void *)
//{
//    mangled_ppc("?game_results_statistics_randomize@@YAXPAUs_integer_statistic@@JP6AXPAUs_integer_statistic_definition@@JPAX@Z2@Z");
//};

//void game_results_randomize_realistic(long)
//{
//    mangled_ppc("?game_results_randomize_realistic@@YAXJ@Z");
//};

//struct s_game_results_game_engine_snapshot const * game_results_get_game_engine_snapshot(void)
//{
//    mangled_ppc("?game_results_get_game_engine_snapshot@@YAPBUs_game_results_game_engine_snapshot@@XZ");
//};

//public: void s_game_results_game_engine_snapshot::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_game_results_game_engine_snapshot@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_game_results_game_engine_snapshot::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_game_results_game_engine_snapshot@@QAAXPAVc_bitstream@@@Z");
//};

//void game_results_get_visible_model_and_team(class c_game_results const *, enum e_multiplayer_team, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver>, enum e_multiplayer_team *, class c_enum_no_init<enum e_player_model_choice, char, 0, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?game_results_get_visible_model_and_team@@YAXPBVc_game_results@@W4e_multiplayer_team@@V?$c_enum_no_init@W4e_player_model_choice@@D$0A@$01Us_default_enum_string_resolver@@@@PAW42@PAV3@@Z");
//};

//void game_results_notify_game_end_reason(enum e_game_results_game_end_reason)
//{
//    mangled_ppc("?game_results_notify_game_end_reason@@YAXW4e_game_results_game_end_reason@@@Z");
//};

//public: class c_enum_no_init<enum e_game_results_event_score_type, char, 0, 3, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_game_results_event_score_type, char, 0, 3, struct s_default_enum_string_resolver>::operator=(enum e_game_results_event_score_type)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_game_results_event_score_type@@D$0A@$02Us_default_enum_string_resolver@@@@QAAAAV0@W4e_game_results_event_score_type@@@Z");
//};

//public: class c_enum_no_init<enum e_game_results_event_carry_type, char, 0, 5, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_game_results_event_carry_type, char, 0, 5, struct s_default_enum_string_resolver>::operator=(enum e_game_results_event_carry_type)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_game_results_event_carry_type@@D$0A@$04Us_default_enum_string_resolver@@@@QAAAAV0@W4e_game_results_event_carry_type@@@Z");
//};

//public: c_enum<enum e_game_results_event_type, char, 0, 9, struct s_default_enum_string_resolver>::c_enum<enum e_game_results_event_type, char, 0, 9, struct s_default_enum_string_resolver>(enum e_game_results_event_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_game_results_event_type@@D$0A@$08Us_default_enum_string_resolver@@@@QAA@W4e_game_results_event_type@@@Z");
//};

//public: enum e_game_results_event_type c_enum_no_init<enum e_game_results_event_type, char, 0, 9, struct s_default_enum_string_resolver>::operator enum e_game_results_event_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_game_results_event_type@@D$0A@$08Us_default_enum_string_resolver@@@@QBA?AW4e_game_results_event_type@@XZ");
//};

//public: c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>::c_enum<enum e_game_engine_type, unsigned char, 0, 5, struct s_game_engine_type_string_resolver>(enum e_game_engine_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_game_engine_type@@E$0A@$04Us_game_engine_type_string_resolver@@@@QAA@W4e_game_engine_type@@@Z");
//};

//public: c_enum<enum e_game_results_game_end_reason, unsigned char, 0, 15, struct s_default_enum_string_resolver>::c_enum<enum e_game_results_game_end_reason, unsigned char, 0, 15, struct s_default_enum_string_resolver>(enum e_game_results_game_end_reason)
//{
//    mangled_ppc("??0?$c_enum@W4e_game_results_game_end_reason@@E$0A@$0P@Us_default_enum_string_resolver@@@@QAA@W4e_game_results_game_end_reason@@@Z");
//};

//public: c_big_flags<145>::c_big_flags<145>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$0JB@@@QAA@XZ");
//};

//public: c_big_flags<82>::c_big_flags<82>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$0FC@@@QAA@XZ");
//};

//public: bool c_big_flags_typed_no_init<long, 256>::operator!=(class c_big_flags_typed_no_init<long, 256> const &) const
//{
//    mangled_ppc("??9?$c_big_flags_typed_no_init@J$0BAA@@@QBA_NABV0@@Z");
//};

//public: bool c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_player_data_update_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_player_data_update_bit@@E$05Us_default_enum_string_resolver@@@@QBA_NW4e_player_data_update_bit@@@Z");
//};

//public: void c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::set(enum e_player_data_update_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_player_data_update_bit@@E$05Us_default_enum_string_resolver@@@@QAAXW4e_player_data_update_bit@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::test_range(enum e_player_data_update_bit, enum e_player_data_update_bit) const
//{
//    mangled_ppc("?test_range@?$c_flags_no_init@W4e_player_data_update_bit@@E$05Us_default_enum_string_resolver@@@@QBA_NW4e_player_data_update_bit@@0@Z");
//};

//public: bool c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??8?$c_flags_no_init@W4e_player_data_update_bit@@E$05Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: bool c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::test(enum e_machine_data_update_bit) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_machine_data_update_bit@@E$06Us_default_enum_string_resolver@@@@QBA_NW4e_machine_data_update_bit@@@Z");
//};

//public: void c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::set(enum e_machine_data_update_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_machine_data_update_bit@@E$06Us_default_enum_string_resolver@@@@QAAXW4e_machine_data_update_bit@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??8?$c_flags_no_init@W4e_machine_data_update_bit@@E$06Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: bool c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::test(char) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@DE$05Us_default_enum_string_resolver@@@@QBA_ND@Z");
//};

//public: bool c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??8?$c_flags_no_init@DE$05Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: enum e_multiplayer_team & s_static_array<enum e_multiplayer_team, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@W4e_multiplayer_team@@$07@@QAAAAW4e_multiplayer_team@@J@Z");
//};

//public: struct s_game_results_local_player_rewards_cache_per_controller & s_static_array<struct s_game_results_local_player_rewards_cache_per_controller, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@Us_game_results_local_player_rewards_cache_per_controller@@$03@@QAAAAUs_game_results_local_player_rewards_cache_per_controller@@W4e_controller_index@@@Z");
//};

//public: struct s_integer_statistic & s_static_array<struct s_integer_statistic, 142>::operator[]<enum e_game_results_player_rewards_statistic>(enum e_game_results_player_rewards_statistic)
//{
//    mangled_ppc("??$?AW4e_game_results_player_rewards_statistic@@@?$s_static_array@Us_integer_statistic@@$0IO@@@QAAAAUs_integer_statistic@@W4e_game_results_player_rewards_statistic@@@Z");
//};

//public: void c_big_flags_typed_no_init<long, 145>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0JB@@@QAAXJ_N@Z");
//};

//public: c_big_flags_typed<long, 145>::c_big_flags_typed<long, 145>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$0JB@@@QAA@XZ");
//};

//class c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver> bit_block_flags_build<class c_big_flags<145> >(class c_big_flags<145>, long, long)
//{
//    mangled_ppc("??$bit_block_flags_build@V?$c_big_flags@$0JB@@@@@YA?AV?$c_flags@JK$0CA@Us_default_enum_string_resolver@@@@V?$c_big_flags@$0JB@@@JJ@Z");
//};

//class c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver> bit_block_flags_build<class c_big_flags_typed_no_init<long, 256> >(class c_big_flags_typed_no_init<long, 256>, long, long)
//{
//    mangled_ppc("??$bit_block_flags_build@V?$c_big_flags_typed_no_init@J$0BAA@@@@@YA?AV?$c_flags@JK$0CA@Us_default_enum_string_resolver@@@@V?$c_big_flags_typed_no_init@J$0BAA@@@JJ@Z");
//};

//public: void c_big_flags_typed_no_init<long, 82>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0FC@@@QAAXJ_N@Z");
//};

//public: c_big_flags_typed<long, 82>::c_big_flags_typed<long, 82>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$0FC@@@QAA@XZ");
//};

//class c_flags<long, unsigned long, 32, struct s_default_enum_string_resolver> bit_block_flags_build<class c_big_flags<82> >(class c_big_flags<82>, long, long)
//{
//    mangled_ppc("??$bit_block_flags_build@V?$c_big_flags@$0FC@@@@@YA?AV?$c_flags@JK$0CA@Us_default_enum_string_resolver@@@@V?$c_big_flags@$0FC@@@JJ@Z");
//};

//void game_results_statistics_encode<6>(class c_bitstream *, struct s_real_statistic_array_update<6> const *, void (*)(struct s_real_statistic_definition *, long, void *), void *)
//{
//    mangled_ppc("??$game_results_statistics_encode@$05@@YAXPAVc_bitstream@@PBU?$s_real_statistic_array_update@$05@@P6AXPAUs_real_statistic_definition@@JPAX@Z3@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_game_results_leave_reason@@E$0A@$0BB@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_game_results_leave_reason@@E$0A@$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//bool game_results_statistics_decode<6>(class c_bitstream *, struct s_real_statistic_array_update<6> *, void (*)(struct s_real_statistic_definition *, long, void *), void *)
//{
//    mangled_ppc("??$game_results_statistics_decode@$05@@YA_NPAVc_bitstream@@PAU?$s_real_statistic_array_update@$05@@P6AXPAUs_real_statistic_definition@@JPAX@Z3@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_game_results_leave_reason@@E$0A@$0BB@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_game_results_leave_reason@@E$0A@$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//bool struct_is_zeroed<struct s_game_results_incremental_update>(struct s_game_results_incremental_update const *)
//{
//    mangled_ppc("??$struct_is_zeroed@Us_game_results_incremental_update@@@@YA_NPBUs_game_results_incremental_update@@@Z");
//};

//void game_results_calculate_incremental_statistics_update<6>(struct s_real_statistic_array<6> const *, struct s_real_statistic_array<6> const *, struct s_real_statistic_array_update<6> *)
//{
//    mangled_ppc("??$game_results_calculate_incremental_statistics_update@$05@@YAXPBU?$s_real_statistic_array@$05@@0PAU?$s_real_statistic_array_update@$05@@@Z");
//};

//void game_results_apply_incremental_statistics_update<6>(struct s_real_statistic_array_update<6> const *, struct s_real_statistic_array<6> *)
//{
//    mangled_ppc("??$game_results_apply_incremental_statistics_update@$05@@YAXPBU?$s_real_statistic_array_update@$05@@PAU?$s_real_statistic_array@$05@@@Z");
//};

//public: struct s_integer_statistic & s_static_array<struct s_integer_statistic, 142>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_integer_statistic@@$0IO@@@QAAAAUs_integer_statistic@@J@Z");
//};

//void _random_flags<class c_flags<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver> >(unsigned long *, char const *, char const *, unsigned long, class c_flags<enum e_game_matchmaking_options_flags, unsigned char, 6, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$_random_flags@V?$c_flags@W4e_game_matchmaking_options_flags@@E$05Us_default_enum_string_resolver@@@@@@YAXPAKPBD1KPAV?$c_flags@W4e_game_matchmaking_options_flags@@E$05Us_default_enum_string_resolver@@@@@Z");
//};

//void _random_flags<class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> >(unsigned long *, char const *, char const *, unsigned long, class c_flags<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$_random_flags@V?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@@@YAXPAKPBD1KPAV?$c_flags@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//void _random_flags<class c_big_flags_typed_no_init<long, 256> >(unsigned long *, char const *, char const *, unsigned long, class c_big_flags_typed_no_init<long, 256> *)
//{
//    mangled_ppc("??$_random_flags@V?$c_big_flags_typed_no_init@J$0BAA@@@@@YAXPAKPBD1KPAV?$c_big_flags_typed_no_init@J$0BAA@@@@Z");
//};

//void _random_flags<class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> >(unsigned long *, char const *, char const *, unsigned long, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$_random_flags@V?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@@@YAXPAKPBD1KPAV?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//void game_results_statistics_randomize<6>(struct s_real_statistic_array<6> *, void (*)(struct s_real_statistic_definition *, long, void *), void *)
//{
//    mangled_ppc("??$game_results_statistics_randomize@$05@@YAXPAU?$s_real_statistic_array@$05@@P6AXPAUs_real_statistic_definition@@JPAX@Z2@Z");
//};

//public: bool c_enum_no_init<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_game_results_leave_reason@@E$0A@$0BB@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_game_results_leave_reason@@E$0A@$0BB@Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 256>::operator==(class c_big_flags_typed_no_init<long, 256> const &) const
//{
//    mangled_ppc("??8?$c_big_flags_typed_no_init@J$0BAA@@@QBA_NABV0@@Z");
//};

//public: class c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver> c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??I?$c_flags_no_init@W4e_player_data_update_bit@@E$05Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: static class c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver> c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_player_data_update_bit, enum e_player_data_update_bit)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@W4e_player_data_update_bit@@E$05Us_default_enum_string_resolver@@@@SA?AV1@W4e_player_data_update_bit@@0@Z");
//};

//public: static bool c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_player_data_update_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_player_data_update_bit@@E$05Us_default_enum_string_resolver@@@@SA_NW4e_player_data_update_bit@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_data_update_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_player_data_update_bit@@E$05Us_default_enum_string_resolver@@@@CAEW4e_player_data_update_bit@@@Z");
//};

//public: static bool c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_machine_data_update_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_machine_data_update_bit@@E$06Us_default_enum_string_resolver@@@@SA_NW4e_machine_data_update_bit@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_machine_data_update_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_machine_data_update_bit@@E$06Us_default_enum_string_resolver@@@@CAEW4e_machine_data_update_bit@@@Z");
//};

//public: void c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::set(char, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@DE$05Us_default_enum_string_resolver@@@@QAAXD_N@Z");
//};

//public: static bool c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(char)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@DE$05Us_default_enum_string_resolver@@@@SA_ND@Z");
//};

//private: static unsigned char c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(char)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@DE$05Us_default_enum_string_resolver@@@@CAED@Z");
//};

//public: static bool s_static_array<enum e_multiplayer_team, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@W4e_multiplayer_team@@$07@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_game_results_local_player_rewards_cache_per_controller, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@Us_game_results_local_player_rewards_cache_per_controller@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: static bool s_static_array<struct s_integer_statistic, 142>::valid<enum e_game_results_player_rewards_statistic>(enum e_game_results_player_rewards_statistic)
//{
//    mangled_ppc("??$valid@W4e_game_results_player_rewards_statistic@@@?$s_static_array@Us_integer_statistic@@$0IO@@@SA_NW4e_game_results_player_rewards_statistic@@@Z");
//};

//public: void c_big_flags_typed_no_init<long, 145>::clear(void)
//{
//    mangled_ppc("?clear@?$c_big_flags_typed_no_init@J$0JB@@@QAAXXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 145>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_big_flags_typed_no_init@J$0JB@@@QBA_NXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 145>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0JB@@@QBA_NJ@Z");
//};

//public: static bool c_big_flags_typed_no_init<long, 145>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0JB@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 145>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0JB@@@QBA_NXZ");
//};

//public: void c_big_flags_typed_no_init<long, 82>::clear(void)
//{
//    mangled_ppc("?clear@?$c_big_flags_typed_no_init@J$0FC@@@QAAXXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 82>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_big_flags_typed_no_init@J$0FC@@@QBA_NXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 82>::test(long) const
//{
//    mangled_ppc("?test@?$c_big_flags_typed_no_init@J$0FC@@@QBA_NJ@Z");
//};

//public: static bool c_big_flags_typed_no_init<long, 82>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0FC@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 82>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0FC@@@QBA_NXZ");
//};

//public: void c_bitstream::write_flags<class c_flags<char, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags<char, unsigned char, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@DE$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@DE$05Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver> >(class c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_game_results_leave_reason@@E$0A@$0BB@Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_game_results_leave_reason@@E$0A@$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<char, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags<char, unsigned char, 6, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@DE$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@DE$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_game_results_leave_reason c_enum_no_init<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_game_results_leave_reason@@E$0A@$0BB@Us_default_enum_string_resolver@@@@SA?AW4e_game_results_leave_reason@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_game_results_leave_reason@@E$0A@$0BB@Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: static bool s_static_array<struct s_integer_statistic, 142>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_integer_statistic@@$0IO@@@SA_NJ@Z");
//};

//public: void c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_player_data_update_bit@@E$05Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: unsigned char c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@DE$05Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@DE$05Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 145>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0JB@@@KAKJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 82>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0FC@@@KAKJ@Z");
//};

//public: bool c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_player_data_update_bit@@E$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@DE$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//protected: static long c_big_flags_typed_no_init<long, 145>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0JB@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 145>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0JB@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 145>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0JB@@@KAKXZ");
//};

//protected: static long c_big_flags_typed_no_init<long, 82>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0FC@@@KAJJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 82>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0FC@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 82>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0FC@@@KAKXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 145>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0JB@@@KAKJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 82>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0FC@@@KAKJ@Z");
//};

