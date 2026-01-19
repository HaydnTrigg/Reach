/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const c_forge_pipe::k_max_stack_count; // "?k_max_stack_count@c_forge_pipe@@2JB"
// public: static long const s_static_array<struct c_forge_pipe::s_forge_history_object_stack_node, 3>::k_element_count; // "?k_element_count@?$s_static_array@Us_forge_history_object_stack_node@c_forge_pipe@@$02@@2JB"
// enum e_alpha_configuration_ui_level g_user_interface_alpha_locked_down_state; // "?g_user_interface_alpha_locked_down_state@@3W4e_alpha_configuration_ui_level@@A"
// bool g_eula_accepted; // "?g_eula_accepted@@3_NA"
// long g_user_interface_alpha_custom_games_enabled; // "?g_user_interface_alpha_custom_games_enabled@@3JA"
// float g_ui_time_scale; // "?g_ui_time_scale@@3MA"
// long g_fake_precache_percentage; // "?g_fake_precache_percentage@@3JA"
// long g_gui_network_force_error_index; // "?g_gui_network_force_error_index@@3JA"
// long g_gui_network_force_warning_index; // "?g_gui_network_force_warning_index@@3JA"
// bool g_user_interface_is_alpha; // "?g_user_interface_is_alpha@@3_NA"
// bool g_gui_debug_text_bounds; // "?g_gui_debug_text_bounds@@3_NA"
// bool g_gui_debug_bitmap_bounds; // "?g_gui_debug_bitmap_bounds@@3_NA"
// bool g_gui_debug_model_bounds; // "?g_gui_debug_model_bounds@@3_NA"
// float g_ui_time_step; // "?g_ui_time_step@@3MA"
// bool g_gui_debug_list_item_bounds; // "?g_gui_debug_list_item_bounds@@3_NA"
// bool g_gui_debug_list_bounds; // "?g_gui_debug_list_bounds@@3_NA"
// bool g_gui_debug_group_bounds; // "?g_gui_debug_group_bounds@@3_NA"
// bool g_gui_debug_screen_bounds; // "?g_gui_debug_screen_bounds@@3_NA"

// void user_interface_initialize(void);
// public: s_content_cross_title_enumeration_result::s_content_cross_title_enumeration_result(void);
// void user_interface_dispose(void);
// void user_interface_initialize_for_new_map(void);
// void user_interface_dispose_from_old_map(void);
// void input_disable_claw_button_combos(bool);
// void user_interface_time_step(float);
// void user_interface_update_toast_position(void);
// void user_interface_update(float);
// public: class c_synchronized_int32& c_synchronized_int32::operator+=(long);
// public: long D3DDevice::Resume(void);
// void user_interface_render_begin(enum e_surface);
// void user_interface_render_end(void);
// void user_interface_render(enum e_controller_index, enum e_output_user_index, enum e_window_index, union short_rectangle2d const *, long, bool);
// void user_interface_render_quad_in_window(union short_rectangle2d const *, unsigned long);
// void user_interface_render_quad_in_viewport(union short_rectangle2d const *, unsigned long);
// bool user_interface_non_dead_cam_active_for_game_player_controller(enum e_controller_index);
// bool user_interface_requests_unlocked_framerate(void);
// void user_interface_get_projection_plane_distances(float *, float *, float *);
// struct s_user_interface_tag_globals const * user_interface_tag_globals_try_and_get(void);
// struct s_user_interface_shared_globals const * user_interface_shared_tag_globals_try_and_get(void);
// void user_interface_enter_game_shell(void);
// void user_interface_set_selected_campaign_id(enum e_campaign_id);
// void user_interface_set_selected_campaign_map_id(enum e_map_id);
// void user_interface_set_selected_campaign_difficulty(long);
// void user_interface_set_reload_from_persistent_storage(enum e_controller_index);
// enum e_campaign_id user_interface_get_selected_campaign_id(void);
// enum e_map_id user_interface_get_selected_campaign_map_id(void);
// long user_interface_get_selected_campaign_difficulty(void);
// enum e_controller_index user_interface_get_reload_from_persistent_storage(void);
// char * user_interface_get_selected_campaign_path(char *, long);
// void debug_enable_text_bounds(bool);
// void debug_render_title_safe_bounds(bool);
// void set_debug_frame_element_bounds(bool);
// bool get_debug_frame_element_bounds(void);
// bool get_is_alpha_version(void);
// bool get_alpha_is_locked_down(void);
// bool get_alpha_is_external_beta(void);
// bool get_alpha_is_internal_beta(void);
// bool get_alpha_eula_accepted(void);
// bool get_alpha_custom_games_disabled(void);
// bool can_use_claws(void);
// enum e_alpha_configuration_ui_level get_alpha_locked_down_state(void);
// void user_interface_prepare_for_tag_reload(void);
// void user_interface_recover_from_tag_load(void);
// unsigned long user_interface_milliseconds(void);
// unsigned long user_interface_milliseconds_at_last_event(void);
// void user_interface_non_idle_event_occured(void);
// void user_interface_process_magic_key_combos(void);
// long controller_mask_from_controller(enum e_controller_index);
// long user_interface_get_main_menu_music_fade_time_milliseconds(void);
// void user_interface_music_manager_toggle_debug_render_music_state(bool);
// public: void c_user_interface_main_menu_music::set_render_debug_enabled(bool);
// void user_interface_main_menu_music_initialize_for_saved_game(long);
// bool user_interface_should_render_fancy(void);
// void user_interface_set_bad_download_flag(bool);
// bool user_interface_get_bad_download_flag(void);
// bool user_interface_should_render_at_origin(void);
// unsigned __int64 user_interface_get_player_hash_bits(enum e_controller_index, long);
// void user_interface_get_number_of_render_windows(enum e_output_user_index, long *, long *);
// void user_interface_set_storage_device_selection_deferred(bool);
// bool user_interface_get_storage_device_selection_deferred(void);
// void user_interface_shut_down(void);
// void user_interface_launch_cross_title_image(struct s_content_cross_title_enumeration_result const &);
// bool user_interface_is_shutting_down(void);
// void user_interface_scoreboard_update(void);
// bool user_interface_should_show_console_scoreboard(enum e_user_interface_show_busy_state *);
// void user_interface_update_console_scoreboard(void);
// void user_interface_show_campaign_custom_music_warning_if_needed(bool *);
// long user_interface_find_pgcr_incident(long);
// struct s_cui_pgcr_incident const * user_interface_get_pgcr_incident(long);
// bool operator!=<enum e_alpha_configuration_ui_level>(enum e_alpha_configuration_ui_level const &, enum e_none_sentinel const &);
// public: bool c_flags_no_init<enum e_restricted_activity, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_restricted_activity) const;
// bool operator==<enum e_alpha_configuration_ui_level>(enum e_alpha_configuration_ui_level const &, enum e_none_sentinel const &);
// public: s_user_interface_globals::s_user_interface_globals(void);
// public: s_user_interface_globals::~s_user_interface_globals(void);
// void g_user_interface_globals::`dynamic atexit destructor'(void);

//void user_interface_initialize(void)
//{
//    mangled_ppc("?user_interface_initialize@@YAXXZ");
//};

//public: s_content_cross_title_enumeration_result::s_content_cross_title_enumeration_result(void)
//{
//    mangled_ppc("??0s_content_cross_title_enumeration_result@@QAA@XZ");
//};

//void user_interface_dispose(void)
//{
//    mangled_ppc("?user_interface_dispose@@YAXXZ");
//};

//void user_interface_initialize_for_new_map(void)
//{
//    mangled_ppc("?user_interface_initialize_for_new_map@@YAXXZ");
//};

//void user_interface_dispose_from_old_map(void)
//{
//    mangled_ppc("?user_interface_dispose_from_old_map@@YAXXZ");
//};

//void input_disable_claw_button_combos(bool)
//{
//    mangled_ppc("?input_disable_claw_button_combos@@YAX_N@Z");
//};

//void user_interface_time_step(float)
//{
//    mangled_ppc("?user_interface_time_step@@YAXM@Z");
//};

//void user_interface_update_toast_position(void)
//{
//    mangled_ppc("?user_interface_update_toast_position@@YAXXZ");
//};

//void user_interface_update(float)
//{
//    mangled_ppc("?user_interface_update@@YAXM@Z");
//};

//public: class c_synchronized_int32& c_synchronized_int32::operator+=(long)
//{
//    mangled_ppc("??Yc_synchronized_int32@@QAAAAV0@J@Z");
//};

//public: long D3DDevice::Resume(void)
//{
//    mangled_ppc("?Resume@D3DDevice@@QAAJXZ");
//};

//void user_interface_render_begin(enum e_surface)
//{
//    mangled_ppc("?user_interface_render_begin@@YAXW4e_surface@@@Z");
//};

//void user_interface_render_end(void)
//{
//    mangled_ppc("?user_interface_render_end@@YAXXZ");
//};

//void user_interface_render(enum e_controller_index, enum e_output_user_index, enum e_window_index, union short_rectangle2d const *, long, bool)
//{
//    mangled_ppc("?user_interface_render@@YAXW4e_controller_index@@W4e_output_user_index@@W4e_window_index@@PBTshort_rectangle2d@@J_N@Z");
//};

//void user_interface_render_quad_in_window(union short_rectangle2d const *, unsigned long)
//{
//    mangled_ppc("?user_interface_render_quad_in_window@@YAXPBTshort_rectangle2d@@K@Z");
//};

//void user_interface_render_quad_in_viewport(union short_rectangle2d const *, unsigned long)
//{
//    mangled_ppc("?user_interface_render_quad_in_viewport@@YAXPBTshort_rectangle2d@@K@Z");
//};

//bool user_interface_non_dead_cam_active_for_game_player_controller(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_non_dead_cam_active_for_game_player_controller@@YA_NW4e_controller_index@@@Z");
//};

//bool user_interface_requests_unlocked_framerate(void)
//{
//    mangled_ppc("?user_interface_requests_unlocked_framerate@@YA_NXZ");
//};

//void user_interface_get_projection_plane_distances(float *, float *, float *)
//{
//    mangled_ppc("?user_interface_get_projection_plane_distances@@YAXPAM00@Z");
//};

//struct s_user_interface_tag_globals const * user_interface_tag_globals_try_and_get(void)
//{
//    mangled_ppc("?user_interface_tag_globals_try_and_get@@YAPBUs_user_interface_tag_globals@@XZ");
//};

//struct s_user_interface_shared_globals const * user_interface_shared_tag_globals_try_and_get(void)
//{
//    mangled_ppc("?user_interface_shared_tag_globals_try_and_get@@YAPBUs_user_interface_shared_globals@@XZ");
//};

//void user_interface_enter_game_shell(void)
//{
//    mangled_ppc("?user_interface_enter_game_shell@@YAXXZ");
//};

//void user_interface_set_selected_campaign_id(enum e_campaign_id)
//{
//    mangled_ppc("?user_interface_set_selected_campaign_id@@YAXW4e_campaign_id@@@Z");
//};

//void user_interface_set_selected_campaign_map_id(enum e_map_id)
//{
//    mangled_ppc("?user_interface_set_selected_campaign_map_id@@YAXW4e_map_id@@@Z");
//};

//void user_interface_set_selected_campaign_difficulty(long)
//{
//    mangled_ppc("?user_interface_set_selected_campaign_difficulty@@YAXJ@Z");
//};

//void user_interface_set_reload_from_persistent_storage(enum e_controller_index)
//{
//    mangled_ppc("?user_interface_set_reload_from_persistent_storage@@YAXW4e_controller_index@@@Z");
//};

//enum e_campaign_id user_interface_get_selected_campaign_id(void)
//{
//    mangled_ppc("?user_interface_get_selected_campaign_id@@YA?AW4e_campaign_id@@XZ");
//};

//enum e_map_id user_interface_get_selected_campaign_map_id(void)
//{
//    mangled_ppc("?user_interface_get_selected_campaign_map_id@@YA?AW4e_map_id@@XZ");
//};

//long user_interface_get_selected_campaign_difficulty(void)
//{
//    mangled_ppc("?user_interface_get_selected_campaign_difficulty@@YAJXZ");
//};

//enum e_controller_index user_interface_get_reload_from_persistent_storage(void)
//{
//    mangled_ppc("?user_interface_get_reload_from_persistent_storage@@YA?AW4e_controller_index@@XZ");
//};

//char * user_interface_get_selected_campaign_path(char *, long)
//{
//    mangled_ppc("?user_interface_get_selected_campaign_path@@YAPADPADJ@Z");
//};

//void debug_enable_text_bounds(bool)
//{
//    mangled_ppc("?debug_enable_text_bounds@@YAX_N@Z");
//};

//void debug_render_title_safe_bounds(bool)
//{
//    mangled_ppc("?debug_render_title_safe_bounds@@YAX_N@Z");
//};

//void set_debug_frame_element_bounds(bool)
//{
//    mangled_ppc("?set_debug_frame_element_bounds@@YAX_N@Z");
//};

//bool get_debug_frame_element_bounds(void)
//{
//    mangled_ppc("?get_debug_frame_element_bounds@@YA_NXZ");
//};

//bool get_is_alpha_version(void)
//{
//    mangled_ppc("?get_is_alpha_version@@YA_NXZ");
//};

//bool get_alpha_is_locked_down(void)
//{
//    mangled_ppc("?get_alpha_is_locked_down@@YA_NXZ");
//};

//bool get_alpha_is_external_beta(void)
//{
//    mangled_ppc("?get_alpha_is_external_beta@@YA_NXZ");
//};

//bool get_alpha_is_internal_beta(void)
//{
//    mangled_ppc("?get_alpha_is_internal_beta@@YA_NXZ");
//};

//bool get_alpha_eula_accepted(void)
//{
//    mangled_ppc("?get_alpha_eula_accepted@@YA_NXZ");
//};

//bool get_alpha_custom_games_disabled(void)
//{
//    mangled_ppc("?get_alpha_custom_games_disabled@@YA_NXZ");
//};

//bool can_use_claws(void)
//{
//    mangled_ppc("?can_use_claws@@YA_NXZ");
//};

//enum e_alpha_configuration_ui_level get_alpha_locked_down_state(void)
//{
//    mangled_ppc("?get_alpha_locked_down_state@@YA?AW4e_alpha_configuration_ui_level@@XZ");
//};

//void user_interface_prepare_for_tag_reload(void)
//{
//    mangled_ppc("?user_interface_prepare_for_tag_reload@@YAXXZ");
//};

//void user_interface_recover_from_tag_load(void)
//{
//    mangled_ppc("?user_interface_recover_from_tag_load@@YAXXZ");
//};

//unsigned long user_interface_milliseconds(void)
//{
//    mangled_ppc("?user_interface_milliseconds@@YAKXZ");
//};

//unsigned long user_interface_milliseconds_at_last_event(void)
//{
//    mangled_ppc("?user_interface_milliseconds_at_last_event@@YAKXZ");
//};

//void user_interface_non_idle_event_occured(void)
//{
//    mangled_ppc("?user_interface_non_idle_event_occured@@YAXXZ");
//};

//void user_interface_process_magic_key_combos(void)
//{
//    mangled_ppc("?user_interface_process_magic_key_combos@@YAXXZ");
//};

//long controller_mask_from_controller(enum e_controller_index)
//{
//    mangled_ppc("?controller_mask_from_controller@@YAJW4e_controller_index@@@Z");
//};

//long user_interface_get_main_menu_music_fade_time_milliseconds(void)
//{
//    mangled_ppc("?user_interface_get_main_menu_music_fade_time_milliseconds@@YAJXZ");
//};

//void user_interface_music_manager_toggle_debug_render_music_state(bool)
//{
//    mangled_ppc("?user_interface_music_manager_toggle_debug_render_music_state@@YAX_N@Z");
//};

//public: void c_user_interface_main_menu_music::set_render_debug_enabled(bool)
//{
//    mangled_ppc("?set_render_debug_enabled@c_user_interface_main_menu_music@@QAAX_N@Z");
//};

//void user_interface_main_menu_music_initialize_for_saved_game(long)
//{
//    mangled_ppc("?user_interface_main_menu_music_initialize_for_saved_game@@YAXJ@Z");
//};

//bool user_interface_should_render_fancy(void)
//{
//    mangled_ppc("?user_interface_should_render_fancy@@YA_NXZ");
//};

//void user_interface_set_bad_download_flag(bool)
//{
//    mangled_ppc("?user_interface_set_bad_download_flag@@YAX_N@Z");
//};

//bool user_interface_get_bad_download_flag(void)
//{
//    mangled_ppc("?user_interface_get_bad_download_flag@@YA_NXZ");
//};

//bool user_interface_should_render_at_origin(void)
//{
//    mangled_ppc("?user_interface_should_render_at_origin@@YA_NXZ");
//};

//unsigned __int64 user_interface_get_player_hash_bits(enum e_controller_index, long)
//{
//    mangled_ppc("?user_interface_get_player_hash_bits@@YA_KW4e_controller_index@@J@Z");
//};

//void user_interface_get_number_of_render_windows(enum e_output_user_index, long *, long *)
//{
//    mangled_ppc("?user_interface_get_number_of_render_windows@@YAXW4e_output_user_index@@PAJ1@Z");
//};

//void user_interface_set_storage_device_selection_deferred(bool)
//{
//    mangled_ppc("?user_interface_set_storage_device_selection_deferred@@YAX_N@Z");
//};

//bool user_interface_get_storage_device_selection_deferred(void)
//{
//    mangled_ppc("?user_interface_get_storage_device_selection_deferred@@YA_NXZ");
//};

//void user_interface_shut_down(void)
//{
//    mangled_ppc("?user_interface_shut_down@@YAXXZ");
//};

//void user_interface_launch_cross_title_image(struct s_content_cross_title_enumeration_result const &)
//{
//    mangled_ppc("?user_interface_launch_cross_title_image@@YAXABUs_content_cross_title_enumeration_result@@@Z");
//};

//bool user_interface_is_shutting_down(void)
//{
//    mangled_ppc("?user_interface_is_shutting_down@@YA_NXZ");
//};

//void user_interface_scoreboard_update(void)
//{
//    mangled_ppc("?user_interface_scoreboard_update@@YAXXZ");
//};

//bool user_interface_should_show_console_scoreboard(enum e_user_interface_show_busy_state *)
//{
//    mangled_ppc("?user_interface_should_show_console_scoreboard@@YA_NPAW4e_user_interface_show_busy_state@@@Z");
//};

//void user_interface_update_console_scoreboard(void)
//{
//    mangled_ppc("?user_interface_update_console_scoreboard@@YAXXZ");
//};

//void user_interface_show_campaign_custom_music_warning_if_needed(bool *)
//{
//    mangled_ppc("?user_interface_show_campaign_custom_music_warning_if_needed@@YAXPA_N@Z");
//};

//long user_interface_find_pgcr_incident(long)
//{
//    mangled_ppc("?user_interface_find_pgcr_incident@@YAJJ@Z");
//};

//struct s_cui_pgcr_incident const * user_interface_get_pgcr_incident(long)
//{
//    mangled_ppc("?user_interface_get_pgcr_incident@@YAPBUs_cui_pgcr_incident@@J@Z");
//};

//bool operator!=<enum e_alpha_configuration_ui_level>(enum e_alpha_configuration_ui_level const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?9W4e_alpha_configuration_ui_level@@@@YA_NABW4e_alpha_configuration_ui_level@@ABW4e_none_sentinel@@@Z");
//};

//public: bool c_flags_no_init<enum e_restricted_activity, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum e_restricted_activity) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_restricted_activity@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_restricted_activity@@@Z");
//};

//bool operator==<enum e_alpha_configuration_ui_level>(enum e_alpha_configuration_ui_level const &, enum e_none_sentinel const &)
//{
//    mangled_ppc("??$?8W4e_alpha_configuration_ui_level@@@@YA_NABW4e_alpha_configuration_ui_level@@ABW4e_none_sentinel@@@Z");
//};

//public: s_user_interface_globals::s_user_interface_globals(void)
//{
//    mangled_ppc("??0s_user_interface_globals@@QAA@XZ");
//};

//public: s_user_interface_globals::~s_user_interface_globals(void)
//{
//    mangled_ppc("??1s_user_interface_globals@@QAA@XZ");
//};

//void g_user_interface_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_user_interface_globals@@YAXXZ");
//};

