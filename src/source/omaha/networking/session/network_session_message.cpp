/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: bool c_network_session::handle_join_request(struct transport_address const *, struct s_network_message_join_request const *);
// public: void c_network_session::handle_peer_connect(struct transport_address const *, struct s_network_message_peer_connect const *);
// public: bool c_network_session::handle_leave_request(struct transport_address const *);
// public: void c_network_session::handle_leave_acknowledgement(struct transport_address const *);
// public: bool c_network_session::handle_parameters_update(struct s_network_message_parameters_update const *);
// public: bool c_network_session::handle_parameters_request(class c_network_channel *, struct s_network_message_parameters_request const *);
// public: bool c_network_session::handle_security(class c_network_channel *, struct s_network_message_security const *);
// public: void c_network_session::boot_peer_for_security_failure(long);
// public: bool c_network_session::handle_time_synchronize(struct transport_address const *, struct s_network_message_time_synchronize const *);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: bool c_network_session::handle_session_disband(struct transport_address const *, struct s_network_message_session_disband const *);
// public: bool c_network_session::handle_session_boot(struct transport_address const *, struct s_network_message_session_boot const *);
// public: bool c_network_session::handle_host_handoff(struct s_network_message_host_handoff const *);
// public: bool c_network_session_membership::completed_first_player_update(void) const;
// public: bool c_network_session::handle_peer_handoff(class c_network_channel *, struct s_network_message_peer_handoff const *);
// public: bool c_network_session::handle_host_transition(struct s_network_message_host_transition const *);
// public: long c_network_session_membership::host_transition_peer_index(void) const;
// public: bool c_network_session::handle_host_reestablish(struct transport_address const *, struct s_network_message_host_reestablish const *);
// public: void c_network_session_membership::reset_membership_update_received(void);
// public: bool c_network_session::handle_host_decline(class c_network_channel *, struct s_network_message_host_decline const *);
// public: bool c_network_session::handle_peer_reestablish(class c_network_channel *, struct s_network_message_peer_reestablish const *);
// public: bool c_network_session::handle_peer_establish(class c_network_channel *, struct s_network_message_peer_establish const *);
// public: bool c_network_session::handle_election(struct transport_address const *, struct s_network_message_election const *, enum e_network_election_refuse_reason *, bool *, struct s_transport_secure_address *);
// public: bool c_network_session::handle_election_refuse(struct transport_address const *, struct s_network_message_election_refuse const *);
// public: bool c_network_session::handle_membership_update(struct s_network_message_membership_update const *);
// public: bool c_network_session::handle_peer_properties(class c_network_channel *, struct s_network_message_peer_properties const *);
// public: bool c_network_session::handle_delegate_leadership(class c_network_channel *, struct s_network_message_delegate_leadership const *);
// public: bool c_network_session::handle_boot_machine(class c_network_channel *, struct s_network_message_boot_machine const *);
// public: bool c_network_session::handle_player_add(class c_network_channel *, struct s_network_message_player_add const *);
// public: bool c_network_session::handle_player_refuse(class c_network_channel *, struct s_network_message_player_refuse const *);
// public: bool c_network_session::handle_player_remove(class c_network_channel *, struct s_network_message_player_remove const *);
// public: bool c_network_session::handle_player_properties(class c_network_channel *, struct s_network_message_player_properties const *);

//public: bool c_network_session::handle_join_request(struct transport_address const *, struct s_network_message_join_request const *)
//{
//    mangled_ppc("?handle_join_request@c_network_session@@QAA_NPBUtransport_address@@PBUs_network_message_join_request@@@Z");
//};

//public: void c_network_session::handle_peer_connect(struct transport_address const *, struct s_network_message_peer_connect const *)
//{
//    mangled_ppc("?handle_peer_connect@c_network_session@@QAAXPBUtransport_address@@PBUs_network_message_peer_connect@@@Z");
//};

//public: bool c_network_session::handle_leave_request(struct transport_address const *)
//{
//    mangled_ppc("?handle_leave_request@c_network_session@@QAA_NPBUtransport_address@@@Z");
//};

//public: void c_network_session::handle_leave_acknowledgement(struct transport_address const *)
//{
//    mangled_ppc("?handle_leave_acknowledgement@c_network_session@@QAAXPBUtransport_address@@@Z");
//};

//public: bool c_network_session::handle_parameters_update(struct s_network_message_parameters_update const *)
//{
//    mangled_ppc("?handle_parameters_update@c_network_session@@QAA_NPBUs_network_message_parameters_update@@@Z");
//};

//public: bool c_network_session::handle_parameters_request(class c_network_channel *, struct s_network_message_parameters_request const *)
//{
//    mangled_ppc("?handle_parameters_request@c_network_session@@QAA_NPAVc_network_channel@@PBUs_network_message_parameters_request@@@Z");
//};

//public: bool c_network_session::handle_security(class c_network_channel *, struct s_network_message_security const *)
//{
//    mangled_ppc("?handle_security@c_network_session@@QAA_NPAVc_network_channel@@PBUs_network_message_security@@@Z");
//};

//public: void c_network_session::boot_peer_for_security_failure(long)
//{
//    mangled_ppc("?boot_peer_for_security_failure@c_network_session@@QAAXJ@Z");
//};

//public: bool c_network_session::handle_time_synchronize(struct transport_address const *, struct s_network_message_time_synchronize const *)
//{
//    mangled_ppc("?handle_time_synchronize@c_network_session@@QAA_NPBUtransport_address@@PBUs_network_message_time_synchronize@@@Z");
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

//public: bool c_network_session::handle_session_disband(struct transport_address const *, struct s_network_message_session_disband const *)
//{
//    mangled_ppc("?handle_session_disband@c_network_session@@QAA_NPBUtransport_address@@PBUs_network_message_session_disband@@@Z");
//};

//public: bool c_network_session::handle_session_boot(struct transport_address const *, struct s_network_message_session_boot const *)
//{
//    mangled_ppc("?handle_session_boot@c_network_session@@QAA_NPBUtransport_address@@PBUs_network_message_session_boot@@@Z");
//};

//public: bool c_network_session::handle_host_handoff(struct s_network_message_host_handoff const *)
//{
//    mangled_ppc("?handle_host_handoff@c_network_session@@QAA_NPBUs_network_message_host_handoff@@@Z");
//};

//public: bool c_network_session_membership::completed_first_player_update(void) const
//{
//    mangled_ppc("?completed_first_player_update@c_network_session_membership@@QBA_NXZ");
//};

//public: bool c_network_session::handle_peer_handoff(class c_network_channel *, struct s_network_message_peer_handoff const *)
//{
//    mangled_ppc("?handle_peer_handoff@c_network_session@@QAA_NPAVc_network_channel@@PBUs_network_message_peer_handoff@@@Z");
//};

//public: bool c_network_session::handle_host_transition(struct s_network_message_host_transition const *)
//{
//    mangled_ppc("?handle_host_transition@c_network_session@@QAA_NPBUs_network_message_host_transition@@@Z");
//};

//public: long c_network_session_membership::host_transition_peer_index(void) const
//{
//    mangled_ppc("?host_transition_peer_index@c_network_session_membership@@QBAJXZ");
//};

//public: bool c_network_session::handle_host_reestablish(struct transport_address const *, struct s_network_message_host_reestablish const *)
//{
//    mangled_ppc("?handle_host_reestablish@c_network_session@@QAA_NPBUtransport_address@@PBUs_network_message_host_reestablish@@@Z");
//};

//public: void c_network_session_membership::reset_membership_update_received(void)
//{
//    mangled_ppc("?reset_membership_update_received@c_network_session_membership@@QAAXXZ");
//};

//public: bool c_network_session::handle_host_decline(class c_network_channel *, struct s_network_message_host_decline const *)
//{
//    mangled_ppc("?handle_host_decline@c_network_session@@QAA_NPAVc_network_channel@@PBUs_network_message_host_decline@@@Z");
//};

//public: bool c_network_session::handle_peer_reestablish(class c_network_channel *, struct s_network_message_peer_reestablish const *)
//{
//    mangled_ppc("?handle_peer_reestablish@c_network_session@@QAA_NPAVc_network_channel@@PBUs_network_message_peer_reestablish@@@Z");
//};

//public: bool c_network_session::handle_peer_establish(class c_network_channel *, struct s_network_message_peer_establish const *)
//{
//    mangled_ppc("?handle_peer_establish@c_network_session@@QAA_NPAVc_network_channel@@PBUs_network_message_peer_establish@@@Z");
//};

//public: bool c_network_session::handle_election(struct transport_address const *, struct s_network_message_election const *, enum e_network_election_refuse_reason *, bool *, struct s_transport_secure_address *)
//{
//    mangled_ppc("?handle_election@c_network_session@@QAA_NPBUtransport_address@@PBUs_network_message_election@@PAW4e_network_election_refuse_reason@@PA_NPAUs_transport_secure_address@@@Z");
//};

//public: bool c_network_session::handle_election_refuse(struct transport_address const *, struct s_network_message_election_refuse const *)
//{
//    mangled_ppc("?handle_election_refuse@c_network_session@@QAA_NPBUtransport_address@@PBUs_network_message_election_refuse@@@Z");
//};

//public: bool c_network_session::handle_membership_update(struct s_network_message_membership_update const *)
//{
//    mangled_ppc("?handle_membership_update@c_network_session@@QAA_NPBUs_network_message_membership_update@@@Z");
//};

//public: bool c_network_session::handle_peer_properties(class c_network_channel *, struct s_network_message_peer_properties const *)
//{
//    mangled_ppc("?handle_peer_properties@c_network_session@@QAA_NPAVc_network_channel@@PBUs_network_message_peer_properties@@@Z");
//};

//public: bool c_network_session::handle_delegate_leadership(class c_network_channel *, struct s_network_message_delegate_leadership const *)
//{
//    mangled_ppc("?handle_delegate_leadership@c_network_session@@QAA_NPAVc_network_channel@@PBUs_network_message_delegate_leadership@@@Z");
//};

//public: bool c_network_session::handle_boot_machine(class c_network_channel *, struct s_network_message_boot_machine const *)
//{
//    mangled_ppc("?handle_boot_machine@c_network_session@@QAA_NPAVc_network_channel@@PBUs_network_message_boot_machine@@@Z");
//};

//public: bool c_network_session::handle_player_add(class c_network_channel *, struct s_network_message_player_add const *)
//{
//    mangled_ppc("?handle_player_add@c_network_session@@QAA_NPAVc_network_channel@@PBUs_network_message_player_add@@@Z");
//};

//public: bool c_network_session::handle_player_refuse(class c_network_channel *, struct s_network_message_player_refuse const *)
//{
//    mangled_ppc("?handle_player_refuse@c_network_session@@QAA_NPAVc_network_channel@@PBUs_network_message_player_refuse@@@Z");
//};

//public: bool c_network_session::handle_player_remove(class c_network_channel *, struct s_network_message_player_remove const *)
//{
//    mangled_ppc("?handle_player_remove@c_network_session@@QAA_NPAVc_network_channel@@PBUs_network_message_player_remove@@@Z");
//};

//public: bool c_network_session::handle_player_properties(class c_network_channel *, struct s_network_message_player_properties const *)
//{
//    mangled_ppc("?handle_player_properties@c_network_session@@QAA_NPAVc_network_channel@@PBUs_network_message_player_properties@@@Z");
//};

