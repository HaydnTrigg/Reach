/* ---------- headers */

#include "omaha\simulation\simulation_watcher.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: void c_simulation_watcher::initialize_watcher(class c_simulation_world *);
// public: void c_simulation_watcher::destroy_watcher(void);
// public: void c_simulation_watcher::reset_tracking_arrays(void);
// public: void c_simulation_watcher::setup_connection(void);
// public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> c_network_session_membership::get_peer_valid_flags(void) const;
// public: struct s_transport_secure_address const * c_network_session_membership::get_peer_address(long) const;
// public: long c_network_session::managed_session_index(void) const;
// public: bool c_simulation_watcher::maintain_connection(void);
// public: struct s_network_session_peer const * c_network_session_membership::get_peers(void) const;
// public: bool c_network_session::host_established(void) const;
// public: void c_simulation_watcher::handle_new_gamestate(unsigned long);
// unsigned __int64 player_identifier_extract_actual_player_identifier(struct s_player_identifier);
// public: void c_simulation_watcher::handle_player_creation(void);
// public: void c_simulation_watcher::handle_player_leave_game(long);
// public: bool c_simulation_watcher::need_to_generate_updates(void) const;
// public: bool c_simulation_world::is_dead(void) const;
// public: bool c_simulation_world::can_generate_updates(void) const;
// public: void c_simulation_watcher::generate_machine_update(bool *, struct simulation_machine_update *);
// public: void c_simulation_watcher::generate_player_updates(long *, long, struct simulation_player_update *);
// public: void c_simulation_watcher::generate_player_updates_from_changed_session_membership(long *, long, struct simulation_player_update *);
// public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> c_network_session_membership::get_player_valid_flags(void) const;
// public: struct s_network_session_player const * c_network_session_membership::get_players(void) const;
// public: bool c_simulation_watcher::get_pending_acknowledgement(bool, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *, struct s_machine_identifier *, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> *, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> *, struct s_player_identifier *);
// public: void c_simulation_watcher::log_acknowledgement_status(bool, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>) const;
// public: long c_simulation_watcher::get_machine_index_by_identifier(struct s_machine_identifier const *) const;
// public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_simulation_watcher::get_player_in_game_mask(void) const;
// public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> c_simulation_watcher::get_machine_valid_mask(void) const;
// public: bool c_simulation_watcher::boot_machine(struct s_machine_identifier const *, enum e_network_session_boot_reason) const;
// public: void c_simulation_watcher::boot_machines(class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, enum e_network_session_boot_reason) const;
// public: bool c_simulation_watcher::in_online_networked_session(long *) const;
// public: void c_simulation_watcher::notify_game_revert(void);
// public: class c_flags<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> c_simulation_watcher::get_machine_ban_flags(long) const;
// public: long c_simulation_watcher::get_machine_RTT_latency_ms(long) const;
// public: bool c_simulation_watcher::get_player_is_in_game(long, struct s_player_identifier const *) const;
// public: bool c_simulation_watcher::get_machine_is_host(struct s_machine_identifier const *) const;
// public: bool c_simulation_watcher::get_machine_connectivity(struct s_machine_identifier const *) const;
// private: static struct simulation_player_update * c_simulation_watcher::player_update_allocate(long *, long, struct simulation_player_update *);
// private: static bool c_simulation_watcher::player_update_must_leave_game(long, struct s_player_collection_player const *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, struct s_machine_identifier const *, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>, struct s_network_session_player const *);
// private: static void c_simulation_watcher::player_update_find_swap_location(struct s_player_collection const *, long, struct s_player_identifier const *, long *, bool *);
// public: void c_simulation_watcher::describe_status(char *, long) const;
// public: enum e_simulation_status c_simulation_watcher::describe_status_simple(void) const;
// private: bool c_simulation_watcher::update_machines(struct s_transport_secure_address const *, long, long, long, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, struct s_network_session_peer const *);
// public: void c_simulation_view::get_machine_identifier(struct s_machine_identifier *) const;
// public: void c_simulation_view::set_machine_index(long);
// private: void c_simulation_watcher::apply_machines_to_players(void);
// public: virtual bool c_simulation_watcher::desire_channel_heartbeat(long) const;
// public: virtual enum e_network_channel_owner_state c_simulation_watcher::channel_get_state(long) const;
// public: bool c_simulation_view::is_distributed(void) const;
// public: virtual bool c_simulation_watcher::attempt_channel_reconnection(long, bool) const;
// public: virtual void c_simulation_watcher::notify_channel_connection(long, unsigned long, bool);
// public: unsigned long c_simulation_view::get_connection_identifier(void) const;
// public: virtual void c_simulation_watcher::notify_channel_died(long);
// private: bool c_simulation_watcher::maintain_simulation_authority(class c_network_session const *, long, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, struct s_network_session_peer const *);
// public: bool c_network_session_membership::is_peer_established(long) const;
// public: bool c_simulation_view::is_dead(long *) const;
// public: void c_simulation_view::set_machine_name(char const *);
// private: bool c_simulation_watcher::maintain_simulation_client(long);
// public: bool c_network_session_membership::is_host(void) const;
// public: long c_simulation_view::get_last_valid_view_establishment_identifier(void) const;
// private: bool c_simulation_watcher::setup_view(long, struct s_network_session_peer const *, long);
// public: bool c_network_channel::connected(void) const;
// public: void c_simulation_view::set_illegal_view_establishment_identifier(long);
// public: class c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> const &);
// public: void c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::set(long, bool);
// public: bool c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> const &) const;
// public: bool c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> const &) const;
// public: void c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// public: bool c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::valid(void) const;

//public: void c_simulation_watcher::initialize_watcher(class c_simulation_world *)
//{
//    mangled_ppc("?initialize_watcher@c_simulation_watcher@@QAAXPAVc_simulation_world@@@Z");
//};

//public: void c_simulation_watcher::destroy_watcher(void)
//{
//    mangled_ppc("?destroy_watcher@c_simulation_watcher@@QAAXXZ");
//};

//public: void c_simulation_watcher::reset_tracking_arrays(void)
//{
//    mangled_ppc("?reset_tracking_arrays@c_simulation_watcher@@QAAXXZ");
//};

//public: void c_simulation_watcher::setup_connection(void)
//{
//    mangled_ppc("?setup_connection@c_simulation_watcher@@QAAXXZ");
//};

//public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> c_network_session_membership::get_peer_valid_flags(void) const
//{
//    mangled_ppc("?get_peer_valid_flags@c_network_session_membership@@QBA?AV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: struct s_transport_secure_address const * c_network_session_membership::get_peer_address(long) const
//{
//    mangled_ppc("?get_peer_address@c_network_session_membership@@QBAPBUs_transport_secure_address@@J@Z");
//};

//public: long c_network_session::managed_session_index(void) const
//{
//    mangled_ppc("?managed_session_index@c_network_session@@QBAJXZ");
//};

//public: bool c_simulation_watcher::maintain_connection(void)
//{
//    mangled_ppc("?maintain_connection@c_simulation_watcher@@QAA_NXZ");
//};

//public: struct s_network_session_peer const * c_network_session_membership::get_peers(void) const
//{
//    mangled_ppc("?get_peers@c_network_session_membership@@QBAPBUs_network_session_peer@@XZ");
//};

//public: bool c_network_session::host_established(void) const
//{
//    mangled_ppc("?host_established@c_network_session@@QBA_NXZ");
//};

//public: void c_simulation_watcher::handle_new_gamestate(unsigned long)
//{
//    mangled_ppc("?handle_new_gamestate@c_simulation_watcher@@QAAXK@Z");
//};

//unsigned __int64 player_identifier_extract_actual_player_identifier(struct s_player_identifier)
//{
//    mangled_ppc("?player_identifier_extract_actual_player_identifier@@YA_KUs_player_identifier@@@Z");
//};

//public: void c_simulation_watcher::handle_player_creation(void)
//{
//    mangled_ppc("?handle_player_creation@c_simulation_watcher@@QAAXXZ");
//};

//public: void c_simulation_watcher::handle_player_leave_game(long)
//{
//    mangled_ppc("?handle_player_leave_game@c_simulation_watcher@@QAAXJ@Z");
//};

//public: bool c_simulation_watcher::need_to_generate_updates(void) const
//{
//    mangled_ppc("?need_to_generate_updates@c_simulation_watcher@@QBA_NXZ");
//};

//public: bool c_simulation_world::is_dead(void) const
//{
//    mangled_ppc("?is_dead@c_simulation_world@@QBA_NXZ");
//};

//public: bool c_simulation_world::can_generate_updates(void) const
//{
//    mangled_ppc("?can_generate_updates@c_simulation_world@@QBA_NXZ");
//};

//public: void c_simulation_watcher::generate_machine_update(bool *, struct simulation_machine_update *)
//{
//    mangled_ppc("?generate_machine_update@c_simulation_watcher@@QAAXPA_NPAUsimulation_machine_update@@@Z");
//};

//public: void c_simulation_watcher::generate_player_updates(long *, long, struct simulation_player_update *)
//{
//    mangled_ppc("?generate_player_updates@c_simulation_watcher@@QAAXPAJJPAUsimulation_player_update@@@Z");
//};

//public: void c_simulation_watcher::generate_player_updates_from_changed_session_membership(long *, long, struct simulation_player_update *)
//{
//    mangled_ppc("?generate_player_updates_from_changed_session_membership@c_simulation_watcher@@QAAXPAJJPAUsimulation_player_update@@@Z");
//};

//public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> c_network_session_membership::get_player_valid_flags(void) const
//{
//    mangled_ppc("?get_player_valid_flags@c_network_session_membership@@QBA?AV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: struct s_network_session_player const * c_network_session_membership::get_players(void) const
//{
//    mangled_ppc("?get_players@c_network_session_membership@@QBAPBUs_network_session_player@@XZ");
//};

//public: bool c_simulation_watcher::get_pending_acknowledgement(bool, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> *, struct s_machine_identifier *, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> *, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> *, struct s_player_identifier *)
//{
//    mangled_ppc("?get_pending_acknowledgement@c_simulation_watcher@@QAA_N_NPAV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@PAUs_machine_identifier@@PAV?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@3PAUs_player_identifier@@@Z");
//};

//public: void c_simulation_watcher::log_acknowledgement_status(bool, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>) const
//{
//    mangled_ppc("?log_acknowledgement_status@c_simulation_watcher@@QBAX_NV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@V?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@2@Z");
//};

//public: long c_simulation_watcher::get_machine_index_by_identifier(struct s_machine_identifier const *) const
//{
//    mangled_ppc("?get_machine_index_by_identifier@c_simulation_watcher@@QBAJPBUs_machine_identifier@@@Z");
//};

//public: class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> c_simulation_watcher::get_player_in_game_mask(void) const
//{
//    mangled_ppc("?get_player_in_game_mask@c_simulation_watcher@@QBA?AV?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> c_simulation_watcher::get_machine_valid_mask(void) const
//{
//    mangled_ppc("?get_machine_valid_mask@c_simulation_watcher@@QBA?AV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: bool c_simulation_watcher::boot_machine(struct s_machine_identifier const *, enum e_network_session_boot_reason) const
//{
//    mangled_ppc("?boot_machine@c_simulation_watcher@@QBA_NPBUs_machine_identifier@@W4e_network_session_boot_reason@@@Z");
//};

//public: void c_simulation_watcher::boot_machines(class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, enum e_network_session_boot_reason) const
//{
//    mangled_ppc("?boot_machines@c_simulation_watcher@@QBAXV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@W4e_network_session_boot_reason@@@Z");
//};

//public: bool c_simulation_watcher::in_online_networked_session(long *) const
//{
//    mangled_ppc("?in_online_networked_session@c_simulation_watcher@@QBA_NPAJ@Z");
//};

//public: void c_simulation_watcher::notify_game_revert(void)
//{
//    mangled_ppc("?notify_game_revert@c_simulation_watcher@@QAAXXZ");
//};

//public: class c_flags<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> c_simulation_watcher::get_machine_ban_flags(long) const
//{
//    mangled_ppc("?get_machine_ban_flags@c_simulation_watcher@@QBA?AV?$c_flags@W4e_network_banhammer_ban_flags@@G$0BA@Us_default_enum_string_resolver@@@@J@Z");
//};

//public: long c_simulation_watcher::get_machine_RTT_latency_ms(long) const
//{
//    mangled_ppc("?get_machine_RTT_latency_ms@c_simulation_watcher@@QBAJJ@Z");
//};

//public: bool c_simulation_watcher::get_player_is_in_game(long, struct s_player_identifier const *) const
//{
//    mangled_ppc("?get_player_is_in_game@c_simulation_watcher@@QBA_NJPBUs_player_identifier@@@Z");
//};

//public: bool c_simulation_watcher::get_machine_is_host(struct s_machine_identifier const *) const
//{
//    mangled_ppc("?get_machine_is_host@c_simulation_watcher@@QBA_NPBUs_machine_identifier@@@Z");
//};

//public: bool c_simulation_watcher::get_machine_connectivity(struct s_machine_identifier const *) const
//{
//    mangled_ppc("?get_machine_connectivity@c_simulation_watcher@@QBA_NPBUs_machine_identifier@@@Z");
//};

//private: static struct simulation_player_update * c_simulation_watcher::player_update_allocate(long *, long, struct simulation_player_update *)
//{
//    mangled_ppc("?player_update_allocate@c_simulation_watcher@@CAPAUsimulation_player_update@@PAJJPAU2@@Z");
//};

//private: static bool c_simulation_watcher::player_update_must_leave_game(long, struct s_player_collection_player const *, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, struct s_machine_identifier const *, class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>, struct s_network_session_player const *)
//{
//    mangled_ppc("?player_update_must_leave_game@c_simulation_watcher@@CA_NJPBUs_player_collection_player@@V?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@PBUs_machine_identifier@@V?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@PBUs_network_session_player@@@Z");
//};

//private: static void c_simulation_watcher::player_update_find_swap_location(struct s_player_collection const *, long, struct s_player_identifier const *, long *, bool *)
//{
//    mangled_ppc("?player_update_find_swap_location@c_simulation_watcher@@CAXPBUs_player_collection@@JPBUs_player_identifier@@PAJPA_N@Z");
//};

//public: void c_simulation_watcher::describe_status(char *, long) const
//{
//    mangled_ppc("?describe_status@c_simulation_watcher@@QBAXPADJ@Z");
//};

//public: enum e_simulation_status c_simulation_watcher::describe_status_simple(void) const
//{
//    mangled_ppc("?describe_status_simple@c_simulation_watcher@@QBA?AW4e_simulation_status@@XZ");
//};

//private: bool c_simulation_watcher::update_machines(struct s_transport_secure_address const *, long, long, long, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, struct s_network_session_peer const *)
//{
//    mangled_ppc("?update_machines@c_simulation_watcher@@AAA_NPBUs_transport_secure_address@@JJJV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@PBUs_network_session_peer@@@Z");
//};

//public: void c_simulation_view::get_machine_identifier(struct s_machine_identifier *) const
//{
//    mangled_ppc("?get_machine_identifier@c_simulation_view@@QBAXPAUs_machine_identifier@@@Z");
//};

//public: void c_simulation_view::set_machine_index(long)
//{
//    mangled_ppc("?set_machine_index@c_simulation_view@@QAAXJ@Z");
//};

//private: void c_simulation_watcher::apply_machines_to_players(void)
//{
//    mangled_ppc("?apply_machines_to_players@c_simulation_watcher@@AAAXXZ");
//};

//public: virtual bool c_simulation_watcher::desire_channel_heartbeat(long) const
//{
//    mangled_ppc("?desire_channel_heartbeat@c_simulation_watcher@@UBA_NJ@Z");
//};

//public: virtual enum e_network_channel_owner_state c_simulation_watcher::channel_get_state(long) const
//{
//    mangled_ppc("?channel_get_state@c_simulation_watcher@@UBA?AW4e_network_channel_owner_state@@J@Z");
//};

//public: bool c_simulation_view::is_distributed(void) const
//{
//    mangled_ppc("?is_distributed@c_simulation_view@@QBA_NXZ");
//};

//public: virtual bool c_simulation_watcher::attempt_channel_reconnection(long, bool) const
//{
//    mangled_ppc("?attempt_channel_reconnection@c_simulation_watcher@@UBA_NJ_N@Z");
//};

//public: virtual void c_simulation_watcher::notify_channel_connection(long, unsigned long, bool)
//{
//    mangled_ppc("?notify_channel_connection@c_simulation_watcher@@UAAXJK_N@Z");
//};

//public: unsigned long c_simulation_view::get_connection_identifier(void) const
//{
//    mangled_ppc("?get_connection_identifier@c_simulation_view@@QBAKXZ");
//};

//public: virtual void c_simulation_watcher::notify_channel_died(long)
//{
//    mangled_ppc("?notify_channel_died@c_simulation_watcher@@UAAXJ@Z");
//};

//private: bool c_simulation_watcher::maintain_simulation_authority(class c_network_session const *, long, class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, struct s_network_session_peer const *)
//{
//    mangled_ppc("?maintain_simulation_authority@c_simulation_watcher@@AAA_NPBVc_network_session@@JV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@PBUs_network_session_peer@@@Z");
//};

//public: bool c_network_session_membership::is_peer_established(long) const
//{
//    mangled_ppc("?is_peer_established@c_network_session_membership@@QBA_NJ@Z");
//};

//public: bool c_simulation_view::is_dead(long *) const
//{
//    mangled_ppc("?is_dead@c_simulation_view@@QBA_NPAJ@Z");
//};

//public: void c_simulation_view::set_machine_name(char const *)
//{
//    mangled_ppc("?set_machine_name@c_simulation_view@@QAAXPBD@Z");
//};

//private: bool c_simulation_watcher::maintain_simulation_client(long)
//{
//    mangled_ppc("?maintain_simulation_client@c_simulation_watcher@@AAA_NJ@Z");
//};

//public: bool c_network_session_membership::is_host(void) const
//{
//    mangled_ppc("?is_host@c_network_session_membership@@QBA_NXZ");
//};

//public: long c_simulation_view::get_last_valid_view_establishment_identifier(void) const
//{
//    mangled_ppc("?get_last_valid_view_establishment_identifier@c_simulation_view@@QBAJXZ");
//};

//private: bool c_simulation_watcher::setup_view(long, struct s_network_session_peer const *, long)
//{
//    mangled_ppc("?setup_view@c_simulation_watcher@@AAA_NJPBUs_network_session_peer@@J@Z");
//};

//public: bool c_network_channel::connected(void) const
//{
//    mangled_ppc("?connected@c_network_channel@@QBA_NXZ");
//};

//public: void c_simulation_view::set_illegal_view_establishment_identifier(long)
//{
//    mangled_ppc("?set_illegal_view_establishment_identifier@c_simulation_view@@QAAXJ@Z");
//};

//public: class c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> & c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<enum e_network_banhammer_ban_flags, unsigned short, 16, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_5?$c_flags_no_init@W4e_network_banhammer_ban_flags@@G$0BA@Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: void c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QAAXJ_N@Z");
//};

//public: bool c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??8?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: bool c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: void c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//public: bool c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

