/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_player_model_color_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_player_model_color_list_data_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_player_model_color_list_data_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_player_model_color_list_data_component@@@@0Vc_cui_object_property_table@@A"

// public: c_player_model_color_list_data_component::c_player_model_color_list_data_component(void);
// merged_84B3A568;
// public: virtual c_player_model_color_list_data_component::~c_player_model_color_list_data_component(void);
// public: c_player_model_color_list_data_component::c_player_model_color_list_data_component(class c_player_model_color_list_data_component const &);
// public: void c_player_model_color_list_data_component::set_player_configuration(struct s_player_configuration const *);
// private: void c_player_model_color_list_data_component::update_items(void);
// private: void c_player_model_color_list_data_component::clear_items(void);
// private: void c_player_model_color_list_data_component::update_color(void);
// private: void c_player_model_color_list_data_component::update_visor_color(void);
// private: void c_player_model_color_list_data_component::update_initial_indices(void);
// private: void c_player_model_color_list_data_component::add_color(enum e_player_color_index);
// private: void c_player_model_color_list_data_component::add_visor_color(enum e_player_color_index, bool, bool);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_player_model_color_list_data_component>::get_instance(void);
// class c_cui_component * cui_component_create<class c_player_model_color_list_data_component>(void);
// class c_cui_component * cui_component_clone<class c_player_model_color_list_data_component>(class c_cui_component const *);
// ??$cui_get_scalar_property_by_return_value@Vc_player_model_color_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_player_model_color_list_data_component::get_driving_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_color_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_player_model_color_list_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_color_list_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_player_model_color_list_data_component, struct s_player_configuration const *, struct s_player_configuration const *& (c_player_model_color_list_data_component::get_player_configuration::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: struct s_player_configuration const * c_player_model_color_list_data_component::get_player_configuration(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_color_list_data_component, struct s_player_configuration const *, void & (c_player_model_color_list_data_component::set_player_configuration::*)(struct s_player_configuration const *)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_player_model_color_list_data_component, long, long & (c_player_model_color_list_data_component::get_color_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_player_model_color_list_data_component::get_color_count(void) const;
// long cui_object_component_get_property_element_count<class c_player_model_color_list_data_component, long & (c_player_model_color_list_data_component::get_color_count::*)(void)>(void const *);
// ??$cui_get_array_property_element_by_return_value@Vc_player_model_color_list_data_component@@V?$c_enum_no_init@W4e_player_color_index@@D$0?0$0CA@Us_default_enum_string_resolver@@@@$1?get_color_count@1@QBAJXZ$1?get_color_index@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver> c_player_model_color_list_data_component::get_color_index(long) const;
// bool cui_get_array_property_element_by_out_pointer<class c_player_model_color_list_data_component, union argb_color, long & (c_player_model_color_list_data_component::get_color_count::*)(void), void & (c_player_model_color_list_data_component::get_color_rgb::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_player_model_color_list_data_component::get_color_rgb(long, union argb_color *) const;
// bool cui_get_scalar_property_by_return_value<class c_player_model_color_list_data_component, long, long & (c_player_model_color_list_data_component::get_visor_color_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_player_model_color_list_data_component::get_visor_color_count(void) const;
// long cui_object_component_get_property_element_count<class c_player_model_color_list_data_component, long & (c_player_model_color_list_data_component::get_visor_color_count::*)(void)>(void const *);
// ??$cui_get_array_property_element_by_return_value@Vc_player_model_color_list_data_component@@V?$c_enum_no_init@W4e_player_color_index@@D$0?0$0CA@Us_default_enum_string_resolver@@@@$1?get_visor_color_count@1@QBAJXZ$1?get_visor_color_index@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver> c_player_model_color_list_data_component::get_visor_color_index(long) const;
// bool cui_get_array_property_element_by_out_pointer<class c_player_model_color_list_data_component, union argb_color, long & (c_player_model_color_list_data_component::get_visor_color_count::*)(void), void & (c_player_model_color_list_data_component::get_visor_color_rgb::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_player_model_color_list_data_component::get_visor_color_rgb(long, union argb_color *) const;
// bool cui_get_array_property_element_by_return_value<class c_player_model_color_list_data_component, bool, long & (c_player_model_color_list_data_component::get_visor_color_count::*)(void), bool & (c_player_model_color_list_data_component::get_visor_color_locked::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_player_model_color_list_data_component::get_visor_color_locked(long) const;
// bool cui_get_array_property_element_by_return_value<class c_player_model_color_list_data_component, bool, long & (c_player_model_color_list_data_component::get_visor_color_count::*)(void), bool & (c_player_model_color_list_data_component::get_visor_color_new::*)(long)>(void const *, long, struct s_cui_property_value *);
// public: bool c_player_model_color_list_data_component::get_visor_color_new(long) const;
// bool cui_get_scalar_property_by_return_value<class c_player_model_color_list_data_component, long, long & (c_player_model_color_list_data_component::get_initial_primary_color_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_player_model_color_list_data_component::get_initial_primary_color_index(void) const;
// bool cui_get_scalar_property_by_return_value<class c_player_model_color_list_data_component, long, long & (c_player_model_color_list_data_component::get_initial_secondary_color_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_player_model_color_list_data_component::get_initial_secondary_color_index(void) const;
// bool cui_get_scalar_property_by_return_value<class c_player_model_color_list_data_component, long, long & (c_player_model_color_list_data_component::get_initial_tertiary_color_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_player_model_color_list_data_component::get_initial_tertiary_color_index(void) const;
// bool cui_get_scalar_property_by_return_value<class c_player_model_color_list_data_component, long, long & (c_player_model_color_list_data_component::get_initial_visor_color_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_player_model_color_list_data_component::get_initial_visor_color_index(void) const;

//public: c_player_model_color_list_data_component::c_player_model_color_list_data_component(void)
//{
//    mangled_ppc("??0c_player_model_color_list_data_component@@QAA@XZ");
//};

//merged_84B3A568
//{
//    mangled_ppc("merged_84B3A568");
//};

//public: virtual c_player_model_color_list_data_component::~c_player_model_color_list_data_component(void)
//{
//    mangled_ppc("??1c_player_model_color_list_data_component@@UAA@XZ");
//};

//public: c_player_model_color_list_data_component::c_player_model_color_list_data_component(class c_player_model_color_list_data_component const &)
//{
//    mangled_ppc("??0c_player_model_color_list_data_component@@QAA@ABV0@@Z");
//};

//public: void c_player_model_color_list_data_component::set_player_configuration(struct s_player_configuration const *)
//{
//    mangled_ppc("?set_player_configuration@c_player_model_color_list_data_component@@QAAXPBUs_player_configuration@@@Z");
//};

//private: void c_player_model_color_list_data_component::update_items(void)
//{
//    mangled_ppc("?update_items@c_player_model_color_list_data_component@@AAAXXZ");
//};

//private: void c_player_model_color_list_data_component::clear_items(void)
//{
//    mangled_ppc("?clear_items@c_player_model_color_list_data_component@@AAAXXZ");
//};

//private: void c_player_model_color_list_data_component::update_color(void)
//{
//    mangled_ppc("?update_color@c_player_model_color_list_data_component@@AAAXXZ");
//};

//private: void c_player_model_color_list_data_component::update_visor_color(void)
//{
//    mangled_ppc("?update_visor_color@c_player_model_color_list_data_component@@AAAXXZ");
//};

//private: void c_player_model_color_list_data_component::update_initial_indices(void)
//{
//    mangled_ppc("?update_initial_indices@c_player_model_color_list_data_component@@AAAXXZ");
//};

//private: void c_player_model_color_list_data_component::add_color(enum e_player_color_index)
//{
//    mangled_ppc("?add_color@c_player_model_color_list_data_component@@AAAXW4e_player_color_index@@@Z");
//};

//private: void c_player_model_color_list_data_component::add_visor_color(enum e_player_color_index, bool, bool)
//{
//    mangled_ppc("?add_visor_color@c_player_model_color_list_data_component@@AAAXW4e_player_color_index@@_N1@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_player_model_color_list_data_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_player_model_color_list_data_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_cui_component * cui_component_create<class c_player_model_color_list_data_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_player_model_color_list_data_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_player_model_color_list_data_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_player_model_color_list_data_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_player_model_color_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_color_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_player_model_color_list_data_component::get_driving_controller_index(void) const
//{
//    mangled_ppc("?get_driving_controller_index@c_player_model_color_list_data_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_color_list_data_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_player_model_color_list_data_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_color_list_data_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_driving_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_color_list_data_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_driving_controller_index@c_player_model_color_list_data_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_color_list_data_component, struct s_player_configuration const *, struct s_player_configuration const *& (c_player_model_color_list_data_component::get_player_configuration::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_color_list_data_component@@PBUs_player_configuration@@$1?get_player_configuration@1@QBAPBU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: struct s_player_configuration const * c_player_model_color_list_data_component::get_player_configuration(void) const
//{
//    mangled_ppc("?get_player_configuration@c_player_model_color_list_data_component@@QBAPBUs_player_configuration@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_color_list_data_component, struct s_player_configuration const *, void & (c_player_model_color_list_data_component::set_player_configuration::*)(struct s_player_configuration const *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_color_list_data_component@@PBUs_player_configuration@@$1?set_player_configuration@1@QAAXPBU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_color_list_data_component, long, long & (c_player_model_color_list_data_component::get_color_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_color_list_data_component@@J$1?get_color_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_player_model_color_list_data_component::get_color_count(void) const
//{
//    mangled_ppc("?get_color_count@c_player_model_color_list_data_component@@QBAJXZ");
//};

//long cui_object_component_get_property_element_count<class c_player_model_color_list_data_component, long & (c_player_model_color_list_data_component::get_color_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_player_model_color_list_data_component@@$1?get_color_count@1@QBAJXZ@@YAJPBX@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_player_model_color_list_data_component@@V?$c_enum_no_init@W4e_player_color_index@@D$0?0$0CA@Us_default_enum_string_resolver@@@@$1?get_color_count@1@QBAJXZ$1?get_color_index@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_player_model_color_list_data_component@@V?$c_enum_no_init@W4e_player_color_index@@D$0?0$0CA@Us_default_enum_string_resolver@@@@$1?get_color_count@1@QBAJXZ$1?get_color_index@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver> c_player_model_color_list_data_component::get_color_index(long) const
//{
//    mangled_ppc("?get_color_index@c_player_model_color_list_data_component@@QBA?AV?$c_enum_no_init@W4e_player_color_index@@D$0?0$0CA@Us_default_enum_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_player_model_color_list_data_component, union argb_color, long & (c_player_model_color_list_data_component::get_color_count::*)(void), void & (c_player_model_color_list_data_component::get_color_rgb::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_player_model_color_list_data_component@@Targb_color@@$1?get_color_count@1@QBAJXZ$1?get_color_rgb@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_player_model_color_list_data_component::get_color_rgb(long, union argb_color *) const
//{
//    mangled_ppc("?get_color_rgb@c_player_model_color_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_color_list_data_component, long, long & (c_player_model_color_list_data_component::get_visor_color_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_color_list_data_component@@J$1?get_visor_color_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_player_model_color_list_data_component::get_visor_color_count(void) const
//{
//    mangled_ppc("?get_visor_color_count@c_player_model_color_list_data_component@@QBAJXZ");
//};

//long cui_object_component_get_property_element_count<class c_player_model_color_list_data_component, long & (c_player_model_color_list_data_component::get_visor_color_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_player_model_color_list_data_component@@$1?get_visor_color_count@1@QBAJXZ@@YAJPBX@Z");
//};

//??$cui_get_array_property_element_by_return_value@Vc_player_model_color_list_data_component@@V?$c_enum_no_init@W4e_player_color_index@@D$0?0$0CA@Us_default_enum_string_resolver@@@@$1?get_visor_color_count@1@QBAJXZ$1?get_visor_color_index@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_player_model_color_list_data_component@@V?$c_enum_no_init@W4e_player_color_index@@D$0?0$0CA@Us_default_enum_string_resolver@@@@$1?get_visor_color_count@1@QBAJXZ$1?get_visor_color_index@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum_no_init<enum e_player_color_index, char, -1, 32, struct s_default_enum_string_resolver> c_player_model_color_list_data_component::get_visor_color_index(long) const
//{
//    mangled_ppc("?get_visor_color_index@c_player_model_color_list_data_component@@QBA?AV?$c_enum_no_init@W4e_player_color_index@@D$0?0$0CA@Us_default_enum_string_resolver@@@@J@Z");
//};

//bool cui_get_array_property_element_by_out_pointer<class c_player_model_color_list_data_component, union argb_color, long & (c_player_model_color_list_data_component::get_visor_color_count::*)(void), void & (c_player_model_color_list_data_component::get_visor_color_rgb::*)(long, union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_out_pointer@Vc_player_model_color_list_data_component@@Targb_color@@$1?get_visor_color_count@1@QBAJXZ$1?get_visor_color_rgb@1@QBAXJPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_player_model_color_list_data_component::get_visor_color_rgb(long, union argb_color *) const
//{
//    mangled_ppc("?get_visor_color_rgb@c_player_model_color_list_data_component@@QBAXJPATargb_color@@@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_player_model_color_list_data_component, bool, long & (c_player_model_color_list_data_component::get_visor_color_count::*)(void), bool & (c_player_model_color_list_data_component::get_visor_color_locked::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_player_model_color_list_data_component@@_N$1?get_visor_color_count@1@QBAJXZ$1?get_visor_color_locked@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_player_model_color_list_data_component::get_visor_color_locked(long) const
//{
//    mangled_ppc("?get_visor_color_locked@c_player_model_color_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_array_property_element_by_return_value<class c_player_model_color_list_data_component, bool, long & (c_player_model_color_list_data_component::get_visor_color_count::*)(void), bool & (c_player_model_color_list_data_component::get_visor_color_new::*)(long)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_player_model_color_list_data_component@@_N$1?get_visor_color_count@1@QBAJXZ$1?get_visor_color_new@1@QBA_NJ@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_player_model_color_list_data_component::get_visor_color_new(long) const
//{
//    mangled_ppc("?get_visor_color_new@c_player_model_color_list_data_component@@QBA_NJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_color_list_data_component, long, long & (c_player_model_color_list_data_component::get_initial_primary_color_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_color_list_data_component@@J$1?get_initial_primary_color_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_player_model_color_list_data_component::get_initial_primary_color_index(void) const
//{
//    mangled_ppc("?get_initial_primary_color_index@c_player_model_color_list_data_component@@QBAJXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_color_list_data_component, long, long & (c_player_model_color_list_data_component::get_initial_secondary_color_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_color_list_data_component@@J$1?get_initial_secondary_color_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_player_model_color_list_data_component::get_initial_secondary_color_index(void) const
//{
//    mangled_ppc("?get_initial_secondary_color_index@c_player_model_color_list_data_component@@QBAJXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_color_list_data_component, long, long & (c_player_model_color_list_data_component::get_initial_tertiary_color_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_color_list_data_component@@J$1?get_initial_tertiary_color_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_player_model_color_list_data_component::get_initial_tertiary_color_index(void) const
//{
//    mangled_ppc("?get_initial_tertiary_color_index@c_player_model_color_list_data_component@@QBAJXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_color_list_data_component, long, long & (c_player_model_color_list_data_component::get_initial_visor_color_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_color_list_data_component@@J$1?get_initial_visor_color_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_player_model_color_list_data_component::get_initial_visor_color_index(void) const
//{
//    mangled_ppc("?get_initial_visor_color_index@c_player_model_color_list_data_component@@QBAJXZ");
//};

