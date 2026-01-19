/* ---------- headers */

#include "omaha\networking\messages\network_message_handler.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: bool c_network_message_handler::initialize_handler(class c_network_link *, class c_network_message_type_collection const *, class c_network_message_gateway *);
// public: void c_network_message_handler::register_session_manager(class c_network_session_manager *);
// public: void c_network_message_handler::register_channel_manager(class c_network_channel_manager *);
// public: void c_network_message_handler::destroy_handler(void);
// public: void c_network_message_handler::handle_out_of_band_message(struct transport_address const *, unsigned long, enum e_network_message_type, long, void const *);
// public: void c_network_message_handler::handle_channel_message(class c_network_channel *, unsigned long, enum e_network_message_type, long, void const *);
// private: void c_network_message_handler::handle_ping(struct transport_address const *, unsigned long, struct s_network_message_ping const *);
// unsigned long network_time_get_exact(void);
// private: static void c_network_message_handler::handle_pong(struct transport_address const *, unsigned long, struct s_network_message_pong const *);
// long network_time_since(unsigned long);
// unsigned long network_time_get(void);
// long network_time_difference_msec(unsigned long, unsigned long);
// private: void c_network_message_handler::handle_broadcast_search(struct transport_address const *, unsigned long, struct s_network_message_broadcast_search const *);
// public: s_network_message_broadcast_reply::s_network_message_broadcast_reply(void);
// private: static void c_network_message_handler::handle_broadcast_reply(struct transport_address const *, unsigned long, struct s_network_message_broadcast_reply const *);
// private: void c_network_message_handler::handle_join_request(struct transport_address const *, unsigned long, struct s_network_message_join_request const *);
// private: void c_network_message_handler::handle_peer_connect(struct transport_address const *, unsigned long, struct s_network_message_peer_connect const *);
// private: void c_network_message_handler::handle_join_abort(struct transport_address const *, unsigned long, struct s_network_message_join_abort const *);
// private: void c_network_message_handler::handle_join_refuse(struct transport_address const *, unsigned long, struct s_network_message_join_refuse const *);
// private: void c_network_message_handler::handle_leave_session(struct transport_address const *, unsigned long, struct s_network_message_leave_session const *);
// private: void c_network_message_handler::handle_leave_acknowledge(struct transport_address const *, unsigned long, struct s_network_message_leave_acknowledge const *);
// private: void c_network_message_handler::handle_session_disband(struct transport_address const *, unsigned long, struct s_network_message_session_disband const *);
// private: void c_network_message_handler::handle_session_boot(struct transport_address const *, unsigned long, struct s_network_message_session_boot const *);
// private: void c_network_message_handler::handle_host_handoff(class c_network_channel *, unsigned long, struct s_network_message_host_handoff const *);
// private: void c_network_message_handler::handle_peer_handoff(class c_network_channel *, unsigned long, struct s_network_message_peer_handoff const *);
// private: void c_network_message_handler::handle_host_transition(class c_network_channel *, unsigned long, struct s_network_message_host_transition const *);
// private: void c_network_message_handler::handle_host_reestablish(struct transport_address const *, unsigned long, struct s_network_message_host_reestablish const *);
// private: void c_network_message_handler::handle_host_decline(class c_network_channel *, unsigned long, struct s_network_message_host_decline const *);
// private: void c_network_message_handler::handle_peer_reestablish(class c_network_channel *, unsigned long, struct s_network_message_peer_reestablish const *);
// private: void c_network_message_handler::handle_peer_establish(class c_network_channel *, unsigned long, struct s_network_message_peer_establish const *);
// private: void c_network_message_handler::handle_election(struct transport_address const *, unsigned long, struct s_network_message_election const *);
// private: void c_network_message_handler::handle_election_refuse(struct transport_address const *, unsigned long, struct s_network_message_election_refuse const *);
// private: void c_network_message_handler::handle_time_synchronize(struct transport_address const *, unsigned long, struct s_network_message_time_synchronize const *);
// private: void c_network_message_handler::handle_membership_update(class c_network_channel *, unsigned long, struct s_network_message_membership_update const *);
// private: void c_network_message_handler::handle_peer_properties(class c_network_channel *, unsigned long, struct s_network_message_peer_properties const *);
// private: void c_network_message_handler::handle_delegate_leadership(class c_network_channel *, unsigned long, struct s_network_message_delegate_leadership const *);
// private: void c_network_message_handler::handle_boot_machine(class c_network_channel *, unsigned long, struct s_network_message_boot_machine const *);
// private: void c_network_message_handler::handle_player_add(class c_network_channel *, unsigned long, struct s_network_message_player_add const *);
// private: void c_network_message_handler::handle_player_refuse(class c_network_channel *, unsigned long, struct s_network_message_player_refuse const *);
// private: void c_network_message_handler::handle_player_remove(class c_network_channel *, unsigned long, struct s_network_message_player_remove const *);
// private: void c_network_message_handler::handle_player_properties(class c_network_channel *, unsigned long, struct s_network_message_player_properties const *);
// private: void c_network_message_handler::handle_parameters_update(class c_network_channel *, unsigned long, struct s_network_message_parameters_update const *);
// private: void c_network_message_handler::handle_parameters_request(class c_network_channel *, unsigned long, struct s_network_message_parameters_request const *);
// private: void c_network_message_handler::handle_security(class c_network_channel *, unsigned long, struct s_network_message_security const *);
// private: static void c_network_message_handler::handle_view_establishment(class c_network_channel *, unsigned long, struct s_network_message_view_establishment const *);
// private: static void c_network_message_handler::handle_player_acknowledge(class c_network_channel *, unsigned long, struct s_network_message_player_acknowledge const *);
// private: static void c_network_message_handler::handle_synchronous_update(class c_network_channel *, unsigned long, struct s_network_message_synchronous_update const *);
// private: static void c_network_message_handler::handle_synchronous_playback_control(class c_network_channel *, unsigned long, struct s_network_message_synchronous_playback_control const *);
// private: static void c_network_message_handler::handle_synchronous_actions(class c_network_channel *, unsigned long, struct s_network_message_synchronous_actions const *);
// private: static void c_network_message_handler::handle_synchronous_acknowledge(class c_network_channel *, unsigned long, struct s_network_message_synchronous_acknowledge const *);
// private: static void c_network_message_handler::handle_synchronous_join_catchup(class c_network_channel *, unsigned long, struct s_network_message_synchronous_join_catchup const *);
// private: static void c_network_message_handler::handle_distributed_game_results(class c_network_channel *, unsigned long, struct s_network_message_distributed_game_results const *);
// private: static void c_network_message_handler::handle_update_queue_element(class c_network_channel *, unsigned long, struct s_network_message_update_queue_element const *, long, void const *);
// private: static void c_network_message_handler::handle_client_wiped_game_engine_state(class c_network_channel *, unsigned long);
// private: void c_network_message_handler::handle_connect_request(struct transport_address const *, unsigned long, struct s_network_message_connect_request const *);
// private: static void c_network_message_handler::handle_connect_refuse(class c_network_channel *, unsigned long, struct s_network_message_connect_refuse const *);
// private: static void c_network_message_handler::handle_connect_establish(class c_network_channel *, unsigned long, struct s_network_message_connect_establish const *);
// public: bool c_network_message_queue::has_channel_been_used(void) const;
// private: static void c_network_message_handler::handle_connect_closed(class c_network_channel *, unsigned long, struct s_network_message_connect_closed const *);
// private: static void c_network_message_handler::handle_test(class c_network_channel *, unsigned long, struct s_network_message_test const *);
// private: static void c_network_message_handler::handle_test_force_host_machine_name(class c_network_channel *, unsigned long, struct s_network_message_test_force_host_machine_name const *);

//public: bool c_network_message_handler::initialize_handler(class c_network_link *, class c_network_message_type_collection const *, class c_network_message_gateway *)
//{
//    mangled_ppc("?initialize_handler@c_network_message_handler@@QAA_NPAVc_network_link@@PBVc_network_message_type_collection@@PAVc_network_message_gateway@@@Z");
//};

//public: void c_network_message_handler::register_session_manager(class c_network_session_manager *)
//{
//    mangled_ppc("?register_session_manager@c_network_message_handler@@QAAXPAVc_network_session_manager@@@Z");
//};

//public: void c_network_message_handler::register_channel_manager(class c_network_channel_manager *)
//{
//    mangled_ppc("?register_channel_manager@c_network_message_handler@@QAAXPAVc_network_channel_manager@@@Z");
//};

//public: void c_network_message_handler::destroy_handler(void)
//{
//    mangled_ppc("?destroy_handler@c_network_message_handler@@QAAXXZ");
//};

//public: void c_network_message_handler::handle_out_of_band_message(struct transport_address const *, unsigned long, enum e_network_message_type, long, void const *)
//{
//    mangled_ppc("?handle_out_of_band_message@c_network_message_handler@@QAAXPBUtransport_address@@KW4e_network_message_type@@JPBX@Z");
//};

//public: void c_network_message_handler::handle_channel_message(class c_network_channel *, unsigned long, enum e_network_message_type, long, void const *)
//{
//    mangled_ppc("?handle_channel_message@c_network_message_handler@@QAAXPAVc_network_channel@@KW4e_network_message_type@@JPBX@Z");
//};

//private: void c_network_message_handler::handle_ping(struct transport_address const *, unsigned long, struct s_network_message_ping const *)
//{
//    mangled_ppc("?handle_ping@c_network_message_handler@@AAAXPBUtransport_address@@KPBUs_network_message_ping@@@Z");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//private: static void c_network_message_handler::handle_pong(struct transport_address const *, unsigned long, struct s_network_message_pong const *)
//{
//    mangled_ppc("?handle_pong@c_network_message_handler@@CAXPBUtransport_address@@KPBUs_network_message_pong@@@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//private: void c_network_message_handler::handle_broadcast_search(struct transport_address const *, unsigned long, struct s_network_message_broadcast_search const *)
//{
//    mangled_ppc("?handle_broadcast_search@c_network_message_handler@@AAAXPBUtransport_address@@KPBUs_network_message_broadcast_search@@@Z");
//};

//public: s_network_message_broadcast_reply::s_network_message_broadcast_reply(void)
//{
//    mangled_ppc("??0s_network_message_broadcast_reply@@QAA@XZ");
//};

//private: static void c_network_message_handler::handle_broadcast_reply(struct transport_address const *, unsigned long, struct s_network_message_broadcast_reply const *)
//{
//    mangled_ppc("?handle_broadcast_reply@c_network_message_handler@@CAXPBUtransport_address@@KPBUs_network_message_broadcast_reply@@@Z");
//};

//private: void c_network_message_handler::handle_join_request(struct transport_address const *, unsigned long, struct s_network_message_join_request const *)
//{
//    mangled_ppc("?handle_join_request@c_network_message_handler@@AAAXPBUtransport_address@@KPBUs_network_message_join_request@@@Z");
//};

//private: void c_network_message_handler::handle_peer_connect(struct transport_address const *, unsigned long, struct s_network_message_peer_connect const *)
//{
//    mangled_ppc("?handle_peer_connect@c_network_message_handler@@AAAXPBUtransport_address@@KPBUs_network_message_peer_connect@@@Z");
//};

//private: void c_network_message_handler::handle_join_abort(struct transport_address const *, unsigned long, struct s_network_message_join_abort const *)
//{
//    mangled_ppc("?handle_join_abort@c_network_message_handler@@AAAXPBUtransport_address@@KPBUs_network_message_join_abort@@@Z");
//};

//private: void c_network_message_handler::handle_join_refuse(struct transport_address const *, unsigned long, struct s_network_message_join_refuse const *)
//{
//    mangled_ppc("?handle_join_refuse@c_network_message_handler@@AAAXPBUtransport_address@@KPBUs_network_message_join_refuse@@@Z");
//};

//private: void c_network_message_handler::handle_leave_session(struct transport_address const *, unsigned long, struct s_network_message_leave_session const *)
//{
//    mangled_ppc("?handle_leave_session@c_network_message_handler@@AAAXPBUtransport_address@@KPBUs_network_message_leave_session@@@Z");
//};

//private: void c_network_message_handler::handle_leave_acknowledge(struct transport_address const *, unsigned long, struct s_network_message_leave_acknowledge const *)
//{
//    mangled_ppc("?handle_leave_acknowledge@c_network_message_handler@@AAAXPBUtransport_address@@KPBUs_network_message_leave_acknowledge@@@Z");
//};

//private: void c_network_message_handler::handle_session_disband(struct transport_address const *, unsigned long, struct s_network_message_session_disband const *)
//{
//    mangled_ppc("?handle_session_disband@c_network_message_handler@@AAAXPBUtransport_address@@KPBUs_network_message_session_disband@@@Z");
//};

//private: void c_network_message_handler::handle_session_boot(struct transport_address const *, unsigned long, struct s_network_message_session_boot const *)
//{
//    mangled_ppc("?handle_session_boot@c_network_message_handler@@AAAXPBUtransport_address@@KPBUs_network_message_session_boot@@@Z");
//};

//private: void c_network_message_handler::handle_host_handoff(class c_network_channel *, unsigned long, struct s_network_message_host_handoff const *)
//{
//    mangled_ppc("?handle_host_handoff@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_host_handoff@@@Z");
//};

//private: void c_network_message_handler::handle_peer_handoff(class c_network_channel *, unsigned long, struct s_network_message_peer_handoff const *)
//{
//    mangled_ppc("?handle_peer_handoff@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_peer_handoff@@@Z");
//};

//private: void c_network_message_handler::handle_host_transition(class c_network_channel *, unsigned long, struct s_network_message_host_transition const *)
//{
//    mangled_ppc("?handle_host_transition@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_host_transition@@@Z");
//};

//private: void c_network_message_handler::handle_host_reestablish(struct transport_address const *, unsigned long, struct s_network_message_host_reestablish const *)
//{
//    mangled_ppc("?handle_host_reestablish@c_network_message_handler@@AAAXPBUtransport_address@@KPBUs_network_message_host_reestablish@@@Z");
//};

//private: void c_network_message_handler::handle_host_decline(class c_network_channel *, unsigned long, struct s_network_message_host_decline const *)
//{
//    mangled_ppc("?handle_host_decline@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_host_decline@@@Z");
//};

//private: void c_network_message_handler::handle_peer_reestablish(class c_network_channel *, unsigned long, struct s_network_message_peer_reestablish const *)
//{
//    mangled_ppc("?handle_peer_reestablish@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_peer_reestablish@@@Z");
//};

//private: void c_network_message_handler::handle_peer_establish(class c_network_channel *, unsigned long, struct s_network_message_peer_establish const *)
//{
//    mangled_ppc("?handle_peer_establish@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_peer_establish@@@Z");
//};

//private: void c_network_message_handler::handle_election(struct transport_address const *, unsigned long, struct s_network_message_election const *)
//{
//    mangled_ppc("?handle_election@c_network_message_handler@@AAAXPBUtransport_address@@KPBUs_network_message_election@@@Z");
//};

//private: void c_network_message_handler::handle_election_refuse(struct transport_address const *, unsigned long, struct s_network_message_election_refuse const *)
//{
//    mangled_ppc("?handle_election_refuse@c_network_message_handler@@AAAXPBUtransport_address@@KPBUs_network_message_election_refuse@@@Z");
//};

//private: void c_network_message_handler::handle_time_synchronize(struct transport_address const *, unsigned long, struct s_network_message_time_synchronize const *)
//{
//    mangled_ppc("?handle_time_synchronize@c_network_message_handler@@AAAXPBUtransport_address@@KPBUs_network_message_time_synchronize@@@Z");
//};

//private: void c_network_message_handler::handle_membership_update(class c_network_channel *, unsigned long, struct s_network_message_membership_update const *)
//{
//    mangled_ppc("?handle_membership_update@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_membership_update@@@Z");
//};

//private: void c_network_message_handler::handle_peer_properties(class c_network_channel *, unsigned long, struct s_network_message_peer_properties const *)
//{
//    mangled_ppc("?handle_peer_properties@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_peer_properties@@@Z");
//};

//private: void c_network_message_handler::handle_delegate_leadership(class c_network_channel *, unsigned long, struct s_network_message_delegate_leadership const *)
//{
//    mangled_ppc("?handle_delegate_leadership@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_delegate_leadership@@@Z");
//};

//private: void c_network_message_handler::handle_boot_machine(class c_network_channel *, unsigned long, struct s_network_message_boot_machine const *)
//{
//    mangled_ppc("?handle_boot_machine@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_boot_machine@@@Z");
//};

//private: void c_network_message_handler::handle_player_add(class c_network_channel *, unsigned long, struct s_network_message_player_add const *)
//{
//    mangled_ppc("?handle_player_add@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_player_add@@@Z");
//};

//private: void c_network_message_handler::handle_player_refuse(class c_network_channel *, unsigned long, struct s_network_message_player_refuse const *)
//{
//    mangled_ppc("?handle_player_refuse@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_player_refuse@@@Z");
//};

//private: void c_network_message_handler::handle_player_remove(class c_network_channel *, unsigned long, struct s_network_message_player_remove const *)
//{
//    mangled_ppc("?handle_player_remove@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_player_remove@@@Z");
//};

//private: void c_network_message_handler::handle_player_properties(class c_network_channel *, unsigned long, struct s_network_message_player_properties const *)
//{
//    mangled_ppc("?handle_player_properties@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_player_properties@@@Z");
//};

//private: void c_network_message_handler::handle_parameters_update(class c_network_channel *, unsigned long, struct s_network_message_parameters_update const *)
//{
//    mangled_ppc("?handle_parameters_update@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_parameters_update@@@Z");
//};

//private: void c_network_message_handler::handle_parameters_request(class c_network_channel *, unsigned long, struct s_network_message_parameters_request const *)
//{
//    mangled_ppc("?handle_parameters_request@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_parameters_request@@@Z");
//};

//private: void c_network_message_handler::handle_security(class c_network_channel *, unsigned long, struct s_network_message_security const *)
//{
//    mangled_ppc("?handle_security@c_network_message_handler@@AAAXPAVc_network_channel@@KPBUs_network_message_security@@@Z");
//};

//private: static void c_network_message_handler::handle_view_establishment(class c_network_channel *, unsigned long, struct s_network_message_view_establishment const *)
//{
//    mangled_ppc("?handle_view_establishment@c_network_message_handler@@CAXPAVc_network_channel@@KPBUs_network_message_view_establishment@@@Z");
//};

//private: static void c_network_message_handler::handle_player_acknowledge(class c_network_channel *, unsigned long, struct s_network_message_player_acknowledge const *)
//{
//    mangled_ppc("?handle_player_acknowledge@c_network_message_handler@@CAXPAVc_network_channel@@KPBUs_network_message_player_acknowledge@@@Z");
//};

//private: static void c_network_message_handler::handle_synchronous_update(class c_network_channel *, unsigned long, struct s_network_message_synchronous_update const *)
//{
//    mangled_ppc("?handle_synchronous_update@c_network_message_handler@@CAXPAVc_network_channel@@KPBUs_network_message_synchronous_update@@@Z");
//};

//private: static void c_network_message_handler::handle_synchronous_playback_control(class c_network_channel *, unsigned long, struct s_network_message_synchronous_playback_control const *)
//{
//    mangled_ppc("?handle_synchronous_playback_control@c_network_message_handler@@CAXPAVc_network_channel@@KPBUs_network_message_synchronous_playback_control@@@Z");
//};

//private: static void c_network_message_handler::handle_synchronous_actions(class c_network_channel *, unsigned long, struct s_network_message_synchronous_actions const *)
//{
//    mangled_ppc("?handle_synchronous_actions@c_network_message_handler@@CAXPAVc_network_channel@@KPBUs_network_message_synchronous_actions@@@Z");
//};

//private: static void c_network_message_handler::handle_synchronous_acknowledge(class c_network_channel *, unsigned long, struct s_network_message_synchronous_acknowledge const *)
//{
//    mangled_ppc("?handle_synchronous_acknowledge@c_network_message_handler@@CAXPAVc_network_channel@@KPBUs_network_message_synchronous_acknowledge@@@Z");
//};

//private: static void c_network_message_handler::handle_synchronous_join_catchup(class c_network_channel *, unsigned long, struct s_network_message_synchronous_join_catchup const *)
//{
//    mangled_ppc("?handle_synchronous_join_catchup@c_network_message_handler@@CAXPAVc_network_channel@@KPBUs_network_message_synchronous_join_catchup@@@Z");
//};

//private: static void c_network_message_handler::handle_distributed_game_results(class c_network_channel *, unsigned long, struct s_network_message_distributed_game_results const *)
//{
//    mangled_ppc("?handle_distributed_game_results@c_network_message_handler@@CAXPAVc_network_channel@@KPBUs_network_message_distributed_game_results@@@Z");
//};

//private: static void c_network_message_handler::handle_update_queue_element(class c_network_channel *, unsigned long, struct s_network_message_update_queue_element const *, long, void const *)
//{
//    mangled_ppc("?handle_update_queue_element@c_network_message_handler@@CAXPAVc_network_channel@@KPBUs_network_message_update_queue_element@@JPBX@Z");
//};

//private: static void c_network_message_handler::handle_client_wiped_game_engine_state(class c_network_channel *, unsigned long)
//{
//    mangled_ppc("?handle_client_wiped_game_engine_state@c_network_message_handler@@CAXPAVc_network_channel@@K@Z");
//};

//private: void c_network_message_handler::handle_connect_request(struct transport_address const *, unsigned long, struct s_network_message_connect_request const *)
//{
//    mangled_ppc("?handle_connect_request@c_network_message_handler@@AAAXPBUtransport_address@@KPBUs_network_message_connect_request@@@Z");
//};

//private: static void c_network_message_handler::handle_connect_refuse(class c_network_channel *, unsigned long, struct s_network_message_connect_refuse const *)
//{
//    mangled_ppc("?handle_connect_refuse@c_network_message_handler@@CAXPAVc_network_channel@@KPBUs_network_message_connect_refuse@@@Z");
//};

//private: static void c_network_message_handler::handle_connect_establish(class c_network_channel *, unsigned long, struct s_network_message_connect_establish const *)
//{
//    mangled_ppc("?handle_connect_establish@c_network_message_handler@@CAXPAVc_network_channel@@KPBUs_network_message_connect_establish@@@Z");
//};

//public: bool c_network_message_queue::has_channel_been_used(void) const
//{
//    mangled_ppc("?has_channel_been_used@c_network_message_queue@@QBA_NXZ");
//};

//private: static void c_network_message_handler::handle_connect_closed(class c_network_channel *, unsigned long, struct s_network_message_connect_closed const *)
//{
//    mangled_ppc("?handle_connect_closed@c_network_message_handler@@CAXPAVc_network_channel@@KPBUs_network_message_connect_closed@@@Z");
//};

//private: static void c_network_message_handler::handle_test(class c_network_channel *, unsigned long, struct s_network_message_test const *)
//{
//    mangled_ppc("?handle_test@c_network_message_handler@@CAXPAVc_network_channel@@KPBUs_network_message_test@@@Z");
//};

//private: static void c_network_message_handler::handle_test_force_host_machine_name(class c_network_channel *, unsigned long, struct s_network_message_test_force_host_machine_name const *)
//{
//    mangled_ppc("?handle_test_force_host_machine_name@c_network_message_handler@@CAXPAVc_network_channel@@KPBUs_network_message_test_force_host_machine_name@@@Z");
//};

