/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct `private: virtual long __cdecl c_replication_event_manager_view::build_outgoing_requests(void const *, long, struct s_replication_outgoing_request *)'::`2'::s_tracked_family, 170>::k_element_count; // "?k_element_count@?$s_static_array@Us_tracked_family@?1??build_outgoing_requests@c_replication_event_manager_view@@EAAJPBXJPAUs_replication_outgoing_request@@@Z@$0KK@@@2JB"
// long volatile `public: void __cdecl s_replication_outgoing_request::set_priority(float)'::`8'::x_event_category_index; // "?x_event_category_index@?7??set_priority@s_replication_outgoing_request@@QAAXM@Z@4JC"

// public: void c_replication_event_manager_view::initialize(long, class c_replication_event_manager *);
// public: void c_replication_event_manager_view::reset(void);
// private: class c_replication_outgoing_event * c_replication_event_manager::get_first_outgoing_event(void);
// private: bool c_replication_outgoing_event::get_outgoing_bit(long) const;
// private: void c_replication_outgoing_event::clear_pending_acknowledgement_bit(long);
// private: bool c_replication_outgoing_event::get_pending_acknowledgement_bit(long) const;
// public: void * c_replication_event_manager_view::c_event_record::`scalar deleting destructor'(unsigned int);
// public: c_replication_event_manager_view::c_event_record::~c_event_record(void);
// public: static void c_replication_event_manager_view::c_event_record::operator delete(void *);
// public: void * c_replication_event_manager_view::c_packet_record::`scalar deleting destructor'(unsigned int);
// public: c_replication_event_manager_view::c_packet_record::~c_packet_record(void);
// public: static void c_replication_event_manager_view::c_packet_record::operator delete(void *);
// public: void c_replication_event_manager_view::destroy(void);
// public: void c_replication_event_manager_view::send_event(class c_replication_outgoing_event *);
// private: void c_replication_outgoing_event::set_outgoing_bit(long);
// private: virtual bool c_replication_event_manager_view::has_data_to_transmit(void);
// private: virtual long c_replication_event_manager_view::build_outgoing_requests(void const *, long, struct s_replication_outgoing_request *);
// long network_time_since(unsigned long);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: void s_replication_outgoing_request::set_priority(float);
// public: void s_replication_outgoing_request::set_request_identifier(unsigned long);
// public: void s_replication_outgoing_request::set_client_index(unsigned long);
// public: void s_replication_outgoing_request::set_request_type(unsigned long);
// private: bool c_replication_event_manager::calculate_requirements(class c_replication_outgoing_event const *, void const *, float *, float *);
// public: long c_replication_outgoing_event::get_replication_family_index(void);
// private: unsigned long c_replication_outgoing_event::get_outgoing_mask(void) const;
// public: void c_replication_outgoing_event::timeout(void);
// private: unsigned long c_replication_outgoing_event::get_pending_acknowledgement_mask(void) const;
// private: virtual void c_replication_event_manager_view::write_request_description_to_string(struct s_replication_outgoing_request const *, void const *, long, char *);
// public: unsigned long s_replication_outgoing_request::get_request_identifier(void) const;
// private: void c_replication_event_manager::write_description_to_string(class c_replication_outgoing_event const *, void const *, long, char *);
// private: virtual long c_replication_event_manager_view::terminator_required_bits(void) const;
// private: virtual void c_replication_event_manager_view::write_to_packet(struct s_replication_scheduler_client_write_to_packet_data *);
// public: c_replication_event_manager_view::c_packet_record::c_packet_record(void);
// public: static void * c_replication_event_manager_view::c_packet_record::operator new(unsigned int);
// private: bool c_replication_event_manager_view::write_one_event_to_packet(struct s_replication_scheduler_client_write_to_packet_data *, class c_replication_event_manager_view::c_packet_record *, class c_replication_outgoing_event *);
// private: enum e_replication_entity_encoding_type c_replication_event_manager::get_event_entity_reference_encoding_type(long, long);
// private: void c_replication_event_manager::write_outgoing_event(long, long, void const *, class c_bitstream *, struct s_event_payload_encode_parameters const *);
// public: c_replication_event_manager_view::c_event_record::c_event_record(void);
// public: static void * c_replication_event_manager_view::c_event_record::operator new(unsigned int);
// private: void c_replication_outgoing_event::set_pending_acknowledgement_bit(long);
// private: virtual void c_replication_event_manager_view::write_terminator_to_packet(long, class c_bitstream *);
// private: virtual enum e_network_read_result c_replication_event_manager_view::read_from_packet(struct s_received_packet_info const *, class c_bitstream *, long, struct s_replication_incoming_request *, long *);
// private: enum e_network_read_result c_replication_event_manager::read_incoming_event(long, long const *, long, long *, struct s_replication_allocation_block *, class c_bitstream *);
// private: virtual void c_replication_event_manager_view::process_incoming_request(struct s_replication_incoming_request *);
// private: void c_replication_event_manager::process_incoming_event(long, long const *, long, struct s_replication_allocation_block *);
// private: virtual void c_replication_event_manager_view::notify_packet_acknowledged(long, bool);
// private: virtual void c_replication_event_manager_view::notify_packet_retired(long, bool, bool);
// private: void c_replication_event_manager_view::mark_packet_delivered(long, bool);
// public: void c_replication_event_manager_view::start_replication(void);
// public: void c_replication_event_manager_view::stop_replication(void);
// public: void c_replication_event_manager_view::validate(void) const;
// public: void c_replication_event_manager_view::c_packet_record::validate(void) const;
// public: void c_replication_event_manager_view::c_event_record::validate(void) const;
// public: struct `private: virtual long c_replication_event_manager_view::build_outgoing_requests(void const *, long, struct s_replication_outgoing_request *)'::`2'::s_tracked_family * s_static_array<struct `private: virtual long c_replication_event_manager_view::build_outgoing_requests(void const *, long, struct s_replication_outgoing_request *)'::`2'::s_tracked_family, 170>::get_elements(void);
// void prefetch<class c_replication_outgoing_event>(class c_replication_outgoing_event const *);
// public: struct `private: virtual long c_replication_event_manager_view::build_outgoing_requests(void const *, long, struct s_replication_outgoing_request *)'::`2'::s_tracked_family & s_static_array<struct `private: virtual long c_replication_event_manager_view::build_outgoing_requests(void const *, long, struct s_replication_outgoing_request *)'::`2'::s_tracked_family, 170>::operator[]<long>(long);
// public: static bool s_static_array<struct `private: virtual long c_replication_event_manager_view::build_outgoing_requests(void const *, long, struct s_replication_outgoing_request *)'::`2'::s_tracked_family, 170>::valid<long>(long);

//public: void c_replication_event_manager_view::initialize(long, class c_replication_event_manager *)
//{
//    mangled_ppc("?initialize@c_replication_event_manager_view@@QAAXJPAVc_replication_event_manager@@@Z");
//};

//public: void c_replication_event_manager_view::reset(void)
//{
//    mangled_ppc("?reset@c_replication_event_manager_view@@QAAXXZ");
//};

//private: class c_replication_outgoing_event * c_replication_event_manager::get_first_outgoing_event(void)
//{
//    mangled_ppc("?get_first_outgoing_event@c_replication_event_manager@@AAAPAVc_replication_outgoing_event@@XZ");
//};

//private: bool c_replication_outgoing_event::get_outgoing_bit(long) const
//{
//    mangled_ppc("?get_outgoing_bit@c_replication_outgoing_event@@ABA_NJ@Z");
//};

//private: void c_replication_outgoing_event::clear_pending_acknowledgement_bit(long)
//{
//    mangled_ppc("?clear_pending_acknowledgement_bit@c_replication_outgoing_event@@AAAXJ@Z");
//};

//private: bool c_replication_outgoing_event::get_pending_acknowledgement_bit(long) const
//{
//    mangled_ppc("?get_pending_acknowledgement_bit@c_replication_outgoing_event@@ABA_NJ@Z");
//};

//public: void * c_replication_event_manager_view::c_event_record::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_event_record@c_replication_event_manager_view@@QAAPAXI@Z");
//};

//public: c_replication_event_manager_view::c_event_record::~c_event_record(void)
//{
//    mangled_ppc("??1c_event_record@c_replication_event_manager_view@@QAA@XZ");
//};

//public: static void c_replication_event_manager_view::c_event_record::operator delete(void *)
//{
//    mangled_ppc("??3c_event_record@c_replication_event_manager_view@@SAXPAX@Z");
//};

//public: void * c_replication_event_manager_view::c_packet_record::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_packet_record@c_replication_event_manager_view@@QAAPAXI@Z");
//};

//public: c_replication_event_manager_view::c_packet_record::~c_packet_record(void)
//{
//    mangled_ppc("??1c_packet_record@c_replication_event_manager_view@@QAA@XZ");
//};

//public: static void c_replication_event_manager_view::c_packet_record::operator delete(void *)
//{
//    mangled_ppc("??3c_packet_record@c_replication_event_manager_view@@SAXPAX@Z");
//};

//public: void c_replication_event_manager_view::destroy(void)
//{
//    mangled_ppc("?destroy@c_replication_event_manager_view@@QAAXXZ");
//};

//public: void c_replication_event_manager_view::send_event(class c_replication_outgoing_event *)
//{
//    mangled_ppc("?send_event@c_replication_event_manager_view@@QAAXPAVc_replication_outgoing_event@@@Z");
//};

//private: void c_replication_outgoing_event::set_outgoing_bit(long)
//{
//    mangled_ppc("?set_outgoing_bit@c_replication_outgoing_event@@AAAXJ@Z");
//};

//private: virtual bool c_replication_event_manager_view::has_data_to_transmit(void)
//{
//    mangled_ppc("?has_data_to_transmit@c_replication_event_manager_view@@EAA_NXZ");
//};

//private: virtual long c_replication_event_manager_view::build_outgoing_requests(void const *, long, struct s_replication_outgoing_request *)
//{
//    mangled_ppc("?build_outgoing_requests@c_replication_event_manager_view@@EAAJPBXJPAUs_replication_outgoing_request@@@Z");
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

//public: void s_replication_outgoing_request::set_priority(float)
//{
//    mangled_ppc("?set_priority@s_replication_outgoing_request@@QAAXM@Z");
//};

//public: void s_replication_outgoing_request::set_request_identifier(unsigned long)
//{
//    mangled_ppc("?set_request_identifier@s_replication_outgoing_request@@QAAXK@Z");
//};

//public: void s_replication_outgoing_request::set_client_index(unsigned long)
//{
//    mangled_ppc("?set_client_index@s_replication_outgoing_request@@QAAXK@Z");
//};

//public: void s_replication_outgoing_request::set_request_type(unsigned long)
//{
//    mangled_ppc("?set_request_type@s_replication_outgoing_request@@QAAXK@Z");
//};

//private: bool c_replication_event_manager::calculate_requirements(class c_replication_outgoing_event const *, void const *, float *, float *)
//{
//    mangled_ppc("?calculate_requirements@c_replication_event_manager@@AAA_NPBVc_replication_outgoing_event@@PBXPAM2@Z");
//};

//public: long c_replication_outgoing_event::get_replication_family_index(void)
//{
//    mangled_ppc("?get_replication_family_index@c_replication_outgoing_event@@QAAJXZ");
//};

//private: unsigned long c_replication_outgoing_event::get_outgoing_mask(void) const
//{
//    mangled_ppc("?get_outgoing_mask@c_replication_outgoing_event@@ABAKXZ");
//};

//public: void c_replication_outgoing_event::timeout(void)
//{
//    mangled_ppc("?timeout@c_replication_outgoing_event@@QAAXXZ");
//};

//private: unsigned long c_replication_outgoing_event::get_pending_acknowledgement_mask(void) const
//{
//    mangled_ppc("?get_pending_acknowledgement_mask@c_replication_outgoing_event@@ABAKXZ");
//};

//private: virtual void c_replication_event_manager_view::write_request_description_to_string(struct s_replication_outgoing_request const *, void const *, long, char *)
//{
//    mangled_ppc("?write_request_description_to_string@c_replication_event_manager_view@@EAAXPBUs_replication_outgoing_request@@PBXJPAD@Z");
//};

//public: unsigned long s_replication_outgoing_request::get_request_identifier(void) const
//{
//    mangled_ppc("?get_request_identifier@s_replication_outgoing_request@@QBAKXZ");
//};

//private: void c_replication_event_manager::write_description_to_string(class c_replication_outgoing_event const *, void const *, long, char *)
//{
//    mangled_ppc("?write_description_to_string@c_replication_event_manager@@AAAXPBVc_replication_outgoing_event@@PBXJPAD@Z");
//};

//private: virtual long c_replication_event_manager_view::terminator_required_bits(void) const
//{
//    mangled_ppc("?terminator_required_bits@c_replication_event_manager_view@@EBAJXZ");
//};

//private: virtual void c_replication_event_manager_view::write_to_packet(struct s_replication_scheduler_client_write_to_packet_data *)
//{
//    mangled_ppc("?write_to_packet@c_replication_event_manager_view@@EAAXPAUs_replication_scheduler_client_write_to_packet_data@@@Z");
//};

//public: c_replication_event_manager_view::c_packet_record::c_packet_record(void)
//{
//    mangled_ppc("??0c_packet_record@c_replication_event_manager_view@@QAA@XZ");
//};

//public: static void * c_replication_event_manager_view::c_packet_record::operator new(unsigned int)
//{
//    mangled_ppc("??2c_packet_record@c_replication_event_manager_view@@SAPAXI@Z");
//};

//private: bool c_replication_event_manager_view::write_one_event_to_packet(struct s_replication_scheduler_client_write_to_packet_data *, class c_replication_event_manager_view::c_packet_record *, class c_replication_outgoing_event *)
//{
//    mangled_ppc("?write_one_event_to_packet@c_replication_event_manager_view@@AAA_NPAUs_replication_scheduler_client_write_to_packet_data@@PAVc_packet_record@1@PAVc_replication_outgoing_event@@@Z");
//};

//private: enum e_replication_entity_encoding_type c_replication_event_manager::get_event_entity_reference_encoding_type(long, long)
//{
//    mangled_ppc("?get_event_entity_reference_encoding_type@c_replication_event_manager@@AAA?AW4e_replication_entity_encoding_type@@JJ@Z");
//};

//private: void c_replication_event_manager::write_outgoing_event(long, long, void const *, class c_bitstream *, struct s_event_payload_encode_parameters const *)
//{
//    mangled_ppc("?write_outgoing_event@c_replication_event_manager@@AAAXJJPBXPAVc_bitstream@@PBUs_event_payload_encode_parameters@@@Z");
//};

//public: c_replication_event_manager_view::c_event_record::c_event_record(void)
//{
//    mangled_ppc("??0c_event_record@c_replication_event_manager_view@@QAA@XZ");
//};

//public: static void * c_replication_event_manager_view::c_event_record::operator new(unsigned int)
//{
//    mangled_ppc("??2c_event_record@c_replication_event_manager_view@@SAPAXI@Z");
//};

//private: void c_replication_outgoing_event::set_pending_acknowledgement_bit(long)
//{
//    mangled_ppc("?set_pending_acknowledgement_bit@c_replication_outgoing_event@@AAAXJ@Z");
//};

//private: virtual void c_replication_event_manager_view::write_terminator_to_packet(long, class c_bitstream *)
//{
//    mangled_ppc("?write_terminator_to_packet@c_replication_event_manager_view@@EAAXJPAVc_bitstream@@@Z");
//};

//private: virtual enum e_network_read_result c_replication_event_manager_view::read_from_packet(struct s_received_packet_info const *, class c_bitstream *, long, struct s_replication_incoming_request *, long *)
//{
//    mangled_ppc("?read_from_packet@c_replication_event_manager_view@@EAA?AW4e_network_read_result@@PBUs_received_packet_info@@PAVc_bitstream@@JPAUs_replication_incoming_request@@PAJ@Z");
//};

//private: enum e_network_read_result c_replication_event_manager::read_incoming_event(long, long const *, long, long *, struct s_replication_allocation_block *, class c_bitstream *)
//{
//    mangled_ppc("?read_incoming_event@c_replication_event_manager@@AAA?AW4e_network_read_result@@JPBJJPAJPAUs_replication_allocation_block@@PAVc_bitstream@@@Z");
//};

//private: virtual void c_replication_event_manager_view::process_incoming_request(struct s_replication_incoming_request *)
//{
//    mangled_ppc("?process_incoming_request@c_replication_event_manager_view@@EAAXPAUs_replication_incoming_request@@@Z");
//};

//private: void c_replication_event_manager::process_incoming_event(long, long const *, long, struct s_replication_allocation_block *)
//{
//    mangled_ppc("?process_incoming_event@c_replication_event_manager@@AAAXJPBJJPAUs_replication_allocation_block@@@Z");
//};

//private: virtual void c_replication_event_manager_view::notify_packet_acknowledged(long, bool)
//{
//    mangled_ppc("?notify_packet_acknowledged@c_replication_event_manager_view@@EAAXJ_N@Z");
//};

//private: virtual void c_replication_event_manager_view::notify_packet_retired(long, bool, bool)
//{
//    mangled_ppc("?notify_packet_retired@c_replication_event_manager_view@@EAAXJ_N0@Z");
//};

//private: void c_replication_event_manager_view::mark_packet_delivered(long, bool)
//{
//    mangled_ppc("?mark_packet_delivered@c_replication_event_manager_view@@AAAXJ_N@Z");
//};

//public: void c_replication_event_manager_view::start_replication(void)
//{
//    mangled_ppc("?start_replication@c_replication_event_manager_view@@QAAXXZ");
//};

//public: void c_replication_event_manager_view::stop_replication(void)
//{
//    mangled_ppc("?stop_replication@c_replication_event_manager_view@@QAAXXZ");
//};

//public: void c_replication_event_manager_view::validate(void) const
//{
//    mangled_ppc("?validate@c_replication_event_manager_view@@QBAXXZ");
//};

//public: void c_replication_event_manager_view::c_packet_record::validate(void) const
//{
//    mangled_ppc("?validate@c_packet_record@c_replication_event_manager_view@@QBAXXZ");
//};

//public: void c_replication_event_manager_view::c_event_record::validate(void) const
//{
//    mangled_ppc("?validate@c_event_record@c_replication_event_manager_view@@QBAXXZ");
//};

//public: struct `private: virtual long c_replication_event_manager_view::build_outgoing_requests(void const *, long, struct s_replication_outgoing_request *)'::`2'::s_tracked_family * s_static_array<struct `private: virtual long c_replication_event_manager_view::build_outgoing_requests(void const *, long, struct s_replication_outgoing_request *)'::`2'::s_tracked_family, 170>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_tracked_family@?1??build_outgoing_requests@c_replication_event_manager_view@@EAAJPBXJPAUs_replication_outgoing_request@@@Z@$0KK@@@QAAPAUs_tracked_family@?1??build_outgoing_requests@c_replication_event_manager_view@@EAAJPBXJPAUs_replication_outgoing_request@@@Z@XZ");
//};

//void prefetch<class c_replication_outgoing_event>(class c_replication_outgoing_event const *)
//{
//    mangled_ppc("??$prefetch@Vc_replication_outgoing_event@@@@YAXPBVc_replication_outgoing_event@@@Z");
//};

//public: struct `private: virtual long c_replication_event_manager_view::build_outgoing_requests(void const *, long, struct s_replication_outgoing_request *)'::`2'::s_tracked_family & s_static_array<struct `private: virtual long c_replication_event_manager_view::build_outgoing_requests(void const *, long, struct s_replication_outgoing_request *)'::`2'::s_tracked_family, 170>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_tracked_family@?1??build_outgoing_requests@c_replication_event_manager_view@@EAAJPBXJPAUs_replication_outgoing_request@@@Z@$0KK@@@QAAAAUs_tracked_family@?1??build_outgoing_requests@c_replication_event_manager_view@@EAAJPBXJPAUs_replication_outgoing_request@@@Z@J@Z");
//};

//public: static bool s_static_array<struct `private: virtual long c_replication_event_manager_view::build_outgoing_requests(void const *, long, struct s_replication_outgoing_request *)'::`2'::s_tracked_family, 170>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_tracked_family@?1??build_outgoing_requests@c_replication_event_manager_view@@EAAJPBXJPAUs_replication_outgoing_request@@@Z@$0KK@@@SA_NJ@Z");
//};

