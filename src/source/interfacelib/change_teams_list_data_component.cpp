/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_change_teams_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_change_teams_list_data_component@@@@0Us_cui_component_description@@B"
// long volatile `public: void __cdecl c_change_teams_list_data_component::set_player_desired_team(class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>)'::`9'::x_event_category_index; // "?x_event_category_index@?8??set_player_desired_team@c_change_teams_list_data_component@@QAAXV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@@Z@4JC"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_change_teams_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_change_teams_list_data_component@@@@0Vc_cui_object_property_table@@A"

// class c_game_variant const * current_variant_get(void);
// enum e_map_id current_map_id_get(void);
// public: c_change_teams_list_data_component::c_change_teams_list_data_component(void);
// merged_84A5EED0;
// public: c_change_teams_list_data_component::s_team::s_team(void);
// public: virtual c_change_teams_list_data_component::~c_change_teams_list_data_component(void);
// protected: virtual void c_change_teams_list_data_component::do_update(class c_cui_update_context *);
// private: void c_change_teams_list_data_component::update_items(class c_cui_update_context *);
// private: void c_change_teams_list_data_component::clear_items(void);
// private: void c_change_teams_list_data_component::add_item(enum e_multiplayer_team);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_change_teams_list_data_component>::get_instance(void);
// class c_cui_component * cui_component_create<class c_change_teams_list_data_component>(void);
// class c_cui_component * cui_component_clone<class c_change_teams_list_data_component>(class c_cui_component const *);
// ??$cui_get_scalar_property_by_return_value@Vc_change_teams_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_change_teams_list_data_component::get_driving_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_change_teams_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_change_teams_list_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_change_teams_list_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_change_teams_list_data_component, long, long & (c_change_teams_list_data_component::get_team_switch_duration::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_change_teams_list_data_component::get_team_switch_duration(void) const;
// bool cui_set_scalar_property_by_value<class c_change_teams_list_data_component, long, void & (c_change_teams_list_data_component::set_team_switch_duration::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_change_teams_list_data_component::set_team_switch_duration(long);
// bool cui_get_scalar_property_by_return_value<class c_change_teams_list_data_component, long, long & (c_change_teams_list_data_component::get_team_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_change_teams_list_data_component::get_team_count(void) const;
// long cui_object_component_get_property_element_count<class c_change_teams_list_data_component, long & (c_change_teams_list_data_component::get_team_count::*)(void)>(void const *);
// ??$cui_get_array_property_element_by_return_value@Vc_change_teams_list_data_component@@Vc_cui_string_id@@$1?get_team_count@1@QBAJXZ$1?get_team_string_id@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_change_teams_list_data_component::get_team_string_id(long) const;
// bool cui_get_array_property_element_by_return_value<class c_change_teams_list_data_component, wchar_t const *, long & (c_change_teams_list_data_component::get_team_count::*)(void), wchar_t const *& (c_change_teams_list_data_component::get_team_name::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_change_teams_list_data_component::get_team_name(long) const;
// ??$cui_get_array_property_element_by_return_value@Vc_change_teams_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_team_count@1@QBAJXZ$1?get_team_index@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_change_teams_list_data_component::get_team_index(long) const;
// bool cui_get_array_property_element_by_out_pointer<class c_change_teams_list_data_component, union argb_color, long & (c_change_teams_list_data_component::get_team_count::*)(void), void & (c_change_teams_list_data_component::get_team_text_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_change_teams_list_data_component::get_team_text_tint_color(long, union argb_color *) const;
// bool cui_get_array_property_element_by_out_pointer<class c_change_teams_list_data_component, union argb_color, long & (c_change_teams_list_data_component::get_team_count::*)(void), void & (c_change_teams_list_data_component::get_team_bitmap_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_change_teams_list_data_component::get_team_bitmap_tint_color(long, union argb_color *) const;
// bool cui_get_scalar_property_by_return_value<class c_change_teams_list_data_component, bool, bool & (c_change_teams_list_data_component::is_player_switching_teams::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_change_teams_list_data_component::is_player_switching_teams(void) const;
// public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_change_teams_list_data_component::get_player_team_index(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_change_teams_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_player_team_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_get_scalar_property_by_return_value<class c_change_teams_list_data_component, long, long & (c_change_teams_list_data_component::get_player_selected_team_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_change_teams_list_data_component::get_player_selected_team_index(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_change_teams_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_player_desired_team@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_change_teams_list_data_component::get_player_desired_team(void) const;
// bool cui_set_scalar_property_by_value<class c_change_teams_list_data_component, class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>, void & (c_change_teams_list_data_component::set_player_desired_team::*)(class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_change_teams_list_data_component::set_player_desired_team(class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>);
// public: c_change_teams_list_data_component::c_change_teams_list_data_component(class c_change_teams_list_data_component const &);
// void cui_property_value_set<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> *);

//class c_game_variant const * current_variant_get(void)
//{
//    mangled_ppc("?current_variant_get@@YAPBVc_game_variant@@XZ");
//};

//enum e_map_id current_map_id_get(void)
//{
//    mangled_ppc("?current_map_id_get@@YA?AW4e_map_id@@XZ");
//};

//public: c_change_teams_list_data_component::c_change_teams_list_data_component(void)
//{
//    mangled_ppc("??0c_change_teams_list_data_component@@QAA@XZ");
//};

//merged_84A5EED0
//{
//    mangled_ppc("merged_84A5EED0");
//};

//public: c_change_teams_list_data_component::s_team::s_team(void)
//{
//    mangled_ppc("??0s_team@c_change_teams_list_data_component@@QAA@XZ");
//};

//public: virtual c_change_teams_list_data_component::~c_change_teams_list_data_component(void)
//{
//    mangled_ppc("??1c_change_teams_list_data_component@@UAA@XZ");
//};

//protected: virtual void c_change_teams_list_data_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_change_teams_list_data_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_change_teams_list_data_component::update_items(class c_cui_update_context *)
//{
//    mangled_ppc("?update_items@c_change_teams_list_data_component@@AAAXPAVc_cui_update_context@@@Z");
//};

//private: void c_change_teams_list_data_component::clear_items(void)
//{
//    mangled_ppc("?clear_items@c_change_teams_list_data_component@@AAAXXZ");
//};

//private: void c_change_teams_list_data_component::add_item(enum e_multiplayer_team)
//{
//    mangled_ppc("?add_item@c_change_teams_list_data_component@@AAAXW4e_multiplayer_team@@@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_change_teams_list_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_change_teams_list_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_cui_component * cui_component_create<class c_change_teams_list_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_change_teams_list_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_change_teams_list_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_change_teams_list_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_change_teams_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_change_teams_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_change_teams_list_data_component::get_driving_controller_index(void) const
//{
//    mangled_ppc("?get_driving_controller_index@c_change_teams_list_data_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_change_teams_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_change_teams_list_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_change_teams_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_driving_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_change_teams_list_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_driving_controller_index@c_change_teams_list_data_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_change_teams_list_data_component, long, long & (c_change_teams_list_data_component::get_team_switch_duration::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_change_teams_list_data_component@@J$1?get_team_switch_duration@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_change_teams_list_data_component::get_team_switch_duration(void) const
//{
//    mangled_ppc("?get_team_switch_duration@c_change_teams_list_data_component@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_change_teams_list_data_component, long, void & (c_change_teams_list_data_component::set_team_switch_duration::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_change_teams_list_data_component@@J$1?set_team_switch_duration@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_change_teams_list_data_component::set_team_switch_duration(long)
//{
//    mangled_ppc("?set_team_switch_duration@c_change_teams_list_data_component@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_change_teams_list_data_component, long, long & (c_change_teams_list_data_component::get_team_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_change_teams_list_data_component@@J$1?get_team_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_change_teams_list_data_component::get_team_count(void) const
//{
//    mangled_ppc("?get_team_count@c_change_teams_list_data_component@@QBAJXZ");
//};

//long cui_object_component_get_property_element_count<class c_change_teams_list_data_component, long & (c_change_teams_list_data_component::get_team_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_change_teams_list_data_component@@$1?get_team_count@1@QBAJXZ@@YAJPBX@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_change_teams_list_data_component@@Vc_cui_string_id@@$1?get_team_count@1@QBAJXZ$1?get_team_string_id@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_change_teams_list_data_component@@Vc_cui_string_id@@$1?get_team_count@1@QBAJXZ$1?get_team_string_id@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_change_teams_list_data_component::get_team_string_id(long) const
//{
//    mangled_ppc("?get_team_string_id@c_change_teams_list_data_component@@QBA?AVc_cui_string_id@@J@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_change_teams_list_data_component, wchar_t const *, long & (c_change_teams_list_data_component::get_team_count::*)(void), wchar_t const *& (c_change_teams_list_data_component::get_team_name::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_change_teams_list_data_component@@PB_W$1?get_team_count@1@QBAJXZ$1?get_team_name@1@QBAPB_WJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_change_teams_list_data_component::get_team_name(long) const
//{
//    mangled_ppc("?get_team_name@c_change_teams_list_data_component@@QBAPB_WJ@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_change_teams_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_team_count@1@QBAJXZ$1?get_team_index@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_change_teams_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_team_count@1@QBAJXZ$1?get_team_index@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_change_teams_list_data_component::get_team_index(long) const
//{
//    mangled_ppc("?get_team_index@c_change_teams_list_data_component@@QBA?AV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_change_teams_list_data_component, union argb_color, long & (c_change_teams_list_data_component::get_team_count::*)(void), void & (c_change_teams_list_data_component::get_team_text_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_change_teams_list_data_component@@Targb_color@@$1?get_team_count@1@QBAJXZ$1?get_team_text_tint_color@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_change_teams_list_data_component::get_team_text_tint_color(long, union argb_color *) const
//{
//    mangled_ppc("?get_team_text_tint_color@c_change_teams_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_change_teams_list_data_component, union argb_color, long & (c_change_teams_list_data_component::get_team_count::*)(void), void & (c_change_teams_list_data_component::get_team_bitmap_tint_color::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_change_teams_list_data_component@@Targb_color@@$1?get_team_count@1@QBAJXZ$1?get_team_bitmap_tint_color@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_change_teams_list_data_component::get_team_bitmap_tint_color(long, union argb_color *) const
//{
//    mangled_ppc("?get_team_bitmap_tint_color@c_change_teams_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_change_teams_list_data_component, bool, bool & (c_change_teams_list_data_component::is_player_switching_teams::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_change_teams_list_data_component@@_N$1?is_player_switching_teams@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_change_teams_list_data_component::is_player_switching_teams(void) const
//{
//    mangled_ppc("?is_player_switching_teams@c_change_teams_list_data_component@@QBA_NXZ");
//};

//public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_change_teams_list_data_component::get_player_team_index(void) const
//{
//    mangled_ppc("?get_player_team_index@c_change_teams_list_data_component@@QBA?AV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_change_teams_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_player_team_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_change_teams_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_player_team_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_change_teams_list_data_component, long, long & (c_change_teams_list_data_component::get_player_selected_team_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_change_teams_list_data_component@@J$1?get_player_selected_team_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_change_teams_list_data_component::get_player_selected_team_index(void) const
//{
//    mangled_ppc("?get_player_selected_team_index@c_change_teams_list_data_component@@QBAJXZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_change_teams_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_player_desired_team@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_change_teams_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?get_player_desired_team@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> c_change_teams_list_data_component::get_player_desired_team(void) const
//{
//    mangled_ppc("?get_player_desired_team@c_change_teams_list_data_component@@QBA?AV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_change_teams_list_data_component, class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>, void & (c_change_teams_list_data_component::set_player_desired_team::*)(class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_change_teams_list_data_component@@V?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@$1?set_player_desired_team@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_change_teams_list_data_component::set_player_desired_team(class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_player_desired_team@c_change_teams_list_data_component@@QAAXV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//public: c_change_teams_list_data_component::c_change_teams_list_data_component(class c_change_teams_list_data_component const &)
//{
//    mangled_ppc("??0c_change_teams_list_data_component@@QAA@ABV0@@Z");
//};

//void cui_property_value_set<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum_no_init<enum e_multiplayer_team, char, -1, 16, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum_no_init@W4e_multiplayer_team@@D$0?0$0BA@Us_default_enum_string_resolver@@@@@Z");
//};

