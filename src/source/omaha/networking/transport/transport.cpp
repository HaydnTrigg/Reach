/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long g_transport_force_shutdown; // "?g_transport_force_shutdown@@3JA"

// void transport_initialize(void);
// void transport_dispose(void);
// void transport_reset(void);
// void transport_register_transition_functions(void (*)(void *), void (*)(void *), void (*)(void *), void *);
// bool transport_available(void);
// bool transport_network_available(void);
// void transport_global_update(void);
// void transport_global_receive(void);
// long transport_get_packet_overhead(long, enum e_with_voice);
// long transport_get_packet_maximum_payload(long);
// bool transport_is_wireless(void);
// void transport_startup(void);
// void transport_shutdown(void);
// public: c_transport_address_list::c_transport_address_list(void);
// public: void c_transport_address_list::clear(void);
// public: void c_transport_address_list::add(struct transport_address const *);
// public: void c_transport_address_list::remove(struct transport_address const *);
// public: char const * c_transport_address_list::get_description(void);
// public: bool c_transport_address_list::get_first(struct transport_address *) const;
// public: void c_transport_address_list::iterator_new(struct c_transport_address_list_iterator *) const;
// public: bool c_transport_address_list::iterator_next(struct c_transport_address_list_iterator *, struct transport_address *) const;
// public: long c_transport_address_list::count(void) const;
// public: long c_transport_address_list::max_count(void) const;
// public: void s_static_array<struct transport_address, 8>::set_memory(long);
// public: char const * s_static_string<128>::append_print(char const *, ...);
// public: void c_flags_no_init<long, unsigned char, 8, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<long, unsigned char, 8, struct s_default_enum_string_resolver>::test(long) const;
// public: void c_flags_no_init<long, unsigned char, 8, struct s_default_enum_string_resolver>::set(long, bool);
// public: long c_flags_no_init<long, unsigned char, 8, struct s_default_enum_string_resolver>::count_set(void) const;
// public: struct transport_address & s_static_array<struct transport_address, 8>::operator[]<long>(long);
// public: struct transport_address const & s_static_array<struct transport_address, 8>::operator[]<long>(long) const;
// public: static bool c_flags_no_init<long, unsigned char, 8, struct s_default_enum_string_resolver>::valid_bit(long);
// private: static unsigned char c_flags_no_init<long, unsigned char, 8, struct s_default_enum_string_resolver>::flag_size_type(long);
// public: static bool s_static_array<struct transport_address, 8>::valid<long>(long);

//void transport_initialize(void)
//{
//    mangled_ppc("?transport_initialize@@YAXXZ");
//};

//void transport_dispose(void)
//{
//    mangled_ppc("?transport_dispose@@YAXXZ");
//};

//void transport_reset(void)
//{
//    mangled_ppc("?transport_reset@@YAXXZ");
//};

//void transport_register_transition_functions(void (*)(void *), void (*)(void *), void (*)(void *), void *)
//{
//    mangled_ppc("?transport_register_transition_functions@@YAXP6AXPAX@Z110@Z");
//};

//bool transport_available(void)
//{
//    mangled_ppc("?transport_available@@YA_NXZ");
//};

//bool transport_network_available(void)
//{
//    mangled_ppc("?transport_network_available@@YA_NXZ");
//};

//void transport_global_update(void)
//{
//    mangled_ppc("?transport_global_update@@YAXXZ");
//};

//void transport_global_receive(void)
//{
//    mangled_ppc("?transport_global_receive@@YAXXZ");
//};

//long transport_get_packet_overhead(long, enum e_with_voice)
//{
//    mangled_ppc("?transport_get_packet_overhead@@YAJJW4e_with_voice@@@Z");
//};

//long transport_get_packet_maximum_payload(long)
//{
//    mangled_ppc("?transport_get_packet_maximum_payload@@YAJJ@Z");
//};

//bool transport_is_wireless(void)
//{
//    mangled_ppc("?transport_is_wireless@@YA_NXZ");
//};

//void transport_startup(void)
//{
//    mangled_ppc("?transport_startup@@YAXXZ");
//};

//void transport_shutdown(void)
//{
//    mangled_ppc("?transport_shutdown@@YAXXZ");
//};

//public: c_transport_address_list::c_transport_address_list(void)
//{
//    mangled_ppc("??0c_transport_address_list@@QAA@XZ");
//};

//public: void c_transport_address_list::clear(void)
//{
//    mangled_ppc("?clear@c_transport_address_list@@QAAXXZ");
//};

//public: void c_transport_address_list::add(struct transport_address const *)
//{
//    mangled_ppc("?add@c_transport_address_list@@QAAXPBUtransport_address@@@Z");
//};

//public: void c_transport_address_list::remove(struct transport_address const *)
//{
//    mangled_ppc("?remove@c_transport_address_list@@QAAXPBUtransport_address@@@Z");
//};

//public: char const * c_transport_address_list::get_description(void)
//{
//    mangled_ppc("?get_description@c_transport_address_list@@QAAPBDXZ");
//};

//public: bool c_transport_address_list::get_first(struct transport_address *) const
//{
//    mangled_ppc("?get_first@c_transport_address_list@@QBA_NPAUtransport_address@@@Z");
//};

//public: void c_transport_address_list::iterator_new(struct c_transport_address_list_iterator *) const
//{
//    mangled_ppc("?iterator_new@c_transport_address_list@@QBAXPAUc_transport_address_list_iterator@@@Z");
//};

//public: bool c_transport_address_list::iterator_next(struct c_transport_address_list_iterator *, struct transport_address *) const
//{
//    mangled_ppc("?iterator_next@c_transport_address_list@@QBA_NPAUc_transport_address_list_iterator@@PAUtransport_address@@@Z");
//};

//public: long c_transport_address_list::count(void) const
//{
//    mangled_ppc("?count@c_transport_address_list@@QBAJXZ");
//};

//public: long c_transport_address_list::max_count(void) const
//{
//    mangled_ppc("?max_count@c_transport_address_list@@QBAJXZ");
//};

//public: void s_static_array<struct transport_address, 8>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Utransport_address@@$07@@QAAXJ@Z");
//};

//public: char const * s_static_string<128>::append_print(char const *, ...)
//{
//    mangled_ppc("?append_print@?$s_static_string@$0IA@@@QAAPBDPBDZZ");
//};

//public: void c_flags_no_init<long, unsigned char, 8, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@JE$07Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<long, unsigned char, 8, struct s_default_enum_string_resolver>::test(long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@JE$07Us_default_enum_string_resolver@@@@QBA_NJ@Z");
//};

//public: void c_flags_no_init<long, unsigned char, 8, struct s_default_enum_string_resolver>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@JE$07Us_default_enum_string_resolver@@@@QAAXJ_N@Z");
//};

//public: long c_flags_no_init<long, unsigned char, 8, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@JE$07Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: struct transport_address & s_static_array<struct transport_address, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Utransport_address@@$07@@QAAAAUtransport_address@@J@Z");
//};

//public: struct transport_address const & s_static_array<struct transport_address, 8>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Utransport_address@@$07@@QBAABUtransport_address@@J@Z");
//};

//public: static bool c_flags_no_init<long, unsigned char, 8, struct s_default_enum_string_resolver>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@JE$07Us_default_enum_string_resolver@@@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<long, unsigned char, 8, struct s_default_enum_string_resolver>::flag_size_type(long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@JE$07Us_default_enum_string_resolver@@@@CAEJ@Z");
//};

//public: static bool s_static_array<struct transport_address, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Utransport_address@@$07@@SA_NJ@Z");
//};

