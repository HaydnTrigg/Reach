/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class c_storage_device_manager_globals_container g_storage_device_manager_globals; // "?g_storage_device_manager_globals@@3Vc_storage_device_manager_globals_container@@A"
// struct s_storage_device_manager_main_thread_globals g_storage_device_manager_main_thread_globals; // "?g_storage_device_manager_main_thread_globals@@3Us_storage_device_manager_main_thread_globals@@A"

// void storage_device_manager_initialize(void);
// public: void c_storage_device::set_controller_index(enum e_controller_index);
// void storage_device_manager_dispose(void);
// void storage_device_manager_update(void);
// void storage_device_manager_storage_devices_changed(void);
// public: void c_controller_interface::set_storage_device_selection_performed(bool);
// void storage_device_manager_display_device_selection_guide_interface(enum e_controller_index);
// public: bool c_storage_device::is_being_selected(void) const;
// bool storage_device_manager_handle_dialog_result_message(class c_dialog_result_message const *);
// public: enum e_controller_index c_message::get_controller(void) const;
// public: enum e_gui_dialog_choice c_dialog_result_message::get_dialog_result(void) const;
// bool storage_device_manager_device_selection_active(enum e_controller_index);
// bool storage_device_manager_device_selection_cancelled_by_user(enum e_controller_index);
// public: bool c_storage_device::device_selection_cancelled(void) const;
// public: c_storage_device_manager_globals_accessor::c_storage_device_manager_globals_accessor(void);
// public: c_storage_device_manager_globals_accessor::~c_storage_device_manager_globals_accessor(void);
// public: struct s_storage_device_manager_globals const * c_storage_device_manager_globals_accessor::operator->(void) const;
// public: struct s_storage_device_manager_globals * c_storage_device_manager_globals_accessor::operator->(void);
// public: c_storage_device_accessor::c_storage_device_accessor(void);
// public: c_storage_device_accessor::c_storage_device_accessor(enum e_controller_index);
// public: c_storage_device_accessor::~c_storage_device_accessor(void);
// public: class c_storage_device const * c_storage_device_accessor::operator->(void) const;
// public: class c_storage_device * c_storage_device_accessor::operator->(void);
// struct s_storage_device_manager_main_thread_globals * get_main_thread_globals(void);
// public: virtual bool c_storage_device_manager_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: virtual void c_storage_device_manager_controller_monitor::handle_controller_sign_in(enum e_controller_index);
// public: virtual void c_storage_device_manager_controller_monitor::handle_controller_sign_out(enum e_controller_index);
// public: bool c_flags_no_init<enum c_storage_device::e_storage_device_flag, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum c_storage_device::e_storage_device_flag) const;
// public: void c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::set(enum e_controller_state_flags, bool);
// void zero_and_reconstruct<struct s_storage_device_manager_main_thread_globals>(struct s_storage_device_manager_main_thread_globals *);
// public: static bool c_flags_no_init<enum c_storage_device::e_storage_device_flag, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum c_storage_device::e_storage_device_flag);
// private: static unsigned char c_flags_no_init<enum c_storage_device::e_storage_device_flag, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum c_storage_device::e_storage_device_flag);
// void reconstruct<struct s_storage_device_manager_main_thread_globals>(struct s_storage_device_manager_main_thread_globals *);
// public: s_storage_device_manager_main_thread_globals::s_storage_device_manager_main_thread_globals(void);
// public: c_storage_device_manager_controller_monitor::c_storage_device_manager_controller_monitor(void);
// public: c_storage_device_manager_globals_container::c_storage_device_manager_globals_container(void);
// public: s_storage_device_manager_globals::s_storage_device_manager_globals(void);
// public: c_storage_device_manager_globals_container::~c_storage_device_manager_globals_container(void);
// public: s_storage_device_manager_globals::~s_storage_device_manager_globals(void);
// public: c_storage_device::~c_storage_device(void);
// public: virtual c_storage_device_selector_overlapped_task::~c_storage_device_selector_overlapped_task(void);
// void g_storage_device_manager_globals::`dynamic atexit destructor'(void);

//void storage_device_manager_initialize(void)
//{
//    mangled_ppc("?storage_device_manager_initialize@@YAXXZ");
//};

//public: void c_storage_device::set_controller_index(enum e_controller_index)
//{
//    mangled_ppc("?set_controller_index@c_storage_device@@QAAXW4e_controller_index@@@Z");
//};

//void storage_device_manager_dispose(void)
//{
//    mangled_ppc("?storage_device_manager_dispose@@YAXXZ");
//};

//void storage_device_manager_update(void)
//{
//    mangled_ppc("?storage_device_manager_update@@YAXXZ");
//};

//void storage_device_manager_storage_devices_changed(void)
//{
//    mangled_ppc("?storage_device_manager_storage_devices_changed@@YAXXZ");
//};

//public: void c_controller_interface::set_storage_device_selection_performed(bool)
//{
//    mangled_ppc("?set_storage_device_selection_performed@c_controller_interface@@QAAX_N@Z");
//};

//void storage_device_manager_display_device_selection_guide_interface(enum e_controller_index)
//{
//    mangled_ppc("?storage_device_manager_display_device_selection_guide_interface@@YAXW4e_controller_index@@@Z");
//};

//public: bool c_storage_device::is_being_selected(void) const
//{
//    mangled_ppc("?is_being_selected@c_storage_device@@QBA_NXZ");
//};

//bool storage_device_manager_handle_dialog_result_message(class c_dialog_result_message const *)
//{
//    mangled_ppc("?storage_device_manager_handle_dialog_result_message@@YA_NPBVc_dialog_result_message@@@Z");
//};

//public: enum e_controller_index c_message::get_controller(void) const
//{
//    mangled_ppc("?get_controller@c_message@@QBA?AW4e_controller_index@@XZ");
//};

//public: enum e_gui_dialog_choice c_dialog_result_message::get_dialog_result(void) const
//{
//    mangled_ppc("?get_dialog_result@c_dialog_result_message@@QBA?AW4e_gui_dialog_choice@@XZ");
//};

//bool storage_device_manager_device_selection_active(enum e_controller_index)
//{
//    mangled_ppc("?storage_device_manager_device_selection_active@@YA_NW4e_controller_index@@@Z");
//};

//bool storage_device_manager_device_selection_cancelled_by_user(enum e_controller_index)
//{
//    mangled_ppc("?storage_device_manager_device_selection_cancelled_by_user@@YA_NW4e_controller_index@@@Z");
//};

//public: bool c_storage_device::device_selection_cancelled(void) const
//{
//    mangled_ppc("?device_selection_cancelled@c_storage_device@@QBA_NXZ");
//};

//public: c_storage_device_manager_globals_accessor::c_storage_device_manager_globals_accessor(void)
//{
//    mangled_ppc("??0c_storage_device_manager_globals_accessor@@QAA@XZ");
//};

//public: c_storage_device_manager_globals_accessor::~c_storage_device_manager_globals_accessor(void)
//{
//    mangled_ppc("??1c_storage_device_manager_globals_accessor@@QAA@XZ");
//};

//public: struct s_storage_device_manager_globals const * c_storage_device_manager_globals_accessor::operator->(void) const
//{
//    mangled_ppc("??Cc_storage_device_manager_globals_accessor@@QBAPBUs_storage_device_manager_globals@@XZ");
//};

//public: struct s_storage_device_manager_globals * c_storage_device_manager_globals_accessor::operator->(void)
//{
//    mangled_ppc("??Cc_storage_device_manager_globals_accessor@@QAAPAUs_storage_device_manager_globals@@XZ");
//};

//public: c_storage_device_accessor::c_storage_device_accessor(void)
//{
//    mangled_ppc("??0c_storage_device_accessor@@QAA@XZ");
//};

//public: c_storage_device_accessor::c_storage_device_accessor(enum e_controller_index)
//{
//    mangled_ppc("??0c_storage_device_accessor@@QAA@W4e_controller_index@@@Z");
//};

//public: c_storage_device_accessor::~c_storage_device_accessor(void)
//{
//    mangled_ppc("??1c_storage_device_accessor@@QAA@XZ");
//};

//public: class c_storage_device const * c_storage_device_accessor::operator->(void) const
//{
//    mangled_ppc("??Cc_storage_device_accessor@@QBAPBVc_storage_device@@XZ");
//};

//public: class c_storage_device * c_storage_device_accessor::operator->(void)
//{
//    mangled_ppc("??Cc_storage_device_accessor@@QAAPAVc_storage_device@@XZ");
//};

//struct s_storage_device_manager_main_thread_globals * get_main_thread_globals(void)
//{
//    mangled_ppc("?get_main_thread_globals@@YAPAUs_storage_device_manager_main_thread_globals@@XZ");
//};

//public: virtual bool c_storage_device_manager_controller_monitor::controller_should_be_monitored(enum e_controller_index, class c_flags<enum e_controller_monitor_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?controller_should_be_monitored@c_storage_device_manager_controller_monitor@@UAA_NW4e_controller_index@@V?$c_flags@W4e_controller_monitor_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: virtual void c_storage_device_manager_controller_monitor::handle_controller_sign_in(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_in@c_storage_device_manager_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//public: virtual void c_storage_device_manager_controller_monitor::handle_controller_sign_out(enum e_controller_index)
//{
//    mangled_ppc("?handle_controller_sign_out@c_storage_device_manager_controller_monitor@@UAAXW4e_controller_index@@@Z");
//};

//public: bool c_flags_no_init<enum c_storage_device::e_storage_device_flag, unsigned char, 2, struct s_default_enum_string_resolver>::test(enum c_storage_device::e_storage_device_flag) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_storage_device_flag@c_storage_device@@E$01Us_default_enum_string_resolver@@@@QBA_NW4e_storage_device_flag@c_storage_device@@@Z");
//};

//public: void c_flags_no_init<enum e_controller_state_flags, unsigned long, 21, struct s_default_enum_string_resolver>::set(enum e_controller_state_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_controller_state_flags@@K$0BF@Us_default_enum_string_resolver@@@@QAAXW4e_controller_state_flags@@_N@Z");
//};

//void zero_and_reconstruct<struct s_storage_device_manager_main_thread_globals>(struct s_storage_device_manager_main_thread_globals *)
//{
//    mangled_ppc("??$zero_and_reconstruct@Us_storage_device_manager_main_thread_globals@@@@YAXPAUs_storage_device_manager_main_thread_globals@@@Z");
//};

//public: static bool c_flags_no_init<enum c_storage_device::e_storage_device_flag, unsigned char, 2, struct s_default_enum_string_resolver>::valid_bit(enum c_storage_device::e_storage_device_flag)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_storage_device_flag@c_storage_device@@E$01Us_default_enum_string_resolver@@@@SA_NW4e_storage_device_flag@c_storage_device@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_storage_device::e_storage_device_flag, unsigned char, 2, struct s_default_enum_string_resolver>::flag_size_type(enum c_storage_device::e_storage_device_flag)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_storage_device_flag@c_storage_device@@E$01Us_default_enum_string_resolver@@@@CAEW4e_storage_device_flag@c_storage_device@@@Z");
//};

//void reconstruct<struct s_storage_device_manager_main_thread_globals>(struct s_storage_device_manager_main_thread_globals *)
//{
//    mangled_ppc("??$reconstruct@Us_storage_device_manager_main_thread_globals@@@@YAXPAUs_storage_device_manager_main_thread_globals@@@Z");
//};

//public: s_storage_device_manager_main_thread_globals::s_storage_device_manager_main_thread_globals(void)
//{
//    mangled_ppc("??0s_storage_device_manager_main_thread_globals@@QAA@XZ");
//};

//public: c_storage_device_manager_controller_monitor::c_storage_device_manager_controller_monitor(void)
//{
//    mangled_ppc("??0c_storage_device_manager_controller_monitor@@QAA@XZ");
//};

//public: c_storage_device_manager_globals_container::c_storage_device_manager_globals_container(void)
//{
//    mangled_ppc("??0c_storage_device_manager_globals_container@@QAA@XZ");
//};

//public: s_storage_device_manager_globals::s_storage_device_manager_globals(void)
//{
//    mangled_ppc("??0s_storage_device_manager_globals@@QAA@XZ");
//};

//public: c_storage_device_manager_globals_container::~c_storage_device_manager_globals_container(void)
//{
//    mangled_ppc("??1c_storage_device_manager_globals_container@@QAA@XZ");
//};

//public: s_storage_device_manager_globals::~s_storage_device_manager_globals(void)
//{
//    mangled_ppc("??1s_storage_device_manager_globals@@QAA@XZ");
//};

//public: c_storage_device::~c_storage_device(void)
//{
//    mangled_ppc("??1c_storage_device@@QAA@XZ");
//};

//public: virtual c_storage_device_selector_overlapped_task::~c_storage_device_selector_overlapped_task(void)
//{
//    mangled_ppc("??1c_storage_device_selector_overlapped_task@@UAA@XZ");
//};

//void g_storage_device_manager_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_storage_device_manager_globals@@YAXXZ");
//};

