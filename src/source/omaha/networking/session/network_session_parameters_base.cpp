/* ---------- headers */

#include "omaha\networking\session\network_session_parameters_base.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// protected: c_network_session_parameter_base::c_network_session_parameter_base(void);
// protected: void c_network_session_parameter_base::initialize(enum e_network_session_parameter_type, char const *, enum e_parameter_update_priority, enum e_parameter_change_request_access, class c_network_session *);
// protected: void c_network_session_parameter_base::set_transmission_periods(float, float);
// protected: void c_network_session_parameter_base::build_update(long, struct s_network_session_parameter_update *, long) const;
// protected: bool c_network_session_parameter_base::handle_update(struct s_network_session_parameter_update const *, long);
// protected: long c_network_session_parameter_base::get_update_size(void) const;
// protected: void c_network_session_parameter_base::build_change_request(long, long, void *, long) const;
// protected: bool c_network_session_parameter_base::handle_change_request(void const *, long);
// protected: long c_network_session_parameter_base::get_change_request_size(void) const;
// protected: bool c_network_session_parameter_base::peer_requires_update(long) const;
// long network_time_since(unsigned long);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_difference_msec(unsigned long, unsigned long);
// protected: bool c_network_session_parameter_base::peer_requires_clear(long) const;
// public: bool c_network_session_parameter_base::get_allowed(void) const;
// public: bool c_network_session_parameter_base::set_allowed(void) const;
// public: char const * c_network_session_parameter_base::get_set_denied_reason(void) const;
// public: bool c_network_session_parameter_base::change_request_allowed(void) const;
// public: char const * c_network_session_parameter_base::get_change_request_denied_reason(void) const;
// protected: enum e_parameter_update_priority c_network_session_parameter_base::get_update_priority(void) const;
// protected: enum e_parameter_change_request_access c_network_session_parameter_base::get_change_request_access(void) const;
// public: bool c_network_session_parameter_base::desires_change_request(void) const;
// protected: char const * c_network_session_parameter_base::get_session_description(void) const;
// protected: unsigned long c_network_session_parameter_base::get_last_peer_update_timestamp(long) const;
// protected: void c_network_session_parameter_base::clear(void);
// protected: void c_network_session_parameter_base::set_update_required(void);
// protected: void c_network_session_parameter_base::notify_update_sent_to_peer(long);
// protected: void c_network_session_parameter_base::notify_clear_sent_to_peer(long);
// protected: void c_network_session_parameter_base::set_desires_change_request(void);
// protected: void c_network_session_parameter_base::notify_change_request_sent(void);
// protected: void c_network_session_parameter_base::reset_peer_state(long);
// protected: void c_network_session_parameter_base::transition_state_to_become_host(void);
// protected: virtual void c_network_session_parameter_base::validate_buffer(long, void const *, void *, void *);
// protected: virtual void c_network_session_parameter_base::notify_set_update_required(void);
// protected: virtual void c_network_session_parameter_base::notify_set_change_request(void);
// protected: virtual void c_network_session_parameter_base::notify_update_payload_sent_to_peer(long);
// protected: virtual void c_network_session_parameter_base::notify_change_request_payload_sent(void);
// protected: virtual bool c_network_session_parameter_base::can_set_peer_no_longer_requires_update(long);
// protected: virtual bool c_network_session_parameter_base::can_clear_change_request_desired(void);
// protected: virtual bool c_network_session_parameter_base::parameter_data_ready_for_consumption(void) const;
// protected: virtual bool c_network_session_parameter_base::is_chunked(void) const;
// protected: virtual bool c_network_session_parameter_base::change_request_incoming(void) const;
// private: void c_network_session_parameter_base::set_peer_no_longer_requires_update(long);
// private: void c_network_session_parameter_base::set_peer_no_longer_requires_clear(long);
// private: void c_network_session_parameter_base::set_change_request_no_longer_desired(void);
// public: void s_static_array<unsigned long, 16>::set_all(unsigned long const &);
// public: c_flags<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>(unsigned char);
// public: void c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_network_session_parameter_base_flags) const;
// public: void c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_network_session_parameter_base_flags, bool);
// public: class c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::operator&=(class c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver> const &);
// public: void c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: c_flags<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: unsigned long const & s_static_array<unsigned long, 16>::operator[]<long>(long) const;
// public: unsigned long & s_static_array<unsigned long, 16>::operator[]<long>(long);
// public: bool c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_network_session_parameter_base_flags);
// public: bool c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_session_parameter_base_flags);
// public: static bool s_static_array<unsigned long, 16>::valid<long>(long);
// private: static unsigned char c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_session_parameter_base_flags);

//protected: c_network_session_parameter_base::c_network_session_parameter_base(void)
//{
//    mangled_ppc("??0c_network_session_parameter_base@@IAA@XZ");
//};

//protected: void c_network_session_parameter_base::initialize(enum e_network_session_parameter_type, char const *, enum e_parameter_update_priority, enum e_parameter_change_request_access, class c_network_session *)
//{
//    mangled_ppc("?initialize@c_network_session_parameter_base@@IAAXW4e_network_session_parameter_type@@PBDW4e_parameter_update_priority@@W4e_parameter_change_request_access@@PAVc_network_session@@@Z");
//};

//protected: void c_network_session_parameter_base::set_transmission_periods(float, float)
//{
//    mangled_ppc("?set_transmission_periods@c_network_session_parameter_base@@IAAXMM@Z");
//};

//protected: void c_network_session_parameter_base::build_update(long, struct s_network_session_parameter_update *, long) const
//{
//    mangled_ppc("?build_update@c_network_session_parameter_base@@IBAXJPAUs_network_session_parameter_update@@J@Z");
//};

//protected: bool c_network_session_parameter_base::handle_update(struct s_network_session_parameter_update const *, long)
//{
//    mangled_ppc("?handle_update@c_network_session_parameter_base@@IAA_NPBUs_network_session_parameter_update@@J@Z");
//};

//protected: long c_network_session_parameter_base::get_update_size(void) const
//{
//    mangled_ppc("?get_update_size@c_network_session_parameter_base@@IBAJXZ");
//};

//protected: void c_network_session_parameter_base::build_change_request(long, long, void *, long) const
//{
//    mangled_ppc("?build_change_request@c_network_session_parameter_base@@IBAXJJPAXJ@Z");
//};

//protected: bool c_network_session_parameter_base::handle_change_request(void const *, long)
//{
//    mangled_ppc("?handle_change_request@c_network_session_parameter_base@@IAA_NPBXJ@Z");
//};

//protected: long c_network_session_parameter_base::get_change_request_size(void) const
//{
//    mangled_ppc("?get_change_request_size@c_network_session_parameter_base@@IBAJXZ");
//};

//protected: bool c_network_session_parameter_base::peer_requires_update(long) const
//{
//    mangled_ppc("?peer_requires_update@c_network_session_parameter_base@@IBA_NJ@Z");
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

//protected: bool c_network_session_parameter_base::peer_requires_clear(long) const
//{
//    mangled_ppc("?peer_requires_clear@c_network_session_parameter_base@@IBA_NJ@Z");
//};

//public: bool c_network_session_parameter_base::get_allowed(void) const
//{
//    mangled_ppc("?get_allowed@c_network_session_parameter_base@@QBA_NXZ");
//};

//public: bool c_network_session_parameter_base::set_allowed(void) const
//{
//    mangled_ppc("?set_allowed@c_network_session_parameter_base@@QBA_NXZ");
//};

//public: char const * c_network_session_parameter_base::get_set_denied_reason(void) const
//{
//    mangled_ppc("?get_set_denied_reason@c_network_session_parameter_base@@QBAPBDXZ");
//};

//public: bool c_network_session_parameter_base::change_request_allowed(void) const
//{
//    mangled_ppc("?change_request_allowed@c_network_session_parameter_base@@QBA_NXZ");
//};

//public: char const * c_network_session_parameter_base::get_change_request_denied_reason(void) const
//{
//    mangled_ppc("?get_change_request_denied_reason@c_network_session_parameter_base@@QBAPBDXZ");
//};

//protected: enum e_parameter_update_priority c_network_session_parameter_base::get_update_priority(void) const
//{
//    mangled_ppc("?get_update_priority@c_network_session_parameter_base@@IBA?AW4e_parameter_update_priority@@XZ");
//};

//protected: enum e_parameter_change_request_access c_network_session_parameter_base::get_change_request_access(void) const
//{
//    mangled_ppc("?get_change_request_access@c_network_session_parameter_base@@IBA?AW4e_parameter_change_request_access@@XZ");
//};

//public: bool c_network_session_parameter_base::desires_change_request(void) const
//{
//    mangled_ppc("?desires_change_request@c_network_session_parameter_base@@QBA_NXZ");
//};

//protected: char const * c_network_session_parameter_base::get_session_description(void) const
//{
//    mangled_ppc("?get_session_description@c_network_session_parameter_base@@IBAPBDXZ");
//};

//protected: unsigned long c_network_session_parameter_base::get_last_peer_update_timestamp(long) const
//{
//    mangled_ppc("?get_last_peer_update_timestamp@c_network_session_parameter_base@@IBAKJ@Z");
//};

//protected: void c_network_session_parameter_base::clear(void)
//{
//    mangled_ppc("?clear@c_network_session_parameter_base@@IAAXXZ");
//};

//protected: void c_network_session_parameter_base::set_update_required(void)
//{
//    mangled_ppc("?set_update_required@c_network_session_parameter_base@@IAAXXZ");
//};

//protected: void c_network_session_parameter_base::notify_update_sent_to_peer(long)
//{
//    mangled_ppc("?notify_update_sent_to_peer@c_network_session_parameter_base@@IAAXJ@Z");
//};

//protected: void c_network_session_parameter_base::notify_clear_sent_to_peer(long)
//{
//    mangled_ppc("?notify_clear_sent_to_peer@c_network_session_parameter_base@@IAAXJ@Z");
//};

//protected: void c_network_session_parameter_base::set_desires_change_request(void)
//{
//    mangled_ppc("?set_desires_change_request@c_network_session_parameter_base@@IAAXXZ");
//};

//protected: void c_network_session_parameter_base::notify_change_request_sent(void)
//{
//    mangled_ppc("?notify_change_request_sent@c_network_session_parameter_base@@IAAXXZ");
//};

//protected: void c_network_session_parameter_base::reset_peer_state(long)
//{
//    mangled_ppc("?reset_peer_state@c_network_session_parameter_base@@IAAXJ@Z");
//};

//protected: void c_network_session_parameter_base::transition_state_to_become_host(void)
//{
//    mangled_ppc("?transition_state_to_become_host@c_network_session_parameter_base@@IAAXXZ");
//};

//protected: virtual void c_network_session_parameter_base::validate_buffer(long, void const *, void *, void *)
//{
//    mangled_ppc("?validate_buffer@c_network_session_parameter_base@@MAAXJPBXPAX1@Z");
//};

//protected: virtual void c_network_session_parameter_base::notify_set_update_required(void)
//{
//    mangled_ppc("?notify_set_update_required@c_network_session_parameter_base@@MAAXXZ");
//};

//protected: virtual void c_network_session_parameter_base::notify_set_change_request(void)
//{
//    mangled_ppc("?notify_set_change_request@c_network_session_parameter_base@@MAAXXZ");
//};

//protected: virtual void c_network_session_parameter_base::notify_update_payload_sent_to_peer(long)
//{
//    mangled_ppc("?notify_update_payload_sent_to_peer@c_network_session_parameter_base@@MAAXJ@Z");
//};

//protected: virtual void c_network_session_parameter_base::notify_change_request_payload_sent(void)
//{
//    mangled_ppc("?notify_change_request_payload_sent@c_network_session_parameter_base@@MAAXXZ");
//};

//protected: virtual bool c_network_session_parameter_base::can_set_peer_no_longer_requires_update(long)
//{
//    mangled_ppc("?can_set_peer_no_longer_requires_update@c_network_session_parameter_base@@MAA_NJ@Z");
//};

//protected: virtual bool c_network_session_parameter_base::can_clear_change_request_desired(void)
//{
//    mangled_ppc("?can_clear_change_request_desired@c_network_session_parameter_base@@MAA_NXZ");
//};

//protected: virtual bool c_network_session_parameter_base::parameter_data_ready_for_consumption(void) const
//{
//    mangled_ppc("?parameter_data_ready_for_consumption@c_network_session_parameter_base@@MBA_NXZ");
//};

//protected: virtual bool c_network_session_parameter_base::is_chunked(void) const
//{
//    mangled_ppc("?is_chunked@c_network_session_parameter_base@@MBA_NXZ");
//};

//protected: virtual bool c_network_session_parameter_base::change_request_incoming(void) const
//{
//    mangled_ppc("?change_request_incoming@c_network_session_parameter_base@@MBA_NXZ");
//};

//private: void c_network_session_parameter_base::set_peer_no_longer_requires_update(long)
//{
//    mangled_ppc("?set_peer_no_longer_requires_update@c_network_session_parameter_base@@AAAXJ@Z");
//};

//private: void c_network_session_parameter_base::set_peer_no_longer_requires_clear(long)
//{
//    mangled_ppc("?set_peer_no_longer_requires_clear@c_network_session_parameter_base@@AAAXJ@Z");
//};

//private: void c_network_session_parameter_base::set_change_request_no_longer_desired(void)
//{
//    mangled_ppc("?set_change_request_no_longer_desired@c_network_session_parameter_base@@AAAXXZ");
//};

//public: void s_static_array<unsigned long, 16>::set_all(unsigned long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@K$0BA@@@QAAXABK@Z");
//};

//public: c_flags<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>(unsigned char)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_session_parameter_base_flags@@E$01Us_default_enum_string_resolver@@@@QAA@E@Z");
//};

//public: void c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_session_parameter_base_flags@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_network_session_parameter_base_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_session_parameter_base_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_network_session_parameter_base_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_network_session_parameter_base_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_session_parameter_base_flags@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_network_session_parameter_base_flags@@_N@Z");
//};

//public: class c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::operator&=(class c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_4?$c_flags_no_init@W4e_network_session_parameter_base_flags@@E$01Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: void c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_network_session_parameter_base_flags@@E$01Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: c_flags<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_session_parameter_base_flags@@E$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: unsigned long const & s_static_array<unsigned long, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@K$0BA@@@QBAABKJ@Z");
//};

//public: unsigned long & s_static_array<unsigned long, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@K$0BA@@@QAAAAKJ@Z");
//};

//public: bool c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_network_session_parameter_base_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_network_session_parameter_base_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_session_parameter_base_flags@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_network_session_parameter_base_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_network_session_parameter_base_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_session_parameter_base_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_session_parameter_base_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_network_session_parameter_base_flags@@@Z");
//};

//public: static bool s_static_array<unsigned long, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@K$0BA@@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_network_session_parameter_base_flags@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_session_parameter_base_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_session_parameter_base_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_network_session_parameter_base_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_network_session_parameter_base_flags@@@Z");
//};

