/* ---------- headers */

#include "omaha\networking\network_configuration.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_host_selection_mode, unsigned char, 0, 3, struct s_host_selection_mode_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_host_selection_mode@@E$0A@$02Us_host_selection_mode_string_resolver@@@@2HB"
// public: static enum e_host_selection_mode const c_enum_no_init<enum e_host_selection_mode, unsigned char, 0, 3, struct s_host_selection_mode_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_host_selection_mode@@E$0A@$02Us_host_selection_mode_string_resolver@@@@2W4e_host_selection_mode@@B"
// public: static int const c_enum_no_init<enum e_host_selection_factor, unsigned char, 0, 23, struct s_host_selection_factor_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_host_selection_factor@@E$0A@$0BH@Us_host_selection_factor_string_resolver@@@@2HB"
// public: static enum e_host_selection_factor const c_enum_no_init<enum e_host_selection_factor, unsigned char, 0, 23, struct s_host_selection_factor_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_host_selection_factor@@E$0A@$0BH@Us_host_selection_factor_string_resolver@@@@2W4e_host_selection_factor@@B"
// long g_network_configuration_custom_games_enabled_override; // "?g_network_configuration_custom_games_enabled_override@@3JA"
// long g_network_configuration_client_badness_rating_threshold_override; // "?g_network_configuration_client_badness_rating_threshold_override@@3JA"
// long g_network_configuration_disable_bad_client_anticheating_override; // "?g_network_configuration_disable_bad_client_anticheating_override@@3JA"
// long g_network_configuration_disable_bad_connectivity_anticheating_override; // "?g_network_configuration_disable_bad_connectivity_anticheating_override@@3JA"
// long g_network_configuration_disable_bad_bandwidth_anticheating_override; // "?g_network_configuration_disable_bad_bandwidth_anticheating_override@@3JA"
// long g_network_configuration_maximum_multiplayer_split_screen_override; // "?g_network_configuration_maximum_multiplayer_split_screen_override@@3JA"
// long g_network_configuration_crash_handling_minidump_type_override; // "?g_network_configuration_crash_handling_minidump_type_override@@3JA"
// long g_network_configuration_crash_handling_ui_display_override; // "?g_network_configuration_crash_handling_ui_display_override@@3JA"
// char const **host_selection_mode_names; // "?host_selection_mode_names@@3PAPBDA"
// char const *const k_security_hash_text_section; // "?k_security_hash_text_section@@3PBDB"
// char const **host_selection_factor_names; // "?host_selection_factor_names@@3PAPBDA"
// char const *const k_security_hash_rdata_section; // "?k_security_hash_rdata_section@@3PBDB"
// char const **host_selection_factor_short_names; // "?host_selection_factor_short_names@@3PAPBDA"
// struct s_network_configuration g_network_configuration; // "?g_network_configuration@@3Us_network_configuration@@A"
// bool g_network_configuration_initialized; // "?g_network_configuration_initialized@@3_NA"

// public: static void s_host_selection_mode_string_resolver::to_string(enum e_host_selection_mode, class c_static_string<64> *);
// public: static void s_host_selection_factor_string_resolver::to_string(enum e_host_selection_factor, class c_static_string<64> *);
// char const * host_selection_factor_get_short_name(enum e_host_selection_factor);
// void network_configuration_initialize(bool);
// void network_configuration_dispose(void);
// enum e_network_configuration_state network_configuration_get_state(void);
// public: bool c_network_storage_file_base::failed(void) const;
// public: bool c_network_storage_file_base::ready_with_data(void) const;
// void network_build_network_configuration(void);
// public: s_network_configuration_file::s_network_configuration_file(void);
// void network_configuration_initialize_private(bool);
// enum e_player_grade operator++(enum e_player_grade &, int);
// enum e_player_sub_grade operator++(enum e_player_sub_grade &, int);
// void network_configuration_sanitize(void);
// enum e_simulation_event_type operator++(enum e_simulation_event_type &, int);
// void network_configuration_initialize_simulation_constants(void);
// void network_configuration_initialize_simulation_event_constants(void);
// void network_configuration_initialize_simulation_entity_constants(void);
// void network_configuration_initialize_simulation_entity_creation_constants(void);
// void network_configuration_initialize_simulation_entity_update_constants(void);
// void network_configuration_initialize_channel_manager_constants(void);
// bool network_configuration_custom_games_enabled(void);
// long network_configuration_client_badness_rating_threshold(void);
// bool network_configuration_disable_bad_client_anticheating(void);
// bool network_configuration_disable_bad_connectivity_anticheating(void);
// bool network_configuration_disable_bad_bandwidth_anticheating(void);
// long network_configuration_maximum_multiplayer_split_screen(void);
// long network_configuration_get_map_index_from_map_id(enum e_map_id);
// enum e_map_id network_configuration_get_map_id_from_map_index(long);
// bool network_configuration_crash_on_dirty_disc_error(void);
// bool network_configuration_display_crash_handling_ui(void);
// enum e_minidump_generation network_configuration_get_minidump_generation_type(void);
// bool network_configuration_notify_changed(void);
// long network_configuration_get_specialized_replication_family_index_from_config_family_index(long, long);
// long network_configuration_get_specialized_replication_family_index(long, long);
// bool network_configuration_event_type_is_in_replication_family(long);
// public: c_enum<enum e_blf_file_authentication_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_blf_file_authentication_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_blf_file_authentication_type);
// public: struct s_network_configuration const * c_blf_simple_network_storage_file<struct s_network_configuration>::get(void) const;
// public: struct s_banhammer_upload_failure_configuration & s_static_array<struct s_banhammer_upload_failure_configuration, 4>::operator[]<enum e_network_banhammer_upload_failure_type>(enum e_network_banhammer_upload_failure_type);
// public: struct s_replication_family_configuration & s_static_array<struct s_replication_family_configuration, 10>::operator[]<int>(int);
// public: struct s_lsp_service_configuration & s_static_array<struct s_lsp_service_configuration, 8>::operator[]<long>(long);
// public: struct s_lsp_service_configuration & s_static_array<struct s_lsp_service_configuration, 8>::operator[]<enum e_online_lsp_service_type>(enum e_online_lsp_service_type);
// public: struct s_map_information & s_static_array<struct s_map_information, 64>::operator[]<long>(long);
// public: class s_static_array<long, 5> & s_static_array<class s_static_array<long, 5>, 21>::operator[]<enum e_player_grade>(enum e_player_grade);
// public: long & s_static_array<long, 5>::operator[]<enum e_player_sub_grade>(enum e_player_sub_grade);
// public: class s_static_array<float, 5> & s_static_array<class s_static_array<float, 5>, 21>::operator[]<enum e_player_grade>(enum e_player_grade);
// public: float & s_static_array<float, 5>::operator[]<enum e_player_sub_grade>(enum e_player_sub_grade);
// public: struct s_replication_family_configuration & s_static_array<struct s_replication_family_configuration, 10>::operator[]<long>(long);
// public: static bool s_static_array<struct s_banhammer_upload_failure_configuration, 4>::valid<enum e_network_banhammer_upload_failure_type>(enum e_network_banhammer_upload_failure_type);
// public: static bool s_static_array<struct s_replication_family_configuration, 10>::valid<int>(int);
// public: static bool s_static_array<struct s_lsp_service_configuration, 8>::valid<long>(long);
// public: static bool s_static_array<struct s_lsp_service_configuration, 8>::valid<enum e_online_lsp_service_type>(enum e_online_lsp_service_type);
// public: static bool s_static_array<struct s_map_information, 64>::valid<long>(long);
// public: static bool s_static_array<class s_static_array<long, 5>, 21>::valid<enum e_player_grade>(enum e_player_grade);
// public: static bool s_static_array<long, 5>::valid<enum e_player_sub_grade>(enum e_player_sub_grade);
// public: static bool s_static_array<class s_static_array<float, 5>, 21>::valid<enum e_player_grade>(enum e_player_grade);
// public: static bool s_static_array<float, 5>::valid<enum e_player_sub_grade>(enum e_player_sub_grade);
// public: static bool s_static_array<struct s_replication_family_configuration, 10>::valid<long>(long);

//public: static void s_host_selection_mode_string_resolver::to_string(enum e_host_selection_mode, class c_static_string<64> *)
//{
//    mangled_ppc("?to_string@s_host_selection_mode_string_resolver@@SAXW4e_host_selection_mode@@PAV?$c_static_string@$0EA@@@@Z");
//};

//public: static void s_host_selection_factor_string_resolver::to_string(enum e_host_selection_factor, class c_static_string<64> *)
//{
//    mangled_ppc("?to_string@s_host_selection_factor_string_resolver@@SAXW4e_host_selection_factor@@PAV?$c_static_string@$0EA@@@@Z");
//};

//char const * host_selection_factor_get_short_name(enum e_host_selection_factor)
//{
//    mangled_ppc("?host_selection_factor_get_short_name@@YAPBDW4e_host_selection_factor@@@Z");
//};

//void network_configuration_initialize(bool)
//{
//    mangled_ppc("?network_configuration_initialize@@YAX_N@Z");
//};

//void network_configuration_dispose(void)
//{
//    mangled_ppc("?network_configuration_dispose@@YAXXZ");
//};

//enum e_network_configuration_state network_configuration_get_state(void)
//{
//    mangled_ppc("?network_configuration_get_state@@YA?AW4e_network_configuration_state@@XZ");
//};

//public: bool c_network_storage_file_base::failed(void) const
//{
//    mangled_ppc("?failed@c_network_storage_file_base@@QBA_NXZ");
//};

//public: bool c_network_storage_file_base::ready_with_data(void) const
//{
//    mangled_ppc("?ready_with_data@c_network_storage_file_base@@QBA_NXZ");
//};

//void network_build_network_configuration(void)
//{
//    mangled_ppc("?network_build_network_configuration@@YAXXZ");
//};

//public: s_network_configuration_file::s_network_configuration_file(void)
//{
//    mangled_ppc("??0s_network_configuration_file@@QAA@XZ");
//};

//void network_configuration_initialize_private(bool)
//{
//    mangled_ppc("?network_configuration_initialize_private@@YAX_N@Z");
//};

//enum e_player_grade operator++(enum e_player_grade &, int)
//{
//    mangled_ppc("??E@YA?AW4e_player_grade@@AAW40@H@Z");
//};

//enum e_player_sub_grade operator++(enum e_player_sub_grade &, int)
//{
//    mangled_ppc("??E@YA?AW4e_player_sub_grade@@AAW40@H@Z");
//};

//void network_configuration_sanitize(void)
//{
//    mangled_ppc("?network_configuration_sanitize@@YAXXZ");
//};

//enum e_simulation_event_type operator++(enum e_simulation_event_type &, int)
//{
//    mangled_ppc("??E@YA?AW4e_simulation_event_type@@AAW40@H@Z");
//};

//void network_configuration_initialize_simulation_constants(void)
//{
//    mangled_ppc("?network_configuration_initialize_simulation_constants@@YAXXZ");
//};

//void network_configuration_initialize_simulation_event_constants(void)
//{
//    mangled_ppc("?network_configuration_initialize_simulation_event_constants@@YAXXZ");
//};

//void network_configuration_initialize_simulation_entity_constants(void)
//{
//    mangled_ppc("?network_configuration_initialize_simulation_entity_constants@@YAXXZ");
//};

//void network_configuration_initialize_simulation_entity_creation_constants(void)
//{
//    mangled_ppc("?network_configuration_initialize_simulation_entity_creation_constants@@YAXXZ");
//};

//void network_configuration_initialize_simulation_entity_update_constants(void)
//{
//    mangled_ppc("?network_configuration_initialize_simulation_entity_update_constants@@YAXXZ");
//};

//void network_configuration_initialize_channel_manager_constants(void)
//{
//    mangled_ppc("?network_configuration_initialize_channel_manager_constants@@YAXXZ");
//};

//bool network_configuration_custom_games_enabled(void)
//{
//    mangled_ppc("?network_configuration_custom_games_enabled@@YA_NXZ");
//};

//long network_configuration_client_badness_rating_threshold(void)
//{
//    mangled_ppc("?network_configuration_client_badness_rating_threshold@@YAJXZ");
//};

//bool network_configuration_disable_bad_client_anticheating(void)
//{
//    mangled_ppc("?network_configuration_disable_bad_client_anticheating@@YA_NXZ");
//};

//bool network_configuration_disable_bad_connectivity_anticheating(void)
//{
//    mangled_ppc("?network_configuration_disable_bad_connectivity_anticheating@@YA_NXZ");
//};

//bool network_configuration_disable_bad_bandwidth_anticheating(void)
//{
//    mangled_ppc("?network_configuration_disable_bad_bandwidth_anticheating@@YA_NXZ");
//};

//long network_configuration_maximum_multiplayer_split_screen(void)
//{
//    mangled_ppc("?network_configuration_maximum_multiplayer_split_screen@@YAJXZ");
//};

//long network_configuration_get_map_index_from_map_id(enum e_map_id)
//{
//    mangled_ppc("?network_configuration_get_map_index_from_map_id@@YAJW4e_map_id@@@Z");
//};

//enum e_map_id network_configuration_get_map_id_from_map_index(long)
//{
//    mangled_ppc("?network_configuration_get_map_id_from_map_index@@YA?AW4e_map_id@@J@Z");
//};

//bool network_configuration_crash_on_dirty_disc_error(void)
//{
//    mangled_ppc("?network_configuration_crash_on_dirty_disc_error@@YA_NXZ");
//};

//bool network_configuration_display_crash_handling_ui(void)
//{
//    mangled_ppc("?network_configuration_display_crash_handling_ui@@YA_NXZ");
//};

//enum e_minidump_generation network_configuration_get_minidump_generation_type(void)
//{
//    mangled_ppc("?network_configuration_get_minidump_generation_type@@YA?AW4e_minidump_generation@@XZ");
//};

//bool network_configuration_notify_changed(void)
//{
//    mangled_ppc("?network_configuration_notify_changed@@YA_NXZ");
//};

//long network_configuration_get_specialized_replication_family_index_from_config_family_index(long, long)
//{
//    mangled_ppc("?network_configuration_get_specialized_replication_family_index_from_config_family_index@@YAJJJ@Z");
//};

//long network_configuration_get_specialized_replication_family_index(long, long)
//{
//    mangled_ppc("?network_configuration_get_specialized_replication_family_index@@YAJJJ@Z");
//};

//bool network_configuration_event_type_is_in_replication_family(long)
//{
//    mangled_ppc("?network_configuration_event_type_is_in_replication_family@@YA_NJ@Z");
//};

//public: c_enum<enum e_blf_file_authentication_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_blf_file_authentication_type, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_blf_file_authentication_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_blf_file_authentication_type@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_blf_file_authentication_type@@@Z");
//};

//public: struct s_network_configuration const * c_blf_simple_network_storage_file<struct s_network_configuration>::get(void) const
//{
//    mangled_ppc("?get@?$c_blf_simple_network_storage_file@Us_network_configuration@@@@QBAPBUs_network_configuration@@XZ");
//};

//public: struct s_banhammer_upload_failure_configuration & s_static_array<struct s_banhammer_upload_failure_configuration, 4>::operator[]<enum e_network_banhammer_upload_failure_type>(enum e_network_banhammer_upload_failure_type)
//{
//    mangled_ppc("??$?AW4e_network_banhammer_upload_failure_type@@@?$s_static_array@Us_banhammer_upload_failure_configuration@@$03@@QAAAAUs_banhammer_upload_failure_configuration@@W4e_network_banhammer_upload_failure_type@@@Z");
//};

//public: struct s_replication_family_configuration & s_static_array<struct s_replication_family_configuration, 10>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_replication_family_configuration@@$09@@QAAAAUs_replication_family_configuration@@H@Z");
//};

//public: struct s_lsp_service_configuration & s_static_array<struct s_lsp_service_configuration, 8>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_lsp_service_configuration@@$07@@QAAAAUs_lsp_service_configuration@@J@Z");
//};

//public: struct s_lsp_service_configuration & s_static_array<struct s_lsp_service_configuration, 8>::operator[]<enum e_online_lsp_service_type>(enum e_online_lsp_service_type)
//{
//    mangled_ppc("??$?AW4e_online_lsp_service_type@@@?$s_static_array@Us_lsp_service_configuration@@$07@@QAAAAUs_lsp_service_configuration@@W4e_online_lsp_service_type@@@Z");
//};

//public: struct s_map_information & s_static_array<struct s_map_information, 64>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_map_information@@$0EA@@@QAAAAUs_map_information@@J@Z");
//};

//public: class s_static_array<long, 5> & s_static_array<class s_static_array<long, 5>, 21>::operator[]<enum e_player_grade>(enum e_player_grade)
//{
//    mangled_ppc("??$?AW4e_player_grade@@@?$s_static_array@V?$s_static_array@J$04@@$0BF@@@QAAAAV?$s_static_array@J$04@@W4e_player_grade@@@Z");
//};

//public: long & s_static_array<long, 5>::operator[]<enum e_player_sub_grade>(enum e_player_sub_grade)
//{
//    mangled_ppc("??$?AW4e_player_sub_grade@@@?$s_static_array@J$04@@QAAAAJW4e_player_sub_grade@@@Z");
//};

//public: class s_static_array<float, 5> & s_static_array<class s_static_array<float, 5>, 21>::operator[]<enum e_player_grade>(enum e_player_grade)
//{
//    mangled_ppc("??$?AW4e_player_grade@@@?$s_static_array@V?$s_static_array@M$04@@$0BF@@@QAAAAV?$s_static_array@M$04@@W4e_player_grade@@@Z");
//};

//public: float & s_static_array<float, 5>::operator[]<enum e_player_sub_grade>(enum e_player_sub_grade)
//{
//    mangled_ppc("??$?AW4e_player_sub_grade@@@?$s_static_array@M$04@@QAAAAMW4e_player_sub_grade@@@Z");
//};

//public: struct s_replication_family_configuration & s_static_array<struct s_replication_family_configuration, 10>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_replication_family_configuration@@$09@@QAAAAUs_replication_family_configuration@@J@Z");
//};

//public: static bool s_static_array<struct s_banhammer_upload_failure_configuration, 4>::valid<enum e_network_banhammer_upload_failure_type>(enum e_network_banhammer_upload_failure_type)
//{
//    mangled_ppc("??$valid@W4e_network_banhammer_upload_failure_type@@@?$s_static_array@Us_banhammer_upload_failure_configuration@@$03@@SA_NW4e_network_banhammer_upload_failure_type@@@Z");
//};

//public: static bool s_static_array<struct s_replication_family_configuration, 10>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_replication_family_configuration@@$09@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_lsp_service_configuration, 8>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_lsp_service_configuration@@$07@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_lsp_service_configuration, 8>::valid<enum e_online_lsp_service_type>(enum e_online_lsp_service_type)
//{
//    mangled_ppc("??$valid@W4e_online_lsp_service_type@@@?$s_static_array@Us_lsp_service_configuration@@$07@@SA_NW4e_online_lsp_service_type@@@Z");
//};

//public: static bool s_static_array<struct s_map_information, 64>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_map_information@@$0EA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class s_static_array<long, 5>, 21>::valid<enum e_player_grade>(enum e_player_grade)
//{
//    mangled_ppc("??$valid@W4e_player_grade@@@?$s_static_array@V?$s_static_array@J$04@@$0BF@@@SA_NW4e_player_grade@@@Z");
//};

//public: static bool s_static_array<long, 5>::valid<enum e_player_sub_grade>(enum e_player_sub_grade)
//{
//    mangled_ppc("??$valid@W4e_player_sub_grade@@@?$s_static_array@J$04@@SA_NW4e_player_sub_grade@@@Z");
//};

//public: static bool s_static_array<class s_static_array<float, 5>, 21>::valid<enum e_player_grade>(enum e_player_grade)
//{
//    mangled_ppc("??$valid@W4e_player_grade@@@?$s_static_array@V?$s_static_array@M$04@@$0BF@@@SA_NW4e_player_grade@@@Z");
//};

//public: static bool s_static_array<float, 5>::valid<enum e_player_sub_grade>(enum e_player_sub_grade)
//{
//    mangled_ppc("??$valid@W4e_player_sub_grade@@@?$s_static_array@M$04@@SA_NW4e_player_sub_grade@@@Z");
//};

//public: static bool s_static_array<struct s_replication_family_configuration, 10>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_replication_family_configuration@@$09@@SA_NJ@Z");
//};

