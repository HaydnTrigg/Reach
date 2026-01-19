/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static unsigned int const c_custom_bitmap_manager::k_capacity; // "?k_capacity@c_custom_bitmap_manager@@0IB"
// public: static long const s_static_array<class c_custom_bitmap, 32>::k_element_count; // "?k_element_count@?$s_static_array@Vc_custom_bitmap@@$0CA@@@2JB"

// class c_window_manager * window_manager_get(void);
// public: c_window_manager::c_window_manager(void);
// public: c_hs_thread_handle::c_hs_thread_handle(void);
// public: void c_window_manager::initialize(void);
// public: void c_window_manager::dispose(void);
// public: void c_window_manager::initialize_for_new_map(void);
// public: void c_window_manager::dispose_from_old_map(void);
// public: void c_hs_thread_handle::release(void);
// public: void c_window_manager::prepare_for_tag_reload(void);
// public: void c_cui_screen_manager::set_reload(bool);
// public: void c_window_manager::update(unsigned long);
// public: void c_cui_screen_manager::set_milliseconds(unsigned long);
// public: void c_window_manager::handle_global_controller_event(struct s_event_record const *);
// public: bool c_cui_screen_widget::is_controller_index_input(enum e_controller_index) const;
// public: bool c_cui_screen_widget::get_recognize_unsigned_in_input(void) const;
// private: void c_window_manager::process_unhandled_events(unsigned long);
// public: c_cui_input_event::c_cui_input_event(enum e_event_type, enum e_controller_index, enum e_controller_component, short);
// public: bool c_cui_widget::dispatch_input_event(class c_cui_update_context *, class c_cui_input_event *);
// public: void c_window_manager::render(enum e_surface, enum e_window_index, enum e_output_user_index, union short_rectangle2d const *, bool);
// public: bool c_window_manager::controller_input_should_be_suppressed(enum e_controller_index);
// public: void c_window_manager::set_fade_out_and_quit_campaign(bool);
// public: bool c_window_manager::get_fade_out_and_quit_campaign(void) const;
// public: void c_window_manager::run_screen_hs_script_by_index(long, bool);
// public: c_hs_thread_handle::c_hs_thread_handle(long);
// ??Bc_hs_thread_handle@@QBAPQ0@JXZ;
// public: void c_hs_thread_handle::swap(class c_hs_thread_handle &);
// public: void c_window_manager::run_screen_hs_script_by_name(long, bool);
// public: void c_window_manager::set_fading(bool);
// public: void c_window_manager::set_fading_instant(bool);
// public: bool c_window_manager::get_fading(void) const;
// public: float c_window_manager::get_fading_amount(void) const;
// public: bool c_window_manager::get_fading_min(void) const;
// public: bool c_window_manager::get_fading_max(void) const;
// public: void c_window_manager::update_fade(unsigned long);
// bool should_silence_sound(void);
// void window_manager_load_screen_hs(long);
// void cui_load_screen_hs(long);
// void cui_load_themed_screen_hs(long, long);
// void cui_load_dialog_hs(long);
// void window_manager_reset_screens(void);
// void window_manager_storage_devices_changed(void);
// bool window_manager_handle_dialog_result_message(class c_dialog_result_message const *);
// public: c_flags<enum c_cui_input_event::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum c_cui_input_event::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum c_cui_input_event::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_cui_input_event::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const;
// private: static unsigned char c_flags_no_init<enum c_cui_input_event::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum c_cui_input_event::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_cui_input_event::e_flags);
// public: long c_message::get_game_time_at_creation(void) const;
// public: long c_controller_input_message::get_event_value(void) const;
// public: bool c_load_screen_message::get_try_load_cui_screen(void) const;
// public: c_window_manager::~c_window_manager(void);
// void g_window_manager::`dynamic atexit destructor'(void);

//class c_window_manager * window_manager_get(void)
//{
//    mangled_ppc("?window_manager_get@@YAPAVc_window_manager@@XZ");
//};

//public: c_window_manager::c_window_manager(void)
//{
//    mangled_ppc("??0c_window_manager@@QAA@XZ");
//};

//public: c_hs_thread_handle::c_hs_thread_handle(void)
//{
//    mangled_ppc("??0c_hs_thread_handle@@QAA@XZ");
//};

//public: void c_window_manager::initialize(void)
//{
//    mangled_ppc("?initialize@c_window_manager@@QAAXXZ");
//};

//public: void c_window_manager::dispose(void)
//{
//    mangled_ppc("?dispose@c_window_manager@@QAAXXZ");
//};

//public: void c_window_manager::initialize_for_new_map(void)
//{
//    mangled_ppc("?initialize_for_new_map@c_window_manager@@QAAXXZ");
//};

//public: void c_window_manager::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_window_manager@@QAAXXZ");
//};

//public: void c_hs_thread_handle::release(void)
//{
//    mangled_ppc("?release@c_hs_thread_handle@@QAAXXZ");
//};

//public: void c_window_manager::prepare_for_tag_reload(void)
//{
//    mangled_ppc("?prepare_for_tag_reload@c_window_manager@@QAAXXZ");
//};

//public: void c_cui_screen_manager::set_reload(bool)
//{
//    mangled_ppc("?set_reload@c_cui_screen_manager@@QAAX_N@Z");
//};

//public: void c_window_manager::update(unsigned long)
//{
//    mangled_ppc("?update@c_window_manager@@QAAXK@Z");
//};

//public: void c_cui_screen_manager::set_milliseconds(unsigned long)
//{
//    mangled_ppc("?set_milliseconds@c_cui_screen_manager@@QAAXK@Z");
//};

//public: void c_window_manager::handle_global_controller_event(struct s_event_record const *)
//{
//    mangled_ppc("?handle_global_controller_event@c_window_manager@@QAAXPBUs_event_record@@@Z");
//};

//public: bool c_cui_screen_widget::is_controller_index_input(enum e_controller_index) const
//{
//    mangled_ppc("?is_controller_index_input@c_cui_screen_widget@@QBA_NW4e_controller_index@@@Z");
//};

//public: bool c_cui_screen_widget::get_recognize_unsigned_in_input(void) const
//{
//    mangled_ppc("?get_recognize_unsigned_in_input@c_cui_screen_widget@@QBA_NXZ");
//};

//private: void c_window_manager::process_unhandled_events(unsigned long)
//{
//    mangled_ppc("?process_unhandled_events@c_window_manager@@AAAXK@Z");
//};

//public: c_cui_input_event::c_cui_input_event(enum e_event_type, enum e_controller_index, enum e_controller_component, short)
//{
//    mangled_ppc("??0c_cui_input_event@@QAA@W4e_event_type@@W4e_controller_index@@W4e_controller_component@@F@Z");
//};

//public: bool c_cui_widget::dispatch_input_event(class c_cui_update_context *, class c_cui_input_event *)
//{
//    mangled_ppc("?dispatch_input_event@c_cui_widget@@QAA_NPAVc_cui_update_context@@PAVc_cui_input_event@@@Z");
//};

//public: void c_window_manager::render(enum e_surface, enum e_window_index, enum e_output_user_index, union short_rectangle2d const *, bool)
//{
//    mangled_ppc("?render@c_window_manager@@QAAXW4e_surface@@W4e_window_index@@W4e_output_user_index@@PBTshort_rectangle2d@@_N@Z");
//};

//public: bool c_window_manager::controller_input_should_be_suppressed(enum e_controller_index)
//{
//    mangled_ppc("?controller_input_should_be_suppressed@c_window_manager@@QAA_NW4e_controller_index@@@Z");
//};

//public: void c_window_manager::set_fade_out_and_quit_campaign(bool)
//{
//    mangled_ppc("?set_fade_out_and_quit_campaign@c_window_manager@@QAAX_N@Z");
//};

//public: bool c_window_manager::get_fade_out_and_quit_campaign(void) const
//{
//    mangled_ppc("?get_fade_out_and_quit_campaign@c_window_manager@@QBA_NXZ");
//};

//public: void c_window_manager::run_screen_hs_script_by_index(long, bool)
//{
//    mangled_ppc("?run_screen_hs_script_by_index@c_window_manager@@QAAXJ_N@Z");
//};

//public: c_hs_thread_handle::c_hs_thread_handle(long)
//{
//    mangled_ppc("??0c_hs_thread_handle@@QAA@J@Z");
//};

//??Bc_hs_thread_handle@@QBAPQ0@JXZ
//{
//    mangled_ppc("??Bc_hs_thread_handle@@QBAPQ0@JXZ");
//};

//public: void c_hs_thread_handle::swap(class c_hs_thread_handle &)
//{
//    mangled_ppc("?swap@c_hs_thread_handle@@QAAXAAV1@@Z");
//};

//public: void c_window_manager::run_screen_hs_script_by_name(long, bool)
//{
//    mangled_ppc("?run_screen_hs_script_by_name@c_window_manager@@QAAXJ_N@Z");
//};

//public: void c_window_manager::set_fading(bool)
//{
//    mangled_ppc("?set_fading@c_window_manager@@QAAX_N@Z");
//};

//public: void c_window_manager::set_fading_instant(bool)
//{
//    mangled_ppc("?set_fading_instant@c_window_manager@@QAAX_N@Z");
//};

//public: bool c_window_manager::get_fading(void) const
//{
//    mangled_ppc("?get_fading@c_window_manager@@QBA_NXZ");
//};

//public: float c_window_manager::get_fading_amount(void) const
//{
//    mangled_ppc("?get_fading_amount@c_window_manager@@QBAMXZ");
//};

//public: bool c_window_manager::get_fading_min(void) const
//{
//    mangled_ppc("?get_fading_min@c_window_manager@@QBA_NXZ");
//};

//public: bool c_window_manager::get_fading_max(void) const
//{
//    mangled_ppc("?get_fading_max@c_window_manager@@QBA_NXZ");
//};

//public: void c_window_manager::update_fade(unsigned long)
//{
//    mangled_ppc("?update_fade@c_window_manager@@QAAXK@Z");
//};

//bool should_silence_sound(void)
//{
//    mangled_ppc("?should_silence_sound@@YA_NXZ");
//};

//void window_manager_load_screen_hs(long)
//{
//    mangled_ppc("?window_manager_load_screen_hs@@YAXJ@Z");
//};

//void cui_load_screen_hs(long)
//{
//    mangled_ppc("?cui_load_screen_hs@@YAXJ@Z");
//};

//void cui_load_themed_screen_hs(long, long)
//{
//    mangled_ppc("?cui_load_themed_screen_hs@@YAXJJ@Z");
//};

//void cui_load_dialog_hs(long)
//{
//    mangled_ppc("?cui_load_dialog_hs@@YAXJ@Z");
//};

//void window_manager_reset_screens(void)
//{
//    mangled_ppc("?window_manager_reset_screens@@YAXXZ");
//};

//void window_manager_storage_devices_changed(void)
//{
//    mangled_ppc("?window_manager_storage_devices_changed@@YAXXZ");
//};

//bool window_manager_handle_dialog_result_message(class c_dialog_result_message const *)
//{
//    mangled_ppc("?window_manager_handle_dialog_result_message@@YA_NPBVc_dialog_result_message@@@Z");
//};

//public: c_flags<enum c_cui_input_event::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::c_flags<enum c_cui_input_event::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_flags@c_cui_input_event@@E$00Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum c_cui_input_event::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_flags@c_cui_input_event@@E$00Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_cui_input_event::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_flags@c_cui_input_event@@E$00Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum c_cui_input_event::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_flags@c_cui_input_event@@E$00Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum c_cui_input_event::e_flags, unsigned char, 1, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_cui_input_event::e_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_flags@c_cui_input_event@@E$00Us_default_enum_string_resolver@@@@CAEW4e_flags@c_cui_input_event@@@Z");
//};

//public: long c_message::get_game_time_at_creation(void) const
//{
//    mangled_ppc("?get_game_time_at_creation@c_message@@QBAJXZ");
//};

//public: long c_controller_input_message::get_event_value(void) const
//{
//    mangled_ppc("?get_event_value@c_controller_input_message@@QBAJXZ");
//};

//public: bool c_load_screen_message::get_try_load_cui_screen(void) const
//{
//    mangled_ppc("?get_try_load_cui_screen@c_load_screen_message@@QBA_NXZ");
//};

//public: c_window_manager::~c_window_manager(void)
//{
//    mangled_ppc("??1c_window_manager@@QAA@XZ");
//};

//void g_window_manager::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_window_manager@@YAXXZ");
//};

