/* ---------- headers */

#include "omaha\networking\logic\network_active_roster_join_manager.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_network_active_roster_incoming_recent_player_cache_entry, 16>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_active_roster_incoming_recent_player_cache_entry@@$0BA@@@2JB"
// public: static enum e_network_active_roster_outgoing_acknowledged_flags const c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_network_active_roster_outgoing_acknowledged_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_network_active_roster_outgoing_acknowledged_flags@@B"
// char const **k_network_active_roster_incoming_join_state_strings; // "?k_network_active_roster_incoming_join_state_strings@@3PAPBDA"
// char const **k_network_active_roster_incoming_join_data_failure_strings; // "?k_network_active_roster_incoming_join_data_failure_strings@@3PAPBDA"
// char const **k_network_active_roster_outgoing_join_state_strings; // "?k_network_active_roster_outgoing_join_state_strings@@3PAPBDA"
// char const **k_network_active_roster_outgoing_join_data_failure_strings; // "?k_network_active_roster_outgoing_join_data_failure_strings@@3PAPBDA"
// char const **k_network_active_roster_outgoing_join_unavaialble_reason_strings; // "?k_network_active_roster_outgoing_join_unavaialble_reason_strings@@3PAPBDA"
// char const **k_lsp_response_strings; // "?k_lsp_response_strings@@3PAPBDA"
// struct s_network_active_roster_join_manager_globals g_network_active_roster_join_manager_globals; // "?g_network_active_roster_join_manager_globals@@3Us_network_active_roster_join_manager_globals@@A"

// bool network_active_roster_join_manager_initialize(void);
// void network_active_roster_join_manager_update(void);
// void network_active_roster_join_manager_dispose(void);
// void network_active_roster_join_manager_notify_outgoing_join(void);
// char const * network_active_roster_join_manager_get_outgoing_status_string(void);
// char const * network_active_roster_join_manager_get_incoming_status_string(void);
// bool network_active_roster_outgoing_join_request_set(unsigned __int64const *, class c_static_string<16> *);
// public: s_network_active_roster_outgoing_join_request::s_network_active_roster_outgoing_join_request(void);
// public: s_network_active_roster_player::s_network_active_roster_player(void);
// public: s_lsp_presence_player_query_player_response_data::s_lsp_presence_player_query_player_response_data(void);
// public: s_network_lsp_heartbeat_session_data::s_network_lsp_heartbeat_session_data(void);
// public: s_network_lsp_heartbeat_player_data::s_network_lsp_heartbeat_player_data(void);
// void network_active_roster_outgoing_join_request_cancel(void);
// bool network_active_roster_outgoing_join_in_progress(struct s_network_active_roster_outgoing_join_session_data *, enum e_network_active_roster_outgoing_join_update_type *);
// bool network_active_roster_outgoing_join_get_squad_host_queued_join_lsp_request(struct s_network_active_roster_outgoing_join_queued_join_lsp_request *);
// bool network_active_roster_player_is_joinable(struct s_network_active_roster_player const *);
// public: s_network_active_roster_outgoing_join_session_data::s_network_active_roster_outgoing_join_session_data(void);
// bool network_active_roster_incoming_join_in_progress(struct s_network_active_roster_incoming_join_session_data *);
// bool network_active_roster_incoming_join_get_squad_host_expected_data(struct s_network_active_roster_incoming_join_queued_join_lsp_data *);
// bool network_active_roster_incoming_join_received_from_lsp(void);
// bool network_active_roster_incoming_join_failed(void);
// bool network_active_roster_incoming_join_state_desires_heartbeat(void);
// void network_active_roster_outgoing_queued_join_notify_response(struct s_network_active_roster_outgoing_join_queued_join_lsp_request const *, struct s_network_active_roster_outgoing_join_queued_join_lsp_response const *);
// public: s_network_active_roster_outgoing_acknowledged_queued_join_data::s_network_active_roster_outgoing_acknowledged_queued_join_data(void);
// public: s_network_active_roster_outgoing_join_queued_join_lsp_response::s_network_active_roster_outgoing_join_queued_join_lsp_response(void);
// void network_active_roster_incoming_join_notify_expected_players(struct s_network_active_roster_incoming_join_queued_join_lsp_data const *, bool);
// void network_active_roster_incoming_join_data_encode(class c_bitstream *, struct s_network_active_roster_incoming_join_session_data const *);
// bool network_active_roster_incoming_join_data_decode(class c_bitstream *, struct s_network_active_roster_incoming_join_session_data *);
// void network_active_roster_outgoing_join_request_encode(class c_bitstream *, struct s_network_active_roster_outgoing_join_request const *);
// bool network_active_roster_outgoing_join_request_decode(class c_bitstream *, struct s_network_active_roster_outgoing_join_request *);
// void network_active_roster_outgoing_join_data_encode(class c_bitstream *, struct s_network_active_roster_outgoing_join_session_data const *);
// bool network_active_roster_outgoing_join_data_decode(class c_bitstream *, struct s_network_active_roster_outgoing_join_session_data *);
// enum e_network_active_roster_outgoing_join_available_type network_active_roster_outgoing_get_available_join_type_by_roster_player(struct s_network_active_roster_player const *, struct s_network_session_status_data const *, long, bool, bool, bool, unsigned long, enum e_network_active_roster_outgoing_join_unavailable_reason *);
// long network_time_since(unsigned long);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_difference_msec(unsigned long, unsigned long);
// enum e_network_active_roster_outgoing_join_available_type network_active_roster_outgoing_get_available_join_type_from_lsp_presence(struct s_lsp_presence_player_query_player_response_data const *, long, bool, bool, bool, enum e_network_active_roster_outgoing_join_unavailable_reason *);
// enum e_network_active_roster_outgoing_join_available_type network_active_roster_outgoing_get_available_join_type_from_privacy(struct s_network_session_privacy_mode const *, bool, bool, enum e_network_active_roster_outgoing_join_unavailable_reason *);
// enum e_network_active_roster_outgoing_join_available_type network_active_roster_outgoing_get_available_join_type_from_qos(struct s_network_session_status_data const *, long, bool, bool, enum e_network_active_roster_outgoing_join_unavailable_reason *);
// bool network_active_roster_player_qos_valid(struct s_network_active_roster_player const *);
// bool network_active_roster_player_qos_unknown(struct s_network_active_roster_player const *);
// bool network_active_roster_player_lsp_presence_valid(struct s_network_active_roster_player const *);
// enum e_network_active_roster_outgoing_join_request_failure_reason network_active_roster_session_state_can_request_join(void);
// void network_active_roster_update_outgoing(void);
// void network_active_roster_update_outgoing_request_squad_host(void);
// void network_active_roster_outgoing_set_state(enum e_network_active_roster_outgoing_join_state);
// void network_active_roster_request_clear_outgoing_data(void);
// void network_active_roster_outgoing_request_synchronize_working_with_request(class c_network_session *);
// bool network_active_roster_request_equal(struct s_network_active_roster_outgoing_join_request const *, struct s_network_active_roster_outgoing_join_request const *);
// void network_active_roster_update_outgoing_waiting_for_join_data(void);
// void network_active_roster_outgoing_set_failure(enum e_network_active_roster_outgoing_join_failure_type);
// enum e_network_active_roster_outgoing_join_available_type network_active_roster_outgoing_get_available_join_type(enum e_network_active_roster_outgoing_join_unavailable_reason *);
// void network_active_roster_update_outgoing_join_immediatly(void);
// void network_active_roster_update_outgoing_join_in_progress(void);
// bool network_active_roster_update_outgoing_join_failure_should_retry(enum e_life_cycle_join_result);
// void network_active_roster_update_outgoing_join_in_progress_failed_waiting_for_retry(void);
// unsigned long network_active_roster_outgoing_get_state_duration(void);
// void network_active_roster_update_outgoing_queued_join_registering_with_lsp(void);
// enum e_network_active_roster_outgoing_join_lsp_acknowledgement_type network_active_roster_update_outgoing_queued_join_lsp_has_acknowledged_working_data(void);
// void network_active_roster_update_outgoing_queued_join_waiting_for_host(void);
// void network_active_roster_update_outgoing_queued_join_failed(void);
// bool network_active_roster_outgoing_join_target_present_in_session(void);
// public: bool c_network_session_membership::is_player_established(long) const;
// bool network_active_roster_local_machine_member_of_session_id(struct s_transport_secure_identifier const *);
// void network_active_roster_outgoing_join_request_cancel_internal(bool);
// void network_active_roster_update_incoming(void);
// void network_active_roster_update_incoming_squad_host(void);
// void network_active_roster_update_incoming_none(void);
// bool network_active_roster_incoming_join_can_be_accepted(void);
// void network_active_roster_incoming_set_state(enum e_network_active_roster_incoming_join_state);
// bool network_active_roster_incoming_players_present_in_recent_player_cache(void);
// void network_active_roster_update_incoming_expected(void);
// void network_active_roster_incoming_set_failure(enum e_network_active_roster_incoming_join_failure_type);
// void network_active_roster_update_incoming_expected_waiting(void);
// unsigned long network_active_roster_incoming_get_state_duration(void);
// void network_active_roster_update_incoming_failed(void);
// void network_active_roster_request_clear_incoming_data(void);
// void network_active_roster_update_incoming_clear_recent_player_cache(void);
// void network_active_roster_update_incoming_update_recent_player_cache(class c_network_session const *);
// void network_active_roster_incoming_join_set_recently_failed(bool);
// bool network_active_roster_incoming_join_get_recently_failed(void);
// public: bool c_enum_no_init<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_network_session_privacy) const;
// public: unsigned __int64const * s_static_array<unsigned __int64, 16>::get_elements(void) const;
// public: unsigned __int64* s_static_array<unsigned __int64, 16>::get_elements(void);
// public: unsigned int s_static_array<unsigned __int64, 16>::get_total_element_size(void) const;
// public: c_enum<enum e_network_lsp_heartbeat_response_queued_join_result, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_network_lsp_heartbeat_response_queued_join_result, unsigned char, 0, 5, struct s_default_enum_string_resolver>(void);
// public: enum e_network_lsp_heartbeat_response_queued_join_result c_enum_no_init<enum e_network_lsp_heartbeat_response_queued_join_result, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_network_lsp_heartbeat_response_queued_join_result(void) const;
// public: bool c_enum_no_init<enum e_network_lsp_heartbeat_response_queued_join_result, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_network_lsp_heartbeat_response_queued_join_result) const;
// public: c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_network_active_roster_incoming_join_state);
// public: enum e_network_active_roster_incoming_join_state c_enum_no_init<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_network_active_roster_incoming_join_state(void) const;
// public: bool c_enum_no_init<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_network_active_roster_incoming_join_state) const;
// public: c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum e_network_active_roster_incoming_join_failure_type);
// public: enum e_network_active_roster_incoming_join_failure_type c_enum_no_init<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_network_active_roster_incoming_join_failure_type(void) const;
// public: c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>(enum e_network_active_roster_outgoing_join_state);
// public: enum e_network_active_roster_outgoing_join_state c_enum_no_init<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::operator enum e_network_active_roster_outgoing_join_state(void) const;
// public: bool c_enum_no_init<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::operator==(enum e_network_active_roster_outgoing_join_state) const;
// public: c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>(enum e_network_active_roster_outgoing_join_failure_type);
// public: enum e_network_active_roster_outgoing_join_failure_type c_enum_no_init<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::operator enum e_network_active_roster_outgoing_join_failure_type(void) const;
// public: static long s_static_array<struct s_network_active_roster_incoming_recent_player_cache_entry, 16>::get_count(void);
// public: bool s_static_string<16>::is_equal(char const *) const;
// public: long s_static_string<16>::length(void) const;
// public: bool c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_outgoing_join_request_flags) const;
// public: void c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_outgoing_join_request_flags, bool);
// public: bool c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver> const &) const;
// public: c_flags<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_outgoing_join_data_flags) const;
// public: void c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_outgoing_join_data_flags, bool);
// public: c_flags<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_player_live_state_flags) const;
// public: bool c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_player_flags) const;
// public: c_flags<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::c_flags<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_outgoing_acknowledged_flags) const;
// public: void c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_outgoing_acknowledged_flags, bool);
// public: c_flags<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: unsigned __int64const & s_static_array<unsigned __int64, 16>::operator[]<long>(long) const;
// public: void c_bitstream::write_enum<class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_flags<class c_flags<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_flags<class c_flags<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> *);
// public: struct s_network_active_roster_incoming_recent_player_cache_entry & s_static_array<struct s_network_active_roster_incoming_recent_player_cache_entry, 16>::operator[]<long>(long);
// public: bool c_enum_no_init<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: bool c_enum_no_init<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: bool c_enum_no_init<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: bool c_enum_no_init<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: void c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_outgoing_join_request_flags);
// public: unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_outgoing_join_request_flags);
// public: void c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_outgoing_join_data_flags);
// public: unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_outgoing_join_data_flags);
// public: static bool c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_player_live_state_flags);
// private: static unsigned long c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_player_live_state_flags);
// public: void c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_player_flags);
// private: static unsigned short c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_player_flags);
// public: void c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_outgoing_acknowledged_flags);
// private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_outgoing_acknowledged_flags);
// long required_encoding_bits_for_enum<class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>);
// public: static enum e_network_active_roster_incoming_join_state c_enum_no_init<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static enum e_network_active_roster_incoming_join_failure_type c_enum_no_init<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// long required_encoding_bits_for_enum<class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>);
// public: static enum e_network_active_roster_outgoing_join_state c_enum_no_init<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static enum e_network_active_roster_outgoing_join_failure_type c_enum_no_init<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static bool s_static_array<struct s_network_active_roster_incoming_recent_player_cache_entry, 16>::valid<long>(long);
// public: bool c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: bool c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_active_roster_outgoing_join_request_flags);
// private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_active_roster_outgoing_join_data_flags);
// private: static unsigned short c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_active_roster_player_flags);
// private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_active_roster_outgoing_acknowledged_flags);
// public: s_network_active_roster_join_manager_globals::s_network_active_roster_join_manager_globals(void);
// public: s_network_active_roster_incoming_join_data::s_network_active_roster_incoming_join_data(void);
// public: s_network_active_roster_outgoing_join_data::s_network_active_roster_outgoing_join_data(void);
// public: s_network_active_roster_incoming_join_session_data::s_network_active_roster_incoming_join_session_data(void);
// public: c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>(void);

//bool network_active_roster_join_manager_initialize(void)
//{
//    mangled_ppc("?network_active_roster_join_manager_initialize@@YA_NXZ");
//};

//void network_active_roster_join_manager_update(void)
//{
//    mangled_ppc("?network_active_roster_join_manager_update@@YAXXZ");
//};

//void network_active_roster_join_manager_dispose(void)
//{
//    mangled_ppc("?network_active_roster_join_manager_dispose@@YAXXZ");
//};

//void network_active_roster_join_manager_notify_outgoing_join(void)
//{
//    mangled_ppc("?network_active_roster_join_manager_notify_outgoing_join@@YAXXZ");
//};

//char const * network_active_roster_join_manager_get_outgoing_status_string(void)
//{
//    mangled_ppc("?network_active_roster_join_manager_get_outgoing_status_string@@YAPBDXZ");
//};

//char const * network_active_roster_join_manager_get_incoming_status_string(void)
//{
//    mangled_ppc("?network_active_roster_join_manager_get_incoming_status_string@@YAPBDXZ");
//};

//bool network_active_roster_outgoing_join_request_set(unsigned __int64const *, class c_static_string<16> *)
//{
//    mangled_ppc("?network_active_roster_outgoing_join_request_set@@YA_NPB_KPAV?$c_static_string@$0BA@@@@Z");
//};

//public: s_network_active_roster_outgoing_join_request::s_network_active_roster_outgoing_join_request(void)
//{
//    mangled_ppc("??0s_network_active_roster_outgoing_join_request@@QAA@XZ");
//};

//public: s_network_active_roster_player::s_network_active_roster_player(void)
//{
//    mangled_ppc("??0s_network_active_roster_player@@QAA@XZ");
//};

//public: s_lsp_presence_player_query_player_response_data::s_lsp_presence_player_query_player_response_data(void)
//{
//    mangled_ppc("??0s_lsp_presence_player_query_player_response_data@@QAA@XZ");
//};

//public: s_network_lsp_heartbeat_session_data::s_network_lsp_heartbeat_session_data(void)
//{
//    mangled_ppc("??0s_network_lsp_heartbeat_session_data@@QAA@XZ");
//};

//public: s_network_lsp_heartbeat_player_data::s_network_lsp_heartbeat_player_data(void)
//{
//    mangled_ppc("??0s_network_lsp_heartbeat_player_data@@QAA@XZ");
//};

//void network_active_roster_outgoing_join_request_cancel(void)
//{
//    mangled_ppc("?network_active_roster_outgoing_join_request_cancel@@YAXXZ");
//};

//bool network_active_roster_outgoing_join_in_progress(struct s_network_active_roster_outgoing_join_session_data *, enum e_network_active_roster_outgoing_join_update_type *)
//{
//    mangled_ppc("?network_active_roster_outgoing_join_in_progress@@YA_NPAUs_network_active_roster_outgoing_join_session_data@@PAW4e_network_active_roster_outgoing_join_update_type@@@Z");
//};

//bool network_active_roster_outgoing_join_get_squad_host_queued_join_lsp_request(struct s_network_active_roster_outgoing_join_queued_join_lsp_request *)
//{
//    mangled_ppc("?network_active_roster_outgoing_join_get_squad_host_queued_join_lsp_request@@YA_NPAUs_network_active_roster_outgoing_join_queued_join_lsp_request@@@Z");
//};

//bool network_active_roster_player_is_joinable(struct s_network_active_roster_player const *)
//{
//    mangled_ppc("?network_active_roster_player_is_joinable@@YA_NPBUs_network_active_roster_player@@@Z");
//};

//public: s_network_active_roster_outgoing_join_session_data::s_network_active_roster_outgoing_join_session_data(void)
//{
//    mangled_ppc("??0s_network_active_roster_outgoing_join_session_data@@QAA@XZ");
//};

//bool network_active_roster_incoming_join_in_progress(struct s_network_active_roster_incoming_join_session_data *)
//{
//    mangled_ppc("?network_active_roster_incoming_join_in_progress@@YA_NPAUs_network_active_roster_incoming_join_session_data@@@Z");
//};

//bool network_active_roster_incoming_join_get_squad_host_expected_data(struct s_network_active_roster_incoming_join_queued_join_lsp_data *)
//{
//    mangled_ppc("?network_active_roster_incoming_join_get_squad_host_expected_data@@YA_NPAUs_network_active_roster_incoming_join_queued_join_lsp_data@@@Z");
//};

//bool network_active_roster_incoming_join_received_from_lsp(void)
//{
//    mangled_ppc("?network_active_roster_incoming_join_received_from_lsp@@YA_NXZ");
//};

//bool network_active_roster_incoming_join_failed(void)
//{
//    mangled_ppc("?network_active_roster_incoming_join_failed@@YA_NXZ");
//};

//bool network_active_roster_incoming_join_state_desires_heartbeat(void)
//{
//    mangled_ppc("?network_active_roster_incoming_join_state_desires_heartbeat@@YA_NXZ");
//};

//void network_active_roster_outgoing_queued_join_notify_response(struct s_network_active_roster_outgoing_join_queued_join_lsp_request const *, struct s_network_active_roster_outgoing_join_queued_join_lsp_response const *)
//{
//    mangled_ppc("?network_active_roster_outgoing_queued_join_notify_response@@YAXPBUs_network_active_roster_outgoing_join_queued_join_lsp_request@@PBUs_network_active_roster_outgoing_join_queued_join_lsp_response@@@Z");
//};

//public: s_network_active_roster_outgoing_acknowledged_queued_join_data::s_network_active_roster_outgoing_acknowledged_queued_join_data(void)
//{
//    mangled_ppc("??0s_network_active_roster_outgoing_acknowledged_queued_join_data@@QAA@XZ");
//};

//public: s_network_active_roster_outgoing_join_queued_join_lsp_response::s_network_active_roster_outgoing_join_queued_join_lsp_response(void)
//{
//    mangled_ppc("??0s_network_active_roster_outgoing_join_queued_join_lsp_response@@QAA@XZ");
//};

//void network_active_roster_incoming_join_notify_expected_players(struct s_network_active_roster_incoming_join_queued_join_lsp_data const *, bool)
//{
//    mangled_ppc("?network_active_roster_incoming_join_notify_expected_players@@YAXPBUs_network_active_roster_incoming_join_queued_join_lsp_data@@_N@Z");
//};

//void network_active_roster_incoming_join_data_encode(class c_bitstream *, struct s_network_active_roster_incoming_join_session_data const *)
//{
//    mangled_ppc("?network_active_roster_incoming_join_data_encode@@YAXPAVc_bitstream@@PBUs_network_active_roster_incoming_join_session_data@@@Z");
//};

//bool network_active_roster_incoming_join_data_decode(class c_bitstream *, struct s_network_active_roster_incoming_join_session_data *)
//{
//    mangled_ppc("?network_active_roster_incoming_join_data_decode@@YA_NPAVc_bitstream@@PAUs_network_active_roster_incoming_join_session_data@@@Z");
//};

//void network_active_roster_outgoing_join_request_encode(class c_bitstream *, struct s_network_active_roster_outgoing_join_request const *)
//{
//    mangled_ppc("?network_active_roster_outgoing_join_request_encode@@YAXPAVc_bitstream@@PBUs_network_active_roster_outgoing_join_request@@@Z");
//};

//bool network_active_roster_outgoing_join_request_decode(class c_bitstream *, struct s_network_active_roster_outgoing_join_request *)
//{
//    mangled_ppc("?network_active_roster_outgoing_join_request_decode@@YA_NPAVc_bitstream@@PAUs_network_active_roster_outgoing_join_request@@@Z");
//};

//void network_active_roster_outgoing_join_data_encode(class c_bitstream *, struct s_network_active_roster_outgoing_join_session_data const *)
//{
//    mangled_ppc("?network_active_roster_outgoing_join_data_encode@@YAXPAVc_bitstream@@PBUs_network_active_roster_outgoing_join_session_data@@@Z");
//};

//bool network_active_roster_outgoing_join_data_decode(class c_bitstream *, struct s_network_active_roster_outgoing_join_session_data *)
//{
//    mangled_ppc("?network_active_roster_outgoing_join_data_decode@@YA_NPAVc_bitstream@@PAUs_network_active_roster_outgoing_join_session_data@@@Z");
//};

//enum e_network_active_roster_outgoing_join_available_type network_active_roster_outgoing_get_available_join_type_by_roster_player(struct s_network_active_roster_player const *, struct s_network_session_status_data const *, long, bool, bool, bool, unsigned long, enum e_network_active_roster_outgoing_join_unavailable_reason *)
//{
//    mangled_ppc("?network_active_roster_outgoing_get_available_join_type_by_roster_player@@YA?AW4e_network_active_roster_outgoing_join_available_type@@PBUs_network_active_roster_player@@PBUs_network_session_status_data@@J_N22KPAW4e_network_active_roster_outgoing_join_unavailable_reason@@@Z");
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

//enum e_network_active_roster_outgoing_join_available_type network_active_roster_outgoing_get_available_join_type_from_lsp_presence(struct s_lsp_presence_player_query_player_response_data const *, long, bool, bool, bool, enum e_network_active_roster_outgoing_join_unavailable_reason *)
//{
//    mangled_ppc("?network_active_roster_outgoing_get_available_join_type_from_lsp_presence@@YA?AW4e_network_active_roster_outgoing_join_available_type@@PBUs_lsp_presence_player_query_player_response_data@@J_N11PAW4e_network_active_roster_outgoing_join_unavailable_reason@@@Z");
//};

//enum e_network_active_roster_outgoing_join_available_type network_active_roster_outgoing_get_available_join_type_from_privacy(struct s_network_session_privacy_mode const *, bool, bool, enum e_network_active_roster_outgoing_join_unavailable_reason *)
//{
//    mangled_ppc("?network_active_roster_outgoing_get_available_join_type_from_privacy@@YA?AW4e_network_active_roster_outgoing_join_available_type@@PBUs_network_session_privacy_mode@@_N1PAW4e_network_active_roster_outgoing_join_unavailable_reason@@@Z");
//};

//enum e_network_active_roster_outgoing_join_available_type network_active_roster_outgoing_get_available_join_type_from_qos(struct s_network_session_status_data const *, long, bool, bool, enum e_network_active_roster_outgoing_join_unavailable_reason *)
//{
//    mangled_ppc("?network_active_roster_outgoing_get_available_join_type_from_qos@@YA?AW4e_network_active_roster_outgoing_join_available_type@@PBUs_network_session_status_data@@J_N1PAW4e_network_active_roster_outgoing_join_unavailable_reason@@@Z");
//};

//bool network_active_roster_player_qos_valid(struct s_network_active_roster_player const *)
//{
//    mangled_ppc("?network_active_roster_player_qos_valid@@YA_NPBUs_network_active_roster_player@@@Z");
//};

//bool network_active_roster_player_qos_unknown(struct s_network_active_roster_player const *)
//{
//    mangled_ppc("?network_active_roster_player_qos_unknown@@YA_NPBUs_network_active_roster_player@@@Z");
//};

//bool network_active_roster_player_lsp_presence_valid(struct s_network_active_roster_player const *)
//{
//    mangled_ppc("?network_active_roster_player_lsp_presence_valid@@YA_NPBUs_network_active_roster_player@@@Z");
//};

//enum e_network_active_roster_outgoing_join_request_failure_reason network_active_roster_session_state_can_request_join(void)
//{
//    mangled_ppc("?network_active_roster_session_state_can_request_join@@YA?AW4e_network_active_roster_outgoing_join_request_failure_reason@@XZ");
//};

//void network_active_roster_update_outgoing(void)
//{
//    mangled_ppc("?network_active_roster_update_outgoing@@YAXXZ");
//};

//void network_active_roster_update_outgoing_request_squad_host(void)
//{
//    mangled_ppc("?network_active_roster_update_outgoing_request_squad_host@@YAXXZ");
//};

//void network_active_roster_outgoing_set_state(enum e_network_active_roster_outgoing_join_state)
//{
//    mangled_ppc("?network_active_roster_outgoing_set_state@@YAXW4e_network_active_roster_outgoing_join_state@@@Z");
//};

//void network_active_roster_request_clear_outgoing_data(void)
//{
//    mangled_ppc("?network_active_roster_request_clear_outgoing_data@@YAXXZ");
//};

//void network_active_roster_outgoing_request_synchronize_working_with_request(class c_network_session *)
//{
//    mangled_ppc("?network_active_roster_outgoing_request_synchronize_working_with_request@@YAXPAVc_network_session@@@Z");
//};

//bool network_active_roster_request_equal(struct s_network_active_roster_outgoing_join_request const *, struct s_network_active_roster_outgoing_join_request const *)
//{
//    mangled_ppc("?network_active_roster_request_equal@@YA_NPBUs_network_active_roster_outgoing_join_request@@0@Z");
//};

//void network_active_roster_update_outgoing_waiting_for_join_data(void)
//{
//    mangled_ppc("?network_active_roster_update_outgoing_waiting_for_join_data@@YAXXZ");
//};

//void network_active_roster_outgoing_set_failure(enum e_network_active_roster_outgoing_join_failure_type)
//{
//    mangled_ppc("?network_active_roster_outgoing_set_failure@@YAXW4e_network_active_roster_outgoing_join_failure_type@@@Z");
//};

//enum e_network_active_roster_outgoing_join_available_type network_active_roster_outgoing_get_available_join_type(enum e_network_active_roster_outgoing_join_unavailable_reason *)
//{
//    mangled_ppc("?network_active_roster_outgoing_get_available_join_type@@YA?AW4e_network_active_roster_outgoing_join_available_type@@PAW4e_network_active_roster_outgoing_join_unavailable_reason@@@Z");
//};

//void network_active_roster_update_outgoing_join_immediatly(void)
//{
//    mangled_ppc("?network_active_roster_update_outgoing_join_immediatly@@YAXXZ");
//};

//void network_active_roster_update_outgoing_join_in_progress(void)
//{
//    mangled_ppc("?network_active_roster_update_outgoing_join_in_progress@@YAXXZ");
//};

//bool network_active_roster_update_outgoing_join_failure_should_retry(enum e_life_cycle_join_result)
//{
//    mangled_ppc("?network_active_roster_update_outgoing_join_failure_should_retry@@YA_NW4e_life_cycle_join_result@@@Z");
//};

//void network_active_roster_update_outgoing_join_in_progress_failed_waiting_for_retry(void)
//{
//    mangled_ppc("?network_active_roster_update_outgoing_join_in_progress_failed_waiting_for_retry@@YAXXZ");
//};

//unsigned long network_active_roster_outgoing_get_state_duration(void)
//{
//    mangled_ppc("?network_active_roster_outgoing_get_state_duration@@YAKXZ");
//};

//void network_active_roster_update_outgoing_queued_join_registering_with_lsp(void)
//{
//    mangled_ppc("?network_active_roster_update_outgoing_queued_join_registering_with_lsp@@YAXXZ");
//};

//enum e_network_active_roster_outgoing_join_lsp_acknowledgement_type network_active_roster_update_outgoing_queued_join_lsp_has_acknowledged_working_data(void)
//{
//    mangled_ppc("?network_active_roster_update_outgoing_queued_join_lsp_has_acknowledged_working_data@@YA?AW4e_network_active_roster_outgoing_join_lsp_acknowledgement_type@@XZ");
//};

//void network_active_roster_update_outgoing_queued_join_waiting_for_host(void)
//{
//    mangled_ppc("?network_active_roster_update_outgoing_queued_join_waiting_for_host@@YAXXZ");
//};

//void network_active_roster_update_outgoing_queued_join_failed(void)
//{
//    mangled_ppc("?network_active_roster_update_outgoing_queued_join_failed@@YAXXZ");
//};

//bool network_active_roster_outgoing_join_target_present_in_session(void)
//{
//    mangled_ppc("?network_active_roster_outgoing_join_target_present_in_session@@YA_NXZ");
//};

//public: bool c_network_session_membership::is_player_established(long) const
//{
//    mangled_ppc("?is_player_established@c_network_session_membership@@QBA_NJ@Z");
//};

//bool network_active_roster_local_machine_member_of_session_id(struct s_transport_secure_identifier const *)
//{
//    mangled_ppc("?network_active_roster_local_machine_member_of_session_id@@YA_NPBUs_transport_secure_identifier@@@Z");
//};

//void network_active_roster_outgoing_join_request_cancel_internal(bool)
//{
//    mangled_ppc("?network_active_roster_outgoing_join_request_cancel_internal@@YAX_N@Z");
//};

//void network_active_roster_update_incoming(void)
//{
//    mangled_ppc("?network_active_roster_update_incoming@@YAXXZ");
//};

//void network_active_roster_update_incoming_squad_host(void)
//{
//    mangled_ppc("?network_active_roster_update_incoming_squad_host@@YAXXZ");
//};

//void network_active_roster_update_incoming_none(void)
//{
//    mangled_ppc("?network_active_roster_update_incoming_none@@YAXXZ");
//};

//bool network_active_roster_incoming_join_can_be_accepted(void)
//{
//    mangled_ppc("?network_active_roster_incoming_join_can_be_accepted@@YA_NXZ");
//};

//void network_active_roster_incoming_set_state(enum e_network_active_roster_incoming_join_state)
//{
//    mangled_ppc("?network_active_roster_incoming_set_state@@YAXW4e_network_active_roster_incoming_join_state@@@Z");
//};

//bool network_active_roster_incoming_players_present_in_recent_player_cache(void)
//{
//    mangled_ppc("?network_active_roster_incoming_players_present_in_recent_player_cache@@YA_NXZ");
//};

//void network_active_roster_update_incoming_expected(void)
//{
//    mangled_ppc("?network_active_roster_update_incoming_expected@@YAXXZ");
//};

//void network_active_roster_incoming_set_failure(enum e_network_active_roster_incoming_join_failure_type)
//{
//    mangled_ppc("?network_active_roster_incoming_set_failure@@YAXW4e_network_active_roster_incoming_join_failure_type@@@Z");
//};

//void network_active_roster_update_incoming_expected_waiting(void)
//{
//    mangled_ppc("?network_active_roster_update_incoming_expected_waiting@@YAXXZ");
//};

//unsigned long network_active_roster_incoming_get_state_duration(void)
//{
//    mangled_ppc("?network_active_roster_incoming_get_state_duration@@YAKXZ");
//};

//void network_active_roster_update_incoming_failed(void)
//{
//    mangled_ppc("?network_active_roster_update_incoming_failed@@YAXXZ");
//};

//void network_active_roster_request_clear_incoming_data(void)
//{
//    mangled_ppc("?network_active_roster_request_clear_incoming_data@@YAXXZ");
//};

//void network_active_roster_update_incoming_clear_recent_player_cache(void)
//{
//    mangled_ppc("?network_active_roster_update_incoming_clear_recent_player_cache@@YAXXZ");
//};

//void network_active_roster_update_incoming_update_recent_player_cache(class c_network_session const *)
//{
//    mangled_ppc("?network_active_roster_update_incoming_update_recent_player_cache@@YAXPBVc_network_session@@@Z");
//};

//void network_active_roster_incoming_join_set_recently_failed(bool)
//{
//    mangled_ppc("?network_active_roster_incoming_join_set_recently_failed@@YAX_N@Z");
//};

//bool network_active_roster_incoming_join_get_recently_failed(void)
//{
//    mangled_ppc("?network_active_roster_incoming_join_get_recently_failed@@YA_NXZ");
//};

//public: bool c_enum_no_init<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_network_session_privacy) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@QBA_NW4e_network_session_privacy@@@Z");
//};

//public: unsigned __int64const * s_static_array<unsigned __int64, 16>::get_elements(void) const
//{
//    mangled_ppc("?get_elements@?$s_static_array@_K$0BA@@@QBAPB_KXZ");
//};

//public: unsigned __int64* s_static_array<unsigned __int64, 16>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@_K$0BA@@@QAAPA_KXZ");
//};

//public: unsigned int s_static_array<unsigned __int64, 16>::get_total_element_size(void) const
//{
//    mangled_ppc("?get_total_element_size@?$s_static_array@_K$0BA@@@QBAIXZ");
//};

//public: c_enum<enum e_network_lsp_heartbeat_response_queued_join_result, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_network_lsp_heartbeat_response_queued_join_result, unsigned char, 0, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_lsp_heartbeat_response_queued_join_result@@E$0A@$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: enum e_network_lsp_heartbeat_response_queued_join_result c_enum_no_init<enum e_network_lsp_heartbeat_response_queued_join_result, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_network_lsp_heartbeat_response_queued_join_result(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_network_lsp_heartbeat_response_queued_join_result@@E$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_network_lsp_heartbeat_response_queued_join_result@@XZ");
//};

//public: bool c_enum_no_init<enum e_network_lsp_heartbeat_response_queued_join_result, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_network_lsp_heartbeat_response_queued_join_result) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_network_lsp_heartbeat_response_queued_join_result@@E$0A@$04Us_default_enum_string_resolver@@@@QBA_NW4e_network_lsp_heartbeat_response_queued_join_result@@@Z");
//};

//public: c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_network_active_roster_incoming_join_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_network_active_roster_incoming_join_state@@@Z");
//};

//public: enum e_network_active_roster_incoming_join_state c_enum_no_init<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_network_active_roster_incoming_join_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_network_active_roster_incoming_join_state@@XZ");
//};

//public: bool c_enum_no_init<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_network_active_roster_incoming_join_state) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@QBA_NW4e_network_active_roster_incoming_join_state@@@Z");
//};

//public: c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>(enum e_network_active_roster_incoming_join_failure_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@QAA@W4e_network_active_roster_incoming_join_failure_type@@@Z");
//};

//public: enum e_network_active_roster_incoming_join_failure_type c_enum_no_init<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_network_active_roster_incoming_join_failure_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_network_active_roster_incoming_join_failure_type@@XZ");
//};

//public: c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>(enum e_network_active_roster_outgoing_join_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@QAA@W4e_network_active_roster_outgoing_join_state@@@Z");
//};

//public: enum e_network_active_roster_outgoing_join_state c_enum_no_init<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::operator enum e_network_active_roster_outgoing_join_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@QBA?AW4e_network_active_roster_outgoing_join_state@@XZ");
//};

//public: bool c_enum_no_init<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::operator==(enum e_network_active_roster_outgoing_join_state) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@QBA_NW4e_network_active_roster_outgoing_join_state@@@Z");
//};

//public: c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>(enum e_network_active_roster_outgoing_join_failure_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@QAA@W4e_network_active_roster_outgoing_join_failure_type@@@Z");
//};

//public: enum e_network_active_roster_outgoing_join_failure_type c_enum_no_init<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::operator enum e_network_active_roster_outgoing_join_failure_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@QBA?AW4e_network_active_roster_outgoing_join_failure_type@@XZ");
//};

//public: static long s_static_array<struct s_network_active_roster_incoming_recent_player_cache_entry, 16>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_network_active_roster_incoming_recent_player_cache_entry@@$0BA@@@SAJXZ");
//};

//public: bool s_static_string<16>::is_equal(char const *) const
//{
//    mangled_ppc("?is_equal@?$s_static_string@$0BA@@@QBA_NPBD@Z");
//};

//public: long s_static_string<16>::length(void) const
//{
//    mangled_ppc("?length@?$s_static_string@$0BA@@@QBAJXZ");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_outgoing_join_request_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_network_active_roster_outgoing_join_request_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_outgoing_join_request_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_network_active_roster_outgoing_join_request_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: c_flags<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_outgoing_join_data_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_network_active_roster_outgoing_join_data_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_outgoing_join_data_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_network_active_roster_outgoing_join_data_flags@@_N@Z");
//};

//public: c_flags<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_player_live_state_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_active_roster_player_live_state_flags@@K$0BD@Us_default_enum_string_resolver@@@@QBA_NW4e_network_active_roster_player_live_state_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_player_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_active_roster_player_flags@@G$09Us_default_enum_string_resolver@@@@QBA_NW4e_network_active_roster_player_flags@@@Z");
//};

//public: c_flags<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::c_flags<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_active_roster_player_flags@@G$09Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_outgoing_acknowledged_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_active_roster_outgoing_acknowledged_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_network_active_roster_outgoing_acknowledged_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_outgoing_acknowledged_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_active_roster_outgoing_acknowledged_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_network_active_roster_outgoing_acknowledged_flags@@_N@Z");
//};

//public: c_flags<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_active_roster_outgoing_acknowledged_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: unsigned __int64const & s_static_array<unsigned __int64, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@_K$0BA@@@QBAAB_KJ@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: struct s_network_active_roster_incoming_recent_player_cache_entry & s_static_array<struct s_network_active_roster_incoming_recent_player_cache_entry, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_active_roster_incoming_recent_player_cache_entry@@$0BA@@@QAAAAUs_network_active_roster_incoming_recent_player_cache_entry@@J@Z");
//};

//public: bool c_enum_no_init<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_enum_no_init<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_enum_no_init<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_enum_no_init<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: void c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_outgoing_join_request_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_network_active_roster_outgoing_join_request_flags@@@Z");
//};

//public: unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_outgoing_join_request_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_network_active_roster_outgoing_join_request_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_outgoing_join_data_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_network_active_roster_outgoing_join_data_flags@@@Z");
//};

//public: unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_outgoing_join_data_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_network_active_roster_outgoing_join_data_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_player_live_state_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_active_roster_player_live_state_flags@@K$0BD@Us_default_enum_string_resolver@@@@SA_NW4e_network_active_roster_player_live_state_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_player_live_state_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_active_roster_player_live_state_flags@@K$0BD@Us_default_enum_string_resolver@@@@CAKW4e_network_active_roster_player_live_state_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_active_roster_player_flags@@G$09Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_network_active_roster_player_flags@@G$09Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_player_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_active_roster_player_flags@@G$09Us_default_enum_string_resolver@@@@SA_NW4e_network_active_roster_player_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_player_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_active_roster_player_flags@@G$09Us_default_enum_string_resolver@@@@CAGW4e_network_active_roster_player_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_active_roster_outgoing_acknowledged_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_network_active_roster_outgoing_acknowledged_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_outgoing_acknowledged_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_active_roster_outgoing_acknowledged_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_network_active_roster_outgoing_acknowledged_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_outgoing_acknowledged_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_active_roster_outgoing_acknowledged_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_network_active_roster_outgoing_acknowledged_flags@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_network_active_roster_incoming_join_state c_enum_no_init<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@SA?AW4e_network_active_roster_incoming_join_state@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: static enum e_network_active_roster_incoming_join_failure_type c_enum_no_init<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@SA?AW4e_network_active_roster_incoming_join_failure_type@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_network_active_roster_outgoing_join_state c_enum_no_init<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@SA?AW4e_network_active_roster_outgoing_join_state@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_network_active_roster_outgoing_join_state, unsigned char, 0, 7, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_network_active_roster_outgoing_join_state@@E$0A@$06Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: static enum e_network_active_roster_outgoing_join_failure_type c_enum_no_init<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@SA?AW4e_network_active_roster_outgoing_join_failure_type@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_network_active_roster_outgoing_join_failure_type, unsigned char, 0, 8, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_network_active_roster_outgoing_join_failure_type@@E$0A@$07Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: static bool s_static_array<struct s_network_active_roster_incoming_recent_player_cache_entry, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_active_roster_incoming_recent_player_cache_entry@@$0BA@@@SA_NJ@Z");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_network_active_roster_player_flags@@G$09Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_network_active_roster_outgoing_acknowledged_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_request_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_active_roster_outgoing_join_request_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_request_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_network_active_roster_outgoing_join_request_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_join_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_active_roster_outgoing_join_data_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_network_active_roster_outgoing_join_data_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_network_active_roster_outgoing_join_data_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_active_roster_player_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_network_active_roster_player_flags@@G$09Us_default_enum_string_resolver@@@@CAGW4e_network_active_roster_player_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_active_roster_outgoing_acknowledged_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_active_roster_outgoing_acknowledged_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_network_active_roster_outgoing_acknowledged_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_network_active_roster_outgoing_acknowledged_flags@@@Z");
//};

//public: s_network_active_roster_join_manager_globals::s_network_active_roster_join_manager_globals(void)
//{
//    mangled_ppc("??0s_network_active_roster_join_manager_globals@@QAA@XZ");
//};

//public: s_network_active_roster_incoming_join_data::s_network_active_roster_incoming_join_data(void)
//{
//    mangled_ppc("??0s_network_active_roster_incoming_join_data@@QAA@XZ");
//};

//public: s_network_active_roster_outgoing_join_data::s_network_active_roster_outgoing_join_data(void)
//{
//    mangled_ppc("??0s_network_active_roster_outgoing_join_data@@QAA@XZ");
//};

//public: s_network_active_roster_incoming_join_session_data::s_network_active_roster_incoming_join_session_data(void)
//{
//    mangled_ppc("??0s_network_active_roster_incoming_join_session_data@@QAA@XZ");
//};

//public: c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_incoming_join_state, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_active_roster_incoming_join_state@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_network_active_roster_incoming_join_failure_type, unsigned char, 0, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_active_roster_incoming_join_failure_type@@E$0A@$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

