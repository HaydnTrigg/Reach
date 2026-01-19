/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<class c_controller_interface, 4>::k_element_count; // "?k_element_count@?$s_static_array@Vc_controller_interface@@$03@@2JB"
// public: static long const s_static_array<class c_verify_strings_task<2, 5>, 4>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_verify_strings_task@$01$04@@$03@@2JB"
// public: static unsigned long const c_verify_strings_task<2, 5>::k_max_string_count; // "?k_max_string_count@?$c_verify_strings_task@$01$04@@2KB"
// public: static unsigned long const c_verify_strings_task<2, 5>::k_max_string_length; // "?k_max_string_length@?$c_verify_strings_task@$01$04@@2KB"
// public: static long const s_static_array<class c_static_wchar_string<5>, 2>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_static_wchar_string@$04@@$01@@2JB"
// public: static long const s_static_array<struct _STRING_DATA, 2>::k_element_count; // "?k_element_count@?$s_static_array@U_STRING_DATA@@$01@@2JB"
// public: static long const s_static_array<class c_controller_monitor *, 17>::k_element_count; // "?k_element_count@?$s_static_array@PAVc_controller_monitor@@$0BB@@@2JB"
// public: static int const c_enum_no_init<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_button_action@@D$0A@$09Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_button_action const c_enum_no_init<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_button_action@@D$0A@$09Us_default_enum_string_resolver@@@@2W4e_button_action@@B"
// char const **global_controller_index_names; // "?global_controller_index_names@@3PAPBDA"
// char const **global_button_preset_names; // "?global_button_preset_names@@3PAPBDA"
// char const **global_joystick_preset_names; // "?global_joystick_preset_names@@3PAPBDA"
// char const **global_subtitle_setting_names; // "?global_subtitle_setting_names@@3PAPBDA"
// char const **global_player_color_index_names; // "?global_player_color_index_names@@3PAPBDA"
// char const **global_player_model_choice_names; // "?global_player_model_choice_names@@3PAPBDA"
// char const **global_voice_output_setting_names; // "?global_voice_output_setting_names@@3PAPBDA"
// char const **global_voice_mask_names; // "?global_voice_mask_names@@3PAPBDA"
// char const **gamepad_button_enum_strings; // "?gamepad_button_enum_strings@@3PAPBDA"
// struct s_string_list_definition gamepad_button_enum; // "?gamepad_button_enum@@3Us_string_list_definition@@A"

// void controllers_initialize(void);
// public: class c_player_profile_interface * c_controller_interface::get_player_profile_interface_unsafe(void);
// void controllers_dispose(void);
// void controllers_update(unsigned long);
// void controllers_render(void);
// class c_controller_interface * controller_get(enum e_controller_index);
// enum e_controller_index controller_get_first_signed_in_controller(void);
// enum e_controller_index controller_get_first_non_guest_signed_in_controller(void);
// enum e_controller_index controller_get_first_signed_in_controller_with_real_profile(void);
// enum e_controller_index controller_index_from_output_user_index(enum e_output_user_index);
// public: bool c_controller_interface::was_in_use(void) const;
// public: bool c_controller_interface::was_signed_in_to_machine(void) const;
// enum e_controller_index debug_controller_index_from_output_user_index(enum e_output_user_index);
// enum e_window_index controller_get_game_render_window(enum e_controller_index);
// void controller_activate_as_unsigned_in_user(enum e_controller_index, bool);
// void controller_display_storage_device_selection(enum e_controller_index);
// enum e_controller_index get_controller_index_from_xuid(unsigned __int64);
// void debug_set_controller_look_inverted(enum e_controller_index, bool);
// void debug_set_controller_vibration_enabled(enum e_controller_index, bool);
// void debug_set_controller_flight_stick_aircraft_controls(enum e_controller_index, bool);
// void debug_set_controller_auto_center_look(enum e_controller_index, bool);
// void debug_set_controller_crouch_lock(enum e_controller_index, bool);
// void debug_set_controller_southpaw(enum e_controller_index, bool);
// void debug_set_controller_clench_protection(enum e_controller_index, bool);
// void debug_set_button_preset(enum e_controller_index, enum e_button_presets);
// void debug_set_custom_button(enum e_controller_index, long, long);
// void debug_set_joystick_preset(enum e_controller_index, enum e_joystick_presets);
// void debug_set_look_sensitivity(enum e_controller_index, short);
// void debug_unlock_all_single_player_levels(enum e_controller_index);
// void debug_lock_all_single_player_levels(enum e_controller_index);
// void debug_unlock_all_skulls(enum e_controller_index);
// void debug_lock_all_skulls(enum e_controller_index);
// void debug_unlock_all_models(enum e_controller_index);
// public: void c_player_profile_interface::set_achievements_report_as_obtained(bool);
// void debug_lock_all_models(enum e_controller_index);
// void debug_set_single_player_level_completed(enum e_controller_index, long, bool, enum e_campaign_difficulty_level, bool);
// void debug_set_single_player_level_unlocked(enum e_controller_index, short, bool);
// void debug_set_primary_change_color(enum e_controller_index, short);
// void debug_set_secondary_change_color(enum e_controller_index, short);
// void debug_set_tertiary_change_color(enum e_controller_index, short);
// void debug_set_primary_emblem_color(enum e_controller_index, short);
// void debug_set_secondary_emblem_color(enum e_controller_index, short);
// void debug_set_background_emblem_color(enum e_controller_index, short);
// void debug_set_player_model_choice(enum e_controller_index, enum e_player_model_choice);
// void debug_set_emblem_info(enum e_controller_index, short, short);
// void debug_set_voice_output_setting(enum e_controller_index, enum e_voice_output_setting);
// void debug_set_subtitle_setting(enum e_controller_index, enum e_subtitle_setting);
// void debug_set_nag_message_data(short, long, long, long, long);
// void set_debug_temporary_user_controllers_always_attached(bool);
// bool get_debug_temporary_user_controllers_always_attached(void);
// void debug_set_new_user_experience(enum e_controller_index, bool);
// void debug_set_initial_bonus(enum e_controller_index, bool);
// void debug_set_loyalty_bonus(enum e_controller_index, short);
// void debug_set_generic_bonus(enum e_controller_index, short);
// void player_profile_clear_to_default_values_hs(enum e_controller_index);
// public: bool c_player_profile_interface::get_async_io_busy(void) const;
// class c_player_profile_interface const * controller_get_default_profile(void);
// void controllers_process_messages(void);
// public: void c_player_profile_interface::mark_for_update_from_storage(bool);
// public: c_controller_interface::c_controller_interface(void);
// public: void c_controller_interface::set_output_user_index(enum e_output_user_index, bool);
// public: enum e_controller_index c_controller_interface::get_controller_index(void) const;
// public: void c_controller_interface::reset_output_user_index(void);
// public: enum e_output_user_index c_controller_interface::get_or_create_output_user_index(void);
// public: struct s_player_identifier const * c_controller_interface::get_player_identifier(struct s_player_identifier *) const;
// public: unsigned __int64const c_controller_interface::get_player_xuid(void) const;
// public: long c_controller_interface::get_button_down_frames(enum e_gamepad_button);
// public: class c_player_profile_interface const * c_controller_interface::get_player_profile_interface(void) const;
// public: bool c_player_profile_interface::contents_are_valid(void) const;
// public: bool c_player_profile_interface::get_unsafe_to_save(void) const;
// public: class c_player_profile_interface * c_controller_interface::get_player_profile_interface_writable(void);
// public: class c_player_profile_interface * c_controller_interface::try_and_get_player_profile_interface_writable(void);
// public: bool c_controller_interface::player_profile_interface_has_valid_contents(void) const;
// public: bool c_controller_interface::storage_device_valid(void);
// public: void c_controller_interface::set_as_unsigned_in_user(bool);
// public: static void c_controller_interface::sign_in_state_changed(void);
// public: bool c_controller_interface::is_signed_in_to_machine(void) const;
// public: bool c_controller_interface::is_signed_in_to_live(void) const;
// public: bool c_controller_interface::is_silver_or_gold_live(void) const;
// public: bool c_controller_interface::is_gold_live(void) const;
// public: bool c_controller_interface::is_guest(void) const;
// public: bool c_controller_interface::is_zombie(void) const;
// public: bool c_controller_interface::is_allowed_online_multiplayer_gaming(void) const;
// public: bool c_controller_interface::is_allowed_communications(bool *) const;
// public: bool c_controller_interface::is_allowed_profile_viewing(bool *) const;
// public: bool c_controller_interface::is_allowed_presence(bool *) const;
// public: bool c_controller_interface::is_allowed_user_created_content(bool *) const;
// public: bool c_controller_interface::is_content_created_by_xuid_allowed(unsigned __int64) const;
// public: unsigned __int64 c_controller_interface::get_hash_bits(long);
// public: class c_flags<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver> c_controller_interface::get_state_flags(void) const;
// public: void c_controller_interface::initialize(void);
// public: void c_controller_interface::dispose(void);
// public: void c_controller_interface::update(unsigned long);
// public: void c_controller_interface::render(void);
// private: void c_controller_interface::update_controller_properties(void);
// unsigned long network_time_get(void);
// unsigned long network_time_get_exact(void);
// long network_time_since(unsigned long);
// long network_time_difference_msec(unsigned long, unsigned long);
// bool output_user_valid_and_signed_in(enum e_output_user_index);
// public: s_controller_change_notification_state::s_controller_change_notification_state(void);
// private: void c_controller_interface::sign_in_controller(struct s_player_identifier const *, bool);
// private: void c_controller_interface::remove_controller_from_network_session(void);
// private: void c_controller_interface::generate_random_display_name(void);
// private: void c_controller_interface::sign_out_controller(bool);
// private: void c_controller_interface::update_for_sign_in_change(void);
// protected: void c_controller_interface::controller_reset_achievements(void);
// public: bool c_controller_interface::controller_has_achievement(enum e_achievement) const;
// public: void c_controller_interface::controller_get_achievements(class c_big_flags_typed_no_init<long, 256> *) const;
// protected: void c_controller_interface::controller_grant_achievement(enum e_achievement);
// public: c_signed_in_users_watcher::c_signed_in_users_watcher(enum c_signed_in_users_watcher::e_watched_state);
// public: bool c_signed_in_users_watcher::have_users_changed(void);
// public: c_controller_monitor::c_controller_monitor(void);
// public: s_static_array<struct c_controller_monitor::s_controller_monitor_controller, 4>::s_static_array<struct c_controller_monitor::s_controller_monitor_controller, 4>(void);
// public: c_controller_monitor::s_controller_monitor_controller::s_controller_monitor_controller(void);
// public: static class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver> c_controller_monitor::build_flags_from_controller_state_flags(class c_flags<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>);
// public: bool c_controller_monitor::controller_being_monitored(enum e_controller_index) const;
// public: unsigned __int64 c_controller_monitor::controller_get_xuid(enum e_controller_index) const;
// public: unsigned long c_controller_monitor::controller_get_monitored_time_milliseconds(enum e_controller_index) const;
// public: void c_controller_monitor::notify_controller_sign_in(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: void c_controller_monitor::notify_controller_sign_out(enum e_controller_index);
// public: void c_controller_monitor::notify_controller_state_changed(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// private: void c_controller_monitor::controller_start_monitor(enum e_controller_index);
// private: void c_controller_monitor::controller_stop_monitor(enum e_controller_index);
// void controller_change_notification_initialize(void);
// void controller_change_notification_notify_controller_signed_in(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// void controller_change_notification_notify_controller_signed_out(enum e_controller_index);
// void controller_change_notification_notify_controller_state_changed(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// bool controller_change_notification_register(class c_controller_monitor *);
// public: bool c_controller_interface::has_notified_monitors_of_sign_in(void) const;
// bool controller_change_notification_unregister(class c_controller_monitor *);
// public: void s_static_array<struct c_controller_monitor::s_controller_monitor_controller, 4>::set_memory(long);
// public: static long s_static_array<class c_controller_monitor *, 17>::get_count(void);
// public: void s_static_array<class c_controller_monitor *, 17>::set_all(class c_controller_monitor *const &);
// public: c_enum<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver>::c_enum<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver>(enum e_button_action);
// public: bool c_flags_no_init<enum c_player_profile_interface::e_player_profile_interface_flags, unsigned short, 15, struct s_default_enum_string_resolver>::test(enum c_player_profile_interface::e_player_profile_interface_flags) const;
// public: void c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::clear(void);
// public: c_flags<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::c_flags<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum c_controller_monitor::e_controller_change_notification_flags) const;
// public: void c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum c_controller_monitor::e_controller_change_notification_flags, bool);
// public: c_flags<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_controller_monitor_flags, bool);
// public: c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void);
// public: class c_controller_interface & s_static_array<class c_controller_interface, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: class c_verify_strings_task<2, 5> & s_static_array<class c_verify_strings_task<2, 5>, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: class c_controller_interface & s_static_array<class c_controller_interface, 4>::operator[]<int>(int);
// void ui_track_delete<class c_message const>(class c_message const *);
// public: class c_controller_interface & s_static_array<class c_controller_interface, 4>::operator[]<long>(long);
// public: struct c_controller_monitor::s_controller_monitor_controller const & s_static_array<struct c_controller_monitor::s_controller_monitor_controller, 4>::operator[]<enum e_controller_index>(enum e_controller_index) const;
// public: struct c_controller_monitor::s_controller_monitor_controller & s_static_array<struct c_controller_monitor::s_controller_monitor_controller, 4>::operator[]<enum e_controller_index>(enum e_controller_index);
// public: class c_controller_monitor *& s_static_array<class c_controller_monitor *, 17>::operator[]<long>(long);
// public: bool c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: void c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum c_controller_monitor::e_controller_change_notification_flags);
// private: static unsigned char c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum c_controller_monitor::e_controller_change_notification_flags);
// public: void c_flags_no_init<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool s_static_array<class c_controller_interface, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: static bool s_static_array<class c_verify_strings_task<2, 5>, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: static bool s_static_array<class c_controller_interface, 4>::valid<int>(int);
// public: static bool s_static_array<class c_controller_interface, 4>::valid<long>(long);
// public: static bool s_static_array<struct c_controller_monitor::s_controller_monitor_controller, 4>::valid<enum e_controller_index>(enum e_controller_index);
// public: static bool s_static_array<class c_controller_monitor *, 17>::valid<long>(long);
// private: static unsigned long c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned long c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_controller_state_flags);
// private: static unsigned char c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_controller_monitor::e_controller_change_notification_flags);
// private: static unsigned char c_flags_no_init<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_controller_monitor_flags);
// public: enum e_ui_message_type c_message::get_type(void) const;
// public: enum c_xenon_message::e_xenon_message_type c_xenon_message::get_xenon_message_type(void) const;
// public: long c_xenon_message::get_event_value(void) const;
// public: s_controller_globals::s_controller_globals(void);
// public: s_static_array<class c_controller_interface, 4>::s_static_array<class c_controller_interface, 4>(void);
// public: s_static_array<class c_verify_strings_task<2, 5>, 4>::s_static_array<class c_verify_strings_task<2, 5>, 4>(void);
// public: c_verify_strings_task<2, 5>::c_verify_strings_task<2, 5>(void);
// public: virtual void c_verify_strings_task<2, 5>::reset(void);
// public: long c_verify_strings_task_base::get_string_count(void) const;
// public: virtual unsigned long c_verify_strings_task<2, 5>::start(void *);
// public: enum e_language c_verify_strings_task_base::get_language(void) const;
// merged_848FF820;
// public: virtual c_verify_strings_task<2, 5>::~c_verify_strings_task<2, 5>(void);
// public: s_static_array<class c_static_wchar_string<5>, 2>::s_static_array<class c_static_wchar_string<5>, 2>(void);
// public: struct _STRING_DATA * s_static_array<struct _STRING_DATA, 2>::begin(void);
// public: class c_static_wchar_string<5> & s_static_array<class c_static_wchar_string<5>, 2>::operator[]<long>(long);
// public: c_static_wchar_string<5>::c_static_wchar_string<5>(void);
// public: void c_static_wchar_string<5>::clear(void);
// public: long c_static_wchar_string<5>::length(void) const;
// public: wchar_t (& c_static_wchar_string<5>::get_buffer(void))[5];
// public: struct _STRING_DATA & s_static_array<struct _STRING_DATA, 2>::operator[]<long>(long);
// public: static bool s_static_array<class c_static_wchar_string<5>, 2>::valid<long>(long);
// public: static bool s_static_array<struct _STRING_DATA, 2>::valid<long>(long);
// public: s_controller_globals::~s_controller_globals(void);
// public: s_static_array<class c_verify_strings_task<2, 5>, 4>::~s_static_array<class c_verify_strings_task<2, 5>, 4>(void);
// void g_controller_globals::`dynamic atexit destructor'(void);

//void controllers_initialize(void)
//{
//    mangled_ppc("?controllers_initialize@@YAXXZ");
//};

//public: class c_player_profile_interface * c_controller_interface::get_player_profile_interface_unsafe(void)
//{
//    mangled_ppc("?get_player_profile_interface_unsafe@c_controller_interface@@QAAPAVc_player_profile_interface@@XZ");
//};

//void controllers_dispose(void)
//{
//    mangled_ppc("?controllers_dispose@@YAXXZ");
//};

//void controllers_update(unsigned long)
//{
//    mangled_ppc("?controllers_update@@YAXK@Z");
//};

//void controllers_render(void)
//{
//    mangled_ppc("?controllers_render@@YAXXZ");
//};

//class c_controller_interface * controller_get(enum e_controller_index)
//{
//    mangled_ppc("?controller_get@@YAPAVc_controller_interface@@W4e_controller_index@@@Z");
//};

//enum e_controller_index controller_get_first_signed_in_controller(void)
//{
//    mangled_ppc("?controller_get_first_signed_in_controller@@YA?AW4e_controller_index@@XZ");
//};

//enum e_controller_index controller_get_first_non_guest_signed_in_controller(void)
//{
//    mangled_ppc("?controller_get_first_non_guest_signed_in_controller@@YA?AW4e_controller_index@@XZ");
//};

//enum e_controller_index controller_get_first_signed_in_controller_with_real_profile(void)
//{
//    mangled_ppc("?controller_get_first_signed_in_controller_with_real_profile@@YA?AW4e_controller_index@@XZ");
//};

//enum e_controller_index controller_index_from_output_user_index(enum e_output_user_index)
//{
//    mangled_ppc("?controller_index_from_output_user_index@@YA?AW4e_controller_index@@W4e_output_user_index@@@Z");
//};

//public: bool c_controller_interface::was_in_use(void) const
//{
//    mangled_ppc("?was_in_use@c_controller_interface@@QBA_NXZ");
//};

//public: bool c_controller_interface::was_signed_in_to_machine(void) const
//{
//    mangled_ppc("?was_signed_in_to_machine@c_controller_interface@@QBA_NXZ");
//};

//enum e_controller_index debug_controller_index_from_output_user_index(enum e_output_user_index)
//{
//    mangled_ppc("?debug_controller_index_from_output_user_index@@YA?AW4e_controller_index@@W4e_output_user_index@@@Z");
//};

//enum e_window_index controller_get_game_render_window(enum e_controller_index)
//{
//    mangled_ppc("?controller_get_game_render_window@@YA?AW4e_window_index@@W4e_controller_index@@@Z");
//};

//void controller_activate_as_unsigned_in_user(enum e_controller_index, bool)
//{
//    mangled_ppc("?controller_activate_as_unsigned_in_user@@YAXW4e_controller_index@@_N@Z");
//};

//void controller_display_storage_device_selection(enum e_controller_index)
//{
//    mangled_ppc("?controller_display_storage_device_selection@@YAXW4e_controller_index@@@Z");
//};

//enum e_controller_index get_controller_index_from_xuid(unsigned __int64)
//{
//    mangled_ppc("?get_controller_index_from_xuid@@YA?AW4e_controller_index@@_K@Z");
//};

//void debug_set_controller_look_inverted(enum e_controller_index, bool)
//{
//    mangled_ppc("?debug_set_controller_look_inverted@@YAXW4e_controller_index@@_N@Z");
//};

//void debug_set_controller_vibration_enabled(enum e_controller_index, bool)
//{
//    mangled_ppc("?debug_set_controller_vibration_enabled@@YAXW4e_controller_index@@_N@Z");
//};

//void debug_set_controller_flight_stick_aircraft_controls(enum e_controller_index, bool)
//{
//    mangled_ppc("?debug_set_controller_flight_stick_aircraft_controls@@YAXW4e_controller_index@@_N@Z");
//};

//void debug_set_controller_auto_center_look(enum e_controller_index, bool)
//{
//    mangled_ppc("?debug_set_controller_auto_center_look@@YAXW4e_controller_index@@_N@Z");
//};

//void debug_set_controller_crouch_lock(enum e_controller_index, bool)
//{
//    mangled_ppc("?debug_set_controller_crouch_lock@@YAXW4e_controller_index@@_N@Z");
//};

//void debug_set_controller_southpaw(enum e_controller_index, bool)
//{
//    mangled_ppc("?debug_set_controller_southpaw@@YAXW4e_controller_index@@_N@Z");
//};

//void debug_set_controller_clench_protection(enum e_controller_index, bool)
//{
//    mangled_ppc("?debug_set_controller_clench_protection@@YAXW4e_controller_index@@_N@Z");
//};

//void debug_set_button_preset(enum e_controller_index, enum e_button_presets)
//{
//    mangled_ppc("?debug_set_button_preset@@YAXW4e_controller_index@@W4e_button_presets@@@Z");
//};

//void debug_set_custom_button(enum e_controller_index, long, long)
//{
//    mangled_ppc("?debug_set_custom_button@@YAXW4e_controller_index@@JJ@Z");
//};

//void debug_set_joystick_preset(enum e_controller_index, enum e_joystick_presets)
//{
//    mangled_ppc("?debug_set_joystick_preset@@YAXW4e_controller_index@@W4e_joystick_presets@@@Z");
//};

//void debug_set_look_sensitivity(enum e_controller_index, short)
//{
//    mangled_ppc("?debug_set_look_sensitivity@@YAXW4e_controller_index@@F@Z");
//};

//void debug_unlock_all_single_player_levels(enum e_controller_index)
//{
//    mangled_ppc("?debug_unlock_all_single_player_levels@@YAXW4e_controller_index@@@Z");
//};

//void debug_lock_all_single_player_levels(enum e_controller_index)
//{
//    mangled_ppc("?debug_lock_all_single_player_levels@@YAXW4e_controller_index@@@Z");
//};

//void debug_unlock_all_skulls(enum e_controller_index)
//{
//    mangled_ppc("?debug_unlock_all_skulls@@YAXW4e_controller_index@@@Z");
//};

//void debug_lock_all_skulls(enum e_controller_index)
//{
//    mangled_ppc("?debug_lock_all_skulls@@YAXW4e_controller_index@@@Z");
//};

//void debug_unlock_all_models(enum e_controller_index)
//{
//    mangled_ppc("?debug_unlock_all_models@@YAXW4e_controller_index@@@Z");
//};

//public: void c_player_profile_interface::set_achievements_report_as_obtained(bool)
//{
//    mangled_ppc("?set_achievements_report_as_obtained@c_player_profile_interface@@QAAX_N@Z");
//};

//void debug_lock_all_models(enum e_controller_index)
//{
//    mangled_ppc("?debug_lock_all_models@@YAXW4e_controller_index@@@Z");
//};

//void debug_set_single_player_level_completed(enum e_controller_index, long, bool, enum e_campaign_difficulty_level, bool)
//{
//    mangled_ppc("?debug_set_single_player_level_completed@@YAXW4e_controller_index@@J_NW4e_campaign_difficulty_level@@1@Z");
//};

//void debug_set_single_player_level_unlocked(enum e_controller_index, short, bool)
//{
//    mangled_ppc("?debug_set_single_player_level_unlocked@@YAXW4e_controller_index@@F_N@Z");
//};

//void debug_set_primary_change_color(enum e_controller_index, short)
//{
//    mangled_ppc("?debug_set_primary_change_color@@YAXW4e_controller_index@@F@Z");
//};

//void debug_set_secondary_change_color(enum e_controller_index, short)
//{
//    mangled_ppc("?debug_set_secondary_change_color@@YAXW4e_controller_index@@F@Z");
//};

//void debug_set_tertiary_change_color(enum e_controller_index, short)
//{
//    mangled_ppc("?debug_set_tertiary_change_color@@YAXW4e_controller_index@@F@Z");
//};

//void debug_set_primary_emblem_color(enum e_controller_index, short)
//{
//    mangled_ppc("?debug_set_primary_emblem_color@@YAXW4e_controller_index@@F@Z");
//};

//void debug_set_secondary_emblem_color(enum e_controller_index, short)
//{
//    mangled_ppc("?debug_set_secondary_emblem_color@@YAXW4e_controller_index@@F@Z");
//};

//void debug_set_background_emblem_color(enum e_controller_index, short)
//{
//    mangled_ppc("?debug_set_background_emblem_color@@YAXW4e_controller_index@@F@Z");
//};

//void debug_set_player_model_choice(enum e_controller_index, enum e_player_model_choice)
//{
//    mangled_ppc("?debug_set_player_model_choice@@YAXW4e_controller_index@@W4e_player_model_choice@@@Z");
//};

//void debug_set_emblem_info(enum e_controller_index, short, short)
//{
//    mangled_ppc("?debug_set_emblem_info@@YAXW4e_controller_index@@FF@Z");
//};

//void debug_set_voice_output_setting(enum e_controller_index, enum e_voice_output_setting)
//{
//    mangled_ppc("?debug_set_voice_output_setting@@YAXW4e_controller_index@@W4e_voice_output_setting@@@Z");
//};

//void debug_set_subtitle_setting(enum e_controller_index, enum e_subtitle_setting)
//{
//    mangled_ppc("?debug_set_subtitle_setting@@YAXW4e_controller_index@@W4e_subtitle_setting@@@Z");
//};

//void debug_set_nag_message_data(short, long, long, long, long)
//{
//    mangled_ppc("?debug_set_nag_message_data@@YAXFJJJJ@Z");
//};

//void set_debug_temporary_user_controllers_always_attached(bool)
//{
//    mangled_ppc("?set_debug_temporary_user_controllers_always_attached@@YAX_N@Z");
//};

//bool get_debug_temporary_user_controllers_always_attached(void)
//{
//    mangled_ppc("?get_debug_temporary_user_controllers_always_attached@@YA_NXZ");
//};

//void debug_set_new_user_experience(enum e_controller_index, bool)
//{
//    mangled_ppc("?debug_set_new_user_experience@@YAXW4e_controller_index@@_N@Z");
//};

//void debug_set_initial_bonus(enum e_controller_index, bool)
//{
//    mangled_ppc("?debug_set_initial_bonus@@YAXW4e_controller_index@@_N@Z");
//};

//void debug_set_loyalty_bonus(enum e_controller_index, short)
//{
//    mangled_ppc("?debug_set_loyalty_bonus@@YAXW4e_controller_index@@F@Z");
//};

//void debug_set_generic_bonus(enum e_controller_index, short)
//{
//    mangled_ppc("?debug_set_generic_bonus@@YAXW4e_controller_index@@F@Z");
//};

//void player_profile_clear_to_default_values_hs(enum e_controller_index)
//{
//    mangled_ppc("?player_profile_clear_to_default_values_hs@@YAXW4e_controller_index@@@Z");
//};

//public: bool c_player_profile_interface::get_async_io_busy(void) const
//{
//    mangled_ppc("?get_async_io_busy@c_player_profile_interface@@QBA_NXZ");
//};

//class c_player_profile_interface const * controller_get_default_profile(void)
//{
//    mangled_ppc("?controller_get_default_profile@@YAPBVc_player_profile_interface@@XZ");
//};

//void controllers_process_messages(void)
//{
//    mangled_ppc("?controllers_process_messages@@YAXXZ");
//};

//public: void c_player_profile_interface::mark_for_update_from_storage(bool)
//{
//    mangled_ppc("?mark_for_update_from_storage@c_player_profile_interface@@QAAX_N@Z");
//};

//public: c_controller_interface::c_controller_interface(void)
//{
//    mangled_ppc("??0c_controller_interface@@QAA@XZ");
//};

//public: void c_controller_interface::set_output_user_index(enum e_output_user_index, bool)
//{
//    mangled_ppc("?set_output_user_index@c_controller_interface@@QAAXW4e_output_user_index@@_N@Z");
//};

//public: enum e_controller_index c_controller_interface::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_controller_interface@@QBA?AW4e_controller_index@@XZ");
//};

//public: void c_controller_interface::reset_output_user_index(void)
//{
//    mangled_ppc("?reset_output_user_index@c_controller_interface@@QAAXXZ");
//};

//public: enum e_output_user_index c_controller_interface::get_or_create_output_user_index(void)
//{
//    mangled_ppc("?get_or_create_output_user_index@c_controller_interface@@QAA?AW4e_output_user_index@@XZ");
//};

//public: struct s_player_identifier const * c_controller_interface::get_player_identifier(struct s_player_identifier *) const
//{
//    mangled_ppc("?get_player_identifier@c_controller_interface@@QBAPBUs_player_identifier@@PAU2@@Z");
//};

//public: unsigned __int64const c_controller_interface::get_player_xuid(void) const
//{
//    mangled_ppc("?get_player_xuid@c_controller_interface@@QBA?B_KXZ");
//};

//public: long c_controller_interface::get_button_down_frames(enum e_gamepad_button)
//{
//    mangled_ppc("?get_button_down_frames@c_controller_interface@@QAAJW4e_gamepad_button@@@Z");
//};

//public: class c_player_profile_interface const * c_controller_interface::get_player_profile_interface(void) const
//{
//    mangled_ppc("?get_player_profile_interface@c_controller_interface@@QBAPBVc_player_profile_interface@@XZ");
//};

//public: bool c_player_profile_interface::contents_are_valid(void) const
//{
//    mangled_ppc("?contents_are_valid@c_player_profile_interface@@QBA_NXZ");
//};

//public: bool c_player_profile_interface::get_unsafe_to_save(void) const
//{
//    mangled_ppc("?get_unsafe_to_save@c_player_profile_interface@@QBA_NXZ");
//};

//public: class c_player_profile_interface * c_controller_interface::get_player_profile_interface_writable(void)
//{
//    mangled_ppc("?get_player_profile_interface_writable@c_controller_interface@@QAAPAVc_player_profile_interface@@XZ");
//};

//public: class c_player_profile_interface * c_controller_interface::try_and_get_player_profile_interface_writable(void)
//{
//    mangled_ppc("?try_and_get_player_profile_interface_writable@c_controller_interface@@QAAPAVc_player_profile_interface@@XZ");
//};

//public: bool c_controller_interface::player_profile_interface_has_valid_contents(void) const
//{
//    mangled_ppc("?player_profile_interface_has_valid_contents@c_controller_interface@@QBA_NXZ");
//};

//public: bool c_controller_interface::storage_device_valid(void)
//{
//    mangled_ppc("?storage_device_valid@c_controller_interface@@QAA_NXZ");
//};

//public: void c_controller_interface::set_as_unsigned_in_user(bool)
//{
//    mangled_ppc("?set_as_unsigned_in_user@c_controller_interface@@QAAX_N@Z");
//};

//public: static void c_controller_interface::sign_in_state_changed(void)
//{
//    mangled_ppc("?sign_in_state_changed@c_controller_interface@@SAXXZ");
//};

//public: bool c_controller_interface::is_signed_in_to_machine(void) const
//{
//    mangled_ppc("?is_signed_in_to_machine@c_controller_interface@@QBA_NXZ");
//};

//public: bool c_controller_interface::is_signed_in_to_live(void) const
//{
//    mangled_ppc("?is_signed_in_to_live@c_controller_interface@@QBA_NXZ");
//};

//public: bool c_controller_interface::is_silver_or_gold_live(void) const
//{
//    mangled_ppc("?is_silver_or_gold_live@c_controller_interface@@QBA_NXZ");
//};

//public: bool c_controller_interface::is_gold_live(void) const
//{
//    mangled_ppc("?is_gold_live@c_controller_interface@@QBA_NXZ");
//};

//public: bool c_controller_interface::is_guest(void) const
//{
//    mangled_ppc("?is_guest@c_controller_interface@@QBA_NXZ");
//};

//public: bool c_controller_interface::is_zombie(void) const
//{
//    mangled_ppc("?is_zombie@c_controller_interface@@QBA_NXZ");
//};

//public: bool c_controller_interface::is_allowed_online_multiplayer_gaming(void) const
//{
//    mangled_ppc("?is_allowed_online_multiplayer_gaming@c_controller_interface@@QBA_NXZ");
//};

//public: bool c_controller_interface::is_allowed_communications(bool *) const
//{
//    mangled_ppc("?is_allowed_communications@c_controller_interface@@QBA_NPA_N@Z");
//};

//public: bool c_controller_interface::is_allowed_profile_viewing(bool *) const
//{
//    mangled_ppc("?is_allowed_profile_viewing@c_controller_interface@@QBA_NPA_N@Z");
//};

//public: bool c_controller_interface::is_allowed_presence(bool *) const
//{
//    mangled_ppc("?is_allowed_presence@c_controller_interface@@QBA_NPA_N@Z");
//};

//public: bool c_controller_interface::is_allowed_user_created_content(bool *) const
//{
//    mangled_ppc("?is_allowed_user_created_content@c_controller_interface@@QBA_NPA_N@Z");
//};

//public: bool c_controller_interface::is_content_created_by_xuid_allowed(unsigned __int64) const
//{
//    mangled_ppc("?is_content_created_by_xuid_allowed@c_controller_interface@@QBA_N_K@Z");
//};

//public: unsigned __int64 c_controller_interface::get_hash_bits(long)
//{
//    mangled_ppc("?get_hash_bits@c_controller_interface@@QAA_KJ@Z");
//};

//public: class c_flags<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver> c_controller_interface::get_state_flags(void) const
//{
//    mangled_ppc("?get_state_flags@c_controller_interface@@QBA?AV?$c_flags@W4e_controller_state_flags@@K$0BF@Us_default_enum_string_resolver@@@@XZ");
//};

//public: void c_controller_interface::initialize(void)
//{
//    mangled_ppc("?initialize@c_controller_interface@@QAAXXZ");
//};

//public: void c_controller_interface::dispose(void)
//{
//    mangled_ppc("?dispose@c_controller_interface@@QAAXXZ");
//};

//public: void c_controller_interface::update(unsigned long)
//{
//    mangled_ppc("?update@c_controller_interface@@QAAXK@Z");
//};

//public: void c_controller_interface::render(void)
//{
//    mangled_ppc("?render@c_controller_interface@@QAAXXZ");
//};

//private: void c_controller_interface::update_controller_properties(void)
//{
//    mangled_ppc("?update_controller_properties@c_controller_interface@@AAAXXZ");
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

//bool output_user_valid_and_signed_in(enum e_output_user_index)
//{
//    mangled_ppc("?output_user_valid_and_signed_in@@YA_NW4e_output_user_index@@@Z");
//};

//public: s_controller_change_notification_state::s_controller_change_notification_state(void)
//{
//    mangled_ppc("??0s_controller_change_notification_state@@QAA@XZ");
//};

//private: void c_controller_interface::sign_in_controller(struct s_player_identifier const *, bool)
//{
//    mangled_ppc("?sign_in_controller@c_controller_interface@@AAAXPBUs_player_identifier@@_N@Z");
//};

//private: void c_controller_interface::remove_controller_from_network_session(void)
//{
//    mangled_ppc("?remove_controller_from_network_session@c_controller_interface@@AAAXXZ");
//};

//private: void c_controller_interface::generate_random_display_name(void)
//{
//    mangled_ppc("?generate_random_display_name@c_controller_interface@@AAAXXZ");
//};

//private: void c_controller_interface::sign_out_controller(bool)
//{
//    mangled_ppc("?sign_out_controller@c_controller_interface@@AAAX_N@Z");
//};

//private: void c_controller_interface::update_for_sign_in_change(void)
//{
//    mangled_ppc("?update_for_sign_in_change@c_controller_interface@@AAAXXZ");
//};

//protected: void c_controller_interface::controller_reset_achievements(void)
//{
//    mangled_ppc("?controller_reset_achievements@c_controller_interface@@IAAXXZ");
//};

//public: bool c_controller_interface::controller_has_achievement(enum e_achievement) const
//{
//    mangled_ppc("?controller_has_achievement@c_controller_interface@@QBA_NW4e_achievement@@@Z");
//};

//public: void c_controller_interface::controller_get_achievements(class c_big_flags_typed_no_init<long, 256> *) const
//{
//    mangled_ppc("?controller_get_achievements@c_controller_interface@@QBAXPAV?$c_big_flags_typed_no_init@J$0BAA@@@@Z");
//};

//protected: void c_controller_interface::controller_grant_achievement(enum e_achievement)
//{
//    mangled_ppc("?controller_grant_achievement@c_controller_interface@@IAAXW4e_achievement@@@Z");
//};

//public: c_signed_in_users_watcher::c_signed_in_users_watcher(enum c_signed_in_users_watcher::e_watched_state)
//{
//    mangled_ppc("??0c_signed_in_users_watcher@@QAA@W4e_watched_state@0@@Z");
//};

//public: bool c_signed_in_users_watcher::have_users_changed(void)
//{
//    mangled_ppc("?have_users_changed@c_signed_in_users_watcher@@QAA_NXZ");
//};

//public: c_controller_monitor::c_controller_monitor(void)
//{
//    mangled_ppc("??0c_controller_monitor@@QAA@XZ");
//};

//public: s_static_array<struct c_controller_monitor::s_controller_monitor_controller, 4>::s_static_array<struct c_controller_monitor::s_controller_monitor_controller, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_controller_monitor_controller@c_controller_monitor@@$03@@QAA@XZ");
//};

//public: c_controller_monitor::s_controller_monitor_controller::s_controller_monitor_controller(void)
//{
//    mangled_ppc("??0s_controller_monitor_controller@c_controller_monitor@@QAA@XZ");
//};

//public: static class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver> c_controller_monitor::build_flags_from_controller_state_flags(class c_flags<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?build_flags_from_controller_state_flags@c_controller_monitor@@SA?AV?$c_flags@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@V?$c_flags@W4e_controller_state_flags@@K$0BF@Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_controller_monitor::controller_being_monitored(enum e_controller_index) const
//{
//    mangled_ppc("?controller_being_monitored@c_controller_monitor@@QBA_NW4e_controller_index@@@Z");
//};

//public: unsigned __int64 c_controller_monitor::controller_get_xuid(enum e_controller_index) const
//{
//    mangled_ppc("?controller_get_xuid@c_controller_monitor@@QBA_KW4e_controller_index@@@Z");
//};

//public: unsigned long c_controller_monitor::controller_get_monitored_time_milliseconds(enum e_controller_index) const
//{
//    mangled_ppc("?controller_get_monitored_time_milliseconds@c_controller_monitor@@QBAKW4e_controller_index@@@Z");
//};

//public: void c_controller_monitor::notify_controller_sign_in(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?notify_controller_sign_in@c_controller_monitor@@QAAXW4e_controller_index@@V?$c_flags@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_controller_monitor::notify_controller_sign_out(enum e_controller_index)
//{
//    mangled_ppc("?notify_controller_sign_out@c_controller_monitor@@QAAXW4e_controller_index@@@Z");
//};

//public: void c_controller_monitor::notify_controller_state_changed(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?notify_controller_state_changed@c_controller_monitor@@QAAXW4e_controller_index@@V?$c_flags@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//private: void c_controller_monitor::controller_start_monitor(enum e_controller_index)
//{
//    mangled_ppc("?controller_start_monitor@c_controller_monitor@@AAAXW4e_controller_index@@@Z");
//};

//private: void c_controller_monitor::controller_stop_monitor(enum e_controller_index)
//{
//    mangled_ppc("?controller_stop_monitor@c_controller_monitor@@AAAXW4e_controller_index@@@Z");
//};

//void controller_change_notification_initialize(void)
//{
//    mangled_ppc("?controller_change_notification_initialize@@YAXXZ");
//};

//void controller_change_notification_notify_controller_signed_in(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?controller_change_notification_notify_controller_signed_in@@YAXW4e_controller_index@@V?$c_flags@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//void controller_change_notification_notify_controller_signed_out(enum e_controller_index)
//{
//    mangled_ppc("?controller_change_notification_notify_controller_signed_out@@YAXW4e_controller_index@@@Z");
//};

//void controller_change_notification_notify_controller_state_changed(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?controller_change_notification_notify_controller_state_changed@@YAXW4e_controller_index@@V?$c_flags@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool controller_change_notification_register(class c_controller_monitor *)
//{
//    mangled_ppc("?controller_change_notification_register@@YA_NPAVc_controller_monitor@@@Z");
//};

//public: bool c_controller_interface::has_notified_monitors_of_sign_in(void) const
//{
//    mangled_ppc("?has_notified_monitors_of_sign_in@c_controller_interface@@QBA_NXZ");
//};

//bool controller_change_notification_unregister(class c_controller_monitor *)
//{
//    mangled_ppc("?controller_change_notification_unregister@@YA_NPAVc_controller_monitor@@@Z");
//};

//public: void s_static_array<struct c_controller_monitor::s_controller_monitor_controller, 4>::set_memory(long)
//{
//    mangled_ppc("?set_memory@?$s_static_array@Us_controller_monitor_controller@c_controller_monitor@@$03@@QAAXJ@Z");
//};

//public: static long s_static_array<class c_controller_monitor *, 17>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@PAVc_controller_monitor@@$0BB@@@SAJXZ");
//};

//public: void s_static_array<class c_controller_monitor *, 17>::set_all(class c_controller_monitor *const &)
//{
//    mangled_ppc("?set_all@?$s_static_array@PAVc_controller_monitor@@$0BB@@@QAAXABQAVc_controller_monitor@@@Z");
//};

//public: c_enum<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver>::c_enum<enum e_button_action, char, 0, 10, struct s_default_enum_string_resolver>(enum e_button_action)
//{
//    mangled_ppc("??0?$c_enum@W4e_button_action@@D$0A@$09Us_default_enum_string_resolver@@@@QAA@W4e_button_action@@@Z");
//};

//public: bool c_flags_no_init<enum c_player_profile_interface::e_player_profile_interface_flags, unsigned short, 15, struct s_default_enum_string_resolver>::test(enum c_player_profile_interface::e_player_profile_interface_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_player_profile_interface_flags@c_player_profile_interface@@G$0P@Us_default_enum_string_resolver@@@@QBA_NW4e_player_profile_interface_flags@c_player_profile_interface@@@Z");
//};

//public: void c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_controller_state_flags@@K$0BF@Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: c_flags<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::c_flags<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_controller_state_flags@@K$0BF@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::test(enum c_controller_monitor::e_controller_change_notification_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_controller_change_notification_flags@c_controller_monitor@@E$00Us_default_enum_string_resolver@@@@QBA_NW4e_controller_change_notification_flags@c_controller_monitor@@@Z");
//};

//public: void c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::set(enum c_controller_monitor::e_controller_change_notification_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_controller_change_notification_flags@c_controller_monitor@@E$00Us_default_enum_string_resolver@@@@QAAXW4e_controller_change_notification_flags@c_controller_monitor@@_N@Z");
//};

//public: c_flags<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_controller_change_notification_flags@c_controller_monitor@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum e_controller_monitor_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_controller_monitor_flags@@_N@Z");
//};

//public: c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: class c_controller_interface & s_static_array<class c_controller_interface, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@Vc_controller_interface@@$03@@QAAAAVc_controller_interface@@W4e_controller_index@@@Z");
//};

//public: class c_verify_strings_task<2, 5> & s_static_array<class c_verify_strings_task<2, 5>, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@V?$c_verify_strings_task@$01$04@@$03@@QAAAAV?$c_verify_strings_task@$01$04@@W4e_controller_index@@@Z");
//};

//public: class c_controller_interface & s_static_array<class c_controller_interface, 4>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@Vc_controller_interface@@$03@@QAAAAVc_controller_interface@@H@Z");
//};

//void ui_track_delete<class c_message const>(class c_message const *)
//{
//    mangled_ppc("??$ui_track_delete@$$CBVc_message@@@@YAXPBVc_message@@@Z");
//};

//public: class c_controller_interface & s_static_array<class c_controller_interface, 4>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Vc_controller_interface@@$03@@QAAAAVc_controller_interface@@J@Z");
//};

//public: struct c_controller_monitor::s_controller_monitor_controller const & s_static_array<struct c_controller_monitor::s_controller_monitor_controller, 4>::operator[]<enum e_controller_index>(enum e_controller_index) const
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@Us_controller_monitor_controller@c_controller_monitor@@$03@@QBAABUs_controller_monitor_controller@c_controller_monitor@@W4e_controller_index@@@Z");
//};

//public: struct c_controller_monitor::s_controller_monitor_controller & s_static_array<struct c_controller_monitor::s_controller_monitor_controller, 4>::operator[]<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$?AW4e_controller_index@@@?$s_static_array@Us_controller_monitor_controller@c_controller_monitor@@$03@@QAAAAUs_controller_monitor_controller@c_controller_monitor@@W4e_controller_index@@@Z");
//};

//public: class c_controller_monitor *& s_static_array<class c_controller_monitor *, 17>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@PAVc_controller_monitor@@$0BB@@@QAAAAPAVc_controller_monitor@@J@Z");
//};

//public: bool c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_controller_state_flags@@K$0BF@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_controller_change_notification_flags@c_controller_monitor@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_controller_change_notification_flags@c_controller_monitor@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::valid_bit(enum c_controller_monitor::e_controller_change_notification_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_controller_change_notification_flags@c_controller_monitor@@E$00Us_default_enum_string_resolver@@@@SA_NW4e_controller_change_notification_flags@c_controller_monitor@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::flag_size_type(enum c_controller_monitor::e_controller_change_notification_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_controller_change_notification_flags@c_controller_monitor@@E$00Us_default_enum_string_resolver@@@@CAEW4e_controller_change_notification_flags@c_controller_monitor@@@Z");
//};

//public: void c_flags_no_init<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool s_static_array<class c_controller_interface, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@Vc_controller_interface@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: static bool s_static_array<class c_verify_strings_task<2, 5>, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@V?$c_verify_strings_task@$01$04@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: static bool s_static_array<class c_controller_interface, 4>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@Vc_controller_interface@@$03@@SA_NH@Z");
//};

//public: static bool s_static_array<class c_controller_interface, 4>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Vc_controller_interface@@$03@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct c_controller_monitor::s_controller_monitor_controller, 4>::valid<enum e_controller_index>(enum e_controller_index)
//{
//    mangled_ppc("??$valid@W4e_controller_index@@@?$s_static_array@Us_controller_monitor_controller@c_controller_monitor@@$03@@SA_NW4e_controller_index@@@Z");
//};

//public: static bool s_static_array<class c_controller_monitor *, 17>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@PAVc_controller_monitor@@$0BB@@@SA_NJ@Z");
//};

//private: static unsigned long c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_controller_state_flags@@K$0BF@Us_default_enum_string_resolver@@@@CAKXZ");
//};

//private: static unsigned char c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_controller_change_notification_flags@c_controller_monitor@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned long c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_controller_state_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_controller_state_flags@@K$0BF@Us_default_enum_string_resolver@@@@CAKW4e_controller_state_flags@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_controller_monitor::e_controller_change_notification_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_controller_monitor::e_controller_change_notification_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_controller_change_notification_flags@c_controller_monitor@@E$00Us_default_enum_string_resolver@@@@CAEW4e_controller_change_notification_flags@c_controller_monitor@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_controller_monitor_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_controller_monitor_flags@@@Z");
//};

//public: enum e_ui_message_type c_message::get_type(void) const
//{
//    mangled_ppc("?get_type@c_message@@QBA?AW4e_ui_message_type@@XZ");
//};

//public: enum c_xenon_message::e_xenon_message_type c_xenon_message::get_xenon_message_type(void) const
//{
//    mangled_ppc("?get_xenon_message_type@c_xenon_message@@QBA?AW4e_xenon_message_type@1@XZ");
//};

//public: long c_xenon_message::get_event_value(void) const
//{
//    mangled_ppc("?get_event_value@c_xenon_message@@QBAJXZ");
//};

//public: s_controller_globals::s_controller_globals(void)
//{
//    mangled_ppc("??0s_controller_globals@@QAA@XZ");
//};

//public: s_static_array<class c_controller_interface, 4>::s_static_array<class c_controller_interface, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@Vc_controller_interface@@$03@@QAA@XZ");
//};

//public: s_static_array<class c_verify_strings_task<2, 5>, 4>::s_static_array<class c_verify_strings_task<2, 5>, 4>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_verify_strings_task@$01$04@@$03@@QAA@XZ");
//};

//public: c_verify_strings_task<2, 5>::c_verify_strings_task<2, 5>(void)
//{
//    mangled_ppc("??0?$c_verify_strings_task@$01$04@@QAA@XZ");
//};

//public: virtual void c_verify_strings_task<2, 5>::reset(void)
//{
//    mangled_ppc("?reset@?$c_verify_strings_task@$01$04@@UAAXXZ");
//};

//public: long c_verify_strings_task_base::get_string_count(void) const
//{
//    mangled_ppc("?get_string_count@c_verify_strings_task_base@@QBAJXZ");
//};

//public: virtual unsigned long c_verify_strings_task<2, 5>::start(void *)
//{
//    mangled_ppc("?start@?$c_verify_strings_task@$01$04@@UAAKPAX@Z");
//};

//public: enum e_language c_verify_strings_task_base::get_language(void) const
//{
//    mangled_ppc("?get_language@c_verify_strings_task_base@@QBA?AW4e_language@@XZ");
//};

//merged_848FF820
//{
//    mangled_ppc("merged_848FF820");
//};

//public: virtual c_verify_strings_task<2, 5>::~c_verify_strings_task<2, 5>(void)
//{
//    mangled_ppc("??1?$c_verify_strings_task@$01$04@@UAA@XZ");
//};

//public: s_static_array<class c_static_wchar_string<5>, 2>::s_static_array<class c_static_wchar_string<5>, 2>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_static_wchar_string@$04@@$01@@QAA@XZ");
//};

//public: struct _STRING_DATA * s_static_array<struct _STRING_DATA, 2>::begin(void)
//{
//    mangled_ppc("?begin@?$s_static_array@U_STRING_DATA@@$01@@QAAPAU_STRING_DATA@@XZ");
//};

//public: class c_static_wchar_string<5> & s_static_array<class c_static_wchar_string<5>, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_static_wchar_string@$04@@$01@@QAAAAV?$c_static_wchar_string@$04@@J@Z");
//};

//public: c_static_wchar_string<5>::c_static_wchar_string<5>(void)
//{
//    mangled_ppc("??0?$c_static_wchar_string@$04@@QAA@XZ");
//};

//public: void c_static_wchar_string<5>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_wchar_string@$04@@QAAXXZ");
//};

//public: long c_static_wchar_string<5>::length(void) const
//{
//    mangled_ppc("?length@?$c_static_wchar_string@$04@@QBAJXZ");
//};

//public: wchar_t (& c_static_wchar_string<5>::get_buffer(void))[5]
//{
//    mangled_ppc("?get_buffer@?$c_static_wchar_string@$04@@QAAAAY04_WXZ");
//};

//public: struct _STRING_DATA & s_static_array<struct _STRING_DATA, 2>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@U_STRING_DATA@@$01@@QAAAAU_STRING_DATA@@J@Z");
//};

//public: static bool s_static_array<class c_static_wchar_string<5>, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_static_wchar_string@$04@@$01@@SA_NJ@Z");
//};

//public: static bool s_static_array<struct _STRING_DATA, 2>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@U_STRING_DATA@@$01@@SA_NJ@Z");
//};

//public: s_controller_globals::~s_controller_globals(void)
//{
//    mangled_ppc("??1s_controller_globals@@QAA@XZ");
//};

//public: s_static_array<class c_verify_strings_task<2, 5>, 4>::~s_static_array<class c_verify_strings_task<2, 5>, 4>(void)
//{
//    mangled_ppc("??1?$s_static_array@V?$c_verify_strings_task@$01$04@@$03@@QAA@XZ");
//};

//void g_controller_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_controller_globals@@YAXXZ");
//};

