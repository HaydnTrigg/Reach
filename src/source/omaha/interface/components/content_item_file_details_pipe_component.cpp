/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static unsigned long const c_content_item_file_details_pipe_writer_component::k_busy_millisecond_delay; // "?k_busy_millisecond_delay@c_content_item_file_details_pipe_writer_component@@0KB"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_content_item_file_details_pipe_reader_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_content_item_file_details_pipe_reader_component@@@@0Us_cui_component_description@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_content_item_file_details_pipe_writer_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_content_item_file_details_pipe_writer_component@@@@0Us_cui_component_description@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_content_item_file_details_pipe_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_content_item_file_details_pipe_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_content_item_file_details_pipe_reader_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_content_item_file_details_pipe_reader_component@@@@0Vc_cui_object_property_table@@A"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_content_item_file_details_pipe_writer_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_content_item_file_details_pipe_writer_component@@@@0Vc_cui_object_property_table@@A"

// public: c_content_item_file_details_pipe_component::c_content_item_file_details_pipe_component(void);
// merged_84A677B0;
// public: virtual c_content_item_file_details_pipe_component::~c_content_item_file_details_pipe_component(void);
// public: virtual c_file_details_pipe_component::~c_file_details_pipe_component(void);
// private: virtual class c_cui_screen_pipe * c_content_item_file_details_pipe_component::do_create_pipe(void);
// public: c_content_item_file_details_pipe::c_content_item_file_details_pipe(void);
// merged_84A678F8;
// public: virtual c_content_item_file_details_pipe::~c_content_item_file_details_pipe(void);
// public: virtual c_file_details_pipe::~c_file_details_pipe(void);
// public: c_content_item_file_details_pipe_writer_component::c_content_item_file_details_pipe_writer_component(void);
// merged_84A67A38;
// public: virtual c_content_item_file_details_pipe_writer_component::~c_content_item_file_details_pipe_writer_component(void);
// protected: virtual void c_content_item_file_details_pipe_writer_component::do_update(class c_cui_update_context *);
// public: void c_content_item_file_details_pipe::set_platform_handle(struct s_content_item_platform_handle const &);
// public: void c_content_item_file_details_pipe::set_metadata_valid(bool);
// public: class c_content_item_file_details_pipe * c_content_item_file_details_pipe_writer_component::get_pipe(void) const;
// public: class c_content_item_file_details_pipe * c_content_item_file_details_pipe_component::get_pipe(void) const;
// public: c_content_item_file_details_pipe_reader_component::c_content_item_file_details_pipe_reader_component(void);
// merged_84A67E58;
// public: virtual c_content_item_file_details_pipe_reader_component::~c_content_item_file_details_pipe_reader_component(void);
// public: virtual c_file_details_pipe_reader_component::~c_file_details_pipe_reader_component(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_content_item_file_details_pipe_writer_component>::get_instance(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_content_item_file_details_pipe_reader_component>::get_instance(void);
// class c_content_item_file_details_pipe_component * cui_dynamic_cast<class c_content_item_file_details_pipe_component *>(class c_cui_component *);
// bool cui_get_scalar_property_by_return_value<class c_content_item_file_details_pipe_writer_component, class c_content_item_full_data_component *, class c_content_item_full_data_component *& (c_content_item_file_details_pipe_writer_component::get_content_item_data::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: class c_content_item_full_data_component * c_content_item_file_details_pipe_writer_component::get_content_item_data(void) const;
// bool cui_set_scalar_property_by_value<class c_content_item_file_details_pipe_writer_component, class c_content_item_full_data_component *, void & (c_content_item_file_details_pipe_writer_component::set_content_item_data::*)(class c_content_item_full_data_component *)>(void *, long, struct s_cui_property_value const *);
// public: void c_content_item_file_details_pipe_writer_component::set_content_item_data(class c_content_item_full_data_component *);
// bool cui_get_scalar_property_by_return_value<class c_content_item_file_details_pipe_writer_component, long, long & (c_content_item_file_details_pipe_writer_component::get_item_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_content_item_file_details_pipe_writer_component::get_item_index(void) const;
// bool cui_set_scalar_property_by_value<class c_content_item_file_details_pipe_writer_component, long, void & (c_content_item_file_details_pipe_writer_component::set_item_index::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_content_item_file_details_pipe_writer_component::set_item_index(long);
// bool cui_try_get_scalar_property_by_out_pointer<class c_content_item_file_details_pipe_reader_component, bool, bool & (c_content_item_file_details_pipe_reader_component::is_metadata_valid::*)(bool *)>(void const *, long, struct s_cui_property_value *);
// public: bool c_content_item_file_details_pipe_reader_component::is_metadata_valid(bool *) const;
// public: bool c_content_item_file_details_pipe::is_metadata_valid(void) const;
// public: class c_content_item_file_details_pipe * c_content_item_file_details_pipe_reader_component::get_pipe(void) const;
// public: static class c_content_item_file_details_pipe_component * s_cui_dynamic_cast<class c_content_item_file_details_pipe_component *>::cast(class c_cui_component *);
// class c_cui_component * cui_component_create<class c_content_item_file_details_pipe_component>(void);
// class c_cui_component * cui_component_clone<class c_content_item_file_details_pipe_component>(class c_cui_component const *);
// public: c_content_item_file_details_pipe_component::c_content_item_file_details_pipe_component(class c_content_item_file_details_pipe_component const &);
// public: c_file_details_pipe_component::c_file_details_pipe_component(class c_file_details_pipe_component const &);
// merged_84A68440;
// class c_cui_component * cui_component_create<class c_content_item_file_details_pipe_writer_component>(void);
// class c_cui_component * cui_component_clone<class c_content_item_file_details_pipe_writer_component>(class c_cui_component const *);
// public: c_content_item_file_details_pipe_writer_component::c_content_item_file_details_pipe_writer_component(class c_content_item_file_details_pipe_writer_component const &);
// class c_cui_component * cui_component_create<class c_content_item_file_details_pipe_reader_component>(void);
// class c_cui_component * cui_component_clone<class c_content_item_file_details_pipe_reader_component>(class c_cui_component const *);
// public: c_content_item_file_details_pipe_reader_component::c_content_item_file_details_pipe_reader_component(class c_content_item_file_details_pipe_reader_component const &);
// public: c_file_details_pipe_reader_component::c_file_details_pipe_reader_component(class c_file_details_pipe_reader_component const &);
// merged_84A68770;
// public: c_input_event_component::c_input_event_component(class c_input_event_component const &);
// merged_84A68858;
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_file_details_pipe_reader_component>::get_instance(void);

//public: c_content_item_file_details_pipe_component::c_content_item_file_details_pipe_component(void)
//{
//    mangled_ppc("??0c_content_item_file_details_pipe_component@@QAA@XZ");
//};

//merged_84A677B0
//{
//    mangled_ppc("merged_84A677B0");
//};

//public: virtual c_content_item_file_details_pipe_component::~c_content_item_file_details_pipe_component(void)
//{
//    mangled_ppc("??1c_content_item_file_details_pipe_component@@UAA@XZ");
//};

//public: virtual c_file_details_pipe_component::~c_file_details_pipe_component(void)
//{
//    mangled_ppc("??1c_file_details_pipe_component@@UAA@XZ");
//};

//private: virtual class c_cui_screen_pipe * c_content_item_file_details_pipe_component::do_create_pipe(void)
//{
//    mangled_ppc("?do_create_pipe@c_content_item_file_details_pipe_component@@EAAPAVc_cui_screen_pipe@@XZ");
//};

//public: c_content_item_file_details_pipe::c_content_item_file_details_pipe(void)
//{
//    mangled_ppc("??0c_content_item_file_details_pipe@@QAA@XZ");
//};

//merged_84A678F8
//{
//    mangled_ppc("merged_84A678F8");
//};

//public: virtual c_content_item_file_details_pipe::~c_content_item_file_details_pipe(void)
//{
//    mangled_ppc("??1c_content_item_file_details_pipe@@UAA@XZ");
//};

//public: virtual c_file_details_pipe::~c_file_details_pipe(void)
//{
//    mangled_ppc("??1c_file_details_pipe@@UAA@XZ");
//};

//public: c_content_item_file_details_pipe_writer_component::c_content_item_file_details_pipe_writer_component(void)
//{
//    mangled_ppc("??0c_content_item_file_details_pipe_writer_component@@QAA@XZ");
//};

//merged_84A67A38
//{
//    mangled_ppc("merged_84A67A38");
//};

//public: virtual c_content_item_file_details_pipe_writer_component::~c_content_item_file_details_pipe_writer_component(void)
//{
//    mangled_ppc("??1c_content_item_file_details_pipe_writer_component@@UAA@XZ");
//};

//protected: virtual void c_content_item_file_details_pipe_writer_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_content_item_file_details_pipe_writer_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: void c_content_item_file_details_pipe::set_platform_handle(struct s_content_item_platform_handle const &)
//{
//    mangled_ppc("?set_platform_handle@c_content_item_file_details_pipe@@QAAXABUs_content_item_platform_handle@@@Z");
//};

//public: void c_content_item_file_details_pipe::set_metadata_valid(bool)
//{
//    mangled_ppc("?set_metadata_valid@c_content_item_file_details_pipe@@QAAX_N@Z");
//};

//public: class c_content_item_file_details_pipe * c_content_item_file_details_pipe_writer_component::get_pipe(void) const
//{
//    mangled_ppc("?get_pipe@c_content_item_file_details_pipe_writer_component@@QBAPAVc_content_item_file_details_pipe@@XZ");
//};

//public: class c_content_item_file_details_pipe * c_content_item_file_details_pipe_component::get_pipe(void) const
//{
//    mangled_ppc("?get_pipe@c_content_item_file_details_pipe_component@@QBAPAVc_content_item_file_details_pipe@@XZ");
//};

//public: c_content_item_file_details_pipe_reader_component::c_content_item_file_details_pipe_reader_component(void)
//{
//    mangled_ppc("??0c_content_item_file_details_pipe_reader_component@@QAA@XZ");
//};

//merged_84A67E58
//{
//    mangled_ppc("merged_84A67E58");
//};

//public: virtual c_content_item_file_details_pipe_reader_component::~c_content_item_file_details_pipe_reader_component(void)
//{
//    mangled_ppc("??1c_content_item_file_details_pipe_reader_component@@UAA@XZ");
//};

//public: virtual c_file_details_pipe_reader_component::~c_file_details_pipe_reader_component(void)
//{
//    mangled_ppc("??1c_file_details_pipe_reader_component@@UAA@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_content_item_file_details_pipe_writer_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_content_item_file_details_pipe_writer_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_content_item_file_details_pipe_reader_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_content_item_file_details_pipe_reader_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_content_item_file_details_pipe_component * cui_dynamic_cast<class c_content_item_file_details_pipe_component *>(class c_cui_component *)
//{
//    mangled_ppc("??$cui_dynamic_cast@PAVc_content_item_file_details_pipe_component@@@@YAPAVc_content_item_file_details_pipe_component@@PAVc_cui_component@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_content_item_file_details_pipe_writer_component, class c_content_item_full_data_component *, class c_content_item_full_data_component *& (c_content_item_file_details_pipe_writer_component::get_content_item_data::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_content_item_file_details_pipe_writer_component@@PAVc_content_item_full_data_component@@$1?get_content_item_data@1@QBAPAV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_content_item_full_data_component * c_content_item_file_details_pipe_writer_component::get_content_item_data(void) const
//{
//    mangled_ppc("?get_content_item_data@c_content_item_file_details_pipe_writer_component@@QBAPAVc_content_item_full_data_component@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_content_item_file_details_pipe_writer_component, class c_content_item_full_data_component *, void & (c_content_item_file_details_pipe_writer_component::set_content_item_data::*)(class c_content_item_full_data_component *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_content_item_file_details_pipe_writer_component@@PAVc_content_item_full_data_component@@$1?set_content_item_data@1@QAAXPAV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_content_item_file_details_pipe_writer_component::set_content_item_data(class c_content_item_full_data_component *)
//{
//    mangled_ppc("?set_content_item_data@c_content_item_file_details_pipe_writer_component@@QAAXPAVc_content_item_full_data_component@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_content_item_file_details_pipe_writer_component, long, long & (c_content_item_file_details_pipe_writer_component::get_item_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_content_item_file_details_pipe_writer_component@@J$1?get_item_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_content_item_file_details_pipe_writer_component::get_item_index(void) const
//{
//    mangled_ppc("?get_item_index@c_content_item_file_details_pipe_writer_component@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_content_item_file_details_pipe_writer_component, long, void & (c_content_item_file_details_pipe_writer_component::set_item_index::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_content_item_file_details_pipe_writer_component@@J$1?set_item_index@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_content_item_file_details_pipe_writer_component::set_item_index(long)
//{
//    mangled_ppc("?set_item_index@c_content_item_file_details_pipe_writer_component@@QAAXJ@Z");
//};

//bool cui_try_get_scalar_property_by_out_pointer<class c_content_item_file_details_pipe_reader_component, bool, bool & (c_content_item_file_details_pipe_reader_component::is_metadata_valid::*)(bool *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_try_get_scalar_property_by_out_pointer@Vc_content_item_file_details_pipe_reader_component@@_N$1?is_metadata_valid@1@QBA_NPA_N@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_content_item_file_details_pipe_reader_component::is_metadata_valid(bool *) const
//{
//    mangled_ppc("?is_metadata_valid@c_content_item_file_details_pipe_reader_component@@QBA_NPA_N@Z");
//};

//public: bool c_content_item_file_details_pipe::is_metadata_valid(void) const
//{
//    mangled_ppc("?is_metadata_valid@c_content_item_file_details_pipe@@QBA_NXZ");
//};

//public: class c_content_item_file_details_pipe * c_content_item_file_details_pipe_reader_component::get_pipe(void) const
//{
//    mangled_ppc("?get_pipe@c_content_item_file_details_pipe_reader_component@@QBAPAVc_content_item_file_details_pipe@@XZ");
//};

//public: static class c_content_item_file_details_pipe_component * s_cui_dynamic_cast<class c_content_item_file_details_pipe_component *>::cast(class c_cui_component *)
//{
//    mangled_ppc("?cast@?$s_cui_dynamic_cast@PAVc_content_item_file_details_pipe_component@@@@SAPAVc_content_item_file_details_pipe_component@@PAVc_cui_component@@@Z");
//};

//class c_cui_component * cui_component_create<class c_content_item_file_details_pipe_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_content_item_file_details_pipe_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_content_item_file_details_pipe_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_content_item_file_details_pipe_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_content_item_file_details_pipe_component::c_content_item_file_details_pipe_component(class c_content_item_file_details_pipe_component const &)
//{
//    mangled_ppc("??0c_content_item_file_details_pipe_component@@QAA@ABV0@@Z");
//};

//public: c_file_details_pipe_component::c_file_details_pipe_component(class c_file_details_pipe_component const &)
//{
//    mangled_ppc("??0c_file_details_pipe_component@@QAA@ABV0@@Z");
//};

//merged_84A68440
//{
//    mangled_ppc("merged_84A68440");
//};

//class c_cui_component * cui_component_create<class c_content_item_file_details_pipe_writer_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_content_item_file_details_pipe_writer_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_content_item_file_details_pipe_writer_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_content_item_file_details_pipe_writer_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_content_item_file_details_pipe_writer_component::c_content_item_file_details_pipe_writer_component(class c_content_item_file_details_pipe_writer_component const &)
//{
//    mangled_ppc("??0c_content_item_file_details_pipe_writer_component@@QAA@ABV0@@Z");
//};

//class c_cui_component * cui_component_create<class c_content_item_file_details_pipe_reader_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_content_item_file_details_pipe_reader_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_content_item_file_details_pipe_reader_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_content_item_file_details_pipe_reader_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_content_item_file_details_pipe_reader_component::c_content_item_file_details_pipe_reader_component(class c_content_item_file_details_pipe_reader_component const &)
//{
//    mangled_ppc("??0c_content_item_file_details_pipe_reader_component@@QAA@ABV0@@Z");
//};

//public: c_file_details_pipe_reader_component::c_file_details_pipe_reader_component(class c_file_details_pipe_reader_component const &)
//{
//    mangled_ppc("??0c_file_details_pipe_reader_component@@QAA@ABV0@@Z");
//};

//merged_84A68770
//{
//    mangled_ppc("merged_84A68770");
//};

//public: c_input_event_component::c_input_event_component(class c_input_event_component const &)
//{
//    mangled_ppc("??0c_input_event_component@@QAA@ABV0@@Z");
//};

//merged_84A68858
//{
//    mangled_ppc("merged_84A68858");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_file_details_pipe_reader_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_file_details_pipe_reader_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

