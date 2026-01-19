/* ---------- headers */

#include "omaha\profiler\profiler.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_profiler_timing_report, 650>::k_element_count; // "?k_element_count@?$s_static_array@Vc_profiler_timing_report@@$0CIK@@@2JB"
// public: static long const s_static_array<class c_profiler_budget_report, 12>::k_element_count; // "?k_element_count@?$s_static_array@Vc_profiler_budget_report@@$0M@@@2JB"
// public: static long const s_static_array<class c_profile_session_timing, 3>::k_element_count; // "?k_element_count@?$s_static_array@Vc_profile_session_timing@@$02@@2JB"
// public: static long const s_static_array<struct s_profile_section_display_data, 650>::k_element_count; // "?k_element_count@?$s_static_array@Us_profile_section_display_data@@$0CIK@@@2JB"
// public: static long const s_static_array<struct s_budget_display_data, 12>::k_element_count; // "?k_element_count@?$s_static_array@Us_budget_display_data@@$0M@@@2JB"
// public: static long const s_static_array<struct s_session_timing, 12>::k_element_count; // "?k_element_count@?$s_static_array@Us_session_timing@@$0M@@@2JB"
// public: static long const s_static_array<struct s_synchronized_list_entry *, 3>::k_element_count; // "?k_element_count@?$s_static_array@PAUs_synchronized_list_entry@@$02@@2JB"
// long g_profiler_collection_interval; // "?g_profiler_collection_interval@@3JA"
// long g_profiler_reporting_interval; // "?g_profiler_reporting_interval@@3JA"
// char const **k_pulse_names; // "?k_pulse_names@@3PAPBDA"
// struct s_profiling_vtable *g_profile_budget_definitions; // "?g_profile_budget_definitions@@3PAUs_profiling_vtable@@A"
// long g_profile_display_type; // "?g_profile_display_type@@3JA"
// bool g_profiler_collection_enabled; // "?g_profiler_collection_enabled@@3_NA"
// bool g_profiler_export_enabled; // "?g_profiler_export_enabled@@3_NA"
// bool g_display_profiler_pulse_rates; // "?g_display_profiler_pulse_rates@@3_NA"
// class c_profiler_performance_monitor g_profiler_performance_monitor; // "?g_profiler_performance_monitor@@3Vc_profiler_performance_monitor@@A"

// public: void c_profile_session_timing::clear(void);
// public: void c_profile_session_timing::begin_session(long, long);
// public: void c_profile_session_timing::end_session(void);
// void profile_session_handle_child_session_report(unsigned int *, class c_profile_session_timing &, unsigned int *, class c_profile_session_timing &volatile);
// void profiler_budget_append_report(unsigned int *, class c_profiler_budget_report &, unsigned int *, class c_profiler_budget_report &volatile);
// void profile_session_append_timing_data(unsigned int *, class c_profile_session_timing &, unsigned int *, class c_profile_session_timing &volatile);
// void combine_profiler_timing_reports(unsigned int *, class c_profiler_timing_report &, unsigned int *, class c_profiler_timing_report &volatile);
// public: void c_profile_session_collector::initialize(long);
// public: void c_profile_session_collector::begin_session(void);
// public: void c_profile_session_collector::end_session(void);
// public: void c_profile_session_timing::add_profiler_overhead(long);
// public: void c_profile_session_collector::handle_sync_primitive_report(long, long, struct s_blocking_instance_report const &);
// public: void c_profile_session_collector::handle_gpu_stall_report(long, long);
// public: bool c_profile_session_collector::request_published_data(class c_profile_session_timing *, class c_profile_session_timing *, class c_profile_session_timing *);
// unsigned long profiler_thread(void *);
// void profiler_monitor_pulse_and_session_data(void);
// void profiler_begin_session_internal(long);
// void profiler_end_session_internal(long);
// void profiler_notify_blocking_time_internal(long, long, struct s_blocking_instance_report const &);
// void profiler_notify_gpu_stall_time(long, float);
// long real_to_fixed(float);
// char const * get_profile_session_name(long);
// public: void c_profiler_performance_monitor::initialize(void);
// public: void c_profiler_performance_display_data::clear(void);
// public: void c_profiler_performance_monitor::reset_accumulated_data(void);
// public: void c_profiler_performance_monitor::update(void);
// float fixed_to_real(long);
// public: void c_profiler_performance_monitor::report_spikes(float);
// bool saved_film_manager_get_current_film_name(class c_static_string<256> *);
// struct s_profile_definition const * profiler_get_definition_internal(long);
// void budget_string_from_timing_report(class c_profiler_timing_report const &, class c_static_string<1024> &);
// public: void c_profiler_performance_monitor::display_enable(bool);
// public: void c_profiler_performance_monitor::display_freeze_toggle(void);
// bool saved_film_manager_set_playback_game_speed(float);
// public: void c_profiler_performance_monitor::display_session_cycle(long);
// public: class c_synchronized_int32& c_synchronized_int32::operator=(long);
// public: void c_profiler_performance_monitor::display_sort_method_cycle(long);
// public: void c_profiler_performance_monitor::display_attribute_cycle(long);
// public: void c_profiler_performance_monitor::display_update_type_cycle(long);
// public: void c_profiler_performance_monitor::display_layout_type_cycle(long);
// public: void c_profiler_performance_monitor::display_timings_scroll(long);
// public: void c_profiler_performance_monitor::gather_budgets_data(struct s_profiler_performance_budgets_data *);
// bool sortable_display_data_comparison_function(void const *, void const *, void const *);
// public: void c_profiler_performance_display_data::refresh(class c_profile_session_timing const &, long, long, long);
// public: void c_profile_instance::begin(void);
// public: long c_profile_session_collector::set_active_budget_index(long);
// public: long c_profile_session_collector::get_active_budget_index(void) const;
// public: class c_profile_instance * c_profile_session_collector::set_current_profile_instance(class c_profile_instance *);
// public: class c_profile_session_timing * c_profile_session_collector::get_session_timing_record(void);
// public: void c_profile_instance::end(void);
// void profiler_budget_handle_inclusive_timing_report(unsigned int *, class c_profiler_budget_report &, unsigned int *, class c_profiler_timing_report &volatile);
// bool copy_profiler_timing_report_if_greater(unsigned int *, class c_profiler_timing_report &, unsigned int *, class c_profiler_timing_report &volatile);
// void profiler_budget_handle_exclusive_timing_report(unsigned int *, class c_profiler_budget_report &, unsigned int *, class c_profiler_timing_report &volatile);
// public: void c_profile_instance::handle_gpu_stall_report(long, long);
// public: void c_profile_instance::handle_sync_primitive_report(long, long, struct s_blocking_instance_report const &);
// void profiler_initialize_system(void);
// void profiler_initialize(void);
// void profiler_dispose(void);
// void profiler_pause_reporting(void);
// void profiler_initialize_for_new_map(void);
// void profiler_dispose_from_old_map(void);
// void profiler_notify_game_time_advance(void);
// void profiler_enable(bool);
// void profiler_auto_core_save(bool);
// long profiler_get_total_definitions(void);
// struct s_profile_definition const * profiler_get_definition(long);
// long profiler_add_new_definition(char const *, long, char const *, long);
// void profiler_notify_pulse(enum e_profiler_pulse_types);
// void profiler_render_display(void);
// float profiler_get_pulse_rate(enum e_profiler_pulse_types);
// float profiler_get_average_pulse_rate(enum e_profiler_pulse_types);
// float profiler_estimate_pulse_rate(enum e_profiler_pulse_types);
// void profiler_ignore_deadlocks(bool);
// void profiler_dump_recent_history(void);
// void profiler_enable_profiling(bool);
// char const * profiler_get_budget_name(long);
// void profiler_notify_map_or_session_change(char const *);
// public: void c_profiler_performance_monitor::collect_immediatly(void);
// struct s_profiler_map_data const * profiler_get_map_data(void);
// struct s_profiler_sampled_performance_data * profiler_try_and_get_sampled_performance_data(void);
// void profiler_release_sampled_performance_data(void);
// char const * profiler_get_definition_name(long);
// void profiler_gather_player_and_machine_data(void);
// void profiler_gather_sampled_performance_data(void);
// void profiler_gather_summary_data(struct s_profiler_performance_summary_data *);
// void profiler_gather_budgets_data(struct s_profiler_performance_budgets_data *);
// void profiler_gather_observers_data(struct s_profiler_performance_observers_data *);
// bool profiler_substring_filtering_active(void);
// void profiler_sections_activate(char const *);
// void profile_definitions_change_activation(char const *, bool);
// bool string_has_prefix(unsigned int *, unsigned int *&volatile);
// void profiler_sections_deactivate(char const *);
// bool session_timing_comparison_function(void const *, void const *, void const *);
// public: static long s_static_array<class c_profiler_timing_report, 650>::get_count(void);
// public: static long s_static_array<class c_profiler_budget_report, 12>::get_count(void);
// public: struct s_profile_section_display_data * s_static_array<struct s_profile_section_display_data, 650>::get_elements(void);
// public: static long s_static_array<struct s_profile_section_display_data, 650>::get_count(void);
// public: unsigned int s_static_array<struct s_profile_section_display_data, 650>::get_total_element_size(void) const;
// ?sort_range@?$s_static_array@Us_profile_section_display_data@@$0CIK@@@QAAXJQ6A_NPBX00@Z0@Z;
// public: static long s_static_array<struct s_budget_display_data, 12>::get_count(void);
// public: void s_static_array<struct s_budget_display_data, 12>::set_memory(long);
// public: void t_event_queue<class c_profile_session_timing, 3>::initialize(void);
// public: class c_profile_session_timing * t_event_queue<class c_profile_session_timing, 3>::allocate_event(void);
// public: class c_profile_session_timing * t_event_queue<class c_profile_session_timing, 3>::try_to_allocate_event(void);
// public: void t_event_queue<class c_profile_session_timing, 3>::queue_event(class c_profile_session_timing *);
// public: class c_profile_session_timing * t_event_queue<class c_profile_session_timing, 3>::acquire_event_chain(enum e_event_queue_chain_order);
// public: class c_profile_session_timing * t_event_queue<class c_profile_session_timing, 3>::release_chain_top_event(class c_profile_session_timing *);
// public: class c_profile_session_collector * c_synchronized_pointer<class c_profile_session_collector>::peek(void) const volatile;
// public: class c_profile_session_collector * c_synchronized_pointer<class c_profile_session_collector>::set(class c_profile_session_collector *) volatile;
// public: class c_profiler_budget_report & s_static_array<class c_profiler_budget_report, 12>::operator[]<long>(long);
// public: class c_profiler_budget_report & s_static_array<class c_profiler_budget_report, 12>::element<long>(long);
// public: class c_profiler_budget_report const & s_static_array<class c_profiler_budget_report, 12>::element<long>(long) const;
// public: class c_profiler_timing_report & s_static_array<class c_profiler_timing_report, 650>::operator[]<int>(int);
// public: class c_profiler_timing_report const & s_static_array<class c_profiler_timing_report, 650>::operator[]<int>(int) const;
// public: class c_profiler_budget_report & s_static_array<class c_profiler_budget_report, 12>::operator[]<int>(int);
// public: class c_profiler_budget_report const & s_static_array<class c_profiler_budget_report, 12>::operator[]<int>(int) const;
// public: struct s_profile_section_display_data & s_static_array<struct s_profile_section_display_data, 650>::operator[]<long>(long);
// void xchg<long>(long &, long &);
// public: class c_profiler_budget_report const & s_static_array<class c_profiler_budget_report, 12>::operator[]<long>(long) const;
// public: struct s_budget_display_data & s_static_array<struct s_budget_display_data, 12>::operator[]<long>(long);
// public: class c_profiler_timing_report const & s_static_array<class c_profiler_timing_report, 650>::operator[]<long>(long) const;
// public: class c_profiler_timing_report & s_static_array<class c_profiler_timing_report, 650>::operator[]<long>(long);
// public: class c_profiler_budget_report & s_static_array<class c_profiler_budget_report, 12>::operator[]<short>(short);
// public: void t_event_queue<class c_profile_session_timing, 3>::initialize_limited(long);
// public: bool t_event_queue<class c_profile_session_timing, 3>::valid_event(void const *) const;
// public: void t_event_queue<class c_profile_session_timing, 3>::assert_valid_chain(struct s_synchronized_list_entry *) const;
// public: static bool s_static_array<class c_profiler_budget_report, 12>::valid<long>(long);
// public: static bool s_static_array<class c_profiler_timing_report, 650>::valid<int>(int);
// public: static bool s_static_array<class c_profiler_budget_report, 12>::valid<int>(int);
// public: static bool s_static_array<struct s_profile_section_display_data, 650>::valid<long>(long);
// public: static bool s_static_array<struct s_budget_display_data, 12>::valid<long>(long);
// public: static bool s_static_array<class c_profiler_timing_report, 650>::valid<long>(long);
// public: static bool s_static_array<class c_profiler_budget_report, 12>::valid<short>(short);
// public: static long s_static_array<class c_profile_session_timing, 3>::get_count(void);
// public: struct s_synchronized_list_entry ** s_static_array<struct s_synchronized_list_entry *, 3>::get_elements(void);
// public: class c_profile_session_timing & s_static_array<class c_profile_session_timing, 3>::operator[]<long>(long);
// public: struct s_synchronized_list_entry *& s_static_array<struct s_synchronized_list_entry *, 3>::operator[]<long>(long);
// public: class c_profile_session_timing const & s_static_array<class c_profile_session_timing, 3>::operator[]<int>(int) const;
// public: class c_profile_session_timing const & s_static_array<class c_profile_session_timing, 3>::operator[]<long>(long) const;
// public: static bool s_static_array<class c_profile_session_timing, 3>::valid<long>(long);
// public: static bool s_static_array<struct s_synchronized_list_entry *, 3>::valid<long>(long);
// public: static bool s_static_array<class c_profile_session_timing, 3>::valid<int>(int);
// public: long c_profiler_timing_report::total_exclusive_time(void) const;
// public: void c_profiler_timing_report::clear(void);
// void session_budget_spike_callback(struct s_spike_report_data &);
// void session_budget_format_callback(struct s_spike_report_data const &, char const **, char *, long);
// public: struct s_session_timing * s_static_array<struct s_session_timing, 12>::get_elements(void);
// ?sort@?$s_static_array@Us_session_timing@@$0M@@@QAAXQ6A_NPBX00@Z0@Z;
// public: struct s_session_timing & s_static_array<struct s_session_timing, 12>::operator[]<long>(long);
// public: static bool s_static_array<struct s_session_timing, 12>::valid<long>(long);
// public: s_profiler_globals::s_profiler_globals(void);
// public: c_profile_session_collector::c_profile_session_collector(void);
// public: s_profiler_pulse_data::s_profiler_pulse_data(void);
// public: s_profiler_session_data::s_profiler_session_data(void);
// public: s_profiler_player_and_machine_data::s_profiler_player_and_machine_data(void);
// public: s_profiler_sampled_performance_data_synchronized::s_profiler_sampled_performance_data_synchronized(void);
// public: s_automatic_tracedump_settings::s_automatic_tracedump_settings(void);
// public: s_profiler_map_data::s_profiler_map_data(void);
// public: c_datamine_game_info::c_datamine_game_info(void);
// public: t_event_queue<class c_profile_session_timing, 3>::t_event_queue<class c_profile_session_timing, 3>(void);
// public: c_synchronized_pointer<class c_profile_session_collector>::c_synchronized_pointer<class c_profile_session_collector>(void);
// public: s_static_array<class c_profile_session_timing, 3>::s_static_array<class c_profile_session_timing, 3>(void);
// public: c_profile_session_timing::c_profile_session_timing(void);
// public: s_static_array<class c_profiler_timing_report, 650>::s_static_array<class c_profiler_timing_report, 650>(void);
// public: s_static_array<class c_profiler_budget_report, 12>::s_static_array<class c_profiler_budget_report, 12>(void);
// public: c_profiler_budget_report::c_profiler_budget_report(void);
// public: c_profiler_performance_monitor::c_profiler_performance_monitor(void);
// public: c_profiler_performance_display_data::c_profiler_performance_display_data(void);
// public: s_static_array<struct s_profile_section_display_data, 650>::s_static_array<struct s_profile_section_display_data, 650>(void);
// public: s_profile_section_display_data::s_profile_section_display_data(void);
// public: c_profiler_performance_monitor::s_profile_session_collection::s_profile_session_collection(void);
// public: c_profiler_performance_monitor::s_profile_history_grid_line::s_profile_history_grid_line(void);
// public: s_profiler_globals::~s_profiler_globals(void);
// public: c_profile_session_collector::~c_profile_session_collector(void);
// public: s_profiler_pulse_data::~s_profiler_pulse_data(void);
// public: s_profiler_session_data::~s_profiler_session_data(void);
// public: s_profiler_player_and_machine_data::~s_profiler_player_and_machine_data(void);
// public: s_profiler_sampled_performance_data_synchronized::~s_profiler_sampled_performance_data_synchronized(void);
// public: s_automatic_tracedump_settings::~s_automatic_tracedump_settings(void);
// public: s_profiler_map_data::~s_profiler_map_data(void);
// public: c_datamine_game_info::~c_datamine_game_info(void);
// public: t_event_queue<class c_profile_session_timing, 3>::~t_event_queue<class c_profile_session_timing, 3>(void);
// public: c_synchronized_pointer<class c_profile_session_collector>::~c_synchronized_pointer<class c_profile_session_collector>(void);
// public: s_static_array<class c_profile_session_timing, 3>::~s_static_array<class c_profile_session_timing, 3>(void);
// public: c_profile_session_timing::~c_profile_session_timing(void);
// public: s_static_array<class c_profiler_timing_report, 650>::~s_static_array<class c_profiler_timing_report, 650>(void);
// public: s_static_array<class c_profiler_budget_report, 12>::~s_static_array<class c_profiler_budget_report, 12>(void);
// public: c_profiler_budget_report::~c_profiler_budget_report(void);
// public: c_profiler_performance_monitor::~c_profiler_performance_monitor(void);
// public: c_profiler_performance_display_data::~c_profiler_performance_display_data(void);
// public: s_static_array<struct s_profile_section_display_data, 650>::~s_static_array<struct s_profile_section_display_data, 650>(void);
// public: s_profile_section_display_data::~s_profile_section_display_data(void);
// public: c_profiler_performance_monitor::s_profile_session_collection::~s_profile_session_collection(void);
// public: c_profiler_performance_monitor::s_profile_history_grid_line::~s_profile_history_grid_line(void);
// void g_profiler_globals::`dynamic atexit destructor'(void);
// void g_profiler_performance_monitor::`dynamic atexit destructor'(void);
// void g_ignore_deadlock_reference_count::`dynamic atexit destructor'(void);

//public: void c_profile_session_timing::clear(void)
//{
//    mangled_ppc("?clear@c_profile_session_timing@@QAAXXZ");
//};

//public: void c_profile_session_timing::begin_session(long, long)
//{
//    mangled_ppc("?begin_session@c_profile_session_timing@@QAAXJJ@Z");
//};

//public: void c_profile_session_timing::end_session(void)
//{
//    mangled_ppc("?end_session@c_profile_session_timing@@QAAXXZ");
//};

//void profile_session_handle_child_session_report(unsigned int *, class c_profile_session_timing &, unsigned int *, class c_profile_session_timing &volatile)
//{
//    mangled_ppc("?profile_session_handle_child_session_report@@YAXPIAVc_profile_session_timing@@PIBV1@@Z");
//};

//void profiler_budget_append_report(unsigned int *, class c_profiler_budget_report &, unsigned int *, class c_profiler_budget_report &volatile)
//{
//    mangled_ppc("?profiler_budget_append_report@@YAXPIAVc_profiler_budget_report@@PIBV1@@Z");
//};

//void profile_session_append_timing_data(unsigned int *, class c_profile_session_timing &, unsigned int *, class c_profile_session_timing &volatile)
//{
//    mangled_ppc("?profile_session_append_timing_data@@YAXPIAVc_profile_session_timing@@PIBV1@@Z");
//};

//void combine_profiler_timing_reports(unsigned int *, class c_profiler_timing_report &, unsigned int *, class c_profiler_timing_report &volatile)
//{
//    mangled_ppc("?combine_profiler_timing_reports@@YAXPIAVc_profiler_timing_report@@PIBV1@@Z");
//};

//public: void c_profile_session_collector::initialize(long)
//{
//    mangled_ppc("?initialize@c_profile_session_collector@@QAAXJ@Z");
//};

//public: void c_profile_session_collector::begin_session(void)
//{
//    mangled_ppc("?begin_session@c_profile_session_collector@@QAAXXZ");
//};

//public: void c_profile_session_collector::end_session(void)
//{
//    mangled_ppc("?end_session@c_profile_session_collector@@QAAXXZ");
//};

//public: void c_profile_session_timing::add_profiler_overhead(long)
//{
//    mangled_ppc("?add_profiler_overhead@c_profile_session_timing@@QAAXJ@Z");
//};

//public: void c_profile_session_collector::handle_sync_primitive_report(long, long, struct s_blocking_instance_report const &)
//{
//    mangled_ppc("?handle_sync_primitive_report@c_profile_session_collector@@QAAXJJABUs_blocking_instance_report@@@Z");
//};

//public: void c_profile_session_collector::handle_gpu_stall_report(long, long)
//{
//    mangled_ppc("?handle_gpu_stall_report@c_profile_session_collector@@QAAXJJ@Z");
//};

//public: bool c_profile_session_collector::request_published_data(class c_profile_session_timing *, class c_profile_session_timing *, class c_profile_session_timing *)
//{
//    mangled_ppc("?request_published_data@c_profile_session_collector@@QAA_NPAVc_profile_session_timing@@00@Z");
//};

//unsigned long profiler_thread(void *)
//{
//    mangled_ppc("?profiler_thread@@YAKPAX@Z");
//};

//void profiler_monitor_pulse_and_session_data(void)
//{
//    mangled_ppc("?profiler_monitor_pulse_and_session_data@@YAXXZ");
//};

//void profiler_begin_session_internal(long)
//{
//    mangled_ppc("?profiler_begin_session_internal@@YAXJ@Z");
//};

//void profiler_end_session_internal(long)
//{
//    mangled_ppc("?profiler_end_session_internal@@YAXJ@Z");
//};

//void profiler_notify_blocking_time_internal(long, long, struct s_blocking_instance_report const &)
//{
//    mangled_ppc("?profiler_notify_blocking_time_internal@@YAXJJABUs_blocking_instance_report@@@Z");
//};

//void profiler_notify_gpu_stall_time(long, float)
//{
//    mangled_ppc("?profiler_notify_gpu_stall_time@@YAXJM@Z");
//};

//long real_to_fixed(float)
//{
//    mangled_ppc("?real_to_fixed@@YAJM@Z");
//};

//char const * get_profile_session_name(long)
//{
//    mangled_ppc("?get_profile_session_name@@YAPBDJ@Z");
//};

//public: void c_profiler_performance_monitor::initialize(void)
//{
//    mangled_ppc("?initialize@c_profiler_performance_monitor@@QAAXXZ");
//};

//public: void c_profiler_performance_display_data::clear(void)
//{
//    mangled_ppc("?clear@c_profiler_performance_display_data@@QAAXXZ");
//};

//public: void c_profiler_performance_monitor::reset_accumulated_data(void)
//{
//    mangled_ppc("?reset_accumulated_data@c_profiler_performance_monitor@@QAAXXZ");
//};

//public: void c_profiler_performance_monitor::update(void)
//{
//    mangled_ppc("?update@c_profiler_performance_monitor@@QAAXXZ");
//};

//float fixed_to_real(long)
//{
//    mangled_ppc("?fixed_to_real@@YAMJ@Z");
//};

//public: void c_profiler_performance_monitor::report_spikes(float)
//{
//    mangled_ppc("?report_spikes@c_profiler_performance_monitor@@QAAXM@Z");
//};

//bool saved_film_manager_get_current_film_name(class c_static_string<256> *)
//{
//    mangled_ppc("?saved_film_manager_get_current_film_name@@YA_NPAV?$c_static_string@$0BAA@@@@Z");
//};

//struct s_profile_definition const * profiler_get_definition_internal(long)
//{
//    mangled_ppc("?profiler_get_definition_internal@@YAPBUs_profile_definition@@J@Z");
//};

//void budget_string_from_timing_report(class c_profiler_timing_report const &, class c_static_string<1024> &)
//{
//    mangled_ppc("?budget_string_from_timing_report@@YAXABVc_profiler_timing_report@@AAV?$c_static_string@$0EAA@@@@Z");
//};

//public: void c_profiler_performance_monitor::display_enable(bool)
//{
//    mangled_ppc("?display_enable@c_profiler_performance_monitor@@QAAX_N@Z");
//};

//public: void c_profiler_performance_monitor::display_freeze_toggle(void)
//{
//    mangled_ppc("?display_freeze_toggle@c_profiler_performance_monitor@@QAAXXZ");
//};

//bool saved_film_manager_set_playback_game_speed(float)
//{
//    mangled_ppc("?saved_film_manager_set_playback_game_speed@@YA_NM@Z");
//};

//public: void c_profiler_performance_monitor::display_session_cycle(long)
//{
//    mangled_ppc("?display_session_cycle@c_profiler_performance_monitor@@QAAXJ@Z");
//};

//public: class c_synchronized_int32& c_synchronized_int32::operator=(long)
//{
//    mangled_ppc("??4c_synchronized_int32@@QAAAAV0@J@Z");
//};

//public: void c_profiler_performance_monitor::display_sort_method_cycle(long)
//{
//    mangled_ppc("?display_sort_method_cycle@c_profiler_performance_monitor@@QAAXJ@Z");
//};

//public: void c_profiler_performance_monitor::display_attribute_cycle(long)
//{
//    mangled_ppc("?display_attribute_cycle@c_profiler_performance_monitor@@QAAXJ@Z");
//};

//public: void c_profiler_performance_monitor::display_update_type_cycle(long)
//{
//    mangled_ppc("?display_update_type_cycle@c_profiler_performance_monitor@@QAAXJ@Z");
//};

//public: void c_profiler_performance_monitor::display_layout_type_cycle(long)
//{
//    mangled_ppc("?display_layout_type_cycle@c_profiler_performance_monitor@@QAAXJ@Z");
//};

//public: void c_profiler_performance_monitor::display_timings_scroll(long)
//{
//    mangled_ppc("?display_timings_scroll@c_profiler_performance_monitor@@QAAXJ@Z");
//};

//public: void c_profiler_performance_monitor::gather_budgets_data(struct s_profiler_performance_budgets_data *)
//{
//    mangled_ppc("?gather_budgets_data@c_profiler_performance_monitor@@QAAXPAUs_profiler_performance_budgets_data@@@Z");
//};

//bool sortable_display_data_comparison_function(void const *, void const *, void const *)
//{
//    mangled_ppc("?sortable_display_data_comparison_function@@YA_NPBX00@Z");
//};

//public: void c_profiler_performance_display_data::refresh(class c_profile_session_timing const &, long, long, long)
//{
//    mangled_ppc("?refresh@c_profiler_performance_display_data@@QAAXABVc_profile_session_timing@@JJJ@Z");
//};

//public: void c_profile_instance::begin(void)
//{
//    mangled_ppc("?begin@c_profile_instance@@QAAXXZ");
//};

//public: long c_profile_session_collector::set_active_budget_index(long)
//{
//    mangled_ppc("?set_active_budget_index@c_profile_session_collector@@QAAJJ@Z");
//};

//public: long c_profile_session_collector::get_active_budget_index(void) const
//{
//    mangled_ppc("?get_active_budget_index@c_profile_session_collector@@QBAJXZ");
//};

//public: class c_profile_instance * c_profile_session_collector::set_current_profile_instance(class c_profile_instance *)
//{
//    mangled_ppc("?set_current_profile_instance@c_profile_session_collector@@QAAPAVc_profile_instance@@PAV2@@Z");
//};

//public: class c_profile_session_timing * c_profile_session_collector::get_session_timing_record(void)
//{
//    mangled_ppc("?get_session_timing_record@c_profile_session_collector@@QAAPAVc_profile_session_timing@@XZ");
//};

//public: void c_profile_instance::end(void)
//{
//    mangled_ppc("?end@c_profile_instance@@QAAXXZ");
//};

//void profiler_budget_handle_inclusive_timing_report(unsigned int *, class c_profiler_budget_report &, unsigned int *, class c_profiler_timing_report &volatile)
//{
//    mangled_ppc("?profiler_budget_handle_inclusive_timing_report@@YAXPIAVc_profiler_budget_report@@PIBVc_profiler_timing_report@@@Z");
//};

//bool copy_profiler_timing_report_if_greater(unsigned int *, class c_profiler_timing_report &, unsigned int *, class c_profiler_timing_report &volatile)
//{
//    mangled_ppc("?copy_profiler_timing_report_if_greater@@YA_NPIAVc_profiler_timing_report@@PIBV1@@Z");
//};

//void profiler_budget_handle_exclusive_timing_report(unsigned int *, class c_profiler_budget_report &, unsigned int *, class c_profiler_timing_report &volatile)
//{
//    mangled_ppc("?profiler_budget_handle_exclusive_timing_report@@YAXPIAVc_profiler_budget_report@@PIBVc_profiler_timing_report@@@Z");
//};

//public: void c_profile_instance::handle_gpu_stall_report(long, long)
//{
//    mangled_ppc("?handle_gpu_stall_report@c_profile_instance@@QAAXJJ@Z");
//};

//public: void c_profile_instance::handle_sync_primitive_report(long, long, struct s_blocking_instance_report const &)
//{
//    mangled_ppc("?handle_sync_primitive_report@c_profile_instance@@QAAXJJABUs_blocking_instance_report@@@Z");
//};

//void profiler_initialize_system(void)
//{
//    mangled_ppc("?profiler_initialize_system@@YAXXZ");
//};

//void profiler_initialize(void)
//{
//    mangled_ppc("?profiler_initialize@@YAXXZ");
//};

//void profiler_dispose(void)
//{
//    mangled_ppc("?profiler_dispose@@YAXXZ");
//};

//void profiler_pause_reporting(void)
//{
//    mangled_ppc("?profiler_pause_reporting@@YAXXZ");
//};

//void profiler_initialize_for_new_map(void)
//{
//    mangled_ppc("?profiler_initialize_for_new_map@@YAXXZ");
//};

//void profiler_dispose_from_old_map(void)
//{
//    mangled_ppc("?profiler_dispose_from_old_map@@YAXXZ");
//};

//void profiler_notify_game_time_advance(void)
//{
//    mangled_ppc("?profiler_notify_game_time_advance@@YAXXZ");
//};

//void profiler_enable(bool)
//{
//    mangled_ppc("?profiler_enable@@YAX_N@Z");
//};

//void profiler_auto_core_save(bool)
//{
//    mangled_ppc("?profiler_auto_core_save@@YAX_N@Z");
//};

//long profiler_get_total_definitions(void)
//{
//    mangled_ppc("?profiler_get_total_definitions@@YAJXZ");
//};

//struct s_profile_definition const * profiler_get_definition(long)
//{
//    mangled_ppc("?profiler_get_definition@@YAPBUs_profile_definition@@J@Z");
//};

//long profiler_add_new_definition(char const *, long, char const *, long)
//{
//    mangled_ppc("?profiler_add_new_definition@@YAJPBDJ0J@Z");
//};

//void profiler_notify_pulse(enum e_profiler_pulse_types)
//{
//    mangled_ppc("?profiler_notify_pulse@@YAXW4e_profiler_pulse_types@@@Z");
//};

//void profiler_render_display(void)
//{
//    mangled_ppc("?profiler_render_display@@YAXXZ");
//};

//float profiler_get_pulse_rate(enum e_profiler_pulse_types)
//{
//    mangled_ppc("?profiler_get_pulse_rate@@YAMW4e_profiler_pulse_types@@@Z");
//};

//float profiler_get_average_pulse_rate(enum e_profiler_pulse_types)
//{
//    mangled_ppc("?profiler_get_average_pulse_rate@@YAMW4e_profiler_pulse_types@@@Z");
//};

//float profiler_estimate_pulse_rate(enum e_profiler_pulse_types)
//{
//    mangled_ppc("?profiler_estimate_pulse_rate@@YAMW4e_profiler_pulse_types@@@Z");
//};

//void profiler_ignore_deadlocks(bool)
//{
//    mangled_ppc("?profiler_ignore_deadlocks@@YAX_N@Z");
//};

//void profiler_dump_recent_history(void)
//{
//    mangled_ppc("?profiler_dump_recent_history@@YAXXZ");
//};

//void profiler_enable_profiling(bool)
//{
//    mangled_ppc("?profiler_enable_profiling@@YAX_N@Z");
//};

//char const * profiler_get_budget_name(long)
//{
//    mangled_ppc("?profiler_get_budget_name@@YAPBDJ@Z");
//};

//void profiler_notify_map_or_session_change(char const *)
//{
//    mangled_ppc("?profiler_notify_map_or_session_change@@YAXPBD@Z");
//};

//public: void c_profiler_performance_monitor::collect_immediatly(void)
//{
//    mangled_ppc("?collect_immediatly@c_profiler_performance_monitor@@QAAXXZ");
//};

//struct s_profiler_map_data const * profiler_get_map_data(void)
//{
//    mangled_ppc("?profiler_get_map_data@@YAPBUs_profiler_map_data@@XZ");
//};

//struct s_profiler_sampled_performance_data * profiler_try_and_get_sampled_performance_data(void)
//{
//    mangled_ppc("?profiler_try_and_get_sampled_performance_data@@YAPAUs_profiler_sampled_performance_data@@XZ");
//};

//void profiler_release_sampled_performance_data(void)
//{
//    mangled_ppc("?profiler_release_sampled_performance_data@@YAXXZ");
//};

//char const * profiler_get_definition_name(long)
//{
//    mangled_ppc("?profiler_get_definition_name@@YAPBDJ@Z");
//};

//void profiler_gather_player_and_machine_data(void)
//{
//    mangled_ppc("?profiler_gather_player_and_machine_data@@YAXXZ");
//};

//void profiler_gather_sampled_performance_data(void)
//{
//    mangled_ppc("?profiler_gather_sampled_performance_data@@YAXXZ");
//};

//void profiler_gather_summary_data(struct s_profiler_performance_summary_data *)
//{
//    mangled_ppc("?profiler_gather_summary_data@@YAXPAUs_profiler_performance_summary_data@@@Z");
//};

//void profiler_gather_budgets_data(struct s_profiler_performance_budgets_data *)
//{
//    mangled_ppc("?profiler_gather_budgets_data@@YAXPAUs_profiler_performance_budgets_data@@@Z");
//};

//void profiler_gather_observers_data(struct s_profiler_performance_observers_data *)
//{
//    mangled_ppc("?profiler_gather_observers_data@@YAXPAUs_profiler_performance_observers_data@@@Z");
//};

//bool profiler_substring_filtering_active(void)
//{
//    mangled_ppc("?profiler_substring_filtering_active@@YA_NXZ");
//};

//void profiler_sections_activate(char const *)
//{
//    mangled_ppc("?profiler_sections_activate@@YAXPBD@Z");
//};

//void profile_definitions_change_activation(char const *, bool)
//{
//    mangled_ppc("?profile_definitions_change_activation@@YAXPBD_N@Z");
//};

//bool string_has_prefix(unsigned int *, unsigned int *&volatile)
//{
//    mangled_ppc("?string_has_prefix@@YA_NPIBD0@Z");
//};

//void profiler_sections_deactivate(char const *)
//{
//    mangled_ppc("?profiler_sections_deactivate@@YAXPBD@Z");
//};

//bool session_timing_comparison_function(void const *, void const *, void const *)
//{
//    mangled_ppc("?session_timing_comparison_function@@YA_NPBX00@Z");
//};

//public: static long s_static_array<class c_profiler_timing_report, 650>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_profiler_timing_report@@$0CIK@@@SAJXZ");
//};

//public: static long s_static_array<class c_profiler_budget_report, 12>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_profiler_budget_report@@$0M@@@SAJXZ");
//};

//public: struct s_profile_section_display_data * s_static_array<struct s_profile_section_display_data, 650>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_profile_section_display_data@@$0CIK@@@QAAPAUs_profile_section_display_data@@XZ");
//};

//public: static long s_static_array<struct s_profile_section_display_data, 650>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_profile_section_display_data@@$0CIK@@@SAJXZ");
//};

//public: unsigned int s_static_array<struct s_profile_section_display_data, 650>::get_total_element_size(void) const
//{
//    mangled_ppc("?get_total_element_size@?$s_static_array@Us_profile_section_display_data@@$0CIK@@@QBAIXZ");
//};

//?sort_range@?$s_static_array@Us_profile_section_display_data@@$0CIK@@@QAAXJQ6A_NPBX00@Z0@Z
//{
//    mangled_ppc("?sort_range@?$s_static_array@Us_profile_section_display_data@@$0CIK@@@QAAXJQ6A_NPBX00@Z0@Z");
//};

//public: static long s_static_array<struct s_budget_display_data, 12>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_budget_display_data@@$0M@@@SAJXZ");
//};

//public: void s_static_array<struct s_budget_display_data, 12>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Us_budget_display_data@@$0M@@@QAAXJ@Z");
//};

//public: void t_event_queue<class c_profile_session_timing, 3>::initialize(void)
//{
//    mangled_ppc("?initialize@?$t_event_queue@Vc_profile_session_timing@@$02@@QAAXXZ");
//};

//public: class c_profile_session_timing * t_event_queue<class c_profile_session_timing, 3>::allocate_event(void)
//{
//    mangled_ppc("?allocate_event@?$t_event_queue@Vc_profile_session_timing@@$02@@QAAPAVc_profile_session_timing@@XZ");
//};

//public: class c_profile_session_timing * t_event_queue<class c_profile_session_timing, 3>::try_to_allocate_event(void)
//{
//    mangled_ppc("?try_to_allocate_event@?$t_event_queue@Vc_profile_session_timing@@$02@@QAAPAVc_profile_session_timing@@XZ");
//};

//public: void t_event_queue<class c_profile_session_timing, 3>::queue_event(class c_profile_session_timing *)
//{
//    mangled_ppc("?queue_event@?$t_event_queue@Vc_profile_session_timing@@$02@@QAAXPAVc_profile_session_timing@@@Z");
//};

//public: class c_profile_session_timing * t_event_queue<class c_profile_session_timing, 3>::acquire_event_chain(enum e_event_queue_chain_order)
//{
//    mangled_ppc("?acquire_event_chain@?$t_event_queue@Vc_profile_session_timing@@$02@@QAAPAVc_profile_session_timing@@W4e_event_queue_chain_order@@@Z");
//};

//public: class c_profile_session_timing * t_event_queue<class c_profile_session_timing, 3>::release_chain_top_event(class c_profile_session_timing *)
//{
//    mangled_ppc("?release_chain_top_event@?$t_event_queue@Vc_profile_session_timing@@$02@@QAAPAVc_profile_session_timing@@PAV2@@Z");
//};

//public: class c_profile_session_collector * c_synchronized_pointer<class c_profile_session_collector>::peek(void) const volatile
//{
//    mangled_ppc("?peek@?$c_synchronized_pointer@Vc_profile_session_collector@@@@QDAPAVc_profile_session_collector@@XZ");
//};

//public: class c_profile_session_collector * c_synchronized_pointer<class c_profile_session_collector>::set(class c_profile_session_collector *) volatile
//{
//    mangled_ppc("?set@?$c_synchronized_pointer@Vc_profile_session_collector@@@@QCAPAVc_profile_session_collector@@PAV2@@Z");
//};

//public: class c_profiler_budget_report & s_static_array<class c_profiler_budget_report, 12>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_profiler_budget_report@@$0M@@@QAAAAVc_profiler_budget_report@@J@Z");
//};

//public: class c_profiler_budget_report & s_static_array<class c_profiler_budget_report, 12>::element<long>(long)
//{
//    mangled_ppc("??$element@J@?$s_static_array@Vc_profiler_budget_report@@$0M@@@QAAAAVc_profiler_budget_report@@J@Z");
//};

//public: class c_profiler_budget_report const & s_static_array<class c_profiler_budget_report, 12>::element<long>(long) const
//{
//    mangled_ppc("??$element@J@?$s_static_array@Vc_profiler_budget_report@@$0M@@@QBAABVc_profiler_budget_report@@J@Z");
//};

//public: class c_profiler_timing_report & s_static_array<class c_profiler_timing_report, 650>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Vc_profiler_timing_report@@$0CIK@@@QAAAAVc_profiler_timing_report@@H@Z");
//};

//public: class c_profiler_timing_report const & s_static_array<class c_profiler_timing_report, 650>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Vc_profiler_timing_report@@$0CIK@@@QBAABVc_profiler_timing_report@@H@Z");
//};

//public: class c_profiler_budget_report & s_static_array<class c_profiler_budget_report, 12>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Vc_profiler_budget_report@@$0M@@@QAAAAVc_profiler_budget_report@@H@Z");
//};

//public: class c_profiler_budget_report const & s_static_array<class c_profiler_budget_report, 12>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Vc_profiler_budget_report@@$0M@@@QBAABVc_profiler_budget_report@@H@Z");
//};

//public: struct s_profile_section_display_data & s_static_array<struct s_profile_section_display_data, 650>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_profile_section_display_data@@$0CIK@@@QAAAAUs_profile_section_display_data@@J@Z");
//};

//void xchg<long>(long &, long &)
//{
//    mangled_ppc("??$xchg@J@@YAXAAJ0@Z");
//};

//public: class c_profiler_budget_report const & s_static_array<class c_profiler_budget_report, 12>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_profiler_budget_report@@$0M@@@QBAABVc_profiler_budget_report@@J@Z");
//};

//public: struct s_budget_display_data & s_static_array<struct s_budget_display_data, 12>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_budget_display_data@@$0M@@@QAAAAUs_budget_display_data@@J@Z");
//};

//public: class c_profiler_timing_report const & s_static_array<class c_profiler_timing_report, 650>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_profiler_timing_report@@$0CIK@@@QBAABVc_profiler_timing_report@@J@Z");
//};

//public: class c_profiler_timing_report & s_static_array<class c_profiler_timing_report, 650>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_profiler_timing_report@@$0CIK@@@QAAAAVc_profiler_timing_report@@J@Z");
//};

//public: class c_profiler_budget_report & s_static_array<class c_profiler_budget_report, 12>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@Vc_profiler_budget_report@@$0M@@@QAAAAVc_profiler_budget_report@@F@Z");
//};

//public: void t_event_queue<class c_profile_session_timing, 3>::initialize_limited(long)
//{
//    mangled_ppc("?initialize_limited@?$t_event_queue@Vc_profile_session_timing@@$02@@QAAXJ@Z");
//};

//public: bool t_event_queue<class c_profile_session_timing, 3>::valid_event(void const *) const
//{
//    mangled_ppc("?valid_event@?$t_event_queue@Vc_profile_session_timing@@$02@@QBA_NPBX@Z");
//};

//public: void t_event_queue<class c_profile_session_timing, 3>::assert_valid_chain(struct s_synchronized_list_entry *) const
//{
//    mangled_ppc("?assert_valid_chain@?$t_event_queue@Vc_profile_session_timing@@$02@@QBAXPAUs_synchronized_list_entry@@@Z");
//};

//public: static bool s_static_array<class c_profiler_budget_report, 12>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_profiler_budget_report@@$0M@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_profiler_timing_report, 650>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Vc_profiler_timing_report@@$0CIK@@@SA_NH@Z");
//};

//public: static bool s_static_array<class c_profiler_budget_report, 12>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Vc_profiler_budget_report@@$0M@@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_profile_section_display_data, 650>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_profile_section_display_data@@$0CIK@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_budget_display_data, 12>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_budget_display_data@@$0M@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_profiler_timing_report, 650>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_profiler_timing_report@@$0CIK@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_profiler_budget_report, 12>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@Vc_profiler_budget_report@@$0M@@@SA_NF@Z");
//};

//public: static long s_static_array<class c_profile_session_timing, 3>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Vc_profile_session_timing@@$02@@SAJXZ");
//};

//public: struct s_synchronized_list_entry ** s_static_array<struct s_synchronized_list_entry *, 3>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@PAUs_synchronized_list_entry@@$02@@QAAPAPAUs_synchronized_list_entry@@XZ");
//};

//public: class c_profile_session_timing & s_static_array<class c_profile_session_timing, 3>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_profile_session_timing@@$02@@QAAAAVc_profile_session_timing@@J@Z");
//};

//public: struct s_synchronized_list_entry *& s_static_array<struct s_synchronized_list_entry *, 3>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAUs_synchronized_list_entry@@$02@@QAAAAPAUs_synchronized_list_entry@@J@Z");
//};

//public: class c_profile_session_timing const & s_static_array<class c_profile_session_timing, 3>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Vc_profile_session_timing@@$02@@QBAABVc_profile_session_timing@@H@Z");
//};

//public: class c_profile_session_timing const & s_static_array<class c_profile_session_timing, 3>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_profile_session_timing@@$02@@QBAABVc_profile_session_timing@@J@Z");
//};

//public: static bool s_static_array<class c_profile_session_timing, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_profile_session_timing@@$02@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_synchronized_list_entry *, 3>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAUs_synchronized_list_entry@@$02@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_profile_session_timing, 3>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Vc_profile_session_timing@@$02@@SA_NH@Z");
//};

//public: long c_profiler_timing_report::total_exclusive_time(void) const
//{
//    mangled_ppc("?total_exclusive_time@c_profiler_timing_report@@QBAJXZ");
//};

//public: void c_profiler_timing_report::clear(void)
//{
//    mangled_ppc("?clear@c_profiler_timing_report@@QAAXXZ");
//};

//void session_budget_spike_callback(struct s_spike_report_data &)
//{
//    mangled_ppc("?session_budget_spike_callback@@YAXAAUs_spike_report_data@@@Z");
//};

//void session_budget_format_callback(struct s_spike_report_data const &, char const **, char *, long)
//{
//    mangled_ppc("?session_budget_format_callback@@YAXABUs_spike_report_data@@PAPBDPADJ@Z");
//};

//public: struct s_session_timing * s_static_array<struct s_session_timing, 12>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_session_timing@@$0M@@@QAAPAUs_session_timing@@XZ");
//};

//?sort@?$s_static_array@Us_session_timing@@$0M@@@QAAXQ6A_NPBX00@Z0@Z
//{
//    mangled_ppc("?sort@?$s_static_array@Us_session_timing@@$0M@@@QAAXQ6A_NPBX00@Z0@Z");
//};

//public: struct s_session_timing & s_static_array<struct s_session_timing, 12>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_session_timing@@$0M@@@QAAAAUs_session_timing@@J@Z");
//};

//public: static bool s_static_array<struct s_session_timing, 12>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_session_timing@@$0M@@@SA_NJ@Z");
//};

//public: s_profiler_globals::s_profiler_globals(void)
//{
//    mangled_ppc("??0s_profiler_globals@@QAA@XZ");
//};

//public: c_profile_session_collector::c_profile_session_collector(void)
//{
//    mangled_ppc("??0c_profile_session_collector@@QAA@XZ");
//};

//public: s_profiler_pulse_data::s_profiler_pulse_data(void)
//{
//    mangled_ppc("??0s_profiler_pulse_data@@QAA@XZ");
//};

//public: s_profiler_session_data::s_profiler_session_data(void)
//{
//    mangled_ppc("??0s_profiler_session_data@@QAA@XZ");
//};

//public: s_profiler_player_and_machine_data::s_profiler_player_and_machine_data(void)
//{
//    mangled_ppc("??0s_profiler_player_and_machine_data@@QAA@XZ");
//};

//public: s_profiler_sampled_performance_data_synchronized::s_profiler_sampled_performance_data_synchronized(void)
//{
//    mangled_ppc("??0s_profiler_sampled_performance_data_synchronized@@QAA@XZ");
//};

//public: s_automatic_tracedump_settings::s_automatic_tracedump_settings(void)
//{
//    mangled_ppc("??0s_automatic_tracedump_settings@@QAA@XZ");
//};

//public: s_profiler_map_data::s_profiler_map_data(void)
//{
//    mangled_ppc("??0s_profiler_map_data@@QAA@XZ");
//};

//public: c_datamine_game_info::c_datamine_game_info(void)
//{
//    mangled_ppc("??0c_datamine_game_info@@QAA@XZ");
//};

//public: t_event_queue<class c_profile_session_timing, 3>::t_event_queue<class c_profile_session_timing, 3>(void)
//{
//    mangled_ppc("??0?$t_event_queue@Vc_profile_session_timing@@$02@@QAA@XZ");
//};

//public: c_synchronized_pointer<class c_profile_session_collector>::c_synchronized_pointer<class c_profile_session_collector>(void)
//{
//    mangled_ppc("??0?$c_synchronized_pointer@Vc_profile_session_collector@@@@QAA@XZ");
//};

//public: s_static_array<class c_profile_session_timing, 3>::s_static_array<class c_profile_session_timing, 3>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_profile_session_timing@@$02@@QAA@XZ");
//};

//public: c_profile_session_timing::c_profile_session_timing(void)
//{
//    mangled_ppc("??0c_profile_session_timing@@QAA@XZ");
//};

//public: s_static_array<class c_profiler_timing_report, 650>::s_static_array<class c_profiler_timing_report, 650>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_profiler_timing_report@@$0CIK@@@QAA@XZ");
//};

//public: s_static_array<class c_profiler_budget_report, 12>::s_static_array<class c_profiler_budget_report, 12>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_profiler_budget_report@@$0M@@@QAA@XZ");
//};

//public: c_profiler_budget_report::c_profiler_budget_report(void)
//{
//    mangled_ppc("??0c_profiler_budget_report@@QAA@XZ");
//};

//public: c_profiler_performance_monitor::c_profiler_performance_monitor(void)
//{
//    mangled_ppc("??0c_profiler_performance_monitor@@QAA@XZ");
//};

//public: c_profiler_performance_display_data::c_profiler_performance_display_data(void)
//{
//    mangled_ppc("??0c_profiler_performance_display_data@@QAA@XZ");
//};

//public: s_static_array<struct s_profile_section_display_data, 650>::s_static_array<struct s_profile_section_display_data, 650>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_profile_section_display_data@@$0CIK@@@QAA@XZ");
//};

//public: s_profile_section_display_data::s_profile_section_display_data(void)
//{
//    mangled_ppc("??0s_profile_section_display_data@@QAA@XZ");
//};

//public: c_profiler_performance_monitor::s_profile_session_collection::s_profile_session_collection(void)
//{
//    mangled_ppc("??0s_profile_session_collection@c_profiler_performance_monitor@@QAA@XZ");
//};

//public: c_profiler_performance_monitor::s_profile_history_grid_line::s_profile_history_grid_line(void)
//{
//    mangled_ppc("??0s_profile_history_grid_line@c_profiler_performance_monitor@@QAA@XZ");
//};

//public: s_profiler_globals::~s_profiler_globals(void)
//{
//    mangled_ppc("??1s_profiler_globals@@QAA@XZ");
//};

//public: c_profile_session_collector::~c_profile_session_collector(void)
//{
//    mangled_ppc("??1c_profile_session_collector@@QAA@XZ");
//};

//public: s_profiler_pulse_data::~s_profiler_pulse_data(void)
//{
//    mangled_ppc("??1s_profiler_pulse_data@@QAA@XZ");
//};

//public: s_profiler_session_data::~s_profiler_session_data(void)
//{
//    mangled_ppc("??1s_profiler_session_data@@QAA@XZ");
//};

//public: s_profiler_player_and_machine_data::~s_profiler_player_and_machine_data(void)
//{
//    mangled_ppc("??1s_profiler_player_and_machine_data@@QAA@XZ");
//};

//public: s_profiler_sampled_performance_data_synchronized::~s_profiler_sampled_performance_data_synchronized(void)
//{
//    mangled_ppc("??1s_profiler_sampled_performance_data_synchronized@@QAA@XZ");
//};

//public: s_automatic_tracedump_settings::~s_automatic_tracedump_settings(void)
//{
//    mangled_ppc("??1s_automatic_tracedump_settings@@QAA@XZ");
//};

//public: s_profiler_map_data::~s_profiler_map_data(void)
//{
//    mangled_ppc("??1s_profiler_map_data@@QAA@XZ");
//};

//public: c_datamine_game_info::~c_datamine_game_info(void)
//{
//    mangled_ppc("??1c_datamine_game_info@@QAA@XZ");
//};

//public: t_event_queue<class c_profile_session_timing, 3>::~t_event_queue<class c_profile_session_timing, 3>(void)
//{
//    mangled_ppc("??1?$t_event_queue@Vc_profile_session_timing@@$02@@QAA@XZ");
//};

//public: c_synchronized_pointer<class c_profile_session_collector>::~c_synchronized_pointer<class c_profile_session_collector>(void)
//{
//    mangled_ppc("??1?$c_synchronized_pointer@Vc_profile_session_collector@@@@QAA@XZ");
//};

//public: s_static_array<class c_profile_session_timing, 3>::~s_static_array<class c_profile_session_timing, 3>(void)
//{
//    mangled_ppc("??1?$s_static_array@Vc_profile_session_timing@@$02@@QAA@XZ");
//};

//public: c_profile_session_timing::~c_profile_session_timing(void)
//{
//    mangled_ppc("??1c_profile_session_timing@@QAA@XZ");
//};

//public: s_static_array<class c_profiler_timing_report, 650>::~s_static_array<class c_profiler_timing_report, 650>(void)
//{
//    mangled_ppc("??1?$s_static_array@Vc_profiler_timing_report@@$0CIK@@@QAA@XZ");
//};

//public: s_static_array<class c_profiler_budget_report, 12>::~s_static_array<class c_profiler_budget_report, 12>(void)
//{
//    mangled_ppc("??1?$s_static_array@Vc_profiler_budget_report@@$0M@@@QAA@XZ");
//};

//public: c_profiler_budget_report::~c_profiler_budget_report(void)
//{
//    mangled_ppc("??1c_profiler_budget_report@@QAA@XZ");
//};

//public: c_profiler_performance_monitor::~c_profiler_performance_monitor(void)
//{
//    mangled_ppc("??1c_profiler_performance_monitor@@QAA@XZ");
//};

//public: c_profiler_performance_display_data::~c_profiler_performance_display_data(void)
//{
//    mangled_ppc("??1c_profiler_performance_display_data@@QAA@XZ");
//};

//public: s_static_array<struct s_profile_section_display_data, 650>::~s_static_array<struct s_profile_section_display_data, 650>(void)
//{
//    mangled_ppc("??1?$s_static_array@Us_profile_section_display_data@@$0CIK@@@QAA@XZ");
//};

//public: s_profile_section_display_data::~s_profile_section_display_data(void)
//{
//    mangled_ppc("??1s_profile_section_display_data@@QAA@XZ");
//};

//public: c_profiler_performance_monitor::s_profile_session_collection::~s_profile_session_collection(void)
//{
//    mangled_ppc("??1s_profile_session_collection@c_profiler_performance_monitor@@QAA@XZ");
//};

//public: c_profiler_performance_monitor::s_profile_history_grid_line::~s_profile_history_grid_line(void)
//{
//    mangled_ppc("??1s_profile_history_grid_line@c_profiler_performance_monitor@@QAA@XZ");
//};

//void g_profiler_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_profiler_globals@@YAXXZ");
//};

//void g_profiler_performance_monitor::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_profiler_performance_monitor@@YAXXZ");
//};

//void g_ignore_deadlock_reference_count::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_ignore_deadlock_reference_count@@YAXXZ");
//};

