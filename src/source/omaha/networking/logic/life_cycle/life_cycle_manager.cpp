/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_life_cycle_state_manager::initialize(class c_network_channel_manager *, class c_network_session_manager *, class c_network_session *, class c_network_session *, class c_network_session *, class c_network_session *);
// public: void c_life_cycle_state_manager::s_session_messaging_data::initialize(void);
// public: static void c_life_cycle_state_manager::dispose(void);
// public: void c_life_cycle_state_manager::update(void);
// public: void c_life_cycle_state_manager::terminate(void);
// public: void c_life_cycle_state_manager::request_state_change(enum e_life_cycle_state, long, long, void const *);
// private: void c_life_cycle_state_manager::set_current_state(enum e_life_cycle_state, long, long, void *);
// public: void c_life_cycle_state_manager::swap_squad_sessions(void);
// public: void c_life_cycle_state_manager::swap_target_and_posse_sessions(void);
// public: void c_life_cycle_state_manager::swap_target_and_group_sessions(void);
// public: char const * c_life_cycle_state_manager::get_status_string(void) const;
// public: char const * c_life_cycle_state_handler::get_status_string(void) const;
// public: class c_life_cycle_state_handler * c_life_cycle_state_manager::get_current_state_handler(void) const;
// public: void c_life_cycle_state_manager::register_state_handler(enum e_life_cycle_state, class c_life_cycle_state_handler *);
// public: void c_life_cycle_state_manager::deregister_state_handler(enum e_life_cycle_state, class c_life_cycle_state_handler const *);
// private: void c_life_cycle_state_manager::verify_session_states(void);
// private: void c_life_cycle_state_manager::verify_session_hierarchy(void);
// private: void c_life_cycle_state_manager::update_abort_matchmaking(void);
// private: void c_life_cycle_state_manager::update_messaging(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// private: void c_life_cycle_state_manager::update_session_messaging(class c_network_session *, struct c_life_cycle_state_manager::s_session_messaging_data *);
// private: bool c_life_cycle_state_manager::current_life_cycle_state_should_check_group_session_for_election_messaging(void) const;
// public: bool c_life_cycle_state_manager::current_state_ready_for_state_transition_or_query(void) const;
// private: bool c_life_cycle_state_manager::current_state_prepare_for_update(void) const;
// private: void c_life_cycle_state_manager::disband_and_reestablish_xbox_live_session(class c_network_session *);
// public: void c_life_cycle_state_manager::set_pause_state(char const *, bool);
// public: void c_life_cycle_state_manager::display_state_strings(void);
// public: void c_life_cycle_state_manager::request_leave_sessions(bool);
// public: void c_life_cycle_state_manager::notify_expect_squad_join(void);
// public: void c_life_cycle_state_manager::notify_lost_connection(enum e_network_lost_connection_type);
// public: static bool c_life_cycle_helpers::is_map_precached(class c_network_session const *, unsigned long *);
// public: void s_static_array<class c_life_cycle_state_handler *, 20>::set_all(class c_life_cycle_state_handler *const &);
// public: class c_life_cycle_state_handler *& s_static_array<class c_life_cycle_state_handler *, 20>::operator[]<enum e_life_cycle_state>(enum e_life_cycle_state);
// public: class c_life_cycle_state_handler *const & s_static_array<class c_life_cycle_state_handler *, 20>::operator[]<enum e_life_cycle_state>(enum e_life_cycle_state) const;
// public: class c_life_cycle_state_handler *& s_static_array<class c_life_cycle_state_handler *, 20>::operator[]<long>(long);
// public: static bool s_static_array<class c_life_cycle_state_handler *, 20>::valid<enum e_life_cycle_state>(enum e_life_cycle_state);
// public: static bool s_static_array<class c_life_cycle_state_handler *, 20>::valid<long>(long);

//public: void c_life_cycle_state_manager::initialize(class c_network_channel_manager *, class c_network_session_manager *, class c_network_session *, class c_network_session *, class c_network_session *, class c_network_session *)
//{
//    mangled_ppc("?initialize@c_life_cycle_state_manager@@QAAXPAVc_network_channel_manager@@PAVc_network_session_manager@@PAVc_network_session@@222@Z");
//};

//public: void c_life_cycle_state_manager::s_session_messaging_data::initialize(void)
//{
//    mangled_ppc("?initialize@s_session_messaging_data@c_life_cycle_state_manager@@QAAXXZ");
//};

//public: static void c_life_cycle_state_manager::dispose(void)
//{
//    mangled_ppc("?dispose@c_life_cycle_state_manager@@SAXXZ");
//};

//public: void c_life_cycle_state_manager::update(void)
//{
//    mangled_ppc("?update@c_life_cycle_state_manager@@QAAXXZ");
//};

//public: void c_life_cycle_state_manager::terminate(void)
//{
//    mangled_ppc("?terminate@c_life_cycle_state_manager@@QAAXXZ");
//};

//public: void c_life_cycle_state_manager::request_state_change(enum e_life_cycle_state, long, long, void const *)
//{
//    mangled_ppc("?request_state_change@c_life_cycle_state_manager@@QAAXW4e_life_cycle_state@@JJPBX@Z");
//};

//private: void c_life_cycle_state_manager::set_current_state(enum e_life_cycle_state, long, long, void *)
//{
//    mangled_ppc("?set_current_state@c_life_cycle_state_manager@@AAAXW4e_life_cycle_state@@JJPAX@Z");
//};

//public: void c_life_cycle_state_manager::swap_squad_sessions(void)
//{
//    mangled_ppc("?swap_squad_sessions@c_life_cycle_state_manager@@QAAXXZ");
//};

//public: void c_life_cycle_state_manager::swap_target_and_posse_sessions(void)
//{
//    mangled_ppc("?swap_target_and_posse_sessions@c_life_cycle_state_manager@@QAAXXZ");
//};

//public: void c_life_cycle_state_manager::swap_target_and_group_sessions(void)
//{
//    mangled_ppc("?swap_target_and_group_sessions@c_life_cycle_state_manager@@QAAXXZ");
//};

//public: char const * c_life_cycle_state_manager::get_status_string(void) const
//{
//    mangled_ppc("?get_status_string@c_life_cycle_state_manager@@QBAPBDXZ");
//};

//public: char const * c_life_cycle_state_handler::get_status_string(void) const
//{
//    mangled_ppc("?get_status_string@c_life_cycle_state_handler@@QBAPBDXZ");
//};

//public: class c_life_cycle_state_handler * c_life_cycle_state_manager::get_current_state_handler(void) const
//{
//    mangled_ppc("?get_current_state_handler@c_life_cycle_state_manager@@QBAPAVc_life_cycle_state_handler@@XZ");
//};

//public: void c_life_cycle_state_manager::register_state_handler(enum e_life_cycle_state, class c_life_cycle_state_handler *)
//{
//    mangled_ppc("?register_state_handler@c_life_cycle_state_manager@@QAAXW4e_life_cycle_state@@PAVc_life_cycle_state_handler@@@Z");
//};

//public: void c_life_cycle_state_manager::deregister_state_handler(enum e_life_cycle_state, class c_life_cycle_state_handler const *)
//{
//    mangled_ppc("?deregister_state_handler@c_life_cycle_state_manager@@QAAXW4e_life_cycle_state@@PBVc_life_cycle_state_handler@@@Z");
//};

//private: void c_life_cycle_state_manager::verify_session_states(void)
//{
//    mangled_ppc("?verify_session_states@c_life_cycle_state_manager@@AAAXXZ");
//};

//private: void c_life_cycle_state_manager::verify_session_hierarchy(void)
//{
//    mangled_ppc("?verify_session_hierarchy@c_life_cycle_state_manager@@AAAXXZ");
//};

//private: void c_life_cycle_state_manager::update_abort_matchmaking(void)
//{
//    mangled_ppc("?update_abort_matchmaking@c_life_cycle_state_manager@@AAAXXZ");
//};

//private: void c_life_cycle_state_manager::update_messaging(void)
//{
//    mangled_ppc("?update_messaging@c_life_cycle_state_manager@@AAAXXZ");
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

//private: void c_life_cycle_state_manager::update_session_messaging(class c_network_session *, struct c_life_cycle_state_manager::s_session_messaging_data *)
//{
//    mangled_ppc("?update_session_messaging@c_life_cycle_state_manager@@AAAXPAVc_network_session@@PAUs_session_messaging_data@1@@Z");
//};

//private: bool c_life_cycle_state_manager::current_life_cycle_state_should_check_group_session_for_election_messaging(void) const
//{
//    mangled_ppc("?current_life_cycle_state_should_check_group_session_for_election_messaging@c_life_cycle_state_manager@@ABA_NXZ");
//};

//public: bool c_life_cycle_state_manager::current_state_ready_for_state_transition_or_query(void) const
//{
//    mangled_ppc("?current_state_ready_for_state_transition_or_query@c_life_cycle_state_manager@@QBA_NXZ");
//};

//private: bool c_life_cycle_state_manager::current_state_prepare_for_update(void) const
//{
//    mangled_ppc("?current_state_prepare_for_update@c_life_cycle_state_manager@@ABA_NXZ");
//};

//private: void c_life_cycle_state_manager::disband_and_reestablish_xbox_live_session(class c_network_session *)
//{
//    mangled_ppc("?disband_and_reestablish_xbox_live_session@c_life_cycle_state_manager@@AAAXPAVc_network_session@@@Z");
//};

//public: void c_life_cycle_state_manager::set_pause_state(char const *, bool)
//{
//    mangled_ppc("?set_pause_state@c_life_cycle_state_manager@@QAAXPBD_N@Z");
//};

//public: void c_life_cycle_state_manager::display_state_strings(void)
//{
//    mangled_ppc("?display_state_strings@c_life_cycle_state_manager@@QAAXXZ");
//};

//public: void c_life_cycle_state_manager::request_leave_sessions(bool)
//{
//    mangled_ppc("?request_leave_sessions@c_life_cycle_state_manager@@QAAX_N@Z");
//};

//public: void c_life_cycle_state_manager::notify_expect_squad_join(void)
//{
//    mangled_ppc("?notify_expect_squad_join@c_life_cycle_state_manager@@QAAXXZ");
//};

//public: void c_life_cycle_state_manager::notify_lost_connection(enum e_network_lost_connection_type)
//{
//    mangled_ppc("?notify_lost_connection@c_life_cycle_state_manager@@QAAXW4e_network_lost_connection_type@@@Z");
//};

//public: static bool c_life_cycle_helpers::is_map_precached(class c_network_session const *, unsigned long *)
//{
//    mangled_ppc("?is_map_precached@c_life_cycle_helpers@@SA_NPBVc_network_session@@PAK@Z");
//};

//public: void s_static_array<class c_life_cycle_state_handler *, 20>::set_all(class c_life_cycle_state_handler *const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@PAVc_life_cycle_state_handler@@$0BE@@@QAAXABQAVc_life_cycle_state_handler@@@Z");
//};

//public: class c_life_cycle_state_handler *& s_static_array<class c_life_cycle_state_handler *, 20>::operator[]<enum e_life_cycle_state>(enum e_life_cycle_state)
//{
//    mangled_ppc("??$?AW4e_life_cycle_state@@@?$s_static_array@PAVc_life_cycle_state_handler@@$0BE@@@QAAAAPAVc_life_cycle_state_handler@@W4e_life_cycle_state@@@Z");
//};

//public: class c_life_cycle_state_handler *const & s_static_array<class c_life_cycle_state_handler *, 20>::operator[]<enum e_life_cycle_state>(enum e_life_cycle_state) const
//{
//    mangled_ppc("??$?AW4e_life_cycle_state@@@?$s_static_array@PAVc_life_cycle_state_handler@@$0BE@@@QBAABQAVc_life_cycle_state_handler@@W4e_life_cycle_state@@@Z");
//};

//public: class c_life_cycle_state_handler *& s_static_array<class c_life_cycle_state_handler *, 20>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAVc_life_cycle_state_handler@@$0BE@@@QAAAAPAVc_life_cycle_state_handler@@J@Z");
//};

//public: static bool s_static_array<class c_life_cycle_state_handler *, 20>::valid<enum e_life_cycle_state>(enum e_life_cycle_state)
//{
//    mangled_ppc("??$valid@W4e_life_cycle_state@@@?$s_static_array@PAVc_life_cycle_state_handler@@$0BE@@@SA_NW4e_life_cycle_state@@@Z");
//};

//public: static bool s_static_array<class c_life_cycle_state_handler *, 20>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAVc_life_cycle_state_handler@@$0BE@@@SA_NJ@Z");
//};

