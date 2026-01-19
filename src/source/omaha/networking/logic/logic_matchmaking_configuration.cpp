/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_big_flags<256>, 3>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_big_flags@$0BAA@@@$02@@2JB"

// void multiplayer_game_hopper_initialize(void);
// void multiplayer_game_hopper_dispose(void);
// void multiplayer_game_hopper_update(void);
// public: struct s_network_http_request_hash const * c_hopper_configuration::game_set_hash(void) const;
// public: unsigned short c_hopper_configuration::get_hopper_identifier(void) const;
// public: void c_downloader_url::clear(void);
// bool multiplayer_game_hopper_set_active_hopper_and_request_game_set(unsigned short, bool, bool, unsigned char, class c_network_session_membership const *);
// public: unsigned char c_hopper_configuration::get_hopper_equivalency_id(void) const;
// void multiplayer_game_hopper_request_game_variant(unsigned short, char const *, struct s_network_http_request_hash const *);
// void multiplayer_game_hopper_request_map_variant(unsigned short, char const *, struct s_network_http_request_hash const *);
// enum e_network_file_load_status multiplayer_game_hopper_catalog_load_status(void);
// enum e_network_file_load_status multiplayer_game_hopper_description_load_status(void);
// enum e_network_file_load_status multiplayer_game_hopper_game_set_load_status(void);
// enum e_network_file_load_status multiplayer_game_hopper_game_variant_load_status(void);
// public: bool c_downloader_url::is_empty(void) const;
// enum e_network_file_load_status multiplayer_game_hopper_map_variant_load_status(void);
// unsigned short multiplayer_game_hopper_get_current_hopper_identifier(void);
// class c_hopper_configuration const * multiplayer_game_hoppers_get_current_hopper_configuration(void);
// class c_hopper_configuration const * multiplayer_game_hoppers_get_current_hopper_configuration_internal(bool);
// class c_hopper_configuration const * multiplayer_game_hoppers_get_current_hopper_configuration_unsafe(void);
// unsigned short multiplayer_game_hopper_get_hopper_identifier(long);
// class c_game_variant const * multiplayer_game_hopper_get_current_game_variant(void);
// class c_map_variant const * multiplayer_game_hopper_get_current_map_variant(void);
// class c_hopper_configuration const * multiplayer_game_hoppers_get_hopper_configuration(unsigned short);
// struct s_game_hopper_custom_category const * multiplayer_game_hopper_get_category_from_index(long);
// bool multiplayer_game_hoppers_pick_next_voting_round(struct s_hopper_voting_configuration const *, struct s_multiplayer_game_hopper_voting_round_selection_configuration const *, struct s_network_session_parameter_matchmaking_voting_rounds *);
// bool multiplayer_game_hoppers_build_voting_descriptions_from_voting_round(long, struct s_network_session_parameter_matchmaking_voting_round const *, enum e_hopper_game_type, struct s_network_session_parameter_matchmaking_voting_descriptions *);
// bool multiplayer_game_hopper_voting_round_valid_for_game_set(struct s_network_session_parameter_matchmaking_voting_round const *);
// bool multiplayer_game_hopper_voting_option_valid_for_game_set(struct s_network_session_parameter_matchmaking_voting_option const *);
// bool multiplayer_game_hopper_load_failure_valid_for_game_set(struct s_network_session_parameter_matchmaking_load_failure const *);
// bool multiplayer_game_hopper_voting_rounds_valid_for_current_hopper(struct s_network_session_parameter_matchmaking_voting_rounds const *);
// public: struct s_hopper_voting_configuration const * c_hopper_configuration::get_voting_configuration(void) const;
// void multiplayer_game_hopper_build_calculated_stats(struct s_queried_player_hopper_statistics const *, struct s_calculated_player_statistics *);
// long multiplayer_game_hopper_compute_skill_level(float, float, long);
// public: float c_hopper_configuration::get_trueskill_sigma_multiplier(void) const;
// struct s_game_set_entry const * multiplayer_game_hopper_get_game_set_entry_by_voting_option(struct s_network_session_parameter_matchmaking_voting_option const *, long *);
// long multiplayer_game_hopper_compute_skill_match_delta(void);
// public: long c_hopper_configuration::get_maximum_skill_level_match_delta(void) const;
// float multiplayer_game_hopper_compute_gather_chance(long);
// public: unsigned char c_hopper_configuration::get_chance_of_gathering(long) const;
// long multiplayer_game_hopper_compute_skill_update_weight(long, long);
// long multiplayer_game_hopper_compute_quality_adjusted_skill_update_weight(long, long);
// long multiplayer_game_hopper_compute_match_quality(class c_network_session_membership const *);
// public: float c_hopper_configuration::get_trueskill_beta_performance_variation(void) const;
// bool multiplayer_game_hopper_is_hopper_visible(unsigned short, class c_network_session_membership const *);
// public: unsigned __int64 c_hopper_configuration::get_hopper_start_time(void) const;
// public: unsigned __int64 c_hopper_configuration::get_hopper_end_time(void) const;
// public: bool c_hopper_configuration::require_all_party_members_meet_grade_requirements(void) const;
// public: bool c_hopper_configuration::require_all_party_members_meet_games_played_requirements(void) const;
// public: bool c_hopper_configuration::require_all_party_members_meet_access_requirements(void) const;
// public: bool c_hopper_configuration::require_all_party_members_meet_live_account_access_requirements(void) const;
// public: bool c_hopper_configuration::hide_hopper_from_games_played_restricted_players(void) const;
// public: bool c_hopper_configuration::hide_hopper_from_grade_restricted_players(void) const;
// public: bool c_hopper_configuration::hide_hopper_from_access_restricted_players(void) const;
// public: bool c_hopper_configuration::hide_hopper_from_live_account_access_restricted_players(void) const;
// public: bool c_hopper_configuration::hide_hopper_due_to_time_restriction(void) const;
// public: bool c_hopper_configuration::uses_arena_lsp_stats(void) const;
// public: multiplayer_hopper_check::multiplayer_hopper_check(void);
// enum e_session_game_start_error multiplayer_game_hopper_check_required_files(bool, bool);
// enum e_session_game_start_error multiplayer_game_is_playable(unsigned short, bool, bool, class c_network_session_membership const *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *);
// public: long c_hopper_configuration::get_minimum_party_size(void) const;
// public: long c_hopper_configuration::get_maximum_party_size(void) const;
// public: long c_hopper_configuration::get_hopper_access_bit(void) const;
// public: enum e_live_account_access c_hopper_configuration::get_account_type_access(void) const;
// public: bool c_hopper_configuration::requires_hard_drive(void) const;
// public: bool c_hopper_configuration::requires_local_party(void) const;
// public: bool c_hopper_configuration::are_guests_allowed(void) const;
// public: bool c_network_session_membership::is_player_online_enabled(long) const;
// struct utf8const * multiplayer_game_hopper_get_description(unsigned short);
// void network_build_game_variant(bool, char const *);
// public: struct s_content_item_metadata * c_game_engine_base_variant::get_metadata(void);
// void network_build_map_variant(bool, char const *);
// public: s_blffile_hopper_map_variant::s_blffile_hopper_map_variant(void);
// public: s_blf_chunk_map_variant::s_blf_chunk_map_variant(void);
// void multiplayer_game_hopper_display_hoppers(void);
// public: struct utf8const * c_hopper_configuration::get_name(void) const;
// public: unsigned char c_hopper_configuration::get_hopper_category_index(void) const;
// public: long c_hopper_configuration::get_xlast_index(void) const;
// void multiplayer_game_hopper_display_games_for_current_hopper(void);
// void multiplayer_game_hopper_set_game_for_current_hopper(long);
// void multiplayer_game_hopper_set_voting_system(long);
// enum e_matchmaking_voting_system multiplayer_game_hopper_get_voting_system(void);
// bool multiplayer_game_hopper_notify_hopper_configurations_updated(bool);
// void multiplayer_game_hopper_normalize_skill(long, float *);
// void multiplayer_game_hopper_normalize_mu(float, float *);
// void multiplayer_game_hopper_normalize_language(enum e_language, float *);
// void multiplayer_game_hopper_normalize_locality_x(float, float *);
// void multiplayer_game_hopper_normalize_locality_y(float, float *);
// void multiplayer_game_hopper_normalize_locality_z(float, float *);
// void multiplayer_game_hopper_normalize_player_grade(enum e_player_grade, float *);
// void multiplayer_game_hopper_normalize_dlc_pack(bool, float *);
// void multiplayer_game_hopper_normalize_social_axis(float, float *);
// void multiplayer_game_hopper_normalize_guest(bool, float *);
// unsigned __int64 multiplayer_game_hopper_get_required_map_mask_from_game_set(void);
// unsigned __int64 multiplayer_game_hopper_get_map_mask_from_game_set(void);
// struct s_hopper_configuration_table const * multiplayer_game_hopper_get_hopper_configuration_table(void);
// struct s_game_hopper_description_table const * multiplayer_game_hopper_get_hopper_description_table(void);
// void multiplayer_game_hopper_get_players_status(class c_hopper_configuration const *, class c_network_session_membership const *, struct multiplayer_hopper_check *);
// public: long c_hopper_configuration::get_minimum_games_won(void) const;
// public: long c_hopper_configuration::get_maximum_games_won(void) const;
// public: long c_hopper_configuration::get_minimum_games_played(void) const;
// public: long c_hopper_configuration::get_maximum_games_played(void) const;
// public: long c_hopper_configuration::get_minimum_grade(void) const;
// public: long c_hopper_configuration::get_maximum_grade(void) const;
// public: long c_hopper_configuration::get_minimum_local_player_count(void) const;
// public: long c_hopper_configuration::get_maximum_local_player_count(void) const;
// bool multiplayer_game_hopper_game_set_valid(struct s_game_set const *);
// public: bool s_game_set_replicated_data::is_valid(void) const;
// public: class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> c_hopper_configuration::get_games_game_type(void) const;
// public: long c_hopper_configuration::get_maximum_player_count(void) const;
// enum e_multiplayer_team operator++(enum e_multiplayer_team &, int);
// public: bool c_hopper_configuration::is_team_based(void) const;
// public: class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> c_hopper_configuration::get_valid_team_mask(void) const;
// public: long c_hopper_configuration::get_maximum_team_size(enum e_multiplayer_team) const;
// public: bool c_hopper_configuration::get_team_valid(enum e_multiplayer_team) const;
// bool multiplayer_game_hoppers_pick_next_voting_round_internal(bool, struct s_hopper_voting_configuration const *, struct s_multiplayer_game_hopper_voting_round_selection_configuration const *, struct s_network_session_parameter_matchmaking_voting_rounds *);
// long multiplayer_game_hoppers_voting_rounds_get_veto_count(struct s_network_session_parameter_matchmaking_voting_rounds const *);
// bool multiplayer_game_hoppers_game_data_compare(struct s_game_set_entry_campaign_and_survival_data const *, struct s_game_set_entry_campaign_and_survival_data const *);
// void multiplayer_game_hoppers_build_map_mask(enum e_map_id, class c_big_flags<256> *);
// bool multiplayer_game_hoppers_pick_voting_round(bool, struct s_hopper_voting_configuration const *, struct s_multiplayer_game_hopper_voting_round_selection_configuration const *, struct s_network_session_parameter_matchmaking_voting_rounds const *, struct s_network_session_parameter_matchmaking_voting_round *);
// void multiplayer_game_hoppers_build_voting_masks(bool, struct s_hopper_voting_configuration const *, struct s_multiplayer_game_hopper_voting_round_selection_configuration const *, struct s_network_session_parameter_matchmaking_voting_rounds const *, class c_big_flags<256> *, class c_big_flags<256> *, class c_big_flags<256> *, class c_big_flags<256> *, class s_static_array<class c_big_flags<256>, 3> *);
// bool multiplayer_game_hoppers_is_map_available(unsigned __int64, enum e_map_id);
// public: s_static_array<class c_big_flags<256>, 3>::s_static_array<class c_big_flags<256>, 3>(void);
// public: enum e_matchmaking_load_failure_type c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>::operator enum e_matchmaking_load_failure_type(void) const;
// public: bool c_http_blf_simple_downloader<struct s_game_set>::set_url(class c_downloader_url const *);
// public: void c_http_blf_simple_downloader<struct s_game_set>::set_hash(struct s_network_http_request_hash const *);
// public: long c_http_blf_simple_downloader<struct s_game_set>::get_attempt_index(void) const;
// public: enum e_download_status c_http_blf_simple_downloader<struct s_game_set>::get_download_status(void) const;
// public: void c_http_blf_simple_downloader<struct s_game_set>::update(void);
// public: enum e_download_status c_http_blf_simple_downloader<struct s_game_set>::get_data(struct s_game_set const **, long *);
// public: bool c_http_blf_simple_downloader<class c_game_variant>::set_url(class c_downloader_url const *);
// public: void c_http_blf_simple_downloader<class c_game_variant>::set_hash(struct s_network_http_request_hash const *);
// public: class c_downloader_url const * c_http_blf_simple_downloader<class c_game_variant>::get_url(void) const;
// public: class c_downloader_url const * c_http_buffer_downloader::get_url(void) const;
// public: void c_http_blf_simple_downloader<class c_game_variant>::update(void);
// public: enum e_download_status c_http_blf_simple_downloader<class c_game_variant>::get_data(class c_game_variant const **, long *);
// public: bool c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>::set_url(class c_downloader_url const *);
// public: void c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>::set_hash(struct s_network_http_request_hash const *);
// public: class c_downloader_url const * c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>::get_url(void) const;
// public: void c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>::update(void);
// public: enum e_download_status c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>::get_data(struct s_blf_chunk_map_variant const **, long *);
// public: static long s_static_array<class c_big_flags<256>, 3>::get_count(void);
// public: bool c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> const &) const;
// public: bool c_flags_no_init<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_game_set_replicated_data_flags) const;
// public: bool c_flags_no_init<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_hopper_voting_configuration_flags) const;
// public: unsigned char const & s_static_array<unsigned char, 16>::operator[]<unsigned long>(unsigned long) const;
// public: bool c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::test(enum e_multiplayer_team) const;
// public: void c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::set(enum e_multiplayer_team, bool);
// public: void c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::set_range(enum e_multiplayer_team, enum e_multiplayer_team, bool);
// public: struct s_hopper_universal_configuration::s_per_team_data const & s_static_array<struct s_hopper_universal_configuration::s_per_team_data, 8>::operator[]<enum e_multiplayer_team>(enum e_multiplayer_team) const;
// public: struct s_hopper_query_configuration const & s_static_array<struct s_hopper_query_configuration, 4>::operator[]<enum e_hopper_query_type>(enum e_hopper_query_type) const;
// public: void c_big_flags_typed_no_init<long, 256>::set(long, bool);
// public: class c_big_flags_typed_no_init<long, 256> & c_big_flags_typed_no_init<long, 256>::operator|=(class c_big_flags_typed_no_init<long, 256> const &);
// public: void c_big_flags_typed_no_init<long, 256>::and_not(class c_big_flags_typed_no_init<long, 256> const *);
// public: void c_static_wchar_string<16>::set_char(char const *);
// public: void c_flags_no_init<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_matchmaking_voting_description_flags, bool);
// public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator^(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> const &) const;
// public: struct s_hopper_configuration_table const * c_blf_simple_network_storage_file<struct s_hopper_configuration_table>::get(void) const;
// public: struct s_game_hopper_description_table const * c_blf_simple_network_storage_file<struct s_game_hopper_description_table>::get(void) const;
// public: struct s_network_session_parameter_matchmaking_voting_option const & s_static_array<struct s_network_session_parameter_matchmaking_voting_option, 3>::operator[]<long>(long) const;
// public: struct s_network_session_parameter_matchmaking_voting_description & s_static_array<struct s_network_session_parameter_matchmaking_voting_description, 3>::operator[]<long>(long);
// public: struct s_network_session_parameter_matchmaking_voting_round const & s_static_array<struct s_network_session_parameter_matchmaking_voting_round, 12>::operator[]<long>(long) const;
// public: struct s_network_session_parameter_matchmaking_load_failure const & s_static_array<struct s_network_session_parameter_matchmaking_load_failure, 4>::operator[]<long>(long) const;
// public: struct s_network_session_parameter_matchmaking_voting_round & s_static_array<struct s_network_session_parameter_matchmaking_voting_round, 12>::operator[]<long>(long);
// public: class c_big_flags<256> & s_static_array<class c_big_flags<256>, 3>::operator[]<long>(long);
// public: struct s_network_session_parameter_matchmaking_voting_option & s_static_array<struct s_network_session_parameter_matchmaking_voting_option, 3>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_game_set_replicated_data_flags);
// private: static unsigned char c_flags_no_init<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_game_set_replicated_data_flags);
// public: static bool c_flags_no_init<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_hopper_voting_configuration_flags);
// private: static unsigned char c_flags_no_init<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_hopper_voting_configuration_flags);
// public: static bool s_static_array<unsigned char, 16>::valid<unsigned long>(unsigned long);
// public: class c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::operator~(void) const;
// public: class c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::operator&=(class c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> const &);
// public: class c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> const &);
// public: static class c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_multiplayer_team, enum e_multiplayer_team);
// public: static bool c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::valid_bit(enum e_multiplayer_team);
// public: bool c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned long c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::flag_size_type(enum e_multiplayer_team);
// public: static bool s_static_array<struct s_hopper_universal_configuration::s_per_team_data, 8>::valid<enum e_multiplayer_team>(enum e_multiplayer_team);
// public: static bool s_static_array<struct s_hopper_query_configuration, 4>::valid<enum e_hopper_query_type>(enum e_hopper_query_type);
// public: void c_big_flags_typed_no_init<long, 256>::and_not_range(class c_big_flags_typed_no_init<long, 256> const *, long, long);
// public: static bool c_flags_no_init<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_voting_description_flags);
// private: static unsigned char c_flags_no_init<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_voting_description_flags);
// public: static bool s_static_array<struct s_network_session_parameter_matchmaking_voting_option, 3>::valid<long>(long);
// public: static bool s_static_array<struct s_network_session_parameter_matchmaking_voting_description, 3>::valid<long>(long);
// public: static bool s_static_array<struct s_network_session_parameter_matchmaking_voting_round, 12>::valid<long>(long);
// public: static bool s_static_array<struct s_network_session_parameter_matchmaking_load_failure, 4>::valid<long>(long);
// public: static bool s_static_array<class c_big_flags<256>, 3>::valid<long>(long);
// public: void c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// public: s_multiplayer_game_hopper_globals::s_multiplayer_game_hopper_globals(void);
// public: s_game_set::s_game_set(void);
// public: s_game_set_entry::s_game_set_entry(void);
// public: s_game_set_file::s_game_set_file(void);
// public: c_http_blf_simple_downloader<struct s_game_set>::c_http_blf_simple_downloader<struct s_game_set>(void);
// public: c_http_blf_simple_downloader<class c_game_variant>::c_http_blf_simple_downloader<class c_game_variant>(void);
// public: c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>::c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>(void);
// public: c_http_stored_buffer_downloader<56481>::c_http_stored_buffer_downloader<56481>(void);
// public: c_http_stored_buffer_downloader<65697>::c_http_stored_buffer_downloader<65697>(void);
// public: c_http_stored_buffer_downloader<30917>::c_http_stored_buffer_downloader<30917>(void);
// merged_829B0400;
// public: virtual c_http_stored_buffer_downloader<56481>::~c_http_stored_buffer_downloader<56481>(void);
// merged_829B0470;
// public: virtual c_http_stored_buffer_downloader<65697>::~c_http_stored_buffer_downloader<65697>(void);
// merged_829B04E0;
// public: virtual c_http_stored_buffer_downloader<30917>::~c_http_stored_buffer_downloader<30917>(void);
// public: s_multiplayer_game_hopper_globals::~s_multiplayer_game_hopper_globals(void);
// public: c_http_blf_simple_downloader<struct s_game_set>::~c_http_blf_simple_downloader<struct s_game_set>(void);
// public: c_http_blf_simple_downloader<class c_game_variant>::~c_http_blf_simple_downloader<class c_game_variant>(void);
// public: c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>::~c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>(void);
// void multiplayer_game_hopper_globals::`dynamic atexit destructor'(void);

//void multiplayer_game_hopper_initialize(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_initialize@@YAXXZ");
//};

//void multiplayer_game_hopper_dispose(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_dispose@@YAXXZ");
//};

//void multiplayer_game_hopper_update(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_update@@YAXXZ");
//};

//public: struct s_network_http_request_hash const * c_hopper_configuration::game_set_hash(void) const
//{
//    mangled_ppc("?game_set_hash@c_hopper_configuration@@QBAPBUs_network_http_request_hash@@XZ");
//};

//public: unsigned short c_hopper_configuration::get_hopper_identifier(void) const
//{
//    mangled_ppc("?get_hopper_identifier@c_hopper_configuration@@QBAGXZ");
//};

//public: void c_downloader_url::clear(void)
//{
//    mangled_ppc("?clear@c_downloader_url@@QAAXXZ");
//};

//bool multiplayer_game_hopper_set_active_hopper_and_request_game_set(unsigned short, bool, bool, unsigned char, class c_network_session_membership const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_set_active_hopper_and_request_game_set@@YA_NG_N0EPBVc_network_session_membership@@@Z");
//};

//public: unsigned char c_hopper_configuration::get_hopper_equivalency_id(void) const
//{
//    mangled_ppc("?get_hopper_equivalency_id@c_hopper_configuration@@QBAEXZ");
//};

//void multiplayer_game_hopper_request_game_variant(unsigned short, char const *, struct s_network_http_request_hash const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_request_game_variant@@YAXGPBDPBUs_network_http_request_hash@@@Z");
//};

//void multiplayer_game_hopper_request_map_variant(unsigned short, char const *, struct s_network_http_request_hash const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_request_map_variant@@YAXGPBDPBUs_network_http_request_hash@@@Z");
//};

//enum e_network_file_load_status multiplayer_game_hopper_catalog_load_status(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_catalog_load_status@@YA?AW4e_network_file_load_status@@XZ");
//};

//enum e_network_file_load_status multiplayer_game_hopper_description_load_status(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_description_load_status@@YA?AW4e_network_file_load_status@@XZ");
//};

//enum e_network_file_load_status multiplayer_game_hopper_game_set_load_status(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_game_set_load_status@@YA?AW4e_network_file_load_status@@XZ");
//};

//enum e_network_file_load_status multiplayer_game_hopper_game_variant_load_status(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_game_variant_load_status@@YA?AW4e_network_file_load_status@@XZ");
//};

//public: bool c_downloader_url::is_empty(void) const
//{
//    mangled_ppc("?is_empty@c_downloader_url@@QBA_NXZ");
//};

//enum e_network_file_load_status multiplayer_game_hopper_map_variant_load_status(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_map_variant_load_status@@YA?AW4e_network_file_load_status@@XZ");
//};

//unsigned short multiplayer_game_hopper_get_current_hopper_identifier(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_get_current_hopper_identifier@@YAGXZ");
//};

//class c_hopper_configuration const * multiplayer_game_hoppers_get_current_hopper_configuration(void)
//{
//    mangled_ppc("?multiplayer_game_hoppers_get_current_hopper_configuration@@YAPBVc_hopper_configuration@@XZ");
//};

//class c_hopper_configuration const * multiplayer_game_hoppers_get_current_hopper_configuration_internal(bool)
//{
//    mangled_ppc("?multiplayer_game_hoppers_get_current_hopper_configuration_internal@@YAPBVc_hopper_configuration@@_N@Z");
//};

//class c_hopper_configuration const * multiplayer_game_hoppers_get_current_hopper_configuration_unsafe(void)
//{
//    mangled_ppc("?multiplayer_game_hoppers_get_current_hopper_configuration_unsafe@@YAPBVc_hopper_configuration@@XZ");
//};

//unsigned short multiplayer_game_hopper_get_hopper_identifier(long)
//{
//    mangled_ppc("?multiplayer_game_hopper_get_hopper_identifier@@YAGJ@Z");
//};

//class c_game_variant const * multiplayer_game_hopper_get_current_game_variant(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_get_current_game_variant@@YAPBVc_game_variant@@XZ");
//};

//class c_map_variant const * multiplayer_game_hopper_get_current_map_variant(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_get_current_map_variant@@YAPBVc_map_variant@@XZ");
//};

//class c_hopper_configuration const * multiplayer_game_hoppers_get_hopper_configuration(unsigned short)
//{
//    mangled_ppc("?multiplayer_game_hoppers_get_hopper_configuration@@YAPBVc_hopper_configuration@@G@Z");
//};

//struct s_game_hopper_custom_category const * multiplayer_game_hopper_get_category_from_index(long)
//{
//    mangled_ppc("?multiplayer_game_hopper_get_category_from_index@@YAPBUs_game_hopper_custom_category@@J@Z");
//};

//bool multiplayer_game_hoppers_pick_next_voting_round(struct s_hopper_voting_configuration const *, struct s_multiplayer_game_hopper_voting_round_selection_configuration const *, struct s_network_session_parameter_matchmaking_voting_rounds *)
//{
//    mangled_ppc("?multiplayer_game_hoppers_pick_next_voting_round@@YA_NPBUs_hopper_voting_configuration@@PBUs_multiplayer_game_hopper_voting_round_selection_configuration@@PAUs_network_session_parameter_matchmaking_voting_rounds@@@Z");
//};

//bool multiplayer_game_hoppers_build_voting_descriptions_from_voting_round(long, struct s_network_session_parameter_matchmaking_voting_round const *, enum e_hopper_game_type, struct s_network_session_parameter_matchmaking_voting_descriptions *)
//{
//    mangled_ppc("?multiplayer_game_hoppers_build_voting_descriptions_from_voting_round@@YA_NJPBUs_network_session_parameter_matchmaking_voting_round@@W4e_hopper_game_type@@PAUs_network_session_parameter_matchmaking_voting_descriptions@@@Z");
//};

//bool multiplayer_game_hopper_voting_round_valid_for_game_set(struct s_network_session_parameter_matchmaking_voting_round const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_voting_round_valid_for_game_set@@YA_NPBUs_network_session_parameter_matchmaking_voting_round@@@Z");
//};

//bool multiplayer_game_hopper_voting_option_valid_for_game_set(struct s_network_session_parameter_matchmaking_voting_option const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_voting_option_valid_for_game_set@@YA_NPBUs_network_session_parameter_matchmaking_voting_option@@@Z");
//};

//bool multiplayer_game_hopper_load_failure_valid_for_game_set(struct s_network_session_parameter_matchmaking_load_failure const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_load_failure_valid_for_game_set@@YA_NPBUs_network_session_parameter_matchmaking_load_failure@@@Z");
//};

//bool multiplayer_game_hopper_voting_rounds_valid_for_current_hopper(struct s_network_session_parameter_matchmaking_voting_rounds const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_voting_rounds_valid_for_current_hopper@@YA_NPBUs_network_session_parameter_matchmaking_voting_rounds@@@Z");
//};

//public: struct s_hopper_voting_configuration const * c_hopper_configuration::get_voting_configuration(void) const
//{
//    mangled_ppc("?get_voting_configuration@c_hopper_configuration@@QBAPBUs_hopper_voting_configuration@@XZ");
//};

//void multiplayer_game_hopper_build_calculated_stats(struct s_queried_player_hopper_statistics const *, struct s_calculated_player_statistics *)
//{
//    mangled_ppc("?multiplayer_game_hopper_build_calculated_stats@@YAXPBUs_queried_player_hopper_statistics@@PAUs_calculated_player_statistics@@@Z");
//};

//long multiplayer_game_hopper_compute_skill_level(float, float, long)
//{
//    mangled_ppc("?multiplayer_game_hopper_compute_skill_level@@YAJMMJ@Z");
//};

//public: float c_hopper_configuration::get_trueskill_sigma_multiplier(void) const
//{
//    mangled_ppc("?get_trueskill_sigma_multiplier@c_hopper_configuration@@QBAMXZ");
//};

//struct s_game_set_entry const * multiplayer_game_hopper_get_game_set_entry_by_voting_option(struct s_network_session_parameter_matchmaking_voting_option const *, long *)
//{
//    mangled_ppc("?multiplayer_game_hopper_get_game_set_entry_by_voting_option@@YAPBUs_game_set_entry@@PBUs_network_session_parameter_matchmaking_voting_option@@PAJ@Z");
//};

//long multiplayer_game_hopper_compute_skill_match_delta(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_compute_skill_match_delta@@YAJXZ");
//};

//public: long c_hopper_configuration::get_maximum_skill_level_match_delta(void) const
//{
//    mangled_ppc("?get_maximum_skill_level_match_delta@c_hopper_configuration@@QBAJXZ");
//};

//float multiplayer_game_hopper_compute_gather_chance(long)
//{
//    mangled_ppc("?multiplayer_game_hopper_compute_gather_chance@@YAMJ@Z");
//};

//public: unsigned char c_hopper_configuration::get_chance_of_gathering(long) const
//{
//    mangled_ppc("?get_chance_of_gathering@c_hopper_configuration@@QBAEJ@Z");
//};

//long multiplayer_game_hopper_compute_skill_update_weight(long, long)
//{
//    mangled_ppc("?multiplayer_game_hopper_compute_skill_update_weight@@YAJJJ@Z");
//};

//long multiplayer_game_hopper_compute_quality_adjusted_skill_update_weight(long, long)
//{
//    mangled_ppc("?multiplayer_game_hopper_compute_quality_adjusted_skill_update_weight@@YAJJJ@Z");
//};

//long multiplayer_game_hopper_compute_match_quality(class c_network_session_membership const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_compute_match_quality@@YAJPBVc_network_session_membership@@@Z");
//};

//public: float c_hopper_configuration::get_trueskill_beta_performance_variation(void) const
//{
//    mangled_ppc("?get_trueskill_beta_performance_variation@c_hopper_configuration@@QBAMXZ");
//};

//bool multiplayer_game_hopper_is_hopper_visible(unsigned short, class c_network_session_membership const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_is_hopper_visible@@YA_NGPBVc_network_session_membership@@@Z");
//};

//public: unsigned __int64 c_hopper_configuration::get_hopper_start_time(void) const
//{
//    mangled_ppc("?get_hopper_start_time@c_hopper_configuration@@QBA_KXZ");
//};

//public: unsigned __int64 c_hopper_configuration::get_hopper_end_time(void) const
//{
//    mangled_ppc("?get_hopper_end_time@c_hopper_configuration@@QBA_KXZ");
//};

//public: bool c_hopper_configuration::require_all_party_members_meet_grade_requirements(void) const
//{
//    mangled_ppc("?require_all_party_members_meet_grade_requirements@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::require_all_party_members_meet_games_played_requirements(void) const
//{
//    mangled_ppc("?require_all_party_members_meet_games_played_requirements@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::require_all_party_members_meet_access_requirements(void) const
//{
//    mangled_ppc("?require_all_party_members_meet_access_requirements@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::require_all_party_members_meet_live_account_access_requirements(void) const
//{
//    mangled_ppc("?require_all_party_members_meet_live_account_access_requirements@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::hide_hopper_from_games_played_restricted_players(void) const
//{
//    mangled_ppc("?hide_hopper_from_games_played_restricted_players@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::hide_hopper_from_grade_restricted_players(void) const
//{
//    mangled_ppc("?hide_hopper_from_grade_restricted_players@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::hide_hopper_from_access_restricted_players(void) const
//{
//    mangled_ppc("?hide_hopper_from_access_restricted_players@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::hide_hopper_from_live_account_access_restricted_players(void) const
//{
//    mangled_ppc("?hide_hopper_from_live_account_access_restricted_players@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::hide_hopper_due_to_time_restriction(void) const
//{
//    mangled_ppc("?hide_hopper_due_to_time_restriction@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::uses_arena_lsp_stats(void) const
//{
//    mangled_ppc("?uses_arena_lsp_stats@c_hopper_configuration@@QBA_NXZ");
//};

//public: multiplayer_hopper_check::multiplayer_hopper_check(void)
//{
//    mangled_ppc("??0multiplayer_hopper_check@@QAA@XZ");
//};

//enum e_session_game_start_error multiplayer_game_hopper_check_required_files(bool, bool)
//{
//    mangled_ppc("?multiplayer_game_hopper_check_required_files@@YA?AW4e_session_game_start_error@@_N0@Z");
//};

//enum e_session_game_start_error multiplayer_game_is_playable(unsigned short, bool, bool, class c_network_session_membership const *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?multiplayer_game_is_playable@@YA?AW4e_session_game_start_error@@G_N0PBVc_network_session_membership@@PAV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_hopper_configuration::get_minimum_party_size(void) const
//{
//    mangled_ppc("?get_minimum_party_size@c_hopper_configuration@@QBAJXZ");
//};

//public: long c_hopper_configuration::get_maximum_party_size(void) const
//{
//    mangled_ppc("?get_maximum_party_size@c_hopper_configuration@@QBAJXZ");
//};

//public: long c_hopper_configuration::get_hopper_access_bit(void) const
//{
//    mangled_ppc("?get_hopper_access_bit@c_hopper_configuration@@QBAJXZ");
//};

//public: enum e_live_account_access c_hopper_configuration::get_account_type_access(void) const
//{
//    mangled_ppc("?get_account_type_access@c_hopper_configuration@@QBA?AW4e_live_account_access@@XZ");
//};

//public: bool c_hopper_configuration::requires_hard_drive(void) const
//{
//    mangled_ppc("?requires_hard_drive@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::requires_local_party(void) const
//{
//    mangled_ppc("?requires_local_party@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_hopper_configuration::are_guests_allowed(void) const
//{
//    mangled_ppc("?are_guests_allowed@c_hopper_configuration@@QBA_NXZ");
//};

//public: bool c_network_session_membership::is_player_online_enabled(long) const
//{
//    mangled_ppc("?is_player_online_enabled@c_network_session_membership@@QBA_NJ@Z");
//};

//struct utf8const * multiplayer_game_hopper_get_description(unsigned short)
//{
//    mangled_ppc("?multiplayer_game_hopper_get_description@@YAPBUutf8@@G@Z");
//};

//void network_build_game_variant(bool, char const *)
//{
//    mangled_ppc("?network_build_game_variant@@YAX_NPBD@Z");
//};

//public: struct s_content_item_metadata * c_game_engine_base_variant::get_metadata(void)
//{
//    mangled_ppc("?get_metadata@c_game_engine_base_variant@@QAAPAUs_content_item_metadata@@XZ");
//};

//void network_build_map_variant(bool, char const *)
//{
//    mangled_ppc("?network_build_map_variant@@YAX_NPBD@Z");
//};

//public: s_blffile_hopper_map_variant::s_blffile_hopper_map_variant(void)
//{
//    mangled_ppc("??0s_blffile_hopper_map_variant@@QAA@XZ");
//};

//public: s_blf_chunk_map_variant::s_blf_chunk_map_variant(void)
//{
//    mangled_ppc("??0s_blf_chunk_map_variant@@QAA@XZ");
//};

//void multiplayer_game_hopper_display_hoppers(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_display_hoppers@@YAXXZ");
//};

//public: struct utf8const * c_hopper_configuration::get_name(void) const
//{
//    mangled_ppc("?get_name@c_hopper_configuration@@QBAPBUutf8@@XZ");
//};

//public: unsigned char c_hopper_configuration::get_hopper_category_index(void) const
//{
//    mangled_ppc("?get_hopper_category_index@c_hopper_configuration@@QBAEXZ");
//};

//public: long c_hopper_configuration::get_xlast_index(void) const
//{
//    mangled_ppc("?get_xlast_index@c_hopper_configuration@@QBAJXZ");
//};

//void multiplayer_game_hopper_display_games_for_current_hopper(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_display_games_for_current_hopper@@YAXXZ");
//};

//void multiplayer_game_hopper_set_game_for_current_hopper(long)
//{
//    mangled_ppc("?multiplayer_game_hopper_set_game_for_current_hopper@@YAXJ@Z");
//};

//void multiplayer_game_hopper_set_voting_system(long)
//{
//    mangled_ppc("?multiplayer_game_hopper_set_voting_system@@YAXJ@Z");
//};

//enum e_matchmaking_voting_system multiplayer_game_hopper_get_voting_system(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_get_voting_system@@YA?AW4e_matchmaking_voting_system@@XZ");
//};

//bool multiplayer_game_hopper_notify_hopper_configurations_updated(bool)
//{
//    mangled_ppc("?multiplayer_game_hopper_notify_hopper_configurations_updated@@YA_N_N@Z");
//};

//void multiplayer_game_hopper_normalize_skill(long, float *)
//{
//    mangled_ppc("?multiplayer_game_hopper_normalize_skill@@YAXJPAM@Z");
//};

//void multiplayer_game_hopper_normalize_mu(float, float *)
//{
//    mangled_ppc("?multiplayer_game_hopper_normalize_mu@@YAXMPAM@Z");
//};

//void multiplayer_game_hopper_normalize_language(enum e_language, float *)
//{
//    mangled_ppc("?multiplayer_game_hopper_normalize_language@@YAXW4e_language@@PAM@Z");
//};

//void multiplayer_game_hopper_normalize_locality_x(float, float *)
//{
//    mangled_ppc("?multiplayer_game_hopper_normalize_locality_x@@YAXMPAM@Z");
//};

//void multiplayer_game_hopper_normalize_locality_y(float, float *)
//{
//    mangled_ppc("?multiplayer_game_hopper_normalize_locality_y@@YAXMPAM@Z");
//};

//void multiplayer_game_hopper_normalize_locality_z(float, float *)
//{
//    mangled_ppc("?multiplayer_game_hopper_normalize_locality_z@@YAXMPAM@Z");
//};

//void multiplayer_game_hopper_normalize_player_grade(enum e_player_grade, float *)
//{
//    mangled_ppc("?multiplayer_game_hopper_normalize_player_grade@@YAXW4e_player_grade@@PAM@Z");
//};

//void multiplayer_game_hopper_normalize_dlc_pack(bool, float *)
//{
//    mangled_ppc("?multiplayer_game_hopper_normalize_dlc_pack@@YAX_NPAM@Z");
//};

//void multiplayer_game_hopper_normalize_social_axis(float, float *)
//{
//    mangled_ppc("?multiplayer_game_hopper_normalize_social_axis@@YAXMPAM@Z");
//};

//void multiplayer_game_hopper_normalize_guest(bool, float *)
//{
//    mangled_ppc("?multiplayer_game_hopper_normalize_guest@@YAX_NPAM@Z");
//};

//unsigned __int64 multiplayer_game_hopper_get_required_map_mask_from_game_set(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_get_required_map_mask_from_game_set@@YA_KXZ");
//};

//unsigned __int64 multiplayer_game_hopper_get_map_mask_from_game_set(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_get_map_mask_from_game_set@@YA_KXZ");
//};

//struct s_hopper_configuration_table const * multiplayer_game_hopper_get_hopper_configuration_table(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_get_hopper_configuration_table@@YAPBUs_hopper_configuration_table@@XZ");
//};

//struct s_game_hopper_description_table const * multiplayer_game_hopper_get_hopper_description_table(void)
//{
//    mangled_ppc("?multiplayer_game_hopper_get_hopper_description_table@@YAPBUs_game_hopper_description_table@@XZ");
//};

//void multiplayer_game_hopper_get_players_status(class c_hopper_configuration const *, class c_network_session_membership const *, struct multiplayer_hopper_check *)
//{
//    mangled_ppc("?multiplayer_game_hopper_get_players_status@@YAXPBVc_hopper_configuration@@PBVc_network_session_membership@@PAUmultiplayer_hopper_check@@@Z");
//};

//public: long c_hopper_configuration::get_minimum_games_won(void) const
//{
//    mangled_ppc("?get_minimum_games_won@c_hopper_configuration@@QBAJXZ");
//};

//public: long c_hopper_configuration::get_maximum_games_won(void) const
//{
//    mangled_ppc("?get_maximum_games_won@c_hopper_configuration@@QBAJXZ");
//};

//public: long c_hopper_configuration::get_minimum_games_played(void) const
//{
//    mangled_ppc("?get_minimum_games_played@c_hopper_configuration@@QBAJXZ");
//};

//public: long c_hopper_configuration::get_maximum_games_played(void) const
//{
//    mangled_ppc("?get_maximum_games_played@c_hopper_configuration@@QBAJXZ");
//};

//public: long c_hopper_configuration::get_minimum_grade(void) const
//{
//    mangled_ppc("?get_minimum_grade@c_hopper_configuration@@QBAJXZ");
//};

//public: long c_hopper_configuration::get_maximum_grade(void) const
//{
//    mangled_ppc("?get_maximum_grade@c_hopper_configuration@@QBAJXZ");
//};

//public: long c_hopper_configuration::get_minimum_local_player_count(void) const
//{
//    mangled_ppc("?get_minimum_local_player_count@c_hopper_configuration@@QBAJXZ");
//};

//public: long c_hopper_configuration::get_maximum_local_player_count(void) const
//{
//    mangled_ppc("?get_maximum_local_player_count@c_hopper_configuration@@QBAJXZ");
//};

//bool multiplayer_game_hopper_game_set_valid(struct s_game_set const *)
//{
//    mangled_ppc("?multiplayer_game_hopper_game_set_valid@@YA_NPBUs_game_set@@@Z");
//};

//public: bool s_game_set_replicated_data::is_valid(void) const
//{
//    mangled_ppc("?is_valid@s_game_set_replicated_data@@QBA_NXZ");
//};

//public: class c_enum<enum e_hopper_game_type, unsigned char, 0, 3, struct s_default_enum_string_resolver> c_hopper_configuration::get_games_game_type(void) const
//{
//    mangled_ppc("?get_games_game_type@c_hopper_configuration@@QBA?AV?$c_enum@W4e_hopper_game_type@@E$0A@$02Us_default_enum_string_resolver@@@@XZ");
//};

//public: long c_hopper_configuration::get_maximum_player_count(void) const
//{
//    mangled_ppc("?get_maximum_player_count@c_hopper_configuration@@QBAJXZ");
//};

//enum e_multiplayer_team operator++(enum e_multiplayer_team &, int)
//{
//    mangled_ppc("??E@YA?AW4e_multiplayer_team@@AAW40@H@Z");
//};

//public: bool c_hopper_configuration::is_team_based(void) const
//{
//    mangled_ppc("?is_team_based@c_hopper_configuration@@QBA_NXZ");
//};

//public: class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> c_hopper_configuration::get_valid_team_mask(void) const
//{
//    mangled_ppc("?get_valid_team_mask@c_hopper_configuration@@QBA?AV?$c_flags@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: long c_hopper_configuration::get_maximum_team_size(enum e_multiplayer_team) const
//{
//    mangled_ppc("?get_maximum_team_size@c_hopper_configuration@@QBAJW4e_multiplayer_team@@@Z");
//};

//public: bool c_hopper_configuration::get_team_valid(enum e_multiplayer_team) const
//{
//    mangled_ppc("?get_team_valid@c_hopper_configuration@@QBA_NW4e_multiplayer_team@@@Z");
//};

//bool multiplayer_game_hoppers_pick_next_voting_round_internal(bool, struct s_hopper_voting_configuration const *, struct s_multiplayer_game_hopper_voting_round_selection_configuration const *, struct s_network_session_parameter_matchmaking_voting_rounds *)
//{
//    mangled_ppc("?multiplayer_game_hoppers_pick_next_voting_round_internal@@YA_N_NPBUs_hopper_voting_configuration@@PBUs_multiplayer_game_hopper_voting_round_selection_configuration@@PAUs_network_session_parameter_matchmaking_voting_rounds@@@Z");
//};

//long multiplayer_game_hoppers_voting_rounds_get_veto_count(struct s_network_session_parameter_matchmaking_voting_rounds const *)
//{
//    mangled_ppc("?multiplayer_game_hoppers_voting_rounds_get_veto_count@@YAJPBUs_network_session_parameter_matchmaking_voting_rounds@@@Z");
//};

//bool multiplayer_game_hoppers_game_data_compare(struct s_game_set_entry_campaign_and_survival_data const *, struct s_game_set_entry_campaign_and_survival_data const *)
//{
//    mangled_ppc("?multiplayer_game_hoppers_game_data_compare@@YA_NPBUs_game_set_entry_campaign_and_survival_data@@0@Z");
//};

//void multiplayer_game_hoppers_build_map_mask(enum e_map_id, class c_big_flags<256> *)
//{
//    mangled_ppc("?multiplayer_game_hoppers_build_map_mask@@YAXW4e_map_id@@PAV?$c_big_flags@$0BAA@@@@Z");
//};

//bool multiplayer_game_hoppers_pick_voting_round(bool, struct s_hopper_voting_configuration const *, struct s_multiplayer_game_hopper_voting_round_selection_configuration const *, struct s_network_session_parameter_matchmaking_voting_rounds const *, struct s_network_session_parameter_matchmaking_voting_round *)
//{
//    mangled_ppc("?multiplayer_game_hoppers_pick_voting_round@@YA_N_NPBUs_hopper_voting_configuration@@PBUs_multiplayer_game_hopper_voting_round_selection_configuration@@PBUs_network_session_parameter_matchmaking_voting_rounds@@PAUs_network_session_parameter_matchmaking_voting_round@@@Z");
//};

//void multiplayer_game_hoppers_build_voting_masks(bool, struct s_hopper_voting_configuration const *, struct s_multiplayer_game_hopper_voting_round_selection_configuration const *, struct s_network_session_parameter_matchmaking_voting_rounds const *, class c_big_flags<256> *, class c_big_flags<256> *, class c_big_flags<256> *, class c_big_flags<256> *, class s_static_array<class c_big_flags<256>, 3> *)
//{
//    mangled_ppc("?multiplayer_game_hoppers_build_voting_masks@@YAX_NPBUs_hopper_voting_configuration@@PBUs_multiplayer_game_hopper_voting_round_selection_configuration@@PBUs_network_session_parameter_matchmaking_voting_rounds@@PAV?$c_big_flags@$0BAA@@@444PAV?$s_static_array@V?$c_big_flags@$0BAA@@@$02@@@Z");
//};

//bool multiplayer_game_hoppers_is_map_available(unsigned __int64, enum e_map_id)
//{
//    mangled_ppc("?multiplayer_game_hoppers_is_map_available@@YA_N_KW4e_map_id@@@Z");
//};

//public: s_static_array<class c_big_flags<256>, 3>::s_static_array<class c_big_flags<256>, 3>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_big_flags@$0BAA@@@$02@@QAA@XZ");
//};

//public: enum e_matchmaking_load_failure_type c_enum_no_init<enum e_matchmaking_load_failure_type, enum e_matchmaking_load_failure_type, 0, 4, struct s_default_enum_string_resolver>::operator enum e_matchmaking_load_failure_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_matchmaking_load_failure_type@@W41@$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_matchmaking_load_failure_type@@XZ");
//};

//public: bool c_http_blf_simple_downloader<struct s_game_set>::set_url(class c_downloader_url const *)
//{
//    mangled_ppc("?set_url@?$c_http_blf_simple_downloader@Us_game_set@@@@QAA_NPBVc_downloader_url@@@Z");
//};

//public: void c_http_blf_simple_downloader<struct s_game_set>::set_hash(struct s_network_http_request_hash const *)
//{
//    mangled_ppc("?set_hash@?$c_http_blf_simple_downloader@Us_game_set@@@@QAAXPBUs_network_http_request_hash@@@Z");
//};

//public: long c_http_blf_simple_downloader<struct s_game_set>::get_attempt_index(void) const
//{
//    mangled_ppc("?get_attempt_index@?$c_http_blf_simple_downloader@Us_game_set@@@@QBAJXZ");
//};

//public: enum e_download_status c_http_blf_simple_downloader<struct s_game_set>::get_download_status(void) const
//{
//    mangled_ppc("?get_download_status@?$c_http_blf_simple_downloader@Us_game_set@@@@QBA?AW4e_download_status@@XZ");
//};

//public: void c_http_blf_simple_downloader<struct s_game_set>::update(void)
//{
//    mangled_ppc("?update@?$c_http_blf_simple_downloader@Us_game_set@@@@QAAXXZ");
//};

//public: enum e_download_status c_http_blf_simple_downloader<struct s_game_set>::get_data(struct s_game_set const **, long *)
//{
//    mangled_ppc("?get_data@?$c_http_blf_simple_downloader@Us_game_set@@@@QAA?AW4e_download_status@@PAPBUs_game_set@@PAJ@Z");
//};

//public: bool c_http_blf_simple_downloader<class c_game_variant>::set_url(class c_downloader_url const *)
//{
//    mangled_ppc("?set_url@?$c_http_blf_simple_downloader@Vc_game_variant@@@@QAA_NPBVc_downloader_url@@@Z");
//};

//public: void c_http_blf_simple_downloader<class c_game_variant>::set_hash(struct s_network_http_request_hash const *)
//{
//    mangled_ppc("?set_hash@?$c_http_blf_simple_downloader@Vc_game_variant@@@@QAAXPBUs_network_http_request_hash@@@Z");
//};

//public: class c_downloader_url const * c_http_blf_simple_downloader<class c_game_variant>::get_url(void) const
//{
//    mangled_ppc("?get_url@?$c_http_blf_simple_downloader@Vc_game_variant@@@@QBAPBVc_downloader_url@@XZ");
//};

//public: class c_downloader_url const * c_http_buffer_downloader::get_url(void) const
//{
//    mangled_ppc("?get_url@c_http_buffer_downloader@@QBAPBVc_downloader_url@@XZ");
//};

//public: void c_http_blf_simple_downloader<class c_game_variant>::update(void)
//{
//    mangled_ppc("?update@?$c_http_blf_simple_downloader@Vc_game_variant@@@@QAAXXZ");
//};

//public: enum e_download_status c_http_blf_simple_downloader<class c_game_variant>::get_data(class c_game_variant const **, long *)
//{
//    mangled_ppc("?get_data@?$c_http_blf_simple_downloader@Vc_game_variant@@@@QAA?AW4e_download_status@@PAPBVc_game_variant@@PAJ@Z");
//};

//public: bool c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>::set_url(class c_downloader_url const *)
//{
//    mangled_ppc("?set_url@?$c_http_blf_simple_downloader@Us_blf_chunk_map_variant@@@@QAA_NPBVc_downloader_url@@@Z");
//};

//public: void c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>::set_hash(struct s_network_http_request_hash const *)
//{
//    mangled_ppc("?set_hash@?$c_http_blf_simple_downloader@Us_blf_chunk_map_variant@@@@QAAXPBUs_network_http_request_hash@@@Z");
//};

//public: class c_downloader_url const * c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>::get_url(void) const
//{
//    mangled_ppc("?get_url@?$c_http_blf_simple_downloader@Us_blf_chunk_map_variant@@@@QBAPBVc_downloader_url@@XZ");
//};

//public: void c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>::update(void)
//{
//    mangled_ppc("?update@?$c_http_blf_simple_downloader@Us_blf_chunk_map_variant@@@@QAAXXZ");
//};

//public: enum e_download_status c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>::get_data(struct s_blf_chunk_map_variant const **, long *)
//{
//    mangled_ppc("?get_data@?$c_http_blf_simple_downloader@Us_blf_chunk_map_variant@@@@QAA?AW4e_download_status@@PAPBUs_blf_chunk_map_variant@@PAJ@Z");
//};

//public: static long s_static_array<class c_big_flags<256>, 3>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@V?$c_big_flags@$0BAA@@@$02@@SAJXZ");
//};

//public: bool c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<enum e_game_skulls, unsigned long, 17, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??8?$c_flags_no_init@W4e_game_skulls@@K$0BB@Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: bool c_flags_no_init<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_game_set_replicated_data_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_game_set_replicated_data_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_game_set_replicated_data_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_hopper_voting_configuration_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_hopper_voting_configuration_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_hopper_voting_configuration_flags@@@Z");
//};

//public: unsigned char const & s_static_array<unsigned char, 16>::operator[]<unsigned long>(unsigned long) const
//{
//    mangled_ppc("??$?AK@?$s_static_array@E$0BA@@@QBAABEK@Z");
//};

//public: bool c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::test(enum e_multiplayer_team) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@QBA_NW4e_multiplayer_team@@@Z");
//};

//public: void c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::set(enum e_multiplayer_team, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@QAAXW4e_multiplayer_team@@_N@Z");
//};

//public: void c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::set_range(enum e_multiplayer_team, enum e_multiplayer_team, bool)
//{
//    mangled_ppc("?set_range@?$c_flags_no_init@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@QAAXW4e_multiplayer_team@@0_N@Z");
//};

//public: struct s_hopper_universal_configuration::s_per_team_data const & s_static_array<struct s_hopper_universal_configuration::s_per_team_data, 8>::operator[]<enum e_multiplayer_team>(enum e_multiplayer_team) const
//{
//    mangled_ppc("??$?AW4e_multiplayer_team@@@?$s_static_array@Us_per_team_data@s_hopper_universal_configuration@@$07@@QBAABUs_per_team_data@s_hopper_universal_configuration@@W4e_multiplayer_team@@@Z");
//};

//public: struct s_hopper_query_configuration const & s_static_array<struct s_hopper_query_configuration, 4>::operator[]<enum e_hopper_query_type>(enum e_hopper_query_type) const
//{
//    mangled_ppc("??$?AW4e_hopper_query_type@@@?$s_static_array@Us_hopper_query_configuration@@$03@@QBAABUs_hopper_query_configuration@@W4e_hopper_query_type@@@Z");
//};

//public: void c_big_flags_typed_no_init<long, 256>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_big_flags_typed_no_init@J$0BAA@@@QAAXJ_N@Z");
//};

//public: class c_big_flags_typed_no_init<long, 256> & c_big_flags_typed_no_init<long, 256>::operator|=(class c_big_flags_typed_no_init<long, 256> const &)
//{
//    mangled_ppc("??_5?$c_big_flags_typed_no_init@J$0BAA@@@QAAAAV0@ABV0@@Z");
//};

//public: void c_big_flags_typed_no_init<long, 256>::and_not(class c_big_flags_typed_no_init<long, 256> const *)
//{
//    mangled_ppc("?and_not@?$c_big_flags_typed_no_init@J$0BAA@@@QAAXPBV1@@Z");
//};

//public: void c_static_wchar_string<16>::set_char(char const *)
//{
//    mangled_ppc("?set_char@?$c_static_wchar_string@$0BA@@@QAAXPBD@Z");
//};

//public: void c_flags_no_init<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_matchmaking_voting_description_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_matchmaking_voting_description_flags@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_matchmaking_voting_description_flags@@_N@Z");
//};

//public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator^(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??T?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: struct s_hopper_configuration_table const * c_blf_simple_network_storage_file<struct s_hopper_configuration_table>::get(void) const
//{
//    mangled_ppc("?get@?$c_blf_simple_network_storage_file@Us_hopper_configuration_table@@@@QBAPBUs_hopper_configuration_table@@XZ");
//};

//public: struct s_game_hopper_description_table const * c_blf_simple_network_storage_file<struct s_game_hopper_description_table>::get(void) const
//{
//    mangled_ppc("?get@?$c_blf_simple_network_storage_file@Us_game_hopper_description_table@@@@QBAPBUs_game_hopper_description_table@@XZ");
//};

//public: struct s_network_session_parameter_matchmaking_voting_option const & s_static_array<struct s_network_session_parameter_matchmaking_voting_option, 3>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_session_parameter_matchmaking_voting_option@@$02@@QBAABUs_network_session_parameter_matchmaking_voting_option@@J@Z");
//};

//public: struct s_network_session_parameter_matchmaking_voting_description & s_static_array<struct s_network_session_parameter_matchmaking_voting_description, 3>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_session_parameter_matchmaking_voting_description@@$02@@QAAAAUs_network_session_parameter_matchmaking_voting_description@@J@Z");
//};

//public: struct s_network_session_parameter_matchmaking_voting_round const & s_static_array<struct s_network_session_parameter_matchmaking_voting_round, 12>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_session_parameter_matchmaking_voting_round@@$0M@@@QBAABUs_network_session_parameter_matchmaking_voting_round@@J@Z");
//};

//public: struct s_network_session_parameter_matchmaking_load_failure const & s_static_array<struct s_network_session_parameter_matchmaking_load_failure, 4>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_session_parameter_matchmaking_load_failure@@$03@@QBAABUs_network_session_parameter_matchmaking_load_failure@@J@Z");
//};

//public: struct s_network_session_parameter_matchmaking_voting_round & s_static_array<struct s_network_session_parameter_matchmaking_voting_round, 12>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_session_parameter_matchmaking_voting_round@@$0M@@@QAAAAUs_network_session_parameter_matchmaking_voting_round@@J@Z");
//};

//public: class c_big_flags<256> & s_static_array<class c_big_flags<256>, 3>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_big_flags@$0BAA@@@$02@@QAAAAV?$c_big_flags@$0BAA@@@J@Z");
//};

//public: struct s_network_session_parameter_matchmaking_voting_option & s_static_array<struct s_network_session_parameter_matchmaking_voting_option, 3>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_session_parameter_matchmaking_voting_option@@$02@@QAAAAUs_network_session_parameter_matchmaking_voting_option@@J@Z");
//};

//public: static bool c_flags_no_init<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_game_set_replicated_data_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_game_set_replicated_data_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_game_set_replicated_data_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_game_set_replicated_data_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_game_set_replicated_data_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_game_set_replicated_data_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_game_set_replicated_data_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_hopper_voting_configuration_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_hopper_voting_configuration_flags@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_hopper_voting_configuration_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_hopper_voting_configuration_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_hopper_voting_configuration_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_hopper_voting_configuration_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_hopper_voting_configuration_flags@@@Z");
//};

//public: static bool s_static_array<unsigned char, 16>::valid<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$valid@K@?$s_static_array@E$0BA@@@SA_NK@Z");
//};

//public: class c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::operator~(void) const
//{
//    mangled_ppc("??S?$c_flags_no_init@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@QBA?AV0@XZ");
//};

//public: class c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::operator&=(class c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_4?$c_flags_no_init@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: class c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_5?$c_flags_no_init@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: static class c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_multiplayer_team, enum e_multiplayer_team)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@SA?AV1@W4e_multiplayer_team@@0@Z");
//};

//public: static bool c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::valid_bit(enum e_multiplayer_team)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@SA_NW4e_multiplayer_team@@@Z");
//};

//public: bool c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::flag_size_type(enum e_multiplayer_team)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@CAKW4e_multiplayer_team@@@Z");
//};

//public: static bool s_static_array<struct s_hopper_universal_configuration::s_per_team_data, 8>::valid<enum e_multiplayer_team>(enum e_multiplayer_team)
//{
//    mangled_ppc("??$valid@W4e_multiplayer_team@@@?$s_static_array@Us_per_team_data@s_hopper_universal_configuration@@$07@@SA_NW4e_multiplayer_team@@@Z");
//};

//public: static bool s_static_array<struct s_hopper_query_configuration, 4>::valid<enum e_hopper_query_type>(enum e_hopper_query_type)
//{
//    mangled_ppc("??$valid@W4e_hopper_query_type@@@?$s_static_array@Us_hopper_query_configuration@@$03@@SA_NW4e_hopper_query_type@@@Z");
//};

//public: void c_big_flags_typed_no_init<long, 256>::and_not_range(class c_big_flags_typed_no_init<long, 256> const *, long, long)
//{
//    mangled_ppc("?and_not_range@?$c_big_flags_typed_no_init@J$0BAA@@@QAAXPBV1@JJ@Z");
//};

//public: static bool c_flags_no_init<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_voting_description_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_matchmaking_voting_description_flags@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_matchmaking_voting_description_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_matchmaking_voting_description_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_voting_description_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_matchmaking_voting_description_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_matchmaking_voting_description_flags@@@Z");
//};

//public: static bool s_static_array<struct s_network_session_parameter_matchmaking_voting_option, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_session_parameter_matchmaking_voting_option@@$02@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_network_session_parameter_matchmaking_voting_description, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_session_parameter_matchmaking_voting_description@@$02@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_network_session_parameter_matchmaking_voting_round, 12>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_session_parameter_matchmaking_voting_round@@$0M@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_network_session_parameter_matchmaking_load_failure, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_session_parameter_matchmaking_load_failure@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_big_flags<256>, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_big_flags@$0BAA@@@$02@@SA_NJ@Z");
//};

//public: void c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//public: s_multiplayer_game_hopper_globals::s_multiplayer_game_hopper_globals(void)
//{
//    mangled_ppc("??0s_multiplayer_game_hopper_globals@@QAA@XZ");
//};

//public: s_game_set::s_game_set(void)
//{
//    mangled_ppc("??0s_game_set@@QAA@XZ");
//};

//public: s_game_set_entry::s_game_set_entry(void)
//{
//    mangled_ppc("??0s_game_set_entry@@QAA@XZ");
//};

//public: s_game_set_file::s_game_set_file(void)
//{
//    mangled_ppc("??0s_game_set_file@@QAA@XZ");
//};

//public: c_http_blf_simple_downloader<struct s_game_set>::c_http_blf_simple_downloader<struct s_game_set>(void)
//{
//    mangled_ppc("??0?$c_http_blf_simple_downloader@Us_game_set@@@@QAA@XZ");
//};

//public: c_http_blf_simple_downloader<class c_game_variant>::c_http_blf_simple_downloader<class c_game_variant>(void)
//{
//    mangled_ppc("??0?$c_http_blf_simple_downloader@Vc_game_variant@@@@QAA@XZ");
//};

//public: c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>::c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>(void)
//{
//    mangled_ppc("??0?$c_http_blf_simple_downloader@Us_blf_chunk_map_variant@@@@QAA@XZ");
//};

//public: c_http_stored_buffer_downloader<56481>::c_http_stored_buffer_downloader<56481>(void)
//{
//    mangled_ppc("??0?$c_http_stored_buffer_downloader@$0NMKB@@@QAA@XZ");
//};

//public: c_http_stored_buffer_downloader<65697>::c_http_stored_buffer_downloader<65697>(void)
//{
//    mangled_ppc("??0?$c_http_stored_buffer_downloader@$0BAAKB@@@QAA@XZ");
//};

//public: c_http_stored_buffer_downloader<30917>::c_http_stored_buffer_downloader<30917>(void)
//{
//    mangled_ppc("??0?$c_http_stored_buffer_downloader@$0HIMF@@@QAA@XZ");
//};

//merged_829B0400
//{
//    mangled_ppc("merged_829B0400");
//};

//public: virtual c_http_stored_buffer_downloader<56481>::~c_http_stored_buffer_downloader<56481>(void)
//{
//    mangled_ppc("??1?$c_http_stored_buffer_downloader@$0NMKB@@@UAA@XZ");
//};

//merged_829B0470
//{
//    mangled_ppc("merged_829B0470");
//};

//public: virtual c_http_stored_buffer_downloader<65697>::~c_http_stored_buffer_downloader<65697>(void)
//{
//    mangled_ppc("??1?$c_http_stored_buffer_downloader@$0BAAKB@@@UAA@XZ");
//};

//merged_829B04E0
//{
//    mangled_ppc("merged_829B04E0");
//};

//public: virtual c_http_stored_buffer_downloader<30917>::~c_http_stored_buffer_downloader<30917>(void)
//{
//    mangled_ppc("??1?$c_http_stored_buffer_downloader@$0HIMF@@@UAA@XZ");
//};

//public: s_multiplayer_game_hopper_globals::~s_multiplayer_game_hopper_globals(void)
//{
//    mangled_ppc("??1s_multiplayer_game_hopper_globals@@QAA@XZ");
//};

//public: c_http_blf_simple_downloader<struct s_game_set>::~c_http_blf_simple_downloader<struct s_game_set>(void)
//{
//    mangled_ppc("??1?$c_http_blf_simple_downloader@Us_game_set@@@@QAA@XZ");
//};

//public: c_http_blf_simple_downloader<class c_game_variant>::~c_http_blf_simple_downloader<class c_game_variant>(void)
//{
//    mangled_ppc("??1?$c_http_blf_simple_downloader@Vc_game_variant@@@@QAA@XZ");
//};

//public: c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>::~c_http_blf_simple_downloader<struct s_blf_chunk_map_variant>(void)
//{
//    mangled_ppc("??1?$c_http_blf_simple_downloader@Us_blf_chunk_map_variant@@@@QAA@XZ");
//};

//void multiplayer_game_hopper_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fmultiplayer_game_hopper_globals@@YAXXZ");
//};

