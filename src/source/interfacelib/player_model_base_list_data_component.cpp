/* ---------- headers */

#include "interfacelib\player_model_base_list_data_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_player_model_base_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_player_model_base_list_data_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_player_model_base_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_player_model_base_list_data_component@@@@0Vc_cui_object_property_table@@A"

// public: c_player_model_base_list_data_component::c_player_model_base_list_data_component(void);
// merged_84B39050;
// public: virtual c_player_model_base_list_data_component::~c_player_model_base_list_data_component(void);
// public: c_player_model_base_list_data_component::c_player_model_base_list_data_component(class c_player_model_base_list_data_component const &);
// protected: virtual void c_player_model_base_list_data_component::do_update(class c_cui_update_context *);
// private: void c_player_model_base_list_data_component::update_items(void);
// private: void c_player_model_base_list_data_component::clear_items(void);
// private: void c_player_model_base_list_data_component::add_item(long, long, long, struct s_tag_reference const *, long, bool, bool);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_player_model_base_list_data_component>::get_instance(void);
// class c_cui_component * cui_component_create<class c_player_model_base_list_data_component>(void);
// class c_cui_component * cui_component_clone<class c_player_model_base_list_data_component>(class c_cui_component const *);
// ??$cui_get_scalar_property_by_return_value@Vc_player_model_base_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_player_model_base_list_data_component::get_driving_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_base_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_player_model_base_list_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_base_list_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// ??$cui_get_scalar_property_by_return_value@Vc_player_model_base_list_data_component@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@$1?get_current_purchase_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver> c_player_model_base_list_data_component::get_current_purchase_category(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_base_list_data_component, class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>, void & (c_player_model_base_list_data_component::set_current_purchase_category::*)(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_base_list_data_component::set_current_purchase_category(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_player_model_base_list_data_component, long, long & (c_player_model_base_list_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_player_model_base_list_data_component::get_item_count(void) const;
// long cui_object_component_get_property_element_count<class c_player_model_base_list_data_component, long & (c_player_model_base_list_data_component::get_item_count::*)(void)>(void const *);
// bool cui_get_array_property_element_by_return_value<class c_player_model_base_list_data_component, long, long & (c_player_model_base_list_data_component::get_item_count::*)(void), long & (c_player_model_base_list_data_component::get_item_family_index::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_player_model_base_list_data_component::get_item_family_index(long) const;
// bool cui_get_array_property_element_by_return_value<class c_player_model_base_list_data_component, long, long & (c_player_model_base_list_data_component::get_item_count::*)(void), long & (c_player_model_base_list_data_component::get_item_display_family_index::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_player_model_base_list_data_component::get_item_display_family_index(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_player_model_base_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_item_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_player_model_base_list_data_component::get_item_name(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_player_model_base_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_item_description@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_player_model_base_list_data_component::get_item_description(long) const;
// bool cui_get_array_property_element_by_out_pointer<class c_player_model_base_list_data_component, struct s_tag_reference, long & (c_player_model_base_list_data_component::get_item_count::*)(void), void & (c_player_model_base_list_data_component::get_item_bitmap_reference::*)(long, struct s_tag_reference *)>(void const *, long, struct s_cui_property_value *);
// public: void c_player_model_base_list_data_component::get_item_bitmap_reference(long, struct s_tag_reference *) const;
// bool cui_get_array_property_element_by_return_value<class c_player_model_base_list_data_component, long, long & (c_player_model_base_list_data_component::get_item_count::*)(void), long & (c_player_model_base_list_data_component::get_item_bitmap_frame::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: long c_player_model_base_list_data_component::get_item_bitmap_frame(long) const;
// bool cui_get_array_property_element_by_return_value<class c_player_model_base_list_data_component, bool, long & (c_player_model_base_list_data_component::get_item_count::*)(void), bool & (c_player_model_base_list_data_component::get_item_new::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_player_model_base_list_data_component::get_item_new(long) const;
// bool cui_get_array_property_element_by_return_value<class c_player_model_base_list_data_component, bool, long & (c_player_model_base_list_data_component::get_item_count::*)(void), bool & (c_player_model_base_list_data_component::get_item_worn::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_player_model_base_list_data_component::get_item_worn(long) const;
// bool cui_try_get_scalar_property_by_out_reference<class c_player_model_base_list_data_component, long, bool & (c_player_model_base_list_data_component::get_initial_item_index::*)(long &)>(void const *, long, struct s_cui_property_value *);
// public: bool c_player_model_base_list_data_component::get_initial_item_index(long &) const;
// void cui_property_value_set<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver> *);

//public: c_player_model_base_list_data_component::c_player_model_base_list_data_component(void)
//{
//    mangled_ppc("??0c_player_model_base_list_data_component@@QAA@XZ");
//};

//merged_84B39050
//{
//    mangled_ppc("merged_84B39050");
//};

//public: virtual c_player_model_base_list_data_component::~c_player_model_base_list_data_component(void)
//{
//    mangled_ppc("??1c_player_model_base_list_data_component@@UAA@XZ");
//};

//public: c_player_model_base_list_data_component::c_player_model_base_list_data_component(class c_player_model_base_list_data_component const &)
//{
//    mangled_ppc("??0c_player_model_base_list_data_component@@QAA@ABV0@@Z");
//};

//protected: virtual void c_player_model_base_list_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_player_model_base_list_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_player_model_base_list_data_component::update_items(void)
//{
//    mangled_ppc("?update_items@c_player_model_base_list_data_component@@AAAXXZ");
//};

//private: void c_player_model_base_list_data_component::clear_items(void)
//{
//    mangled_ppc("?clear_items@c_player_model_base_list_data_component@@AAAXXZ");
//};

//private: void c_player_model_base_list_data_component::add_item(long, long, long, struct s_tag_reference const *, long, bool, bool)
//{
//    mangled_ppc("?add_item@c_player_model_base_list_data_component@@AAAXJJJPBUs_tag_reference@@J_N1@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_player_model_base_list_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_player_model_base_list_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_cui_component * cui_component_create<class c_player_model_base_list_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_player_model_base_list_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_player_model_base_list_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_player_model_base_list_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_player_model_base_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_base_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_player_model_base_list_data_component::get_driving_controller_index(void) const
//{
//    mangled_ppc("?get_driving_controller_index@c_player_model_base_list_data_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_base_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_player_model_base_list_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_base_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_driving_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_base_list_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_driving_controller_index@c_player_model_base_list_data_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_player_model_base_list_data_component@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@$1?get_current_purchase_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_base_list_data_component@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@$1?get_current_purchase_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver> c_player_model_base_list_data_component::get_current_purchase_category(void) const
//{
//    mangled_ppc("?get_current_purchase_category@c_player_model_base_list_data_component@@QBA?AV?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_base_list_data_component, class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>, void & (c_player_model_base_list_data_component::set_current_purchase_category::*)(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_base_list_data_component@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@$1?set_current_purchase_category@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_base_list_data_component::set_current_purchase_category(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_current_purchase_category@c_player_model_base_list_data_component@@QAAXV?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_base_list_data_component, long, long & (c_player_model_base_list_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_base_list_data_component@@J$1?get_item_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_player_model_base_list_data_component::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_player_model_base_list_data_component@@QBAJXZ");
//};

//long cui_object_component_get_property_element_count<class c_player_model_base_list_data_component, long & (c_player_model_base_list_data_component::get_item_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_player_model_base_list_data_component@@$1?get_item_count@1@QBAJXZ@@YAJPBX@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_player_model_base_list_data_component, long, long & (c_player_model_base_list_data_component::get_item_count::*)(void), long & (c_player_model_base_list_data_component::get_item_family_index::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_player_model_base_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_item_family_index@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_player_model_base_list_data_component::get_item_family_index(long) const
//{
//    mangled_ppc("?get_item_family_index@c_player_model_base_list_data_component@@QBAJJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_player_model_base_list_data_component, long, long & (c_player_model_base_list_data_component::get_item_count::*)(void), long & (c_player_model_base_list_data_component::get_item_display_family_index::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_player_model_base_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_item_display_family_index@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_player_model_base_list_data_component::get_item_display_family_index(long) const
//{
//    mangled_ppc("?get_item_display_family_index@c_player_model_base_list_data_component@@QBAJJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_player_model_base_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_item_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_player_model_base_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_item_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_player_model_base_list_data_component::get_item_name(long) const
//{
//    mangled_ppc("?get_item_name@c_player_model_base_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_player_model_base_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_item_description@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_player_model_base_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_item_description@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_player_model_base_list_data_component::get_item_description(long) const
//{
//    mangled_ppc("?get_item_description@c_player_model_base_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_player_model_base_list_data_component, struct s_tag_reference, long & (c_player_model_base_list_data_component::get_item_count::*)(void), void & (c_player_model_base_list_data_component::get_item_bitmap_reference::*)(long, struct s_tag_reference *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_player_model_base_list_data_component@@Us_tag_reference@@$1?get_item_count@1@QBAJXZ$1?get_item_bitmap_reference@1@QBAXJPAU2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_player_model_base_list_data_component::get_item_bitmap_reference(long, struct s_tag_reference *) const
//{
//    mangled_ppc("?get_item_bitmap_reference@c_player_model_base_list_data_component@@QBAXJPAUs_tag_reference@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_player_model_base_list_data_component, long, long & (c_player_model_base_list_data_component::get_item_count::*)(void), long & (c_player_model_base_list_data_component::get_item_bitmap_frame::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_player_model_base_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_item_bitmap_frame@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_player_model_base_list_data_component::get_item_bitmap_frame(long) const
//{
//    mangled_ppc("?get_item_bitmap_frame@c_player_model_base_list_data_component@@QBAJJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_player_model_base_list_data_component, bool, long & (c_player_model_base_list_data_component::get_item_count::*)(void), bool & (c_player_model_base_list_data_component::get_item_new::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_player_model_base_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_item_new@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_player_model_base_list_data_component::get_item_new(long) const
//{
//    mangled_ppc("?get_item_new@c_player_model_base_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_player_model_base_list_data_component, bool, long & (c_player_model_base_list_data_component::get_item_count::*)(void), bool & (c_player_model_base_list_data_component::get_item_worn::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_player_model_base_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_item_worn@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_player_model_base_list_data_component::get_item_worn(long) const
//{
//    mangled_ppc("?get_item_worn@c_player_model_base_list_data_component@@QBA_NJ@Z");
//};

//bool cui_try_get_scalar_property_by_out_reference<class c_player_model_base_list_data_component, long, bool & (c_player_model_base_list_data_component::get_initial_item_index::*)(long &)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_reference@Vc_player_model_base_list_data_component@@J$1?get_initial_item_index@1@QBA_NAAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_player_model_base_list_data_component::get_initial_item_index(long &) const
//{
//    mangled_ppc("?get_initial_item_index@c_player_model_base_list_data_component@@QBA_NAAJ@Z");
//};

//void cui_property_value_set<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@@Z");
//};

