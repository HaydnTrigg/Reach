/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_thread_handle, 17>::k_element_count; // "?k_element_count@?$s_static_array@Us_thread_handle@@$0BB@@@2JB"
// public: static long const s_static_array<struct s_thread_id, 17>::k_element_count; // "?k_element_count@?$s_static_array@Us_thread_id@@$0BB@@@2JB"
// struct s_thread_system_globals g_thread_globals; // "?g_thread_globals@@3Us_thread_system_globals@@A"
// class c_interlocked_int32g_thread_system_initialized; // "?g_thread_system_initialized@@3Vc_interlocked_int32@@A"
// class c_job_signature job_manager_crash_signature; // "?job_manager_crash_signature@@3Vc_job_signature@@A"
// bool g_thread_assert_triggered; // "?g_thread_assert_triggered@@3_NA"
// long g_registered_thread_index; // "?g_registered_thread_index@@3JA"
// long g_thread_cache_context; // "?g_thread_cache_context@@3JA"
// struct s_thread_assert_arguments g_thread_assert_arguments; // "?g_thread_assert_arguments@@3Us_thread_assert_arguments@@A"

// void thread_release_locks_and_d3d_device(void);
// int thread_execution_crash_handler(struct _EXCEPTION_POINTERS *, long);
// void threads_optimize_for_main_thread_perf(void);
// void threads_optimize_for_render_thread_perf(void);
// void register_thread_running(long);
// void initialize_thread_management(void);
// void destroy_thread_management(void);
// bool registered_thread_handle_valid(long);
// bool is_main_thread(void);
// bool is_render_thread(void);
// bool is_audio_thread(void);
// bool is_any_async_thread(void);
// bool is_any_job_thread(void);
// void start_thread(enum e_registered_threads);
// void initialize_thread(enum e_registered_threads);
// unsigned long (* thread_get_start_routine(enum e_registered_threads))(void *);
// unsigned long thread_execution_wrapper(void *);
// void register_thread(struct s_thread_handle, long, struct s_thread_id, void *);
// void thread_set_default_priority(long);
// void stop_thread(enum e_registered_threads);
// void unregister_thread(long);
// bool wait_for_thread_to_exit(long, unsigned long);
// bool thread_system_initialized(void);
// unsigned long get_main_thread_id(void);
// char const * get_registered_thread_name(long);
// char const * get_thread_name_from_thread_id(unsigned long);
// enum e_thread_xenon_processor get_registered_thread_processor(enum e_registered_threads);
// long current_thread_get_stack_bytes_used(void);
// void current_thread_get_stack_usage(long *, long *);
// bool current_thread_update_stack_high_water_mark_internal(char const *, long);
// void current_thread_get_stack_high_water_mark(long *, long *);
// bool current_thread_should_exit(void);
// bool thread_has_crashed(enum e_registered_threads);
// bool thread_any_has_crashed(void);
// void post_thread_assert_arguments(struct s_thread_assert_arguments const *);
// void set_thread_exception_arguments(struct _EXCEPTION_POINTERS *);
// void signal_thread_to_assert(enum e_registered_threads);
// void signal_thread_to_crash(enum e_registered_threads);
// void signal_thread_to_crash_job_manager(enum e_registered_threads);
// bool current_thread_should_assert(void);
// bool current_thread_should_crash(void);
// bool current_thread_should_crash_job_manager(void);
// void current_thread_update_test_functions(void);
// public: c_job::c_job(void);
// public: bool c_jm_work_unit_handle::valid(void);
// bool thread_is_being_traced(enum e_registered_threads);
// class c_event_log_thread_interface * thread_management_get_event_log_interface(void);
// void havok_next_thread_paramerters_get(long, long *, unsigned long *);
// void havok_notify_thread_started(void *, long, unsigned long, void *);
// void havok_notify_thread_stopped(void *);
// void * havok_thread_user_data_get(long);
// void havok_notify_thread_running(long);
// ?start_thread@c_event_log_thread_implementation@@UAAXQ6AKPAX@Z@Z;
// public: virtual void c_event_log_thread_implementation::stop_thread(void);
// public: virtual bool c_event_log_thread_implementation::is_crashed(void);
// public: virtual void c_event_log_thread_implementation::thread_idle(void);
// public: virtual bool c_event_log_thread_implementation::thread_should_exit(void);
// public: struct s_thread_handle & s_static_array<struct s_thread_handle, 17>::operator[]<long>(long);
// public: struct s_thread_handle & s_static_array<struct s_thread_handle, 17>::operator[]<enum e_registered_threads>(enum e_registered_threads);
// public: struct s_thread_id & s_static_array<struct s_thread_id, 17>::operator[]<long>(long);
// public: struct s_thread_id & s_static_array<struct s_thread_id, 17>::operator[]<enum e_registered_threads>(enum e_registered_threads);
// public: struct s_thread_id & s_static_array<struct s_thread_id, 17>::operator[]<unsigned long>(unsigned long);
// public: static bool s_static_array<struct s_thread_handle, 17>::valid<long>(long);
// public: static bool s_static_array<struct s_thread_handle, 17>::valid<enum e_registered_threads>(enum e_registered_threads);
// public: static bool s_static_array<struct s_thread_id, 17>::valid<long>(long);
// public: static bool s_static_array<struct s_thread_id, 17>::valid<enum e_registered_threads>(enum e_registered_threads);
// public: static bool s_static_array<struct s_thread_id, 17>::valid<unsigned long>(unsigned long);
// public: void D3DDevice::GpuDisownAll(void);
// public: s_thread_system_globals::s_thread_system_globals(void);
// public: c_event_log_thread_implementation::c_event_log_thread_implementation(void);
// public: c_event_log_thread_interface::c_event_log_thread_interface(void);
// void job_manager_crash_entry_point(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, class c_job_handle, class c_jm_work_unit_handle);
// void g_exit_thread_signal::`dynamic atexit destructor'(void);
// void g_crashed_thread_signal::`dynamic atexit destructor'(void);
// void g_force_assert_thread_signal::`dynamic atexit destructor'(void);
// void g_force_crash_thread_signal::`dynamic atexit destructor'(void);
// void g_force_job_manager_crash_thread_signal::`dynamic atexit destructor'(void);
// void g_thread_system_initialized::`dynamic atexit destructor'(void);
// void job_manager_crash_signature::`dynamic atexit destructor'(void);

//void thread_release_locks_and_d3d_device(void)
//{
//    mangled_ppc("?thread_release_locks_and_d3d_device@@YAXXZ");
//};

//int thread_execution_crash_handler(struct _EXCEPTION_POINTERS *, long)
//{
//    mangled_ppc("?thread_execution_crash_handler@@YAHPAU_EXCEPTION_POINTERS@@J@Z");
//};

//void threads_optimize_for_main_thread_perf(void)
//{
//    mangled_ppc("?threads_optimize_for_main_thread_perf@@YAXXZ");
//};

//void threads_optimize_for_render_thread_perf(void)
//{
//    mangled_ppc("?threads_optimize_for_render_thread_perf@@YAXXZ");
//};

//void register_thread_running(long)
//{
//    mangled_ppc("?register_thread_running@@YAXJ@Z");
//};

//void initialize_thread_management(void)
//{
//    mangled_ppc("?initialize_thread_management@@YAXXZ");
//};

//void destroy_thread_management(void)
//{
//    mangled_ppc("?destroy_thread_management@@YAXXZ");
//};

//bool registered_thread_handle_valid(long)
//{
//    mangled_ppc("?registered_thread_handle_valid@@YA_NJ@Z");
//};

//bool is_main_thread(void)
//{
//    mangled_ppc("?is_main_thread@@YA_NXZ");
//};

//bool is_render_thread(void)
//{
//    mangled_ppc("?is_render_thread@@YA_NXZ");
//};

//bool is_audio_thread(void)
//{
//    mangled_ppc("?is_audio_thread@@YA_NXZ");
//};

//bool is_any_async_thread(void)
//{
//    mangled_ppc("?is_any_async_thread@@YA_NXZ");
//};

//bool is_any_job_thread(void)
//{
//    mangled_ppc("?is_any_job_thread@@YA_NXZ");
//};

//void start_thread(enum e_registered_threads)
//{
//    mangled_ppc("?start_thread@@YAXW4e_registered_threads@@@Z");
//};

//void initialize_thread(enum e_registered_threads)
//{
//    mangled_ppc("?initialize_thread@@YAXW4e_registered_threads@@@Z");
//};

//unsigned long (* thread_get_start_routine(enum e_registered_threads))(void *)
//{
//    mangled_ppc("?thread_get_start_routine@@YAP6AKPAX@ZW4e_registered_threads@@@Z");
//};

//unsigned long thread_execution_wrapper(void *)
//{
//    mangled_ppc("?thread_execution_wrapper@@YAKPAX@Z");
//};

//void register_thread(struct s_thread_handle, long, struct s_thread_id, void *)
//{
//    mangled_ppc("?register_thread@@YAXUs_thread_handle@@JUs_thread_id@@PAX@Z");
//};

//void thread_set_default_priority(long)
//{
//    mangled_ppc("?thread_set_default_priority@@YAXJ@Z");
//};

//void stop_thread(enum e_registered_threads)
//{
//    mangled_ppc("?stop_thread@@YAXW4e_registered_threads@@@Z");
//};

//void unregister_thread(long)
//{
//    mangled_ppc("?unregister_thread@@YAXJ@Z");
//};

//bool wait_for_thread_to_exit(long, unsigned long)
//{
//    mangled_ppc("?wait_for_thread_to_exit@@YA_NJK@Z");
//};

//bool thread_system_initialized(void)
//{
//    mangled_ppc("?thread_system_initialized@@YA_NXZ");
//};

//unsigned long get_main_thread_id(void)
//{
//    mangled_ppc("?get_main_thread_id@@YAKXZ");
//};

//char const * get_registered_thread_name(long)
//{
//    mangled_ppc("?get_registered_thread_name@@YAPBDJ@Z");
//};

//char const * get_thread_name_from_thread_id(unsigned long)
//{
//    mangled_ppc("?get_thread_name_from_thread_id@@YAPBDK@Z");
//};

//enum e_thread_xenon_processor get_registered_thread_processor(enum e_registered_threads)
//{
//    mangled_ppc("?get_registered_thread_processor@@YA?AW4e_thread_xenon_processor@@W4e_registered_threads@@@Z");
//};

//long current_thread_get_stack_bytes_used(void)
//{
//    mangled_ppc("?current_thread_get_stack_bytes_used@@YAJXZ");
//};

//void current_thread_get_stack_usage(long *, long *)
//{
//    mangled_ppc("?current_thread_get_stack_usage@@YAXPAJ0@Z");
//};

//bool current_thread_update_stack_high_water_mark_internal(char const *, long)
//{
//    mangled_ppc("?current_thread_update_stack_high_water_mark_internal@@YA_NPBDJ@Z");
//};

//void current_thread_get_stack_high_water_mark(long *, long *)
//{
//    mangled_ppc("?current_thread_get_stack_high_water_mark@@YAXPAJ0@Z");
//};

//bool current_thread_should_exit(void)
//{
//    mangled_ppc("?current_thread_should_exit@@YA_NXZ");
//};

//bool thread_has_crashed(enum e_registered_threads)
//{
//    mangled_ppc("?thread_has_crashed@@YA_NW4e_registered_threads@@@Z");
//};

//bool thread_any_has_crashed(void)
//{
//    mangled_ppc("?thread_any_has_crashed@@YA_NXZ");
//};

//void post_thread_assert_arguments(struct s_thread_assert_arguments const *)
//{
//    mangled_ppc("?post_thread_assert_arguments@@YAXPBUs_thread_assert_arguments@@@Z");
//};

//void set_thread_exception_arguments(struct _EXCEPTION_POINTERS *)
//{
//    mangled_ppc("?set_thread_exception_arguments@@YAXPAU_EXCEPTION_POINTERS@@@Z");
//};

//void signal_thread_to_assert(enum e_registered_threads)
//{
//    mangled_ppc("?signal_thread_to_assert@@YAXW4e_registered_threads@@@Z");
//};

//void signal_thread_to_crash(enum e_registered_threads)
//{
//    mangled_ppc("?signal_thread_to_crash@@YAXW4e_registered_threads@@@Z");
//};

//void signal_thread_to_crash_job_manager(enum e_registered_threads)
//{
//    mangled_ppc("?signal_thread_to_crash_job_manager@@YAXW4e_registered_threads@@@Z");
//};

//bool current_thread_should_assert(void)
//{
//    mangled_ppc("?current_thread_should_assert@@YA_NXZ");
//};

//bool current_thread_should_crash(void)
//{
//    mangled_ppc("?current_thread_should_crash@@YA_NXZ");
//};

//bool current_thread_should_crash_job_manager(void)
//{
//    mangled_ppc("?current_thread_should_crash_job_manager@@YA_NXZ");
//};

//void current_thread_update_test_functions(void)
//{
//    mangled_ppc("?current_thread_update_test_functions@@YAXXZ");
//};

//public: c_job::c_job(void)
//{
//    mangled_ppc("??0c_job@@QAA@XZ");
//};

//public: bool c_jm_work_unit_handle::valid(void)
//{
//    mangled_ppc("?valid@c_jm_work_unit_handle@@QAA_NXZ");
//};

//bool thread_is_being_traced(enum e_registered_threads)
//{
//    mangled_ppc("?thread_is_being_traced@@YA_NW4e_registered_threads@@@Z");
//};

//class c_event_log_thread_interface * thread_management_get_event_log_interface(void)
//{
//    mangled_ppc("?thread_management_get_event_log_interface@@YAPAVc_event_log_thread_interface@@XZ");
//};

//void havok_next_thread_paramerters_get(long, long *, unsigned long *)
//{
//    mangled_ppc("?havok_next_thread_paramerters_get@@YAXJPAJPAK@Z");
//};

//void havok_notify_thread_started(void *, long, unsigned long, void *)
//{
//    mangled_ppc("?havok_notify_thread_started@@YAXPAXJK0@Z");
//};

//void havok_notify_thread_stopped(void *)
//{
//    mangled_ppc("?havok_notify_thread_stopped@@YAXPAX@Z");
//};

//void * havok_thread_user_data_get(long)
//{
//    mangled_ppc("?havok_thread_user_data_get@@YAPAXJ@Z");
//};

//void havok_notify_thread_running(long)
//{
//    mangled_ppc("?havok_notify_thread_running@@YAXJ@Z");
//};

//?start_thread@c_event_log_thread_implementation@@UAAXQ6AKPAX@Z@Z
//{
//    mangled_ppc("?start_thread@c_event_log_thread_implementation@@UAAXQ6AKPAX@Z@Z");
//};

//public: virtual void c_event_log_thread_implementation::stop_thread(void)
//{
//    mangled_ppc("?stop_thread@c_event_log_thread_implementation@@UAAXXZ");
//};

//public: virtual bool c_event_log_thread_implementation::is_crashed(void)
//{
//    mangled_ppc("?is_crashed@c_event_log_thread_implementation@@UAA_NXZ");
//};

//public: virtual void c_event_log_thread_implementation::thread_idle(void)
//{
//    mangled_ppc("?thread_idle@c_event_log_thread_implementation@@UAAXXZ");
//};

//public: virtual bool c_event_log_thread_implementation::thread_should_exit(void)
//{
//    mangled_ppc("?thread_should_exit@c_event_log_thread_implementation@@UAA_NXZ");
//};

//public: struct s_thread_handle & s_static_array<struct s_thread_handle, 17>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_thread_handle@@$0BB@@@QAAAAUs_thread_handle@@J@Z");
//};

//public: struct s_thread_handle & s_static_array<struct s_thread_handle, 17>::operator[]<enum e_registered_threads>(enum e_registered_threads)
//{
//    mangled_ppc("??$?AW4e_registered_threads@@@?$s_static_array@Us_thread_handle@@$0BB@@@QAAAAUs_thread_handle@@W4e_registered_threads@@@Z");
//};

//public: struct s_thread_id & s_static_array<struct s_thread_id, 17>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_thread_id@@$0BB@@@QAAAAUs_thread_id@@J@Z");
//};

//public: struct s_thread_id & s_static_array<struct s_thread_id, 17>::operator[]<enum e_registered_threads>(enum e_registered_threads)
//{
//    mangled_ppc("??$?AW4e_registered_threads@@@?$s_static_array@Us_thread_id@@$0BB@@@QAAAAUs_thread_id@@W4e_registered_threads@@@Z");
//};

//public: struct s_thread_id & s_static_array<struct s_thread_id, 17>::operator[]<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$?AK@?$s_static_array@Us_thread_id@@$0BB@@@QAAAAUs_thread_id@@K@Z");
//};

//public: static bool s_static_array<struct s_thread_handle, 17>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_thread_handle@@$0BB@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_thread_handle, 17>::valid<enum e_registered_threads>(enum e_registered_threads)
//{
//    mangled_ppc("??$valid@W4e_registered_threads@@@?$s_static_array@Us_thread_handle@@$0BB@@@SA_NW4e_registered_threads@@@Z");
//};

//public: static bool s_static_array<struct s_thread_id, 17>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_thread_id@@$0BB@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_thread_id, 17>::valid<enum e_registered_threads>(enum e_registered_threads)
//{
//    mangled_ppc("??$valid@W4e_registered_threads@@@?$s_static_array@Us_thread_id@@$0BB@@@SA_NW4e_registered_threads@@@Z");
//};

//public: static bool s_static_array<struct s_thread_id, 17>::valid<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$valid@K@?$s_static_array@Us_thread_id@@$0BB@@@SA_NK@Z");
//};

//public: void D3DDevice::GpuDisownAll(void)
//{
//    mangled_ppc("?GpuDisownAll@D3DDevice@@QAAXXZ");
//};

//public: s_thread_system_globals::s_thread_system_globals(void)
//{
//    mangled_ppc("??0s_thread_system_globals@@QAA@XZ");
//};

//public: c_event_log_thread_implementation::c_event_log_thread_implementation(void)
//{
//    mangled_ppc("??0c_event_log_thread_implementation@@QAA@XZ");
//};

//public: c_event_log_thread_interface::c_event_log_thread_interface(void)
//{
//    mangled_ppc("??0c_event_log_thread_interface@@QAA@XZ");
//};

//void job_manager_crash_entry_point(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, class c_job_handle, class c_jm_work_unit_handle)
//{
//    mangled_ppc("?job_manager_crash_entry_point@@YAXKKKKKVc_job_handle@@Vc_jm_work_unit_handle@@@Z");
//};

//void g_exit_thread_signal::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_exit_thread_signal@@YAXXZ");
//};

//void g_crashed_thread_signal::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_crashed_thread_signal@@YAXXZ");
//};

//void g_force_assert_thread_signal::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_force_assert_thread_signal@@YAXXZ");
//};

//void g_force_crash_thread_signal::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_force_crash_thread_signal@@YAXXZ");
//};

//void g_force_job_manager_crash_thread_signal::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_force_job_manager_crash_thread_signal@@YAXXZ");
//};

//void g_thread_system_initialized::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_thread_system_initialized@@YAXXZ");
//};

//void job_manager_crash_signature::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fjob_manager_crash_signature@@YAXXZ");
//};

