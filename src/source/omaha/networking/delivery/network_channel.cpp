/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static bool c_network_channel::valid_channel_flags(unsigned long);
// public: void c_network_channel::allocate(unsigned long, char const *, class c_network_link *, class c_network_channel_manager *, class c_network_message_gateway *, class c_network_message_handler *, class c_network_message_type_collection const *, struct s_channel_configuration const *);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// public: void c_network_channel::open(class c_transport_address_list const *, bool, long);
// public: void c_network_channel::establish(unsigned long);
// public: bool c_network_channel::idle(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// void simulation_profiler_recorder_set_current_machine_index(long);
// public: void c_network_channel::close(enum e_network_channel_closure_reason);
// public: void c_network_channel::deallocate(void);
// public: bool c_network_connection::allocated(void) const;
// public: void c_network_channel::attach_simulation(class c_network_channel_simulation_interface *);
// public: void c_network_channel::detach_simulation(class c_network_channel_simulation_interface *);
// public: bool c_network_channel::receive_packet(class c_bitstream *, long, unsigned long, bool);
// public: void c_network_channel_simulation_gatekeeper::set_read_simulation_data_expected(bool);
// private: void c_network_channel::send_packet(class c_bitstream *, bool, bool, long, void const *, long *, long *, long *);
// public: void c_network_channel_simulation_gatekeeper::set_write_simulation_data_available(bool);
// public: void c_network_channel::generate_outgoing_message_summary(void) const;
// public: void c_network_channel::reset_message_queues(void);
// public: void c_network_channel::send_message(enum e_network_channel_message_queue, enum e_network_message_type, long, void const *);
// public: void c_network_channel::set_message_queue_fragment_send_count(long);
// public: bool c_network_channel::message_queues_have_delayed_fragments(void);
// public: void c_network_channel::notify_destination_unreachable(void);
// public: void c_network_channel::reset_activity_times(void);
// public: void c_network_channel::update_activity(enum e_network_channel_activity);
// public: unsigned long c_network_channel::last_activity_time(enum e_network_channel_activity) const;
// public: void c_network_channel::get_channel_stats(long *, long *) const;
// private: void c_network_channel::update_packet_delivery(void);
// public: long c_network_channel::get_connection_window_size_bytes(void) const;
// public: long c_network_channel::get_connection_window_size_packets(void) const;
// public: long c_network_channel::get_connection_safe_sequence_range(void) const;
// public: long c_network_channel::get_connection_safe_sequence_range_remaining(void) const;
// public: long c_network_channel::get_message_space_available(enum e_network_channel_message_queue) const;
// public: long c_network_channel::get_message_space_maximum_size_bytes(enum e_network_channel_message_queue) const;
// public: void c_network_channel::set_message_send_logging_enabled(enum e_network_channel_message_queue, bool);
// public: static char const * c_network_channel::get_state_string(enum e_network_channel_state);
// public: static char const * c_network_channel::get_closure_reason_string(enum e_network_channel_closure_reason);
// public: char const * c_network_channel::get_name(void) const;
// public: char const * c_network_channel::get_short_name(void) const;
// public: void c_network_channel::set_remote_host_name(char const *);
// private: void c_network_channel::rebuild_channel_description(void);
// private: void c_network_channel::check_to_send_connect_packet(void);
// private: void c_network_channel::send_connection_established(bool);
// private: void c_network_channel::check_establishment_timeout(void);
// private: void c_network_channel::complete_establishment(void);
// private: void c_network_channel::register_base_client(unsigned long, class c_network_channel_client *);
// private: static void c_network_channel::iterator_begin(struct c_network_channel::s_client_iterator *, unsigned long);
// private: bool c_network_channel::iterator_next(struct c_network_channel::s_client_iterator *) const;
// public: void c_network_channel::set_remote_address_list(class c_transport_address_list *);
// private: void c_network_channel::set_state_internal(enum e_network_channel_state);
// public: void c_network_channel_simulation_interface::initialize(bool, bool, void *, void (*)(void *), long, unsigned long const *, class c_network_channel_client **);
// public: void c_network_channel_simulation_interface::dispose(void);
// public: void c_network_channel_simulation_interface::set_established(bool);
// public: bool c_network_channel_simulation_interface::established(void) const;
// public: bool c_network_channel_simulation_interface::data_expected(void) const;
// public: bool c_network_channel_simulation_interface::using_distributed_replication_model(void) const;
// public: bool c_network_channel_simulation_interface::is_authority(void) const;
// public: void c_network_channel_simulation_interface::notify_closed(void) const;
// public: long c_network_channel_simulation_interface::get_clients(struct s_network_channel_client_info const **);
// public: virtual char const * c_network_channel_simulation_gatekeeper::get_client_name(void) const;
// public: virtual bool c_network_channel_simulation_gatekeeper::connection_lost(enum e_network_channel_closure_reason *) const;
// public: virtual bool c_network_channel_simulation_gatekeeper::has_data_to_transmit(bool *) const;
// public: virtual long c_network_channel_simulation_gatekeeper::space_required_bits(long, long);
// public: virtual bool c_network_channel_simulation_gatekeeper::write_to_packet(long, class c_bitstream *, long, long);
// public: virtual enum e_network_read_result c_network_channel_simulation_gatekeeper::read_from_packet(struct s_received_packet_info *, class c_bitstream *);
// public: virtual void c_network_channel_simulation_gatekeeper::notify_packet_acknowledged(long, bool);
// public: virtual void c_network_channel_simulation_gatekeeper::notify_packet_retired(long, bool, bool);
// public: void s_static_array<long, 49>::set_all(long const &);
// public: class c_network_message_queue & s_static_array<class c_network_message_queue, 2>::operator[]<enum e_network_channel_message_queue>(enum e_network_channel_message_queue);
// public: long & s_static_array<long, 49>::operator[]<enum e_network_message_type>(enum e_network_message_type);
// public: long & s_static_array<long, 49>::operator[]<long>(long);
// public: static bool s_static_array<long, 49>::valid<enum e_network_message_type>(enum e_network_message_type);
// public: static bool s_static_array<long, 49>::valid<long>(long);

//public: static bool c_network_channel::valid_channel_flags(unsigned long)
//{
//    mangled_ppc("?valid_channel_flags@c_network_channel@@SA_NK@Z");
//};

//public: void c_network_channel::allocate(unsigned long, char const *, class c_network_link *, class c_network_channel_manager *, class c_network_message_gateway *, class c_network_message_handler *, class c_network_message_type_collection const *, struct s_channel_configuration const *)
//{
//    mangled_ppc("?allocate@c_network_channel@@QAAXKPBDPAVc_network_link@@PAVc_network_channel_manager@@PAVc_network_message_gateway@@PAVc_network_message_handler@@PBVc_network_message_type_collection@@PBUs_channel_configuration@@@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//public: void c_network_channel::open(class c_transport_address_list const *, bool, long)
//{
//    mangled_ppc("?open@c_network_channel@@QAAXPBVc_transport_address_list@@_NJ@Z");
//};

//public: void c_network_channel::establish(unsigned long)
//{
//    mangled_ppc("?establish@c_network_channel@@QAAXK@Z");
//};

//public: bool c_network_channel::idle(void)
//{
//    mangled_ppc("?idle@c_network_channel@@QAA_NXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//void simulation_profiler_recorder_set_current_machine_index(long)
//{
//    mangled_ppc("?simulation_profiler_recorder_set_current_machine_index@@YAXJ@Z");
//};

//public: void c_network_channel::close(enum e_network_channel_closure_reason)
//{
//    mangled_ppc("?close@c_network_channel@@QAAXW4e_network_channel_closure_reason@@@Z");
//};

//public: void c_network_channel::deallocate(void)
//{
//    mangled_ppc("?deallocate@c_network_channel@@QAAXXZ");
//};

//public: bool c_network_connection::allocated(void) const
//{
//    mangled_ppc("?allocated@c_network_connection@@QBA_NXZ");
//};

//public: void c_network_channel::attach_simulation(class c_network_channel_simulation_interface *)
//{
//    mangled_ppc("?attach_simulation@c_network_channel@@QAAXPAVc_network_channel_simulation_interface@@@Z");
//};

//public: void c_network_channel::detach_simulation(class c_network_channel_simulation_interface *)
//{
//    mangled_ppc("?detach_simulation@c_network_channel@@QAAXPAVc_network_channel_simulation_interface@@@Z");
//};

//public: bool c_network_channel::receive_packet(class c_bitstream *, long, unsigned long, bool)
//{
//    mangled_ppc("?receive_packet@c_network_channel@@QAA_NPAVc_bitstream@@JK_N@Z");
//};

//public: void c_network_channel_simulation_gatekeeper::set_read_simulation_data_expected(bool)
//{
//    mangled_ppc("?set_read_simulation_data_expected@c_network_channel_simulation_gatekeeper@@QAAX_N@Z");
//};

//private: void c_network_channel::send_packet(class c_bitstream *, bool, bool, long, void const *, long *, long *, long *)
//{
//    mangled_ppc("?send_packet@c_network_channel@@AAAXPAVc_bitstream@@_N1JPBXPAJ33@Z");
//};

//public: void c_network_channel_simulation_gatekeeper::set_write_simulation_data_available(bool)
//{
//    mangled_ppc("?set_write_simulation_data_available@c_network_channel_simulation_gatekeeper@@QAAX_N@Z");
//};

//public: void c_network_channel::generate_outgoing_message_summary(void) const
//{
//    mangled_ppc("?generate_outgoing_message_summary@c_network_channel@@QBAXXZ");
//};

//public: void c_network_channel::reset_message_queues(void)
//{
//    mangled_ppc("?reset_message_queues@c_network_channel@@QAAXXZ");
//};

//public: void c_network_channel::send_message(enum e_network_channel_message_queue, enum e_network_message_type, long, void const *)
//{
//    mangled_ppc("?send_message@c_network_channel@@QAAXW4e_network_channel_message_queue@@W4e_network_message_type@@JPBX@Z");
//};

//public: void c_network_channel::set_message_queue_fragment_send_count(long)
//{
//    mangled_ppc("?set_message_queue_fragment_send_count@c_network_channel@@QAAXJ@Z");
//};

//public: bool c_network_channel::message_queues_have_delayed_fragments(void)
//{
//    mangled_ppc("?message_queues_have_delayed_fragments@c_network_channel@@QAA_NXZ");
//};

//public: void c_network_channel::notify_destination_unreachable(void)
//{
//    mangled_ppc("?notify_destination_unreachable@c_network_channel@@QAAXXZ");
//};

//public: void c_network_channel::reset_activity_times(void)
//{
//    mangled_ppc("?reset_activity_times@c_network_channel@@QAAXXZ");
//};

//public: void c_network_channel::update_activity(enum e_network_channel_activity)
//{
//    mangled_ppc("?update_activity@c_network_channel@@QAAXW4e_network_channel_activity@@@Z");
//};

//public: unsigned long c_network_channel::last_activity_time(enum e_network_channel_activity) const
//{
//    mangled_ppc("?last_activity_time@c_network_channel@@QBAKW4e_network_channel_activity@@@Z");
//};

//public: void c_network_channel::get_channel_stats(long *, long *) const
//{
//    mangled_ppc("?get_channel_stats@c_network_channel@@QBAXPAJ0@Z");
//};

//private: void c_network_channel::update_packet_delivery(void)
//{
//    mangled_ppc("?update_packet_delivery@c_network_channel@@AAAXXZ");
//};

//public: long c_network_channel::get_connection_window_size_bytes(void) const
//{
//    mangled_ppc("?get_connection_window_size_bytes@c_network_channel@@QBAJXZ");
//};

//public: long c_network_channel::get_connection_window_size_packets(void) const
//{
//    mangled_ppc("?get_connection_window_size_packets@c_network_channel@@QBAJXZ");
//};

//public: long c_network_channel::get_connection_safe_sequence_range(void) const
//{
//    mangled_ppc("?get_connection_safe_sequence_range@c_network_channel@@QBAJXZ");
//};

//public: long c_network_channel::get_connection_safe_sequence_range_remaining(void) const
//{
//    mangled_ppc("?get_connection_safe_sequence_range_remaining@c_network_channel@@QBAJXZ");
//};

//public: long c_network_channel::get_message_space_available(enum e_network_channel_message_queue) const
//{
//    mangled_ppc("?get_message_space_available@c_network_channel@@QBAJW4e_network_channel_message_queue@@@Z");
//};

//public: long c_network_channel::get_message_space_maximum_size_bytes(enum e_network_channel_message_queue) const
//{
//    mangled_ppc("?get_message_space_maximum_size_bytes@c_network_channel@@QBAJW4e_network_channel_message_queue@@@Z");
//};

//public: void c_network_channel::set_message_send_logging_enabled(enum e_network_channel_message_queue, bool)
//{
//    mangled_ppc("?set_message_send_logging_enabled@c_network_channel@@QAAXW4e_network_channel_message_queue@@_N@Z");
//};

//public: static char const * c_network_channel::get_state_string(enum e_network_channel_state)
//{
//    mangled_ppc("?get_state_string@c_network_channel@@SAPBDW4e_network_channel_state@@@Z");
//};

//public: static char const * c_network_channel::get_closure_reason_string(enum e_network_channel_closure_reason)
//{
//    mangled_ppc("?get_closure_reason_string@c_network_channel@@SAPBDW4e_network_channel_closure_reason@@@Z");
//};

//public: char const * c_network_channel::get_name(void) const
//{
//    mangled_ppc("?get_name@c_network_channel@@QBAPBDXZ");
//};

//public: char const * c_network_channel::get_short_name(void) const
//{
//    mangled_ppc("?get_short_name@c_network_channel@@QBAPBDXZ");
//};

//public: void c_network_channel::set_remote_host_name(char const *)
//{
//    mangled_ppc("?set_remote_host_name@c_network_channel@@QAAXPBD@Z");
//};

//private: void c_network_channel::rebuild_channel_description(void)
//{
//    mangled_ppc("?rebuild_channel_description@c_network_channel@@AAAXXZ");
//};

//private: void c_network_channel::check_to_send_connect_packet(void)
//{
//    mangled_ppc("?check_to_send_connect_packet@c_network_channel@@AAAXXZ");
//};

//private: void c_network_channel::send_connection_established(bool)
//{
//    mangled_ppc("?send_connection_established@c_network_channel@@AAAX_N@Z");
//};

//private: void c_network_channel::check_establishment_timeout(void)
//{
//    mangled_ppc("?check_establishment_timeout@c_network_channel@@AAAXXZ");
//};

//private: void c_network_channel::complete_establishment(void)
//{
//    mangled_ppc("?complete_establishment@c_network_channel@@AAAXXZ");
//};

//private: void c_network_channel::register_base_client(unsigned long, class c_network_channel_client *)
//{
//    mangled_ppc("?register_base_client@c_network_channel@@AAAXKPAVc_network_channel_client@@@Z");
//};

//private: static void c_network_channel::iterator_begin(struct c_network_channel::s_client_iterator *, unsigned long)
//{
//    mangled_ppc("?iterator_begin@c_network_channel@@CAXPAUs_client_iterator@1@K@Z");
//};

//private: bool c_network_channel::iterator_next(struct c_network_channel::s_client_iterator *) const
//{
//    mangled_ppc("?iterator_next@c_network_channel@@ABA_NPAUs_client_iterator@1@@Z");
//};

//public: void c_network_channel::set_remote_address_list(class c_transport_address_list *)
//{
//    mangled_ppc("?set_remote_address_list@c_network_channel@@QAAXPAVc_transport_address_list@@@Z");
//};

//private: void c_network_channel::set_state_internal(enum e_network_channel_state)
//{
//    mangled_ppc("?set_state_internal@c_network_channel@@AAAXW4e_network_channel_state@@@Z");
//};

//public: void c_network_channel_simulation_interface::initialize(bool, bool, void *, void (*)(void *), long, unsigned long const *, class c_network_channel_client **)
//{
//    mangled_ppc("?initialize@c_network_channel_simulation_interface@@QAAX_N0PAXP6AX1@ZJPBKPAPAVc_network_channel_client@@@Z");
//};

//public: void c_network_channel_simulation_interface::dispose(void)
//{
//    mangled_ppc("?dispose@c_network_channel_simulation_interface@@QAAXXZ");
//};

//public: void c_network_channel_simulation_interface::set_established(bool)
//{
//    mangled_ppc("?set_established@c_network_channel_simulation_interface@@QAAX_N@Z");
//};

//public: bool c_network_channel_simulation_interface::established(void) const
//{
//    mangled_ppc("?established@c_network_channel_simulation_interface@@QBA_NXZ");
//};

//public: bool c_network_channel_simulation_interface::data_expected(void) const
//{
//    mangled_ppc("?data_expected@c_network_channel_simulation_interface@@QBA_NXZ");
//};

//public: bool c_network_channel_simulation_interface::using_distributed_replication_model(void) const
//{
//    mangled_ppc("?using_distributed_replication_model@c_network_channel_simulation_interface@@QBA_NXZ");
//};

//public: bool c_network_channel_simulation_interface::is_authority(void) const
//{
//    mangled_ppc("?is_authority@c_network_channel_simulation_interface@@QBA_NXZ");
//};

//public: void c_network_channel_simulation_interface::notify_closed(void) const
//{
//    mangled_ppc("?notify_closed@c_network_channel_simulation_interface@@QBAXXZ");
//};

//public: long c_network_channel_simulation_interface::get_clients(struct s_network_channel_client_info const **)
//{
//    mangled_ppc("?get_clients@c_network_channel_simulation_interface@@QAAJPAPBUs_network_channel_client_info@@@Z");
//};

//public: virtual char const * c_network_channel_simulation_gatekeeper::get_client_name(void) const
//{
//    mangled_ppc("?get_client_name@c_network_channel_simulation_gatekeeper@@UBAPBDXZ");
//};

//public: virtual bool c_network_channel_simulation_gatekeeper::connection_lost(enum e_network_channel_closure_reason *) const
//{
//    mangled_ppc("?connection_lost@c_network_channel_simulation_gatekeeper@@UBA_NPAW4e_network_channel_closure_reason@@@Z");
//};

//public: virtual bool c_network_channel_simulation_gatekeeper::has_data_to_transmit(bool *) const
//{
//    mangled_ppc("?has_data_to_transmit@c_network_channel_simulation_gatekeeper@@UBA_NPA_N@Z");
//};

//public: virtual long c_network_channel_simulation_gatekeeper::space_required_bits(long, long)
//{
//    mangled_ppc("?space_required_bits@c_network_channel_simulation_gatekeeper@@UAAJJJ@Z");
//};

//public: virtual bool c_network_channel_simulation_gatekeeper::write_to_packet(long, class c_bitstream *, long, long)
//{
//    mangled_ppc("?write_to_packet@c_network_channel_simulation_gatekeeper@@UAA_NJPAVc_bitstream@@JJ@Z");
//};

//public: virtual enum e_network_read_result c_network_channel_simulation_gatekeeper::read_from_packet(struct s_received_packet_info *, class c_bitstream *)
//{
//    mangled_ppc("?read_from_packet@c_network_channel_simulation_gatekeeper@@UAA?AW4e_network_read_result@@PAUs_received_packet_info@@PAVc_bitstream@@@Z");
//};

//public: virtual void c_network_channel_simulation_gatekeeper::notify_packet_acknowledged(long, bool)
//{
//    mangled_ppc("?notify_packet_acknowledged@c_network_channel_simulation_gatekeeper@@UAAXJ_N@Z");
//};

//public: virtual void c_network_channel_simulation_gatekeeper::notify_packet_retired(long, bool, bool)
//{
//    mangled_ppc("?notify_packet_retired@c_network_channel_simulation_gatekeeper@@UAAXJ_N0@Z");
//};

//public: void s_static_array<long, 49>::set_all(long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@J$0DB@@@QAAXABJ@Z");
//};

//public: class c_network_message_queue & s_static_array<class c_network_message_queue, 2>::operator[]<enum e_network_channel_message_queue>(enum e_network_channel_message_queue)
//{
//    mangled_ppc("??$?AW4e_network_channel_message_queue@@@?$s_static_array@Vc_network_message_queue@@$01@@QAAAAVc_network_message_queue@@W4e_network_channel_message_queue@@@Z");
//};

//public: long & s_static_array<long, 49>::operator[]<enum e_network_message_type>(enum e_network_message_type)
//{
//    mangled_ppc("??$?AW4e_network_message_type@@@?$s_static_array@J$0DB@@@QAAAAJW4e_network_message_type@@@Z");
//};

//public: long & s_static_array<long, 49>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0DB@@@QAAAAJJ@Z");
//};

//public: static bool s_static_array<long, 49>::valid<enum e_network_message_type>(enum e_network_message_type)
//{
//    mangled_ppc("??$valid@W4e_network_message_type@@@?$s_static_array@J$0DB@@@SA_NW4e_network_message_type@@@Z");
//};

//public: static bool s_static_array<long, 49>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@J$0DB@@@SA_NJ@Z");
//};

