/* ---------- headers */

#include "omaha\networking\delivery\network_connection.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 8>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$07@@2JB"
// bool g_network_disable_out_of_order_packet_handling; // "?g_network_disable_out_of_order_packet_handling@@3_NA"

// public: void c_network_connection::allocate(char const *);
// public: void c_network_connection::deallocate(void);
// public: void c_network_connection::reset(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// public: virtual bool c_network_connection::has_data_to_transmit(bool *) const;
// public: virtual long c_network_connection::space_required_bits(long, long);
// public: virtual bool c_network_connection::write_to_packet(long, class c_bitstream *, long, long);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: s_static_array<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 8>::s_static_array<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 8>(void);
// public: virtual enum e_network_read_result c_network_connection::read_from_packet(struct s_received_packet_info *, class c_bitstream *);
// public: virtual void c_network_connection::notify_packet_acknowledged(long, bool);
// public: virtual void c_network_connection::notify_packet_retired(long, bool, bool);
// public: bool c_network_connection::are_outgoing_packets_in_flight(void) const;
// public: long c_network_connection::get_last_sequence_number(void) const;
// public: static long c_network_connection::get_sequence_range(void);
// public: long c_network_connection::get_safe_sequence_range(void) const;
// public: long c_network_connection::get_safe_sequence_range_remaining(void) const;
// public: long c_network_connection::generate_sequence_number(unsigned long);
// public: void c_network_connection::update_packet_events(void);
// public: enum e_network_packet_event c_network_connection::get_packet_event(long *, long *, long *, bool *);
// public: long c_network_connection::get_window_size_bytes(void) const;
// public: long c_network_connection::get_window_size_packets(void) const;
// public: long c_network_connection::get_timeout(void) const;
// public: void c_network_connection::get_connection_status(long *, long *, long *, long *, long *, long *, long *, long *, long *, long *) const;
// public: void c_network_connection::get_connection_stats(long *, long *, long *, long *, long *) const;
// private: struct c_network_connection::s_connection_incoming_packet * c_network_connection::get_incoming_packet(long);
// private: struct c_network_connection::s_connection_outgoing_packet * c_network_connection::get_outgoing_packet(long);
// private: enum e_network_read_result c_network_connection::handle_sequence_number(bool, long, long, struct s_received_packet_info *);
// public: void c_network_connection::notify_packet_about_to_be_sent(long);
// public: void c_network_connection::notify_packet_sent(long, long);
// public: void c_network_connection::notify_packet_received(struct s_received_packet_info const *);
// private: enum e_network_read_result c_network_connection::handle_acknowledgments(long, long, class c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128> const &, bool, unsigned long, long);
// private: bool c_network_connection::retire_packet(enum e_network_packet_event *, long *, long *, long *, bool *);
// long network_time_since(unsigned long);
// private: void c_network_connection::retire_incoming_packets(void);
// private: bool c_network_connection::remove_retired_packet(bool, long *, long *);
// private: void c_network_connection::encode_incoming_packet_state(class c_bitstream *, enum c_network_connection::e_incoming_packet_state) const;
// private: enum c_network_connection::e_incoming_packet_state c_network_connection::decode_incoming_packet_state(class c_bitstream *) const;
// public: c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>(enum c_network_connection::e_incoming_packet_state);
// public: enum c_network_connection::e_incoming_packet_state c_enum_no_init<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>::operator enum c_network_connection::e_incoming_packet_state(void) const;
// public: bool c_enum_no_init<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum c_network_connection::e_incoming_packet_state) const;
// public: void s_static_array<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 8>::set_all(class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver> const &);
// public: long c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::count(void) const;
// public: void c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::resize(long);
// public: void c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::push_back(class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver> const &);
// public: class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver> const & c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::operator[](long) const;
// public: class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver> & c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::operator[](long);
// public: c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>(void);
// public: bool c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::valid(void) const;
// public: bool c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::valid(long) const;
// public: long c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::push(void);
// public: class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver> * c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::get(long);
// public: bool c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::full(void) const;
// public: class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver> & s_static_array<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 8>::operator[]<long>(long);
// public: static bool s_static_array<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 8>::valid<long>(long);

//public: void c_network_connection::allocate(char const *)
//{
//    mangled_ppc("?allocate@c_network_connection@@QAAXPBD@Z");
//};

//public: void c_network_connection::deallocate(void)
//{
//    mangled_ppc("?deallocate@c_network_connection@@QAAXXZ");
//};

//public: void c_network_connection::reset(void)
//{
//    mangled_ppc("?reset@c_network_connection@@QAAXXZ");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//public: virtual bool c_network_connection::has_data_to_transmit(bool *) const
//{
//    mangled_ppc("?has_data_to_transmit@c_network_connection@@UBA_NPA_N@Z");
//};

//public: virtual long c_network_connection::space_required_bits(long, long)
//{
//    mangled_ppc("?space_required_bits@c_network_connection@@UAAJJJ@Z");
//};

//public: virtual bool c_network_connection::write_to_packet(long, class c_bitstream *, long, long)
//{
//    mangled_ppc("?write_to_packet@c_network_connection@@UAA_NJPAVc_bitstream@@JJ@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//public: s_static_array<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 8>::s_static_array<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 8>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$07@@QAA@XZ");
//};

//public: virtual enum e_network_read_result c_network_connection::read_from_packet(struct s_received_packet_info *, class c_bitstream *)
//{
//    mangled_ppc("?read_from_packet@c_network_connection@@UAA?AW4e_network_read_result@@PAUs_received_packet_info@@PAVc_bitstream@@@Z");
//};

//public: virtual void c_network_connection::notify_packet_acknowledged(long, bool)
//{
//    mangled_ppc("?notify_packet_acknowledged@c_network_connection@@UAAXJ_N@Z");
//};

//public: virtual void c_network_connection::notify_packet_retired(long, bool, bool)
//{
//    mangled_ppc("?notify_packet_retired@c_network_connection@@UAAXJ_N0@Z");
//};

//public: bool c_network_connection::are_outgoing_packets_in_flight(void) const
//{
//    mangled_ppc("?are_outgoing_packets_in_flight@c_network_connection@@QBA_NXZ");
//};

//public: long c_network_connection::get_last_sequence_number(void) const
//{
//    mangled_ppc("?get_last_sequence_number@c_network_connection@@QBAJXZ");
//};

//public: static long c_network_connection::get_sequence_range(void)
//{
//    mangled_ppc("?get_sequence_range@c_network_connection@@SAJXZ");
//};

//public: long c_network_connection::get_safe_sequence_range(void) const
//{
//    mangled_ppc("?get_safe_sequence_range@c_network_connection@@QBAJXZ");
//};

//public: long c_network_connection::get_safe_sequence_range_remaining(void) const
//{
//    mangled_ppc("?get_safe_sequence_range_remaining@c_network_connection@@QBAJXZ");
//};

//public: long c_network_connection::generate_sequence_number(unsigned long)
//{
//    mangled_ppc("?generate_sequence_number@c_network_connection@@QAAJK@Z");
//};

//public: void c_network_connection::update_packet_events(void)
//{
//    mangled_ppc("?update_packet_events@c_network_connection@@QAAXXZ");
//};

//public: enum e_network_packet_event c_network_connection::get_packet_event(long *, long *, long *, bool *)
//{
//    mangled_ppc("?get_packet_event@c_network_connection@@QAA?AW4e_network_packet_event@@PAJ00PA_N@Z");
//};

//public: long c_network_connection::get_window_size_bytes(void) const
//{
//    mangled_ppc("?get_window_size_bytes@c_network_connection@@QBAJXZ");
//};

//public: long c_network_connection::get_window_size_packets(void) const
//{
//    mangled_ppc("?get_window_size_packets@c_network_connection@@QBAJXZ");
//};

//public: long c_network_connection::get_timeout(void) const
//{
//    mangled_ppc("?get_timeout@c_network_connection@@QBAJXZ");
//};

//public: void c_network_connection::get_connection_status(long *, long *, long *, long *, long *, long *, long *, long *, long *, long *) const
//{
//    mangled_ppc("?get_connection_status@c_network_connection@@QBAXPAJ000000000@Z");
//};

//public: void c_network_connection::get_connection_stats(long *, long *, long *, long *, long *) const
//{
//    mangled_ppc("?get_connection_stats@c_network_connection@@QBAXPAJ0000@Z");
//};

//private: struct c_network_connection::s_connection_incoming_packet * c_network_connection::get_incoming_packet(long)
//{
//    mangled_ppc("?get_incoming_packet@c_network_connection@@AAAPAUs_connection_incoming_packet@1@J@Z");
//};

//private: struct c_network_connection::s_connection_outgoing_packet * c_network_connection::get_outgoing_packet(long)
//{
//    mangled_ppc("?get_outgoing_packet@c_network_connection@@AAAPAUs_connection_outgoing_packet@1@J@Z");
//};

//private: enum e_network_read_result c_network_connection::handle_sequence_number(bool, long, long, struct s_received_packet_info *)
//{
//    mangled_ppc("?handle_sequence_number@c_network_connection@@AAA?AW4e_network_read_result@@_NJJPAUs_received_packet_info@@@Z");
//};

//public: void c_network_connection::notify_packet_about_to_be_sent(long)
//{
//    mangled_ppc("?notify_packet_about_to_be_sent@c_network_connection@@QAAXJ@Z");
//};

//public: void c_network_connection::notify_packet_sent(long, long)
//{
//    mangled_ppc("?notify_packet_sent@c_network_connection@@QAAXJJ@Z");
//};

//public: void c_network_connection::notify_packet_received(struct s_received_packet_info const *)
//{
//    mangled_ppc("?notify_packet_received@c_network_connection@@QAAXPBUs_received_packet_info@@@Z");
//};

//private: enum e_network_read_result c_network_connection::handle_acknowledgments(long, long, class c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128> const &, bool, unsigned long, long)
//{
//    mangled_ppc("?handle_acknowledgments@c_network_connection@@AAA?AW4e_network_read_result@@JJABV?$c_static_stack@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$0IA@@@_NKJ@Z");
//};

//private: bool c_network_connection::retire_packet(enum e_network_packet_event *, long *, long *, long *, bool *)
//{
//    mangled_ppc("?retire_packet@c_network_connection@@AAA_NPAW4e_network_packet_event@@PAJ11PA_N@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//private: void c_network_connection::retire_incoming_packets(void)
//{
//    mangled_ppc("?retire_incoming_packets@c_network_connection@@AAAXXZ");
//};

//private: bool c_network_connection::remove_retired_packet(bool, long *, long *)
//{
//    mangled_ppc("?remove_retired_packet@c_network_connection@@AAA_N_NPAJ1@Z");
//};

//private: void c_network_connection::encode_incoming_packet_state(class c_bitstream *, enum c_network_connection::e_incoming_packet_state) const
//{
//    mangled_ppc("?encode_incoming_packet_state@c_network_connection@@ABAXPAVc_bitstream@@W4e_incoming_packet_state@1@@Z");
//};

//private: enum c_network_connection::e_incoming_packet_state c_network_connection::decode_incoming_packet_state(class c_bitstream *) const
//{
//    mangled_ppc("?decode_incoming_packet_state@c_network_connection@@ABA?AW4e_incoming_packet_state@1@PAVc_bitstream@@@Z");
//};

//public: c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>(enum c_network_connection::e_incoming_packet_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_incoming_packet_state@c_network_connection@@@Z");
//};

//public: enum c_network_connection::e_incoming_packet_state c_enum_no_init<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>::operator enum c_network_connection::e_incoming_packet_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_incoming_packet_state@c_network_connection@@XZ");
//};

//public: bool c_enum_no_init<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum c_network_connection::e_incoming_packet_state) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_incoming_packet_state@c_network_connection@@@Z");
//};

//public: void s_static_array<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 8>::set_all(class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$07@@QAAXABV?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$0IA@@@QBAJXZ");
//};

//public: void c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::resize(long)
//{
//    mangled_ppc("?resize@?$c_static_stack@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$0IA@@@QAAXJ@Z");
//};

//public: void c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::push_back(class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$0IA@@@QAAXABV?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver> const & c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$0IA@@@QBAABV?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@J@Z");
//};

//public: class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver> & c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$0IA@@@QAAAAV?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@J@Z");
//};

//public: c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>(void)
//{
//    mangled_ppc("??0?$c_static_stack@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$0IA@@@QAA@XZ");
//};

//public: bool c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$0IA@@@QBA_NXZ");
//};

//public: bool c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$0IA@@@QBA_NJ@Z");
//};

//public: long c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$0IA@@@QAAJXZ");
//};

//public: class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver> * c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$0IA@@@QAAPAV?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@J@Z");
//};

//public: bool c_static_stack<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 128>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$0IA@@@QBA_NXZ");
//};

//public: class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver> & s_static_array<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$07@@QAAAAV?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@J@Z");
//};

//public: static bool s_static_array<class c_enum<enum c_network_connection::e_incoming_packet_state, char, 0, 3, struct s_default_enum_string_resolver>, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_enum@W4e_incoming_packet_state@c_network_connection@@D$0A@$02Us_default_enum_string_resolver@@@@$07@@SA_NJ@Z");
//};

