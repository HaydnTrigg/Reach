/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_game_state_revert_bit const c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_game_state_revert_bit@@E$03Us_default_enum_string_resolver@@@@2W4e_game_state_revert_bit@@B"
// public: static enum e_main_loop_body_part_flags const c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@2W4e_main_loop_body_part_flags@@B"
// public: static int const c_static_wchar_string<12288>::k_buffer_size; // "?k_buffer_size@?$c_static_wchar_string@$0DAAA@@@2HB"
// bool g_render_thread_user_setting; // "?g_render_thread_user_setting@@3_NA"
// bool debug_console_pauses_game; // "?debug_console_pauses_game@@3_NA"
// char const *const k_crash_info_output_filename; // "?k_crash_info_output_filename@@3PBDB"
// char const **k_main_event_reason_description; // "?k_main_event_reason_description@@3PAPBDA"
// struct s_main_status_value *g_status_values; // "?g_status_values@@3PAUs_main_status_value@@A"
// bool disable_main_loop_throttle; // "?disable_main_loop_throttle@@3_NA"
// bool use_custom_main_loop_throttling_for_synchronous_clients; // "?use_custom_main_loop_throttling_for_synchronous_clients@@3_NA"
// bool debug_no_drawing; // "?debug_no_drawing@@3_NA"
// bool check_system_heap; // "?check_system_heap@@3_NA"
// bool debug_trace_main_events; // "?debug_trace_main_events@@3_NA"
// bool g_debug_draw_observer; // "?g_debug_draw_observer@@3_NA"
// bool g_use_old_player_control_timing_algorithm; // "?g_use_old_player_control_timing_algorithm@@3_NA"
// bool g_main_debug_fake_game_ticks; // "?g_main_debug_fake_game_ticks@@3_NA"
// long g_main_debug_fake_game_ticks_duration_milliseconds; // "?g_main_debug_fake_game_ticks_duration_milliseconds@@3JA"
// bool g_main_always_publish_on_game_tick; // "?g_main_always_publish_on_game_tick@@3_NA"
// bool g_main_disable_pix_counters; // "?g_main_disable_pix_counters@@3_NA"
// bool g_force_upload_even_if_untracked; // "?g_force_upload_even_if_untracked@@3_NA"
// bool g_fake_minidump_creation; // "?g_fake_minidump_creation@@3_NA"
// long g_main_block_simulate_ms; // "?g_main_block_simulate_ms@@3JA"
// long g_main_net_block_simulate_ms; // "?g_main_net_block_simulate_ms@@3JA"
// bool g_suppress_keyboard_for_minidump; // "?g_suppress_keyboard_for_minidump@@3_NA"
// bool g_startup_watch; // "?g_startup_watch@@3_NA"
// class c_interlocked_int32g_render_thread_enabled; // "?g_render_thread_enabled@@3Vc_interlocked_int32@@A"
// class c_interlocked_int32g_render_thread_waiting; // "?g_render_thread_waiting@@3Vc_interlocked_int32@@A"
// class c_interlocked_int32g_single_thread_request_flags; // "?g_single_thread_request_flags@@3Vc_interlocked_int32@@A"
// class t_restricted_allocation_manager<4, void (__cdecl main_thread_combine_timing_data::*)(void *), 0, void (__cdecl __tls_set_g_main_gamestate_timing_data_allocator::*)(4)> g_main_gamestate_timing_data_allocator; // "?g_main_gamestate_timing_data_allocator@@3V?$t_restricted_allocation_manager@$03$1?main_thread_combine_timing_data@@YAXPAX@Z$0A@$1?__tls_set_g_main_gamestate_timing_data_allocator@@YAX0@Z@@A"
// class c_async_completion_flag ill_never_be_done; // "?ill_never_be_done@@3Vc_async_completion_flag@@A"
// class t_restricted_allocation_manager<3, 0, 0, void (__cdecl __tls_set_g_main_render_timing_data_allocator::*)(void *)> g_main_render_timing_data_allocator; // "?g_main_render_timing_data_allocator@@3V?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_main_render_timing_data_allocator@@YAXPAX@Z@@A"
// class c_stop_watch g_main_status_timer; // "?g_main_status_timer@@3Vc_stop_watch@@A"
// class c_stop_watch g_uber_startup_timer; // "?g_uber_startup_timer@@3Vc_stop_watch@@A"
// struct s_game_tick_time_samples *g_main_gamestate_timing_data; // "?g_main_gamestate_timing_data@@3PAUs_game_tick_time_samples@@A"
// struct s_game_tick_time_samples *g_main_render_timing_data; // "?g_main_render_timing_data@@3PAUs_game_tick_time_samples@@A"

// void __tls_set_g_main_gamestate_timing_data_allocator(void *);
// void __tls_set_g_main_render_timing_data_allocator(void *);
// void main_thread_combine_timing_data(void *);
// public: void s_game_tick_time_samples::accum(struct s_game_tick_time_samples const *);
// void main_thread_process_pending_messages(void);
// enum e_render_thread_mode render_thread_get_mode(void);
// bool render_thread_set_mode(enum e_render_thread_mode, enum e_render_thread_mode);
// unsigned long _internal_halt_render_thread_and_lock_resources(char const *, long);
// void unlock_resources_and_resume_render_thread(unsigned long);
// bool render_thread_is_halted_waiting_for_lock(void);
// void process_published_game_state(bool);
// unsigned long render_thread_loop(void *);
// void render_thread_lock_rasterizer_and_resources(void);
// void render_thread_unlock_rasterizer_and_resources(void);
// void publish_waiting_gamestate(void);
// public: void s_game_tick_time_samples::reset(void);
// unsigned long audio_thread_loop(void *);
// unsigned long network_receive_thread_main(void *);
// unsigned long async_thread_loop(void *);
// void main_loop_enter(void);
// public: void s_game_tick_time_samples::initialize(void);
// public: c_block_detection_suspend_scope::c_block_detection_suspend_scope(enum e_block_detection_type);
// public: c_block_detection_suspend_scope::~c_block_detection_suspend_scope(void);
// void main_suppress_startup_sequence(void);
// bool main_menu_has_performed_startup_sequence(void);
// void main_loop_exit(void);
// void main_loop_present_first_frame(void);
// void main_loop(void);
// void main_set_block_detection_threshold(long);
// void main_synchronous_networking_request_vblank_slip(void);
// void main_loop_initialize_restricted_regions(void);
// void main_loop_dispose_restricted_regions(void);
// void main_loop_body(class c_flags<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>, unsigned long *, __int64*, unsigned long *);
// void main_loop_body_single_threaded(class c_flags<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// void main_thread_lock_rasterizer_and_resources(void);
// void main_thread_unlock_rasterizer_and_resources(void);
// void main_loop_body_main_part(void);
// void cache_files_copy_do_work(void);
// void saved_film_manager_update(void);
// void main_loop_process_global_state_changes(void);
// void saved_film_manager_perform_global_state_change(void);
// void main_loop_body_multi_threaded(void);
// void main_loop_pregame(void);
// void events_enabled_main_loop_pregame(void);
// void main_loop_pregame_disable_push(void);
// void main_loop_pregame_disable_pop(void);
// bool main_is_in_main_loop_pregame(void);
// void main_loop_status_message(wchar_t const *);
// void main_exit_game(void);
// void main_reset_map_debug(void);
// void main_reset_map_internal(bool, bool);
// void main_reset_map_random_debug(void);
// void main_reset_map(void);
// void main_reset_map_random(void);
// void main_revert_map_death(void);
// void main_revert_map_user(void);
// void main_lights_reset(void);
// void main_revert_map_scripting(void);
// void main_reload_active_zone_set(void);
// void main_cheat_drop_tag(long, long, struct s_model_customization_region_permutation const *, long);
// void main_cheat_update_dropped_tag_permutation(long, struct s_model_customization_region_permutation const *, long);
// void main_cleanup_loading_screen(void);
// void main_activate_designer_zone(long);
// public: bool s_scenario_zone_activation::is_empty(void) const;
// void main_deactivate_designer_zone(long);
// void main_set_active_designer_zone_mask(unsigned long);
// void main_activate_cinematic_zone(long);
// void main_deactivate_cinematic_zone(long);
// void main_activate_cinematic_zone_for_debugging(long);
// void main_activate_cinematic_zone_from_tag(long);
// void main_deactivate_cinematic_zone_from_tag(long);
// void main_save_and_exit_campaign(void);
// void main_save_and_exit_campaign_immediately(void);
// void main_skip_cinematic(void);
// bool main_save_map_pending(void);
// void main_save_map(void);
// void main_save_core(void);
// void main_save_core_name(char const *);
// void main_load_core(void);
// void main_load_core_name(char const *);
// void main_reset_zone_resources(void);
// bool main_is_switching_zone_sets(void);
// void main_switch_zone_set(long);
// void main_switch_zone_set_by_mask(unsigned long, unsigned long);
// void main_override_zone_set(long *);
// void main_zone_set_override_reset(void);
// long main_create_bsp_mask_zone_set(unsigned long, unsigned long);
// void main_switch_zone_set(char const *);
// void main_prepare_for_switch_zone_set(long);
// void main_decompress_gamestate(void);
// void main_user_interface_save_files(void);
// void main_run_demos(void);
// void main_revert_map_private(void);
// void main_reset_map_private(void);
// void main_lights_reset_private(void);
// void main_skip_cinematic_private(void);
// void main_save_map_private(void);
// void main_save_map_and_exit_private(void);
// void main_game_gamestate_decompress_and_apply_private(void);
// void main_reset_zone_resources_private(void);
// void main_prepare_to_switch_zone_set_private(void);
// void main_switch_zone_set_private(void);
// void main_load_core_private(void);
// void main_save_core_private(void);
// void main_activate_cinematic_tag_private(void);
// void main_deactivate_cinematic_tag_private(void);
// void main_user_interface_save_files_private(void);
// void main_reload_active_zone_set_private(void);
// void main_modify_zone_activation_private(void);
// public: void s_scenario_zone_activation::clear(void);
// void main_cleanup_loading_screen_private(void);
// void main_clear_global_pending_zone_activation(long);
// void main_force_mirror_publish_this_frame(void);
// void main_cheat_drop_tag_private(void);
// void main_cheat_update_dropped_tag_permutation_private(void);
// void main_run_demos_private(void);
// bool main_time_halted(void);
// void main_events_reset(enum e_main_reset_events_reason);
// void main_event_reset_internal(char const *, enum e_main_reset_events_reason, bool *);
// void main_event_reset_internal(char const *, enum e_main_reset_events_reason, bool volatile *);
// bool main_events_pending(void);
// void main_halt_and_display_errors(char const *);
// bool main_halted_with_errors(void);
// void main_render_work_stop_watch_pause(void);
// void main_render_work_stop_watch_resume(void);
// void main_timing_notify_game_tick_duration(float);
// void main_timing_notify_saved_film_history_flush_game_state_started(void);
// void main_timing_notify_saved_film_history_flush_game_state_finished(void);
// void main_dump_memory(void);
// void main_verify_memory(void);
// enum e_async_completion main_crash_async(void *);
// void main_crash(char const *);
// void main_crash_just_upload_dammit(void);
// void main_halt_and_catch_fire(void);
// void main_status(char const *, char const *, ...);
// void main_status_print(void);
// void main_status_add_before_dump(void);
// void main_status_dump(struct s_file_reference *);
// void main_write_stack_to_crash_info_status_file(char const *, void *);
// long main_get_crash_info_status_file_list(long, struct s_file_reference *);
// void main_print_version(void);
// bool main_kick_startup_masking_sequence(bool);
// bool main_startup_sequence(void);
// void main_set_single_thread_request_flag(enum e_single_threaded_request_flags, bool);
// void main_pix_add_named_counter(float, char const *);
// void main_trace_event_internal(char const *);
// void main_player_control_update(long, float, float);
// void main_debug_execute_fake_game_ticks(long);
// void main_debug_bbsquad(void);
// void main_debug_draw_observer(void);
// void main_loop_pregame_halt_and_catch_fire_push(void);
// void main_loop_pregame_halt_and_catch_fire_pop(void);
// void main_block_management_update(void);
// void main_block_simulation_update(void);
// void main_loop_pregame_do_work(void);
// void main_loop_pregame_show_progress_screen(void);
// void main_loop_pregame_update_stack_high_water_mark(void);
// public: void * t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: bool t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>::valid(void) const;
// public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>::valid(void) const;
// public: char * s_static_string<256>::copy_to(char *, unsigned int) const;
// public: void c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: bool c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::test(enum e_game_tick_publishing_flags) const;
// public: void c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::set(enum e_game_tick_publishing_flags, bool);
// public: void c_flags_no_init<enum e_scenario_zone_set_bit, unsigned long, 3, struct s_default_enum_string_resolver>::set(enum e_scenario_zone_set_bit, bool);
// public: void c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_game_state_revert_bit, bool);
// public: unsigned char c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: bool c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_all(void);
// public: bool c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_main_loop_body_part_flags) const;
// public: bool c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test_range(enum e_main_loop_body_part_flags, enum e_main_loop_body_part_flags) const;
// public: c_flags<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void);
// public: c_static_wchar_string<12288>::c_static_wchar_string<12288>(void);
// public: wchar_t const * c_static_wchar_string<12288>::get_string(void) const;
// public: static bool c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::valid_bit(enum e_game_tick_publishing_flags);
// private: static unsigned long c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::flag_size_type(enum e_game_tick_publishing_flags);
// private: static unsigned long c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: static bool c_flags_no_init<enum e_scenario_zone_set_bit, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_zone_set_bit);
// private: static unsigned long c_flags_no_init<enum e_scenario_zone_set_bit, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_zone_set_bit);
// public: static bool c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_game_state_revert_bit);
// private: static unsigned char c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_game_state_revert_bit);
// private: static unsigned char c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// public: void c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: class c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver> c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver> const &) const;
// public: static class c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver> c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_main_loop_body_part_flags, enum e_main_loop_body_part_flags);
// public: static bool c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_main_loop_body_part_flags);
// private: static unsigned char c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_main_loop_body_part_flags);
// private: static unsigned char c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_game_tick_publishing_flags);
// private: static unsigned char c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_game_state_revert_bit);
// public: void c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// private: static unsigned char c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_main_loop_body_part_flags);
// public: bool c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const;
// public: c_profiler_deadlock_detection_control::c_profiler_deadlock_detection_control(void);
// public: c_profiler_deadlock_detection_control::~c_profiler_deadlock_detection_control(void);
// public: c_profiler_session_scope::c_profiler_session_scope(long, long, long);
// public: c_profiler_session_scope::~c_profiler_session_scope(void);
// public: c_flags<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>(void);
// public: t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>::t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>(void);
// public: virtual void * t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>::free_memory(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>::free_memory(void);
// public: _main_globals::~_main_globals(void);
// public: t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>::~t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>(void);
// public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>(void);
// void g_render_thread_enabled::`dynamic atexit destructor'(void);
// void g_render_thread_waiting::`dynamic atexit destructor'(void);
// void g_single_thread_request_flags::`dynamic atexit destructor'(void);
// void main_globals::`dynamic atexit destructor'(void);
// void ill_never_be_done::`dynamic atexit destructor'(void);
// void g_main_gamestate_timing_data_allocator::`dynamic atexit destructor'(void);
// void g_main_render_timing_data_allocator::`dynamic atexit destructor'(void);
// void g_main_status_timer::`dynamic atexit destructor'(void);
// void g_uber_startup_timer::`dynamic atexit destructor'(void);

//void __tls_set_g_main_gamestate_timing_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_main_gamestate_timing_data_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_main_render_timing_data_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_main_render_timing_data_allocator@@YAXPAX@Z");
//};

//void main_thread_combine_timing_data(void *)
//{
//    mangled_ppc("?main_thread_combine_timing_data@@YAXPAX@Z");
//};

//public: void s_game_tick_time_samples::accum(struct s_game_tick_time_samples const *)
//{
//    mangled_ppc("?accum@s_game_tick_time_samples@@QAAXPBU1@@Z");
//};

//void main_thread_process_pending_messages(void)
//{
//    mangled_ppc("?main_thread_process_pending_messages@@YAXXZ");
//};

//enum e_render_thread_mode render_thread_get_mode(void)
//{
//    mangled_ppc("?render_thread_get_mode@@YA?AW4e_render_thread_mode@@XZ");
//};

//bool render_thread_set_mode(enum e_render_thread_mode, enum e_render_thread_mode)
//{
//    mangled_ppc("?render_thread_set_mode@@YA_NW4e_render_thread_mode@@0@Z");
//};

//unsigned long _internal_halt_render_thread_and_lock_resources(char const *, long)
//{
//    mangled_ppc("?_internal_halt_render_thread_and_lock_resources@@YAKPBDJ@Z");
//};

//void unlock_resources_and_resume_render_thread(unsigned long)
//{
//    mangled_ppc("?unlock_resources_and_resume_render_thread@@YAXK@Z");
//};

//bool render_thread_is_halted_waiting_for_lock(void)
//{
//    mangled_ppc("?render_thread_is_halted_waiting_for_lock@@YA_NXZ");
//};

//void process_published_game_state(bool)
//{
//    mangled_ppc("?process_published_game_state@@YAX_N@Z");
//};

//unsigned long render_thread_loop(void *)
//{
//    mangled_ppc("?render_thread_loop@@YAKPAX@Z");
//};

//void render_thread_lock_rasterizer_and_resources(void)
//{
//    mangled_ppc("?render_thread_lock_rasterizer_and_resources@@YAXXZ");
//};

//void render_thread_unlock_rasterizer_and_resources(void)
//{
//    mangled_ppc("?render_thread_unlock_rasterizer_and_resources@@YAXXZ");
//};

//void publish_waiting_gamestate(void)
//{
//    mangled_ppc("?publish_waiting_gamestate@@YAXXZ");
//};

//public: void s_game_tick_time_samples::reset(void)
//{
//    mangled_ppc("?reset@s_game_tick_time_samples@@QAAXXZ");
//};

//unsigned long audio_thread_loop(void *)
//{
//    mangled_ppc("?audio_thread_loop@@YAKPAX@Z");
//};

//unsigned long network_receive_thread_main(void *)
//{
//    mangled_ppc("?network_receive_thread_main@@YAKPAX@Z");
//};

//unsigned long async_thread_loop(void *)
//{
//    mangled_ppc("?async_thread_loop@@YAKPAX@Z");
//};

//void main_loop_enter(void)
//{
//    mangled_ppc("?main_loop_enter@@YAXXZ");
//};

//public: void s_game_tick_time_samples::initialize(void)
//{
//    mangled_ppc("?initialize@s_game_tick_time_samples@@QAAXXZ");
//};

//public: c_block_detection_suspend_scope::c_block_detection_suspend_scope(enum e_block_detection_type)
//{
//    mangled_ppc("??0c_block_detection_suspend_scope@@QAA@W4e_block_detection_type@@@Z");
//};

//public: c_block_detection_suspend_scope::~c_block_detection_suspend_scope(void)
//{
//    mangled_ppc("??1c_block_detection_suspend_scope@@QAA@XZ");
//};

//void main_suppress_startup_sequence(void)
//{
//    mangled_ppc("?main_suppress_startup_sequence@@YAXXZ");
//};

//bool main_menu_has_performed_startup_sequence(void)
//{
//    mangled_ppc("?main_menu_has_performed_startup_sequence@@YA_NXZ");
//};

//void main_loop_exit(void)
//{
//    mangled_ppc("?main_loop_exit@@YAXXZ");
//};

//void main_loop_present_first_frame(void)
//{
//    mangled_ppc("?main_loop_present_first_frame@@YAXXZ");
//};

//void main_loop(void)
//{
//    mangled_ppc("?main_loop@@YAXXZ");
//};

//void main_set_block_detection_threshold(long)
//{
//    mangled_ppc("?main_set_block_detection_threshold@@YAXJ@Z");
//};

//void main_synchronous_networking_request_vblank_slip(void)
//{
//    mangled_ppc("?main_synchronous_networking_request_vblank_slip@@YAXXZ");
//};

//void main_loop_initialize_restricted_regions(void)
//{
//    mangled_ppc("?main_loop_initialize_restricted_regions@@YAXXZ");
//};

//void main_loop_dispose_restricted_regions(void)
//{
//    mangled_ppc("?main_loop_dispose_restricted_regions@@YAXXZ");
//};

//void main_loop_body(class c_flags<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>, unsigned long *, __int64*, unsigned long *)
//{
//    mangled_ppc("?main_loop_body@@YAXV?$c_flags@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@PAKPA_J1@Z");
//};

//void main_loop_body_single_threaded(class c_flags<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?main_loop_body_single_threaded@@YAXV?$c_flags@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//void main_thread_lock_rasterizer_and_resources(void)
//{
//    mangled_ppc("?main_thread_lock_rasterizer_and_resources@@YAXXZ");
//};

//void main_thread_unlock_rasterizer_and_resources(void)
//{
//    mangled_ppc("?main_thread_unlock_rasterizer_and_resources@@YAXXZ");
//};

//void main_loop_body_main_part(void)
//{
//    mangled_ppc("?main_loop_body_main_part@@YAXXZ");
//};

//void cache_files_copy_do_work(void)
//{
//    mangled_ppc("?cache_files_copy_do_work@@YAXXZ");
//};

//void saved_film_manager_update(void)
//{
//    mangled_ppc("?saved_film_manager_update@@YAXXZ");
//};

//void main_loop_process_global_state_changes(void)
//{
//    mangled_ppc("?main_loop_process_global_state_changes@@YAXXZ");
//};

//void saved_film_manager_perform_global_state_change(void)
//{
//    mangled_ppc("?saved_film_manager_perform_global_state_change@@YAXXZ");
//};

//void main_loop_body_multi_threaded(void)
//{
//    mangled_ppc("?main_loop_body_multi_threaded@@YAXXZ");
//};

//void main_loop_pregame(void)
//{
//    mangled_ppc("?main_loop_pregame@@YAXXZ");
//};

//void events_enabled_main_loop_pregame(void)
//{
//    mangled_ppc("?events_enabled_main_loop_pregame@@YAXXZ");
//};

//void main_loop_pregame_disable_push(void)
//{
//    mangled_ppc("?main_loop_pregame_disable_push@@YAXXZ");
//};

//void main_loop_pregame_disable_pop(void)
//{
//    mangled_ppc("?main_loop_pregame_disable_pop@@YAXXZ");
//};

//bool main_is_in_main_loop_pregame(void)
//{
//    mangled_ppc("?main_is_in_main_loop_pregame@@YA_NXZ");
//};

//void main_loop_status_message(wchar_t const *)
//{
//    mangled_ppc("?main_loop_status_message@@YAXPB_W@Z");
//};

//void main_exit_game(void)
//{
//    mangled_ppc("?main_exit_game@@YAXXZ");
//};

//void main_reset_map_debug(void)
//{
//    mangled_ppc("?main_reset_map_debug@@YAXXZ");
//};

//void main_reset_map_internal(bool, bool)
//{
//    mangled_ppc("?main_reset_map_internal@@YAX_N0@Z");
//};

//void main_reset_map_random_debug(void)
//{
//    mangled_ppc("?main_reset_map_random_debug@@YAXXZ");
//};

//void main_reset_map(void)
//{
//    mangled_ppc("?main_reset_map@@YAXXZ");
//};

//void main_reset_map_random(void)
//{
//    mangled_ppc("?main_reset_map_random@@YAXXZ");
//};

//void main_revert_map_death(void)
//{
//    mangled_ppc("?main_revert_map_death@@YAXXZ");
//};

//void main_revert_map_user(void)
//{
//    mangled_ppc("?main_revert_map_user@@YAXXZ");
//};

//void main_lights_reset(void)
//{
//    mangled_ppc("?main_lights_reset@@YAXXZ");
//};

//void main_revert_map_scripting(void)
//{
//    mangled_ppc("?main_revert_map_scripting@@YAXXZ");
//};

//void main_reload_active_zone_set(void)
//{
//    mangled_ppc("?main_reload_active_zone_set@@YAXXZ");
//};

//void main_cheat_drop_tag(long, long, struct s_model_customization_region_permutation const *, long)
//{
//    mangled_ppc("?main_cheat_drop_tag@@YAXJJPBUs_model_customization_region_permutation@@J@Z");
//};

//void main_cheat_update_dropped_tag_permutation(long, struct s_model_customization_region_permutation const *, long)
//{
//    mangled_ppc("?main_cheat_update_dropped_tag_permutation@@YAXJPBUs_model_customization_region_permutation@@J@Z");
//};

//void main_cleanup_loading_screen(void)
//{
//    mangled_ppc("?main_cleanup_loading_screen@@YAXXZ");
//};

//void main_activate_designer_zone(long)
//{
//    mangled_ppc("?main_activate_designer_zone@@YAXJ@Z");
//};

//public: bool s_scenario_zone_activation::is_empty(void) const
//{
//    mangled_ppc("?is_empty@s_scenario_zone_activation@@QBA_NXZ");
//};

//void main_deactivate_designer_zone(long)
//{
//    mangled_ppc("?main_deactivate_designer_zone@@YAXJ@Z");
//};

//void main_set_active_designer_zone_mask(unsigned long)
//{
//    mangled_ppc("?main_set_active_designer_zone_mask@@YAXK@Z");
//};

//void main_activate_cinematic_zone(long)
//{
//    mangled_ppc("?main_activate_cinematic_zone@@YAXJ@Z");
//};

//void main_deactivate_cinematic_zone(long)
//{
//    mangled_ppc("?main_deactivate_cinematic_zone@@YAXJ@Z");
//};

//void main_activate_cinematic_zone_for_debugging(long)
//{
//    mangled_ppc("?main_activate_cinematic_zone_for_debugging@@YAXJ@Z");
//};

//void main_activate_cinematic_zone_from_tag(long)
//{
//    mangled_ppc("?main_activate_cinematic_zone_from_tag@@YAXJ@Z");
//};

//void main_deactivate_cinematic_zone_from_tag(long)
//{
//    mangled_ppc("?main_deactivate_cinematic_zone_from_tag@@YAXJ@Z");
//};

//void main_save_and_exit_campaign(void)
//{
//    mangled_ppc("?main_save_and_exit_campaign@@YAXXZ");
//};

//void main_save_and_exit_campaign_immediately(void)
//{
//    mangled_ppc("?main_save_and_exit_campaign_immediately@@YAXXZ");
//};

//void main_skip_cinematic(void)
//{
//    mangled_ppc("?main_skip_cinematic@@YAXXZ");
//};

//bool main_save_map_pending(void)
//{
//    mangled_ppc("?main_save_map_pending@@YA_NXZ");
//};

//void main_save_map(void)
//{
//    mangled_ppc("?main_save_map@@YAXXZ");
//};

//void main_save_core(void)
//{
//    mangled_ppc("?main_save_core@@YAXXZ");
//};

//void main_save_core_name(char const *)
//{
//    mangled_ppc("?main_save_core_name@@YAXPBD@Z");
//};

//void main_load_core(void)
//{
//    mangled_ppc("?main_load_core@@YAXXZ");
//};

//void main_load_core_name(char const *)
//{
//    mangled_ppc("?main_load_core_name@@YAXPBD@Z");
//};

//void main_reset_zone_resources(void)
//{
//    mangled_ppc("?main_reset_zone_resources@@YAXXZ");
//};

//bool main_is_switching_zone_sets(void)
//{
//    mangled_ppc("?main_is_switching_zone_sets@@YA_NXZ");
//};

//void main_switch_zone_set(long)
//{
//    mangled_ppc("?main_switch_zone_set@@YAXJ@Z");
//};

//void main_switch_zone_set_by_mask(unsigned long, unsigned long)
//{
//    mangled_ppc("?main_switch_zone_set_by_mask@@YAXKK@Z");
//};

//void main_override_zone_set(long *)
//{
//    mangled_ppc("?main_override_zone_set@@YAXPAJ@Z");
//};

//void main_zone_set_override_reset(void)
//{
//    mangled_ppc("?main_zone_set_override_reset@@YAXXZ");
//};

//long main_create_bsp_mask_zone_set(unsigned long, unsigned long)
//{
//    mangled_ppc("?main_create_bsp_mask_zone_set@@YAJKK@Z");
//};

//void main_switch_zone_set(char const *)
//{
//    mangled_ppc("?main_switch_zone_set@@YAXPBD@Z");
//};

//void main_prepare_for_switch_zone_set(long)
//{
//    mangled_ppc("?main_prepare_for_switch_zone_set@@YAXJ@Z");
//};

//void main_decompress_gamestate(void)
//{
//    mangled_ppc("?main_decompress_gamestate@@YAXXZ");
//};

//void main_user_interface_save_files(void)
//{
//    mangled_ppc("?main_user_interface_save_files@@YAXXZ");
//};

//void main_run_demos(void)
//{
//    mangled_ppc("?main_run_demos@@YAXXZ");
//};

//void main_revert_map_private(void)
//{
//    mangled_ppc("?main_revert_map_private@@YAXXZ");
//};

//void main_reset_map_private(void)
//{
//    mangled_ppc("?main_reset_map_private@@YAXXZ");
//};

//void main_lights_reset_private(void)
//{
//    mangled_ppc("?main_lights_reset_private@@YAXXZ");
//};

//void main_skip_cinematic_private(void)
//{
//    mangled_ppc("?main_skip_cinematic_private@@YAXXZ");
//};

//void main_save_map_private(void)
//{
//    mangled_ppc("?main_save_map_private@@YAXXZ");
//};

//void main_save_map_and_exit_private(void)
//{
//    mangled_ppc("?main_save_map_and_exit_private@@YAXXZ");
//};

//void main_game_gamestate_decompress_and_apply_private(void)
//{
//    mangled_ppc("?main_game_gamestate_decompress_and_apply_private@@YAXXZ");
//};

//void main_reset_zone_resources_private(void)
//{
//    mangled_ppc("?main_reset_zone_resources_private@@YAXXZ");
//};

//void main_prepare_to_switch_zone_set_private(void)
//{
//    mangled_ppc("?main_prepare_to_switch_zone_set_private@@YAXXZ");
//};

//void main_switch_zone_set_private(void)
//{
//    mangled_ppc("?main_switch_zone_set_private@@YAXXZ");
//};

//void main_load_core_private(void)
//{
//    mangled_ppc("?main_load_core_private@@YAXXZ");
//};

//void main_save_core_private(void)
//{
//    mangled_ppc("?main_save_core_private@@YAXXZ");
//};

//void main_activate_cinematic_tag_private(void)
//{
//    mangled_ppc("?main_activate_cinematic_tag_private@@YAXXZ");
//};

//void main_deactivate_cinematic_tag_private(void)
//{
//    mangled_ppc("?main_deactivate_cinematic_tag_private@@YAXXZ");
//};

//void main_user_interface_save_files_private(void)
//{
//    mangled_ppc("?main_user_interface_save_files_private@@YAXXZ");
//};

//void main_reload_active_zone_set_private(void)
//{
//    mangled_ppc("?main_reload_active_zone_set_private@@YAXXZ");
//};

//void main_modify_zone_activation_private(void)
//{
//    mangled_ppc("?main_modify_zone_activation_private@@YAXXZ");
//};

//public: void s_scenario_zone_activation::clear(void)
//{
//    mangled_ppc("?clear@s_scenario_zone_activation@@QAAXXZ");
//};

//void main_cleanup_loading_screen_private(void)
//{
//    mangled_ppc("?main_cleanup_loading_screen_private@@YAXXZ");
//};

//void main_clear_global_pending_zone_activation(long)
//{
//    mangled_ppc("?main_clear_global_pending_zone_activation@@YAXJ@Z");
//};

//void main_force_mirror_publish_this_frame(void)
//{
//    mangled_ppc("?main_force_mirror_publish_this_frame@@YAXXZ");
//};

//void main_cheat_drop_tag_private(void)
//{
//    mangled_ppc("?main_cheat_drop_tag_private@@YAXXZ");
//};

//void main_cheat_update_dropped_tag_permutation_private(void)
//{
//    mangled_ppc("?main_cheat_update_dropped_tag_permutation_private@@YAXXZ");
//};

//void main_run_demos_private(void)
//{
//    mangled_ppc("?main_run_demos_private@@YAXXZ");
//};

//bool main_time_halted(void)
//{
//    mangled_ppc("?main_time_halted@@YA_NXZ");
//};

//void main_events_reset(enum e_main_reset_events_reason)
//{
//    mangled_ppc("?main_events_reset@@YAXW4e_main_reset_events_reason@@@Z");
//};

//void main_event_reset_internal(char const *, enum e_main_reset_events_reason, bool *)
//{
//    mangled_ppc("?main_event_reset_internal@@YAXPBDW4e_main_reset_events_reason@@PA_N@Z");
//};

//void main_event_reset_internal(char const *, enum e_main_reset_events_reason, bool volatile *)
//{
//    mangled_ppc("?main_event_reset_internal@@YAXPBDW4e_main_reset_events_reason@@PC_N@Z");
//};

//bool main_events_pending(void)
//{
//    mangled_ppc("?main_events_pending@@YA_NXZ");
//};

//void main_halt_and_display_errors(char const *)
//{
//    mangled_ppc("?main_halt_and_display_errors@@YAXPBD@Z");
//};

//bool main_halted_with_errors(void)
//{
//    mangled_ppc("?main_halted_with_errors@@YA_NXZ");
//};

//void main_render_work_stop_watch_pause(void)
//{
//    mangled_ppc("?main_render_work_stop_watch_pause@@YAXXZ");
//};

//void main_render_work_stop_watch_resume(void)
//{
//    mangled_ppc("?main_render_work_stop_watch_resume@@YAXXZ");
//};

//void main_timing_notify_game_tick_duration(float)
//{
//    mangled_ppc("?main_timing_notify_game_tick_duration@@YAXM@Z");
//};

//void main_timing_notify_saved_film_history_flush_game_state_started(void)
//{
//    mangled_ppc("?main_timing_notify_saved_film_history_flush_game_state_started@@YAXXZ");
//};

//void main_timing_notify_saved_film_history_flush_game_state_finished(void)
//{
//    mangled_ppc("?main_timing_notify_saved_film_history_flush_game_state_finished@@YAXXZ");
//};

//void main_dump_memory(void)
//{
//    mangled_ppc("?main_dump_memory@@YAXXZ");
//};

//void main_verify_memory(void)
//{
//    mangled_ppc("?main_verify_memory@@YAXXZ");
//};

//enum e_async_completion main_crash_async(void *)
//{
//    mangled_ppc("?main_crash_async@@YA?AW4e_async_completion@@PAX@Z");
//};

//void main_crash(char const *)
//{
//    mangled_ppc("?main_crash@@YAXPBD@Z");
//};

//void main_crash_just_upload_dammit(void)
//{
//    mangled_ppc("?main_crash_just_upload_dammit@@YAXXZ");
//};

//void main_halt_and_catch_fire(void)
//{
//    mangled_ppc("?main_halt_and_catch_fire@@YAXXZ");
//};

//void main_status(char const *, char const *, ...)
//{
//    mangled_ppc("?main_status@@YAXPBD0ZZ");
//};

//void main_status_print(void)
//{
//    mangled_ppc("?main_status_print@@YAXXZ");
//};

//void main_status_add_before_dump(void)
//{
//    mangled_ppc("?main_status_add_before_dump@@YAXXZ");
//};

//void main_status_dump(struct s_file_reference *)
//{
//    mangled_ppc("?main_status_dump@@YAXPAUs_file_reference@@@Z");
//};

//void main_write_stack_to_crash_info_status_file(char const *, void *)
//{
//    mangled_ppc("?main_write_stack_to_crash_info_status_file@@YAXPBDPAX@Z");
//};

//long main_get_crash_info_status_file_list(long, struct s_file_reference *)
//{
//    mangled_ppc("?main_get_crash_info_status_file_list@@YAJJPAUs_file_reference@@@Z");
//};

//void main_print_version(void)
//{
//    mangled_ppc("?main_print_version@@YAXXZ");
//};

//bool main_kick_startup_masking_sequence(bool)
//{
//    mangled_ppc("?main_kick_startup_masking_sequence@@YA_N_N@Z");
//};

//bool main_startup_sequence(void)
//{
//    mangled_ppc("?main_startup_sequence@@YA_NXZ");
//};

//void main_set_single_thread_request_flag(enum e_single_threaded_request_flags, bool)
//{
//    mangled_ppc("?main_set_single_thread_request_flag@@YAXW4e_single_threaded_request_flags@@_N@Z");
//};

//void main_pix_add_named_counter(float, char const *)
//{
//    mangled_ppc("?main_pix_add_named_counter@@YAXMPBD@Z");
//};

//void main_trace_event_internal(char const *)
//{
//    mangled_ppc("?main_trace_event_internal@@YAXPBD@Z");
//};

//void main_player_control_update(long, float, float)
//{
//    mangled_ppc("?main_player_control_update@@YAXJMM@Z");
//};

//void main_debug_execute_fake_game_ticks(long)
//{
//    mangled_ppc("?main_debug_execute_fake_game_ticks@@YAXJ@Z");
//};

//void main_debug_bbsquad(void)
//{
//    mangled_ppc("?main_debug_bbsquad@@YAXXZ");
//};

//void main_debug_draw_observer(void)
//{
//    mangled_ppc("?main_debug_draw_observer@@YAXXZ");
//};

//void main_loop_pregame_halt_and_catch_fire_push(void)
//{
//    mangled_ppc("?main_loop_pregame_halt_and_catch_fire_push@@YAXXZ");
//};

//void main_loop_pregame_halt_and_catch_fire_pop(void)
//{
//    mangled_ppc("?main_loop_pregame_halt_and_catch_fire_pop@@YAXXZ");
//};

//void main_block_management_update(void)
//{
//    mangled_ppc("?main_block_management_update@@YAXXZ");
//};

//void main_block_simulation_update(void)
//{
//    mangled_ppc("?main_block_simulation_update@@YAXXZ");
//};

//void main_loop_pregame_do_work(void)
//{
//    mangled_ppc("?main_loop_pregame_do_work@@YAXXZ");
//};

//void main_loop_pregame_show_progress_screen(void)
//{
//    mangled_ppc("?main_loop_pregame_show_progress_screen@@YAXXZ");
//};

//void main_loop_pregame_update_stack_high_water_mark(void)
//{
//    mangled_ppc("?main_loop_pregame_update_stack_high_water_mark@@YAXXZ");
//};

//public: void * t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$1?main_thread_combine_timing_data@@YAXPAX@Z$0A@$1?__tls_set_g_main_gamestate_timing_data_allocator@@YAX0@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_main_render_timing_data_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: bool t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$1?main_thread_combine_timing_data@@YAXPAX@Z$0A@$1?__tls_set_g_main_gamestate_timing_data_allocator@@YAX0@Z@@QBA_NXZ");
//};

//public: bool t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_main_render_timing_data_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: char * s_static_string<256>::copy_to(char *, unsigned int) const
//{
//    mangled_ppc("?copy_to@?$s_static_string@$0BAA@@@QBAPADPADI@Z");
//};

//public: void c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_game_tick_publishing_flags@@K$0O@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_game_tick_publishing_flags@@K$0O@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::test(enum e_game_tick_publishing_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_game_tick_publishing_flags@@K$0O@Us_default_enum_string_resolver@@@@QBA_NW4e_game_tick_publishing_flags@@@Z");
//};

//public: void c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::set(enum e_game_tick_publishing_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_game_tick_publishing_flags@@K$0O@Us_default_enum_string_resolver@@@@QAAXW4e_game_tick_publishing_flags@@_N@Z");
//};

//public: void c_flags_no_init<enum e_scenario_zone_set_bit, unsigned long, 3, struct s_default_enum_string_resolver>::set(enum e_scenario_zone_set_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_scenario_zone_set_bit@@K$02Us_default_enum_string_resolver@@@@QAAXW4e_scenario_zone_set_bit@@_N@Z");
//};

//public: void c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_game_state_revert_bit@@E$03Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_game_state_revert_bit@@E$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::set(enum e_game_state_revert_bit, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_game_state_revert_bit@@E$03Us_default_enum_string_resolver@@@@QAAXW4e_game_state_revert_bit@@_N@Z");
//};

//public: unsigned char c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_game_state_revert_bit@@E$03Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: bool c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_all(void)
//{
//    mangled_ppc("?set_all@?$c_flags_no_init@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_main_loop_body_part_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_main_loop_body_part_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test_range(enum e_main_loop_body_part_flags, enum e_main_loop_body_part_flags) const
//{
//    mangled_ppc("?test_range@?$c_flags_no_init@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_main_loop_body_part_flags@@0@Z");
//};

//public: c_flags<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_static_wchar_string<12288>::c_static_wchar_string<12288>(void)
//{
//    mangled_ppc("??0?$c_static_wchar_string@$0DAAA@@@QAA@XZ");
//};

//public: wchar_t const * c_static_wchar_string<12288>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$c_static_wchar_string@$0DAAA@@@QBAPB_WXZ");
//};

//public: static bool c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::valid_bit(enum e_game_tick_publishing_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_game_tick_publishing_flags@@K$0O@Us_default_enum_string_resolver@@@@SA_NW4e_game_tick_publishing_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::flag_size_type(enum e_game_tick_publishing_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_game_tick_publishing_flags@@K$0O@Us_default_enum_string_resolver@@@@CAKW4e_game_tick_publishing_flags@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_game_tick_publishing_flags@@K$0O@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//public: static bool c_flags_no_init<enum e_scenario_zone_set_bit, unsigned long, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_scenario_zone_set_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_scenario_zone_set_bit@@K$02Us_default_enum_string_resolver@@@@SA_NW4e_scenario_zone_set_bit@@@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_scenario_zone_set_bit, unsigned long, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_scenario_zone_set_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_scenario_zone_set_bit@@K$02Us_default_enum_string_resolver@@@@CAKW4e_scenario_zone_set_bit@@@Z");
//};

//public: static bool c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::valid_bit(enum e_game_state_revert_bit)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_game_state_revert_bit@@E$03Us_default_enum_string_resolver@@@@SA_NW4e_game_state_revert_bit@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::flag_size_type(enum e_game_state_revert_bit)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_game_state_revert_bit@@E$03Us_default_enum_string_resolver@@@@CAEW4e_game_state_revert_bit@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_game_state_revert_bit@@E$03Us_default_enum_string_resolver@@@@CAEXZ");
//};

//public: void c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: class c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver> c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::operator&(class c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver> const &) const
//{
//    mangled_ppc("??I?$c_flags_no_init@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@QBA?AV0@ABV0@@Z");
//};

//public: static class c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver> c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_from_range(enum e_main_loop_body_part_flags, enum e_main_loop_body_part_flags)
//{
//    mangled_ppc("?make_mask_from_range@?$c_flags_no_init@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@SA?AV1@W4e_main_loop_body_part_flags@@0@Z");
//};

//public: static bool c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum e_main_loop_body_part_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_main_loop_body_part_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum e_main_loop_body_part_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_main_loop_body_part_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_game_tick_publishing_flags, unsigned long, 14, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_game_tick_publishing_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_game_tick_publishing_flags@@K$0O@Us_default_enum_string_resolver@@@@CAKW4e_game_tick_publishing_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_game_state_revert_bit)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_game_state_revert_bit@@E$03Us_default_enum_string_resolver@@@@CAEW4e_game_state_revert_bit@@@Z");
//};

//public: void c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_main_loop_body_part_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_main_loop_body_part_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_main_loop_body_part_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_main_loop_body_part_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: c_profiler_deadlock_detection_control::c_profiler_deadlock_detection_control(void)
//{
//    mangled_ppc("??0c_profiler_deadlock_detection_control@@QAA@XZ");
//};

//public: c_profiler_deadlock_detection_control::~c_profiler_deadlock_detection_control(void)
//{
//    mangled_ppc("??1c_profiler_deadlock_detection_control@@QAA@XZ");
//};

//public: c_profiler_session_scope::c_profiler_session_scope(long, long, long)
//{
//    mangled_ppc("??0c_profiler_session_scope@@QAA@JJJ@Z");
//};

//public: c_profiler_session_scope::~c_profiler_session_scope(void)
//{
//    mangled_ppc("??1c_profiler_session_scope@@QAA@XZ");
//};

//public: c_flags<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>::c_flags<enum e_game_state_revert_bit, unsigned char, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_game_state_revert_bit@@E$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>::t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$1?main_thread_combine_timing_data@@YAXPAX@Z$0A@$1?__tls_set_g_main_gamestate_timing_data_allocator@@YAX0@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$1?main_thread_combine_timing_data@@YAXPAX@Z$0A@$1?__tls_set_g_main_gamestate_timing_data_allocator@@YAX0@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$1?main_thread_combine_timing_data@@YAXPAX@Z$0A@$1?__tls_set_g_main_gamestate_timing_data_allocator@@YAX0@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$1?main_thread_combine_timing_data@@YAXPAX@Z$0A@$1?__tls_set_g_main_gamestate_timing_data_allocator@@YAX0@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>::t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_main_render_timing_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_main_render_timing_data_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_main_render_timing_data_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_main_render_timing_data_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: _main_globals::~_main_globals(void)
//{
//    mangled_ppc("??1_main_globals@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>::~t_restricted_allocation_manager<4, void (main_thread_combine_timing_data::*)(void *), 0, void (__tls_set_g_main_gamestate_timing_data_allocator::*)(4)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$1?main_thread_combine_timing_data@@YAXPAX@Z$0A@$1?__tls_set_g_main_gamestate_timing_data_allocator@@YAX0@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>::~t_restricted_allocation_manager<3, 0, 0, void (__tls_set_g_main_render_timing_data_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$02$0A@$0A@$1?__tls_set_g_main_render_timing_data_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//void g_render_thread_enabled::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_render_thread_enabled@@YAXXZ");
//};

//void g_render_thread_waiting::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_render_thread_waiting@@YAXXZ");
//};

//void g_single_thread_request_flags::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_single_thread_request_flags@@YAXXZ");
//};

//void main_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fmain_globals@@YAXXZ");
//};

//void ill_never_be_done::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fill_never_be_done@@YAXXZ");
//};

//void g_main_gamestate_timing_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_main_gamestate_timing_data_allocator@@YAXXZ");
//};

//void g_main_render_timing_data_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_main_render_timing_data_allocator@@YAXXZ");
//};

//void g_main_status_timer::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_main_status_timer@@YAXXZ");
//};

//void g_uber_startup_timer::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_uber_startup_timer@@YAXXZ");
//};

