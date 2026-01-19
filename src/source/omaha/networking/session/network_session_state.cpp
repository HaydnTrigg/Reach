/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: void c_network_session::change_local_state_internal(enum e_network_session_state, long, void const *);
// private: void c_network_session::change_local_state_peer_creating(enum e_transport_platform, bool, unsigned __int64, struct s_network_session_join_request const *);
// private: void c_network_session::change_local_state_peer_joining(long, struct s_transport_secure_address const *, struct transport_address const *, bool, unsigned __int64, struct s_network_session_join_request const *);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// public: void c_network_session_membership::clear_update_number(void);
// private: void c_network_session::change_local_state_peer_join_abort(void);
// private: void c_network_session::change_local_state_peer_established(void);
// private: void c_network_session::change_local_state_peer_leaving(void);
// private: void c_network_session::change_local_state_host_established(void);
// private: void c_network_session::change_local_state_host_disband(void);
// private: void c_network_session::change_local_state_host_handoff(long, bool, bool);
// public: long c_network_session_membership::get_established_peer_count(void) const;
// private: void c_network_session::change_local_state_host_reestablish(bool, unsigned long, bool, struct s_network_session_parameter_speculative_migration const *);
// public: void c_network_session_membership::update_creation_timestamp(long);
// private: void c_network_session::change_local_state_election(void);
// private: void c_network_session::idle_peer_creating(void);
// private: void c_network_session::idle_peer_established(void);
// private: void c_network_session::idle_peer_joining(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// private: void c_network_session::idle_peer_join_abort(void);
// private: void c_network_session::idle_peer_leaving(void);
// private: void c_network_session::idle_host_disband(void);
// private: void c_network_session::idle_host_handoff(void);
// public: void c_network_session_membership::set_host_transition_peer_index(long);
// private: void c_network_session::idle_host_reestablish(void);
// private: void c_network_session::idle_election(void);
// private: void c_network_session::idle_observer_state(void);

//private: void c_network_session::change_local_state_internal(enum e_network_session_state, long, void const *)
//{
//    mangled_ppc("?change_local_state_internal@c_network_session@@AAAXW4e_network_session_state@@JPBX@Z");
//};

//private: void c_network_session::change_local_state_peer_creating(enum e_transport_platform, bool, unsigned __int64, struct s_network_session_join_request const *)
//{
//    mangled_ppc("?change_local_state_peer_creating@c_network_session@@AAAXW4e_transport_platform@@_N_KPBUs_network_session_join_request@@@Z");
//};

//private: void c_network_session::change_local_state_peer_joining(long, struct s_transport_secure_address const *, struct transport_address const *, bool, unsigned __int64, struct s_network_session_join_request const *)
//{
//    mangled_ppc("?change_local_state_peer_joining@c_network_session@@AAAXJPBUs_transport_secure_address@@PBUtransport_address@@_N_KPBUs_network_session_join_request@@@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//public: void c_network_session_membership::clear_update_number(void)
//{
//    mangled_ppc("?clear_update_number@c_network_session_membership@@QAAXXZ");
//};

//private: void c_network_session::change_local_state_peer_join_abort(void)
//{
//    mangled_ppc("?change_local_state_peer_join_abort@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::change_local_state_peer_established(void)
//{
//    mangled_ppc("?change_local_state_peer_established@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::change_local_state_peer_leaving(void)
//{
//    mangled_ppc("?change_local_state_peer_leaving@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::change_local_state_host_established(void)
//{
//    mangled_ppc("?change_local_state_host_established@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::change_local_state_host_disband(void)
//{
//    mangled_ppc("?change_local_state_host_disband@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::change_local_state_host_handoff(long, bool, bool)
//{
//    mangled_ppc("?change_local_state_host_handoff@c_network_session@@AAAXJ_N0@Z");
//};

//public: long c_network_session_membership::get_established_peer_count(void) const
//{
//    mangled_ppc("?get_established_peer_count@c_network_session_membership@@QBAJXZ");
//};

//private: void c_network_session::change_local_state_host_reestablish(bool, unsigned long, bool, struct s_network_session_parameter_speculative_migration const *)
//{
//    mangled_ppc("?change_local_state_host_reestablish@c_network_session@@AAAX_NK0PBUs_network_session_parameter_speculative_migration@@@Z");
//};

//public: void c_network_session_membership::update_creation_timestamp(long)
//{
//    mangled_ppc("?update_creation_timestamp@c_network_session_membership@@QAAXJ@Z");
//};

//private: void c_network_session::change_local_state_election(void)
//{
//    mangled_ppc("?change_local_state_election@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::idle_peer_creating(void)
//{
//    mangled_ppc("?idle_peer_creating@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::idle_peer_established(void)
//{
//    mangled_ppc("?idle_peer_established@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::idle_peer_joining(void)
//{
//    mangled_ppc("?idle_peer_joining@c_network_session@@AAAXXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//private: void c_network_session::idle_peer_join_abort(void)
//{
//    mangled_ppc("?idle_peer_join_abort@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::idle_peer_leaving(void)
//{
//    mangled_ppc("?idle_peer_leaving@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::idle_host_disband(void)
//{
//    mangled_ppc("?idle_host_disband@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::idle_host_handoff(void)
//{
//    mangled_ppc("?idle_host_handoff@c_network_session@@AAAXXZ");
//};

//public: void c_network_session_membership::set_host_transition_peer_index(long)
//{
//    mangled_ppc("?set_host_transition_peer_index@c_network_session_membership@@QAAXJ@Z");
//};

//private: void c_network_session::idle_host_reestablish(void)
//{
//    mangled_ppc("?idle_host_reestablish@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::idle_election(void)
//{
//    mangled_ppc("?idle_election@c_network_session@@AAAXXZ");
//};

//private: void c_network_session::idle_observer_state(void)
//{
//    mangled_ppc("?idle_observer_state@c_network_session@@AAAXXZ");
//};

