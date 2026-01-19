/* ---------- headers */

#include "omaha\interface\user_interface_messages.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// void user_interface_messaging_initialize(void);
// public: void c_message_globals::initialize(void);
// void user_interface_messaging_dispose(void);
// public: void c_message_globals::dispose(void);
// void user_interface_messaging_initialize_for_new_map(void);
// public: void c_message_globals::initialize_for_new_map(void);
// void user_interface_messaging_dispose_from_old_map(void);
// public: void c_message_globals::dispose_from_old_map(void);
// public: void c_message_globals::empty_queue(void);
// public: class c_message const * c_message_globals::dequeue_node(struct c_message_globals::s_message_queue_node *, bool);
// public: bool c_message_globals::can_read(void) const;
// void user_interface_messaging_update(void);
// void user_interface_messaging_post(class c_message const *);
// public: void c_message_globals::queue(class c_message const *);
// public: bool c_message_globals::can_write(void) const;
// bool user_interface_messaging_get_next_message(long, enum e_controller_index, enum e_window_index, class c_message const **);
// public: void c_message_globals::get_next_message(long, enum e_controller_index, enum e_window_index, class c_message const **);
// public: static bool c_message_globals::message_match(class c_message const *, long, enum e_controller_index, enum e_window_index);
// bool user_interface_messaging_is_memory_in_message_queue(void const *);
// public: bool c_message_globals::is_memory_in_queue(void const *) const;
// void user_interface_messaging_pop(class c_message const *);
// public: void c_message_globals::dequeue(class c_message const *);
// bool user_interface_message_queue_is_empty(void);
// bool user_interface_xbox_guide_is_active(void);
// public: bool c_message_globals::get_xbox_guide_is_active(void) const;
// void update_xenon_messages(void);
// void voice_notify_box_in_private_char(bool);
// public: void c_message_globals::set_xbox_guide_is_active(bool);
// public: void * c_message_globals::get_system_message_notification_handle(void);
// void storage_devices_changed(void);
// public: c_message::c_message(enum e_ui_message_type, long, enum e_controller_index, enum e_window_index);
// merged_84983CC8;
// public: virtual c_message::~c_message(void);
// public: virtual void c_message::initialize(void);
// public: virtual void c_message::update(void);
// public: c_controller_input_message::c_controller_input_message(long, enum e_controller_index, enum e_window_index, enum e_event_type, enum e_controller_component, long);
// merged_84983DD0;
// public: virtual c_controller_input_message::~c_controller_input_message(void);
// public: bool c_controller_input_message::button_pressed(enum e_gamepad_button) const;
// public: c_xenon_message::c_xenon_message(enum e_controller_index, enum c_xenon_message::e_xenon_message_type, long);
// merged_849844F8;
// public: virtual c_xenon_message::~c_xenon_message(void);
// public: c_load_screen_message::c_load_screen_message(long, enum e_controller_index, enum e_window_index, long);
// merged_849847E0;
// public: virtual c_load_screen_message::~c_load_screen_message(void);
// public: c_dialog_result_message::c_dialog_result_message(long, enum e_controller_index, enum e_window_index, long, enum e_gui_dialog_choice);
// merged_849848C8;
// public: virtual c_dialog_result_message::~c_dialog_result_message(void);
// public: long c_message::get_screen_name(void) const;
// public: enum e_window_index c_message::get_window(void) const;
// public: virtual void c_load_screen_message::apply_initial_state(class c_gui_screen_widget *) const;
// public: c_message_globals::c_message_globals(void);
// public: c_message_globals::~c_message_globals(void);
// void g_message_globals::`dynamic atexit destructor'(void);

//void user_interface_messaging_initialize(void)
//{
//    mangled_ppc("?user_interface_messaging_initialize@@YAXXZ");
//};

//public: void c_message_globals::initialize(void)
//{
//    mangled_ppc("?initialize@c_message_globals@@QAAXXZ");
//};

//void user_interface_messaging_dispose(void)
//{
//    mangled_ppc("?user_interface_messaging_dispose@@YAXXZ");
//};

//public: void c_message_globals::dispose(void)
//{
//    mangled_ppc("?dispose@c_message_globals@@QAAXXZ");
//};

//void user_interface_messaging_initialize_for_new_map(void)
//{
//    mangled_ppc("?user_interface_messaging_initialize_for_new_map@@YAXXZ");
//};

//public: void c_message_globals::initialize_for_new_map(void)
//{
//    mangled_ppc("?initialize_for_new_map@c_message_globals@@QAAXXZ");
//};

//void user_interface_messaging_dispose_from_old_map(void)
//{
//    mangled_ppc("?user_interface_messaging_dispose_from_old_map@@YAXXZ");
//};

//public: void c_message_globals::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_message_globals@@QAAXXZ");
//};

//public: void c_message_globals::empty_queue(void)
//{
//    mangled_ppc("?empty_queue@c_message_globals@@QAAXXZ");
//};

//public: class c_message const * c_message_globals::dequeue_node(struct c_message_globals::s_message_queue_node *, bool)
//{
//    mangled_ppc("?dequeue_node@c_message_globals@@QAAPBVc_message@@PAUs_message_queue_node@1@_N@Z");
//};

//public: bool c_message_globals::can_read(void) const
//{
//    mangled_ppc("?can_read@c_message_globals@@QBA_NXZ");
//};

//void user_interface_messaging_update(void)
//{
//    mangled_ppc("?user_interface_messaging_update@@YAXXZ");
//};

//void user_interface_messaging_post(class c_message const *)
//{
//    mangled_ppc("?user_interface_messaging_post@@YAXPBVc_message@@@Z");
//};

//public: void c_message_globals::queue(class c_message const *)
//{
//    mangled_ppc("?queue@c_message_globals@@QAAXPBVc_message@@@Z");
//};

//public: bool c_message_globals::can_write(void) const
//{
//    mangled_ppc("?can_write@c_message_globals@@QBA_NXZ");
//};

//bool user_interface_messaging_get_next_message(long, enum e_controller_index, enum e_window_index, class c_message const **)
//{
//    mangled_ppc("?user_interface_messaging_get_next_message@@YA_NJW4e_controller_index@@W4e_window_index@@PAPBVc_message@@@Z");
//};

//public: void c_message_globals::get_next_message(long, enum e_controller_index, enum e_window_index, class c_message const **)
//{
//    mangled_ppc("?get_next_message@c_message_globals@@QAAXJW4e_controller_index@@W4e_window_index@@PAPBVc_message@@@Z");
//};

//public: static bool c_message_globals::message_match(class c_message const *, long, enum e_controller_index, enum e_window_index)
//{
//    mangled_ppc("?message_match@c_message_globals@@SA_NPBVc_message@@JW4e_controller_index@@W4e_window_index@@@Z");
//};

//bool user_interface_messaging_is_memory_in_message_queue(void const *)
//{
//    mangled_ppc("?user_interface_messaging_is_memory_in_message_queue@@YA_NPBX@Z");
//};

//public: bool c_message_globals::is_memory_in_queue(void const *) const
//{
//    mangled_ppc("?is_memory_in_queue@c_message_globals@@QBA_NPBX@Z");
//};

//void user_interface_messaging_pop(class c_message const *)
//{
//    mangled_ppc("?user_interface_messaging_pop@@YAXPBVc_message@@@Z");
//};

//public: void c_message_globals::dequeue(class c_message const *)
//{
//    mangled_ppc("?dequeue@c_message_globals@@QAAXPBVc_message@@@Z");
//};

//bool user_interface_message_queue_is_empty(void)
//{
//    mangled_ppc("?user_interface_message_queue_is_empty@@YA_NXZ");
//};

//bool user_interface_xbox_guide_is_active(void)
//{
//    mangled_ppc("?user_interface_xbox_guide_is_active@@YA_NXZ");
//};

//public: bool c_message_globals::get_xbox_guide_is_active(void) const
//{
//    mangled_ppc("?get_xbox_guide_is_active@c_message_globals@@QBA_NXZ");
//};

//void update_xenon_messages(void)
//{
//    mangled_ppc("?update_xenon_messages@@YAXXZ");
//};

//void voice_notify_box_in_private_char(bool)
//{
//    mangled_ppc("?voice_notify_box_in_private_char@@YAX_N@Z");
//};

//public: void c_message_globals::set_xbox_guide_is_active(bool)
//{
//    mangled_ppc("?set_xbox_guide_is_active@c_message_globals@@QAAX_N@Z");
//};

//public: void * c_message_globals::get_system_message_notification_handle(void)
//{
//    mangled_ppc("?get_system_message_notification_handle@c_message_globals@@QAAPAXXZ");
//};

//void storage_devices_changed(void)
//{
//    mangled_ppc("?storage_devices_changed@@YAXXZ");
//};

//public: c_message::c_message(enum e_ui_message_type, long, enum e_controller_index, enum e_window_index)
//{
//    mangled_ppc("??0c_message@@QAA@W4e_ui_message_type@@JW4e_controller_index@@W4e_window_index@@@Z");
//};

//merged_84983CC8
//{
//    mangled_ppc("merged_84983CC8");
//};

//public: virtual c_message::~c_message(void)
//{
//    mangled_ppc("??1c_message@@UAA@XZ");
//};

//public: virtual void c_message::initialize(void)
//{
//    mangled_ppc("?initialize@c_message@@UAAXXZ");
//};

//public: virtual void c_message::update(void)
//{
//    mangled_ppc("?update@c_message@@UAAXXZ");
//};

//public: c_controller_input_message::c_controller_input_message(long, enum e_controller_index, enum e_window_index, enum e_event_type, enum e_controller_component, long)
//{
//    mangled_ppc("??0c_controller_input_message@@QAA@JW4e_controller_index@@W4e_window_index@@W4e_event_type@@W4e_controller_component@@J@Z");
//};

//merged_84983DD0
//{
//    mangled_ppc("merged_84983DD0");
//};

//public: virtual c_controller_input_message::~c_controller_input_message(void)
//{
//    mangled_ppc("??1c_controller_input_message@@UAA@XZ");
//};

//public: bool c_controller_input_message::button_pressed(enum e_gamepad_button) const
//{
//    mangled_ppc("?button_pressed@c_controller_input_message@@QBA_NW4e_gamepad_button@@@Z");
//};

//public: c_xenon_message::c_xenon_message(enum e_controller_index, enum c_xenon_message::e_xenon_message_type, long)
//{
//    mangled_ppc("??0c_xenon_message@@QAA@W4e_controller_index@@W4e_xenon_message_type@0@J@Z");
//};

//merged_849844F8
//{
//    mangled_ppc("merged_849844F8");
//};

//public: virtual c_xenon_message::~c_xenon_message(void)
//{
//    mangled_ppc("??1c_xenon_message@@UAA@XZ");
//};

//public: c_load_screen_message::c_load_screen_message(long, enum e_controller_index, enum e_window_index, long)
//{
//    mangled_ppc("??0c_load_screen_message@@QAA@JW4e_controller_index@@W4e_window_index@@J@Z");
//};

//merged_849847E0
//{
//    mangled_ppc("merged_849847E0");
//};

//public: virtual c_load_screen_message::~c_load_screen_message(void)
//{
//    mangled_ppc("??1c_load_screen_message@@UAA@XZ");
//};

//public: c_dialog_result_message::c_dialog_result_message(long, enum e_controller_index, enum e_window_index, long, enum e_gui_dialog_choice)
//{
//    mangled_ppc("??0c_dialog_result_message@@QAA@JW4e_controller_index@@W4e_window_index@@JW4e_gui_dialog_choice@@@Z");
//};

//merged_849848C8
//{
//    mangled_ppc("merged_849848C8");
//};

//public: virtual c_dialog_result_message::~c_dialog_result_message(void)
//{
//    mangled_ppc("??1c_dialog_result_message@@UAA@XZ");
//};

//public: long c_message::get_screen_name(void) const
//{
//    mangled_ppc("?get_screen_name@c_message@@QBAJXZ");
//};

//public: enum e_window_index c_message::get_window(void) const
//{
//    mangled_ppc("?get_window@c_message@@QBA?AW4e_window_index@@XZ");
//};

//public: virtual void c_load_screen_message::apply_initial_state(class c_gui_screen_widget *) const
//{
//    mangled_ppc("?apply_initial_state@c_load_screen_message@@UBAXPAVc_gui_screen_widget@@@Z");
//};

//public: c_message_globals::c_message_globals(void)
//{
//    mangled_ppc("??0c_message_globals@@QAA@XZ");
//};

//public: c_message_globals::~c_message_globals(void)
//{
//    mangled_ppc("??1c_message_globals@@QAA@XZ");
//};

//void g_message_globals::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_message_globals@@YAXXZ");
//};

