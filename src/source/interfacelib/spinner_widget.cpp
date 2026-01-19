/* ---------- headers */

#include "interfacelib\spinner_widget.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_spinner_widget>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_spinner_widget@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_spinner_widget>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_spinner_widget@@@@0Vc_cui_object_property_table@@A"

// public: c_spinner_widget::c_spinner_widget(void);
// merged_84B87D38;
// protected: c_spinner_widget::c_spinner_widget(struct s_cui_component_description const *, class c_cui_object_property_table *);
// protected: c_spinner_widget::c_spinner_widget(struct s_cui_component_description const *, class c_cui_object_property_table *, unsigned long);
// public: c_spinner_widget::c_spinner_widget(class c_spinner_widget const &);
// public: virtual c_spinner_widget::~c_spinner_widget(void);
// protected: void c_spinner_widget::set_selection_changed(bool);
// protected: void c_spinner_widget::set_item_selected(bool);
// protected: bool c_spinner_widget::get_item_selected(void) const;
// protected: bool c_spinner_widget::is_input_next(enum e_controller_index, enum e_event_type, enum e_controller_component, short);
// protected: bool c_spinner_widget::is_input_prev(enum e_controller_index, enum e_event_type, enum e_controller_component, short);
// public: bool c_spinner_widget::is_tab_input(enum e_controller_index);
// protected: virtual bool c_spinner_widget::do_initialize_mode(enum e_cui_component_mode);
// protected: virtual bool c_spinner_widget::do_replicates_descendant(class c_cui_component const *) const;
// protected: virtual bool c_spinner_widget::do_is_focusable(void) const;
// protected: virtual bool c_spinner_widget::do_handle_input_event(class c_cui_update_context *, class c_cui_input_event *);
// public: bool c_spinner_widget::get_wrap(void) const;
// protected: virtual void c_spinner_widget::do_initialize(class c_cui_update_context *);
// protected: virtual void c_spinner_widget::do_pre_update(class c_cui_update_context *);
// protected: virtual void c_spinner_widget::do_update(class c_cui_update_context *);
// protected: bool c_spinner_widget::initialize_design_mode(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_spinner_widget>::get_instance(void);
// public: void c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum c_spinner_widget::e_event_flags) const;
// public: void c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum c_spinner_widget::e_event_flags, bool);
// public: c_flags<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void);
// bool cui_get_scalar_property_by_return_value<class c_spinner_widget, bool, bool & (c_spinner_widget::get_wrap::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_spinner_widget, bool, void & (c_spinner_widget::set_wrap::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_spinner_widget::set_wrap(bool);
// bool cui_get_scalar_property_by_return_value<class c_spinner_widget, bool, bool & (c_spinner_widget::get_selection_changed::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_spinner_widget::get_selection_changed(void) const;
// bool cui_get_scalar_property_by_return_value<class c_spinner_widget, long, long & (c_spinner_widget::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_spinner_widget::get_item_count(void) const;
// bool cui_set_scalar_property_by_value<class c_spinner_widget, long, void & (c_spinner_widget::set_item_count::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_spinner_widget::set_item_count(long);
// bool cui_get_scalar_property_by_return_value<class c_spinner_widget, bool, bool & (c_spinner_widget::has_preceding_items::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_spinner_widget::has_preceding_items(void) const;
// bool cui_get_scalar_property_by_return_value<class c_spinner_widget, bool, bool & (c_spinner_widget::has_following_items::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_spinner_widget::has_following_items(void) const;
// bool cui_get_scalar_property_by_return_value<class c_spinner_widget, long, long & (c_spinner_widget::get_initial_selected_item_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_spinner_widget::get_initial_selected_item_index(void) const;
// bool cui_set_scalar_property_by_value<class c_spinner_widget, long, void & (c_spinner_widget::set_initial_selected_item_index::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_spinner_widget::set_initial_selected_item_index(long);
// bool cui_get_scalar_property_by_return_value<class c_spinner_widget, long, long & (c_spinner_widget::get_selected_item_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_spinner_widget::get_selected_item_index(void) const;
// bool cui_set_scalar_property_by_value<class c_spinner_widget, long, void & (c_spinner_widget::set_selected_item_index::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_spinner_widget::set_selected_item_index(long);
// ??$cui_get_scalar_property_by_return_value@Vc_spinner_widget@@Vc_cui_string_id@@$1?get_selected_item_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_spinner_widget::get_selected_item_name(void) const;
// bool cui_get_scalar_property_by_return_value<class c_spinner_widget, class c_input_event_component *, class c_input_event_component *& (c_spinner_widget::get_selected_event::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_input_event_component * c_spinner_widget::get_selected_event(void) const;
// bool cui_get_scalar_property_by_return_value<class c_spinner_widget, class c_cui_widget *, class c_cui_widget *& (c_spinner_widget::get_return_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_spinner_widget::get_return_focus_to(void) const;
// bool cui_set_scalar_property_by_value<class c_spinner_widget, class c_cui_widget *, void & (c_spinner_widget::set_return_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_spinner_widget::set_return_focus_to(class c_cui_widget *);
// ??$cui_get_scalar_property_by_return_value@Vc_spinner_widget@@V?$c_enum@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@$1?get_alternate_input_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_set_scalar_property_by_value<class c_spinner_widget, class c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>, void & (c_spinner_widget::set_alternate_input_mode::*)(class c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_spinner_widget::set_alternate_input_mode(class c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>);
// public: enum c_spinner_widget::e_input_mode c_enum_no_init<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum c_spinner_widget::e_input_mode(void) const;
// class c_spinner_item_widget const * cui_dynamic_cast<class c_spinner_item_widget const *>(class c_cui_component const *);
// public: c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void);
// public: bool c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum c_spinner_widget::e_event_flags);
// private: static unsigned char c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum c_spinner_widget::e_event_flags);
// void cui_property_value_set<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver> *);
// public: static class c_spinner_item_widget const * s_cui_dynamic_cast<class c_spinner_item_widget const *>::cast(class c_cui_component const *);
// public: bool c_enum_no_init<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const;
// private: static unsigned char c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_spinner_widget::e_event_flags);
// class c_cui_component * cui_component_create<class c_spinner_widget>(void);
// class c_cui_component * cui_component_clone<class c_spinner_widget>(class c_cui_component const *);
// void g_input_mode_enum_table::`dynamic atexit destructor'(void);

//public: c_spinner_widget::c_spinner_widget(void)
//{
//    mangled_ppc("??0c_spinner_widget@@QAA@XZ");
//};

//merged_84B87D38
//{
//    mangled_ppc("merged_84B87D38");
//};

//protected: c_spinner_widget::c_spinner_widget(struct s_cui_component_description const *, class c_cui_object_property_table *)
//{
//    mangled_ppc("??0c_spinner_widget@@IAA@PBUs_cui_component_description@@PAVc_cui_object_property_table@@@Z");
//};

//protected: c_spinner_widget::c_spinner_widget(struct s_cui_component_description const *, class c_cui_object_property_table *, unsigned long)
//{
//    mangled_ppc("??0c_spinner_widget@@IAA@PBUs_cui_component_description@@PAVc_cui_object_property_table@@K@Z");
//};

//public: c_spinner_widget::c_spinner_widget(class c_spinner_widget const &)
//{
//    mangled_ppc("??0c_spinner_widget@@QAA@ABV0@@Z");
//};

//public: virtual c_spinner_widget::~c_spinner_widget(void)
//{
//    mangled_ppc("??1c_spinner_widget@@UAA@XZ");
//};

//protected: void c_spinner_widget::set_selection_changed(bool)
//{
//    mangled_ppc("?set_selection_changed@c_spinner_widget@@IAAX_N@Z");
//};

//protected: void c_spinner_widget::set_item_selected(bool)
//{
//    mangled_ppc("?set_item_selected@c_spinner_widget@@IAAX_N@Z");
//};

//protected: bool c_spinner_widget::get_item_selected(void) const
//{
//    mangled_ppc("?get_item_selected@c_spinner_widget@@IBA_NXZ");
//};

//protected: bool c_spinner_widget::is_input_next(enum e_controller_index, enum e_event_type, enum e_controller_component, short)
//{
//    mangled_ppc("?is_input_next@c_spinner_widget@@IAA_NW4e_controller_index@@W4e_event_type@@W4e_controller_component@@F@Z");
//};

//protected: bool c_spinner_widget::is_input_prev(enum e_controller_index, enum e_event_type, enum e_controller_component, short)
//{
//    mangled_ppc("?is_input_prev@c_spinner_widget@@IAA_NW4e_controller_index@@W4e_event_type@@W4e_controller_component@@F@Z");
//};

//public: bool c_spinner_widget::is_tab_input(enum e_controller_index)
//{
//    mangled_ppc("?is_tab_input@c_spinner_widget@@QAA_NW4e_controller_index@@@Z");
//};

//protected: virtual bool c_spinner_widget::do_initialize_mode(enum e_cui_component_mode)
//{
//    mangled_ppc("?do_initialize_mode@c_spinner_widget@@MAA_NW4e_cui_component_mode@@@Z");
//};

//protected: virtual bool c_spinner_widget::do_replicates_descendant(class c_cui_component const *) const
//{
//    mangled_ppc("?do_replicates_descendant@c_spinner_widget@@MBA_NPBVc_cui_component@@@Z");
//};

//protected: virtual bool c_spinner_widget::do_is_focusable(void) const
//{
//    mangled_ppc("?do_is_focusable@c_spinner_widget@@MBA_NXZ");
//};

//protected: virtual bool c_spinner_widget::do_handle_input_event(class c_cui_update_context *, class c_cui_input_event *)
//{
//    mangled_ppc("?do_handle_input_event@c_spinner_widget@@MAA_NPAVc_cui_update_context@@PAVc_cui_input_event@@@Z");
//};

//public: bool c_spinner_widget::get_wrap(void) const
//{
//    mangled_ppc("?get_wrap@c_spinner_widget@@QBA_NXZ");
//};

//protected: virtual void c_spinner_widget::do_initialize(class c_cui_update_context *)
//{
//    mangled_ppc("?do_initialize@c_spinner_widget@@MAAXPAVc_cui_update_context@@@Z");
//};

//protected: virtual void c_spinner_widget::do_pre_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_pre_update@c_spinner_widget@@MAAXPAVc_cui_update_context@@@Z");
//};

//protected: virtual void c_spinner_widget::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_spinner_widget@@MAAXPAVc_cui_update_context@@@Z");
//};

//protected: bool c_spinner_widget::initialize_design_mode(void)
//{
//    mangled_ppc("?initialize_design_mode@c_spinner_widget@@IAA_NXZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_spinner_widget>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_spinner_widget@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: void c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_event_flags@c_spinner_widget@@E$02Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::test(enum c_spinner_widget::e_event_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_event_flags@c_spinner_widget@@E$02Us_default_enum_string_resolver@@@@QBA_NW4e_event_flags@c_spinner_widget@@@Z");
//};

//public: void c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set(enum c_spinner_widget::e_event_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_event_flags@c_spinner_widget@@E$02Us_default_enum_string_resolver@@@@QAAXW4e_event_flags@c_spinner_widget@@_N@Z");
//};

//public: c_flags<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::c_flags<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_event_flags@c_spinner_widget@@E$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_spinner_widget, bool, bool & (c_spinner_widget::get_wrap::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_spinner_widget@@_N$1?get_wrap@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_spinner_widget, bool, void & (c_spinner_widget::set_wrap::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_spinner_widget@@_N$1?set_wrap@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_spinner_widget::set_wrap(bool)
//{
//    mangled_ppc("?set_wrap@c_spinner_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_spinner_widget, bool, bool & (c_spinner_widget::get_selection_changed::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_spinner_widget@@_N$1?get_selection_changed@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_spinner_widget::get_selection_changed(void) const
//{
//    mangled_ppc("?get_selection_changed@c_spinner_widget@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_spinner_widget, long, long & (c_spinner_widget::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_spinner_widget@@J$1?get_item_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_spinner_widget::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_spinner_widget@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_spinner_widget, long, void & (c_spinner_widget::set_item_count::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_spinner_widget@@J$1?set_item_count@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_spinner_widget::set_item_count(long)
//{
//    mangled_ppc("?set_item_count@c_spinner_widget@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_spinner_widget, bool, bool & (c_spinner_widget::has_preceding_items::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_spinner_widget@@_N$1?has_preceding_items@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_spinner_widget::has_preceding_items(void) const
//{
//    mangled_ppc("?has_preceding_items@c_spinner_widget@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_spinner_widget, bool, bool & (c_spinner_widget::has_following_items::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_spinner_widget@@_N$1?has_following_items@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_spinner_widget::has_following_items(void) const
//{
//    mangled_ppc("?has_following_items@c_spinner_widget@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_spinner_widget, long, long & (c_spinner_widget::get_initial_selected_item_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_spinner_widget@@J$1?get_initial_selected_item_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_spinner_widget::get_initial_selected_item_index(void) const
//{
//    mangled_ppc("?get_initial_selected_item_index@c_spinner_widget@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_spinner_widget, long, void & (c_spinner_widget::set_initial_selected_item_index::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_spinner_widget@@J$1?set_initial_selected_item_index@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_spinner_widget::set_initial_selected_item_index(long)
//{
//    mangled_ppc("?set_initial_selected_item_index@c_spinner_widget@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_spinner_widget, long, long & (c_spinner_widget::get_selected_item_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_spinner_widget@@J$1?get_selected_item_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_spinner_widget::get_selected_item_index(void) const
//{
//    mangled_ppc("?get_selected_item_index@c_spinner_widget@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_spinner_widget, long, void & (c_spinner_widget::set_selected_item_index::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_spinner_widget@@J$1?set_selected_item_index@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_spinner_widget::set_selected_item_index(long)
//{
//    mangled_ppc("?set_selected_item_index@c_spinner_widget@@QAAXJ@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_spinner_widget@@Vc_cui_string_id@@$1?get_selected_item_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_spinner_widget@@Vc_cui_string_id@@$1?get_selected_item_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_spinner_widget::get_selected_item_name(void) const
//{
//    mangled_ppc("?get_selected_item_name@c_spinner_widget@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_spinner_widget, class c_input_event_component *, class c_input_event_component *& (c_spinner_widget::get_selected_event::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_spinner_widget@@PAVc_input_event_component@@$1?get_selected_event@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_input_event_component * c_spinner_widget::get_selected_event(void) const
//{
//    mangled_ppc("?get_selected_event@c_spinner_widget@@QBAPAVc_input_event_component@@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_spinner_widget, class c_cui_widget *, class c_cui_widget *& (c_spinner_widget::get_return_focus_to::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_spinner_widget@@PAVc_cui_widget@@$1?get_return_focus_to@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_spinner_widget::get_return_focus_to(void) const
//{
//    mangled_ppc("?get_return_focus_to@c_spinner_widget@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_spinner_widget, class c_cui_widget *, void & (c_spinner_widget::set_return_focus_to::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_spinner_widget@@PAVc_cui_widget@@$1?set_return_focus_to@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_spinner_widget::set_return_focus_to(class c_cui_widget *)
//{
//    mangled_ppc("?set_return_focus_to@c_spinner_widget@@QAAXPAVc_cui_widget@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_spinner_widget@@V?$c_enum@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@$1?get_alternate_input_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_spinner_widget@@V?$c_enum@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@$1?get_alternate_input_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_spinner_widget, class c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>, void & (c_spinner_widget::set_alternate_input_mode::*)(class c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_spinner_widget@@V?$c_enum@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@$1?set_alternate_input_mode@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_spinner_widget::set_alternate_input_mode(class c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_alternate_input_mode@c_spinner_widget@@QAAXV?$c_enum@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum c_spinner_widget::e_input_mode c_enum_no_init<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum c_spinner_widget::e_input_mode(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_input_mode@c_spinner_widget@@XZ");
//};

//class c_spinner_item_widget const * cui_dynamic_cast<class c_spinner_item_widget const *>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PBVc_spinner_item_widget@@@@YAPBVc_spinner_item_widget@@PBVc_cui_component@@@Z");
//};

//public: c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: bool c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_event_flags@c_spinner_widget@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid_bit(enum c_spinner_widget::e_event_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_event_flags@c_spinner_widget@@E$02Us_default_enum_string_resolver@@@@SA_NW4e_event_flags@c_spinner_widget@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::flag_size_type(enum c_spinner_widget::e_event_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_event_flags@c_spinner_widget@@E$02Us_default_enum_string_resolver@@@@CAEW4e_event_flags@c_spinner_widget@@@Z");
//};

//void cui_property_value_set<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: static class c_spinner_item_widget const * s_cui_dynamic_cast<class c_spinner_item_widget const *>::cast(class c_cui_component const *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PBVc_spinner_item_widget@@@@SAPBVc_spinner_item_widget@@PBVc_cui_component@@@Z");
//};

//public: bool c_enum_no_init<enum c_spinner_widget::e_input_mode, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_input_mode@c_spinner_widget@@E$0A@$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_event_flags@c_spinner_widget@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum c_spinner_widget::e_event_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_spinner_widget::e_event_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_event_flags@c_spinner_widget@@E$02Us_default_enum_string_resolver@@@@CAEW4e_event_flags@c_spinner_widget@@@Z");
//};

//class c_cui_component * cui_component_create<class c_spinner_widget>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_spinner_widget@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_spinner_widget>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_spinner_widget@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//void g_input_mode_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_input_mode_enum_table@@YAXXZ");
//};

