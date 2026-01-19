/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_input_event_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_input_event_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_input_event_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_input_event_component@@@@0Vc_cui_object_property_table@@A"

// public: static class c_cui_component * c_input_event_component::create(void);
// public: static class c_cui_component * c_input_event_component::clone(class c_cui_component const *);
// public: static void c_input_event_component::destroy(class c_cui_component *);
// public: static bool c_input_event_component::create_or_update(class c_input_event_component **, class c_cui_input_event const *);
// public: c_input_event_component::c_input_event_component(void);
// public: c_input_event_component::c_input_event_component(class c_cui_input_event const &);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_input_event_component>::get_instance(void);
// ??$cui_get_scalar_property_by_return_value@Vc_event_component@@Vc_cui_string_id@@$1?get_event_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_set_scalar_property_by_value<class c_event_component, class c_cui_string_id, void & (c_event_component::set_event_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// ??$cui_get_scalar_property_by_return_value@Vc_input_event_component@@V?$c_enum@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@$1?get_event_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_set_scalar_property_by_value<class c_input_event_component, class c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>, void & (c_input_event_component::set_event_type::*)(class c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_input_event_component::set_event_type(class c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>);
// ??$cui_get_scalar_property_by_return_value@Vc_input_event_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_set_scalar_property_by_value<class c_input_event_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_input_event_component::set_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// ??$cui_get_scalar_property_by_return_value@Vc_input_event_component@@V?$c_enum@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@$1?get_controller_component@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_set_scalar_property_by_value<class c_input_event_component, class c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>, void & (c_input_event_component::set_controller_component::*)(class c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_input_event_component::set_controller_component(class c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>);
// public: c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>::c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>::c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>(void);
// void cui_property_value_set<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver> *);
// void cui_property_value_set<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver> *);
// public: bool c_enum_no_init<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>::in_range(void) const;

//public: static class c_cui_component * c_input_event_component::create(void)
//{
//    mangled_ppc("?create@c_input_event_component@@SAPAVc_cui_component@@XZ");
//};

//public: static class c_cui_component * c_input_event_component::clone(class c_cui_component const *)
//{
//    mangled_ppc("?clone@c_input_event_component@@SAPAVc_cui_component@@PBV2@@Z");
//};

//public: static void c_input_event_component::destroy(class c_cui_component *)
//{
//    mangled_ppc("?destroy@c_input_event_component@@SAXPAVc_cui_component@@@Z");
//};

//public: static bool c_input_event_component::create_or_update(class c_input_event_component **, class c_cui_input_event const *)
//{
//    mangled_ppc("?create_or_update@c_input_event_component@@SA_NPAPAV1@PBVc_cui_input_event@@@Z");
//};

//public: c_input_event_component::c_input_event_component(void)
//{
//    mangled_ppc("??0c_input_event_component@@QAA@XZ");
//};

//public: c_input_event_component::c_input_event_component(class c_cui_input_event const &)
//{
//    mangled_ppc("??0c_input_event_component@@QAA@ABVc_cui_input_event@@@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_input_event_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_input_event_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_event_component@@Vc_cui_string_id@@$1?get_event_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_event_component@@Vc_cui_string_id@@$1?get_event_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_event_component, class c_cui_string_id, void & (c_event_component::set_event_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_event_component@@Vc_cui_string_id@@$1?set_event_name@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_input_event_component@@V?$c_enum@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@$1?get_event_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_input_event_component@@V?$c_enum@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@$1?get_event_type@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_input_event_component, class c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>, void & (c_input_event_component::set_event_type::*)(class c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_input_event_component@@V?$c_enum@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@$1?set_event_type@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_input_event_component::set_event_type(class c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_event_type@c_input_event_component@@QAAXV?$c_enum@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_input_event_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_input_event_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_input_event_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_input_event_component::set_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_input_event_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_input_event_component@@V?$c_enum@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@$1?get_controller_component@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_input_event_component@@V?$c_enum@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@$1?get_controller_component@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_input_event_component, class c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>, void & (c_input_event_component::set_controller_component::*)(class c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_input_event_component@@V?$c_enum@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@$1?set_controller_component@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_input_event_component::set_controller_component(class c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_controller_component@c_input_event_component@@QAAXV?$c_enum@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@@Z");
//};

//public: c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>::c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>::c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//void cui_property_value_set<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum e_event_type, char, 0, 17, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_event_type@@D$0A@$0BB@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_controller_component, char, 0, 30, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_controller_component@@D$0A@$0BO@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

