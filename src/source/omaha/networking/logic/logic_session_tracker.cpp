/* ---------- headers */

#include "omaha\networking\logic\logic_session_tracker.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_session_tracker_session_flags const c_flags_no_init<enum e_session_tracker_session_flags, unsigned char, 6, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_session_tracker_session_flags@@E$05Us_default_enum_string_resolver@@@@2W4e_session_tracker_session_flags@@B"
// public: static enum e_session_tracker_qos_attempt_flags const c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_session_tracker_qos_attempt_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_session_tracker_qos_attempt_flags@@B"
// public: static enum e_session_tracker_unsuitable_session_flags const c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_session_tracker_unsuitable_session_flags@@E$01Us_default_enum_string_resolver@@@@2W4e_session_tracker_unsuitable_session_flags@@B"
// public: static enum e_session_tracker_flags const c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_session_tracker_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_session_tracker_flags@@B"
// public: static long const s_static_array<struct s_session_tracker_qos_attempt, 10>::k_element_count; // "?k_element_count@?$s_static_array@Us_session_tracker_qos_attempt@@$09@@2JB"
// char const **k_network_session_tracker_session_unsuitable_reason_descriptions; // "?k_network_session_tracker_session_unsuitable_reason_descriptions@@3PAPBDA"
// struct s_session_tracker_globals session_tracker_globals; // "?session_tracker_globals@@3Us_session_tracker_globals@@A"

// bool network_session_tracker_initialize(void);
// void network_session_tracker_dispose(void);
// void network_session_tracker_update(void);
// bool network_session_tracker_start(enum e_network_session_tracker_sort_method, enum e_network_session_qos_status_data_type, class c_matchmaking_quality *);
// void network_session_tracker_stop(void);
// void network_session_tracker_clear(void);
// void network_session_tracker_clear_unsuitable_session_cache(void);
// void network_session_tracker_clear_unsuitable_session_cache_below_latency(long);
// bool network_session_tracker_track_session(char const *, float, struct s_transport_session_description const *);
// void network_session_tracker_mark_session_unsuitable(struct s_transport_session_description const *, enum e_network_session_tracker_session_unsuitable_reason);
// bool network_session_tracker_try_and_mark_session_unsuitable(struct s_transport_session_description const *, enum e_network_session_tracker_session_unsuitable_reason);
// long network_session_tracker_get_session_count(void);
// void network_session_tracker_get_session_status(long, struct s_network_session_tracker_session_status *);
// bool network_session_tracker_get_session_data(long, struct s_network_session_tracker_session_data *);
// void network_session_tracker_log_session(long);
// bool network_session_tracker_session_contacted(long);
// public: bool c_session_tracker::initialize(bool);
// public: void c_session_tracker::dispose(void);
// public: bool c_session_tracker::allocate_storage(enum e_network_session_tracker_sort_method, enum e_network_session_qos_status_data_type, class c_matchmaking_quality *);
// public: void c_session_tracker::release_storage(void);
// public: long c_session_tracker::get_session_count(void) const;
// public: void c_session_tracker::get_session_status(long, struct s_network_session_tracker_session_status *) const;
// public: bool c_session_tracker::session_completed_initial_qos(long) const;
// public: bool c_session_tracker::get_session_data(long, struct s_network_session_tracker_session_data *) const;
// public: void c_session_tracker::log_session(long) const;
// public: void c_session_tracker::update(void);
// public: void c_session_tracker::clear(void);
// public: void c_session_tracker::clear_unsuitable_session_cache(void);
// public: void c_session_tracker::clear_unsuitable_session_cache_below_latency(long);
// public: bool c_session_tracker::add_session(char const *, float, struct s_transport_session_description const *);
// public: void s_session_tracker_session_data::reset_qos_attempt_state(void);
// public: void c_session_tracker::mark_session_unsuitable(struct s_transport_session_description const *, enum e_network_session_tracker_session_unsuitable_reason);
// public: long c_session_tracker::get_tracked_session_index(struct s_transport_secure_identifier const *);
// public: bool c_session_tracker::session_in_unsuitable_cache(struct s_transport_secure_identifier const *) const;
// private: void c_session_tracker::add_session_to_unsuitable_cache(struct s_session_tracker_session_data *, enum e_network_session_tracker_session_unsuitable_reason);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: s_session_tracker_unsuitable_session::s_session_tracker_unsuitable_session(void);
// private: void c_session_tracker::mark_tracked_session_unsuitable(struct s_session_tracker_session_data *, enum e_network_session_tracker_session_unsuitable_reason);
// private: void c_session_tracker::build_qos_target_list(enum e_transport_qos_type, long *, long, long *);
// private: void c_session_tracker::update_qos_send(long);
// private: void c_session_tracker::update_qos_receive(long);
// private: void c_session_tracker::clear_qos_attempt(long);
// private: void c_session_tracker::release_qos_attempt(long);
// private: static long c_session_tracker::get_maximum_qos_target_count(enum e_transport_qos_type);
// private: void c_session_tracker::update_sort(void);
// private: void c_session_tracker::update_sort_by_desirability(void);
// int compare_session_desirability(void const *, void const *);
// public: static long s_static_array<struct s_session_tracker_qos_attempt, 10>::get_count(void);
// public: bool c_flags_no_init<enum e_session_tracker_session_flags, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_session_tracker_session_flags) const;
// public: void c_flags_no_init<enum e_session_tracker_session_flags, unsigned char, 6, struct s_default_enum_string_resolver>::set(enum e_session_tracker_session_flags, bool);
// public: bool c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_session_tracker_qos_attempt_flags) const;
// public: void c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_session_tracker_qos_attempt_flags, bool);
// public: bool c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_session_tracker_unsuitable_session_flags) const;
// public: void c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_session_tracker_unsuitable_session_flags, bool);
// public: c_flags<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_session_tracker_flags) const;
// public: void c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_session_tracker_flags, bool);
// public: struct s_session_tracker_qos_attempt & s_static_array<struct s_session_tracker_qos_attempt, 10>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum e_session_tracker_session_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_session_tracker_session_flags);
// private: static unsigned char c_flags_no_init<enum e_session_tracker_session_flags, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_session_tracker_session_flags);
// public: static bool c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_session_tracker_qos_attempt_flags);
// private: static unsigned char c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_session_tracker_qos_attempt_flags);
// public: void c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_session_tracker_unsuitable_session_flags);
// private: static unsigned char c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_session_tracker_unsuitable_session_flags);
// public: static bool c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_session_tracker_flags);
// private: static unsigned char c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_session_tracker_flags);
// public: static bool s_static_array<struct s_session_tracker_qos_attempt, 10>::valid<long>(long);
// private: static unsigned char c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_session_tracker_unsuitable_session_flags);
// public: s_session_tracker_globals::s_session_tracker_globals(void);
// public: c_session_tracker::c_session_tracker(void);
// public: s_static_array<struct s_session_tracker_qos_attempt, 10>::s_static_array<struct s_session_tracker_qos_attempt, 10>(void);
// public: s_session_tracker_qos_attempt::s_session_tracker_qos_attempt(void);
// public: c_flags<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: c_flags<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned char c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_session_tracker_qos_attempt_flags);
// private: static unsigned char c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_session_tracker_flags);

//bool network_session_tracker_initialize(void)
//{
//    mangled_ppc("?network_session_tracker_initialize@@YA_NXZ");
//};

//void network_session_tracker_dispose(void)
//{
//    mangled_ppc("?network_session_tracker_dispose@@YAXXZ");
//};

//void network_session_tracker_update(void)
//{
//    mangled_ppc("?network_session_tracker_update@@YAXXZ");
//};

//bool network_session_tracker_start(enum e_network_session_tracker_sort_method, enum e_network_session_qos_status_data_type, class c_matchmaking_quality *)
//{
//    mangled_ppc("?network_session_tracker_start@@YA_NW4e_network_session_tracker_sort_method@@W4e_network_session_qos_status_data_type@@PAVc_matchmaking_quality@@@Z");
//};

//void network_session_tracker_stop(void)
//{
//    mangled_ppc("?network_session_tracker_stop@@YAXXZ");
//};

//void network_session_tracker_clear(void)
//{
//    mangled_ppc("?network_session_tracker_clear@@YAXXZ");
//};

//void network_session_tracker_clear_unsuitable_session_cache(void)
//{
//    mangled_ppc("?network_session_tracker_clear_unsuitable_session_cache@@YAXXZ");
//};

//void network_session_tracker_clear_unsuitable_session_cache_below_latency(long)
//{
//    mangled_ppc("?network_session_tracker_clear_unsuitable_session_cache_below_latency@@YAXJ@Z");
//};

//bool network_session_tracker_track_session(char const *, float, struct s_transport_session_description const *)
//{
//    mangled_ppc("?network_session_tracker_track_session@@YA_NPBDMPBUs_transport_session_description@@@Z");
//};

//void network_session_tracker_mark_session_unsuitable(struct s_transport_session_description const *, enum e_network_session_tracker_session_unsuitable_reason)
//{
//    mangled_ppc("?network_session_tracker_mark_session_unsuitable@@YAXPBUs_transport_session_description@@W4e_network_session_tracker_session_unsuitable_reason@@@Z");
//};

//bool network_session_tracker_try_and_mark_session_unsuitable(struct s_transport_session_description const *, enum e_network_session_tracker_session_unsuitable_reason)
//{
//    mangled_ppc("?network_session_tracker_try_and_mark_session_unsuitable@@YA_NPBUs_transport_session_description@@W4e_network_session_tracker_session_unsuitable_reason@@@Z");
//};

//long network_session_tracker_get_session_count(void)
//{
//    mangled_ppc("?network_session_tracker_get_session_count@@YAJXZ");
//};

//void network_session_tracker_get_session_status(long, struct s_network_session_tracker_session_status *)
//{
//    mangled_ppc("?network_session_tracker_get_session_status@@YAXJPAUs_network_session_tracker_session_status@@@Z");
//};

//bool network_session_tracker_get_session_data(long, struct s_network_session_tracker_session_data *)
//{
//    mangled_ppc("?network_session_tracker_get_session_data@@YA_NJPAUs_network_session_tracker_session_data@@@Z");
//};

//void network_session_tracker_log_session(long)
//{
//    mangled_ppc("?network_session_tracker_log_session@@YAXJ@Z");
//};

//bool network_session_tracker_session_contacted(long)
//{
//    mangled_ppc("?network_session_tracker_session_contacted@@YA_NJ@Z");
//};

//public: bool c_session_tracker::initialize(bool)
//{
//    mangled_ppc("?initialize@c_session_tracker@@QAA_N_N@Z");
//};

//public: void c_session_tracker::dispose(void)
//{
//    mangled_ppc("?dispose@c_session_tracker@@QAAXXZ");
//};

//public: bool c_session_tracker::allocate_storage(enum e_network_session_tracker_sort_method, enum e_network_session_qos_status_data_type, class c_matchmaking_quality *)
//{
//    mangled_ppc("?allocate_storage@c_session_tracker@@QAA_NW4e_network_session_tracker_sort_method@@W4e_network_session_qos_status_data_type@@PAVc_matchmaking_quality@@@Z");
//};

//public: void c_session_tracker::release_storage(void)
//{
//    mangled_ppc("?release_storage@c_session_tracker@@QAAXXZ");
//};

//public: long c_session_tracker::get_session_count(void) const
//{
//    mangled_ppc("?get_session_count@c_session_tracker@@QBAJXZ");
//};

//public: void c_session_tracker::get_session_status(long, struct s_network_session_tracker_session_status *) const
//{
//    mangled_ppc("?get_session_status@c_session_tracker@@QBAXJPAUs_network_session_tracker_session_status@@@Z");
//};

//public: bool c_session_tracker::session_completed_initial_qos(long) const
//{
//    mangled_ppc("?session_completed_initial_qos@c_session_tracker@@QBA_NJ@Z");
//};

//public: bool c_session_tracker::get_session_data(long, struct s_network_session_tracker_session_data *) const
//{
//    mangled_ppc("?get_session_data@c_session_tracker@@QBA_NJPAUs_network_session_tracker_session_data@@@Z");
//};

//public: void c_session_tracker::log_session(long) const
//{
//    mangled_ppc("?log_session@c_session_tracker@@QBAXJ@Z");
//};

//public: void c_session_tracker::update(void)
//{
//    mangled_ppc("?update@c_session_tracker@@QAAXXZ");
//};

//public: void c_session_tracker::clear(void)
//{
//    mangled_ppc("?clear@c_session_tracker@@QAAXXZ");
//};

//public: void c_session_tracker::clear_unsuitable_session_cache(void)
//{
//    mangled_ppc("?clear_unsuitable_session_cache@c_session_tracker@@QAAXXZ");
//};

//public: void c_session_tracker::clear_unsuitable_session_cache_below_latency(long)
//{
//    mangled_ppc("?clear_unsuitable_session_cache_below_latency@c_session_tracker@@QAAXJ@Z");
//};

//public: bool c_session_tracker::add_session(char const *, float, struct s_transport_session_description const *)
//{
//    mangled_ppc("?add_session@c_session_tracker@@QAA_NPBDMPBUs_transport_session_description@@@Z");
//};

//public: void s_session_tracker_session_data::reset_qos_attempt_state(void)
//{
//    mangled_ppc("?reset_qos_attempt_state@s_session_tracker_session_data@@QAAXXZ");
//};

//public: void c_session_tracker::mark_session_unsuitable(struct s_transport_session_description const *, enum e_network_session_tracker_session_unsuitable_reason)
//{
//    mangled_ppc("?mark_session_unsuitable@c_session_tracker@@QAAXPBUs_transport_session_description@@W4e_network_session_tracker_session_unsuitable_reason@@@Z");
//};

//public: long c_session_tracker::get_tracked_session_index(struct s_transport_secure_identifier const *)
//{
//    mangled_ppc("?get_tracked_session_index@c_session_tracker@@QAAJPBUs_transport_secure_identifier@@@Z");
//};

//public: bool c_session_tracker::session_in_unsuitable_cache(struct s_transport_secure_identifier const *) const
//{
//    mangled_ppc("?session_in_unsuitable_cache@c_session_tracker@@QBA_NPBUs_transport_secure_identifier@@@Z");
//};

//private: void c_session_tracker::add_session_to_unsuitable_cache(struct s_session_tracker_session_data *, enum e_network_session_tracker_session_unsuitable_reason)
//{
//    mangled_ppc("?add_session_to_unsuitable_cache@c_session_tracker@@AAAXPAUs_session_tracker_session_data@@W4e_network_session_tracker_session_unsuitable_reason@@@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//public: s_session_tracker_unsuitable_session::s_session_tracker_unsuitable_session(void)
//{
//    mangled_ppc("??0s_session_tracker_unsuitable_session@@QAA@XZ");
//};

//private: void c_session_tracker::mark_tracked_session_unsuitable(struct s_session_tracker_session_data *, enum e_network_session_tracker_session_unsuitable_reason)
//{
//    mangled_ppc("?mark_tracked_session_unsuitable@c_session_tracker@@AAAXPAUs_session_tracker_session_data@@W4e_network_session_tracker_session_unsuitable_reason@@@Z");
//};

//private: void c_session_tracker::build_qos_target_list(enum e_transport_qos_type, long *, long, long *)
//{
//    mangled_ppc("?build_qos_target_list@c_session_tracker@@AAAXW4e_transport_qos_type@@PAJJ1@Z");
//};

//private: void c_session_tracker::update_qos_send(long)
//{
//    mangled_ppc("?update_qos_send@c_session_tracker@@AAAXJ@Z");
//};

//private: void c_session_tracker::update_qos_receive(long)
//{
//    mangled_ppc("?update_qos_receive@c_session_tracker@@AAAXJ@Z");
//};

//private: void c_session_tracker::clear_qos_attempt(long)
//{
//    mangled_ppc("?clear_qos_attempt@c_session_tracker@@AAAXJ@Z");
//};

//private: void c_session_tracker::release_qos_attempt(long)
//{
//    mangled_ppc("?release_qos_attempt@c_session_tracker@@AAAXJ@Z");
//};

//private: static long c_session_tracker::get_maximum_qos_target_count(enum e_transport_qos_type)
//{
//    mangled_ppc("?get_maximum_qos_target_count@c_session_tracker@@CAJW4e_transport_qos_type@@@Z");
//};

//private: void c_session_tracker::update_sort(void)
//{
//    mangled_ppc("?update_sort@c_session_tracker@@AAAXXZ");
//};

//private: void c_session_tracker::update_sort_by_desirability(void)
//{
//    mangled_ppc("?update_sort_by_desirability@c_session_tracker@@AAAXXZ");
//};

//int compare_session_desirability(void const *, void const *)
//{
//    mangled_ppc("?compare_session_desirability@@YAHPBX0@Z");
//};

//public: static long s_static_array<struct s_session_tracker_qos_attempt, 10>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_session_tracker_qos_attempt@@$09@@SAJXZ");
//};

//public: bool c_flags_no_init<enum e_session_tracker_session_flags, unsigned char, 6, struct s_default_enum_string_resolver>::test(enum e_session_tracker_session_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_session_tracker_session_flags@@E$05Us_default_enum_string_resolver@@@@QBA_NW4e_session_tracker_session_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_session_tracker_session_flags, unsigned char, 6, struct s_default_enum_string_resolver>::set(enum e_session_tracker_session_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_session_tracker_session_flags@@E$05Us_default_enum_string_resolver@@@@QAAXW4e_session_tracker_session_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_session_tracker_qos_attempt_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_session_tracker_qos_attempt_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_session_tracker_qos_attempt_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_session_tracker_qos_attempt_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_session_tracker_qos_attempt_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_session_tracker_qos_attempt_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_session_tracker_unsuitable_session_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_session_tracker_unsuitable_session_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_session_tracker_unsuitable_session_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::set(enum e_session_tracker_unsuitable_session_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_session_tracker_unsuitable_session_flags@@E$01Us_default_enum_string_resolver@@@@QAAXW4e_session_tracker_unsuitable_session_flags@@_N@Z");
//};

//public: c_flags<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::c_flags<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_session_tracker_unsuitable_session_flags@@E$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_session_tracker_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_session_tracker_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_session_tracker_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_session_tracker_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_session_tracker_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_session_tracker_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_session_tracker_flags@@_N@Z");
//};

//public: struct s_session_tracker_qos_attempt & s_static_array<struct s_session_tracker_qos_attempt, 10>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_session_tracker_qos_attempt@@$09@@QAAAAUs_session_tracker_qos_attempt@@J@Z");
//};

//public: static bool c_flags_no_init<enum e_session_tracker_session_flags, unsigned char, 6, struct s_default_enum_string_resolver>::valid_bit(enum e_session_tracker_session_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_session_tracker_session_flags@@E$05Us_default_enum_string_resolver@@@@SA_NW4e_session_tracker_session_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_session_tracker_session_flags, unsigned char, 6, struct s_default_enum_string_resolver>::flag_size_type(enum e_session_tracker_session_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_session_tracker_session_flags@@E$05Us_default_enum_string_resolver@@@@CAEW4e_session_tracker_session_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_session_tracker_qos_attempt_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_session_tracker_qos_attempt_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_session_tracker_qos_attempt_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_session_tracker_qos_attempt_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_session_tracker_qos_attempt_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_session_tracker_qos_attempt_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_session_tracker_unsuitable_session_flags@@E$01Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_session_tracker_unsuitable_session_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum e_session_tracker_unsuitable_session_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_session_tracker_unsuitable_session_flags@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_session_tracker_unsuitable_session_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum e_session_tracker_unsuitable_session_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_session_tracker_unsuitable_session_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_session_tracker_unsuitable_session_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_session_tracker_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_session_tracker_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_session_tracker_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_session_tracker_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_session_tracker_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_session_tracker_flags@@@Z");
//};

//public: static bool s_static_array<struct s_session_tracker_qos_attempt, 10>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_session_tracker_qos_attempt@@$09@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_session_tracker_unsuitable_session_flags@@E$01Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_session_tracker_unsuitable_session_flags, unsigned char, 2, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_session_tracker_unsuitable_session_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_session_tracker_unsuitable_session_flags@@E$01Us_default_enum_string_resolver@@@@CAEW4e_session_tracker_unsuitable_session_flags@@@Z");
//};

//public: s_session_tracker_globals::s_session_tracker_globals(void)
//{
//    mangled_ppc("??0s_session_tracker_globals@@QAA@XZ");
//};

//public: c_session_tracker::c_session_tracker(void)
//{
//    mangled_ppc("??0c_session_tracker@@QAA@XZ");
//};

//public: s_static_array<struct s_session_tracker_qos_attempt, 10>::s_static_array<struct s_session_tracker_qos_attempt, 10>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_session_tracker_qos_attempt@@$09@@QAA@XZ");
//};

//public: s_session_tracker_qos_attempt::s_session_tracker_qos_attempt(void)
//{
//    mangled_ppc("??0s_session_tracker_qos_attempt@@QAA@XZ");
//};

//public: c_flags<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_session_tracker_qos_attempt_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_flags<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_session_tracker_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_session_tracker_qos_attempt_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_session_tracker_qos_attempt_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_session_tracker_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_session_tracker_qos_attempt_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_session_tracker_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_session_tracker_qos_attempt_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_session_tracker_qos_attempt_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_session_tracker_qos_attempt_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_session_tracker_qos_attempt_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_session_tracker_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_session_tracker_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_session_tracker_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_session_tracker_flags@@@Z");
//};

