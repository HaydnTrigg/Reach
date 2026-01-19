/* ---------- headers */

#include "omaha\networking\logic\network_join.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_networking_join_queue_entry, 32>::k_element_count; // "?k_element_count@?$s_static_array@Us_networking_join_queue_entry@@$0CA@@@2JB"
// struct s_online_context *g_posse_creation_contexts; // "?g_posse_creation_contexts@@3PAUs_online_context@@A"
// struct s_online_context *g_group_creation_contexts; // "?g_group_creation_contexts@@3PAUs_online_context@@A"
// struct s_networking_join_data g_network_join_data; // "?g_network_join_data@@3Us_networking_join_data@@A"

// void network_join_update(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: void c_network_session::set_session_type(enum e_network_session_type);
// public: enum e_network_join_refuse_reason c_network_session::join_refuse_reason(void) const;
// public: void c_network_session::clear_join_refuse_reason(void);
// public: unsigned __int64 c_network_session::host_join_nonce(void) const;
// public: void c_network_session::leave_session_and_disconnect(void);
// void network_join_disable_outgoing_joins(bool);
// bool network_join_is_join_to_squad_in_progress(void);
// bool network_join_is_any_join_in_progress(void);
// bool network_join_is_any_join_in_progress_or_join_queue_active(void);
// enum e_life_cycle_join_result network_join_get_squad_join_result(enum e_network_join_squad_join_source);
// void network_join_clear_squad_join_result(enum e_network_join_squad_join_source);
// bool network_join_to_remote_squad(enum e_network_join_squad_join_source, bool, bool, bool, enum e_network_session_class, struct s_transport_secure_identifier const *, struct s_transport_secure_key const *, struct s_transport_secure_address const *);
// enum e_life_cycle_join_result network_join_get_join_result(void);
// void network_join_clear_join_result(void);
// void network_join_local_squad_to_local_posse(void);
// void network_join_local_posse_to_local_group(void);
// void network_join_posse_to_remote_posse(struct s_transport_secure_identifier const *, struct s_transport_secure_key const *, struct s_transport_secure_address const *);
// void network_join_group_to_remote_group(struct s_transport_secure_identifier const *, struct s_transport_secure_key const *, struct s_transport_secure_address const *, struct s_group_session_join_request_payload const *);
// void network_join_leave_posse_session_and_swap_if_necessary(enum e_networking_join_destination_squad);
// bool network_join_is_leaving_or_will_leave_posse(void);
// void network_join_leave_group_session_and_swap_if_necessary(enum e_networking_join_destination_squad);
// bool network_join_is_leaving_or_will_leave_group(void);
// enum e_life_cycle_join_result network_join_map_refuse_reason_to_join_result(enum e_network_join_refuse_reason, bool, class c_network_session const *);
// void network_join_queue_update(void);
// bool network_join_process_joins_from_queue(void);
// enum e_network_join_queue_mode network_join_get_join_queue_mode(void);
// void network_join_set_join_queue_mode(enum e_network_join_queue_mode);
// long network_join_number_of_joins_in_queue(void);
// void network_join_add_join_to_queue(class c_network_session *, struct transport_address const *, struct s_network_session_join_request const *);
// void network_join_remove_join_from_queue(unsigned __int64);
// void network_join_calculate_full_queue_desirability(class c_network_session_membership const *);
// void network_join_remove_join_from_queue_internal(struct s_networking_join_queue_entry *);
// void network_join_flush_join_queue(void);
// void network_join_flush_our_join_from_join_queue(struct s_transport_secure_address const *, unsigned __int64);
// bool network_join_queue_handling_group_joins(void);
// public: bool c_enum_no_init<enum e_network_session_class, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_network_session_class) const;
// public: c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>::c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>(enum e_life_cycle_join_result);
// public: enum e_life_cycle_join_result c_enum_no_init<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>::operator enum e_life_cycle_join_result(void) const;
// public: bool c_enum_no_init<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>::operator==(enum e_life_cycle_join_result) const;
// public: static long s_static_array<struct s_networking_join_queue_entry, 32>::get_count(void);
// public: struct s_networking_join_queue_entry & s_static_array<struct s_networking_join_queue_entry, 32>::operator[]<long>(long);
// public: void c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::set_all(void);
// public: long c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::count_set(void) const;
// public: struct s_networking_join_queue_entry & s_static_array<struct s_networking_join_queue_entry, 32>::operator[]<int>(int);
// public: static bool s_static_array<struct s_networking_join_queue_entry, 32>::valid<long>(long);
// public: static class c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::make_mask_from_range(long, long);
// public: static bool s_static_array<struct s_networking_join_queue_entry, 32>::valid<int>(int);
// public: s_networking_join_data::s_networking_join_data(void);

//void network_join_update(void)
//{
//    mangled_ppc("?network_join_update@@YAXXZ");
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

//public: void c_network_session::set_session_type(enum e_network_session_type)
//{
//    mangled_ppc("?set_session_type@c_network_session@@QAAXW4e_network_session_type@@@Z");
//};

//public: enum e_network_join_refuse_reason c_network_session::join_refuse_reason(void) const
//{
//    mangled_ppc("?join_refuse_reason@c_network_session@@QBA?AW4e_network_join_refuse_reason@@XZ");
//};

//public: void c_network_session::clear_join_refuse_reason(void)
//{
//    mangled_ppc("?clear_join_refuse_reason@c_network_session@@QAAXXZ");
//};

//public: unsigned __int64 c_network_session::host_join_nonce(void) const
//{
//    mangled_ppc("?host_join_nonce@c_network_session@@QBA_KXZ");
//};

//public: void c_network_session::leave_session_and_disconnect(void)
//{
//    mangled_ppc("?leave_session_and_disconnect@c_network_session@@QAAXXZ");
//};

//void network_join_disable_outgoing_joins(bool)
//{
//    mangled_ppc("?network_join_disable_outgoing_joins@@YAX_N@Z");
//};

//bool network_join_is_join_to_squad_in_progress(void)
//{
//    mangled_ppc("?network_join_is_join_to_squad_in_progress@@YA_NXZ");
//};

//bool network_join_is_any_join_in_progress(void)
//{
//    mangled_ppc("?network_join_is_any_join_in_progress@@YA_NXZ");
//};

//bool network_join_is_any_join_in_progress_or_join_queue_active(void)
//{
//    mangled_ppc("?network_join_is_any_join_in_progress_or_join_queue_active@@YA_NXZ");
//};

//enum e_life_cycle_join_result network_join_get_squad_join_result(enum e_network_join_squad_join_source)
//{
//    mangled_ppc("?network_join_get_squad_join_result@@YA?AW4e_life_cycle_join_result@@W4e_network_join_squad_join_source@@@Z");
//};

//void network_join_clear_squad_join_result(enum e_network_join_squad_join_source)
//{
//    mangled_ppc("?network_join_clear_squad_join_result@@YAXW4e_network_join_squad_join_source@@@Z");
//};

//bool network_join_to_remote_squad(enum e_network_join_squad_join_source, bool, bool, bool, enum e_network_session_class, struct s_transport_secure_identifier const *, struct s_transport_secure_key const *, struct s_transport_secure_address const *)
//{
//    mangled_ppc("?network_join_to_remote_squad@@YA_NW4e_network_join_squad_join_source@@_N11W4e_network_session_class@@PBUs_transport_secure_identifier@@PBUs_transport_secure_key@@PBUs_transport_secure_address@@@Z");
//};

//enum e_life_cycle_join_result network_join_get_join_result(void)
//{
//    mangled_ppc("?network_join_get_join_result@@YA?AW4e_life_cycle_join_result@@XZ");
//};

//void network_join_clear_join_result(void)
//{
//    mangled_ppc("?network_join_clear_join_result@@YAXXZ");
//};

//void network_join_local_squad_to_local_posse(void)
//{
//    mangled_ppc("?network_join_local_squad_to_local_posse@@YAXXZ");
//};

//void network_join_local_posse_to_local_group(void)
//{
//    mangled_ppc("?network_join_local_posse_to_local_group@@YAXXZ");
//};

//void network_join_posse_to_remote_posse(struct s_transport_secure_identifier const *, struct s_transport_secure_key const *, struct s_transport_secure_address const *)
//{
//    mangled_ppc("?network_join_posse_to_remote_posse@@YAXPBUs_transport_secure_identifier@@PBUs_transport_secure_key@@PBUs_transport_secure_address@@@Z");
//};

//void network_join_group_to_remote_group(struct s_transport_secure_identifier const *, struct s_transport_secure_key const *, struct s_transport_secure_address const *, struct s_group_session_join_request_payload const *)
//{
//    mangled_ppc("?network_join_group_to_remote_group@@YAXPBUs_transport_secure_identifier@@PBUs_transport_secure_key@@PBUs_transport_secure_address@@PBUs_group_session_join_request_payload@@@Z");
//};

//void network_join_leave_posse_session_and_swap_if_necessary(enum e_networking_join_destination_squad)
//{
//    mangled_ppc("?network_join_leave_posse_session_and_swap_if_necessary@@YAXW4e_networking_join_destination_squad@@@Z");
//};

//bool network_join_is_leaving_or_will_leave_posse(void)
//{
//    mangled_ppc("?network_join_is_leaving_or_will_leave_posse@@YA_NXZ");
//};

//void network_join_leave_group_session_and_swap_if_necessary(enum e_networking_join_destination_squad)
//{
//    mangled_ppc("?network_join_leave_group_session_and_swap_if_necessary@@YAXW4e_networking_join_destination_squad@@@Z");
//};

//bool network_join_is_leaving_or_will_leave_group(void)
//{
//    mangled_ppc("?network_join_is_leaving_or_will_leave_group@@YA_NXZ");
//};

//enum e_life_cycle_join_result network_join_map_refuse_reason_to_join_result(enum e_network_join_refuse_reason, bool, class c_network_session const *)
//{
//    mangled_ppc("?network_join_map_refuse_reason_to_join_result@@YA?AW4e_life_cycle_join_result@@W4e_network_join_refuse_reason@@_NPBVc_network_session@@@Z");
//};

//void network_join_queue_update(void)
//{
//    mangled_ppc("?network_join_queue_update@@YAXXZ");
//};

//bool network_join_process_joins_from_queue(void)
//{
//    mangled_ppc("?network_join_process_joins_from_queue@@YA_NXZ");
//};

//enum e_network_join_queue_mode network_join_get_join_queue_mode(void)
//{
//    mangled_ppc("?network_join_get_join_queue_mode@@YA?AW4e_network_join_queue_mode@@XZ");
//};

//void network_join_set_join_queue_mode(enum e_network_join_queue_mode)
//{
//    mangled_ppc("?network_join_set_join_queue_mode@@YAXW4e_network_join_queue_mode@@@Z");
//};

//long network_join_number_of_joins_in_queue(void)
//{
//    mangled_ppc("?network_join_number_of_joins_in_queue@@YAJXZ");
//};

//void network_join_add_join_to_queue(class c_network_session *, struct transport_address const *, struct s_network_session_join_request const *)
//{
//    mangled_ppc("?network_join_add_join_to_queue@@YAXPAVc_network_session@@PBUtransport_address@@PBUs_network_session_join_request@@@Z");
//};

//void network_join_remove_join_from_queue(unsigned __int64)
//{
//    mangled_ppc("?network_join_remove_join_from_queue@@YAX_K@Z");
//};

//void network_join_calculate_full_queue_desirability(class c_network_session_membership const *)
//{
//    mangled_ppc("?network_join_calculate_full_queue_desirability@@YAXPBVc_network_session_membership@@@Z");
//};

//void network_join_remove_join_from_queue_internal(struct s_networking_join_queue_entry *)
//{
//    mangled_ppc("?network_join_remove_join_from_queue_internal@@YAXPAUs_networking_join_queue_entry@@@Z");
//};

//void network_join_flush_join_queue(void)
//{
//    mangled_ppc("?network_join_flush_join_queue@@YAXXZ");
//};

//void network_join_flush_our_join_from_join_queue(struct s_transport_secure_address const *, unsigned __int64)
//{
//    mangled_ppc("?network_join_flush_our_join_from_join_queue@@YAXPBUs_transport_secure_address@@_K@Z");
//};

//bool network_join_queue_handling_group_joins(void)
//{
//    mangled_ppc("?network_join_queue_handling_group_joins@@YA_NXZ");
//};

//public: bool c_enum_no_init<enum e_network_session_class, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator==(enum e_network_session_class) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_network_session_class@@E$0A@$03Us_default_enum_string_resolver@@@@QBA_NW4e_network_session_class@@@Z");
//};

//public: c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>::c_enum<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>(enum e_life_cycle_join_result)
//{
//    mangled_ppc("??0?$c_enum@W4e_life_cycle_join_result@@D$0A@$0BF@Us_default_enum_string_resolver@@@@QAA@W4e_life_cycle_join_result@@@Z");
//};

//public: enum e_life_cycle_join_result c_enum_no_init<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>::operator enum e_life_cycle_join_result(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_life_cycle_join_result@@D$0A@$0BF@Us_default_enum_string_resolver@@@@QBA?AW4e_life_cycle_join_result@@XZ");
//};

//public: bool c_enum_no_init<enum e_life_cycle_join_result, char, 0, 21, struct s_default_enum_string_resolver>::operator==(enum e_life_cycle_join_result) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_life_cycle_join_result@@D$0A@$0BF@Us_default_enum_string_resolver@@@@QBA_NW4e_life_cycle_join_result@@@Z");
//};

//public: static long s_static_array<struct s_networking_join_queue_entry, 32>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_networking_join_queue_entry@@$0CA@@@SAJXZ");
//};

//public: struct s_networking_join_queue_entry & s_static_array<struct s_networking_join_queue_entry, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_networking_join_queue_entry@@$0CA@@@QAAAAUs_networking_join_queue_entry@@J@Z");
//};

//public: void c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::set_all(void)
//{
//    mangled_ppc("?set_all@?$c_flags_no_init@JK$0CA@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: long c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@JK$0CA@Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: struct s_networking_join_queue_entry & s_static_array<struct s_networking_join_queue_entry, 32>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_networking_join_queue_entry@@$0CA@@@QAAAAUs_networking_join_queue_entry@@H@Z");
//};

//public: static bool s_static_array<struct s_networking_join_queue_entry, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_networking_join_queue_entry@@$0CA@@@SA_NJ@Z");
//};

//public: static class c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned long, 32, struct s_default_enum_string_resolver>::make_mask_from_range(long, long)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@JK$0CA@Us_default_enum_string_resolver@@@@SA?AV1@JJ@Z");
//};

//public: static bool s_static_array<struct s_networking_join_queue_entry, 32>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_networking_join_queue_entry@@$0CA@@@SA_NH@Z");
//};

//public: s_networking_join_data::s_networking_join_data(void)
//{
//    mangled_ppc("??0s_networking_join_data@@QAA@XZ");
//};

