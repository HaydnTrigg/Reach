/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@JK$0BJ@Us_default_enum_string_resolver@@@@2JB"
// char const **k_search_stage_descriptions; // "?k_search_stage_descriptions@@3PAPBDA"

// public: void c_matchmaking_seeker::update(void);
// public: void c_matchmaking_seeker::search_begin(struct s_matchmaking_session_properties const *, class c_matchmaking_quality *);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// public: void c_matchmaking_seeker::search_end(void);
// public: void c_matchmaking_seeker::search_clear_outstanding_and_move_on(void);
// public: bool c_matchmaking_seeker::get_session_to_join(struct s_suitable_matchmaking_session *);
// public: void c_matchmaking_seeker::notify_session_join_failed(struct s_suitable_matchmaking_session const *, enum e_life_cycle_join_result);
// public: bool c_matchmaking_seeker::search_in_progress(void) const;
// public: unsigned long c_matchmaking_seeker::get_initial_search_start_time(void) const;
// public: unsigned long c_matchmaking_seeker::get_current_search_start_time(void) const;
// public: long c_matchmaking_seeker::get_total_session_search_count(void) const;
// public: enum e_matchmaking_search_stage c_matchmaking_seeker::get_session_search_stage(void) const;
// public: long c_matchmaking_seeker::get_session_search_query_index(void) const;
// public: bool c_matchmaking_seeker::is_session_search_in_desperation(void) const;
// public: long c_matchmaking_seeker::get_total_sessions_contacted_count(void) const;
// public: void c_matchmaking_seeker::get_current_skill_range(long *, long *) const;
// public: long c_matchmaking_seeker::get_current_sessions_joinable_count(void) const;
// public: bool c_matchmaking_seeker::current_search_has_pending_or_outstanding_qoses(void) const;
// public: long c_matchmaking_seeker::current_search_get_tracked_session_count(void) const;
// public: struct s_matchmaking_session_properties const * c_matchmaking_seeker::get_current_session_properties(void) const;
// public: void c_matchmaking_seeker::get_search_query_progress(enum e_matchmaking_search_query_state *, struct s_replicated_life_cycle_matchmaking_query_result *, long, long) const;
// public: void c_matchmaking_seeker::set_session_properties(struct s_matchmaking_session_properties const *);
// public: void c_matchmaking_seeker::set_local_machine_expected_in_search_results(bool);
// public: void c_matchmaking_seeker::dump_active_sessions_to_log(void) const;
// private: void c_matchmaking_seeker::initialize(void);
// private: void c_matchmaking_seeker::set_search_properties(struct s_matchmaking_session_properties const *);
// private: void c_matchmaking_seeker::update_session_search(void);
// private: void c_matchmaking_seeker::update_online_session_search(void);
// long network_time_difference_msec(unsigned long, unsigned long);
// long network_time_since(unsigned long);
// public: s_static_array<struct s_online_session_search_result, 50>::s_static_array<struct s_online_session_search_result, 50>(void);
// public: s_online_session_search_result::s_online_session_search_result(void);
// public: s_static_array<struct s_online_property, 4>::s_static_array<struct s_online_property, 4>(void);
// private: void c_matchmaking_seeker::update_tracked_sessions(void);
// private: void c_matchmaking_seeker::update_tracked_session_statistics(void);
// public: static void c_matchmaking_seeker::dump_session_query(char const *, long, long, struct s_matchmaking_session_search_query const *);
// private: void c_matchmaking_seeker::update_online_session_search_initiate(void);
// private: void c_matchmaking_seeker::cleanup_online_session_search(void);
// private: void c_matchmaking_seeker::mark_current_session_search_query_failed(void);
// private: void c_matchmaking_seeker::build_new_session_search_query(void);
// private: void c_matchmaking_seeker::update_session_search_stage_for_query(bool *, bool *);
// private: void c_matchmaking_seeker::set_search_stage(enum e_matchmaking_search_stage);
// private: bool c_matchmaking_seeker::session_joinable_for_current_search_latency(struct s_suitable_matchmaking_session const *);
// private: long c_matchmaking_seeker::current_search_get_latency_threshold(void);
// public: void s_static_array<long, 14>::set_all(long const &);
// public: static long s_static_array<long, 25>::get_count(void);
// public: void s_static_array<long, 25>::set_all(long const &);
// public: class c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator=(enum e_replicated_life_cycle_matchmaking_query_result_state);
// public: bool c_flags_no_init<enum e_matchmaking_seeker_flags, unsigned short, 8, struct s_default_enum_string_resolver>::test(enum e_matchmaking_seeker_flags) const;
// public: void c_flags_no_init<enum e_matchmaking_seeker_flags, unsigned short, 8, struct s_default_enum_string_resolver>::set(enum e_matchmaking_seeker_flags, bool);
// public: struct s_matchmaking_session_search & s_static_array<struct s_matchmaking_session_search, 16>::operator[]<long>(long);
// public: long & s_static_array<long, 21>::operator[]<enum e_life_cycle_join_result>(enum e_life_cycle_join_result);
// public: struct s_matchmaking_session_search const & s_static_array<struct s_matchmaking_session_search, 16>::operator[]<long>(long) const;
// public: long const & s_static_array<long, 25>::operator[]<long>(long) const;
// public: struct s_online_property const & s_static_array<struct s_online_property, 4>::operator[]<long>(long) const;
// public: bool c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::test(long) const;
// public: void c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::set(long, bool);
// public: long c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::count_set(void) const;
// public: c_flags<long, unsigned long, 25, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 25, struct s_default_enum_string_resolver>(void);
// public: long & s_static_array<long, 25>::operator[]<long>(long);
// public: long & s_static_array<long, 14>::operator[]<enum e_network_session_tracker_session_unsuitable_reason>(enum e_network_session_tracker_session_unsuitable_reason);
// public: static bool c_flags_no_init<enum e_matchmaking_seeker_flags, unsigned short, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_seeker_flags);
// private: static unsigned short c_flags_no_init<enum e_matchmaking_seeker_flags, unsigned short, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_seeker_flags);
// public: static bool s_static_array<struct s_matchmaking_session_search, 16>::valid<long>(long);
// public: static bool s_static_array<long, 21>::valid<enum e_life_cycle_join_result>(enum e_life_cycle_join_result);
// public: static bool s_static_array<long, 25>::valid<long>(long);
// public: void c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::valid_bit(long);
// private: static unsigned long c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::flag_size_type(long);
// public: static bool s_static_array<long, 14>::valid<enum e_network_session_tracker_session_unsuitable_reason>(enum e_network_session_tracker_session_unsuitable_reason);
// private: static unsigned long c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long);

//public: void c_matchmaking_seeker::update(void)
//{
//    mangled_ppc("?update@c_matchmaking_seeker@@QAAXXZ");
//};

//public: void c_matchmaking_seeker::search_begin(struct s_matchmaking_session_properties const *, class c_matchmaking_quality *)
//{
//    mangled_ppc("?search_begin@c_matchmaking_seeker@@QAAXPBUs_matchmaking_session_properties@@PAVc_matchmaking_quality@@@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//public: void c_matchmaking_seeker::search_end(void)
//{
//    mangled_ppc("?search_end@c_matchmaking_seeker@@QAAXXZ");
//};

//public: void c_matchmaking_seeker::search_clear_outstanding_and_move_on(void)
//{
//    mangled_ppc("?search_clear_outstanding_and_move_on@c_matchmaking_seeker@@QAAXXZ");
//};

//public: bool c_matchmaking_seeker::get_session_to_join(struct s_suitable_matchmaking_session *)
//{
//    mangled_ppc("?get_session_to_join@c_matchmaking_seeker@@QAA_NPAUs_suitable_matchmaking_session@@@Z");
//};

//public: void c_matchmaking_seeker::notify_session_join_failed(struct s_suitable_matchmaking_session const *, enum e_life_cycle_join_result)
//{
//    mangled_ppc("?notify_session_join_failed@c_matchmaking_seeker@@QAAXPBUs_suitable_matchmaking_session@@W4e_life_cycle_join_result@@@Z");
//};

//public: bool c_matchmaking_seeker::search_in_progress(void) const
//{
//    mangled_ppc("?search_in_progress@c_matchmaking_seeker@@QBA_NXZ");
//};

//public: unsigned long c_matchmaking_seeker::get_initial_search_start_time(void) const
//{
//    mangled_ppc("?get_initial_search_start_time@c_matchmaking_seeker@@QBAKXZ");
//};

//public: unsigned long c_matchmaking_seeker::get_current_search_start_time(void) const
//{
//    mangled_ppc("?get_current_search_start_time@c_matchmaking_seeker@@QBAKXZ");
//};

//public: long c_matchmaking_seeker::get_total_session_search_count(void) const
//{
//    mangled_ppc("?get_total_session_search_count@c_matchmaking_seeker@@QBAJXZ");
//};

//public: enum e_matchmaking_search_stage c_matchmaking_seeker::get_session_search_stage(void) const
//{
//    mangled_ppc("?get_session_search_stage@c_matchmaking_seeker@@QBA?AW4e_matchmaking_search_stage@@XZ");
//};

//public: long c_matchmaking_seeker::get_session_search_query_index(void) const
//{
//    mangled_ppc("?get_session_search_query_index@c_matchmaking_seeker@@QBAJXZ");
//};

//public: bool c_matchmaking_seeker::is_session_search_in_desperation(void) const
//{
//    mangled_ppc("?is_session_search_in_desperation@c_matchmaking_seeker@@QBA_NXZ");
//};

//public: long c_matchmaking_seeker::get_total_sessions_contacted_count(void) const
//{
//    mangled_ppc("?get_total_sessions_contacted_count@c_matchmaking_seeker@@QBAJXZ");
//};

//public: void c_matchmaking_seeker::get_current_skill_range(long *, long *) const
//{
//    mangled_ppc("?get_current_skill_range@c_matchmaking_seeker@@QBAXPAJ0@Z");
//};

//public: long c_matchmaking_seeker::get_current_sessions_joinable_count(void) const
//{
//    mangled_ppc("?get_current_sessions_joinable_count@c_matchmaking_seeker@@QBAJXZ");
//};

//public: bool c_matchmaking_seeker::current_search_has_pending_or_outstanding_qoses(void) const
//{
//    mangled_ppc("?current_search_has_pending_or_outstanding_qoses@c_matchmaking_seeker@@QBA_NXZ");
//};

//public: long c_matchmaking_seeker::current_search_get_tracked_session_count(void) const
//{
//    mangled_ppc("?current_search_get_tracked_session_count@c_matchmaking_seeker@@QBAJXZ");
//};

//public: struct s_matchmaking_session_properties const * c_matchmaking_seeker::get_current_session_properties(void) const
//{
//    mangled_ppc("?get_current_session_properties@c_matchmaking_seeker@@QBAPBUs_matchmaking_session_properties@@XZ");
//};

//public: void c_matchmaking_seeker::get_search_query_progress(enum e_matchmaking_search_query_state *, struct s_replicated_life_cycle_matchmaking_query_result *, long, long) const
//{
//    mangled_ppc("?get_search_query_progress@c_matchmaking_seeker@@QBAXPAW4e_matchmaking_search_query_state@@PAUs_replicated_life_cycle_matchmaking_query_result@@JJ@Z");
//};

//public: void c_matchmaking_seeker::set_session_properties(struct s_matchmaking_session_properties const *)
//{
//    mangled_ppc("?set_session_properties@c_matchmaking_seeker@@QAAXPBUs_matchmaking_session_properties@@@Z");
//};

//public: void c_matchmaking_seeker::set_local_machine_expected_in_search_results(bool)
//{
//    mangled_ppc("?set_local_machine_expected_in_search_results@c_matchmaking_seeker@@QAAX_N@Z");
//};

//public: void c_matchmaking_seeker::dump_active_sessions_to_log(void) const
//{
//    mangled_ppc("?dump_active_sessions_to_log@c_matchmaking_seeker@@QBAXXZ");
//};

//private: void c_matchmaking_seeker::initialize(void)
//{
//    mangled_ppc("?initialize@c_matchmaking_seeker@@AAAXXZ");
//};

//private: void c_matchmaking_seeker::set_search_properties(struct s_matchmaking_session_properties const *)
//{
//    mangled_ppc("?set_search_properties@c_matchmaking_seeker@@AAAXPBUs_matchmaking_session_properties@@@Z");
//};

//private: void c_matchmaking_seeker::update_session_search(void)
//{
//    mangled_ppc("?update_session_search@c_matchmaking_seeker@@AAAXXZ");
//};

//private: void c_matchmaking_seeker::update_online_session_search(void)
//{
//    mangled_ppc("?update_online_session_search@c_matchmaking_seeker@@AAAXXZ");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//public: s_static_array<struct s_online_session_search_result, 50>::s_static_array<struct s_online_session_search_result, 50>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_online_session_search_result@@$0DC@@@QAA@XZ");
//};

//public: s_online_session_search_result::s_online_session_search_result(void)
//{
//    mangled_ppc("??0s_online_session_search_result@@QAA@XZ");
//};

//public: s_static_array<struct s_online_property, 4>::s_static_array<struct s_online_property, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_online_property@@$03@@QAA@XZ");
//};

//private: void c_matchmaking_seeker::update_tracked_sessions(void)
//{
//    mangled_ppc("?update_tracked_sessions@c_matchmaking_seeker@@AAAXXZ");
//};

//private: void c_matchmaking_seeker::update_tracked_session_statistics(void)
//{
//    mangled_ppc("?update_tracked_session_statistics@c_matchmaking_seeker@@AAAXXZ");
//};

//public: static void c_matchmaking_seeker::dump_session_query(char const *, long, long, struct s_matchmaking_session_search_query const *)
//{
//    mangled_ppc("?dump_session_query@c_matchmaking_seeker@@SAXPBDJJPBUs_matchmaking_session_search_query@@@Z");
//};

//private: void c_matchmaking_seeker::update_online_session_search_initiate(void)
//{
//    mangled_ppc("?update_online_session_search_initiate@c_matchmaking_seeker@@AAAXXZ");
//};

//private: void c_matchmaking_seeker::cleanup_online_session_search(void)
//{
//    mangled_ppc("?cleanup_online_session_search@c_matchmaking_seeker@@AAAXXZ");
//};

//private: void c_matchmaking_seeker::mark_current_session_search_query_failed(void)
//{
//    mangled_ppc("?mark_current_session_search_query_failed@c_matchmaking_seeker@@AAAXXZ");
//};

//private: void c_matchmaking_seeker::build_new_session_search_query(void)
//{
//    mangled_ppc("?build_new_session_search_query@c_matchmaking_seeker@@AAAXXZ");
//};

//private: void c_matchmaking_seeker::update_session_search_stage_for_query(bool *, bool *)
//{
//    mangled_ppc("?update_session_search_stage_for_query@c_matchmaking_seeker@@AAAXPA_N0@Z");
//};

//private: void c_matchmaking_seeker::set_search_stage(enum e_matchmaking_search_stage)
//{
//    mangled_ppc("?set_search_stage@c_matchmaking_seeker@@AAAXW4e_matchmaking_search_stage@@@Z");
//};

//private: bool c_matchmaking_seeker::session_joinable_for_current_search_latency(struct s_suitable_matchmaking_session const *)
//{
//    mangled_ppc("?session_joinable_for_current_search_latency@c_matchmaking_seeker@@AAA_NPBUs_suitable_matchmaking_session@@@Z");
//};

//private: long c_matchmaking_seeker::current_search_get_latency_threshold(void)
//{
//    mangled_ppc("?current_search_get_latency_threshold@c_matchmaking_seeker@@AAAJXZ");
//};

//public: void s_static_array<long, 14>::set_all(long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@J$0O@@@QAAXABJ@Z");
//};

//public: static long s_static_array<long, 25>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@J$0BJ@@@SAJXZ");
//};

//public: void s_static_array<long, 25>::set_all(long const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@J$0BJ@@@QAAXABJ@Z");
//};

//public: class c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver> & c_enum_no_init<enum e_replicated_life_cycle_matchmaking_query_result_state, unsigned char, 0, 6, struct s_default_enum_string_resolver>::operator=(enum e_replicated_life_cycle_matchmaking_query_result_state)
//{
//    mangled_ppc("??4?$c_enum_no_init@W4e_replicated_life_cycle_matchmaking_query_result_state@@E$0A@$05Us_default_enum_string_resolver@@@@QAAAAV0@W4e_replicated_life_cycle_matchmaking_query_result_state@@@Z");
//};

//public: bool c_flags_no_init<enum e_matchmaking_seeker_flags, unsigned short, 8, struct s_default_enum_string_resolver>::test(enum e_matchmaking_seeker_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_matchmaking_seeker_flags@@G$07Us_default_enum_string_resolver@@@@QBA_NW4e_matchmaking_seeker_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_matchmaking_seeker_flags, unsigned short, 8, struct s_default_enum_string_resolver>::set(enum e_matchmaking_seeker_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_matchmaking_seeker_flags@@G$07Us_default_enum_string_resolver@@@@QAAXW4e_matchmaking_seeker_flags@@_N@Z");
//};

//public: struct s_matchmaking_session_search & s_static_array<struct s_matchmaking_session_search, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_matchmaking_session_search@@$0BA@@@QAAAAUs_matchmaking_session_search@@J@Z");
//};

//public: long & s_static_array<long, 21>::operator[]<enum e_life_cycle_join_result>(enum e_life_cycle_join_result)
//{
//    mangled_ppc("??$?AW4e_life_cycle_join_result@@@?$s_static_array@J$0BF@@@QAAAAJW4e_life_cycle_join_result@@@Z");
//};

//public: struct s_matchmaking_session_search const & s_static_array<struct s_matchmaking_session_search, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_matchmaking_session_search@@$0BA@@@QBAABUs_matchmaking_session_search@@J@Z");
//};

//public: long const & s_static_array<long, 25>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0BJ@@@QBAABJJ@Z");
//};

//public: struct s_online_property const & s_static_array<struct s_online_property, 4>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_online_property@@$03@@QBAABUs_online_property@@J@Z");
//};

//public: bool c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::test(long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@JK$0BJ@Us_default_enum_string_resolver@@@@QBA_NJ@Z");
//};

//public: void c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@JK$0BJ@Us_default_enum_string_resolver@@@@QAAXJ_N@Z");
//};

//public: long c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@JK$0BJ@Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: c_flags<long, unsigned long, 25, struct s_default_enum_string_resolver>::c_flags<long, unsigned long, 25, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@JK$0BJ@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: long & s_static_array<long, 25>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0BJ@@@QAAAAJJ@Z");
//};

//public: long & s_static_array<long, 14>::operator[]<enum e_network_session_tracker_session_unsuitable_reason>(enum e_network_session_tracker_session_unsuitable_reason)
//{
//    mangled_ppc("??$?AW4e_network_session_tracker_session_unsuitable_reason@@@?$s_static_array@J$0O@@@QAAAAJW4e_network_session_tracker_session_unsuitable_reason@@@Z");
//};

//public: static bool c_flags_no_init<enum e_matchmaking_seeker_flags, unsigned short, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_matchmaking_seeker_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_matchmaking_seeker_flags@@G$07Us_default_enum_string_resolver@@@@SA_NW4e_matchmaking_seeker_flags@@@Z");
//};

//private: static unsigned short c_flags_no_init<enum e_matchmaking_seeker_flags, unsigned short, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_matchmaking_seeker_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_matchmaking_seeker_flags@@G$07Us_default_enum_string_resolver@@@@CAGW4e_matchmaking_seeker_flags@@@Z");
//};

//public: static bool s_static_array<struct s_matchmaking_session_search, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_matchmaking_session_search@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 21>::valid<enum e_life_cycle_join_result>(enum e_life_cycle_join_result)
//{
//    mangled_ppc("??$valid@W4e_life_cycle_join_result@@@?$s_static_array@J$0BF@@@SA_NW4e_life_cycle_join_result@@@Z");
//};

//public: static bool s_static_array<long, 25>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@J$0BJ@@@SA_NJ@Z");
//};

//public: void c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@JK$0BJ@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@JK$0BJ@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@JK$0BJ@Us_default_enum_string_resolver@@@@SA_NJ@Z");
//};

//private: static unsigned long c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::flag_size_type(long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@JK$0BJ@Us_default_enum_string_resolver@@@@CAKJ@Z");
//};

//public: static bool s_static_array<long, 14>::valid<enum e_network_session_tracker_session_unsuitable_reason>(enum e_network_session_tracker_session_unsuitable_reason)
//{
//    mangled_ppc("??$valid@W4e_network_session_tracker_session_unsuitable_reason@@@?$s_static_array@J$0O@@@SA_NW4e_network_session_tracker_session_unsuitable_reason@@@Z");
//};

//private: static unsigned long c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@JK$0BJ@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned long c_flags_no_init<long, unsigned long, 25, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@JK$0BJ@Us_default_enum_string_resolver@@@@CAKJ@Z");
//};

