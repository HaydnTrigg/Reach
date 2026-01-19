/* ---------- headers */

#include "omaha\interface\user_interface_error_manager.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// class c_gui_error_manager * user_interface_error_manager_get(void);
// public: c_gui_queued_error::c_gui_queued_error(void);
// public: void c_gui_queued_error::set(struct s_gui_alert_description const *, wchar_t const *, wchar_t const *, enum e_controller_index, long, bool, bool);
// public: bool c_gui_queued_error::match(enum e_controller_index, long, wchar_t const *) const;
// public: c_gui_error_manager::c_gui_error_manager(void);
// public: void c_gui_error_manager::initialize(void);
// public: void c_gui_error_manager::dispose(void);
// public: void c_gui_error_manager::initialize_for_new_map(void);
// public: void c_gui_error_manager::dispose_from_old_map(void);
// public: void c_gui_error_manager::update(unsigned long);
// private: static enum c_gui_error_manager::e_alert_display_mode c_gui_error_manager::get_error_display_mode(enum e_controller_index *);
// public: bool c_gui_error_manager::post_toast(long);
// public: bool c_gui_error_manager::post_controller_toast(long, enum e_controller_index);
// public: bool c_gui_error_manager::post_toast_with_custom_message(long, wchar_t const *, wchar_t const *);
// public: bool c_gui_error_manager::post_controller_toast_with_custom_message(long, enum e_controller_index, wchar_t const *, wchar_t const *);
// public: bool c_gui_error_manager::post_error(long, enum e_controller_index, bool);
// public: bool c_gui_error_manager::post_error_with_custom_message(long, wchar_t const *, enum e_controller_index, bool);
// private: bool c_gui_error_manager::post_error_with_custom_message(long, wchar_t const *, wchar_t const *, enum e_controller_index, bool, bool);
// public: void c_gui_error_manager::clear_error(long, enum e_controller_index);
// public: void c_gui_error_manager::clear_error_with_custom_message(long, enum e_controller_index, wchar_t const *);
// public: void c_gui_error_manager::resolve_error(long, enum e_controller_index);
// public: void c_gui_error_manager::resolve_error_with_custom_message(long, enum e_controller_index, wchar_t const *);
// public: void c_gui_error_manager::clear_all_errors(void);
// public: void c_gui_error_manager::dismiss_auto_dismissable_errors(enum e_controller_index);
// private: class c_gui_queued_error const * c_gui_error_manager::get_current_for_user(enum e_controller_index);
// private: class c_gui_queued_error const * c_gui_error_manager::get_current_for_window(enum e_window_index);
// public: class c_gui_queued_error const * c_gui_error_manager::get_error(enum e_controller_index, long, wchar_t const *) const;
// public: class c_gui_queued_error const * c_gui_error_manager::get_error(enum e_controller_index, struct s_cui_alert_parameters const *) const;
// public: bool c_gui_error_manager::any_error_active_for_controller(enum e_controller_index);
// public: bool c_gui_error_manager::any_error_active_for_window(enum e_window_index);
// private: void c_gui_error_manager::clean_out_error_queue(void);
// private: void c_gui_error_manager::sort_queue(void);
// int queued_error_sort_proc(void const *, void const *);
// public: enum e_gui_error_category c_enum_no_init<enum e_gui_error_category, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_gui_error_category(void) const;
// public: enum e_gui_error_icon c_enum_no_init<enum e_gui_error_icon, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_gui_error_icon(void) const;
// public: c_typed_opaque_data<class c_cui_alert_reference, 8, 4>::c_typed_opaque_data<class c_cui_alert_reference, 8, 4>(void);
// public: class c_cui_alert_reference * c_typed_opaque_data<class c_cui_alert_reference, 8, 4>::construct(void);
// public: void c_typed_opaque_data<class c_cui_alert_reference, 8, 4>::destruct(void);
// public: class c_cui_alert_reference * c_typed_opaque_data<class c_cui_alert_reference, 8, 4>::get(void);
// public: c_cui_alert_reference::c_cui_alert_reference(void);
// public: void * c_cui_alert_reference::`scalar deleting destructor'(unsigned int);
// public: c_cui_alert_reference::~c_cui_alert_reference(void);
// public: class c_cui_alert_reference * c_opaque_data<class c_cui_alert_reference, 8, 4>::get(void);
// public: class c_enum<enum e_gui_error_category, unsigned char, 0, 4, struct s_default_enum_string_resolver> c_cui_alert_reference::get_category(void) const;
// protected: class c_cui_alert_pipe * c_cui_alert_reference::get_pipe(void) const;
// public: bool c_gui_queued_error::is_valid(void) const;
// public: void c_gui_queued_error::clear(void);
// public: bool c_gui_queued_error::get_resolved(void) const;
// public: void c_gui_queued_error::set_resolved(bool);
// public: long c_gui_queued_error::get_error_name(void) const;
// public: enum e_gui_error_category c_gui_queued_error::get_error_category(void) const;
// public: bool c_gui_queued_error::get_auto_dismissable(void) const;
// public: bool c_gui_queued_error::get_requires_resolution(void) const;
// public: bool c_gui_queued_error::get_blocking(void) const;
// public: long c_gui_queued_error::get_posted_time(void) const;
// public: void c_gui_queued_error::set_posted_time(long);
// public: wchar_t const * c_gui_queued_error::get_custom_title(void) const;
// public: wchar_t const * c_gui_queued_error::get_custom_message(void) const;
// public: enum e_controller_index c_gui_queued_error::get_controller_index(void) const;
// public: class c_cui_component * c_cui_component::get_prev_sibling(void) const;
// public: c_enum<enum e_gui_error_category, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_gui_error_category, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_gui_error_category);
// public: c_gui_error_manager::~c_gui_error_manager(void);
// public: c_typed_opaque_data<class c_cui_alert_reference, 8, 4>::~c_typed_opaque_data<class c_cui_alert_reference, 8, 4>(void);
// void g_gui_error_manager::`dynamic atexit destructor'(void);

//class c_gui_error_manager * user_interface_error_manager_get(void)
//{
//    mangled_ppc("?user_interface_error_manager_get@@YAPAVc_gui_error_manager@@XZ");
//};

//public: c_gui_queued_error::c_gui_queued_error(void)
//{
//    mangled_ppc("??0c_gui_queued_error@@QAA@XZ");
//};

//public: void c_gui_queued_error::set(struct s_gui_alert_description const *, wchar_t const *, wchar_t const *, enum e_controller_index, long, bool, bool)
//{
//    mangled_ppc("?set@c_gui_queued_error@@QAAXPBUs_gui_alert_description@@PB_W1W4e_controller_index@@J_N3@Z");
//};

//public: bool c_gui_queued_error::match(enum e_controller_index, long, wchar_t const *) const
//{
//    mangled_ppc("?match@c_gui_queued_error@@QBA_NW4e_controller_index@@JPB_W@Z");
//};

//public: c_gui_error_manager::c_gui_error_manager(void)
//{
//    mangled_ppc("??0c_gui_error_manager@@QAA@XZ");
//};

//public: void c_gui_error_manager::initialize(void)
//{
//    mangled_ppc("?initialize@c_gui_error_manager@@QAAXXZ");
//};

//public: void c_gui_error_manager::dispose(void)
//{
//    mangled_ppc("?dispose@c_gui_error_manager@@QAAXXZ");
//};

//public: void c_gui_error_manager::initialize_for_new_map(void)
//{
//    mangled_ppc("?initialize_for_new_map@c_gui_error_manager@@QAAXXZ");
//};

//public: void c_gui_error_manager::dispose_from_old_map(void)
//{
//    mangled_ppc("?dispose_from_old_map@c_gui_error_manager@@QAAXXZ");
//};

//public: void c_gui_error_manager::update(unsigned long)
//{
//    mangled_ppc("?update@c_gui_error_manager@@QAAXK@Z");
//};

//private: static enum c_gui_error_manager::e_alert_display_mode c_gui_error_manager::get_error_display_mode(enum e_controller_index *)
//{
//    mangled_ppc("?get_error_display_mode@c_gui_error_manager@@CA?AW4e_alert_display_mode@1@PAW4e_controller_index@@@Z");
//};

//public: bool c_gui_error_manager::post_toast(long)
//{
//    mangled_ppc("?post_toast@c_gui_error_manager@@QAA_NJ@Z");
//};

//public: bool c_gui_error_manager::post_controller_toast(long, enum e_controller_index)
//{
//    mangled_ppc("?post_controller_toast@c_gui_error_manager@@QAA_NJW4e_controller_index@@@Z");
//};

//public: bool c_gui_error_manager::post_toast_with_custom_message(long, wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?post_toast_with_custom_message@c_gui_error_manager@@QAA_NJPB_W0@Z");
//};

//public: bool c_gui_error_manager::post_controller_toast_with_custom_message(long, enum e_controller_index, wchar_t const *, wchar_t const *)
//{
//    mangled_ppc("?post_controller_toast_with_custom_message@c_gui_error_manager@@QAA_NJW4e_controller_index@@PB_W1@Z");
//};

//public: bool c_gui_error_manager::post_error(long, enum e_controller_index, bool)
//{
//    mangled_ppc("?post_error@c_gui_error_manager@@QAA_NJW4e_controller_index@@_N@Z");
//};

//public: bool c_gui_error_manager::post_error_with_custom_message(long, wchar_t const *, enum e_controller_index, bool)
//{
//    mangled_ppc("?post_error_with_custom_message@c_gui_error_manager@@QAA_NJPB_WW4e_controller_index@@_N@Z");
//};

//private: bool c_gui_error_manager::post_error_with_custom_message(long, wchar_t const *, wchar_t const *, enum e_controller_index, bool, bool)
//{
//    mangled_ppc("?post_error_with_custom_message@c_gui_error_manager@@AAA_NJPB_W0W4e_controller_index@@_N2@Z");
//};

//public: void c_gui_error_manager::clear_error(long, enum e_controller_index)
//{
//    mangled_ppc("?clear_error@c_gui_error_manager@@QAAXJW4e_controller_index@@@Z");
//};

//public: void c_gui_error_manager::clear_error_with_custom_message(long, enum e_controller_index, wchar_t const *)
//{
//    mangled_ppc("?clear_error_with_custom_message@c_gui_error_manager@@QAAXJW4e_controller_index@@PB_W@Z");
//};

//public: void c_gui_error_manager::resolve_error(long, enum e_controller_index)
//{
//    mangled_ppc("?resolve_error@c_gui_error_manager@@QAAXJW4e_controller_index@@@Z");
//};

//public: void c_gui_error_manager::resolve_error_with_custom_message(long, enum e_controller_index, wchar_t const *)
//{
//    mangled_ppc("?resolve_error_with_custom_message@c_gui_error_manager@@QAAXJW4e_controller_index@@PB_W@Z");
//};

//public: void c_gui_error_manager::clear_all_errors(void)
//{
//    mangled_ppc("?clear_all_errors@c_gui_error_manager@@QAAXXZ");
//};

//public: void c_gui_error_manager::dismiss_auto_dismissable_errors(enum e_controller_index)
//{
//    mangled_ppc("?dismiss_auto_dismissable_errors@c_gui_error_manager@@QAAXW4e_controller_index@@@Z");
//};

//private: class c_gui_queued_error const * c_gui_error_manager::get_current_for_user(enum e_controller_index)
//{
//    mangled_ppc("?get_current_for_user@c_gui_error_manager@@AAAPBVc_gui_queued_error@@W4e_controller_index@@@Z");
//};

//private: class c_gui_queued_error const * c_gui_error_manager::get_current_for_window(enum e_window_index)
//{
//    mangled_ppc("?get_current_for_window@c_gui_error_manager@@AAAPBVc_gui_queued_error@@W4e_window_index@@@Z");
//};

//public: class c_gui_queued_error const * c_gui_error_manager::get_error(enum e_controller_index, long, wchar_t const *) const
//{
//    mangled_ppc("?get_error@c_gui_error_manager@@QBAPBVc_gui_queued_error@@W4e_controller_index@@JPB_W@Z");
//};

//public: class c_gui_queued_error const * c_gui_error_manager::get_error(enum e_controller_index, struct s_cui_alert_parameters const *) const
//{
//    mangled_ppc("?get_error@c_gui_error_manager@@QBAPBVc_gui_queued_error@@W4e_controller_index@@PBUs_cui_alert_parameters@@@Z");
//};

//public: bool c_gui_error_manager::any_error_active_for_controller(enum e_controller_index)
//{
//    mangled_ppc("?any_error_active_for_controller@c_gui_error_manager@@QAA_NW4e_controller_index@@@Z");
//};

//public: bool c_gui_error_manager::any_error_active_for_window(enum e_window_index)
//{
//    mangled_ppc("?any_error_active_for_window@c_gui_error_manager@@QAA_NW4e_window_index@@@Z");
//};

//private: void c_gui_error_manager::clean_out_error_queue(void)
//{
//    mangled_ppc("?clean_out_error_queue@c_gui_error_manager@@AAAXXZ");
//};

//private: void c_gui_error_manager::sort_queue(void)
//{
//    mangled_ppc("?sort_queue@c_gui_error_manager@@AAAXXZ");
//};

//int queued_error_sort_proc(void const *, void const *)
//{
//    mangled_ppc("?queued_error_sort_proc@@YAHPBX0@Z");
//};

//public: enum e_gui_error_category c_enum_no_init<enum e_gui_error_category, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_gui_error_category(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_gui_error_category@@E$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_gui_error_category@@XZ");
//};

//public: enum e_gui_error_icon c_enum_no_init<enum e_gui_error_icon, unsigned char, 0, 5, struct s_default_enum_string_resolver>::operator enum e_gui_error_icon(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_gui_error_icon@@E$0A@$04Us_default_enum_string_resolver@@@@QBA?AW4e_gui_error_icon@@XZ");
//};

//public: c_typed_opaque_data<class c_cui_alert_reference, 8, 4>::c_typed_opaque_data<class c_cui_alert_reference, 8, 4>(void)
//{
//    mangled_ppc("??0?$c_typed_opaque_data@Vc_cui_alert_reference@@$07$03@@QAA@XZ");
//};

//public: class c_cui_alert_reference * c_typed_opaque_data<class c_cui_alert_reference, 8, 4>::construct(void)
//{
//    mangled_ppc("?construct@?$c_typed_opaque_data@Vc_cui_alert_reference@@$07$03@@QAAPAVc_cui_alert_reference@@XZ");
//};

//public: void c_typed_opaque_data<class c_cui_alert_reference, 8, 4>::destruct(void)
//{
//    mangled_ppc("?destruct@?$c_typed_opaque_data@Vc_cui_alert_reference@@$07$03@@QAAXXZ");
//};

//public: class c_cui_alert_reference * c_typed_opaque_data<class c_cui_alert_reference, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_typed_opaque_data@Vc_cui_alert_reference@@$07$03@@QAAPAVc_cui_alert_reference@@XZ");
//};

//public: c_cui_alert_reference::c_cui_alert_reference(void)
//{
//    mangled_ppc("??0c_cui_alert_reference@@QAA@XZ");
//};

//public: void * c_cui_alert_reference::`scalar deleting destructor'(unsigned int)
//{
//    mangled_ppc("??_Gc_cui_alert_reference@@QAAPAXI@Z");
//};

//public: c_cui_alert_reference::~c_cui_alert_reference(void)
//{
//    mangled_ppc("??1c_cui_alert_reference@@QAA@XZ");
//};

//public: class c_cui_alert_reference * c_opaque_data<class c_cui_alert_reference, 8, 4>::get(void)
//{
//    mangled_ppc("?get@?$c_opaque_data@Vc_cui_alert_reference@@$07$03@@QAAPAVc_cui_alert_reference@@XZ");
//};

//public: class c_enum<enum e_gui_error_category, unsigned char, 0, 4, struct s_default_enum_string_resolver> c_cui_alert_reference::get_category(void) const
//{
//    mangled_ppc("?get_category@c_cui_alert_reference@@QBA?AV?$c_enum@W4e_gui_error_category@@E$0A@$03Us_default_enum_string_resolver@@@@XZ");
//};

//protected: class c_cui_alert_pipe * c_cui_alert_reference::get_pipe(void) const
//{
//    mangled_ppc("?get_pipe@c_cui_alert_reference@@IBAPAVc_cui_alert_pipe@@XZ");
//};

//public: bool c_gui_queued_error::is_valid(void) const
//{
//    mangled_ppc("?is_valid@c_gui_queued_error@@QBA_NXZ");
//};

//public: void c_gui_queued_error::clear(void)
//{
//    mangled_ppc("?clear@c_gui_queued_error@@QAAXXZ");
//};

//public: bool c_gui_queued_error::get_resolved(void) const
//{
//    mangled_ppc("?get_resolved@c_gui_queued_error@@QBA_NXZ");
//};

//public: void c_gui_queued_error::set_resolved(bool)
//{
//    mangled_ppc("?set_resolved@c_gui_queued_error@@QAAX_N@Z");
//};

//public: long c_gui_queued_error::get_error_name(void) const
//{
//    mangled_ppc("?get_error_name@c_gui_queued_error@@QBAJXZ");
//};

//public: enum e_gui_error_category c_gui_queued_error::get_error_category(void) const
//{
//    mangled_ppc("?get_error_category@c_gui_queued_error@@QBA?AW4e_gui_error_category@@XZ");
//};

//public: bool c_gui_queued_error::get_auto_dismissable(void) const
//{
//    mangled_ppc("?get_auto_dismissable@c_gui_queued_error@@QBA_NXZ");
//};

//public: bool c_gui_queued_error::get_requires_resolution(void) const
//{
//    mangled_ppc("?get_requires_resolution@c_gui_queued_error@@QBA_NXZ");
//};

//public: bool c_gui_queued_error::get_blocking(void) const
//{
//    mangled_ppc("?get_blocking@c_gui_queued_error@@QBA_NXZ");
//};

//public: long c_gui_queued_error::get_posted_time(void) const
//{
//    mangled_ppc("?get_posted_time@c_gui_queued_error@@QBAJXZ");
//};

//public: void c_gui_queued_error::set_posted_time(long)
//{
//    mangled_ppc("?set_posted_time@c_gui_queued_error@@QAAXJ@Z");
//};

//public: wchar_t const * c_gui_queued_error::get_custom_title(void) const
//{
//    mangled_ppc("?get_custom_title@c_gui_queued_error@@QBAPB_WXZ");
//};

//public: wchar_t const * c_gui_queued_error::get_custom_message(void) const
//{
//    mangled_ppc("?get_custom_message@c_gui_queued_error@@QBAPB_WXZ");
//};

//public: enum e_controller_index c_gui_queued_error::get_controller_index(void) const
//{
//    mangled_ppc("?get_controller_index@c_gui_queued_error@@QBA?AW4e_controller_index@@XZ");
//};

//public: class c_cui_component * c_cui_component::get_prev_sibling(void) const
//{
//    mangled_ppc("?get_prev_sibling@c_cui_component@@QBAPAV1@XZ");
//};

//public: c_enum<enum e_gui_error_category, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_gui_error_category, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_gui_error_category)
//{
//    mangled_ppc("??0?$c_enum@W4e_gui_error_category@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_gui_error_category@@@Z");
//};

//public: c_gui_error_manager::~c_gui_error_manager(void)
//{
//    mangled_ppc("??1c_gui_error_manager@@QAA@XZ");
//};

//public: c_typed_opaque_data<class c_cui_alert_reference, 8, 4>::~c_typed_opaque_data<class c_cui_alert_reference, 8, 4>(void)
//{
//    mangled_ppc("??1?$c_typed_opaque_data@Vc_cui_alert_reference@@$07$03@@QAA@XZ");
//};

//void g_gui_error_manager::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_gui_error_manager@@YAXXZ");
//};

