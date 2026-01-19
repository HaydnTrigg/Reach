/* ---------- headers */

#include "omaha\networking\session\network_session.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_online_session_player_flags const c_flags_no_init<enum e_online_session_player_flags, unsigned short, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_online_session_player_flags@@G$02Us_default_enum_string_resolver@@@@2W4e_online_session_player_flags@@B"
// public: static enum e_online_session_flags const c_flags_no_init<enum e_online_session_flags, unsigned short, 10, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_online_session_flags@@G$09Us_default_enum_string_resolver@@@@2W4e_online_session_flags@@B"
// public: static enum e_managed_session_creation_flags const c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_managed_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@2W4e_managed_session_creation_flags@@B"
// public: static enum e_managed_session_status_flags const c_flags_no_init<enum e_managed_session_status_flags, unsigned short, 14, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_managed_session_status_flags@@G$0O@Us_default_enum_string_resolver@@@@2W4e_managed_session_status_flags@@B"
// public: static enum e_network_session_find_host_flags const c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_network_session_find_host_flags@@E$01Us_default_enum_string_resolver@@@@2W4e_network_session_find_host_flags@@B"
// long volatile `private: void __cdecl c_network_session::set_disconnection_policy(enum e_network_session_disconnection_policy)'::`15'::x_event_category_index; // "?x_event_category_index@?P@??set_disconnection_policy@c_network_session@@AAAXW4e_network_session_disconnection_policy@@@Z@4JC"

// public: bool c_network_session::initialize_session(long, enum e_network_session_type, class c_network_message_gateway *, class c_network_channel_manager *, class c_network_session_manager *);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// public: void c_network_session_membership::set_session(class c_network_session *);
// public: void c_network_session::destroy_session(void);
// public: bool c_network_session::create_host_session(class c_flags<enum e_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>, enum e_network_session_class, enum e_transport_platform, class c_network_session_membership const *, struct s_online_context const *, long);
// public: void c_network_session_membership::set_local_peer_index(long);
// public: void c_network_session_membership::set_host_peer_index(long);
// public: void c_network_session_membership::set_party_nonce(unsigned __int64);
// public: void c_network_session_membership::set_join_nonce(long, unsigned __int64);
// public: struct s_network_session_peer * c_network_session_membership::get_peer(long);
// public: struct s_network_session_player * c_network_session_membership::get_player(long);
// public: bool c_network_session::join_remote_session(class c_flags<enum e_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>, enum e_network_session_class, enum e_transport_platform, struct s_transport_secure_identifier const *, struct s_transport_secure_key const *, struct s_transport_secure_address const *, unsigned __int64, class c_network_session_membership const *, struct s_network_session_join_request_payload const *, struct s_online_context const *, long, bool);
// public: struct s_player_identifier const * c_network_session_membership::get_player_identifier(long) const;
// public: struct s_player_configuration const * c_network_session_membership::get_player_data(long) const;
// public: bool c_network_session::connect_peer_to_remote_session(class c_flags<enum e_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>, enum e_network_session_class, enum e_transport_platform, struct s_transport_secure_identifier const *, struct s_transport_secure_key const *, struct s_transport_secure_address const *, unsigned __int64, struct s_online_context const *, long);
// private: bool c_network_session::create_session_for_remote_join(class c_flags<enum e_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>, enum e_network_session_class, enum e_transport_platform, struct s_transport_secure_identifier const *, struct s_transport_secure_key const *, struct s_transport_secure_address const *, bool, unsigned __int64, struct s_network_session_join_request const *, struct s_online_context const *, long);
// public: bool c_network_session::ready_for_remote_peers_to_join(void) const;
// public: struct s_network_session_peer const * c_network_session_membership::get_local_peer(void) const;
// public: void c_network_session::set_default_session_parameters(void);
// public: bool c_network_session::set_privacy_details(enum e_network_session_privacy, enum e_network_session_closed_status, long, long);
// public: bool c_network_session::membership_is_stable(void) const;
// private: void c_network_session::process_pending_joins(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: struct s_network_session_shared_membership const * c_network_session_membership::get_current_membership(void) const;
// public: enum e_network_session_peer_state c_network_session_membership::get_peer_connection_state(long) const;
// public: unsigned __int64 c_network_session_membership::get_join_nonce(long) const;
// public: unsigned long c_network_session_membership::get_creation_timestamp(long) const;
// public: bool c_network_session::host_join_nonce_valid(void) const;
// public: bool c_network_session::join_nonce_is_from_clone_join_or_is_hosts(unsigned __int64);
// private: void c_network_session::add_pending_join_to_session(unsigned __int64);
// private: void c_network_session::finalize_single_player_add(enum e_network_join_refuse_reason);
// private: void c_network_session::abort_pending_join(unsigned __int64);
// public: struct s_network_session_peer * c_network_session_membership::get_host_peer(void);
// private: void c_network_session::abort_pending_join_by_peer(long, unsigned __int64, bool);
// private: bool c_network_session::host_handoff_to_name(char const *);
// public: void c_network_session::idle(void);
// public: long c_network_session_membership::private_slot_count(void) const;
// public: long c_network_session_membership::public_slot_count(void) const;
// public: bool c_network_session_membership::friends_only(void) const;
// public: bool c_network_session_membership::all_peers_established(void) const;
// public: long c_network_session_membership::get_host_channel_index(void) const;
// public: long s_network_session_find_host_results::get_best_host_peer_index(void);
// private: void c_network_session::initiate_leave_protocol(bool);
// public: void c_network_session::force_disconnect(void);
// private: void c_network_session::set_disconnection_policy(enum e_network_session_disconnection_policy);
// private: void c_network_session::disconnect(enum c_network_session::e_disconnection_context);
// private: enum e_host_selection_mode c_network_session::get_host_selection_mode(bool, bool *);
// private: void c_network_session::handle_boot(enum e_network_session_boot_reason);
// private: void c_network_session::set_default_speculative_migration_state(void);
// public: bool c_network_session::has_managed_session_connection(void) const;
// public: bool c_network_session::get_session_id(struct s_transport_secure_identifier *) const;
// public: bool c_network_session::compare_session_id(struct s_transport_secure_identifier const *) const;
// public: bool c_network_session::get_secure_key(struct s_transport_secure_identifier *, struct s_transport_secure_key *, enum e_transport_platform *) const;
// public: class c_network_session_membership const * c_network_session::get_session_membership(void) const;
// public: class c_network_session_membership * c_network_session::get_session_membership_for_update(void);
// public: class c_network_session_membership const * c_network_session::get_session_membership_unsafe(void) const;
// public: long c_network_session::get_session_membership_update_number(void) const;
// public: long c_network_session::get_local_session_membership_update_number(void) const;
// public: long c_network_session_membership::local_membership_update_number(void) const;
// public: bool c_network_session::address_is_remote_peer(struct transport_address const *) const;
// public: long c_network_session::get_peer_channel_index(long) const;
// public: bool c_network_session::observing_channel(long) const;
// public: long c_network_session::get_peer_index(class c_network_channel const *) const;
// public: bool c_network_session::peer_request_properties_update(struct s_transport_secure_address const *, struct s_network_message_membership_update_peer_properties const *, bool, unsigned long);
// public: s_network_message_peer_properties::s_network_message_peer_properties(void);
// public: s_network_message_membership_update_peer_properties::s_network_message_membership_update_peer_properties(void);
// public: void c_network_session::peer_request_player_add(enum e_output_user_index, struct s_player_identifier const *, long, enum e_controller_index, struct s_player_configuration_from_client const *, struct s_player_voice_settings const *);
// public: struct s_network_session_player const * c_network_session_membership::get_player_from_peer(long, enum e_output_user_index) const;
// public: s_network_message_player_add::s_network_message_player_add(void);
// public: enum e_network_join_refuse_reason c_network_session::peer_request_player_add_status(enum e_output_user_index, struct s_player_identifier const *);
// public: void c_network_session::peer_complete_player_add(enum e_output_user_index, struct s_player_identifier const *);
// public: bool c_network_session::peer_request_player_desired_properties_update(enum e_output_user_index, long, enum e_controller_index, class c_flags<enum e_player_configuration_from_client_update_bit, unsigned long, 17, struct s_default_enum_string_resolver>, struct s_player_configuration_from_client const *, bool, unsigned long, struct s_player_voice_settings const *);
// public: struct s_network_session_peer * c_network_session_membership::get_local_peer(void);
// public: s_network_message_player_properties::s_network_message_player_properties(void);
// public: bool c_network_session::peer_request_player_remove(enum e_output_user_index);
// public: bool c_network_session::leader_request_delegate_leadership(struct s_transport_secure_address const *);
// public: bool c_network_session::leader_request_boot_machine(struct s_transport_secure_address const *, enum e_network_session_boot_reason);
// public: bool c_network_session::host_boot_machine(long, enum e_network_session_boot_reason);
// public: bool c_network_session::host_assume_leadership(void);
// public: bool c_network_session::host_delegate_host(long, bool);
// public: bool c_network_session::host_set_player_current_properties(long, struct s_player_configuration const *);
// public: bool c_network_session::membership_is_locked(void) const;
// public: bool c_network_session::session_is_full(long, long) const;
// public: bool c_network_session::join_allowed_by_privacy(bool) const;
// public: void c_network_session::disband_and_reestablish_as_host(enum e_disband_and_reestablish_policy);
// public: void c_network_session_membership::set_update_number(void);
// public: void c_network_session::whack_session_to_offline_session_class(void);
// public: void c_network_session::join_accept(struct s_network_session_join_request const *, struct transport_address const *);
// public: bool c_network_session::join_abort(struct transport_address const *, unsigned __int64, bool);
// public: bool c_network_session::is_peer_joining_this_session(void) const;
// public: bool c_network_session::waiting_for_host_connection(struct transport_address const *) const;
// public: void c_network_session::host_connection_refused(struct transport_address const *, enum e_network_join_refuse_reason);
// public: bool c_network_session::waiting_for_initial_update(void) const;
// public: bool c_network_session::join_abort_in_progress(struct transport_address const *) const;
// public: void c_network_session::join_abort_successful(struct transport_address const *);
// public: bool c_network_session::force_disconnect_peer(struct s_transport_secure_address const *);
// public: bool c_network_session::handle_leave_internal(long);
// public: virtual bool c_network_session::desire_channel_heartbeat(long) const;
// public: virtual enum e_network_channel_owner_state c_network_session::channel_get_state(long) const;
// public: virtual bool c_network_session::attempt_channel_reconnection(long, bool) const;
// public: virtual void c_network_session::notify_channel_connection(long, unsigned long, bool);
// public: void c_network_session_membership::set_membership_update_number(long, long);
// public: void c_network_session_membership::set_peer_needs_reestablishment(long, bool);
// public: bool c_network_session_membership::is_remote_peer(long) const;
// public: virtual void c_network_session::notify_channel_died(long);
// public: virtual long c_network_session::get_player_count(void) const;
// public: virtual bool c_network_session::channel_connects_to_tracked_peer(long) const;
// public: bool c_network_session::channel_is_authoritative(class c_network_channel *) const;
// public: bool c_network_session::peer_joining(void) const;
// public: class c_network_session_parameters * c_network_session::get_session_parameters(void);
// public: class c_network_session_parameters const * c_network_session::get_session_parameters(void) const;
// public: char const * c_network_session::get_id_string(void) const;
// public: static char const * c_network_session::get_type_string(enum e_network_session_type);
// public: static char const * c_network_session::get_class_string(enum e_network_session_class);
// public: char const * c_network_session::get_state_string(void) const;
// public: char const * c_network_session::get_disconnection_policy_string(void) const;
// public: char const * c_network_session::get_peer_description(long) const;
// public: void c_network_session::describe_status(char *, long) const;
// public: struct s_network_session_find_host_per_peer_result const * c_network_session::get_last_peer_host_quality(long) const;
// private: struct s_network_session_peer const * c_network_session::get_peer(long) const;
// private: struct s_network_session_peer * c_network_session::get_peer(long);
// private: struct s_network_session_player const * c_network_session::get_player(long) const;
// private: struct s_network_session_player * c_network_session::get_player(long);
// public: bool c_network_session::player_is_member(struct s_player_identifier const *) const;
// public: bool c_network_session::peer_is_member(struct s_transport_secure_address const *) const;
// public: long c_network_session::find_peer_index_by_machine_identifier(struct s_machine_identifier const *) const;
// public: bool c_network_session::all_players_are_present(void) const;
// private: bool c_network_session::boot_peer(long, enum e_network_session_boot_reason);
// private: void c_network_session::disband_peer(long);
// public: bool c_network_session_membership::has_peer_ever_been_established(long) const;
// private: void c_network_session::reset_local_host_state(bool);
// private: void c_network_session::handoff_remove_peer_from_consideration(long);
// private: void c_network_session::reestablish_remove_peer_from_reestablishment(long);
// private: enum e_peer_reestablish_state c_network_session::check_to_send_peer_reestablish(enum e_peer_reestablish_state);
// public: bool c_network_session_membership::has_received_membership_update(void) const;
// public: class c_network_channel_manager * c_network_session::get_channel_manager(void);
// private: void c_network_session::check_to_send_peer_join_request(void);
// private: void c_network_session::check_to_send_peer_join_abort(void);
// private: void c_network_session::check_to_send_peer_leave_request(void);
// private: void c_network_session::check_to_send_host_reestablish(void);
// private: void c_network_session::check_to_send_membership_update(void);
// public: struct s_network_session_shared_membership const * c_network_session_membership::get_transmitted_membership(void) const;
// public: long c_network_session_membership::get_membership_update_number(long) const;
// public: bool c_network_session_membership::get_peer_needs_reestablishment(long) const;
// public: s_network_message_membership_update::s_network_message_membership_update(void);
// public: s_network_message_membership_update_peer::s_network_message_membership_update_peer(void);
// public: s_network_message_membership_update_player::s_network_message_membership_update_player(void);
// private: void c_network_session::check_to_send_time_synchronization(void);
// private: void c_network_session::handle_disconnection(void);
// private: void c_network_session::reset_connection_state(enum c_network_session::e_connection_state_reset_type);
// private: bool c_network_session::send_message_to_peer(enum c_network_session::e_session_message_transmission_type, long, enum e_network_message_type, long, void const *) const;
// private: void c_network_session::send_message_to_all_peers(enum c_network_session::e_session_message_transmission_type, enum e_network_message_type, long, void const *) const;
// public: long c_network_session::get_player_space_available(void) const;
// public: long c_network_session::get_maximum_player_count(void) const;
// private: void c_network_session::time_set(long);
// private: void c_network_session::time_release(void);
// public: unsigned long c_network_session::time_get(void) const;
// public: enum e_network_join_refuse_reason c_network_session::can_accept_any_join_request(void) const;
// public: enum e_network_join_refuse_reason c_network_session::can_accept_player_join_request(struct s_player_identifier const *, long, enum e_output_user_index, unsigned __int64, bool, bool, bool, bool) const;
// public: bool c_map_variant::get_built_in(void) const;
// public: enum e_network_join_refuse_reason c_network_session::can_accept_join_request(struct s_network_session_join_request const *) const;
// public: void c_network_session::acknowledge_join_request(struct transport_address const *, enum e_network_join_refuse_reason);
// public: void c_network_session::c_speculative_host_migration_probation::enter_probation(long);
// public: bool c_network_session::c_speculative_host_migration_probation::in_probation(void);
// public: bool c_network_session::c_speculative_host_migration_probation::probation_complete(void);
// public: void c_network_session::c_speculative_host_migration_probation::exit_probation(void);
// public: c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>(enum e_network_session_privacy);
// public: c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum e_network_session_closed_status);
// public: bool c_enum_no_init<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_network_session_closed_status) const;
// public: long c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::count(void) const;
// public: struct s_network_session_find_host_per_peer_result & c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::operator[](long);
// public: c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>(enum e_game_results_leave_reason);
// public: enum e_game_results_leave_reason c_enum_no_init<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::operator enum e_game_results_leave_reason(void) const;
// public: c_enum<enum e_output_user_index, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_output_user_index, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void);
// public: bool c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::valid(long) const;
// public: bool c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::valid(void) const;
// public: bool c_flags_no_init<enum e_player_configuration_from_client_flags, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_player_configuration_from_client_flags) const;
// public: void c_flags_no_init<enum e_player_configuration_from_client_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_player_configuration_from_client_flags, bool);
// public: long s_static_string<256>::index_of(char const *) const;
// public: static long s_static_string<256>::max_length(void);
// public: char (& s_static_string<256>::get_buffer(void))[256];
// public: bool c_flags_no_init<enum e_network_session_find_host_peer_result_flag, unsigned char, 3, struct s_network_session_find_host_peer_result_flag_string_resolver>::test(enum e_network_session_find_host_peer_result_flag) const;
// public: c_flags<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::c_flags<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>(void);
// bool operator==<enum e_network_session_state>(enum e_network_session_state const &, enum e_none_sentinel const &);
// bool operator!=<enum e_network_session_state>(enum e_network_session_state const &, enum e_none_sentinel const &);
// public: bool c_flags_no_init<enum e_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_session_creation_flags) const;
// public: void c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_managed_session_creation_flags, bool);
// public: c_flags<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_managed_session_status_flags, unsigned short, 14, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_managed_session_status_flags, unsigned short, 14, struct s_default_enum_string_resolver>::test(enum e_managed_session_status_flags) const;
// public: void c_flags_no_init<enum e_managed_session_status_flags, unsigned short, 14, struct s_default_enum_string_resolver>::set(enum e_managed_session_status_flags, bool);
// public: void c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_network_session_find_host_flags, bool);
// public: c_flags<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: unsigned __int64& s_static_array<unsigned __int64, 16>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum e_player_configuration_from_client_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_player_configuration_from_client_flags);
// private: static unsigned short c_flags_no_init<enum e_player_configuration_from_client_flags, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_configuration_from_client_flags);
// public: long s_static_string<256>::next_index_of(char const *, long) const;
// public: static bool c_flags_no_init<enum e_network_session_find_host_peer_result_flag, unsigned char, 3, struct s_network_session_find_host_peer_result_flag_string_resolver>::valid_bit(enum e_network_session_find_host_peer_result_flag);
// private: static unsigned char c_flags_no_init<enum e_network_session_find_host_peer_result_flag, unsigned char, 3, struct s_network_session_find_host_peer_result_flag_string_resolver>::flag_size_type(enum e_network_session_find_host_peer_result_flag);
// public: void c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_managed_session_creation_flags);
// private: static unsigned char c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_managed_session_creation_flags);
// public: static bool c_flags_no_init<enum e_managed_session_status_flags, unsigned short, 14, struct s_default_enum_string_resolver>::valid_bit(enum e_managed_session_status_flags);
// private: static unsigned short c_flags_no_init<enum e_managed_session_status_flags, unsigned short, 14, struct s_default_enum_string_resolver>::flag_size_type(enum e_managed_session_status_flags);
// public: void c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_network_session_find_host_flags);
// private: static unsigned char c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_session_find_host_flags);
// public: static bool s_static_array<unsigned __int64, 16>::valid<long>(long);
// private: static unsigned long c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_peer_properties_connection_update);
// private: static unsigned char c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_managed_session_creation_flags);
// private: static unsigned char c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_session_find_host_flags);

//public: bool c_network_session::initialize_session(long, enum e_network_session_type, class c_network_message_gateway *, class c_network_channel_manager *, class c_network_session_manager *)
//{
//    mangled_ppc("?initialize_session@c_network_session@@QAA_NJW4e_network_session_type@@PAVc_network_message_gateway@@PAVc_network_channel_manager@@PAVc_network_session_manager@@@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//public: void c_network_session_membership::set_session(class c_network_session *)
//{
//    mangled_ppc("?set_session@c_network_session_membership@@QAAXPAVc_network_session@@@Z");
//};

//public: void c_network_session::destroy_session(void)
//{
//    mangled_ppc("?destroy_session@c_network_session@@QAAXXZ");
//};

//public: bool c_network_session::create_host_session(class c_flags<enum e_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>, enum e_network_session_class, enum e_transport_platform, class c_network_session_membership const *, struct s_online_context const *, long)
//{
//    mangled_ppc("?create_host_session@c_network_session@@QAA_NV?$c_flags@W4e_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@W4e_network_session_class@@W4e_transport_platform@@PBVc_network_session_membership@@PBUs_online_context@@J@Z");
//};

//public: void c_network_session_membership::set_local_peer_index(long)
//{
//    mangled_ppc("?set_local_peer_index@c_network_session_membership@@QAAXJ@Z");
//};

//public: void c_network_session_membership::set_host_peer_index(long)
//{
//    mangled_ppc("?set_host_peer_index@c_network_session_membership@@QAAXJ@Z");
//};

//public: void c_network_session_membership::set_party_nonce(unsigned __int64)
//{
//    mangled_ppc("?set_party_nonce@c_network_session_membership@@QAAX_K@Z");
//};

//public: void c_network_session_membership::set_join_nonce(long, unsigned __int64)
//{
//    mangled_ppc("?set_join_nonce@c_network_session_membership@@QAAXJ_K@Z");
//};

//public: struct s_network_session_peer * c_network_session_membership::get_peer(long)
//{
//    mangled_ppc("?get_peer@c_network_session_membership@@QAAPAUs_network_session_peer@@J@Z");
//};

//public: struct s_network_session_player * c_network_session_membership::get_player(long)
//{
//    mangled_ppc("?get_player@c_network_session_membership@@QAAPAUs_network_session_player@@J@Z");
//};

//public: bool c_network_session::join_remote_session(class c_flags<enum e_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>, enum e_network_session_class, enum e_transport_platform, struct s_transport_secure_identifier const *, struct s_transport_secure_key const *, struct s_transport_secure_address const *, unsigned __int64, class c_network_session_membership const *, struct s_network_session_join_request_payload const *, struct s_online_context const *, long, bool)
//{
//    mangled_ppc("?join_remote_session@c_network_session@@QAA_NV?$c_flags@W4e_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@W4e_network_session_class@@W4e_transport_platform@@PBUs_transport_secure_identifier@@PBUs_transport_secure_key@@PBUs_transport_secure_address@@_KPBVc_network_session_membership@@PBUs_network_session_join_request_payload@@PBUs_online_context@@J_N@Z");
//};

//public: struct s_player_identifier const * c_network_session_membership::get_player_identifier(long) const
//{
//    mangled_ppc("?get_player_identifier@c_network_session_membership@@QBAPBUs_player_identifier@@J@Z");
//};

//public: struct s_player_configuration const * c_network_session_membership::get_player_data(long) const
//{
//    mangled_ppc("?get_player_data@c_network_session_membership@@QBAPBUs_player_configuration@@J@Z");
//};

//public: bool c_network_session::connect_peer_to_remote_session(class c_flags<enum e_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>, enum e_network_session_class, enum e_transport_platform, struct s_transport_secure_identifier const *, struct s_transport_secure_key const *, struct s_transport_secure_address const *, unsigned __int64, struct s_online_context const *, long)
//{
//    mangled_ppc("?connect_peer_to_remote_session@c_network_session@@QAA_NV?$c_flags@W4e_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@W4e_network_session_class@@W4e_transport_platform@@PBUs_transport_secure_identifier@@PBUs_transport_secure_key@@PBUs_transport_secure_address@@_KPBUs_online_context@@J@Z");
//};

//private: bool c_network_session::create_session_for_remote_join(class c_flags<enum e_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>, enum e_network_session_class, enum e_transport_platform, struct s_transport_secure_identifier const *, struct s_transport_secure_key const *, struct s_transport_secure_address const *, bool, unsigned __int64, struct s_network_session_join_request const *, struct s_online_context const *, long)
//{
//    mangled_ppc("?create_session_for_remote_join@c_network_session@@AAA_NV?$c_flags@W4e_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@W4e_network_session_class@@W4e_transport_platform@@PBUs_transport_secure_identifier@@PBUs_transport_secure_key@@PBUs_transport_secure_address@@_N_KPBUs_network_session_join_request@@PBUs_online_context@@J@Z");
//};

//public: bool c_network_session::ready_for_remote_peers_to_join(void) const
//{
//    mangled_ppc("?ready_for_remote_peers_to_join@c_network_session@@QBA_NXZ");
//};

//public: struct s_network_session_peer const * c_network_session_membership::get_local_peer(void) const
//{
//    mangled_ppc("?get_local_peer@c_network_session_membership@@QBAPBUs_network_session_peer@@XZ");
//};

//public: void c_network_session::set_default_session_parameters(void)
//{
//    mangled_ppc("?set_default_session_parameters@c_network_session@@QAAXXZ");
//};

//public: bool c_network_session::set_privacy_details(enum e_network_session_privacy, enum e_network_session_closed_status, long, long)
//{
//    mangled_ppc("?set_privacy_details@c_network_session@@QAA_NW4e_network_session_privacy@@W4e_network_session_closed_status@@JJ@Z");
//};

//public: bool c_network_session::membership_is_stable(void) const
//{
//    mangled_ppc("?membership_is_stable@c_network_session@@QBA_NXZ");
//};

//private: void c_network_session::process_pending_joins(void)
//{
//    mangled_ppc("?process_pending_joins@c_network_session@@AAAXXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//public: struct s_network_session_shared_membership const * c_network_session_membership::get_current_membership(void) const
//{
//    mangled_ppc("?get_current_membership@c_network_session_membership@@QBAPBUs_network_session_shared_membership@@XZ");
//};

//public: enum e_network_session_peer_state c_network_session_membership::get_peer_connection_state(long) const
//{
//    mangled_ppc("?get_peer_connection_state@c_network_session_membership@@QBA?AW4e_network_session_peer_state@@J@Z");
//};

//public: unsigned __int64 c_network_session_membership::get_join_nonce(long) const
//{
//    mangled_ppc("?get_join_nonce@c_network_session_membership@@QBA_KJ@Z");
//};

//public: unsigned long c_network_session_membership::get_creation_timestamp(long) const
//{
//    mangled_ppc("?get_creation_timestamp@c_network_session_membership@@QBAKJ@Z");
//};

//public: bool c_network_session::host_join_nonce_valid(void) const
//{
//    mangled_ppc("?host_join_nonce_valid@c_network_session@@QBA_NXZ");
//};

//public: bool c_network_session::join_nonce_is_from_clone_join_or_is_hosts(unsigned __int64)
//{
//    mangled_ppc("?join_nonce_is_from_clone_join_or_is_hosts@c_network_session@@QAA_N_K@Z");
//};

//private: void c_network_session::add_pending_join_to_session(unsigned __int64)
//{
//    mangled_ppc("?add_pending_join_to_session@c_network_session@@AAAX_K@Z");
//};

//private: void c_network_session::finalize_single_player_add(enum e_network_join_refuse_reason)
//{
//    mangled_ppc("?finalize_single_player_add@c_network_session@@AAAXW4e_network_join_refuse_reason@@@Z");
//};

//private: void c_network_session::abort_pending_join(unsigned __int64)
//{
//    mangled_ppc("?abort_pending_join@c_network_session@@AAAX_K@Z");
//};

//public: struct s_network_session_peer * c_network_session_membership::get_host_peer(void)
//{
//    mangled_ppc("?get_host_peer@c_network_session_membership@@QAAPAUs_network_session_peer@@XZ");
//};

//private: void c_network_session::abort_pending_join_by_peer(long, unsigned __int64, bool)
//{
//    mangled_ppc("?abort_pending_join_by_peer@c_network_session@@AAAXJ_K_N@Z");
//};

//private: bool c_network_session::host_handoff_to_name(char const *)
//{
//    mangled_ppc("?host_handoff_to_name@c_network_session@@AAA_NPBD@Z");
//};

//public: void c_network_session::idle(void)
//{
//    mangled_ppc("?idle@c_network_session@@QAAXXZ");
//};

//public: long c_network_session_membership::private_slot_count(void) const
//{
//    mangled_ppc("?private_slot_count@c_network_session_membership@@QBAJXZ");
//};

//public: long c_network_session_membership::public_slot_count(void) const
//{
//    mangled_ppc("?public_slot_count@c_network_session_membership@@QBAJXZ");
//};

//public: bool c_network_session_membership::friends_only(void) const
//{
//    mangled_ppc("?friends_only@c_network_session_membership@@QBA_NXZ");
//};

//public: bool c_network_session_membership::all_peers_established(void) const
//{
//    mangled_ppc("?all_peers_established@c_network_session_membership@@QBA_NXZ");
//};

//public: long c_network_session_membership::get_host_channel_index(void) const
//{
//    mangled_ppc("?get_host_channel_index@c_network_session_membership@@QBAJXZ");
//};

//public: long s_network_session_find_host_results::get_best_host_peer_index(void)
//{
//    mangled_ppc("?get_best_host_peer_index@s_network_session_find_host_results@@QAAJXZ");
//};

//private: void c_network_session::initiate_leave_protocol(bool)
//{
//    mangled_ppc("?initiate_leave_protocol@c_network_session@@AAAX_N@Z");
//};

//public: void c_network_session::force_disconnect(void)
//{
//    mangled_ppc("?force_disconnect@c_network_session@@QAAXXZ");
//};

//private: void c_network_session::set_disconnection_policy(enum e_network_session_disconnection_policy)
//{
//    mangled_ppc("?set_disconnection_policy@c_network_session@@AAAXW4e_network_session_disconnection_policy@@@Z");
//};

//private: void c_network_session::disconnect(enum c_network_session::e_disconnection_context)
//{
//    mangled_ppc("?disconnect@c_network_session@@AAAXW4e_disconnection_context@1@@Z");
//};

//private: enum e_host_selection_mode c_network_session::get_host_selection_mode(bool, bool *)
//{
//    mangled_ppc("?get_host_selection_mode@c_network_session@@AAA?AW4e_host_selection_mode@@_NPA_N@Z");
//};

//private: void c_network_session::handle_boot(enum e_network_session_boot_reason)
//{
//    mangled_ppc("?handle_boot@c_network_session@@AAAXW4e_network_session_boot_reason@@@Z");
//};

//private: void c_network_session::set_default_speculative_migration_state(void)
//{
//    mangled_ppc("?set_default_speculative_migration_state@c_network_session@@AAAXXZ");
//};

//public: bool c_network_session::has_managed_session_connection(void) const
//{
//    mangled_ppc("?has_managed_session_connection@c_network_session@@QBA_NXZ");
//};

//public: bool c_network_session::get_session_id(struct s_transport_secure_identifier *) const
//{
//    mangled_ppc("?get_session_id@c_network_session@@QBA_NPAUs_transport_secure_identifier@@@Z");
//};

//public: bool c_network_session::compare_session_id(struct s_transport_secure_identifier const *) const
//{
//    mangled_ppc("?compare_session_id@c_network_session@@QBA_NPBUs_transport_secure_identifier@@@Z");
//};

//public: bool c_network_session::get_secure_key(struct s_transport_secure_identifier *, struct s_transport_secure_key *, enum e_transport_platform *) const
//{
//    mangled_ppc("?get_secure_key@c_network_session@@QBA_NPAUs_transport_secure_identifier@@PAUs_transport_secure_key@@PAW4e_transport_platform@@@Z");
//};

//public: class c_network_session_membership const * c_network_session::get_session_membership(void) const
//{
//    mangled_ppc("?get_session_membership@c_network_session@@QBAPBVc_network_session_membership@@XZ");
//};

//public: class c_network_session_membership * c_network_session::get_session_membership_for_update(void)
//{
//    mangled_ppc("?get_session_membership_for_update@c_network_session@@QAAPAVc_network_session_membership@@XZ");
//};

//public: class c_network_session_membership const * c_network_session::get_session_membership_unsafe(void) const
//{
//    mangled_ppc("?get_session_membership_unsafe@c_network_session@@QBAPBVc_network_session_membership@@XZ");
//};

//public: long c_network_session::get_session_membership_update_number(void) const
//{
//    mangled_ppc("?get_session_membership_update_number@c_network_session@@QBAJXZ");
//};

//public: long c_network_session::get_local_session_membership_update_number(void) const
//{
//    mangled_ppc("?get_local_session_membership_update_number@c_network_session@@QBAJXZ");
//};

//public: long c_network_session_membership::local_membership_update_number(void) const
//{
//    mangled_ppc("?local_membership_update_number@c_network_session_membership@@QBAJXZ");
//};

//public: bool c_network_session::address_is_remote_peer(struct transport_address const *) const
//{
//    mangled_ppc("?address_is_remote_peer@c_network_session@@QBA_NPBUtransport_address@@@Z");
//};

//public: long c_network_session::get_peer_channel_index(long) const
//{
//    mangled_ppc("?get_peer_channel_index@c_network_session@@QBAJJ@Z");
//};

//public: bool c_network_session::observing_channel(long) const
//{
//    mangled_ppc("?observing_channel@c_network_session@@QBA_NJ@Z");
//};

//public: long c_network_session::get_peer_index(class c_network_channel const *) const
//{
//    mangled_ppc("?get_peer_index@c_network_session@@QBAJPBVc_network_channel@@@Z");
//};

//public: bool c_network_session::peer_request_properties_update(struct s_transport_secure_address const *, struct s_network_message_membership_update_peer_properties const *, bool, unsigned long)
//{
//    mangled_ppc("?peer_request_properties_update@c_network_session@@QAA_NPBUs_transport_secure_address@@PBUs_network_message_membership_update_peer_properties@@_NK@Z");
//};

//public: s_network_message_peer_properties::s_network_message_peer_properties(void)
//{
//    mangled_ppc("??0s_network_message_peer_properties@@QAA@XZ");
//};

//public: s_network_message_membership_update_peer_properties::s_network_message_membership_update_peer_properties(void)
//{
//    mangled_ppc("??0s_network_message_membership_update_peer_properties@@QAA@XZ");
//};

//public: void c_network_session::peer_request_player_add(enum e_output_user_index, struct s_player_identifier const *, long, enum e_controller_index, struct s_player_configuration_from_client const *, struct s_player_voice_settings const *)
//{
//    mangled_ppc("?peer_request_player_add@c_network_session@@QAAXW4e_output_user_index@@PBUs_player_identifier@@JW4e_controller_index@@PBUs_player_configuration_from_client@@PBUs_player_voice_settings@@@Z");
//};

//public: struct s_network_session_player const * c_network_session_membership::get_player_from_peer(long, enum e_output_user_index) const
//{
//    mangled_ppc("?get_player_from_peer@c_network_session_membership@@QBAPBUs_network_session_player@@JW4e_output_user_index@@@Z");
//};

//public: s_network_message_player_add::s_network_message_player_add(void)
//{
//    mangled_ppc("??0s_network_message_player_add@@QAA@XZ");
//};

//public: enum e_network_join_refuse_reason c_network_session::peer_request_player_add_status(enum e_output_user_index, struct s_player_identifier const *)
//{
//    mangled_ppc("?peer_request_player_add_status@c_network_session@@QAA?AW4e_network_join_refuse_reason@@W4e_output_user_index@@PBUs_player_identifier@@@Z");
//};

//public: void c_network_session::peer_complete_player_add(enum e_output_user_index, struct s_player_identifier const *)
//{
//    mangled_ppc("?peer_complete_player_add@c_network_session@@QAAXW4e_output_user_index@@PBUs_player_identifier@@@Z");
//};

//public: bool c_network_session::peer_request_player_desired_properties_update(enum e_output_user_index, long, enum e_controller_index, class c_flags<enum e_player_configuration_from_client_update_bit, unsigned long, 17, struct s_default_enum_string_resolver>, struct s_player_configuration_from_client const *, bool, unsigned long, struct s_player_voice_settings const *)
//{
//    mangled_ppc("?peer_request_player_desired_properties_update@c_network_session@@QAA_NW4e_output_user_index@@JW4e_controller_index@@V?$c_flags@W4e_player_configuration_from_client_update_bit@@K$0BB@Us_default_enum_string_resolver@@@@PBUs_player_configuration_from_client@@_NKPBUs_player_voice_settings@@@Z");
//};

//public: struct s_network_session_peer * c_network_session_membership::get_local_peer(void)
//{
//    mangled_ppc("?get_local_peer@c_network_session_membership@@QAAPAUs_network_session_peer@@XZ");
//};

//public: s_network_message_player_properties::s_network_message_player_properties(void)
//{
//    mangled_ppc("??0s_network_message_player_properties@@QAA@XZ");
//};

//public: bool c_network_session::peer_request_player_remove(enum e_output_user_index)
//{
//    mangled_ppc("?peer_request_player_remove@c_network_session@@QAA_NW4e_output_user_index@@@Z");
//};

//public: bool c_network_session::leader_request_delegate_leadership(struct s_transport_secure_address const *)
//{
//    mangled_ppc("?leader_request_delegate_leadership@c_network_session@@QAA_NPBUs_transport_secure_address@@@Z");
//};

//public: bool c_network_session::leader_request_boot_machine(struct s_transport_secure_address const *, enum e_network_session_boot_reason)
//{
//    mangled_ppc("?leader_request_boot_machine@c_network_session@@QAA_NPBUs_transport_secure_address@@W4e_network_session_boot_reason@@@Z");
//};

//public: bool c_network_session::host_boot_machine(long, enum e_network_session_boot_reason)
//{
//    mangled_ppc("?host_boot_machine@c_network_session@@QAA_NJW4e_network_session_boot_reason@@@Z");
//};

//public: bool c_network_session::host_assume_leadership(void)
//{
//    mangled_ppc("?host_assume_leadership@c_network_session@@QAA_NXZ");
//};

//public: bool c_network_session::host_delegate_host(long, bool)
//{
//    mangled_ppc("?host_delegate_host@c_network_session@@QAA_NJ_N@Z");
//};

//public: bool c_network_session::host_set_player_current_properties(long, struct s_player_configuration const *)
//{
//    mangled_ppc("?host_set_player_current_properties@c_network_session@@QAA_NJPBUs_player_configuration@@@Z");
//};

//public: bool c_network_session::membership_is_locked(void) const
//{
//    mangled_ppc("?membership_is_locked@c_network_session@@QBA_NXZ");
//};

//public: bool c_network_session::session_is_full(long, long) const
//{
//    mangled_ppc("?session_is_full@c_network_session@@QBA_NJJ@Z");
//};

//public: bool c_network_session::join_allowed_by_privacy(bool) const
//{
//    mangled_ppc("?join_allowed_by_privacy@c_network_session@@QBA_N_N@Z");
//};

//public: void c_network_session::disband_and_reestablish_as_host(enum e_disband_and_reestablish_policy)
//{
//    mangled_ppc("?disband_and_reestablish_as_host@c_network_session@@QAAXW4e_disband_and_reestablish_policy@@@Z");
//};

//public: void c_network_session_membership::set_update_number(void)
//{
//    mangled_ppc("?set_update_number@c_network_session_membership@@QAAXXZ");
//};

//public: void c_network_session::whack_session_to_offline_session_class(void)
//{
//    mangled_ppc("?whack_session_to_offline_session_class@c_network_session@@QAAXXZ");
//};

//public: void c_network_session::join_accept(struct s_network_session_join_request const *, struct transport_address const *)
//{
//    mangled_ppc("?join_accept@c_network_session@@QAAXPBUs_network_session_join_request@@PBUtransport_address@@@Z");
//};

//public: bool c_network_session::join_abort(struct transport_address const *, unsigned __int64, bool)
//{
//    mangled_ppc("?join_abort@c_network_session@@QAA_NPBUtransport_address@@_K_N@Z");
//};

//public: bool c_network_session::is_peer_joining_this_session(void) const
//{
//    mangled_ppc("?is_peer_joining_this_session@c_network_session@@QBA_NXZ");
//};

//public: bool c_network_session::waiting_for_host_connection(struct transport_address const *) const
//{
//    mangled_ppc("?waiting_for_host_connection@c_network_session@@QBA_NPBUtransport_address@@@Z");
//};

//public: void c_network_session::host_connection_refused(struct transport_address const *, enum e_network_join_refuse_reason)
//{
//    mangled_ppc("?host_connection_refused@c_network_session@@QAAXPBUtransport_address@@W4e_network_join_refuse_reason@@@Z");
//};

//public: bool c_network_session::waiting_for_initial_update(void) const
//{
//    mangled_ppc("?waiting_for_initial_update@c_network_session@@QBA_NXZ");
//};

//public: bool c_network_session::join_abort_in_progress(struct transport_address const *) const
//{
//    mangled_ppc("?join_abort_in_progress@c_network_session@@QBA_NPBUtransport_address@@@Z");
//};

//public: void c_network_session::join_abort_successful(struct transport_address const *)
//{
//    mangled_ppc("?join_abort_successful@c_network_session@@QAAXPBUtransport_address@@@Z");
//};

//public: bool c_network_session::force_disconnect_peer(struct s_transport_secure_address const *)
//{
//    mangled_ppc("?force_disconnect_peer@c_network_session@@QAA_NPBUs_transport_secure_address@@@Z");
//};

//public: bool c_network_session::handle_leave_internal(long)
//{
//    mangled_ppc("?handle_leave_internal@c_network_session@@QAA_NJ@Z");
//};

//public: virtual bool c_network_session::desire_channel_heartbeat(long) const
//{
//    mangled_ppc("?desire_channel_heartbeat@c_network_session@@UBA_NJ@Z");
//};

//public: virtual enum e_network_channel_owner_state c_network_session::channel_get_state(long) const
//{
//    mangled_ppc("?channel_get_state@c_network_session@@UBA?AW4e_network_channel_owner_state@@J@Z");
//};

//public: virtual bool c_network_session::attempt_channel_reconnection(long, bool) const
//{
//    mangled_ppc("?attempt_channel_reconnection@c_network_session@@UBA_NJ_N@Z");
//};

//public: virtual void c_network_session::notify_channel_connection(long, unsigned long, bool)
//{
//    mangled_ppc("?notify_channel_connection@c_network_session@@UAAXJK_N@Z");
//};

//public: void c_network_session_membership::set_membership_update_number(long, long)
//{
//    mangled_ppc("?set_membership_update_number@c_network_session_membership@@QAAXJJ@Z");
//};

//public: void c_network_session_membership::set_peer_needs_reestablishment(long, bool)
//{
//    mangled_ppc("?set_peer_needs_reestablishment@c_network_session_membership@@QAAXJ_N@Z");
//};

//public: bool c_network_session_membership::is_remote_peer(long) const
//{
//    mangled_ppc("?is_remote_peer@c_network_session_membership@@QBA_NJ@Z");
//};

//public: virtual void c_network_session::notify_channel_died(long)
//{
//    mangled_ppc("?notify_channel_died@c_network_session@@UAAXJ@Z");
//};

//public: virtual long c_network_session::get_player_count(void) const
//{
//    mangled_ppc("?get_player_count@c_network_session@@UBAJXZ");
//};

//public: virtual bool c_network_session::channel_connects_to_tracked_peer(long) const
//{
//    mangled_ppc("?channel_connects_to_tracked_peer@c_network_session@@UBA_NJ@Z");
//};

//public: bool c_network_session::channel_is_authoritative(class c_network_channel *) const
//{
//    mangled_ppc("?channel_is_authoritative@c_network_session@@QBA_NPAVc_network_channel@@@Z");
//};

//public: bool c_network_session::peer_joining(void) const
//{
//    mangled_ppc("?peer_joining@c_network_session@@QBA_NXZ");
//};

//public: class c_network_session_parameters * c_network_session::get_session_parameters(void)
//{
//    mangled_ppc("?get_session_parameters@c_network_session@@QAAPAVc_network_session_parameters@@XZ");
//};

//public: class c_network_session_parameters const * c_network_session::get_session_parameters(void) const
//{
//    mangled_ppc("?get_session_parameters@c_network_session@@QBAPBVc_network_session_parameters@@XZ");
//};

//public: char const * c_network_session::get_id_string(void) const
//{
//    mangled_ppc("?get_id_string@c_network_session@@QBAPBDXZ");
//};

//public: static char const * c_network_session::get_type_string(enum e_network_session_type)
//{
//    mangled_ppc("?get_type_string@c_network_session@@SAPBDW4e_network_session_type@@@Z");
//};

//public: static char const * c_network_session::get_class_string(enum e_network_session_class)
//{
//    mangled_ppc("?get_class_string@c_network_session@@SAPBDW4e_network_session_class@@@Z");
//};

//public: char const * c_network_session::get_state_string(void) const
//{
//    mangled_ppc("?get_state_string@c_network_session@@QBAPBDXZ");
//};

//public: char const * c_network_session::get_disconnection_policy_string(void) const
//{
//    mangled_ppc("?get_disconnection_policy_string@c_network_session@@QBAPBDXZ");
//};

//public: char const * c_network_session::get_peer_description(long) const
//{
//    mangled_ppc("?get_peer_description@c_network_session@@QBAPBDJ@Z");
//};

//public: void c_network_session::describe_status(char *, long) const
//{
//    mangled_ppc("?describe_status@c_network_session@@QBAXPADJ@Z");
//};

//public: struct s_network_session_find_host_per_peer_result const * c_network_session::get_last_peer_host_quality(long) const
//{
//    mangled_ppc("?get_last_peer_host_quality@c_network_session@@QBAPBUs_network_session_find_host_per_peer_result@@J@Z");
//};

//private: struct s_network_session_peer const * c_network_session::get_peer(long) const
//{
//    mangled_ppc("?get_peer@c_network_session@@ABAPBUs_network_session_peer@@J@Z");
//};

//private: struct s_network_session_peer * c_network_session::get_peer(long)
//{
//    mangled_ppc("?get_peer@c_network_session@@AAAPAUs_network_session_peer@@J@Z");
//};

//private: struct s_network_session_player const * c_network_session::get_player(long) const
//{
//    mangled_ppc("?get_player@c_network_session@@ABAPBUs_network_session_player@@J@Z");
//};

//private: struct s_network_session_player * c_network_session::get_player(long)
//{
//    mangled_ppc("?get_player@c_network_session@@AAAPAUs_network_session_player@@J@Z");
//};

//public: bool c_network_session::player_is_member(struct s_player_identifier const *) const
//{
//    mangled_ppc("?player_is_member@c_network_session@@QBA_NPBUs_player_identifier@@@Z");
//};

//public: bool c_network_session::peer_is_member(struct s_transport_secure_address const *) const
//{
//    mangled_ppc("?peer_is_member@c_network_session@@QBA_NPBUs_transport_secure_address@@@Z");
//};

//public: long c_network_session::find_peer_index_by_machine_identifier(struct s_machine_identifier const *) const
//{
//    mangled_ppc("?find_peer_index_by_machine_identifier@c_network_session@@QBAJPBUs_machine_identifier@@@Z");
//};

//public: bool c_network_session::all_players_are_present(void) const
//{
//    mangled_ppc("?all_players_are_present@c_network_session@@QBA_NXZ");
//};

//private: bool c_network_session::boot_peer(long, enum e_network_session_boot_reason)
//{
//    mangled_ppc("?boot_peer@c_network_session@@AAA_NJW4e_network_session_boot_reason@@@Z");
//};

//private: void c_network_session::disband_peer(long)
//{
//    mangled_ppc("?disband_peer@c_network_session@@AAAXJ@Z");
//};

//public: bool c_network_session_membership::has_peer_ever_been_established(long) const
//{
//    mangled_ppc("?has_peer_ever_been_established@c_network_session_membership@@QBA_NJ@Z");
//};

//private: void c_network_session::reset_local_host_state(bool)
//{
//    mangled_ppc("?reset_local_host_state@c_network_session@@AAAX_N@Z");
//};

//private: void c_network_session::handoff_remove_peer_from_consideration(long)
//{
//    mangled_ppc("?handoff_remove_peer_from_consideration@c_network_session@@AAAXJ@Z");
//};

//private: void c_network_session::reestablish_remove_peer_from_reestablishment(long)
//{
//    mangled_ppc("?reestablish_remove_peer_from_reestablishment@c_network_session@@AAAXJ@Z");
//};

//private: enum e_peer_reestablish_state c_network_session::check_to_send_peer_reestablish(enum e_peer_reestablish_state)
//{
//    mangled_ppc("?check_to_send_peer_reestablish@c_network_session@@AAA?AW4e_peer_reestablish_state@@W42@@Z");
//};

//public: bool c_network_session_membership::has_received_membership_update(void) const
//{
//    mangled_ppc("?has_received_membership_update@c_network_session_membership@@QBA_NXZ");
//};

//public: class c_network_channel_manager * c_network_session::get_channel_manager(void)
//{
//    mangled_ppc("?get_channel_manager@c_network_session@@QAAPAVc_network_channel_manager@@XZ");
//};

//private: void c_network_session::check_to_send_peer_join_request(void)
//{
//    mangled_ppc("?check_to_send_peer_join_request@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::check_to_send_peer_join_abort(void)
//{
//    mangled_ppc("?check_to_send_peer_join_abort@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::check_to_send_peer_leave_request(void)
//{
//    mangled_ppc("?check_to_send_peer_leave_request@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::check_to_send_host_reestablish(void)
//{
//    mangled_ppc("?check_to_send_host_reestablish@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::check_to_send_membership_update(void)
//{
//    mangled_ppc("?check_to_send_membership_update@c_network_session@@AAAXXZ");
//};

//public: struct s_network_session_shared_membership const * c_network_session_membership::get_transmitted_membership(void) const
//{
//    mangled_ppc("?get_transmitted_membership@c_network_session_membership@@QBAPBUs_network_session_shared_membership@@XZ");
//};

//public: long c_network_session_membership::get_membership_update_number(long) const
//{
//    mangled_ppc("?get_membership_update_number@c_network_session_membership@@QBAJJ@Z");
//};

//public: bool c_network_session_membership::get_peer_needs_reestablishment(long) const
//{
//    mangled_ppc("?get_peer_needs_reestablishment@c_network_session_membership@@QBA_NJ@Z");
//};

//public: s_network_message_membership_update::s_network_message_membership_update(void)
//{
//    mangled_ppc("??0s_network_message_membership_update@@QAA@XZ");
//};

//public: s_network_message_membership_update_peer::s_network_message_membership_update_peer(void)
//{
//    mangled_ppc("??0s_network_message_membership_update_peer@@QAA@XZ");
//};

//public: s_network_message_membership_update_player::s_network_message_membership_update_player(void)
//{
//    mangled_ppc("??0s_network_message_membership_update_player@@QAA@XZ");
//};

//private: void c_network_session::check_to_send_time_synchronization(void)
//{
//    mangled_ppc("?check_to_send_time_synchronization@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::handle_disconnection(void)
//{
//    mangled_ppc("?handle_disconnection@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::reset_connection_state(enum c_network_session::e_connection_state_reset_type)
//{
//    mangled_ppc("?reset_connection_state@c_network_session@@AAAXW4e_connection_state_reset_type@1@@Z");
//};

//private: bool c_network_session::send_message_to_peer(enum c_network_session::e_session_message_transmission_type, long, enum e_network_message_type, long, void const *) const
//{
//    mangled_ppc("?send_message_to_peer@c_network_session@@ABA_NW4e_session_message_transmission_type@1@JW4e_network_message_type@@JPBX@Z");
//};

//private: void c_network_session::send_message_to_all_peers(enum c_network_session::e_session_message_transmission_type, enum e_network_message_type, long, void const *) const
//{
//    mangled_ppc("?send_message_to_all_peers@c_network_session@@ABAXW4e_session_message_transmission_type@1@W4e_network_message_type@@JPBX@Z");
//};

//public: long c_network_session::get_player_space_available(void) const
//{
//    mangled_ppc("?get_player_space_available@c_network_session@@QBAJXZ");
//};

//public: long c_network_session::get_maximum_player_count(void) const
//{
//    mangled_ppc("?get_maximum_player_count@c_network_session@@QBAJXZ");
//};

//private: void c_network_session::time_set(long)
//{
//    mangled_ppc("?time_set@c_network_session@@AAAXJ@Z");
//};

//private: void c_network_session::time_release(void)
//{
//    mangled_ppc("?time_release@c_network_session@@AAAXXZ");
//};

//public: unsigned long c_network_session::time_get(void) const
//{
//    mangled_ppc("?time_get@c_network_session@@QBAKXZ");
//};

//public: enum e_network_join_refuse_reason c_network_session::can_accept_any_join_request(void) const
//{
//    mangled_ppc("?can_accept_any_join_request@c_network_session@@QBA?AW4e_network_join_refuse_reason@@XZ");
//};

//public: enum e_network_join_refuse_reason c_network_session::can_accept_player_join_request(struct s_player_identifier const *, long, enum e_output_user_index, unsigned __int64, bool, bool, bool, bool) const
//{
//    mangled_ppc("?can_accept_player_join_request@c_network_session@@QBA?AW4e_network_join_refuse_reason@@PBUs_player_identifier@@JW4e_output_user_index@@_K_N333@Z");
//};

//public: bool c_map_variant::get_built_in(void) const
//{
//    mangled_ppc("?get_built_in@c_map_variant@@QBA_NXZ");
//};

//public: enum e_network_join_refuse_reason c_network_session::can_accept_join_request(struct s_network_session_join_request const *) const
//{
//    mangled_ppc("?can_accept_join_request@c_network_session@@QBA?AW4e_network_join_refuse_reason@@PBUs_network_session_join_request@@@Z");
//};

//public: void c_network_session::acknowledge_join_request(struct transport_address const *, enum e_network_join_refuse_reason)
//{
//    mangled_ppc("?acknowledge_join_request@c_network_session@@QAAXPBUtransport_address@@W4e_network_join_refuse_reason@@@Z");
//};

//public: void c_network_session::c_speculative_host_migration_probation::enter_probation(long)
//{
//    mangled_ppc("?enter_probation@c_speculative_host_migration_probation@c_network_session@@QAAXJ@Z");
//};

//public: bool c_network_session::c_speculative_host_migration_probation::in_probation(void)
//{
//    mangled_ppc("?in_probation@c_speculative_host_migration_probation@c_network_session@@QAA_NXZ");
//};

//public: bool c_network_session::c_speculative_host_migration_probation::probation_complete(void)
//{
//    mangled_ppc("?probation_complete@c_speculative_host_migration_probation@c_network_session@@QAA_NXZ");
//};

//public: void c_network_session::c_speculative_host_migration_probation::exit_probation(void)
//{
//    mangled_ppc("?exit_probation@c_speculative_host_migration_probation@c_network_session@@QAAXXZ");
//};

//public: c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_network_session_privacy, char, 0, 4, struct s_default_enum_string_resolver>(enum e_network_session_privacy)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_session_privacy@@D$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_network_session_privacy@@@Z");
//};

//public: c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum e_network_session_closed_status)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_session_closed_status@@E$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_network_session_closed_status@@@Z");
//};

//public: bool c_enum_no_init<enum e_network_session_closed_status, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_network_session_closed_status) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_network_session_closed_status@@E$0A@$05Us_default_enum_string_resolver@@@@QBA_NW4e_network_session_closed_status@@@Z");
//};

//public: long c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_network_session_find_host_per_peer_result@@$0BA@@@QBAJXZ");
//};

//public: struct s_network_session_find_host_per_peer_result & c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_network_session_find_host_per_peer_result@@$0BA@@@QAAAAUs_network_session_find_host_per_peer_result@@J@Z");
//};

//public: c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>(enum e_game_results_leave_reason)
//{
//    mangled_ppc("??0?$c_enum@W4e_game_results_leave_reason@@E$0A@$0BB@Us_default_enum_string_resolver@@@@QAA@W4e_game_results_leave_reason@@@Z");
//};

//public: enum e_game_results_leave_reason c_enum_no_init<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::operator enum e_game_results_leave_reason(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_game_results_leave_reason@@E$0A@$0BB@Us_default_enum_string_resolver@@@@QBA?AW4e_game_results_leave_reason@@XZ");
//};

//public: c_enum<enum e_output_user_index, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_output_user_index, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_output_user_index@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_network_session_find_host_per_peer_result@@$0BA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_network_session_find_host_per_peer_result@@$0BA@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_player_configuration_from_client_flags, unsigned short, 9, struct s_default_enum_string_resolver>::test(enum e_player_configuration_from_client_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_player_configuration_from_client_flags@@G$08Us_default_enum_string_resolver@@@@QBA_NW4e_player_configuration_from_client_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_player_configuration_from_client_flags, unsigned short, 9, struct s_default_enum_string_resolver>::set(enum e_player_configuration_from_client_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_player_configuration_from_client_flags@@G$08Us_default_enum_string_resolver@@@@QAAXW4e_player_configuration_from_client_flags@@_N@Z");
//};

//public: long s_static_string<256>::index_of(char const *) const
//{
//    mangled_ppc("?index_of@?$s_static_string@$0BAA@@@QBAJPBD@Z");
//};

//public: static long s_static_string<256>::max_length(void)
//{
//    mangled_ppc("?max_length@?$s_static_string@$0BAA@@@SAJXZ");
//};

//public: char (& s_static_string<256>::get_buffer(void))[256]
//{
//    mangled_ppc("?get_buffer@?$s_static_string@$0BAA@@@QAAAAY0BAA@DXZ");
//};

//public: bool c_flags_no_init<enum e_network_session_find_host_peer_result_flag, unsigned char, 3, struct s_network_session_find_host_peer_result_flag_string_resolver>::test(enum e_network_session_find_host_peer_result_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_session_find_host_peer_result_flag@@E$02Us_network_session_find_host_peer_result_flag_string_resolver@@@@QBA_NW4e_network_session_find_host_peer_result_flag@@@Z");
//};

//public: c_flags<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::c_flags<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//bool operator==<enum e_network_session_state>(enum e_network_session_state const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8W4e_network_session_state@@@@YA_NABW4e_network_session_state@@ABW4e_none_sentinel@@@Z");
//};

//bool operator!=<enum e_network_session_state>(enum e_network_session_state const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9W4e_network_session_state@@@@YA_NABW4e_network_session_state@@ABW4e_none_sentinel@@@Z");
//};

//public: bool c_flags_no_init<enum e_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::test(enum e_session_creation_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@QBA_NW4e_session_creation_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_managed_session_creation_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_managed_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@QAAXW4e_managed_session_creation_flags@@_N@Z");
//};

//public: c_flags<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_managed_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_managed_session_status_flags, unsigned short, 14, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_managed_session_status_flags@@G$0O@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_managed_session_status_flags, unsigned short, 14, struct s_default_enum_string_resolver>::test(enum e_managed_session_status_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_managed_session_status_flags@@G$0O@Us_default_enum_string_resolver@@@@QBA_NW4e_managed_session_status_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_managed_session_status_flags, unsigned short, 14, struct s_default_enum_string_resolver>::set(enum e_managed_session_status_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_managed_session_status_flags@@G$0O@Us_default_enum_string_resolver@@@@QAAXW4e_managed_session_status_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_network_session_find_host_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_session_find_host_flags@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_network_session_find_host_flags@@_N@Z");
//};

//public: c_flags<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_session_find_host_flags@@E$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: unsigned __int64& s_static_array<unsigned __int64, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@_K$0BA@@@QAAAA_KJ@Z");
//};

//public: static bool c_flags_no_init<enum e_player_configuration_from_client_flags, unsigned short, 9, struct s_default_enum_string_resolver>::valid_bit(enum e_player_configuration_from_client_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_player_configuration_from_client_flags@@G$08Us_default_enum_string_resolver@@@@SA_NW4e_player_configuration_from_client_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_player_configuration_from_client_flags, unsigned short, 9, struct s_default_enum_string_resolver>::flag_size_type(enum e_player_configuration_from_client_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_player_configuration_from_client_flags@@G$08Us_default_enum_string_resolver@@@@CAGW4e_player_configuration_from_client_flags@@@Z");
//};

//public: long s_static_string<256>::next_index_of(char const *, long) const
//{
//    mangled_ppc("?next_index_of@?$s_static_string@$0BAA@@@QBAJPBDJ@Z");
//};

//public: static bool c_flags_no_init<enum e_network_session_find_host_peer_result_flag, unsigned char, 3, struct s_network_session_find_host_peer_result_flag_string_resolver>::valid_bit(enum e_network_session_find_host_peer_result_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_session_find_host_peer_result_flag@@E$02Us_network_session_find_host_peer_result_flag_string_resolver@@@@SA_NW4e_network_session_find_host_peer_result_flag@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_session_find_host_peer_result_flag, unsigned char, 3, struct s_network_session_find_host_peer_result_flag_string_resolver>::flag_size_type(enum e_network_session_find_host_peer_result_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_session_find_host_peer_result_flag@@E$02Us_network_session_find_host_peer_result_flag_string_resolver@@@@CAEW4e_network_session_find_host_peer_result_flag@@@Z");
//};

//public: void c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_managed_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_managed_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_managed_session_creation_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_managed_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@SA_NW4e_managed_session_creation_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_managed_session_creation_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_managed_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@CAEW4e_managed_session_creation_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_managed_session_status_flags, unsigned short, 14, struct s_default_enum_string_resolver>::valid_bit(enum e_managed_session_status_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_managed_session_status_flags@@G$0O@Us_default_enum_string_resolver@@@@SA_NW4e_managed_session_status_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_managed_session_status_flags, unsigned short, 14, struct s_default_enum_string_resolver>::flag_size_type(enum e_managed_session_status_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_managed_session_status_flags@@G$0O@Us_default_enum_string_resolver@@@@CAGW4e_managed_session_status_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_session_find_host_flags@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_network_session_find_host_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_network_session_find_host_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_session_find_host_flags@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_network_session_find_host_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_session_find_host_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_session_find_host_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_network_session_find_host_flags@@@Z");
//};

//public: static bool s_static_array<unsigned __int64, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@_K$0BA@@@SA_NJ@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_managed_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_network_session_find_host_flags@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_peer_properties_connection_update)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@CAKW4e_peer_properties_connection_update@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_managed_session_creation_flags, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_managed_session_creation_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_managed_session_creation_flags@@E$03Us_default_enum_string_resolver@@@@CAEW4e_managed_session_creation_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_session_find_host_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_network_session_find_host_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_network_session_find_host_flags@@@Z");
//};

