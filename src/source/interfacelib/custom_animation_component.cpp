/* ---------- headers */

#include "interfacelib\custom_animation_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum c_custom_animation_component::e_flags const c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::k_maximum_count; // "?k_maximum_count@?$c_flags_no_init@W4e_flags@c_custom_animation_component@@E$07Us_default_enum_string_resolver@@@@2W4e_flags@c_custom_animation_component@@B"
// public: static int const c_enum_no_init<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum c_custom_animation_component::e_trigger_action const c_enum_no_init<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@2W4e_trigger_action@c_custom_animation_component@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_custom_animation_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_custom_animation_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_custom_animation_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_custom_animation_component@@@@0Vc_cui_object_property_table@@A"

// public: c_custom_animation_component::c_custom_animation_component(void);
// merged_84A74728;
// public: virtual c_custom_animation_component::~c_custom_animation_component(void);
// public: void c_custom_animation_component::set_trigger(bool);
// private: void c_custom_animation_component::set_flag(enum c_custom_animation_component::e_flags, bool);
// public: bool c_custom_animation_component::get_trigger(void) const;
// private: bool c_custom_animation_component::test_flag(enum c_custom_animation_component::e_flags) const;
// private: void c_custom_animation_component::set_trigger_changed(bool);
// protected: virtual void c_custom_animation_component::do_initialize(class c_cui_update_context *);
// protected: virtual void c_custom_animation_component::do_update(class c_cui_update_context *);
// private: bool c_custom_animation_component::get_trigger_changed(void) const;
// private: void c_custom_animation_component::execute_play_action(enum c_custom_animation_component::e_trigger_action, long, bool, bool);
// void cui_component_restart_animation(class c_cui_widget *, long, bool, bool, bool);
// void cui_component_start_or_restart_animation(class c_cui_widget *, long, bool, bool, bool);
// private: void c_custom_animation_component::execute_stop_action(long, bool);
// private: void c_custom_animation_component::update_animation_state(void);
// public: bool c_custom_animation_component::get_trigger_on_allow_looping(void) const;
// public: bool c_custom_animation_component::get_trigger_on_finish_on_stop(void) const;
// public: bool c_custom_animation_component::get_trigger_on_auto_stop(void) const;
// public: bool c_custom_animation_component::get_trigger_off_allow_looping(void) const;
// public: bool c_custom_animation_component::get_trigger_off_finish_on_stop(void) const;
// public: bool c_custom_animation_component::get_trigger_off_auto_stop(void) const;
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_custom_animation_component>::get_instance(void);
// public: bool c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::test(enum c_custom_animation_component::e_flags) const;
// public: void c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::set(enum c_custom_animation_component::e_flags, bool);
// public: c_flags<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::c_flags<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>(void);
// class c_cui_component * cui_component_create<class c_custom_animation_component>(void);
// class c_cui_component * cui_component_clone<class c_custom_animation_component>(class c_cui_component const *);
// bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, class c_cui_widget *, class c_cui_widget *& (c_custom_animation_component::get_component::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_cui_widget * c_custom_animation_component::get_component(void) const;
// bool cui_set_scalar_property_by_value<class c_custom_animation_component, class c_cui_widget *, void & (c_custom_animation_component::set_component::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *);
// public: void c_custom_animation_component::set_component(class c_cui_widget *);
// ??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@V?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@$1?get_trigger_on_action@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver> c_custom_animation_component::get_trigger_on_action(void) const;
// public: c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>(enum c_custom_animation_component::e_trigger_action);
// bool cui_set_scalar_property_by_value<class c_custom_animation_component, class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>, void & (c_custom_animation_component::set_trigger_on_action::*)(class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_custom_animation_component::set_trigger_on_action(class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>);
// public: enum c_custom_animation_component::e_trigger_action c_enum_no_init<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>::operator enum c_custom_animation_component::e_trigger_action(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@Vc_cui_string_id@@$1?get_trigger_on_animation_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_custom_animation_component::get_trigger_on_animation_name(void) const;
// bool cui_set_scalar_property_by_value<class c_custom_animation_component, class c_cui_string_id, void & (c_custom_animation_component::set_trigger_on_animation_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_custom_animation_component::set_trigger_on_animation_name(class c_cui_string_id);
// bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, bool, bool & (c_custom_animation_component::get_trigger_on_allow_looping::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_custom_animation_component, bool, void & (c_custom_animation_component::set_trigger_on_allow_looping::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_custom_animation_component::set_trigger_on_allow_looping(bool);
// bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, bool, bool & (c_custom_animation_component::get_trigger_on_finish_on_stop::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_custom_animation_component, bool, void & (c_custom_animation_component::set_trigger_on_finish_on_stop::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_custom_animation_component::set_trigger_on_finish_on_stop(bool);
// bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, bool, bool & (c_custom_animation_component::get_trigger_on_auto_stop::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_custom_animation_component, bool, void & (c_custom_animation_component::set_trigger_on_auto_stop::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_custom_animation_component::set_trigger_on_auto_stop(bool);
// ??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@V?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@$1?get_trigger_off_action@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver> c_custom_animation_component::get_trigger_off_action(void) const;
// bool cui_set_scalar_property_by_value<class c_custom_animation_component, class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>, void & (c_custom_animation_component::set_trigger_off_action::*)(class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_custom_animation_component::set_trigger_off_action(class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>);
// ??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@Vc_cui_string_id@@$1?get_trigger_off_animation_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_custom_animation_component::get_trigger_off_animation_name(void) const;
// bool cui_set_scalar_property_by_value<class c_custom_animation_component, class c_cui_string_id, void & (c_custom_animation_component::set_trigger_off_animation_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_custom_animation_component::set_trigger_off_animation_name(class c_cui_string_id);
// bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, bool, bool & (c_custom_animation_component::get_trigger_off_allow_looping::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_custom_animation_component, bool, void & (c_custom_animation_component::set_trigger_off_allow_looping::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_custom_animation_component::set_trigger_off_allow_looping(bool);
// bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, bool, bool & (c_custom_animation_component::get_trigger_off_finish_on_stop::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_custom_animation_component, bool, void & (c_custom_animation_component::set_trigger_off_finish_on_stop::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_custom_animation_component::set_trigger_off_finish_on_stop(bool);
// bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, bool, bool & (c_custom_animation_component::get_trigger_off_auto_stop::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_custom_animation_component, bool, void & (c_custom_animation_component::set_trigger_off_auto_stop::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_custom_animation_component::set_trigger_off_auto_stop(bool);
// bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, bool, bool & (c_custom_animation_component::get_trigger::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_custom_animation_component, bool, void & (c_custom_animation_component::set_trigger::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: c_custom_animation_component::c_custom_animation_component(class c_custom_animation_component const &);
// public: c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>(void);
// public: void c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::clear(void);
// public: bool c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::is_clear(void) const;
// public: static bool c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::valid_bit(enum c_custom_animation_component::e_flags);
// private: static unsigned char c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::flag_size_type(enum c_custom_animation_component::e_flags);
// void cui_property_value_set<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver> *);
// public: bool c_enum_no_init<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const;
// private: static unsigned char c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_custom_animation_component::e_flags);
// void g_trigger_action_enum_table::`dynamic atexit destructor'(void);

//public: c_custom_animation_component::c_custom_animation_component(void)
//{
//    mangled_ppc("??0c_custom_animation_component@@QAA@XZ");
//};

//merged_84A74728
//{
//    mangled_ppc("merged_84A74728");
//};

//public: virtual c_custom_animation_component::~c_custom_animation_component(void)
//{
//    mangled_ppc("??1c_custom_animation_component@@UAA@XZ");
//};

//public: void c_custom_animation_component::set_trigger(bool)
//{
//    mangled_ppc("?set_trigger@c_custom_animation_component@@QAAX_N@Z");
//};

//private: void c_custom_animation_component::set_flag(enum c_custom_animation_component::e_flags, bool)
//{
//    mangled_ppc("?set_flag@c_custom_animation_component@@AAAXW4e_flags@1@_N@Z");
//};

//public: bool c_custom_animation_component::get_trigger(void) const
//{
//    mangled_ppc("?get_trigger@c_custom_animation_component@@QBA_NXZ");
//};

//private: bool c_custom_animation_component::test_flag(enum c_custom_animation_component::e_flags) const
//{
//    mangled_ppc("?test_flag@c_custom_animation_component@@ABA_NW4e_flags@1@@Z");
//};

//private: void c_custom_animation_component::set_trigger_changed(bool)
//{
//    mangled_ppc("?set_trigger_changed@c_custom_animation_component@@AAAX_N@Z");
//};

//protected: virtual void c_custom_animation_component::do_initialize(class c_cui_update_context *)
//{
//    mangled_ppc("?do_initialize@c_custom_animation_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//protected: virtual void c_custom_animation_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_custom_animation_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//private: bool c_custom_animation_component::get_trigger_changed(void) const
//{
//    mangled_ppc("?get_trigger_changed@c_custom_animation_component@@ABA_NXZ");
//};

//private: void c_custom_animation_component::execute_play_action(enum c_custom_animation_component::e_trigger_action, long, bool, bool)
//{
//    mangled_ppc("?execute_play_action@c_custom_animation_component@@AAAXW4e_trigger_action@1@J_N1@Z");
//};

//void cui_component_restart_animation(class c_cui_widget *, long, bool, bool, bool)
//{
//    mangled_ppc("?cui_component_restart_animation@@YAXPAVc_cui_widget@@J_N11@Z");
//};

//void cui_component_start_or_restart_animation(class c_cui_widget *, long, bool, bool, bool)
//{
//    mangled_ppc("?cui_component_start_or_restart_animation@@YAXPAVc_cui_widget@@J_N11@Z");
//};

//private: void c_custom_animation_component::execute_stop_action(long, bool)
//{
//    mangled_ppc("?execute_stop_action@c_custom_animation_component@@AAAXJ_N@Z");
//};

//private: void c_custom_animation_component::update_animation_state(void)
//{
//    mangled_ppc("?update_animation_state@c_custom_animation_component@@AAAXXZ");
//};

//public: bool c_custom_animation_component::get_trigger_on_allow_looping(void) const
//{
//    mangled_ppc("?get_trigger_on_allow_looping@c_custom_animation_component@@QBA_NXZ");
//};

//public: bool c_custom_animation_component::get_trigger_on_finish_on_stop(void) const
//{
//    mangled_ppc("?get_trigger_on_finish_on_stop@c_custom_animation_component@@QBA_NXZ");
//};

//public: bool c_custom_animation_component::get_trigger_on_auto_stop(void) const
//{
//    mangled_ppc("?get_trigger_on_auto_stop@c_custom_animation_component@@QBA_NXZ");
//};

//public: bool c_custom_animation_component::get_trigger_off_allow_looping(void) const
//{
//    mangled_ppc("?get_trigger_off_allow_looping@c_custom_animation_component@@QBA_NXZ");
//};

//public: bool c_custom_animation_component::get_trigger_off_finish_on_stop(void) const
//{
//    mangled_ppc("?get_trigger_off_finish_on_stop@c_custom_animation_component@@QBA_NXZ");
//};

//public: bool c_custom_animation_component::get_trigger_off_auto_stop(void) const
//{
//    mangled_ppc("?get_trigger_off_auto_stop@c_custom_animation_component@@QBA_NXZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_custom_animation_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_custom_animation_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: bool c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::test(enum c_custom_animation_component::e_flags) const
//{
//    mangled_ppc("?test@?$c_flags_no_init@W4e_flags@c_custom_animation_component@@E$07Us_default_enum_string_resolver@@@@QBA_NW4e_flags@c_custom_animation_component@@@Z");
//};

//public: void c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::set(enum c_custom_animation_component::e_flags, bool)
//{
//    mangled_ppc("?set@?$c_flags_no_init@W4e_flags@c_custom_animation_component@@E$07Us_default_enum_string_resolver@@@@QAAXW4e_flags@c_custom_animation_component@@_N@Z");
//};

//public: c_flags<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::c_flags<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_flags@W4e_flags@c_custom_animation_component@@E$07Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//class c_cui_component * cui_component_create<class c_custom_animation_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_custom_animation_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_custom_animation_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_custom_animation_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, class c_cui_widget *, class c_cui_widget *& (c_custom_animation_component::get_component::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@PAVc_cui_widget@@$1?get_component@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_widget * c_custom_animation_component::get_component(void) const
//{
//    mangled_ppc("?get_component@c_custom_animation_component@@QBAPAVc_cui_widget@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_custom_animation_component, class c_cui_widget *, void & (c_custom_animation_component::set_component::*)(class c_cui_widget *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_custom_animation_component@@PAVc_cui_widget@@$1?set_component@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_custom_animation_component::set_component(class c_cui_widget *)
//{
//    mangled_ppc("?set_component@c_custom_animation_component@@QAAXPAVc_cui_widget@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@V?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@$1?get_trigger_on_action@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@V?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@$1?get_trigger_on_action@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver> c_custom_animation_component::get_trigger_on_action(void) const
//{
//    mangled_ppc("?get_trigger_on_action@c_custom_animation_component@@QBA?AV?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>(enum c_custom_animation_component::e_trigger_action)
//{
//    mangled_ppc("??0?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_trigger_action@c_custom_animation_component@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_custom_animation_component, class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>, void & (c_custom_animation_component::set_trigger_on_action::*)(class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_custom_animation_component@@V?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@$1?set_trigger_on_action@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_custom_animation_component::set_trigger_on_action(class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_trigger_on_action@c_custom_animation_component@@QAAXV?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum c_custom_animation_component::e_trigger_action c_enum_no_init<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>::operator enum c_custom_animation_component::e_trigger_action(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_trigger_action@c_custom_animation_component@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@Vc_cui_string_id@@$1?get_trigger_on_animation_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@Vc_cui_string_id@@$1?get_trigger_on_animation_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_custom_animation_component::get_trigger_on_animation_name(void) const
//{
//    mangled_ppc("?get_trigger_on_animation_name@c_custom_animation_component@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_custom_animation_component, class c_cui_string_id, void & (c_custom_animation_component::set_trigger_on_animation_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_custom_animation_component@@Vc_cui_string_id@@$1?set_trigger_on_animation_name@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_custom_animation_component::set_trigger_on_animation_name(class c_cui_string_id)
//{
//    mangled_ppc("?set_trigger_on_animation_name@c_custom_animation_component@@QAAXVc_cui_string_id@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, bool, bool & (c_custom_animation_component::get_trigger_on_allow_looping::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@_N$1?get_trigger_on_allow_looping@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_custom_animation_component, bool, void & (c_custom_animation_component::set_trigger_on_allow_looping::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_custom_animation_component@@_N$1?set_trigger_on_allow_looping@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_custom_animation_component::set_trigger_on_allow_looping(bool)
//{
//    mangled_ppc("?set_trigger_on_allow_looping@c_custom_animation_component@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, bool, bool & (c_custom_animation_component::get_trigger_on_finish_on_stop::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@_N$1?get_trigger_on_finish_on_stop@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_custom_animation_component, bool, void & (c_custom_animation_component::set_trigger_on_finish_on_stop::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_custom_animation_component@@_N$1?set_trigger_on_finish_on_stop@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_custom_animation_component::set_trigger_on_finish_on_stop(bool)
//{
//    mangled_ppc("?set_trigger_on_finish_on_stop@c_custom_animation_component@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, bool, bool & (c_custom_animation_component::get_trigger_on_auto_stop::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@_N$1?get_trigger_on_auto_stop@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_custom_animation_component, bool, void & (c_custom_animation_component::set_trigger_on_auto_stop::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_custom_animation_component@@_N$1?set_trigger_on_auto_stop@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_custom_animation_component::set_trigger_on_auto_stop(bool)
//{
//    mangled_ppc("?set_trigger_on_auto_stop@c_custom_animation_component@@QAAX_N@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@V?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@$1?get_trigger_off_action@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@V?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@$1?get_trigger_off_action@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver> c_custom_animation_component::get_trigger_off_action(void) const
//{
//    mangled_ppc("?get_trigger_off_action@c_custom_animation_component@@QBA?AV?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_custom_animation_component, class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>, void & (c_custom_animation_component::set_trigger_off_action::*)(class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_custom_animation_component@@V?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@$1?set_trigger_off_action@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_custom_animation_component::set_trigger_off_action(class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_trigger_off_action@c_custom_animation_component@@QAAXV?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@Vc_cui_string_id@@$1?get_trigger_off_animation_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@Vc_cui_string_id@@$1?get_trigger_off_animation_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_custom_animation_component::get_trigger_off_animation_name(void) const
//{
//    mangled_ppc("?get_trigger_off_animation_name@c_custom_animation_component@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_custom_animation_component, class c_cui_string_id, void & (c_custom_animation_component::set_trigger_off_animation_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_custom_animation_component@@Vc_cui_string_id@@$1?set_trigger_off_animation_name@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_custom_animation_component::set_trigger_off_animation_name(class c_cui_string_id)
//{
//    mangled_ppc("?set_trigger_off_animation_name@c_custom_animation_component@@QAAXVc_cui_string_id@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, bool, bool & (c_custom_animation_component::get_trigger_off_allow_looping::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@_N$1?get_trigger_off_allow_looping@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_custom_animation_component, bool, void & (c_custom_animation_component::set_trigger_off_allow_looping::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_custom_animation_component@@_N$1?set_trigger_off_allow_looping@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_custom_animation_component::set_trigger_off_allow_looping(bool)
//{
//    mangled_ppc("?set_trigger_off_allow_looping@c_custom_animation_component@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, bool, bool & (c_custom_animation_component::get_trigger_off_finish_on_stop::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@_N$1?get_trigger_off_finish_on_stop@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_custom_animation_component, bool, void & (c_custom_animation_component::set_trigger_off_finish_on_stop::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_custom_animation_component@@_N$1?set_trigger_off_finish_on_stop@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_custom_animation_component::set_trigger_off_finish_on_stop(bool)
//{
//    mangled_ppc("?set_trigger_off_finish_on_stop@c_custom_animation_component@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, bool, bool & (c_custom_animation_component::get_trigger_off_auto_stop::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@_N$1?get_trigger_off_auto_stop@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_custom_animation_component, bool, void & (c_custom_animation_component::set_trigger_off_auto_stop::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_custom_animation_component@@_N$1?set_trigger_off_auto_stop@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_custom_animation_component::set_trigger_off_auto_stop(bool)
//{
//    mangled_ppc("?set_trigger_off_auto_stop@c_custom_animation_component@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_custom_animation_component, bool, bool & (c_custom_animation_component::get_trigger::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_custom_animation_component@@_N$1?get_trigger@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_custom_animation_component, bool, void & (c_custom_animation_component::set_trigger::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_custom_animation_component@@_N$1?set_trigger@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: c_custom_animation_component::c_custom_animation_component(class c_custom_animation_component const &)
//{
//    mangled_ppc("??0c_custom_animation_component@@QAA@ABV0@@Z");
//};

//public: c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: void c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::clear(void)
//{
//    mangled_ppc("?clear@?$c_flags_no_init@W4e_flags@c_custom_animation_component@@E$07Us_default_enum_string_resolver@@@@QAAXXZ");
//};

//public: bool c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::is_clear(void) const
//{
//    mangled_ppc("?is_clear@?$c_flags_no_init@W4e_flags@c_custom_animation_component@@E$07Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: static bool c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::valid_bit(enum c_custom_animation_component::e_flags)
//{
//    mangled_ppc("?valid_bit@?$c_flags_no_init@W4e_flags@c_custom_animation_component@@E$07Us_default_enum_string_resolver@@@@SA_NW4e_flags@c_custom_animation_component@@@Z");
//};

//private: static unsigned char c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::flag_size_type(enum c_custom_animation_component::e_flags)
//{
//    mangled_ppc("?flag_size_type@?$c_flags_no_init@W4e_flags@c_custom_animation_component@@E$07Us_default_enum_string_resolver@@@@CAEW4e_flags@c_custom_animation_component@@@Z");
//};

//void cui_property_value_set<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum c_custom_animation_component::e_trigger_action, char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_trigger_action@c_custom_animation_component@@D$0A@$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_flags@c_custom_animation_component@@E$07Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum c_custom_animation_component::e_flags, unsigned char, 8, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum c_custom_animation_component::e_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_flags@c_custom_animation_component@@E$07Us_default_enum_string_resolver@@@@CAEW4e_flags@c_custom_animation_component@@@Z");
//};

//void g_trigger_action_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_trigger_action_enum_table@@YAXXZ");
//};

