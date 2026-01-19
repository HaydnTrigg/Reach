/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long get_channel_index_from_view_index(long);
// void clear_bandwidth_desires_by_view_index(long);
// public: void c_replication_scheduler::initialize(long, char const *);
// public: static void s_replication_outgoing_request::test_safety_of_maximum_request_identifier_index(long);
// public: void c_replication_scheduler::destroy(void);
// public: virtual bool c_replication_scheduler::has_data_to_transmit(bool *) const;
// public: void c_replication_scheduler::register_client(long, class c_replication_scheduler_client *);
// public: void c_replication_scheduler::deregister_client(long);
// public: void c_replication_scheduler::register_telemetry_provider(class c_simulation_view_telemetry_provider *);
// public: void c_replication_scheduler::deregister_telemetry_provider(void);
// public: virtual long c_replication_scheduler::space_required_bits(long, long);
// public: virtual bool c_replication_scheduler::write_to_packet(long, class c_bitstream *, long, long);
// public: c_bitstream::c_bitstream(void);
// public: float s_replication_outgoing_request::get_priority(void) const;
// public: unsigned long s_replication_outgoing_request::get_client_index(void) const;
// public: virtual enum e_network_read_result c_replication_scheduler::read_from_packet(struct s_received_packet_info *, class c_bitstream *);
// public: virtual void c_replication_scheduler::notify_packet_acknowledged(long, bool);
// public: virtual void c_replication_scheduler::notify_packet_retired(long, bool, bool);
// public: void c_replication_scheduler_quality_tracker::initialize(void);
// public: void c_replication_scheduler_quality_tracker::dispose(void);
// public: void c_replication_scheduler_quality_tracker::add_packet_quality_sample(struct s_replication_outgoing_request const *, long, long);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// private: void c_replication_scheduler_quality_tracker::update(void);
// long network_time_difference_msec(unsigned long, unsigned long);
// long network_time_since(unsigned long);
// private: bool c_replication_scheduler::view_is_to_remote_client(void) const;
// public: struct c_replication_scheduler_quality_tracker::s_packet_quality_sample & t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_packet_quality_sample, 60>::get_element(long);
// public: struct c_replication_scheduler_quality_tracker::s_second_quality_sample & t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_second_quality_sample, 30>::get_element(long);
// void qsort_elements_fast<struct s_sorted_replication_outgoing_request>(struct s_sorted_replication_outgoing_request *, long, void *);
// void qsort_elements_fast_inlined<struct s_sorted_replication_outgoing_request>(struct s_sorted_replication_outgoing_request *, long, void *);
// public: static bool s_sorted_replication_outgoing_request::compare(unsigned int *, struct s_sorted_replication_outgoing_request &, unsigned int *);
// public: static void s_sorted_replication_outgoing_request::swap(unsigned int *, struct s_sorted_replication_outgoing_request &, unsigned int *, void *);

//long get_channel_index_from_view_index(long)
//{
//    mangled_ppc("?get_channel_index_from_view_index@@YAJJ@Z");
//};

//void clear_bandwidth_desires_by_view_index(long)
//{
//    mangled_ppc("?clear_bandwidth_desires_by_view_index@@YAXJ@Z");
//};

//public: void c_replication_scheduler::initialize(long, char const *)
//{
//    mangled_ppc("?initialize@c_replication_scheduler@@QAAXJPBD@Z");
//};

//public: static void s_replication_outgoing_request::test_safety_of_maximum_request_identifier_index(long)
//{
//    mangled_ppc("?test_safety_of_maximum_request_identifier_index@s_replication_outgoing_request@@SAXJ@Z");
//};

//public: void c_replication_scheduler::destroy(void)
//{
//    mangled_ppc("?destroy@c_replication_scheduler@@QAAXXZ");
//};

//public: virtual bool c_replication_scheduler::has_data_to_transmit(bool *) const
//{
//    mangled_ppc("?has_data_to_transmit@c_replication_scheduler@@UBA_NPA_N@Z");
//};

//public: void c_replication_scheduler::register_client(long, class c_replication_scheduler_client *)
//{
//    mangled_ppc("?register_client@c_replication_scheduler@@QAAXJPAVc_replication_scheduler_client@@@Z");
//};

//public: void c_replication_scheduler::deregister_client(long)
//{
//    mangled_ppc("?deregister_client@c_replication_scheduler@@QAAXJ@Z");
//};

//public: void c_replication_scheduler::register_telemetry_provider(class c_simulation_view_telemetry_provider *)
//{
//    mangled_ppc("?register_telemetry_provider@c_replication_scheduler@@QAAXPAVc_simulation_view_telemetry_provider@@@Z");
//};

//public: void c_replication_scheduler::deregister_telemetry_provider(void)
//{
//    mangled_ppc("?deregister_telemetry_provider@c_replication_scheduler@@QAAXXZ");
//};

//public: virtual long c_replication_scheduler::space_required_bits(long, long)
//{
//    mangled_ppc("?space_required_bits@c_replication_scheduler@@UAAJJJ@Z");
//};

//public: virtual bool c_replication_scheduler::write_to_packet(long, class c_bitstream *, long, long)
//{
//    mangled_ppc("?write_to_packet@c_replication_scheduler@@UAA_NJPAVc_bitstream@@JJ@Z");
//};

//public: c_bitstream::c_bitstream(void)
//{
//    mangled_ppc("??0c_bitstream@@QAA@XZ");
//};

//public: float s_replication_outgoing_request::get_priority(void) const
//{
//    mangled_ppc("?get_priority@s_replication_outgoing_request@@QBAMXZ");
//};

//public: unsigned long s_replication_outgoing_request::get_client_index(void) const
//{
//    mangled_ppc("?get_client_index@s_replication_outgoing_request@@QBAKXZ");
//};

//public: virtual enum e_network_read_result c_replication_scheduler::read_from_packet(struct s_received_packet_info *, class c_bitstream *)
//{
//    mangled_ppc("?read_from_packet@c_replication_scheduler@@UAA?AW4e_network_read_result@@PAUs_received_packet_info@@PAVc_bitstream@@@Z");
//};

//public: virtual void c_replication_scheduler::notify_packet_acknowledged(long, bool)
//{
//    mangled_ppc("?notify_packet_acknowledged@c_replication_scheduler@@UAAXJ_N@Z");
//};

//public: virtual void c_replication_scheduler::notify_packet_retired(long, bool, bool)
//{
//    mangled_ppc("?notify_packet_retired@c_replication_scheduler@@UAAXJ_N0@Z");
//};

//public: void c_replication_scheduler_quality_tracker::initialize(void)
//{
//    mangled_ppc("?initialize@c_replication_scheduler_quality_tracker@@QAAXXZ");
//};

//public: void c_replication_scheduler_quality_tracker::dispose(void)
//{
//    mangled_ppc("?dispose@c_replication_scheduler_quality_tracker@@QAAXXZ");
//};

//public: void c_replication_scheduler_quality_tracker::add_packet_quality_sample(struct s_replication_outgoing_request const *, long, long)
//{
//    mangled_ppc("?add_packet_quality_sample@c_replication_scheduler_quality_tracker@@QAAXPBUs_replication_outgoing_request@@JJ@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//private: void c_replication_scheduler_quality_tracker::update(void)
//{
//    mangled_ppc("?update@c_replication_scheduler_quality_tracker@@AAAXXZ");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//private: bool c_replication_scheduler::view_is_to_remote_client(void) const
//{
//    mangled_ppc("?view_is_to_remote_client@c_replication_scheduler@@ABA_NXZ");
//};

//public: struct c_replication_scheduler_quality_tracker::s_packet_quality_sample & t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_packet_quality_sample, 60>::get_element(long)
//{
//    mangled_ppc("?get_element@?$t_static_ring_buffer@Us_packet_quality_sample@c_replication_scheduler_quality_tracker@@$0DM@@@QAAAAUs_packet_quality_sample@c_replication_scheduler_quality_tracker@@J@Z");
//};

//public: struct c_replication_scheduler_quality_tracker::s_second_quality_sample & t_static_ring_buffer<struct c_replication_scheduler_quality_tracker::s_second_quality_sample, 30>::get_element(long)
//{
//    mangled_ppc("?get_element@?$t_static_ring_buffer@Us_second_quality_sample@c_replication_scheduler_quality_tracker@@$0BO@@@QAAAAUs_second_quality_sample@c_replication_scheduler_quality_tracker@@J@Z");
//};

//void qsort_elements_fast<struct s_sorted_replication_outgoing_request>(struct s_sorted_replication_outgoing_request *, long, void *)
//{
//    mangled_ppc("??$qsort_elements_fast@Us_sorted_replication_outgoing_request@@@@YAXPAUs_sorted_replication_outgoing_request@@JPAX@Z");
//};

//void qsort_elements_fast_inlined<struct s_sorted_replication_outgoing_request>(struct s_sorted_replication_outgoing_request *, long, void *)
//{
//    mangled_ppc("??$qsort_elements_fast_inlined@Us_sorted_replication_outgoing_request@@@@YAXPAUs_sorted_replication_outgoing_request@@JPAX@Z");
//};

//public: static bool s_sorted_replication_outgoing_request::compare(unsigned int *, struct s_sorted_replication_outgoing_request &, unsigned int *)
//{
//    mangled_ppc("?compare@s_sorted_replication_outgoing_request@@SA_NPIAU1@0@Z");
//};

//public: static void s_sorted_replication_outgoing_request::swap(unsigned int *, struct s_sorted_replication_outgoing_request &, unsigned int *, void *)
//{
//    mangled_ppc("?swap@s_sorted_replication_outgoing_request@@SAXPIAU1@0PAX@Z");
//};

