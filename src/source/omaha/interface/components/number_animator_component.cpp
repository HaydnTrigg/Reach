/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@2HB"
// public: static enum c_number_animator_component::e_animation_mode const c_enum_no_init<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@2W4e_animation_mode@c_number_animator_component@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_number_animator_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_number_animator_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_number_animator_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_number_animator_component@@@@0Vc_cui_object_property_table@@A"

// public: c_number_animator_component::c_number_animator_component(void);
// merged_84B12150;
// public: virtual c_number_animator_component::~c_number_animator_component(void);
// protected: virtual void c_number_animator_component::do_update(class c_cui_update_context *);
// public: void c_number_animator_component::get_counting_sound_reference(struct s_tag_reference *) const;
// public: bool c_number_animator_component::set_counting_sound_reference(struct s_tag_reference const *);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_number_animator_component>::get_instance(void);
// class c_cui_component * cui_component_create<class c_number_animator_component>(void);
// class c_cui_component * cui_component_clone<class c_number_animator_component>(class c_cui_component const *);
// ??$cui_get_scalar_property_by_return_value@Vc_number_animator_component@@V?$c_enum@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_animation_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver> c_number_animator_component::get_animation_mode(void) const;
// public: c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum c_number_animator_component::e_animation_mode);
// bool cui_set_scalar_property_by_value<class c_number_animator_component, class c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>, void & (c_number_animator_component::set_animation_mode::*)(class c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_number_animator_component::set_animation_mode(class c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>);
// public: enum c_number_animator_component::e_animation_mode c_enum_no_init<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum c_number_animator_component::e_animation_mode(void) const;
// bool cui_get_scalar_property_by_return_value<class c_number_animator_component, float, float & (c_number_animator_component::get_animation_param::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: float c_number_animator_component::get_animation_param(void) const;
// bool cui_set_scalar_property_by_value<class c_number_animator_component, float, void & (c_number_animator_component::set_animation_param::*)(float)>(void *, long, struct s_cui_property_value const *);
// public: void c_number_animator_component::set_animation_param(float);
// bool cui_get_scalar_property_by_return_value<class c_number_animator_component, long, long & (c_number_animator_component::get_digit_count::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_number_animator_component::get_digit_count(void) const;
// bool cui_set_scalar_property_by_value<class c_number_animator_component, long, void & (c_number_animator_component::set_digit_count::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_number_animator_component::set_digit_count(long);
// bool cui_get_scalar_property_by_return_value<class c_number_animator_component, float, float & (c_number_animator_component::get_animation_start_time::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: float c_number_animator_component::get_animation_start_time(void) const;
// bool cui_set_scalar_property_by_value<class c_number_animator_component, float, void & (c_number_animator_component::set_animation_start_time::*)(float)>(void *, long, struct s_cui_property_value const *);
// public: void c_number_animator_component::set_animation_start_time(float);
// bool cui_get_scalar_property_by_return_value<class c_number_animator_component, float, float & (c_number_animator_component::get_animated_value::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: float c_number_animator_component::get_animated_value(void) const;
// bool cui_get_scalar_property_by_return_value<class c_number_animator_component, float, float & (c_number_animator_component::get_current_value::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: float c_number_animator_component::get_current_value(void) const;
// bool cui_set_scalar_property_by_value<class c_number_animator_component, float, void & (c_number_animator_component::set_current_value::*)(float)>(void *, long, struct s_cui_property_value const *);
// public: void c_number_animator_component::set_current_value(float);
// bool cui_get_scalar_property_by_return_value<class c_number_animator_component, float, float & (c_number_animator_component::get_initial_animated_value::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: float c_number_animator_component::get_initial_animated_value(void) const;
// bool cui_set_scalar_property_by_value<class c_number_animator_component, float, void & (c_number_animator_component::set_initial_animated_value::*)(float)>(void *, long, struct s_cui_property_value const *);
// public: void c_number_animator_component::set_initial_animated_value(float);
// bool cui_get_scalar_property_by_out_pointer<class c_number_animator_component, struct s_tag_reference, void & (c_number_animator_component::get_counting_sound_reference::*)(struct s_tag_reference *)>(void const *, long, struct s_cui_property_value *);
// bool cui_try_set_scalar_property_by_const_pointer<class c_number_animator_component, struct s_tag_reference, bool & (c_number_animator_component::set_counting_sound_reference::*)(struct s_tag_reference const *)>(void *, long, struct s_cui_property_value const *);
// public: c_number_animator_component::c_number_animator_component(class c_number_animator_component const &);
// public: c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void);
// void cui_property_value_set<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver> *);
// public: bool c_enum_no_init<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const;
// void g_animation_mode_enum_table::`dynamic atexit destructor'(void);

//public: c_number_animator_component::c_number_animator_component(void)
//{
//    mangled_ppc("??0c_number_animator_component@@QAA@XZ");
//};

//merged_84B12150
//{
//    mangled_ppc("merged_84B12150");
//};

//public: virtual c_number_animator_component::~c_number_animator_component(void)
//{
//    mangled_ppc("??1c_number_animator_component@@UAA@XZ");
//};

//protected: virtual void c_number_animator_component::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_number_animator_component@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: void c_number_animator_component::get_counting_sound_reference(struct s_tag_reference *) const
//{
//    mangled_ppc("?get_counting_sound_reference@c_number_animator_component@@QBAXPAUs_tag_reference@@@Z");
//};

//public: bool c_number_animator_component::set_counting_sound_reference(struct s_tag_reference const *)
//{
//    mangled_ppc("?set_counting_sound_reference@c_number_animator_component@@QAA_NPBUs_tag_reference@@@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_number_animator_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_number_animator_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_cui_component * cui_component_create<class c_number_animator_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_number_animator_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_number_animator_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_number_animator_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_number_animator_component@@V?$c_enum@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_animation_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_number_animator_component@@V?$c_enum@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_animation_mode@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver> c_number_animator_component::get_animation_mode(void) const
//{
//    mangled_ppc("?get_animation_mode@c_number_animator_component@@QBA?AV?$c_enum@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum c_number_animator_component::e_animation_mode)
//{
//    mangled_ppc("??0?$c_enum@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_animation_mode@c_number_animator_component@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_number_animator_component, class c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>, void & (c_number_animator_component::set_animation_mode::*)(class c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_number_animator_component@@V?$c_enum@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@$1?set_animation_mode@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_number_animator_component::set_animation_mode(class c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_animation_mode@c_number_animator_component@@QAAXV?$c_enum@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum c_number_animator_component::e_animation_mode c_enum_no_init<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum c_number_animator_component::e_animation_mode(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_animation_mode@c_number_animator_component@@XZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_number_animator_component, float, float & (c_number_animator_component::get_animation_param::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_number_animator_component@@M$1?get_animation_param@1@QBAMXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: float c_number_animator_component::get_animation_param(void) const
//{
//    mangled_ppc("?get_animation_param@c_number_animator_component@@QBAMXZ");
//};

//bool cui_set_scalar_property_by_value<class c_number_animator_component, float, void & (c_number_animator_component::set_animation_param::*)(float)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_number_animator_component@@M$1?set_animation_param@1@QAAXM@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_number_animator_component::set_animation_param(float)
//{
//    mangled_ppc("?set_animation_param@c_number_animator_component@@QAAXM@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_number_animator_component, long, long & (c_number_animator_component::get_digit_count::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_number_animator_component@@J$1?get_digit_count@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_number_animator_component::get_digit_count(void) const
//{
//    mangled_ppc("?get_digit_count@c_number_animator_component@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_number_animator_component, long, void & (c_number_animator_component::set_digit_count::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_number_animator_component@@J$1?set_digit_count@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_number_animator_component::set_digit_count(long)
//{
//    mangled_ppc("?set_digit_count@c_number_animator_component@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_number_animator_component, float, float & (c_number_animator_component::get_animation_start_time::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_number_animator_component@@M$1?get_animation_start_time@1@QBAMXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: float c_number_animator_component::get_animation_start_time(void) const
//{
//    mangled_ppc("?get_animation_start_time@c_number_animator_component@@QBAMXZ");
//};

//bool cui_set_scalar_property_by_value<class c_number_animator_component, float, void & (c_number_animator_component::set_animation_start_time::*)(float)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_number_animator_component@@M$1?set_animation_start_time@1@QAAXM@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_number_animator_component::set_animation_start_time(float)
//{
//    mangled_ppc("?set_animation_start_time@c_number_animator_component@@QAAXM@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_number_animator_component, float, float & (c_number_animator_component::get_animated_value::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_number_animator_component@@M$1?get_animated_value@1@QBAMXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: float c_number_animator_component::get_animated_value(void) const
//{
//    mangled_ppc("?get_animated_value@c_number_animator_component@@QBAMXZ");
//};

//bool cui_get_scalar_property_by_return_value<class c_number_animator_component, float, float & (c_number_animator_component::get_current_value::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_number_animator_component@@M$1?get_current_value@1@QBAMXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: float c_number_animator_component::get_current_value(void) const
//{
//    mangled_ppc("?get_current_value@c_number_animator_component@@QBAMXZ");
//};

//bool cui_set_scalar_property_by_value<class c_number_animator_component, float, void & (c_number_animator_component::set_current_value::*)(float)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_number_animator_component@@M$1?set_current_value@1@QAAXM@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_number_animator_component::set_current_value(float)
//{
//    mangled_ppc("?set_current_value@c_number_animator_component@@QAAXM@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_number_animator_component, float, float & (c_number_animator_component::get_initial_animated_value::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_number_animator_component@@M$1?get_initial_animated_value@1@QBAMXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: float c_number_animator_component::get_initial_animated_value(void) const
//{
//    mangled_ppc("?get_initial_animated_value@c_number_animator_component@@QBAMXZ");
//};

//bool cui_set_scalar_property_by_value<class c_number_animator_component, float, void & (c_number_animator_component::set_initial_animated_value::*)(float)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_number_animator_component@@M$1?set_initial_animated_value@1@QAAXM@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_number_animator_component::set_initial_animated_value(float)
//{
//    mangled_ppc("?set_initial_animated_value@c_number_animator_component@@QAAXM@Z");
//};

//bool cui_get_scalar_property_by_out_pointer<class c_number_animator_component, struct s_tag_reference, void & (c_number_animator_component::get_counting_sound_reference::*)(struct s_tag_reference *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_out_pointer@Vc_number_animator_component@@Us_tag_reference@@$1?get_counting_sound_reference@1@QBAXPAU2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_try_set_scalar_property_by_const_pointer<class c_number_animator_component, struct s_tag_reference, bool & (c_number_animator_component::set_counting_sound_reference::*)(struct s_tag_reference const *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_const_pointer@Vc_number_animator_component@@Us_tag_reference@@$1?set_counting_sound_reference@1@QAA_NPBU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: c_number_animator_component::c_number_animator_component(class c_number_animator_component const &)
//{
//    mangled_ppc("??0c_number_animator_component@@QAA@ABV0@@Z");
//};

//public: c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//void cui_property_value_set<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum c_number_animator_component::e_animation_mode, unsigned char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_animation_mode@c_number_animator_component@@E$0A@$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//void g_animation_mode_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_animation_mode_enum_table@@YAXXZ");
//};

