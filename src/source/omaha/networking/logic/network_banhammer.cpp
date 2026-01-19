/* ---------- headers */

#include "omaha\networking\logic\network_banhammer.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum s_online_file_transfer_types::e_upload_source, char, 0, 2, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_upload_source@s_online_file_transfer_types@@D$0A@$01Us_default_enum_string_resolver@@@@2HB"
// public: static enum s_online_file_transfer_types::e_upload_source const c_enum_no_init<enum s_online_file_transfer_types::e_upload_source, char, 0, 2, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_upload_source@s_online_file_transfer_types@@D$0A@$01Us_default_enum_string_resolver@@@@2W4e_upload_source@s_online_file_transfer_types@@B"
// public: static int const c_enum_no_init<enum s_online_file_transfer_types::e_upload_target, char, 0, 3, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_upload_target@s_online_file_transfer_types@@D$0A@$02Us_default_enum_string_resolver@@@@2HB"
// public: static enum s_online_file_transfer_types::e_upload_target const c_enum_no_init<enum s_online_file_transfer_types::e_upload_target, char, 0, 3, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_upload_target@s_online_file_transfer_types@@D$0A@$02Us_default_enum_string_resolver@@@@2W4e_upload_target@s_online_file_transfer_types@@B"
// public: static long const s_static_string<43>::k_index_not_found; // "?k_index_not_found@?$s_static_string@$0CL@@@2JB"
// public: static long const s_static_string<43>::k_element_count; // "?k_element_count@?$s_static_string@$0CL@@@2JB"
// public: static int const c_enum_no_init<enum s_online_file_transfer_types::e_download_target, char, 0, 2, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_download_target@s_online_file_transfer_types@@D$0A@$01Us_default_enum_string_resolver@@@@2HB"
// public: static enum s_online_file_transfer_types::e_download_target const c_enum_no_init<enum s_online_file_transfer_types::e_download_target, char, 0, 2, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_download_target@s_online_file_transfer_types@@D$0A@$01Us_default_enum_string_resolver@@@@2W4e_download_target@s_online_file_transfer_types@@B"
// public: static enum s_online_file_transfer_types::e_download_flag const c_flags_no_init<enum s_online_file_transfer_types::e_download_flag, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_download_flag@s_online_file_transfer_types@@E$00Us_default_enum_string_resolver@@@@2W4e_download_flag@s_online_file_transfer_types@@B"
// public: static int const c_enum_no_init<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@2HB"
// public: static enum s_online_file_transfer_types::e_type const c_enum_no_init<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@2W4e_type@s_online_file_transfer_types@@B"
// public: static int const c_enum_no_init<enum s_online_file_transfer_types::e_owner, char, -1, 2, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_owner@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@2HB"
// public: static enum s_online_file_transfer_types::e_owner const c_enum_no_init<enum s_online_file_transfer_types::e_owner, char, -1, 2, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_owner@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@2W4e_owner@s_online_file_transfer_types@@B"
// public: static int const c_enum_no_init<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@2HB"
// public: static enum s_online_file_transfer_types::e_status const c_enum_no_init<enum s_online_file_transfer_types::e_status, char, -1, 7, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_status@s_online_file_transfer_types@@D$0?0$06Us_default_enum_string_resolver@@@@2W4e_status@s_online_file_transfer_types@@B"
// public: static enum s_online_file_transfer_types::e_flag const c_flags_no_init<enum s_online_file_transfer_types::e_flag, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_flag@s_online_file_transfer_types@@E$00Us_default_enum_string_resolver@@@@2W4e_flag@s_online_file_transfer_types@@B"
// public: static unsigned int const c_online_file_transfer_tracker::k_max_user_transfer_count; // "?k_max_user_transfer_count@c_online_file_transfer_tracker@@2IB"
// private: static unsigned int const c_online_file_transfer_tracker::k_commit_queue_size; // "?k_commit_queue_size@c_online_file_transfer_tracker@@0IB"
// public: static enum e_network_banhammer_controller_flags const c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_network_banhammer_controller_flags@@E$01Us_default_enum_string_resolver@@@@2W4e_network_banhammer_controller_flags@@B"
// public: static enum e_network_banhammer_flags const c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_network_banhammer_flags@@E$02Us_default_enum_string_resolver@@@@2W4e_network_banhammer_flags@@B"
// public: static long const s_static_array<struct s_network_banhammer_controller_data, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_banhammer_controller_data@@$03@@2JB"
// public: static long const s_static_array<struct s_network_banhammer_remote_cheater_data, 64>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_banhammer_remote_cheater_data@@$0EA@@@2JB"
// char const **k_network_banhammer_ban_flag_strings; // "?k_network_banhammer_ban_flag_strings@@3PAPBDA"
// char const **k_network_banhammer_cheat_flag_strings; // "?k_network_banhammer_cheat_flag_strings@@3PAPBDA"
// char const **k_network_banhammer_upload_failure_strings; // "?k_network_banhammer_upload_failure_strings@@3PAPBDA"
// bool g_network_banhammer_lsp_sync_enabled; // "?g_network_banhammer_lsp_sync_enabled@@3_NA"
// bool g_network_banhammer_machine_locality_override_enabled; // "?g_network_banhammer_machine_locality_override_enabled@@3_NA"
// bool net_dump_network_statistics_on_upload; // "?net_dump_network_statistics_on_upload@@3_NA"
// struct s_machine_locality g_network_banhammer_machine_locality_override; // "?g_network_banhammer_machine_locality_override@@3Us_machine_locality@@A"
// struct s_network_banhammer_globals g_network_banhammer_globals; // "?g_network_banhammer_globals@@3Us_network_banhammer_globals@@A"

// bool network_banhammer_initialize(void);
// void network_banhammer_update(void);
// enum e_network_file_load_status network_banhammer_loaded_for_all_controllers(void);
// enum e_network_file_load_status network_banhammer_loaded_for_controller(enum e_controller_index);
// enum e_network_file_load_status network_banhammer_repeated_play_list_loaded_for_all_controllers(void);
// enum e_network_file_load_status network_banhammer_repeated_play_list_loaded_for_controller(enum e_controller_index);
// enum e_network_file_load_status network_banhammer_loaded_map_file_manifest(void);
// void network_banhammer_update_for_new_map(void);
// bool network_banhammer_notify_machine_file_updated(bool);
// void network_banhammer_notify_machine_file_failed(enum e_download_status);
// bool network_banhammer_notify_user_file_updated(unsigned __int64, bool);
// public: c_online_file_metadata::c_online_file_metadata(void);
// public: void c_online_file_transfer::set_download_from_auto_queue(bool);
// public: bool c_online_file_transfer::is_download(void) const;
// public: bool c_online_file_transfer_tracker::enqueue_insert(class c_online_file_transfer const &);
// void network_banhammer_notify_user_file_failed(unsigned __int64);
// void network_banhammer_notify_match_starting(void);
// public: void s_network_banhammer_quit_probation_data::initialize(void);
// public: void s_network_banhammer_quit_probation_data::game_started(void);
// void network_banhammer_notify_match_quit(void);
// public: void s_network_banhammer_quit_probation_data::game_quit(void);
// void network_banhammer_notify_match_ending(class c_game_results const *);
// void network_banhammer_match_ending_update_quit_probtion(class c_game_results const *);
// void network_banhammer_match_ending_update_idle_controllers(class c_game_results const *);
// void network_banhammer_set_machine_locality(struct s_machine_locality const *);
// struct s_machine_locality const * network_banhammer_get_machine_locality(void);
// void network_banhammer_notify_machine_upload_failure(enum e_network_banhammer_upload_failure_type);
// void network_banhammer_notify_controller_upload_failure(enum e_controller_index, enum e_network_banhammer_upload_failure_type);
// void network_banhammer_notify_game_results_upload_completion(bool);
// void network_banhammer_get_cheating_report(struct s_network_banhammer_cheating_report *);
// bool network_banhammer_get_controller_idle_status(enum e_controller_index, bool *, long, long *, long *, long *, long *);
// long network_time_since(unsigned long);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_difference_msec(unsigned long, unsigned long);
// bool network_banhammer_controller_idle_for_too_long(enum e_controller_index);
// class c_flags<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> network_banhammer_get_controller_ban_flags(enum e_controller_index);
// unsigned long network_banhammer_get_controller_ban_message_flags(enum e_controller_index);
// class c_flags<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> network_banhammer_get_controller_cheat_flags(enum e_controller_index);
// void network_banhammer_remote_player_caught_cheating(unsigned __int64const *, struct s_transport_secure_address const *, wchar_t const *, unsigned __int64const *, class c_flags<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>);
// void network_banhammer_local_box_caught_cheating(class c_flags<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>);
// void network_banhammer_controller_caught_cheating(enum e_controller_index, class c_flags<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>);
// long network_banhammer_get_controller_repeated_play_coefficient(enum e_controller_index);
// void network_banhammer_set_controller_repeated_play_coefficient(enum e_controller_index, long);
// void network_banhammer_set_controller_cheat_flags(enum e_controller_index, char const *, bool);
// void network_banhammer_set_controller_ban_flags(enum e_controller_index, char const *, long, bool);
// void network_banhammer_display_strings(void);
// void network_banhammer_display_repeated_play_list(void);
// void network_banhammer_set_machine_locality_override(float, float, float, bool);
// void network_banhammer_upload_network_statistics(void);
// bool network_banhammer_controller_is_xuid(enum e_controller_index, unsigned __int64);
// void network_banhammer_compute_repeated_play_adjustment_weight(enum e_controller_index, unsigned short, long, long, long, unsigned __int64const *, long, long *, bool *);
// void network_banhammer_modify_repeated_play_list(enum e_controller_index, unsigned short, unsigned __int64const *, long);
// void network_banhammer_dump_network_statistics(void);
// void write_buffer_to_file(char const *, void const *, long);
// void network_banhammer_load_machine_file_from_file(char const *);
// void network_banhammer_process_machine_file_from_buffer(char const *, long, bool);
// void network_banhammer_update_machine(void);
// void network_banhammer_update_machine_network_statistics(void);
// public: void c_http_buffer_downloader::set_extra_headers(char const *);
// void network_banhammer_update_controllers(void);
// void build_idle_controller_button_state(struct gamepad_state const *, struct gamepad_state *);
// void network_banhammer_find_cheaters_in_current_session(void);
// void network_banhammer_report_on_cheaters(void);
// void network_banhammer_get_local_players_for_web_event(struct s_network_web_event_local_player *, long, long *);
// void network_banhammer_update_live_ban(void);
// void network_banhammer_update_network_properties_for_all_controllers(void);
// public: virtual bool c_banhammer_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: virtual void c_banhammer_controller_monitor::handle_controller_sign_in(enum e_controller_index);
// void network_banhammer_initialize_controller(enum e_controller_index);
// public: virtual void c_banhammer_controller_monitor::handle_controller_sign_out(enum e_controller_index);
// void network_banhammer_register_online_user_notification(void);
// public: c_banhammer_controller_monitor::c_banhammer_controller_monitor(void);
// struct s_files_user_recent_players * network_banhammer_get_controller_repeated_play_list(enum e_controller_index);
// bool network_banhammer_controller_is_guest(enum e_controller_index);
// void network_banhammer_process_network_statistics(struct s_files_user_network_statistics const *, bool);
// public: class c_flags<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> & c_flags<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::operator=(class c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &);
// public: c_flags<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::c_flags<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>(unsigned short);
// public: class c_flags<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> & c_flags<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::operator=(class c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> const &);
// public: bool c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver>::operator==(enum e_content_item_type) const;
// public: bool c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_game_engine_type) const;
// public: struct s_bandwidth_client_measurement & c_static_stack<struct s_bandwidth_client_measurement, 8>::operator[](long);
// public: bool c_enum_no_init<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>::operator==(enum s_online_file_transfer_types::e_type) const;
// public: bool c_enum_no_init<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::operator==(enum e_game_results_leave_reason) const;
// public: void s_static_array<long, 4>::set_all(long const &);
// public: static long s_static_array<struct s_network_banhammer_remote_cheater_data, 64>::get_count(void);
// public: void c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::set(enum e_network_banhammer_cheat_flags, bool);
// public: class c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &) const;
// public: class c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::operator|(class c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &) const;
// public: class c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &);
// public: class c_static_string<1024> c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::to_string(void) const;
// public: void c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::set(enum e_network_banhammer_ban_flags, bool);
// public: class c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::operator|(class c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> const &) const;
// public: void c_flags_no_init<enum s_online_file_transfer_types::e_download_flag, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum s_online_file_transfer_types::e_download_flag, bool);
// public: unsigned char const * c_stored_buffer_network_storage_file<9001>::get(long *) const;
// public: struct s_files_user_banhammer_messages const * c_blf_simple_network_storage_file<struct s_files_user_banhammer_messages>::get(void) const;
// public: struct s_files_user_recent_players * c_network_storage_file_recent_players<struct s_files_user_recent_players>::get_writeable(void);
// public: bool c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_network_banhammer_controller_flags) const;
// public: void c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_network_banhammer_controller_flags, bool);
// public: void c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_network_banhammer_flags) const;
// public: void c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_network_banhammer_flags, bool);
// public: struct s_network_banhammer_controller_data & s_static_array<struct s_network_banhammer_controller_data, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: struct s_network_banhammer_remote_cheater_data & s_static_array<struct s_network_banhammer_remote_cheater_data, 64>::operator[]<long>(long);
// public: long & s_static_array<long, 4>::operator[]<enum e_network_banhammer_upload_failure_type>(enum e_network_banhammer_upload_failure_type);
// short int_abs<short>(short const &);
// public: struct s_network_quality_context_statistics & s_static_array<struct s_network_quality_context_statistics, 2>::operator[]<long>(long);
// public: class c_static_stack<struct s_bandwidth_host_measurement, 16> & s_static_array<class c_static_stack<struct s_bandwidth_host_measurement, 16>, 2>::operator[]<long>(long);
// public: bool c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_network_banhammer_cheat_flags) const;
// public: static bool c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_network_banhammer_cheat_flags);
// private: static unsigned char c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_banhammer_cheat_flags);
// public: static bool c_flags_no_init<enum s_online_file_transfer_types::e_download_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_online_file_transfer_types::e_download_flag);
// private: static unsigned char c_flags_no_init<enum s_online_file_transfer_types::e_download_flag, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_online_file_transfer_types::e_download_flag);
// public: static bool c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_network_banhammer_controller_flags);
// private: static unsigned char c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_banhammer_controller_flags);
// private: static unsigned char c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: static bool c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_network_banhammer_flags);
// private: static unsigned char c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_banhammer_flags);
// public: static bool s_static_array<struct s_network_banhammer_controller_data, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: static bool s_static_array<struct s_network_banhammer_remote_cheater_data, 64>::valid<long>(long);
// public: static bool s_static_array<long, 4>::valid<enum e_network_banhammer_upload_failure_type>(enum e_network_banhammer_upload_failure_type);
// public: static bool s_static_array<class c_static_stack<struct s_bandwidth_host_measurement, 16>, 2>::valid<long>(long);
// private: static unsigned char c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_banhammer_controller_flags);
// difftime;
// time;
// public: s_network_banhammer_globals::s_network_banhammer_globals(void);
// public: s_static_array<struct s_network_banhammer_controller_data, 4>::s_static_array<struct s_network_banhammer_controller_data, 4>(void);
// public: s_static_array<struct s_network_banhammer_remote_cheater_data, 64>::s_static_array<struct s_network_banhammer_remote_cheater_data, 64>(void);
// public: s_files_user_network_statistics::s_files_user_network_statistics(void);
// public: s_network_banhammer_controller_data::s_network_banhammer_controller_data(void);
// public: s_network_banhammer_remote_cheater_data::s_network_banhammer_remote_cheater_data(void);
// public: c_flags<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned char c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_banhammer_flags);
// public: s_network_banhammer_globals::~s_network_banhammer_globals(void);
// void g_network_banhammer_globals::`dynamic atexit destructor'(void);

//bool network_banhammer_initialize(void)
//{
//    mangled_ppc("?network_banhammer_initialize@@YA_NXZ");
//};

//void network_banhammer_update(void)
//{
//    mangled_ppc("?network_banhammer_update@@YAXXZ");
//};

//enum e_network_file_load_status network_banhammer_loaded_for_all_controllers(void)
//{
//    mangled_ppc("?network_banhammer_loaded_for_all_controllers@@YA?AW4e_network_file_load_status@@XZ");
//};

//enum e_network_file_load_status network_banhammer_loaded_for_controller(enum e_controller_index)
//{
//    mangled_ppc("?network_banhammer_loaded_for_controller@@YA?AW4e_network_file_load_status@@W4e_controller_index@@@Z");
//};

//enum e_network_file_load_status network_banhammer_repeated_play_list_loaded_for_all_controllers(void)
//{
//    mangled_ppc("?network_banhammer_repeated_play_list_loaded_for_all_controllers@@YA?AW4e_network_file_load_status@@XZ");
//};

//enum e_network_file_load_status network_banhammer_repeated_play_list_loaded_for_controller(enum e_controller_index)
//{
//    mangled_ppc("?network_banhammer_repeated_play_list_loaded_for_controller@@YA?AW4e_network_file_load_status@@W4e_controller_index@@@Z");
//};

//enum e_network_file_load_status network_banhammer_loaded_map_file_manifest(void)
//{
//    mangled_ppc("?network_banhammer_loaded_map_file_manifest@@YA?AW4e_network_file_load_status@@XZ");
//};

//void network_banhammer_update_for_new_map(void)
//{
//    mangled_ppc("?network_banhammer_update_for_new_map@@YAXXZ");
//};

//bool network_banhammer_notify_machine_file_updated(bool)
//{
//    mangled_ppc("?network_banhammer_notify_machine_file_updated@@YA_N_N@Z");
//};

//void network_banhammer_notify_machine_file_failed(enum e_download_status)
//{
//    mangled_ppc("?network_banhammer_notify_machine_file_failed@@YAXW4e_download_status@@@Z");
//};

//bool network_banhammer_notify_user_file_updated(unsigned __int64, bool)
//{
//    mangled_ppc("?network_banhammer_notify_user_file_updated@@YA_N_K_N@Z");
//};

//public: c_online_file_metadata::c_online_file_metadata(void)
//{
//    mangled_ppc("??0c_online_file_metadata@@QAA@XZ");
//};

//public: void c_online_file_transfer::set_download_from_auto_queue(bool)
//{
//    mangled_ppc("?set_download_from_auto_queue@c_online_file_transfer@@QAAX_N@Z");
//};

//public: bool c_online_file_transfer::is_download(void) const
//{
//    mangled_ppc("?is_download@c_online_file_transfer@@QBA_NXZ");
//};

//public: bool c_online_file_transfer_tracker::enqueue_insert(class c_online_file_transfer const &)
//{
//    mangled_ppc("?enqueue_insert@c_online_file_transfer_tracker@@QAA_NABVc_online_file_transfer@@@Z");
//};

//void network_banhammer_notify_user_file_failed(unsigned __int64)
//{
//    mangled_ppc("?network_banhammer_notify_user_file_failed@@YAX_K@Z");
//};

//void network_banhammer_notify_match_starting(void)
//{
//    mangled_ppc("?network_banhammer_notify_match_starting@@YAXXZ");
//};

//public: void s_network_banhammer_quit_probation_data::initialize(void)
//{
//    mangled_ppc("?initialize@s_network_banhammer_quit_probation_data@@QAAXXZ");
//};

//public: void s_network_banhammer_quit_probation_data::game_started(void)
//{
//    mangled_ppc("?game_started@s_network_banhammer_quit_probation_data@@QAAXXZ");
//};

//void network_banhammer_notify_match_quit(void)
//{
//    mangled_ppc("?network_banhammer_notify_match_quit@@YAXXZ");
//};

//public: void s_network_banhammer_quit_probation_data::game_quit(void)
//{
//    mangled_ppc("?game_quit@s_network_banhammer_quit_probation_data@@QAAXXZ");
//};

//void network_banhammer_notify_match_ending(class c_game_results const *)
//{
//    mangled_ppc("?network_banhammer_notify_match_ending@@YAXPBVc_game_results@@@Z");
//};

//void network_banhammer_match_ending_update_quit_probtion(class c_game_results const *)
//{
//    mangled_ppc("?network_banhammer_match_ending_update_quit_probtion@@YAXPBVc_game_results@@@Z");
//};

//void network_banhammer_match_ending_update_idle_controllers(class c_game_results const *)
//{
//    mangled_ppc("?network_banhammer_match_ending_update_idle_controllers@@YAXPBVc_game_results@@@Z");
//};

//void network_banhammer_set_machine_locality(struct s_machine_locality const *)
//{
//    mangled_ppc("?network_banhammer_set_machine_locality@@YAXPBUs_machine_locality@@@Z");
//};

//struct s_machine_locality const * network_banhammer_get_machine_locality(void)
//{
//    mangled_ppc("?network_banhammer_get_machine_locality@@YAPBUs_machine_locality@@XZ");
//};

//void network_banhammer_notify_machine_upload_failure(enum e_network_banhammer_upload_failure_type)
//{
//    mangled_ppc("?network_banhammer_notify_machine_upload_failure@@YAXW4e_network_banhammer_upload_failure_type@@@Z");
//};

//void network_banhammer_notify_controller_upload_failure(enum e_controller_index, enum e_network_banhammer_upload_failure_type)
//{
//    mangled_ppc("?network_banhammer_notify_controller_upload_failure@@YAXW4e_controller_index@@W4e_network_banhammer_upload_failure_type@@@Z");
//};

//void network_banhammer_notify_game_results_upload_completion(bool)
//{
//    mangled_ppc("?network_banhammer_notify_game_results_upload_completion@@YAX_N@Z");
//};

//void network_banhammer_get_cheating_report(struct s_network_banhammer_cheating_report *)
//{
//    mangled_ppc("?network_banhammer_get_cheating_report@@YAXPAUs_network_banhammer_cheating_report@@@Z");
//};

//bool network_banhammer_get_controller_idle_status(enum e_controller_index, bool *, long, long *, long *, long *, long *)
//{
//    mangled_ppc("?network_banhammer_get_controller_idle_status@@YA_NW4e_controller_index@@PA_NJPAJ222@Z");
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

//bool network_banhammer_controller_idle_for_too_long(enum e_controller_index)
//{
//    mangled_ppc("?network_banhammer_controller_idle_for_too_long@@YA_NW4e_controller_index@@@Z");
//};

//class c_flags<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> network_banhammer_get_controller_ban_flags(enum e_controller_index)
//{
//    mangled_ppc("?network_banhammer_get_controller_ban_flags@@YA?AV?$c_flags@W4e_network_banhammer_ban_flags@@G$0BA@Us_default_enum_string_resolver@@@@W4e_controller_index@@@Z");
//};

//unsigned long network_banhammer_get_controller_ban_message_flags(enum e_controller_index)
//{
//    mangled_ppc("?network_banhammer_get_controller_ban_message_flags@@YAKW4e_controller_index@@@Z");
//};

//class c_flags<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> network_banhammer_get_controller_cheat_flags(enum e_controller_index)
//{
//    mangled_ppc("?network_banhammer_get_controller_cheat_flags@@YA?AV?$c_flags@W4e_network_banhammer_cheat_flags@@E$05Us_default_enum_string_resolver@@@@W4e_controller_index@@@Z");
//};

//void network_banhammer_remote_player_caught_cheating(unsigned __int64const *, struct s_transport_secure_address const *, wchar_t const *, unsigned __int64const *, class c_flags<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?network_banhammer_remote_player_caught_cheating@@YAXPB_KPBUs_transport_secure_address@@PB_W0V?$c_flags@W4e_network_banhammer_cheat_flags@@E$05Us_default_enum_string_resolver@@@@@Z");
//};

//void network_banhammer_local_box_caught_cheating(class c_flags<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?network_banhammer_local_box_caught_cheating@@YAXV?$c_flags@W4e_network_banhammer_cheat_flags@@E$05Us_default_enum_string_resolver@@@@@Z");
//};

//void network_banhammer_controller_caught_cheating(enum e_controller_index, class c_flags<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?network_banhammer_controller_caught_cheating@@YAXW4e_controller_index@@V?$c_flags@W4e_network_banhammer_cheat_flags@@E$05Us_default_enum_string_resolver@@@@@Z");
//};

//long network_banhammer_get_controller_repeated_play_coefficient(enum e_controller_index)
//{
//    mangled_ppc("?network_banhammer_get_controller_repeated_play_coefficient@@YAJW4e_controller_index@@@Z");
//};

//void network_banhammer_set_controller_repeated_play_coefficient(enum e_controller_index, long)
//{
//    mangled_ppc("?network_banhammer_set_controller_repeated_play_coefficient@@YAXW4e_controller_index@@J@Z");
//};

//void network_banhammer_set_controller_cheat_flags(enum e_controller_index, char const *, bool)
//{
//    mangled_ppc("?network_banhammer_set_controller_cheat_flags@@YAXW4e_controller_index@@PBD_N@Z");
//};

//void network_banhammer_set_controller_ban_flags(enum e_controller_index, char const *, long, bool)
//{
//    mangled_ppc("?network_banhammer_set_controller_ban_flags@@YAXW4e_controller_index@@PBDJ_N@Z");
//};

//void network_banhammer_display_strings(void)
//{
//    mangled_ppc("?network_banhammer_display_strings@@YAXXZ");
//};

//void network_banhammer_display_repeated_play_list(void)
//{
//    mangled_ppc("?network_banhammer_display_repeated_play_list@@YAXXZ");
//};

//void network_banhammer_set_machine_locality_override(float, float, float, bool)
//{
//    mangled_ppc("?network_banhammer_set_machine_locality_override@@YAXMMM_N@Z");
//};

//void network_banhammer_upload_network_statistics(void)
//{
//    mangled_ppc("?network_banhammer_upload_network_statistics@@YAXXZ");
//};

//bool network_banhammer_controller_is_xuid(enum e_controller_index, unsigned __int64)
//{
//    mangled_ppc("?network_banhammer_controller_is_xuid@@YA_NW4e_controller_index@@_K@Z");
//};

//void network_banhammer_compute_repeated_play_adjustment_weight(enum e_controller_index, unsigned short, long, long, long, unsigned __int64const *, long, long *, bool *)
//{
//    mangled_ppc("?network_banhammer_compute_repeated_play_adjustment_weight@@YAXW4e_controller_index@@GJJJPB_KJPAJPA_N@Z");
//};

//void network_banhammer_modify_repeated_play_list(enum e_controller_index, unsigned short, unsigned __int64const *, long)
//{
//    mangled_ppc("?network_banhammer_modify_repeated_play_list@@YAXW4e_controller_index@@GPB_KJ@Z");
//};

//void network_banhammer_dump_network_statistics(void)
//{
//    mangled_ppc("?network_banhammer_dump_network_statistics@@YAXXZ");
//};

//void write_buffer_to_file(char const *, void const *, long)
//{
//    mangled_ppc("?write_buffer_to_file@@YAXPBDPBXJ@Z");
//};

//void network_banhammer_load_machine_file_from_file(char const *)
//{
//    mangled_ppc("?network_banhammer_load_machine_file_from_file@@YAXPBD@Z");
//};

//void network_banhammer_process_machine_file_from_buffer(char const *, long, bool)
//{
//    mangled_ppc("?network_banhammer_process_machine_file_from_buffer@@YAXPBDJ_N@Z");
//};

//void network_banhammer_update_machine(void)
//{
//    mangled_ppc("?network_banhammer_update_machine@@YAXXZ");
//};

//void network_banhammer_update_machine_network_statistics(void)
//{
//    mangled_ppc("?network_banhammer_update_machine_network_statistics@@YAXXZ");
//};

//public: void c_http_buffer_downloader::set_extra_headers(char const *)
//{
//    mangled_ppc("?set_extra_headers@c_http_buffer_downloader@@QAAXPBD@Z");
//};

//void network_banhammer_update_controllers(void)
//{
//    mangled_ppc("?network_banhammer_update_controllers@@YAXXZ");
//};

//void build_idle_controller_button_state(struct gamepad_state const *, struct gamepad_state *)
//{
//    mangled_ppc("?build_idle_controller_button_state@@YAXPBUgamepad_state@@PAU1@@Z");
//};

//void network_banhammer_find_cheaters_in_current_session(void)
//{
//    mangled_ppc("?network_banhammer_find_cheaters_in_current_session@@YAXXZ");
//};

//void network_banhammer_report_on_cheaters(void)
//{
//    mangled_ppc("?network_banhammer_report_on_cheaters@@YAXXZ");
//};

//void network_banhammer_get_local_players_for_web_event(struct s_network_web_event_local_player *, long, long *)
//{
//    mangled_ppc("?network_banhammer_get_local_players_for_web_event@@YAXPAUs_network_web_event_local_player@@JPAJ@Z");
//};

//void network_banhammer_update_live_ban(void)
//{
//    mangled_ppc("?network_banhammer_update_live_ban@@YAXXZ");
//};

//void network_banhammer_update_network_properties_for_all_controllers(void)
//{
//    mangled_ppc("?network_banhammer_update_network_properties_for_all_controllers@@YAXXZ");
//};

//public: virtual bool c_banhammer_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?controller_should_be_monitored@c_banhammer_controller_monitor@@UAA_NW4e_controller_index@@V?$c_flags@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: virtual void c_banhammer_controller_monitor::handle_controller_sign_in(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_in@c_banhammer_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//void network_banhammer_initialize_controller(enum e_controller_index)
//{
//    mangled_ppc("?network_banhammer_initialize_controller@@YAXW4e_controller_index@@@Z");
//};

//public: virtual void c_banhammer_controller_monitor::handle_controller_sign_out(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_out@c_banhammer_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//void network_banhammer_register_online_user_notification(void)
//{
//    mangled_ppc("?network_banhammer_register_online_user_notification@@YAXXZ");
//};

//public: c_banhammer_controller_monitor::c_banhammer_controller_monitor(void)
//{
//    mangled_ppc("??0c_banhammer_controller_monitor@@QAA@XZ");
//};

//struct s_files_user_recent_players * network_banhammer_get_controller_repeated_play_list(enum e_controller_index)
//{
//    mangled_ppc("?network_banhammer_get_controller_repeated_play_list@@YAPAUs_files_user_recent_players@@W4e_controller_index@@@Z");
//};

//bool network_banhammer_controller_is_guest(enum e_controller_index)
//{
//    mangled_ppc("?network_banhammer_controller_is_guest@@YA_NW4e_controller_index@@@Z");
//};

//void network_banhammer_process_network_statistics(struct s_files_user_network_statistics const *, bool)
//{
//    mangled_ppc("?network_banhammer_process_network_statistics@@YAXPBUs_files_user_network_statistics@@_N@Z");
//};

//public: class c_flags<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> & c_flags<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::operator=(class c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??4?$c_flags@W4e_network_banhammer_cheat_flags@@E$05Us_default_enum_string_resolver@@@@QAAAAV0@ABV?$c_flags_no_init@W4e_network_banhammer_cheat_flags@@E$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: c_flags<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::c_flags<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>(unsigned short)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_banhammer_ban_flags@@G$0BA@Us_default_enum_string_resolver@@@@QAA@G@Z");
//};

//public: class c_flags<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> & c_flags<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::operator=(class c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??4?$c_flags@W4e_network_banhammer_ban_flags@@G$0BA@Us_default_enum_string_resolver@@@@QAAAAV0@ABV?$c_flags_no_init@W4e_network_banhammer_ban_flags@@G$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum e_content_item_type, char, -1, 8, struct s_default_enum_string_resolver>::operator==(enum e_content_item_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_content_item_type@@D$0?0$07Us_default_enum_string_resolver@@@@QBA_NW4e_content_item_type@@@Z");
//};

//public: bool c_enum_no_init<enum e_game_engine_type, char, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_game_engine_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_game_engine_type@@D$0A@$04Us_default_enum_string_resolver@@@@QBA_NW4e_game_engine_type@@@Z");
//};

//public: struct s_bandwidth_client_measurement & c_static_stack<struct s_bandwidth_client_measurement, 8>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_bandwidth_client_measurement@@$07@@QAAAAUs_bandwidth_client_measurement@@J@Z");
//};

//public: bool c_enum_no_init<enum s_online_file_transfer_types::e_type, char, -1, 2, struct s_default_enum_string_resolver>::operator==(enum s_online_file_transfer_types::e_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_type@s_online_file_transfer_types@@D$0?0$01Us_default_enum_string_resolver@@@@QBA_NW4e_type@s_online_file_transfer_types@@@Z");
//};

//public: bool c_enum_no_init<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::operator==(enum e_game_results_leave_reason) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_game_results_leave_reason@@E$0A@$0BB@Us_default_enum_string_resolver@@@@QBA_NW4e_game_results_leave_reason@@@Z");
//};

//public: void s_static_array<long, 4>::set_all(long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@J$03@@QAAXABJ@Z");
//};

//public: static long s_static_array<struct s_network_banhammer_remote_cheater_data, 64>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_network_banhammer_remote_cheater_data@@$0EA@@@SAJXZ");
//};

//public: void c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::set(enum e_network_banhammer_cheat_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_banhammer_cheat_flags@@E$05Us_default_enum_string_resolver@@@@QAAXW4e_network_banhammer_cheat_flags@@_N@Z");
//};

//public: class c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??I?$c_flags_no_init@W4e_network_banhammer_cheat_flags@@E$05Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: class c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::operator|(class c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??U?$c_flags_no_init@W4e_network_banhammer_cheat_flags@@E$05Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: class c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_5?$c_flags_no_init@W4e_network_banhammer_cheat_flags@@E$05Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: class c_static_string<1024> c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_flags_no_init@W4e_network_banhammer_cheat_flags@@E$05Us_default_enum_string_resolver@@@@QBA?AV?$c_static_string@$0EAA@@@XZ");
//};

//public: void c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::set(enum e_network_banhammer_ban_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_banhammer_ban_flags@@G$0BA@Us_default_enum_string_resolver@@@@QAAXW4e_network_banhammer_ban_flags@@_N@Z");
//};

//public: class c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::operator|(class c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??U?$c_flags_no_init@W4e_network_banhammer_ban_flags@@G$0BA@Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: void c_flags_no_init<enum s_online_file_transfer_types::e_download_flag, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum s_online_file_transfer_types::e_download_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_download_flag@s_online_file_transfer_types@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_download_flag@s_online_file_transfer_types@@_N@Z");
//};

//public: unsigned char const * c_stored_buffer_network_storage_file<9001>::get(long *) const
//{
//    mangled_ppc("?get@?$c_stored_buffer_network_storage_file@$0CDCJ@@@QBAPBEPAJ@Z");
//};

//public: struct s_files_user_banhammer_messages const * c_blf_simple_network_storage_file<struct s_files_user_banhammer_messages>::get(void) const
//{
//    mangled_ppc("?get@?$c_blf_simple_network_storage_file@Us_files_user_banhammer_messages@@@@QBAPBUs_files_user_banhammer_messages@@XZ");
//};

//public: struct s_files_user_recent_players * c_network_storage_file_recent_players<struct s_files_user_recent_players>::get_writeable(void)
//{
//    mangled_ppc("?get_writeable@?$c_network_storage_file_recent_players@Us_files_user_recent_players@@@@QAAPAUs_files_user_recent_players@@XZ");
//};

//public: bool c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_network_banhammer_controller_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_network_banhammer_controller_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_banhammer_controller_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_network_banhammer_controller_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_network_banhammer_controller_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_banhammer_controller_flags@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_network_banhammer_controller_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_banhammer_flags@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_network_banhammer_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_banhammer_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_network_banhammer_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_network_banhammer_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_banhammer_flags@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_network_banhammer_flags@@_N@Z");
//};

//public: struct s_network_banhammer_controller_data & s_static_array<struct s_network_banhammer_controller_data, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@Us_network_banhammer_controller_data@@$03@@QAAAAUs_network_banhammer_controller_data@@W4e_controller_index@@@Z");
//};

//public: struct s_network_banhammer_remote_cheater_data & s_static_array<struct s_network_banhammer_remote_cheater_data, 64>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_banhammer_remote_cheater_data@@$0EA@@@QAAAAUs_network_banhammer_remote_cheater_data@@J@Z");
//};

//public: long & s_static_array<long, 4>::operator[]<enum e_network_banhammer_upload_failure_type>(enum e_network_banhammer_upload_failure_type)
//{
//    mangled_ppc("??$?AW4e_network_banhammer_upload_failure_type@@@?$s_static_array@J$03@@QAAAAJW4e_network_banhammer_upload_failure_type@@@Z");
//};

//short int_abs<short>(short const &)
//{
//    mangled_ppc("??$int_abs@F@@YAFABF@Z");
//};

//public: struct s_network_quality_context_statistics & s_static_array<struct s_network_quality_context_statistics, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_quality_context_statistics@@$01@@QAAAAUs_network_quality_context_statistics@@J@Z");
//};

//public: class c_static_stack<struct s_bandwidth_host_measurement, 16> & s_static_array<class c_static_stack<struct s_bandwidth_host_measurement, 16>, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@$01@@QAAAAV?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@J@Z");
//};

//public: bool c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_network_banhammer_cheat_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_banhammer_cheat_flags@@E$05Us_default_enum_string_resolver@@@@QBA_NW4e_network_banhammer_cheat_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_network_banhammer_cheat_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_banhammer_cheat_flags@@E$05Us_default_enum_string_resolver@@@@SA_NW4e_network_banhammer_cheat_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_banhammer_cheat_flags, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_banhammer_cheat_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_banhammer_cheat_flags@@E$05Us_default_enum_string_resolver@@@@CAEW4e_network_banhammer_cheat_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum s_online_file_transfer_types::e_download_flag, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum s_online_file_transfer_types::e_download_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_download_flag@s_online_file_transfer_types@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_download_flag@s_online_file_transfer_types@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum s_online_file_transfer_types::e_download_flag, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum s_online_file_transfer_types::e_download_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_download_flag@s_online_file_transfer_types@@E$00Us_default_enum_string_resolver@@@@CAEW4e_download_flag@s_online_file_transfer_types@@@Z");
//};

//public: static bool c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_network_banhammer_controller_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_banhammer_controller_flags@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_network_banhammer_controller_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_banhammer_controller_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_banhammer_controller_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_network_banhammer_controller_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_network_banhammer_controller_flags@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: static bool c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_network_banhammer_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_banhammer_flags@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_network_banhammer_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_banhammer_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_banhammer_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_network_banhammer_flags@@@Z");
//};

//public: static bool s_static_array<struct s_network_banhammer_controller_data, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@Us_network_banhammer_controller_data@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: static bool s_static_array<struct s_network_banhammer_remote_cheater_data, 64>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_banhammer_remote_cheater_data@@$0EA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 4>::valid<enum e_network_banhammer_upload_failure_type>(enum e_network_banhammer_upload_failure_type)
//{
//    mangled_ppc("??$valid@W4e_network_banhammer_upload_failure_type@@@?$s_static_array@J$03@@SA_NW4e_network_banhammer_upload_failure_type@@@Z");
//};

//public: static bool s_static_array<class c_static_stack<struct s_bandwidth_host_measurement, 16>, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@$01@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_banhammer_controller_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_network_banhammer_controller_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_network_banhammer_controller_flags@@@Z");
//};

//difftime
//{
//    mangled_ppc("difftime");
//};

//time
//{
//    mangled_ppc("time");
//};

//public: s_network_banhammer_globals::s_network_banhammer_globals(void)
//{
//    mangled_ppc("??0s_network_banhammer_globals@@QAA@XZ");
//};

//public: s_static_array<struct s_network_banhammer_controller_data, 4>::s_static_array<struct s_network_banhammer_controller_data, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_network_banhammer_controller_data@@$03@@QAA@XZ");
//};

//public: s_static_array<struct s_network_banhammer_remote_cheater_data, 64>::s_static_array<struct s_network_banhammer_remote_cheater_data, 64>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_network_banhammer_remote_cheater_data@@$0EA@@@QAA@XZ");
//};

//public: s_files_user_network_statistics::s_files_user_network_statistics(void)
//{
//    mangled_ppc("??0s_files_user_network_statistics@@QAA@XZ");
//};

//public: s_network_banhammer_controller_data::s_network_banhammer_controller_data(void)
//{
//    mangled_ppc("??0s_network_banhammer_controller_data@@QAA@XZ");
//};

//public: s_network_banhammer_remote_cheater_data::s_network_banhammer_remote_cheater_data(void)
//{
//    mangled_ppc("??0s_network_banhammer_remote_cheater_data@@QAA@XZ");
//};

//public: c_flags<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_banhammer_controller_flags@@E$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_banhammer_flags@@E$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_network_banhammer_controller_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_banhammer_controller_flags@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_network_banhammer_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_network_banhammer_flags@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_banhammer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_banhammer_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_network_banhammer_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_network_banhammer_flags@@@Z");
//};

//public: s_network_banhammer_globals::~s_network_banhammer_globals(void)
//{
//    mangled_ppc("??1s_network_banhammer_globals@@QAA@XZ");
//};

//void g_network_banhammer_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_network_banhammer_globals@@YAXXZ");
//};

