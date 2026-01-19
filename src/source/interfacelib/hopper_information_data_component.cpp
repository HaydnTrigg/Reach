/* ---------- headers */

#include "interfacelib\hopper_information_data_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum e_network_file_load_status, char, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_network_file_load_status@@D$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_network_file_load_status const c_enum_no_init<enum e_network_file_load_status, char, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_network_file_load_status@@D$0A@$03Us_default_enum_string_resolver@@@@2W4e_network_file_load_status@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_hopper_information_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_hopper_information_data_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_hopper_information_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_hopper_information_data_component@@@@0Vc_cui_object_property_table@@A"

// public: c_hopper_information_data_component::c_hopper_information_data_component(void);
// merged_84AC53F8;
// public: virtual c_hopper_information_data_component::~c_hopper_information_data_component(void);
// protected: virtual void c_hopper_information_data_component::do_update(class c_cui_update_context *);
// void clear_hopper_information(struct s_hopper_information *);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_hopper_information_data_component>::get_instance(void);
// class c_cui_component * cui_component_create<class c_hopper_information_data_component>(void);
// class c_cui_component * cui_component_clone<class c_hopper_information_data_component>(class c_cui_component const *);
// ??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@G$1?get_hopper_id@1@QBAGXZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: unsigned short c_hopper_information_data_component::get_hopper_id(void) const;
// bool cui_set_scalar_property_by_value<class c_hopper_information_data_component, unsigned short, void & (c_hopper_information_data_component::set_hopper_id::*)(unsigned short)>(void *, long, struct s_cui_property_value const *);
// public: void c_hopper_information_data_component::set_hopper_id(unsigned short);
// ??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@V?$c_enum@W4e_network_file_load_status@@D$0A@$03Us_default_enum_string_resolver@@@@$1?get_load_status@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_network_file_load_status, char, 0, 4, struct s_default_enum_string_resolver> c_hopper_information_data_component::get_load_status(void) const;
// public: c_enum<enum e_network_file_load_status, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_network_file_load_status, char, 0, 4, struct s_default_enum_string_resolver>(enum e_network_file_load_status);
// bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, bool, bool & (c_hopper_information_data_component::is_load_status_in_progress::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_hopper_information_data_component::is_load_status_in_progress(void) const;
// bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, bool, bool & (c_hopper_information_data_component::is_load_status_complete::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_hopper_information_data_component::is_load_status_complete(void) const;
// bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, bool, bool & (c_hopper_information_data_component::is_load_status_error::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_hopper_information_data_component::is_load_status_error(void) const;
// bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, wchar_t const *, wchar_t const *& (c_hopper_information_data_component::get_hopper_name::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_hopper_information_data_component::get_hopper_name(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@F$1?get_hopper_category_id@1@QBAFXZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: short c_hopper_information_data_component::get_hopper_category_id(void) const;
// bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, long, long & (c_hopper_information_data_component::get_image_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_hopper_information_data_component::get_image_index(void) const;
// bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, bool, bool & (c_hopper_information_data_component::is_visible::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_hopper_information_data_component::is_visible(void) const;
// bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, bool, bool & (c_hopper_information_data_component::is_playable::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_hopper_information_data_component::is_playable(void) const;
// bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, bool, bool & (c_hopper_information_data_component::is_skill_visible::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_hopper_information_data_component::is_skill_visible(void) const;
// bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, bool, bool & (c_hopper_information_data_component::get_has_xp_penalty::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_hopper_information_data_component::get_has_xp_penalty(void) const;
// public: c_hopper_information_data_component::c_hopper_information_data_component(class c_hopper_information_data_component const &);
// void cui_property_value_set<enum e_network_file_load_status, char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_network_file_load_status, char, 0, 4, struct s_default_enum_string_resolver> const &);
// public: enum e_network_file_load_status c_enum_no_init<enum e_network_file_load_status, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_network_file_load_status(void) const;
// void g_network_file_load_status_enum_table::`dynamic atexit destructor'(void);

//public: c_hopper_information_data_component::c_hopper_information_data_component(void)
//{
//    mangled_ppc("??0c_hopper_information_data_component@@QAA@XZ");
//};

//merged_84AC53F8
//{
//    mangled_ppc("merged_84AC53F8");
//};

//public: virtual c_hopper_information_data_component::~c_hopper_information_data_component(void)
//{
//    mangled_ppc("??1c_hopper_information_data_component@@UAA@XZ");
//};

//protected: virtual void c_hopper_information_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_hopper_information_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//void clear_hopper_information(struct s_hopper_information *)
//{
//    mangled_ppc("?clear_hopper_information@@YAXPAUs_hopper_information@@@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_hopper_information_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_hopper_information_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_cui_component * cui_component_create<class c_hopper_information_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_hopper_information_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_hopper_information_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_hopper_information_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@G$1?get_hopper_id@1@QBAGXZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@G$1?get_hopper_id@1@QBAGXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: unsigned short c_hopper_information_data_component::get_hopper_id(void) const
//{
//    mangled_ppc("?get_hopper_id@c_hopper_information_data_component@@QBAGXZ");
//};

//bool cui_set_scalar_property_by_value<class c_hopper_information_data_component, unsigned short, void & (c_hopper_information_data_component::set_hopper_id::*)(unsigned short)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_hopper_information_data_component@@G$1?set_hopper_id@1@QAAXG@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_hopper_information_data_component::set_hopper_id(unsigned short)
//{
//    mangled_ppc("?set_hopper_id@c_hopper_information_data_component@@QAAXG@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@V?$c_enum@W4e_network_file_load_status@@D$0A@$03Us_default_enum_string_resolver@@@@$1?get_load_status@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@V?$c_enum@W4e_network_file_load_status@@D$0A@$03Us_default_enum_string_resolver@@@@$1?get_load_status@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_network_file_load_status, char, 0, 4, struct s_default_enum_string_resolver> c_hopper_information_data_component::get_load_status(void) const
//{
//    mangled_ppc("?get_load_status@c_hopper_information_data_component@@QBA?AV?$c_enum@W4e_network_file_load_status@@D$0A@$03Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_enum<enum e_network_file_load_status, char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_network_file_load_status, char, 0, 4, struct s_default_enum_string_resolver>(enum e_network_file_load_status)
//{
//    mangled_ppc("??0?$c_enum@W4e_network_file_load_status@@D$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_network_file_load_status@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, bool, bool & (c_hopper_information_data_component::is_load_status_in_progress::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@_N$1?is_load_status_in_progress@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_hopper_information_data_component::is_load_status_in_progress(void) const
//{
//    mangled_ppc("?is_load_status_in_progress@c_hopper_information_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, bool, bool & (c_hopper_information_data_component::is_load_status_complete::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@_N$1?is_load_status_complete@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_hopper_information_data_component::is_load_status_complete(void) const
//{
//    mangled_ppc("?is_load_status_complete@c_hopper_information_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, bool, bool & (c_hopper_information_data_component::is_load_status_error::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@_N$1?is_load_status_error@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_hopper_information_data_component::is_load_status_error(void) const
//{
//    mangled_ppc("?is_load_status_error@c_hopper_information_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, wchar_t const *, wchar_t const *& (c_hopper_information_data_component::get_hopper_name::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@PB_W$1?get_hopper_name@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_hopper_information_data_component::get_hopper_name(void) const
//{
//    mangled_ppc("?get_hopper_name@c_hopper_information_data_component@@QBAPB_WXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@F$1?get_hopper_category_id@1@QBAFXZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@F$1?get_hopper_category_id@1@QBAFXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: short c_hopper_information_data_component::get_hopper_category_id(void) const
//{
//    mangled_ppc("?get_hopper_category_id@c_hopper_information_data_component@@QBAFXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, long, long & (c_hopper_information_data_component::get_image_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@J$1?get_image_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_hopper_information_data_component::get_image_index(void) const
//{
//    mangled_ppc("?get_image_index@c_hopper_information_data_component@@QBAJXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, bool, bool & (c_hopper_information_data_component::is_visible::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@_N$1?is_visible@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_hopper_information_data_component::is_visible(void) const
//{
//    mangled_ppc("?is_visible@c_hopper_information_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, bool, bool & (c_hopper_information_data_component::is_playable::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@_N$1?is_playable@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_hopper_information_data_component::is_playable(void) const
//{
//    mangled_ppc("?is_playable@c_hopper_information_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, bool, bool & (c_hopper_information_data_component::is_skill_visible::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@_N$1?is_skill_visible@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_hopper_information_data_component::is_skill_visible(void) const
//{
//    mangled_ppc("?is_skill_visible@c_hopper_information_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_hopper_information_data_component, bool, bool & (c_hopper_information_data_component::get_has_xp_penalty::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_hopper_information_data_component@@_N$1?get_has_xp_penalty@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_hopper_information_data_component::get_has_xp_penalty(void) const
//{
//    mangled_ppc("?get_has_xp_penalty@c_hopper_information_data_component@@QBA_NXZ");
//};

//public: c_hopper_information_data_component::c_hopper_information_data_component(class c_hopper_information_data_component const &)
//{
//    mangled_ppc("??0c_hopper_information_data_component@@QAA@ABV0@@Z");
//};

//void cui_property_value_set<enum e_network_file_load_status, char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_network_file_load_status, char, 0, 4, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_network_file_load_status@@D$0A@$03Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_network_file_load_status@@D$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_network_file_load_status c_enum_no_init<enum e_network_file_load_status, char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_network_file_load_status(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_network_file_load_status@@D$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_network_file_load_status@@XZ");
//};

//void g_network_file_load_status_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_network_file_load_status_enum_table@@YAXXZ");
//};

