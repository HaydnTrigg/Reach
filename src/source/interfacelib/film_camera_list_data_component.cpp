/* ---------- headers */

#include "interfacelib\film_camera_list_data_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static unsigned int const c_film_camera_list_data_component::k_maximum_camera_entries; // "?k_maximum_camera_entries@c_film_camera_list_data_component@@0IB"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_film_camera_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_film_camera_list_data_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_film_camera_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_film_camera_list_data_component@@@@0Vc_cui_object_property_table@@A"

// public: c_film_camera_list_data_component::c_film_camera_list_data_component(void);
// merged_84AA44D0;
// public: virtual c_film_camera_list_data_component::~c_film_camera_list_data_component(void);
// protected: virtual void c_film_camera_list_data_component::do_update(class c_cui_update_context *);
// protected: void c_film_camera_list_data_component::populate(enum e_controller_index);
// public: c_film_camera_list_data_component::s_camera_entry::s_camera_entry(long, enum c_film_camera_list_data_component::e_camera_entry_type);
// protected: void c_film_camera_list_data_component::populate_respawn_state(enum e_controller_index);
// public: bool c_film_camera_list_data_component::get_current_selection(long &) const;
// public: bool c_film_camera_list_data_component::player_configuration_valid(void) const;
// public: long c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::count(void) const;
// public: void c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::clear(void);
// public: void c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::push_back(struct c_film_camera_list_data_component::s_camera_entry const &);
// public: struct c_film_camera_list_data_component::s_camera_entry const & c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::operator[](long) const;
// public: c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>(void);
// public: c_film_camera_list_data_component::s_camera_entry::s_camera_entry(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_film_camera_list_data_component>::get_instance(void);
// public: bool c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::valid(long) const;
// public: long c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::push(void);
// public: struct c_film_camera_list_data_component::s_camera_entry * c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::get(long);
// public: bool c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::valid(void) const;
// public: bool c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::full(void) const;
// class c_cui_component * cui_component_create<class c_film_camera_list_data_component>(void);
// class c_cui_component * cui_component_clone<class c_film_camera_list_data_component>(class c_cui_component const *);
// ??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_film_camera_list_data_component::get_driving_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_film_camera_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_film_camera_list_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_film_camera_list_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, long, long & (c_film_camera_list_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_film_camera_list_data_component::get_item_count(void) const;
// long cui_object_component_get_property_element_count<class c_film_camera_list_data_component, long & (c_film_camera_list_data_component::get_item_count::*)(void)>(void const *);
// bool cui_get_array_property_element_by_return_value<class c_film_camera_list_data_component, struct s_player_configuration const *, long & (c_film_camera_list_data_component::get_item_count::*)(void), struct s_player_configuration const *& (c_film_camera_list_data_component::get_player_configuration::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: struct s_player_configuration const * c_film_camera_list_data_component::get_player_configuration(long) const;
// bool cui_try_get_array_property_element_by_out_pointer<class c_film_camera_list_data_component, struct s_emblem_info, long & (c_film_camera_list_data_component::get_item_count::*)(void), bool & (c_film_camera_list_data_component::get_emblem_info::*)(long, struct s_emblem_info *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_film_camera_list_data_component::get_emblem_info(long, struct s_emblem_info *) const;
// bool cui_try_get_scalar_property_by_out_reference<class c_film_camera_list_data_component, long, bool & (c_film_camera_list_data_component::get_current_selection::*)(long &)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, bool, bool & (c_film_camera_list_data_component::player_configuration_valid::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, wchar_t const *, wchar_t const *& (c_film_camera_list_data_component::get_display_name::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_film_camera_list_data_component::get_display_name(void) const;
// bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, bool, bool & (c_film_camera_list_data_component::get_can_change_target::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_film_camera_list_data_component::get_can_change_target(void) const;
// bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, bool, bool & (c_film_camera_list_data_component::get_can_use_flying_camera::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_film_camera_list_data_component::get_can_use_flying_camera(void) const;
// bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, bool, bool & (c_film_camera_list_data_component::get_can_choose_spawn_location::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_film_camera_list_data_component::get_can_choose_spawn_location(void) const;
// bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, bool, bool & (c_film_camera_list_data_component::get_is_before_round_start::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_film_camera_list_data_component::get_is_before_round_start(void) const;
// bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, bool, bool & (c_film_camera_list_data_component::get_has_lives_remaining::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_film_camera_list_data_component::get_has_lives_remaining(void) const;
// bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, bool, bool & (c_film_camera_list_data_component::get_is_respawning_allowed::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_film_camera_list_data_component::get_is_respawning_allowed(void) const;
// bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, long, long & (c_film_camera_list_data_component::get_respawn_time::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_film_camera_list_data_component::get_respawn_time(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@V?$c_enum@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@$1?get_safety_status@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver> c_film_camera_list_data_component::get_safety_status(void) const;
// public: c_film_camera_list_data_component::c_film_camera_list_data_component(class c_film_camera_list_data_component const &);
// void cui_property_value_set<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver> const &);
// void g_player_respawn_failure_enum_table::`dynamic atexit destructor'(void);

//public: c_film_camera_list_data_component::c_film_camera_list_data_component(void)
//{
//    mangled_ppc("??0c_film_camera_list_data_component@@QAA@XZ");
//};

//merged_84AA44D0
//{
//    mangled_ppc("merged_84AA44D0");
//};

//public: virtual c_film_camera_list_data_component::~c_film_camera_list_data_component(void)
//{
//    mangled_ppc("??1c_film_camera_list_data_component@@UAA@XZ");
//};

//protected: virtual void c_film_camera_list_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_film_camera_list_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//protected: void c_film_camera_list_data_component::populate(enum e_controller_index)
//{
//    mangled_ppc("?populate@c_film_camera_list_data_component@@IAAXW4e_controller_index@@@Z");
//};

//public: c_film_camera_list_data_component::s_camera_entry::s_camera_entry(long, enum c_film_camera_list_data_component::e_camera_entry_type)
//{
//    mangled_ppc("??0s_camera_entry@c_film_camera_list_data_component@@QAA@JW4e_camera_entry_type@1@@Z");
//};

//protected: void c_film_camera_list_data_component::populate_respawn_state(enum e_controller_index)
//{
//    mangled_ppc("?populate_respawn_state@c_film_camera_list_data_component@@IAAXW4e_controller_index@@@Z");
//};

//public: bool c_film_camera_list_data_component::get_current_selection(long &) const
//{
//    mangled_ppc("?get_current_selection@c_film_camera_list_data_component@@QBA_NAAJ@Z");
//};

//public: bool c_film_camera_list_data_component::player_configuration_valid(void) const
//{
//    mangled_ppc("?player_configuration_valid@c_film_camera_list_data_component@@QBA_NXZ");
//};

//public: long c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::count(void) const
//{
//    mangled_ppc("?count@?$c_static_stack@Us_camera_entry@c_film_camera_list_data_component@@$0BE@@@QBAJXZ");
//};

//public: void c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::clear(void)
//{
//    mangled_ppc("?clear@?$c_static_stack@Us_camera_entry@c_film_camera_list_data_component@@$0BE@@@QAAXXZ");
//};

//public: void c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::push_back(struct c_film_camera_list_data_component::s_camera_entry const &)
//{
//    mangled_ppc("?push_back@?$c_static_stack@Us_camera_entry@c_film_camera_list_data_component@@$0BE@@@QAAXABUs_camera_entry@c_film_camera_list_data_component@@@Z");
//};

//public: struct c_film_camera_list_data_component::s_camera_entry const & c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::operator[](long) const
//{
//    mangled_ppc("??A?$c_static_stack@Us_camera_entry@c_film_camera_list_data_component@@$0BE@@@QBAABUs_camera_entry@c_film_camera_list_data_component@@J@Z");
//};

//public: c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>(void)
//{
//    mangled_ppc("??0?$c_static_stack@Us_camera_entry@c_film_camera_list_data_component@@$0BE@@@QAA@XZ");
//};

//public: c_film_camera_list_data_component::s_camera_entry::s_camera_entry(void)
//{
//    mangled_ppc("??0s_camera_entry@c_film_camera_list_data_component@@QAA@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_film_camera_list_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_film_camera_list_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: bool c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::valid(long) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_camera_entry@c_film_camera_list_data_component@@$0BE@@@QBA_NJ@Z");
//};

//public: long c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::push(void)
//{
//    mangled_ppc("?push@?$c_static_stack@Us_camera_entry@c_film_camera_list_data_component@@$0BE@@@QAAJXZ");
//};

//public: struct c_film_camera_list_data_component::s_camera_entry * c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::get(long)
//{
//    mangled_ppc("?get@?$c_static_stack@Us_camera_entry@c_film_camera_list_data_component@@$0BE@@@QAAPAUs_camera_entry@c_film_camera_list_data_component@@J@Z");
//};

//public: bool c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_static_stack@Us_camera_entry@c_film_camera_list_data_component@@$0BE@@@QBA_NXZ");
//};

//public: bool c_static_stack<struct c_film_camera_list_data_component::s_camera_entry, 20>::full(void) const
//{
//    mangled_ppc("?full@?$c_static_stack@Us_camera_entry@c_film_camera_list_data_component@@$0BE@@@QBA_NXZ");
//};

//class c_cui_component * cui_component_create<class c_film_camera_list_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_film_camera_list_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_film_camera_list_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_film_camera_list_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_film_camera_list_data_component::get_driving_controller_index(void) const
//{
//    mangled_ppc("?get_driving_controller_index@c_film_camera_list_data_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_film_camera_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_film_camera_list_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_film_camera_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_driving_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_film_camera_list_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_driving_controller_index@c_film_camera_list_data_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, long, long & (c_film_camera_list_data_component::get_item_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@J$1?get_item_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_film_camera_list_data_component::get_item_count(void) const
//{
//    mangled_ppc("?get_item_count@c_film_camera_list_data_component@@QBAJXZ");
//};

//long cui_object_component_get_property_element_count<class c_film_camera_list_data_component, long & (c_film_camera_list_data_component::get_item_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_film_camera_list_data_component@@$1?get_item_count@1@QBAJXZ@@YAJPBX@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_film_camera_list_data_component, struct s_player_configuration const *, long & (c_film_camera_list_data_component::get_item_count::*)(void), struct s_player_configuration const *& (c_film_camera_list_data_component::get_player_configuration::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_film_camera_list_data_component@@PBUs_player_configuration@@$1?get_item_count@1@QBAJXZ$1?get_player_configuration@1@QBAPBU2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: struct s_player_configuration const * c_film_camera_list_data_component::get_player_configuration(long) const
//{
//    mangled_ppc("?get_player_configuration@c_film_camera_list_data_component@@QBAPBUs_player_configuration@@J@Z");
//};

//bool cui_try_get_array_property_element_by_out_pointer<class c_film_camera_list_data_component, struct s_emblem_info, long & (c_film_camera_list_data_component::get_item_count::*)(void), bool & (c_film_camera_list_data_component::get_emblem_info::*)(long, struct s_emblem_info *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_array_property_element_by_out_pointer@Vc_film_camera_list_data_component@@Us_emblem_info@@$1?get_item_count@1@QBAJXZ$1?get_emblem_info@1@QBA_NJPAU2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_film_camera_list_data_component::get_emblem_info(long, struct s_emblem_info *) const
//{
//    mangled_ppc("?get_emblem_info@c_film_camera_list_data_component@@QBA_NJPAUs_emblem_info@@@Z");
//};

//bool cui_try_get_scalar_property_by_out_reference<class c_film_camera_list_data_component, long, bool & (c_film_camera_list_data_component::get_current_selection::*)(long &)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_reference@Vc_film_camera_list_data_component@@J$1?get_current_selection@1@QBA_NAAJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, bool, bool & (c_film_camera_list_data_component::player_configuration_valid::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@_N$1?player_configuration_valid@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, wchar_t const *, wchar_t const *& (c_film_camera_list_data_component::get_display_name::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@PB_W$1?get_display_name@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_film_camera_list_data_component::get_display_name(void) const
//{
//    mangled_ppc("?get_display_name@c_film_camera_list_data_component@@QBAPB_WXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, bool, bool & (c_film_camera_list_data_component::get_can_change_target::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@_N$1?get_can_change_target@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_film_camera_list_data_component::get_can_change_target(void) const
//{
//    mangled_ppc("?get_can_change_target@c_film_camera_list_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, bool, bool & (c_film_camera_list_data_component::get_can_use_flying_camera::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@_N$1?get_can_use_flying_camera@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_film_camera_list_data_component::get_can_use_flying_camera(void) const
//{
//    mangled_ppc("?get_can_use_flying_camera@c_film_camera_list_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, bool, bool & (c_film_camera_list_data_component::get_can_choose_spawn_location::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@_N$1?get_can_choose_spawn_location@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_film_camera_list_data_component::get_can_choose_spawn_location(void) const
//{
//    mangled_ppc("?get_can_choose_spawn_location@c_film_camera_list_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, bool, bool & (c_film_camera_list_data_component::get_is_before_round_start::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@_N$1?get_is_before_round_start@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_film_camera_list_data_component::get_is_before_round_start(void) const
//{
//    mangled_ppc("?get_is_before_round_start@c_film_camera_list_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, bool, bool & (c_film_camera_list_data_component::get_has_lives_remaining::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@_N$1?get_has_lives_remaining@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_film_camera_list_data_component::get_has_lives_remaining(void) const
//{
//    mangled_ppc("?get_has_lives_remaining@c_film_camera_list_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, bool, bool & (c_film_camera_list_data_component::get_is_respawning_allowed::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@_N$1?get_is_respawning_allowed@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_film_camera_list_data_component::get_is_respawning_allowed(void) const
//{
//    mangled_ppc("?get_is_respawning_allowed@c_film_camera_list_data_component@@QBA_NXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_film_camera_list_data_component, long, long & (c_film_camera_list_data_component::get_respawn_time::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@J$1?get_respawn_time@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_film_camera_list_data_component::get_respawn_time(void) const
//{
//    mangled_ppc("?get_respawn_time@c_film_camera_list_data_component@@QBAJXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@V?$c_enum@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@$1?get_safety_status@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_film_camera_list_data_component@@V?$c_enum@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@$1?get_safety_status@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver> c_film_camera_list_data_component::get_safety_status(void) const
//{
//    mangled_ppc("?get_safety_status@c_film_camera_list_data_component@@QBA?AV?$c_enum@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_film_camera_list_data_component::c_film_camera_list_data_component(class c_film_camera_list_data_component const &)
//{
//    mangled_ppc("??0c_film_camera_list_data_component@@QAA@ABV0@@Z");
//};

//void cui_property_value_set<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_player_respawn_failure, unsigned char, 0, 15, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_player_respawn_failure@@E$0A@$0P@Us_default_enum_string_resolver@@@@@Z");
//};

//void g_player_respawn_failure_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_player_respawn_failure_enum_table@@YAXXZ");
//};

