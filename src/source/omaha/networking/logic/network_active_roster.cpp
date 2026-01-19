/* ---------- headers */

#include "omaha\networking\logic\network_active_roster.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_online_party_user, 32>::k_element_count; // "?k_element_count@?$s_static_array@Us_online_party_user@@$0CA@@@2JB"
// public: static enum e_network_active_roster_player_remote_data_flags const c_flags_no_init<enum e_network_active_roster_player_remote_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_network_active_roster_player_remote_data_flags@@E$02Us_default_enum_string_resolver@@@@2W4e_network_active_roster_player_remote_data_flags@@B"
// public: static enum e_network_active_roster_player_internal_flags const c_flags_no_init<enum e_network_active_roster_player_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_network_active_roster_player_internal_flags@@E$02Us_default_enum_string_resolver@@@@2W4e_network_active_roster_player_internal_flags@@B"
// public: static enum e_network_active_roster_qos_flags const c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_network_active_roster_qos_flags@@E$00Us_default_enum_string_resolver@@@@2W4e_network_active_roster_qos_flags@@B"
// public: static long const s_static_array<struct s_network_active_roster_qos, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_active_roster_qos@@$03@@2JB"
// public: static long const s_static_array<struct s_network_active_roster_player_internal, 101>::k_element_count; // "?k_element_count@?$s_static_array@Us_network_active_roster_player_internal@@$0GF@@@2JB"
// public: static long const s_static_array<unsigned __int64, 101>::k_element_count; // "?k_element_count@?$s_static_array@_K$0GF@@@2JB"
// class c_network_active_roster_player_source_interface const **g_player_sources; // "?g_player_sources@@3PAPBVc_network_active_roster_player_source_interface@@A"
// class c_friends_active_roster_player_source g_friends_active_roster_player_source; // "?g_friends_active_roster_player_source@@3Vc_friends_active_roster_player_source@@A"
// class c_xbox_live_party_active_roster_player_source g_xbox_live_party_active_roster_player_source; // "?g_xbox_live_party_active_roster_player_source@@3Vc_xbox_live_party_active_roster_player_source@@A"

// bool network_active_roster_initialize(void);
// void network_active_roster_memory_initialize(enum e_map_memory_configuration);
// void network_active_roster_memory_dispose(void);
// void network_active_roster_update(void);
// void network_active_roster_dispose(void);
// bool network_active_roster_set_mode(enum e_controller_index, enum e_network_active_roster_mode);
// bool network_active_roster_get_mode(enum e_controller_index *, enum e_network_active_roster_mode *);
// bool network_active_roster_get_player_count(long *);
// long network_active_roster_get_player_index_by_xuid(unsigned __int64);
// bool network_active_roster_get_player(long, struct s_network_active_roster_player *);
// bool network_active_roster_get_player_by_xuid(unsigned __int64, struct s_network_active_roster_player *);
// struct s_network_session_status_data const * network_active_roster_get_player_squad_status(long);
// struct s_network_session_status_data const * network_active_roster_get_player_squad_status_by_xuid(unsigned __int64);
// struct s_lsp_presence_player_query_player_response_data const * network_active_roster_get_player_lsp_presence(long);
// struct s_lsp_presence_player_query_player_response_data const * network_active_roster_get_player_lsp_presence_by_xuid(unsigned __int64);
// bool network_active_roster_set_player_detail_level(long, enum e_active_roster_player_detail_level);
// long network_active_roster_lsp_presence_query_count(void);
// long network_active_roster_live_session_query_count(void);
// long network_active_roster_live_qos_active_count(void);
// public: bool c_network_active_roster_player_remote_data_base::is_valid(void) const;
// public: bool c_network_active_roster_player_remote_data_base::is_update_desired(void) const;
// public: unsigned long c_network_active_roster_player_remote_data_base::get_valid_time(void) const;
// public: bool c_network_active_roster_player_remote_data_base::last_update_failed(void) const;
// public: unsigned long c_network_active_roster_player_remote_data_base::get_first_update_failed_time(void) const;
// public: unsigned long c_network_active_roster_player_remote_data_base::get_last_update_failed_time(void) const;
// public: unsigned long c_network_active_roster_player_remote_data_base::get_changed_time(void) const;
// public: long c_network_active_roster_player_remote_data_base::get_last_update_failed_count(void) const;
// public: enum e_network_active_roster_player_remote_data_failure_type c_network_active_roster_player_remote_data_base::get_last_update_failed_type(void) const;
// public: void c_network_active_roster_player_remote_data_base::initialize(void);
// protected: void c_network_active_roster_player_remote_data_base::set_valid(bool);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// protected: void c_network_active_roster_player_remote_data_base::notify_changed(void);
// public: void c_network_active_roster_player_remote_data_base::set_last_update_failed(bool, enum e_network_active_roster_player_remote_data_failure_type);
// public: void c_network_active_roster_player_remote_data_base::set_update_desired(bool);
// public: virtual long c_friends_active_roster_player_source::get_player_count(void) const;
// public: virtual void c_friends_active_roster_player_source::get_player(long, struct s_network_active_roster_player_source_data *) const;
// public: virtual enum e_network_active_roster_mode c_friends_active_roster_player_source::get_mode(void) const;
// public: virtual long c_xbox_live_party_active_roster_player_source::get_player_count(void) const;
// public: virtual void c_xbox_live_party_active_roster_player_source::get_player(long, struct s_network_active_roster_player_source_data *) const;
// public: virtual enum e_network_active_roster_mode c_xbox_live_party_active_roster_player_source::get_mode(void) const;
// void network_active_roster_initialize_internal(void);
// void network_active_roster_initialize_state(void);
// void network_active_roster_player_initialize_remote_data(long);
// void network_active_roster_dispose_internal(void);
// void network_active_roster_cleanup(void);
// bool network_active_roster_player_session_id_valid(struct s_network_active_roster_player_internal const *);
// void network_active_roster_player_get_session_id(struct s_network_active_roster_player_internal const *, struct s_transport_secure_identifier *);
// bool network_active_roster_player_session_id_available(struct s_network_active_roster_player_internal const *);
// bool network_active_roster_player_in_current_title(struct s_network_active_roster_player_internal *);
// void network_active_roster_set_mode_internal(enum e_controller_index, enum e_network_active_roster_mode);
// void network_active_roster_update_active_controller(void);
// void network_active_roster_update_inactive_controllers(void);
// void network_active_roster_update_roster_membership(void);
// void network_active_roster_update_player_with_queued_join_data(struct s_network_active_roster_player_internal *, struct s_network_active_roster_outgoing_join_session_data const *, enum e_network_active_roster_outgoing_join_update_type, bool);
// void network_active_roster_update_roster(void);
// void network_active_roster_update_live_presence(void);
// void network_active_roster_handle_player_session_id_change(long);
// void network_active_roster_update_live_sessions(void);
// void network_active_roster_update_live_sessions_search_results(void);
// void network_active_roster_update_live_sessions_search(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// void network_active_roster_update_bnet_presence(void);
// void network_active_roster_update_lsp_query_results(void);
// public: s_lsp_presence_player_query_response_data::s_lsp_presence_player_query_response_data(void);
// public: s_static_array<struct s_lsp_presence_player_query_player_response_data, 16>::s_static_array<struct s_lsp_presence_player_query_player_response_data, 16>(void);
// void network_active_roster_update_lsp_query_initiation(void);
// void network_active_roster_update_live_qos(void);
// void network_active_roster_update_live_qos_results(void);
// void network_active_roster_update_live_qos_search(void);
// void network_active_roster_update_player_desires(struct s_network_active_roster_player_internal *);
// void network_active_roster_update_player_for_live_presence(struct s_network_active_roster_player_internal *);
// void network_active_roster_update_player_for_live_sessions(struct s_network_active_roster_player_internal *);
// void network_active_roster_update_player_for_lsp_presence(struct s_network_active_roster_player_internal *);
// void network_active_roster_update_player_for_live_qos(struct s_network_active_roster_player_internal *);
// class c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver> network_active_roster_get_online_friend_state_flags(struct s_online_friend const *);
// class c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver> network_active_roster_get_online_party_user_state_flags(struct s_online_party_user const *);
// class c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver> network_active_roster_get_online_presence_state_flags(struct s_online_presence const *);
// public: c_network_active_roster_qos_pool::c_network_active_roster_qos_pool(void);
// public: s_static_array<struct s_network_active_roster_qos, 4>::s_static_array<struct s_network_active_roster_qos, 4>(void);
// public: s_network_active_roster_qos::s_network_active_roster_qos(void);
// public: void c_network_active_roster_qos_pool::initialize(void);
// public: void c_network_active_roster_qos_pool::dispose(void);
// public: long c_network_active_roster_qos_pool::get_first_active_index(void) const;
// public: long c_network_active_roster_qos_pool::get_next_active_index(long) const;
// public: long c_network_active_roster_qos_pool::get_qos_task_index(long) const;
// public: struct s_transport_secure_identifier c_network_active_roster_qos_pool::get_qos_session_id(long) const;
// public: bool c_network_active_roster_qos_pool::qos_creation_allowed(void);
// public: long c_network_active_roster_qos_pool::get_qos_active_count(void) const;
// public: bool c_network_active_roster_qos_pool::any_qos_active_to_session_id(struct s_transport_secure_identifier const *) const;
// public: bool c_network_active_roster_qos_pool::allocate_qos(struct s_transport_qos_target const *);
// public: void c_network_active_roster_qos_pool::dispose_qos(long);
// private: void c_network_active_roster_qos_pool::initialize_element(long);
// private: void c_network_active_roster_qos_pool::dispose_element(long);
// private: bool c_network_active_roster_qos_pool::is_active(long) const;
// private: unsigned long c_network_active_roster_qos_pool::get_time_active(long) const;
// private: long c_network_active_roster_qos_pool::get_available_index(bool);
// public: void s_static_array<unsigned __int64, 16>::set_memory(long);
// public: static long s_static_array<struct s_network_active_roster_qos, 4>::get_count(void);
// public: static long s_static_array<struct s_network_active_roster_player_internal, 101>::get_count(void);
// public: void s_static_array<struct s_network_active_roster_player_internal, 101>::set_memory(long);
// public: unsigned __int64* s_static_array<unsigned __int64, 101>::get_elements(void);
// public: void s_static_array<unsigned __int64, 101>::set_memory(long);
// public: void s_static_array<struct s_transport_secure_identifier, 16>::set_memory(long);
// public: void c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver>::clear(void);
// public: void c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_player_live_state_flags, bool);
// public: void c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_player_flags, bool);
// public: void c_flags_no_init<enum e_network_active_roster_player_remote_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_network_active_roster_player_remote_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_player_remote_data_flags) const;
// public: void c_flags_no_init<enum e_network_active_roster_player_remote_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_player_remote_data_flags, bool);
// public: bool c_flags_no_init<enum e_network_active_roster_player_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_player_internal_flags) const;
// public: void c_flags_no_init<enum e_network_active_roster_player_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_player_internal_flags, bool);
// public: struct s_online_presence const * c_network_active_roster_player_remote_data<struct s_online_presence>::get_data(void) const;
// public: void c_network_active_roster_player_remote_data<struct s_online_presence>::set_data(struct s_online_presence const *);
// public: struct s_online_session_search_by_id_result const * c_network_active_roster_player_remote_data<struct s_online_session_search_by_id_result>::get_data(void) const;
// public: void c_network_active_roster_player_remote_data<struct s_online_session_search_by_id_result>::set_data(struct s_online_session_search_by_id_result const *);
// public: struct s_lsp_presence_player_query_player_response_data const * c_network_active_roster_player_remote_data<struct s_lsp_presence_player_query_player_response_data>::get_data(void) const;
// public: void c_network_active_roster_player_remote_data<struct s_lsp_presence_player_query_player_response_data>::set_data(struct s_lsp_presence_player_query_player_response_data const *);
// public: struct s_network_session_status_data const * c_network_active_roster_player_remote_data<struct s_network_session_status_data>::get_data(void) const;
// public: void c_network_active_roster_player_remote_data<struct s_network_session_status_data>::set_data(struct s_network_session_status_data const *);
// public: bool c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_qos_flags) const;
// public: void c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_qos_flags, bool);
// public: c_flags<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::test(long) const;
// public: void c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::set(long, bool);
// public: struct s_network_active_roster_player_internal & s_static_array<struct s_network_active_roster_player_internal, 101>::operator[]<long>(long);
// public: struct s_online_party_user & s_static_array<struct s_online_party_user, 32>::operator[]<long>(long);
// public: unsigned __int64& s_static_array<unsigned __int64, 101>::operator[]<long>(long);
// public: struct s_transport_secure_identifier & s_static_array<struct s_transport_secure_identifier, 16>::operator[]<long>(long);
// public: struct s_lsp_presence_player_query_player_response_data & s_static_array<struct s_lsp_presence_player_query_player_response_data, 16>::operator[]<long>(long);
// public: struct s_network_active_roster_qos const & s_static_array<struct s_network_active_roster_qos, 4>::operator[]<long>(long) const;
// public: struct s_network_active_roster_qos & s_static_array<struct s_network_active_roster_qos, 4>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum e_network_active_roster_player_remote_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_player_remote_data_flags);
// private: static unsigned char c_flags_no_init<enum e_network_active_roster_player_remote_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_player_remote_data_flags);
// public: static bool c_flags_no_init<enum e_network_active_roster_player_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_player_internal_flags);
// private: static unsigned char c_flags_no_init<enum e_network_active_roster_player_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_player_internal_flags);
// public: void c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_qos_flags);
// private: static unsigned char c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_qos_flags);
// public: static bool c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::valid_bit(long);
// private: static unsigned short c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::flag_size_type(long);
// public: static bool s_static_array<struct s_network_active_roster_player_internal, 101>::valid<long>(long);
// public: static bool s_static_array<struct s_online_party_user, 32>::valid<long>(long);
// public: static bool s_static_array<unsigned __int64, 101>::valid<long>(long);
// public: static bool s_static_array<struct s_transport_secure_identifier, 16>::valid<long>(long);
// public: static bool s_static_array<struct s_lsp_presence_player_query_player_response_data, 16>::valid<long>(long);
// public: static bool s_static_array<struct s_network_active_roster_qos, 4>::valid<long>(long);
// private: static unsigned char c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_active_roster_qos_flags);
// public: c_friends_active_roster_player_source::c_friends_active_roster_player_source(void);
// public: c_network_active_roster_player_source_interface::c_network_active_roster_player_source_interface(void);
// public: c_xbox_live_party_active_roster_player_source::c_xbox_live_party_active_roster_player_source(void);

//bool network_active_roster_initialize(void)
//{
//    mangled_ppc("?network_active_roster_initialize@@YA_NXZ");
//};

//void network_active_roster_memory_initialize(enum e_map_memory_configuration)
//{
//    mangled_ppc("?network_active_roster_memory_initialize@@YAXW4e_map_memory_configuration@@@Z");
//};

//void network_active_roster_memory_dispose(void)
//{
//    mangled_ppc("?network_active_roster_memory_dispose@@YAXXZ");
//};

//void network_active_roster_update(void)
//{
//    mangled_ppc("?network_active_roster_update@@YAXXZ");
//};

//void network_active_roster_dispose(void)
//{
//    mangled_ppc("?network_active_roster_dispose@@YAXXZ");
//};

//bool network_active_roster_set_mode(enum e_controller_index, enum e_network_active_roster_mode)
//{
//    mangled_ppc("?network_active_roster_set_mode@@YA_NW4e_controller_index@@W4e_network_active_roster_mode@@@Z");
//};

//bool network_active_roster_get_mode(enum e_controller_index *, enum e_network_active_roster_mode *)
//{
//    mangled_ppc("?network_active_roster_get_mode@@YA_NPAW4e_controller_index@@PAW4e_network_active_roster_mode@@@Z");
//};

//bool network_active_roster_get_player_count(long *)
//{
//    mangled_ppc("?network_active_roster_get_player_count@@YA_NPAJ@Z");
//};

//long network_active_roster_get_player_index_by_xuid(unsigned __int64)
//{
//    mangled_ppc("?network_active_roster_get_player_index_by_xuid@@YAJ_K@Z");
//};

//bool network_active_roster_get_player(long, struct s_network_active_roster_player *)
//{
//    mangled_ppc("?network_active_roster_get_player@@YA_NJPAUs_network_active_roster_player@@@Z");
//};

//bool network_active_roster_get_player_by_xuid(unsigned __int64, struct s_network_active_roster_player *)
//{
//    mangled_ppc("?network_active_roster_get_player_by_xuid@@YA_N_KPAUs_network_active_roster_player@@@Z");
//};

//struct s_network_session_status_data const * network_active_roster_get_player_squad_status(long)
//{
//    mangled_ppc("?network_active_roster_get_player_squad_status@@YAPBUs_network_session_status_data@@J@Z");
//};

//struct s_network_session_status_data const * network_active_roster_get_player_squad_status_by_xuid(unsigned __int64)
//{
//    mangled_ppc("?network_active_roster_get_player_squad_status_by_xuid@@YAPBUs_network_session_status_data@@_K@Z");
//};

//struct s_lsp_presence_player_query_player_response_data const * network_active_roster_get_player_lsp_presence(long)
//{
//    mangled_ppc("?network_active_roster_get_player_lsp_presence@@YAPBUs_lsp_presence_player_query_player_response_data@@J@Z");
//};

//struct s_lsp_presence_player_query_player_response_data const * network_active_roster_get_player_lsp_presence_by_xuid(unsigned __int64)
//{
//    mangled_ppc("?network_active_roster_get_player_lsp_presence_by_xuid@@YAPBUs_lsp_presence_player_query_player_response_data@@_K@Z");
//};

//bool network_active_roster_set_player_detail_level(long, enum e_active_roster_player_detail_level)
//{
//    mangled_ppc("?network_active_roster_set_player_detail_level@@YA_NJW4e_active_roster_player_detail_level@@@Z");
//};

//long network_active_roster_lsp_presence_query_count(void)
//{
//    mangled_ppc("?network_active_roster_lsp_presence_query_count@@YAJXZ");
//};

//long network_active_roster_live_session_query_count(void)
//{
//    mangled_ppc("?network_active_roster_live_session_query_count@@YAJXZ");
//};

//long network_active_roster_live_qos_active_count(void)
//{
//    mangled_ppc("?network_active_roster_live_qos_active_count@@YAJXZ");
//};

//public: bool c_network_active_roster_player_remote_data_base::is_valid(void) const
//{
//    mangled_ppc("?is_valid@c_network_active_roster_player_remote_data_base@@QBA_NXZ");
//};

//public: bool c_network_active_roster_player_remote_data_base::is_update_desired(void) const
//{
//    mangled_ppc("?is_update_desired@c_network_active_roster_player_remote_data_base@@QBA_NXZ");
//};

//public: unsigned long c_network_active_roster_player_remote_data_base::get_valid_time(void) const
//{
//    mangled_ppc("?get_valid_time@c_network_active_roster_player_remote_data_base@@QBAKXZ");
//};

//public: bool c_network_active_roster_player_remote_data_base::last_update_failed(void) const
//{
//    mangled_ppc("?last_update_failed@c_network_active_roster_player_remote_data_base@@QBA_NXZ");
//};

//public: unsigned long c_network_active_roster_player_remote_data_base::get_first_update_failed_time(void) const
//{
//    mangled_ppc("?get_first_update_failed_time@c_network_active_roster_player_remote_data_base@@QBAKXZ");
//};

//public: unsigned long c_network_active_roster_player_remote_data_base::get_last_update_failed_time(void) const
//{
//    mangled_ppc("?get_last_update_failed_time@c_network_active_roster_player_remote_data_base@@QBAKXZ");
//};

//public: unsigned long c_network_active_roster_player_remote_data_base::get_changed_time(void) const
//{
//    mangled_ppc("?get_changed_time@c_network_active_roster_player_remote_data_base@@QBAKXZ");
//};

//public: long c_network_active_roster_player_remote_data_base::get_last_update_failed_count(void) const
//{
//    mangled_ppc("?get_last_update_failed_count@c_network_active_roster_player_remote_data_base@@QBAJXZ");
//};

//public: enum e_network_active_roster_player_remote_data_failure_type c_network_active_roster_player_remote_data_base::get_last_update_failed_type(void) const
//{
//    mangled_ppc("?get_last_update_failed_type@c_network_active_roster_player_remote_data_base@@QBA?AW4e_network_active_roster_player_remote_data_failure_type@@XZ");
//};

//public: void c_network_active_roster_player_remote_data_base::initialize(void)
//{
//    mangled_ppc("?initialize@c_network_active_roster_player_remote_data_base@@QAAXXZ");
//};

//protected: void c_network_active_roster_player_remote_data_base::set_valid(bool)
//{
//    mangled_ppc("?set_valid@c_network_active_roster_player_remote_data_base@@IAAX_N@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//protected: void c_network_active_roster_player_remote_data_base::notify_changed(void)
//{
//    mangled_ppc("?notify_changed@c_network_active_roster_player_remote_data_base@@IAAXXZ");
//};

//public: void c_network_active_roster_player_remote_data_base::set_last_update_failed(bool, enum e_network_active_roster_player_remote_data_failure_type)
//{
//    mangled_ppc("?set_last_update_failed@c_network_active_roster_player_remote_data_base@@QAAX_NW4e_network_active_roster_player_remote_data_failure_type@@@Z");
//};

//public: void c_network_active_roster_player_remote_data_base::set_update_desired(bool)
//{
//    mangled_ppc("?set_update_desired@c_network_active_roster_player_remote_data_base@@QAAX_N@Z");
//};

//public: virtual long c_friends_active_roster_player_source::get_player_count(void) const
//{
//    mangled_ppc("?get_player_count@c_friends_active_roster_player_source@@UBAJXZ");
//};

//public: virtual void c_friends_active_roster_player_source::get_player(long, struct s_network_active_roster_player_source_data *) const
//{
//    mangled_ppc("?get_player@c_friends_active_roster_player_source@@UBAXJPAUs_network_active_roster_player_source_data@@@Z");
//};

//public: virtual enum e_network_active_roster_mode c_friends_active_roster_player_source::get_mode(void) const
//{
//    mangled_ppc("?get_mode@c_friends_active_roster_player_source@@UBA?AW4e_network_active_roster_mode@@XZ");
//};

//public: virtual long c_xbox_live_party_active_roster_player_source::get_player_count(void) const
//{
//    mangled_ppc("?get_player_count@c_xbox_live_party_active_roster_player_source@@UBAJXZ");
//};

//public: virtual void c_xbox_live_party_active_roster_player_source::get_player(long, struct s_network_active_roster_player_source_data *) const
//{
//    mangled_ppc("?get_player@c_xbox_live_party_active_roster_player_source@@UBAXJPAUs_network_active_roster_player_source_data@@@Z");
//};

//public: virtual enum e_network_active_roster_mode c_xbox_live_party_active_roster_player_source::get_mode(void) const
//{
//    mangled_ppc("?get_mode@c_xbox_live_party_active_roster_player_source@@UBA?AW4e_network_active_roster_mode@@XZ");
//};

//void network_active_roster_initialize_internal(void)
//{
//    mangled_ppc("?network_active_roster_initialize_internal@@YAXXZ");
//};

//void network_active_roster_initialize_state(void)
//{
//    mangled_ppc("?network_active_roster_initialize_state@@YAXXZ");
//};

//void network_active_roster_player_initialize_remote_data(long)
//{
//    mangled_ppc("?network_active_roster_player_initialize_remote_data@@YAXJ@Z");
//};

//void network_active_roster_dispose_internal(void)
//{
//    mangled_ppc("?network_active_roster_dispose_internal@@YAXXZ");
//};

//void network_active_roster_cleanup(void)
//{
//    mangled_ppc("?network_active_roster_cleanup@@YAXXZ");
//};

//bool network_active_roster_player_session_id_valid(struct s_network_active_roster_player_internal const *)
//{
//    mangled_ppc("?network_active_roster_player_session_id_valid@@YA_NPBUs_network_active_roster_player_internal@@@Z");
//};

//void network_active_roster_player_get_session_id(struct s_network_active_roster_player_internal const *, struct s_transport_secure_identifier *)
//{
//    mangled_ppc("?network_active_roster_player_get_session_id@@YAXPBUs_network_active_roster_player_internal@@PAUs_transport_secure_identifier@@@Z");
//};

//bool network_active_roster_player_session_id_available(struct s_network_active_roster_player_internal const *)
//{
//    mangled_ppc("?network_active_roster_player_session_id_available@@YA_NPBUs_network_active_roster_player_internal@@@Z");
//};

//bool network_active_roster_player_in_current_title(struct s_network_active_roster_player_internal *)
//{
//    mangled_ppc("?network_active_roster_player_in_current_title@@YA_NPAUs_network_active_roster_player_internal@@@Z");
//};

//void network_active_roster_set_mode_internal(enum e_controller_index, enum e_network_active_roster_mode)
//{
//    mangled_ppc("?network_active_roster_set_mode_internal@@YAXW4e_controller_index@@W4e_network_active_roster_mode@@@Z");
//};

//void network_active_roster_update_active_controller(void)
//{
//    mangled_ppc("?network_active_roster_update_active_controller@@YAXXZ");
//};

//void network_active_roster_update_inactive_controllers(void)
//{
//    mangled_ppc("?network_active_roster_update_inactive_controllers@@YAXXZ");
//};

//void network_active_roster_update_roster_membership(void)
//{
//    mangled_ppc("?network_active_roster_update_roster_membership@@YAXXZ");
//};

//void network_active_roster_update_player_with_queued_join_data(struct s_network_active_roster_player_internal *, struct s_network_active_roster_outgoing_join_session_data const *, enum e_network_active_roster_outgoing_join_update_type, bool)
//{
//    mangled_ppc("?network_active_roster_update_player_with_queued_join_data@@YAXPAUs_network_active_roster_player_internal@@PBUs_network_active_roster_outgoing_join_session_data@@W4e_network_active_roster_outgoing_join_update_type@@_N@Z");
//};

//void network_active_roster_update_roster(void)
//{
//    mangled_ppc("?network_active_roster_update_roster@@YAXXZ");
//};

//void network_active_roster_update_live_presence(void)
//{
//    mangled_ppc("?network_active_roster_update_live_presence@@YAXXZ");
//};

//void network_active_roster_handle_player_session_id_change(long)
//{
//    mangled_ppc("?network_active_roster_handle_player_session_id_change@@YAXJ@Z");
//};

//void network_active_roster_update_live_sessions(void)
//{
//    mangled_ppc("?network_active_roster_update_live_sessions@@YAXXZ");
//};

//void network_active_roster_update_live_sessions_search_results(void)
//{
//    mangled_ppc("?network_active_roster_update_live_sessions_search_results@@YAXXZ");
//};

//void network_active_roster_update_live_sessions_search(void)
//{
//    mangled_ppc("?network_active_roster_update_live_sessions_search@@YAXXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//void network_active_roster_update_bnet_presence(void)
//{
//    mangled_ppc("?network_active_roster_update_bnet_presence@@YAXXZ");
//};

//void network_active_roster_update_lsp_query_results(void)
//{
//    mangled_ppc("?network_active_roster_update_lsp_query_results@@YAXXZ");
//};

//public: s_lsp_presence_player_query_response_data::s_lsp_presence_player_query_response_data(void)
//{
//    mangled_ppc("??0s_lsp_presence_player_query_response_data@@QAA@XZ");
//};

//public: s_static_array<struct s_lsp_presence_player_query_player_response_data, 16>::s_static_array<struct s_lsp_presence_player_query_player_response_data, 16>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_lsp_presence_player_query_player_response_data@@$0BA@@@QAA@XZ");
//};

//void network_active_roster_update_lsp_query_initiation(void)
//{
//    mangled_ppc("?network_active_roster_update_lsp_query_initiation@@YAXXZ");
//};

//void network_active_roster_update_live_qos(void)
//{
//    mangled_ppc("?network_active_roster_update_live_qos@@YAXXZ");
//};

//void network_active_roster_update_live_qos_results(void)
//{
//    mangled_ppc("?network_active_roster_update_live_qos_results@@YAXXZ");
//};

//void network_active_roster_update_live_qos_search(void)
//{
//    mangled_ppc("?network_active_roster_update_live_qos_search@@YAXXZ");
//};

//void network_active_roster_update_player_desires(struct s_network_active_roster_player_internal *)
//{
//    mangled_ppc("?network_active_roster_update_player_desires@@YAXPAUs_network_active_roster_player_internal@@@Z");
//};

//void network_active_roster_update_player_for_live_presence(struct s_network_active_roster_player_internal *)
//{
//    mangled_ppc("?network_active_roster_update_player_for_live_presence@@YAXPAUs_network_active_roster_player_internal@@@Z");
//};

//void network_active_roster_update_player_for_live_sessions(struct s_network_active_roster_player_internal *)
//{
//    mangled_ppc("?network_active_roster_update_player_for_live_sessions@@YAXPAUs_network_active_roster_player_internal@@@Z");
//};

//void network_active_roster_update_player_for_lsp_presence(struct s_network_active_roster_player_internal *)
//{
//    mangled_ppc("?network_active_roster_update_player_for_lsp_presence@@YAXPAUs_network_active_roster_player_internal@@@Z");
//};

//void network_active_roster_update_player_for_live_qos(struct s_network_active_roster_player_internal *)
//{
//    mangled_ppc("?network_active_roster_update_player_for_live_qos@@YAXPAUs_network_active_roster_player_internal@@@Z");
//};

//class c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver> network_active_roster_get_online_friend_state_flags(struct s_online_friend const *)
//{
//    mangled_ppc("?network_active_roster_get_online_friend_state_flags@@YA?AV?$c_flags_no_init@W4e_network_active_roster_player_live_state_flags@@K$0BD@Us_default_enum_string_resolver@@@@PBUs_online_friend@@@Z");
//};

//class c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver> network_active_roster_get_online_party_user_state_flags(struct s_online_party_user const *)
//{
//    mangled_ppc("?network_active_roster_get_online_party_user_state_flags@@YA?AV?$c_flags_no_init@W4e_network_active_roster_player_live_state_flags@@K$0BD@Us_default_enum_string_resolver@@@@PBUs_online_party_user@@@Z");
//};

//class c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver> network_active_roster_get_online_presence_state_flags(struct s_online_presence const *)
//{
//    mangled_ppc("?network_active_roster_get_online_presence_state_flags@@YA?AV?$c_flags_no_init@W4e_network_active_roster_player_live_state_flags@@K$0BD@Us_default_enum_string_resolver@@@@PBUs_online_presence@@@Z");
//};

//public: c_network_active_roster_qos_pool::c_network_active_roster_qos_pool(void)
//{
//    mangled_ppc("??0c_network_active_roster_qos_pool@@QAA@XZ");
//};

//public: s_static_array<struct s_network_active_roster_qos, 4>::s_static_array<struct s_network_active_roster_qos, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_network_active_roster_qos@@$03@@QAA@XZ");
//};

//public: s_network_active_roster_qos::s_network_active_roster_qos(void)
//{
//    mangled_ppc("??0s_network_active_roster_qos@@QAA@XZ");
//};

//public: void c_network_active_roster_qos_pool::initialize(void)
//{
//    mangled_ppc("?initialize@c_network_active_roster_qos_pool@@QAAXXZ");
//};

//public: void c_network_active_roster_qos_pool::dispose(void)
//{
//    mangled_ppc("?dispose@c_network_active_roster_qos_pool@@QAAXXZ");
//};

//public: long c_network_active_roster_qos_pool::get_first_active_index(void) const
//{
//    mangled_ppc("?get_first_active_index@c_network_active_roster_qos_pool@@QBAJXZ");
//};

//public: long c_network_active_roster_qos_pool::get_next_active_index(long) const
//{
//    mangled_ppc("?get_next_active_index@c_network_active_roster_qos_pool@@QBAJJ@Z");
//};

//public: long c_network_active_roster_qos_pool::get_qos_task_index(long) const
//{
//    mangled_ppc("?get_qos_task_index@c_network_active_roster_qos_pool@@QBAJJ@Z");
//};

//public: struct s_transport_secure_identifier c_network_active_roster_qos_pool::get_qos_session_id(long) const
//{
//    mangled_ppc("?get_qos_session_id@c_network_active_roster_qos_pool@@QBA?AUs_transport_secure_identifier@@J@Z");
//};

//public: bool c_network_active_roster_qos_pool::qos_creation_allowed(void)
//{
//    mangled_ppc("?qos_creation_allowed@c_network_active_roster_qos_pool@@QAA_NXZ");
//};

//public: long c_network_active_roster_qos_pool::get_qos_active_count(void) const
//{
//    mangled_ppc("?get_qos_active_count@c_network_active_roster_qos_pool@@QBAJXZ");
//};

//public: bool c_network_active_roster_qos_pool::any_qos_active_to_session_id(struct s_transport_secure_identifier const *) const
//{
//    mangled_ppc("?any_qos_active_to_session_id@c_network_active_roster_qos_pool@@QBA_NPBUs_transport_secure_identifier@@@Z");
//};

//public: bool c_network_active_roster_qos_pool::allocate_qos(struct s_transport_qos_target const *)
//{
//    mangled_ppc("?allocate_qos@c_network_active_roster_qos_pool@@QAA_NPBUs_transport_qos_target@@@Z");
//};

//public: void c_network_active_roster_qos_pool::dispose_qos(long)
//{
//    mangled_ppc("?dispose_qos@c_network_active_roster_qos_pool@@QAAXJ@Z");
//};

//private: void c_network_active_roster_qos_pool::initialize_element(long)
//{
//    mangled_ppc("?initialize_element@c_network_active_roster_qos_pool@@AAAXJ@Z");
//};

//private: void c_network_active_roster_qos_pool::dispose_element(long)
//{
//    mangled_ppc("?dispose_element@c_network_active_roster_qos_pool@@AAAXJ@Z");
//};

//private: bool c_network_active_roster_qos_pool::is_active(long) const
//{
//    mangled_ppc("?is_active@c_network_active_roster_qos_pool@@ABA_NJ@Z");
//};

//private: unsigned long c_network_active_roster_qos_pool::get_time_active(long) const
//{
//    mangled_ppc("?get_time_active@c_network_active_roster_qos_pool@@ABAKJ@Z");
//};

//private: long c_network_active_roster_qos_pool::get_available_index(bool)
//{
//    mangled_ppc("?get_available_index@c_network_active_roster_qos_pool@@AAAJ_N@Z");
//};

//public: void s_static_array<unsigned __int64, 16>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@_K$0BA@@@QAAXJ@Z");
//};

//public: static long s_static_array<struct s_network_active_roster_qos, 4>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_network_active_roster_qos@@$03@@SAJXZ");
//};

//public: static long s_static_array<struct s_network_active_roster_player_internal, 101>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_network_active_roster_player_internal@@$0GF@@@SAJXZ");
//};

//public: void s_static_array<struct s_network_active_roster_player_internal, 101>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Us_network_active_roster_player_internal@@$0GF@@@QAAXJ@Z");
//};

//public: unsigned __int64* s_static_array<unsigned __int64, 101>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@_K$0GF@@@QAAPA_KXZ");
//};

//public: void s_static_array<unsigned __int64, 101>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@_K$0GF@@@QAAXJ@Z");
//};

//public: void s_static_array<struct s_transport_secure_identifier, 16>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Us_transport_secure_identifier@@$0BA@@@QAAXJ@Z");
//};

//public: void c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_active_roster_player_live_state_flags@@K$0BD@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: void c_flags_no_init<enum e_network_active_roster_player_live_state_flags, unsigned long, 19, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_player_live_state_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_active_roster_player_live_state_flags@@K$0BD@Us_default_enum_string_resolver@@@@QAAXW4e_network_active_roster_player_live_state_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_network_active_roster_player_flags, unsigned short, 10, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_player_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_active_roster_player_flags@@G$09Us_default_enum_string_resolver@@@@QAAXW4e_network_active_roster_player_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_network_active_roster_player_remote_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_active_roster_player_remote_data_flags@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_player_remote_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_player_remote_data_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_active_roster_player_remote_data_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_network_active_roster_player_remote_data_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_active_roster_player_remote_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_player_remote_data_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_active_roster_player_remote_data_flags@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_network_active_roster_player_remote_data_flags@@_N@Z");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_player_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_player_internal_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_active_roster_player_internal_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_network_active_roster_player_internal_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_active_roster_player_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_player_internal_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_active_roster_player_internal_flags@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_network_active_roster_player_internal_flags@@_N@Z");
//};

//public: struct s_online_presence const * c_network_active_roster_player_remote_data<struct s_online_presence>::get_data(void) const
//{
//    mangled_ppc("?get_data@?$c_network_active_roster_player_remote_data@Us_online_presence@@@@QBAPBUs_online_presence@@XZ");
//};

//public: void c_network_active_roster_player_remote_data<struct s_online_presence>::set_data(struct s_online_presence const *)
//{
//    mangled_ppc("?set_data@?$c_network_active_roster_player_remote_data@Us_online_presence@@@@QAAXPBUs_online_presence@@@Z");
//};

//public: struct s_online_session_search_by_id_result const * c_network_active_roster_player_remote_data<struct s_online_session_search_by_id_result>::get_data(void) const
//{
//    mangled_ppc("?get_data@?$c_network_active_roster_player_remote_data@Us_online_session_search_by_id_result@@@@QBAPBUs_online_session_search_by_id_result@@XZ");
//};

//public: void c_network_active_roster_player_remote_data<struct s_online_session_search_by_id_result>::set_data(struct s_online_session_search_by_id_result const *)
//{
//    mangled_ppc("?set_data@?$c_network_active_roster_player_remote_data@Us_online_session_search_by_id_result@@@@QAAXPBUs_online_session_search_by_id_result@@@Z");
//};

//public: struct s_lsp_presence_player_query_player_response_data const * c_network_active_roster_player_remote_data<struct s_lsp_presence_player_query_player_response_data>::get_data(void) const
//{
//    mangled_ppc("?get_data@?$c_network_active_roster_player_remote_data@Us_lsp_presence_player_query_player_response_data@@@@QBAPBUs_lsp_presence_player_query_player_response_data@@XZ");
//};

//public: void c_network_active_roster_player_remote_data<struct s_lsp_presence_player_query_player_response_data>::set_data(struct s_lsp_presence_player_query_player_response_data const *)
//{
//    mangled_ppc("?set_data@?$c_network_active_roster_player_remote_data@Us_lsp_presence_player_query_player_response_data@@@@QAAXPBUs_lsp_presence_player_query_player_response_data@@@Z");
//};

//public: struct s_network_session_status_data const * c_network_active_roster_player_remote_data<struct s_network_session_status_data>::get_data(void) const
//{
//    mangled_ppc("?get_data@?$c_network_active_roster_player_remote_data@Us_network_session_status_data@@@@QBAPBUs_network_session_status_data@@XZ");
//};

//public: void c_network_active_roster_player_remote_data<struct s_network_session_status_data>::set_data(struct s_network_session_status_data const *)
//{
//    mangled_ppc("?set_data@?$c_network_active_roster_player_remote_data@Us_network_session_status_data@@@@QAAXPBUs_network_session_status_data@@@Z");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_network_active_roster_qos_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_network_active_roster_qos_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_network_active_roster_qos_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum e_network_active_roster_qos_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_network_active_roster_qos_flags@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_network_active_roster_qos_flags@@_N@Z");
//};

//public: c_flags<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_network_active_roster_qos_flags@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::test(long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@JG$0BA@Us_default_enum_string_resolver@@@@QBA_NJ@Z");
//};

//public: void c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@JG$0BA@Us_default_enum_string_resolver@@@@QAAXJ_N@Z");
//};

//public: struct s_network_active_roster_player_internal & s_static_array<struct s_network_active_roster_player_internal, 101>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_active_roster_player_internal@@$0GF@@@QAAAAUs_network_active_roster_player_internal@@J@Z");
//};

//public: struct s_online_party_user & s_static_array<struct s_online_party_user, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_online_party_user@@$0CA@@@QAAAAUs_online_party_user@@J@Z");
//};

//public: unsigned __int64& s_static_array<unsigned __int64, 101>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@_K$0GF@@@QAAAA_KJ@Z");
//};

//public: struct s_transport_secure_identifier & s_static_array<struct s_transport_secure_identifier, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_transport_secure_identifier@@$0BA@@@QAAAAUs_transport_secure_identifier@@J@Z");
//};

//public: struct s_lsp_presence_player_query_player_response_data & s_static_array<struct s_lsp_presence_player_query_player_response_data, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_lsp_presence_player_query_player_response_data@@$0BA@@@QAAAAUs_lsp_presence_player_query_player_response_data@@J@Z");
//};

//public: struct s_network_active_roster_qos const & s_static_array<struct s_network_active_roster_qos, 4>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_active_roster_qos@@$03@@QBAABUs_network_active_roster_qos@@J@Z");
//};

//public: struct s_network_active_roster_qos & s_static_array<struct s_network_active_roster_qos, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_active_roster_qos@@$03@@QAAAAUs_network_active_roster_qos@@J@Z");
//};

//public: static bool c_flags_no_init<enum e_network_active_roster_player_remote_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_player_remote_data_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_active_roster_player_remote_data_flags@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_network_active_roster_player_remote_data_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_active_roster_player_remote_data_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_player_remote_data_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_active_roster_player_remote_data_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_network_active_roster_player_remote_data_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_network_active_roster_player_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_player_internal_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_active_roster_player_internal_flags@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_network_active_roster_player_internal_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_active_roster_player_internal_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_player_internal_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_active_roster_player_internal_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_network_active_roster_player_internal_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_network_active_roster_qos_flags@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_network_active_roster_qos_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_network_active_roster_qos_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_network_active_roster_qos_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_network_active_roster_qos_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_network_active_roster_qos_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_network_active_roster_qos_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_network_active_roster_qos_flags@@@Z");
//};

//public: static bool c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@JG$0BA@Us_default_enum_string_resolver@@@@SA_NJ@Z");
//};

//private: static unsigned short c_flags_no_init<long, unsigned short, 16, struct s_default_enum_string_resolver>::flag_size_type(long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@JG$0BA@Us_default_enum_string_resolver@@@@CAGJ@Z");
//};

//public: static bool s_static_array<struct s_network_active_roster_player_internal, 101>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_active_roster_player_internal@@$0GF@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_online_party_user, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_online_party_user@@$0CA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<unsigned __int64, 101>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@_K$0GF@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_transport_secure_identifier, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_transport_secure_identifier@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_lsp_presence_player_query_player_response_data, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_lsp_presence_player_query_player_response_data@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_network_active_roster_qos, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_active_roster_qos@@$03@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_network_active_roster_qos_flags@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_network_active_roster_qos_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_network_active_roster_qos_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_network_active_roster_qos_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_network_active_roster_qos_flags@@@Z");
//};

//public: c_friends_active_roster_player_source::c_friends_active_roster_player_source(void)
//{
//    mangled_ppc("??0c_friends_active_roster_player_source@@QAA@XZ");
//};

//public: c_network_active_roster_player_source_interface::c_network_active_roster_player_source_interface(void)
//{
//    mangled_ppc("??0c_network_active_roster_player_source_interface@@QAA@XZ");
//};

//public: c_xbox_live_party_active_roster_player_source::c_xbox_live_party_active_roster_player_source(void)
//{
//    mangled_ppc("??0c_xbox_live_party_active_roster_player_source@@QAA@XZ");
//};

