/* ---------- headers */

#include "omaha\interface\components\player_model_purchase_event_handler_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_player_model_purchase_event_handler_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_player_model_purchase_event_handler_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_player_model_purchase_event_handler_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_player_model_purchase_event_handler_component@@@@0Vc_cui_object_property_table@@A"

// public: c_player_model_purchase_event_handler_component::c_player_model_purchase_event_handler_component(void);
// merged_84B3E620;
// public: virtual c_player_model_purchase_event_handler_component::~c_player_model_purchase_event_handler_component(void);
// public: struct s_player_configuration const * c_player_model_purchase_event_handler_component::get_player_configuration(void) const;
// public: void c_player_model_purchase_event_handler_component::set_player_configuration(struct s_player_configuration const *);
// protected: virtual void c_player_model_purchase_event_handler_component::do_update(class c_cui_update_context *);
// protected: virtual void c_player_model_purchase_event_handler_component::do_handle_dialog_result(class c_cui_update_context *, struct s_cui_dialog_result *);
// protected: virtual void c_player_model_purchase_event_handler_component::do_handle_event(class c_cui_update_context *, class c_event_component *);
// void build_missing_prerequsites_string(class c_cui_component const *, class c_cui_update_context *, enum e_controller_index, struct s_purchasable_item_handle, class c_static_wchar_string<256> &);
// void append_string(class c_cui_component const *, class c_cui_update_context *, long, class c_static_wchar_string<256> &);
// void build_missing_prerequsites_grades_string(class c_cui_component const *, class c_cui_update_context *, enum e_controller_index, struct s_purchasable_item_handle, class c_static_wchar_string<256> &);
// void append_string_wrapped(class c_cui_component const *, class c_cui_update_context *, long, long, long, class c_static_wchar_string<256> &);
// void build_missing_prerequsites_item_string(class c_cui_component const *, class c_cui_update_context *, enum e_controller_index, struct s_purchasable_item_handle, class c_static_wchar_string<256> &);
// void build_missing_prerequsites_unlockables_string(class c_cui_component const *, class c_cui_update_context *, enum e_controller_index, struct s_purchasable_item_handle, class c_static_wchar_string<256> &);
// protected: bool c_player_model_purchase_event_handler_component::get_family_item_handle(struct s_purchasable_item_handle *);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_player_model_purchase_event_handler_component>::get_instance(void);
// ??$cui_get_scalar_property_by_return_value@Vc_player_model_purchase_event_handler_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_player_model_purchase_event_handler_component::get_driving_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_purchase_event_handler_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_player_model_purchase_event_handler_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_purchase_event_handler_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_player_model_purchase_event_handler_component, struct s_player_configuration const *, struct s_player_configuration const *& (c_player_model_purchase_event_handler_component::get_player_configuration::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_player_model_purchase_event_handler_component, struct s_player_configuration const *, void & (c_player_model_purchase_event_handler_component::set_player_configuration::*)(struct s_player_configuration const *)>(void *, long, struct s_cui_property_value const *);
// ??$cui_get_scalar_property_by_return_value@Vc_player_model_purchase_event_handler_component@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@$1?get_current_purchase_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver> c_player_model_purchase_event_handler_component::get_current_purchase_category(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_purchase_event_handler_component, class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>, void & (c_player_model_purchase_event_handler_component::set_current_purchase_category::*)(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_purchase_event_handler_component::set_current_purchase_category(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_player_model_purchase_event_handler_component, long, long & (c_player_model_purchase_event_handler_component::get_current_base::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_player_model_purchase_event_handler_component::get_current_base(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_purchase_event_handler_component, long, void & (c_player_model_purchase_event_handler_component::set_current_base::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_purchase_event_handler_component::set_current_base(long);
// bool cui_get_scalar_property_by_return_value<class c_player_model_purchase_event_handler_component, long, long & (c_player_model_purchase_event_handler_component::get_current_piece::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_player_model_purchase_event_handler_component::get_current_piece(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_purchase_event_handler_component, long, void & (c_player_model_purchase_event_handler_component::set_current_piece::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_purchase_event_handler_component::set_current_piece(long);
// bool cui_get_scalar_property_by_return_value<class c_player_model_purchase_event_handler_component, class c_input_event_component *, class c_input_event_component *& (c_player_model_purchase_event_handler_component::get_worn_event::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_input_event_component * c_player_model_purchase_event_handler_component::get_worn_event(void) const;
// class c_cui_component * cui_component_create<class c_player_model_purchase_event_handler_component>(void);
// class c_cui_component * cui_component_clone<class c_player_model_purchase_event_handler_component>(class c_cui_component const *);
// public: c_player_model_purchase_event_handler_component::c_player_model_purchase_event_handler_component(class c_player_model_purchase_event_handler_component const &);

//public: c_player_model_purchase_event_handler_component::c_player_model_purchase_event_handler_component(void)
//{
//    mangled_ppc("??0c_player_model_purchase_event_handler_component@@QAA@XZ");
//};

//merged_84B3E620
//{
//    mangled_ppc("merged_84B3E620");
//};

//public: virtual c_player_model_purchase_event_handler_component::~c_player_model_purchase_event_handler_component(void)
//{
//    mangled_ppc("??1c_player_model_purchase_event_handler_component@@UAA@XZ");
//};

//public: struct s_player_configuration const * c_player_model_purchase_event_handler_component::get_player_configuration(void) const
//{
//    mangled_ppc("?get_player_configuration@c_player_model_purchase_event_handler_component@@QBAPBUs_player_configuration@@XZ");
//};

//public: void c_player_model_purchase_event_handler_component::set_player_configuration(struct s_player_configuration const *)
//{
//    mangled_ppc("?set_player_configuration@c_player_model_purchase_event_handler_component@@QAAXPBUs_player_configuration@@@Z");
//};

//protected: virtual void c_player_model_purchase_event_handler_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_player_model_purchase_event_handler_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//protected: virtual void c_player_model_purchase_event_handler_component::do_handle_dialog_result(class c_cui_update_context *, struct s_cui_dialog_result *)
//{
//    mangled_ppc("?do_handle_dialog_result@c_player_model_purchase_event_handler_component@@MAAXPAVc_cui_update_context@@PAUs_cui_dialog_result@@@Z");
//};

//protected: virtual void c_player_model_purchase_event_handler_component::do_handle_event(class c_cui_update_context *, class c_event_component *)
//{
//    mangled_ppc("?do_handle_event@c_player_model_purchase_event_handler_component@@MAAXPAVc_cui_update_context@@PAVc_event_component@@@Z");
//};

//void build_missing_prerequsites_string(class c_cui_component const *, class c_cui_update_context *, enum e_controller_index, struct s_purchasable_item_handle, class c_static_wchar_string<256> &)
//{
//    mangled_ppc("?build_missing_prerequsites_string@@YAXPBVc_cui_component@@PAVc_cui_update_context@@W4e_controller_index@@Us_purchasable_item_handle@@AAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//void append_string(class c_cui_component const *, class c_cui_update_context *, long, class c_static_wchar_string<256> &)
//{
//    mangled_ppc("?append_string@@YAXPBVc_cui_component@@PAVc_cui_update_context@@JAAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//void build_missing_prerequsites_grades_string(class c_cui_component const *, class c_cui_update_context *, enum e_controller_index, struct s_purchasable_item_handle, class c_static_wchar_string<256> &)
//{
//    mangled_ppc("?build_missing_prerequsites_grades_string@@YAXPBVc_cui_component@@PAVc_cui_update_context@@W4e_controller_index@@Us_purchasable_item_handle@@AAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//void append_string_wrapped(class c_cui_component const *, class c_cui_update_context *, long, long, long, class c_static_wchar_string<256> &)
//{
//    mangled_ppc("?append_string_wrapped@@YAXPBVc_cui_component@@PAVc_cui_update_context@@JJJAAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//void build_missing_prerequsites_item_string(class c_cui_component const *, class c_cui_update_context *, enum e_controller_index, struct s_purchasable_item_handle, class c_static_wchar_string<256> &)
//{
//    mangled_ppc("?build_missing_prerequsites_item_string@@YAXPBVc_cui_component@@PAVc_cui_update_context@@W4e_controller_index@@Us_purchasable_item_handle@@AAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//void build_missing_prerequsites_unlockables_string(class c_cui_component const *, class c_cui_update_context *, enum e_controller_index, struct s_purchasable_item_handle, class c_static_wchar_string<256> &)
//{
//    mangled_ppc("?build_missing_prerequsites_unlockables_string@@YAXPBVc_cui_component@@PAVc_cui_update_context@@W4e_controller_index@@Us_purchasable_item_handle@@AAV?$c_static_wchar_string@$0BAA@@@@Z");
//};

//protected: bool c_player_model_purchase_event_handler_component::get_family_item_handle(struct s_purchasable_item_handle *)
//{
//    mangled_ppc("?get_family_item_handle@c_player_model_purchase_event_handler_component@@IAA_NPAUs_purchasable_item_handle@@@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_player_model_purchase_event_handler_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_player_model_purchase_event_handler_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_player_model_purchase_event_handler_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_purchase_event_handler_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_player_model_purchase_event_handler_component::get_driving_controller_index(void) const
//{
//    mangled_ppc("?get_driving_controller_index@c_player_model_purchase_event_handler_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_purchase_event_handler_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_player_model_purchase_event_handler_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_purchase_event_handler_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_driving_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_purchase_event_handler_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_driving_controller_index@c_player_model_purchase_event_handler_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_purchase_event_handler_component, struct s_player_configuration const *, struct s_player_configuration const *& (c_player_model_purchase_event_handler_component::get_player_configuration::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_purchase_event_handler_component@@PBUs_player_configuration@@$1?get_player_configuration@1@QBAPBU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_purchase_event_handler_component, struct s_player_configuration const *, void & (c_player_model_purchase_event_handler_component::set_player_configuration::*)(struct s_player_configuration const *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_purchase_event_handler_component@@PBUs_player_configuration@@$1?set_player_configuration@1@QAAXPBU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_player_model_purchase_event_handler_component@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@$1?get_current_purchase_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_purchase_event_handler_component@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@$1?get_current_purchase_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver> c_player_model_purchase_event_handler_component::get_current_purchase_category(void) const
//{
//    mangled_ppc("?get_current_purchase_category@c_player_model_purchase_event_handler_component@@QBA?AV?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_purchase_event_handler_component, class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>, void & (c_player_model_purchase_event_handler_component::set_current_purchase_category::*)(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_purchase_event_handler_component@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@$1?set_current_purchase_category@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_purchase_event_handler_component::set_current_purchase_category(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_current_purchase_category@c_player_model_purchase_event_handler_component@@QAAXV?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_purchase_event_handler_component, long, long & (c_player_model_purchase_event_handler_component::get_current_base::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_purchase_event_handler_component@@J$1?get_current_base@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_player_model_purchase_event_handler_component::get_current_base(void) const
//{
//    mangled_ppc("?get_current_base@c_player_model_purchase_event_handler_component@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_purchase_event_handler_component, long, void & (c_player_model_purchase_event_handler_component::set_current_base::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_purchase_event_handler_component@@J$1?set_current_base@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_purchase_event_handler_component::set_current_base(long)
//{
//    mangled_ppc("?set_current_base@c_player_model_purchase_event_handler_component@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_purchase_event_handler_component, long, long & (c_player_model_purchase_event_handler_component::get_current_piece::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_purchase_event_handler_component@@J$1?get_current_piece@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_player_model_purchase_event_handler_component::get_current_piece(void) const
//{
//    mangled_ppc("?get_current_piece@c_player_model_purchase_event_handler_component@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_purchase_event_handler_component, long, void & (c_player_model_purchase_event_handler_component::set_current_piece::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_purchase_event_handler_component@@J$1?set_current_piece@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_purchase_event_handler_component::set_current_piece(long)
//{
//    mangled_ppc("?set_current_piece@c_player_model_purchase_event_handler_component@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_purchase_event_handler_component, class c_input_event_component *, class c_input_event_component *& (c_player_model_purchase_event_handler_component::get_worn_event::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_purchase_event_handler_component@@PAVc_input_event_component@@$1?get_worn_event@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_input_event_component * c_player_model_purchase_event_handler_component::get_worn_event(void) const
//{
//    mangled_ppc("?get_worn_event@c_player_model_purchase_event_handler_component@@QBAPAVc_input_event_component@@XZ");
//};

//class c_cui_component * cui_component_create<class c_player_model_purchase_event_handler_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_player_model_purchase_event_handler_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_player_model_purchase_event_handler_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_player_model_purchase_event_handler_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_player_model_purchase_event_handler_component::c_player_model_purchase_event_handler_component(class c_player_model_purchase_event_handler_component const &)
//{
//    mangled_ppc("??0c_player_model_purchase_event_handler_component@@QAA@ABV0@@Z");
//};

