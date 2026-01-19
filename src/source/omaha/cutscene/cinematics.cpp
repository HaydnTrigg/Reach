/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_cinematic_object, 200>::k_element_count; // "?k_element_count@?$s_static_array@Us_cinematic_object@@$0MI@@@2JB"
// public: static long const s_static_array<struct s_cinematic_screen_effect, 5>::k_element_count; // "?k_element_count@?$s_static_array@Us_cinematic_screen_effect@@$04@@2JB"
// public: static long const s_static_array<struct s_cinematic_clip_global, 32>::k_element_count; // "?k_element_count@?$s_static_array@Us_cinematic_clip_global@@$0CA@@@2JB"
// public: static long const s_static_string<100>::k_index_not_found; // "?k_index_not_found@?$s_static_string@$0GE@@@2JB"
// public: static long const s_static_string<100>::k_element_count; // "?k_element_count@?$s_static_string@$0GE@@@2JB"
// long cinematic_skip_ui_last_active_time; // "?cinematic_skip_ui_last_active_time@@3JA"
// bool g_cinematic_render_enable; // "?g_cinematic_render_enable@@3_NA"
// long cinematic_status_line_count; // "?cinematic_status_line_count@@3JA"
// bool g_enable_time_code; // "?g_enable_time_code@@3_NA"
// bool g_debug_cinematic_controls_enable; // "?g_debug_cinematic_controls_enable@@3_NA"
// bool g_cinematic_debugging_enable; // "?g_cinematic_debugging_enable@@3_NA"
// bool g_cinematic_debugging_verbose_enable; // "?g_cinematic_debugging_verbose_enable@@3_NA"
// long g_letter_box_style; // "?g_letter_box_style@@3JA"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_cinematic_globals_allocator::*)(void *)> g_cinematic_globals_allocator; // "?g_cinematic_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)> g_cinematic_globals_non_deterministic_allocator; // "?g_cinematic_globals_non_deterministic_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_non_deterministic_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_cinematic_new_globals_allocator::*)(void *)> g_cinematic_new_globals_allocator; // "?g_cinematic_new_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_new_globals_allocator@@YAXPAX@Z@@A"
// class t_restricted_allocation_manager<4, 0, 0, void (__cdecl __tls_set_g_cinematic_light_globals_allocator::*)(void *)> g_cinematic_light_globals_allocator; // "?g_cinematic_light_globals_allocator@@3V?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_light_globals_allocator@@YAXPAX@Z@@A"
// struct c_status_line *g_time_code_status_line; // "?g_time_code_status_line@@3PAUc_status_line@@A"
// class c_stop_watch_template<class c_game_time_stop_watch_traits> g_time_code_stopwatch; // "?g_time_code_stopwatch@@3V?$c_stop_watch_template@Vc_game_time_stop_watch_traits@@@@A"
// class c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits> g_time_code_reference_stopwatch; // "?g_time_code_reference_stopwatch@@3V?$c_stop_watch_template@Vc_rasterizer_frame_stop_watch_traits@@@@A"
// class c_stop_watch_template<class c_default_stop_watch_traits> g_time_code_absolute_stopwatch; // "?g_time_code_absolute_stopwatch@@3V?$c_stop_watch_template@Vc_default_stop_watch_traits@@@@A"
// struct s_cinematic_status_line *cinematic_bottom_status_lines; // "?cinematic_bottom_status_lines@@3PAUs_cinematic_status_line@@A"
// struct s_cinematic_status_line *cinematic_top_status_line; // "?cinematic_top_status_line@@3PAUs_cinematic_status_line@@A"
// struct s_cinematic_globals *cinematic_globals; // "?cinematic_globals@@3PAUs_cinematic_globals@@A"
// struct s_cinematic_globals_non_deterministic *cinematic_globals_non_deterministic; // "?cinematic_globals_non_deterministic@@3PAUs_cinematic_globals_non_deterministic@@A"
// struct s_cinematic_new_globals_definition *cinematic_new_globals; // "?cinematic_new_globals@@3PAUs_cinematic_new_globals_definition@@A"
// struct s_cinematic_light_globals *cinematic_light_globals; // "?cinematic_light_globals@@3PAUs_cinematic_light_globals@@A"

// void __tls_set_g_cinematic_globals_allocator(void *);
// void __tls_set_g_cinematic_globals_non_deterministic_allocator(void *);
// void __tls_set_g_cinematic_new_globals_allocator(void *);
// void __tls_set_g_cinematic_light_globals_allocator(void *);
// void cinematic_new_globals_initialize(void);
// void cinematic_initialize(void);
// void cinematic_dispose(void);
// void cinematic_initialize_for_new_map(void);
// void cinematic_dispose_from_old_map(void);
// void cinematic_prepare_for_new_zone_set(unsigned long, unsigned long);
// void cinematic_initialize_for_new_structure_bsp(unsigned long);
// void cinematic_dispose_from_old_structure_bsp(unsigned long);
// void cinematic_attach_resources_to_bsp_zone(long, long, class c_game_system_resource_registrar *);
// void cinematic_prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *);
// void cinematic_initialize_for_new_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *);
// void cinematic_dispose_from_old_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *);
// void cinematic_load_from_game_state(long);
// void cinematic_start(void);
// void cinematic_stop(void);
// void cinematic_game_pause_handler(bool);
// bool cinematic_can_be_skipped(void);
// bool cinematic_skip_ui_get_active(void);
// void cinematic_skip_ui_set_active(bool);
// bool cinematic_suppressing_bsp_object_creation(void);
// void cinematic_skip_start(void);
// void cinematic_skip_stop(void);
// void cinematic_show_letterbox(bool);
// void cinematic_show_letterbox_immediate(bool);
// void cinematic_outro_start(void);
// void cinematic_prefetch_next_level_start(void);
// bool cinematic_should_prefetch_next_level(void);
// void draw_quad(union short_rectangle2d const *, unsigned long);
// void cinematic_set_title(short);
// void cinematic_set_title_delayed(short, float);
// void cinematic_force_title(short);
// void cinematic_set_chud_objective(short);
// void cinematic_set_chud_objective(long, short);
// void cinematic_scripting_suppress_bsp_object_creation(bool);
// void cinematic_create_and_attach_players_weapon(long, long, long);
// void cinematic_move_attached_objects(long, long, long, long);
// void cinematic_debug_camera_control_update(void);
// public: void c_abstract_button::latch(void);
// private: void c_abstract_button::set_latch_bit(bool);
// public: unsigned char c_abstract_button::down_frames(void) const;
// public: bool c_abstract_button::latched(void) const;
// public: float c_abstract_button::down_amount(void);
// public: bool c_abstract_button::access_valid(void) const;
// void predict_shot_dialogue_by_frame(struct s_cinematic_scene *, long, long, long);
// void predict_shot_dialogue(struct s_cinematic_scene *, long, long, class c_tag_resource_collector *);
// float cinematic_get_fade_amount(void);
// void cinematic_update(void);
// void cinematic_get_default_chapter_title_bounds(union short_rectangle2d *);
// void cinematic_render(bool, bool);
// bool cinematic_is_letterbox(void);
// bool cinematic_reverts_when_skipped(void);
// bool cinematic_in_progress(void);
// bool cinematic_skip_in_progress(void);
// long cinematic_get_tag_index(void);
// enum e_cinematic_channel_type cinematic_get_channel_type(void);
// void cinematic_clear_letterbox_bars(bool);
// void scripted_time_code_show(bool);
// void scripted_time_code_start(bool);
// void scripted_time_code_reset(void);
// void subtitle_update(void);
// void subtitle_delete(void);
// float cinematic_get_letterbox_coverage(void);
// void get_cinematic_bounds(union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *);
// void get_cinematic_bounds_screen_space(union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *);
// void subtitle_render(void);
// float subtitle_compute_alpha(struct s_subtitle const *);
// bool subtitle_should_render(void);
// void hs_subtitle(long, float);
// void hs_subtitle(long, float, long);
// void subtitle_add(long, float, long);
// void cinematic_set_post_core_load_transition(long);
// void cinematic_set(long);
// void cinematic_set_shot(long, long);
// void cinematic_get_shot(void);
// long cinematic_get_shot_index(void);
// void cinematic_set_early_exit(long);
// long cinematic_get_early_exit(void);
// long cinematic_object_create(long, long, long, unsigned long);
// void cinematic_object_create_from_cinematic_scene(long);
// long cinematic_object_get_internal(long);
// struct s_cinematic_light_globals * get_cinematic_light_globals(void);
// struct s_cinematic_scene * global_cinematic_scene_try_and_get(void);
// long cinematic_object_try_and_get_by_index(long);
// long cinematic_try_and_find_object_index(long);
// long cinematic_scene_object_try_and_get_by_name(long);
// bool cinematic_object_get_name_from_object_index(long, char *, long);
// void cinematic_object_destroy_internal(long);
// void cinematic_object_destroy(long);
// void cinematic_objects_destroy_all(void);
// long cinematic_tag_reference_get_screen_effect(long, long, long);
// void cinematic_screen_effect_new(long, long, long);
// void cinematic_screen_effect_destroy_internal(long);
// void cinematic_screen_effect_destroy(long, long, long);
// void cinematics_assemble_screen_effects(class c_global_screen_effect_state *);
// long cinematic_tag_reference_get_cinematic(long);
// long cinematic_tag_reference_get_scene(long);
// long cinematic_tag_reference_get_effect(long, long, long, long);
// long cinematic_tag_reference_get_dialogue(long, long, long, long);
// long cinematic_tag_reference_get_music(long, long, long, long);
// long cinematic_tag_reference_get_music_looping(long, long, long, long);
// long cinematic_tag_reference_get_animation(long, long, long);
// long cinematic_tag_reference_get_bink(long);
// void cinematic_destroy(void);
// long cinematic_get_local_player_to_display(void);
// void cinematic_render_prepare_for_window(void);
// void cinematic_clips_initialize_for_shot(long);
// void cinematic_clips_destroy(void);
// struct s_cinematic_clip_global const *const cinematic_get_clip_planes(long *);
// void cinematic_object_create_cinematic_anchor(long);
// void cinematic_reset(void);
// void cinematic_handle_thread_delete(long);
// void cinematics_game_tick(void);
// void cinematic_set_frame_status(long, long, long, long, long);
// void cinematic_print(char const *);
// void cinematic_status_draw(void);
// void cinematics_handle_tag_reload(void);
// long scenario_get_cinematic_index(long, long);
// long cinematic_get_scene_index(long, long);
// long cinematic_get_cinematic_player_index_from_object(long);
// short cinematic_get_descriptor(void);
// void cinematic_try_to_add_facial_animation_tag_resource(class c_tag_resource_collector *, long);
// void cinematic_predict_shot(struct s_cinematic_scene *, long, long, class c_tag_resource_collector *);
// void iterate_future_shots(long, void (*)(struct s_cinematic_scene *, long, long, class c_tag_resource_collector *), class c_tag_resource_collector *);
// void cinematic_demand_important_resources(class c_tag_resource_collector *);
// void cinematic_demand_predicted_resources(class c_tag_resource_collector *);
// bool cinematic_fade_active(void);
// bool cinematic_fade_active_for_user_skip(void);
// void cinematic_fade_out(float, float, float, long);
// void cinematic_fade_in(float, float, float, long);
// void cinematic_start_user_skip_fade_out(void);
// void cinematic_set_debug_mode(bool);
// bool cinematic_get_debug_mode(void);
// long cinematic_find_cinematic_by_name(long);
// void cinematic_run_hs_script_by_name(long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: struct s_cinematic_clip_global * s_static_array<struct s_cinematic_clip_global, 32>::get_elements(void);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long);
// public: __int64 c_stop_watch_template<class c_game_time_stop_watch_traits>::start(void);
// public: __int64 c_stop_watch_template<class c_game_time_stop_watch_traits>::hold(void);
// public: __int64 c_stop_watch_template<class c_game_time_stop_watch_traits>::reset(void);
// public: __int64 c_stop_watch_template<class c_game_time_stop_watch_traits>::stop(void);
// public: bool c_stop_watch_template<class c_game_time_stop_watch_traits>::paused(void) const;
// public: __int64 c_stop_watch_template<class c_game_time_stop_watch_traits>::total_elapsed_time_in_cycles(void) const;
// public: static __int64 c_stop_watch_template<class c_game_time_stop_watch_traits>::cycles_per_second(void);
// public: __int64 c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::start(void);
// public: __int64 c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::hold(void);
// public: __int64 c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::reset(void);
// public: __int64 c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::stop(void);
// public: static float c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::cycles_to_seconds(__int64);
// public: __int64 c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::total_elapsed_time_in_cycles(void) const;
// public: static __int64 c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::cycles_per_second(void);
// public: bool c_static_stack<long, 4>::empty(void) const;
// public: long c_static_stack<long, 4>::count(void) const;
// public: void c_static_stack<long, 4>::push_back(long const &);
// public: long * c_static_stack<long, 4>::get(long);
// public: c_static_stack<long, 4>::c_static_stack<long, 4>(void);
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>::valid(void) const;
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>::valid(void) const;
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>::valid(void) const;
// public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>::valid(void) const;
// public: __int64 c_stop_watch_template<class c_game_time_stop_watch_traits>::get_current_delta(void) const;
// public: __int64 c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::get_current_delta(void) const;
// public: bool c_static_stack<long, 4>::valid(void) const;
// public: bool c_static_stack<long, 4>::valid(long) const;
// public: long c_static_stack<long, 4>::push(void);
// public: bool c_static_stack<long, 4>::full(void) const;
// public: bool c_flags_no_init<enum e_scene_object_attachment_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_scene_object_attachment_flags) const;
// public: bool c_flags_no_init<enum e_cinematic_reference_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_cinematic_reference_flags) const;
// public: void c_static_wchar_string<256>::set(wchar_t const *);
// public: wchar_t const * c_static_wchar_string<256>::get_string(void) const;
// public: wchar_t (& c_static_wchar_string<256>::get_buffer(void))[256];
// public: char const * s_static_string<100>::print(char const *, ...);
// public: char const * s_static_string<100>::append_print(char const *, ...);
// public: char const * s_static_string<100>::get_string(void) const;
// public: char (& s_static_string<1024>::get_buffer(void))[1024];
// public: long c_static_wchar_string<1024>::length(void) const;
// public: wchar_t const * c_static_wchar_string<1024>::operator wchar_t const *(void) const;
// public: wchar_t (& c_static_wchar_string<1024>::get_buffer(void))[1024];
// public: struct s_cinematic_object & s_static_array<struct s_cinematic_object, 200>::operator[]<long>(long);
// public: struct s_cinematic_screen_effect & s_static_array<struct s_cinematic_screen_effect, 5>::operator[]<long>(long);
// public: struct s_cinematic_clip_global & s_static_array<struct s_cinematic_clip_global, 32>::operator[]<long>(long);
// public: long & s_static_array<long, 24>::operator[]<long>(long);
// public: static bool c_flags_no_init<enum e_scene_object_attachment_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_scene_object_attachment_flags);
// private: static unsigned char c_flags_no_init<enum e_scene_object_attachment_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_scene_object_attachment_flags);
// public: static bool c_flags_no_init<enum e_cinematic_reference_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_cinematic_reference_flags);
// private: static unsigned char c_flags_no_init<enum e_cinematic_reference_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_cinematic_reference_flags);
// public: long s_static_string<100>::length(void) const;
// public: static bool s_static_array<struct s_cinematic_object, 200>::valid<long>(long);
// public: static bool s_static_array<struct s_cinematic_screen_effect, 5>::valid<long>(long);
// public: static bool s_static_array<struct s_cinematic_clip_global, 32>::valid<long>(long);
// public: static bool s_static_array<long, 24>::valid<long>(long);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>::free_memory(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>(void);
// public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *);
// public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>::deallocate(void *, char const *, long);
// public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>::free_memory(void);
// public: <unnamed-type-cinematic_static_globals>::<unnamed-type-cinematic_static_globals>(void);
// public: c_hs_compile_dump_cinematic_error_listener::c_hs_compile_dump_cinematic_error_listener(void);
// public: c_hs_compile_error_listener::c_hs_compile_error_listener(void);
// merged_82E18388;
// public: virtual c_hs_compile_error_listener::~c_hs_compile_error_listener(void);
// public: virtual void c_hs_compile_dump_cinematic_error_listener::handle_error(char const *, long, char const *, char const *, class c_wrapped_array<char const> *, char const *);
// merged_82E18550;
// public: virtual c_hs_compile_dump_cinematic_error_listener::~c_hs_compile_dump_cinematic_error_listener(void);
// public: c_stop_watch_template<class c_game_time_stop_watch_traits>::c_stop_watch_template<class c_game_time_stop_watch_traits>(__int64, bool);
// public: c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>(__int64, bool);
// public: c_stop_watch_template<class c_default_stop_watch_traits>::c_stop_watch_template<class c_default_stop_watch_traits>(__int64, bool);
// public: s_cinematic_status_line::s_cinematic_status_line(void);
// public: c_static_string<100>::c_static_string<100>(void);
// public: void s_static_string<100>::clear(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>(void);
// public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>(void);
// public: <unnamed-type-cinematic_static_globals>::~<unnamed-type-cinematic_static_globals>(void);
// void g_cinematic_globals_allocator::`dynamic atexit destructor'(void);
// void g_cinematic_globals_non_deterministic_allocator::`dynamic atexit destructor'(void);
// void g_cinematic_new_globals_allocator::`dynamic atexit destructor'(void);
// void g_cinematic_light_globals_allocator::`dynamic atexit destructor'(void);
// void cinematic_static_globals::`dynamic atexit destructor'(void);

//void __tls_set_g_cinematic_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_cinematic_globals_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_cinematic_globals_non_deterministic_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_cinematic_globals_non_deterministic_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_cinematic_new_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_cinematic_new_globals_allocator@@YAXPAX@Z");
//};

//void __tls_set_g_cinematic_light_globals_allocator(void *)
//{
//    mangled_ppc("?__tls_set_g_cinematic_light_globals_allocator@@YAXPAX@Z");
//};

//void cinematic_new_globals_initialize(void)
//{
//    mangled_ppc("?cinematic_new_globals_initialize@@YAXXZ");
//};

//void cinematic_initialize(void)
//{
//    mangled_ppc("?cinematic_initialize@@YAXXZ");
//};

//void cinematic_dispose(void)
//{
//    mangled_ppc("?cinematic_dispose@@YAXXZ");
//};

//void cinematic_initialize_for_new_map(void)
//{
//    mangled_ppc("?cinematic_initialize_for_new_map@@YAXXZ");
//};

//void cinematic_dispose_from_old_map(void)
//{
//    mangled_ppc("?cinematic_dispose_from_old_map@@YAXXZ");
//};

//void cinematic_prepare_for_new_zone_set(unsigned long, unsigned long)
//{
//    mangled_ppc("?cinematic_prepare_for_new_zone_set@@YAXKK@Z");
//};

//void cinematic_initialize_for_new_structure_bsp(unsigned long)
//{
//    mangled_ppc("?cinematic_initialize_for_new_structure_bsp@@YAXK@Z");
//};

//void cinematic_dispose_from_old_structure_bsp(unsigned long)
//{
//    mangled_ppc("?cinematic_dispose_from_old_structure_bsp@@YAXK@Z");
//};

//void cinematic_attach_resources_to_bsp_zone(long, long, class c_game_system_resource_registrar *)
//{
//    mangled_ppc("?cinematic_attach_resources_to_bsp_zone@@YAXJJPAVc_game_system_resource_registrar@@@Z");
//};

//void cinematic_prepare_for_non_bsp_zone_set_switch(struct s_game_non_bsp_zone_set const *, struct s_game_non_bsp_zone_set const *, class c_scenario_resource_registry *)
//{
//    mangled_ppc("?cinematic_prepare_for_non_bsp_zone_set_switch@@YAXPBUs_game_non_bsp_zone_set@@0PAVc_scenario_resource_registry@@@Z");
//};

//void cinematic_initialize_for_new_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *)
//{
//    mangled_ppc("?cinematic_initialize_for_new_non_bsp_zone_set@@YAXPBUs_game_non_bsp_zone_set@@@Z");
//};

//void cinematic_dispose_from_old_non_bsp_zone_set(struct s_game_non_bsp_zone_set const *)
//{
//    mangled_ppc("?cinematic_dispose_from_old_non_bsp_zone_set@@YAXPBUs_game_non_bsp_zone_set@@@Z");
//};

//void cinematic_load_from_game_state(long)
//{
//    mangled_ppc("?cinematic_load_from_game_state@@YAXJ@Z");
//};

//void cinematic_start(void)
//{
//    mangled_ppc("?cinematic_start@@YAXXZ");
//};

//void cinematic_stop(void)
//{
//    mangled_ppc("?cinematic_stop@@YAXXZ");
//};

//void cinematic_game_pause_handler(bool)
//{
//    mangled_ppc("?cinematic_game_pause_handler@@YAX_N@Z");
//};

//bool cinematic_can_be_skipped(void)
//{
//    mangled_ppc("?cinematic_can_be_skipped@@YA_NXZ");
//};

//bool cinematic_skip_ui_get_active(void)
//{
//    mangled_ppc("?cinematic_skip_ui_get_active@@YA_NXZ");
//};

//void cinematic_skip_ui_set_active(bool)
//{
//    mangled_ppc("?cinematic_skip_ui_set_active@@YAX_N@Z");
//};

//bool cinematic_suppressing_bsp_object_creation(void)
//{
//    mangled_ppc("?cinematic_suppressing_bsp_object_creation@@YA_NXZ");
//};

//void cinematic_skip_start(void)
//{
//    mangled_ppc("?cinematic_skip_start@@YAXXZ");
//};

//void cinematic_skip_stop(void)
//{
//    mangled_ppc("?cinematic_skip_stop@@YAXXZ");
//};

//void cinematic_show_letterbox(bool)
//{
//    mangled_ppc("?cinematic_show_letterbox@@YAX_N@Z");
//};

//void cinematic_show_letterbox_immediate(bool)
//{
//    mangled_ppc("?cinematic_show_letterbox_immediate@@YAX_N@Z");
//};

//void cinematic_outro_start(void)
//{
//    mangled_ppc("?cinematic_outro_start@@YAXXZ");
//};

//void cinematic_prefetch_next_level_start(void)
//{
//    mangled_ppc("?cinematic_prefetch_next_level_start@@YAXXZ");
//};

//bool cinematic_should_prefetch_next_level(void)
//{
//    mangled_ppc("?cinematic_should_prefetch_next_level@@YA_NXZ");
//};

//void draw_quad(union short_rectangle2d const *, unsigned long)
//{
//    mangled_ppc("?draw_quad@@YAXPBTshort_rectangle2d@@K@Z");
//};

//void cinematic_set_title(short)
//{
//    mangled_ppc("?cinematic_set_title@@YAXF@Z");
//};

//void cinematic_set_title_delayed(short, float)
//{
//    mangled_ppc("?cinematic_set_title_delayed@@YAXFM@Z");
//};

//void cinematic_force_title(short)
//{
//    mangled_ppc("?cinematic_force_title@@YAXF@Z");
//};

//void cinematic_set_chud_objective(short)
//{
//    mangled_ppc("?cinematic_set_chud_objective@@YAXF@Z");
//};

//void cinematic_set_chud_objective(long, short)
//{
//    mangled_ppc("?cinematic_set_chud_objective@@YAXJF@Z");
//};

//void cinematic_scripting_suppress_bsp_object_creation(bool)
//{
//    mangled_ppc("?cinematic_scripting_suppress_bsp_object_creation@@YAX_N@Z");
//};

//void cinematic_create_and_attach_players_weapon(long, long, long)
//{
//    mangled_ppc("?cinematic_create_and_attach_players_weapon@@YAXJJJ@Z");
//};

//void cinematic_move_attached_objects(long, long, long, long)
//{
//    mangled_ppc("?cinematic_move_attached_objects@@YAXJJJJ@Z");
//};

//void cinematic_debug_camera_control_update(void)
//{
//    mangled_ppc("?cinematic_debug_camera_control_update@@YAXXZ");
//};

//public: void c_abstract_button::latch(void)
//{
//    mangled_ppc("?latch@c_abstract_button@@QAAXXZ");
//};

//private: void c_abstract_button::set_latch_bit(bool)
//{
//    mangled_ppc("?set_latch_bit@c_abstract_button@@AAAX_N@Z");
//};

//public: unsigned char c_abstract_button::down_frames(void) const
//{
//    mangled_ppc("?down_frames@c_abstract_button@@QBAEXZ");
//};

//public: bool c_abstract_button::latched(void) const
//{
//    mangled_ppc("?latched@c_abstract_button@@QBA_NXZ");
//};

//public: float c_abstract_button::down_amount(void)
//{
//    mangled_ppc("?down_amount@c_abstract_button@@QAAMXZ");
//};

//public: bool c_abstract_button::access_valid(void) const
//{
//    mangled_ppc("?access_valid@c_abstract_button@@QBA_NXZ");
//};

//void predict_shot_dialogue_by_frame(struct s_cinematic_scene *, long, long, long)
//{
//    mangled_ppc("?predict_shot_dialogue_by_frame@@YAXPAUs_cinematic_scene@@JJJ@Z");
//};

//void predict_shot_dialogue(struct s_cinematic_scene *, long, long, class c_tag_resource_collector *)
//{
//    mangled_ppc("?predict_shot_dialogue@@YAXPAUs_cinematic_scene@@JJPAVc_tag_resource_collector@@@Z");
//};

//float cinematic_get_fade_amount(void)
//{
//    mangled_ppc("?cinematic_get_fade_amount@@YAMXZ");
//};

//void cinematic_update(void)
//{
//    mangled_ppc("?cinematic_update@@YAXXZ");
//};

//void cinematic_get_default_chapter_title_bounds(union short_rectangle2d *)
//{
//    mangled_ppc("?cinematic_get_default_chapter_title_bounds@@YAXPATshort_rectangle2d@@@Z");
//};

//void cinematic_render(bool, bool)
//{
//    mangled_ppc("?cinematic_render@@YAX_N0@Z");
//};

//bool cinematic_is_letterbox(void)
//{
//    mangled_ppc("?cinematic_is_letterbox@@YA_NXZ");
//};

//bool cinematic_reverts_when_skipped(void)
//{
//    mangled_ppc("?cinematic_reverts_when_skipped@@YA_NXZ");
//};

//bool cinematic_in_progress(void)
//{
//    mangled_ppc("?cinematic_in_progress@@YA_NXZ");
//};

//bool cinematic_skip_in_progress(void)
//{
//    mangled_ppc("?cinematic_skip_in_progress@@YA_NXZ");
//};

//long cinematic_get_tag_index(void)
//{
//    mangled_ppc("?cinematic_get_tag_index@@YAJXZ");
//};

//enum e_cinematic_channel_type cinematic_get_channel_type(void)
//{
//    mangled_ppc("?cinematic_get_channel_type@@YA?AW4e_cinematic_channel_type@@XZ");
//};

//void cinematic_clear_letterbox_bars(bool)
//{
//    mangled_ppc("?cinematic_clear_letterbox_bars@@YAX_N@Z");
//};

//void scripted_time_code_show(bool)
//{
//    mangled_ppc("?scripted_time_code_show@@YAX_N@Z");
//};

//void scripted_time_code_start(bool)
//{
//    mangled_ppc("?scripted_time_code_start@@YAX_N@Z");
//};

//void scripted_time_code_reset(void)
//{
//    mangled_ppc("?scripted_time_code_reset@@YAXXZ");
//};

//void subtitle_update(void)
//{
//    mangled_ppc("?subtitle_update@@YAXXZ");
//};

//void subtitle_delete(void)
//{
//    mangled_ppc("?subtitle_delete@@YAXXZ");
//};

//float cinematic_get_letterbox_coverage(void)
//{
//    mangled_ppc("?cinematic_get_letterbox_coverage@@YAMXZ");
//};

//void get_cinematic_bounds(union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *)
//{
//    mangled_ppc("?get_cinematic_bounds@@YAXPATshort_rectangle2d@@00@Z");
//};

//void get_cinematic_bounds_screen_space(union short_rectangle2d *, union short_rectangle2d *, union short_rectangle2d *)
//{
//    mangled_ppc("?get_cinematic_bounds_screen_space@@YAXPATshort_rectangle2d@@00@Z");
//};

//void subtitle_render(void)
//{
//    mangled_ppc("?subtitle_render@@YAXXZ");
//};

//float subtitle_compute_alpha(struct s_subtitle const *)
//{
//    mangled_ppc("?subtitle_compute_alpha@@YAMPBUs_subtitle@@@Z");
//};

//bool subtitle_should_render(void)
//{
//    mangled_ppc("?subtitle_should_render@@YA_NXZ");
//};

//void hs_subtitle(long, float)
//{
//    mangled_ppc("?hs_subtitle@@YAXJM@Z");
//};

//void hs_subtitle(long, float, long)
//{
//    mangled_ppc("?hs_subtitle@@YAXJMJ@Z");
//};

//void subtitle_add(long, float, long)
//{
//    mangled_ppc("?subtitle_add@@YAXJMJ@Z");
//};

//void cinematic_set_post_core_load_transition(long)
//{
//    mangled_ppc("?cinematic_set_post_core_load_transition@@YAXJ@Z");
//};

//void cinematic_set(long)
//{
//    mangled_ppc("?cinematic_set@@YAXJ@Z");
//};

//void cinematic_set_shot(long, long)
//{
//    mangled_ppc("?cinematic_set_shot@@YAXJJ@Z");
//};

//void cinematic_get_shot(void)
//{
//    mangled_ppc("?cinematic_get_shot@@YAXXZ");
//};

//long cinematic_get_shot_index(void)
//{
//    mangled_ppc("?cinematic_get_shot_index@@YAJXZ");
//};

//void cinematic_set_early_exit(long)
//{
//    mangled_ppc("?cinematic_set_early_exit@@YAXJ@Z");
//};

//long cinematic_get_early_exit(void)
//{
//    mangled_ppc("?cinematic_get_early_exit@@YAJXZ");
//};

//long cinematic_object_create(long, long, long, unsigned long)
//{
//    mangled_ppc("?cinematic_object_create@@YAJJJJK@Z");
//};

//void cinematic_object_create_from_cinematic_scene(long)
//{
//    mangled_ppc("?cinematic_object_create_from_cinematic_scene@@YAXJ@Z");
//};

//long cinematic_object_get_internal(long)
//{
//    mangled_ppc("?cinematic_object_get_internal@@YAJJ@Z");
//};

//struct s_cinematic_light_globals * get_cinematic_light_globals(void)
//{
//    mangled_ppc("?get_cinematic_light_globals@@YAPAUs_cinematic_light_globals@@XZ");
//};

//struct s_cinematic_scene * global_cinematic_scene_try_and_get(void)
//{
//    mangled_ppc("?global_cinematic_scene_try_and_get@@YAPAUs_cinematic_scene@@XZ");
//};

//long cinematic_object_try_and_get_by_index(long)
//{
//    mangled_ppc("?cinematic_object_try_and_get_by_index@@YAJJ@Z");
//};

//long cinematic_try_and_find_object_index(long)
//{
//    mangled_ppc("?cinematic_try_and_find_object_index@@YAJJ@Z");
//};

//long cinematic_scene_object_try_and_get_by_name(long)
//{
//    mangled_ppc("?cinematic_scene_object_try_and_get_by_name@@YAJJ@Z");
//};

//bool cinematic_object_get_name_from_object_index(long, char *, long)
//{
//    mangled_ppc("?cinematic_object_get_name_from_object_index@@YA_NJPADJ@Z");
//};

//void cinematic_object_destroy_internal(long)
//{
//    mangled_ppc("?cinematic_object_destroy_internal@@YAXJ@Z");
//};

//void cinematic_object_destroy(long)
//{
//    mangled_ppc("?cinematic_object_destroy@@YAXJ@Z");
//};

//void cinematic_objects_destroy_all(void)
//{
//    mangled_ppc("?cinematic_objects_destroy_all@@YAXXZ");
//};

//long cinematic_tag_reference_get_screen_effect(long, long, long)
//{
//    mangled_ppc("?cinematic_tag_reference_get_screen_effect@@YAJJJJ@Z");
//};

//void cinematic_screen_effect_new(long, long, long)
//{
//    mangled_ppc("?cinematic_screen_effect_new@@YAXJJJ@Z");
//};

//void cinematic_screen_effect_destroy_internal(long)
//{
//    mangled_ppc("?cinematic_screen_effect_destroy_internal@@YAXJ@Z");
//};

//void cinematic_screen_effect_destroy(long, long, long)
//{
//    mangled_ppc("?cinematic_screen_effect_destroy@@YAXJJJ@Z");
//};

//void cinematics_assemble_screen_effects(class c_global_screen_effect_state *)
//{
//    mangled_ppc("?cinematics_assemble_screen_effects@@YAXPAVc_global_screen_effect_state@@@Z");
//};

//long cinematic_tag_reference_get_cinematic(long)
//{
//    mangled_ppc("?cinematic_tag_reference_get_cinematic@@YAJJ@Z");
//};

//long cinematic_tag_reference_get_scene(long)
//{
//    mangled_ppc("?cinematic_tag_reference_get_scene@@YAJJ@Z");
//};

//long cinematic_tag_reference_get_effect(long, long, long, long)
//{
//    mangled_ppc("?cinematic_tag_reference_get_effect@@YAJJJJJ@Z");
//};

//long cinematic_tag_reference_get_dialogue(long, long, long, long)
//{
//    mangled_ppc("?cinematic_tag_reference_get_dialogue@@YAJJJJJ@Z");
//};

//long cinematic_tag_reference_get_music(long, long, long, long)
//{
//    mangled_ppc("?cinematic_tag_reference_get_music@@YAJJJJJ@Z");
//};

//long cinematic_tag_reference_get_music_looping(long, long, long, long)
//{
//    mangled_ppc("?cinematic_tag_reference_get_music_looping@@YAJJJJJ@Z");
//};

//long cinematic_tag_reference_get_animation(long, long, long)
//{
//    mangled_ppc("?cinematic_tag_reference_get_animation@@YAJJJJ@Z");
//};

//long cinematic_tag_reference_get_bink(long)
//{
//    mangled_ppc("?cinematic_tag_reference_get_bink@@YAJJ@Z");
//};

//void cinematic_destroy(void)
//{
//    mangled_ppc("?cinematic_destroy@@YAXXZ");
//};

//long cinematic_get_local_player_to_display(void)
//{
//    mangled_ppc("?cinematic_get_local_player_to_display@@YAJXZ");
//};

//void cinematic_render_prepare_for_window(void)
//{
//    mangled_ppc("?cinematic_render_prepare_for_window@@YAXXZ");
//};

//void cinematic_clips_initialize_for_shot(long)
//{
//    mangled_ppc("?cinematic_clips_initialize_for_shot@@YAXJ@Z");
//};

//void cinematic_clips_destroy(void)
//{
//    mangled_ppc("?cinematic_clips_destroy@@YAXXZ");
//};

//struct s_cinematic_clip_global const *const cinematic_get_clip_planes(long *)
//{
//    mangled_ppc("?cinematic_get_clip_planes@@YAQBUs_cinematic_clip_global@@PAJ@Z");
//};

//void cinematic_object_create_cinematic_anchor(long)
//{
//    mangled_ppc("?cinematic_object_create_cinematic_anchor@@YAXJ@Z");
//};

//void cinematic_reset(void)
//{
//    mangled_ppc("?cinematic_reset@@YAXXZ");
//};

//void cinematic_handle_thread_delete(long)
//{
//    mangled_ppc("?cinematic_handle_thread_delete@@YAXJ@Z");
//};

//void cinematics_game_tick(void)
//{
//    mangled_ppc("?cinematics_game_tick@@YAXXZ");
//};

//void cinematic_set_frame_status(long, long, long, long, long)
//{
//    mangled_ppc("?cinematic_set_frame_status@@YAXJJJJJ@Z");
//};

//void cinematic_print(char const *)
//{
//    mangled_ppc("?cinematic_print@@YAXPBD@Z");
//};

//void cinematic_status_draw(void)
//{
//    mangled_ppc("?cinematic_status_draw@@YAXXZ");
//};

//void cinematics_handle_tag_reload(void)
//{
//    mangled_ppc("?cinematics_handle_tag_reload@@YAXXZ");
//};

//long scenario_get_cinematic_index(long, long)
//{
//    mangled_ppc("?scenario_get_cinematic_index@@YAJJJ@Z");
//};

//long cinematic_get_scene_index(long, long)
//{
//    mangled_ppc("?cinematic_get_scene_index@@YAJJJ@Z");
//};

//long cinematic_get_cinematic_player_index_from_object(long)
//{
//    mangled_ppc("?cinematic_get_cinematic_player_index_from_object@@YAJJ@Z");
//};

//short cinematic_get_descriptor(void)
//{
//    mangled_ppc("?cinematic_get_descriptor@@YAFXZ");
//};

//void cinematic_try_to_add_facial_animation_tag_resource(class c_tag_resource_collector *, long)
//{
//    mangled_ppc("?cinematic_try_to_add_facial_animation_tag_resource@@YAXPAVc_tag_resource_collector@@J@Z");
//};

//void cinematic_predict_shot(struct s_cinematic_scene *, long, long, class c_tag_resource_collector *)
//{
//    mangled_ppc("?cinematic_predict_shot@@YAXPAUs_cinematic_scene@@JJPAVc_tag_resource_collector@@@Z");
//};

//void iterate_future_shots(long, void (*)(struct s_cinematic_scene *, long, long, class c_tag_resource_collector *), class c_tag_resource_collector *)
//{
//    mangled_ppc("?iterate_future_shots@@YAXJP6AXPAUs_cinematic_scene@@JJPAVc_tag_resource_collector@@@Z1@Z");
//};

//void cinematic_demand_important_resources(class c_tag_resource_collector *)
//{
//    mangled_ppc("?cinematic_demand_important_resources@@YAXPAVc_tag_resource_collector@@@Z");
//};

//void cinematic_demand_predicted_resources(class c_tag_resource_collector *)
//{
//    mangled_ppc("?cinematic_demand_predicted_resources@@YAXPAVc_tag_resource_collector@@@Z");
//};

//bool cinematic_fade_active(void)
//{
//    mangled_ppc("?cinematic_fade_active@@YA_NXZ");
//};

//bool cinematic_fade_active_for_user_skip(void)
//{
//    mangled_ppc("?cinematic_fade_active_for_user_skip@@YA_NXZ");
//};

//void cinematic_fade_out(float, float, float, long)
//{
//    mangled_ppc("?cinematic_fade_out@@YAXMMMJ@Z");
//};

//void cinematic_fade_in(float, float, float, long)
//{
//    mangled_ppc("?cinematic_fade_in@@YAXMMMJ@Z");
//};

//void cinematic_start_user_skip_fade_out(void)
//{
//    mangled_ppc("?cinematic_start_user_skip_fade_out@@YAXXZ");
//};

//void cinematic_set_debug_mode(bool)
//{
//    mangled_ppc("?cinematic_set_debug_mode@@YAX_N@Z");
//};

//bool cinematic_get_debug_mode(void)
//{
//    mangled_ppc("?cinematic_get_debug_mode@@YA_NXZ");
//};

//long cinematic_find_cinematic_by_name(long)
//{
//    mangled_ppc("?cinematic_find_cinematic_by_name@@YAJJ@Z");
//};

//void cinematic_run_hs_script_by_name(long)
//{
//    mangled_ppc("?cinematic_run_hs_script_by_name@@YAXJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_non_deterministic_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: struct s_cinematic_clip_global * s_static_array<struct s_cinematic_clip_global, 32>::get_elements(void)
//{
//    mangled_ppc("?get_elements@?$s_static_array@Us_cinematic_clip_global@@$0CA@@@QAAPAUs_cinematic_clip_global@@XZ");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_new_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>::reserve_memory(char const *, char const *, unsigned int, long)
//{
//    mangled_ppc("?reserve_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_light_globals_allocator@@YAXPAX@Z@@QAAPAXPBD0IJ@Z");
//};

//public: __int64 c_stop_watch_template<class c_game_time_stop_watch_traits>::start(void)
//{
//    mangled_ppc("?start@?$c_stop_watch_template@Vc_game_time_stop_watch_traits@@@@QAA_JXZ");
//};

//public: __int64 c_stop_watch_template<class c_game_time_stop_watch_traits>::hold(void)
//{
//    mangled_ppc("?hold@?$c_stop_watch_template@Vc_game_time_stop_watch_traits@@@@QAA_JXZ");
//};

//public: __int64 c_stop_watch_template<class c_game_time_stop_watch_traits>::reset(void)
//{
//    mangled_ppc("?reset@?$c_stop_watch_template@Vc_game_time_stop_watch_traits@@@@QAA_JXZ");
//};

//public: __int64 c_stop_watch_template<class c_game_time_stop_watch_traits>::stop(void)
//{
//    mangled_ppc("?stop@?$c_stop_watch_template@Vc_game_time_stop_watch_traits@@@@QAA_JXZ");
//};

//public: bool c_stop_watch_template<class c_game_time_stop_watch_traits>::paused(void) const
//{
//    mangled_ppc("?paused@?$c_stop_watch_template@Vc_game_time_stop_watch_traits@@@@QBA_NXZ");
//};

//public: __int64 c_stop_watch_template<class c_game_time_stop_watch_traits>::total_elapsed_time_in_cycles(void) const
//{
//    mangled_ppc("?total_elapsed_time_in_cycles@?$c_stop_watch_template@Vc_game_time_stop_watch_traits@@@@QBA_JXZ");
//};

//public: static __int64 c_stop_watch_template<class c_game_time_stop_watch_traits>::cycles_per_second(void)
//{
//    mangled_ppc("?cycles_per_second@?$c_stop_watch_template@Vc_game_time_stop_watch_traits@@@@SA_JXZ");
//};

//public: __int64 c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::start(void)
//{
//    mangled_ppc("?start@?$c_stop_watch_template@Vc_rasterizer_frame_stop_watch_traits@@@@QAA_JXZ");
//};

//public: __int64 c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::hold(void)
//{
//    mangled_ppc("?hold@?$c_stop_watch_template@Vc_rasterizer_frame_stop_watch_traits@@@@QAA_JXZ");
//};

//public: __int64 c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::reset(void)
//{
//    mangled_ppc("?reset@?$c_stop_watch_template@Vc_rasterizer_frame_stop_watch_traits@@@@QAA_JXZ");
//};

//public: __int64 c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::stop(void)
//{
//    mangled_ppc("?stop@?$c_stop_watch_template@Vc_rasterizer_frame_stop_watch_traits@@@@QAA_JXZ");
//};

//public: static float c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::cycles_to_seconds(__int64)
//{
//    mangled_ppc("?cycles_to_seconds@?$c_stop_watch_template@Vc_rasterizer_frame_stop_watch_traits@@@@SAM_J@Z");
//};

//public: __int64 c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::total_elapsed_time_in_cycles(void) const
//{
//    mangled_ppc("?total_elapsed_time_in_cycles@?$c_stop_watch_template@Vc_rasterizer_frame_stop_watch_traits@@@@QBA_JXZ");
//};

//public: static __int64 c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::cycles_per_second(void)
//{
//    mangled_ppc("?cycles_per_second@?$c_stop_watch_template@Vc_rasterizer_frame_stop_watch_traits@@@@SA_JXZ");
//};

//public: bool c_static_stack<long, 4>::empty(void) const
//{
//    mangled_ppc("?empty@?$c_static_stack@J$03@@QBA_NXZ");
//};

//public: long c_static_stack<long, 4>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@J$03@@QBAJXZ");
//};

//public: void c_static_stack<long, 4>::push_back(long const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@J$03@@QAAXABJ@Z");
//};

//public: long * c_static_stack<long, 4>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@J$03@@QAAPAJJ@Z");
//};

//public: c_static_stack<long, 4>::c_static_stack<long, 4>(void)
//{
//    mangled_ppc("??0?$c_static_stack@J$03@@QAA@XZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_non_deterministic_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_new_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: bool t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>::valid(void) const
//{
//    mangled_ppc("?valid@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_light_globals_allocator@@YAXPAX@Z@@QBA_NXZ");
//};

//public: __int64 c_stop_watch_template<class c_game_time_stop_watch_traits>::get_current_delta(void) const
//{
//    mangled_ppc("?get_current_delta@?$c_stop_watch_template@Vc_game_time_stop_watch_traits@@@@QBA_JXZ");
//};

//public: __int64 c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::get_current_delta(void) const
//{
//    mangled_ppc("?get_current_delta@?$c_stop_watch_template@Vc_rasterizer_frame_stop_watch_traits@@@@QBA_JXZ");
//};

//public: bool c_static_stack<long, 4>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$03@@QBA_NXZ");
//};

//public: bool c_static_stack<long, 4>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@J$03@@QBA_NJ@Z");
//};

//public: long c_static_stack<long, 4>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@J$03@@QAAJXZ");
//};

//public: bool c_static_stack<long, 4>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@J$03@@QBA_NXZ");
//};

//public: bool c_flags_no_init<enum e_scene_object_attachment_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_scene_object_attachment_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_scene_object_attachment_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_scene_object_attachment_flags@@@Z");
//};

//public: bool c_flags_no_init<enum e_cinematic_reference_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum e_cinematic_reference_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_cinematic_reference_flags@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_cinematic_reference_flags@@@Z");
//};

//public: void c_static_wchar_string<256>::set(wchar_t const *)
//{
//    mangled_ppc("?set@?$c_static_wchar_string@$0BAA@@@QAAXPB_W@Z");
//};

//public: wchar_t const * c_static_wchar_string<256>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$c_static_wchar_string@$0BAA@@@QBAPB_WXZ");
//};

//public: wchar_t (& c_static_wchar_string<256>::get_buffer(void))[256]
//{
//    mangled_ppc("?get_buffer@?$c_static_wchar_string@$0BAA@@@QAAAAY0BAA@_WXZ");
//};

//public: char const * s_static_string<100>::print(char const *, ...)
//{
//    mangled_ppc("?print@?$s_static_string@$0GE@@@QAAPBDPBDZZ");
//};

//public: char const * s_static_string<100>::append_print(char const *, ...)
//{
//    mangled_ppc("?append_print@?$s_static_string@$0GE@@@QAAPBDPBDZZ");
//};

//public: char const * s_static_string<100>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$s_static_string@$0GE@@@QBAPBDXZ");
//};

//public: char (& s_static_string<1024>::get_buffer(void))[1024]
//{
//    mangled_ppc("?get_buffer@?$s_static_string@$0EAA@@@QAAAAY0EAA@DXZ");
//};

//public: long c_static_wchar_string<1024>::length(void) const
//{
//    mangled_ppc("?length@?$c_static_wchar_string@$0EAA@@@QBAJXZ");
//};

//public: wchar_t const * c_static_wchar_string<1024>::operator wchar_t const *(void) const
//{
//    mangled_ppc("??B?$c_static_wchar_string@$0EAA@@@QBAPB_WXZ");
//};

//public: wchar_t (& c_static_wchar_string<1024>::get_buffer(void))[1024]
//{
//    mangled_ppc("?get_buffer@?$c_static_wchar_string@$0EAA@@@QAAAAY0EAA@_WXZ");
//};

//public: struct s_cinematic_object & s_static_array<struct s_cinematic_object, 200>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_cinematic_object@@$0MI@@@QAAAAUs_cinematic_object@@J@Z");
//};

//public: struct s_cinematic_screen_effect & s_static_array<struct s_cinematic_screen_effect, 5>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_cinematic_screen_effect@@$04@@QAAAAUs_cinematic_screen_effect@@J@Z");
//};

//public: struct s_cinematic_clip_global & s_static_array<struct s_cinematic_clip_global, 32>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_cinematic_clip_global@@$0CA@@@QAAAAUs_cinematic_clip_global@@J@Z");
//};

//public: long & s_static_array<long, 24>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@J$0BI@@@QAAAAJJ@Z");
//};

//public: static bool c_flags_no_init<enum e_scene_object_attachment_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_scene_object_attachment_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_scene_object_attachment_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_scene_object_attachment_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_scene_object_attachment_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_scene_object_attachment_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_scene_object_attachment_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_scene_object_attachment_flags@@@Z");
//};

//public: static bool c_flags_no_init<enum e_cinematic_reference_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum e_cinematic_reference_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_cinematic_reference_flags@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_cinematic_reference_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_cinematic_reference_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum e_cinematic_reference_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_cinematic_reference_flags@@E$00Us_default_enum_string_resolver@@@@CAEW4e_cinematic_reference_flags@@@Z");
//};

//public: long s_static_string<100>::length(void) const
//{
//    mangled_ppc("?length@?$s_static_string@$0GE@@@QBAJXZ");
//};

//public: static bool s_static_array<struct s_cinematic_object, 200>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_cinematic_object@@$0MI@@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_cinematic_screen_effect, 5>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_cinematic_screen_effect@@$04@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct s_cinematic_clip_global, 32>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_cinematic_clip_global@@$0CA@@@SA_NJ@Z");
//};

//public: static bool s_static_array<long, 24>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@J$0BI@@@SA_NJ@Z");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_non_deterministic_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_non_deterministic_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_non_deterministic_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_non_deterministic_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_new_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_new_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_new_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_new_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>::t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??0?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_light_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: virtual void * t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>::allocate(unsigned int, char const *, long, char const *, char const *, char const *)
//{
//    mangled_ppc("?allocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_light_globals_allocator@@YAXPAX@Z@@UAAPAXIPBDJ000@Z");
//};

//public: virtual void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>::deallocate(void *, char const *, long)
//{
//    mangled_ppc("?deallocate@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_light_globals_allocator@@YAXPAX@Z@@UAAXPAXPBDJ@Z");
//};

//public: void t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>::free_memory(void)
//{
//    mangled_ppc("?free_memory@?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_light_globals_allocator@@YAXPAX@Z@@QAAXXZ");
//};

//public: <unnamed-type-cinematic_static_globals>::<unnamed-type-cinematic_static_globals>(void)
//{
//    mangled_ppc("??0<unnamed-type-cinematic_static_globals>@@QAA@XZ");
//};

//public: c_hs_compile_dump_cinematic_error_listener::c_hs_compile_dump_cinematic_error_listener(void)
//{
//    mangled_ppc("??0c_hs_compile_dump_cinematic_error_listener@@QAA@XZ");
//};

//public: c_hs_compile_error_listener::c_hs_compile_error_listener(void)
//{
//    mangled_ppc("??0c_hs_compile_error_listener@@QAA@XZ");
//};

//merged_82E18388
//{
//    mangled_ppc("merged_82E18388");
//};

//public: virtual c_hs_compile_error_listener::~c_hs_compile_error_listener(void)
//{
//    mangled_ppc("??1c_hs_compile_error_listener@@UAA@XZ");
//};

//public: virtual void c_hs_compile_dump_cinematic_error_listener::handle_error(char const *, long, char const *, char const *, class c_wrapped_array<char const> *, char const *)
//{
//    mangled_ppc("?handle_error@c_hs_compile_dump_cinematic_error_listener@@UAAXPBDJ00PAV?$c_wrapped_array@$$CBD@@0@Z");
//};

//merged_82E18550
//{
//    mangled_ppc("merged_82E18550");
//};

//public: virtual c_hs_compile_dump_cinematic_error_listener::~c_hs_compile_dump_cinematic_error_listener(void)
//{
//    mangled_ppc("??1c_hs_compile_dump_cinematic_error_listener@@UAA@XZ");
//};

//public: c_stop_watch_template<class c_game_time_stop_watch_traits>::c_stop_watch_template<class c_game_time_stop_watch_traits>(__int64, bool)
//{
//    mangled_ppc("??0?$c_stop_watch_template@Vc_game_time_stop_watch_traits@@@@QAA@_J_N@Z");
//};

//public: c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>::c_stop_watch_template<class c_rasterizer_frame_stop_watch_traits>(__int64, bool)
//{
//    mangled_ppc("??0?$c_stop_watch_template@Vc_rasterizer_frame_stop_watch_traits@@@@QAA@_J_N@Z");
//};

//public: c_stop_watch_template<class c_default_stop_watch_traits>::c_stop_watch_template<class c_default_stop_watch_traits>(__int64, bool)
//{
//    mangled_ppc("??0?$c_stop_watch_template@Vc_default_stop_watch_traits@@@@QAA@_J_N@Z");
//};

//public: s_cinematic_status_line::s_cinematic_status_line(void)
//{
//    mangled_ppc("??0s_cinematic_status_line@@QAA@XZ");
//};

//public: c_static_string<100>::c_static_string<100>(void)
//{
//    mangled_ppc("??0?$c_static_string@$0GE@@@QAA@XZ");
//};

//public: void s_static_string<100>::clear(void)
//{
//    mangled_ppc("?clear@?$s_static_string@$0GE@@@QAAXXZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_globals_non_deterministic_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_globals_non_deterministic_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_new_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_new_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>::~t_restricted_allocation_manager<4, 0, 0, void (__tls_set_g_cinematic_light_globals_allocator::*)(void *)>(void)
//{
//    mangled_ppc("??1?$t_restricted_allocation_manager@$03$0A@$0A@$1?__tls_set_g_cinematic_light_globals_allocator@@YAXPAX@Z@@QAA@XZ");
//};

//public: <unnamed-type-cinematic_static_globals>::~<unnamed-type-cinematic_static_globals>(void)
//{
//    mangled_ppc("??1<unnamed-type-cinematic_static_globals>@@QAA@XZ");
//};

//void g_cinematic_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_cinematic_globals_allocator@@YAXXZ");
//};

//void g_cinematic_globals_non_deterministic_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_cinematic_globals_non_deterministic_allocator@@YAXXZ");
//};

//void g_cinematic_new_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_cinematic_new_globals_allocator@@YAXXZ");
//};

//void g_cinematic_light_globals_allocator::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_cinematic_light_globals_allocator@@YAXXZ");
//};

//void cinematic_static_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fcinematic_static_globals@@YAXXZ");
//};

