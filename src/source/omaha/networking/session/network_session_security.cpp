/* ---------- headers */

#include "omaha\networking\session\network_session_security.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@JE$04Us_default_enum_string_resolver@@@@2JB"
// public: static long const s_static_array<struct s_security_challenge_failure_response_configuration, 5>::k_element_count; // "?k_element_count@?$s_static_array@Us_security_challenge_failure_response_configuration@@$04@@2JB"
// public: static long const s_static_array<struct s_transport_unique_identifier, 128>::k_element_count; // "?k_element_count@?$s_static_array@Us_transport_unique_identifier@@$0IA@@@2JB"
// char const **k_security_challenge_failure_responses; // "?k_security_challenge_failure_responses@@3PAPBDA"

// void network_session_security_set_challenge_response(char const *, bool, long);
// void network_session_security_set_challenge_failure_on_timeout(bool);
// void network_session_security_set_challenge_force_fail(bool);
// void network_session_security_disable_challenges(bool);
// public: c_network_session_security::c_network_session_security(void);
// public: c_network_session_security::s_security_data::s_security_data(void);
// public: s_static_array<struct c_network_session_security::s_security_peer_data, 16>::s_static_array<struct c_network_session_security::s_security_peer_data, 16>(void);
// public: c_network_session_security::s_security_challenge_data::s_security_challenge_data(void);
// public: c_network_session_security::s_security_peer_data::s_security_peer_data(void);
// public: void c_network_session_security::initialize(class c_network_session *);
// public: void c_network_session_security::s_security_challenge_data::initialize(void);
// public: void c_network_session_security::update(void);
// private: void c_network_session_security::synchronize_peer_data_with_session_membership(void);
// private: void c_network_session_security::handle_challenge_failure(void);
// private: void c_network_session_security::handle_challenge_failure_response_report(void);
// private: void c_network_session_security::handle_challenge_failure_response_disconnect(void);
// private: void c_network_session_security::handle_challenge_failure_response_dirty_disk(void);
// private: void c_network_session_security::handle_challenge_failure_response_machine_file(void);
// private: void c_network_session_security::handle_challenge_failure_response_assert(void);
// private: void c_network_session_security::set_state(enum c_network_session_security::e_security_state);
// private: void c_network_session_security::notify_host_changed(bool, long);
// private: void c_network_session_security::notify_election_in_progress(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// private: enum c_network_session_security::e_security_state c_network_session_security::get_state(void) const;
// private: bool c_network_session_security::challenge_result_is_failure(enum c_network_session_security::e_security_challenge_result) const;
// private: bool c_network_session_security::challenge_result_is_success(enum c_network_session_security::e_security_challenge_result) const;
// private: bool c_network_session_security::should_trigger_response(struct s_security_challenge_failure_response_configuration const *);
// private: bool c_network_session_security::should_issue_challenge_to_peer(long) const;
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: bool c_network_session_security::handle_message(long, struct s_network_message_security const *);
// public: void c_network_session_security::notify_connection_lost_to_peer(long);
// private: bool c_network_session_security::handle_challenge(long, struct s_network_message_security const *);
// public: s_network_message_security::s_network_message_security(void);
// private: bool c_network_session_security::handle_response(long, struct s_network_message_security const *);
// private: void c_network_session_security::update_idle(void);
// private: void c_network_session_security::start_challenge(long);
// private: void c_network_session_security::update_challenge(void);
// private: void c_network_session_security::stop_challenge(enum c_network_session_security::e_security_challenge_result);
// public: c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum e_network_message_security_type);
// public: static long s_static_array<struct s_transport_unique_identifier, 128>::get_count(void);
// public: bool c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum c_network_session_security::e_security_peer_flags) const;
// public: void c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum c_network_session_security::e_security_peer_flags, bool);
// public: c_flags<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum c_network_session_security::e_security_challenge_flags) const;
// public: void c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum c_network_session_security::e_security_challenge_flags, bool);
// public: c_flags<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::test(long) const;
// public: void c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::set(long, bool);
// public: struct s_security_challenge_failure_response_configuration & s_static_array<struct s_security_challenge_failure_response_configuration, 5>::operator[]<long>(long);
// public: struct c_network_session_security::s_security_peer_data & s_static_array<struct c_network_session_security::s_security_peer_data, 16>::operator[]<long>(long);
// public: struct s_transport_unique_identifier & s_static_array<struct s_transport_unique_identifier, 128>::operator[]<long>(long);
// public: struct s_security_challenge_failure_response_configuration & s_static_array<struct s_security_challenge_failure_response_configuration, 5>::operator[]<enum e_security_challenge_failure_response_type>(enum e_security_challenge_failure_response_type);
// public: struct c_network_session_security::s_security_peer_data const & s_static_array<struct c_network_session_security::s_security_peer_data, 16>::operator[]<long>(long) const;
// public: void c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum c_network_session_security::e_security_peer_flags);
// private: static unsigned char c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum c_network_session_security::e_security_peer_flags);
// public: void c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum c_network_session_security::e_security_challenge_flags);
// private: static unsigned char c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum c_network_session_security::e_security_challenge_flags);
// public: static bool c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(long);
// private: static unsigned char c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(long);
// public: static bool s_static_array<struct s_security_challenge_failure_response_configuration, 5>::valid<long>(long);
// public: static bool s_static_array<struct c_network_session_security::s_security_peer_data, 16>::valid<long>(long);
// public: static bool s_static_array<struct s_transport_unique_identifier, 128>::valid<long>(long);
// public: static bool s_static_array<struct s_security_challenge_failure_response_configuration, 5>::valid<enum e_security_challenge_failure_response_type>(enum e_security_challenge_failure_response_type);
// private: static unsigned char c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_network_session_security::e_security_peer_flags);
// private: static unsigned char c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_network_session_security::e_security_challenge_flags);
// public: s_network_session_security_globals::s_network_session_security_globals(void);
// public: c_flags<long, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<long, unsigned char, 5, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned char c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long);

//void network_session_security_set_challenge_response(char const *, bool, long)
//{
//    mangled_ppc("?network_session_security_set_challenge_response@@YAXPBD_NJ@Z");
//};

//void network_session_security_set_challenge_failure_on_timeout(bool)
//{
//    mangled_ppc("?network_session_security_set_challenge_failure_on_timeout@@YAX_N@Z");
//};

//void network_session_security_set_challenge_force_fail(bool)
//{
//    mangled_ppc("?network_session_security_set_challenge_force_fail@@YAX_N@Z");
//};

//void network_session_security_disable_challenges(bool)
//{
//    mangled_ppc("?network_session_security_disable_challenges@@YAX_N@Z");
//};

//public: c_network_session_security::c_network_session_security(void)
//{
//    mangled_ppc("??0c_network_session_security@@QAA@XZ");
//};

//public: c_network_session_security::s_security_data::s_security_data(void)
//{
//    mangled_ppc("??0s_security_data@c_network_session_security@@QAA@XZ");
//};

//public: s_static_array<struct c_network_session_security::s_security_peer_data, 16>::s_static_array<struct c_network_session_security::s_security_peer_data, 16>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_security_peer_data@c_network_session_security@@$0BA@@@QAA@XZ");
//};

//public: c_network_session_security::s_security_challenge_data::s_security_challenge_data(void)
//{
//    mangled_ppc("??0s_security_challenge_data@c_network_session_security@@QAA@XZ");
//};

//public: c_network_session_security::s_security_peer_data::s_security_peer_data(void)
//{
//    mangled_ppc("??0s_security_peer_data@c_network_session_security@@QAA@XZ");
//};

//public: void c_network_session_security::initialize(class c_network_session *)
//{
//    mangled_ppc("?initialize@c_network_session_security@@QAAXPAVc_network_session@@@Z");
//};

//public: void c_network_session_security::s_security_challenge_data::initialize(void)
//{
//    mangled_ppc("?initialize@s_security_challenge_data@c_network_session_security@@QAAXXZ");
//};

//public: void c_network_session_security::update(void)
//{
//    mangled_ppc("?update@c_network_session_security@@QAAXXZ");
//};

//private: void c_network_session_security::synchronize_peer_data_with_session_membership(void)
//{
//    mangled_ppc("?synchronize_peer_data_with_session_membership@c_network_session_security@@AAAXXZ");
//};

//private: void c_network_session_security::handle_challenge_failure(void)
//{
//    mangled_ppc("?handle_challenge_failure@c_network_session_security@@AAAXXZ");
//};

//private: void c_network_session_security::handle_challenge_failure_response_report(void)
//{
//    mangled_ppc("?handle_challenge_failure_response_report@c_network_session_security@@AAAXXZ");
//};

//private: void c_network_session_security::handle_challenge_failure_response_disconnect(void)
//{
//    mangled_ppc("?handle_challenge_failure_response_disconnect@c_network_session_security@@AAAXXZ");
//};

//private: void c_network_session_security::handle_challenge_failure_response_dirty_disk(void)
//{
//    mangled_ppc("?handle_challenge_failure_response_dirty_disk@c_network_session_security@@AAAXXZ");
//};

//private: void c_network_session_security::handle_challenge_failure_response_machine_file(void)
//{
//    mangled_ppc("?handle_challenge_failure_response_machine_file@c_network_session_security@@AAAXXZ");
//};

//private: void c_network_session_security::handle_challenge_failure_response_assert(void)
//{
//    mangled_ppc("?handle_challenge_failure_response_assert@c_network_session_security@@AAAXXZ");
//};

//private: void c_network_session_security::set_state(enum c_network_session_security::e_security_state)
//{
//    mangled_ppc("?set_state@c_network_session_security@@AAAXW4e_security_state@1@@Z");
//};

//private: void c_network_session_security::notify_host_changed(bool, long)
//{
//    mangled_ppc("?notify_host_changed@c_network_session_security@@AAAX_NJ@Z");
//};

//private: void c_network_session_security::notify_election_in_progress(void)
//{
//    mangled_ppc("?notify_election_in_progress@c_network_session_security@@AAAXXZ");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//private: enum c_network_session_security::e_security_state c_network_session_security::get_state(void) const
//{
//    mangled_ppc("?get_state@c_network_session_security@@ABA?AW4e_security_state@1@XZ");
//};

//private: bool c_network_session_security::challenge_result_is_failure(enum c_network_session_security::e_security_challenge_result) const
//{
//    mangled_ppc("?challenge_result_is_failure@c_network_session_security@@ABA_NW4e_security_challenge_result@1@@Z");
//};

//private: bool c_network_session_security::challenge_result_is_success(enum c_network_session_security::e_security_challenge_result) const
//{
//    mangled_ppc("?challenge_result_is_success@c_network_session_security@@ABA_NW4e_security_challenge_result@1@@Z");
//};

//private: bool c_network_session_security::should_trigger_response(struct s_security_challenge_failure_response_configuration const *)
//{
//    mangled_ppc("?should_trigger_response@c_network_session_security@@AAA_NPBUs_security_challenge_failure_response_configuration@@@Z");
//};

//private: bool c_network_session_security::should_issue_challenge_to_peer(long) const
//{
//    mangled_ppc("?should_issue_challenge_to_peer@c_network_session_security@@ABA_NJ@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//public: bool c_network_session_security::handle_message(long, struct s_network_message_security const *)
//{
//    mangled_ppc("?handle_message@c_network_session_security@@QAA_NJPBUs_network_message_security@@@Z");
//};

//public: void c_network_session_security::notify_connection_lost_to_peer(long)
//{
//    mangled_ppc("?notify_connection_lost_to_peer@c_network_session_security@@QAAXJ@Z");
//};

//private: bool c_network_session_security::handle_challenge(long, struct s_network_message_security const *)
//{
//    mangled_ppc("?handle_challenge@c_network_session_security@@AAA_NJPBUs_network_message_security@@@Z");
//};

//public: s_network_message_security::s_network_message_security(void)
//{
//    mangled_ppc("??0s_network_message_security@@QAA@XZ");
//};

//private: bool c_network_session_security::handle_response(long, struct s_network_message_security const *)
//{
//    mangled_ppc("?handle_response@c_network_session_security@@AAA_NJPBUs_network_message_security@@@Z");
//};

//private: void c_network_session_security::update_idle(void)
//{
//    mangled_ppc("?update_idle@c_network_session_security@@AAAXXZ");
//};

//private: void c_network_session_security::start_challenge(long)
//{
//    mangled_ppc("?start_challenge@c_network_session_security@@AAAXJ@Z");
//};

//private: void c_network_session_security::update_challenge(void)
//{
//    mangled_ppc("?update_challenge@c_network_session_security@@AAAXXZ");
//};

//private: void c_network_session_security::stop_challenge(enum c_network_session_security::e_security_challenge_result)
//{
//    mangled_ppc("?stop_challenge@c_network_session_security@@AAAXW4e_security_challenge_result@1@@Z");
//};

//public: c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_message_security_type@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_network_message_security_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum e_network_message_security_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_message_security_type@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_network_message_security_type@@@Z");
//};

//public: static long s_static_array<struct s_transport_unique_identifier, 128>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_transport_unique_identifier@@$0IA@@@SAJXZ");
//};

//public: bool c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum c_network_session_security::e_security_peer_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_security_peer_flags@c_network_session_security@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_security_peer_flags@c_network_session_security@@@Z");
//};

//public: void c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum c_network_session_security::e_security_peer_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_security_peer_flags@c_network_session_security@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_security_peer_flags@c_network_session_security@@_N@Z");
//};

//public: c_flags<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_security_peer_flags@c_network_session_security@@E$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum c_network_session_security::e_security_challenge_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_security_challenge_flags@c_network_session_security@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_security_challenge_flags@c_network_session_security@@@Z");
//};

//public: void c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum c_network_session_security::e_security_challenge_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_security_challenge_flags@c_network_session_security@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_security_challenge_flags@c_network_session_security@@_N@Z");
//};

//public: c_flags<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_security_challenge_flags@c_network_session_security@@E$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::test(long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@JE$04Us_default_enum_string_resolver@@@@QBA_NJ@Z");
//};

//public: void c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@JE$04Us_default_enum_string_resolver@@@@QAAXJ_N@Z");
//};

//public: struct s_security_challenge_failure_response_configuration & s_static_array<struct s_security_challenge_failure_response_configuration, 5>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_security_challenge_failure_response_configuration@@$04@@QAAAAUs_security_challenge_failure_response_configuration@@J@Z");
//};

//public: struct c_network_session_security::s_security_peer_data & s_static_array<struct c_network_session_security::s_security_peer_data, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_security_peer_data@c_network_session_security@@$0BA@@@QAAAAUs_security_peer_data@c_network_session_security@@J@Z");
//};

//public: struct s_transport_unique_identifier & s_static_array<struct s_transport_unique_identifier, 128>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_transport_unique_identifier@@$0IA@@@QAAAAUs_transport_unique_identifier@@J@Z");
//};

//public: struct s_security_challenge_failure_response_configuration & s_static_array<struct s_security_challenge_failure_response_configuration, 5>::operator[]<enum e_security_challenge_failure_response_type>(enum e_security_challenge_failure_response_type)
//{
//    mangled_ppc("??$?AW4e_security_challenge_failure_response_type@@@?$s_static_array@Us_security_challenge_failure_response_configuration@@$04@@QAAAAUs_security_challenge_failure_response_configuration@@W4e_security_challenge_failure_response_type@@@Z");
//};

//public: struct c_network_session_security::s_security_peer_data const & s_static_array<struct c_network_session_security::s_security_peer_data, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_security_peer_data@c_network_session_security@@$0BA@@@QBAABUs_security_peer_data@c_network_session_security@@J@Z");
//};

//public: void c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_security_peer_flags@c_network_session_security@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_security_peer_flags@c_network_session_security@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum c_network_session_security::e_security_peer_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_security_peer_flags@c_network_session_security@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_security_peer_flags@c_network_session_security@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum c_network_session_security::e_security_peer_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_security_peer_flags@c_network_session_security@@E$02Us_default_enum_string_resolver@@@@CAEW4e_security_peer_flags@c_network_session_security@@@Z");
//};

//public: void c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_security_challenge_flags@c_network_session_security@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_security_challenge_flags@c_network_session_security@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum c_network_session_security::e_security_challenge_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_security_challenge_flags@c_network_session_security@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_security_challenge_flags@c_network_session_security@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum c_network_session_security::e_security_challenge_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_security_challenge_flags@c_network_session_security@@E$01Us_default_enum_string_resolver@@@@CAEW4e_security_challenge_flags@c_network_session_security@@@Z");
//};

//public: static bool c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@JE$04Us_default_enum_string_resolver@@@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::flag_size_type(long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@JE$04Us_default_enum_string_resolver@@@@CAEJ@Z");
//};

//public: static bool s_static_array<struct s_security_challenge_failure_response_configuration, 5>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_security_challenge_failure_response_configuration@@$04@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct c_network_session_security::s_security_peer_data, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_security_peer_data@c_network_session_security@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_transport_unique_identifier, 128>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_transport_unique_identifier@@$0IA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_security_challenge_failure_response_configuration, 5>::valid<enum e_security_challenge_failure_response_type>(enum e_security_challenge_failure_response_type)
//{
//    mangled_ppc("??$valid@W4e_security_challenge_failure_response_type@@@?$s_static_array@Us_security_challenge_failure_response_configuration@@$04@@SA_NW4e_security_challenge_failure_response_type@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_security_peer_flags@c_network_session_security@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_security_challenge_flags@c_network_session_security@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum c_network_session_security::e_security_peer_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_network_session_security::e_security_peer_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_security_peer_flags@c_network_session_security@@E$02Us_default_enum_string_resolver@@@@CAEW4e_security_peer_flags@c_network_session_security@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_network_session_security::e_security_challenge_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_network_session_security::e_security_challenge_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_security_challenge_flags@c_network_session_security@@E$01Us_default_enum_string_resolver@@@@CAEW4e_security_challenge_flags@c_network_session_security@@@Z");
//};

//public: s_network_session_security_globals::s_network_session_security_globals(void)
//{
//    mangled_ppc("??0s_network_session_security_globals@@QAA@XZ");
//};

//public: c_flags<long, unsigned char, 5, struct s_default_enum_string_resolver>::c_flags<long, unsigned char, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@JE$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@JE$04Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@JE$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@JE$04Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<long, unsigned char, 5, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@JE$04Us_default_enum_string_resolver@@@@CAEJ@Z");
//};

