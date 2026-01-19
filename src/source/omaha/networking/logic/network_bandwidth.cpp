/* ---------- headers */

#include "omaha\networking\logic\network_bandwidth.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_network_quality_context, char, -1, 2, struct s_network_quality_context_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_network_quality_context@@D$0?0$01Us_network_quality_context_string_resolver@@@@2HB"
// public: static enum e_network_quality_context const c_enum_no_init<enum e_network_quality_context, char, -1, 2, struct s_network_quality_context_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_network_quality_context@@D$0?0$01Us_network_quality_context_string_resolver@@@@2W4e_network_quality_context@@B"
// public: static int const c_enum_no_init<enum e_badness_type, char, 0, 8, struct s_badness_type_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_badness_type@@D$0A@$07Us_badness_type_string_resolver@@@@2HB"
// public: static enum e_badness_type const c_enum_no_init<enum e_badness_type, char, 0, 8, struct s_badness_type_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_badness_type@@D$0A@$07Us_badness_type_string_resolver@@@@2W4e_badness_type@@B"
// char const **network_quality_context_names; // "?network_quality_context_names@@3PAPBDA"
// char const **badness_type_names; // "?badness_type_names@@3PAPBDA"
// long volatile `public: void __cdecl c_big_flags_typed_no_init<long, 128>::clear(void)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??clear@?$c_big_flags_typed_no_init@J$0IA@@@QAAXXZ@4JC"
// long volatile `public: void __cdecl c_big_flags_typed_no_init<long, 64>::clear(void)'::`35'::x_event_category_index; // "?x_event_category_index@?CD@??clear@?$c_big_flags_typed_no_init@J$0EA@@@QAAXXZ@4JC"

// public: static void s_network_quality_context_string_resolver::to_string(enum e_network_quality_context, class c_static_string<64> *);
// public: static void s_badness_type_string_resolver::to_string(enum e_badness_type, class c_static_string<64> *);
// bool network_bandwidth_initialize(class c_network_channel_manager *, struct s_bandwidth_configuration const *);
// void network_bandwidth_dispose(void);
// void network_bandwidth_update(void);
// void network_bandwidth_set_quality_statistics_from_LSP(struct s_network_quality_statistics const *, bool);
// bool network_bandwidth_has_quality_statistics_from_LSP(void);
// struct s_network_quality_statistics const * network_bandwidth_get_quality_statistics(void);
// struct s_network_quality const * network_bandwidth_get_quality(void);
// void network_bandwidth_set_online_network_environment(bool);
// bool network_bandwidth_get_online_network_environment(void);
// void network_bandwidth_notify_live_service_qos_measurement(struct s_transport_qos_result const *);
// void network_bandwidth_notify_local_machine_selected_as_matchmaking_game_host(void);
// void network_bandwidth_record_badness(enum e_badness_type, bool, long, enum e_network_quality_context, char const *);
// void network_bandwidth_record_speculative_host_migration_count(long);
// public: void s_network_quality_estimated::sanitize_for_encode(void);
// public: void s_network_quality_estimated::encode(class c_bitstream *) const;
// public: void s_network_quality_estimated::decode(class c_bitstream *);
// public: bool s_network_quality_estimated::compare_and_sanitize(struct s_network_quality_estimated *) const;
// public: void s_network_quality_live::sanitize_for_encode(void);
// public: void s_network_quality_live::encode(class c_bitstream *) const;
// public: bool s_network_quality_live::compare_and_sanitize(struct s_network_quality_live *) const;
// public: void s_network_quality_live::decode(class c_bitstream *);
// public: void s_network_quality::sanitize_for_encode(void);
// public: void s_network_quality::encode(class c_bitstream *) const;
// public: void s_network_quality::decode(class c_bitstream *);
// public: bool s_network_quality::compare_and_sanitize(struct s_network_quality *) const;
// public: bool s_measurement_metadata::valid(void);
// public: bool s_latency_measurement::valid(void);
// public: bool s_packet_loss_measurement::valid(void);
// public: bool s_bandwidth_host_measurement::valid(void);
// public: bool s_bandwidth_client_measurement::valid(void);
// void network_bandwidth_quality_statistics_dump(void);
// enum e_network_quality_context operator++(enum e_network_quality_context &, int);
// void network_bandwidth_quality_statistics_clear(void);
// void network_bandwidth_quality_set_connection_badness_history(bool, short);
// void network_bandwidth_quality_set_squad_client_badness_history(bool, short);
// void network_bandwidth_quality_set_squad_bridging_badness_history(bool, short);
// void network_bandwidth_quality_set_squad_host_badness_history(bool, short);
// void network_bandwidth_quality_set_squad_speculative_migration_badness_history(bool, short);
// void network_bandwidth_quality_set_group_client_badness_history(bool, short);
// void network_bandwidth_quality_set_group_host_badness_history(bool, short);
// void network_bandwidth_quality_set_group_speculative_migration_badness_history(bool, short);
// void network_bandwidth_quality_set_group_bridging_badness_history(bool, short);
// void network_bandwidth_update_quality_from_channel_manager(void);
// void network_bandwidth_update_quality(void);
// void network_bandwidth_update_quality_from_machine_file(void);
// void network_bandwidth_tracking_begin(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// void network_bandwidth_tracking_end(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// void network_bandwidth_check_qos_for_connection_change(void);
// void network_bandwidth_in_game_changed(void);
// void compute_average_and_standard_deviation(long *, long, float *, float *);
// public: long c_static_stack<struct s_bandwidth_host_measurement, 16>::top(void) const;
// public: long c_static_stack<struct s_bandwidth_host_measurement, 16>::count(void) const;
// public: struct s_bandwidth_host_measurement const & c_static_stack<struct s_bandwidth_host_measurement, 16>::operator[](long) const;
// public: struct s_bandwidth_host_measurement * c_static_stack<struct s_bandwidth_host_measurement, 16>::get(long);
// public: long c_static_stack<struct s_bandwidth_client_measurement, 8>::count(void) const;
// public: long c_static_stack<struct s_bandwidth_local_measurement, 32>::count(void) const;
// public: struct s_bandwidth_local_measurement const & c_static_stack<struct s_bandwidth_local_measurement, 32>::operator[](long) const;
// public: struct s_bandwidth_local_measurement & c_static_stack<struct s_bandwidth_local_measurement, 32>::operator[](long);
// public: struct s_bandwidth_local_measurement const * c_static_stack<struct s_bandwidth_local_measurement, 32>::get(long) const;
// public: c_enum<enum e_network_quality_context, char, -1, 2, struct s_network_quality_context_string_resolver>::c_enum<enum e_network_quality_context, char, -1, 2, struct s_network_quality_context_string_resolver>(enum e_network_quality_context);
// public: class c_static_string<64> c_enum_no_init<enum e_network_quality_context, char, -1, 2, struct s_network_quality_context_string_resolver>::to_string(void) const;
// public: c_enum<enum e_badness_type, char, 0, 8, struct s_badness_type_string_resolver>::c_enum<enum e_badness_type, char, 0, 8, struct s_badness_type_string_resolver>(enum e_badness_type);
// public: class c_static_string<64> c_enum_no_init<enum e_badness_type, char, 0, 8, struct s_badness_type_string_resolver>::to_string(void) const;
// public: bool c_static_stack<struct s_bandwidth_host_measurement, 16>::valid(long) const;
// public: bool c_static_stack<struct s_bandwidth_host_measurement, 16>::empty(void) const;
// public: bool c_static_stack<struct s_bandwidth_local_measurement, 32>::valid(long) const;
// public: bool c_enum_no_init<enum e_network_quality_context, char, -1, 2, struct s_network_quality_context_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_badness_type, char, 0, 8, struct s_badness_type_string_resolver>::in_range(void) const;
// public: bool c_static_stack<struct s_bandwidth_host_measurement, 16>::valid(void) const;
// public: bool c_static_stack<struct s_bandwidth_local_measurement, 32>::valid(void) const;
// public: long c_big_flags_typed_no_init<long, 128>::count_set(void) const;
// public: long c_big_flags_typed_no_init<long, 256>::count_set(void) const;
// void network_bandwidth_rotate_in_new_element<struct s_bandwidth_local_measurement, 32>(class c_static_stack<struct s_bandwidth_local_measurement, 32> *, struct s_bandwidth_local_measurement *);
// public: struct s_network_quality_context_statistics & s_static_array<struct s_network_quality_context_statistics, 2>::operator[]<enum e_network_quality_context>(enum e_network_quality_context);
// void rotate_in_bits<class c_big_flags<128> >(class c_big_flags<128> *, bool, long);
// void rotate_in_bits<class c_big_flags<256> >(class c_big_flags<256> *, bool, long);
// void rotate_in_bits<class c_big_flags<64> >(class c_big_flags<64> *, bool, long);
// long count_lowest_run_in_flags<class c_big_flags<128> >(class c_big_flags<128>);
// public: struct s_network_quality_context_statistics const & s_static_array<struct s_network_quality_context_statistics, 2>::operator[]<enum e_network_quality_context>(enum e_network_quality_context) const;
// long count_lowest_run_in_flags<class c_big_flags<256> >(class c_big_flags<256>);
// public: class c_static_stack<struct s_bandwidth_host_measurement, 16> const & s_static_array<class c_static_stack<struct s_bandwidth_host_measurement, 16>, 2>::operator[]<enum e_bandwidth_measurement_type>(enum e_bandwidth_measurement_type) const;
// public: struct s_network_quality_context_statistics const & s_static_array<struct s_network_quality_context_statistics, 2>::operator[]<long>(long) const;
// public: class c_static_stack<struct s_bandwidth_host_measurement, 16> & s_static_array<class c_static_stack<struct s_bandwidth_host_measurement, 16>, 2>::operator[]<enum e_bandwidth_measurement_type>(enum e_bandwidth_measurement_type);
// void network_bandwidth_rotate_in_new_element<struct s_bandwidth_host_measurement, 16>(class c_static_stack<struct s_bandwidth_host_measurement, 16> *, struct s_bandwidth_host_measurement *);
// void network_bandwidth_rotate_in_new_element<struct s_bandwidth_client_measurement, 8>(class c_static_stack<struct s_bandwidth_client_measurement, 8> *, struct s_bandwidth_client_measurement *);
// public: bool c_static_stack<struct s_bandwidth_host_measurement, 16>::full(void) const;
// public: static unsigned int c_static_stack<struct s_bandwidth_host_measurement, 16>::element_size(void);
// public: void c_static_stack<struct s_bandwidth_host_measurement, 16>::push_back(struct s_bandwidth_host_measurement const &);
// public: void c_static_stack<struct s_bandwidth_host_measurement, 16>::pop(void);
// public: bool c_static_stack<struct s_bandwidth_client_measurement, 8>::full(void) const;
// public: static unsigned int c_static_stack<struct s_bandwidth_client_measurement, 8>::element_size(void);
// public: void c_static_stack<struct s_bandwidth_client_measurement, 8>::push_back(struct s_bandwidth_client_measurement const &);
// public: void c_static_stack<struct s_bandwidth_client_measurement, 8>::pop(void);
// public: struct s_bandwidth_client_measurement * c_static_stack<struct s_bandwidth_client_measurement, 8>::get(long);
// public: bool c_static_stack<struct s_bandwidth_local_measurement, 32>::full(void) const;
// public: static unsigned int c_static_stack<struct s_bandwidth_local_measurement, 32>::element_size(void);
// public: void c_static_stack<struct s_bandwidth_local_measurement, 32>::push_back(struct s_bandwidth_local_measurement const &);
// public: void c_static_stack<struct s_bandwidth_local_measurement, 32>::pop(void);
// public: struct s_bandwidth_local_measurement * c_static_stack<struct s_bandwidth_local_measurement, 32>::get(long);
// public: long c_static_stack<struct s_bandwidth_host_measurement, 16>::push(void);
// public: bool c_static_stack<struct s_bandwidth_client_measurement, 8>::valid(void) const;
// public: bool c_static_stack<struct s_bandwidth_client_measurement, 8>::valid(long) const;
// public: bool c_static_stack<struct s_bandwidth_client_measurement, 8>::empty(void) const;
// public: long c_static_stack<struct s_bandwidth_client_measurement, 8>::push(void);
// public: bool c_static_stack<struct s_bandwidth_local_measurement, 32>::empty(void) const;
// public: long c_static_stack<struct s_bandwidth_local_measurement, 32>::push(void);
// public: void c_big_flags_typed_no_init<long, 128>::set_range(long, long, bool);
// public: class c_big_flags_typed_no_init<long, 128> & c_big_flags_typed_no_init<long, 128>::operator<<=(long);
// public: class c_big_flags_typed_no_init<long, 256> & c_big_flags_typed_no_init<long, 256>::operator<<=(long);
// public: void c_big_flags_typed_no_init<long, 64>::set_range(long, long, bool);
// public: class c_big_flags_typed_no_init<long, 64> & c_big_flags_typed_no_init<long, 64>::operator<<=(long);
// public: static bool s_static_array<struct s_network_quality_context_statistics, 2>::valid<enum e_network_quality_context>(enum e_network_quality_context);
// public: static bool s_static_array<class c_static_stack<struct s_bandwidth_host_measurement, 16>, 2>::valid<enum e_bandwidth_measurement_type>(enum e_bandwidth_measurement_type);
// public: static bool s_static_array<struct s_network_quality_context_statistics, 2>::valid<long>(long);
// protected: void c_big_flags_typed_no_init<long, 128>::make_valid(void);
// protected: void c_big_flags_typed_no_init<long, 256>::make_valid(void);
// public: static bool c_big_flags_typed_no_init<long, 64>::valid_bit(long);
// public: bool c_big_flags_typed_no_init<long, 64>::valid(void) const;
// protected: static long c_big_flags_typed_no_init<long, 64>::bit_index_to_flag_chunk_index(long);
// protected: void c_big_flags_typed_no_init<long, 64>::make_valid(void);
// protected: static unsigned long c_big_flags_typed_no_init<long, 64>::get_mask_of_first_slice_of_chunk_inclusive(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 64>::get_mask_of_second_slice_of_chunk_inclusive(long);
// protected: static long c_big_flags_typed_no_init<long, 64>::flag_chunk_index_to_bit_index(long);
// protected: static unsigned long c_big_flags_typed_no_init<long, 64>::get_valid_mask_of_last_chunk(void);
// protected: static unsigned long c_big_flags_typed_no_init<long, 64>::get_mask_of_first_slice_of_chunk_exclusive(long);
// time;
// public: s_network_bandwidth_globals::s_network_bandwidth_globals(void);
// public: s_network_quality_statistics::s_network_quality_statistics(void);
// public: s_static_array<struct s_network_quality_context_statistics, 2>::s_static_array<struct s_network_quality_context_statistics, 2>(void);
// public: s_network_quality_context_statistics::s_network_quality_context_statistics(void);
// public: s_static_array<class c_static_stack<struct s_bandwidth_host_measurement, 16>, 2>::s_static_array<class c_static_stack<struct s_bandwidth_host_measurement, 16>, 2>(void);
// public: c_static_stack<struct s_bandwidth_host_measurement, 16>::c_static_stack<struct s_bandwidth_host_measurement, 16>(void);
// public: c_static_stack<struct s_bandwidth_client_measurement, 8>::c_static_stack<struct s_bandwidth_client_measurement, 8>(void);
// public: c_big_flags<128>::c_big_flags<128>(void);
// public: c_big_flags<256>::c_big_flags<256>(void);
// public: c_big_flags<64>::c_big_flags<64>(void);
// public: c_static_stack<struct s_bandwidth_local_measurement, 32>::c_static_stack<struct s_bandwidth_local_measurement, 32>(void);
// public: c_big_flags_typed<long, 128>::c_big_flags_typed<long, 128>(void);
// public: c_big_flags_typed<long, 256>::c_big_flags_typed<long, 256>(void);
// public: c_big_flags_typed<long, 64>::c_big_flags_typed<long, 64>(void);
// public: void c_big_flags_typed_no_init<long, 128>::clear(void);
// public: bool c_big_flags_typed_no_init<long, 128>::is_clear(void) const;
// public: void c_big_flags_typed_no_init<long, 64>::clear(void);
// public: bool c_big_flags_typed_no_init<long, 64>::is_clear(void) const;

//public: static void s_network_quality_context_string_resolver::to_string(enum e_network_quality_context, class c_static_string<64> *)
//{
//    mangled_ppc("?to_string@s_network_quality_context_string_resolver@@SAXW4e_network_quality_context@@PAV?$c_static_string@$0EA@@@@Z");
//};

//public: static void s_badness_type_string_resolver::to_string(enum e_badness_type, class c_static_string<64> *)
//{
//    mangled_ppc("?to_string@s_badness_type_string_resolver@@SAXW4e_badness_type@@PAV?$c_static_string@$0EA@@@@Z");
//};

//bool network_bandwidth_initialize(class c_network_channel_manager *, struct s_bandwidth_configuration const *)
//{
//    mangled_ppc("?network_bandwidth_initialize@@YA_NPAVc_network_channel_manager@@PBUs_bandwidth_configuration@@@Z");
//};

//void network_bandwidth_dispose(void)
//{
//    mangled_ppc("?network_bandwidth_dispose@@YAXXZ");
//};

//void network_bandwidth_update(void)
//{
//    mangled_ppc("?network_bandwidth_update@@YAXXZ");
//};

//void network_bandwidth_set_quality_statistics_from_LSP(struct s_network_quality_statistics const *, bool)
//{
//    mangled_ppc("?network_bandwidth_set_quality_statistics_from_LSP@@YAXPBUs_network_quality_statistics@@_N@Z");
//};

//bool network_bandwidth_has_quality_statistics_from_LSP(void)
//{
//    mangled_ppc("?network_bandwidth_has_quality_statistics_from_LSP@@YA_NXZ");
//};

//struct s_network_quality_statistics const * network_bandwidth_get_quality_statistics(void)
//{
//    mangled_ppc("?network_bandwidth_get_quality_statistics@@YAPBUs_network_quality_statistics@@XZ");
//};

//struct s_network_quality const * network_bandwidth_get_quality(void)
//{
//    mangled_ppc("?network_bandwidth_get_quality@@YAPBUs_network_quality@@XZ");
//};

//void network_bandwidth_set_online_network_environment(bool)
//{
//    mangled_ppc("?network_bandwidth_set_online_network_environment@@YAX_N@Z");
//};

//bool network_bandwidth_get_online_network_environment(void)
//{
//    mangled_ppc("?network_bandwidth_get_online_network_environment@@YA_NXZ");
//};

//void network_bandwidth_notify_live_service_qos_measurement(struct s_transport_qos_result const *)
//{
//    mangled_ppc("?network_bandwidth_notify_live_service_qos_measurement@@YAXPBUs_transport_qos_result@@@Z");
//};

//void network_bandwidth_notify_local_machine_selected_as_matchmaking_game_host(void)
//{
//    mangled_ppc("?network_bandwidth_notify_local_machine_selected_as_matchmaking_game_host@@YAXXZ");
//};

//void network_bandwidth_record_badness(enum e_badness_type, bool, long, enum e_network_quality_context, char const *)
//{
//    mangled_ppc("?network_bandwidth_record_badness@@YAXW4e_badness_type@@_NJW4e_network_quality_context@@PBD@Z");
//};

//void network_bandwidth_record_speculative_host_migration_count(long)
//{
//    mangled_ppc("?network_bandwidth_record_speculative_host_migration_count@@YAXJ@Z");
//};

//public: void s_network_quality_estimated::sanitize_for_encode(void)
//{
//    mangled_ppc("?sanitize_for_encode@s_network_quality_estimated@@QAAXXZ");
//};

//public: void s_network_quality_estimated::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_network_quality_estimated@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_network_quality_estimated::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_network_quality_estimated@@QAAXPAVc_bitstream@@@Z");
//};

//public: bool s_network_quality_estimated::compare_and_sanitize(struct s_network_quality_estimated *) const
//{
//    mangled_ppc("?compare_and_sanitize@s_network_quality_estimated@@QBA_NPAU1@@Z");
//};

//public: void s_network_quality_live::sanitize_for_encode(void)
//{
//    mangled_ppc("?sanitize_for_encode@s_network_quality_live@@QAAXXZ");
//};

//public: void s_network_quality_live::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_network_quality_live@@QBAXPAVc_bitstream@@@Z");
//};

//public: bool s_network_quality_live::compare_and_sanitize(struct s_network_quality_live *) const
//{
//    mangled_ppc("?compare_and_sanitize@s_network_quality_live@@QBA_NPAU1@@Z");
//};

//public: void s_network_quality_live::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_network_quality_live@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_network_quality::sanitize_for_encode(void)
//{
//    mangled_ppc("?sanitize_for_encode@s_network_quality@@QAAXXZ");
//};

//public: void s_network_quality::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_network_quality@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_network_quality::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_network_quality@@QAAXPAVc_bitstream@@@Z");
//};

//public: bool s_network_quality::compare_and_sanitize(struct s_network_quality *) const
//{
//    mangled_ppc("?compare_and_sanitize@s_network_quality@@QBA_NPAU1@@Z");
//};

//public: bool s_measurement_metadata::valid(void)
//{
//    mangled_ppc("?valid@s_measurement_metadata@@QAA_NXZ");
//};

//public: bool s_latency_measurement::valid(void)
//{
//    mangled_ppc("?valid@s_latency_measurement@@QAA_NXZ");
//};

//public: bool s_packet_loss_measurement::valid(void)
//{
//    mangled_ppc("?valid@s_packet_loss_measurement@@QAA_NXZ");
//};

//public: bool s_bandwidth_host_measurement::valid(void)
//{
//    mangled_ppc("?valid@s_bandwidth_host_measurement@@QAA_NXZ");
//};

//public: bool s_bandwidth_client_measurement::valid(void)
//{
//    mangled_ppc("?valid@s_bandwidth_client_measurement@@QAA_NXZ");
//};

//void network_bandwidth_quality_statistics_dump(void)
//{
//    mangled_ppc("?network_bandwidth_quality_statistics_dump@@YAXXZ");
//};

//enum e_network_quality_context operator++(enum e_network_quality_context &, int)
//{
//    mangled_ppc("??E@YA?AW4e_network_quality_context@@AAW40@H@Z");
//};

//void network_bandwidth_quality_statistics_clear(void)
//{
//    mangled_ppc("?network_bandwidth_quality_statistics_clear@@YAXXZ");
//};

//void network_bandwidth_quality_set_connection_badness_history(bool, short)
//{
//    mangled_ppc("?network_bandwidth_quality_set_connection_badness_history@@YAX_NF@Z");
//};

//void network_bandwidth_quality_set_squad_client_badness_history(bool, short)
//{
//    mangled_ppc("?network_bandwidth_quality_set_squad_client_badness_history@@YAX_NF@Z");
//};

//void network_bandwidth_quality_set_squad_bridging_badness_history(bool, short)
//{
//    mangled_ppc("?network_bandwidth_quality_set_squad_bridging_badness_history@@YAX_NF@Z");
//};

//void network_bandwidth_quality_set_squad_host_badness_history(bool, short)
//{
//    mangled_ppc("?network_bandwidth_quality_set_squad_host_badness_history@@YAX_NF@Z");
//};

//void network_bandwidth_quality_set_squad_speculative_migration_badness_history(bool, short)
//{
//    mangled_ppc("?network_bandwidth_quality_set_squad_speculative_migration_badness_history@@YAX_NF@Z");
//};

//void network_bandwidth_quality_set_group_client_badness_history(bool, short)
//{
//    mangled_ppc("?network_bandwidth_quality_set_group_client_badness_history@@YAX_NF@Z");
//};

//void network_bandwidth_quality_set_group_host_badness_history(bool, short)
//{
//    mangled_ppc("?network_bandwidth_quality_set_group_host_badness_history@@YAX_NF@Z");
//};

//void network_bandwidth_quality_set_group_speculative_migration_badness_history(bool, short)
//{
//    mangled_ppc("?network_bandwidth_quality_set_group_speculative_migration_badness_history@@YAX_NF@Z");
//};

//void network_bandwidth_quality_set_group_bridging_badness_history(bool, short)
//{
//    mangled_ppc("?network_bandwidth_quality_set_group_bridging_badness_history@@YAX_NF@Z");
//};

//void network_bandwidth_update_quality_from_channel_manager(void)
//{
//    mangled_ppc("?network_bandwidth_update_quality_from_channel_manager@@YAXXZ");
//};

//void network_bandwidth_update_quality(void)
//{
//    mangled_ppc("?network_bandwidth_update_quality@@YAXXZ");
//};

//void network_bandwidth_update_quality_from_machine_file(void)
//{
//    mangled_ppc("?network_bandwidth_update_quality_from_machine_file@@YAXXZ");
//};

//void network_bandwidth_tracking_begin(void)
//{
//    mangled_ppc("?network_bandwidth_tracking_begin@@YAXXZ");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//void network_bandwidth_tracking_end(void)
//{
//    mangled_ppc("?network_bandwidth_tracking_end@@YAXXZ");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//void network_bandwidth_check_qos_for_connection_change(void)
//{
//    mangled_ppc("?network_bandwidth_check_qos_for_connection_change@@YAXXZ");
//};

//void network_bandwidth_in_game_changed(void)
//{
//    mangled_ppc("?network_bandwidth_in_game_changed@@YAXXZ");
//};

//void compute_average_and_standard_deviation(long *, long, float *, float *)
//{
//    mangled_ppc("?compute_average_and_standard_deviation@@YAXPAJJPAM1@Z");
//};

//public: long c_static_stack<struct s_bandwidth_host_measurement, 16>::top(void) const
//{
//    mangled_ppc("?top@?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@QBAJXZ");
//};

//public: long c_static_stack<struct s_bandwidth_host_measurement, 16>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@QBAJXZ");
//};

//public: struct s_bandwidth_host_measurement const & c_static_stack<struct s_bandwidth_host_measurement, 16>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@QBAABUs_bandwidth_host_measurement@@J@Z");
//};

//public: struct s_bandwidth_host_measurement * c_static_stack<struct s_bandwidth_host_measurement, 16>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@QAAPAUs_bandwidth_host_measurement@@J@Z");
//};

//public: long c_static_stack<struct s_bandwidth_client_measurement, 8>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_bandwidth_client_measurement@@$07@@QBAJXZ");
//};

//public: long c_static_stack<struct s_bandwidth_local_measurement, 32>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@QBAJXZ");
//};

//public: struct s_bandwidth_local_measurement const & c_static_stack<struct s_bandwidth_local_measurement, 32>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@QBAABUs_bandwidth_local_measurement@@J@Z");
//};

//public: struct s_bandwidth_local_measurement & c_static_stack<struct s_bandwidth_local_measurement, 32>::operator[](long)
//{
//    mangled_ppc("??A?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@QAAAAUs_bandwidth_local_measurement@@J@Z");
//};

//public: struct s_bandwidth_local_measurement const * c_static_stack<struct s_bandwidth_local_measurement, 32>::get(long) const
//{
//    mangled_ppc("?get@?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@QBAPBUs_bandwidth_local_measurement@@J@Z");
//};

//public: c_enum<enum e_network_quality_context, char, -1, 2, struct s_network_quality_context_string_resolver>::c_enum<enum e_network_quality_context, char, -1, 2, struct s_network_quality_context_string_resolver>(enum e_network_quality_context)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_quality_context@@D$0?0$01Us_network_quality_context_string_resolver@@@@QAA@W4e_network_quality_context@@@Z");
//};

//public: class c_static_string<64> c_enum_no_init<enum e_network_quality_context, char, -1, 2, struct s_network_quality_context_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_enum_no_init@W4e_network_quality_context@@D$0?0$01Us_network_quality_context_string_resolver@@@@QBA?AV?$c_static_string@$0EA@@@XZ");
//};

//public: c_enum<enum e_badness_type, char, 0, 8, struct s_badness_type_string_resolver>::c_enum<enum e_badness_type, char, 0, 8, struct s_badness_type_string_resolver>(enum e_badness_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_badness_type@@D$0A@$07Us_badness_type_string_resolver@@@@QAA@W4e_badness_type@@@Z");
//};

//public: class c_static_string<64> c_enum_no_init<enum e_badness_type, char, 0, 8, struct s_badness_type_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_enum_no_init@W4e_badness_type@@D$0A@$07Us_badness_type_string_resolver@@@@QBA?AV?$c_static_string@$0EA@@@XZ");
//};

//public: bool c_static_stack<struct s_bandwidth_host_measurement, 16>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct s_bandwidth_host_measurement, 16>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_bandwidth_local_measurement, 32>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@QBA_NJ@Z");
//};

//public: bool c_enum_no_init<enum e_network_quality_context, char, -1, 2, struct s_network_quality_context_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_network_quality_context@@D$0?0$01Us_network_quality_context_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_badness_type, char, 0, 8, struct s_badness_type_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_badness_type@@D$0A@$07Us_badness_type_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_bandwidth_host_measurement, 16>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_bandwidth_local_measurement, 32>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@QBA_NXZ");
//};

//public: long c_big_flags_typed_no_init<long, 128>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_big_flags_typed_no_init@J$0IA@@@QBAJXZ");
//};

//public: long c_big_flags_typed_no_init<long, 256>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_big_flags_typed_no_init@J$0BAA@@@QBAJXZ");
//};

//void network_bandwidth_rotate_in_new_element<struct s_bandwidth_local_measurement, 32>(class c_static_stack<struct s_bandwidth_local_measurement, 32> *, struct s_bandwidth_local_measurement *)
//{
//    mangled_ppc("??$network_bandwidth_rotate_in_new_element@Us_bandwidth_local_measurement@@$0CA@@@YAXPAV?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@PAUs_bandwidth_local_measurement@@@Z");
//};

//public: struct s_network_quality_context_statistics & s_static_array<struct s_network_quality_context_statistics, 2>::operator[]<enum e_network_quality_context>(enum e_network_quality_context)
//{
//    mangled_ppc("??$?AW4e_network_quality_context@@@?$s_static_array@Us_network_quality_context_statistics@@$01@@QAAAAUs_network_quality_context_statistics@@W4e_network_quality_context@@@Z");
//};

//void rotate_in_bits<class c_big_flags<128> >(class c_big_flags<128> *, bool, long)
//{
//    mangled_ppc("??$rotate_in_bits@V?$c_big_flags@$0IA@@@@@YAXPAV?$c_big_flags@$0IA@@@_NJ@Z");
//};

//void rotate_in_bits<class c_big_flags<256> >(class c_big_flags<256> *, bool, long)
//{
//    mangled_ppc("??$rotate_in_bits@V?$c_big_flags@$0BAA@@@@@YAXPAV?$c_big_flags@$0BAA@@@_NJ@Z");
//};

//void rotate_in_bits<class c_big_flags<64> >(class c_big_flags<64> *, bool, long)
//{
//    mangled_ppc("??$rotate_in_bits@V?$c_big_flags@$0EA@@@@@YAXPAV?$c_big_flags@$0EA@@@_NJ@Z");
//};

//long count_lowest_run_in_flags<class c_big_flags<128> >(class c_big_flags<128>)
//{
//    mangled_ppc("??$count_lowest_run_in_flags@V?$c_big_flags@$0IA@@@@@YAJV?$c_big_flags@$0IA@@@@Z");
//};

//public: struct s_network_quality_context_statistics const & s_static_array<struct s_network_quality_context_statistics, 2>::operator[]<enum e_network_quality_context>(enum e_network_quality_context) const
//{
//    mangled_ppc("??$?AW4e_network_quality_context@@@?$s_static_array@Us_network_quality_context_statistics@@$01@@QBAABUs_network_quality_context_statistics@@W4e_network_quality_context@@@Z");
//};

//long count_lowest_run_in_flags<class c_big_flags<256> >(class c_big_flags<256>)
//{
//    mangled_ppc("??$count_lowest_run_in_flags@V?$c_big_flags@$0BAA@@@@@YAJV?$c_big_flags@$0BAA@@@@Z");
//};

//public: class c_static_stack<struct s_bandwidth_host_measurement, 16> const & s_static_array<class c_static_stack<struct s_bandwidth_host_measurement, 16>, 2>::operator[]<enum e_bandwidth_measurement_type>(enum e_bandwidth_measurement_type) const
//{
//    mangled_ppc("??$?AW4e_bandwidth_measurement_type@@@?$s_static_array@V?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@$01@@QBAABV?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@W4e_bandwidth_measurement_type@@@Z");
//};

//public: struct s_network_quality_context_statistics const & s_static_array<struct s_network_quality_context_statistics, 2>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_network_quality_context_statistics@@$01@@QBAABUs_network_quality_context_statistics@@J@Z");
//};

//public: class c_static_stack<struct s_bandwidth_host_measurement, 16> & s_static_array<class c_static_stack<struct s_bandwidth_host_measurement, 16>, 2>::operator[]<enum e_bandwidth_measurement_type>(enum e_bandwidth_measurement_type)
//{
//    mangled_ppc("??$?AW4e_bandwidth_measurement_type@@@?$s_static_array@V?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@$01@@QAAAAV?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@W4e_bandwidth_measurement_type@@@Z");
//};

//void network_bandwidth_rotate_in_new_element<struct s_bandwidth_host_measurement, 16>(class c_static_stack<struct s_bandwidth_host_measurement, 16> *, struct s_bandwidth_host_measurement *)
//{
//    mangled_ppc("??$network_bandwidth_rotate_in_new_element@Us_bandwidth_host_measurement@@$0BA@@@YAXPAV?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@PAUs_bandwidth_host_measurement@@@Z");
//};

//void network_bandwidth_rotate_in_new_element<struct s_bandwidth_client_measurement, 8>(class c_static_stack<struct s_bandwidth_client_measurement, 8> *, struct s_bandwidth_client_measurement *)
//{
//    mangled_ppc("??$network_bandwidth_rotate_in_new_element@Us_bandwidth_client_measurement@@$07@@YAXPAV?$c_static_stack@Us_bandwidth_client_measurement@@$07@@PAUs_bandwidth_client_measurement@@@Z");
//};

//public: bool c_static_stack<struct s_bandwidth_host_measurement, 16>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@QBA_NXZ");
//};

//public: static unsigned int c_static_stack<struct s_bandwidth_host_measurement, 16>::element_size(void)
//{
//    mangled_ppc("?element_size@?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@SAIXZ");
//};

//public: void c_static_stack<struct s_bandwidth_host_measurement, 16>::push_back(struct s_bandwidth_host_measurement const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@QAAXABUs_bandwidth_host_measurement@@@Z");
//};

//public: void c_static_stack<struct s_bandwidth_host_measurement, 16>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@QAAXXZ");
//};

//public: bool c_static_stack<struct s_bandwidth_client_measurement, 8>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_bandwidth_client_measurement@@$07@@QBA_NXZ");
//};

//public: static unsigned int c_static_stack<struct s_bandwidth_client_measurement, 8>::element_size(void)
//{
//    mangled_ppc("?element_size@?$c_static_stack@Us_bandwidth_client_measurement@@$07@@SAIXZ");
//};

//public: void c_static_stack<struct s_bandwidth_client_measurement, 8>::push_back(struct s_bandwidth_client_measurement const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_bandwidth_client_measurement@@$07@@QAAXABUs_bandwidth_client_measurement@@@Z");
//};

//public: void c_static_stack<struct s_bandwidth_client_measurement, 8>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@Us_bandwidth_client_measurement@@$07@@QAAXXZ");
//};

//public: struct s_bandwidth_client_measurement * c_static_stack<struct s_bandwidth_client_measurement, 8>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_bandwidth_client_measurement@@$07@@QAAPAUs_bandwidth_client_measurement@@J@Z");
//};

//public: bool c_static_stack<struct s_bandwidth_local_measurement, 32>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@QBA_NXZ");
//};

//public: static unsigned int c_static_stack<struct s_bandwidth_local_measurement, 32>::element_size(void)
//{
//    mangled_ppc("?element_size@?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@SAIXZ");
//};

//public: void c_static_stack<struct s_bandwidth_local_measurement, 32>::push_back(struct s_bandwidth_local_measurement const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@QAAXABUs_bandwidth_local_measurement@@@Z");
//};

//public: void c_static_stack<struct s_bandwidth_local_measurement, 32>::pop(void)
//{
//    mangled_ppc("?pop@?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@QAAXXZ");
//};

//public: struct s_bandwidth_local_measurement * c_static_stack<struct s_bandwidth_local_measurement, 32>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@QAAPAUs_bandwidth_local_measurement@@J@Z");
//};

//public: long c_static_stack<struct s_bandwidth_host_measurement, 16>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@QAAJXZ");
//};

//public: bool c_static_stack<struct s_bandwidth_client_measurement, 8>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_bandwidth_client_measurement@@$07@@QBA_NXZ");
//};

//public: bool c_static_stack<struct s_bandwidth_client_measurement, 8>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_bandwidth_client_measurement@@$07@@QBA_NJ@Z");
//};

//public: bool c_static_stack<struct s_bandwidth_client_measurement, 8>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_bandwidth_client_measurement@@$07@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_bandwidth_client_measurement, 8>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_bandwidth_client_measurement@@$07@@QAAJXZ");
//};

//public: bool c_static_stack<struct s_bandwidth_local_measurement, 32>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@QBA_NXZ");
//};

//public: long c_static_stack<struct s_bandwidth_local_measurement, 32>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@QAAJXZ");
//};

//public: void c_big_flags_typed_no_init<long, 128>::set_range(long, long, bool)
//{
//    mangled_ppc("?set_range@?$c_big_flags_typed_no_init@J$0IA@@@QAAXJJ_N@Z");
//};

//public: class c_big_flags_typed_no_init<long, 128> & c_big_flags_typed_no_init<long, 128>::operator<<=(long)
//{
//    mangled_ppc("??_3?$c_big_flags_typed_no_init@J$0IA@@@QAAAAV0@J@Z");
//};

//public: class c_big_flags_typed_no_init<long, 256> & c_big_flags_typed_no_init<long, 256>::operator<<=(long)
//{
//    mangled_ppc("??_3?$c_big_flags_typed_no_init@J$0BAA@@@QAAAAV0@J@Z");
//};

//public: void c_big_flags_typed_no_init<long, 64>::set_range(long, long, bool)
//{
//    mangled_ppc("?set_range@?$c_big_flags_typed_no_init@J$0EA@@@QAAXJJ_N@Z");
//};

//public: class c_big_flags_typed_no_init<long, 64> & c_big_flags_typed_no_init<long, 64>::operator<<=(long)
//{
//    mangled_ppc("??_3?$c_big_flags_typed_no_init@J$0EA@@@QAAAAV0@J@Z");
//};

//public: static bool s_static_array<struct s_network_quality_context_statistics, 2>::valid<enum e_network_quality_context>(enum e_network_quality_context)
//{
//    mangled_ppc("??$valid@W4e_network_quality_context@@@?$s_static_array@Us_network_quality_context_statistics@@$01@@SA_NW4e_network_quality_context@@@Z");
//};

//public: static bool s_static_array<class c_static_stack<struct s_bandwidth_host_measurement, 16>, 2>::valid<enum e_bandwidth_measurement_type>(enum e_bandwidth_measurement_type)
//{
//    mangled_ppc("??$valid@W4e_bandwidth_measurement_type@@@?$s_static_array@V?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@$01@@SA_NW4e_bandwidth_measurement_type@@@Z");
//};

//public: static bool s_static_array<struct s_network_quality_context_statistics, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_network_quality_context_statistics@@$01@@SA_NJ@Z");
//};

//protected: void c_big_flags_typed_no_init<long, 128>::make_valid(void)
//{
//    mangled_ppc("?make_valid@?$c_big_flags_typed_no_init@J$0IA@@@IAAXXZ");
//};

//protected: void c_big_flags_typed_no_init<long, 256>::make_valid(void)
//{
//    mangled_ppc("?make_valid@?$c_big_flags_typed_no_init@J$0BAA@@@IAAXXZ");
//};

//public: static bool c_big_flags_typed_no_init<long, 64>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_big_flags_typed_no_init@J$0EA@@@SA_NJ@Z");
//};

//public: bool c_big_flags_typed_no_init<long, 64>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_big_flags_typed_no_init@J$0EA@@@QBA_NXZ");
//};

//protected: static long c_big_flags_typed_no_init<long, 64>::bit_index_to_flag_chunk_index(long)
//{
//    mangled_ppc("?bit_index_to_flag_chunk_index@?$c_big_flags_typed_no_init@J$0EA@@@KAJJ@Z");
//};

//protected: void c_big_flags_typed_no_init<long, 64>::make_valid(void)
//{
//    mangled_ppc("?make_valid@?$c_big_flags_typed_no_init@J$0EA@@@IAAXXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 64>::get_mask_of_first_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0EA@@@KAKJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 64>::get_mask_of_second_slice_of_chunk_inclusive(long)
//{
//    mangled_ppc("?get_mask_of_second_slice_of_chunk_inclusive@?$c_big_flags_typed_no_init@J$0EA@@@KAKJ@Z");
//};

//protected: static long c_big_flags_typed_no_init<long, 64>::flag_chunk_index_to_bit_index(long)
//{
//    mangled_ppc("?flag_chunk_index_to_bit_index@?$c_big_flags_typed_no_init@J$0EA@@@KAJJ@Z");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 64>::get_valid_mask_of_last_chunk(void)
//{
//    mangled_ppc("?get_valid_mask_of_last_chunk@?$c_big_flags_typed_no_init@J$0EA@@@KAKXZ");
//};

//protected: static unsigned long c_big_flags_typed_no_init<long, 64>::get_mask_of_first_slice_of_chunk_exclusive(long)
//{
//    mangled_ppc("?get_mask_of_first_slice_of_chunk_exclusive@?$c_big_flags_typed_no_init@J$0EA@@@KAKJ@Z");
//};

//time
//{
//    mangled_ppc("time");
//};

//public: s_network_bandwidth_globals::s_network_bandwidth_globals(void)
//{
//    mangled_ppc("??0s_network_bandwidth_globals@@QAA@XZ");
//};

//public: s_network_quality_statistics::s_network_quality_statistics(void)
//{
//    mangled_ppc("??0s_network_quality_statistics@@QAA@XZ");
//};

//public: s_static_array<struct s_network_quality_context_statistics, 2>::s_static_array<struct s_network_quality_context_statistics, 2>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_network_quality_context_statistics@@$01@@QAA@XZ");
//};

//public: s_network_quality_context_statistics::s_network_quality_context_statistics(void)
//{
//    mangled_ppc("??0s_network_quality_context_statistics@@QAA@XZ");
//};

//public: s_static_array<class c_static_stack<struct s_bandwidth_host_measurement, 16>, 2>::s_static_array<class c_static_stack<struct s_bandwidth_host_measurement, 16>, 2>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@$01@@QAA@XZ");
//};

//public: c_static_stack<struct s_bandwidth_host_measurement, 16>::c_static_stack<struct s_bandwidth_host_measurement, 16>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_bandwidth_host_measurement@@$0BA@@@QAA@XZ");
//};

//public: c_static_stack<struct s_bandwidth_client_measurement, 8>::c_static_stack<struct s_bandwidth_client_measurement, 8>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_bandwidth_client_measurement@@$07@@QAA@XZ");
//};

//public: c_big_flags<128>::c_big_flags<128>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$0IA@@@QAA@XZ");
//};

//public: c_big_flags<256>::c_big_flags<256>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$0BAA@@@QAA@XZ");
//};

//public: c_big_flags<64>::c_big_flags<64>(void)
//{
//    mangled_ppc("??0?$c_big_flags@$0EA@@@QAA@XZ");
//};

//public: c_static_stack<struct s_bandwidth_local_measurement, 32>::c_static_stack<struct s_bandwidth_local_measurement, 32>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_bandwidth_local_measurement@@$0CA@@@QAA@XZ");
//};

//public: c_big_flags_typed<long, 128>::c_big_flags_typed<long, 128>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$0IA@@@QAA@XZ");
//};

//public: c_big_flags_typed<long, 256>::c_big_flags_typed<long, 256>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$0BAA@@@QAA@XZ");
//};

//public: c_big_flags_typed<long, 64>::c_big_flags_typed<long, 64>(void)
//{
//    mangled_ppc("??0?$c_big_flags_typed@J$0EA@@@QAA@XZ");
//};

//public: void c_big_flags_typed_no_init<long, 128>::clear(void)
//{
//    mangled_ppc("?clear@?$c_big_flags_typed_no_init@J$0IA@@@QAAXXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 128>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_big_flags_typed_no_init@J$0IA@@@QBA_NXZ");
//};

//public: void c_big_flags_typed_no_init<long, 64>::clear(void)
//{
//    mangled_ppc("?clear@?$c_big_flags_typed_no_init@J$0EA@@@QAAXXZ");
//};

//public: bool c_big_flags_typed_no_init<long, 64>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_big_flags_typed_no_init@J$0EA@@@QBA_NXZ");
//};

