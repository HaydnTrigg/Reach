/* ---------- headers */

#include "omaha\simulation\simulation_world.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@JK$0P@Us_default_enum_string_resolver@@@@2JB"
// char const **k_synchronous_join_state_descriptions; // "?k_synchronous_join_state_descriptions@@3PAPBDA"

// public: void c_simulation_world::initialize_world(enum e_game_simulation_type, enum e_game_playback_type, bool, bool, class c_simulation_type_collection *, class c_simulation_watcher *, class c_simulation_distributed_world *);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// public: void c_simulation_world::reset_world(void);
// public: void c_simulation_world::destroy_world(bool);
// public: void c_simulation_world::update(void);
// public: bool c_simulation_world::is_connected(void) const;
// public: void c_simulation_world::process_input(unsigned long, class s_static_array<struct s_player_action, 4> const &);
// public: void c_simulation_world::process_actor_control(long, struct unit_control_data const *);
// public: bool c_simulation_actor::exists(void) const;
// public: void c_simulation_world::generate_player_motion_and_prediction(void);
// public: void c_simulation_world::process_playback_events(void);
// public: void c_simulation_world::build_player_actions(struct simulation_update *);
// public: bool c_simulation_player::exists(void) const;
// public: bool c_simulation_player::is_local(void) const;
// public: bool c_simulation_player::is_predictive(void) const;
// public: long c_simulation_player::get_player_index(void) const;
// public: void c_simulation_world::build_machine_properties(struct simulation_update *);
// public: void c_simulation_world::build_update(bool, struct simulation_update *, struct s_simulation_update_metadata *);
// public: bool c_simulation_world::is_synchronous_authority_joining_receiving_updates(void) const;
// public: static void c_simulation_world::destroy_update(struct simulation_update *);
// public: void c_simulation_world::process_pending_updates(void);
// public: void c_simulation_world::add_update_to_history(struct simulation_update const *);
// public: void c_simulation_world::distribute_update(struct simulation_update const *, struct s_simulation_update_metadata const *);
// public: void c_simulation_world::advance_update(struct simulation_update const *);
// public: void c_simulation_world::go_out_of_sync(bool);
// void saved_film_manager_notify_out_of_sync(void);
// public: void c_simulation_world::notify_gamestate_flush(void);
// public: void c_simulation_world::notify_gamestate_flush_outside_game_tick(void);
// public: void c_simulation_world::notify_initial_gamestate_load(long);
// public: void c_simulation_world::notify_playback_control(enum e_network_synchronous_playback_control, long, long);
// public: void c_simulation_world::attach_to_map(void);
// public: void c_simulation_world::detach_from_map(void);
// public: void c_simulation_world::time_start(long, bool);
// public: void c_simulation_world::time_stop(void);
// public: long c_simulation_world::time_get_available(bool *, long *);
// public: void c_simulation_world::time_set_immediate_update(bool);
// public: void c_simulation_world::time_set_next_update_number(long, bool);
// public: float c_simulation_world::time_get_network_induced_update_rate_varinace_ms(void);
// public: void c_simulation_world::get_machine_identifier(struct s_machine_identifier *) const;
// public: void c_simulation_world::set_machine_identifier(struct s_machine_identifier const *);
// public: long c_simulation_world::get_machine_index(void) const;
// public: void c_simulation_world::set_machine_index(long);
// public: long c_simulation_world::attach_view(class c_simulation_view *);
// public: void c_simulation_world::detach_view(class c_simulation_view const *, long);
// public: void c_simulation_world::remove_all_views(void);
// public: long c_simulation_world::get_view_count(void) const;
// public: static void c_simulation_world::iterator_begin(struct s_simulation_world_view_iterator *, unsigned long);
// public: bool c_simulation_world::iterator_next(struct s_simulation_world_view_iterator *, class c_simulation_view **) const;
// public: void c_simulation_world::create_player(long, enum e_game_simulation_type);
// public: void c_simulation_world::delete_player(long);
// public: void c_simulation_world::mark_player_pending_deletion(long);
// public: bool c_simulation_player::active(void) const;
// public: void c_simulation_world::deactivate_all_players(void);
// public: bool c_simulation_world::player_exists(long, struct s_player_identifier *) const;
// public: void c_simulation_player::get_identifier(struct s_player_identifier *) const;
// public: bool c_simulation_world::player_is_in_game(long, struct s_player_identifier const *) const;
// public: bool c_simulation_world::player_is_active(long) const;
// public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_simulation_world::get_player_exists_mask(void) const;
// public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_simulation_world::get_player_in_game_mask(void) const;
// public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_simulation_world::get_player_active_mask(void) const;
// private: long c_simulation_world::synchronous_authority_get_maximum_update_queue_size(long, class c_flags<long, unsigned long, 15, struct s_default_enum_string_resolver> *);
// private: long c_simulation_world::synchronous_authority_get_maximum_updates(class c_flags<long, unsigned long, 15, struct s_default_enum_string_resolver> *);
// private: void c_simulation_world::synchronous_authority_dispatch_update(struct simulation_update const *, struct s_simulation_update_metadata const *);
// private: void c_simulation_world::synchronous_authority_set_joining_state(enum c_simulation_world::e_synchronous_join_state);
// public: void s_simulation_update_range::initialize(void);
// public: bool s_simulation_update_range::valid(void) const;
// public: bool c_simulation_world::handle_playback_update(struct simulation_update const *, struct s_simulation_update_metadata const *, bool *);
// public: bool c_simulation_world::handle_synchronous_update(struct simulation_update const *, struct s_simulation_update_metadata const *, unsigned long, bool *);
// public: bool c_simulation_world::handle_synchronous_join_catchup_synchronous_update(struct simulation_update const *, bool *);
// public: bool c_simulation_world::handle_synchronous_playback_control(enum e_network_synchronous_playback_control, long, long, unsigned long);
// void saved_film_manager_notify_remote_end_film(void);
// public: long c_simulation_world::control_stream_get_unit_index(long) const;
// public: long c_simulation_actor::get_unit_index(void) const;
// private: void c_simulation_world::distributed_authority_dispatch_player_actions(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>, struct s_player_action const *);
// public: long c_simulation_player::get_control_index(void) const;
// public: void c_simulation_player::get_machine_identifier(struct s_machine_identifier *) const;
// public: void c_replication_control_view::prefetch_motion_memory(long);
// private: void c_simulation_world::distributed_authority_dispatch_actor_control(unsigned long, struct unit_control_data const *);
// public: long c_simulation_actor::get_control_index(void) const;
// private: void c_simulation_world::update_authority_join_initiate(void);
// private: void c_simulation_world::update_authority_join_progress(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// private: void c_simulation_world::update_authority_join_synchronous(void);
// private: void c_simulation_world::update_authority_join_synchronous_receiving_client_update_histories(void);
// private: void c_simulation_world::update_authority_join_synchronous_receiving_simulation_updates_from_most_future_client(void);
// private: void c_simulation_world::update_authority_join_synchronous_sending_simulation_updates_to_clients(void);
// private: void c_simulation_world::update_authority_active(void);
// private: void c_simulation_world::update_authority_active_synchronous(void);
// private: void c_simulation_world::update_authority_active_synchronous_queue(void);
// public: struct s_halt_configuration const * c_simulation_world::get_halt_configuration(void) const;
// private: void c_simulation_world::update_authority_active_synchronous_halt_management(void);
// long int_min(long, int);
// long int_max(long, int);
// public: void c_simulation_view::synchronous_halt_count_add(float);
// public: float c_simulation_view::synchronous_halt_count_get(void);
// public: void c_simulation_view::synchronous_halt_count_set(float);
// public: void c_simulation_view::synchronous_halt_countdown_add_ms(long);
// public: long c_simulation_view::synchronous_halt_countdown_get(void);
// public: void c_simulation_view::synchronous_halt_countdown_set(long);
// private: void c_simulation_world::update_authority_handoff(void);
// private: void c_simulation_world::update_client_join_initiate(void);
// public: class c_network_session * c_simulation_watcher::get_session(void) const;
// private: void c_simulation_world::update_client_join_progress(void);
// private: void c_simulation_world::update_client_failure(void);
// private: void c_simulation_world::update_client_disconnection(void);
// private: void c_simulation_world::update_client_active_synchronous_halt_management(void);
// private: enum c_simulation_world::e_join_progress c_simulation_world::update_joining_view(class c_simulation_view *);
// public: bool c_simulation_view::is_client_view(void) const;
// public: bool c_simulation_view::client_in_game(void) const;
// private: void c_simulation_world::update_establishing_view(class c_simulation_view *);
// public: bool c_simulation_view::ready_to_establish(void) const;
// public: void c_simulation_world::verify_player_activation(void) const;
// private: void c_simulation_world::update_player_activation(void);
// public: bool c_simulation_player::pending_deletion(void) const;
// private: bool c_simulation_world::authority_join_timeout_expired(void) const;
// public: bool c_simulation_world::view_has_acknowledged_active_players(class c_simulation_view const *) const;
// public: void c_simulation_world::get_player_machine(long, struct s_machine_identifier *) const;
// public: class c_simulation_player * c_simulation_world::find_player_by_machine(struct s_machine_identifier const *, enum e_input_user_index);
// private: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_simulation_world::get_acknowledged_player_mask(void) const;
// public: void c_simulation_world::send_player_acknowledgements(bool);
// public: void c_simulation_world::send_synchronous_acknowledgements(bool);
// public: void c_simulation_world::drop_simulation_from_active_to_joining(void);
// public: struct s_simulation_update_history_element const * c_simulation_world::get_simulation_update_history_element(long) const;
// public: bool c_simulation_world::get_simulation_update_history_range(struct s_simulation_update_range *) const;
// public: void c_simulation_world::get_synchronous_halt_screen_status(struct s_simulation_synchronous_halt_screen_status *) const;
// public: void c_simulation_world::delete_all_players(void);
// public: long c_simulation_world::create_actor(long, long);
// public: void c_simulation_world::delete_actor(long);
// public: bool c_simulation_world::actor_exists(long) const;
// private: void c_simulation_world::delete_all_actors(void);
// public: void c_simulation_world::recreate_players(enum e_game_simulation_type);
// public: void c_simulation_world::handle_synchronous_client_actions(struct s_machine_identifier const *, unsigned long, class s_static_array<struct s_player_action, 4> const &, unsigned long);
// public: void c_simulation_world::gamestate_flush(void);
// private: bool c_simulation_world::update_queue_operation_allowed(void) const;
// private: void c_simulation_world::update_queue_initialize(void);
// private: void c_simulation_world::update_queue_reset(void);
// private: void c_simulation_world::update_queue_start(long, bool);
// private: void c_simulation_world::update_queue_stop(void);
// private: long c_simulation_world::update_queue_get_length(void) const;
// private: void c_simulation_world::update_queue_validate(void) const;
// private: bool c_simulation_world::update_queue_handle_server_update(struct simulation_update const *, struct s_simulation_update_metadata const *, unsigned long, bool *);
// private: bool c_simulation_world::update_queue_remove_update_shallow(struct simulation_update const *);
// private: bool c_simulation_world::update_queue_handle_playback_event(enum e_simulation_playback_event, long, long, unsigned long);
// private: void c_simulation_world::update_queue_retrieve_update(struct simulation_update *, struct s_simulation_update_metadata *);
// private: bool c_simulation_world::update_queue_retrieve_event(enum e_simulation_playback_event *, long *, long *);
// public: void c_simulation_world::update_queue_consume_immediatly(void);
// public: bool c_simulation_world::wants_all_updates_consumed(void);
// public: void c_simulation_world::notify_loading_in_progress(void);
// private: long c_simulation_world::update_queue_get_available_updates(void) const;
// private: long c_simulation_world::update_queue_get_next_expected_update_number(void) const;
// public: class c_simulation_view * c_simulation_world::get_view_by_index(long);
// public: class c_simulation_view * c_simulation_world::get_authority_view(void) const;
// public: class c_simulation_view * c_simulation_world::get_client_view_by_machine_index(long);
// public: class c_simulation_view * c_simulation_world::get_client_view_by_machine_identifier(struct s_machine_identifier const *);
// public: class c_simulation_view * c_simulation_world::get_view_by_channel(class c_network_channel const *);
// public: class c_simulation_view * c_simulation_world::get_view_by_observer(long);
// public: long c_simulation_world::get_machine_index_by_identifier(struct s_machine_identifier const *) const;
// public: bool c_simulation_world::all_client_views_active(void) const;
// public: bool c_simulation_world::relinquish_authority(void);
// public: bool c_simulation_world::claim_authority(void);
// public: s_game_statborg_game_results_snapshot::s_game_statborg_game_results_snapshot(void);
// public: void c_simulation_world::claim_authority_gameworld(struct s_game_results_game_engine_snapshot *, struct s_game_statborg_game_results_snapshot const *, bool);
// public: void c_simulation_world::disconnect(void);
// public: void c_simulation_world::handle_view_establishment(class c_simulation_view const *, bool);
// public: void c_simulation_world::handle_view_activation(class c_simulation_view const *, bool);
// public: void c_simulation_world::change_state_internal(enum e_simulation_world_state);
// public: void c_simulation_world::change_state_joining(class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>);
// public: void c_simulation_world::change_state_active(void);
// public: void c_simulation_world::change_state_disconnected(void);
// public: void c_simulation_world::change_state_dead(void);
// public: void c_simulation_world::change_state_handoff(void);
// public: void c_simulation_world::change_state_leaving(void);
// public: static char const * c_simulation_world::get_type_string(long);
// public: static char const * c_simulation_world::get_state_string(long);
// public: bool c_simulation_world::get_failure_status(long *, long *) const;
// public: void c_simulation_world::get_join_status(long *, long *, long *, long *, long *, long *, long *, long *, long *, long *) const;
// public: void c_simulation_world::get_disconnected_status(long *, long *) const;
// public: void c_simulation_world::get_update_queue_status(long *, long *) const;
// public: class c_network_time_statistics * c_simulation_world::get_local_input_processing_statistics(void);
// public: class c_network_time_statistics * c_simulation_world::get_update_queue_length_statistics(long);
// public: long c_simulation_world::get_local_update_queue_length(void);
// public: class c_network_time_variance_statistics * c_simulation_world::get_synchronous_client_input_delay_statistics(void);
// public: class c_network_time_statistics * c_simulation_world::get_synchronous_action_send_delay_statistics(void);
// public: void c_simulation_world::notify_synchronous_action_send_delay(long);
// public: class c_network_time_statistics * c_simulation_world::get_host_input_use_delay_statistics(void);
// public: class c_network_time_statistics * c_simulation_world::get_host_update_send_delay_statistics(void);
// public: class c_network_time_variance_statistics * c_simulation_world::get_update_queue_delays_statistics(void);
// public: void c_simulation_world::debug_render(void);
// private: static bool c_simulation_world::apply_simulation_queue_element(class c_simulation_queue_element const *);
// public: static void c_simulation_world::apply_simulation_queue(class c_simulation_queue const *);
// private: static void c_simulation_world::apply_simulation_queue_array_internal(class c_simulation_queue_array const *, bool);
// public: static void c_simulation_world::apply_simulation_queue_array(class c_simulation_queue_array const *);
// public: static void c_simulation_world::apply_simulation_queue_array_remaining(class c_simulation_queue_array const *);
// public: static void c_simulation_world::apply_simulation_queue_array_by_type(class c_simulation_queue_array const *, class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>);
// public: static void c_simulation_world::apply_simulation_queue_array_by_type_exempting_sort_key0_mask(class c_simulation_queue_array const *, class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>, class c_big_flags<256> const *);
// public: static void c_simulation_world::apply_simulation_queue_array_by_type_and_sort_key0_mask(class c_simulation_queue_array const *, class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>, class c_big_flags<256> const *);
// public: static bool c_simulation_world::simulation_queue_array_has_been_fully_applied(class c_simulation_queue_array const *);
// public: bool c_simulation_world::simulation_queues_empty(void) const;
// public: void c_simulation_world::simulation_queue_allocate(enum e_simulation_queue_element_type, long, class c_simulation_queue_element **);
// public: void c_simulation_world::simulation_queue_free(class c_simulation_queue_element *);
// public: void c_simulation_world::simulation_queue_enqueue(class c_simulation_queue_element *);
// public: void c_simulation_world::simulation_queue_handle_queue_element_message(struct s_network_message_update_queue_element const *, unsigned char *, long);
// public: void c_simulation_world::simulation_queue_dispatch_queue_element_message(enum e_simulation_queue_element_type, unsigned char const *, long);
// private: void c_simulation_world::attach_simulation_queues_to_update(struct simulation_update *);
// public: void c_simulation_update_history::initialize(void);
// public: void c_simulation_update_history::destroy(void);
// public: bool c_simulation_update_history::add_update(struct simulation_update const *);
// public: void s_simulation_update_history_element::initialize(void);
// public: bool s_simulation_update_history_element::valid(void) const;
// public: void c_simulation_update_history::get_range(struct s_simulation_update_range *) const;
// public: struct s_simulation_update_history_element const * c_simulation_update_history::get_element(long) const;
// private: void c_simulation_update_history::free_history_element(struct s_simulation_update_history_element *);
// bool simulation_update_encode_into_new_allocated_buffer(struct simulation_update const *, unsigned char **, long *, enum e_network_game_memory_block_type, bool);
// void simulation_update_free_allocated_buffer(unsigned char *, enum e_network_game_memory_block_type);
// bool simulation_update_decode_and_free_allocated_buffer(unsigned char *, long, struct simulation_update *, enum e_network_game_memory_block_type, bool);
// public: struct player_datum * c_data_iterator<struct player_datum>::get_datum(void) const;
// public: c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>(unsigned long);
// public: c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>);
// public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> & c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator=(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> const &);
// public: enum e_simulation_queue_element_type c_enum_no_init<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>::operator enum e_simulation_queue_element_type(void) const;
// public: struct s_simulation_update_history_element const & t_static_ring_buffer<struct s_simulation_update_history_element, 64>::get_element(long) const;
// public: struct s_simulation_update_history_element & t_static_ring_buffer<struct s_simulation_update_history_element, 64>::get_element(long);
// public: static long s_static_array<class c_network_time_statistics, 16>::get_count(void);
// public: c_flags<long, unsigned long, 15, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 15, struct s_default_enum_string_resolver>(unsigned long);
// public: bool c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::test(enum e_network_banhammer_ban_flags) const;
// public: long c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::count_set(void) const;
// public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator~(void) const;
// public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> const &) const;
// public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> & c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator&=(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> const &);
// public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> & c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> const &);
// public: bool c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_simulation_queue_element_flags) const;
// public: void c_flags_no_init<enum e_simulation_update_high_level_flags, unsigned short, 5, struct s_default_enum_string_resolver>::set(enum e_simulation_update_high_level_flags, bool);
// public: bool c_flags_no_init<enum e_simulation_update_metadata_flags, unsigned short, 3, struct s_default_enum_string_resolver>::test(enum e_simulation_update_metadata_flags) const;
// void prefetch<struct s_player_motion>(struct s_player_motion const *);
// void prefetch_block(void const *, long);
// public: bool c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum c_simulation_update_history::e_flags) const;
// public: void c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum c_simulation_update_history::e_flags, bool);
// public: c_flags<long, unsigned short, 16, struct s_default_enum_string_resolver>::c_flags<long, unsigned short, 16, struct s_default_enum_string_resolver>(void);
// public: class c_network_time_statistics & s_static_array<class c_network_time_statistics, 16>::operator[]<long>(long);
// public: struct s_player_action const & s_static_array<struct s_player_action, 4>::operator[]<enum e_input_user_index>(enum e_input_user_index) const;
// bool operator!=<enum e_output_user_index>(enum e_output_user_index const &, enum e_none_sentinel const &);
// public: void c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::test(long) const;
// public: void c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::set(long, bool);
// public: class c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver> & c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver> const &);
// public: void c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// public: class c_static_string<1024> c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::to_string(void) const;
// public: char const * s_static_string<1024>::get_string(void) const;
// public: long const & s_static_array<long, 16>::operator[]<long>(long) const;
// public: static bool c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::valid_bit(enum e_network_banhammer_ban_flags);
// private: static unsigned short c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_banhammer_ban_flags);
// public: void s_static_string<64>::replace(char, char);
// public: char const * s_static_string<64>::operator char const *(void) const;
// public: static bool c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_simulation_queue_element_flags);
// private: static unsigned char c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_simulation_queue_element_flags);
// public: static bool c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum c_simulation_update_history::e_flags);
// private: static unsigned char c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum c_simulation_update_history::e_flags);
// public: void c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool s_static_array<class c_network_time_statistics, 16>::valid<long>(long);
// public: static bool s_static_array<struct s_player_action, 4>::valid<enum e_input_user_index>(enum e_input_user_index);
// public: static bool c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::valid_bit(long);
// public: bool c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned long c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::flag_size_type(long);
// public: c_static_string<1024>::c_static_string<1024>(void);
// public: void s_static_string<1024>::set(char const *);
// public: char const * s_static_string<1024>::append(char const *);
// private: static unsigned short c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: void s_static_string<1024>::clear(void);
// private: static unsigned short c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long);
// private: static unsigned long c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long);
// public: static void s_default_enum_string_resolver::to_string(long, class c_static_string<64> *);
// enum e_input_user_index first_input_user(void);
// enum e_input_user_index next_input_user(enum e_input_user_index);
// public: char const * s_static_string<64>::print(char const *, ...);

//public: void c_simulation_world::initialize_world(enum e_game_simulation_type, enum e_game_playback_type, bool, bool, class c_simulation_type_collection *, class c_simulation_watcher *, class c_simulation_distributed_world *)
//{
//    mangled_ppc("?initialize_world@c_simulation_world@@QAAXW4e_game_simulation_type@@W4e_game_playback_type@@_N2PAVc_simulation_type_collection@@PAVc_simulation_watcher@@PAVc_simulation_distributed_world@@@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//public: void c_simulation_world::reset_world(void)
//{
//    mangled_ppc("?reset_world@c_simulation_world@@QAAXXZ");
//};

//public: void c_simulation_world::destroy_world(bool)
//{
//    mangled_ppc("?destroy_world@c_simulation_world@@QAAX_N@Z");
//};

//public: void c_simulation_world::update(void)
//{
//    mangled_ppc("?update@c_simulation_world@@QAAXXZ");
//};

//public: bool c_simulation_world::is_connected(void) const
//{
//    mangled_ppc("?is_connected@c_simulation_world@@QBA_NXZ");
//};

//public: void c_simulation_world::process_input(unsigned long, class s_static_array<struct s_player_action, 4> const &)
//{
//    mangled_ppc("?process_input@c_simulation_world@@QAAXKABV?$s_static_array@Us_player_action@@$03@@@Z");
//};

//public: void c_simulation_world::process_actor_control(long, struct unit_control_data const *)
//{
//    mangled_ppc("?process_actor_control@c_simulation_world@@QAAXJPBUunit_control_data@@@Z");
//};

//public: bool c_simulation_actor::exists(void) const
//{
//    mangled_ppc("?exists@c_simulation_actor@@QBA_NXZ");
//};

//public: void c_simulation_world::generate_player_motion_and_prediction(void)
//{
//    mangled_ppc("?generate_player_motion_and_prediction@c_simulation_world@@QAAXXZ");
//};

//public: void c_simulation_world::process_playback_events(void)
//{
//    mangled_ppc("?process_playback_events@c_simulation_world@@QAAXXZ");
//};

//public: void c_simulation_world::build_player_actions(struct simulation_update *)
//{
//    mangled_ppc("?build_player_actions@c_simulation_world@@QAAXPAUsimulation_update@@@Z");
//};

//public: bool c_simulation_player::exists(void) const
//{
//    mangled_ppc("?exists@c_simulation_player@@QBA_NXZ");
//};

//public: bool c_simulation_player::is_local(void) const
//{
//    mangled_ppc("?is_local@c_simulation_player@@QBA_NXZ");
//};

//public: bool c_simulation_player::is_predictive(void) const
//{
//    mangled_ppc("?is_predictive@c_simulation_player@@QBA_NXZ");
//};

//public: long c_simulation_player::get_player_index(void) const
//{
//    mangled_ppc("?get_player_index@c_simulation_player@@QBAJXZ");
//};

//public: void c_simulation_world::build_machine_properties(struct simulation_update *)
//{
//    mangled_ppc("?build_machine_properties@c_simulation_world@@QAAXPAUsimulation_update@@@Z");
//};

//public: void c_simulation_world::build_update(bool, struct simulation_update *, struct s_simulation_update_metadata *)
//{
//    mangled_ppc("?build_update@c_simulation_world@@QAAX_NPAUsimulation_update@@PAUs_simulation_update_metadata@@@Z");
//};

//public: bool c_simulation_world::is_synchronous_authority_joining_receiving_updates(void) const
//{
//    mangled_ppc("?is_synchronous_authority_joining_receiving_updates@c_simulation_world@@QBA_NXZ");
//};

//public: static void c_simulation_world::destroy_update(struct simulation_update *)
//{
//    mangled_ppc("?destroy_update@c_simulation_world@@SAXPAUsimulation_update@@@Z");
//};

//public: void c_simulation_world::process_pending_updates(void)
//{
//    mangled_ppc("?process_pending_updates@c_simulation_world@@QAAXXZ");
//};

//public: void c_simulation_world::add_update_to_history(struct simulation_update const *)
//{
//    mangled_ppc("?add_update_to_history@c_simulation_world@@QAAXPBUsimulation_update@@@Z");
//};

//public: void c_simulation_world::distribute_update(struct simulation_update const *, struct s_simulation_update_metadata const *)
//{
//    mangled_ppc("?distribute_update@c_simulation_world@@QAAXPBUsimulation_update@@PBUs_simulation_update_metadata@@@Z");
//};

//public: void c_simulation_world::advance_update(struct simulation_update const *)
//{
//    mangled_ppc("?advance_update@c_simulation_world@@QAAXPBUsimulation_update@@@Z");
//};

//public: void c_simulation_world::go_out_of_sync(bool)
//{
//    mangled_ppc("?go_out_of_sync@c_simulation_world@@QAAX_N@Z");
//};

//void saved_film_manager_notify_out_of_sync(void)
//{
//    mangled_ppc("?saved_film_manager_notify_out_of_sync@@YAXXZ");
//};

//public: void c_simulation_world::notify_gamestate_flush(void)
//{
//    mangled_ppc("?notify_gamestate_flush@c_simulation_world@@QAAXXZ");
//};

//public: void c_simulation_world::notify_gamestate_flush_outside_game_tick(void)
//{
//    mangled_ppc("?notify_gamestate_flush_outside_game_tick@c_simulation_world@@QAAXXZ");
//};

//public: void c_simulation_world::notify_initial_gamestate_load(long)
//{
//    mangled_ppc("?notify_initial_gamestate_load@c_simulation_world@@QAAXJ@Z");
//};

//public: void c_simulation_world::notify_playback_control(enum e_network_synchronous_playback_control, long, long)
//{
//    mangled_ppc("?notify_playback_control@c_simulation_world@@QAAXW4e_network_synchronous_playback_control@@JJ@Z");
//};

//public: void c_simulation_world::attach_to_map(void)
//{
//    mangled_ppc("?attach_to_map@c_simulation_world@@QAAXXZ");
//};

//public: void c_simulation_world::detach_from_map(void)
//{
//    mangled_ppc("?detach_from_map@c_simulation_world@@QAAXXZ");
//};

//public: void c_simulation_world::time_start(long, bool)
//{
//    mangled_ppc("?time_start@c_simulation_world@@QAAXJ_N@Z");
//};

//public: void c_simulation_world::time_stop(void)
//{
//    mangled_ppc("?time_stop@c_simulation_world@@QAAXXZ");
//};

//public: long c_simulation_world::time_get_available(bool *, long *)
//{
//    mangled_ppc("?time_get_available@c_simulation_world@@QAAJPA_NPAJ@Z");
//};

//public: void c_simulation_world::time_set_immediate_update(bool)
//{
//    mangled_ppc("?time_set_immediate_update@c_simulation_world@@QAAX_N@Z");
//};

//public: void c_simulation_world::time_set_next_update_number(long, bool)
//{
//    mangled_ppc("?time_set_next_update_number@c_simulation_world@@QAAXJ_N@Z");
//};

//public: float c_simulation_world::time_get_network_induced_update_rate_varinace_ms(void)
//{
//    mangled_ppc("?time_get_network_induced_update_rate_varinace_ms@c_simulation_world@@QAAMXZ");
//};

//public: void c_simulation_world::get_machine_identifier(struct s_machine_identifier *) const
//{
//    mangled_ppc("?get_machine_identifier@c_simulation_world@@QBAXPAUs_machine_identifier@@@Z");
//};

//public: void c_simulation_world::set_machine_identifier(struct s_machine_identifier const *)
//{
//    mangled_ppc("?set_machine_identifier@c_simulation_world@@QAAXPBUs_machine_identifier@@@Z");
//};

//public: long c_simulation_world::get_machine_index(void) const
//{
//    mangled_ppc("?get_machine_index@c_simulation_world@@QBAJXZ");
//};

//public: void c_simulation_world::set_machine_index(long)
//{
//    mangled_ppc("?set_machine_index@c_simulation_world@@QAAXJ@Z");
//};

//public: long c_simulation_world::attach_view(class c_simulation_view *)
//{
//    mangled_ppc("?attach_view@c_simulation_world@@QAAJPAVc_simulation_view@@@Z");
//};

//public: void c_simulation_world::detach_view(class c_simulation_view const *, long)
//{
//    mangled_ppc("?detach_view@c_simulation_world@@QAAXPBVc_simulation_view@@J@Z");
//};

//public: void c_simulation_world::remove_all_views(void)
//{
//    mangled_ppc("?remove_all_views@c_simulation_world@@QAAXXZ");
//};

//public: long c_simulation_world::get_view_count(void) const
//{
//    mangled_ppc("?get_view_count@c_simulation_world@@QBAJXZ");
//};

//public: static void c_simulation_world::iterator_begin(struct s_simulation_world_view_iterator *, unsigned long)
//{
//    mangled_ppc("?iterator_begin@c_simulation_world@@SAXPAUs_simulation_world_view_iterator@@K@Z");
//};

//public: bool c_simulation_world::iterator_next(struct s_simulation_world_view_iterator *, class c_simulation_view **) const
//{
//    mangled_ppc("?iterator_next@c_simulation_world@@QBA_NPAUs_simulation_world_view_iterator@@PAPAVc_simulation_view@@@Z");
//};

//public: void c_simulation_world::create_player(long, enum e_game_simulation_type)
//{
//    mangled_ppc("?create_player@c_simulation_world@@QAAXJW4e_game_simulation_type@@@Z");
//};

//public: void c_simulation_world::delete_player(long)
//{
//    mangled_ppc("?delete_player@c_simulation_world@@QAAXJ@Z");
//};

//public: void c_simulation_world::mark_player_pending_deletion(long)
//{
//    mangled_ppc("?mark_player_pending_deletion@c_simulation_world@@QAAXJ@Z");
//};

//public: bool c_simulation_player::active(void) const
//{
//    mangled_ppc("?active@c_simulation_player@@QBA_NXZ");
//};

//public: void c_simulation_world::deactivate_all_players(void)
//{
//    mangled_ppc("?deactivate_all_players@c_simulation_world@@QAAXXZ");
//};

//public: bool c_simulation_world::player_exists(long, struct s_player_identifier *) const
//{
//    mangled_ppc("?player_exists@c_simulation_world@@QBA_NJPAUs_player_identifier@@@Z");
//};

//public: void c_simulation_player::get_identifier(struct s_player_identifier *) const
//{
//    mangled_ppc("?get_identifier@c_simulation_player@@QBAXPAUs_player_identifier@@@Z");
//};

//public: bool c_simulation_world::player_is_in_game(long, struct s_player_identifier const *) const
//{
//    mangled_ppc("?player_is_in_game@c_simulation_world@@QBA_NJPBUs_player_identifier@@@Z");
//};

//public: bool c_simulation_world::player_is_active(long) const
//{
//    mangled_ppc("?player_is_active@c_simulation_world@@QBA_NJ@Z");
//};

//public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_simulation_world::get_player_exists_mask(void) const
//{
//    mangled_ppc("?get_player_exists_mask@c_simulation_world@@QBA?AV?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_simulation_world::get_player_in_game_mask(void) const
//{
//    mangled_ppc("?get_player_in_game_mask@c_simulation_world@@QBA?AV?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_simulation_world::get_player_active_mask(void) const
//{
//    mangled_ppc("?get_player_active_mask@c_simulation_world@@QBA?AV?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//private: long c_simulation_world::synchronous_authority_get_maximum_update_queue_size(long, class c_flags<long, unsigned long, 15, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?synchronous_authority_get_maximum_update_queue_size@c_simulation_world@@AAAJJPAV?$c_flags@JK$0P@Us_default_enum_string_resolver@@@@@Z");
//};

//private: long c_simulation_world::synchronous_authority_get_maximum_updates(class c_flags<long, unsigned long, 15, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?synchronous_authority_get_maximum_updates@c_simulation_world@@AAAJPAV?$c_flags@JK$0P@Us_default_enum_string_resolver@@@@@Z");
//};

//private: void c_simulation_world::synchronous_authority_dispatch_update(struct simulation_update const *, struct s_simulation_update_metadata const *)
//{
//    mangled_ppc("?synchronous_authority_dispatch_update@c_simulation_world@@AAAXPBUsimulation_update@@PBUs_simulation_update_metadata@@@Z");
//};

//private: void c_simulation_world::synchronous_authority_set_joining_state(enum c_simulation_world::e_synchronous_join_state)
//{
//    mangled_ppc("?synchronous_authority_set_joining_state@c_simulation_world@@AAAXW4e_synchronous_join_state@1@@Z");
//};

//public: void s_simulation_update_range::initialize(void)
//{
//    mangled_ppc("?initialize@s_simulation_update_range@@QAAXXZ");
//};

//public: bool s_simulation_update_range::valid(void) const
//{
//    mangled_ppc("?valid@s_simulation_update_range@@QBA_NXZ");
//};

//public: bool c_simulation_world::handle_playback_update(struct simulation_update const *, struct s_simulation_update_metadata const *, bool *)
//{
//    mangled_ppc("?handle_playback_update@c_simulation_world@@QAA_NPBUsimulation_update@@PBUs_simulation_update_metadata@@PA_N@Z");
//};

//public: bool c_simulation_world::handle_synchronous_update(struct simulation_update const *, struct s_simulation_update_metadata const *, unsigned long, bool *)
//{
//    mangled_ppc("?handle_synchronous_update@c_simulation_world@@QAA_NPBUsimulation_update@@PBUs_simulation_update_metadata@@KPA_N@Z");
//};

//public: bool c_simulation_world::handle_synchronous_join_catchup_synchronous_update(struct simulation_update const *, bool *)
//{
//    mangled_ppc("?handle_synchronous_join_catchup_synchronous_update@c_simulation_world@@QAA_NPBUsimulation_update@@PA_N@Z");
//};

//public: bool c_simulation_world::handle_synchronous_playback_control(enum e_network_synchronous_playback_control, long, long, unsigned long)
//{
//    mangled_ppc("?handle_synchronous_playback_control@c_simulation_world@@QAA_NW4e_network_synchronous_playback_control@@JJK@Z");
//};

//void saved_film_manager_notify_remote_end_film(void)
//{
//    mangled_ppc("?saved_film_manager_notify_remote_end_film@@YAXXZ");
//};

//public: long c_simulation_world::control_stream_get_unit_index(long) const
//{
//    mangled_ppc("?control_stream_get_unit_index@c_simulation_world@@QBAJJ@Z");
//};

//public: long c_simulation_actor::get_unit_index(void) const
//{
//    mangled_ppc("?get_unit_index@c_simulation_actor@@QBAJXZ");
//};

//private: void c_simulation_world::distributed_authority_dispatch_player_actions(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>, struct s_player_action const *)
//{
//    mangled_ppc("?distributed_authority_dispatch_player_actions@c_simulation_world@@AAAXV?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@PBUs_player_action@@@Z");
//};

//public: long c_simulation_player::get_control_index(void) const
//{
//    mangled_ppc("?get_control_index@c_simulation_player@@QBAJXZ");
//};

//public: void c_simulation_player::get_machine_identifier(struct s_machine_identifier *) const
//{
//    mangled_ppc("?get_machine_identifier@c_simulation_player@@QBAXPAUs_machine_identifier@@@Z");
//};

//public: void c_replication_control_view::prefetch_motion_memory(long)
//{
//    mangled_ppc("?prefetch_motion_memory@c_replication_control_view@@QAAXJ@Z");
//};

//private: void c_simulation_world::distributed_authority_dispatch_actor_control(unsigned long, struct unit_control_data const *)
//{
//    mangled_ppc("?distributed_authority_dispatch_actor_control@c_simulation_world@@AAAXKPBUunit_control_data@@@Z");
//};

//public: long c_simulation_actor::get_control_index(void) const
//{
//    mangled_ppc("?get_control_index@c_simulation_actor@@QBAJXZ");
//};

//private: void c_simulation_world::update_authority_join_initiate(void)
//{
//    mangled_ppc("?update_authority_join_initiate@c_simulation_world@@AAAXXZ");
//};

//private: void c_simulation_world::update_authority_join_progress(void)
//{
//    mangled_ppc("?update_authority_join_progress@c_simulation_world@@AAAXXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//private: void c_simulation_world::update_authority_join_synchronous(void)
//{
//    mangled_ppc("?update_authority_join_synchronous@c_simulation_world@@AAAXXZ");
//};

//private: void c_simulation_world::update_authority_join_synchronous_receiving_client_update_histories(void)
//{
//    mangled_ppc("?update_authority_join_synchronous_receiving_client_update_histories@c_simulation_world@@AAAXXZ");
//};

//private: void c_simulation_world::update_authority_join_synchronous_receiving_simulation_updates_from_most_future_client(void)
//{
//    mangled_ppc("?update_authority_join_synchronous_receiving_simulation_updates_from_most_future_client@c_simulation_world@@AAAXXZ");
//};

//private: void c_simulation_world::update_authority_join_synchronous_sending_simulation_updates_to_clients(void)
//{
//    mangled_ppc("?update_authority_join_synchronous_sending_simulation_updates_to_clients@c_simulation_world@@AAAXXZ");
//};

//private: void c_simulation_world::update_authority_active(void)
//{
//    mangled_ppc("?update_authority_active@c_simulation_world@@AAAXXZ");
//};

//private: void c_simulation_world::update_authority_active_synchronous(void)
//{
//    mangled_ppc("?update_authority_active_synchronous@c_simulation_world@@AAAXXZ");
//};

//private: void c_simulation_world::update_authority_active_synchronous_queue(void)
//{
//    mangled_ppc("?update_authority_active_synchronous_queue@c_simulation_world@@AAAXXZ");
//};

//public: struct s_halt_configuration const * c_simulation_world::get_halt_configuration(void) const
//{
//    mangled_ppc("?get_halt_configuration@c_simulation_world@@QBAPBUs_halt_configuration@@XZ");
//};

//private: void c_simulation_world::update_authority_active_synchronous_halt_management(void)
//{
//    mangled_ppc("?update_authority_active_synchronous_halt_management@c_simulation_world@@AAAXXZ");
//};

//long int_min(long, int)
//{
//    mangled_ppc("?int_min@@YAJJH@Z");
//};

//long int_max(long, int)
//{
//    mangled_ppc("?int_max@@YAJJH@Z");
//};

//public: void c_simulation_view::synchronous_halt_count_add(float)
//{
//    mangled_ppc("?synchronous_halt_count_add@c_simulation_view@@QAAXM@Z");
//};

//public: float c_simulation_view::synchronous_halt_count_get(void)
//{
//    mangled_ppc("?synchronous_halt_count_get@c_simulation_view@@QAAMXZ");
//};

//public: void c_simulation_view::synchronous_halt_count_set(float)
//{
//    mangled_ppc("?synchronous_halt_count_set@c_simulation_view@@QAAXM@Z");
//};

//public: void c_simulation_view::synchronous_halt_countdown_add_ms(long)
//{
//    mangled_ppc("?synchronous_halt_countdown_add_ms@c_simulation_view@@QAAXJ@Z");
//};

//public: long c_simulation_view::synchronous_halt_countdown_get(void)
//{
//    mangled_ppc("?synchronous_halt_countdown_get@c_simulation_view@@QAAJXZ");
//};

//public: void c_simulation_view::synchronous_halt_countdown_set(long)
//{
//    mangled_ppc("?synchronous_halt_countdown_set@c_simulation_view@@QAAXJ@Z");
//};

//private: void c_simulation_world::update_authority_handoff(void)
//{
//    mangled_ppc("?update_authority_handoff@c_simulation_world@@AAAXXZ");
//};

//private: void c_simulation_world::update_client_join_initiate(void)
//{
//    mangled_ppc("?update_client_join_initiate@c_simulation_world@@AAAXXZ");
//};

//public: class c_network_session * c_simulation_watcher::get_session(void) const
//{
//    mangled_ppc("?get_session@c_simulation_watcher@@QBAPAVc_network_session@@XZ");
//};

//private: void c_simulation_world::update_client_join_progress(void)
//{
//    mangled_ppc("?update_client_join_progress@c_simulation_world@@AAAXXZ");
//};

//private: void c_simulation_world::update_client_failure(void)
//{
//    mangled_ppc("?update_client_failure@c_simulation_world@@AAAXXZ");
//};

//private: void c_simulation_world::update_client_disconnection(void)
//{
//    mangled_ppc("?update_client_disconnection@c_simulation_world@@AAAXXZ");
//};

//private: void c_simulation_world::update_client_active_synchronous_halt_management(void)
//{
//    mangled_ppc("?update_client_active_synchronous_halt_management@c_simulation_world@@AAAXXZ");
//};

//private: enum c_simulation_world::e_join_progress c_simulation_world::update_joining_view(class c_simulation_view *)
//{
//    mangled_ppc("?update_joining_view@c_simulation_world@@AAA?AW4e_join_progress@1@PAVc_simulation_view@@@Z");
//};

//public: bool c_simulation_view::is_client_view(void) const
//{
//    mangled_ppc("?is_client_view@c_simulation_view@@QBA_NXZ");
//};

//public: bool c_simulation_view::client_in_game(void) const
//{
//    mangled_ppc("?client_in_game@c_simulation_view@@QBA_NXZ");
//};

//private: void c_simulation_world::update_establishing_view(class c_simulation_view *)
//{
//    mangled_ppc("?update_establishing_view@c_simulation_world@@AAAXPAVc_simulation_view@@@Z");
//};

//public: bool c_simulation_view::ready_to_establish(void) const
//{
//    mangled_ppc("?ready_to_establish@c_simulation_view@@QBA_NXZ");
//};

//public: void c_simulation_world::verify_player_activation(void) const
//{
//    mangled_ppc("?verify_player_activation@c_simulation_world@@QBAXXZ");
//};

//private: void c_simulation_world::update_player_activation(void)
//{
//    mangled_ppc("?update_player_activation@c_simulation_world@@AAAXXZ");
//};

//public: bool c_simulation_player::pending_deletion(void) const
//{
//    mangled_ppc("?pending_deletion@c_simulation_player@@QBA_NXZ");
//};

//private: bool c_simulation_world::authority_join_timeout_expired(void) const
//{
//    mangled_ppc("?authority_join_timeout_expired@c_simulation_world@@ABA_NXZ");
//};

//public: bool c_simulation_world::view_has_acknowledged_active_players(class c_simulation_view const *) const
//{
//    mangled_ppc("?view_has_acknowledged_active_players@c_simulation_world@@QBA_NPBVc_simulation_view@@@Z");
//};

//public: void c_simulation_world::get_player_machine(long, struct s_machine_identifier *) const
//{
//    mangled_ppc("?get_player_machine@c_simulation_world@@QBAXJPAUs_machine_identifier@@@Z");
//};

//public: class c_simulation_player * c_simulation_world::find_player_by_machine(struct s_machine_identifier const *, enum e_input_user_index)
//{
//    mangled_ppc("?find_player_by_machine@c_simulation_world@@QAAPAVc_simulation_player@@PBUs_machine_identifier@@W4e_input_user_index@@@Z");
//};

//private: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_simulation_world::get_acknowledged_player_mask(void) const
//{
//    mangled_ppc("?get_acknowledged_player_mask@c_simulation_world@@ABA?AV?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_simulation_world::send_player_acknowledgements(bool)
//{
//    mangled_ppc("?send_player_acknowledgements@c_simulation_world@@QAAX_N@Z");
//};

//public: void c_simulation_world::send_synchronous_acknowledgements(bool)
//{
//    mangled_ppc("?send_synchronous_acknowledgements@c_simulation_world@@QAAX_N@Z");
//};

//public: void c_simulation_world::drop_simulation_from_active_to_joining(void)
//{
//    mangled_ppc("?drop_simulation_from_active_to_joining@c_simulation_world@@QAAXXZ");
//};

//public: struct s_simulation_update_history_element const * c_simulation_world::get_simulation_update_history_element(long) const
//{
//    mangled_ppc("?get_simulation_update_history_element@c_simulation_world@@QBAPBUs_simulation_update_history_element@@J@Z");
//};

//public: bool c_simulation_world::get_simulation_update_history_range(struct s_simulation_update_range *) const
//{
//    mangled_ppc("?get_simulation_update_history_range@c_simulation_world@@QBA_NPAUs_simulation_update_range@@@Z");
//};

//public: void c_simulation_world::get_synchronous_halt_screen_status(struct s_simulation_synchronous_halt_screen_status *) const
//{
//    mangled_ppc("?get_synchronous_halt_screen_status@c_simulation_world@@QBAXPAUs_simulation_synchronous_halt_screen_status@@@Z");
//};

//public: void c_simulation_world::delete_all_players(void)
//{
//    mangled_ppc("?delete_all_players@c_simulation_world@@QAAXXZ");
//};

//public: long c_simulation_world::create_actor(long, long)
//{
//    mangled_ppc("?create_actor@c_simulation_world@@QAAJJJ@Z");
//};

//public: void c_simulation_world::delete_actor(long)
//{
//    mangled_ppc("?delete_actor@c_simulation_world@@QAAXJ@Z");
//};

//public: bool c_simulation_world::actor_exists(long) const
//{
//    mangled_ppc("?actor_exists@c_simulation_world@@QBA_NJ@Z");
//};

//private: void c_simulation_world::delete_all_actors(void)
//{
//    mangled_ppc("?delete_all_actors@c_simulation_world@@AAAXXZ");
//};

//public: void c_simulation_world::recreate_players(enum e_game_simulation_type)
//{
//    mangled_ppc("?recreate_players@c_simulation_world@@QAAXW4e_game_simulation_type@@@Z");
//};

//public: void c_simulation_world::handle_synchronous_client_actions(struct s_machine_identifier const *, unsigned long, class s_static_array<struct s_player_action, 4> const &, unsigned long)
//{
//    mangled_ppc("?handle_synchronous_client_actions@c_simulation_world@@QAAXPBUs_machine_identifier@@KABV?$s_static_array@Us_player_action@@$03@@K@Z");
//};

//public: void c_simulation_world::gamestate_flush(void)
//{
//    mangled_ppc("?gamestate_flush@c_simulation_world@@QAAXXZ");
//};

//private: bool c_simulation_world::update_queue_operation_allowed(void) const
//{
//    mangled_ppc("?update_queue_operation_allowed@c_simulation_world@@ABA_NXZ");
//};

//private: void c_simulation_world::update_queue_initialize(void)
//{
//    mangled_ppc("?update_queue_initialize@c_simulation_world@@AAAXXZ");
//};

//private: void c_simulation_world::update_queue_reset(void)
//{
//    mangled_ppc("?update_queue_reset@c_simulation_world@@AAAXXZ");
//};

//private: void c_simulation_world::update_queue_start(long, bool)
//{
//    mangled_ppc("?update_queue_start@c_simulation_world@@AAAXJ_N@Z");
//};

//private: void c_simulation_world::update_queue_stop(void)
//{
//    mangled_ppc("?update_queue_stop@c_simulation_world@@AAAXXZ");
//};

//private: long c_simulation_world::update_queue_get_length(void) const
//{
//    mangled_ppc("?update_queue_get_length@c_simulation_world@@ABAJXZ");
//};

//private: void c_simulation_world::update_queue_validate(void) const
//{
//    mangled_ppc("?update_queue_validate@c_simulation_world@@ABAXXZ");
//};

//private: bool c_simulation_world::update_queue_handle_server_update(struct simulation_update const *, struct s_simulation_update_metadata const *, unsigned long, bool *)
//{
//    mangled_ppc("?update_queue_handle_server_update@c_simulation_world@@AAA_NPBUsimulation_update@@PBUs_simulation_update_metadata@@KPA_N@Z");
//};

//private: bool c_simulation_world::update_queue_remove_update_shallow(struct simulation_update const *)
//{
//    mangled_ppc("?update_queue_remove_update_shallow@c_simulation_world@@AAA_NPBUsimulation_update@@@Z");
//};

//private: bool c_simulation_world::update_queue_handle_playback_event(enum e_simulation_playback_event, long, long, unsigned long)
//{
//    mangled_ppc("?update_queue_handle_playback_event@c_simulation_world@@AAA_NW4e_simulation_playback_event@@JJK@Z");
//};

//private: void c_simulation_world::update_queue_retrieve_update(struct simulation_update *, struct s_simulation_update_metadata *)
//{
//    mangled_ppc("?update_queue_retrieve_update@c_simulation_world@@AAAXPAUsimulation_update@@PAUs_simulation_update_metadata@@@Z");
//};

//private: bool c_simulation_world::update_queue_retrieve_event(enum e_simulation_playback_event *, long *, long *)
//{
//    mangled_ppc("?update_queue_retrieve_event@c_simulation_world@@AAA_NPAW4e_simulation_playback_event@@PAJ1@Z");
//};

//public: void c_simulation_world::update_queue_consume_immediatly(void)
//{
//    mangled_ppc("?update_queue_consume_immediatly@c_simulation_world@@QAAXXZ");
//};

//public: bool c_simulation_world::wants_all_updates_consumed(void)
//{
//    mangled_ppc("?wants_all_updates_consumed@c_simulation_world@@QAA_NXZ");
//};

//public: void c_simulation_world::notify_loading_in_progress(void)
//{
//    mangled_ppc("?notify_loading_in_progress@c_simulation_world@@QAAXXZ");
//};

//private: long c_simulation_world::update_queue_get_available_updates(void) const
//{
//    mangled_ppc("?update_queue_get_available_updates@c_simulation_world@@ABAJXZ");
//};

//private: long c_simulation_world::update_queue_get_next_expected_update_number(void) const
//{
//    mangled_ppc("?update_queue_get_next_expected_update_number@c_simulation_world@@ABAJXZ");
//};

//public: class c_simulation_view * c_simulation_world::get_view_by_index(long)
//{
//    mangled_ppc("?get_view_by_index@c_simulation_world@@QAAPAVc_simulation_view@@J@Z");
//};

//public: class c_simulation_view * c_simulation_world::get_authority_view(void) const
//{
//    mangled_ppc("?get_authority_view@c_simulation_world@@QBAPAVc_simulation_view@@XZ");
//};

//public: class c_simulation_view * c_simulation_world::get_client_view_by_machine_index(long)
//{
//    mangled_ppc("?get_client_view_by_machine_index@c_simulation_world@@QAAPAVc_simulation_view@@J@Z");
//};

//public: class c_simulation_view * c_simulation_world::get_client_view_by_machine_identifier(struct s_machine_identifier const *)
//{
//    mangled_ppc("?get_client_view_by_machine_identifier@c_simulation_world@@QAAPAVc_simulation_view@@PBUs_machine_identifier@@@Z");
//};

//public: class c_simulation_view * c_simulation_world::get_view_by_channel(class c_network_channel const *)
//{
//    mangled_ppc("?get_view_by_channel@c_simulation_world@@QAAPAVc_simulation_view@@PBVc_network_channel@@@Z");
//};

//public: class c_simulation_view * c_simulation_world::get_view_by_observer(long)
//{
//    mangled_ppc("?get_view_by_observer@c_simulation_world@@QAAPAVc_simulation_view@@J@Z");
//};

//public: long c_simulation_world::get_machine_index_by_identifier(struct s_machine_identifier const *) const
//{
//    mangled_ppc("?get_machine_index_by_identifier@c_simulation_world@@QBAJPBUs_machine_identifier@@@Z");
//};

//public: bool c_simulation_world::all_client_views_active(void) const
//{
//    mangled_ppc("?all_client_views_active@c_simulation_world@@QBA_NXZ");
//};

//public: bool c_simulation_world::relinquish_authority(void)
//{
//    mangled_ppc("?relinquish_authority@c_simulation_world@@QAA_NXZ");
//};

//public: bool c_simulation_world::claim_authority(void)
//{
//    mangled_ppc("?claim_authority@c_simulation_world@@QAA_NXZ");
//};

//public: s_game_statborg_game_results_snapshot::s_game_statborg_game_results_snapshot(void)
//{
//    mangled_ppc("??0s_game_statborg_game_results_snapshot@@QAA@XZ");
//};

//public: void c_simulation_world::claim_authority_gameworld(struct s_game_results_game_engine_snapshot *, struct s_game_statborg_game_results_snapshot const *, bool)
//{
//    mangled_ppc("?claim_authority_gameworld@c_simulation_world@@QAAXPAUs_game_results_game_engine_snapshot@@PBUs_game_statborg_game_results_snapshot@@_N@Z");
//};

//public: void c_simulation_world::disconnect(void)
//{
//    mangled_ppc("?disconnect@c_simulation_world@@QAAXXZ");
//};

//public: void c_simulation_world::handle_view_establishment(class c_simulation_view const *, bool)
//{
//    mangled_ppc("?handle_view_establishment@c_simulation_world@@QAAXPBVc_simulation_view@@_N@Z");
//};

//public: void c_simulation_world::handle_view_activation(class c_simulation_view const *, bool)
//{
//    mangled_ppc("?handle_view_activation@c_simulation_world@@QAAXPBVc_simulation_view@@_N@Z");
//};

//public: void c_simulation_world::change_state_internal(enum e_simulation_world_state)
//{
//    mangled_ppc("?change_state_internal@c_simulation_world@@QAAXW4e_simulation_world_state@@@Z");
//};

//public: void c_simulation_world::change_state_joining(class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?change_state_joining@c_simulation_world@@QAAXV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_simulation_world::change_state_active(void)
//{
//    mangled_ppc("?change_state_active@c_simulation_world@@QAAXXZ");
//};

//public: void c_simulation_world::change_state_disconnected(void)
//{
//    mangled_ppc("?change_state_disconnected@c_simulation_world@@QAAXXZ");
//};

//public: void c_simulation_world::change_state_dead(void)
//{
//    mangled_ppc("?change_state_dead@c_simulation_world@@QAAXXZ");
//};

//public: void c_simulation_world::change_state_handoff(void)
//{
//    mangled_ppc("?change_state_handoff@c_simulation_world@@QAAXXZ");
//};

//public: void c_simulation_world::change_state_leaving(void)
//{
//    mangled_ppc("?change_state_leaving@c_simulation_world@@QAAXXZ");
//};

//public: static char const * c_simulation_world::get_type_string(long)
//{
//    mangled_ppc("?get_type_string@c_simulation_world@@SAPBDJ@Z");
//};

//public: static char const * c_simulation_world::get_state_string(long)
//{
//    mangled_ppc("?get_state_string@c_simulation_world@@SAPBDJ@Z");
//};

//public: bool c_simulation_world::get_failure_status(long *, long *) const
//{
//    mangled_ppc("?get_failure_status@c_simulation_world@@QBA_NPAJ0@Z");
//};

//public: void c_simulation_world::get_join_status(long *, long *, long *, long *, long *, long *, long *, long *, long *, long *) const
//{
//    mangled_ppc("?get_join_status@c_simulation_world@@QBAXPAJ000000000@Z");
//};

//public: void c_simulation_world::get_disconnected_status(long *, long *) const
//{
//    mangled_ppc("?get_disconnected_status@c_simulation_world@@QBAXPAJ0@Z");
//};

//public: void c_simulation_world::get_update_queue_status(long *, long *) const
//{
//    mangled_ppc("?get_update_queue_status@c_simulation_world@@QBAXPAJ0@Z");
//};

//public: class c_network_time_statistics * c_simulation_world::get_local_input_processing_statistics(void)
//{
//    mangled_ppc("?get_local_input_processing_statistics@c_simulation_world@@QAAPAVc_network_time_statistics@@XZ");
//};

//public: class c_network_time_statistics * c_simulation_world::get_update_queue_length_statistics(long)
//{
//    mangled_ppc("?get_update_queue_length_statistics@c_simulation_world@@QAAPAVc_network_time_statistics@@J@Z");
//};

//public: long c_simulation_world::get_local_update_queue_length(void)
//{
//    mangled_ppc("?get_local_update_queue_length@c_simulation_world@@QAAJXZ");
//};

//public: class c_network_time_variance_statistics * c_simulation_world::get_synchronous_client_input_delay_statistics(void)
//{
//    mangled_ppc("?get_synchronous_client_input_delay_statistics@c_simulation_world@@QAAPAVc_network_time_variance_statistics@@XZ");
//};

//public: class c_network_time_statistics * c_simulation_world::get_synchronous_action_send_delay_statistics(void)
//{
//    mangled_ppc("?get_synchronous_action_send_delay_statistics@c_simulation_world@@QAAPAVc_network_time_statistics@@XZ");
//};

//public: void c_simulation_world::notify_synchronous_action_send_delay(long)
//{
//    mangled_ppc("?notify_synchronous_action_send_delay@c_simulation_world@@QAAXJ@Z");
//};

//public: class c_network_time_statistics * c_simulation_world::get_host_input_use_delay_statistics(void)
//{
//    mangled_ppc("?get_host_input_use_delay_statistics@c_simulation_world@@QAAPAVc_network_time_statistics@@XZ");
//};

//public: class c_network_time_statistics * c_simulation_world::get_host_update_send_delay_statistics(void)
//{
//    mangled_ppc("?get_host_update_send_delay_statistics@c_simulation_world@@QAAPAVc_network_time_statistics@@XZ");
//};

//public: class c_network_time_variance_statistics * c_simulation_world::get_update_queue_delays_statistics(void)
//{
//    mangled_ppc("?get_update_queue_delays_statistics@c_simulation_world@@QAAPAVc_network_time_variance_statistics@@XZ");
//};

//public: void c_simulation_world::debug_render(void)
//{
//    mangled_ppc("?debug_render@c_simulation_world@@QAAXXZ");
//};

//private: static bool c_simulation_world::apply_simulation_queue_element(class c_simulation_queue_element const *)
//{
//    mangled_ppc("?apply_simulation_queue_element@c_simulation_world@@CA_NPBVc_simulation_queue_element@@@Z");
//};

//public: static void c_simulation_world::apply_simulation_queue(class c_simulation_queue const *)
//{
//    mangled_ppc("?apply_simulation_queue@c_simulation_world@@SAXPBVc_simulation_queue@@@Z");
//};

//private: static void c_simulation_world::apply_simulation_queue_array_internal(class c_simulation_queue_array const *, bool)
//{
//    mangled_ppc("?apply_simulation_queue_array_internal@c_simulation_world@@CAXPBVc_simulation_queue_array@@_N@Z");
//};

//public: static void c_simulation_world::apply_simulation_queue_array(class c_simulation_queue_array const *)
//{
//    mangled_ppc("?apply_simulation_queue_array@c_simulation_world@@SAXPBVc_simulation_queue_array@@@Z");
//};

//public: static void c_simulation_world::apply_simulation_queue_array_remaining(class c_simulation_queue_array const *)
//{
//    mangled_ppc("?apply_simulation_queue_array_remaining@c_simulation_world@@SAXPBVc_simulation_queue_array@@@Z");
//};

//public: static void c_simulation_world::apply_simulation_queue_array_by_type(class c_simulation_queue_array const *, class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?apply_simulation_queue_array_by_type@c_simulation_world@@SAXPBVc_simulation_queue_array@@V?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: static void c_simulation_world::apply_simulation_queue_array_by_type_exempting_sort_key0_mask(class c_simulation_queue_array const *, class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>, class c_big_flags<256> const *)
//{
//    mangled_ppc("?apply_simulation_queue_array_by_type_exempting_sort_key0_mask@c_simulation_world@@SAXPBVc_simulation_queue_array@@V?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@PBV?$c_big_flags@$0BAA@@@@Z");
//};

//public: static void c_simulation_world::apply_simulation_queue_array_by_type_and_sort_key0_mask(class c_simulation_queue_array const *, class c_enum<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>, class c_big_flags<256> const *)
//{
//    mangled_ppc("?apply_simulation_queue_array_by_type_and_sort_key0_mask@c_simulation_world@@SAXPBVc_simulation_queue_array@@V?$c_enum@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@PBV?$c_big_flags@$0BAA@@@@Z");
//};

//public: static bool c_simulation_world::simulation_queue_array_has_been_fully_applied(class c_simulation_queue_array const *)
//{
//    mangled_ppc("?simulation_queue_array_has_been_fully_applied@c_simulation_world@@SA_NPBVc_simulation_queue_array@@@Z");
//};

//public: bool c_simulation_world::simulation_queues_empty(void) const
//{
//    mangled_ppc("?simulation_queues_empty@c_simulation_world@@QBA_NXZ");
//};

//public: void c_simulation_world::simulation_queue_allocate(enum e_simulation_queue_element_type, long, class c_simulation_queue_element **)
//{
//    mangled_ppc("?simulation_queue_allocate@c_simulation_world@@QAAXW4e_simulation_queue_element_type@@JPAPAVc_simulation_queue_element@@@Z");
//};

//public: void c_simulation_world::simulation_queue_free(class c_simulation_queue_element *)
//{
//    mangled_ppc("?simulation_queue_free@c_simulation_world@@QAAXPAVc_simulation_queue_element@@@Z");
//};

//public: void c_simulation_world::simulation_queue_enqueue(class c_simulation_queue_element *)
//{
//    mangled_ppc("?simulation_queue_enqueue@c_simulation_world@@QAAXPAVc_simulation_queue_element@@@Z");
//};

//public: void c_simulation_world::simulation_queue_handle_queue_element_message(struct s_network_message_update_queue_element const *, unsigned char *, long)
//{
//    mangled_ppc("?simulation_queue_handle_queue_element_message@c_simulation_world@@QAAXPBUs_network_message_update_queue_element@@PAEJ@Z");
//};

//public: void c_simulation_world::simulation_queue_dispatch_queue_element_message(enum e_simulation_queue_element_type, unsigned char const *, long)
//{
//    mangled_ppc("?simulation_queue_dispatch_queue_element_message@c_simulation_world@@QAAXW4e_simulation_queue_element_type@@PBEJ@Z");
//};

//private: void c_simulation_world::attach_simulation_queues_to_update(struct simulation_update *)
//{
//    mangled_ppc("?attach_simulation_queues_to_update@c_simulation_world@@AAAXPAUsimulation_update@@@Z");
//};

//public: void c_simulation_update_history::initialize(void)
//{
//    mangled_ppc("?initialize@c_simulation_update_history@@QAAXXZ");
//};

//public: void c_simulation_update_history::destroy(void)
//{
//    mangled_ppc("?destroy@c_simulation_update_history@@QAAXXZ");
//};

//public: bool c_simulation_update_history::add_update(struct simulation_update const *)
//{
//    mangled_ppc("?add_update@c_simulation_update_history@@QAA_NPBUsimulation_update@@@Z");
//};

//public: void s_simulation_update_history_element::initialize(void)
//{
//    mangled_ppc("?initialize@s_simulation_update_history_element@@QAAXXZ");
//};

//public: bool s_simulation_update_history_element::valid(void) const
//{
//    mangled_ppc("?valid@s_simulation_update_history_element@@QBA_NXZ");
//};

//public: void c_simulation_update_history::get_range(struct s_simulation_update_range *) const
//{
//    mangled_ppc("?get_range@c_simulation_update_history@@QBAXPAUs_simulation_update_range@@@Z");
//};

//public: struct s_simulation_update_history_element const * c_simulation_update_history::get_element(long) const
//{
//    mangled_ppc("?get_element@c_simulation_update_history@@QBAPBUs_simulation_update_history_element@@J@Z");
//};

//private: void c_simulation_update_history::free_history_element(struct s_simulation_update_history_element *)
//{
//    mangled_ppc("?free_history_element@c_simulation_update_history@@AAAXPAUs_simulation_update_history_element@@@Z");
//};

//bool simulation_update_encode_into_new_allocated_buffer(struct simulation_update const *, unsigned char **, long *, enum e_network_game_memory_block_type, bool)
//{
//    mangled_ppc("?simulation_update_encode_into_new_allocated_buffer@@YA_NPBUsimulation_update@@PAPAEPAJW4e_network_game_memory_block_type@@_N@Z");
//};

//void simulation_update_free_allocated_buffer(unsigned char *, enum e_network_game_memory_block_type)
//{
//    mangled_ppc("?simulation_update_free_allocated_buffer@@YAXPAEW4e_network_game_memory_block_type@@@Z");
//};

//bool simulation_update_decode_and_free_allocated_buffer(unsigned char *, long, struct simulation_update *, enum e_network_game_memory_block_type, bool)
//{
//    mangled_ppc("?simulation_update_decode_and_free_allocated_buffer@@YA_NPAEJPAUsimulation_update@@W4e_network_game_memory_block_type@@_N@Z");
//};

//public: struct player_datum * c_data_iterator<struct player_datum>::get_datum(void) const
//{
//    mangled_ppc("?get_datum@?$c_data_iterator@Uplayer_datum@@@@QBAPAUplayer_datum@@XZ");
//};

//public: c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>(unsigned long)
//{
//    mangled_ppc("??0?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@QAA@K@Z");
//};

//public: c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??0?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@QAA@V?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> & c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator=(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??4?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@QAAAAV0@ABV?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_simulation_queue_element_type c_enum_no_init<enum e_simulation_queue_element_type, char, 0, 16, struct s_default_enum_string_resolver>::operator enum e_simulation_queue_element_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_simulation_queue_element_type@@D$0A@$0BA@Us_default_enum_string_resolver@@@@QBA?AW4e_simulation_queue_element_type@@XZ");
//};

//public: struct s_simulation_update_history_element const & t_static_ring_buffer<struct s_simulation_update_history_element, 64>::get_element(long) const
//{
//    mangled_ppc("?get_element@?$t_static_ring_buffer@Us_simulation_update_history_element@@$0EA@@@QBAABUs_simulation_update_history_element@@J@Z");
//};

//public: struct s_simulation_update_history_element & t_static_ring_buffer<struct s_simulation_update_history_element, 64>::get_element(long)
//{
//    mangled_ppc("?get_element@?$t_static_ring_buffer@Us_simulation_update_history_element@@$0EA@@@QAAAAUs_simulation_update_history_element@@J@Z");
//};

//public: static long s_static_array<class c_network_time_statistics, 16>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_network_time_statistics@@$0BA@@@SAJXZ");
//};

//public: c_flags<long, unsigned long, 15, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 15, struct s_default_enum_string_resolver>(unsigned long)
//{
//    mangled_ppc("??0?$c_flags@JK$0P@Us_default_enum_string_resolver@@@@QAA@K@Z");
//};

//public: bool c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::test(enum e_network_banhammer_ban_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_banhammer_ban_flags@@G$0BA@Us_default_enum_string_resolver@@@@QBA_NW4e_network_banhammer_ban_flags@@@Z");
//};

//public: long c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator~(void) const
//{
//    mangled_ppc("??S?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QBA?AV0@XZ");
//};

//public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??I?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> & c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator&=(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_4?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> & c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_5?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: bool c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_simulation_queue_element_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_simulation_queue_element_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_simulation_queue_element_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_simulation_update_high_level_flags, unsigned short, 5, struct s_default_enum_string_resolver>::set(enum e_simulation_update_high_level_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_simulation_update_high_level_flags@@G$04Us_default_enum_string_resolver@@@@QAAXW4e_simulation_update_high_level_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_simulation_update_metadata_flags, unsigned short, 3, struct s_default_enum_string_resolver>::test(enum e_simulation_update_metadata_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_simulation_update_metadata_flags@@G$02Us_default_enum_string_resolver@@@@QBA_NW4e_simulation_update_metadata_flags@@@Z");
//};

//void prefetch<struct s_player_motion>(struct s_player_motion const *)
//{
//    mangled_ppc("??$prefetch@Us_player_motion@@@@YAXPBUs_player_motion@@@Z");
//};

//void prefetch_block(void const *, long)
//{
//    mangled_ppc("?prefetch_block@@YAXPBXJ@Z");
//};

//public: bool c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum c_simulation_update_history::e_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flags@c_simulation_update_history@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_flags@c_simulation_update_history@@@Z");
//};

//public: void c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum c_simulation_update_history::e_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_flags@c_simulation_update_history@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_flags@c_simulation_update_history@@_N@Z");
//};

//public: c_flags<long, unsigned short, 16, struct s_default_enum_string_resolver>::c_flags<long, unsigned short, 16, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@JG$0BA@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: class c_network_time_statistics & s_static_array<class c_network_time_statistics, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_network_time_statistics@@$0BA@@@QAAAAVc_network_time_statistics@@J@Z");
//};

//public: struct s_player_action const & s_static_array<struct s_player_action, 4>::operator[]<enum e_input_user_index>(enum e_input_user_index) const
//{
//    mangled_ppc("??$?AW4e_input_user_index@@@?$s_static_array@Us_player_action@@$03@@QBAABUs_player_action@@W4e_input_user_index@@@Z");
//};

//bool operator!=<enum e_output_user_index>(enum e_output_user_index const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9W4e_output_user_index@@@@YA_NABW4e_output_user_index@@ABW4e_none_sentinel@@@Z");
//};

//public: void c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@JK$0P@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::test(long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@JK$0P@Us_default_enum_string_resolver@@@@QBA_NJ@Z");
//};

//public: void c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@JK$0P@Us_default_enum_string_resolver@@@@QAAXJ_N@Z");
//};

//public: class c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver> & c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_5?$c_flags_no_init@JK$0P@Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: void c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@JK$0P@Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//public: class c_static_string<1024> c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_flags_no_init@JK$0P@Us_default_enum_string_resolver@@@@QBA?AV?$c_static_string@$0EAA@@@XZ");
//};

//public: char const * s_static_string<1024>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0EAA@@@QBAPBDXZ");
//};

//public: long const & s_static_array<long, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0BA@@@QBAABJJ@Z");
//};

//public: static bool c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::valid_bit(enum e_network_banhammer_ban_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_banhammer_ban_flags@@G$0BA@Us_default_enum_string_resolver@@@@SA_NW4e_network_banhammer_ban_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_banhammer_ban_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_banhammer_ban_flags@@G$0BA@Us_default_enum_string_resolver@@@@CAGW4e_network_banhammer_ban_flags@@@Z");
//};

//public: void s_static_string<64>::replace(char, char)
//{
//    mangled_ppc("?replace@?$s_static_string@$0EA@@@QAAXDD@Z");
//};

//public: char const * s_static_string<64>::operator char const *(void) const
//{
//    mangled_ppc("??B?$s_static_string@$0EA@@@QBAPBDXZ");
//};

//public: static bool c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_simulation_queue_element_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_simulation_queue_element_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_simulation_queue_element_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_simulation_queue_element_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_simulation_queue_element_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_simulation_queue_element_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_simulation_queue_element_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum c_simulation_update_history::e_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flags@c_simulation_update_history@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_flags@c_simulation_update_history@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum c_simulation_update_history::e_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flags@c_simulation_update_history@@E$00Us_default_enum_string_resolver@@@@CAEW4e_flags@c_simulation_update_history@@@Z");
//};

//public: void c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@JG$0BA@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@JG$0BA@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool s_static_array<class c_network_time_statistics, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_network_time_statistics@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_player_action, 4>::valid<enum e_input_user_index>(enum e_input_user_index)
//{
//    mangled_ppc("??$valid@W4e_input_user_index@@@?$s_static_array@Us_player_action@@$03@@SA_NW4e_input_user_index@@@Z");
//};

//public: static bool c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@JK$0P@Us_default_enum_string_resolver@@@@SA_NJ@Z");
//};

//public: bool c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@JK$0P@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned long c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::flag_size_type(long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@JK$0P@Us_default_enum_string_resolver@@@@CAKJ@Z");
//};

//public: c_static_string<1024>::c_static_string<1024>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0EAA@@@QAA@XZ");
//};

//public: void s_static_string<1024>::set(char const *)
//{
//    mangled_ppc("?set@?$s_static_string@$0EAA@@@QAAXPBD@Z");
//};

//public: char const * s_static_string<1024>::append(char const *)
//{
//    mangled_ppc("?append@?$s_static_string@$0EAA@@@QAAPBDPBD@Z");
//};

//private: static unsigned short c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@JG$0BA@Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned long c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@JK$0P@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//public: void s_static_string<1024>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0EAA@@@QAAXXZ");
//};

//private: static unsigned short c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@JG$0BA@Us_default_enum_string_resolver@@@@CAGJ@Z");
//};

//private: static unsigned long c_flags_no_init<long, unsigned long, 15, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@JK$0P@Us_default_enum_string_resolver@@@@CAKJ@Z");
//};

//public: static void s_default_enum_string_resolver::to_string(long, class c_static_string<64> *)
//{
//    mangled_ppc("?to_string@s_default_enum_string_resolver@@SAXJPAV?$c_static_string@$0EA@@@@Z");
//};

//enum e_input_user_index first_input_user(void)
//{
//    mangled_ppc("?first_input_user@@YA?AW4e_input_user_index@@XZ");
//};

//enum e_input_user_index next_input_user(enum e_input_user_index)
//{
//    mangled_ppc("?next_input_user@@YA?AW4e_input_user_index@@W41@@Z");
//};

//public: char const * s_static_string<64>::print(char const *, ...)
//{
//    mangled_ppc("?print@?$s_static_string@$0EA@@@QAAPBDPBDZZ");
//};

