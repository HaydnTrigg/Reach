/* ---------- headers */

#include "omaha\networking\messages\network_message_queue.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void bitwise_rle_compress(unsigned char *, unsigned long, unsigned char *, unsigned long *, unsigned long, unsigned long);
// void bitwise_rle_decompress(unsigned char *, unsigned long, unsigned char *, unsigned long *, unsigned long, unsigned long);
// void simple_bitwise_rle_compress(unsigned char *, unsigned long, unsigned char *, unsigned long *, unsigned long, unsigned long);
// void simple_bitwise_rle_decompress(unsigned char *, unsigned long, unsigned char *, unsigned long *, unsigned long, unsigned long);
// public: c_network_message_queue::c_network_message_queue(void);
// public: virtual char const * c_network_message_queue::get_client_name(void) const;
// public: virtual bool c_network_message_queue::connection_lost(enum e_network_channel_closure_reason *) const;
// public: c_network_message_queue::~c_network_message_queue(void);
// public: bool c_network_message_queue::allocated(void) const;
// public: void c_network_message_queue::allocate(char const *, class c_network_message_type_collection const *);
// public: void c_network_message_queue::deallocate(void);
// public: void c_network_message_queue::reset(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// public: void c_network_message_queue::reset_for_channel_connection(void);
// public: void c_network_message_queue::force_establishment(void);
// public: void c_network_message_queue::configure(long);
// public: void c_network_message_queue::set_fragment_send_count(long);
// public: virtual bool c_network_message_queue::has_data_to_transmit(bool *) const;
// private: struct c_network_message_queue::s_outgoing_fragment_record const * c_network_message_queue::get_first_outgoing_fragment(void) const;
// public: virtual long c_network_message_queue::space_required_bits(long, long);
// public: virtual bool c_network_message_queue::write_to_packet(long, class c_bitstream *, long, long);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: unsigned char c_network_message_queue::s_outgoing_fragment_record::fragment_size_bytes(void) const;
// public: bool c_network_message_queue::s_outgoing_fragment_record::in_flight(void) const;
// public: void c_network_message_queue::s_outgoing_fragment_record::set_in_flight(long, bool);
// private: struct c_network_message_queue::s_outgoing_fragment_record * c_network_message_queue::get_first_outgoing_fragment(void);
// public: virtual enum e_network_read_result c_network_message_queue::read_from_packet(struct s_received_packet_info *, class c_bitstream *);
// public: virtual void c_network_message_queue::notify_packet_acknowledged(long, bool);
// public: virtual void c_network_message_queue::notify_packet_retired(long, bool, bool);
// public: void c_network_message_queue::reserve_first_fragment(void);
// public: void c_network_message_queue::send_message_in_first_fragment(enum e_network_message_type, long, void const *, unsigned char);
// private: void c_network_message_queue::message_compare(enum e_network_message_type, long, void const *, class c_bitstream *, long);
// private: void c_network_message_queue::message_compress(struct s_message_storage *, bool *, long *, long *, long *);
// public: void c_network_message_queue::send_message(enum e_network_message_type, long, void const *, unsigned char);
// public: bool c_network_message_queue::retrieve_message(enum e_network_message_type *, long *, long, unsigned char *);
// private: struct c_network_message_queue::s_incoming_fragment_record * c_network_message_queue::get_first_incoming_fragment(void);
// public: void c_network_message_queue::get_connection_status(struct s_network_message_queue_status *) const;
// public: long c_network_message_queue::get_space_available_bytes(void) const;
// public: long c_network_message_queue::get_space_available_fragments(void) const;
// public: bool c_network_message_queue::has_messages(void) const;
// public: bool c_network_message_queue::has_outgoing_messages(void) const;
// public: long c_network_message_queue::get_message_space_maximum_size_bytes(void) const;
// public: long c_network_message_queue::get_outgoing_fragment_count(enum e_network_message_type, unsigned char) const;
// public: void c_network_message_queue::generate_outgoing_message_summary(void) const;
// public: void c_network_message_queue::set_send_logging_enabled(bool);
// private: struct c_network_message_queue::s_outgoing_fragment_record * c_network_message_queue::allocate_last_outgoing_fragment(long);
// private: void c_network_message_queue::free_first_outgoing_fragment(struct c_network_message_queue::s_outgoing_fragment_record *);
// private: struct c_network_message_queue::s_incoming_fragment_record * c_network_message_queue::allocate_last_incoming_fragment(long);
// private: void c_network_message_queue::free_first_incoming_fragment(void);
// private: bool c_network_message_queue::handle_fragment(long, bool, bool, long, long, void const *);
// private: void c_network_message_queue::abstract_contents_add_fragment(struct c_network_message_queue::s_outgoing_fragment_record const *);
// private: void c_network_message_queue::abstract_contents_remove_fragment(struct c_network_message_queue::s_outgoing_fragment_record const *);
// private: bool c_network_message_queue::abstract_contents_is_empty(void);
// private: void c_network_message_queue::propagate_configuration_values(void);
// public: c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>::c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>(enum e_network_message_type);
// public: enum e_network_message_type c_enum_no_init<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>::operator enum e_network_message_type(void) const;
// public: bool c_enum_no_init<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>::operator==(enum e_network_message_type) const;
// public: void s_static_array<float, 49>::set_all(float const &);
// public: void s_static_array<unsigned long, 49>::set_all(unsigned long const &);
// public: bool c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::test(long) const;
// public: void c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::set(long, bool);
// public: bool c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::test_range(long, long) const;
// public: void c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: unsigned long & s_static_array<unsigned long, 49>::operator[]<class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>);
// public: float & s_static_array<float, 49>::operator[]<class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>);
// public: struct c_network_message_queue::s_network_message_queue_message_presence const & s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence, 49>::operator[]<enum e_network_message_type>(enum e_network_message_type) const;
// public: struct c_network_message_queue::s_network_message_queue_message_presence_per_userdata const & s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence_per_userdata, 4>::operator[]<long>(long) const;
// public: struct c_network_message_queue::s_network_message_queue_message_presence & s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence, 49>::operator[]<class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>);
// public: struct c_network_message_queue::s_network_message_queue_message_presence_per_userdata & s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence_per_userdata, 4>::operator[]<long>(long);
// public: struct c_network_message_queue::s_network_message_queue_message_presence & s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence, 49>::operator[]<long>(long);
// public: bool c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: class c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver> const &) const;
// public: static class c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::make_mask_from_range(long, long);
// public: static bool c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::valid_bit(long);
// public: bool c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::flag_size_type(long);
// public: static bool s_static_array<unsigned long, 49>::valid<class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>);
// public: static bool s_static_array<float, 49>::valid<class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>);
// public: static bool s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence, 49>::valid<enum e_network_message_type>(enum e_network_message_type);
// public: static bool s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence_per_userdata, 4>::valid<long>(long);
// public: static bool s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence, 49>::valid<class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>);
// public: static bool s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence, 49>::valid<long>(long);
// private: static unsigned char c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long);
// private: static unsigned char c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);

//void bitwise_rle_compress(unsigned char *, unsigned long, unsigned char *, unsigned long *, unsigned long, unsigned long)
//{
//    mangled_ppc("?bitwise_rle_compress@@YAXPAEK0PAKKK@Z");
//};

//void bitwise_rle_decompress(unsigned char *, unsigned long, unsigned char *, unsigned long *, unsigned long, unsigned long)
//{
//    mangled_ppc("?bitwise_rle_decompress@@YAXPAEK0PAKKK@Z");
//};

//void simple_bitwise_rle_compress(unsigned char *, unsigned long, unsigned char *, unsigned long *, unsigned long, unsigned long)
//{
//    mangled_ppc("?simple_bitwise_rle_compress@@YAXPAEK0PAKKK@Z");
//};

//void simple_bitwise_rle_decompress(unsigned char *, unsigned long, unsigned char *, unsigned long *, unsigned long, unsigned long)
//{
//    mangled_ppc("?simple_bitwise_rle_decompress@@YAXPAEK0PAKKK@Z");
//};

//public: c_network_message_queue::c_network_message_queue(void)
//{
//    mangled_ppc("??0c_network_message_queue@@QAA@XZ");
//};

//public: virtual char const * c_network_message_queue::get_client_name(void) const
//{
//    mangled_ppc("?get_client_name@c_network_message_queue@@UBAPBDXZ");
//};

//public: virtual bool c_network_message_queue::connection_lost(enum e_network_channel_closure_reason *) const
//{
//    mangled_ppc("?connection_lost@c_network_message_queue@@UBA_NPAW4e_network_channel_closure_reason@@@Z");
//};

//public: c_network_message_queue::~c_network_message_queue(void)
//{
//    mangled_ppc("??1c_network_message_queue@@QAA@XZ");
//};

//public: bool c_network_message_queue::allocated(void) const
//{
//    mangled_ppc("?allocated@c_network_message_queue@@QBA_NXZ");
//};

//public: void c_network_message_queue::allocate(char const *, class c_network_message_type_collection const *)
//{
//    mangled_ppc("?allocate@c_network_message_queue@@QAAXPBDPBVc_network_message_type_collection@@@Z");
//};

//public: void c_network_message_queue::deallocate(void)
//{
//    mangled_ppc("?deallocate@c_network_message_queue@@QAAXXZ");
//};

//public: void c_network_message_queue::reset(void)
//{
//    mangled_ppc("?reset@c_network_message_queue@@QAAXXZ");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//public: void c_network_message_queue::reset_for_channel_connection(void)
//{
//    mangled_ppc("?reset_for_channel_connection@c_network_message_queue@@QAAXXZ");
//};

//public: void c_network_message_queue::force_establishment(void)
//{
//    mangled_ppc("?force_establishment@c_network_message_queue@@QAAXXZ");
//};

//public: void c_network_message_queue::configure(long)
//{
//    mangled_ppc("?configure@c_network_message_queue@@QAAXJ@Z");
//};

//public: void c_network_message_queue::set_fragment_send_count(long)
//{
//    mangled_ppc("?set_fragment_send_count@c_network_message_queue@@QAAXJ@Z");
//};

//public: virtual bool c_network_message_queue::has_data_to_transmit(bool *) const
//{
//    mangled_ppc("?has_data_to_transmit@c_network_message_queue@@UBA_NPA_N@Z");
//};

//private: struct c_network_message_queue::s_outgoing_fragment_record const * c_network_message_queue::get_first_outgoing_fragment(void) const
//{
//    mangled_ppc("?get_first_outgoing_fragment@c_network_message_queue@@ABAPBUs_outgoing_fragment_record@1@XZ");
//};

//public: virtual long c_network_message_queue::space_required_bits(long, long)
//{
//    mangled_ppc("?space_required_bits@c_network_message_queue@@UAAJJJ@Z");
//};

//public: virtual bool c_network_message_queue::write_to_packet(long, class c_bitstream *, long, long)
//{
//    mangled_ppc("?write_to_packet@c_network_message_queue@@UAA_NJPAVc_bitstream@@JJ@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//public: unsigned char c_network_message_queue::s_outgoing_fragment_record::fragment_size_bytes(void) const
//{
//    mangled_ppc("?fragment_size_bytes@s_outgoing_fragment_record@c_network_message_queue@@QBAEXZ");
//};

//public: bool c_network_message_queue::s_outgoing_fragment_record::in_flight(void) const
//{
//    mangled_ppc("?in_flight@s_outgoing_fragment_record@c_network_message_queue@@QBA_NXZ");
//};

//public: void c_network_message_queue::s_outgoing_fragment_record::set_in_flight(long, bool)
//{
//    mangled_ppc("?set_in_flight@s_outgoing_fragment_record@c_network_message_queue@@QAAXJ_N@Z");
//};

//private: struct c_network_message_queue::s_outgoing_fragment_record * c_network_message_queue::get_first_outgoing_fragment(void)
//{
//    mangled_ppc("?get_first_outgoing_fragment@c_network_message_queue@@AAAPAUs_outgoing_fragment_record@1@XZ");
//};

//public: virtual enum e_network_read_result c_network_message_queue::read_from_packet(struct s_received_packet_info *, class c_bitstream *)
//{
//    mangled_ppc("?read_from_packet@c_network_message_queue@@UAA?AW4e_network_read_result@@PAUs_received_packet_info@@PAVc_bitstream@@@Z");
//};

//public: virtual void c_network_message_queue::notify_packet_acknowledged(long, bool)
//{
//    mangled_ppc("?notify_packet_acknowledged@c_network_message_queue@@UAAXJ_N@Z");
//};

//public: virtual void c_network_message_queue::notify_packet_retired(long, bool, bool)
//{
//    mangled_ppc("?notify_packet_retired@c_network_message_queue@@UAAXJ_N0@Z");
//};

//public: void c_network_message_queue::reserve_first_fragment(void)
//{
//    mangled_ppc("?reserve_first_fragment@c_network_message_queue@@QAAXXZ");
//};

//public: void c_network_message_queue::send_message_in_first_fragment(enum e_network_message_type, long, void const *, unsigned char)
//{
//    mangled_ppc("?send_message_in_first_fragment@c_network_message_queue@@QAAXW4e_network_message_type@@JPBXE@Z");
//};

//private: void c_network_message_queue::message_compare(enum e_network_message_type, long, void const *, class c_bitstream *, long)
//{
//    mangled_ppc("?message_compare@c_network_message_queue@@AAAXW4e_network_message_type@@JPBXPAVc_bitstream@@J@Z");
//};

//private: void c_network_message_queue::message_compress(struct s_message_storage *, bool *, long *, long *, long *)
//{
//    mangled_ppc("?message_compress@c_network_message_queue@@AAAXPAUs_message_storage@@PA_NPAJ22@Z");
//};

//public: void c_network_message_queue::send_message(enum e_network_message_type, long, void const *, unsigned char)
//{
//    mangled_ppc("?send_message@c_network_message_queue@@QAAXW4e_network_message_type@@JPBXE@Z");
//};

//public: bool c_network_message_queue::retrieve_message(enum e_network_message_type *, long *, long, unsigned char *)
//{
//    mangled_ppc("?retrieve_message@c_network_message_queue@@QAA_NPAW4e_network_message_type@@PAJJPAE@Z");
//};

//private: struct c_network_message_queue::s_incoming_fragment_record * c_network_message_queue::get_first_incoming_fragment(void)
//{
//    mangled_ppc("?get_first_incoming_fragment@c_network_message_queue@@AAAPAUs_incoming_fragment_record@1@XZ");
//};

//public: void c_network_message_queue::get_connection_status(struct s_network_message_queue_status *) const
//{
//    mangled_ppc("?get_connection_status@c_network_message_queue@@QBAXPAUs_network_message_queue_status@@@Z");
//};

//public: long c_network_message_queue::get_space_available_bytes(void) const
//{
//    mangled_ppc("?get_space_available_bytes@c_network_message_queue@@QBAJXZ");
//};

//public: long c_network_message_queue::get_space_available_fragments(void) const
//{
//    mangled_ppc("?get_space_available_fragments@c_network_message_queue@@QBAJXZ");
//};

//public: bool c_network_message_queue::has_messages(void) const
//{
//    mangled_ppc("?has_messages@c_network_message_queue@@QBA_NXZ");
//};

//public: bool c_network_message_queue::has_outgoing_messages(void) const
//{
//    mangled_ppc("?has_outgoing_messages@c_network_message_queue@@QBA_NXZ");
//};

//public: long c_network_message_queue::get_message_space_maximum_size_bytes(void) const
//{
//    mangled_ppc("?get_message_space_maximum_size_bytes@c_network_message_queue@@QBAJXZ");
//};

//public: long c_network_message_queue::get_outgoing_fragment_count(enum e_network_message_type, unsigned char) const
//{
//    mangled_ppc("?get_outgoing_fragment_count@c_network_message_queue@@QBAJW4e_network_message_type@@E@Z");
//};

//public: void c_network_message_queue::generate_outgoing_message_summary(void) const
//{
//    mangled_ppc("?generate_outgoing_message_summary@c_network_message_queue@@QBAXXZ");
//};

//public: void c_network_message_queue::set_send_logging_enabled(bool)
//{
//    mangled_ppc("?set_send_logging_enabled@c_network_message_queue@@QAAX_N@Z");
//};

//private: struct c_network_message_queue::s_outgoing_fragment_record * c_network_message_queue::allocate_last_outgoing_fragment(long)
//{
//    mangled_ppc("?allocate_last_outgoing_fragment@c_network_message_queue@@AAAPAUs_outgoing_fragment_record@1@J@Z");
//};

//private: void c_network_message_queue::free_first_outgoing_fragment(struct c_network_message_queue::s_outgoing_fragment_record *)
//{
//    mangled_ppc("?free_first_outgoing_fragment@c_network_message_queue@@AAAXPAUs_outgoing_fragment_record@1@@Z");
//};

//private: struct c_network_message_queue::s_incoming_fragment_record * c_network_message_queue::allocate_last_incoming_fragment(long)
//{
//    mangled_ppc("?allocate_last_incoming_fragment@c_network_message_queue@@AAAPAUs_incoming_fragment_record@1@J@Z");
//};

//private: void c_network_message_queue::free_first_incoming_fragment(void)
//{
//    mangled_ppc("?free_first_incoming_fragment@c_network_message_queue@@AAAXXZ");
//};

//private: bool c_network_message_queue::handle_fragment(long, bool, bool, long, long, void const *)
//{
//    mangled_ppc("?handle_fragment@c_network_message_queue@@AAA_NJ_N0JJPBX@Z");
//};

//private: void c_network_message_queue::abstract_contents_add_fragment(struct c_network_message_queue::s_outgoing_fragment_record const *)
//{
//    mangled_ppc("?abstract_contents_add_fragment@c_network_message_queue@@AAAXPBUs_outgoing_fragment_record@1@@Z");
//};

//private: void c_network_message_queue::abstract_contents_remove_fragment(struct c_network_message_queue::s_outgoing_fragment_record const *)
//{
//    mangled_ppc("?abstract_contents_remove_fragment@c_network_message_queue@@AAAXPBUs_outgoing_fragment_record@1@@Z");
//};

//private: bool c_network_message_queue::abstract_contents_is_empty(void)
//{
//    mangled_ppc("?abstract_contents_is_empty@c_network_message_queue@@AAA_NXZ");
//};

//private: void c_network_message_queue::propagate_configuration_values(void)
//{
//    mangled_ppc("?propagate_configuration_values@c_network_message_queue@@AAAXXZ");
//};

//public: c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>::c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>(enum e_network_message_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_message_type@@D$0A@$0DB@Us_default_enum_string_resolver@@@@QAA@W4e_network_message_type@@@Z");
//};

//public: enum e_network_message_type c_enum_no_init<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>::operator enum e_network_message_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_network_message_type@@D$0A@$0DB@Us_default_enum_string_resolver@@@@QBA?AW4e_network_message_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>::operator==(enum e_network_message_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_network_message_type@@D$0A@$0DB@Us_default_enum_string_resolver@@@@QBA_NW4e_network_message_type@@@Z");
//};

//public: void s_static_array<float, 49>::set_all(float const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@M$0DB@@@QAAXABM@Z");
//};

//public: void s_static_array<unsigned long, 49>::set_all(unsigned long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@K$0DB@@@QAAXABK@Z");
//};

//public: bool c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::test(long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@JE$06Us_default_enum_string_resolver@@@@QBA_NJ@Z");
//};

//public: void c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@JE$06Us_default_enum_string_resolver@@@@QAAXJ_N@Z");
//};

//public: bool c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::test_range(long, long) const
//{
//    mangled_ppc("?test_range@?$c_flags_no_init@JE$06Us_default_enum_string_resolver@@@@QBA_NJJ@Z");
//};

//public: void c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@JE$06Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: unsigned long & s_static_array<unsigned long, 49>::operator[]<class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$?AV?$c_enum@W4e_network_message_type@@D$0A@$0DB@Us_default_enum_string_resolver@@@@@?$s_static_array@K$0DB@@@QAAAAKV?$c_enum@W4e_network_message_type@@D$0A@$0DB@Us_default_enum_string_resolver@@@@@Z");
//};

//public: float & s_static_array<float, 49>::operator[]<class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$?AV?$c_enum@W4e_network_message_type@@D$0A@$0DB@Us_default_enum_string_resolver@@@@@?$s_static_array@M$0DB@@@QAAAAMV?$c_enum@W4e_network_message_type@@D$0A@$0DB@Us_default_enum_string_resolver@@@@@Z");
//};

//public: struct c_network_message_queue::s_network_message_queue_message_presence const & s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence, 49>::operator[]<enum e_network_message_type>(enum e_network_message_type) const
//{
//    mangled_ppc("??$?AW4e_network_message_type@@@?$s_static_array@Us_network_message_queue_message_presence@c_network_message_queue@@$0DB@@@QBAABUs_network_message_queue_message_presence@c_network_message_queue@@W4e_network_message_type@@@Z");
//};

//public: struct c_network_message_queue::s_network_message_queue_message_presence_per_userdata const & s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence_per_userdata, 4>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_message_queue_message_presence_per_userdata@c_network_message_queue@@$03@@QBAABUs_network_message_queue_message_presence_per_userdata@c_network_message_queue@@J@Z");
//};

//public: struct c_network_message_queue::s_network_message_queue_message_presence & s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence, 49>::operator[]<class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$?AV?$c_enum@W4e_network_message_type@@D$0A@$0DB@Us_default_enum_string_resolver@@@@@?$s_static_array@Us_network_message_queue_message_presence@c_network_message_queue@@$0DB@@@QAAAAUs_network_message_queue_message_presence@c_network_message_queue@@V?$c_enum@W4e_network_message_type@@D$0A@$0DB@Us_default_enum_string_resolver@@@@@Z");
//};

//public: struct c_network_message_queue::s_network_message_queue_message_presence_per_userdata & s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence_per_userdata, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_message_queue_message_presence_per_userdata@c_network_message_queue@@$03@@QAAAAUs_network_message_queue_message_presence_per_userdata@c_network_message_queue@@J@Z");
//};

//public: struct c_network_message_queue::s_network_message_queue_message_presence & s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence, 49>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_message_queue_message_presence@c_network_message_queue@@$0DB@@@QAAAAUs_network_message_queue_message_presence@c_network_message_queue@@J@Z");
//};

//public: bool c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@JE$06Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: class c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??I?$c_flags_no_init@JE$06Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: static class c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::make_mask_from_range(long, long)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@JE$06Us_default_enum_string_resolver@@@@SA?AV1@JJ@Z");
//};

//public: static bool c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@JE$06Us_default_enum_string_resolver@@@@SA_NJ@Z");
//};

//public: bool c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@JE$06Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::flag_size_type(long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@JE$06Us_default_enum_string_resolver@@@@CAEJ@Z");
//};

//public: static bool s_static_array<unsigned long, 49>::valid<class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$valid@V?$c_enum@W4e_network_message_type@@D$0A@$0DB@Us_default_enum_string_resolver@@@@@?$s_static_array@K$0DB@@@SA_NV?$c_enum@W4e_network_message_type@@D$0A@$0DB@Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool s_static_array<float, 49>::valid<class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$valid@V?$c_enum@W4e_network_message_type@@D$0A@$0DB@Us_default_enum_string_resolver@@@@@?$s_static_array@M$0DB@@@SA_NV?$c_enum@W4e_network_message_type@@D$0A@$0DB@Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence, 49>::valid<enum e_network_message_type>(enum e_network_message_type)
//{
//    mangled_ppc("??$valid@W4e_network_message_type@@@?$s_static_array@Us_network_message_queue_message_presence@c_network_message_queue@@$0DB@@@SA_NW4e_network_message_type@@@Z");
//};

//public: static bool s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence_per_userdata, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_message_queue_message_presence_per_userdata@c_network_message_queue@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence, 49>::valid<class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_message_type, char, 0, 49, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$valid@V?$c_enum@W4e_network_message_type@@D$0A@$0DB@Us_default_enum_string_resolver@@@@@?$s_static_array@Us_network_message_queue_message_presence@c_network_message_queue@@$0DB@@@SA_NV?$c_enum@W4e_network_message_type@@D$0A@$0DB@Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool s_static_array<struct c_network_message_queue::s_network_message_queue_message_presence, 49>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_message_queue_message_presence@c_network_message_queue@@$0DB@@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@JE$06Us_default_enum_string_resolver@@@@CAEJ@Z");
//};

//private: static unsigned char c_flags_no_init<long, unsigned char, 7, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@JE$06Us_default_enum_string_resolver@@@@CAEXZ");
//};

