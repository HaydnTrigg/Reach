/* ---------- headers */


/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static int const c_enum_no_init<enum c_bitmap_widget_base::e_horizontal_alignment, char, 0, 3, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_horizontal_alignment@c_bitmap_widget_base@@D$0A@$02Us_default_enum_string_resolver@@@@2HB"
// public: static enum c_bitmap_widget_base::e_horizontal_alignment const c_enum_no_init<enum c_bitmap_widget_base::e_horizontal_alignment, char, 0, 3, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_horizontal_alignment@c_bitmap_widget_base@@D$0A@$02Us_default_enum_string_resolver@@@@2W4e_horizontal_alignment@c_bitmap_widget_base@@B"
// public: static int const c_enum_no_init<enum c_bitmap_widget_base::e_vertical_alignment, char, 0, 3, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_vertical_alignment@c_bitmap_widget_base@@D$0A@$02Us_default_enum_string_resolver@@@@2HB"
// public: static enum c_bitmap_widget_base::e_vertical_alignment const c_enum_no_init<enum c_bitmap_widget_base::e_vertical_alignment, char, 0, 3, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_vertical_alignment@c_bitmap_widget_base@@D$0A@$02Us_default_enum_string_resolver@@@@2W4e_vertical_alignment@c_bitmap_widget_base@@B"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_bitmap_widget>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_bitmap_widget@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_bitmap_widget>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_bitmap_widget@@@@0Vc_cui_object_property_table@@A"

// public: c_bitmap_widget::c_bitmap_widget(void);
// merged_84A53F78;
// public: virtual c_bitmap_widget::~c_bitmap_widget(void);
// public: virtual c_bitmap_widget_base::~c_bitmap_widget_base(void);
// public: c_bitmap_widget::c_bitmap_widget(struct s_cui_component_description const *, class c_cui_object_property_table *, unsigned long);
// public: bool c_bitmap_widget::set_bitmap_reference(struct s_tag_reference const *);
// protected: virtual void c_bitmap_widget::do_update(class c_cui_update_context *);
// public: void c_cui_property_animator::get(class c_cui_animated_value<long> *) const;
// public: long c_cui_property_animator::get_absolute_long(void) const;
// public: long c_cui_property_animator::get_relative_long(void) const;
// protected: virtual void c_bitmap_widget::do_render(class c_cui_render_context *) const;
// protected: void c_bitmap_widget::render_bitmap(class c_cui_render_context *, union real_rectangle2d const *) const;
// public: long c_bitmap_widget::get_sequence_index(void) const;
// public: long c_bitmap_widget::get_sprite_frame(void) const;
// public: bool c_bitmap_widget::get_flip_x(void) const;
// public: bool c_bitmap_widget::get_flip_y(void) const;
// public: c_cui_animated_value<long>::c_cui_animated_value<long>(long);
// public: long c_cui_animated_value<long>::get_absolute(void) const;
// public: void c_cui_animated_value<long>::set(long, long);
// public: long c_cui_animated_value<long>::get_additive(void) const;
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_bitmap_widget>::get_instance(void);
// bool cui_get_scalar_property_by_out_pointer<class c_bitmap_widget, struct s_tag_reference, void & (c_bitmap_widget::get_bitmap_reference::*)(struct s_tag_reference *)>(void const *, long, struct s_cui_property_value *);
// public: void c_bitmap_widget::get_bitmap_reference(struct s_tag_reference *) const;
// bool cui_try_set_scalar_property_by_const_pointer<class c_bitmap_widget, struct s_tag_reference, bool & (c_bitmap_widget::set_bitmap_reference::*)(struct s_tag_reference const *)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_bitmap_widget, long, long & (c_bitmap_widget::get_sequence_index::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_bitmap_widget, long, void & (c_bitmap_widget::set_sequence_index::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_bitmap_widget::set_sequence_index(long);
// public: void c_cui_animated_value<long>::set(long);
// bool cui_get_scalar_property_by_return_value<class c_bitmap_widget, long, long & (c_bitmap_widget::get_sprite_frame::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_bitmap_widget, long, void & (c_bitmap_widget::set_sprite_frame::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_bitmap_widget::set_sprite_frame(long);
// bool cui_get_scalar_property_by_return_value<class c_bitmap_widget, bool, bool & (c_bitmap_widget::get_flip_x::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_bitmap_widget, bool, void & (c_bitmap_widget::set_flip_x::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_bitmap_widget::set_flip_x(bool);
// bool cui_get_scalar_property_by_return_value<class c_bitmap_widget, bool, bool & (c_bitmap_widget::get_flip_y::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_bitmap_widget, bool, void & (c_bitmap_widget::set_flip_y::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_bitmap_widget::set_flip_y(bool);
// public: static struct s_cui_component_description const * c_cui_class_component_description<class c_bitmap_widget_base>::get(void);
// class c_cui_component * cui_component_create<class c_bitmap_widget>(void);
// class c_cui_component * cui_component_clone<class c_bitmap_widget>(class c_cui_component const *);
// public: c_bitmap_widget::c_bitmap_widget(class c_bitmap_widget const &);
// public: c_bitmap_widget_base::c_bitmap_widget_base(class c_bitmap_widget_base const &);
// merged_84A550C0;
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_bitmap_widget_base>::get_instance(void);

//public: c_bitmap_widget::c_bitmap_widget(void)
//{
//    mangled_ppc("??0c_bitmap_widget@@QAA@XZ");
//};

//merged_84A53F78
//{
//    mangled_ppc("merged_84A53F78");
//};

//public: virtual c_bitmap_widget::~c_bitmap_widget(void)
//{
//    mangled_ppc("??1c_bitmap_widget@@UAA@XZ");
//};

//public: virtual c_bitmap_widget_base::~c_bitmap_widget_base(void)
//{
//    mangled_ppc("??1c_bitmap_widget_base@@UAA@XZ");
//};

//public: c_bitmap_widget::c_bitmap_widget(struct s_cui_component_description const *, class c_cui_object_property_table *, unsigned long)
//{
//    mangled_ppc("??0c_bitmap_widget@@QAA@PBUs_cui_component_description@@PAVc_cui_object_property_table@@K@Z");
//};

//public: bool c_bitmap_widget::set_bitmap_reference(struct s_tag_reference const *)
//{
//    mangled_ppc("?set_bitmap_reference@c_bitmap_widget@@QAA_NPBUs_tag_reference@@@Z");
//};

//protected: virtual void c_bitmap_widget::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_bitmap_widget@@MAAXPAVc_cui_update_context@@@Z");
//};

//public: void c_cui_property_animator::get(class c_cui_animated_value<long> *) const
//{
//    mangled_ppc("?get@c_cui_property_animator@@QBAXPAV?$c_cui_animated_value@J@@@Z");
//};

//public: long c_cui_property_animator::get_absolute_long(void) const
//{
//    mangled_ppc("?get_absolute_long@c_cui_property_animator@@QBAJXZ");
//};

//public: long c_cui_property_animator::get_relative_long(void) const
//{
//    mangled_ppc("?get_relative_long@c_cui_property_animator@@QBAJXZ");
//};

//protected: virtual void c_bitmap_widget::do_render(class c_cui_render_context *) const
//{
//    mangled_ppc("?do_render@c_bitmap_widget@@MBAXPAVc_cui_render_context@@@Z");
//};

//protected: void c_bitmap_widget::render_bitmap(class c_cui_render_context *, union real_rectangle2d const *) const
//{
//    mangled_ppc("?render_bitmap@c_bitmap_widget@@IBAXPAVc_cui_render_context@@PBTreal_rectangle2d@@@Z");
//};

//public: long c_bitmap_widget::get_sequence_index(void) const
//{
//    mangled_ppc("?get_sequence_index@c_bitmap_widget@@QBAJXZ");
//};

//public: long c_bitmap_widget::get_sprite_frame(void) const
//{
//    mangled_ppc("?get_sprite_frame@c_bitmap_widget@@QBAJXZ");
//};

//public: bool c_bitmap_widget::get_flip_x(void) const
//{
//    mangled_ppc("?get_flip_x@c_bitmap_widget@@QBA_NXZ");
//};

//public: bool c_bitmap_widget::get_flip_y(void) const
//{
//    mangled_ppc("?get_flip_y@c_bitmap_widget@@QBA_NXZ");
//};

//public: c_cui_animated_value<long>::c_cui_animated_value<long>(long)
//{
//    mangled_ppc("??0?$c_cui_animated_value@J@@QAA@J@Z");
//};

//public: long c_cui_animated_value<long>::get_absolute(void) const
//{
//    mangled_ppc("?get_absolute@?$c_cui_animated_value@J@@QBAJXZ");
//};

//public: void c_cui_animated_value<long>::set(long, long)
//{
//    mangled_ppc("?set@?$c_cui_animated_value@J@@QAAXJJ@Z");
//};

//public: long c_cui_animated_value<long>::get_additive(void) const
//{
//    mangled_ppc("?get_additive@?$c_cui_animated_value@J@@QBAJXZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_bitmap_widget>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_bitmap_widget@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//bool cui_get_scalar_property_by_out_pointer<class c_bitmap_widget, struct s_tag_reference, void & (c_bitmap_widget::get_bitmap_reference::*)(struct s_tag_reference *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_out_pointer@Vc_bitmap_widget@@Us_tag_reference@@$1?get_bitmap_reference@1@QBAXPAU2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_bitmap_widget::get_bitmap_reference(struct s_tag_reference *) const
//{
//    mangled_ppc("?get_bitmap_reference@c_bitmap_widget@@QBAXPAUs_tag_reference@@@Z");
//};

//bool cui_try_set_scalar_property_by_const_pointer<class c_bitmap_widget, struct s_tag_reference, bool & (c_bitmap_widget::set_bitmap_reference::*)(struct s_tag_reference const *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_const_pointer@Vc_bitmap_widget@@Us_tag_reference@@$1?set_bitmap_reference@1@QAA_NPBU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_bitmap_widget, long, long & (c_bitmap_widget::get_sequence_index::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_bitmap_widget@@J$1?get_sequence_index@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_bitmap_widget, long, void & (c_bitmap_widget::set_sequence_index::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_bitmap_widget@@J$1?set_sequence_index@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_bitmap_widget::set_sequence_index(long)
//{
//    mangled_ppc("?set_sequence_index@c_bitmap_widget@@QAAXJ@Z");
//};

//public: void c_cui_animated_value<long>::set(long)
//{
//    mangled_ppc("?set@?$c_cui_animated_value@J@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_bitmap_widget, long, long & (c_bitmap_widget::get_sprite_frame::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_bitmap_widget@@J$1?get_sprite_frame@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_bitmap_widget, long, void & (c_bitmap_widget::set_sprite_frame::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_bitmap_widget@@J$1?set_sprite_frame@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_bitmap_widget::set_sprite_frame(long)
//{
//    mangled_ppc("?set_sprite_frame@c_bitmap_widget@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_bitmap_widget, bool, bool & (c_bitmap_widget::get_flip_x::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_bitmap_widget@@_N$1?get_flip_x@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_bitmap_widget, bool, void & (c_bitmap_widget::set_flip_x::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_bitmap_widget@@_N$1?set_flip_x@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_bitmap_widget::set_flip_x(bool)
//{
//    mangled_ppc("?set_flip_x@c_bitmap_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_bitmap_widget, bool, bool & (c_bitmap_widget::get_flip_y::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_bitmap_widget@@_N$1?get_flip_y@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_bitmap_widget, bool, void & (c_bitmap_widget::set_flip_y::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_bitmap_widget@@_N$1?set_flip_y@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_bitmap_widget::set_flip_y(bool)
//{
//    mangled_ppc("?set_flip_y@c_bitmap_widget@@QAAX_N@Z");
//};

//public: static struct s_cui_component_description const * c_cui_class_component_description<class c_bitmap_widget_base>::get(void)
//{
//    mangled_ppc("?get@?$c_cui_class_component_description@Vc_bitmap_widget_base@@@@SAPBUs_cui_component_description@@XZ");
//};

//class c_cui_component * cui_component_create<class c_bitmap_widget>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_bitmap_widget@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_bitmap_widget>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_bitmap_widget@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_bitmap_widget::c_bitmap_widget(class c_bitmap_widget const &)
//{
//    mangled_ppc("??0c_bitmap_widget@@QAA@ABV0@@Z");
//};

//public: c_bitmap_widget_base::c_bitmap_widget_base(class c_bitmap_widget_base const &)
//{
//    mangled_ppc("??0c_bitmap_widget_base@@QAA@ABV0@@Z");
//};

//merged_84A550C0
//{
//    mangled_ppc("merged_84A550C0");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_bitmap_widget_base>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_bitmap_widget_base@@@@SAPAVc_cui_object_property_table@@XZ");
//};

