/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool g_debug_main_time_throttle_when_matching_remote_time; // "?g_debug_main_time_throttle_when_matching_remote_time@@3_NA"
// bool g_wait_for_previous_frame_swap; // "?g_wait_for_previous_frame_swap@@3_NA"
// float g_force_main_time_update_seconds_elapsed; // "?g_force_main_time_update_seconds_elapsed@@3MA"
// struct s_frame_rate_data g_frame_rate_data; // "?g_frame_rate_data@@3Us_frame_rate_data@@A"
// float last_framerate_time; // "?last_framerate_time@@3MA"
// unsigned long g_previous_swap_index; // "?g_previous_swap_index@@3KA"
// bool g_game_time_matching_remote_time; // "?g_game_time_matching_remote_time@@3_NA"
// bool debug_frame_rate; // "?debug_frame_rate@@3_NA"
// bool display_framerate; // "?display_framerate@@3_NA"
// bool display_pulse_rates; // "?display_pulse_rates@@3_NA"
// bool display_throttle_rates; // "?display_throttle_rates@@3_NA"
// bool display_frame_deltas; // "?display_frame_deltas@@3_NA"
// bool debug_disable_frame_rate_throttle; // "?debug_disable_frame_rate_throttle@@3_NA"
// bool debug_frame_rate_based_on_system_time; // "?debug_frame_rate_based_on_system_time@@3_NA"
// bool debug_frame_rate_stabilization; // "?debug_frame_rate_stabilization@@3_NA"
// bool enable_time_profiling; // "?enable_time_profiling@@3_NA"
// bool g_serialize_update_and_render; // "?g_serialize_update_and_render@@3_NA"
// class t_restricted_allocation_manager<4, 0, void (__cdecl main_time_globals_post_copy_update::*)(void *), void (__cdecl __tls_set_g_main_time_globals_allocator::*)(4)> g_main_time_globals_allocator; // "?g_main_time_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$1?main_time_globals_post_copy_update@@YAXPAX@Z$1?__tls_set_g_main_time_globals_allocator@@YAX0@Z@@A"
// class c_synchronized_int32g_last_render_frame_time_ms; // "?g_last_render_frame_time_ms@@3Vc_synchronized_int32@@A"
// class c_synchronized_int32g_last_framerate; // "?g_last_framerate@@3Vc_synchronized_int32@@A"
// struct s_main_time_globals *g_main_time_globals; // "?g_main_time_globals@@3PAUs_main_time_globals@@A"

// void main_time_globals_post_copy_update(void *);
// void __tls_set_g_main_time_globals_allocator(void *);
// void main_time_initialize(void);
// void main_time_reset(void);
// void main_time_restore(long);
// float main_time_update(void);
// __int64 main_time_get_absolute(void);
// long main_time_get_absolute_rate(void);
// long main_time_get_vblank_rate(void);
// long main_time_get_native_tick_rate(void);
// __int64 main_time_get_absolute_milliseconds(void);
// void main_time_throttle(__int64);
// bool main_time_running_at_infinite_framerate(void);
// bool main_time_is_throttled(void);
// void main_time_frame_rate_display(void);
// void main_time_frame_rate_debug(void);
// void main_time_mark_input_collection_time(void);
// void main_time_mark_publishing_start_time(void);
// void main_time_mark_publishing_end_time(void);
// __int64 main_time_get_input_collection_time(void);
// __int64 main_time_get_publishing_start_time(void);
// __int64 main_time_get_publishing_end_time(void);
// long main_time_get_time_since_input_collection(__int64);
// __int64 main_time_get_target_display_vblank_index(void);
// long main_time_get_current_frame_rate(void);
// float main_time_compute_frame_rate_average(void);
// void main_time_reset_framerate_datamining(void);
// void main_time_update_framerate_datamining(void);
// public: void * t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>::valid(void) const;
// public: struct s_busy_wait & s_static_array<struct s_busy_wait, 8>::operator[]<enum e_synchronization_busy_waits>(enum e_synchronization_busy_waits);
// public: static bool s_static_array<struct s_busy_wait, 8>::valid<enum e_synchronization_busy_waits>(enum e_synchronization_busy_waits);
// public: t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>::t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>::~t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>(void);
// void g_main_time_globals_allocator::`dynamic atexit destructor'(void);
// void g_last_render_frame_time_ms::`dynamic atexit destructor'(void);
// void g_last_framerate::`dynamic atexit destructor'(void);

//void main_time_globals_post_copy_update(void *)
//{
//    mangled_ppc("?main_time_globals_post_copy_update@@YAXPAX@Z");
//};

//void __tls_set_g_main_time_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_main_time_globals_allocator@@YAXPAX@Z");
//};

//void main_time_initialize(void)
//{
//    mangled_ppc("?main_time_initialize@@YAXXZ");
//};

//void main_time_reset(void)
//{
//    mangled_ppc("?main_time_reset@@YAXXZ");
//};

//void main_time_restore(long)
//{
//    mangled_ppc("?main_time_restore@@YAXJ@Z");
//};

//float main_time_update(void)
//{
//    mangled_ppc("?main_time_update@@YAMXZ");
//};

//__int64 main_time_get_absolute(void)
//{
//    mangled_ppc("?main_time_get_absolute@@YA_JXZ");
//};

//long main_time_get_absolute_rate(void)
//{
//    mangled_ppc("?main_time_get_absolute_rate@@YAJXZ");
//};

//long main_time_get_vblank_rate(void)
//{
//    mangled_ppc("?main_time_get_vblank_rate@@YAJXZ");
//};

//long main_time_get_native_tick_rate(void)
//{
//    mangled_ppc("?main_time_get_native_tick_rate@@YAJXZ");
//};

//__int64 main_time_get_absolute_milliseconds(void)
//{
//    mangled_ppc("?main_time_get_absolute_milliseconds@@YA_JXZ");
//};

//void main_time_throttle(__int64)
//{
//    mangled_ppc("?main_time_throttle@@YAX_J@Z");
//};

//bool main_time_running_at_infinite_framerate(void)
//{
//    mangled_ppc("?main_time_running_at_infinite_framerate@@YA_NXZ");
//};

//bool main_time_is_throttled(void)
//{
//    mangled_ppc("?main_time_is_throttled@@YA_NXZ");
//};

//void main_time_frame_rate_display(void)
//{
//    mangled_ppc("?main_time_frame_rate_display@@YAXXZ");
//};

//void main_time_frame_rate_debug(void)
//{
//    mangled_ppc("?main_time_frame_rate_debug@@YAXXZ");
//};

//void main_time_mark_input_collection_time(void)
//{
//    mangled_ppc("?main_time_mark_input_collection_time@@YAXXZ");
//};

//void main_time_mark_publishing_start_time(void)
//{
//    mangled_ppc("?main_time_mark_publishing_start_time@@YAXXZ");
//};

//void main_time_mark_publishing_end_time(void)
//{
//    mangled_ppc("?main_time_mark_publishing_end_time@@YAXXZ");
//};

//__int64 main_time_get_input_collection_time(void)
//{
//    mangled_ppc("?main_time_get_input_collection_time@@YA_JXZ");
//};

//__int64 main_time_get_publishing_start_time(void)
//{
//    mangled_ppc("?main_time_get_publishing_start_time@@YA_JXZ");
//};

//__int64 main_time_get_publishing_end_time(void)
//{
//    mangled_ppc("?main_time_get_publishing_end_time@@YA_JXZ");
//};

//long main_time_get_time_since_input_collection(__int64)
//{
//    mangled_ppc("?main_time_get_time_since_input_collection@@YAJ_J@Z");
//};

//__int64 main_time_get_target_display_vblank_index(void)
//{
//    mangled_ppc("?main_time_get_target_display_vblank_index@@YA_JXZ");
//};

//long main_time_get_current_frame_rate(void)
//{
//    mangled_ppc("?main_time_get_current_frame_rate@@YAJXZ");
//};

//float main_time_compute_frame_rate_average(void)
//{
//    mangled_ppc("?main_time_compute_frame_rate_average@@YAMXZ");
//};

//void main_time_reset_framerate_datamining(void)
//{
//    mangled_ppc("?main_time_reset_framerate_datamining@@YAXXZ");
//};

//void main_time_update_framerate_datamining(void)
//{
//    mangled_ppc("?main_time_update_framerate_datamining@@YAXXZ");
//};

//public: void * t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$1?main_time_globals_post_copy_update@@YAXPAX@Z$1?__tls_set_g_main_time_globals_allocator@@YAX0@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$1?main_time_globals_post_copy_update@@YAXPAX@Z$1?__tls_set_g_main_time_globals_allocator@@YAX0@Z@@QBA_NXZ");
//};

//public: struct s_busy_wait & s_static_array<struct s_busy_wait, 8>::operator[]<enum e_synchronization_busy_waits>(enum e_synchronization_busy_waits)
//{
//    mangled_ppc("??$?AW4e_synchronization_busy_waits@@@?$s_static_array@Us_busy_wait@@$07@@QAAAAUs_busy_wait@@W4e_synchronization_busy_waits@@@Z");
//};

//public: static bool s_static_array<struct s_busy_wait, 8>::valid<enum e_synchronization_busy_waits>(enum e_synchronization_busy_waits)
//{
//    mangled_ppc("??$valid@W4e_synchronization_busy_waits@@@?$s_static_array@Us_busy_wait@@$07@@SA_NW4e_synchronization_busy_waits@@@Z");
//};

//public: t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>::t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$1?main_time_globals_post_copy_update@@YAXPAX@Z$1?__tls_set_g_main_time_globals_allocator@@YAX0@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$1?main_time_globals_post_copy_update@@YAXPAX@Z$1?__tls_set_g_main_time_globals_allocator@@YAX0@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$1?main_time_globals_post_copy_update@@YAXPAX@Z$1?__tls_set_g_main_time_globals_allocator@@YAX0@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$1?main_time_globals_post_copy_update@@YAXPAX@Z$1?__tls_set_g_main_time_globals_allocator@@YAX0@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>::~t_restricted_allocation_manager<4, 0, void (main_time_globals_post_copy_update::*)(void *), void (__tls_set_g_main_time_globals_allocator::*)(4)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$1?main_time_globals_post_copy_update@@YAXPAX@Z$1?__tls_set_g_main_time_globals_allocator@@YAX0@Z@@QAA@XZ");
//};

//void g_main_time_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_main_time_globals_allocator@@YAXXZ");
//};

//void g_last_render_frame_time_ms::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_last_render_frame_time_ms@@YAXXZ");
//};

//void g_last_framerate::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_last_framerate@@YAXXZ");
//};

