/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: bool c_network_session_membership::clone_for_connect(class c_network_session_membership const *, class c_network_session *);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// private: void c_network_session_membership::clear(void);
// public: void c_network_session_membership::copy_current_to_transmitted(void);
// public: void c_network_session_membership::set_leader_peer_index(long);
// private: void c_network_session_membership::increment_update(void);
// public: void c_network_session_membership::set_slot_counts(long, long, bool);
// private: class c_network_session * c_network_session_membership::get_session(void);
// public: void c_network_session_membership::lock_slots(void);
// public: void c_network_session_membership::set_peer_connection_state(long, enum e_network_session_peer_state);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: void c_network_session_membership::reset_membership(void);
// public: void c_network_session_membership::reset_transmitted_membership_state(void);
// public: void c_network_session_membership::flush_all_local_state(void);
// public: bool c_network_session_membership::add_peer(long, enum e_network_session_peer_state, long, struct s_transport_secure_address const *, unsigned __int64);
// public: void c_network_session_membership::remove_peer(long);
// private: struct s_network_session_peer * c_network_session_membership::get_raw_peer(long);
// public: unsigned __int64 c_network_session_membership::get_player_xuid(long) const;
// public: long c_network_session_membership::get_peer_from_managed_channel(long) const;
// public: long c_network_session_membership::get_peer_from_incoming_address(struct transport_address const *) const;
// private: class c_network_session const * c_network_session_membership::get_session(void) const;
// public: long c_network_session_membership::get_peer_from_unique_identifier(struct s_transport_unique_identifier const *) const;
// public: long c_network_session_membership::get_peer_from_secure_address(struct s_transport_secure_address const *) const;
// public: void c_network_session_membership::get_peer_unique_identifier(long, struct s_transport_unique_identifier *) const;
// public: bool c_network_session_membership::host_exists_at_incoming_address(struct transport_address const *) const;
// public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> c_network_session_membership::get_established_peer_valid_flags(void) const;
// public: long c_network_session_membership::get_first_peer(void) const;
// public: long c_network_session_membership::get_next_peer(long) const;
// public: long c_network_session_membership::get_compatible_determinism_version_from_peers(void) const;
// public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> c_network_session_membership::get_player_incompatible_determinism_mask(long) const;
// public: void c_network_session_membership::validate_peer_host_party_masks(void) const;
// public: void c_network_session_membership::validate_peer_host_party_masks_by_hierarchy(long) const;
// private: struct s_network_session_peer const * c_network_session_membership::get_raw_peer(long) const;
// public: unsigned long c_network_session_membership::get_peer_valid_mask(void) const;
// public: unsigned long c_network_session_membership::get_established_peer_valid_mask(void) const;
// private: bool c_network_session_membership::add_peer_internal(long, enum e_network_session_peer_state, long, struct s_transport_secure_address const *, unsigned __int64, unsigned long);
// private: void c_network_session_membership::remove_peer_internal(long);
// public: void c_network_session_membership::set_peer_address(long, struct s_transport_secure_address const *);
// public: bool c_network_session_membership::all_peers_have_connectivity_information(void) const;
// public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> c_network_session_membership::get_peer_connectivity_information_valid_mask(void) const;
// public: bool c_network_session_membership::peer_has_connectivity_information(long) const;
// public: bool c_network_session_membership::peer_has_full_connectivity(long) const;
// public: bool c_network_session_membership::any_peer_has_full_connectivity(void) const;
// public: bool c_network_session_membership::set_peer_properties(long, struct s_network_message_membership_update_peer_properties const *, bool, unsigned long);
// public: void c_network_session_membership::update_peer_channel_from_peer_and_player_properties(long);
// public: bool c_network_session_membership::is_peer_a_bad_client(long) const;
// public: bool c_network_session_membership::is_peer_speculative_migration_input_banned(long) const;
// public: long c_network_session_membership::get_player_from_identifier(struct s_player_identifier const *) const;
// public: long c_network_session_membership::get_player_from_xuid(unsigned __int64) const;
// public: long c_network_session_membership::find_or_add_player(long, enum e_output_user_index, struct s_player_identifier const *, unsigned __int64, bool, bool, bool, bool, bool);
// public: void c_network_session_membership::remove_player(long);
// private: struct s_network_session_player * c_network_session_membership::add_player_internal(long, struct s_player_identifier const *, long, enum e_output_user_index, long, bool);
// private: struct s_network_session_player * c_network_session_membership::get_raw_player(long);
// private: void c_network_session_membership::remove_player_internal(long);
// public: bool c_network_session_membership::set_player_properties(long, long, enum e_controller_index, class c_flags<enum e_player_configuration_from_client_update_bit, unsigned long, 17, struct s_default_enum_string_resolver>, struct s_player_configuration_from_client const *, bool, unsigned long, struct s_player_voice_settings const *);
// private: void c_network_session_membership::clear_player_properties(long);
// public: void c_network_session_membership::set_player_host_properties(long, struct s_player_configuration_from_host const *);
// public: void c_network_session_membership::update_player_data(long, struct s_player_configuration const *);
// public: bool c_network_session_membership::does_player_exist(struct s_player_identifier const *, long, long) const;
// public: void c_network_session_membership::player_data_updated(void);
// public: unsigned long c_network_session_membership::get_player_valid_mask(void) const;
// public: unsigned long c_network_session_membership::get_established_player_valid_mask(void) const;
// public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> c_network_session_membership::get_established_player_valid_flags(void) const;
// public: long c_network_session_membership::get_first_player(void) const;
// public: long c_network_session_membership::get_next_player(long) const;
// public: void c_network_session_membership::build_membership_update(struct s_network_session_shared_membership const *, struct s_network_session_shared_membership const *, struct s_network_message_membership_update *) const;
// public: bool c_network_session_membership::handle_membership_update(struct s_network_message_membership_update const *);
// public: bool c_network_session_membership::commit_players(enum e_managed_session_synchronization_failure_reason *);
// public: bool c_network_session_membership::peer_property_flag_test(enum e_peer_property_flag_test_type, enum e_network_session_peer_properties_status_flags) const;
// public: bool c_network_session_membership::peer_property_flag_test_any_peer(enum e_network_session_peer_properties_status_flags) const;
// public: void c_network_session_membership::idle(void);
// public: enum e_network_session_type c_network_session_membership::session_type(void) const;
// public: static void c_network_session_membership::apply_peer_properties_update(struct s_network_session_peer_properties *, struct s_network_message_membership_update_peer_properties const *);
// private: void c_network_session_membership::update_player_configuration_from_host(long);
// private: void c_network_session_membership::peer_party_masks_update_peer(long, struct s_network_session_peer_properties *);
// private: void c_network_session_membership::peer_party_masks_remove_peer(long);
// public: static void c_network_session_membership::build_peer_properties_update(struct s_network_session_peer_properties const *, struct s_network_session_peer_properties const *, struct s_network_message_membership_update_peer_properties *);
// public: struct s_player_add_queue_entry const * c_network_session_membership::get_player_add_queue_entry(long) const;
// public: struct s_player_add_queue_entry const * c_network_session_membership::get_first_player_from_player_add_queue(void) const;
// public: long c_network_session_membership::get_peer_index_of_player_in_queue(struct s_player_identifier const *) const;
// public: bool c_network_session_membership::is_player_in_player_add_queue(struct s_player_identifier const *) const;
// public: bool c_network_session_membership::add_player_to_player_add_queue(struct s_player_identifier const *, long, enum e_output_user_index, long, enum e_controller_index, struct s_player_configuration_from_client const *, struct s_player_voice_settings const *);
// public: void c_network_session_membership::remove_player_from_player_add_queue(struct s_player_identifier const *);
// public: void c_network_session_membership::commit_player_from_player_add_queue(struct s_player_identifier const *);
// public: void c_network_session_membership::pack_player_array(void);
// private: long c_network_session_membership::find_player_in_player_add_queue(struct s_player_identifier const *) const;
// public: void c_network_session_membership::verify_membership(void) const;
// public: bool s_player_identifier::is_empty(void) const;
// public: bool s_player_identifier::is_equal(struct s_player_identifier const *) const;
// private: struct s_network_session_player const * c_network_session_membership::get_raw_player(long) const;
// public: void c_network_session_membership::verify_local_state(void) const;
// public: class c_network_channel_manager const * c_network_session::get_channel_manager(void) const;
// public: void c_network_session_membership::dump_membership(struct s_network_session_shared_membership const *) const;
// public: void c_network_session_membership::dump_membership_if_displayed_data_has_changed(struct s_network_session_shared_membership const *, struct s_network_session_shared_membership const *) const;
// char const * network_session_peer_state_get_string(enum e_network_session_peer_state);
// void peer_properties_update_encode(class c_bitstream *, struct s_network_message_membership_update_peer_properties const *);
// bool peer_properties_update_decode(class c_bitstream *, struct s_network_message_membership_update_peer_properties *);
// public: enum e_session_game_start_error c_enum_no_init<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>::operator enum e_session_game_start_error(void) const;
// public: static long s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::get_count(void);
// public: bool c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver> const &) const;
// public: class c_static_string<1024> c_flags_no_init<enum e_voice_player_flag, unsigned char, 7, struct s_default_enum_string_resolver>::to_string(void) const;
// public: bool c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::valid(void) const;
// public: unsigned long c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// public: class c_static_string<1024> c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::to_string(void) const;
// public: class c_static_string<1024> c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::to_string(void) const;
// public: class c_static_string<1024> c_flags_no_init<enum e_player_configuration_from_client_update_bit, unsigned long, 17, struct s_default_enum_string_resolver>::to_string(void) const;
// public: void c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::set(enum e_peer_properties_connection_update, bool);
// unsigned long fast_checksum<struct s_network_session_shared_membership>(unsigned long, struct s_network_session_shared_membership const *);
// public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> const & s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::operator[]<long>(long) const;
// public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> & s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::operator[]<long>(long);
// public: void c_bitstream::write_enum<class c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_enum<class c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>);
// bool operator!=<unsigned __int64>(unsigned __int64const &, enum e_none_sentinel const &);
// public: void c_bitstream::write_flags<class c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>);
// public: void c_bitstream::write_flags<class c_flags<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_enum<class c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_flags<class c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::read_flags<class c_flags<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver> *);
// public: enum e_session_game_start_warning c_enum_no_init<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_session_game_start_warning(void) const;
// public: bool c_enum_no_init<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(char);
// public: bool c_enum_no_init<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>::set_raw_value(char);
// public: unsigned char c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// public: bool c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::valid(void) const;
// public: bool c_flags_no_init<enum e_voice_player_flag, unsigned char, 7, struct s_default_enum_string_resolver>::test(enum e_voice_player_flag) const;
// public: bool c_flags_no_init<enum e_voice_player_flag, unsigned char, 7, struct s_default_enum_string_resolver>::valid(void) const;
// public: unsigned long c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::set_unsafe(unsigned long);
// void prefetch<struct s_network_session_shared_membership>(struct s_network_session_shared_membership const *);
// public: static bool s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::valid<long>(long);
// long required_encoding_bits_for_enum<class c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>);
// long required_encoding_bits_for_enum<class c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver> >(class c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>);
// bool operator==<unsigned __int64>(unsigned __int64const &, enum e_none_sentinel const &);
// public: static enum e_session_game_start_warning c_enum_no_init<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static char c_enum_no_init<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: static enum e_session_game_start_error c_enum_no_init<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static char c_enum_no_init<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// private: static unsigned char c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_dlc_map_pack);
// public: static bool c_flags_no_init<enum e_voice_player_flag, unsigned char, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_voice_player_flag);
// private: static unsigned char c_flags_no_init<enum e_voice_player_flag, unsigned char, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_voice_player_flag);

//public: bool c_network_session_membership::clone_for_connect(class c_network_session_membership const *, class c_network_session *)
//{
//    mangled_ppc("?clone_for_connect@c_network_session_membership@@QAA_NPBV1@PAVc_network_session@@@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//private: void c_network_session_membership::clear(void)
//{
//    mangled_ppc("?clear@c_network_session_membership@@AAAXXZ");
//};

//public: void c_network_session_membership::copy_current_to_transmitted(void)
//{
//    mangled_ppc("?copy_current_to_transmitted@c_network_session_membership@@QAAXXZ");
//};

//public: void c_network_session_membership::set_leader_peer_index(long)
//{
//    mangled_ppc("?set_leader_peer_index@c_network_session_membership@@QAAXJ@Z");
//};

//private: void c_network_session_membership::increment_update(void)
//{
//    mangled_ppc("?increment_update@c_network_session_membership@@AAAXXZ");
//};

//public: void c_network_session_membership::set_slot_counts(long, long, bool)
//{
//    mangled_ppc("?set_slot_counts@c_network_session_membership@@QAAXJJ_N@Z");
//};

//private: class c_network_session * c_network_session_membership::get_session(void)
//{
//    mangled_ppc("?get_session@c_network_session_membership@@AAAPAVc_network_session@@XZ");
//};

//public: void c_network_session_membership::lock_slots(void)
//{
//    mangled_ppc("?lock_slots@c_network_session_membership@@QAAXXZ");
//};

//public: void c_network_session_membership::set_peer_connection_state(long, enum e_network_session_peer_state)
//{
//    mangled_ppc("?set_peer_connection_state@c_network_session_membership@@QAAXJW4e_network_session_peer_state@@@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//public: void c_network_session_membership::reset_membership(void)
//{
//    mangled_ppc("?reset_membership@c_network_session_membership@@QAAXXZ");
//};

//public: void c_network_session_membership::reset_transmitted_membership_state(void)
//{
//    mangled_ppc("?reset_transmitted_membership_state@c_network_session_membership@@QAAXXZ");
//};

//public: void c_network_session_membership::flush_all_local_state(void)
//{
//    mangled_ppc("?flush_all_local_state@c_network_session_membership@@QAAXXZ");
//};

//public: bool c_network_session_membership::add_peer(long, enum e_network_session_peer_state, long, struct s_transport_secure_address const *, unsigned __int64)
//{
//    mangled_ppc("?add_peer@c_network_session_membership@@QAA_NJW4e_network_session_peer_state@@JPBUs_transport_secure_address@@_K@Z");
//};

//public: void c_network_session_membership::remove_peer(long)
//{
//    mangled_ppc("?remove_peer@c_network_session_membership@@QAAXJ@Z");
//};

//private: struct s_network_session_peer * c_network_session_membership::get_raw_peer(long)
//{
//    mangled_ppc("?get_raw_peer@c_network_session_membership@@AAAPAUs_network_session_peer@@J@Z");
//};

//public: unsigned __int64 c_network_session_membership::get_player_xuid(long) const
//{
//    mangled_ppc("?get_player_xuid@c_network_session_membership@@QBA_KJ@Z");
//};

//public: long c_network_session_membership::get_peer_from_managed_channel(long) const
//{
//    mangled_ppc("?get_peer_from_managed_channel@c_network_session_membership@@QBAJJ@Z");
//};

//public: long c_network_session_membership::get_peer_from_incoming_address(struct transport_address const *) const
//{
//    mangled_ppc("?get_peer_from_incoming_address@c_network_session_membership@@QBAJPBUtransport_address@@@Z");
//};

//private: class c_network_session const * c_network_session_membership::get_session(void) const
//{
//    mangled_ppc("?get_session@c_network_session_membership@@ABAPBVc_network_session@@XZ");
//};

//public: long c_network_session_membership::get_peer_from_unique_identifier(struct s_transport_unique_identifier const *) const
//{
//    mangled_ppc("?get_peer_from_unique_identifier@c_network_session_membership@@QBAJPBUs_transport_unique_identifier@@@Z");
//};

//public: long c_network_session_membership::get_peer_from_secure_address(struct s_transport_secure_address const *) const
//{
//    mangled_ppc("?get_peer_from_secure_address@c_network_session_membership@@QBAJPBUs_transport_secure_address@@@Z");
//};

//public: void c_network_session_membership::get_peer_unique_identifier(long, struct s_transport_unique_identifier *) const
//{
//    mangled_ppc("?get_peer_unique_identifier@c_network_session_membership@@QBAXJPAUs_transport_unique_identifier@@@Z");
//};

//public: bool c_network_session_membership::host_exists_at_incoming_address(struct transport_address const *) const
//{
//    mangled_ppc("?host_exists_at_incoming_address@c_network_session_membership@@QBA_NPBUtransport_address@@@Z");
//};

//public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> c_network_session_membership::get_established_peer_valid_flags(void) const
//{
//    mangled_ppc("?get_established_peer_valid_flags@c_network_session_membership@@QBA?AV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: long c_network_session_membership::get_first_peer(void) const
//{
//    mangled_ppc("?get_first_peer@c_network_session_membership@@QBAJXZ");
//};

//public: long c_network_session_membership::get_next_peer(long) const
//{
//    mangled_ppc("?get_next_peer@c_network_session_membership@@QBAJJ@Z");
//};

//public: long c_network_session_membership::get_compatible_determinism_version_from_peers(void) const
//{
//    mangled_ppc("?get_compatible_determinism_version_from_peers@c_network_session_membership@@QBAJXZ");
//};

//public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> c_network_session_membership::get_player_incompatible_determinism_mask(long) const
//{
//    mangled_ppc("?get_player_incompatible_determinism_mask@c_network_session_membership@@QBA?AV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@J@Z");
//};

//public: void c_network_session_membership::validate_peer_host_party_masks(void) const
//{
//    mangled_ppc("?validate_peer_host_party_masks@c_network_session_membership@@QBAXXZ");
//};

//public: void c_network_session_membership::validate_peer_host_party_masks_by_hierarchy(long) const
//{
//    mangled_ppc("?validate_peer_host_party_masks_by_hierarchy@c_network_session_membership@@QBAXJ@Z");
//};

//private: struct s_network_session_peer const * c_network_session_membership::get_raw_peer(long) const
//{
//    mangled_ppc("?get_raw_peer@c_network_session_membership@@ABAPBUs_network_session_peer@@J@Z");
//};

//public: unsigned long c_network_session_membership::get_peer_valid_mask(void) const
//{
//    mangled_ppc("?get_peer_valid_mask@c_network_session_membership@@QBAKXZ");
//};

//public: unsigned long c_network_session_membership::get_established_peer_valid_mask(void) const
//{
//    mangled_ppc("?get_established_peer_valid_mask@c_network_session_membership@@QBAKXZ");
//};

//private: bool c_network_session_membership::add_peer_internal(long, enum e_network_session_peer_state, long, struct s_transport_secure_address const *, unsigned __int64, unsigned long)
//{
//    mangled_ppc("?add_peer_internal@c_network_session_membership@@AAA_NJW4e_network_session_peer_state@@JPBUs_transport_secure_address@@_KK@Z");
//};

//private: void c_network_session_membership::remove_peer_internal(long)
//{
//    mangled_ppc("?remove_peer_internal@c_network_session_membership@@AAAXJ@Z");
//};

//public: void c_network_session_membership::set_peer_address(long, struct s_transport_secure_address const *)
//{
//    mangled_ppc("?set_peer_address@c_network_session_membership@@QAAXJPBUs_transport_secure_address@@@Z");
//};

//public: bool c_network_session_membership::all_peers_have_connectivity_information(void) const
//{
//    mangled_ppc("?all_peers_have_connectivity_information@c_network_session_membership@@QBA_NXZ");
//};

//public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> c_network_session_membership::get_peer_connectivity_information_valid_mask(void) const
//{
//    mangled_ppc("?get_peer_connectivity_information_valid_mask@c_network_session_membership@@QBA?AV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: bool c_network_session_membership::peer_has_connectivity_information(long) const
//{
//    mangled_ppc("?peer_has_connectivity_information@c_network_session_membership@@QBA_NJ@Z");
//};

//public: bool c_network_session_membership::peer_has_full_connectivity(long) const
//{
//    mangled_ppc("?peer_has_full_connectivity@c_network_session_membership@@QBA_NJ@Z");
//};

//public: bool c_network_session_membership::any_peer_has_full_connectivity(void) const
//{
//    mangled_ppc("?any_peer_has_full_connectivity@c_network_session_membership@@QBA_NXZ");
//};

//public: bool c_network_session_membership::set_peer_properties(long, struct s_network_message_membership_update_peer_properties const *, bool, unsigned long)
//{
//    mangled_ppc("?set_peer_properties@c_network_session_membership@@QAA_NJPBUs_network_message_membership_update_peer_properties@@_NK@Z");
//};

//public: void c_network_session_membership::update_peer_channel_from_peer_and_player_properties(long)
//{
//    mangled_ppc("?update_peer_channel_from_peer_and_player_properties@c_network_session_membership@@QAAXJ@Z");
//};

//public: bool c_network_session_membership::is_peer_a_bad_client(long) const
//{
//    mangled_ppc("?is_peer_a_bad_client@c_network_session_membership@@QBA_NJ@Z");
//};

//public: bool c_network_session_membership::is_peer_speculative_migration_input_banned(long) const
//{
//    mangled_ppc("?is_peer_speculative_migration_input_banned@c_network_session_membership@@QBA_NJ@Z");
//};

//public: long c_network_session_membership::get_player_from_identifier(struct s_player_identifier const *) const
//{
//    mangled_ppc("?get_player_from_identifier@c_network_session_membership@@QBAJPBUs_player_identifier@@@Z");
//};

//public: long c_network_session_membership::get_player_from_xuid(unsigned __int64) const
//{
//    mangled_ppc("?get_player_from_xuid@c_network_session_membership@@QBAJ_K@Z");
//};

//public: long c_network_session_membership::find_or_add_player(long, enum e_output_user_index, struct s_player_identifier const *, unsigned __int64, bool, bool, bool, bool, bool)
//{
//    mangled_ppc("?find_or_add_player@c_network_session_membership@@QAAJJW4e_output_user_index@@PBUs_player_identifier@@_K_N3333@Z");
//};

//public: void c_network_session_membership::remove_player(long)
//{
//    mangled_ppc("?remove_player@c_network_session_membership@@QAAXJ@Z");
//};

//private: struct s_network_session_player * c_network_session_membership::add_player_internal(long, struct s_player_identifier const *, long, enum e_output_user_index, long, bool)
//{
//    mangled_ppc("?add_player_internal@c_network_session_membership@@AAAPAUs_network_session_player@@JPBUs_player_identifier@@JW4e_output_user_index@@J_N@Z");
//};

//private: struct s_network_session_player * c_network_session_membership::get_raw_player(long)
//{
//    mangled_ppc("?get_raw_player@c_network_session_membership@@AAAPAUs_network_session_player@@J@Z");
//};

//private: void c_network_session_membership::remove_player_internal(long)
//{
//    mangled_ppc("?remove_player_internal@c_network_session_membership@@AAAXJ@Z");
//};

//public: bool c_network_session_membership::set_player_properties(long, long, enum e_controller_index, class c_flags<enum e_player_configuration_from_client_update_bit, unsigned long, 17, struct s_default_enum_string_resolver>, struct s_player_configuration_from_client const *, bool, unsigned long, struct s_player_voice_settings const *)
//{
//    mangled_ppc("?set_player_properties@c_network_session_membership@@QAA_NJJW4e_controller_index@@V?$c_flags@W4e_player_configuration_from_client_update_bit@@K$0BB@Us_default_enum_string_resolver@@@@PBUs_player_configuration_from_client@@_NKPBUs_player_voice_settings@@@Z");
//};

//private: void c_network_session_membership::clear_player_properties(long)
//{
//    mangled_ppc("?clear_player_properties@c_network_session_membership@@AAAXJ@Z");
//};

//public: void c_network_session_membership::set_player_host_properties(long, struct s_player_configuration_from_host const *)
//{
//    mangled_ppc("?set_player_host_properties@c_network_session_membership@@QAAXJPBUs_player_configuration_from_host@@@Z");
//};

//public: void c_network_session_membership::update_player_data(long, struct s_player_configuration const *)
//{
//    mangled_ppc("?update_player_data@c_network_session_membership@@QAAXJPBUs_player_configuration@@@Z");
//};

//public: bool c_network_session_membership::does_player_exist(struct s_player_identifier const *, long, long) const
//{
//    mangled_ppc("?does_player_exist@c_network_session_membership@@QBA_NPBUs_player_identifier@@JJ@Z");
//};

//public: void c_network_session_membership::player_data_updated(void)
//{
//    mangled_ppc("?player_data_updated@c_network_session_membership@@QAAXXZ");
//};

//public: unsigned long c_network_session_membership::get_player_valid_mask(void) const
//{
//    mangled_ppc("?get_player_valid_mask@c_network_session_membership@@QBAKXZ");
//};

//public: unsigned long c_network_session_membership::get_established_player_valid_mask(void) const
//{
//    mangled_ppc("?get_established_player_valid_mask@c_network_session_membership@@QBAKXZ");
//};

//public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> c_network_session_membership::get_established_player_valid_flags(void) const
//{
//    mangled_ppc("?get_established_player_valid_flags@c_network_session_membership@@QBA?AV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//public: long c_network_session_membership::get_first_player(void) const
//{
//    mangled_ppc("?get_first_player@c_network_session_membership@@QBAJXZ");
//};

//public: long c_network_session_membership::get_next_player(long) const
//{
//    mangled_ppc("?get_next_player@c_network_session_membership@@QBAJJ@Z");
//};

//public: void c_network_session_membership::build_membership_update(struct s_network_session_shared_membership const *, struct s_network_session_shared_membership const *, struct s_network_message_membership_update *) const
//{
//    mangled_ppc("?build_membership_update@c_network_session_membership@@QBAXPBUs_network_session_shared_membership@@0PAUs_network_message_membership_update@@@Z");
//};

//public: bool c_network_session_membership::handle_membership_update(struct s_network_message_membership_update const *)
//{
//    mangled_ppc("?handle_membership_update@c_network_session_membership@@QAA_NPBUs_network_message_membership_update@@@Z");
//};

//public: bool c_network_session_membership::commit_players(enum e_managed_session_synchronization_failure_reason *)
//{
//    mangled_ppc("?commit_players@c_network_session_membership@@QAA_NPAW4e_managed_session_synchronization_failure_reason@@@Z");
//};

//public: bool c_network_session_membership::peer_property_flag_test(enum e_peer_property_flag_test_type, enum e_network_session_peer_properties_status_flags) const
//{
//    mangled_ppc("?peer_property_flag_test@c_network_session_membership@@QBA_NW4e_peer_property_flag_test_type@@W4e_network_session_peer_properties_status_flags@@@Z");
//};

//public: bool c_network_session_membership::peer_property_flag_test_any_peer(enum e_network_session_peer_properties_status_flags) const
//{
//    mangled_ppc("?peer_property_flag_test_any_peer@c_network_session_membership@@QBA_NW4e_network_session_peer_properties_status_flags@@@Z");
//};

//public: void c_network_session_membership::idle(void)
//{
//    mangled_ppc("?idle@c_network_session_membership@@QAAXXZ");
//};

//public: enum e_network_session_type c_network_session_membership::session_type(void) const
//{
//    mangled_ppc("?session_type@c_network_session_membership@@QBA?AW4e_network_session_type@@XZ");
//};

//public: static void c_network_session_membership::apply_peer_properties_update(struct s_network_session_peer_properties *, struct s_network_message_membership_update_peer_properties const *)
//{
//    mangled_ppc("?apply_peer_properties_update@c_network_session_membership@@SAXPAUs_network_session_peer_properties@@PBUs_network_message_membership_update_peer_properties@@@Z");
//};

//private: void c_network_session_membership::update_player_configuration_from_host(long)
//{
//    mangled_ppc("?update_player_configuration_from_host@c_network_session_membership@@AAAXJ@Z");
//};

//private: void c_network_session_membership::peer_party_masks_update_peer(long, struct s_network_session_peer_properties *)
//{
//    mangled_ppc("?peer_party_masks_update_peer@c_network_session_membership@@AAAXJPAUs_network_session_peer_properties@@@Z");
//};

//private: void c_network_session_membership::peer_party_masks_remove_peer(long)
//{
//    mangled_ppc("?peer_party_masks_remove_peer@c_network_session_membership@@AAAXJ@Z");
//};

//public: static void c_network_session_membership::build_peer_properties_update(struct s_network_session_peer_properties const *, struct s_network_session_peer_properties const *, struct s_network_message_membership_update_peer_properties *)
//{
//    mangled_ppc("?build_peer_properties_update@c_network_session_membership@@SAXPBUs_network_session_peer_properties@@0PAUs_network_message_membership_update_peer_properties@@@Z");
//};

//public: struct s_player_add_queue_entry const * c_network_session_membership::get_player_add_queue_entry(long) const
//{
//    mangled_ppc("?get_player_add_queue_entry@c_network_session_membership@@QBAPBUs_player_add_queue_entry@@J@Z");
//};

//public: struct s_player_add_queue_entry const * c_network_session_membership::get_first_player_from_player_add_queue(void) const
//{
//    mangled_ppc("?get_first_player_from_player_add_queue@c_network_session_membership@@QBAPBUs_player_add_queue_entry@@XZ");
//};

//public: long c_network_session_membership::get_peer_index_of_player_in_queue(struct s_player_identifier const *) const
//{
//    mangled_ppc("?get_peer_index_of_player_in_queue@c_network_session_membership@@QBAJPBUs_player_identifier@@@Z");
//};

//public: bool c_network_session_membership::is_player_in_player_add_queue(struct s_player_identifier const *) const
//{
//    mangled_ppc("?is_player_in_player_add_queue@c_network_session_membership@@QBA_NPBUs_player_identifier@@@Z");
//};

//public: bool c_network_session_membership::add_player_to_player_add_queue(struct s_player_identifier const *, long, enum e_output_user_index, long, enum e_controller_index, struct s_player_configuration_from_client const *, struct s_player_voice_settings const *)
//{
//    mangled_ppc("?add_player_to_player_add_queue@c_network_session_membership@@QAA_NPBUs_player_identifier@@JW4e_output_user_index@@JW4e_controller_index@@PBUs_player_configuration_from_client@@PBUs_player_voice_settings@@@Z");
//};

//public: void c_network_session_membership::remove_player_from_player_add_queue(struct s_player_identifier const *)
//{
//    mangled_ppc("?remove_player_from_player_add_queue@c_network_session_membership@@QAAXPBUs_player_identifier@@@Z");
//};

//public: void c_network_session_membership::commit_player_from_player_add_queue(struct s_player_identifier const *)
//{
//    mangled_ppc("?commit_player_from_player_add_queue@c_network_session_membership@@QAAXPBUs_player_identifier@@@Z");
//};

//public: void c_network_session_membership::pack_player_array(void)
//{
//    mangled_ppc("?pack_player_array@c_network_session_membership@@QAAXXZ");
//};

//private: long c_network_session_membership::find_player_in_player_add_queue(struct s_player_identifier const *) const
//{
//    mangled_ppc("?find_player_in_player_add_queue@c_network_session_membership@@ABAJPBUs_player_identifier@@@Z");
//};

//public: void c_network_session_membership::verify_membership(void) const
//{
//    mangled_ppc("?verify_membership@c_network_session_membership@@QBAXXZ");
//};

//public: bool s_player_identifier::is_empty(void) const
//{
//    mangled_ppc("?is_empty@s_player_identifier@@QBA_NXZ");
//};

//public: bool s_player_identifier::is_equal(struct s_player_identifier const *) const
//{
//    mangled_ppc("?is_equal@s_player_identifier@@QBA_NPBU1@@Z");
//};

//private: struct s_network_session_player const * c_network_session_membership::get_raw_player(long) const
//{
//    mangled_ppc("?get_raw_player@c_network_session_membership@@ABAPBUs_network_session_player@@J@Z");
//};

//public: void c_network_session_membership::verify_local_state(void) const
//{
//    mangled_ppc("?verify_local_state@c_network_session_membership@@QBAXXZ");
//};

//public: class c_network_channel_manager const * c_network_session::get_channel_manager(void) const
//{
//    mangled_ppc("?get_channel_manager@c_network_session@@QBAPBVc_network_channel_manager@@XZ");
//};

//public: void c_network_session_membership::dump_membership(struct s_network_session_shared_membership const *) const
//{
//    mangled_ppc("?dump_membership@c_network_session_membership@@QBAXPBUs_network_session_shared_membership@@@Z");
//};

//public: void c_network_session_membership::dump_membership_if_displayed_data_has_changed(struct s_network_session_shared_membership const *, struct s_network_session_shared_membership const *) const
//{
//    mangled_ppc("?dump_membership_if_displayed_data_has_changed@c_network_session_membership@@QBAXPBUs_network_session_shared_membership@@0@Z");
//};

//char const * network_session_peer_state_get_string(enum e_network_session_peer_state)
//{
//    mangled_ppc("?network_session_peer_state_get_string@@YAPBDW4e_network_session_peer_state@@@Z");
//};

//void peer_properties_update_encode(class c_bitstream *, struct s_network_message_membership_update_peer_properties const *)
//{
//    mangled_ppc("?peer_properties_update_encode@@YAXPAVc_bitstream@@PBUs_network_message_membership_update_peer_properties@@@Z");
//};

//bool peer_properties_update_decode(class c_bitstream *, struct s_network_message_membership_update_peer_properties *)
//{
//    mangled_ppc("?peer_properties_update_decode@@YA_NPAVc_bitstream@@PAUs_network_message_membership_update_peer_properties@@@Z");
//};

//public: enum e_session_game_start_error c_enum_no_init<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>::operator enum e_session_game_start_error(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_session_game_start_error@@D$0A@$0EJ@Us_default_enum_string_resolver@@@@QBA?AW4e_session_game_start_error@@XZ");
//};

//public: static long s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@V?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@$01@@SAJXZ");
//};

//public: bool c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@W4e_dlc_map_pack@@E$05Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: class c_static_string<1024> c_flags_no_init<enum e_voice_player_flag, unsigned char, 7, struct s_default_enum_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_flags_no_init@W4e_voice_player_flag@@E$06Us_default_enum_string_resolver@@@@QBA?AV?$c_static_string@$0EAA@@@XZ");
//};

//public: bool c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_network_session_peer_properties_status_flags@@K$0BI@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: unsigned long c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_network_session_peer_properties_status_flags@@K$0BI@Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: void c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_network_session_peer_properties_status_flags@@K$0BI@Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//public: class c_static_string<1024> c_flags_no_init<enum e_network_session_peer_properties_status_flags, unsigned long, 24, struct s_default_enum_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_flags_no_init@W4e_network_session_peer_properties_status_flags@@K$0BI@Us_default_enum_string_resolver@@@@QBA?AV?$c_static_string@$0EAA@@@XZ");
//};

//public: class c_static_string<1024> c_flags_no_init<long, unsigned long, 16, struct s_default_enum_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_flags_no_init@JK$0BA@Us_default_enum_string_resolver@@@@QBA?AV?$c_static_string@$0EAA@@@XZ");
//};

//public: class c_static_string<1024> c_flags_no_init<enum e_player_configuration_from_client_update_bit, unsigned long, 17, struct s_default_enum_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_flags_no_init@W4e_player_configuration_from_client_update_bit@@K$0BB@Us_default_enum_string_resolver@@@@QBA?AV?$c_static_string@$0EAA@@@XZ");
//};

//public: void c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::set(enum e_peer_properties_connection_update, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@QAAXW4e_peer_properties_connection_update@@_N@Z");
//};

//unsigned long fast_checksum<struct s_network_session_shared_membership>(unsigned long, struct s_network_session_shared_membership const *)
//{
//    mangled_ppc("??$fast_checksum@Us_network_session_shared_membership@@@@YAKKPBUs_network_session_shared_membership@@@Z");
//};

//public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> const & s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@$01@@QBAABV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@J@Z");
//};

//public: class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver> & s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@$01@@QAAAAV?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@J@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_session_game_start_warning@@D$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_session_game_start_warning@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_session_game_start_error@@D$0A@$0EJ@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_session_game_start_error@@D$0A@$0EJ@Us_default_enum_string_resolver@@@@@Z");
//};

//bool operator!=<unsigned __int64>(unsigned __int64const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9_K@@YA_NAB_KABW4e_none_sentinel@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags_no_init@W4e_dlc_map_pack@@E$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags_no_init@W4e_dlc_map_pack@@E$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_session_game_start_warning@@D$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_session_game_start_warning@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_session_game_start_error@@D$0A@$0EJ@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_session_game_start_error@@D$0A@$0EJ@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver> >(char const *, class c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags_no_init@W4e_dlc_map_pack@@E$05Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags_no_init@W4e_dlc_map_pack@@E$05Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_session_game_start_warning c_enum_no_init<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_session_game_start_warning(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_session_game_start_warning@@D$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_session_game_start_warning@@XZ");
//};

//public: bool c_enum_no_init<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_session_game_start_warning@@D$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_session_game_start_warning@@D$0A@$02Us_default_enum_string_resolver@@@@QAAXD@Z");
//};

//public: bool c_enum_no_init<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_session_game_start_error@@D$0A@$0EJ@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>::set_raw_value(char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_session_game_start_error@@D$0A@$0EJ@Us_default_enum_string_resolver@@@@QAAXD@Z");
//};

//public: unsigned char c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_dlc_map_pack@@E$05Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_dlc_map_pack@@E$05Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: bool c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_dlc_map_pack@@E$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_voice_player_flag, unsigned char, 7, struct s_default_enum_string_resolver>::test(enum e_voice_player_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_voice_player_flag@@E$06Us_default_enum_string_resolver@@@@QBA_NW4e_voice_player_flag@@@Z");
//};

//public: bool c_flags_no_init<enum e_voice_player_flag, unsigned char, 7, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_voice_player_flag@@E$06Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: unsigned long c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@QBAKXZ");
//};

//public: void c_flags_no_init<enum e_peer_properties_connection_update, unsigned long, 5, struct s_default_enum_string_resolver>::set_unsafe(unsigned long)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_peer_properties_connection_update@@K$04Us_default_enum_string_resolver@@@@QAAXK@Z");
//};

//void prefetch<struct s_network_session_shared_membership>(struct s_network_session_shared_membership const *)
//{
//    mangled_ppc("??$prefetch@Us_network_session_shared_membership@@@@YAXPBUs_network_session_shared_membership@@@Z");
//};

//public: static bool s_static_array<class c_flags<long, unsigned long, 16, struct s_default_enum_string_resolver>, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_flags@JK$0BA@Us_default_enum_string_resolver@@@@$01@@SA_NJ@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_session_game_start_warning@@D$0A@$02Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_session_game_start_warning@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver> >(class c_enum<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_session_game_start_error@@D$0A@$0EJ@Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_session_game_start_error@@D$0A@$0EJ@Us_default_enum_string_resolver@@@@@Z");
//};

//bool operator==<unsigned __int64>(unsigned __int64const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8_K@@YA_NAB_KABW4e_none_sentinel@@@Z");
//};

//public: static enum e_session_game_start_warning c_enum_no_init<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_session_game_start_warning@@D$0A@$02Us_default_enum_string_resolver@@@@SA?AW4e_session_game_start_warning@@H@Z");
//};

//public: static char c_enum_no_init<enum e_session_game_start_warning, char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_session_game_start_warning@@D$0A@$02Us_default_enum_string_resolver@@@@SADK@Z");
//};

//public: static enum e_session_game_start_error c_enum_no_init<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_session_game_start_error@@D$0A@$0EJ@Us_default_enum_string_resolver@@@@SA?AW4e_session_game_start_error@@H@Z");
//};

//public: static char c_enum_no_init<enum e_session_game_start_error, char, 0, 73, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_session_game_start_error@@D$0A@$0EJ@Us_default_enum_string_resolver@@@@SADK@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_dlc_map_pack@@E$05Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_dlc_map_pack, unsigned char, 6, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_dlc_map_pack)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_dlc_map_pack@@E$05Us_default_enum_string_resolver@@@@CAEW4e_dlc_map_pack@@@Z");
//};

//public: static bool c_flags_no_init<enum e_voice_player_flag, unsigned char, 7, struct s_default_enum_string_resolver>::valid_bit(enum e_voice_player_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_voice_player_flag@@E$06Us_default_enum_string_resolver@@@@SA_NW4e_voice_player_flag@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_voice_player_flag, unsigned char, 7, struct s_default_enum_string_resolver>::flag_size_type(enum e_voice_player_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_voice_player_flag@@E$06Us_default_enum_string_resolver@@@@CAEW4e_voice_player_flag@@@Z");
//};

