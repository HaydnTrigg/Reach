/* ---------- headers */

#include "omaha\networking\session\network_session_host.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_network_session_find_host_peer_result_flag, unsigned char, 0, 3, struct s_network_session_find_host_peer_result_flag_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_network_session_find_host_peer_result_flag@@E$0A@$02Us_network_session_find_host_peer_result_flag_string_resolver@@@@2HB"
// public: static enum e_network_session_find_host_peer_result_flag const c_enum_no_init<enum e_network_session_find_host_peer_result_flag, unsigned char, 0, 3, struct s_network_session_find_host_peer_result_flag_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_network_session_find_host_peer_result_flag@@E$0A@$02Us_network_session_find_host_peer_result_flag_string_resolver@@@@2W4e_network_session_find_host_peer_result_flag@@B"
// public: static long const s_static_array<float, 23>::k_element_count; // "?k_element_count@?$s_static_array@M$0BH@@@2JB"
// public: static enum e_host_selection_factor const c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_host_selection_factor@@K$0BH@Us_host_selection_factor_string_resolver@@@@2W4e_host_selection_factor@@B"
// public: static long const s_static_array<enum e_host_selection_factor, 23>::k_element_count; // "?k_element_count@?$s_static_array@W4e_host_selection_factor@@$0BH@@@2JB"
// public: static long const s_static_array<struct s_host_selection_peer_working_data, 16>::k_element_count; // "?k_element_count@?$s_static_array@Us_host_selection_peer_working_data@@$0BA@@@2JB"
// public: static long const s_static_array<class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>, 16>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_flags@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@$0BA@@@2JB"
// char const **network_session_find_host_peer_result_flag_names; // "?network_session_find_host_peer_result_flag_names@@3PAPBDA"
// long volatile `public: enum e_multiplayer_team __cdecl c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::get_lowest_bit_set(void) const'::`3'::x_event_category_index; // "?x_event_category_index@?2??get_lowest_bit_set@?$c_flags_no_init@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@QBA?AW4e_multiplayer_team@@XZ@4JC"
// long volatile `public: long __cdecl c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::get_lowest_bit_set(void) const'::`3'::x_event_category_index; // "?x_event_category_index@?2??get_lowest_bit_set@?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QBAJXZ@4JC"
// bool net_host_selection_logging_verbose; // "?net_host_selection_logging_verbose@@3_NA"

// public: static void s_network_session_find_host_peer_result_flag_string_resolver::to_string(enum e_network_session_find_host_peer_result_flag, class c_static_string<64> *);
// public: void c_network_session::find_and_rate_hosts(enum e_host_selection_mode, class c_flags<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>, enum e_network_session_find_host_log_level, long, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, bool, struct s_network_session_find_host_results *) const;
// public: bool c_network_session::has_potential_hosts_for_matchmaking(bool, bool) const;
// public: void c_network_session::process_find_host_results_to_detect_bridging(struct s_network_session_find_host_results const *);
// public: s_static_array<class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>, 16>::s_static_array<class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>, 16>(void);
// public: bool c_network_session::does_peer_have_gamestate(long) const;
// public: c_host_selector::c_host_selector(class c_network_session const *, enum e_host_selection_mode, class c_flags<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>, enum e_network_session_find_host_log_level, long, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, bool);
// public: s_static_array<struct s_host_selection_peer_working_data, 16>::s_static_array<struct s_host_selection_peer_working_data, 16>(void);
// public: s_host_selection_peer_working_data::s_host_selection_peer_working_data(void);
// public: void c_host_selector::select_host(struct s_network_session_find_host_results *);
// private: void c_host_selector::postprocess_parameters(void);
// enum e_host_selection_factor operator++(enum e_host_selection_factor &, int);
// private: void c_host_selector::log_initial_state(void);
// private: void c_host_selector::calculate_lowest_channel_packet_loss_pct(void);
// private: void c_host_selector::peer_evaluate_host_qualifications(long);
// private: void c_host_selector::gather_peer_factors(long);
// private: void c_host_selector::test_peer_requirements(long);
// private: void c_host_selector::evaluate_peer_quality(long);
// private: static bool c_host_selector::qsort_compare_peers(long, long, void const *);
// private: static bool c_host_selector::qsort_compare_strict_sort_elements(long, long, void const *);
// private: void c_host_selector::sort(void);
// private: void c_host_selector::build_results(struct s_network_session_find_host_results *);
// bool factor_correlates_with_quality(enum e_host_selection_factor);
// public: long * s_static_array<long, 16>::get_elements(void);
// public: long c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::push(void);
// public: struct s_network_session_find_host_per_peer_result const & c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::operator[](long) const;
// public: struct s_network_session_find_host_per_peer_result * c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::get(long);
// public: enum e_host_selection_factor * s_static_array<enum e_host_selection_factor, 23>::get_elements(void);
// public: c_enum<enum e_host_selection_factor, unsigned char, 0, 23, struct s_host_selection_factor_string_resolver>::c_enum<enum e_host_selection_factor, unsigned char, 0, 23, struct s_host_selection_factor_string_resolver>(enum e_host_selection_factor);
// public: class c_static_string<64> c_enum_no_init<enum e_host_selection_factor, unsigned char, 0, 23, struct s_host_selection_factor_string_resolver>::to_string(void) const;
// public: c_enum<enum e_host_selection_mode, unsigned char, 0, 3, struct s_host_selection_mode_string_resolver>::c_enum<enum e_host_selection_mode, unsigned char, 0, 3, struct s_host_selection_mode_string_resolver>(enum e_host_selection_mode);
// public: class c_static_string<64> c_enum_no_init<enum e_host_selection_mode, unsigned char, 0, 3, struct s_host_selection_mode_string_resolver>::to_string(void) const;
// public: bool c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::full(void) const;
// public: bool c_enum_no_init<enum e_host_selection_factor, unsigned char, 0, 23, struct s_host_selection_factor_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_host_selection_mode, unsigned char, 0, 3, struct s_host_selection_mode_string_resolver>::in_range(void) const;
// public: long c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::count_set(void) const;
// public: enum e_multiplayer_team c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::get_lowest_bit_set(void) const;
// public: long c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::get_lowest_bit_set(void) const;
// public: void c_flags_no_init<enum e_network_session_find_host_peer_result_flag, unsigned char, 3, struct s_network_session_find_host_peer_result_flag_string_resolver>::set(enum e_network_session_find_host_peer_result_flag, bool);
// public: class c_static_string<1024> c_flags_no_init<enum e_network_session_find_host_peer_result_flag, unsigned char, 3, struct s_network_session_find_host_peer_result_flag_string_resolver>::to_string(void) const;
// public: bool c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::test(enum e_host_selection_factor) const;
// public: void c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::set(enum e_host_selection_factor, bool);
// public: long c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::count_set(void) const;
// public: c_flags<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::c_flags<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>(void);
// public: bool c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_network_session_find_host_flags) const;
// public: class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> & s_static_array<class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>, 16>::operator[]<long>(long);
// public: struct s_host_selection_peer_working_data & s_static_array<struct s_host_selection_peer_working_data, 16>::operator[]<long>(long);
// public: enum e_host_selection_factor & s_static_array<enum e_host_selection_factor, 23>::operator[]<enum e_host_selection_factor>(enum e_host_selection_factor);
// public: enum e_host_selection_factor & s_static_array<enum e_host_selection_factor, 23>::operator[]<long>(long);
// public: float & s_static_array<float, 23>::operator[]<enum e_host_selection_factor>(enum e_host_selection_factor);
// public: bool c_flags_no_init<enum e_network_session_find_host_peer_result_flag, unsigned char, 3, struct s_network_session_find_host_peer_result_flag_string_resolver>::valid(void) const;
// public: void c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::valid_bit(enum e_host_selection_factor);
// private: static unsigned long c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::flag_size_type(enum e_host_selection_factor);
// public: static bool s_static_array<class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>, 16>::valid<long>(long);
// public: static bool s_static_array<struct s_host_selection_peer_working_data, 16>::valid<long>(long);
// public: static bool s_static_array<enum e_host_selection_factor, 23>::valid<enum e_host_selection_factor>(enum e_host_selection_factor);
// public: static bool s_static_array<enum e_host_selection_factor, 23>::valid<long>(long);
// public: static bool s_static_array<float, 23>::valid<enum e_host_selection_factor>(enum e_host_selection_factor);
// private: static unsigned long c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::make_N_bit_mask_size_type(enum e_host_selection_factor);

//public: static void s_network_session_find_host_peer_result_flag_string_resolver::to_string(enum e_network_session_find_host_peer_result_flag, class c_static_string<64> *)
//{
//    mangled_ppc("?to_string@s_network_session_find_host_peer_result_flag_string_resolver@@SAXW4e_network_session_find_host_peer_result_flag@@PAV?$c_static_string@$0EA@@@@Z");
//};

//public: void c_network_session::find_and_rate_hosts(enum e_host_selection_mode, class c_flags<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>, enum e_network_session_find_host_log_level, long, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, bool, struct s_network_session_find_host_results *) const
//{
//    mangled_ppc("?find_and_rate_hosts@c_network_session@@QBAXW4e_host_selection_mode@@V?$c_flags@W4e_network_session_find_host_flags@@E$01Us_default_enum_string_resolver@@@@W4e_network_session_find_host_log_level@@JV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@3_NPAUs_network_session_find_host_results@@@Z");
//};

//public: bool c_network_session::has_potential_hosts_for_matchmaking(bool, bool) const
//{
//    mangled_ppc("?has_potential_hosts_for_matchmaking@c_network_session@@QBA_N_N0@Z");
//};

//public: void c_network_session::process_find_host_results_to_detect_bridging(struct s_network_session_find_host_results const *)
//{
//    mangled_ppc("?process_find_host_results_to_detect_bridging@c_network_session@@QAAXPBUs_network_session_find_host_results@@@Z");
//};

//public: s_static_array<class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>, 16>::s_static_array<class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>, 16>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_flags@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@$0BA@@@QAA@XZ");
//};

//public: bool c_network_session::does_peer_have_gamestate(long) const
//{
//    mangled_ppc("?does_peer_have_gamestate@c_network_session@@QBA_NJ@Z");
//};

//public: c_host_selector::c_host_selector(class c_network_session const *, enum e_host_selection_mode, class c_flags<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>, enum e_network_session_find_host_log_level, long, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, bool)
//{
//    mangled_ppc("??0c_host_selector@@QAA@PBVc_network_session@@W4e_host_selection_mode@@V?$c_flags@W4e_network_session_find_host_flags@@E$01Us_default_enum_string_resolver@@@@W4e_network_session_find_host_log_level@@JV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@4_N@Z");
//};

//public: s_static_array<struct s_host_selection_peer_working_data, 16>::s_static_array<struct s_host_selection_peer_working_data, 16>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_host_selection_peer_working_data@@$0BA@@@QAA@XZ");
//};

//public: s_host_selection_peer_working_data::s_host_selection_peer_working_data(void)
//{
//    mangled_ppc("??0s_host_selection_peer_working_data@@QAA@XZ");
//};

//public: void c_host_selector::select_host(struct s_network_session_find_host_results *)
//{
//    mangled_ppc("?select_host@c_host_selector@@QAAXPAUs_network_session_find_host_results@@@Z");
//};

//private: void c_host_selector::postprocess_parameters(void)
//{
//    mangled_ppc("?postprocess_parameters@c_host_selector@@AAAXXZ");
//};

//enum e_host_selection_factor operator++(enum e_host_selection_factor &, int)
//{
//    mangled_ppc("??E@YA?AW4e_host_selection_factor@@AAW40@H@Z");
//};

//private: void c_host_selector::log_initial_state(void)
//{
//    mangled_ppc("?log_initial_state@c_host_selector@@AAAXXZ");
//};

//private: void c_host_selector::calculate_lowest_channel_packet_loss_pct(void)
//{
//    mangled_ppc("?calculate_lowest_channel_packet_loss_pct@c_host_selector@@AAAXXZ");
//};

//private: void c_host_selector::peer_evaluate_host_qualifications(long)
//{
//    mangled_ppc("?peer_evaluate_host_qualifications@c_host_selector@@AAAXJ@Z");
//};

//private: void c_host_selector::gather_peer_factors(long)
//{
//    mangled_ppc("?gather_peer_factors@c_host_selector@@AAAXJ@Z");
//};

//private: void c_host_selector::test_peer_requirements(long)
//{
//    mangled_ppc("?test_peer_requirements@c_host_selector@@AAAXJ@Z");
//};

//private: void c_host_selector::evaluate_peer_quality(long)
//{
//    mangled_ppc("?evaluate_peer_quality@c_host_selector@@AAAXJ@Z");
//};

//private: static bool c_host_selector::qsort_compare_peers(long, long, void const *)
//{
//    mangled_ppc("?qsort_compare_peers@c_host_selector@@CA_NJJPBX@Z");
//};

//private: static bool c_host_selector::qsort_compare_strict_sort_elements(long, long, void const *)
//{
//    mangled_ppc("?qsort_compare_strict_sort_elements@c_host_selector@@CA_NJJPBX@Z");
//};

//private: void c_host_selector::sort(void)
//{
//    mangled_ppc("?sort@c_host_selector@@AAAXXZ");
//};

//private: void c_host_selector::build_results(struct s_network_session_find_host_results *)
//{
//    mangled_ppc("?build_results@c_host_selector@@AAAXPAUs_network_session_find_host_results@@@Z");
//};

//bool factor_correlates_with_quality(enum e_host_selection_factor)
//{
//    mangled_ppc("?factor_correlates_with_quality@@YA_NW4e_host_selection_factor@@@Z");
//};

//public: long * s_static_array<long, 16>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@J$0BA@@@QAAPAJXZ");
//};

//public: long c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_network_session_find_host_per_peer_result@@$0BA@@@QAAJXZ");
//};

//public: struct s_network_session_find_host_per_peer_result const & c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@Us_network_session_find_host_per_peer_result@@$0BA@@@QBAABUs_network_session_find_host_per_peer_result@@J@Z");
//};

//public: struct s_network_session_find_host_per_peer_result * c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_network_session_find_host_per_peer_result@@$0BA@@@QAAPAUs_network_session_find_host_per_peer_result@@J@Z");
//};

//public: enum e_host_selection_factor * s_static_array<enum e_host_selection_factor, 23>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@W4e_host_selection_factor@@$0BH@@@QAAPAW4e_host_selection_factor@@XZ");
//};

//public: c_enum<enum e_host_selection_factor, unsigned char, 0, 23, struct s_host_selection_factor_string_resolver>::c_enum<enum e_host_selection_factor, unsigned char, 0, 23, struct s_host_selection_factor_string_resolver>(enum e_host_selection_factor)
//{
//    mangled_ppc("??0?$c_enum@W4e_host_selection_factor@@E$0A@$0BH@Us_host_selection_factor_string_resolver@@@@QAA@W4e_host_selection_factor@@@Z");
//};

//public: class c_static_string<64> c_enum_no_init<enum e_host_selection_factor, unsigned char, 0, 23, struct s_host_selection_factor_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_enum_no_init@W4e_host_selection_factor@@E$0A@$0BH@Us_host_selection_factor_string_resolver@@@@QBA?AV?$c_static_string@$0EA@@@XZ");
//};

//public: c_enum<enum e_host_selection_mode, unsigned char, 0, 3, struct s_host_selection_mode_string_resolver>::c_enum<enum e_host_selection_mode, unsigned char, 0, 3, struct s_host_selection_mode_string_resolver>(enum e_host_selection_mode)
//{
//    mangled_ppc("??0?$c_enum@W4e_host_selection_mode@@E$0A@$02Us_host_selection_mode_string_resolver@@@@QAA@W4e_host_selection_mode@@@Z");
//};

//public: class c_static_string<64> c_enum_no_init<enum e_host_selection_mode, unsigned char, 0, 3, struct s_host_selection_mode_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_enum_no_init@W4e_host_selection_mode@@E$0A@$02Us_host_selection_mode_string_resolver@@@@QBA?AV?$c_static_string@$0EA@@@XZ");
//};

//public: bool c_static_stack<struct s_network_session_find_host_per_peer_result, 16>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_network_session_find_host_per_peer_result@@$0BA@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_host_selection_factor, unsigned char, 0, 23, struct s_host_selection_factor_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_host_selection_factor@@E$0A@$0BH@Us_host_selection_factor_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_host_selection_mode, unsigned char, 0, 3, struct s_host_selection_mode_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_host_selection_mode@@E$0A@$02Us_host_selection_mode_string_resolver@@@@QBA_NXZ");
//};

//public: long c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: enum e_multiplayer_team c_flags_no_init<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>::get_lowest_bit_set(void) const
//{
//    mangled_ppc("?get_lowest_bit_set@?$c_flags_no_init@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@QBA?AW4e_multiplayer_team@@XZ");
//};

//public: long c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::get_lowest_bit_set(void) const
//{
//    mangled_ppc("?get_lowest_bit_set@?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: void c_flags_no_init<enum e_network_session_find_host_peer_result_flag, unsigned char, 3, struct s_network_session_find_host_peer_result_flag_string_resolver>::set(enum e_network_session_find_host_peer_result_flag, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_session_find_host_peer_result_flag@@E$02Us_network_session_find_host_peer_result_flag_string_resolver@@@@QAAXW4e_network_session_find_host_peer_result_flag@@_N@Z");
//};

//public: class c_static_string<1024> c_flags_no_init<enum e_network_session_find_host_peer_result_flag, unsigned char, 3, struct s_network_session_find_host_peer_result_flag_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_flags_no_init@W4e_network_session_find_host_peer_result_flag@@E$02Us_network_session_find_host_peer_result_flag_string_resolver@@@@QBA?AV?$c_static_string@$0EAA@@@XZ");
//};

//public: bool c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::test(enum e_host_selection_factor) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_host_selection_factor@@K$0BH@Us_host_selection_factor_string_resolver@@@@QBA_NW4e_host_selection_factor@@@Z");
//};

//public: void c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::set(enum e_host_selection_factor, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_host_selection_factor@@K$0BH@Us_host_selection_factor_string_resolver@@@@QAAXW4e_host_selection_factor@@_N@Z");
//};

//public: long c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@W4e_host_selection_factor@@K$0BH@Us_host_selection_factor_string_resolver@@@@QBAJXZ");
//};

//public: c_flags<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::c_flags<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_host_selection_factor@@K$0BH@Us_host_selection_factor_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum e_network_session_find_host_flags, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum e_network_session_find_host_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_session_find_host_flags@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_network_session_find_host_flags@@@Z");
//};

//public: class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver> & s_static_array<class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_flags@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@$0BA@@@QAAAAV?$c_flags@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@J@Z");
//};

//public: struct s_host_selection_peer_working_data & s_static_array<struct s_host_selection_peer_working_data, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_host_selection_peer_working_data@@$0BA@@@QAAAAUs_host_selection_peer_working_data@@J@Z");
//};

//public: enum e_host_selection_factor & s_static_array<enum e_host_selection_factor, 23>::operator[]<enum e_host_selection_factor>(enum e_host_selection_factor)
//{
//    mangled_ppc("??$?AW4e_host_selection_factor@@@?$s_static_array@W4e_host_selection_factor@@$0BH@@@QAAAAW4e_host_selection_factor@@W41@@Z");
//};

//public: enum e_host_selection_factor & s_static_array<enum e_host_selection_factor, 23>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@W4e_host_selection_factor@@$0BH@@@QAAAAW4e_host_selection_factor@@J@Z");
//};

//public: float & s_static_array<float, 23>::operator[]<enum e_host_selection_factor>(enum e_host_selection_factor)
//{
//    mangled_ppc("??$?AW4e_host_selection_factor@@@?$s_static_array@M$0BH@@@QAAAAMW4e_host_selection_factor@@@Z");
//};

//public: bool c_flags_no_init<enum e_network_session_find_host_peer_result_flag, unsigned char, 3, struct s_network_session_find_host_peer_result_flag_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_network_session_find_host_peer_result_flag@@E$02Us_network_session_find_host_peer_result_flag_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_host_selection_factor@@K$0BH@Us_host_selection_factor_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_host_selection_factor@@K$0BH@Us_host_selection_factor_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::valid_bit(enum e_host_selection_factor)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_host_selection_factor@@K$0BH@Us_host_selection_factor_string_resolver@@@@SA_NW4e_host_selection_factor@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::flag_size_type(enum e_host_selection_factor)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_host_selection_factor@@K$0BH@Us_host_selection_factor_string_resolver@@@@CAKW4e_host_selection_factor@@@Z");
//};

//public: static bool s_static_array<class c_flags<enum e_multiplayer_team, unsigned long, 16, struct s_default_enum_string_resolver>, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_flags@W4e_multiplayer_team@@K$0BA@Us_default_enum_string_resolver@@@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_host_selection_peer_working_data, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_host_selection_peer_working_data@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<enum e_host_selection_factor, 23>::valid<enum e_host_selection_factor>(enum e_host_selection_factor)
//{
//    mangled_ppc("??$valid@W4e_host_selection_factor@@@?$s_static_array@W4e_host_selection_factor@@$0BH@@@SA_NW4e_host_selection_factor@@@Z");
//};

//public: static bool s_static_array<enum e_host_selection_factor, 23>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@W4e_host_selection_factor@@$0BH@@@SA_NJ@Z");
//};

//public: static bool s_static_array<float, 23>::valid<enum e_host_selection_factor>(enum e_host_selection_factor)
//{
//    mangled_ppc("??$valid@W4e_host_selection_factor@@@?$s_static_array@M$0BH@@@SA_NW4e_host_selection_factor@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_host_selection_factor@@K$0BH@Us_host_selection_factor_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_host_selection_factor, unsigned long, 23, struct s_host_selection_factor_string_resolver>::make_N_bit_mask_size_type(enum e_host_selection_factor)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_host_selection_factor@@K$0BH@Us_host_selection_factor_string_resolver@@@@CAKW4e_host_selection_factor@@@Z");
//};

