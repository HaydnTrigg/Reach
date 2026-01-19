/* ---------- headers */

#include "omaha\simulation\simulation_view.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **g_simulation_view_reason_strings; // "?g_simulation_view_reason_strings@@3PAPBDA"
// char const **k_simulation_view_synchronous_catchup_message_source_strings; // "?k_simulation_view_synchronous_catchup_message_source_strings@@3PAPBDA"
// char const **k_simulation_view_synchronous_catchup_message_type_strings; // "?k_simulation_view_synchronous_catchup_message_type_strings@@3PAPBDA"
// char const **k_simulation_view_synchronous_catchup_manager_state_strings; // "?k_simulation_view_synchronous_catchup_manager_state_strings@@3PAPBDA"
// bool g_dump_game_options_on_establish_fail; // "?g_dump_game_options_on_establish_fail@@3_NA"

// public: void c_simulation_view::initialize_view(long, enum e_simulation_view_type, class c_simulation_distributed_view *, struct s_machine_identifier const *, long, char const *);
// public: bool c_simulation_view::is_synchronous(void) const;
// public: void c_simulation_view::destroy_view(void);
// public: char const * c_simulation_view::get_view_description(void) const;
// public: void c_simulation_view::attach_to_world(class c_simulation_world *);
// public: void c_simulation_view::detach_from_world(void);
// public: void c_simulation_view::attach_channel(class c_network_channel_manager *, long, struct s_transport_secure_address const *);
// public: unsigned long c_network_channel::get_identifier(void) const;
// public: void c_simulation_view_telemetry_provider::initialize(class c_simulation_view *);
// public: class c_replication_entity_manager * c_simulation_world::get_entity_manager(void);
// public: class c_replication_event_manager * c_simulation_world::get_event_manager(void);
// public: void c_simulation_view::detach_channel(void);
// public: bool c_simulation_view::observer_channel_get_bandwidth_events(long, long *) const;
// public: void c_simulation_view::send_message(enum e_network_message_type, long, void const *, bool, bool) const;
// public: void c_simulation_view::no_longer_authority(void);
// private: long c_simulation_view::get_channel_average_rtt(void) const;
// public: void c_simulation_view::go_out_of_sync(void);
// public: void c_simulation_view::failed_to_join(void);
// public: void c_simulation_view::update(void);
// public: bool c_replication_entity_manager_view::has_fatal_error(void) const;
// public: bool c_replication_event_manager_view::has_fatal_error(void) const;
// public: bool c_game_results_replicator::has_fatal_error(void) const;
// public: void c_simulation_view::set_view_establishment(enum e_simulation_view_establishment_mode, long);
// public: void c_simulation_view::send_establishment_message(void);
// void write_buffer_to_file(char const *, void const *, long);
// public: bool c_simulation_view::handle_remote_establishment(enum e_simulation_view_establishment_mode, long, long, unsigned char const *, bool, unsigned long);
// public: bool c_simulation_view::establishment_add_cache_file_signature(long *, long, unsigned char *) const;
// bool cache_file_get_content_signature(long *, unsigned char const **);
// public: bool c_simulation_view::establishment_verify_cache_file_signature(long, unsigned char const *) const;
// bool cache_file_content_signatures_match(long, unsigned char const *, long, unsigned char const *, bool);
// class c_string_builder cache_file_signature_summary(long, unsigned char const *);
// public: void c_simulation_view::notify_closed(void);
// public: bool c_simulation_view::client_join_is_finished(void) const;
// public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_simulation_view::get_acknowledged_player_mask(void) const;
// public: void c_simulation_view::force_unacknowledge_player(long);
// public: bool c_simulation_view::handle_player_acknowledge(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>, struct s_player_identifier const *);
// public: bool c_simulation_view::handle_synchronous_update(struct simulation_update const *, struct s_simulation_update_metadata const *, unsigned long, bool *);
// public: bool c_simulation_view::handle_synchronous_playback_control(enum e_network_synchronous_playback_control, long, long, unsigned long);
// public: bool c_simulation_view::handle_distributed_game_results(long, long, struct s_game_results_incremental_update const *);
// public: class c_simulation_view_synchronous_catchup_manager * c_simulation_view::get_synchronous_catchup_manager(void);
// public: bool c_simulation_view::handle_synchronous_actions(long, long, unsigned long, class s_static_array<struct s_player_action, 4> const &, unsigned long);
// public: bool c_simulation_view::handle_synchronous_acknowledge(long);
// public: bool c_simulation_view::handle_synchronous_join_catchup(struct s_network_message_synchronous_join_catchup const *);
// public: void c_simulation_view::dispatch_synchronous_actions(unsigned long, class s_static_array<struct s_player_action, 4> const &);
// public: s_network_message_synchronous_actions::s_network_message_synchronous_actions(void);
// public: s_static_array<struct s_player_action, 4>::s_static_array<struct s_player_action, 4>(void);
// public: void c_simulation_view::dispatch_synchronous_update(struct simulation_update const *, struct s_simulation_update_metadata const *);
// long network_time_since(unsigned long);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: s_network_message_synchronous_update::s_network_message_synchronous_update(void);
// public: void c_simulation_view::dispatch_synchronous_playback_control(enum e_network_synchronous_playback_control, long, long);
// public: long c_simulation_view::synchronous_client_get_acknowledged_update_number(void);
// public: bool c_simulation_view::synchronous_client_get_implied_queue_length(long, long *);
// private: void c_simulation_view::update_view_activation_state(void);
// private: void c_simulation_view::kill_view(enum e_simulation_view_reason);
// public: bool c_simulation_view::distributed_join_initiate(void);
// public: bool c_simulation_view::distributed_join_in_progress(void) const;
// public: static void c_simulation_view::distributed_join_complete(void);
// public: void c_simulation_view::distributed_join_abort(void);
// public: class c_replication_control_view * c_simulation_view::get_control_view(void);
// public: void c_simulation_view::get_statistics(struct s_simulation_view_statistics *);
// public: void c_replication_entity_manager_view::get_statistics(struct s_replication_entity_manager_view_statistics *) const;
// public: void c_replication_event_manager_view::get_statistics(struct s_replication_event_manager_view_statistics *) const;
// public: void c_game_results_replicator::initialize(class c_simulation_view *);
// public: void c_game_results_replicator::destroy(void);
// public: void c_game_results_replicator::handle_view_establishment(bool);
// public: void c_game_results_replicator::update(void);
// private: void c_game_results_replicator::start_sending_updates(void);
// private: void c_game_results_replicator::stop_sending_updates(void);
// private: void c_game_results_replicator::start_receiving_updates(void);
// private: void c_game_results_replicator::stop_receiving_updates(void);
// public: bool c_game_results_replicator::handle_update(long, struct s_game_results_incremental_update const *);
// private: void c_game_results_replicator::send_game_results_update(void);
// public: s_network_message_distributed_game_results::s_network_message_distributed_game_results(void);
// public: s_game_results_incremental_update::s_game_results_incremental_update(void);
// public: s_game_results_player_data_update::s_game_results_player_data_update(void);
// public: s_game_results_statistics_update::s_game_results_statistics_update(void);
// public: s_game_results_machine_data_update::s_game_results_machine_data_update(void);
// public: s_game_results_player_statistics_update::s_game_results_player_statistics_update(void);
// public: s_real_statistic_array_update<6>::s_real_statistic_array_update<6>(void);
// public: bool c_simulation_view::observer_channel_backlogged(enum e_network_message_type, bool) const;
// public: void c_simulation_view::observer_channel_set_waiting_on_backlog(enum e_network_message_type, bool);
// public: void c_simulation_view_synchronous_catchup_manager::initialize(class c_simulation_view *);
// public: void c_simulation_view_synchronous_catchup_manager::destroy(void);
// public: bool c_simulation_view_synchronous_catchup_manager::update(void);
// public: bool c_simulation_view_synchronous_catchup_manager::handle_message(struct s_network_message_synchronous_join_catchup const *);
// public: void c_simulation_view_synchronous_catchup_manager::request_simulation_update_history_range(void);
// public: s_network_message_synchronous_join_catchup::s_network_message_synchronous_join_catchup(void);
// public: void c_simulation_view_synchronous_catchup_manager::request_simulation_updates(struct s_simulation_update_range const *);
// public: void c_simulation_view_synchronous_catchup_manager::send_simulation_updates(struct s_simulation_update_range const *);
// public: void c_simulation_view_synchronous_catchup_manager::reset_local_and_remote(void);
// public: void c_simulation_view_synchronous_catchup_manager::set_ready(bool);
// public: void c_simulation_view_synchronous_catchup_manager::set_simulation_updates_synchronized(bool);
// public: enum c_simulation_view_synchronous_catchup_manager::e_state c_simulation_view_synchronous_catchup_manager::get_state(void) const;
// public: struct s_simulation_update_range const * c_simulation_view_synchronous_catchup_manager::get_remote_simulation_update_history_range(void) const;
// public: bool c_simulation_view_synchronous_catchup_manager::sent_requested_simulation_updates(void) const;
// public: bool c_simulation_view_synchronous_catchup_manager::received_expected_simulation_updates(void) const;
// public: bool c_simulation_view_synchronous_catchup_manager::is_ready(void) const;
// public: bool c_simulation_view_synchronous_catchup_manager::is_remote_simulation_update_history_range_available(void) const;
// public: bool c_simulation_view_synchronous_catchup_manager::is_simulation_updates_synchronized(void) const;
// private: bool c_simulation_view_synchronous_catchup_manager::handle_message_from_host(struct s_network_message_synchronous_join_catchup const *);
// private: bool c_simulation_view_synchronous_catchup_manager::handle_message_from_client(struct s_network_message_synchronous_join_catchup const *);
// private: bool c_simulation_view_synchronous_catchup_manager::handle_simulation_update_message(struct s_network_message_synchronous_join_catchup const *);
// public: bool s_simulation_update_range::equal(struct s_simulation_update_range const *) const;
// private: void c_simulation_view_synchronous_catchup_manager::reset_member_state(void);
// private: void c_simulation_view_synchronous_catchup_manager::set_state(enum c_simulation_view_synchronous_catchup_manager::e_state, struct s_simulation_update_range const *);
// private: void c_simulation_view_synchronous_catchup_manager::send_simulation_update_history_range(void);
// private: bool c_simulation_view_synchronous_catchup_manager::update_sending_simulation_updates(void);
// public: static char const * c_simulation_view::get_death_reason_string(long);
// public: static char const * c_simulation_view::get_type_string(long);
// public: void s_static_array<long, 16>::set_all(long const &);
// public: c_enum<enum e_network_message_synchronous_join_catchup_source, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_network_message_synchronous_join_catchup_source, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_network_message_synchronous_join_catchup_source, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_network_message_synchronous_join_catchup_source, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum e_network_message_synchronous_join_catchup_source);
// public: enum e_network_message_synchronous_join_catchup_source c_enum_no_init<enum e_network_message_synchronous_join_catchup_source, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_network_message_synchronous_join_catchup_source(void) const;
// public: c_enum<enum e_network_message_synchronous_join_catchup_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_network_message_synchronous_join_catchup_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_network_message_synchronous_join_catchup_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_network_message_synchronous_join_catchup_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum e_network_message_synchronous_join_catchup_type);
// public: enum e_network_message_synchronous_join_catchup_type c_enum_no_init<enum e_network_message_synchronous_join_catchup_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_network_message_synchronous_join_catchup_type(void) const;
// public: bool c_enum_no_init<enum e_network_message_synchronous_join_catchup_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_network_message_synchronous_join_catchup_type) const;
// public: c_flags<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::c_flags<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>(void);
// public: c_flags<char, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<char, unsigned char, 6, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum c_simulation_view_synchronous_catchup_manager::e_flags) const;
// public: void c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::set(enum c_simulation_view_synchronous_catchup_manager::e_flags, bool);
// public: struct s_player_action & s_static_array<struct s_player_action, 4>::operator[]<enum e_input_user_index>(enum e_input_user_index);
// long int_floor<long, int>(long const &, int const &);
// public: long & s_static_array<long, 16>::operator[]<enum e_simulation_entity_type>(enum e_simulation_entity_type);
// public: long & s_static_array<long, 6>::operator[]<enum e_replication_entity_view_state>(enum e_replication_entity_view_state);
// public: void c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum c_simulation_view_synchronous_catchup_manager::e_flags);
// private: static unsigned char c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum c_simulation_view_synchronous_catchup_manager::e_flags);
// public: static bool s_static_array<long, 16>::valid<enum e_simulation_entity_type>(enum e_simulation_entity_type);
// public: static bool s_static_array<long, 6>::valid<enum e_replication_entity_view_state>(enum e_replication_entity_view_state);
// private: static unsigned char c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_player_data_update_bit);
// private: static unsigned char c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_machine_data_update_bit);
// private: static unsigned char c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(char);

//public: void c_simulation_view::initialize_view(long, enum e_simulation_view_type, class c_simulation_distributed_view *, struct s_machine_identifier const *, long, char const *)
//{
//    mangled_ppc("?initialize_view@c_simulation_view@@QAAXJW4e_simulation_view_type@@PAVc_simulation_distributed_view@@PBUs_machine_identifier@@JPBD@Z");
//};

//public: bool c_simulation_view::is_synchronous(void) const
//{
//    mangled_ppc("?is_synchronous@c_simulation_view@@QBA_NXZ");
//};

//public: void c_simulation_view::destroy_view(void)
//{
//    mangled_ppc("?destroy_view@c_simulation_view@@QAAXXZ");
//};

//public: char const * c_simulation_view::get_view_description(void) const
//{
//    mangled_ppc("?get_view_description@c_simulation_view@@QBAPBDXZ");
//};

//public: void c_simulation_view::attach_to_world(class c_simulation_world *)
//{
//    mangled_ppc("?attach_to_world@c_simulation_view@@QAAXPAVc_simulation_world@@@Z");
//};

//public: void c_simulation_view::detach_from_world(void)
//{
//    mangled_ppc("?detach_from_world@c_simulation_view@@QAAXXZ");
//};

//public: void c_simulation_view::attach_channel(class c_network_channel_manager *, long, struct s_transport_secure_address const *)
//{
//    mangled_ppc("?attach_channel@c_simulation_view@@QAAXPAVc_network_channel_manager@@JPBUs_transport_secure_address@@@Z");
//};

//public: unsigned long c_network_channel::get_identifier(void) const
//{
//    mangled_ppc("?get_identifier@c_network_channel@@QBAKXZ");
//};

//public: void c_simulation_view_telemetry_provider::initialize(class c_simulation_view *)
//{
//    mangled_ppc("?initialize@c_simulation_view_telemetry_provider@@QAAXPAVc_simulation_view@@@Z");
//};

//public: class c_replication_entity_manager * c_simulation_world::get_entity_manager(void)
//{
//    mangled_ppc("?get_entity_manager@c_simulation_world@@QAAPAVc_replication_entity_manager@@XZ");
//};

//public: class c_replication_event_manager * c_simulation_world::get_event_manager(void)
//{
//    mangled_ppc("?get_event_manager@c_simulation_world@@QAAPAVc_replication_event_manager@@XZ");
//};

//public: void c_simulation_view::detach_channel(void)
//{
//    mangled_ppc("?detach_channel@c_simulation_view@@QAAXXZ");
//};

//public: bool c_simulation_view::observer_channel_get_bandwidth_events(long, long *) const
//{
//    mangled_ppc("?observer_channel_get_bandwidth_events@c_simulation_view@@QBA_NJPAJ@Z");
//};

//public: void c_simulation_view::send_message(enum e_network_message_type, long, void const *, bool, bool) const
//{
//    mangled_ppc("?send_message@c_simulation_view@@QBAXW4e_network_message_type@@JPBX_N2@Z");
//};

//public: void c_simulation_view::no_longer_authority(void)
//{
//    mangled_ppc("?no_longer_authority@c_simulation_view@@QAAXXZ");
//};

//private: long c_simulation_view::get_channel_average_rtt(void) const
//{
//    mangled_ppc("?get_channel_average_rtt@c_simulation_view@@ABAJXZ");
//};

//public: void c_simulation_view::go_out_of_sync(void)
//{
//    mangled_ppc("?go_out_of_sync@c_simulation_view@@QAAXXZ");
//};

//public: void c_simulation_view::failed_to_join(void)
//{
//    mangled_ppc("?failed_to_join@c_simulation_view@@QAAXXZ");
//};

//public: void c_simulation_view::update(void)
//{
//    mangled_ppc("?update@c_simulation_view@@QAAXXZ");
//};

//public: bool c_replication_entity_manager_view::has_fatal_error(void) const
//{
//    mangled_ppc("?has_fatal_error@c_replication_entity_manager_view@@QBA_NXZ");
//};

//public: bool c_replication_event_manager_view::has_fatal_error(void) const
//{
//    mangled_ppc("?has_fatal_error@c_replication_event_manager_view@@QBA_NXZ");
//};

//public: bool c_game_results_replicator::has_fatal_error(void) const
//{
//    mangled_ppc("?has_fatal_error@c_game_results_replicator@@QBA_NXZ");
//};

//public: void c_simulation_view::set_view_establishment(enum e_simulation_view_establishment_mode, long)
//{
//    mangled_ppc("?set_view_establishment@c_simulation_view@@QAAXW4e_simulation_view_establishment_mode@@J@Z");
//};

//public: void c_simulation_view::send_establishment_message(void)
//{
//    mangled_ppc("?send_establishment_message@c_simulation_view@@QAAXXZ");
//};

//void write_buffer_to_file(char const *, void const *, long)
//{
//    mangled_ppc("?write_buffer_to_file@@YAXPBDPBXJ@Z");
//};

//public: bool c_simulation_view::handle_remote_establishment(enum e_simulation_view_establishment_mode, long, long, unsigned char const *, bool, unsigned long)
//{
//    mangled_ppc("?handle_remote_establishment@c_simulation_view@@QAA_NW4e_simulation_view_establishment_mode@@JJPBE_NK@Z");
//};

//public: bool c_simulation_view::establishment_add_cache_file_signature(long *, long, unsigned char *) const
//{
//    mangled_ppc("?establishment_add_cache_file_signature@c_simulation_view@@QBA_NPAJJPAE@Z");
//};

//bool cache_file_get_content_signature(long *, unsigned char const **)
//{
//    mangled_ppc("?cache_file_get_content_signature@@YA_NPAJPAPBE@Z");
//};

//public: bool c_simulation_view::establishment_verify_cache_file_signature(long, unsigned char const *) const
//{
//    mangled_ppc("?establishment_verify_cache_file_signature@c_simulation_view@@QBA_NJPBE@Z");
//};

//bool cache_file_content_signatures_match(long, unsigned char const *, long, unsigned char const *, bool)
//{
//    mangled_ppc("?cache_file_content_signatures_match@@YA_NJPBEJ0_N@Z");
//};

//class c_string_builder cache_file_signature_summary(long, unsigned char const *)
//{
//    mangled_ppc("?cache_file_signature_summary@@YA?AVc_string_builder@@JPBE@Z");
//};

//public: void c_simulation_view::notify_closed(void)
//{
//    mangled_ppc("?notify_closed@c_simulation_view@@QAAXXZ");
//};

//public: bool c_simulation_view::client_join_is_finished(void) const
//{
//    mangled_ppc("?client_join_is_finished@c_simulation_view@@QBA_NXZ");
//};

//public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_simulation_view::get_acknowledged_player_mask(void) const
//{
//    mangled_ppc("?get_acknowledged_player_mask@c_simulation_view@@QBA?AV?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_simulation_view::force_unacknowledge_player(long)
//{
//    mangled_ppc("?force_unacknowledge_player@c_simulation_view@@QAAXJ@Z");
//};

//public: bool c_simulation_view::handle_player_acknowledge(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>, struct s_player_identifier const *)
//{
//    mangled_ppc("?handle_player_acknowledge@c_simulation_view@@QAA_NV?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@0PBUs_player_identifier@@@Z");
//};

//public: bool c_simulation_view::handle_synchronous_update(struct simulation_update const *, struct s_simulation_update_metadata const *, unsigned long, bool *)
//{
//    mangled_ppc("?handle_synchronous_update@c_simulation_view@@QAA_NPBUsimulation_update@@PBUs_simulation_update_metadata@@KPA_N@Z");
//};

//public: bool c_simulation_view::handle_synchronous_playback_control(enum e_network_synchronous_playback_control, long, long, unsigned long)
//{
//    mangled_ppc("?handle_synchronous_playback_control@c_simulation_view@@QAA_NW4e_network_synchronous_playback_control@@JJK@Z");
//};

//public: bool c_simulation_view::handle_distributed_game_results(long, long, struct s_game_results_incremental_update const *)
//{
//    mangled_ppc("?handle_distributed_game_results@c_simulation_view@@QAA_NJJPBUs_game_results_incremental_update@@@Z");
//};

//public: class c_simulation_view_synchronous_catchup_manager * c_simulation_view::get_synchronous_catchup_manager(void)
//{
//    mangled_ppc("?get_synchronous_catchup_manager@c_simulation_view@@QAAPAVc_simulation_view_synchronous_catchup_manager@@XZ");
//};

//public: bool c_simulation_view::handle_synchronous_actions(long, long, unsigned long, class s_static_array<struct s_player_action, 4> const &, unsigned long)
//{
//    mangled_ppc("?handle_synchronous_actions@c_simulation_view@@QAA_NJJKABV?$s_static_array@Us_player_action@@$03@@K@Z");
//};

//public: bool c_simulation_view::handle_synchronous_acknowledge(long)
//{
//    mangled_ppc("?handle_synchronous_acknowledge@c_simulation_view@@QAA_NJ@Z");
//};

//public: bool c_simulation_view::handle_synchronous_join_catchup(struct s_network_message_synchronous_join_catchup const *)
//{
//    mangled_ppc("?handle_synchronous_join_catchup@c_simulation_view@@QAA_NPBUs_network_message_synchronous_join_catchup@@@Z");
//};

//public: void c_simulation_view::dispatch_synchronous_actions(unsigned long, class s_static_array<struct s_player_action, 4> const &)
//{
//    mangled_ppc("?dispatch_synchronous_actions@c_simulation_view@@QAAXKABV?$s_static_array@Us_player_action@@$03@@@Z");
//};

//public: s_network_message_synchronous_actions::s_network_message_synchronous_actions(void)
//{
//    mangled_ppc("??0s_network_message_synchronous_actions@@QAA@XZ");
//};

//public: s_static_array<struct s_player_action, 4>::s_static_array<struct s_player_action, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_player_action@@$03@@QAA@XZ");
//};

//public: void c_simulation_view::dispatch_synchronous_update(struct simulation_update const *, struct s_simulation_update_metadata const *)
//{
//    mangled_ppc("?dispatch_synchronous_update@c_simulation_view@@QAAXPBUsimulation_update@@PBUs_simulation_update_metadata@@@Z");
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

//public: s_network_message_synchronous_update::s_network_message_synchronous_update(void)
//{
//    mangled_ppc("??0s_network_message_synchronous_update@@QAA@XZ");
//};

//public: void c_simulation_view::dispatch_synchronous_playback_control(enum e_network_synchronous_playback_control, long, long)
//{
//    mangled_ppc("?dispatch_synchronous_playback_control@c_simulation_view@@QAAXW4e_network_synchronous_playback_control@@JJ@Z");
//};

//public: long c_simulation_view::synchronous_client_get_acknowledged_update_number(void)
//{
//    mangled_ppc("?synchronous_client_get_acknowledged_update_number@c_simulation_view@@QAAJXZ");
//};

//public: bool c_simulation_view::synchronous_client_get_implied_queue_length(long, long *)
//{
//    mangled_ppc("?synchronous_client_get_implied_queue_length@c_simulation_view@@QAA_NJPAJ@Z");
//};

//private: void c_simulation_view::update_view_activation_state(void)
//{
//    mangled_ppc("?update_view_activation_state@c_simulation_view@@AAAXXZ");
//};

//private: void c_simulation_view::kill_view(enum e_simulation_view_reason)
//{
//    mangled_ppc("?kill_view@c_simulation_view@@AAAXW4e_simulation_view_reason@@@Z");
//};

//public: bool c_simulation_view::distributed_join_initiate(void)
//{
//    mangled_ppc("?distributed_join_initiate@c_simulation_view@@QAA_NXZ");
//};

//public: bool c_simulation_view::distributed_join_in_progress(void) const
//{
//    mangled_ppc("?distributed_join_in_progress@c_simulation_view@@QBA_NXZ");
//};

//public: static void c_simulation_view::distributed_join_complete(void)
//{
//    mangled_ppc("?distributed_join_complete@c_simulation_view@@SAXXZ");
//};

//public: void c_simulation_view::distributed_join_abort(void)
//{
//    mangled_ppc("?distributed_join_abort@c_simulation_view@@QAAXXZ");
//};

//public: class c_replication_control_view * c_simulation_view::get_control_view(void)
//{
//    mangled_ppc("?get_control_view@c_simulation_view@@QAAPAVc_replication_control_view@@XZ");
//};

//public: void c_simulation_view::get_statistics(struct s_simulation_view_statistics *)
//{
//    mangled_ppc("?get_statistics@c_simulation_view@@QAAXPAUs_simulation_view_statistics@@@Z");
//};

//public: void c_replication_entity_manager_view::get_statistics(struct s_replication_entity_manager_view_statistics *) const
//{
//    mangled_ppc("?get_statistics@c_replication_entity_manager_view@@QBAXPAUs_replication_entity_manager_view_statistics@@@Z");
//};

//public: void c_replication_event_manager_view::get_statistics(struct s_replication_event_manager_view_statistics *) const
//{
//    mangled_ppc("?get_statistics@c_replication_event_manager_view@@QBAXPAUs_replication_event_manager_view_statistics@@@Z");
//};

//public: void c_game_results_replicator::initialize(class c_simulation_view *)
//{
//    mangled_ppc("?initialize@c_game_results_replicator@@QAAXPAVc_simulation_view@@@Z");
//};

//public: void c_game_results_replicator::destroy(void)
//{
//    mangled_ppc("?destroy@c_game_results_replicator@@QAAXXZ");
//};

//public: void c_game_results_replicator::handle_view_establishment(bool)
//{
//    mangled_ppc("?handle_view_establishment@c_game_results_replicator@@QAAX_N@Z");
//};

//public: void c_game_results_replicator::update(void)
//{
//    mangled_ppc("?update@c_game_results_replicator@@QAAXXZ");
//};

//private: void c_game_results_replicator::start_sending_updates(void)
//{
//    mangled_ppc("?start_sending_updates@c_game_results_replicator@@AAAXXZ");
//};

//private: void c_game_results_replicator::stop_sending_updates(void)
//{
//    mangled_ppc("?stop_sending_updates@c_game_results_replicator@@AAAXXZ");
//};

//private: void c_game_results_replicator::start_receiving_updates(void)
//{
//    mangled_ppc("?start_receiving_updates@c_game_results_replicator@@AAAXXZ");
//};

//private: void c_game_results_replicator::stop_receiving_updates(void)
//{
//    mangled_ppc("?stop_receiving_updates@c_game_results_replicator@@AAAXXZ");
//};

//public: bool c_game_results_replicator::handle_update(long, struct s_game_results_incremental_update const *)
//{
//    mangled_ppc("?handle_update@c_game_results_replicator@@QAA_NJPBUs_game_results_incremental_update@@@Z");
//};

//private: void c_game_results_replicator::send_game_results_update(void)
//{
//    mangled_ppc("?send_game_results_update@c_game_results_replicator@@AAAXXZ");
//};

//public: s_network_message_distributed_game_results::s_network_message_distributed_game_results(void)
//{
//    mangled_ppc("??0s_network_message_distributed_game_results@@QAA@XZ");
//};

//public: s_game_results_incremental_update::s_game_results_incremental_update(void)
//{
//    mangled_ppc("??0s_game_results_incremental_update@@QAA@XZ");
//};

//public: s_game_results_player_data_update::s_game_results_player_data_update(void)
//{
//    mangled_ppc("??0s_game_results_player_data_update@@QAA@XZ");
//};

//public: s_game_results_statistics_update::s_game_results_statistics_update(void)
//{
//    mangled_ppc("??0s_game_results_statistics_update@@QAA@XZ");
//};

//public: s_game_results_machine_data_update::s_game_results_machine_data_update(void)
//{
//    mangled_ppc("??0s_game_results_machine_data_update@@QAA@XZ");
//};

//public: s_game_results_player_statistics_update::s_game_results_player_statistics_update(void)
//{
//    mangled_ppc("??0s_game_results_player_statistics_update@@QAA@XZ");
//};

//public: s_real_statistic_array_update<6>::s_real_statistic_array_update<6>(void)
//{
//    mangled_ppc("??0?$s_real_statistic_array_update@$05@@QAA@XZ");
//};

//public: bool c_simulation_view::observer_channel_backlogged(enum e_network_message_type, bool) const
//{
//    mangled_ppc("?observer_channel_backlogged@c_simulation_view@@QBA_NW4e_network_message_type@@_N@Z");
//};

//public: void c_simulation_view::observer_channel_set_waiting_on_backlog(enum e_network_message_type, bool)
//{
//    mangled_ppc("?observer_channel_set_waiting_on_backlog@c_simulation_view@@QAAXW4e_network_message_type@@_N@Z");
//};

//public: void c_simulation_view_synchronous_catchup_manager::initialize(class c_simulation_view *)
//{
//    mangled_ppc("?initialize@c_simulation_view_synchronous_catchup_manager@@QAAXPAVc_simulation_view@@@Z");
//};

//public: void c_simulation_view_synchronous_catchup_manager::destroy(void)
//{
//    mangled_ppc("?destroy@c_simulation_view_synchronous_catchup_manager@@QAAXXZ");
//};

//public: bool c_simulation_view_synchronous_catchup_manager::update(void)
//{
//    mangled_ppc("?update@c_simulation_view_synchronous_catchup_manager@@QAA_NXZ");
//};

//public: bool c_simulation_view_synchronous_catchup_manager::handle_message(struct s_network_message_synchronous_join_catchup const *)
//{
//    mangled_ppc("?handle_message@c_simulation_view_synchronous_catchup_manager@@QAA_NPBUs_network_message_synchronous_join_catchup@@@Z");
//};

//public: void c_simulation_view_synchronous_catchup_manager::request_simulation_update_history_range(void)
//{
//    mangled_ppc("?request_simulation_update_history_range@c_simulation_view_synchronous_catchup_manager@@QAAXXZ");
//};

//public: s_network_message_synchronous_join_catchup::s_network_message_synchronous_join_catchup(void)
//{
//    mangled_ppc("??0s_network_message_synchronous_join_catchup@@QAA@XZ");
//};

//public: void c_simulation_view_synchronous_catchup_manager::request_simulation_updates(struct s_simulation_update_range const *)
//{
//    mangled_ppc("?request_simulation_updates@c_simulation_view_synchronous_catchup_manager@@QAAXPBUs_simulation_update_range@@@Z");
//};

//public: void c_simulation_view_synchronous_catchup_manager::send_simulation_updates(struct s_simulation_update_range const *)
//{
//    mangled_ppc("?send_simulation_updates@c_simulation_view_synchronous_catchup_manager@@QAAXPBUs_simulation_update_range@@@Z");
//};

//public: void c_simulation_view_synchronous_catchup_manager::reset_local_and_remote(void)
//{
//    mangled_ppc("?reset_local_and_remote@c_simulation_view_synchronous_catchup_manager@@QAAXXZ");
//};

//public: void c_simulation_view_synchronous_catchup_manager::set_ready(bool)
//{
//    mangled_ppc("?set_ready@c_simulation_view_synchronous_catchup_manager@@QAAX_N@Z");
//};

//public: void c_simulation_view_synchronous_catchup_manager::set_simulation_updates_synchronized(bool)
//{
//    mangled_ppc("?set_simulation_updates_synchronized@c_simulation_view_synchronous_catchup_manager@@QAAX_N@Z");
//};

//public: enum c_simulation_view_synchronous_catchup_manager::e_state c_simulation_view_synchronous_catchup_manager::get_state(void) const
//{
//    mangled_ppc("?get_state@c_simulation_view_synchronous_catchup_manager@@QBA?AW4e_state@1@XZ");
//};

//public: struct s_simulation_update_range const * c_simulation_view_synchronous_catchup_manager::get_remote_simulation_update_history_range(void) const
//{
//    mangled_ppc("?get_remote_simulation_update_history_range@c_simulation_view_synchronous_catchup_manager@@QBAPBUs_simulation_update_range@@XZ");
//};

//public: bool c_simulation_view_synchronous_catchup_manager::sent_requested_simulation_updates(void) const
//{
//    mangled_ppc("?sent_requested_simulation_updates@c_simulation_view_synchronous_catchup_manager@@QBA_NXZ");
//};

//public: bool c_simulation_view_synchronous_catchup_manager::received_expected_simulation_updates(void) const
//{
//    mangled_ppc("?received_expected_simulation_updates@c_simulation_view_synchronous_catchup_manager@@QBA_NXZ");
//};

//public: bool c_simulation_view_synchronous_catchup_manager::is_ready(void) const
//{
//    mangled_ppc("?is_ready@c_simulation_view_synchronous_catchup_manager@@QBA_NXZ");
//};

//public: bool c_simulation_view_synchronous_catchup_manager::is_remote_simulation_update_history_range_available(void) const
//{
//    mangled_ppc("?is_remote_simulation_update_history_range_available@c_simulation_view_synchronous_catchup_manager@@QBA_NXZ");
//};

//public: bool c_simulation_view_synchronous_catchup_manager::is_simulation_updates_synchronized(void) const
//{
//    mangled_ppc("?is_simulation_updates_synchronized@c_simulation_view_synchronous_catchup_manager@@QBA_NXZ");
//};

//private: bool c_simulation_view_synchronous_catchup_manager::handle_message_from_host(struct s_network_message_synchronous_join_catchup const *)
//{
//    mangled_ppc("?handle_message_from_host@c_simulation_view_synchronous_catchup_manager@@AAA_NPBUs_network_message_synchronous_join_catchup@@@Z");
//};

//private: bool c_simulation_view_synchronous_catchup_manager::handle_message_from_client(struct s_network_message_synchronous_join_catchup const *)
//{
//    mangled_ppc("?handle_message_from_client@c_simulation_view_synchronous_catchup_manager@@AAA_NPBUs_network_message_synchronous_join_catchup@@@Z");
//};

//private: bool c_simulation_view_synchronous_catchup_manager::handle_simulation_update_message(struct s_network_message_synchronous_join_catchup const *)
//{
//    mangled_ppc("?handle_simulation_update_message@c_simulation_view_synchronous_catchup_manager@@AAA_NPBUs_network_message_synchronous_join_catchup@@@Z");
//};

//public: bool s_simulation_update_range::equal(struct s_simulation_update_range const *) const
//{
//    mangled_ppc("?equal@s_simulation_update_range@@QBA_NPBU1@@Z");
//};

//private: void c_simulation_view_synchronous_catchup_manager::reset_member_state(void)
//{
//    mangled_ppc("?reset_member_state@c_simulation_view_synchronous_catchup_manager@@AAAXXZ");
//};

//private: void c_simulation_view_synchronous_catchup_manager::set_state(enum c_simulation_view_synchronous_catchup_manager::e_state, struct s_simulation_update_range const *)
//{
//    mangled_ppc("?set_state@c_simulation_view_synchronous_catchup_manager@@AAAXW4e_state@1@PBUs_simulation_update_range@@@Z");
//};

//private: void c_simulation_view_synchronous_catchup_manager::send_simulation_update_history_range(void)
//{
//    mangled_ppc("?send_simulation_update_history_range@c_simulation_view_synchronous_catchup_manager@@AAAXXZ");
//};

//private: bool c_simulation_view_synchronous_catchup_manager::update_sending_simulation_updates(void)
//{
//    mangled_ppc("?update_sending_simulation_updates@c_simulation_view_synchronous_catchup_manager@@AAA_NXZ");
//};

//public: static char const * c_simulation_view::get_death_reason_string(long)
//{
//    mangled_ppc("?get_death_reason_string@c_simulation_view@@SAPBDJ@Z");
//};

//public: static char const * c_simulation_view::get_type_string(long)
//{
//    mangled_ppc("?get_type_string@c_simulation_view@@SAPBDJ@Z");
//};

//public: void s_static_array<long, 16>::set_all(long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@J$0BA@@@QAAXABJ@Z");
//};

//public: c_enum<enum e_network_message_synchronous_join_catchup_source, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_network_message_synchronous_join_catchup_source, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_message_synchronous_join_catchup_source@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_network_message_synchronous_join_catchup_source, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_network_message_synchronous_join_catchup_source, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum e_network_message_synchronous_join_catchup_source)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_message_synchronous_join_catchup_source@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_network_message_synchronous_join_catchup_source@@@Z");
//};

//public: enum e_network_message_synchronous_join_catchup_source c_enum_no_init<enum e_network_message_synchronous_join_catchup_source, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_network_message_synchronous_join_catchup_source(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_network_message_synchronous_join_catchup_source@@E$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_network_message_synchronous_join_catchup_source@@XZ");
//};

//public: c_enum<enum e_network_message_synchronous_join_catchup_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_network_message_synchronous_join_catchup_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_message_synchronous_join_catchup_type@@E$0A@$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_network_message_synchronous_join_catchup_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_network_message_synchronous_join_catchup_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>(enum e_network_message_synchronous_join_catchup_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_message_synchronous_join_catchup_type@@E$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_network_message_synchronous_join_catchup_type@@@Z");
//};

//public: enum e_network_message_synchronous_join_catchup_type c_enum_no_init<enum e_network_message_synchronous_join_catchup_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_network_message_synchronous_join_catchup_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_network_message_synchronous_join_catchup_type@@E$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_network_message_synchronous_join_catchup_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_network_message_synchronous_join_catchup_type, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_network_message_synchronous_join_catchup_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_network_message_synchronous_join_catchup_type@@E$0A@$05Us_default_enum_string_resolver@@@@QBA_NW4e_network_message_synchronous_join_catchup_type@@@Z");
//};

//public: c_flags<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_player_data_update_bit@@E$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::c_flags<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_machine_data_update_bit@@E$06Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<char, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<char, unsigned char, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@DE$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum c_simulation_view_synchronous_catchup_manager::e_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flags@c_simulation_view_synchronous_catchup_manager@@E$05Us_default_enum_string_resolver@@@@QBA_NW4e_flags@c_simulation_view_synchronous_catchup_manager@@@Z");
//};

//public: void c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::set(enum c_simulation_view_synchronous_catchup_manager::e_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_flags@c_simulation_view_synchronous_catchup_manager@@E$05Us_default_enum_string_resolver@@@@QAAXW4e_flags@c_simulation_view_synchronous_catchup_manager@@_N@Z");
//};

//public: struct s_player_action & s_static_array<struct s_player_action, 4>::operator[]<enum e_input_user_index>(enum e_input_user_index)
//{
//    mangled_ppc("??$?AW4e_input_user_index@@@?$s_static_array@Us_player_action@@$03@@QAAAAUs_player_action@@W4e_input_user_index@@@Z");
//};

//long int_floor<long, int>(long const &, int const &)
//{
//    mangled_ppc("??$int_floor@JH@@YAJABJABH@Z");
//};

//public: long & s_static_array<long, 16>::operator[]<enum e_simulation_entity_type>(enum e_simulation_entity_type)
//{
//    mangled_ppc("??$?AW4e_simulation_entity_type@@@?$s_static_array@J$0BA@@@QAAAAJW4e_simulation_entity_type@@@Z");
//};

//public: long & s_static_array<long, 6>::operator[]<enum e_replication_entity_view_state>(enum e_replication_entity_view_state)
//{
//    mangled_ppc("??$?AW4e_replication_entity_view_state@@@?$s_static_array@J$05@@QAAAAJW4e_replication_entity_view_state@@@Z");
//};

//public: void c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_player_data_update_bit@@E$05Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_player_data_update_bit@@E$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_machine_data_update_bit@@E$06Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_machine_data_update_bit@@E$06Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@DE$05Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@DE$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum c_simulation_view_synchronous_catchup_manager::e_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flags@c_simulation_view_synchronous_catchup_manager@@E$05Us_default_enum_string_resolver@@@@SA_NW4e_flags@c_simulation_view_synchronous_catchup_manager@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum c_simulation_view_synchronous_catchup_manager::e_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flags@c_simulation_view_synchronous_catchup_manager@@E$05Us_default_enum_string_resolver@@@@CAEW4e_flags@c_simulation_view_synchronous_catchup_manager@@@Z");
//};

//public: static bool s_static_array<long, 16>::valid<enum e_simulation_entity_type>(enum e_simulation_entity_type)
//{
//    mangled_ppc("??$valid@W4e_simulation_entity_type@@@?$s_static_array@J$0BA@@@SA_NW4e_simulation_entity_type@@@Z");
//};

//public: static bool s_static_array<long, 6>::valid<enum e_replication_entity_view_state>(enum e_replication_entity_view_state)
//{
//    mangled_ppc("??$valid@W4e_replication_entity_view_state@@@?$s_static_array@J$05@@SA_NW4e_replication_entity_view_state@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_player_data_update_bit@@E$05Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_machine_data_update_bit@@E$06Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@DE$05Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_player_data_update_bit, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_player_data_update_bit)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_player_data_update_bit@@E$05Us_default_enum_string_resolver@@@@CAEW4e_player_data_update_bit@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_machine_data_update_bit, unsigned char, 7, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_machine_data_update_bit)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_machine_data_update_bit@@E$06Us_default_enum_string_resolver@@@@CAEW4e_machine_data_update_bit@@@Z");
//};

//private: static unsigned char c_flags_no_init<char, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(char)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@DE$05Us_default_enum_string_resolver@@@@CAED@Z");
//};

