/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void matchmaking_arbitration_nonce_encode_function(class c_bitstream *, void const *, long);
// bool matchmaking_arbitration_nonce_decode_function(class c_bitstream *, void *, long);
// void host_selected_encode_function(class c_bitstream *, void const *, long);
// bool host_selected_decode_function(class c_bitstream *, void *, long);
// void matchmaking_hopper_list_encode_function(class c_bitstream *, void const *, long);
// bool matchmaking_hopper_list_decode_function(class c_bitstream *, void *, long);
// void matchmaking_requested_hopper_encode_function(class c_bitstream *, void const *, long);
// bool matchmaking_requested_hopper_decode_function(class c_bitstream *, void *, long);
// void matchmaking_hopper_encode_function(class c_bitstream *, void const *, long);
// bool matchmaking_hopper_decode_function(class c_bitstream *, void *, long);
// void matchmaking_abort_requested_encode_function(class c_bitstream *, void const *, long);
// bool matchmaking_abort_requested_decode_function(class c_bitstream *, void *, long);
// void matchmaking_preferences_encode_function(class c_bitstream *, void const *, long);
// bool matchmaking_preferences_decode_function(class c_bitstream *, void *, long);
// void matchmaking_progress_encode_searching_for_match(class c_bitstream *, struct s_replicated_life_cycle_matchmaking_progress_searching_for_match const *);
// bool matchmaking_progress_decode_searching_for_match(class c_bitstream *, struct s_replicated_life_cycle_matchmaking_progress_searching_for_match *);
// void matchmaking_progress_encode_assembling_match(class c_bitstream *, struct s_replicated_life_cycle_matchmaking_progress_assembling_match const *);
// bool matchmaking_progress_decode_assembling_match(class c_bitstream *, struct s_replicated_life_cycle_matchmaking_progress_assembling_match *);
// void matchmaking_progress_encode_configuring_match(class c_bitstream *, struct s_replicated_life_cycle_matchmaking_progress_configuring_match const *);
// bool matchmaking_progress_decode_configuring_match(class c_bitstream *, struct s_replicated_life_cycle_matchmaking_progress_configuring_match *);
// void matchmaking_progress_encode_post_match(class c_bitstream *, struct s_replicated_life_cycle_progress_post_match const *);
// bool matchmaking_progress_decode_post_match(class c_bitstream *, struct s_replicated_life_cycle_progress_post_match *);
// void matchmaking_progress_encode_function(class c_bitstream *, void const *, long);
// bool matchmaking_progress_decode_function(class c_bitstream *, void *, long);
// void matchmaking_progress_search_criteria_encode_function(class c_bitstream *, void const *, long);
// bool matchmaking_progress_search_criteria_decode_function(class c_bitstream *, void *, long);
// void matchmaking_assembly_peer_evict_mask_encode_function(class c_bitstream *, void const *, long);
// bool matchmaking_assembly_peer_evict_mask_decode_function(class c_bitstream *, void *, long);
// public: virtual bool c_network_session_parameter_matchmaking_rematch_data::request_change(struct s_network_session_parameter_matchmaking_rematch_data const *);
// private: virtual bool c_network_session_parameter_matchmaking_rematch_data::handle_change_request_payload(void const *);
// private: bool c_network_session_parameter_matchmaking_rematch_data::change_request_data_valid(struct s_network_session_parameter_matchmaking_rematch_data const *);
// void matchmaking_rematch_encode_function(class c_bitstream *, void const *, long);
// bool matchmaking_rematch_decode_function(class c_bitstream *, void *, long);
// void matchmaking_suppress_progress_encode_function(class c_bitstream *, void const *, long);
// bool matchmaking_suppress_progress_decode_function(class c_bitstream *, void *, long);
// public: bool c_network_session_parameter_session_messaging::set(enum e_network_session_parameter_session_messaging_type);
// public: long c_network_session_membership::get_player_sequence_number(void) const;
// void session_messaging_encode_function(class c_bitstream *, void const *, long);
// bool session_messaging_decode_function(class c_bitstream *, void *, long);
// void matchmaking_hopper_statistics_encode_function(class c_bitstream *, void const *, long);
// bool matchmaking_hopper_statistics_decode_function(class c_bitstream *, void *, long);
// void matchmaking_tip_encode_function(class c_bitstream *, void const *, long);
// bool matchmaking_tip_decode_function(class c_bitstream *, void *, long);
// public: virtual bool c_network_session_parameter_matchmaking_voting_results::request_change(struct s_network_session_parameter_matchmaking_voting_results const *);
// private: virtual bool c_network_session_parameter_matchmaking_voting_results::handle_change_request_payload(void const *);
// private: bool c_network_session_parameter_matchmaking_voting_results::change_request_data_valid(struct s_network_session_parameter_matchmaking_voting_results const *);
// void matchmaking_voting_results_encode_function(class c_bitstream *, void const *, long);
// bool matchmaking_voting_results_decode_function(class c_bitstream *, void *, long);
// void matchmaking_voting_rounds_encode_function(class c_bitstream *, void const *, long);
// void matchmaking_voting_option_encode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_option const *);
// void matchmaking_voting_round_encode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_round const *);
// bool matchmaking_voting_rounds_decode_function(class c_bitstream *, void *, long);
// bool matchmaking_voting_option_decode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_option *);
// bool matchmaking_voting_round_decode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_round *);
// void matchmaking_voting_descriptions_encode_function(class c_bitstream *, void const *, long);
// void matchmaking_voting_description_encode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_description const *);
// void matchmaking_voting_description_file_encode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_description_file const *);
// bool matchmaking_voting_descriptions_decode_function(class c_bitstream *, void *, long);
// bool matchmaking_voting_description_decode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_description *);
// bool matchmaking_voting_description_file_decode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_description_file *);
// void matchmaking_game_configuration_encode_function(class c_bitstream *, void const *, long);
// bool matchmaking_game_configuration_decode_function(class c_bitstream *, void *, long);
// public: bool c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_matchmaking_search_query_state) const;
// public: enum e_life_cycle_matchmaking_progress_type c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver>::operator enum e_life_cycle_matchmaking_progress_type(void) const;
// public: unsigned short c_flags_no_init<unsigned char, unsigned short, 16, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<unsigned char, unsigned short, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// public: long c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::count_set(void) const;
// public: unsigned long c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_bitstream::write_valid_index<64, unsigned short>(char const *, unsigned short);
// public: void c_bitstream::write_valid_index<64, long>(char const *, long);
// public: void c_bitstream::write_enum<class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: long c_bitstream::read_valid_index<64>(char const *);
// public: void c_bitstream::read_enum<class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_valid_index<32, unsigned char>(char const *, unsigned char);
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_flags<class c_flags<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_flags<class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>);
// public: long c_bitstream::read_valid_index<32>(char const *);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_flags<class c_flags<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_flags<class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: struct s_replicated_life_cycle_matchmaking_query_result const & s_static_array<struct s_replicated_life_cycle_matchmaking_query_result, 25>::operator[]<long>(long) const;
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> *);
// public: struct s_replicated_life_cycle_matchmaking_query_result & s_static_array<struct s_replicated_life_cycle_matchmaking_query_result, 25>::operator[]<long>(long);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_valid_index<12, long>(char const *, long);
// public: void c_bitstream::write_valid_index<3, long>(char const *, long);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver> *);
// public: long c_bitstream::read_valid_index<12>(char const *);
// public: long c_bitstream::read_valid_index<3>(char const *);
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_flags<class c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_flags<class c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_flags<class c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_index<4, enum e_campaign_difficulty_level>(char const *, enum e_campaign_difficulty_level);
// public: void c_bitstream::write_non_zero_count<3, long>(char const *, long);
// public: long c_bitstream::read_non_zero_count<3>(char const *);
// public: void c_bitstream::write_non_zero_count<12, long>(char const *, long);
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>);
// public: long c_bitstream::read_non_zero_count<12>(char const *);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_flags<class c_flags<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver> *);
// public: struct s_network_session_parameter_matchmaking_voting_description const & s_static_array<struct s_network_session_parameter_matchmaking_voting_description, 3>::operator[]<long>(long) const;
// public: void c_bitstream::write_flags<class c_flags<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver> *);
// public: enum e_hopper_player_investment_category c_enum_no_init<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_hopper_player_investment_category(void) const;
// public: bool c_enum_no_init<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: bool c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver>::set_raw_value(enum e_posse_formation);
// public: bool c_enum_no_init<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: bool c_enum_no_init<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: bool c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: bool c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>::set_raw_value(enum e_matchmaking_load_failure_type);
// public: enum e_replicated_life_cycle_matchmaking_query_result_state c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_replicated_life_cycle_matchmaking_query_result_state(void) const;
// public: bool c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: enum e_matchmaking_search_query_state c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_matchmaking_search_query_state(void) const;
// public: bool c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: bool c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>::set_raw_value(enum e_matchmaking_configuring_match_state);
// public: bool c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver>::set_raw_value(enum e_life_cycle_matchmaking_progress_type);
// public: unsigned long c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: bool c_flags_no_init<unsigned char, unsigned short, 16, struct s_default_enum_string_resolver>::valid(void) const;
// public: unsigned short c_flags_no_init<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set_unsafe(unsigned short);
// public: void c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// public: unsigned char c_flags_no_init<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// long required_encoding_bits_for_enum<class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: static enum e_hopper_game_type c_enum_no_init<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static enum e_hopper_player_investment_category c_enum_no_init<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> >(class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>);
// public: static enum e_posse_formation c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static enum e_posse_formation c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static enum e_game_engine_team_options_model_override_type c_enum_no_init<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static enum e_hopper_team_allegiance c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: static bool s_static_array<struct s_replicated_life_cycle_matchmaking_query_result, 25>::valid<long>(long);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>);
// public: static enum e_matchmaking_search_query_state c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static enum e_replicated_life_cycle_matchmaking_query_result_state c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>);
// public: static enum e_matchmaking_configuring_match_state c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static enum e_matchmaking_configuring_match_state c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver>);
// public: static enum e_life_cycle_matchmaking_progress_type c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static enum e_life_cycle_matchmaking_progress_type c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: unsigned char c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>);
// public: static enum e_matchmaking_load_failure_type c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static enum e_matchmaking_load_failure_type c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: unsigned char c_flags_no_init<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: bool c_flags_no_init<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid(void) const;
// public: bool c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::valid(void) const;
// public: bool c_flags_no_init<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid(void) const;
// public: bool c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::valid(void) const;
// public: bool c_flags_no_init<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned long c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(unsigned long);
// private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(unsigned long);

//void matchmaking_arbitration_nonce_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_arbitration_nonce_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool matchmaking_arbitration_nonce_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_arbitration_nonce_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void host_selected_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?host_selected_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool host_selected_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?host_selected_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void matchmaking_hopper_list_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_hopper_list_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool matchmaking_hopper_list_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_hopper_list_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void matchmaking_requested_hopper_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_requested_hopper_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool matchmaking_requested_hopper_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_requested_hopper_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void matchmaking_hopper_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_hopper_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool matchmaking_hopper_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_hopper_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void matchmaking_abort_requested_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_abort_requested_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool matchmaking_abort_requested_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_abort_requested_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void matchmaking_preferences_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_preferences_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool matchmaking_preferences_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_preferences_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void matchmaking_progress_encode_searching_for_match(class c_bitstream *, struct s_replicated_life_cycle_matchmaking_progress_searching_for_match const *)
//{
//    mangled_ppc("?matchmaking_progress_encode_searching_for_match@@YAXPAVc_bitstream@@PBUs_replicated_life_cycle_matchmaking_progress_searching_for_match@@@Z");
//};

//bool matchmaking_progress_decode_searching_for_match(class c_bitstream *, struct s_replicated_life_cycle_matchmaking_progress_searching_for_match *)
//{
//    mangled_ppc("?matchmaking_progress_decode_searching_for_match@@YA_NPAVc_bitstream@@PAUs_replicated_life_cycle_matchmaking_progress_searching_for_match@@@Z");
//};

//void matchmaking_progress_encode_assembling_match(class c_bitstream *, struct s_replicated_life_cycle_matchmaking_progress_assembling_match const *)
//{
//    mangled_ppc("?matchmaking_progress_encode_assembling_match@@YAXPAVc_bitstream@@PBUs_replicated_life_cycle_matchmaking_progress_assembling_match@@@Z");
//};

//bool matchmaking_progress_decode_assembling_match(class c_bitstream *, struct s_replicated_life_cycle_matchmaking_progress_assembling_match *)
//{
//    mangled_ppc("?matchmaking_progress_decode_assembling_match@@YA_NPAVc_bitstream@@PAUs_replicated_life_cycle_matchmaking_progress_assembling_match@@@Z");
//};

//void matchmaking_progress_encode_configuring_match(class c_bitstream *, struct s_replicated_life_cycle_matchmaking_progress_configuring_match const *)
//{
//    mangled_ppc("?matchmaking_progress_encode_configuring_match@@YAXPAVc_bitstream@@PBUs_replicated_life_cycle_matchmaking_progress_configuring_match@@@Z");
//};

//bool matchmaking_progress_decode_configuring_match(class c_bitstream *, struct s_replicated_life_cycle_matchmaking_progress_configuring_match *)
//{
//    mangled_ppc("?matchmaking_progress_decode_configuring_match@@YA_NPAVc_bitstream@@PAUs_replicated_life_cycle_matchmaking_progress_configuring_match@@@Z");
//};

//void matchmaking_progress_encode_post_match(class c_bitstream *, struct s_replicated_life_cycle_progress_post_match const *)
//{
//    mangled_ppc("?matchmaking_progress_encode_post_match@@YAXPAVc_bitstream@@PBUs_replicated_life_cycle_progress_post_match@@@Z");
//};

//bool matchmaking_progress_decode_post_match(class c_bitstream *, struct s_replicated_life_cycle_progress_post_match *)
//{
//    mangled_ppc("?matchmaking_progress_decode_post_match@@YA_NPAVc_bitstream@@PAUs_replicated_life_cycle_progress_post_match@@@Z");
//};

//void matchmaking_progress_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_progress_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool matchmaking_progress_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_progress_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void matchmaking_progress_search_criteria_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_progress_search_criteria_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool matchmaking_progress_search_criteria_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_progress_search_criteria_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void matchmaking_assembly_peer_evict_mask_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_assembly_peer_evict_mask_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool matchmaking_assembly_peer_evict_mask_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_assembly_peer_evict_mask_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//public: virtual bool c_network_session_parameter_matchmaking_rematch_data::request_change(struct s_network_session_parameter_matchmaking_rematch_data const *)
//{
//    mangled_ppc("?request_change@c_network_session_parameter_matchmaking_rematch_data@@UAA_NPBUs_network_session_parameter_matchmaking_rematch_data@@@Z");
//};

//private: virtual bool c_network_session_parameter_matchmaking_rematch_data::handle_change_request_payload(void const *)
//{
//    mangled_ppc("?handle_change_request_payload@c_network_session_parameter_matchmaking_rematch_data@@EAA_NPBX@Z");
//};

//private: bool c_network_session_parameter_matchmaking_rematch_data::change_request_data_valid(struct s_network_session_parameter_matchmaking_rematch_data const *)
//{
//    mangled_ppc("?change_request_data_valid@c_network_session_parameter_matchmaking_rematch_data@@AAA_NPBUs_network_session_parameter_matchmaking_rematch_data@@@Z");
//};

//void matchmaking_rematch_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_rematch_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool matchmaking_rematch_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_rematch_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void matchmaking_suppress_progress_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_suppress_progress_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool matchmaking_suppress_progress_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_suppress_progress_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//public: bool c_network_session_parameter_session_messaging::set(enum e_network_session_parameter_session_messaging_type)
//{
//    mangled_ppc("?set@c_network_session_parameter_session_messaging@@QAA_NW4e_network_session_parameter_session_messaging_type@@@Z");
//};

//public: long c_network_session_membership::get_player_sequence_number(void) const
//{
//    mangled_ppc("?get_player_sequence_number@c_network_session_membership@@QBAJXZ");
//};

//void session_messaging_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?session_messaging_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool session_messaging_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?session_messaging_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void matchmaking_hopper_statistics_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_hopper_statistics_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool matchmaking_hopper_statistics_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_hopper_statistics_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void matchmaking_tip_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_tip_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool matchmaking_tip_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_tip_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//public: virtual bool c_network_session_parameter_matchmaking_voting_results::request_change(struct s_network_session_parameter_matchmaking_voting_results const *)
//{
//    mangled_ppc("?request_change@c_network_session_parameter_matchmaking_voting_results@@UAA_NPBUs_network_session_parameter_matchmaking_voting_results@@@Z");
//};

//private: virtual bool c_network_session_parameter_matchmaking_voting_results::handle_change_request_payload(void const *)
//{
//    mangled_ppc("?handle_change_request_payload@c_network_session_parameter_matchmaking_voting_results@@EAA_NPBX@Z");
//};

//private: bool c_network_session_parameter_matchmaking_voting_results::change_request_data_valid(struct s_network_session_parameter_matchmaking_voting_results const *)
//{
//    mangled_ppc("?change_request_data_valid@c_network_session_parameter_matchmaking_voting_results@@AAA_NPBUs_network_session_parameter_matchmaking_voting_results@@@Z");
//};

//void matchmaking_voting_results_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_voting_results_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool matchmaking_voting_results_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_voting_results_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//void matchmaking_voting_rounds_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_voting_rounds_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//void matchmaking_voting_option_encode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_option const *)
//{
//    mangled_ppc("?matchmaking_voting_option_encode_function@@YAXPAVc_bitstream@@PBUs_network_session_parameter_matchmaking_voting_option@@@Z");
//};

//void matchmaking_voting_round_encode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_round const *)
//{
//    mangled_ppc("?matchmaking_voting_round_encode_function@@YAXPAVc_bitstream@@PBUs_network_session_parameter_matchmaking_voting_round@@@Z");
//};

//bool matchmaking_voting_rounds_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_voting_rounds_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//bool matchmaking_voting_option_decode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_option *)
//{
//    mangled_ppc("?matchmaking_voting_option_decode_function@@YA_NPAVc_bitstream@@PAUs_network_session_parameter_matchmaking_voting_option@@@Z");
//};

//bool matchmaking_voting_round_decode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_round *)
//{
//    mangled_ppc("?matchmaking_voting_round_decode_function@@YA_NPAVc_bitstream@@PAUs_network_session_parameter_matchmaking_voting_round@@@Z");
//};

//void matchmaking_voting_descriptions_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_voting_descriptions_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//void matchmaking_voting_description_encode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_description const *)
//{
//    mangled_ppc("?matchmaking_voting_description_encode_function@@YAXPAVc_bitstream@@PBUs_network_session_parameter_matchmaking_voting_description@@@Z");
//};

//void matchmaking_voting_description_file_encode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_description_file const *)
//{
//    mangled_ppc("?matchmaking_voting_description_file_encode_function@@YAXPAVc_bitstream@@PBUs_network_session_parameter_matchmaking_voting_description_file@@@Z");
//};

//bool matchmaking_voting_descriptions_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_voting_descriptions_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//bool matchmaking_voting_description_decode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_description *)
//{
//    mangled_ppc("?matchmaking_voting_description_decode_function@@YA_NPAVc_bitstream@@PAUs_network_session_parameter_matchmaking_voting_description@@@Z");
//};

//bool matchmaking_voting_description_file_decode_function(class c_bitstream *, struct s_network_session_parameter_matchmaking_voting_description_file *)
//{
//    mangled_ppc("?matchmaking_voting_description_file_decode_function@@YA_NPAVc_bitstream@@PAUs_network_session_parameter_matchmaking_voting_description_file@@@Z");
//};

//void matchmaking_game_configuration_encode_function(class c_bitstream *, void const *, long)
//{
//    mangled_ppc("?matchmaking_game_configuration_encode_function@@YAXPAVc_bitstream@@PBXJ@Z");
//};

//bool matchmaking_game_configuration_decode_function(class c_bitstream *, void *, long)
//{
//    mangled_ppc("?matchmaking_game_configuration_decode_function@@YA_NPAVc_bitstream@@PAXJ@Z");
//};

//public: bool c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_matchmaking_search_query_state) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_matchmaking_search_query_state@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_matchmaking_search_query_state@@@Z");
//};

//public: enum e_life_cycle_matchmaking_progress_type c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver>::operator enum e_life_cycle_matchmaking_progress_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_life_cycle_matchmaking_progress_type@@W41@$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_life_cycle_matchmaking_progress_type@@XZ");
//};

//public: unsigned short c_flags_no_init<unsigned char, unsigned short, 16, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@EG$0BA@Us_default_enum_string_resolver@@@@QBAGXZ");
//};

//public: void c_flags_no_init<unsigned char, unsigned short, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@EG$0BA@Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//public: long c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@KK$0BA@Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: unsigned long c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@KK$0BA@Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: void c_bitstream::write_valid_index<64, unsigned short>(char const *, unsigned short)
//{
//    mangled_ppc("??$write_valid_index@$0EA@G@c_bitstream@@QAAXPBDG@Z");
//};

//public: void c_bitstream::write_valid_index<64, long>(char const *, long)
//{
//    mangled_ppc("??$write_valid_index@$0EA@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_hopper_game_type@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_hopper_game_type@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_hopper_player_investment_category@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_hopper_player_investment_category@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_bitstream::read_valid_index<64>(char const *)
//{
//    mangled_ppc("??$read_valid_index@$0EA@@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_hopper_game_type@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_hopper_game_type@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_hopper_player_investment_category@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_hopper_player_investment_category@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_valid_index<32, unsigned char>(char const *, unsigned char)
//{
//    mangled_ppc("??$write_valid_index@$0CA@E@c_bitstream@@QAAXPBDE@Z");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_posse_formation@@W41@$0A@$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_posse_formation@@W41@$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_network_session_matchmaking_hopper_flags@@G$08Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_network_session_matchmaking_hopper_flags@@G$08Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_hopper_team_allegiance@@E$0A@$07Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_hopper_team_allegiance@@E$0A@$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_bitstream::read_valid_index<32>(char const *)
//{
//    mangled_ppc("??$read_valid_index@$0CA@@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_posse_formation@@W41@$0A@$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_posse_formation@@W41@$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_network_session_matchmaking_hopper_flags@@G$08Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_network_session_matchmaking_hopper_flags@@G$08Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_hopper_team_allegiance@@E$0A@$07Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_hopper_team_allegiance@@E$0A@$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_matchmaking_search_query_state@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_matchmaking_search_query_state@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: struct s_replicated_life_cycle_matchmaking_query_result const & s_static_array<struct s_replicated_life_cycle_matchmaking_query_result, 25>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_replicated_life_cycle_matchmaking_query_result@@$0BJ@@@QBAABUs_replicated_life_cycle_matchmaking_query_result@@J@Z");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_replicated_life_cycle_matchmaking_query_result_state@@E$0A@$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_replicated_life_cycle_matchmaking_query_result_state@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_matchmaking_search_query_state@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_matchmaking_search_query_state@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: struct s_replicated_life_cycle_matchmaking_query_result & s_static_array<struct s_replicated_life_cycle_matchmaking_query_result, 25>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_replicated_life_cycle_matchmaking_query_result@@$0BJ@@@QAAAAUs_replicated_life_cycle_matchmaking_query_result@@J@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_replicated_life_cycle_matchmaking_query_result_state@@E$0A@$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_replicated_life_cycle_matchmaking_query_result_state@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_matchmaking_configuring_match_state@@W41@$0A@$06Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_matchmaking_configuring_match_state@@W41@$0A@$06Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_valid_index<12, long>(char const *, long)
//{
//    mangled_ppc("??$write_valid_index@$0M@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: void c_bitstream::write_valid_index<3, long>(char const *, long)
//{
//    mangled_ppc("??$write_valid_index@$02J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_matchmaking_configuring_match_state@@W41@$0A@$06Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_matchmaking_configuring_match_state@@W41@$0A@$06Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_bitstream::read_valid_index<12>(char const *)
//{
//    mangled_ppc("??$read_valid_index@$0M@@c_bitstream@@QAAJPBD@Z");
//};

//public: long c_bitstream::read_valid_index<3>(char const *)
//{
//    mangled_ppc("??$read_valid_index@$02@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_life_cycle_matchmaking_progress_type@@W41@$0A@$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_life_cycle_matchmaking_progress_type@@W41@$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_life_cycle_matchmaking_progress_type@@W41@$0A@$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_life_cycle_matchmaking_progress_type@@W41@$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags_no_init@KK$0BA@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags_no_init@KK$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags_no_init@KE$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags_no_init@KE$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags_no_init@KK$0BA@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags_no_init@KK$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags_no_init@KE$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags_no_init@KE$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_index<4, enum e_campaign_difficulty_level>(char const *, enum e_campaign_difficulty_level)
//{
//    mangled_ppc("??$write_index@$03W4e_campaign_difficulty_level@@@c_bitstream@@QAAXPBDW4e_campaign_difficulty_level@@@Z");
//};

//public: void c_bitstream::write_non_zero_count<3, long>(char const *, long)
//{
//    mangled_ppc("??$write_non_zero_count@$02J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: long c_bitstream::read_non_zero_count<3>(char const *)
//{
//    mangled_ppc("??$read_non_zero_count@$02@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::write_non_zero_count<12, long>(char const *, long)
//{
//    mangled_ppc("??$write_non_zero_count@$0M@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_matchmaking_load_failure_type@@W41@$0A@$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_matchmaking_load_failure_type@@W41@$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_bitstream::read_non_zero_count<12>(char const *)
//{
//    mangled_ppc("??$read_non_zero_count@$0M@@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_matchmaking_load_failure_type@@W41@$0A@$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_matchmaking_load_failure_type@@W41@$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_matchmaking_voting_description_flags@@E$01Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_matchmaking_voting_description_flags@@E$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_matchmaking_voting_description_flags@@E$01Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_matchmaking_voting_description_flags@@E$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: struct s_network_session_parameter_matchmaking_voting_description const & s_static_array<struct s_network_session_parameter_matchmaking_voting_description, 3>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_session_parameter_matchmaking_voting_description@@$02@@QBAABUs_network_session_parameter_matchmaking_voting_description@@J@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_matchmaking_game_configuration_flags@@E$00Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_matchmaking_game_configuration_flags@@E$00Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_matchmaking_game_configuration_flags@@E$00Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_matchmaking_game_configuration_flags@@E$00Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_hopper_player_investment_category c_enum_no_init<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_hopper_player_investment_category(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_hopper_player_investment_category@@E$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_hopper_player_investment_category@@XZ");
//};

//public: bool c_enum_no_init<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_hopper_player_investment_category@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_hopper_player_investment_category@@E$0A@$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_posse_formation@@W41@$0A@$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver>::set_raw_value(enum e_posse_formation)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_posse_formation@@W41@$0A@$03Us_default_enum_string_resolver@@@@QAAXW4e_posse_formation@@@Z");
//};

//public: bool c_enum_no_init<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_hopper_game_type@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_hopper_game_type@@E$0A@$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_enum_no_init<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_hopper_team_allegiance@@E$0A@$07Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_hopper_team_allegiance@@E$0A@$07Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_matchmaking_load_failure_type@@W41@$0A@$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>::set_raw_value(enum e_matchmaking_load_failure_type)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_matchmaking_load_failure_type@@W41@$0A@$03Us_default_enum_string_resolver@@@@QAAXW4e_matchmaking_load_failure_type@@@Z");
//};

//public: enum e_replicated_life_cycle_matchmaking_query_result_state c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_replicated_life_cycle_matchmaking_query_result_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_replicated_life_cycle_matchmaking_query_result_state@@E$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_replicated_life_cycle_matchmaking_query_result_state@@XZ");
//};

//public: bool c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_replicated_life_cycle_matchmaking_query_result_state@@E$0A@$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_replicated_life_cycle_matchmaking_query_result_state@@E$0A@$05Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: enum e_matchmaking_search_query_state c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_matchmaking_search_query_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_matchmaking_search_query_state@@E$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_matchmaking_search_query_state@@XZ");
//};

//public: bool c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_matchmaking_search_query_state@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_matchmaking_search_query_state@@E$0A@$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_matchmaking_configuring_match_state@@W41@$0A@$06Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>::set_raw_value(enum e_matchmaking_configuring_match_state)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_matchmaking_configuring_match_state@@W41@$0A@$06Us_default_enum_string_resolver@@@@QAAXW4e_matchmaking_configuring_match_state@@@Z");
//};

//public: bool c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_life_cycle_matchmaking_progress_type@@W41@$0A@$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver>::set_raw_value(enum e_life_cycle_matchmaking_progress_type)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_life_cycle_matchmaking_progress_type@@W41@$0A@$05Us_default_enum_string_resolver@@@@QAAXW4e_life_cycle_matchmaking_progress_type@@@Z");
//};

//public: unsigned long c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: bool c_flags_no_init<unsigned char, unsigned short, 16, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@EG$0BA@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: unsigned short c_flags_no_init<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_network_session_matchmaking_hopper_flags@@G$08Us_default_enum_string_resolver@@@@QBAGXZ");
//};

//public: void c_flags_no_init<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set_unsafe(unsigned short)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_network_session_matchmaking_hopper_flags@@G$08Us_default_enum_string_resolver@@@@QAAXG@Z");
//};

//public: void c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@KK$0BA@Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//public: unsigned char c_flags_no_init<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_matchmaking_voting_description_flags@@E$01Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_matchmaking_voting_description_flags@@E$01Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_hopper_game_type@@E$0A@$02Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_hopper_game_type@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_hopper_player_investment_category@@E$0A@$02Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_hopper_player_investment_category@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_hopper_game_type c_enum_no_init<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_hopper_game_type@@E$0A@$02Us_default_enum_string_resolver@@@@SA?AW4e_hopper_game_type@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_hopper_game_type@@E$0A@$02Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: static enum e_hopper_player_investment_category c_enum_no_init<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_hopper_player_investment_category@@E$0A@$02Us_default_enum_string_resolver@@@@SA?AW4e_hopper_player_investment_category@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_hopper_player_investment_category, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_hopper_player_investment_category@@E$0A@$02Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_posse_formation@@W41@$0A@$03Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_posse_formation@@W41@$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> >(class c_enum<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_hopper_team_allegiance@@E$0A@$07Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_hopper_team_allegiance@@E$0A@$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_posse_formation c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_posse_formation@@W41@$0A@$03Us_default_enum_string_resolver@@@@SA?AW4e_posse_formation@@H@Z");
//};

//public: static enum e_posse_formation c_enum_no_init<enum e_posse_formation, enum e_posse_formation, 0, 4, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_posse_formation@@W41@$0A@$03Us_default_enum_string_resolver@@@@SA?AW4e_posse_formation@@K@Z");
//};

//public: static enum e_game_engine_team_options_model_override_type c_enum_no_init<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@SA?AW4e_game_engine_team_options_model_override_type@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_game_engine_team_options_model_override_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_game_engine_team_options_model_override_type@@E$0A@$04Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: static enum e_hopper_team_allegiance c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_hopper_team_allegiance@@E$0A@$07Us_default_enum_string_resolver@@@@SA?AW4e_hopper_team_allegiance@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_hopper_team_allegiance, unsigned char, 0, 8, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_hopper_team_allegiance@@E$0A@$07Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_matchmaking_search_query_state@@E$0A@$02Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_matchmaking_search_query_state@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool s_static_array<struct s_replicated_life_cycle_matchmaking_query_result, 25>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_replicated_life_cycle_matchmaking_query_result@@$0BJ@@@SA_NJ@Z");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_replicated_life_cycle_matchmaking_query_result_state@@E$0A@$05Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_replicated_life_cycle_matchmaking_query_result_state@@E$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_matchmaking_search_query_state c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_matchmaking_search_query_state@@E$0A@$02Us_default_enum_string_resolver@@@@SA?AW4e_matchmaking_search_query_state@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_matchmaking_search_query_state, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_matchmaking_search_query_state@@E$0A@$02Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: static enum e_replicated_life_cycle_matchmaking_query_result_state c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_replicated_life_cycle_matchmaking_query_result_state@@E$0A@$05Us_default_enum_string_resolver@@@@SA?AW4e_replicated_life_cycle_matchmaking_query_result_state@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_replicated_life_cycle_matchmaking_query_result_state@@E$0A@$05Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_matchmaking_configuring_match_state@@W41@$0A@$06Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_matchmaking_configuring_match_state@@W41@$0A@$06Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_matchmaking_configuring_match_state c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_matchmaking_configuring_match_state@@W41@$0A@$06Us_default_enum_string_resolver@@@@SA?AW4e_matchmaking_configuring_match_state@@H@Z");
//};

//public: static enum e_matchmaking_configuring_match_state c_enum_no_init<enum e_matchmaking_configuring_match_state, enum e_matchmaking_configuring_match_state, 0, 7, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_matchmaking_configuring_match_state@@W41@$0A@$06Us_default_enum_string_resolver@@@@SA?AW4e_matchmaking_configuring_match_state@@K@Z");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_life_cycle_matchmaking_progress_type@@W41@$0A@$05Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_life_cycle_matchmaking_progress_type@@W41@$0A@$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_life_cycle_matchmaking_progress_type c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_life_cycle_matchmaking_progress_type@@W41@$0A@$05Us_default_enum_string_resolver@@@@SA?AW4e_life_cycle_matchmaking_progress_type@@H@Z");
//};

//public: static enum e_life_cycle_matchmaking_progress_type c_enum_no_init<enum e_life_cycle_matchmaking_progress_type, enum e_life_cycle_matchmaking_progress_type, 0, 6, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_life_cycle_matchmaking_progress_type@@W41@$0A@$05Us_default_enum_string_resolver@@@@SA?AW4e_life_cycle_matchmaking_progress_type@@K@Z");
//};

//public: unsigned char c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@KE$03Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@KE$03Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_matchmaking_load_failure_type@@W41@$0A@$03Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_matchmaking_load_failure_type@@W41@$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_matchmaking_load_failure_type c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_matchmaking_load_failure_type@@W41@$0A@$03Us_default_enum_string_resolver@@@@SA?AW4e_matchmaking_load_failure_type@@H@Z");
//};

//public: static enum e_matchmaking_load_failure_type c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_matchmaking_load_failure_type@@W41@$0A@$03Us_default_enum_string_resolver@@@@SA?AW4e_matchmaking_load_failure_type@@K@Z");
//};

//public: unsigned char c_flags_no_init<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_matchmaking_game_configuration_flags@@E$00Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_matchmaking_game_configuration_flags@@E$00Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_flags_no_init<enum e_network_session_matchmaking_hopper_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_network_session_matchmaking_hopper_flags@@G$08Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@KK$0BA@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_matchmaking_voting_description_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@KE$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_matchmaking_game_configuration_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_matchmaking_game_configuration_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned long c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@KK$0BA@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@KE$03Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned long c_flags_no_init<unsigned long, unsigned long, 16, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(unsigned long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@KK$0BA@Us_default_enum_string_resolver@@@@CAKK@Z");
//};

//private: static unsigned char c_flags_no_init<unsigned long, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(unsigned long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@KE$03Us_default_enum_string_resolver@@@@CAEK@Z");
//};

