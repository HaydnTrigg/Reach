/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long volatile `private: void __cdecl c_replication_entity_manager::process_creation(long, long, unsigned long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, struct s_replication_allocation_block *)'::`3'::x_event_category_index; // "?x_event_category_index@?2??process_creation@c_replication_entity_manager@@AAAXJJKV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAUs_replication_allocation_block@@@Z@4JC"

// public: void c_replication_entity_manager_view::initialize(long, class c_replication_entity_manager *);
// public: void s_replication_entity_view_data::clear(void);
// public: void c_replication_entity_manager_view::reset(void);
// public: void c_replication_entity_manager_view::destroy(void);
// public: void c_replication_entity_manager_view::set_entity_dirty(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>);
// private: void c_replication_entity_manager_view::set_entity_mask(long);
// public: virtual bool c_replication_entity_manager_view::has_data_to_transmit(void);
// public: virtual long c_replication_entity_manager_view::build_outgoing_requests(void const *, long, struct s_replication_outgoing_request *);
// private: bool c_replication_entity_manager::calculate_deletion_requirements(long, void const *, float *);
// private: bool c_replication_entity_manager::calculate_update_requirements(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, unsigned long, void const *, float *);
// private: bool c_replication_entity_manager::calculate_creation_requirements(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, void const *, float *);
// public: virtual void c_replication_entity_manager_view::write_request_description_to_string(struct s_replication_outgoing_request const *, void const *, long, char *);
// long network_time_since(unsigned long);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: unsigned long s_replication_outgoing_request::get_request_type(void) const;
// private: void c_replication_entity_manager::write_creation_description_to_string(long, void const *, long, char *);
// public: virtual long c_replication_entity_manager_view::terminator_required_bits(void) const;
// public: long c_replication_entity_manager_view::pending_creations_iterate(long) const;
// public: enum e_replication_entity_view_state c_replication_entity_manager_view::get_entity_view_state(long) const;
// public: virtual void c_replication_entity_manager_view::write_to_packet(struct s_replication_scheduler_client_write_to_packet_data *);
// public: c_replication_entity_packet_record::c_replication_entity_packet_record(void);
// public: static void * c_replication_entity_packet_record::operator new(unsigned int);
// private: bool c_replication_entity_manager_view::write_creation_to_packet(long, void const *, class c_bitstream *, long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *);
// private: bool c_replication_entity_manager::write_creation_to_packet(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, void const *, class c_bitstream *, long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *);
// private: bool c_replication_entity_manager_view::write_deletion_to_packet(long, void const *, class c_bitstream *, long);
// private: bool c_replication_entity_manager_view::write_update_to_packet(long, void const *, class c_bitstream *, long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *);
// private: bool c_replication_entity_manager::write_update_to_packet(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, void const *, class c_bitstream *, long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *);
// public: virtual void c_replication_entity_manager_view::write_terminator_to_packet(long, class c_bitstream *);
// private: void c_replication_entity_manager_view::record_entity_creation(long);
// private: void c_replication_entity_manager_view::record_entity_deletion(long);
// private: void c_replication_entity_manager_view::record_entity_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>);
// private: void c_replication_entity_manager_view::clear_entity_mask(long);
// public: virtual enum e_network_read_result c_replication_entity_manager_view::read_from_packet(struct s_received_packet_info const *, class c_bitstream *, long, struct s_replication_incoming_request *, long *);
// private: enum e_network_read_result c_replication_entity_manager::read_update_from_packet(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, struct s_received_packet_info const *, long, long *, struct s_replication_allocation_block *, class c_bitstream *);
// private: enum e_network_read_result c_replication_entity_manager::read_creation_from_packet(long, long *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, long *, struct s_replication_allocation_block *, class c_bitstream *);
// public: s_replication_entity_request_data::s_replication_entity_request_data(void);
// public: virtual void c_replication_entity_manager_view::process_incoming_request(struct s_replication_incoming_request *);
// private: void c_replication_entity_manager::process_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, struct s_replication_allocation_block *);
// private: void c_replication_entity_manager::process_creation(long, long, unsigned long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, struct s_replication_allocation_block *);
// private: bool c_replication_entity_manager_view::handle_incoming_creation(long, long, unsigned long, struct s_replication_allocation_block const *);
// public: virtual void c_replication_entity_manager_view::notify_packet_acknowledged(long, bool);
// public: virtual void c_replication_entity_manager_view::notify_packet_retired(long, bool, bool);
// public: void * c_replication_entity_packet_record::`scalar deleting destructor'(unsigned int);
// public: static void c_replication_entity_packet_record::operator delete(void *);
// public: void c_replication_entity_manager_view::validate(void) const;
// public: void c_replication_entity_packet_record::validate(void) const;
// public: void c_replication_entity_status_record::validate(void) const;
// public: void c_replication_entity_manager_view::create_entity(long);
// public: void c_replication_entity_manager_view::mark_entity_for_deletion(long);
// public: void c_replication_entity_manager_view::delete_entity_immediate(long);
// private: void c_replication_entity_manager_view::delete_entity_after_ack(long);
// public: bool c_replication_entity_manager_view::entity_is_active(long) const;
// public: bool c_replication_entity_manager_view::entity_is_marked_for_deletion(long) const;
// private: struct s_replication_entity_view_data * c_replication_entity_manager_view::get_entity(long);
// private: void c_replication_entity_manager_view::set_state(long, enum e_replication_entity_view_state);
// public: void c_replication_entity_manager_view::start_replication(void);
// public: void c_replication_entity_manager_view::stop_replication(void);
// public: c_replication_entity_packet_record::~c_replication_entity_packet_record(void);
// public: class c_replication_entity_status_record * c_replication_entity_packet_record::allocate_status_record(void);
// public: class c_replication_entity_update_record * c_replication_entity_packet_record::allocate_update_record(void);
// private: void * c_replication_entity_packet_record::allocate_internal(unsigned int);
// public: c_replication_entity_memory_block::c_replication_entity_memory_block(void);
// public: void * c_replication_entity_memory_block::allocate(long);
// unsigned long align_up(unsigned long, long);
// public: static void * c_replication_entity_memory_block::operator new(unsigned int);
// public: static void c_replication_entity_memory_block::operator delete(void *);
// public: c_enum<enum e_replication_entity_view_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_replication_entity_view_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>(enum e_replication_entity_view_state);
// public: enum e_replication_entity_view_state c_enum_no_init<enum e_replication_entity_view_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>::operator enum e_replication_entity_view_state(void) const;
// public: bool c_enum_no_init<enum e_replication_entity_view_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_replication_entity_view_state) const;
// public: bool c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_replication_entity_view_data_entity_flags) const;
// public: void c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_replication_entity_view_data_entity_flags, bool);
// public: struct s_replication_entity_data & s_static_array<struct s_replication_entity_data, 1024>::operator[]<long>(long);
// void prefetch<class c_replication_entity_update_record>(class c_replication_entity_update_record const *);
// void prefetch<class c_replication_entity_status_record>(class c_replication_entity_status_record const *);
// public: static bool c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_replication_entity_view_data_entity_flags);
// private: static unsigned short c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_replication_entity_view_data_entity_flags);

//public: void c_replication_entity_manager_view::initialize(long, class c_replication_entity_manager *)
//{
//    mangled_ppc("?initialize@c_replication_entity_manager_view@@QAAXJPAVc_replication_entity_manager@@@Z");
//};

//public: void s_replication_entity_view_data::clear(void)
//{
//    mangled_ppc("?clear@s_replication_entity_view_data@@QAAXXZ");
//};

//public: void c_replication_entity_manager_view::reset(void)
//{
//    mangled_ppc("?reset@c_replication_entity_manager_view@@QAAXXZ");
//};

//public: void c_replication_entity_manager_view::destroy(void)
//{
//    mangled_ppc("?destroy@c_replication_entity_manager_view@@QAAXXZ");
//};

//public: void c_replication_entity_manager_view::set_entity_dirty(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_entity_dirty@c_replication_entity_manager_view@@QAAXJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@@Z");
//};

//private: void c_replication_entity_manager_view::set_entity_mask(long)
//{
//    mangled_ppc("?set_entity_mask@c_replication_entity_manager_view@@AAAXJ@Z");
//};

//public: virtual bool c_replication_entity_manager_view::has_data_to_transmit(void)
//{
//    mangled_ppc("?has_data_to_transmit@c_replication_entity_manager_view@@UAA_NXZ");
//};

//public: virtual long c_replication_entity_manager_view::build_outgoing_requests(void const *, long, struct s_replication_outgoing_request *)
//{
//    mangled_ppc("?build_outgoing_requests@c_replication_entity_manager_view@@UAAJPBXJPAUs_replication_outgoing_request@@@Z");
//};

//private: bool c_replication_entity_manager::calculate_deletion_requirements(long, void const *, float *)
//{
//    mangled_ppc("?calculate_deletion_requirements@c_replication_entity_manager@@AAA_NJPBXPAM@Z");
//};

//private: bool c_replication_entity_manager::calculate_update_requirements(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, unsigned long, void const *, float *)
//{
//    mangled_ppc("?calculate_update_requirements@c_replication_entity_manager@@AAA_NJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@KPBXPAM@Z");
//};

//private: bool c_replication_entity_manager::calculate_creation_requirements(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, void const *, float *)
//{
//    mangled_ppc("?calculate_creation_requirements@c_replication_entity_manager@@AAA_NJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PBXPAM@Z");
//};

//public: virtual void c_replication_entity_manager_view::write_request_description_to_string(struct s_replication_outgoing_request const *, void const *, long, char *)
//{
//    mangled_ppc("?write_request_description_to_string@c_replication_entity_manager_view@@UAAXPBUs_replication_outgoing_request@@PBXJPAD@Z");
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

//public: unsigned long s_replication_outgoing_request::get_request_type(void) const
//{
//    mangled_ppc("?get_request_type@s_replication_outgoing_request@@QBAKXZ");
//};

//private: void c_replication_entity_manager::write_creation_description_to_string(long, void const *, long, char *)
//{
//    mangled_ppc("?write_creation_description_to_string@c_replication_entity_manager@@AAAXJPBXJPAD@Z");
//};

//public: virtual long c_replication_entity_manager_view::terminator_required_bits(void) const
//{
//    mangled_ppc("?terminator_required_bits@c_replication_entity_manager_view@@UBAJXZ");
//};

//public: long c_replication_entity_manager_view::pending_creations_iterate(long) const
//{
//    mangled_ppc("?pending_creations_iterate@c_replication_entity_manager_view@@QBAJJ@Z");
//};

//public: enum e_replication_entity_view_state c_replication_entity_manager_view::get_entity_view_state(long) const
//{
//    mangled_ppc("?get_entity_view_state@c_replication_entity_manager_view@@QBA?AW4e_replication_entity_view_state@@J@Z");
//};

//public: virtual void c_replication_entity_manager_view::write_to_packet(struct s_replication_scheduler_client_write_to_packet_data *)
//{
//    mangled_ppc("?write_to_packet@c_replication_entity_manager_view@@UAAXPAUs_replication_scheduler_client_write_to_packet_data@@@Z");
//};

//public: c_replication_entity_packet_record::c_replication_entity_packet_record(void)
//{
//    mangled_ppc("??0c_replication_entity_packet_record@@QAA@XZ");
//};

//public: static void * c_replication_entity_packet_record::operator new(unsigned int)
//{
//    mangled_ppc("??2c_replication_entity_packet_record@@SAPAXI@Z");
//};

//private: bool c_replication_entity_manager_view::write_creation_to_packet(long, void const *, class c_bitstream *, long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?write_creation_to_packet@c_replication_entity_manager_view@@AAA_NJPBXPAVc_bitstream@@JPAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@@Z");
//};

//private: bool c_replication_entity_manager::write_creation_to_packet(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, void const *, class c_bitstream *, long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?write_creation_to_packet@c_replication_entity_manager@@AAA_NJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PBXPAVc_bitstream@@JPAV2@@Z");
//};

//private: bool c_replication_entity_manager_view::write_deletion_to_packet(long, void const *, class c_bitstream *, long)
//{
//    mangled_ppc("?write_deletion_to_packet@c_replication_entity_manager_view@@AAA_NJPBXPAVc_bitstream@@J@Z");
//};

//private: bool c_replication_entity_manager_view::write_update_to_packet(long, void const *, class c_bitstream *, long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?write_update_to_packet@c_replication_entity_manager_view@@AAA_NJPBXPAVc_bitstream@@JPAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@@Z");
//};

//private: bool c_replication_entity_manager::write_update_to_packet(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, void const *, class c_bitstream *, long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?write_update_to_packet@c_replication_entity_manager@@AAA_NJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PBXPAVc_bitstream@@JPAV2@@Z");
//};

//public: virtual void c_replication_entity_manager_view::write_terminator_to_packet(long, class c_bitstream *)
//{
//    mangled_ppc("?write_terminator_to_packet@c_replication_entity_manager_view@@UAAXJPAVc_bitstream@@@Z");
//};

//private: void c_replication_entity_manager_view::record_entity_creation(long)
//{
//    mangled_ppc("?record_entity_creation@c_replication_entity_manager_view@@AAAXJ@Z");
//};

//private: void c_replication_entity_manager_view::record_entity_deletion(long)
//{
//    mangled_ppc("?record_entity_deletion@c_replication_entity_manager_view@@AAAXJ@Z");
//};

//private: void c_replication_entity_manager_view::record_entity_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?record_entity_update@c_replication_entity_manager_view@@AAAXJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@@Z");
//};

//private: void c_replication_entity_manager_view::clear_entity_mask(long)
//{
//    mangled_ppc("?clear_entity_mask@c_replication_entity_manager_view@@AAAXJ@Z");
//};

//public: virtual enum e_network_read_result c_replication_entity_manager_view::read_from_packet(struct s_received_packet_info const *, class c_bitstream *, long, struct s_replication_incoming_request *, long *)
//{
//    mangled_ppc("?read_from_packet@c_replication_entity_manager_view@@UAA?AW4e_network_read_result@@PBUs_received_packet_info@@PAVc_bitstream@@JPAUs_replication_incoming_request@@PAJ@Z");
//};

//private: enum e_network_read_result c_replication_entity_manager::read_update_from_packet(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, struct s_received_packet_info const *, long, long *, struct s_replication_allocation_block *, class c_bitstream *)
//{
//    mangled_ppc("?read_update_from_packet@c_replication_entity_manager@@AAA?AW4e_network_read_result@@JPAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@PBUs_received_packet_info@@JPAJPAUs_replication_allocation_block@@PAVc_bitstream@@@Z");
//};

//private: enum e_network_read_result c_replication_entity_manager::read_creation_from_packet(long, long *, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver> *, long, long *, struct s_replication_allocation_block *, class c_bitstream *)
//{
//    mangled_ppc("?read_creation_from_packet@c_replication_entity_manager@@AAA?AW4e_network_read_result@@JPAJPAV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@J0PAUs_replication_allocation_block@@PAVc_bitstream@@@Z");
//};

//public: s_replication_entity_request_data::s_replication_entity_request_data(void)
//{
//    mangled_ppc("??0s_replication_entity_request_data@@QAA@XZ");
//};

//public: virtual void c_replication_entity_manager_view::process_incoming_request(struct s_replication_incoming_request *)
//{
//    mangled_ppc("?process_incoming_request@c_replication_entity_manager_view@@UAAXPAUs_replication_incoming_request@@@Z");
//};

//private: void c_replication_entity_manager::process_update(long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, struct s_replication_allocation_block *)
//{
//    mangled_ppc("?process_update@c_replication_entity_manager@@AAAXJV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAUs_replication_allocation_block@@@Z");
//};

//private: void c_replication_entity_manager::process_creation(long, long, unsigned long, class c_flags<long, unsigned __int64, 64, struct s_default_enum_string_resolver>, long, struct s_replication_allocation_block *)
//{
//    mangled_ppc("?process_creation@c_replication_entity_manager@@AAAXJJKV?$c_flags@J_K$0EA@Us_default_enum_string_resolver@@@@JPAUs_replication_allocation_block@@@Z");
//};

//private: bool c_replication_entity_manager_view::handle_incoming_creation(long, long, unsigned long, struct s_replication_allocation_block const *)
//{
//    mangled_ppc("?handle_incoming_creation@c_replication_entity_manager_view@@AAA_NJJKPBUs_replication_allocation_block@@@Z");
//};

//public: virtual void c_replication_entity_manager_view::notify_packet_acknowledged(long, bool)
//{
//    mangled_ppc("?notify_packet_acknowledged@c_replication_entity_manager_view@@UAAXJ_N@Z");
//};

//public: virtual void c_replication_entity_manager_view::notify_packet_retired(long, bool, bool)
//{
//    mangled_ppc("?notify_packet_retired@c_replication_entity_manager_view@@UAAXJ_N0@Z");
//};

//public: void * c_replication_entity_packet_record::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_replication_entity_packet_record@@QAAPAXI@Z");
//};

//public: static void c_replication_entity_packet_record::operator delete(void *)
//{
//    mangled_ppc("??3c_replication_entity_packet_record@@SAXPAX@Z");
//};

//public: void c_replication_entity_manager_view::validate(void) const
//{
//    mangled_ppc("?validate@c_replication_entity_manager_view@@QBAXXZ");
//};

//public: void c_replication_entity_packet_record::validate(void) const
//{
//    mangled_ppc("?validate@c_replication_entity_packet_record@@QBAXXZ");
//};

//public: void c_replication_entity_status_record::validate(void) const
//{
//    mangled_ppc("?validate@c_replication_entity_status_record@@QBAXXZ");
//};

//public: void c_replication_entity_manager_view::create_entity(long)
//{
//    mangled_ppc("?create_entity@c_replication_entity_manager_view@@QAAXJ@Z");
//};

//public: void c_replication_entity_manager_view::mark_entity_for_deletion(long)
//{
//    mangled_ppc("?mark_entity_for_deletion@c_replication_entity_manager_view@@QAAXJ@Z");
//};

//public: void c_replication_entity_manager_view::delete_entity_immediate(long)
//{
//    mangled_ppc("?delete_entity_immediate@c_replication_entity_manager_view@@QAAXJ@Z");
//};

//private: void c_replication_entity_manager_view::delete_entity_after_ack(long)
//{
//    mangled_ppc("?delete_entity_after_ack@c_replication_entity_manager_view@@AAAXJ@Z");
//};

//public: bool c_replication_entity_manager_view::entity_is_active(long) const
//{
//    mangled_ppc("?entity_is_active@c_replication_entity_manager_view@@QBA_NJ@Z");
//};

//public: bool c_replication_entity_manager_view::entity_is_marked_for_deletion(long) const
//{
//    mangled_ppc("?entity_is_marked_for_deletion@c_replication_entity_manager_view@@QBA_NJ@Z");
//};

//private: struct s_replication_entity_view_data * c_replication_entity_manager_view::get_entity(long)
//{
//    mangled_ppc("?get_entity@c_replication_entity_manager_view@@AAAPAUs_replication_entity_view_data@@J@Z");
//};

//private: void c_replication_entity_manager_view::set_state(long, enum e_replication_entity_view_state)
//{
//    mangled_ppc("?set_state@c_replication_entity_manager_view@@AAAXJW4e_replication_entity_view_state@@@Z");
//};

//public: void c_replication_entity_manager_view::start_replication(void)
//{
//    mangled_ppc("?start_replication@c_replication_entity_manager_view@@QAAXXZ");
//};

//public: void c_replication_entity_manager_view::stop_replication(void)
//{
//    mangled_ppc("?stop_replication@c_replication_entity_manager_view@@QAAXXZ");
//};

//public: c_replication_entity_packet_record::~c_replication_entity_packet_record(void)
//{
//    mangled_ppc("??1c_replication_entity_packet_record@@QAA@XZ");
//};

//public: class c_replication_entity_status_record * c_replication_entity_packet_record::allocate_status_record(void)
//{
//    mangled_ppc("?allocate_status_record@c_replication_entity_packet_record@@QAAPAVc_replication_entity_status_record@@XZ");
//};

//public: class c_replication_entity_update_record * c_replication_entity_packet_record::allocate_update_record(void)
//{
//    mangled_ppc("?allocate_update_record@c_replication_entity_packet_record@@QAAPAVc_replication_entity_update_record@@XZ");
//};

//private: void * c_replication_entity_packet_record::allocate_internal(unsigned int)
//{
//    mangled_ppc("?allocate_internal@c_replication_entity_packet_record@@AAAPAXI@Z");
//};

//public: c_replication_entity_memory_block::c_replication_entity_memory_block(void)
//{
//    mangled_ppc("??0c_replication_entity_memory_block@@QAA@XZ");
//};

//public: void * c_replication_entity_memory_block::allocate(long)
//{
//    mangled_ppc("?allocate@c_replication_entity_memory_block@@QAAPAXJ@Z");
//};

//unsigned long align_up(unsigned long, long)
//{
//    mangled_ppc("?align_up@@YAKKJ@Z");
//};

//public: static void * c_replication_entity_memory_block::operator new(unsigned int)
//{
//    mangled_ppc("??2c_replication_entity_memory_block@@SAPAXI@Z");
//};

//public: static void c_replication_entity_memory_block::operator delete(void *)
//{
//    mangled_ppc("??3c_replication_entity_memory_block@@SAXPAX@Z");
//};

//public: c_enum<enum e_replication_entity_view_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_replication_entity_view_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>(enum e_replication_entity_view_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_replication_entity_view_state@@G$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_replication_entity_view_state@@@Z");
//};

//public: enum e_replication_entity_view_state c_enum_no_init<enum e_replication_entity_view_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>::operator enum e_replication_entity_view_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_replication_entity_view_state@@G$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_replication_entity_view_state@@XZ");
//};

//public: bool c_enum_no_init<enum e_replication_entity_view_state, unsigned short, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_replication_entity_view_state) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_replication_entity_view_state@@G$0A@$05Us_default_enum_string_resolver@@@@QBA_NW4e_replication_entity_view_state@@@Z");
//};

//public: bool c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::test(enum e_replication_entity_view_data_entity_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_replication_entity_view_data_entity_flags@@G$00Us_default_enum_string_resolver@@@@QBA_NW4e_replication_entity_view_data_entity_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::set(enum e_replication_entity_view_data_entity_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_replication_entity_view_data_entity_flags@@G$00Us_default_enum_string_resolver@@@@QAAXW4e_replication_entity_view_data_entity_flags@@_N@Z");
//};

//public: struct s_replication_entity_data & s_static_array<struct s_replication_entity_data, 1024>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_replication_entity_data@@$0EAA@@@QAAAAUs_replication_entity_data@@J@Z");
//};

//void prefetch<class c_replication_entity_update_record>(class c_replication_entity_update_record const *)
//{
//    mangled_ppc("??$prefetch@Vc_replication_entity_update_record@@@@YAXPBVc_replication_entity_update_record@@@Z");
//};

//void prefetch<class c_replication_entity_status_record>(class c_replication_entity_status_record const *)
//{
//    mangled_ppc("??$prefetch@Vc_replication_entity_status_record@@@@YAXPBVc_replication_entity_status_record@@@Z");
//};

//public: static bool c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_replication_entity_view_data_entity_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_replication_entity_view_data_entity_flags@@G$00Us_default_enum_string_resolver@@@@SA_NW4e_replication_entity_view_data_entity_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_replication_entity_view_data_entity_flags, unsigned short, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_replication_entity_view_data_entity_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_replication_entity_view_data_entity_flags@@G$00Us_default_enum_string_resolver@@@@CAGW4e_replication_entity_view_data_entity_flags@@@Z");
//};

