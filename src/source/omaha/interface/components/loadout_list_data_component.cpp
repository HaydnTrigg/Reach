/* ---------- headers */

#include "omaha\interface\components\loadout_list_data_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static long const s_static_array<struct s_player_loadout_definition, 16>::k_element_count; // "?k_element_count@?$s_static_array@Us_player_loadout_definition@@$0BA@@@2JB"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_loadout_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_loadout_list_data_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_loadout_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_loadout_list_data_component@@@@0Vc_cui_object_property_table@@A"

// public: c_loadout_list_data_component::c_loadout_list_data_component(void);
// merged_84AD8ED8;
// public: s_static_array<struct s_player_loadout_definition, 16>::s_static_array<struct s_player_loadout_definition, 16>(void);
// public: virtual c_loadout_list_data_component::~c_loadout_list_data_component(void);
// public: void c_loadout_list_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// protected: virtual void c_loadout_list_data_component::do_update(class c_cui_update_context *);
// public: class c_cui_string_id c_loadout_list_data_component::get_display_name(long) const;
// public: class c_cui_string_id c_loadout_list_data_component::get_primary_weapon_name(long) const;
// public: long c_loadout_list_data_component::get_primary_weapon_sprite_frame(long) const;
// public: class c_cui_string_id c_loadout_list_data_component::get_secondary_weapon_name(long) const;
// public: long c_loadout_list_data_component::get_secondary_weapon_sprite_frame(long) const;
// public: class c_cui_string_id c_loadout_list_data_component::get_equipment_name(long) const;
// public: long c_loadout_list_data_component::get_equipment_sprite_frame(long) const;
// public: class c_cui_string_id c_loadout_list_data_component::get_vehicle_name(long) const;
// public: long c_loadout_list_data_component::get_vehicle_sprite_frame(long) const;
// public: long c_loadout_list_data_component::get_frag_grenade_count(long) const;
// public: long c_loadout_list_data_component::get_plasma_grenade_count(long) const;
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_loadout_list_data_component>::get_instance(void);
// class c_cui_component * cui_component_create<class c_loadout_list_data_component>(void);
// class c_cui_component * cui_component_clone<class c_loadout_list_data_component>(class c_cui_component const *);
// ??$cui_get_scalar_property_by_return_value@Vc_loadout_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_loadout_list_data_component::get_driving_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_loadout_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_loadout_list_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_previous_loadout_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_loadout_list_data_component::get_previous_loadout_index(void) const;
// bool cui_get_scalar_property_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_loadout_list_data_component::get_item_count(void) const;
// long cui_object_component_get_property_element_count<class c_loadout_list_data_component, long & (c_loadout_list_data_component::get_item_count::*)(void)>(void const *);
// ??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_display_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_primary_weapon_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_secondary_weapon_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_equipment_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// ??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_vehicle_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_get_array_property_element_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_item_count::*)(void), long & (c_loadout_list_data_component::get_frag_grenade_count::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_item_count::*)(void), long & (c_loadout_list_data_component::get_plasma_grenade_count::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_item_count::*)(void), long & (c_loadout_list_data_component::get_primary_weapon_sprite_frame::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_item_count::*)(void), long & (c_loadout_list_data_component::get_secondary_weapon_sprite_frame::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_item_count::*)(void), long & (c_loadout_list_data_component::get_equipment_sprite_frame::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_item_count::*)(void), long & (c_loadout_list_data_component::get_vehicle_sprite_frame::*)(long)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_array_property_element_by_return_value<class c_loadout_list_data_component, bool, long & (c_loadout_list_data_component::get_item_count::*)(void), bool & (c_loadout_list_data_component::get_was_loadout_selected::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_loadout_list_data_component::get_was_loadout_selected(long) const;
// public: struct s_player_loadout_definition & s_static_array<struct s_player_loadout_definition, 16>::operator[]<long>(long);
// public: struct s_player_loadout_definition const & s_static_array<struct s_player_loadout_definition, 16>::operator[]<long>(long) const;
// public: struct s_player_loadout_weapon_definition const & s_static_array<struct s_player_loadout_weapon_definition, 3>::operator[]<enum e_respawn_weapon_slot>(enum e_respawn_weapon_slot) const;
// public: c_loadout_list_data_component::c_loadout_list_data_component(class c_loadout_list_data_component const &);
// public: static bool s_static_array<struct s_player_loadout_definition, 16>::valid<long>(long);

//public: c_loadout_list_data_component::c_loadout_list_data_component(void)
//{
//    mangled_ppc("??0c_loadout_list_data_component@@QAA@XZ");
//};

//merged_84AD8ED8
//{
//    mangled_ppc("merged_84AD8ED8");
//};

//public: s_static_array<struct s_player_loadout_definition, 16>::s_static_array<struct s_player_loadout_definition, 16>(void)
//{
//    mangled_ppc("??0?$s_static_array@Us_player_loadout_definition@@$0BA@@@QAA@XZ");
//};

//public: virtual c_loadout_list_data_component::~c_loadout_list_data_component(void)
//{
//    mangled_ppc("??1c_loadout_list_data_component@@UAA@XZ");
//};

//public: void c_loadout_list_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_driving_controller_index@c_loadout_list_data_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//protected: virtual void c_loadout_list_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_loadout_list_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: class c_cui_string_id c_loadout_list_data_component::get_display_name(long) const
//{
//    mangled_ppc("?get_display_name@c_loadout_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//public: class c_cui_string_id c_loadout_list_data_component::get_primary_weapon_name(long) const
//{
//    mangled_ppc("?get_primary_weapon_name@c_loadout_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//public: long c_loadout_list_data_component::get_primary_weapon_sprite_frame(long) const
//{
//    mangled_ppc("?get_primary_weapon_sprite_frame@c_loadout_list_data_component@@QBAJJ@Z");
//};

//public: class c_cui_string_id c_loadout_list_data_component::get_secondary_weapon_name(long) const
//{
//    mangled_ppc("?get_secondary_weapon_name@c_loadout_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//public: long c_loadout_list_data_component::get_secondary_weapon_sprite_frame(long) const
//{
//    mangled_ppc("?get_secondary_weapon_sprite_frame@c_loadout_list_data_component@@QBAJJ@Z");
//};

//public: class c_cui_string_id c_loadout_list_data_component::get_equipment_name(long) const
//{
//    mangled_ppc("?get_equipment_name@c_loadout_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//public: long c_loadout_list_data_component::get_equipment_sprite_frame(long) const
//{
//    mangled_ppc("?get_equipment_sprite_frame@c_loadout_list_data_component@@QBAJJ@Z");
//};

//public: class c_cui_string_id c_loadout_list_data_component::get_vehicle_name(long) const
//{
//    mangled_ppc("?get_vehicle_name@c_loadout_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//public: long c_loadout_list_data_component::get_vehicle_sprite_frame(long) const
//{
//    mangled_ppc("?get_vehicle_sprite_frame@c_loadout_list_data_component@@QBAJJ@Z");
//};

//public: long c_loadout_list_data_component::get_frag_grenade_count(long) const
//{
//    mangled_ppc("?get_frag_grenade_count@c_loadout_list_data_component@@QBAJJ@Z");
//};

//public: long c_loadout_list_data_component::get_plasma_grenade_count(long) const
//{
//    mangled_ppc("?get_plasma_grenade_count@c_loadout_list_data_component@@QBAJJ@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_loadout_list_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_loadout_list_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_cui_component * cui_component_create<class c_loadout_list_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_loadout_list_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_loadout_list_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_loadout_list_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_loadout_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_loadout_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_loadout_list_data_component::get_driving_controller_index(void) const
//{
//    mangled_ppc("?get_driving_controller_index@c_loadout_list_data_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_loadout_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_loadout_list_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_loadout_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_driving_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_previous_loadout_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_loadout_list_data_component@@J$1?get_previous_loadout_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_loadout_list_data_component::get_previous_loadout_index(void) const
//{
//    mangled_ppc("?get_previous_loadout_index@c_loadout_list_data_component@@QBAJXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_loadout_list_data_component@@J$1?get_item_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_loadout_list_data_component::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_loadout_list_data_component@@QBAJXZ");
//};

//long cui_object_component_get_property_element_count<class c_loadout_list_data_component, long & (c_loadout_list_data_component::get_item_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_loadout_list_data_component@@$1?get_item_count@1@QBAJXZ@@YAJPBX@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_display_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_display_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_primary_weapon_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_primary_weapon_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_secondary_weapon_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_secondary_weapon_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_equipment_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_equipment_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_vehicle_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@Vc_cui_string_id@@$1?get_item_count@1@QBAJXZ$1?get_vehicle_name@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_item_count::*)(void), long & (c_loadout_list_data_component::get_frag_grenade_count::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_frag_grenade_count@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_item_count::*)(void), long & (c_loadout_list_data_component::get_plasma_grenade_count::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_plasma_grenade_count@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_item_count::*)(void), long & (c_loadout_list_data_component::get_primary_weapon_sprite_frame::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_primary_weapon_sprite_frame@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_item_count::*)(void), long & (c_loadout_list_data_component::get_secondary_weapon_sprite_frame::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_secondary_weapon_sprite_frame@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_item_count::*)(void), long & (c_loadout_list_data_component::get_equipment_sprite_frame::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_equipment_sprite_frame@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_loadout_list_data_component, long, long & (c_loadout_list_data_component::get_item_count::*)(void), long & (c_loadout_list_data_component::get_vehicle_sprite_frame::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@J$1?get_item_count@1@QBAJXZ$1?get_vehicle_sprite_frame@1@QBAJJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_loadout_list_data_component, bool, long & (c_loadout_list_data_component::get_item_count::*)(void), bool & (c_loadout_list_data_component::get_was_loadout_selected::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_loadout_list_data_component@@_N$1?get_item_count@1@QBAJXZ$1?get_was_loadout_selected@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_loadout_list_data_component::get_was_loadout_selected(long) const
//{
//    mangled_ppc("?get_was_loadout_selected@c_loadout_list_data_component@@QBA_NJ@Z");
//};

//public: struct s_player_loadout_definition & s_static_array<struct s_player_loadout_definition, 16>::operator[]<long>(long)
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_player_loadout_definition@@$0BA@@@QAAAAUs_player_loadout_definition@@J@Z");
//};

//public: struct s_player_loadout_definition const & s_static_array<struct s_player_loadout_definition, 16>::operator[]<long>(long) const
//{
//    mangled_ppc("??$?AJ@?$s_static_array@Us_player_loadout_definition@@$0BA@@@QBAABUs_player_loadout_definition@@J@Z");
//};

//public: struct s_player_loadout_weapon_definition const & s_static_array<struct s_player_loadout_weapon_definition, 3>::operator[]<enum e_respawn_weapon_slot>(enum e_respawn_weapon_slot) const
//{
//    mangled_ppc("??$?AW4e_respawn_weapon_slot@@@?$s_static_array@Us_player_loadout_weapon_definition@@$02@@QBAABUs_player_loadout_weapon_definition@@W4e_respawn_weapon_slot@@@Z");
//};

//public: c_loadout_list_data_component::c_loadout_list_data_component(class c_loadout_list_data_component const &)
//{
//    mangled_ppc("??0c_loadout_list_data_component@@QAA@ABV0@@Z");
//};

//public: static bool s_static_array<struct s_player_loadout_definition, 16>::valid<long>(long)
//{
//    mangled_ppc("??$valid@J@?$s_static_array@Us_player_loadout_definition@@$0BA@@@SA_NJ@Z");
//};

