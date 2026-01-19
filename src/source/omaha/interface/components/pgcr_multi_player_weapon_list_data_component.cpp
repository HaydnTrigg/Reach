/* ---------- headers */

#include "omaha\interface\components\pgcr_multi_player_weapon_list_data_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_pgcr_multi_player_weapon_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_pgcr_multi_player_weapon_list_data_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_pgcr_multi_player_weapon_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_pgcr_multi_player_weapon_list_data_component@@@@0Vc_cui_object_property_table@@A"

// bool pgcr_multi_player_weapon_compare(long, long, void *);
// public: c_pgcr_multi_player_weapon_list_data_component::c_pgcr_multi_player_weapon_list_data_component(void);
// merged_84B310E0;
// public: virtual c_pgcr_multi_player_weapon_list_data_component::~c_pgcr_multi_player_weapon_list_data_component(void);
// protected: virtual void c_pgcr_multi_player_weapon_list_data_component::do_update(class c_cui_update_context *);
// private: void c_pgcr_multi_player_weapon_list_data_component::update_items(class c_cui_update_context *);
// private: void c_pgcr_multi_player_weapon_list_data_component::clear_items(void);
// class c_game_results const * get_game_results(void);
// struct s_game_results_player_statistics const * get_player_statistics(class c_game_results const *, long);
// short player_index_from_identifier(class c_game_results const *, struct s_player_identifier const *);
// private: void c_pgcr_multi_player_weapon_list_data_component::add_item(enum e_damage_reporting_type);
// public: struct s_player_identifier c_pgcr_multi_player_weapon_list_data_component::get_player_identifier(void) const;
// public: void c_pgcr_multi_player_weapon_list_data_component::set_player_identifier(struct s_player_identifier const &);
// public: class c_enum_no_init<enum e_damage_reporting_type, unsigned char, 0, 82, struct s_default_enum_string_resolver> c_pgcr_multi_player_weapon_list_data_component::get_weapon_type(long) const;
// public: wchar_t const * c_pgcr_multi_player_weapon_list_data_component::get_weapon_name(long) const;
// public: long c_pgcr_multi_player_weapon_list_data_component::get_weapon_kills(long) const;
// public: long c_pgcr_multi_player_weapon_list_data_component::get_weapon_image_index(long) const;
// public: static long s_static_array<enum e_damage_reporting_type, 82>::get_count(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_pgcr_multi_player_weapon_list_data_component>::get_instance(void);
// class c_cui_component * cui_component_create<class c_pgcr_multi_player_weapon_list_data_component>(void);
// class c_cui_component * cui_component_clone<class c_pgcr_multi_player_weapon_list_data_component>(class c_cui_component const *);
// ??$cui_get_scalar_property_by_return_value@Vc_pgcr_multi_player_weapon_list_data_component@@Us_player_identifier@@$1?get_player_identifier@1@QBA?AU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_set_scalar_property_by_const_reference<class c_pgcr_multi_player_weapon_list_data_component, struct s_player_identifier, void & (c_pgcr_multi_player_weapon_list_data_component::set_player_identifier::*)(struct s_player_identifier const &)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_pgcr_multi_player_weapon_list_data_component, long, long & (c_pgcr_multi_player_weapon_list_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_pgcr_multi_player_weapon_list_data_component::get_item_count(void) const;
// long cui_object_component_get_property_element_count<class c_pgcr_multi_player_weapon_list_data_component, long & (c_pgcr_multi_player_weapon_list_data_component::get_item_count::*)(void)>(void const *);
// ??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_weapon_list_data_component@@V?$c_enum_no_init@W4e_damage_reporting_type@@E$0A@$0FC@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_weapon_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_weapon_list_data_component, wchar_t const *, long & (c_pgcr_multi_player_weapon_list_data_component::get_item_count::*)(void), wchar_t const *& (c_pgcr_multi_player_weapon_list_data_component::get_weapon_name::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_weapon_list_data_component, long, long & (c_pgcr_multi_player_weapon_list_data_component::get_item_count::*)(void), long & (c_pgcr_multi_player_weapon_list_data_component::get_weapon_kills::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_weapon_list_data_component, long, long & (c_pgcr_multi_player_weapon_list_data_component::get_item_count::*)(void), long & (c_pgcr_multi_player_weapon_list_data_component::get_weapon_image_index::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: enum e_damage_reporting_type & s_static_array<enum e_damage_reporting_type, 82>::operator[]<int>(int);
// public: enum e_damage_reporting_type & s_static_array<enum e_damage_reporting_type, 82>::operator[]<short>(short);
// public: class c_static_wchar_string<1024> & s_static_array<class c_static_wchar_string<1024>, 82>::operator[]<short>(short);
// public: enum e_damage_reporting_type & s_static_array<enum e_damage_reporting_type, 82>::operator[]<long>(long);
// public: enum e_damage_reporting_type const & s_static_array<enum e_damage_reporting_type, 82>::operator[]<long>(long) const;
// public: class c_static_wchar_string<1024> const & s_static_array<class c_static_wchar_string<1024>, 82>::operator[]<long>(long) const;
// public: c_pgcr_multi_player_weapon_list_data_component::c_pgcr_multi_player_weapon_list_data_component(class c_pgcr_multi_player_weapon_list_data_component const &);
// void cui_property_value_set<enum e_damage_reporting_type, unsigned char, 0, 82, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum_no_init<enum e_damage_reporting_type, unsigned char, 0, 82, struct s_default_enum_string_resolver> const &);
// public: static bool s_static_array<enum e_damage_reporting_type, 82>::valid<int>(int);
// public: static bool s_static_array<enum e_damage_reporting_type, 82>::valid<short>(short);
// public: static bool s_static_array<class c_static_wchar_string<1024>, 82>::valid<short>(short);
// public: static bool s_static_array<enum e_damage_reporting_type, 82>::valid<long>(long);
// public: static bool s_static_array<class c_static_wchar_string<1024>, 82>::valid<long>(long);

//bool pgcr_multi_player_weapon_compare(long, long, void *)
//{
//    mangled_ppc("?pgcr_multi_player_weapon_compare@@YA_NJJPAX@Z");
//};

//public: c_pgcr_multi_player_weapon_list_data_component::c_pgcr_multi_player_weapon_list_data_component(void)
//{
//    mangled_ppc("??0c_pgcr_multi_player_weapon_list_data_component@@QAA@XZ");
//};

//merged_84B310E0
//{
//    mangled_ppc("merged_84B310E0");
//};

//public: virtual c_pgcr_multi_player_weapon_list_data_component::~c_pgcr_multi_player_weapon_list_data_component(void)
//{
//    mangled_ppc("??1c_pgcr_multi_player_weapon_list_data_component@@UAA@XZ");
//};

//protected: virtual void c_pgcr_multi_player_weapon_list_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_pgcr_multi_player_weapon_list_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_pgcr_multi_player_weapon_list_data_component::update_items(class c_cui_update_context *)
//{
//    mangled_ppc("?update_items@c_pgcr_multi_player_weapon_list_data_component@@AAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_pgcr_multi_player_weapon_list_data_component::clear_items(void)
//{
//    mangled_ppc("?clear_items@c_pgcr_multi_player_weapon_list_data_component@@AAAXXZ");
//};

//class c_game_results const * get_game_results(void)
//{
//    mangled_ppc("?get_game_results@@YAPBVc_game_results@@XZ");
//};

//struct s_game_results_player_statistics const * get_player_statistics(class c_game_results const *, long)
//{
//    mangled_ppc("?get_player_statistics@@YAPBUs_game_results_player_statistics@@PBVc_game_results@@J@Z");
//};

//short player_index_from_identifier(class c_game_results const *, struct s_player_identifier const *)
//{
//    mangled_ppc("?player_index_from_identifier@@YAFPBVc_game_results@@PBUs_player_identifier@@@Z");
//};

//private: void c_pgcr_multi_player_weapon_list_data_component::add_item(enum e_damage_reporting_type)
//{
//    mangled_ppc("?add_item@c_pgcr_multi_player_weapon_list_data_component@@AAAXW4e_damage_reporting_type@@@Z");
//};

//public: struct s_player_identifier c_pgcr_multi_player_weapon_list_data_component::get_player_identifier(void) const
//{
//    mangled_ppc("?get_player_identifier@c_pgcr_multi_player_weapon_list_data_component@@QBA?AUs_player_identifier@@XZ");
//};

//public: void c_pgcr_multi_player_weapon_list_data_component::set_player_identifier(struct s_player_identifier const &)
//{
//    mangled_ppc("?set_player_identifier@c_pgcr_multi_player_weapon_list_data_component@@QAAXABUs_player_identifier@@@Z");
//};

//public: class c_enum_no_init<enum e_damage_reporting_type, unsigned char, 0, 82, struct s_default_enum_string_resolver> c_pgcr_multi_player_weapon_list_data_component::get_weapon_type(long) const
//{
//    mangled_ppc("?get_weapon_type@c_pgcr_multi_player_weapon_list_data_component@@QBA?AV?$c_enum_no_init@W4e_damage_reporting_type@@E$0A@$0FC@Us_default_enum_string_resolver@@@@J@Z");
//};

//public: wchar_t const * c_pgcr_multi_player_weapon_list_data_component::get_weapon_name(long) const
//{
//    mangled_ppc("?get_weapon_name@c_pgcr_multi_player_weapon_list_data_component@@QBAPB_WJ@Z");
//};

//public: long c_pgcr_multi_player_weapon_list_data_component::get_weapon_kills(long) const
//{
//    mangled_ppc("?get_weapon_kills@c_pgcr_multi_player_weapon_list_data_component@@QBAJJ@Z");
//};

//public: long c_pgcr_multi_player_weapon_list_data_component::get_weapon_image_index(long) const
//{
//    mangled_ppc("?get_weapon_image_index@c_pgcr_multi_player_weapon_list_data_component@@QBAJJ@Z");
//};

//public: static long s_static_array<enum e_damage_reporting_type, 82>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@W4e_damage_reporting_type@@$0FC@@@SAJXZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_pgcr_multi_player_weapon_list_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_pgcr_multi_player_weapon_list_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_cui_component * cui_component_create<class c_pgcr_multi_player_weapon_list_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_pgcr_multi_player_weapon_list_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_pgcr_multi_player_weapon_list_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_pgcr_multi_player_weapon_list_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_pgcr_multi_player_weapon_list_data_component@@Us_player_identifier@@$1?get_player_identifier@1@QBA?AU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_pgcr_multi_player_weapon_list_data_component@@Us_player_identifier@@$1?get_player_identifier@1@QBA?AU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_const_reference<class c_pgcr_multi_player_weapon_list_data_component, struct s_player_identifier, void & (c_pgcr_multi_player_weapon_list_data_component::set_player_identifier::*)(struct s_player_identifier const &)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_const_reference@Vc_pgcr_multi_player_weapon_list_data_component@@Us_player_identifier@@$1?set_player_identifier@1@QAAXABU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_pgcr_multi_player_weapon_list_data_component, long, long & (c_pgcr_multi_player_weapon_list_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_pgcr_multi_player_weapon_list_data_component@@J$1?get_item_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_pgcr_multi_player_weapon_list_data_component::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_pgcr_multi_player_weapon_list_data_component@@QBAJXZ");
//};

//long cui_object_component_get_property_element_count<class c_pgcr_multi_player_weapon_list_data_component, long & (c_pgcr_multi_player_weapon_list_data_component::get_item_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_pgcr_multi_player_weapon_list_data_component@@$1?get_item_count@1@QBAJXZ@@YAJPBX@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_weapon_list_data_component@@V?$c_enum_no_init@W4e_damage_reporting_type@@E$0A@$0FC@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_weapon_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_weapon_list_data_component@@V?$c_enum_no_init@W4e_damage_reporting_type@@E$0A@$0FC@Us_default_enum_string_resolver@@@@$1?get_item_count@1@QBAJXZ$1?get_weapon_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_weapon_list_data_component, wchar_t const *, long & (c_pgcr_multi_player_weapon_list_data_component::get_item_count::*)(void), wchar_t const *& (c_pgcr_multi_player_weapon_list_data_component::get_weapon_name::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_weapon_list_data_component@@PB_W$1?get_item_count@1@QBAJXZ$1?get_weapon_name@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_weapon_list_data_component, long, long & (c_pgcr_multi_player_weapon_list_data_component::get_item_count::*)(void), long & (c_pgcr_multi_player_weapon_list_data_component::get_weapon_kills::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_weapon_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_weapon_kills@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_weapon_list_data_component, long, long & (c_pgcr_multi_player_weapon_list_data_component::get_item_count::*)(void), long & (c_pgcr_multi_player_weapon_list_data_component::get_weapon_image_index::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_weapon_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_weapon_image_index@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: enum e_damage_reporting_type & s_static_array<enum e_damage_reporting_type, 82>::operator[]<int>(int)
//{
//    mangled_ppc("??$?AH@?$s_static_array@W4e_damage_reporting_type@@$0FC@@@QAAAAW4e_damage_reporting_type@@H@Z");
//};

//public: enum e_damage_reporting_type & s_static_array<enum e_damage_reporting_type, 82>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@W4e_damage_reporting_type@@$0FC@@@QAAAAW4e_damage_reporting_type@@F@Z");
//};

//public: class c_static_wchar_string<1024> & s_static_array<class c_static_wchar_string<1024>, 82>::operator[]<short>(short)
//{
//    mangled_ppc("??$?AF@?$s_static_array@V?$c_static_wchar_string@$0EAA@@@$0FC@@@QAAAAV?$c_static_wchar_string@$0EAA@@@F@Z");
//};

//public: enum e_damage_reporting_type & s_static_array<enum e_damage_reporting_type, 82>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@W4e_damage_reporting_type@@$0FC@@@QAAAAW4e_damage_reporting_type@@J@Z");
//};

//public: enum e_damage_reporting_type const & s_static_array<enum e_damage_reporting_type, 82>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@W4e_damage_reporting_type@@$0FC@@@QBAABW4e_damage_reporting_type@@J@Z");
//};

//public: class c_static_wchar_string<1024> const & s_static_array<class c_static_wchar_string<1024>, 82>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@V?$c_static_wchar_string@$0EAA@@@$0FC@@@QBAABV?$c_static_wchar_string@$0EAA@@@J@Z");
//};

//public: c_pgcr_multi_player_weapon_list_data_component::c_pgcr_multi_player_weapon_list_data_component(class c_pgcr_multi_player_weapon_list_data_component const &)
//{
//    mangled_ppc("??0c_pgcr_multi_player_weapon_list_data_component@@QAA@ABV0@@Z");
//};

//void cui_property_value_set<enum e_damage_reporting_type, unsigned char, 0, 82, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum_no_init<enum e_damage_reporting_type, unsigned char, 0, 82, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_damage_reporting_type@@E$0A@$0FC@Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum_no_init@W4e_damage_reporting_type@@E$0A@$0FC@Us_default_enum_string_resolver@@@@@Z");
//};

//public: static bool s_static_array<enum e_damage_reporting_type, 82>::valid<int>(int)
//{
//    mangled_ppc("??$valid@H@?$s_static_array@W4e_damage_reporting_type@@$0FC@@@SA_NH@Z");
//};

//public: static bool s_static_array<enum e_damage_reporting_type, 82>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@W4e_damage_reporting_type@@$0FC@@@SA_NF@Z");
//};

//public: static bool s_static_array<class c_static_wchar_string<1024>, 82>::valid<short>(short)
//{
//    mangled_ppc("??$valid@F@?$s_static_array@V?$c_static_wchar_string@$0EAA@@@$0FC@@@SA_NF@Z");
//};

//public: static bool s_static_array<enum e_damage_reporting_type, 82>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@W4e_damage_reporting_type@@$0FC@@@SA_NJ@Z");
//};

//public: static bool s_static_array<class c_static_wchar_string<1024>, 82>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@V?$c_static_wchar_string@$0EAA@@@$0FC@@@SA_NJ@Z");
//};

