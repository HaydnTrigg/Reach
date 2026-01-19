/* ---------- headers */

#include "interfacelib\pgcr_multi_player_medal_list_data_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const c_pgcr_multi_player_medal_list_data_component::k_medal_and_commendation_count; // "?k_medal_and_commendation_count@c_pgcr_multi_player_medal_list_data_component@@2JB"
// public: static long const s_static_array<struct c_pgcr_campaign_data_component::s_pgcr_player_commendation_or_medal, 256>::k_element_count; // "?k_element_count@?$s_static_array@Us_pgcr_player_commendation_or_medal@c_pgcr_campaign_data_component@@$0BAA@@@2JB"
// public: static long const s_static_array<class c_static_wchar_string<1024>, 256>::k_element_count; // "?k_element_count@?$s_static_array@V?$c_static_wchar_string@$0EAA@@@$0BAA@@@2JB"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_pgcr_multi_player_medal_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_pgcr_multi_player_medal_list_data_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_pgcr_multi_player_medal_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_pgcr_multi_player_medal_list_data_component@@@@0Vc_cui_object_property_table@@A"

// public: c_pgcr_multi_player_medal_list_data_component::c_pgcr_multi_player_medal_list_data_component(void);
// public: virtual long c_pgcr_multi_player_medal_list_data_component::get_element_width_units(long) const;
// public: bool c_pgcr_multi_player_medal_list_data_component::get_medal_is_commendation(long) const;
// public: virtual long c_pgcr_multi_player_medal_list_data_component::get_element_selectable(long) const;
// merged_84B2F9C0;
// public: s_static_array<class c_static_wchar_string<1024>, 256>::s_static_array<class c_static_wchar_string<1024>, 256>(void);
// public: virtual c_pgcr_multi_player_medal_list_data_component::~c_pgcr_multi_player_medal_list_data_component(void);
// protected: virtual void c_pgcr_multi_player_medal_list_data_component::do_update(class c_cui_update_context *);
// private: void c_pgcr_multi_player_medal_list_data_component::update_items(class c_cui_update_context *);
// private: void c_pgcr_multi_player_medal_list_data_component::clear_items(void);
// class c_game_results const * get_game_results(void);
// short player_index_from_identifier(class c_game_results const *, struct s_player_identifier const *);
// private: void c_pgcr_multi_player_medal_list_data_component::add_player_commendations(long, class c_game_results const *);
// private: void c_pgcr_multi_player_medal_list_data_component::add_player_medals(long, class c_game_results const *);
// public: struct s_player_identifier c_pgcr_multi_player_medal_list_data_component::get_player_identifier(void) const;
// public: void c_pgcr_multi_player_medal_list_data_component::set_player_identifier(struct s_player_identifier const &);
// public: class c_enum<enum c_pgcr_campaign_data_component::e_pgcr_award_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> c_pgcr_multi_player_medal_list_data_component::get_medal_type(long) const;
// public: class c_cui_string_id c_pgcr_multi_player_medal_list_data_component::get_medal_name(long) const;
// public: class c_cui_string_id c_pgcr_multi_player_medal_list_data_component::get_medal_description(long) const;
// public: long c_pgcr_multi_player_medal_list_data_component::get_medal_awarded_count(long) const;
// public: class c_enum<enum e_commendation_progression_level, char, -1, 7, struct s_default_enum_string_resolver> c_pgcr_multi_player_medal_list_data_component::get_medal_commendation_level(long) const;
// public: short c_pgcr_multi_player_medal_list_data_component::get_medal_commendation_medal_sprite_index(long) const;
// public: short c_pgcr_multi_player_medal_list_data_component::get_medal_commendation_game_type_sprite_index(long) const;
// public: static long s_static_array<struct c_pgcr_campaign_data_component::s_pgcr_player_commendation_or_medal, 256>::get_count(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_pgcr_multi_player_medal_list_data_component>::get_instance(void);
// ??$cui_get_scalar_property_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@Us_player_identifier@@$1?get_player_identifier@1@QBA?AU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_set_scalar_property_by_const_reference<class c_pgcr_multi_player_medal_list_data_component, struct s_player_identifier, void & (c_pgcr_multi_player_medal_list_data_component::set_player_identifier::*)(struct s_player_identifier const &)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_pgcr_multi_player_medal_list_data_component, long, long & (c_pgcr_multi_player_medal_list_data_component::get_medal_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_pgcr_multi_player_medal_list_data_component::get_medal_count(void) const;
// long cui_object_component_get_property_element_count<class c_pgcr_multi_player_medal_list_data_component, long & (c_pgcr_multi_player_medal_list_data_component::get_medal_count::*)(void)>(void const *);
// ??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@V?$c_enum@W4e_pgcr_award_type@c_pgcr_campaign_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@$1?get_medal_count@1@QBAJXZ$1?get_medal_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_medal_list_data_component, bool, long & (c_pgcr_multi_player_medal_list_data_component::get_medal_count::*)(void), bool & (c_pgcr_multi_player_medal_list_data_component::get_medal_is_commendation::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_medal_list_data_component, bool, long & (c_pgcr_multi_player_medal_list_data_component::get_medal_count::*)(void), bool & (c_pgcr_multi_player_medal_list_data_component::get_medal_is_medal::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_pgcr_multi_player_medal_list_data_component::get_medal_is_medal(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@Vc_cui_string_id@@$1?get_medal_count@1@QBAJXZ$1?get_medal_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@Vc_cui_string_id@@$1?get_medal_count@1@QBAJXZ$1?get_medal_description@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_medal_list_data_component, long, long & (c_pgcr_multi_player_medal_list_data_component::get_medal_count::*)(void), long & (c_pgcr_multi_player_medal_list_data_component::get_medal_awarded_count::*)(long)>(void const *, long, struct s_cui_property_value *);
// ??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@V?$c_enum@W4e_commendation_progression_level@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_medal_count@1@QBAJXZ$1?get_medal_commendation_level@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_medal_list_data_component, short, long & (c_pgcr_multi_player_medal_list_data_component::get_medal_count::*)(void), long const & (c_pgcr_multi_player_medal_list_data_component::get_medal_commendation_medal_sprite_index::*)()>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_medal_list_data_component, short, long & (c_pgcr_multi_player_medal_list_data_component::get_medal_count::*)(void), long const & (c_pgcr_multi_player_medal_list_data_component::get_medal_commendation_game_type_sprite_index::*)()>(void const *, long, struct s_cui_property_value *);
// public: struct c_pgcr_campaign_data_component::s_pgcr_player_commendation_or_medal & s_static_array<struct c_pgcr_campaign_data_component::s_pgcr_player_commendation_or_medal, 256>::operator[]<long>(long);
// public: struct c_pgcr_campaign_data_component::s_pgcr_player_commendation_or_medal const & s_static_array<struct c_pgcr_campaign_data_component::s_pgcr_player_commendation_or_medal, 256>::operator[]<long>(long) const;
// public: static bool s_static_array<struct c_pgcr_campaign_data_component::s_pgcr_player_commendation_or_medal, 256>::valid<long>(long);
// class c_cui_component * cui_component_create<class c_pgcr_multi_player_medal_list_data_component>(void);
// class c_cui_component * cui_component_clone<class c_pgcr_multi_player_medal_list_data_component>(class c_cui_component const *);
// public: c_pgcr_multi_player_medal_list_data_component::c_pgcr_multi_player_medal_list_data_component(class c_pgcr_multi_player_medal_list_data_component const &);
// void g_pgcr_award_type_enum_table::`dynamic atexit destructor'(void);

//public: c_pgcr_multi_player_medal_list_data_component::c_pgcr_multi_player_medal_list_data_component(void)
//{
//    mangled_ppc("??0c_pgcr_multi_player_medal_list_data_component@@QAA@XZ");
//};

//public: virtual long c_pgcr_multi_player_medal_list_data_component::get_element_width_units(long) const
//{
//    mangled_ppc("?get_element_width_units@c_pgcr_multi_player_medal_list_data_component@@UBAJJ@Z");
//};

//public: bool c_pgcr_multi_player_medal_list_data_component::get_medal_is_commendation(long) const
//{
//    mangled_ppc("?get_medal_is_commendation@c_pgcr_multi_player_medal_list_data_component@@QBA_NJ@Z");
//};

//public: virtual long c_pgcr_multi_player_medal_list_data_component::get_element_selectable(long) const
//{
//    mangled_ppc("?get_element_selectable@c_pgcr_multi_player_medal_list_data_component@@UBAJJ@Z");
//};

//merged_84B2F9C0
//{
//    mangled_ppc("merged_84B2F9C0");
//};

//public: s_static_array<class c_static_wchar_string<1024>, 256>::s_static_array<class c_static_wchar_string<1024>, 256>(void)
//{
//    mangled_ppc("??0?$s_static_array@V?$c_static_wchar_string@$0EAA@@@$0BAA@@@QAA@XZ");
//};

//public: virtual c_pgcr_multi_player_medal_list_data_component::~c_pgcr_multi_player_medal_list_data_component(void)
//{
//    mangled_ppc("??1c_pgcr_multi_player_medal_list_data_component@@UAA@XZ");
//};

//protected: virtual void c_pgcr_multi_player_medal_list_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_pgcr_multi_player_medal_list_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_pgcr_multi_player_medal_list_data_component::update_items(class c_cui_update_context *)
//{
//    mangled_ppc("?update_items@c_pgcr_multi_player_medal_list_data_component@@AAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_pgcr_multi_player_medal_list_data_component::clear_items(void)
//{
//    mangled_ppc("?clear_items@c_pgcr_multi_player_medal_list_data_component@@AAAXXZ");
//};

//class c_game_results const * get_game_results(void)
//{
//    mangled_ppc("?get_game_results@@YAPBVc_game_results@@XZ");
//};

//short player_index_from_identifier(class c_game_results const *, struct s_player_identifier const *)
//{
//    mangled_ppc("?player_index_from_identifier@@YAFPBVc_game_results@@PBUs_player_identifier@@@Z");
//};

//private: void c_pgcr_multi_player_medal_list_data_component::add_player_commendations(long, class c_game_results const *)
//{
//    mangled_ppc("?add_player_commendations@c_pgcr_multi_player_medal_list_data_component@@AAAXJPBVc_game_results@@@Z");
//};

//private: void c_pgcr_multi_player_medal_list_data_component::add_player_medals(long, class c_game_results const *)
//{
//    mangled_ppc("?add_player_medals@c_pgcr_multi_player_medal_list_data_component@@AAAXJPBVc_game_results@@@Z");
//};

//public: struct s_player_identifier c_pgcr_multi_player_medal_list_data_component::get_player_identifier(void) const
//{
//    mangled_ppc("?get_player_identifier@c_pgcr_multi_player_medal_list_data_component@@QBA?AUs_player_identifier@@XZ");
//};

//public: void c_pgcr_multi_player_medal_list_data_component::set_player_identifier(struct s_player_identifier const &)
//{
//    mangled_ppc("?set_player_identifier@c_pgcr_multi_player_medal_list_data_component@@QAAXABUs_player_identifier@@@Z");
//};

//public: class c_enum<enum c_pgcr_campaign_data_component::e_pgcr_award_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> c_pgcr_multi_player_medal_list_data_component::get_medal_type(long) const
//{
//    mangled_ppc("?get_medal_type@c_pgcr_multi_player_medal_list_data_component@@QBA?AV?$c_enum@W4e_pgcr_award_type@c_pgcr_campaign_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@J@Z");
//};

//public: class c_cui_string_id c_pgcr_multi_player_medal_list_data_component::get_medal_name(long) const
//{
//    mangled_ppc("?get_medal_name@c_pgcr_multi_player_medal_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//public: class c_cui_string_id c_pgcr_multi_player_medal_list_data_component::get_medal_description(long) const
//{
//    mangled_ppc("?get_medal_description@c_pgcr_multi_player_medal_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//public: long c_pgcr_multi_player_medal_list_data_component::get_medal_awarded_count(long) const
//{
//    mangled_ppc("?get_medal_awarded_count@c_pgcr_multi_player_medal_list_data_component@@QBAJJ@Z");
//};

//public: class c_enum<enum e_commendation_progression_level, char, -1, 7, struct s_default_enum_string_resolver> c_pgcr_multi_player_medal_list_data_component::get_medal_commendation_level(long) const
//{
//    mangled_ppc("?get_medal_commendation_level@c_pgcr_multi_player_medal_list_data_component@@QBA?AV?$c_enum@W4e_commendation_progression_level@@D$0?0$06Us_default_enum_string_resolver@@@@J@Z");
//};

//public: short c_pgcr_multi_player_medal_list_data_component::get_medal_commendation_medal_sprite_index(long) const
//{
//    mangled_ppc("?get_medal_commendation_medal_sprite_index@c_pgcr_multi_player_medal_list_data_component@@QBAFJ@Z");
//};

//public: short c_pgcr_multi_player_medal_list_data_component::get_medal_commendation_game_type_sprite_index(long) const
//{
//    mangled_ppc("?get_medal_commendation_game_type_sprite_index@c_pgcr_multi_player_medal_list_data_component@@QBAFJ@Z");
//};

//public: static long s_static_array<struct c_pgcr_campaign_data_component::s_pgcr_player_commendation_or_medal, 256>::get_count(void)
//{
//    mangled_ppc("?get_count@?$s_static_array@Us_pgcr_player_commendation_or_medal@c_pgcr_campaign_data_component@@$0BAA@@@SAJXZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_pgcr_multi_player_medal_list_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_pgcr_multi_player_medal_list_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@Us_player_identifier@@$1?get_player_identifier@1@QBA?AU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@Us_player_identifier@@$1?get_player_identifier@1@QBA?AU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_const_reference<class c_pgcr_multi_player_medal_list_data_component, struct s_player_identifier, void & (c_pgcr_multi_player_medal_list_data_component::set_player_identifier::*)(struct s_player_identifier const &)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_const_reference@Vc_pgcr_multi_player_medal_list_data_component@@Us_player_identifier@@$1?set_player_identifier@1@QAAXABU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_pgcr_multi_player_medal_list_data_component, long, long & (c_pgcr_multi_player_medal_list_data_component::get_medal_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@J$1?get_medal_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_pgcr_multi_player_medal_list_data_component::get_medal_count(void) const
//{
//    mangled_ppc("?get_medal_count@c_pgcr_multi_player_medal_list_data_component@@QBAJXZ");
//};

//long cui_object_component_get_property_element_count<class c_pgcr_multi_player_medal_list_data_component, long & (c_pgcr_multi_player_medal_list_data_component::get_medal_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_pgcr_multi_player_medal_list_data_component@@$1?get_medal_count@1@QBAJXZ@@YAJPBX@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@V?$c_enum@W4e_pgcr_award_type@c_pgcr_campaign_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@$1?get_medal_count@1@QBAJXZ$1?get_medal_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@V?$c_enum@W4e_pgcr_award_type@c_pgcr_campaign_data_component@@E$0A@$01Us_default_enum_string_resolver@@@@$1?get_medal_count@1@QBAJXZ$1?get_medal_type@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_medal_list_data_component, bool, long & (c_pgcr_multi_player_medal_list_data_component::get_medal_count::*)(void), bool & (c_pgcr_multi_player_medal_list_data_component::get_medal_is_commendation::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@_N$1?get_medal_count@1@QBAJXZ$1?get_medal_is_commendation@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_medal_list_data_component, bool, long & (c_pgcr_multi_player_medal_list_data_component::get_medal_count::*)(void), bool & (c_pgcr_multi_player_medal_list_data_component::get_medal_is_medal::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@_N$1?get_medal_count@1@QBAJXZ$1?get_medal_is_medal@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_pgcr_multi_player_medal_list_data_component::get_medal_is_medal(long) const
//{
//    mangled_ppc("?get_medal_is_medal@c_pgcr_multi_player_medal_list_data_component@@QBA_NJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@Vc_cui_string_id@@$1?get_medal_count@1@QBAJXZ$1?get_medal_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@Vc_cui_string_id@@$1?get_medal_count@1@QBAJXZ$1?get_medal_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@Vc_cui_string_id@@$1?get_medal_count@1@QBAJXZ$1?get_medal_description@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@Vc_cui_string_id@@$1?get_medal_count@1@QBAJXZ$1?get_medal_description@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_medal_list_data_component, long, long & (c_pgcr_multi_player_medal_list_data_component::get_medal_count::*)(void), long & (c_pgcr_multi_player_medal_list_data_component::get_medal_awarded_count::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@J$1?get_medal_count@1@QBAJXZ$1?get_medal_awarded_count@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@V?$c_enum@W4e_commendation_progression_level@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_medal_count@1@QBAJXZ$1?get_medal_commendation_level@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@V?$c_enum@W4e_commendation_progression_level@@D$0?0$06Us_default_enum_string_resolver@@@@$1?get_medal_count@1@QBAJXZ$1?get_medal_commendation_level@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_medal_list_data_component, short, long & (c_pgcr_multi_player_medal_list_data_component::get_medal_count::*)(void), long const & (c_pgcr_multi_player_medal_list_data_component::get_medal_commendation_medal_sprite_index::*)()>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@F$1?get_medal_count@1@QBAJXZ$1?get_medal_commendation_medal_sprite_index@1@QBAFJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_pgcr_multi_player_medal_list_data_component, short, long & (c_pgcr_multi_player_medal_list_data_component::get_medal_count::*)(void), long const & (c_pgcr_multi_player_medal_list_data_component::get_medal_commendation_game_type_sprite_index::*)()>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_pgcr_multi_player_medal_list_data_component@@F$1?get_medal_count@1@QBAJXZ$1?get_medal_commendation_game_type_sprite_index@1@QBAFJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: struct c_pgcr_campaign_data_component::s_pgcr_player_commendation_or_medal & s_static_array<struct c_pgcr_campaign_data_component::s_pgcr_player_commendation_or_medal, 256>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_pgcr_player_commendation_or_medal@c_pgcr_campaign_data_component@@$0BAA@@@QAAAAUs_pgcr_player_commendation_or_medal@c_pgcr_campaign_data_component@@J@Z");
//};

//public: struct c_pgcr_campaign_data_component::s_pgcr_player_commendation_or_medal const & s_static_array<struct c_pgcr_campaign_data_component::s_pgcr_player_commendation_or_medal, 256>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_pgcr_player_commendation_or_medal@c_pgcr_campaign_data_component@@$0BAA@@@QBAABUs_pgcr_player_commendation_or_medal@c_pgcr_campaign_data_component@@J@Z");
//};

//public: static bool s_static_array<struct c_pgcr_campaign_data_component::s_pgcr_player_commendation_or_medal, 256>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_pgcr_player_commendation_or_medal@c_pgcr_campaign_data_component@@$0BAA@@@SA_NJ@Z");
//};

//class c_cui_component * cui_component_create<class c_pgcr_multi_player_medal_list_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_pgcr_multi_player_medal_list_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_pgcr_multi_player_medal_list_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_pgcr_multi_player_medal_list_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_pgcr_multi_player_medal_list_data_component::c_pgcr_multi_player_medal_list_data_component(class c_pgcr_multi_player_medal_list_data_component const &)
//{
//    mangled_ppc("??0c_pgcr_multi_player_medal_list_data_component@@QAA@ABV0@@Z");
//};

//void g_pgcr_award_type_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_pgcr_award_type_enum_table@@YAXXZ");
//};

