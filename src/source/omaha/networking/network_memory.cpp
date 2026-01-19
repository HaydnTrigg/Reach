/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **k_network_memory_block_names; // "?k_network_memory_block_names@@3PAPBDA"
// struct s_network_base_memory_globals network_base_memory_globals; // "?network_base_memory_globals@@3Us_network_base_memory_globals@@A"
// struct s_network_shared_memory_globals network_shared_memory_globals; // "?network_shared_memory_globals@@3Us_network_shared_memory_globals@@A"

// bool network_memory_base_initialize(class c_network_link **, class c_network_message_type_collection **, class c_network_message_gateway **, class c_network_message_handler **, class c_network_channel_manager **, class c_network_session **, class c_network_session_manager **, class c_network_session_parameter_type_collection **);
// void network_memory_base_dispose(void);
// bool network_memory_simulation_initialize(class c_simulation_world **, class c_simulation_watcher **, class c_simulation_type_collection **);
// void network_memory_simulation_dispose(void);
// void network_memory_shared_initialize(enum e_map_memory_configuration);
// public: static void * c_simulation_distributed_world::operator new(unsigned int, void *);
// public: c_simulation_distributed_world::c_simulation_distributed_world(void);
// public: c_simulation_event_handler::c_simulation_event_handler(void);
// public: c_simulation_entity_database::c_simulation_entity_database(void);
// public: s_simulation_entity::s_simulation_entity(void);
// void network_memory_shared_dispose(void);
// public: void * c_simulation_distributed_world::`scalar deleting destructor'(unsigned int);
// public: c_simulation_distributed_world::~c_simulation_distributed_world(void);
// public: c_simulation_event_handler::~c_simulation_event_handler(void);
// public: c_simulation_entity_database::~c_simulation_entity_database(void);
// void network_memory_verify(void);
// void network_memory_track_physical_allocation(long, void *);
// long network_memory_get_size(void);
// void network_memory_get_address_range(void **, void **);
// class c_network_channel * network_channel_iterate(class c_network_channel const *);
// class c_simulation_distributed_world * network_allocate_simulation_distributed_world(void);
// long network_memory_allocate_simulation_view(class c_simulation_view **, class c_simulation_distributed_view **);
// public: static void * c_simulation_view::operator new(unsigned int, void *);
// public: static void * c_simulation_distributed_view::operator new(unsigned int, void *);
// public: c_simulation_view::c_simulation_view(void);
// public: c_network_channel_simulation_interface::c_network_channel_simulation_interface(void);
// public: c_simulation_view_synchronous_catchup_manager::c_simulation_view_synchronous_catchup_manager(void);
// public: c_simulation_distributed_view::c_simulation_distributed_view(void);
// public: c_replication_scheduler::c_replication_scheduler(void);
// public: c_network_channel_client::c_network_channel_client(void);
// public: c_replication_scheduler_quality_tracker::c_replication_scheduler_quality_tracker(void);
// public: virtual char const * c_replication_scheduler::get_client_name(void) const;
// public: virtual bool c_replication_scheduler::connection_lost(enum e_network_channel_closure_reason *) const;
// public: c_replication_entity_manager_view::c_replication_entity_manager_view(void);
// public: c_replication_scheduler_client::c_replication_scheduler_client(void);
// public: s_replication_entity_view_data::s_replication_entity_view_data(void);
// public: c_replication_event_manager_view::c_replication_event_manager_view(void);
// public: c_replication_control_view::c_replication_control_view(void);
// public: s_player_motion::s_player_motion(void);
// public: virtual long c_replication_control_view::terminator_required_bits(void) const;
// public: c_game_results_replicator::c_game_results_replicator(void);
// public: s_game_results_incremental::s_game_results_incremental(void);
// public: s_game_results_player_data::s_game_results_player_data(void);
// public: s_game_results_machine_data::s_game_results_machine_data(void);
// void network_memory_delete_simulation_view(class c_simulation_view *);
// public: long c_simulation_view::view_datum_index(void) const;
// public: void * c_simulation_view::`scalar deleting destructor'(unsigned int);
// public: c_simulation_view::~c_simulation_view(void);
// public: c_network_channel_simulation_interface::~c_network_channel_simulation_interface(void);
// public: void * c_simulation_distributed_view::`scalar deleting destructor'(unsigned int);
// public: c_simulation_distributed_view::~c_simulation_distributed_view(void);
// public: c_replication_scheduler::~c_replication_scheduler(void);
// public: c_replication_scheduler_quality_tracker::~c_replication_scheduler_quality_tracker(void);
// public: c_replication_entity_manager_view::~c_replication_entity_manager_view(void);
// public: c_replication_event_manager_view::~c_replication_event_manager_view(void);
// public: c_replication_control_view::~c_replication_control_view(void);
// void * network_heap_allocate_block(char const *, long, long, long);
// void network_heap_free_block(char const *, long, long, void *);
// void network_heap_verify_block(char const *, long, long, void const *);
// void network_heap_get_status(long *, long *, long *, long *, float *, float *);
// char * network_heap_describe(char *, long);
// class c_fixed_memory_rockall_heap * get_networking_rockall_heap(void);
// public: c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>(void);
// public: t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_packet_quality_sample, 60>::t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_packet_quality_sample, 60>(void);
// public: t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_packet_quality_sample, 60>::~t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_packet_quality_sample, 60>(void);
// public: c_ring_buffer::~c_ring_buffer(void);
// public: t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_second_quality_sample, 30>::t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_second_quality_sample, 30>(void);
// public: t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_second_quality_sample, 30>::~t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_second_quality_sample, 30>(void);
// public: c_enum<enum e_replication_entity_view_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_replication_entity_view_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_weapon_set_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_weapon_set_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::c_flags<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_simulation_entity_flag, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_simulation_entity_flag, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>(void);
// void track_delete_internal<class c_fixed_memory_rockall_heap>(char const *, long, class c_fixed_memory_rockall_heap *);
// public: void c_flags_no_init<enum e_weapon_set_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_weapon_set_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_simulation_entity_flag, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const;
// void destruct_in_place<class c_fixed_memory_rockall_heap>(class c_fixed_memory_rockall_heap *);
// public: void * c_fixed_memory_rockall_heap::`scalar deleting destructor'(unsigned int);
// public: c_fixed_memory_rockall_heap::~c_fixed_memory_rockall_heap(void);
// private: static unsigned char c_flags_no_init<enum e_weapon_set_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned short c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_simulation_entity_flag, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_weapon_set_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_weapon_set_flags);
// private: static unsigned short c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_replication_entity_view_data_entity_flags);
// private: static unsigned char c_flags_no_init<enum e_simulation_entity_flag, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_simulation_entity_flag);
// private: static unsigned char c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_simulation_view_synchronous_catchup_manager::e_flags);
// public: s_network_base_memory_globals::s_network_base_memory_globals(void);
// public: c_network_link::c_network_link(void);
// public: c_network_session::c_network_session(void);
// public: void c_network_session::c_speculative_host_migration_probation::initialize(class c_network_session *);
// public: c_network_channel_owner::c_network_channel_owner(void);
// public: virtual long c_network_channel_owner::get_player_count(void) const;
// public: virtual bool c_network_channel_owner::channel_connects_to_tracked_peer(long) const;
// public: c_network_session_membership::c_network_session_membership(void);
// public: s_network_session_shared_membership::s_network_session_shared_membership(void);
// public: s_player_add_queue_entry::s_player_add_queue_entry(void);
// public: s_network_session_peer::s_network_session_peer(void);
// public: s_network_session_player::s_network_session_player(void);
// public: s_network_session_peer_properties::s_network_session_peer_properties(void);
// public: s_network_session_peer_connectivity::s_network_session_peer_connectivity(void);
// public: s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>(void);
// public: c_network_message_gateway::c_network_message_gateway(void);
// public: c_network_out_of_band_consumer::c_network_out_of_band_consumer(void);
// public: c_network_message_handler::c_network_message_handler(void);
// public: c_simulation_world::c_simulation_world(void);
// public: c_simulation_player::c_simulation_player(void);
// public: c_simulation_actor::c_simulation_actor(void);
// public: c_simulation_update_history::c_simulation_update_history(void);
// public: s_static_array<class c_network_time_statistics, 16>::s_static_array<class c_network_time_statistics, 16>(void);
// public: c_network_time_variance_statistics::c_network_time_variance_statistics(void);
// public: c_simulation_watcher::c_simulation_watcher(void);
// public: s_player_collection::s_player_collection(void);
// public: s_player_collection_player::s_player_collection_player(void);
// public: c_simulation_type_collection::c_simulation_type_collection(void);
// public: c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>::c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>(void);
// public: t_static_ring_buffer<struct s_simulation_update_history_element, 64>::t_static_ring_buffer<struct s_simulation_update_history_element, 64>(void);
// public: c_flags<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::c_flags<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned long c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_session_peer_properties_status_flags);
// private: static unsigned char c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_simulation_update_history::e_flags);
// public: s_network_shared_memory_globals::s_network_shared_memory_globals(void);
// public: s_network_memory_status::s_network_memory_status(void);
// public: s_network_base_memory_globals::~s_network_base_memory_globals(void);
// public: c_network_link::~c_network_link(void);
// public: c_network_session::~c_network_session(void);
// public: c_network_message_gateway::~c_network_message_gateway(void);
// public: c_network_message_handler::~c_network_message_handler(void);
// public: c_simulation_world::~c_simulation_world(void);
// public: c_simulation_player::~c_simulation_player(void);
// public: c_simulation_actor::~c_simulation_actor(void);
// public: c_simulation_update_history::~c_simulation_update_history(void);
// public: s_static_array<class c_network_time_statistics, 16>::~s_static_array<class c_network_time_statistics, 16>(void);
// public: c_network_time_variance_statistics::~c_network_time_variance_statistics(void);
// public: c_simulation_watcher::~c_simulation_watcher(void);
// public: c_simulation_type_collection::~c_simulation_type_collection(void);
// public: t_static_ring_buffer<struct s_simulation_update_history_element, 64>::~t_static_ring_buffer<struct s_simulation_update_history_element, 64>(void);
// public: s_network_shared_memory_globals::~s_network_shared_memory_globals(void);
// public: s_network_memory_status::~s_network_memory_status(void);
// void network_base_memory_globals::`dynamic atexit destructor'(void);
// void network_shared_memory_globals::`dynamic atexit destructor'(void);

//bool network_memory_base_initialize(class c_network_link **, class c_network_message_type_collection **, class c_network_message_gateway **, class c_network_message_handler **, class c_network_channel_manager **, class c_network_session **, class c_network_session_manager **, class c_network_session_parameter_type_collection **)
//{
//    mangled_ppc("?network_memory_base_initialize@@YA_NPAPAVc_network_link@@PAPAVc_network_message_type_collection@@PAPAVc_network_message_gateway@@PAPAVc_network_message_handler@@PAPAVc_network_channel_manager@@PAPAVc_network_session@@PAPAVc_network_session_manager@@PAPAVc_network_session_parameter_type_collection@@@Z");
//};

//void network_memory_base_dispose(void)
//{
//    mangled_ppc("?network_memory_base_dispose@@YAXXZ");
//};

//bool network_memory_simulation_initialize(class c_simulation_world **, class c_simulation_watcher **, class c_simulation_type_collection **)
//{
//    mangled_ppc("?network_memory_simulation_initialize@@YA_NPAPAVc_simulation_world@@PAPAVc_simulation_watcher@@PAPAVc_simulation_type_collection@@@Z");
//};

//void network_memory_simulation_dispose(void)
//{
//    mangled_ppc("?network_memory_simulation_dispose@@YAXXZ");
//};

//void network_memory_shared_initialize(enum e_map_memory_configuration)
//{
//    mangled_ppc("?network_memory_shared_initialize@@YAXW4e_map_memory_configuration@@@Z");
//};

//public: static void * c_simulation_distributed_world::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2c_simulation_distributed_world@@SAPAXIPAX@Z");
//};

//public: c_simulation_distributed_world::c_simulation_distributed_world(void)
//{
//    mangled_ppc("??0c_simulation_distributed_world@@QAA@XZ");
//};

//public: c_simulation_event_handler::c_simulation_event_handler(void)
//{
//    mangled_ppc("??0c_simulation_event_handler@@QAA@XZ");
//};

//public: c_simulation_entity_database::c_simulation_entity_database(void)
//{
//    mangled_ppc("??0c_simulation_entity_database@@QAA@XZ");
//};

//public: s_simulation_entity::s_simulation_entity(void)
//{
//    mangled_ppc("??0s_simulation_entity@@QAA@XZ");
//};

//void network_memory_shared_dispose(void)
//{
//    mangled_ppc("?network_memory_shared_dispose@@YAXXZ");
//};

//public: void * c_simulation_distributed_world::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_simulation_distributed_world@@QAAPAXI@Z");
//};

//public: c_simulation_distributed_world::~c_simulation_distributed_world(void)
//{
//    mangled_ppc("??1c_simulation_distributed_world@@QAA@XZ");
//};

//public: c_simulation_event_handler::~c_simulation_event_handler(void)
//{
//    mangled_ppc("??1c_simulation_event_handler@@QAA@XZ");
//};

//public: c_simulation_entity_database::~c_simulation_entity_database(void)
//{
//    mangled_ppc("??1c_simulation_entity_database@@QAA@XZ");
//};

//void network_memory_verify(void)
//{
//    mangled_ppc("?network_memory_verify@@YAXXZ");
//};

//void network_memory_track_physical_allocation(long, void *)
//{
//    mangled_ppc("?network_memory_track_physical_allocation@@YAXJPAX@Z");
//};

//long network_memory_get_size(void)
//{
//    mangled_ppc("?network_memory_get_size@@YAJXZ");
//};

//void network_memory_get_address_range(void **, void **)
//{
//    mangled_ppc("?network_memory_get_address_range@@YAXPAPAX0@Z");
//};

//class c_network_channel * network_channel_iterate(class c_network_channel const *)
//{
//    mangled_ppc("?network_channel_iterate@@YAPAVc_network_channel@@PBV1@@Z");
//};

//class c_simulation_distributed_world * network_allocate_simulation_distributed_world(void)
//{
//    mangled_ppc("?network_allocate_simulation_distributed_world@@YAPAVc_simulation_distributed_world@@XZ");
//};

//long network_memory_allocate_simulation_view(class c_simulation_view **, class c_simulation_distributed_view **)
//{
//    mangled_ppc("?network_memory_allocate_simulation_view@@YAJPAPAVc_simulation_view@@PAPAVc_simulation_distributed_view@@@Z");
//};

//public: static void * c_simulation_view::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2c_simulation_view@@SAPAXIPAX@Z");
//};

//public: static void * c_simulation_distributed_view::operator new(unsigned int, void *)
//{
//    mangled_ppc("??2c_simulation_distributed_view@@SAPAXIPAX@Z");
//};

//public: c_simulation_view::c_simulation_view(void)
//{
//    mangled_ppc("??0c_simulation_view@@QAA@XZ");
//};

//public: c_network_channel_simulation_interface::c_network_channel_simulation_interface(void)
//{
//    mangled_ppc("??0c_network_channel_simulation_interface@@QAA@XZ");
//};

//public: c_simulation_view_synchronous_catchup_manager::c_simulation_view_synchronous_catchup_manager(void)
//{
//    mangled_ppc("??0c_simulation_view_synchronous_catchup_manager@@QAA@XZ");
//};

//public: c_simulation_distributed_view::c_simulation_distributed_view(void)
//{
//    mangled_ppc("??0c_simulation_distributed_view@@QAA@XZ");
//};

//public: c_replication_scheduler::c_replication_scheduler(void)
//{
//    mangled_ppc("??0c_replication_scheduler@@QAA@XZ");
//};

//public: c_network_channel_client::c_network_channel_client(void)
//{
//    mangled_ppc("??0c_network_channel_client@@QAA@XZ");
//};

//public: c_replication_scheduler_quality_tracker::c_replication_scheduler_quality_tracker(void)
//{
//    mangled_ppc("??0c_replication_scheduler_quality_tracker@@QAA@XZ");
//};

//public: virtual char const * c_replication_scheduler::get_client_name(void) const
//{
//    mangled_ppc("?get_client_name@c_replication_scheduler@@UBAPBDXZ");
//};

//public: virtual bool c_replication_scheduler::connection_lost(enum e_network_channel_closure_reason *) const
//{
//    mangled_ppc("?connection_lost@c_replication_scheduler@@UBA_NPAW4e_network_channel_closure_reason@@@Z");
//};

//public: c_replication_entity_manager_view::c_replication_entity_manager_view(void)
//{
//    mangled_ppc("??0c_replication_entity_manager_view@@QAA@XZ");
//};

//public: c_replication_scheduler_client::c_replication_scheduler_client(void)
//{
//    mangled_ppc("??0c_replication_scheduler_client@@QAA@XZ");
//};

//public: s_replication_entity_view_data::s_replication_entity_view_data(void)
//{
//    mangled_ppc("??0s_replication_entity_view_data@@QAA@XZ");
//};

//public: c_replication_event_manager_view::c_replication_event_manager_view(void)
//{
//    mangled_ppc("??0c_replication_event_manager_view@@QAA@XZ");
//};

//public: c_replication_control_view::c_replication_control_view(void)
//{
//    mangled_ppc("??0c_replication_control_view@@QAA@XZ");
//};

//public: s_player_motion::s_player_motion(void)
//{
//    mangled_ppc("??0s_player_motion@@QAA@XZ");
//};

//public: virtual long c_replication_control_view::terminator_required_bits(void) const
//{
//    mangled_ppc("?terminator_required_bits@c_replication_control_view@@UBAJXZ");
//};

//public: c_game_results_replicator::c_game_results_replicator(void)
//{
//    mangled_ppc("??0c_game_results_replicator@@QAA@XZ");
//};

//public: s_game_results_incremental::s_game_results_incremental(void)
//{
//    mangled_ppc("??0s_game_results_incremental@@QAA@XZ");
//};

//public: s_game_results_player_data::s_game_results_player_data(void)
//{
//    mangled_ppc("??0s_game_results_player_data@@QAA@XZ");
//};

//public: s_game_results_machine_data::s_game_results_machine_data(void)
//{
//    mangled_ppc("??0s_game_results_machine_data@@QAA@XZ");
//};

//void network_memory_delete_simulation_view(class c_simulation_view *)
//{
//    mangled_ppc("?network_memory_delete_simulation_view@@YAXPAVc_simulation_view@@@Z");
//};

//public: long c_simulation_view::view_datum_index(void) const
//{
//    mangled_ppc("?view_datum_index@c_simulation_view@@QBAJXZ");
//};

//public: void * c_simulation_view::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_simulation_view@@QAAPAXI@Z");
//};

//public: c_simulation_view::~c_simulation_view(void)
//{
//    mangled_ppc("??1c_simulation_view@@QAA@XZ");
//};

//public: c_network_channel_simulation_interface::~c_network_channel_simulation_interface(void)
//{
//    mangled_ppc("??1c_network_channel_simulation_interface@@QAA@XZ");
//};

//public: void * c_simulation_distributed_view::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_simulation_distributed_view@@QAAPAXI@Z");
//};

//public: c_simulation_distributed_view::~c_simulation_distributed_view(void)
//{
//    mangled_ppc("??1c_simulation_distributed_view@@QAA@XZ");
//};

//public: c_replication_scheduler::~c_replication_scheduler(void)
//{
//    mangled_ppc("??1c_replication_scheduler@@QAA@XZ");
//};

//public: c_replication_scheduler_quality_tracker::~c_replication_scheduler_quality_tracker(void)
//{
//    mangled_ppc("??1c_replication_scheduler_quality_tracker@@QAA@XZ");
//};

//public: c_replication_entity_manager_view::~c_replication_entity_manager_view(void)
//{
//    mangled_ppc("??1c_replication_entity_manager_view@@QAA@XZ");
//};

//public: c_replication_event_manager_view::~c_replication_event_manager_view(void)
//{
//    mangled_ppc("??1c_replication_event_manager_view@@QAA@XZ");
//};

//public: c_replication_control_view::~c_replication_control_view(void)
//{
//    mangled_ppc("??1c_replication_control_view@@QAA@XZ");
//};

//void * network_heap_allocate_block(char const *, long, long, long)
//{
//    mangled_ppc("?network_heap_allocate_block@@YAPAXPBDJJJ@Z");
//};

//void network_heap_free_block(char const *, long, long, void *)
//{
//    mangled_ppc("?network_heap_free_block@@YAXPBDJJPAX@Z");
//};

//void network_heap_verify_block(char const *, long, long, void const *)
//{
//    mangled_ppc("?network_heap_verify_block@@YAXPBDJJPBX@Z");
//};

//void network_heap_get_status(long *, long *, long *, long *, float *, float *)
//{
//    mangled_ppc("?network_heap_get_status@@YAXPAJ000PAM1@Z");
//};

//char * network_heap_describe(char *, long)
//{
//    mangled_ppc("?network_heap_describe@@YAPADPADJ@Z");
//};

//class c_fixed_memory_rockall_heap * get_networking_rockall_heap(void)
//{
//    mangled_ppc("?get_networking_rockall_heap@@YAPAVc_fixed_memory_rockall_heap@@XZ");
//};

//public: c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>::c_enum<enum e_game_results_leave_reason, unsigned char, 0, 17, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_game_results_leave_reason@@E$0A@$0BB@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_packet_quality_sample, 60>::t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_packet_quality_sample, 60>(void)
//{
//    mangled_ppc("??0?$t_static_ring_buffer@Us_packet_quality_sample@c_replication_scheduler_quality_tracker@@$0DM@@@QAA@XZ");
//};

//public: t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_packet_quality_sample, 60>::~t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_packet_quality_sample, 60>(void)
//{
//    mangled_ppc("??1?$t_static_ring_buffer@Us_packet_quality_sample@c_replication_scheduler_quality_tracker@@$0DM@@@QAA@XZ");
//};

//public: c_ring_buffer::~c_ring_buffer(void)
//{
//    mangled_ppc("??1c_ring_buffer@@QAA@XZ");
//};

//public: t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_second_quality_sample, 30>::t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_second_quality_sample, 30>(void)
//{
//    mangled_ppc("??0?$t_static_ring_buffer@Us_second_quality_sample@c_replication_scheduler_quality_tracker@@$0BO@@@QAA@XZ");
//};

//public: t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_second_quality_sample, 30>::~t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_second_quality_sample, 30>(void)
//{
//    mangled_ppc("??1?$t_static_ring_buffer@Us_second_quality_sample@c_replication_scheduler_quality_tracker@@$0BO@@@QAA@XZ");
//};

//public: c_enum<enum e_replication_entity_view_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_replication_entity_view_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_replication_entity_view_state@@G$0A@$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_weapon_set_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_weapon_set_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_weapon_set_flags@@E$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::c_flags<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_replication_entity_view_data_entity_flags@@G$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_simulation_entity_flag, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_simulation_entity_flag, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_simulation_entity_flag@@E$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::c_flags<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_flags@c_simulation_view_synchronous_catchup_manager@@E$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//void track_delete_internal<class c_fixed_memory_rockall_heap>(char const *, long, class c_fixed_memory_rockall_heap *)
//{
//    mangled_ppc("??$track_delete_internal@Vc_fixed_memory_rockall_heap@@@@YAXPBDJPAVc_fixed_memory_rockall_heap@@@Z");
//};

//public: void c_flags_no_init<enum e_weapon_set_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_weapon_set_flags@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_weapon_set_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_weapon_set_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_replication_entity_view_data_entity_flags@@G$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_replication_entity_view_data_entity_flags@@G$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_simulation_entity_flag, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_simulation_entity_flag@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_flags@c_simulation_view_synchronous_catchup_manager@@E$05Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_flags@c_simulation_view_synchronous_catchup_manager@@E$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//void destruct_in_place<class c_fixed_memory_rockall_heap>(class c_fixed_memory_rockall_heap *)
//{
//    mangled_ppc("??$destruct_in_place@Vc_fixed_memory_rockall_heap@@@@YAXPAVc_fixed_memory_rockall_heap@@@Z");
//};

//public: void * c_fixed_memory_rockall_heap::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_fixed_memory_rockall_heap@@QAAPAXI@Z");
//};

//public: c_fixed_memory_rockall_heap::~c_fixed_memory_rockall_heap(void)
//{
//    mangled_ppc("??1c_fixed_memory_rockall_heap@@QAA@XZ");
//};

//private: static unsigned char c_flags_no_init<enum e_weapon_set_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_weapon_set_flags@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned short c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_replication_entity_view_data_entity_flags@@G$00Us_default_enum_string_resolver@@@@CAGXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_simulation_entity_flag, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_simulation_entity_flag@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_flags@c_simulation_view_synchronous_catchup_manager@@E$05Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_weapon_set_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_weapon_set_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_weapon_set_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_weapon_set_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_replication_entity_view_data_entity_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_replication_entity_view_data_entity_flags@@G$00Us_default_enum_string_resolver@@@@CAGW4e_replication_entity_view_data_entity_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_simulation_entity_flag, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_simulation_entity_flag)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_simulation_entity_flag@@E$01Us_default_enum_string_resolver@@@@CAEW4e_simulation_entity_flag@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_simulation_view_synchronous_catchup_manager::e_flags, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_simulation_view_synchronous_catchup_manager::e_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_flags@c_simulation_view_synchronous_catchup_manager@@E$05Us_default_enum_string_resolver@@@@CAEW4e_flags@c_simulation_view_synchronous_catchup_manager@@@Z");
//};

//public: s_network_base_memory_globals::s_network_base_memory_globals(void)
//{
//    mangled_ppc("??0s_network_base_memory_globals@@QAA@XZ");
//};

//public: c_network_link::c_network_link(void)
//{
//    mangled_ppc("??0c_network_link@@QAA@XZ");
//};

//public: c_network_session::c_network_session(void)
//{
//    mangled_ppc("??0c_network_session@@QAA@XZ");
//};

//public: void c_network_session::c_speculative_host_migration_probation::initialize(class c_network_session *)
//{
//    mangled_ppc("?initialize@c_speculative_host_migration_probation@c_network_session@@QAAXPAV2@@Z");
//};

//public: c_network_channel_owner::c_network_channel_owner(void)
//{
//    mangled_ppc("??0c_network_channel_owner@@QAA@XZ");
//};

//public: virtual long c_network_channel_owner::get_player_count(void) const
//{
//    mangled_ppc("?get_player_count@c_network_channel_owner@@UBAJXZ");
//};

//public: virtual bool c_network_channel_owner::channel_connects_to_tracked_peer(long) const
//{
//    mangled_ppc("?channel_connects_to_tracked_peer@c_network_channel_owner@@UBA_NJ@Z");
//};

//public: c_network_session_membership::c_network_session_membership(void)
//{
//    mangled_ppc("??0c_network_session_membership@@QAA@XZ");
//};

//public: s_network_session_shared_membership::s_network_session_shared_membership(void)
//{
//    mangled_ppc("??0s_network_session_shared_membership@@QAA@XZ");
//};

//public: s_player_add_queue_entry::s_player_add_queue_entry(void)
//{
//    mangled_ppc("??0s_player_add_queue_entry@@QAA@XZ");
//};

//public: s_network_session_peer::s_network_session_peer(void)
//{
//    mangled_ppc("??0s_network_session_peer@@QAA@XZ");
//};

//public: s_network_session_player::s_network_session_player(void)
//{
//    mangled_ppc("??0s_network_session_player@@QAA@XZ");
//};

//public: s_network_session_peer_properties::s_network_session_peer_properties(void)
//{
//    mangled_ppc("??0s_network_session_peer_properties@@QAA@XZ");
//};

//public: s_network_session_peer_connectivity::s_network_session_peer_connectivity(void)
//{
//    mangled_ppc("??0s_network_session_peer_connectivity@@QAA@XZ");
//};

//public: s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@$01@@QAA@XZ");
//};

//public: c_network_message_gateway::c_network_message_gateway(void)
//{
//    mangled_ppc("??0c_network_message_gateway@@QAA@XZ");
//};

//public: c_network_out_of_band_consumer::c_network_out_of_band_consumer(void)
//{
//    mangled_ppc("??0c_network_out_of_band_consumer@@QAA@XZ");
//};

//public: c_network_message_handler::c_network_message_handler(void)
//{
//    mangled_ppc("??0c_network_message_handler@@QAA@XZ");
//};

//public: c_simulation_world::c_simulation_world(void)
//{
//    mangled_ppc("??0c_simulation_world@@QAA@XZ");
//};

//public: c_simulation_player::c_simulation_player(void)
//{
//    mangled_ppc("??0c_simulation_player@@QAA@XZ");
//};

//public: c_simulation_actor::c_simulation_actor(void)
//{
//    mangled_ppc("??0c_simulation_actor@@QAA@XZ");
//};

//public: c_simulation_update_history::c_simulation_update_history(void)
//{
//    mangled_ppc("??0c_simulation_update_history@@QAA@XZ");
//};

//public: s_static_array<class c_network_time_statistics, 16>::s_static_array<class c_network_time_statistics, 16>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_network_time_statistics@@$0BA@@@QAA@XZ");
//};

//public: c_network_time_variance_statistics::c_network_time_variance_statistics(void)
//{
//    mangled_ppc("??0c_network_time_variance_statistics@@QAA@XZ");
//};

//public: c_simulation_watcher::c_simulation_watcher(void)
//{
//    mangled_ppc("??0c_simulation_watcher@@QAA@XZ");
//};

//public: s_player_collection::s_player_collection(void)
//{
//    mangled_ppc("??0s_player_collection@@QAA@XZ");
//};

//public: s_player_collection_player::s_player_collection_player(void)
//{
//    mangled_ppc("??0s_player_collection_player@@QAA@XZ");
//};

//public: c_simulation_type_collection::c_simulation_type_collection(void)
//{
//    mangled_ppc("??0c_simulation_type_collection@@QAA@XZ");
//};

//public: c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_session_game_start_warning@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>::c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_session_game_start_error@@D$0A@$0EJ@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: t_static_ring_buffer<struct s_simulation_update_history_element, 64>::t_static_ring_buffer<struct s_simulation_update_history_element, 64>(void)
//{
//    mangled_ppc("??0?$t_static_ring_buffer@Us_simulation_update_history_element@@$0EA@@@QAA@XZ");
//};

//public: c_flags<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::c_flags<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_session_peer_properties_status_flags@@K$0BI@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_flags@c_simulation_update_history@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_session_peer_properties_status_flags@@K$0BI@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_network_session_peer_properties_status_flags@@K$0BI@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_flags@c_simulation_update_history@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_flags@c_simulation_update_history@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_network_session_peer_properties_status_flags@@K$0BI@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned char c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_flags@c_simulation_update_history@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_session_peer_properties_status_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_network_session_peer_properties_status_flags@@K$0BI@Us_default_enum_string_resolver@@@@CAKW4e_network_session_peer_properties_status_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_simulation_update_history::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_simulation_update_history::e_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_flags@c_simulation_update_history@@E$00Us_default_enum_string_resolver@@@@CAEW4e_flags@c_simulation_update_history@@@Z");
//};

//public: s_network_shared_memory_globals::s_network_shared_memory_globals(void)
//{
//    mangled_ppc("??0s_network_shared_memory_globals@@QAA@XZ");
//};

//public: s_network_memory_status::s_network_memory_status(void)
//{
//    mangled_ppc("??0s_network_memory_status@@QAA@XZ");
//};

//public: s_network_base_memory_globals::~s_network_base_memory_globals(void)
//{
//    mangled_ppc("??1s_network_base_memory_globals@@QAA@XZ");
//};

//public: c_network_link::~c_network_link(void)
//{
//    mangled_ppc("??1c_network_link@@QAA@XZ");
//};

//public: c_network_session::~c_network_session(void)
//{
//    mangled_ppc("??1c_network_session@@QAA@XZ");
//};

//public: c_network_message_gateway::~c_network_message_gateway(void)
//{
//    mangled_ppc("??1c_network_message_gateway@@QAA@XZ");
//};

//public: c_network_message_handler::~c_network_message_handler(void)
//{
//    mangled_ppc("??1c_network_message_handler@@QAA@XZ");
//};

//public: c_simulation_world::~c_simulation_world(void)
//{
//    mangled_ppc("??1c_simulation_world@@QAA@XZ");
//};

//public: c_simulation_player::~c_simulation_player(void)
//{
//    mangled_ppc("??1c_simulation_player@@QAA@XZ");
//};

//public: c_simulation_actor::~c_simulation_actor(void)
//{
//    mangled_ppc("??1c_simulation_actor@@QAA@XZ");
//};

//public: c_simulation_update_history::~c_simulation_update_history(void)
//{
//    mangled_ppc("??1c_simulation_update_history@@QAA@XZ");
//};

//public: s_static_array<class c_network_time_statistics, 16>::~s_static_array<class c_network_time_statistics, 16>(void)
//{
//    mangled_ppc("??1?$s_static_array@Vc_network_time_statistics@@$0BA@@@QAA@XZ");
//};

//public: c_network_time_variance_statistics::~c_network_time_variance_statistics(void)
//{
//    mangled_ppc("??1c_network_time_variance_statistics@@QAA@XZ");
//};

//public: c_simulation_watcher::~c_simulation_watcher(void)
//{
//    mangled_ppc("??1c_simulation_watcher@@QAA@XZ");
//};

//public: c_simulation_type_collection::~c_simulation_type_collection(void)
//{
//    mangled_ppc("??1c_simulation_type_collection@@QAA@XZ");
//};

//public: t_static_ring_buffer<struct s_simulation_update_history_element, 64>::~t_static_ring_buffer<struct s_simulation_update_history_element, 64>(void)
//{
//    mangled_ppc("??1?$t_static_ring_buffer@Us_simulation_update_history_element@@$0EA@@@QAA@XZ");
//};

//public: s_network_shared_memory_globals::~s_network_shared_memory_globals(void)
//{
//    mangled_ppc("??1s_network_shared_memory_globals@@QAA@XZ");
//};

//public: s_network_memory_status::~s_network_memory_status(void)
//{
//    mangled_ppc("??1s_network_memory_status@@QAA@XZ");
//};

//void network_base_memory_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fnetwork_base_memory_globals@@YAXXZ");
//};

//void network_shared_memory_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fnetwork_shared_memory_globals@@YAXXZ");
//};

