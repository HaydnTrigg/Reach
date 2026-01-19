/* ---------- headers */

#include "omaha\rasterizer\rasterizer_globals.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// long const k_default_render_resolution_x; // "?k_default_render_resolution_x@@3JB"
// long const k_default_render_resolution_y; // "?k_default_render_resolution_y@@3JB"
// public: static long const s_static_array<struct s_rasterizer_timing_event, 45>::k_element_count; // "?k_element_count@?$s_static_array@Us_rasterizer_timing_event@@$0CN@@@2JB"
// public: static long const s_static_array<struct s_rasterizer_timing_fifo_event, 4>::k_element_count; // "?k_element_count@?$s_static_array@Us_rasterizer_timing_fifo_event@@$03@@2JB"
// public: static long const s_static_array<struct s_synchronized_list_entry *, 4>::k_element_count; // "?k_element_count@?$s_static_array@PAUs_synchronized_list_entry@@$03@@2JB"
// public: static long const s_static_array<struct s_synchronized_list_entry *, 45>::k_element_count; // "?k_element_count@?$s_static_array@PAUs_synchronized_list_entry@@$0CN@@@2JB"
// long g_rasterizer_window_stack_top; // "?g_rasterizer_window_stack_top@@3JA"
// public: static struct s_rasterizer_render_globals c_rasterizer::render_globals; // "?render_globals@c_rasterizer@@2Us_rasterizer_render_globals@@A"
// float global_z_near; // "?global_z_near@@3MA"
// float global_z_far; // "?global_z_far@@3MA"
// bool display_lag_times; // "?display_lag_times@@3_NA"
// struct s_rasterizer_globals rasterizer_globals; // "?rasterizer_globals@@3Us_rasterizer_globals@@A"
// struct s_rasterizer_timing_globals g_rasterizer_timing_globals; // "?g_rasterizer_timing_globals@@3Us_rasterizer_timing_globals@@A"

// void rasterizer_globals_initialize(void);
// void rasterizer_globals_vblank_callback(unsigned long);
// public: __int64 c_synchronized_int64::operator __int64(void) const;
// public: class c_synchronized_int64& c_synchronized_int64::operator=(class c_synchronized_int64const &);
// float rasterizer_get_most_recent_delta(void);
// unsigned long rasterizer_get_most_recent_swap_index(void);
// long rasterizer_get_most_recent_input_adjustment_milliseconds(void);
// long rasterizer_get_most_recent_total_input_lag_milliseconds(void);
// long rasterizer_get_most_recent_camera_input_lag_milliseconds(void);
// float rasterizer_get_average_frame_delta(void);
// void rasterizer_render_debug_frame_deltas(void);
// public: virtual c_rasterizer_draw_string::~c_rasterizer_draw_string(void);
// public: virtual c_hardware_draw_string::~c_hardware_draw_string(void);
// __int64 rasterizer_get_vblank_index(void);
// void rasterizer_get_z_planes(float *, float *);
// void rasterizer_reset_global_z_planes(void);
// bool rasterizer_screenshot_in_progress(void);
// bool rasterizer_multiple_page_screenshot_in_progress(void);
// float rasterizer_screenshot_mipmap_lod_bias(void);
// double rasterizer_time_get(void);
// float rasterizer_time_get_cyclic(float, float);
// long rasterizer_presentation_interval_to_d3d(long);
// void rasterizer_set_presentation_interval(long);
// long rasterizer_get_presentation_interval(void);
// long rasterizer_get_d3d_presentation_interval(void);
// long rasterizer_get_vblank_interval(void);
// void rasterizer_lag_timing_mark_render_start(void);
// void rasterizer_lag_timing_mark_input_adjustment(__int64);
// void rasterizer_lag_timing_mark_render_end(void);
// void rasterizer_lag_timing_mark_render_present(__int64);
// long rasterizer_lag_timing_get_gamestate_delay(void);
// void rasterizer_lag_timing_render_debug(void);
// public: float c_draw_string::get_final_adjusted_scale(void) const;
// void rasterizer_export_published_time_stats(void);
// long saved_film_manager_get_current_tick_estimate(void);
// public: struct s_synchronization_event & s_static_array<struct s_synchronization_event, 8>::operator[]<enum e_synchronization_events>(enum e_synchronization_events);
// public: void t_event_queue<struct s_rasterizer_timing_event, 45>::initialize(void);
// public: struct s_rasterizer_timing_event * t_event_queue<struct s_rasterizer_timing_event, 45>::try_to_allocate_event(void);
// public: void t_event_queue<struct s_rasterizer_timing_event, 45>::queue_event(struct s_rasterizer_timing_event *);
// public: struct s_rasterizer_timing_event * t_event_queue<struct s_rasterizer_timing_event, 45>::acquire_event_chain(enum e_event_queue_chain_order);
// public: struct s_rasterizer_timing_event * t_event_queue<struct s_rasterizer_timing_event, 45>::release_chain_top_event(struct s_rasterizer_timing_event *);
// public: void t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::initialize(void);
// public: struct s_rasterizer_timing_fifo_event * t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::get_next_readable_event(void);
// public: struct s_rasterizer_timing_fifo_event * t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::get_next_writable_event(void);
// public: void t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::queue_readable_event(struct s_rasterizer_timing_fifo_event *);
// public: void t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::queue_writable_event(struct s_rasterizer_timing_fifo_event *);
// public: static long s_static_array<struct s_rasterizer_timing_fifo_event, 4>::get_count(void);
// public: struct s_synchronized_list_entry ** s_static_array<struct s_synchronized_list_entry *, 4>::get_elements(void);
// public: static bool s_static_array<struct s_synchronization_event, 8>::valid<enum e_synchronization_events>(enum e_synchronization_events);
// public: void t_event_queue<struct s_rasterizer_timing_event, 45>::initialize_limited(long);
// public: bool t_event_queue<struct s_rasterizer_timing_event, 45>::valid_event(void const *) const;
// public: void t_event_queue<struct s_rasterizer_timing_event, 45>::assert_valid_chain(struct s_synchronized_list_entry *) const;
// public: bool t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::valid_event(struct s_rasterizer_timing_fifo_event const *) const;
// public: struct s_rasterizer_timing_fifo_event & s_static_array<struct s_rasterizer_timing_fifo_event, 4>::operator[]<long>(long);
// public: struct s_synchronized_list_entry *& s_static_array<struct s_synchronized_list_entry *, 4>::operator[]<long>(long);
// public: static long s_static_array<struct s_rasterizer_timing_event, 45>::get_count(void);
// public: struct s_synchronized_list_entry ** s_static_array<struct s_synchronized_list_entry *, 45>::get_elements(void);
// public: struct s_rasterizer_timing_event & s_static_array<struct s_rasterizer_timing_event, 45>::operator[]<long>(long);
// public: struct s_synchronized_list_entry *& s_static_array<struct s_synchronized_list_entry *, 45>::operator[]<long>(long);
// public: struct s_rasterizer_timing_event const & s_static_array<struct s_rasterizer_timing_event, 45>::operator[]<int>(int) const;
// public: struct s_rasterizer_timing_event const & s_static_array<struct s_rasterizer_timing_event, 45>::operator[]<long>(long) const;
// public: struct s_rasterizer_timing_fifo_event const & s_static_array<struct s_rasterizer_timing_fifo_event, 4>::operator[]<int>(int) const;
// public: struct s_rasterizer_timing_fifo_event const & s_static_array<struct s_rasterizer_timing_fifo_event, 4>::operator[]<long>(long) const;
// public: static bool s_static_array<struct s_rasterizer_timing_fifo_event, 4>::valid<long>(long);
// public: static bool s_static_array<struct s_synchronized_list_entry *, 4>::valid<long>(long);
// public: static bool s_static_array<struct s_rasterizer_timing_event, 45>::valid<long>(long);
// public: static bool s_static_array<struct s_synchronized_list_entry *, 45>::valid<long>(long);
// public: static bool s_static_array<struct s_rasterizer_timing_event, 45>::valid<int>(int);
// public: static bool s_static_array<struct s_rasterizer_timing_fifo_event, 4>::valid<int>(int);
// public: s_rasterizer_globals::s_rasterizer_globals(void);
// public: c_synchronized_int64::c_synchronized_int64(void);
// public: s_rasterizer_timing_globals::s_rasterizer_timing_globals(void);
// public: t_event_queue<struct s_rasterizer_timing_event, 45>::t_event_queue<struct s_rasterizer_timing_event, 45>(void);
// public: t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>(void);
// public: s_rasterizer_globals::~s_rasterizer_globals(void);
// public: c_synchronized_int64::~c_synchronized_int64(void);
// public: s_rasterizer_timing_globals::~s_rasterizer_timing_globals(void);
// public: t_event_queue<struct s_rasterizer_timing_event, 45>::~t_event_queue<struct s_rasterizer_timing_event, 45>(void);
// public: t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::~t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>(void);
// void rasterizer_globals::`dynamic atexit destructor'(void);
// void g_rasterizer_timing_globals::`dynamic atexit destructor'(void);

//void rasterizer_globals_initialize(void)
//{
//    mangled_ppc("?rasterizer_globals_initialize@@YAXXZ");
//};

//void rasterizer_globals_vblank_callback(unsigned long)
//{
//    mangled_ppc("?rasterizer_globals_vblank_callback@@YAXK@Z");
//};

//public: __int64 c_synchronized_int64::operator __int64(void) const
//{
//    mangled_ppc("??Bc_synchronized_int64@@QBA_JXZ");
//};

//public: class c_synchronized_int64& c_synchronized_int64::operator=(class c_synchronized_int64const &)
//{
//    mangled_ppc("??4c_synchronized_int64@@QAAAAV0@ABV0@@Z");
//};

//float rasterizer_get_most_recent_delta(void)
//{
//    mangled_ppc("?rasterizer_get_most_recent_delta@@YAMXZ");
//};

//unsigned long rasterizer_get_most_recent_swap_index(void)
//{
//    mangled_ppc("?rasterizer_get_most_recent_swap_index@@YAKXZ");
//};

//long rasterizer_get_most_recent_input_adjustment_milliseconds(void)
//{
//    mangled_ppc("?rasterizer_get_most_recent_input_adjustment_milliseconds@@YAJXZ");
//};

//long rasterizer_get_most_recent_total_input_lag_milliseconds(void)
//{
//    mangled_ppc("?rasterizer_get_most_recent_total_input_lag_milliseconds@@YAJXZ");
//};

//long rasterizer_get_most_recent_camera_input_lag_milliseconds(void)
//{
//    mangled_ppc("?rasterizer_get_most_recent_camera_input_lag_milliseconds@@YAJXZ");
//};

//float rasterizer_get_average_frame_delta(void)
//{
//    mangled_ppc("?rasterizer_get_average_frame_delta@@YAMXZ");
//};

//void rasterizer_render_debug_frame_deltas(void)
//{
//    mangled_ppc("?rasterizer_render_debug_frame_deltas@@YAXXZ");
//};

//public: virtual c_rasterizer_draw_string::~c_rasterizer_draw_string(void)
//{
//    mangled_ppc("??1c_rasterizer_draw_string@@UAA@XZ");
//};

//public: virtual c_hardware_draw_string::~c_hardware_draw_string(void)
//{
//    mangled_ppc("??1c_hardware_draw_string@@UAA@XZ");
//};

//__int64 rasterizer_get_vblank_index(void)
//{
//    mangled_ppc("?rasterizer_get_vblank_index@@YA_JXZ");
//};

//void rasterizer_get_z_planes(float *, float *)
//{
//    mangled_ppc("?rasterizer_get_z_planes@@YAXPAM0@Z");
//};

//void rasterizer_reset_global_z_planes(void)
//{
//    mangled_ppc("?rasterizer_reset_global_z_planes@@YAXXZ");
//};

//bool rasterizer_screenshot_in_progress(void)
//{
//    mangled_ppc("?rasterizer_screenshot_in_progress@@YA_NXZ");
//};

//bool rasterizer_multiple_page_screenshot_in_progress(void)
//{
//    mangled_ppc("?rasterizer_multiple_page_screenshot_in_progress@@YA_NXZ");
//};

//float rasterizer_screenshot_mipmap_lod_bias(void)
//{
//    mangled_ppc("?rasterizer_screenshot_mipmap_lod_bias@@YAMXZ");
//};

//double rasterizer_time_get(void)
//{
//    mangled_ppc("?rasterizer_time_get@@YANXZ");
//};

//float rasterizer_time_get_cyclic(float, float)
//{
//    mangled_ppc("?rasterizer_time_get_cyclic@@YAMMM@Z");
//};

//long rasterizer_presentation_interval_to_d3d(long)
//{
//    mangled_ppc("?rasterizer_presentation_interval_to_d3d@@YAJJ@Z");
//};

//void rasterizer_set_presentation_interval(long)
//{
//    mangled_ppc("?rasterizer_set_presentation_interval@@YAXJ@Z");
//};

//long rasterizer_get_presentation_interval(void)
//{
//    mangled_ppc("?rasterizer_get_presentation_interval@@YAJXZ");
//};

//long rasterizer_get_d3d_presentation_interval(void)
//{
//    mangled_ppc("?rasterizer_get_d3d_presentation_interval@@YAJXZ");
//};

//long rasterizer_get_vblank_interval(void)
//{
//    mangled_ppc("?rasterizer_get_vblank_interval@@YAJXZ");
//};

//void rasterizer_lag_timing_mark_render_start(void)
//{
//    mangled_ppc("?rasterizer_lag_timing_mark_render_start@@YAXXZ");
//};

//void rasterizer_lag_timing_mark_input_adjustment(__int64)
//{
//    mangled_ppc("?rasterizer_lag_timing_mark_input_adjustment@@YAX_J@Z");
//};

//void rasterizer_lag_timing_mark_render_end(void)
//{
//    mangled_ppc("?rasterizer_lag_timing_mark_render_end@@YAXXZ");
//};

//void rasterizer_lag_timing_mark_render_present(__int64)
//{
//    mangled_ppc("?rasterizer_lag_timing_mark_render_present@@YAX_J@Z");
//};

//long rasterizer_lag_timing_get_gamestate_delay(void)
//{
//    mangled_ppc("?rasterizer_lag_timing_get_gamestate_delay@@YAJXZ");
//};

//void rasterizer_lag_timing_render_debug(void)
//{
//    mangled_ppc("?rasterizer_lag_timing_render_debug@@YAXXZ");
//};

//public: float c_draw_string::get_final_adjusted_scale(void) const
//{
//    mangled_ppc("?get_final_adjusted_scale@c_draw_string@@QBAMXZ");
//};

//void rasterizer_export_published_time_stats(void)
//{
//    mangled_ppc("?rasterizer_export_published_time_stats@@YAXXZ");
//};

//long saved_film_manager_get_current_tick_estimate(void)
//{
//    mangled_ppc("?saved_film_manager_get_current_tick_estimate@@YAJXZ");
//};

//public: struct s_synchronization_event & s_static_array<struct s_synchronization_event, 8>::operator[]<enum e_synchronization_events>(enum e_synchronization_events)
//{
//    mangled_ppc("??$?AW4e_synchronization_events@@@?$s_static_array@Us_synchronization_event@@$07@@QAAAAUs_synchronization_event@@W4e_synchronization_events@@@Z");
//};

//public: void t_event_queue<struct s_rasterizer_timing_event, 45>::initialize(void)
//{
//    mangled_ppc("?initialize@?$t_event_queue@Us_rasterizer_timing_event@@$0CN@@@QAAXXZ");
//};

//public: struct s_rasterizer_timing_event * t_event_queue<struct s_rasterizer_timing_event, 45>::try_to_allocate_event(void)
//{
//    mangled_ppc("?try_to_allocate_event@?$t_event_queue@Us_rasterizer_timing_event@@$0CN@@@QAAPAUs_rasterizer_timing_event@@XZ");
//};

//public: void t_event_queue<struct s_rasterizer_timing_event, 45>::queue_event(struct s_rasterizer_timing_event *)
//{
//    mangled_ppc("?queue_event@?$t_event_queue@Us_rasterizer_timing_event@@$0CN@@@QAAXPAUs_rasterizer_timing_event@@@Z");
//};

//public: struct s_rasterizer_timing_event * t_event_queue<struct s_rasterizer_timing_event, 45>::acquire_event_chain(enum e_event_queue_chain_order)
//{
//    mangled_ppc("?acquire_event_chain@?$t_event_queue@Us_rasterizer_timing_event@@$0CN@@@QAAPAUs_rasterizer_timing_event@@W4e_event_queue_chain_order@@@Z");
//};

//public: struct s_rasterizer_timing_event * t_event_queue<struct s_rasterizer_timing_event, 45>::release_chain_top_event(struct s_rasterizer_timing_event *)
//{
//    mangled_ppc("?release_chain_top_event@?$t_event_queue@Us_rasterizer_timing_event@@$0CN@@@QAAPAUs_rasterizer_timing_event@@PAU2@@Z");
//};

//public: void t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::initialize(void)
//{
//    mangled_ppc("?initialize@?$t_event_fifo@Us_rasterizer_timing_fifo_event@@$03@@QAAXXZ");
//};

//public: struct s_rasterizer_timing_fifo_event * t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::get_next_readable_event(void)
//{
//    mangled_ppc("?get_next_readable_event@?$t_event_fifo@Us_rasterizer_timing_fifo_event@@$03@@QAAPAUs_rasterizer_timing_fifo_event@@XZ");
//};

//public: struct s_rasterizer_timing_fifo_event * t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::get_next_writable_event(void)
//{
//    mangled_ppc("?get_next_writable_event@?$t_event_fifo@Us_rasterizer_timing_fifo_event@@$03@@QAAPAUs_rasterizer_timing_fifo_event@@XZ");
//};

//public: void t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::queue_readable_event(struct s_rasterizer_timing_fifo_event *)
//{
//    mangled_ppc("?queue_readable_event@?$t_event_fifo@Us_rasterizer_timing_fifo_event@@$03@@QAAXPAUs_rasterizer_timing_fifo_event@@@Z");
//};

//public: void t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::queue_writable_event(struct s_rasterizer_timing_fifo_event *)
//{
//    mangled_ppc("?queue_writable_event@?$t_event_fifo@Us_rasterizer_timing_fifo_event@@$03@@QAAXPAUs_rasterizer_timing_fifo_event@@@Z");
//};

//public: static long s_static_array<struct s_rasterizer_timing_fifo_event, 4>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_rasterizer_timing_fifo_event@@$03@@SAJXZ");
//};

//public: struct s_synchronized_list_entry ** s_static_array<struct s_synchronized_list_entry *, 4>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@PAUs_synchronized_list_entry@@$03@@QAAPAPAUs_synchronized_list_entry@@XZ");
//};

//public: static bool s_static_array<struct s_synchronization_event, 8>::valid<enum e_synchronization_events>(enum e_synchronization_events)
//{
//    mangled_ppc("??$valid@W4e_synchronization_events@@@?$s_static_array@Us_synchronization_event@@$07@@SA_NW4e_synchronization_events@@@Z");
//};

//public: void t_event_queue<struct s_rasterizer_timing_event, 45>::initialize_limited(long)
//{
//    mangled_ppc("?initialize_limited@?$t_event_queue@Us_rasterizer_timing_event@@$0CN@@@QAAXJ@Z");
//};

//public: bool t_event_queue<struct s_rasterizer_timing_event, 45>::valid_event(void const *) const
//{
//    mangled_ppc("?valid_event@?$t_event_queue@Us_rasterizer_timing_event@@$0CN@@@QBA_NPBX@Z");
//};

//public: void t_event_queue<struct s_rasterizer_timing_event, 45>::assert_valid_chain(struct s_synchronized_list_entry *) const
//{
//    mangled_ppc("?assert_valid_chain@?$t_event_queue@Us_rasterizer_timing_event@@$0CN@@@QBAXPAUs_synchronized_list_entry@@@Z");
//};

//public: bool t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::valid_event(struct s_rasterizer_timing_fifo_event const *) const
//{
//    mangled_ppc("?valid_event@?$t_event_fifo@Us_rasterizer_timing_fifo_event@@$03@@QBA_NPBUs_rasterizer_timing_fifo_event@@@Z");
//};

//public: struct s_rasterizer_timing_fifo_event & s_static_array<struct s_rasterizer_timing_fifo_event, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_rasterizer_timing_fifo_event@@$03@@QAAAAUs_rasterizer_timing_fifo_event@@J@Z");
//};

//public: struct s_synchronized_list_entry *& s_static_array<struct s_synchronized_list_entry *, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAUs_synchronized_list_entry@@$03@@QAAAAPAUs_synchronized_list_entry@@J@Z");
//};

//public: static long s_static_array<struct s_rasterizer_timing_event, 45>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_rasterizer_timing_event@@$0CN@@@SAJXZ");
//};

//public: struct s_synchronized_list_entry ** s_static_array<struct s_synchronized_list_entry *, 45>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@PAUs_synchronized_list_entry@@$0CN@@@QAAPAPAUs_synchronized_list_entry@@XZ");
//};

//public: struct s_rasterizer_timing_event & s_static_array<struct s_rasterizer_timing_event, 45>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_rasterizer_timing_event@@$0CN@@@QAAAAUs_rasterizer_timing_event@@J@Z");
//};

//public: struct s_synchronized_list_entry *& s_static_array<struct s_synchronized_list_entry *, 45>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAUs_synchronized_list_entry@@$0CN@@@QAAAAPAUs_synchronized_list_entry@@J@Z");
//};

//public: struct s_rasterizer_timing_event const & s_static_array<struct s_rasterizer_timing_event, 45>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_rasterizer_timing_event@@$0CN@@@QBAABUs_rasterizer_timing_event@@H@Z");
//};

//public: struct s_rasterizer_timing_event const & s_static_array<struct s_rasterizer_timing_event, 45>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_rasterizer_timing_event@@$0CN@@@QBAABUs_rasterizer_timing_event@@J@Z");
//};

//public: struct s_rasterizer_timing_fifo_event const & s_static_array<struct s_rasterizer_timing_fifo_event, 4>::operator[]<int>(int) const
//{
//    mangled_ppc("??$?AH@?$s_static_array@Us_rasterizer_timing_fifo_event@@$03@@QBAABUs_rasterizer_timing_fifo_event@@H@Z");
//};

//public: struct s_rasterizer_timing_fifo_event const & s_static_array<struct s_rasterizer_timing_fifo_event, 4>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_rasterizer_timing_fifo_event@@$03@@QBAABUs_rasterizer_timing_fifo_event@@J@Z");
//};

//public: static bool s_static_array<struct s_rasterizer_timing_fifo_event, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_rasterizer_timing_fifo_event@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_synchronized_list_entry *, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAUs_synchronized_list_entry@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_rasterizer_timing_event, 45>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_rasterizer_timing_event@@$0CN@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_synchronized_list_entry *, 45>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAUs_synchronized_list_entry@@$0CN@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_rasterizer_timing_event, 45>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_rasterizer_timing_event@@$0CN@@@SA_NH@Z");
//};

//public: static bool s_static_array<struct s_rasterizer_timing_fifo_event, 4>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Us_rasterizer_timing_fifo_event@@$03@@SA_NH@Z");
//};

//public: s_rasterizer_globals::s_rasterizer_globals(void)
//{
//    mangled_ppc("??0s_rasterizer_globals@@QAA@XZ");
//};

//public: c_synchronized_int64::c_synchronized_int64(void)
//{
//    mangled_ppc("??0c_synchronized_int64@@QAA@XZ");
//};

//public: s_rasterizer_timing_globals::s_rasterizer_timing_globals(void)
//{
//    mangled_ppc("??0s_rasterizer_timing_globals@@QAA@XZ");
//};

//public: t_event_queue<struct s_rasterizer_timing_event, 45>::t_event_queue<struct s_rasterizer_timing_event, 45>(void)
//{
//    mangled_ppc("??0?$t_event_queue@Us_rasterizer_timing_event@@$0CN@@@QAA@XZ");
//};

//public: t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>(void)
//{
//    mangled_ppc("??0?$t_event_fifo@Us_rasterizer_timing_fifo_event@@$03@@QAA@XZ");
//};

//public: s_rasterizer_globals::~s_rasterizer_globals(void)
//{
//    mangled_ppc("??1s_rasterizer_globals@@QAA@XZ");
//};

//public: c_synchronized_int64::~c_synchronized_int64(void)
//{
//    mangled_ppc("??1c_synchronized_int64@@QAA@XZ");
//};

//public: s_rasterizer_timing_globals::~s_rasterizer_timing_globals(void)
//{
//    mangled_ppc("??1s_rasterizer_timing_globals@@QAA@XZ");
//};

//public: t_event_queue<struct s_rasterizer_timing_event, 45>::~t_event_queue<struct s_rasterizer_timing_event, 45>(void)
//{
//    mangled_ppc("??1?$t_event_queue@Us_rasterizer_timing_event@@$0CN@@@QAA@XZ");
//};

//public: t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>::~t_event_fifo<struct s_rasterizer_timing_fifo_event, 4>(void)
//{
//    mangled_ppc("??1?$t_event_fifo@Us_rasterizer_timing_fifo_event@@$03@@QAA@XZ");
//};

//void rasterizer_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Frasterizer_globals@@YAXXZ");
//};

//void g_rasterizer_timing_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_rasterizer_timing_globals@@YAXXZ");
//};

