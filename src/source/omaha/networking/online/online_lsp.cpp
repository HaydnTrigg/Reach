/* ---------- headers */

#include "omaha\networking\online\online_lsp.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_string<200>::k_index_not_found; // "?k_index_not_found@?$s_static_string@$0MI@@@2JB"
// public: static long const s_static_string<200>::k_element_count; // "?k_element_count@?$s_static_string@$0MI@@@2JB"
// public: static long const s_static_string<4>::k_element_count; // "?k_element_count@?$s_static_string@$03@@2JB"
// public: static long const s_static_string<4>::k_index_not_found; // "?k_index_not_found@?$s_static_string@$03@@2JB"
// long *g_service_overrides_server_ip_table; // "?g_service_overrides_server_ip_table@@3PAJA"
// long *g_disabled_server_list; // "?g_disabled_server_list@@3PAJA"
// long g_lsp_override_server_service_id; // "?g_lsp_override_server_service_id@@3JA"
// char const **k_service_type_descriptions; // "?k_service_type_descriptions@@3PAPBDA"
// char const **k_server_connection_result_descriptions; // "?k_server_connection_result_descriptions@@3PAPBDA"
// bool g_lsp_allow_lsp_connections; // "?g_lsp_allow_lsp_connections@@3_NA"
// bool g_lsp_allow_raw_connections; // "?g_lsp_allow_raw_connections@@3_NA"
// class c_flags<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver> g_disabled_service_mask; // "?g_disabled_service_mask@@3V?$c_flags@W4e_online_lsp_service_type@@E$07Us_default_enum_string_resolver@@@@A"
// class c_online_lsp_manager g_online_lsp_manager; // "?g_online_lsp_manager@@3Vc_online_lsp_manager@@A"

// void online_lsp_display_services_and_servers(void);
// void online_lsp_force_server(char const *, long, bool);
// void online_lsp_disable_server(long, bool);
// void online_lsp_disable_service(char const *, bool);
// public: c_online_lsp_manager::c_online_lsp_manager(void);
// public: s_static_array<struct c_online_lsp_manager::s_server_data, 22>::s_static_array<struct c_online_lsp_manager::s_server_data, 22>(void);
// public: s_static_array<struct c_online_lsp_manager::s_client_data, 16>::s_static_array<struct c_online_lsp_manager::s_client_data, 16>(void);
// public: c_online_lsp_manager::s_server_data::s_server_data(void);
// public: c_online_lsp_manager::s_client_data::s_client_data(void);
// public: static class c_online_lsp_manager * c_online_lsp_manager::get(void);
// public: void c_online_lsp_manager::update(void);
// private: void c_online_lsp_manager::update_online_status(void);
// private: void c_online_lsp_manager::update_server_deactivation(void);
// public: enum e_online_lsp_server_acquire_result c_online_lsp_manager::acquire_server(enum e_online_lsp_service_type, long *, long *, unsigned short *, char const *);
// private: void c_online_lsp_manager::initialize_clients(void);
// public: void c_online_lsp_manager::s_client_data::initialize(void);
// private: void c_online_lsp_manager::initialize_service_to_activated_server_map(void);
// public: void c_online_lsp_manager::s_service_to_activated_server_data::initialize(void);
// private: void c_online_lsp_manager::initialize_servers(void);
// public: void c_online_lsp_manager::s_server_data::initialize(void);
// private: void c_online_lsp_manager::initialize_server_services(void);
// private: bool c_online_lsp_manager::any_client_connecting_to_service(enum e_online_lsp_service_type) const;
// private: bool c_online_lsp_manager::any_client_connected_to_service(enum e_online_lsp_service_type) const;
// private: bool c_online_lsp_manager::any_client_connected_or_connecting(void);
// private: long c_online_lsp_manager::find_empty_slot_index(void) const;
// private: long c_online_lsp_manager::find_client_index_from_token(long) const;
// public: void c_online_lsp_manager::server_connected(long);
// public: void c_online_lsp_manager::disconnect_from_server(long, enum c_online_lsp_manager::e_connection_result);
// private: void c_online_lsp_manager::initialize_clients_and_service_map(void);
// private: void c_online_lsp_manager::clients_and_services_handle_server_deactivation(long);
// private: void c_online_lsp_manager::reset(void);
// private: bool c_online_lsp_manager::lsp_server_has_had_recent_activity(long);
// private: bool c_online_lsp_manager::search_results_still_fresh(void);
// private: long c_online_lsp_manager::get_best_server_index(enum e_online_lsp_service_type, enum c_online_lsp_manager::e_service_to_server_query_failure_reason *);
// long online_lsp_get_disabled_server_index_by_ip(long);
// private: static bool c_online_lsp_manager::service_type_in_list(class c_static_string<4> const *, class c_static_string<200> const *);
// private: bool c_online_lsp_manager::register_best_server(enum e_online_lsp_service_type, long *, unsigned short *, enum c_online_lsp_manager::e_service_to_server_query_failure_reason *);
// public: void c_online_lsp_manager::go_into_crash_mode(void);
// public: void c_online_lsp_manager::display_services_and_servers(void) const;
// public: void c_online_lsp_manager::force_server_by_service(char const *, long, bool);
// public: void c_online_lsp_manager::disable_server(long, bool);
// long online_lsp_get_free_disabled_server_index(void);
// public: void c_online_lsp_manager::disable_service(char const *, bool);
// public: static long c_online_lsp_manager::get_recommended_retry_count(void);
// private: static long c_online_lsp_manager::get_lsp_port(void);
// private: static void c_online_lsp_manager::fixup_network_configuration_if_nescessary(void);
// public: void s_static_array<struct c_online_lsp_manager::s_server_data::s_service_usage_data, 8>::set_memory(long);
// public: static long s_static_array<struct c_online_lsp_manager::s_service_to_activated_server_data, 8>::get_count(void);
// public: static long s_static_array<struct c_online_lsp_manager::s_server_data, 22>::get_count(void);
// public: static long s_static_array<struct c_online_lsp_manager::s_client_data, 16>::get_count(void);
// public: void s_static_string<48>::clear(void);
// public: void s_static_string<48>::set(char const *);
// public: c_static_string<48>::c_static_string<48>(void);
// public: void c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::test(enum e_online_lsp_service_type) const;
// public: void c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::set(enum e_online_lsp_service_type, bool);
// public: c_flags<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::c_flags<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>(void);
// public: void s_static_string<200>::set(char const *);
// public: bool s_static_string<200>::is_equal(char const *) const;
// public: long s_static_string<200>::index_of(char const *) const;
// public: bool s_static_string<200>::substring(long, long, class s_static_string<200> *) const;
// public: long s_static_string<200>::length(void) const;
// public: char const * s_static_string<200>::get_string(void) const;
// public: char const * s_static_string<200>::operator char const *(void) const;
// public: c_static_string<200>::c_static_string<200>(char const *);
// public: c_static_string<200>::c_static_string<200>(void);
// public: char const * s_static_string<4>::get_string(void) const;
// public: struct c_online_lsp_manager::s_service_to_activated_server_data & s_static_array<struct c_online_lsp_manager::s_service_to_activated_server_data, 8>::operator[]<long>(long);
// public: struct c_online_lsp_manager::s_server_data & s_static_array<struct c_online_lsp_manager::s_server_data, 22>::operator[]<long>(long);
// public: struct s_lsp_service_configuration const & s_static_array<struct s_lsp_service_configuration, 8>::operator[]<long>(long) const;
// public: struct c_online_lsp_manager::s_client_data & s_static_array<struct c_online_lsp_manager::s_client_data, 16>::operator[]<long>(long);
// public: struct c_online_lsp_manager::s_client_data const & s_static_array<struct c_online_lsp_manager::s_client_data, 16>::operator[]<long>(long) const;
// public: struct c_online_lsp_manager::s_service_to_activated_server_data & s_static_array<struct c_online_lsp_manager::s_service_to_activated_server_data, 8>::operator[]<enum e_online_lsp_service_type>(enum e_online_lsp_service_type);
// public: struct c_online_lsp_manager::s_server_data::s_service_usage_data & s_static_array<struct c_online_lsp_manager::s_server_data::s_service_usage_data, 8>::operator[]<enum e_online_lsp_service_type>(enum e_online_lsp_service_type);
// public: struct c_online_lsp_manager::s_server_data::s_service_usage_data & s_static_array<struct c_online_lsp_manager::s_server_data::s_service_usage_data, 8>::operator[]<long>(long);
// public: struct c_online_lsp_manager::s_server_data const & s_static_array<struct c_online_lsp_manager::s_server_data, 22>::operator[]<long>(long) const;
// public: bool c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_online_lsp_service_type);
// private: static unsigned char c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_online_lsp_service_type);
// public: void s_static_string<200>::clear(void);
// public: long s_static_string<200>::next_index_of(char const *, long) const;
// public: static bool s_static_array<struct c_online_lsp_manager::s_service_to_activated_server_data, 8>::valid<long>(long);
// public: static bool s_static_array<struct c_online_lsp_manager::s_server_data, 22>::valid<long>(long);
// public: static bool s_static_array<struct c_online_lsp_manager::s_client_data, 16>::valid<long>(long);
// public: static bool s_static_array<struct c_online_lsp_manager::s_service_to_activated_server_data, 8>::valid<enum e_online_lsp_service_type>(enum e_online_lsp_service_type);
// public: static bool s_static_array<struct c_online_lsp_manager::s_server_data::s_service_usage_data, 8>::valid<enum e_online_lsp_service_type>(enum e_online_lsp_service_type);
// public: static bool s_static_array<struct c_online_lsp_manager::s_server_data::s_service_usage_data, 8>::valid<long>(long);
// private: static unsigned char c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_online_lsp_service_type);
// public: c_static_string<16>::c_static_string<16>(char const *);
// public: c_static_string<4>::c_static_string<4>(char const *);
// public: void s_static_string<4>::set(char const *);

//void online_lsp_display_services_and_servers(void)
//{
//    mangled_ppc("?online_lsp_display_services_and_servers@@YAXXZ");
//};

//void online_lsp_force_server(char const *, long, bool)
//{
//    mangled_ppc("?online_lsp_force_server@@YAXPBDJ_N@Z");
//};

//void online_lsp_disable_server(long, bool)
//{
//    mangled_ppc("?online_lsp_disable_server@@YAXJ_N@Z");
//};

//void online_lsp_disable_service(char const *, bool)
//{
//    mangled_ppc("?online_lsp_disable_service@@YAXPBD_N@Z");
//};

//public: c_online_lsp_manager::c_online_lsp_manager(void)
//{
//    mangled_ppc("??0c_online_lsp_manager@@QAA@XZ");
//};

//public: s_static_array<struct c_online_lsp_manager::s_server_data, 22>::s_static_array<struct c_online_lsp_manager::s_server_data, 22>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_server_data@c_online_lsp_manager@@$0BG@@@QAA@XZ");
//};

//public: s_static_array<struct c_online_lsp_manager::s_client_data, 16>::s_static_array<struct c_online_lsp_manager::s_client_data, 16>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_client_data@c_online_lsp_manager@@$0BA@@@QAA@XZ");
//};

//public: c_online_lsp_manager::s_server_data::s_server_data(void)
//{
//    mangled_ppc("??0s_server_data@c_online_lsp_manager@@QAA@XZ");
//};

//public: c_online_lsp_manager::s_client_data::s_client_data(void)
//{
//    mangled_ppc("??0s_client_data@c_online_lsp_manager@@QAA@XZ");
//};

//public: static class c_online_lsp_manager * c_online_lsp_manager::get(void)
//{
//    mangled_ppc("?get@c_online_lsp_manager@@SAPAV1@XZ");
//};

//public: void c_online_lsp_manager::update(void)
//{
//    mangled_ppc("?update@c_online_lsp_manager@@QAAXXZ");
//};

//private: void c_online_lsp_manager::update_online_status(void)
//{
//    mangled_ppc("?update_online_status@c_online_lsp_manager@@AAAXXZ");
//};

//private: void c_online_lsp_manager::update_server_deactivation(void)
//{
//    mangled_ppc("?update_server_deactivation@c_online_lsp_manager@@AAAXXZ");
//};

//public: enum e_online_lsp_server_acquire_result c_online_lsp_manager::acquire_server(enum e_online_lsp_service_type, long *, long *, unsigned short *, char const *)
//{
//    mangled_ppc("?acquire_server@c_online_lsp_manager@@QAA?AW4e_online_lsp_server_acquire_result@@W4e_online_lsp_service_type@@PAJ1PAGPBD@Z");
//};

//private: void c_online_lsp_manager::initialize_clients(void)
//{
//    mangled_ppc("?initialize_clients@c_online_lsp_manager@@AAAXXZ");
//};

//public: void c_online_lsp_manager::s_client_data::initialize(void)
//{
//    mangled_ppc("?initialize@s_client_data@c_online_lsp_manager@@QAAXXZ");
//};

//private: void c_online_lsp_manager::initialize_service_to_activated_server_map(void)
//{
//    mangled_ppc("?initialize_service_to_activated_server_map@c_online_lsp_manager@@AAAXXZ");
//};

//public: void c_online_lsp_manager::s_service_to_activated_server_data::initialize(void)
//{
//    mangled_ppc("?initialize@s_service_to_activated_server_data@c_online_lsp_manager@@QAAXXZ");
//};

//private: void c_online_lsp_manager::initialize_servers(void)
//{
//    mangled_ppc("?initialize_servers@c_online_lsp_manager@@AAAXXZ");
//};

//public: void c_online_lsp_manager::s_server_data::initialize(void)
//{
//    mangled_ppc("?initialize@s_server_data@c_online_lsp_manager@@QAAXXZ");
//};

//private: void c_online_lsp_manager::initialize_server_services(void)
//{
//    mangled_ppc("?initialize_server_services@c_online_lsp_manager@@AAAXXZ");
//};

//private: bool c_online_lsp_manager::any_client_connecting_to_service(enum e_online_lsp_service_type) const
//{
//    mangled_ppc("?any_client_connecting_to_service@c_online_lsp_manager@@ABA_NW4e_online_lsp_service_type@@@Z");
//};

//private: bool c_online_lsp_manager::any_client_connected_to_service(enum e_online_lsp_service_type) const
//{
//    mangled_ppc("?any_client_connected_to_service@c_online_lsp_manager@@ABA_NW4e_online_lsp_service_type@@@Z");
//};

//private: bool c_online_lsp_manager::any_client_connected_or_connecting(void)
//{
//    mangled_ppc("?any_client_connected_or_connecting@c_online_lsp_manager@@AAA_NXZ");
//};

//private: long c_online_lsp_manager::find_empty_slot_index(void) const
//{
//    mangled_ppc("?find_empty_slot_index@c_online_lsp_manager@@ABAJXZ");
//};

//private: long c_online_lsp_manager::find_client_index_from_token(long) const
//{
//    mangled_ppc("?find_client_index_from_token@c_online_lsp_manager@@ABAJJ@Z");
//};

//public: void c_online_lsp_manager::server_connected(long)
//{
//    mangled_ppc("?server_connected@c_online_lsp_manager@@QAAXJ@Z");
//};

//public: void c_online_lsp_manager::disconnect_from_server(long, enum c_online_lsp_manager::e_connection_result)
//{
//    mangled_ppc("?disconnect_from_server@c_online_lsp_manager@@QAAXJW4e_connection_result@1@@Z");
//};

//private: void c_online_lsp_manager::initialize_clients_and_service_map(void)
//{
//    mangled_ppc("?initialize_clients_and_service_map@c_online_lsp_manager@@AAAXXZ");
//};

//private: void c_online_lsp_manager::clients_and_services_handle_server_deactivation(long)
//{
//    mangled_ppc("?clients_and_services_handle_server_deactivation@c_online_lsp_manager@@AAAXJ@Z");
//};

//private: void c_online_lsp_manager::reset(void)
//{
//    mangled_ppc("?reset@c_online_lsp_manager@@AAAXXZ");
//};

//private: bool c_online_lsp_manager::lsp_server_has_had_recent_activity(long)
//{
//    mangled_ppc("?lsp_server_has_had_recent_activity@c_online_lsp_manager@@AAA_NJ@Z");
//};

//private: bool c_online_lsp_manager::search_results_still_fresh(void)
//{
//    mangled_ppc("?search_results_still_fresh@c_online_lsp_manager@@AAA_NXZ");
//};

//private: long c_online_lsp_manager::get_best_server_index(enum e_online_lsp_service_type, enum c_online_lsp_manager::e_service_to_server_query_failure_reason *)
//{
//    mangled_ppc("?get_best_server_index@c_online_lsp_manager@@AAAJW4e_online_lsp_service_type@@PAW4e_service_to_server_query_failure_reason@1@@Z");
//};

//long online_lsp_get_disabled_server_index_by_ip(long)
//{
//    mangled_ppc("?online_lsp_get_disabled_server_index_by_ip@@YAJJ@Z");
//};

//private: static bool c_online_lsp_manager::service_type_in_list(class c_static_string<4> const *, class c_static_string<200> const *)
//{
//    mangled_ppc("?service_type_in_list@c_online_lsp_manager@@CA_NPBV?$c_static_string@$03@@PBV?$c_static_string@$0MI@@@@Z");
//};

//private: bool c_online_lsp_manager::register_best_server(enum e_online_lsp_service_type, long *, unsigned short *, enum c_online_lsp_manager::e_service_to_server_query_failure_reason *)
//{
//    mangled_ppc("?register_best_server@c_online_lsp_manager@@AAA_NW4e_online_lsp_service_type@@PAJPAGPAW4e_service_to_server_query_failure_reason@1@@Z");
//};

//public: void c_online_lsp_manager::go_into_crash_mode(void)
//{
//    mangled_ppc("?go_into_crash_mode@c_online_lsp_manager@@QAAXXZ");
//};

//public: void c_online_lsp_manager::display_services_and_servers(void) const
//{
//    mangled_ppc("?display_services_and_servers@c_online_lsp_manager@@QBAXXZ");
//};

//public: void c_online_lsp_manager::force_server_by_service(char const *, long, bool)
//{
//    mangled_ppc("?force_server_by_service@c_online_lsp_manager@@QAAXPBDJ_N@Z");
//};

//public: void c_online_lsp_manager::disable_server(long, bool)
//{
//    mangled_ppc("?disable_server@c_online_lsp_manager@@QAAXJ_N@Z");
//};

//long online_lsp_get_free_disabled_server_index(void)
//{
//    mangled_ppc("?online_lsp_get_free_disabled_server_index@@YAJXZ");
//};

//public: void c_online_lsp_manager::disable_service(char const *, bool)
//{
//    mangled_ppc("?disable_service@c_online_lsp_manager@@QAAXPBD_N@Z");
//};

//public: static long c_online_lsp_manager::get_recommended_retry_count(void)
//{
//    mangled_ppc("?get_recommended_retry_count@c_online_lsp_manager@@SAJXZ");
//};

//private: static long c_online_lsp_manager::get_lsp_port(void)
//{
//    mangled_ppc("?get_lsp_port@c_online_lsp_manager@@CAJXZ");
//};

//private: static void c_online_lsp_manager::fixup_network_configuration_if_nescessary(void)
//{
//    mangled_ppc("?fixup_network_configuration_if_nescessary@c_online_lsp_manager@@CAXXZ");
//};

//public: void s_static_array<struct c_online_lsp_manager::s_server_data::s_service_usage_data, 8>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Us_service_usage_data@s_server_data@c_online_lsp_manager@@$07@@QAAXJ@Z");
//};

//public: static long s_static_array<struct c_online_lsp_manager::s_service_to_activated_server_data, 8>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_service_to_activated_server_data@c_online_lsp_manager@@$07@@SAJXZ");
//};

//public: static long s_static_array<struct c_online_lsp_manager::s_server_data, 22>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_server_data@c_online_lsp_manager@@$0BG@@@SAJXZ");
//};

//public: static long s_static_array<struct c_online_lsp_manager::s_client_data, 16>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_client_data@c_online_lsp_manager@@$0BA@@@SAJXZ");
//};

//public: void s_static_string<48>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0DA@@@QAAXXZ");
//};

//public: void s_static_string<48>::set(char const *)
//{
//    mangled_ppc("?set@?$s_static_string@$0DA@@@QAAXPBD@Z");
//};

//public: c_static_string<48>::c_static_string<48>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0DA@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_online_lsp_service_type@@E$07Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::test(enum e_online_lsp_service_type) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_online_lsp_service_type@@E$07Us_default_enum_string_resolver@@@@QBA_NW4e_online_lsp_service_type@@@Z");
//};

//public: void c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::set(enum e_online_lsp_service_type, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_online_lsp_service_type@@E$07Us_default_enum_string_resolver@@@@QAAXW4e_online_lsp_service_type@@_N@Z");
//};

//public: c_flags<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::c_flags<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_online_lsp_service_type@@E$07Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void s_static_string<200>::set(char const *)
//{
//    mangled_ppc("?set@?$s_static_string@$0MI@@@QAAXPBD@Z");
//};

//public: bool s_static_string<200>::is_equal(char const *) const
//{
//    mangled_ppc("?is_equal@?$s_static_string@$0MI@@@QBA_NPBD@Z");
//};

//public: long s_static_string<200>::index_of(char const *) const
//{
//    mangled_ppc("?index_of@?$s_static_string@$0MI@@@QBAJPBD@Z");
//};

//public: bool s_static_string<200>::substring(long, long, class s_static_string<200> *) const
//{
//    mangled_ppc("?substring@?$s_static_string@$0MI@@@QBA_NJJPAV1@@Z");
//};

//public: long s_static_string<200>::length(void) const
//{
//    mangled_ppc("?length@?$s_static_string@$0MI@@@QBAJXZ");
//};

//public: char const * s_static_string<200>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0MI@@@QBAPBDXZ");
//};

//public: char const * s_static_string<200>::operator char const *(void) const
//{
//    mangled_ppc("??B?$s_static_string@$0MI@@@QBAPBDXZ");
//};

//public: c_static_string<200>::c_static_string<200>(char const *)
//{
//    mangled_ppc("??0?$c_static_string@$0MI@@@QAA@PBD@Z");
//};

//public: c_static_string<200>::c_static_string<200>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0MI@@@QAA@XZ");
//};

//public: char const * s_static_string<4>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$03@@QBAPBDXZ");
//};

//public: struct c_online_lsp_manager::s_service_to_activated_server_data & s_static_array<struct c_online_lsp_manager::s_service_to_activated_server_data, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_service_to_activated_server_data@c_online_lsp_manager@@$07@@QAAAAUs_service_to_activated_server_data@c_online_lsp_manager@@J@Z");
//};

//public: struct c_online_lsp_manager::s_server_data & s_static_array<struct c_online_lsp_manager::s_server_data, 22>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_server_data@c_online_lsp_manager@@$0BG@@@QAAAAUs_server_data@c_online_lsp_manager@@J@Z");
//};

//public: struct s_lsp_service_configuration const & s_static_array<struct s_lsp_service_configuration, 8>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_lsp_service_configuration@@$07@@QBAABUs_lsp_service_configuration@@J@Z");
//};

//public: struct c_online_lsp_manager::s_client_data & s_static_array<struct c_online_lsp_manager::s_client_data, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_client_data@c_online_lsp_manager@@$0BA@@@QAAAAUs_client_data@c_online_lsp_manager@@J@Z");
//};

//public: struct c_online_lsp_manager::s_client_data const & s_static_array<struct c_online_lsp_manager::s_client_data, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_client_data@c_online_lsp_manager@@$0BA@@@QBAABUs_client_data@c_online_lsp_manager@@J@Z");
//};

//public: struct c_online_lsp_manager::s_service_to_activated_server_data & s_static_array<struct c_online_lsp_manager::s_service_to_activated_server_data, 8>::operator[]<enum e_online_lsp_service_type>(enum e_online_lsp_service_type)
//{
//    mangled_ppc("??$?AW4e_online_lsp_service_type@@@?$s_static_array@Us_service_to_activated_server_data@c_online_lsp_manager@@$07@@QAAAAUs_service_to_activated_server_data@c_online_lsp_manager@@W4e_online_lsp_service_type@@@Z");
//};

//public: struct c_online_lsp_manager::s_server_data::s_service_usage_data & s_static_array<struct c_online_lsp_manager::s_server_data::s_service_usage_data, 8>::operator[]<enum e_online_lsp_service_type>(enum e_online_lsp_service_type)
//{
//    mangled_ppc("??$?AW4e_online_lsp_service_type@@@?$s_static_array@Us_service_usage_data@s_server_data@c_online_lsp_manager@@$07@@QAAAAUs_service_usage_data@s_server_data@c_online_lsp_manager@@W4e_online_lsp_service_type@@@Z");
//};

//public: struct c_online_lsp_manager::s_server_data::s_service_usage_data & s_static_array<struct c_online_lsp_manager::s_server_data::s_service_usage_data, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_service_usage_data@s_server_data@c_online_lsp_manager@@$07@@QAAAAUs_service_usage_data@s_server_data@c_online_lsp_manager@@J@Z");
//};

//public: struct c_online_lsp_manager::s_server_data const & s_static_array<struct c_online_lsp_manager::s_server_data, 22>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_server_data@c_online_lsp_manager@@$0BG@@@QBAABUs_server_data@c_online_lsp_manager@@J@Z");
//};

//public: bool c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_online_lsp_service_type@@E$07Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::valid_bit(enum e_online_lsp_service_type)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_online_lsp_service_type@@E$07Us_default_enum_string_resolver@@@@SA_NW4e_online_lsp_service_type@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::flag_size_type(enum e_online_lsp_service_type)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_online_lsp_service_type@@E$07Us_default_enum_string_resolver@@@@CAEW4e_online_lsp_service_type@@@Z");
//};

//public: void s_static_string<200>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0MI@@@QAAXXZ");
//};

//public: long s_static_string<200>::next_index_of(char const *, long) const
//{
//    mangled_ppc("?next_index_of@?$s_static_string@$0MI@@@QBAJPBDJ@Z");
//};

//public: static bool s_static_array<struct c_online_lsp_manager::s_service_to_activated_server_data, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_service_to_activated_server_data@c_online_lsp_manager@@$07@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct c_online_lsp_manager::s_server_data, 22>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_server_data@c_online_lsp_manager@@$0BG@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct c_online_lsp_manager::s_client_data, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_client_data@c_online_lsp_manager@@$0BA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct c_online_lsp_manager::s_service_to_activated_server_data, 8>::valid<enum e_online_lsp_service_type>(enum e_online_lsp_service_type)
//{
//    mangled_ppc("??$valid@W4e_online_lsp_service_type@@@?$s_static_array@Us_service_to_activated_server_data@c_online_lsp_manager@@$07@@SA_NW4e_online_lsp_service_type@@@Z");
//};

//public: static bool s_static_array<struct c_online_lsp_manager::s_server_data::s_service_usage_data, 8>::valid<enum e_online_lsp_service_type>(enum e_online_lsp_service_type)
//{
//    mangled_ppc("??$valid@W4e_online_lsp_service_type@@@?$s_static_array@Us_service_usage_data@s_server_data@c_online_lsp_manager@@$07@@SA_NW4e_online_lsp_service_type@@@Z");
//};

//public: static bool s_static_array<struct c_online_lsp_manager::s_server_data::s_service_usage_data, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_service_usage_data@s_server_data@c_online_lsp_manager@@$07@@SA_NJ@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_online_lsp_service_type@@E$07Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_online_lsp_service_type, unsigned char, 8, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_online_lsp_service_type)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_online_lsp_service_type@@E$07Us_default_enum_string_resolver@@@@CAEW4e_online_lsp_service_type@@@Z");
//};

//public: c_static_string<16>::c_static_string<16>(char const *)
//{
//    mangled_ppc("??0?$c_static_string@$0BA@@@QAA@PBD@Z");
//};

//public: c_static_string<4>::c_static_string<4>(char const *)
//{
//    mangled_ppc("??0?$c_static_string@$03@@QAA@PBD@Z");
//};

//public: void s_static_string<4>::set(char const *)
//{
//    mangled_ppc("?set@?$s_static_string@$03@@QAAXPBD@Z");
//};

