/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_stream_manager_probe_state@@D$0A@$05Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_stream_manager_probe_state const c_enum_no_init<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_stream_manager_probe_state@@D$0A@$05Us_default_enum_string_resolver@@@@2W4e_stream_manager_probe_state@@B"
// public: static int const c_enum_no_init<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_stream_manager_expansion_state@@D$0A@$04Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_stream_manager_expansion_state const c_enum_no_init<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_stream_manager_expansion_state@@D$0A@$04Us_default_enum_string_resolver@@@@2W4e_stream_manager_expansion_state@@B"
// public: static int const c_enum_no_init<enum e_stream_synchronous_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_stream_synchronous_mode@@E$0A@$01Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_stream_synchronous_mode const c_enum_no_init<enum e_stream_synchronous_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_stream_synchronous_mode@@E$0A@$01Us_default_enum_string_resolver@@@@2W4e_stream_synchronous_mode@@B"
// public: static long const s_static_array<struct s_stream, 32>::k_element_count; // "?k_element_count@?$s_static_array@Us_stream@@$0CA@@@2JB"
// public: static long const c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@2JB"
// public: static long const s_static_array<struct s_channel_bandwidth_desires const *, 32>::k_element_count; // "?k_element_count@?$s_static_array@PBUs_channel_bandwidth_desires@@$0CA@@@2JB"
// public: static long const s_static_array<float, 32>::k_element_count; // "?k_element_count@?$s_static_array@M$0CA@@@2JB"
// char const **g_stream_manager_probe_state_strings; // "?g_stream_manager_probe_state_strings@@3PAPBDA"
// char const **g_stream_manager_expansion_state_strings; // "?g_stream_manager_expansion_state_strings@@3PAPBDA"
// long net_force_sync_turbo_channel; // "?net_force_sync_turbo_channel@@3JA"
// float g_voice_transmission_frequency_override; // "?g_voice_transmission_frequency_override@@3MA"
// public: static long c_stream_manager_logger::sm_logging_period_milliseconds; // "?sm_logging_period_milliseconds@c_stream_manager_logger@@2JA"
// bool net_force_sync_turbo_all; // "?net_force_sync_turbo_all@@3_NA"
// bool net_force_sync_turbo_none; // "?net_force_sync_turbo_none@@3_NA"
// class c_stream_manager g_stream_manager; // "?g_stream_manager@@3Vc_stream_manager@@A"
// class c_stream_manager_logger g_stream_manager_logger; // "?g_stream_manager_logger@@3Vc_stream_manager_logger@@A"

// public: static void s_stream_manager_probe_state_string_resolver::to_string(enum e_stream_manager_probe_state, class c_static_string<64> *);
// public: static void s_stream_manager_expansion_state_string_resolver::to_string(enum e_stream_manager_expansion_state, class c_static_string<64> *);
// void stream_manager_initialize(struct s_channel_manager_configuration const *);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// void stream_manager_destroy(void);
// void stream_manager_update(bool);
// void stream_initialize(long, bool, bool, bool, bool, bool);
// void stream_dispose(long);
// bool stream_is_active(long);
// bool stream_is_simulation(long);
// bool stream_is_simulation_authority(long);
// bool stream_is_synchronous(long);
// bool stream_is_bandwidth_controlled(long);
// bool stream_update_load_bearing_status(long, bool);
// bool stream_update_synchronous_status(long, bool);
// void stream_update_badness_game_type(long, bool, long, long);
// bool stream_manager_has_at_least_one_simulation_stream(void);
// void stream_packet_bandwidth_restricted(long);
// void stream_packet_sent(long, long, long, long, long);
// bool stream_should_send_packet(long, bool, bool, bool, bool *, bool *, long *, long *, long, void *);
// void stream_manager_update_voice_repeater_use(void);
// void voice_set_repeater_use(enum e_voice_repeater_usage);
// void stream_manager_get_upstream_status(long *, long *, long *, long *, long *, long *);
// bool stream_manager_get_status(struct s_network_channel_manager_global_status *);
// public: class c_enum<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver> c_stream_manager::get_probe_state(void) const;
// public: class c_enum<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver> c_stream_manager::get_expansion_state(void) const;
// bool stream_get_status(long, struct s_network_managed_channel_status *);
// void stream_log_status_structure(long, struct s_network_managed_channel_status const *);
// void stream_manager_force_immediate_stream_rebalancing(void);
// void stream_manager_set_online_network_environment(bool);
// void stream_manager_set_estimated_bandwidth(long, float, float, bool);
// void stream_manager_reset_bandwidth(void);
// void stream_manager_reset_congestion_bandwidth(void);
// bool stream_manager_get_host_bandwidth_results(struct s_bandwidth_host_measurement *, enum e_network_quality_context *);
// bool stream_manager_get_client_bandwidth_results(struct s_bandwidth_client_measurement *, enum e_network_quality_context *);
// bool stream_manager_is_bandwidth_stable(void);
// void stream_manager_set_stream_properties_from_peer(enum e_network_channel_manager_owner, long, bool, long, bool);
// void stream_manager_prioritize_upload_bandwidth(bool);
// void stream_handle_packet_event(long, enum e_network_packet_event, long, long, long, bool);
// void stream_notify_packet_sent(long, long, bool, long, long, long);
// void stream_notify_packet_received(long, long);
// long stream_manager_get_packet_minimum_game_data_bytes(void);
// void stream_manager_quality_statistics_get_reported_badness(bool *, bool *, bool *, bool *, enum e_network_quality_context *);
// void stream_report_badness(long, bool, char const *);
// public: void c_stream_manager::update(bool);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// public: void c_stream_manager::update_probing(bool, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, bool, long, long, long, long);
// public: void c_stream_manager::update_synchronous(void);
// public: enum e_stream_manager_expansion_state c_stream_manager::stream_balance_all_stream_bandwidth(long, long, bool, long, long, long, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, long);
// public: long c_stream_manager::stream_balance_calculate_total_bandwidth_cap_bps(long, long, long *);
// public: long c_stream_manager::stream_balance_get_unloaded_voice_stream_cost_bps(void);
// public: long c_stream_manager::stream_balance_get_loaded_voice_stream_cost_bps(void);
// public: void c_stream_manager::stream_update_bad_bandwidth_anticheating(void);
// public: void c_stream_manager::stream_balance_allocate_all_bandwidth_to_loaded_streams(long, long, long, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver> *, long *);
// public: void c_stream_manager::stream_balance_handle_forced_simulation_stream_bandwidth(long, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, long *, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver> *);
// public: void c_stream_manager::stream_balance_allocate_bandwidth_to_client_to_authority_streams(long, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, long, long *, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver> *);
// public: void c_stream_manager::stream_balance_allocate_bandwidth_to_authority_to_client_streams(long, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, long, long *, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver> *);
// public: s_channel_bandwidth_desires::s_channel_bandwidth_desires(void);
// public: void s_channel_bandwidth_desires::clear(void);
// public: void c_stream_manager::stream_balance_allocate_bandwidth_to_authority_to_joining_synchronous_client_streams(long, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, long, long *, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver> *);
// public: void c_stream_manager::stream_balance_set_remaining_streams_to_minimum_bandwidth(long, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, long, long *, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver> *);
// public: void c_stream_manager::stream_balance_allocate_bandwidth_to_voice(long, long, long, long, long, long *);
// long voice_get_local_players_who_have_voice_count(void);
// public: long c_stream_manager::stream_balance_set_channel_bandwidth(long, long, long, long, long, char const *);
// public: long c_stream_manager::stream_get_current_latency_threshold_indicating_congestion(long, bool);
// public: float c_stream_manager::stream_get_latency_average_expected_drift_window(long);
// public: long c_stream_manager::calculate_probe_desired_upstream_growth_bps(long);
// public: void c_stream_manager::stream_set_bandwidth_and_packet_rate(long, long, float, char const *);
// public: void c_stream_manager::stream_set_bandwidth(long, long, char const *);
// public: bool c_stream_manager::stream_should_send_packet(long, bool, bool, bool, bool *, bool *, long *, long *, long, void *);
// public: float c_stream_manager::stream_should_send_packet_calculate_packet_rate(long, bool, bool, bool, bool *, long *, bool *);
// public: bool c_stream_manager::stream_should_send_packet_time_to_send_packet(long, float, long *);
// public: bool c_stream_manager::stream_should_send_packet_calculate_packet_size(long, long, float, long, long *, long *, long *);
// public: void c_stream_manager::use_bursty_bandwidth(long);
// public: void c_stream_manager::adjust_bits_available_based_on_penance(long, long *);
// public: void c_stream_manager::quality_statistics_get_reported_badness(bool *, bool *, bool *, bool *, enum e_network_quality_context *) const;
// public: void c_stream_manager::quality_statistics_report_host_badness(long, bool, char const *);
// public: void c_stream_manager::quality_statistics_report_client_badness(long, bool, char const *);
// public: void c_stream_manager::quality_statistics_report_badness(long, bool, char const *);
// public: enum e_network_quality_context c_stream_manager::get_quality_context(void) const;
// public: void c_stream_manager::set_estimated_bandwidth(long, float, float, bool);
// public: void c_stream_manager::reset_bandwidth(void);
// public: void c_stream_manager::reset_congestion_bandwidth(void);
// public: bool c_stream_manager::get_host_bandwidth_results(struct s_bandwidth_host_measurement *, enum e_network_quality_context *) const;
// public: bool c_stream_manager::get_client_bandwidth_results(struct s_bandwidth_client_measurement *, enum e_network_quality_context *) const;
// public: bool c_stream_manager::is_bandwidth_stable(void) const;
// public: void c_stream_manager::record_throughput_bandwidth(long, long, long);
// public: void c_stream_manager::record_congestion_bandwidth(long, bool);
// public: float c_stream_manager::packet_rate_maximum(void) const;
// public: bool c_stream_manager::packet_rate_is_limiting(float, bool, bool, bool) const;
// public: float c_stream_manager::packet_rate_increase(float, bool) const;
// public: float c_stream_manager::packet_rate_get_maximum_given_bandwidth_bps(long, bool, bool) const;
// public: void c_stream_manager::calculate_congest_at_rtt_immediate(long);
// public: void c_stream_manager::bandwidth_monitor_start(long);
// public: void c_stream_manager::bandwidth_monitor_stop(long);
// public: void c_stream_manager::bandwidth_monitor_events(long, long, long);
// public: bool c_stream_manager::voice_data_available(long, long *);
// bool network_voice_data_available(long);
// long network_voice_get_data_size(long);
// public: void c_stream_manager::voice_data_build(long, class c_bitstream *);
// void network_voice_data_get(long, class c_bitstream *);
// public: static float c_stream_manager::accumulator_get_sanitized_average(class c_network_accumulator_statistics const *);
// public: void c_stream_manager::set_probe_state(enum e_stream_manager_probe_state);
// public: void c_stream_manager::set_expansion_state(enum e_stream_manager_expansion_state);
// public: c_stream_manager_logger::c_stream_manager_logger(void);
// public: c_stream_manager_logger::s_stream_manager_core::s_stream_manager_core(void);
// public: c_stream_manager::c_stream_manager(void);
// public: c_network_accumulator_statistics::c_network_accumulator_statistics(void);
// public: s_static_array<struct s_stream, 32>::s_static_array<struct s_stream, 32>(void);
// public: s_stream::s_stream(void);
// public: void c_stream_manager_logger::initialize(void);
// public: void c_stream_manager_logger::dispose(void);
// public: void c_stream_manager_logger::update(void);
// public: void c_stream_manager_logger::save_core_blocking(char const *);
// private: void c_stream_manager_logger::save_core_periodic(void);
// private: void c_stream_manager_logger::save_core_start(char const *);
// private: void c_stream_manager_logger::save_core_yield_until_done(void);
// public: static void c_stream_manager_logger::load_from_core(char const *);
// public: c_stream_manager_logger::s_stream_manager_core::~s_stream_manager_core(void);
// public: c_stream_manager::~c_stream_manager(void);
// public: c_network_accumulator_statistics::~c_network_accumulator_statistics(void);
// void stream_manager_load_from_core(char const *);
// void stream_manager_set_core_save_period(long);
// void stream_manager_save_core_blocking(char const *);
// public: c_enum<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>(enum e_stream_manager_probe_state);
// public: enum e_stream_manager_probe_state c_enum_no_init<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_stream_manager_probe_state(void) const;
// public: bool c_enum_no_init<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_stream_manager_probe_state) const;
// public: class c_static_string<64> c_enum_no_init<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>::to_string(void) const;
// public: c_enum<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>(enum e_stream_manager_expansion_state);
// public: enum e_stream_manager_expansion_state c_enum_no_init<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_stream_manager_expansion_state(void) const;
// public: bool c_enum_no_init<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_stream_manager_expansion_state) const;
// public: class c_static_string<64> c_enum_no_init<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>::to_string(void) const;
// public: c_enum<enum e_stream_synchronous_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_stream_synchronous_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_stream_synchronous_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_stream_synchronous_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum e_stream_synchronous_mode);
// public: bool c_enum_no_init<enum e_stream_synchronous_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_stream_synchronous_mode) const;
// public: c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>(class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>);
// public: class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver> & c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::operator=(class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> const &);
// public: void s_static_array<struct s_channel_bandwidth_desires const *, 32>::set_all(struct s_channel_bandwidth_desires const *const &);
// public: bool c_enum_no_init<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::set_all(void);
// public: bool c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::test(long) const;
// public: void c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::set(long, bool);
// public: long c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::count_set(void) const;
// public: bool c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> const &) const;
// public: bool c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> const &) const;
// public: class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::operator~(void) const;
// public: class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> const &) const;
// public: class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> & c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> const &);
// public: static class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::make_flag(long);
// public: unsigned __int64 c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::set_unsafe(unsigned __int64);
// public: class c_static_string<1024> c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::to_string(void) const;
// public: c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>(void);
// public: struct s_stream & s_static_array<struct s_stream, 32>::operator[]<long>(long);
// __int64 int_pin<__int64, int, long>(__int64const &, int const &, long const &);
// public: struct s_channel_bandwidth_desires const *& s_static_array<struct s_channel_bandwidth_desires const *, 32>::operator[]<long>(long);
// public: float & s_static_array<float, 32>::operator[]<long>(long);
// public: char * c_file_path::get_full_path<256>(class s_static_string<256> *) const;
// public: static class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::make_mask_from_range(long, long);
// public: static bool c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::valid_bit(long);
// public: bool c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned __int64 c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::flag_size_type(long);
// private: static unsigned __int64 c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: static bool s_static_array<struct s_stream, 32>::valid<long>(long);
// __int64 int_floor<__int64, __int64>(__int64const &, __int64const &);
// __int64 int_ceiling<__int64, __int64>(__int64const &, __int64const &);
// public: static bool s_static_array<struct s_channel_bandwidth_desires const *, 32>::valid<long>(long);
// public: static bool s_static_array<float, 32>::valid<long>(long);
// private: static unsigned __int64 c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long);
// __int64 int_max<__int64>(__int64const &, __int64const &);
// __int64 int_min<__int64>(__int64const &, __int64const &);
// public: c_stream_manager_logger::~c_stream_manager_logger(void);
// void g_stream_manager::`dynamic atexit destructor'(void);
// void g_stream_manager_logger::`dynamic atexit destructor'(void);

//public: static void s_stream_manager_probe_state_string_resolver::to_string(enum e_stream_manager_probe_state, class c_static_string<64> *)
//{
//    mangled_ppc("?to_string@s_stream_manager_probe_state_string_resolver@@SAXW4e_stream_manager_probe_state@@PAV?$c_static_string@$0EA@@@@Z");
//};

//public: static void s_stream_manager_expansion_state_string_resolver::to_string(enum e_stream_manager_expansion_state, class c_static_string<64> *)
//{
//    mangled_ppc("?to_string@s_stream_manager_expansion_state_string_resolver@@SAXW4e_stream_manager_expansion_state@@PAV?$c_static_string@$0EA@@@@Z");
//};

//void stream_manager_initialize(struct s_channel_manager_configuration const *)
//{
//    mangled_ppc("?stream_manager_initialize@@YAXPBUs_channel_manager_configuration@@@Z");
//};

//unsigned long network_time_get(void)
//{
//    mangled_ppc("?network_time_get@@YAKXZ");
//};

//unsigned long network_time_get_exact(void)
//{
//    mangled_ppc("?network_time_get_exact@@YAKXZ");
//};

//void stream_manager_destroy(void)
//{
//    mangled_ppc("?stream_manager_destroy@@YAXXZ");
//};

//void stream_manager_update(bool)
//{
//    mangled_ppc("?stream_manager_update@@YAX_N@Z");
//};

//void stream_initialize(long, bool, bool, bool, bool, bool)
//{
//    mangled_ppc("?stream_initialize@@YAXJ_N0000@Z");
//};

//void stream_dispose(long)
//{
//    mangled_ppc("?stream_dispose@@YAXJ@Z");
//};

//bool stream_is_active(long)
//{
//    mangled_ppc("?stream_is_active@@YA_NJ@Z");
//};

//bool stream_is_simulation(long)
//{
//    mangled_ppc("?stream_is_simulation@@YA_NJ@Z");
//};

//bool stream_is_simulation_authority(long)
//{
//    mangled_ppc("?stream_is_simulation_authority@@YA_NJ@Z");
//};

//bool stream_is_synchronous(long)
//{
//    mangled_ppc("?stream_is_synchronous@@YA_NJ@Z");
//};

//bool stream_is_bandwidth_controlled(long)
//{
//    mangled_ppc("?stream_is_bandwidth_controlled@@YA_NJ@Z");
//};

//bool stream_update_load_bearing_status(long, bool)
//{
//    mangled_ppc("?stream_update_load_bearing_status@@YA_NJ_N@Z");
//};

//bool stream_update_synchronous_status(long, bool)
//{
//    mangled_ppc("?stream_update_synchronous_status@@YA_NJ_N@Z");
//};

//void stream_update_badness_game_type(long, bool, long, long)
//{
//    mangled_ppc("?stream_update_badness_game_type@@YAXJ_NJJ@Z");
//};

//bool stream_manager_has_at_least_one_simulation_stream(void)
//{
//    mangled_ppc("?stream_manager_has_at_least_one_simulation_stream@@YA_NXZ");
//};

//void stream_packet_bandwidth_restricted(long)
//{
//    mangled_ppc("?stream_packet_bandwidth_restricted@@YAXJ@Z");
//};

//void stream_packet_sent(long, long, long, long, long)
//{
//    mangled_ppc("?stream_packet_sent@@YAXJJJJJ@Z");
//};

//bool stream_should_send_packet(long, bool, bool, bool, bool *, bool *, long *, long *, long, void *)
//{
//    mangled_ppc("?stream_should_send_packet@@YA_NJ_N00PA_N1PAJ2JPAX@Z");
//};

//void stream_manager_update_voice_repeater_use(void)
//{
//    mangled_ppc("?stream_manager_update_voice_repeater_use@@YAXXZ");
//};

//void voice_set_repeater_use(enum e_voice_repeater_usage)
//{
//    mangled_ppc("?voice_set_repeater_use@@YAXW4e_voice_repeater_usage@@@Z");
//};

//void stream_manager_get_upstream_status(long *, long *, long *, long *, long *, long *)
//{
//    mangled_ppc("?stream_manager_get_upstream_status@@YAXPAJ00000@Z");
//};

//bool stream_manager_get_status(struct s_network_channel_manager_global_status *)
//{
//    mangled_ppc("?stream_manager_get_status@@YA_NPAUs_network_channel_manager_global_status@@@Z");
//};

//public: class c_enum<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver> c_stream_manager::get_probe_state(void) const
//{
//    mangled_ppc("?get_probe_state@c_stream_manager@@QBA?AV?$c_enum@W4e_stream_manager_probe_state@@D$0A@$05Us_default_enum_string_resolver@@@@XZ");
//};

//public: class c_enum<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver> c_stream_manager::get_expansion_state(void) const
//{
//    mangled_ppc("?get_expansion_state@c_stream_manager@@QBA?AV?$c_enum@W4e_stream_manager_expansion_state@@D$0A@$04Us_default_enum_string_resolver@@@@XZ");
//};

//bool stream_get_status(long, struct s_network_managed_channel_status *)
//{
//    mangled_ppc("?stream_get_status@@YA_NJPAUs_network_managed_channel_status@@@Z");
//};

//void stream_log_status_structure(long, struct s_network_managed_channel_status const *)
//{
//    mangled_ppc("?stream_log_status_structure@@YAXJPBUs_network_managed_channel_status@@@Z");
//};

//void stream_manager_force_immediate_stream_rebalancing(void)
//{
//    mangled_ppc("?stream_manager_force_immediate_stream_rebalancing@@YAXXZ");
//};

//void stream_manager_set_online_network_environment(bool)
//{
//    mangled_ppc("?stream_manager_set_online_network_environment@@YAX_N@Z");
//};

//void stream_manager_set_estimated_bandwidth(long, float, float, bool)
//{
//    mangled_ppc("?stream_manager_set_estimated_bandwidth@@YAXJMM_N@Z");
//};

//void stream_manager_reset_bandwidth(void)
//{
//    mangled_ppc("?stream_manager_reset_bandwidth@@YAXXZ");
//};

//void stream_manager_reset_congestion_bandwidth(void)
//{
//    mangled_ppc("?stream_manager_reset_congestion_bandwidth@@YAXXZ");
//};

//bool stream_manager_get_host_bandwidth_results(struct s_bandwidth_host_measurement *, enum e_network_quality_context *)
//{
//    mangled_ppc("?stream_manager_get_host_bandwidth_results@@YA_NPAUs_bandwidth_host_measurement@@PAW4e_network_quality_context@@@Z");
//};

//bool stream_manager_get_client_bandwidth_results(struct s_bandwidth_client_measurement *, enum e_network_quality_context *)
//{
//    mangled_ppc("?stream_manager_get_client_bandwidth_results@@YA_NPAUs_bandwidth_client_measurement@@PAW4e_network_quality_context@@@Z");
//};

//bool stream_manager_is_bandwidth_stable(void)
//{
//    mangled_ppc("?stream_manager_is_bandwidth_stable@@YA_NXZ");
//};

//void stream_manager_set_stream_properties_from_peer(enum e_network_channel_manager_owner, long, bool, long, bool)
//{
//    mangled_ppc("?stream_manager_set_stream_properties_from_peer@@YAXW4e_network_channel_manager_owner@@J_NJ1@Z");
//};

//void stream_manager_prioritize_upload_bandwidth(bool)
//{
//    mangled_ppc("?stream_manager_prioritize_upload_bandwidth@@YAX_N@Z");
//};

//void stream_handle_packet_event(long, enum e_network_packet_event, long, long, long, bool)
//{
//    mangled_ppc("?stream_handle_packet_event@@YAXJW4e_network_packet_event@@JJJ_N@Z");
//};

//void stream_notify_packet_sent(long, long, bool, long, long, long)
//{
//    mangled_ppc("?stream_notify_packet_sent@@YAXJJ_NJJJ@Z");
//};

//void stream_notify_packet_received(long, long)
//{
//    mangled_ppc("?stream_notify_packet_received@@YAXJJ@Z");
//};

//long stream_manager_get_packet_minimum_game_data_bytes(void)
//{
//    mangled_ppc("?stream_manager_get_packet_minimum_game_data_bytes@@YAJXZ");
//};

//void stream_manager_quality_statistics_get_reported_badness(bool *, bool *, bool *, bool *, enum e_network_quality_context *)
//{
//    mangled_ppc("?stream_manager_quality_statistics_get_reported_badness@@YAXPA_N000PAW4e_network_quality_context@@@Z");
//};

//void stream_report_badness(long, bool, char const *)
//{
//    mangled_ppc("?stream_report_badness@@YAXJ_NPBD@Z");
//};

//public: void c_stream_manager::update(bool)
//{
//    mangled_ppc("?update@c_stream_manager@@QAAX_N@Z");
//};

//long network_time_since(unsigned long)
//{
//    mangled_ppc("?network_time_since@@YAJK@Z");
//};

//long network_time_difference_msec(unsigned long, unsigned long)
//{
//    mangled_ppc("?network_time_difference_msec@@YAJKK@Z");
//};

//public: void c_stream_manager::update_probing(bool, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, bool, long, long, long, long)
//{
//    mangled_ppc("?update_probing@c_stream_manager@@QAAX_NV?$c_flags@J_K$0CA@Us_default_enum_string_resolver@@@@111110JJJJ@Z");
//};

//public: void c_stream_manager::update_synchronous(void)
//{
//    mangled_ppc("?update_synchronous@c_stream_manager@@QAAXXZ");
//};

//public: enum e_stream_manager_expansion_state c_stream_manager::stream_balance_all_stream_bandwidth(long, long, bool, long, long, long, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, long)
//{
//    mangled_ppc("?stream_balance_all_stream_bandwidth@c_stream_manager@@QAA?AW4e_stream_manager_expansion_state@@JJ_NJJJV?$c_flags@J_K$0CA@Us_default_enum_string_resolver@@@@J@Z");
//};

//public: long c_stream_manager::stream_balance_calculate_total_bandwidth_cap_bps(long, long, long *)
//{
//    mangled_ppc("?stream_balance_calculate_total_bandwidth_cap_bps@c_stream_manager@@QAAJJJPAJ@Z");
//};

//public: long c_stream_manager::stream_balance_get_unloaded_voice_stream_cost_bps(void)
//{
//    mangled_ppc("?stream_balance_get_unloaded_voice_stream_cost_bps@c_stream_manager@@QAAJXZ");
//};

//public: long c_stream_manager::stream_balance_get_loaded_voice_stream_cost_bps(void)
//{
//    mangled_ppc("?stream_balance_get_loaded_voice_stream_cost_bps@c_stream_manager@@QAAJXZ");
//};

//public: void c_stream_manager::stream_update_bad_bandwidth_anticheating(void)
//{
//    mangled_ppc("?stream_update_bad_bandwidth_anticheating@c_stream_manager@@QAAXXZ");
//};

//public: void c_stream_manager::stream_balance_allocate_all_bandwidth_to_loaded_streams(long, long, long, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver> *, long *)
//{
//    mangled_ppc("?stream_balance_allocate_all_bandwidth_to_loaded_streams@c_stream_manager@@QAAXJJJV?$c_flags@J_K$0CA@Us_default_enum_string_resolver@@@@PAV2@PAJ@Z");
//};

//public: void c_stream_manager::stream_balance_handle_forced_simulation_stream_bandwidth(long, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, long *, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?stream_balance_handle_forced_simulation_stream_bandwidth@c_stream_manager@@QAAXJV?$c_flags@J_K$0CA@Us_default_enum_string_resolver@@@@PAJPAV2@@Z");
//};

//public: void c_stream_manager::stream_balance_allocate_bandwidth_to_client_to_authority_streams(long, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, long, long *, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?stream_balance_allocate_bandwidth_to_client_to_authority_streams@c_stream_manager@@QAAXJV?$c_flags@J_K$0CA@Us_default_enum_string_resolver@@@@JPAJPAV2@@Z");
//};

//public: void c_stream_manager::stream_balance_allocate_bandwidth_to_authority_to_client_streams(long, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, long, long *, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?stream_balance_allocate_bandwidth_to_authority_to_client_streams@c_stream_manager@@QAAXJV?$c_flags@J_K$0CA@Us_default_enum_string_resolver@@@@JPAJPAV2@@Z");
//};

//public: s_channel_bandwidth_desires::s_channel_bandwidth_desires(void)
//{
//    mangled_ppc("??0s_channel_bandwidth_desires@@QAA@XZ");
//};

//public: void s_channel_bandwidth_desires::clear(void)
//{
//    mangled_ppc("?clear@s_channel_bandwidth_desires@@QAAXXZ");
//};

//public: void c_stream_manager::stream_balance_allocate_bandwidth_to_authority_to_joining_synchronous_client_streams(long, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, long, long *, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?stream_balance_allocate_bandwidth_to_authority_to_joining_synchronous_client_streams@c_stream_manager@@QAAXJV?$c_flags@J_K$0CA@Us_default_enum_string_resolver@@@@JPAJPAV2@@Z");
//};

//public: void c_stream_manager::stream_balance_set_remaining_streams_to_minimum_bandwidth(long, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>, long, long *, class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("?stream_balance_set_remaining_streams_to_minimum_bandwidth@c_stream_manager@@QAAXJV?$c_flags@J_K$0CA@Us_default_enum_string_resolver@@@@JPAJPAV2@@Z");
//};

//public: void c_stream_manager::stream_balance_allocate_bandwidth_to_voice(long, long, long, long, long, long *)
//{
//    mangled_ppc("?stream_balance_allocate_bandwidth_to_voice@c_stream_manager@@QAAXJJJJJPAJ@Z");
//};

//long voice_get_local_players_who_have_voice_count(void)
//{
//    mangled_ppc("?voice_get_local_players_who_have_voice_count@@YAJXZ");
//};

//public: long c_stream_manager::stream_balance_set_channel_bandwidth(long, long, long, long, long, char const *)
//{
//    mangled_ppc("?stream_balance_set_channel_bandwidth@c_stream_manager@@QAAJJJJJJPBD@Z");
//};

//public: long c_stream_manager::stream_get_current_latency_threshold_indicating_congestion(long, bool)
//{
//    mangled_ppc("?stream_get_current_latency_threshold_indicating_congestion@c_stream_manager@@QAAJJ_N@Z");
//};

//public: float c_stream_manager::stream_get_latency_average_expected_drift_window(long)
//{
//    mangled_ppc("?stream_get_latency_average_expected_drift_window@c_stream_manager@@QAAMJ@Z");
//};

//public: long c_stream_manager::calculate_probe_desired_upstream_growth_bps(long)
//{
//    mangled_ppc("?calculate_probe_desired_upstream_growth_bps@c_stream_manager@@QAAJJ@Z");
//};

//public: void c_stream_manager::stream_set_bandwidth_and_packet_rate(long, long, float, char const *)
//{
//    mangled_ppc("?stream_set_bandwidth_and_packet_rate@c_stream_manager@@QAAXJJMPBD@Z");
//};

//public: void c_stream_manager::stream_set_bandwidth(long, long, char const *)
//{
//    mangled_ppc("?stream_set_bandwidth@c_stream_manager@@QAAXJJPBD@Z");
//};

//public: bool c_stream_manager::stream_should_send_packet(long, bool, bool, bool, bool *, bool *, long *, long *, long, void *)
//{
//    mangled_ppc("?stream_should_send_packet@c_stream_manager@@QAA_NJ_N00PA_N1PAJ2JPAX@Z");
//};

//public: float c_stream_manager::stream_should_send_packet_calculate_packet_rate(long, bool, bool, bool, bool *, long *, bool *)
//{
//    mangled_ppc("?stream_should_send_packet_calculate_packet_rate@c_stream_manager@@QAAMJ_N00PA_NPAJ1@Z");
//};

//public: bool c_stream_manager::stream_should_send_packet_time_to_send_packet(long, float, long *)
//{
//    mangled_ppc("?stream_should_send_packet_time_to_send_packet@c_stream_manager@@QAA_NJMPAJ@Z");
//};

//public: bool c_stream_manager::stream_should_send_packet_calculate_packet_size(long, long, float, long, long *, long *, long *)
//{
//    mangled_ppc("?stream_should_send_packet_calculate_packet_size@c_stream_manager@@QAA_NJJMJPAJ00@Z");
//};

//public: void c_stream_manager::use_bursty_bandwidth(long)
//{
//    mangled_ppc("?use_bursty_bandwidth@c_stream_manager@@QAAXJ@Z");
//};

//public: void c_stream_manager::adjust_bits_available_based_on_penance(long, long *)
//{
//    mangled_ppc("?adjust_bits_available_based_on_penance@c_stream_manager@@QAAXJPAJ@Z");
//};

//public: void c_stream_manager::quality_statistics_get_reported_badness(bool *, bool *, bool *, bool *, enum e_network_quality_context *) const
//{
//    mangled_ppc("?quality_statistics_get_reported_badness@c_stream_manager@@QBAXPA_N000PAW4e_network_quality_context@@@Z");
//};

//public: void c_stream_manager::quality_statistics_report_host_badness(long, bool, char const *)
//{
//    mangled_ppc("?quality_statistics_report_host_badness@c_stream_manager@@QAAXJ_NPBD@Z");
//};

//public: void c_stream_manager::quality_statistics_report_client_badness(long, bool, char const *)
//{
//    mangled_ppc("?quality_statistics_report_client_badness@c_stream_manager@@QAAXJ_NPBD@Z");
//};

//public: void c_stream_manager::quality_statistics_report_badness(long, bool, char const *)
//{
//    mangled_ppc("?quality_statistics_report_badness@c_stream_manager@@QAAXJ_NPBD@Z");
//};

//public: enum e_network_quality_context c_stream_manager::get_quality_context(void) const
//{
//    mangled_ppc("?get_quality_context@c_stream_manager@@QBA?AW4e_network_quality_context@@XZ");
//};

//public: void c_stream_manager::set_estimated_bandwidth(long, float, float, bool)
//{
//    mangled_ppc("?set_estimated_bandwidth@c_stream_manager@@QAAXJMM_N@Z");
//};

//public: void c_stream_manager::reset_bandwidth(void)
//{
//    mangled_ppc("?reset_bandwidth@c_stream_manager@@QAAXXZ");
//};

//public: void c_stream_manager::reset_congestion_bandwidth(void)
//{
//    mangled_ppc("?reset_congestion_bandwidth@c_stream_manager@@QAAXXZ");
//};

//public: bool c_stream_manager::get_host_bandwidth_results(struct s_bandwidth_host_measurement *, enum e_network_quality_context *) const
//{
//    mangled_ppc("?get_host_bandwidth_results@c_stream_manager@@QBA_NPAUs_bandwidth_host_measurement@@PAW4e_network_quality_context@@@Z");
//};

//public: bool c_stream_manager::get_client_bandwidth_results(struct s_bandwidth_client_measurement *, enum e_network_quality_context *) const
//{
//    mangled_ppc("?get_client_bandwidth_results@c_stream_manager@@QBA_NPAUs_bandwidth_client_measurement@@PAW4e_network_quality_context@@@Z");
//};

//public: bool c_stream_manager::is_bandwidth_stable(void) const
//{
//    mangled_ppc("?is_bandwidth_stable@c_stream_manager@@QBA_NXZ");
//};

//public: void c_stream_manager::record_throughput_bandwidth(long, long, long)
//{
//    mangled_ppc("?record_throughput_bandwidth@c_stream_manager@@QAAXJJJ@Z");
//};

//public: void c_stream_manager::record_congestion_bandwidth(long, bool)
//{
//    mangled_ppc("?record_congestion_bandwidth@c_stream_manager@@QAAXJ_N@Z");
//};

//public: float c_stream_manager::packet_rate_maximum(void) const
//{
//    mangled_ppc("?packet_rate_maximum@c_stream_manager@@QBAMXZ");
//};

//public: bool c_stream_manager::packet_rate_is_limiting(float, bool, bool, bool) const
//{
//    mangled_ppc("?packet_rate_is_limiting@c_stream_manager@@QBA_NM_N00@Z");
//};

//public: float c_stream_manager::packet_rate_increase(float, bool) const
//{
//    mangled_ppc("?packet_rate_increase@c_stream_manager@@QBAMM_N@Z");
//};

//public: float c_stream_manager::packet_rate_get_maximum_given_bandwidth_bps(long, bool, bool) const
//{
//    mangled_ppc("?packet_rate_get_maximum_given_bandwidth_bps@c_stream_manager@@QBAMJ_N0@Z");
//};

//public: void c_stream_manager::calculate_congest_at_rtt_immediate(long)
//{
//    mangled_ppc("?calculate_congest_at_rtt_immediate@c_stream_manager@@QAAXJ@Z");
//};

//public: void c_stream_manager::bandwidth_monitor_start(long)
//{
//    mangled_ppc("?bandwidth_monitor_start@c_stream_manager@@QAAXJ@Z");
//};

//public: void c_stream_manager::bandwidth_monitor_stop(long)
//{
//    mangled_ppc("?bandwidth_monitor_stop@c_stream_manager@@QAAXJ@Z");
//};

//public: void c_stream_manager::bandwidth_monitor_events(long, long, long)
//{
//    mangled_ppc("?bandwidth_monitor_events@c_stream_manager@@QAAXJJJ@Z");
//};

//public: bool c_stream_manager::voice_data_available(long, long *)
//{
//    mangled_ppc("?voice_data_available@c_stream_manager@@QAA_NJPAJ@Z");
//};

//bool network_voice_data_available(long)
//{
//    mangled_ppc("?network_voice_data_available@@YA_NJ@Z");
//};

//long network_voice_get_data_size(long)
//{
//    mangled_ppc("?network_voice_get_data_size@@YAJJ@Z");
//};

//public: void c_stream_manager::voice_data_build(long, class c_bitstream *)
//{
//    mangled_ppc("?voice_data_build@c_stream_manager@@QAAXJPAVc_bitstream@@@Z");
//};

//void network_voice_data_get(long, class c_bitstream *)
//{
//    mangled_ppc("?network_voice_data_get@@YAXJPAVc_bitstream@@@Z");
//};

//public: static float c_stream_manager::accumulator_get_sanitized_average(class c_network_accumulator_statistics const *)
//{
//    mangled_ppc("?accumulator_get_sanitized_average@c_stream_manager@@SAMPBVc_network_accumulator_statistics@@@Z");
//};

//public: void c_stream_manager::set_probe_state(enum e_stream_manager_probe_state)
//{
//    mangled_ppc("?set_probe_state@c_stream_manager@@QAAXW4e_stream_manager_probe_state@@@Z");
//};

//public: void c_stream_manager::set_expansion_state(enum e_stream_manager_expansion_state)
//{
//    mangled_ppc("?set_expansion_state@c_stream_manager@@QAAXW4e_stream_manager_expansion_state@@@Z");
//};

//public: c_stream_manager_logger::c_stream_manager_logger(void)
//{
//    mangled_ppc("??0c_stream_manager_logger@@QAA@XZ");
//};

//public: c_stream_manager_logger::s_stream_manager_core::s_stream_manager_core(void)
//{
//    mangled_ppc("??0s_stream_manager_core@c_stream_manager_logger@@QAA@XZ");
//};

//public: c_stream_manager::c_stream_manager(void)
//{
//    mangled_ppc("??0c_stream_manager@@QAA@XZ");
//};

//public: c_network_accumulator_statistics::c_network_accumulator_statistics(void)
//{
//    mangled_ppc("??0c_network_accumulator_statistics@@QAA@XZ");
//};

//public: s_static_array<struct s_stream, 32>::s_static_array<struct s_stream, 32>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_stream@@$0CA@@@QAA@XZ");
//};

//public: s_stream::s_stream(void)
//{
//    mangled_ppc("??0s_stream@@QAA@XZ");
//};

//public: void c_stream_manager_logger::initialize(void)
//{
//    mangled_ppc("?initialize@c_stream_manager_logger@@QAAXXZ");
//};

//public: void c_stream_manager_logger::dispose(void)
//{
//    mangled_ppc("?dispose@c_stream_manager_logger@@QAAXXZ");
//};

//public: void c_stream_manager_logger::update(void)
//{
//    mangled_ppc("?update@c_stream_manager_logger@@QAAXXZ");
//};

//public: void c_stream_manager_logger::save_core_blocking(char const *)
//{
//    mangled_ppc("?save_core_blocking@c_stream_manager_logger@@QAAXPBD@Z");
//};

//private: void c_stream_manager_logger::save_core_periodic(void)
//{
//    mangled_ppc("?save_core_periodic@c_stream_manager_logger@@AAAXXZ");
//};

//private: void c_stream_manager_logger::save_core_start(char const *)
//{
//    mangled_ppc("?save_core_start@c_stream_manager_logger@@AAAXPBD@Z");
//};

//private: void c_stream_manager_logger::save_core_yield_until_done(void)
//{
//    mangled_ppc("?save_core_yield_until_done@c_stream_manager_logger@@AAAXXZ");
//};

//public: static void c_stream_manager_logger::load_from_core(char const *)
//{
//    mangled_ppc("?load_from_core@c_stream_manager_logger@@SAXPBD@Z");
//};

//public: c_stream_manager_logger::s_stream_manager_core::~s_stream_manager_core(void)
//{
//    mangled_ppc("??1s_stream_manager_core@c_stream_manager_logger@@QAA@XZ");
//};

//public: c_stream_manager::~c_stream_manager(void)
//{
//    mangled_ppc("??1c_stream_manager@@QAA@XZ");
//};

//public: c_network_accumulator_statistics::~c_network_accumulator_statistics(void)
//{
//    mangled_ppc("??1c_network_accumulator_statistics@@QAA@XZ");
//};

//void stream_manager_load_from_core(char const *)
//{
//    mangled_ppc("?stream_manager_load_from_core@@YAXPBD@Z");
//};

//void stream_manager_set_core_save_period(long)
//{
//    mangled_ppc("?stream_manager_set_core_save_period@@YAXJ@Z");
//};

//void stream_manager_save_core_blocking(char const *)
//{
//    mangled_ppc("?stream_manager_save_core_blocking@@YAXPBD@Z");
//};

//public: c_enum<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_stream_manager_probe_state@@D$0A@$05Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>::c_enum<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>(enum e_stream_manager_probe_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_stream_manager_probe_state@@D$0A@$05Us_default_enum_string_resolver@@@@QAA@W4e_stream_manager_probe_state@@@Z");
//};

//public: enum e_stream_manager_probe_state c_enum_no_init<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>::operator enum e_stream_manager_probe_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_stream_manager_probe_state@@D$0A@$05Us_default_enum_string_resolver@@@@QBA?AW4e_stream_manager_probe_state@@XZ");
//};

//public: bool c_enum_no_init<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>::operator==(enum e_stream_manager_probe_state) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_stream_manager_probe_state@@D$0A@$05Us_default_enum_string_resolver@@@@QBA_NW4e_stream_manager_probe_state@@@Z");
//};

//public: class c_static_string<64> c_enum_no_init<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_enum_no_init@W4e_stream_manager_probe_state@@D$0A@$05Us_default_enum_string_resolver@@@@QBA?AV?$c_static_string@$0EA@@@XZ");
//};

//public: c_enum<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_stream_manager_expansion_state@@D$0A@$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>(enum e_stream_manager_expansion_state)
//{
//    mangled_ppc("??0?$c_enum@W4e_stream_manager_expansion_state@@D$0A@$04Us_default_enum_string_resolver@@@@QAA@W4e_stream_manager_expansion_state@@@Z");
//};

//public: enum e_stream_manager_expansion_state c_enum_no_init<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_stream_manager_expansion_state(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_stream_manager_expansion_state@@D$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_stream_manager_expansion_state@@XZ");
//};

//public: bool c_enum_no_init<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>::operator==(enum e_stream_manager_expansion_state) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_stream_manager_expansion_state@@D$0A@$04Us_default_enum_string_resolver@@@@QBA_NW4e_stream_manager_expansion_state@@@Z");
//};

//public: class c_static_string<64> c_enum_no_init<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_enum_no_init@W4e_stream_manager_expansion_state@@D$0A@$04Us_default_enum_string_resolver@@@@QBA?AV?$c_static_string@$0EA@@@XZ");
//};

//public: c_enum<enum e_stream_synchronous_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_stream_synchronous_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_stream_synchronous_mode@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_stream_synchronous_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_stream_synchronous_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>(enum e_stream_synchronous_mode)
//{
//    mangled_ppc("??0?$c_enum@W4e_stream_synchronous_mode@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@W4e_stream_synchronous_mode@@@Z");
//};

//public: bool c_enum_no_init<enum e_stream_synchronous_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator==(enum e_stream_synchronous_mode) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_stream_synchronous_mode@@E$0A@$01Us_default_enum_string_resolver@@@@QBA_NW4e_stream_synchronous_mode@@@Z");
//};

//public: c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>(class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??0?$c_flags@J_K$0CA@Us_default_enum_string_resolver@@@@QAA@V?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: class c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver> & c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::operator=(class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??4?$c_flags@J_K$0CA@Us_default_enum_string_resolver@@@@QAAAAV0@ABV?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void s_static_array<struct s_channel_bandwidth_desires const *, 32>::set_all(struct s_channel_bandwidth_desires const *const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@PBUs_channel_bandwidth_desires@@$0CA@@@QAAXABQBUs_channel_bandwidth_desires@@@Z");
//};

//public: bool c_enum_no_init<enum e_stream_manager_probe_state, char, 0, 6, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_stream_manager_probe_state@@D$0A@$05Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_stream_manager_expansion_state, char, 0, 5, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_stream_manager_expansion_state@@D$0A@$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::set_all(void)
//{
//    mangled_ppc("?set_all@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::test(long) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@QBA_NJ@Z");
//};

//public: void c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::set(long, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@QAAXJ_N@Z");
//};

//public: long c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::count_set(void) const
//{
//    mangled_ppc("?count_set@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@QBAJXZ");
//};

//public: bool c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::operator==(class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??8?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: bool c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::operator!=(class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??9?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@QBA_NABV0@@Z");
//};

//public: class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::operator~(void) const
//{
//    mangled_ppc("??S?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@QBA?AV0@XZ");
//};

//public: class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??I?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> & c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::operator|=(class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??_5?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@QAAAAV0@ABV0@@Z");
//};

//public: static class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::make_flag(long)
//{
//    mangled_ppc("?make_flag@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@SA?AV1@J@Z");
//};

//public: unsigned __int64 c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@QBA_KXZ");
//};

//public: void c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::set_unsafe(unsigned __int64)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@QAAX_K@Z");
//};

//public: class c_static_string<1024> c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::to_string(void) const
//{
//    mangled_ppc("?to_string@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@QBA?AV?$c_static_string@$0EAA@@@XZ");
//};

//public: c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::c_flags<long, unsigned __int64, 32, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@J_K$0CA@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: struct s_stream & s_static_array<struct s_stream, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_stream@@$0CA@@@QAAAAUs_stream@@J@Z");
//};

//__int64 int_pin<__int64, int, long>(__int64const &, int const &, long const &)
//{
//    mangled_ppc("??$int_pin@_JHJ@@YA_JAB_JABHABJ@Z");
//};

//public: struct s_channel_bandwidth_desires const *& s_static_array<struct s_channel_bandwidth_desires const *, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PBUs_channel_bandwidth_desires@@$0CA@@@QAAAAPBUs_channel_bandwidth_desires@@J@Z");
//};

//public: float & s_static_array<float, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@M$0CA@@@QAAAAMJ@Z");
//};

//public: char * c_file_path::get_full_path<256>(class s_static_string<256> *) const
//{
//    mangled_ppc("??$get_full_path@$0BAA@@c_file_path@@QBAPADPAV?$s_static_string@$0BAA@@@@Z");
//};

//public: static class c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver> c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::make_mask_from_range(long, long)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@SA?AV1@JJ@Z");
//};

//public: static bool c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::valid_bit(long)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@SA_NJ@Z");
//};

//public: bool c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned __int64 c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::flag_size_type(long)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@CA_KJ@Z");
//};

//private: static unsigned __int64 c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@CA_KXZ");
//};

//public: static bool s_static_array<struct s_stream, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_stream@@$0CA@@@SA_NJ@Z");
//};

//__int64 int_floor<__int64, __int64>(__int64const &, __int64const &)
//{
//    mangled_ppc("??$int_floor@_J_J@@YA_JAB_J0@Z");
//};

//__int64 int_ceiling<__int64, __int64>(__int64const &, __int64const &)
//{
//    mangled_ppc("??$int_ceiling@_J_J@@YA_JAB_J0@Z");
//};

//public: static bool s_static_array<struct s_channel_bandwidth_desires const *, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PBUs_channel_bandwidth_desires@@$0CA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<float, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@M$0CA@@@SA_NJ@Z");
//};

//private: static unsigned __int64 c_flags_no_init<long, unsigned __int64, 32, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(long)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@J_K$0CA@Us_default_enum_string_resolver@@@@CA_KJ@Z");
//};

//__int64 int_max<__int64>(__int64const &, __int64const &)
//{
//    mangled_ppc("??$int_max@_J@@YA_JAB_J0@Z");
//};

//__int64 int_min<__int64>(__int64const &, __int64const &)
//{
//    mangled_ppc("??$int_min@_J@@YA_JAB_J0@Z");
//};

//public: c_stream_manager_logger::~c_stream_manager_logger(void)
//{
//    mangled_ppc("??1c_stream_manager_logger@@QAA@XZ");
//};

//void g_stream_manager::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_stream_manager@@YAXXZ");
//};

//void g_stream_manager_logger::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_stream_manager_logger@@YAXXZ");
//};

