/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// char const **k_join_refuse_reason_strings; // "?k_join_refuse_reason_strings@@3PAPBDA"
// char const **k_election_refuse_reason_strings; // "?k_election_refuse_reason_strings@@3PAPBDA"

// public: static void c_network_message_join_request::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_join_request::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_peer_connect::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_peer_connect::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_join_abort::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_join_abort::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_join_refuse::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_join_refuse::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_leave_session::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_leave_session::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_leave_acknowledge::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_leave_acknowledge::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_session_disband::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_session_disband::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_session_boot::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_session_boot::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_host_handoff::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_host_handoff::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_peer_handoff::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_peer_handoff::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_host_transition::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_host_transition::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_host_reestablish::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_host_reestablish::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_host_decline::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_host_decline::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_peer_reestablish::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_peer_reestablish::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_peer_establish::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_peer_establish::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_election::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_election::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_election_refuse::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_election_refuse::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_security::encode(class c_bitstream *, long, void const *);
// public: static bool c_network_message_security::decode(class c_bitstream *, long, void *);
// public: static void c_network_message_time_synchronize::encode(class c_bitstream *, long, void const *);
// unsigned long network_time_get_exact(void);
// public: static bool c_network_message_time_synchronize::decode(class c_bitstream *, long, void *);
// public: static bool c_network_message_time_synchronize::compare(long, void *, void *);
// public: static void c_network_message_time_synchronize::dispose(long, void *);
// void network_message_types_register_session_protocol(class c_network_message_type_collection *);
// char const * network_message_join_refuse_get_reason_string(long);
// char const * network_message_election_refuse_get_reason_string(long);
// public: bool c_enum_no_init<enum e_network_session_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_network_session_type) const;
// public: bool c_enum_no_init<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_network_message_security_type) const;
// public: void c_bitstream::write_enum<class c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> *);
// public: enum e_network_message_security_type c_enum_no_init<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_network_message_security_type(void) const;
// public: bool c_enum_no_init<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// long required_encoding_bits_for_enum<class c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>);
// public: static enum e_network_message_security_type c_enum_no_init<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);

//public: static void c_network_message_join_request::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_join_request@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_join_request::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_join_request@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_peer_connect::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_peer_connect@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_peer_connect::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_peer_connect@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_join_abort::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_join_abort@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_join_abort::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_join_abort@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_join_refuse::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_join_refuse@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_join_refuse::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_join_refuse@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_leave_session::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_leave_session@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_leave_session::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_leave_session@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_leave_acknowledge::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_leave_acknowledge@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_leave_acknowledge::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_leave_acknowledge@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_session_disband::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_session_disband@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_session_disband::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_session_disband@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_session_boot::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_session_boot@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_session_boot::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_session_boot@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_host_handoff::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_host_handoff@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_host_handoff::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_host_handoff@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_peer_handoff::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_peer_handoff@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_peer_handoff::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_peer_handoff@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_host_transition::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_host_transition@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_host_transition::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_host_transition@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_host_reestablish::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_host_reestablish@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_host_reestablish::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_host_reestablish@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_host_decline::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_host_decline@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_host_decline::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_host_decline@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_peer_reestablish::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_peer_reestablish@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_peer_reestablish::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_peer_reestablish@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_peer_establish::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_peer_establish@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_peer_establish::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_peer_establish@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_election::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_election@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_election::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_election@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_election_refuse::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_election_refuse@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_election_refuse::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_election_refuse@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_security::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_security@@SAXPAVc_bitstream@@JPBX@Z");
//};

//public: static bool c_network_message_security::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_security@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static void c_network_message_time_synchronize::encode(class c_bitstream *, long, void const *)
//{
//    mangled_ppc("?encode@c_network_message_time_synchronize@@SAXPAVc_bitstream@@JPBX@Z");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//public: static bool c_network_message_time_synchronize::decode(class c_bitstream *, long, void *)
//{
//    mangled_ppc("?decode@c_network_message_time_synchronize@@SA_NPAVc_bitstream@@JPAX@Z");
//};

//public: static bool c_network_message_time_synchronize::compare(long, void *, void *)
//{
//    mangled_ppc("?compare@c_network_message_time_synchronize@@SA_NJPAX0@Z");
//};

//public: static void c_network_message_time_synchronize::dispose(long, void *)
//{
//    mangled_ppc("?dispose@c_network_message_time_synchronize@@SAXJPAX@Z");
//};

//void network_message_types_register_session_protocol(class c_network_message_type_collection *)
//{
//    mangled_ppc("?network_message_types_register_session_protocol@@YAXPAVc_network_message_type_collection@@@Z");
//};

//char const * network_message_join_refuse_get_reason_string(long)
//{
//    mangled_ppc("?network_message_join_refuse_get_reason_string@@YAPBDJ@Z");
//};

//char const * network_message_election_refuse_get_reason_string(long)
//{
//    mangled_ppc("?network_message_election_refuse_get_reason_string@@YAPBDJ@Z");
//};

//public: bool c_enum_no_init<enum e_network_session_type, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_network_session_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_network_session_type@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_network_session_type@@@Z");
//};

//public: bool c_enum_no_init<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_network_message_security_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_network_message_security_type@@E$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_network_message_security_type@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_network_message_security_type@@E$0A@$01Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_network_message_security_type@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_network_message_security_type@@E$0A@$01Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_network_message_security_type@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_network_message_security_type c_enum_no_init<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_network_message_security_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_network_message_security_type@@E$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_network_message_security_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_network_message_security_type@@E$0A@$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_network_message_security_type@@E$0A@$01Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> >(class c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_network_message_security_type@@E$0A@$01Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_network_message_security_type@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_network_message_security_type c_enum_no_init<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_network_message_security_type@@E$0A@$01Us_default_enum_string_resolver@@@@SA?AW4e_network_message_security_type@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_network_message_security_type@@E$0A@$01Us_default_enum_string_resolver@@@@SAEK@Z");
//};

