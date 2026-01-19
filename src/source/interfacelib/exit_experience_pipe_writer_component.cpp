/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_exit_experience_pipe_writer_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_exit_experience_pipe_writer_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_exit_experience_pipe_writer_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_exit_experience_pipe_writer_component@@@@0Vc_cui_object_property_table@@A"

// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_exit_experience_pipe_writer_component::get_driving_controller_index(void) const;
// protected: class c_exit_experience_pipe * c_exit_experience_pipe_writer_component::get_exit_experience_pipe(void) const;
// public: void c_exit_experience_pipe_writer_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// public: void c_exit_experience_pipe::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// public: c_exit_experience_pipe_writer_component::c_exit_experience_pipe_writer_component(void);
// merged_84A88590;
// public: virtual c_exit_experience_pipe_writer_component::~c_exit_experience_pipe_writer_component(void);
// private: virtual void c_exit_experience_pipe_writer_component::do_update(class c_cui_update_context *);
// public: void c_exit_experience_pipe_component::set_go_to_next_item(bool);
// public: void c_exit_experience_pipe_component::set_skip_to_end(bool);
// protected: bool c_exit_experience_pipe_writer_component::event_valid(class c_event_component *) const;
// protected: bool c_exit_experience_pipe_writer_component::test_event(class c_event_component *, long) const;
// protected: class c_exit_experience_pipe_component * c_exit_experience_pipe_writer_component::get_exit_experience_pipe_component(void) const;
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_exit_experience_pipe_writer_component>::get_instance(void);
// ??$cui_get_scalar_property_by_return_value@Vc_exit_experience_pipe_writer_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// bool cui_set_scalar_property_by_value<class c_exit_experience_pipe_writer_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_exit_experience_pipe_writer_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_exit_experience_pipe_writer_component, class c_event_component *, class c_event_component *& (c_exit_experience_pipe_writer_component::get_go_to_next_item_event::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_event_component * c_exit_experience_pipe_writer_component::get_go_to_next_item_event(void) const;
// bool cui_set_scalar_property_by_value<class c_exit_experience_pipe_writer_component, class c_event_component *, void & (c_exit_experience_pipe_writer_component::set_go_to_next_item_event::*)(class c_event_component *)>(void *, long, struct s_cui_property_value const *);
// public: void c_exit_experience_pipe_writer_component::set_go_to_next_item_event(class c_event_component *);
// ??$cui_get_scalar_property_by_return_value@Vc_exit_experience_pipe_writer_component@@Vc_cui_string_id@@$1?get_test_go_to_next_item_event_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_exit_experience_pipe_writer_component::get_test_go_to_next_item_event_name(void) const;
// bool cui_set_scalar_property_by_value<class c_exit_experience_pipe_writer_component, class c_cui_string_id, void & (c_exit_experience_pipe_writer_component::set_test_go_to_next_item_event_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_exit_experience_pipe_writer_component::set_test_go_to_next_item_event_name(class c_cui_string_id);
// bool cui_get_scalar_property_by_return_value<class c_exit_experience_pipe_writer_component, class c_event_component *, class c_event_component *& (c_exit_experience_pipe_writer_component::get_skip_to_end_event::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_event_component * c_exit_experience_pipe_writer_component::get_skip_to_end_event(void) const;
// bool cui_set_scalar_property_by_value<class c_exit_experience_pipe_writer_component, class c_event_component *, void & (c_exit_experience_pipe_writer_component::set_skip_to_end_event::*)(class c_event_component *)>(void *, long, struct s_cui_property_value const *);
// public: void c_exit_experience_pipe_writer_component::set_skip_to_end_event(class c_event_component *);
// ??$cui_get_scalar_property_by_return_value@Vc_exit_experience_pipe_writer_component@@Vc_cui_string_id@@$1?get_test_skip_to_end_event_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_exit_experience_pipe_writer_component::get_test_skip_to_end_event_name(void) const;
// bool cui_set_scalar_property_by_value<class c_exit_experience_pipe_writer_component, class c_cui_string_id, void & (c_exit_experience_pipe_writer_component::set_skip_to_end_event_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_exit_experience_pipe_writer_component::set_skip_to_end_event_name(class c_cui_string_id);
// class c_cui_component * cui_component_create<class c_exit_experience_pipe_writer_component>(void);
// class c_cui_component * cui_component_clone<class c_exit_experience_pipe_writer_component>(class c_cui_component const *);
// public: c_exit_experience_pipe_writer_component::c_exit_experience_pipe_writer_component(class c_exit_experience_pipe_writer_component const &);

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_exit_experience_pipe_writer_component::get_driving_controller_index(void) const
//{
//    mangled_ppc("?get_driving_controller_index@c_exit_experience_pipe_writer_component@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//protected: class c_exit_experience_pipe * c_exit_experience_pipe_writer_component::get_exit_experience_pipe(void) const
//{
//    mangled_ppc("?get_exit_experience_pipe@c_exit_experience_pipe_writer_component@@IBAPAVc_exit_experience_pipe@@XZ");
//};

//public: void c_exit_experience_pipe_writer_component::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_driving_controller_index@c_exit_experience_pipe_writer_component@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_exit_experience_pipe::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_driving_controller_index@c_exit_experience_pipe@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//public: c_exit_experience_pipe_writer_component::c_exit_experience_pipe_writer_component(void)
//{
//    mangled_ppc("??0c_exit_experience_pipe_writer_component@@QAA@XZ");
//};

//merged_84A88590
//{
//    mangled_ppc("merged_84A88590");
//};

//public: virtual c_exit_experience_pipe_writer_component::~c_exit_experience_pipe_writer_component(void)
//{
//    mangled_ppc("??1c_exit_experience_pipe_writer_component@@UAA@XZ");
//};

//private: virtual void c_exit_experience_pipe_writer_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_exit_experience_pipe_writer_component@@EAAXPAVc_cui_update_context@@@Z");
//};

//public: void c_exit_experience_pipe_component::set_go_to_next_item(bool)
//{
//    mangled_ppc("?set_go_to_next_item@c_exit_experience_pipe_component@@QAAX_N@Z");
//};

//public: void c_exit_experience_pipe_component::set_skip_to_end(bool)
//{
//    mangled_ppc("?set_skip_to_end@c_exit_experience_pipe_component@@QAAX_N@Z");
//};

//protected: bool c_exit_experience_pipe_writer_component::event_valid(class c_event_component *) const
//{
//    mangled_ppc("?event_valid@c_exit_experience_pipe_writer_component@@IBA_NPAVc_event_component@@@Z");
//};

//protected: bool c_exit_experience_pipe_writer_component::test_event(class c_event_component *, long) const
//{
//    mangled_ppc("?test_event@c_exit_experience_pipe_writer_component@@IBA_NPAVc_event_component@@J@Z");
//};

//protected: class c_exit_experience_pipe_component * c_exit_experience_pipe_writer_component::get_exit_experience_pipe_component(void) const
//{
//    mangled_ppc("?get_exit_experience_pipe_component@c_exit_experience_pipe_writer_component@@IBAPAVc_exit_experience_pipe_component@@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_exit_experience_pipe_writer_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_exit_experience_pipe_writer_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_exit_experience_pipe_writer_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_exit_experience_pipe_writer_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_exit_experience_pipe_writer_component, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_exit_experience_pipe_writer_component::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_exit_experience_pipe_writer_component@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_driving_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_exit_experience_pipe_writer_component, class c_event_component *, class c_event_component *& (c_exit_experience_pipe_writer_component::get_go_to_next_item_event::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_exit_experience_pipe_writer_component@@PAVc_event_component@@$1?get_go_to_next_item_event@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_event_component * c_exit_experience_pipe_writer_component::get_go_to_next_item_event(void) const
//{
//    mangled_ppc("?get_go_to_next_item_event@c_exit_experience_pipe_writer_component@@QBAPAVc_event_component@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_exit_experience_pipe_writer_component, class c_event_component *, void & (c_exit_experience_pipe_writer_component::set_go_to_next_item_event::*)(class c_event_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_exit_experience_pipe_writer_component@@PAVc_event_component@@$1?set_go_to_next_item_event@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_exit_experience_pipe_writer_component::set_go_to_next_item_event(class c_event_component *)
//{
//    mangled_ppc("?set_go_to_next_item_event@c_exit_experience_pipe_writer_component@@QAAXPAVc_event_component@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_exit_experience_pipe_writer_component@@Vc_cui_string_id@@$1?get_test_go_to_next_item_event_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_exit_experience_pipe_writer_component@@Vc_cui_string_id@@$1?get_test_go_to_next_item_event_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_exit_experience_pipe_writer_component::get_test_go_to_next_item_event_name(void) const
//{
//    mangled_ppc("?get_test_go_to_next_item_event_name@c_exit_experience_pipe_writer_component@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_exit_experience_pipe_writer_component, class c_cui_string_id, void & (c_exit_experience_pipe_writer_component::set_test_go_to_next_item_event_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_exit_experience_pipe_writer_component@@Vc_cui_string_id@@$1?set_test_go_to_next_item_event_name@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_exit_experience_pipe_writer_component::set_test_go_to_next_item_event_name(class c_cui_string_id)
//{
//    mangled_ppc("?set_test_go_to_next_item_event_name@c_exit_experience_pipe_writer_component@@QAAXVc_cui_string_id@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_exit_experience_pipe_writer_component, class c_event_component *, class c_event_component *& (c_exit_experience_pipe_writer_component::get_skip_to_end_event::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_exit_experience_pipe_writer_component@@PAVc_event_component@@$1?get_skip_to_end_event@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_event_component * c_exit_experience_pipe_writer_component::get_skip_to_end_event(void) const
//{
//    mangled_ppc("?get_skip_to_end_event@c_exit_experience_pipe_writer_component@@QBAPAVc_event_component@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_exit_experience_pipe_writer_component, class c_event_component *, void & (c_exit_experience_pipe_writer_component::set_skip_to_end_event::*)(class c_event_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_exit_experience_pipe_writer_component@@PAVc_event_component@@$1?set_skip_to_end_event@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_exit_experience_pipe_writer_component::set_skip_to_end_event(class c_event_component *)
//{
//    mangled_ppc("?set_skip_to_end_event@c_exit_experience_pipe_writer_component@@QAAXPAVc_event_component@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_exit_experience_pipe_writer_component@@Vc_cui_string_id@@$1?get_test_skip_to_end_event_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_exit_experience_pipe_writer_component@@Vc_cui_string_id@@$1?get_test_skip_to_end_event_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_exit_experience_pipe_writer_component::get_test_skip_to_end_event_name(void) const
//{
//    mangled_ppc("?get_test_skip_to_end_event_name@c_exit_experience_pipe_writer_component@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_exit_experience_pipe_writer_component, class c_cui_string_id, void & (c_exit_experience_pipe_writer_component::set_skip_to_end_event_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_exit_experience_pipe_writer_component@@Vc_cui_string_id@@$1?set_skip_to_end_event_name@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_exit_experience_pipe_writer_component::set_skip_to_end_event_name(class c_cui_string_id)
//{
//    mangled_ppc("?set_skip_to_end_event_name@c_exit_experience_pipe_writer_component@@QAAXVc_cui_string_id@@@Z");
//};

//class c_cui_component * cui_component_create<class c_exit_experience_pipe_writer_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_exit_experience_pipe_writer_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_exit_experience_pipe_writer_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_exit_experience_pipe_writer_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_exit_experience_pipe_writer_component::c_exit_experience_pipe_writer_component(class c_exit_experience_pipe_writer_component const &)
//{
//    mangled_ppc("??0c_exit_experience_pipe_writer_component@@QAA@ABV0@@Z");
//};

