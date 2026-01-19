/* ---------- headers */

#include "omaha\networking\delivery\network_channel_manager.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_secure_connection_owner_flags const c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_secure_connection_owner_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_secure_connection_owner_flags@@B"
// public: static long const s_static_array<class c_secure_connection_owner, 5>::k_element_count; // "?k_element_count@?$s_static_array@Vc_secure_connection_owner@@$04@@2JB"
// public: static enum e_managed_channel_flags const c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_managed_channel_flags@@E$05Us_default_enum_string_resolver@@@@2W4e_managed_channel_flags@@B"
// public: static enum e_network_channel_manager_owner const c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_network_channel_manager_owner@@E$04Us_default_enum_string_resolver@@@@2W4e_network_channel_manager_owner@@B"
// public: static long const s_static_array<class c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver>, 2>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_flags@J_K$0DB@Us_default_enum_string_resolver@@@@$01@@2JB"
// public: static long const c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@J_K$0DB@Us_default_enum_string_resolver@@@@2JB"
// public: static long const s_static_array<struct s_channel_manager_owner, 5>::k_element_count; // "?k_element_count@?$s_static_array@Us_channel_manager_owner@@$04@@2JB"
// public: static long const s_static_array<struct s_managed_channel, 32>::k_element_count; // "?k_element_count@?$s_static_array@Us_managed_channel@@$0CA@@@2JB"
// char const **g_owner_type_strings; // "?g_owner_type_strings@@3PAPBDA"
// char const **g_managed_channel_state_strings; // "?g_managed_channel_state_strings@@3PAPBDA"
// char const **g_managed_channel_brief_state_strings; // "?g_managed_channel_brief_state_strings@@3PAPBDA"
// long g_network_pretend_latency_msec; // "?g_network_pretend_latency_msec@@3JA"
// long g_net_debug_channel_to_graph; // "?g_net_debug_channel_to_graph@@3JA"

// public: c_network_channel_manager_internal::c_network_channel_manager_internal(void);
// public: s_static_array<struct s_managed_channel, 32>::s_static_array<struct s_managed_channel, 32>(void);
// public: s_managed_channel::s_managed_channel(void);
// public: c_network_window_statistics::c_network_window_statistics(void);
// public: c_network_channel::c_network_channel(void);
// public: c_network_connection::c_network_connection(void);
// public: c_sliding_window::c_sliding_window(long);
// public: c_network_connection::s_connection_incoming_packet::s_connection_incoming_packet(void);
// public: virtual char const * c_network_connection::get_client_name(void) const;
// public: virtual bool c_network_connection::connection_lost(enum e_network_channel_closure_reason *) const;
// public: s_static_array<class c_network_message_queue, 2>::s_static_array<class c_network_message_queue, 2>(void);
// public: c_network_channel_simulation_gatekeeper::c_network_channel_simulation_gatekeeper(void);
// public: s_static_array<class c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver>, 2>::s_static_array<class c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver>, 2>(void);
// public: c_network_channel_manager_internal::~c_network_channel_manager_internal(void);
// public: s_static_array<struct s_managed_channel, 32>::~s_static_array<struct s_managed_channel, 32>(void);
// public: s_managed_channel::~s_managed_channel(void);
// public: c_network_window_statistics::~c_network_window_statistics(void);
// public: c_network_channel::~c_network_channel(void);
// public: c_network_connection::~c_network_connection(void);
// public: c_sliding_window::~c_sliding_window(void);
// public: s_static_array<class c_network_message_queue, 2>::~s_static_array<class c_network_message_queue, 2>(void);
// public: c_network_channel_simulation_gatekeeper::~c_network_channel_simulation_gatekeeper(void);
// public: struct s_managed_channel * c_network_channel_manager_internal::get_managed_channel(enum e_network_channel_manager_owner, long);
// public: struct s_managed_channel const * c_network_channel_manager_internal::get_managed_channel(enum e_network_channel_manager_owner, long) const;
// public: struct s_managed_channel * c_network_channel_manager_internal::find_managed_channel_by_channel(class c_network_channel const *) const;
// public: long c_network_channel_manager_internal::find_channel_index_by_managed_channel(struct s_managed_channel const *) const;
// public: long c_network_channel_manager_internal::allocate_channel(enum e_network_channel_manager_owner, struct s_transport_secure_address const *);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// public: void c_network_channel::set_connection_packet_timeout(long);
// public: void c_network_connection::set_packet_timeout(long);
// public: void c_network_channel_manager_internal::clear_channel(long);
// public: static void * c_network_channel::operator new(unsigned int, void *);
// public: void c_network_channel_manager_internal::release_channel(long);
// public: bool c_network_channel_manager_internal::update_channel_existence(long);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: void c_network_channel_manager_internal::update_channel_secure_state(long);
// public: void c_network_channel_manager_internal::update_channel_connection_state(long);
// public: bool c_network_channel::closed(void) const;
// public: enum e_network_channel_closure_reason c_network_channel::closure_reason(void) const;
// public: void c_network_channel_manager_internal::change_managed_channel_state(long, enum e_managed_channel_state);
// public: void c_network_channel_manager_internal::update_channel_timeout(long);
// public: void c_network_channel_manager_internal::update_channel_qos(long);
// public: bool c_network_channel_manager_internal::update_undesired_connection_timers(long, enum e_network_channel_closure_reason);
// public: void c_network_channel_manager_internal::clear_undesired_connection_timers(long);
// public: void c_network_channel_manager_internal::update_channel_connection_initiation(long);
// public: bool c_network_channel_manager_internal::channel_desires_heartbeat(long) const;
// public: bool c_network_channel::established(void) const;
// bool network_channel_manager_channel_desires_heartbeat(long);
// class c_network_channel_manager_internal const * get_global_channel_manager_const(void);
// public: void c_network_channel_manager_internal::update_channel_with_secure_connection_owners(long);
// public: bool c_network_channel_manager_internal::build_secure_connection(enum e_network_channel_manager_owner, bool, struct s_transport_secure_address const *, struct transport_address *, struct s_transport_secure_identifier *) const;
// public: void c_network_channel_manager_internal::discard_secure_connection(long, bool, enum e_network_channel_closure_reason);
// public: bool c_network_channel_manager_internal::check_stream_channel_connections(void);
// public: bool c_network_channel::simulation_attached(void) const;
// public: bool c_network_channel::simulation_is_authority(void) const;
// void voice_set_outgoing_channel_count(long, long);
// public: void c_network_channel_manager_internal::update_voice_repeater_use(void);
// public: char const * c_network_channel_manager_internal::get_managed_channel_name(long) const;
// public: float c_network_channel_manager_internal::get_managed_channel_rtt_deviation_sanitized(long) const;
// public: bool c_network_channel_manager_internal::channel_connects_to_peer_in_my_squad(long) const;
// public: bool c_network_channel_manager_internal::channel_state_allows_secure_connections(long) const;
// void network_channel_manager_get_managed_channel_rtt(long, struct s_channel_rtt_information *);
// class c_network_channel_manager_internal * get_global_channel_manager(void);
// void network_channel_manager_get_managed_channel_statistics(long, struct s_channel_statistics *);
// void network_channel_manager_set_last_packet_received_timestamp_to_present(long);
// bool network_channel_manager_get_channel_is_connected(long);
// void network_channel_manager_get_connection_safe_sequence_range_properties(long, long *, long *);
// long network_channel_manager_get_last_packet_slot_timestamp(long);
// void network_channel_manager_set_last_packet_slot_timestamp(long, long);
// bool network_channel_manager_adjust_packet_size(long, long *);
// void network_channel_manager_set_channel_message_queue_send_count(long, long);
// bool network_channel_manager_channel_message_queue_has_delayed_fragments(long);
// void network_channel_manager_record_event(long, enum e_bandwidth_event);
// public: bool c_network_channel_manager::initialize(class c_network_link *, class c_network_message_type_collection *, class c_network_message_gateway *, class c_network_message_handler *, struct s_channel_manager_configuration const *);
// public: void c_network_channel_manager::destroy(void);
// public: void c_network_channel_manager::update(void);
// public: void c_network_channel_manager::register_owner(enum e_network_channel_manager_owner, class c_network_channel_owner *);
// public: void c_network_channel_manager::update_owner(enum e_network_channel_manager_owner, long);
// public: void c_network_channel_manager::deregister_owner(enum e_network_channel_manager_owner, class c_network_channel_owner const *);
// public: void c_network_channel_manager::handle_connect_request(struct transport_address const *, struct s_network_message_connect_request const *);
// public: bool c_network_channel::is_transmit_only(void) const;
// public: bool c_network_channel::is_receive_only(void) const;
// public: bool c_network_channel::is_voice_only(void) const;
// public: bool c_network_channel::simulation_can_be_established(void) const;
// public: unsigned long c_network_channel::get_remote_identifier(void) const;
// public: void c_network_channel_manager::set_online_network_environment(bool);
// public: void c_network_channel_manager::set_estimated_bandwidth(long, float, float, bool);
// public: void c_network_channel_manager::record_host_badness_at_end_of_bandwidth_tracking(void);
// public: void c_network_channel_manager::record_client_badness_at_end_of_bandwidth_tracking(void);
// public: void c_network_channel_manager::reset_bandwidth(void);
// public: void c_network_channel_manager::reset_congestion_bandwidth(void);
// public: bool c_network_channel_manager::get_host_bandwidth_results(struct s_bandwidth_host_measurement *, enum e_network_quality_context *) const;
// public: bool c_network_channel_manager::get_client_bandwidth_results(struct s_bandwidth_client_measurement *, enum e_network_quality_context *) const;
// public: bool c_network_channel_manager::is_bandwidth_stable(void) const;
// public: void c_network_channel_manager::quality_statistics_notify_established_connectivity(long, bool);
// public: long c_network_channel_manager::channel_acquire(enum e_network_channel_manager_owner, struct s_transport_secure_address const *);
// public: void c_network_channel_manager::channel_release(enum e_network_channel_manager_owner, long);
// public: void c_network_channel_manager::verify_no_channels_are_allocated(void);
// public: class c_network_channel * c_network_channel_manager::channel_iterate(class c_network_channel const *);
// public: long c_network_channel_manager::owner_channel_iterate(enum e_network_channel_manager_owner, long) const;
// public: long c_network_channel_manager::channel_find_by_network_address(enum e_network_channel_manager_owner, struct s_transport_secure_address const *);
// public: long c_network_channel_manager::channel_find_by_network_channel(enum e_network_channel_manager_owner, class c_network_channel const *) const;
// public: long c_network_channel_manager::channel_find_by_machine_identifier(enum e_network_channel_manager_owner, struct s_transport_unique_identifier const *) const;
// public: long c_network_channel_manager::find_channel_index_by_channel(class c_network_channel const *) const;
// public: bool c_network_channel_manager::channel_connected(enum e_network_channel_manager_owner, long) const;
// public: bool c_network_channel_manager::channel_secure_connection_established(enum e_network_channel_manager_owner, long) const;
// public: bool c_network_channel_manager::channel_currently_alive(enum e_network_channel_manager_owner, long) const;
// public: bool c_network_channel_manager::channel_ever_connected(enum e_network_channel_manager_owner, long) const;
// public: bool c_network_channel_manager::channel_dead(enum e_network_channel_manager_owner, long) const;
// public: bool c_network_channel_manager::channel_get_qos_result(enum e_network_channel_manager_owner, long, bool *, struct s_transport_qos_result *) const;
// public: bool c_network_channel_manager::channel_get_last_receive_activity(enum e_network_channel_manager_owner, long, unsigned long *) const;
// public: void c_network_channel_manager::channel_get_secure_address(enum e_network_channel_manager_owner, long, struct s_transport_secure_address *) const;
// public: class c_network_channel * c_network_channel_manager::channel_get_network_channel(enum e_network_channel_manager_owner, long);
// public: class c_network_channel const * c_network_channel_manager::channel_get_network_channel_const(enum e_network_channel_manager_owner, long) const;
// public: bool c_network_channel_manager::channel_backlogged(enum e_network_channel_manager_owner, long, enum e_network_message_type, bool) const;
// public: void c_network_channel_manager::channel_get_bandwidth_events(enum e_network_channel_manager_owner, long, long, long *) const;
// public: void c_network_channel_manager::channel_initiate_connection(enum e_network_channel_manager_owner, long);
// public: bool c_network_channel_manager::channel_send_message(enum e_network_channel_manager_owner, long, bool, bool, enum e_network_message_type, long, void const *);
// public: void c_network_channel_manager::channel_set_remote_host_name(enum e_network_channel_manager_owner, long, char const *);
// public: void c_network_channel_manager::channel_log_message_queue_state(long, bool);
// public: void c_network_channel_manager::channel_set_waiting_on_backlog(enum e_network_channel_manager_owner, long, enum e_network_message_type, bool);
// public: void c_network_channel_manager::channel_reset(enum e_network_channel_manager_owner, long);
// public: void c_network_channel_manager::channel_reset_security(enum e_network_channel_manager_owner, long);
// public: void c_network_channel_manager::channel_set_properties_from_peer(enum e_network_channel_manager_owner, long, bool, long, bool);
// public: void c_network_channel_manager::prioritize_upload_bandwidth(bool);
// public: void c_network_channel_manager::clear_security_flags(void);
// public: void c_network_channel_manager::handle_packet_event(class c_network_channel const *, enum e_network_packet_event, long, long, long, bool);
// public: bool c_network_channel_manager::channel_should_send_packet(class c_network_channel const *, bool, bool, bool, bool *, bool *, long *, long *, long, void *);
// public: void c_network_channel_manager::output_channel_state(class c_network_channel const *);
// public: void c_network_channel_manager::notify_channel_packet_sent(class c_network_channel const *, long, long, bool, long, long, long);
// public: void c_network_channel_manager::notify_channel_packet_received(class c_network_channel const *, long);
// public: void c_network_channel_manager::destroy_channels(void);
// public: void c_network_channel_manager::recreate_channels(void);
// public: void c_network_channel_manager::update_channel_connection_states(void);
// public: bool c_network_channel_manager::are_all_channels_empty(void) const;
// public: bool c_network_channel::is_empty(void) const;
// public: void c_network_channel_manager::get_upstream_status(long *, long *, long *, long *, long *, long *) const;
// public: bool c_network_channel_manager::get_global_status(struct s_network_channel_manager_global_status *);
// public: bool c_network_channel_manager::get_channel_status(long, struct s_network_managed_channel_status *);
// public: void c_network_channel_manager::log_channel_status_structure(long, struct s_network_managed_channel_status const *);
// public: bool c_network_channel_manager::log_channel_status(long);
// public: char const * c_network_channel_manager::get_managed_channel_name(long) const;
// char const * network_channel_manager_get_managed_channel_name(long);
// public: char const * c_network_channel_manager::get_owner_type_string(enum e_network_channel_manager_owner);
// public: long c_network_channel_manager::get_latency_to_simulation_authority(void) const;
// public: void c_network_channel_manager::force_immediate_stream_rebalancing(void);
// public: static long c_network_channel_manager::get_packet_minimum_game_data_bytes(void);
// void stream_manager_load_core(char const *);
// void stream_manager_save_cores(long);
// void stream_manager_save_core(char const *);
// public: c_secure_connection_owner::c_secure_connection_owner(void);
// public: void c_secure_connection_owner::update(struct s_transport_secure_address const *);
// public: void c_secure_connection_owner::set_valid_and_secured(struct transport_address const *, struct s_transport_secure_identifier const *);
// public: void c_secure_connection_owner::set_valid_and_securing(struct transport_address const *, struct s_transport_secure_identifier const *);
// public: void c_secure_connection_owner::promote_from_securing_to_secured(void);
// public: void c_secure_connection_owner::clear(void);
// public: bool c_secure_connection_owner::is_valid(void) const;
// public: bool c_secure_connection_owner::is_secured(void) const;
// public: bool c_secure_connection_owner::is_securing(void) const;
// public: bool c_secure_connection_owner::is_secured_lost(void) const;
// public: void c_secure_connection_owner::get_address(struct transport_address *) const;
// public: void c_secure_connection_owner::get_secure_identifier(struct s_transport_secure_identifier *) const;
// public: char const * c_secure_connection_owner::get_address_string(void) const;
// public: c_secure_connection_owner_manager::c_secure_connection_owner_manager(void);
// public: s_static_array<class c_secure_connection_owner, 5>::s_static_array<class c_secure_connection_owner, 5>(void);
// public: void c_secure_connection_owner_manager::update(struct s_transport_secure_address const *);
// public: void c_secure_connection_owner_manager::initialize(class c_network_message_gateway *);
// private: void c_secure_connection_owner_manager::clear(void);
// public: void c_secure_connection_owner_manager::set_owner_by_address(enum e_network_channel_manager_owner, struct transport_address const *, struct s_transport_secure_identifier const *);
// public: void c_secure_connection_owner_manager::remove_all_owners(void);
// public: void c_secure_connection_owner_manager::remove_owner(char const *, enum e_network_channel_manager_owner);
// public: void c_secure_connection_owner_manager::add_owner(char const *, enum e_network_channel_manager_owner, struct transport_address const *, struct s_transport_secure_identifier const *);
// public: bool c_secure_connection_owner_manager::any_owner_exists(void) const;
// public: bool c_secure_connection_owner_manager::any_owner_secured(void) const;
// public: bool c_secure_connection_owner_manager::any_secured_owner_using_address(struct transport_address const *) const;
// public: bool c_secure_connection_owner_manager::any_owner_securing(void) const;
// public: bool c_secure_connection_owner_manager::owner_exists(enum e_network_channel_manager_owner) const;
// public: class c_secure_connection_owner const * c_secure_connection_owner_manager::get_owner(enum e_network_channel_manager_owner) const;
// public: void c_secure_connection_owner_manager::get_secured_address_list(class c_transport_address_list *) const;
// void net_disconnect_and_reconnect_all_channels(void);
// public: c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>(void);
// public: static long s_static_array<class c_secure_connection_owner, 5>::get_count(void);
// public: bool c_static_stack<struct s_connectivity_badness_cache_entry, 32>::full(void) const;
// public: long c_static_stack<struct s_connectivity_badness_cache_entry, 32>::count(void) const;
// public: void c_static_stack<struct s_connectivity_badness_cache_entry, 32>::clear(void);
// public: void c_static_stack<struct s_connectivity_badness_cache_entry, 32>::resize(long);
// public: void c_static_stack<struct s_connectivity_badness_cache_entry, 32>::push_back(struct s_connectivity_badness_cache_entry const &);
// public: struct s_connectivity_badness_cache_entry & c_static_stack<struct s_connectivity_badness_cache_entry, 32>::operator[](long);
// public: c_static_stack<struct s_connectivity_badness_cache_entry, 32>::c_static_stack<struct s_connectivity_badness_cache_entry, 32>(void);
// public: bool c_static_stack<struct s_connectivity_badness_cache_entry, 32>::valid(void) const;
// public: bool c_static_stack<struct s_connectivity_badness_cache_entry, 32>::valid(long) const;
// public: long c_static_stack<struct s_connectivity_badness_cache_entry, 32>::push(void);
// public: struct s_connectivity_badness_cache_entry * c_static_stack<struct s_connectivity_badness_cache_entry, 32>::get(long);
// public: void c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_secure_connection_owner_flags) const;
// public: void c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_secure_connection_owner_flags, bool);
// public: c_flags<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_managed_channel_flags) const;
// public: void c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::set(enum e_managed_channel_flags, bool);
// public: c_flags<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_network_channel_manager_owner) const;
// public: void c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum e_network_channel_manager_owner, bool);
// public: c_flags<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::test(long) const;
// public: void c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::set(long, bool);
// public: c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver>(void);
// public: struct s_channel_manager_owner & s_static_array<struct s_channel_manager_owner, 5>::operator[]<long>(long);
// public: struct s_managed_channel & s_static_array<struct s_managed_channel, 32>::operator[]<long>(long);
// public: struct s_managed_channel const & s_static_array<struct s_managed_channel, 32>::operator[]<long>(long) const;
// public: struct s_managed_channel const & s_static_array<struct s_managed_channel, 32>::operator[]<int>(int) const;
// public: struct s_channel_manager_owner & s_static_array<struct s_channel_manager_owner, 5>::operator[]<enum e_network_channel_manager_owner>(enum e_network_channel_manager_owner);
// public: struct s_managed_channel & s_static_array<struct s_managed_channel, 32>::operator[]<int>(int);
// public: struct s_channel_manager_owner const & s_static_array<struct s_channel_manager_owner, 5>::operator[]<enum e_network_channel_manager_owner>(enum e_network_channel_manager_owner) const;
// public: struct s_channel_manager_owner const & s_static_array<struct s_channel_manager_owner, 5>::operator[]<long>(long) const;
// public: class c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver> const & s_static_array<class c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver>, 2>::operator[]<enum e_network_channel_message_queue>(enum e_network_channel_message_queue) const;
// public: class c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver> & s_static_array<class c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver>, 2>::operator[]<enum e_network_channel_message_queue>(enum e_network_channel_message_queue);
// public: class c_secure_connection_owner & s_static_array<class c_secure_connection_owner, 5>::operator[]<long>(long);
// public: class c_secure_connection_owner & s_static_array<class c_secure_connection_owner, 5>::operator[]<enum e_network_channel_manager_owner>(enum e_network_channel_manager_owner);
// public: class c_secure_connection_owner const & s_static_array<class c_secure_connection_owner, 5>::operator[]<long>(long) const;
// public: class c_secure_connection_owner const & s_static_array<class c_secure_connection_owner, 5>::operator[]<enum e_network_channel_manager_owner>(enum e_network_channel_manager_owner) const;
// public: bool c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_secure_connection_owner_flags);
// private: static unsigned char c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_secure_connection_owner_flags);
// public: void c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void);
// public: static bool c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_managed_channel_flags);
// private: static unsigned char c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_managed_channel_flags);
// private: static unsigned char c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: void c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void);
// public: static bool c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_network_channel_manager_owner);
// private: static unsigned char c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_channel_manager_owner);
// private: static unsigned char c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: void c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::valid_bit(long);
// private: static unsigned __int64 c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::flag_size_type(long);
// public: static bool s_static_array<struct s_channel_manager_owner, 5>::valid<long>(long);
// public: static bool s_static_array<struct s_managed_channel, 32>::valid<long>(long);
// public: static bool s_static_array<struct s_managed_channel, 32>::valid<int>(int);
// public: static bool s_static_array<struct s_channel_manager_owner, 5>::valid<enum e_network_channel_manager_owner>(enum e_network_channel_manager_owner);
// public: static bool s_static_array<class c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver>, 2>::valid<enum e_network_channel_message_queue>(enum e_network_channel_message_queue);
// public: static bool s_static_array<class c_secure_connection_owner, 5>::valid<long>(long);
// public: static bool s_static_array<class c_secure_connection_owner, 5>::valid<enum e_network_channel_manager_owner>(enum e_network_channel_manager_owner);
// private: static unsigned char c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_managed_channel_flags);
// private: static unsigned char c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_channel_manager_owner);
// private: static unsigned __int64 c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_secure_connection_owner_flags);
// private: static unsigned __int64 c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long);
// void g_channel_manager::`dynamic atexit destructor'(void);

//public: c_network_channel_manager_internal::c_network_channel_manager_internal(void)
//{
//    mangled_ppc("??0c_network_channel_manager_internal@@QAA@XZ");
//};

//public: s_static_array<struct s_managed_channel, 32>::s_static_array<struct s_managed_channel, 32>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_managed_channel@@$0CA@@@QAA@XZ");
//};

//public: s_managed_channel::s_managed_channel(void)
//{
//    mangled_ppc("??0s_managed_channel@@QAA@XZ");
//};

//public: c_network_window_statistics::c_network_window_statistics(void)
//{
//    mangled_ppc("??0c_network_window_statistics@@QAA@XZ");
//};

//public: c_network_channel::c_network_channel(void)
//{
//    mangled_ppc("??0c_network_channel@@QAA@XZ");
//};

//public: c_network_connection::c_network_connection(void)
//{
//    mangled_ppc("??0c_network_connection@@QAA@XZ");
//};

//public: c_sliding_window::c_sliding_window(long)
//{
//    mangled_ppc("??0c_sliding_window@@QAA@J@Z");
//};

//public: c_network_connection::s_connection_incoming_packet::s_connection_incoming_packet(void)
//{
//    mangled_ppc("??0s_connection_incoming_packet@c_network_connection@@QAA@XZ");
//};

//public: virtual char const * c_network_connection::get_client_name(void) const
//{
//    mangled_ppc("?get_client_name@c_network_connection@@UBAPBDXZ");
//};

//public: virtual bool c_network_connection::connection_lost(enum e_network_channel_closure_reason *) const
//{
//    mangled_ppc("?connection_lost@c_network_connection@@UBA_NPAW4e_network_channel_closure_reason@@@Z");
//};

//public: s_static_array<class c_network_message_queue, 2>::s_static_array<class c_network_message_queue, 2>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_network_message_queue@@$01@@QAA@XZ");
//};

//public: c_network_channel_simulation_gatekeeper::c_network_channel_simulation_gatekeeper(void)
//{
//    mangled_ppc("??0c_network_channel_simulation_gatekeeper@@QAA@XZ");
//};

//public: s_static_array<class c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver>, 2>::s_static_array<class c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver>, 2>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_flags@J_K$0DB@Us_default_enum_string_resolver@@@@$01@@QAA@XZ");
//};

//public: c_network_channel_manager_internal::~c_network_channel_manager_internal(void)
//{
//    mangled_ppc("??1c_network_channel_manager_internal@@QAA@XZ");
//};

//public: s_static_array<struct s_managed_channel, 32>::~s_static_array<struct s_managed_channel, 32>(void)
//{
//    mangled_ppc("??1?$s_static_array@Us_managed_channel@@$0CA@@@QAA@XZ");
//};

//public: s_managed_channel::~s_managed_channel(void)
//{
//    mangled_ppc("??1s_managed_channel@@QAA@XZ");
//};

//public: c_network_window_statistics::~c_network_window_statistics(void)
//{
//    mangled_ppc("??1c_network_window_statistics@@QAA@XZ");
//};

//public: c_network_channel::~c_network_channel(void)
//{
//    mangled_ppc("??1c_network_channel@@QAA@XZ");
//};

//public: c_network_connection::~c_network_connection(void)
//{
//    mangled_ppc("??1c_network_connection@@QAA@XZ");
//};

//public: c_sliding_window::~c_sliding_window(void)
//{
//    mangled_ppc("??1c_sliding_window@@QAA@XZ");
//};

//public: s_static_array<class c_network_message_queue, 2>::~s_static_array<class c_network_message_queue, 2>(void)
//{
//    mangled_ppc("??1?$s_static_array@Vc_network_message_queue@@$01@@QAA@XZ");
//};

//public: c_network_channel_simulation_gatekeeper::~c_network_channel_simulation_gatekeeper(void)
//{
//    mangled_ppc("??1c_network_channel_simulation_gatekeeper@@QAA@XZ");
//};

//public: struct s_managed_channel * c_network_channel_manager_internal::get_managed_channel(enum e_network_channel_manager_owner, long)
//{
//    mangled_ppc("?get_managed_channel@c_network_channel_manager_internal@@QAAPAUs_managed_channel@@W4e_network_channel_manager_owner@@J@Z");
//};

//public: struct s_managed_channel const * c_network_channel_manager_internal::get_managed_channel(enum e_network_channel_manager_owner, long) const
//{
//    mangled_ppc("?get_managed_channel@c_network_channel_manager_internal@@QBAPBUs_managed_channel@@W4e_network_channel_manager_owner@@J@Z");
//};

//public: struct s_managed_channel * c_network_channel_manager_internal::find_managed_channel_by_channel(class c_network_channel const *) const
//{
//    mangled_ppc("?find_managed_channel_by_channel@c_network_channel_manager_internal@@QBAPAUs_managed_channel@@PBVc_network_channel@@@Z");
//};

//public: long c_network_channel_manager_internal::find_channel_index_by_managed_channel(struct s_managed_channel const *) const
//{
//    mangled_ppc("?find_channel_index_by_managed_channel@c_network_channel_manager_internal@@QBAJPBUs_managed_channel@@@Z");
//};

//public: long c_network_channel_manager_internal::allocate_channel(enum e_network_channel_manager_owner, struct s_transport_secure_address const *)
//{
//    mangled_ppc("?allocate_channel@c_network_channel_manager_internal@@QAAJW4e_network_channel_manager_owner@@PBUs_transport_secure_address@@@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//public: void c_network_channel::set_connection_packet_timeout(long)
//{
//    mangled_ppc("?set_connection_packet_timeout@c_network_channel@@QAAXJ@Z");
//};

//public: void c_network_connection::set_packet_timeout(long)
//{
//    mangled_ppc("?set_packet_timeout@c_network_connection@@QAAXJ@Z");
//};

//public: void c_network_channel_manager_internal::clear_channel(long)
//{
//    mangled_ppc("?clear_channel@c_network_channel_manager_internal@@QAAXJ@Z");
//};

//public: static void * c_network_channel::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2c_network_channel@@SAPAXIPAX@Z");
//};

//public: void c_network_channel_manager_internal::release_channel(long)
//{
//    mangled_ppc("?release_channel@c_network_channel_manager_internal@@QAAXJ@Z");
//};

//public: bool c_network_channel_manager_internal::update_channel_existence(long)
//{
//    mangled_ppc("?update_channel_existence@c_network_channel_manager_internal@@QAA_NJ@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//public: void c_network_channel_manager_internal::update_channel_secure_state(long)
//{
//    mangled_ppc("?update_channel_secure_state@c_network_channel_manager_internal@@QAAXJ@Z");
//};

//public: void c_network_channel_manager_internal::update_channel_connection_state(long)
//{
//    mangled_ppc("?update_channel_connection_state@c_network_channel_manager_internal@@QAAXJ@Z");
//};

//public: bool c_network_channel::closed(void) const
//{
//    mangled_ppc("?closed@c_network_channel@@QBA_NXZ");
//};

//public: enum e_network_channel_closure_reason c_network_channel::closure_reason(void) const
//{
//    mangled_ppc("?closure_reason@c_network_channel@@QBA?AW4e_network_channel_closure_reason@@XZ");
//};

//public: void c_network_channel_manager_internal::change_managed_channel_state(long, enum e_managed_channel_state)
//{
//    mangled_ppc("?change_managed_channel_state@c_network_channel_manager_internal@@QAAXJW4e_managed_channel_state@@@Z");
//};

//public: void c_network_channel_manager_internal::update_channel_timeout(long)
//{
//    mangled_ppc("?update_channel_timeout@c_network_channel_manager_internal@@QAAXJ@Z");
//};

//public: void c_network_channel_manager_internal::update_channel_qos(long)
//{
//    mangled_ppc("?update_channel_qos@c_network_channel_manager_internal@@QAAXJ@Z");
//};

//public: bool c_network_channel_manager_internal::update_undesired_connection_timers(long, enum e_network_channel_closure_reason)
//{
//    mangled_ppc("?update_undesired_connection_timers@c_network_channel_manager_internal@@QAA_NJW4e_network_channel_closure_reason@@@Z");
//};

//public: void c_network_channel_manager_internal::clear_undesired_connection_timers(long)
//{
//    mangled_ppc("?clear_undesired_connection_timers@c_network_channel_manager_internal@@QAAXJ@Z");
//};

//public: void c_network_channel_manager_internal::update_channel_connection_initiation(long)
//{
//    mangled_ppc("?update_channel_connection_initiation@c_network_channel_manager_internal@@QAAXJ@Z");
//};

//public: bool c_network_channel_manager_internal::channel_desires_heartbeat(long) const
//{
//    mangled_ppc("?channel_desires_heartbeat@c_network_channel_manager_internal@@QBA_NJ@Z");
//};

//public: bool c_network_channel::established(void) const
//{
//    mangled_ppc("?established@c_network_channel@@QBA_NXZ");
//};

//bool network_channel_manager_channel_desires_heartbeat(long)
//{
//    mangled_ppc("?network_channel_manager_channel_desires_heartbeat@@YA_NJ@Z");
//};

//class c_network_channel_manager_internal const * get_global_channel_manager_const(void)
//{
//    mangled_ppc("?get_global_channel_manager_const@@YAPBVc_network_channel_manager_internal@@XZ");
//};

//public: void c_network_channel_manager_internal::update_channel_with_secure_connection_owners(long)
//{
//    mangled_ppc("?update_channel_with_secure_connection_owners@c_network_channel_manager_internal@@QAAXJ@Z");
//};

//public: bool c_network_channel_manager_internal::build_secure_connection(enum e_network_channel_manager_owner, bool, struct s_transport_secure_address const *, struct transport_address *, struct s_transport_secure_identifier *) const
//{
//    mangled_ppc("?build_secure_connection@c_network_channel_manager_internal@@QBA_NW4e_network_channel_manager_owner@@_NPBUs_transport_secure_address@@PAUtransport_address@@PAUs_transport_secure_identifier@@@Z");
//};

//public: void c_network_channel_manager_internal::discard_secure_connection(long, bool, enum e_network_channel_closure_reason)
//{
//    mangled_ppc("?discard_secure_connection@c_network_channel_manager_internal@@QAAXJ_NW4e_network_channel_closure_reason@@@Z");
//};

//public: bool c_network_channel_manager_internal::check_stream_channel_connections(void)
//{
//    mangled_ppc("?check_stream_channel_connections@c_network_channel_manager_internal@@QAA_NXZ");
//};

//public: bool c_network_channel::simulation_attached(void) const
//{
//    mangled_ppc("?simulation_attached@c_network_channel@@QBA_NXZ");
//};

//public: bool c_network_channel::simulation_is_authority(void) const
//{
//    mangled_ppc("?simulation_is_authority@c_network_channel@@QBA_NXZ");
//};

//void voice_set_outgoing_channel_count(long, long)
//{
//    mangled_ppc("?voice_set_outgoing_channel_count@@YAXJJ@Z");
//};

//public: void c_network_channel_manager_internal::update_voice_repeater_use(void)
//{
//    mangled_ppc("?update_voice_repeater_use@c_network_channel_manager_internal@@QAAXXZ");
//};

//public: char const * c_network_channel_manager_internal::get_managed_channel_name(long) const
//{
//    mangled_ppc("?get_managed_channel_name@c_network_channel_manager_internal@@QBAPBDJ@Z");
//};

//public: float c_network_channel_manager_internal::get_managed_channel_rtt_deviation_sanitized(long) const
//{
//    mangled_ppc("?get_managed_channel_rtt_deviation_sanitized@c_network_channel_manager_internal@@QBAMJ@Z");
//};

//public: bool c_network_channel_manager_internal::channel_connects_to_peer_in_my_squad(long) const
//{
//    mangled_ppc("?channel_connects_to_peer_in_my_squad@c_network_channel_manager_internal@@QBA_NJ@Z");
//};

//public: bool c_network_channel_manager_internal::channel_state_allows_secure_connections(long) const
//{
//    mangled_ppc("?channel_state_allows_secure_connections@c_network_channel_manager_internal@@QBA_NJ@Z");
//};

//void network_channel_manager_get_managed_channel_rtt(long, struct s_channel_rtt_information *)
//{
//    mangled_ppc("?network_channel_manager_get_managed_channel_rtt@@YAXJPAUs_channel_rtt_information@@@Z");
//};

//class c_network_channel_manager_internal * get_global_channel_manager(void)
//{
//    mangled_ppc("?get_global_channel_manager@@YAPAVc_network_channel_manager_internal@@XZ");
//};

//void network_channel_manager_get_managed_channel_statistics(long, struct s_channel_statistics *)
//{
//    mangled_ppc("?network_channel_manager_get_managed_channel_statistics@@YAXJPAUs_channel_statistics@@@Z");
//};

//void network_channel_manager_set_last_packet_received_timestamp_to_present(long)
//{
//    mangled_ppc("?network_channel_manager_set_last_packet_received_timestamp_to_present@@YAXJ@Z");
//};

//bool network_channel_manager_get_channel_is_connected(long)
//{
//    mangled_ppc("?network_channel_manager_get_channel_is_connected@@YA_NJ@Z");
//};

//void network_channel_manager_get_connection_safe_sequence_range_properties(long, long *, long *)
//{
//    mangled_ppc("?network_channel_manager_get_connection_safe_sequence_range_properties@@YAXJPAJ0@Z");
//};

//long network_channel_manager_get_last_packet_slot_timestamp(long)
//{
//    mangled_ppc("?network_channel_manager_get_last_packet_slot_timestamp@@YAJJ@Z");
//};

//void network_channel_manager_set_last_packet_slot_timestamp(long, long)
//{
//    mangled_ppc("?network_channel_manager_set_last_packet_slot_timestamp@@YAXJJ@Z");
//};

//bool network_channel_manager_adjust_packet_size(long, long *)
//{
//    mangled_ppc("?network_channel_manager_adjust_packet_size@@YA_NJPAJ@Z");
//};

//void network_channel_manager_set_channel_message_queue_send_count(long, long)
//{
//    mangled_ppc("?network_channel_manager_set_channel_message_queue_send_count@@YAXJJ@Z");
//};

//bool network_channel_manager_channel_message_queue_has_delayed_fragments(long)
//{
//    mangled_ppc("?network_channel_manager_channel_message_queue_has_delayed_fragments@@YA_NJ@Z");
//};

//void network_channel_manager_record_event(long, enum e_bandwidth_event)
//{
//    mangled_ppc("?network_channel_manager_record_event@@YAXJW4e_bandwidth_event@@@Z");
//};

//public: bool c_network_channel_manager::initialize(class c_network_link *, class c_network_message_type_collection *, class c_network_message_gateway *, class c_network_message_handler *, struct s_channel_manager_configuration const *)
//{
//    mangled_ppc("?initialize@c_network_channel_manager@@QAA_NPAVc_network_link@@PAVc_network_message_type_collection@@PAVc_network_message_gateway@@PAVc_network_message_handler@@PBUs_channel_manager_configuration@@@Z");
//};

//public: void c_network_channel_manager::destroy(void)
//{
//    mangled_ppc("?destroy@c_network_channel_manager@@QAAXXZ");
//};

//public: void c_network_channel_manager::update(void)
//{
//    mangled_ppc("?update@c_network_channel_manager@@QAAXXZ");
//};

//public: void c_network_channel_manager::register_owner(enum e_network_channel_manager_owner, class c_network_channel_owner *)
//{
//    mangled_ppc("?register_owner@c_network_channel_manager@@QAAXW4e_network_channel_manager_owner@@PAVc_network_channel_owner@@@Z");
//};

//public: void c_network_channel_manager::update_owner(enum e_network_channel_manager_owner, long)
//{
//    mangled_ppc("?update_owner@c_network_channel_manager@@QAAXW4e_network_channel_manager_owner@@J@Z");
//};

//public: void c_network_channel_manager::deregister_owner(enum e_network_channel_manager_owner, class c_network_channel_owner const *)
//{
//    mangled_ppc("?deregister_owner@c_network_channel_manager@@QAAXW4e_network_channel_manager_owner@@PBVc_network_channel_owner@@@Z");
//};

//public: void c_network_channel_manager::handle_connect_request(struct transport_address const *, struct s_network_message_connect_request const *)
//{
//    mangled_ppc("?handle_connect_request@c_network_channel_manager@@QAAXPBUtransport_address@@PBUs_network_message_connect_request@@@Z");
//};

//public: bool c_network_channel::is_transmit_only(void) const
//{
//    mangled_ppc("?is_transmit_only@c_network_channel@@QBA_NXZ");
//};

//public: bool c_network_channel::is_receive_only(void) const
//{
//    mangled_ppc("?is_receive_only@c_network_channel@@QBA_NXZ");
//};

//public: bool c_network_channel::is_voice_only(void) const
//{
//    mangled_ppc("?is_voice_only@c_network_channel@@QBA_NXZ");
//};

//public: bool c_network_channel::simulation_can_be_established(void) const
//{
//    mangled_ppc("?simulation_can_be_established@c_network_channel@@QBA_NXZ");
//};

//public: unsigned long c_network_channel::get_remote_identifier(void) const
//{
//    mangled_ppc("?get_remote_identifier@c_network_channel@@QBAKXZ");
//};

//public: void c_network_channel_manager::set_online_network_environment(bool)
//{
//    mangled_ppc("?set_online_network_environment@c_network_channel_manager@@QAAX_N@Z");
//};

//public: void c_network_channel_manager::set_estimated_bandwidth(long, float, float, bool)
//{
//    mangled_ppc("?set_estimated_bandwidth@c_network_channel_manager@@QAAXJMM_N@Z");
//};

//public: void c_network_channel_manager::record_host_badness_at_end_of_bandwidth_tracking(void)
//{
//    mangled_ppc("?record_host_badness_at_end_of_bandwidth_tracking@c_network_channel_manager@@QAAXXZ");
//};

//public: void c_network_channel_manager::record_client_badness_at_end_of_bandwidth_tracking(void)
//{
//    mangled_ppc("?record_client_badness_at_end_of_bandwidth_tracking@c_network_channel_manager@@QAAXXZ");
//};

//public: void c_network_channel_manager::reset_bandwidth(void)
//{
//    mangled_ppc("?reset_bandwidth@c_network_channel_manager@@QAAXXZ");
//};

//public: void c_network_channel_manager::reset_congestion_bandwidth(void)
//{
//    mangled_ppc("?reset_congestion_bandwidth@c_network_channel_manager@@QAAXXZ");
//};

//public: bool c_network_channel_manager::get_host_bandwidth_results(struct s_bandwidth_host_measurement *, enum e_network_quality_context *) const
//{
//    mangled_ppc("?get_host_bandwidth_results@c_network_channel_manager@@QBA_NPAUs_bandwidth_host_measurement@@PAW4e_network_quality_context@@@Z");
//};

//public: bool c_network_channel_manager::get_client_bandwidth_results(struct s_bandwidth_client_measurement *, enum e_network_quality_context *) const
//{
//    mangled_ppc("?get_client_bandwidth_results@c_network_channel_manager@@QBA_NPAUs_bandwidth_client_measurement@@PAW4e_network_quality_context@@@Z");
//};

//public: bool c_network_channel_manager::is_bandwidth_stable(void) const
//{
//    mangled_ppc("?is_bandwidth_stable@c_network_channel_manager@@QBA_NXZ");
//};

//public: void c_network_channel_manager::quality_statistics_notify_established_connectivity(long, bool)
//{
//    mangled_ppc("?quality_statistics_notify_established_connectivity@c_network_channel_manager@@QAAXJ_N@Z");
//};

//public: long c_network_channel_manager::channel_acquire(enum e_network_channel_manager_owner, struct s_transport_secure_address const *)
//{
//    mangled_ppc("?channel_acquire@c_network_channel_manager@@QAAJW4e_network_channel_manager_owner@@PBUs_transport_secure_address@@@Z");
//};

//public: void c_network_channel_manager::channel_release(enum e_network_channel_manager_owner, long)
//{
//    mangled_ppc("?channel_release@c_network_channel_manager@@QAAXW4e_network_channel_manager_owner@@J@Z");
//};

//public: void c_network_channel_manager::verify_no_channels_are_allocated(void)
//{
//    mangled_ppc("?verify_no_channels_are_allocated@c_network_channel_manager@@QAAXXZ");
//};

//public: class c_network_channel * c_network_channel_manager::channel_iterate(class c_network_channel const *)
//{
//    mangled_ppc("?channel_iterate@c_network_channel_manager@@QAAPAVc_network_channel@@PBV2@@Z");
//};

//public: long c_network_channel_manager::owner_channel_iterate(enum e_network_channel_manager_owner, long) const
//{
//    mangled_ppc("?owner_channel_iterate@c_network_channel_manager@@QBAJW4e_network_channel_manager_owner@@J@Z");
//};

//public: long c_network_channel_manager::channel_find_by_network_address(enum e_network_channel_manager_owner, struct s_transport_secure_address const *)
//{
//    mangled_ppc("?channel_find_by_network_address@c_network_channel_manager@@QAAJW4e_network_channel_manager_owner@@PBUs_transport_secure_address@@@Z");
//};

//public: long c_network_channel_manager::channel_find_by_network_channel(enum e_network_channel_manager_owner, class c_network_channel const *) const
//{
//    mangled_ppc("?channel_find_by_network_channel@c_network_channel_manager@@QBAJW4e_network_channel_manager_owner@@PBVc_network_channel@@@Z");
//};

//public: long c_network_channel_manager::channel_find_by_machine_identifier(enum e_network_channel_manager_owner, struct s_transport_unique_identifier const *) const
//{
//    mangled_ppc("?channel_find_by_machine_identifier@c_network_channel_manager@@QBAJW4e_network_channel_manager_owner@@PBUs_transport_unique_identifier@@@Z");
//};

//public: long c_network_channel_manager::find_channel_index_by_channel(class c_network_channel const *) const
//{
//    mangled_ppc("?find_channel_index_by_channel@c_network_channel_manager@@QBAJPBVc_network_channel@@@Z");
//};

//public: bool c_network_channel_manager::channel_connected(enum e_network_channel_manager_owner, long) const
//{
//    mangled_ppc("?channel_connected@c_network_channel_manager@@QBA_NW4e_network_channel_manager_owner@@J@Z");
//};

//public: bool c_network_channel_manager::channel_secure_connection_established(enum e_network_channel_manager_owner, long) const
//{
//    mangled_ppc("?channel_secure_connection_established@c_network_channel_manager@@QBA_NW4e_network_channel_manager_owner@@J@Z");
//};

//public: bool c_network_channel_manager::channel_currently_alive(enum e_network_channel_manager_owner, long) const
//{
//    mangled_ppc("?channel_currently_alive@c_network_channel_manager@@QBA_NW4e_network_channel_manager_owner@@J@Z");
//};

//public: bool c_network_channel_manager::channel_ever_connected(enum e_network_channel_manager_owner, long) const
//{
//    mangled_ppc("?channel_ever_connected@c_network_channel_manager@@QBA_NW4e_network_channel_manager_owner@@J@Z");
//};

//public: bool c_network_channel_manager::channel_dead(enum e_network_channel_manager_owner, long) const
//{
//    mangled_ppc("?channel_dead@c_network_channel_manager@@QBA_NW4e_network_channel_manager_owner@@J@Z");
//};

//public: bool c_network_channel_manager::channel_get_qos_result(enum e_network_channel_manager_owner, long, bool *, struct s_transport_qos_result *) const
//{
//    mangled_ppc("?channel_get_qos_result@c_network_channel_manager@@QBA_NW4e_network_channel_manager_owner@@JPA_NPAUs_transport_qos_result@@@Z");
//};

//public: bool c_network_channel_manager::channel_get_last_receive_activity(enum e_network_channel_manager_owner, long, unsigned long *) const
//{
//    mangled_ppc("?channel_get_last_receive_activity@c_network_channel_manager@@QBA_NW4e_network_channel_manager_owner@@JPAK@Z");
//};

//public: void c_network_channel_manager::channel_get_secure_address(enum e_network_channel_manager_owner, long, struct s_transport_secure_address *) const
//{
//    mangled_ppc("?channel_get_secure_address@c_network_channel_manager@@QBAXW4e_network_channel_manager_owner@@JPAUs_transport_secure_address@@@Z");
//};

//public: class c_network_channel * c_network_channel_manager::channel_get_network_channel(enum e_network_channel_manager_owner, long)
//{
//    mangled_ppc("?channel_get_network_channel@c_network_channel_manager@@QAAPAVc_network_channel@@W4e_network_channel_manager_owner@@J@Z");
//};

//public: class c_network_channel const * c_network_channel_manager::channel_get_network_channel_const(enum e_network_channel_manager_owner, long) const
//{
//    mangled_ppc("?channel_get_network_channel_const@c_network_channel_manager@@QBAPBVc_network_channel@@W4e_network_channel_manager_owner@@J@Z");
//};

//public: bool c_network_channel_manager::channel_backlogged(enum e_network_channel_manager_owner, long, enum e_network_message_type, bool) const
//{
//    mangled_ppc("?channel_backlogged@c_network_channel_manager@@QBA_NW4e_network_channel_manager_owner@@JW4e_network_message_type@@_N@Z");
//};

//public: void c_network_channel_manager::channel_get_bandwidth_events(enum e_network_channel_manager_owner, long, long, long *) const
//{
//    mangled_ppc("?channel_get_bandwidth_events@c_network_channel_manager@@QBAXW4e_network_channel_manager_owner@@JJPAJ@Z");
//};

//public: void c_network_channel_manager::channel_initiate_connection(enum e_network_channel_manager_owner, long)
//{
//    mangled_ppc("?channel_initiate_connection@c_network_channel_manager@@QAAXW4e_network_channel_manager_owner@@J@Z");
//};

//public: bool c_network_channel_manager::channel_send_message(enum e_network_channel_manager_owner, long, bool, bool, enum e_network_message_type, long, void const *)
//{
//    mangled_ppc("?channel_send_message@c_network_channel_manager@@QAA_NW4e_network_channel_manager_owner@@J_N1W4e_network_message_type@@JPBX@Z");
//};

//public: void c_network_channel_manager::channel_set_remote_host_name(enum e_network_channel_manager_owner, long, char const *)
//{
//    mangled_ppc("?channel_set_remote_host_name@c_network_channel_manager@@QAAXW4e_network_channel_manager_owner@@JPBD@Z");
//};

//public: void c_network_channel_manager::channel_log_message_queue_state(long, bool)
//{
//    mangled_ppc("?channel_log_message_queue_state@c_network_channel_manager@@QAAXJ_N@Z");
//};

//public: void c_network_channel_manager::channel_set_waiting_on_backlog(enum e_network_channel_manager_owner, long, enum e_network_message_type, bool)
//{
//    mangled_ppc("?channel_set_waiting_on_backlog@c_network_channel_manager@@QAAXW4e_network_channel_manager_owner@@JW4e_network_message_type@@_N@Z");
//};

//public: void c_network_channel_manager::channel_reset(enum e_network_channel_manager_owner, long)
//{
//    mangled_ppc("?channel_reset@c_network_channel_manager@@QAAXW4e_network_channel_manager_owner@@J@Z");
//};

//public: void c_network_channel_manager::channel_reset_security(enum e_network_channel_manager_owner, long)
//{
//    mangled_ppc("?channel_reset_security@c_network_channel_manager@@QAAXW4e_network_channel_manager_owner@@J@Z");
//};

//public: void c_network_channel_manager::channel_set_properties_from_peer(enum e_network_channel_manager_owner, long, bool, long, bool)
//{
//    mangled_ppc("?channel_set_properties_from_peer@c_network_channel_manager@@QAAXW4e_network_channel_manager_owner@@J_NJ1@Z");
//};

//public: void c_network_channel_manager::prioritize_upload_bandwidth(bool)
//{
//    mangled_ppc("?prioritize_upload_bandwidth@c_network_channel_manager@@QAAX_N@Z");
//};

//public: void c_network_channel_manager::clear_security_flags(void)
//{
//    mangled_ppc("?clear_security_flags@c_network_channel_manager@@QAAXXZ");
//};

//public: void c_network_channel_manager::handle_packet_event(class c_network_channel const *, enum e_network_packet_event, long, long, long, bool)
//{
//    mangled_ppc("?handle_packet_event@c_network_channel_manager@@QAAXPBVc_network_channel@@W4e_network_packet_event@@JJJ_N@Z");
//};

//public: bool c_network_channel_manager::channel_should_send_packet(class c_network_channel const *, bool, bool, bool, bool *, bool *, long *, long *, long, void *)
//{
//    mangled_ppc("?channel_should_send_packet@c_network_channel_manager@@QAA_NPBVc_network_channel@@_N11PA_N2PAJ3JPAX@Z");
//};

//public: void c_network_channel_manager::output_channel_state(class c_network_channel const *)
//{
//    mangled_ppc("?output_channel_state@c_network_channel_manager@@QAAXPBVc_network_channel@@@Z");
//};

//public: void c_network_channel_manager::notify_channel_packet_sent(class c_network_channel const *, long, long, bool, long, long, long)
//{
//    mangled_ppc("?notify_channel_packet_sent@c_network_channel_manager@@QAAXPBVc_network_channel@@JJ_NJJJ@Z");
//};

//public: void c_network_channel_manager::notify_channel_packet_received(class c_network_channel const *, long)
//{
//    mangled_ppc("?notify_channel_packet_received@c_network_channel_manager@@QAAXPBVc_network_channel@@J@Z");
//};

//public: void c_network_channel_manager::destroy_channels(void)
//{
//    mangled_ppc("?destroy_channels@c_network_channel_manager@@QAAXXZ");
//};

//public: void c_network_channel_manager::recreate_channels(void)
//{
//    mangled_ppc("?recreate_channels@c_network_channel_manager@@QAAXXZ");
//};

//public: void c_network_channel_manager::update_channel_connection_states(void)
//{
//    mangled_ppc("?update_channel_connection_states@c_network_channel_manager@@QAAXXZ");
//};

//public: bool c_network_channel_manager::are_all_channels_empty(void) const
//{
//    mangled_ppc("?are_all_channels_empty@c_network_channel_manager@@QBA_NXZ");
//};

//public: bool c_network_channel::is_empty(void) const
//{
//    mangled_ppc("?is_empty@c_network_channel@@QBA_NXZ");
//};

//public: void c_network_channel_manager::get_upstream_status(long *, long *, long *, long *, long *, long *) const
//{
//    mangled_ppc("?get_upstream_status@c_network_channel_manager@@QBAXPAJ00000@Z");
//};

//public: bool c_network_channel_manager::get_global_status(struct s_network_channel_manager_global_status *)
//{
//    mangled_ppc("?get_global_status@c_network_channel_manager@@QAA_NPAUs_network_channel_manager_global_status@@@Z");
//};

//public: bool c_network_channel_manager::get_channel_status(long, struct s_network_managed_channel_status *)
//{
//    mangled_ppc("?get_channel_status@c_network_channel_manager@@QAA_NJPAUs_network_managed_channel_status@@@Z");
//};

//public: void c_network_channel_manager::log_channel_status_structure(long, struct s_network_managed_channel_status const *)
//{
//    mangled_ppc("?log_channel_status_structure@c_network_channel_manager@@QAAXJPBUs_network_managed_channel_status@@@Z");
//};

//public: bool c_network_channel_manager::log_channel_status(long)
//{
//    mangled_ppc("?log_channel_status@c_network_channel_manager@@QAA_NJ@Z");
//};

//public: char const * c_network_channel_manager::get_managed_channel_name(long) const
//{
//    mangled_ppc("?get_managed_channel_name@c_network_channel_manager@@QBAPBDJ@Z");
//};

//char const * network_channel_manager_get_managed_channel_name(long)
//{
//    mangled_ppc("?network_channel_manager_get_managed_channel_name@@YAPBDJ@Z");
//};

//public: char const * c_network_channel_manager::get_owner_type_string(enum e_network_channel_manager_owner)
//{
//    mangled_ppc("?get_owner_type_string@c_network_channel_manager@@QAAPBDW4e_network_channel_manager_owner@@@Z");
//};

//public: long c_network_channel_manager::get_latency_to_simulation_authority(void) const
//{
//    mangled_ppc("?get_latency_to_simulation_authority@c_network_channel_manager@@QBAJXZ");
//};

//public: void c_network_channel_manager::force_immediate_stream_rebalancing(void)
//{
//    mangled_ppc("?force_immediate_stream_rebalancing@c_network_channel_manager@@QAAXXZ");
//};

//public: static long c_network_channel_manager::get_packet_minimum_game_data_bytes(void)
//{
//    mangled_ppc("?get_packet_minimum_game_data_bytes@c_network_channel_manager@@SAJXZ");
//};

//void stream_manager_load_core(char const *)
//{
//    mangled_ppc("?stream_manager_load_core@@YAXPBD@Z");
//};

//void stream_manager_save_cores(long)
//{
//    mangled_ppc("?stream_manager_save_cores@@YAXJ@Z");
//};

//void stream_manager_save_core(char const *)
//{
//    mangled_ppc("?stream_manager_save_core@@YAXPBD@Z");
//};

//public: c_secure_connection_owner::c_secure_connection_owner(void)
//{
//    mangled_ppc("??0c_secure_connection_owner@@QAA@XZ");
//};

//public: void c_secure_connection_owner::update(struct s_transport_secure_address const *)
//{
//    mangled_ppc("?update@c_secure_connection_owner@@QAAXPBUs_transport_secure_address@@@Z");
//};

//public: void c_secure_connection_owner::set_valid_and_secured(struct transport_address const *, struct s_transport_secure_identifier const *)
//{
//    mangled_ppc("?set_valid_and_secured@c_secure_connection_owner@@QAAXPBUtransport_address@@PBUs_transport_secure_identifier@@@Z");
//};

//public: void c_secure_connection_owner::set_valid_and_securing(struct transport_address const *, struct s_transport_secure_identifier const *)
//{
//    mangled_ppc("?set_valid_and_securing@c_secure_connection_owner@@QAAXPBUtransport_address@@PBUs_transport_secure_identifier@@@Z");
//};

//public: void c_secure_connection_owner::promote_from_securing_to_secured(void)
//{
//    mangled_ppc("?promote_from_securing_to_secured@c_secure_connection_owner@@QAAXXZ");
//};

//public: void c_secure_connection_owner::clear(void)
//{
//    mangled_ppc("?clear@c_secure_connection_owner@@QAAXXZ");
//};

//public: bool c_secure_connection_owner::is_valid(void) const
//{
//    mangled_ppc("?is_valid@c_secure_connection_owner@@QBA_NXZ");
//};

//public: bool c_secure_connection_owner::is_secured(void) const
//{
//    mangled_ppc("?is_secured@c_secure_connection_owner@@QBA_NXZ");
//};

//public: bool c_secure_connection_owner::is_securing(void) const
//{
//    mangled_ppc("?is_securing@c_secure_connection_owner@@QBA_NXZ");
//};

//public: bool c_secure_connection_owner::is_secured_lost(void) const
//{
//    mangled_ppc("?is_secured_lost@c_secure_connection_owner@@QBA_NXZ");
//};

//public: void c_secure_connection_owner::get_address(struct transport_address *) const
//{
//    mangled_ppc("?get_address@c_secure_connection_owner@@QBAXPAUtransport_address@@@Z");
//};

//public: void c_secure_connection_owner::get_secure_identifier(struct s_transport_secure_identifier *) const
//{
//    mangled_ppc("?get_secure_identifier@c_secure_connection_owner@@QBAXPAUs_transport_secure_identifier@@@Z");
//};

//public: char const * c_secure_connection_owner::get_address_string(void) const
//{
//    mangled_ppc("?get_address_string@c_secure_connection_owner@@QBAPBDXZ");
//};

//public: c_secure_connection_owner_manager::c_secure_connection_owner_manager(void)
//{
//    mangled_ppc("??0c_secure_connection_owner_manager@@QAA@XZ");
//};

//public: s_static_array<class c_secure_connection_owner, 5>::s_static_array<class c_secure_connection_owner, 5>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_secure_connection_owner@@$04@@QAA@XZ");
//};

//public: void c_secure_connection_owner_manager::update(struct s_transport_secure_address const *)
//{
//    mangled_ppc("?update@c_secure_connection_owner_manager@@QAAXPBUs_transport_secure_address@@@Z");
//};

//public: void c_secure_connection_owner_manager::initialize(class c_network_message_gateway *)
//{
//    mangled_ppc("?initialize@c_secure_connection_owner_manager@@QAAXPAVc_network_message_gateway@@@Z");
//};

//private: void c_secure_connection_owner_manager::clear(void)
//{
//    mangled_ppc("?clear@c_secure_connection_owner_manager@@AAAXXZ");
//};

//public: void c_secure_connection_owner_manager::set_owner_by_address(enum e_network_channel_manager_owner, struct transport_address const *, struct s_transport_secure_identifier const *)
//{
//    mangled_ppc("?set_owner_by_address@c_secure_connection_owner_manager@@QAAXW4e_network_channel_manager_owner@@PBUtransport_address@@PBUs_transport_secure_identifier@@@Z");
//};

//public: void c_secure_connection_owner_manager::remove_all_owners(void)
//{
//    mangled_ppc("?remove_all_owners@c_secure_connection_owner_manager@@QAAXXZ");
//};

//public: void c_secure_connection_owner_manager::remove_owner(char const *, enum e_network_channel_manager_owner)
//{
//    mangled_ppc("?remove_owner@c_secure_connection_owner_manager@@QAAXPBDW4e_network_channel_manager_owner@@@Z");
//};

//public: void c_secure_connection_owner_manager::add_owner(char const *, enum e_network_channel_manager_owner, struct transport_address const *, struct s_transport_secure_identifier const *)
//{
//    mangled_ppc("?add_owner@c_secure_connection_owner_manager@@QAAXPBDW4e_network_channel_manager_owner@@PBUtransport_address@@PBUs_transport_secure_identifier@@@Z");
//};

//public: bool c_secure_connection_owner_manager::any_owner_exists(void) const
//{
//    mangled_ppc("?any_owner_exists@c_secure_connection_owner_manager@@QBA_NXZ");
//};

//public: bool c_secure_connection_owner_manager::any_owner_secured(void) const
//{
//    mangled_ppc("?any_owner_secured@c_secure_connection_owner_manager@@QBA_NXZ");
//};

//public: bool c_secure_connection_owner_manager::any_secured_owner_using_address(struct transport_address const *) const
//{
//    mangled_ppc("?any_secured_owner_using_address@c_secure_connection_owner_manager@@QBA_NPBUtransport_address@@@Z");
//};

//public: bool c_secure_connection_owner_manager::any_owner_securing(void) const
//{
//    mangled_ppc("?any_owner_securing@c_secure_connection_owner_manager@@QBA_NXZ");
//};

//public: bool c_secure_connection_owner_manager::owner_exists(enum e_network_channel_manager_owner) const
//{
//    mangled_ppc("?owner_exists@c_secure_connection_owner_manager@@QBA_NW4e_network_channel_manager_owner@@@Z");
//};

//public: class c_secure_connection_owner const * c_secure_connection_owner_manager::get_owner(enum e_network_channel_manager_owner) const
//{
//    mangled_ppc("?get_owner@c_secure_connection_owner_manager@@QBAPBVc_secure_connection_owner@@W4e_network_channel_manager_owner@@@Z");
//};

//public: void c_secure_connection_owner_manager::get_secured_address_list(class c_transport_address_list *) const
//{
//    mangled_ppc("?get_secured_address_list@c_secure_connection_owner_manager@@QBAXPAVc_transport_address_list@@@Z");
//};

//void net_disconnect_and_reconnect_all_channels(void)
//{
//    mangled_ppc("?net_disconnect_and_reconnect_all_channels@@YAXXZ");
//};

//public: c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: static long s_static_array<class c_secure_connection_owner, 5>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_secure_connection_owner@@$04@@SAJXZ");
//};

//public: bool c_static_stack<struct s_connectivity_badness_cache_entry, 32>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_connectivity_badness_cache_entry@@$0CA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_connectivity_badness_cache_entry, 32>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_connectivity_badness_cache_entry@@$0CA@@@QBAJXZ");
//};

//public: void c_static_stack<struct s_connectivity_badness_cache_entry, 32>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_connectivity_badness_cache_entry@@$0CA@@@QAAXXZ");
//};

//public: void c_static_stack<struct s_connectivity_badness_cache_entry, 32>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@Us_connectivity_badness_cache_entry@@$0CA@@@QAAXJ@Z");
//};

//public: void c_static_stack<struct s_connectivity_badness_cache_entry, 32>::push_back(struct s_connectivity_badness_cache_entry const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_connectivity_badness_cache_entry@@$0CA@@@QAAXABUs_connectivity_badness_cache_entry@@@Z");
//};

//public: struct s_connectivity_badness_cache_entry & c_static_stack<struct s_connectivity_badness_cache_entry, 32>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_connectivity_badness_cache_entry@@$0CA@@@QAAAAUs_connectivity_badness_cache_entry@@J@Z");
//};

//public: c_static_stack<struct s_connectivity_badness_cache_entry, 32>::c_static_stack<struct s_connectivity_badness_cache_entry, 32>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_connectivity_badness_cache_entry@@$0CA@@@QAA@XZ");
//};

//public: bool c_static_stack<struct s_connectivity_badness_cache_entry, 32>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_connectivity_badness_cache_entry@@$0CA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_connectivity_badness_cache_entry, 32>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_connectivity_badness_cache_entry@@$0CA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<struct s_connectivity_badness_cache_entry, 32>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_connectivity_badness_cache_entry@@$0CA@@@QAAJXZ");
//};

//public: struct s_connectivity_badness_cache_entry * c_static_stack<struct s_connectivity_badness_cache_entry, 32>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_connectivity_badness_cache_entry@@$0CA@@@QAAPAUs_connectivity_badness_cache_entry@@J@Z");
//};

//public: void c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_secure_connection_owner_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_secure_connection_owner_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_secure_connection_owner_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_secure_connection_owner_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_secure_connection_owner_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_secure_connection_owner_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_secure_connection_owner_flags@@_N@Z");
//};

//public: c_flags<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_secure_connection_owner_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_managed_channel_flags@@E$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_managed_channel_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_managed_channel_flags@@E$05Us_default_enum_string_resolver@@@@QBA_NW4e_managed_channel_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::set(enum e_managed_channel_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_managed_channel_flags@@E$05Us_default_enum_string_resolver@@@@QAAXW4e_managed_channel_flags@@_N@Z");
//};

//public: c_flags<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_managed_channel_flags@@E$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_network_channel_manager_owner@@E$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::test(enum e_network_channel_manager_owner) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_channel_manager_owner@@E$04Us_default_enum_string_resolver@@@@QBA_NW4e_network_channel_manager_owner@@@Z");
//};

//public: void c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::set(enum e_network_channel_manager_owner, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_channel_manager_owner@@E$04Us_default_enum_string_resolver@@@@QAAXW4e_network_channel_manager_owner@@_N@Z");
//};

//public: c_flags<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_channel_manager_owner@@E$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::test(long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@J_K$0DB@Us_default_enum_string_resolver@@@@QBA_NJ@Z");
//};

//public: void c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@J_K$0DB@Us_default_enum_string_resolver@@@@QAAXJ_N@Z");
//};

//public: c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@J_K$0DB@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: struct s_channel_manager_owner & s_static_array<struct s_channel_manager_owner, 5>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_channel_manager_owner@@$04@@QAAAAUs_channel_manager_owner@@J@Z");
//};

//public: struct s_managed_channel & s_static_array<struct s_managed_channel, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_managed_channel@@$0CA@@@QAAAAUs_managed_channel@@J@Z");
//};

//public: struct s_managed_channel const & s_static_array<struct s_managed_channel, 32>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_managed_channel@@$0CA@@@QBAABUs_managed_channel@@J@Z");
//};

//public: struct s_managed_channel const & s_static_array<struct s_managed_channel, 32>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_managed_channel@@$0CA@@@QBAABUs_managed_channel@@H@Z");
//};

//public: struct s_channel_manager_owner & s_static_array<struct s_channel_manager_owner, 5>::operator[]<enum e_network_channel_manager_owner>(enum e_network_channel_manager_owner)
//{
//    mangled_ppc("??$?AW4e_network_channel_manager_owner@@@?$s_static_array@Us_channel_manager_owner@@$04@@QAAAAUs_channel_manager_owner@@W4e_network_channel_manager_owner@@@Z");
//};

//public: struct s_managed_channel & s_static_array<struct s_managed_channel, 32>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_managed_channel@@$0CA@@@QAAAAUs_managed_channel@@H@Z");
//};

//public: struct s_channel_manager_owner const & s_static_array<struct s_channel_manager_owner, 5>::operator[]<enum e_network_channel_manager_owner>(enum e_network_channel_manager_owner) const
//{
//    mangled_ppc("??$?AW4e_network_channel_manager_owner@@@?$s_static_array@Us_channel_manager_owner@@$04@@QBAABUs_channel_manager_owner@@W4e_network_channel_manager_owner@@@Z");
//};

//public: struct s_channel_manager_owner const & s_static_array<struct s_channel_manager_owner, 5>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_channel_manager_owner@@$04@@QBAABUs_channel_manager_owner@@J@Z");
//};

//public: class c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver> const & s_static_array<class c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver>, 2>::operator[]<enum e_network_channel_message_queue>(enum e_network_channel_message_queue) const
//{
//    mangled_ppc("??$?AW4e_network_channel_message_queue@@@?$s_static_array@V?$c_flags@J_K$0DB@Us_default_enum_string_resolver@@@@$01@@QBAABV?$c_flags@J_K$0DB@Us_default_enum_string_resolver@@@@W4e_network_channel_message_queue@@@Z");
//};

//public: class c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver> & s_static_array<class c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver>, 2>::operator[]<enum e_network_channel_message_queue>(enum e_network_channel_message_queue)
//{
//    mangled_ppc("??$?AW4e_network_channel_message_queue@@@?$s_static_array@V?$c_flags@J_K$0DB@Us_default_enum_string_resolver@@@@$01@@QAAAAV?$c_flags@J_K$0DB@Us_default_enum_string_resolver@@@@W4e_network_channel_message_queue@@@Z");
//};

//public: class c_secure_connection_owner & s_static_array<class c_secure_connection_owner, 5>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_secure_connection_owner@@$04@@QAAAAVc_secure_connection_owner@@J@Z");
//};

//public: class c_secure_connection_owner & s_static_array<class c_secure_connection_owner, 5>::operator[]<enum e_network_channel_manager_owner>(enum e_network_channel_manager_owner)
//{
//    mangled_ppc("??$?AW4e_network_channel_manager_owner@@@?$s_static_array@Vc_secure_connection_owner@@$04@@QAAAAVc_secure_connection_owner@@W4e_network_channel_manager_owner@@@Z");
//};

//public: class c_secure_connection_owner const & s_static_array<class c_secure_connection_owner, 5>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_secure_connection_owner@@$04@@QBAABVc_secure_connection_owner@@J@Z");
//};

//public: class c_secure_connection_owner const & s_static_array<class c_secure_connection_owner, 5>::operator[]<enum e_network_channel_manager_owner>(enum e_network_channel_manager_owner) const
//{
//    mangled_ppc("??$?AW4e_network_channel_manager_owner@@@?$s_static_array@Vc_secure_connection_owner@@$04@@QBAABVc_secure_connection_owner@@W4e_network_channel_manager_owner@@@Z");
//};

//public: bool c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_secure_connection_owner_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_secure_connection_owner_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_secure_connection_owner_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_secure_connection_owner_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_secure_connection_owner_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_secure_connection_owner_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_secure_connection_owner_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_managed_channel_flags@@E$05Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: static bool c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_managed_channel_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_managed_channel_flags@@E$05Us_default_enum_string_resolver@@@@SA_NW4e_managed_channel_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_managed_channel_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_managed_channel_flags@@E$05Us_default_enum_string_resolver@@@@CAEW4e_managed_channel_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_managed_channel_flags@@E$05Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: void c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_channel_manager_owner@@E$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: static bool c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(enum e_network_channel_manager_owner)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_channel_manager_owner@@E$04Us_default_enum_string_resolver@@@@SA_NW4e_network_channel_manager_owner@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_channel_manager_owner)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_channel_manager_owner@@E$04Us_default_enum_string_resolver@@@@CAEW4e_network_channel_manager_owner@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_network_channel_manager_owner@@E$04Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: void c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@J_K$0DB@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@J_K$0DB@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@J_K$0DB@Us_default_enum_string_resolver@@@@SA_NJ@Z");
//};

//private: static unsigned __int64 c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::flag_size_type(long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@J_K$0DB@Us_default_enum_string_resolver@@@@CA_KJ@Z");
//};

//public: static bool s_static_array<struct s_channel_manager_owner, 5>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_channel_manager_owner@@$04@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_managed_channel, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_managed_channel@@$0CA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_managed_channel, 32>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_managed_channel@@$0CA@@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_channel_manager_owner, 5>::valid<enum e_network_channel_manager_owner>(enum e_network_channel_manager_owner)
//{
//    mangled_ppc("??$valid@W4e_network_channel_manager_owner@@@?$s_static_array@Us_channel_manager_owner@@$04@@SA_NW4e_network_channel_manager_owner@@@Z");
//};

//public: static bool s_static_array<class c_flags<long, unsigned __int64, 49, struct s_default_enum_string_resolver>, 2>::valid<enum e_network_channel_message_queue>(enum e_network_channel_message_queue)
//{
//    mangled_ppc("??$valid@W4e_network_channel_message_queue@@@?$s_static_array@V?$c_flags@J_K$0DB@Us_default_enum_string_resolver@@@@$01@@SA_NW4e_network_channel_message_queue@@@Z");
//};

//public: static bool s_static_array<class c_secure_connection_owner, 5>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_secure_connection_owner@@$04@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_secure_connection_owner, 5>::valid<enum e_network_channel_manager_owner>(enum e_network_channel_manager_owner)
//{
//    mangled_ppc("??$valid@W4e_network_channel_manager_owner@@@?$s_static_array@Vc_secure_connection_owner@@$04@@SA_NW4e_network_channel_manager_owner@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_secure_connection_owner_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_managed_channel_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_managed_channel_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_managed_channel_flags@@E$05Us_default_enum_string_resolver@@@@CAEW4e_managed_channel_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_channel_manager_owner, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_channel_manager_owner)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_network_channel_manager_owner@@E$04Us_default_enum_string_resolver@@@@CAEW4e_network_channel_manager_owner@@@Z");
//};

//private: static unsigned __int64 c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@J_K$0DB@Us_default_enum_string_resolver@@@@CA_KXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_secure_connection_owner_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_secure_connection_owner_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_secure_connection_owner_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_secure_connection_owner_flags@@@Z");
//};

//private: static unsigned __int64 c_flags_no_init<long, unsigned __int64, 49, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@J_K$0DB@Us_default_enum_string_resolver@@@@CA_KJ@Z");
//};

//void g_channel_manager::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_channel_manager@@YAXXZ");
//};

