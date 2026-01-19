/* ---------- headers */

#include "interfacelib\text_widget.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// public: static enum e_text_justification const c_text_widget::k_default_justification; // "?k_default_justification@c_text_widget@@2W4e_text_justification@@B"
// public: static enum e_text_drop_shadow_style const c_text_widget::k_default_drop_shadow_style; // "?k_default_drop_shadow_style@c_text_widget@@2W4e_text_drop_shadow_style@@B"
// public: static bool const c_text_widget::k_default_wrap_horizontally; // "?k_default_wrap_horizontally@c_text_widget@@2_NB"
// public: static bool const c_text_widget::k_default_align_bottom_vertically; // "?k_default_align_bottom_vertically@c_text_widget@@2_NB"
// public: static int const c_enum_no_init<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@2HB"
// public: static enum c_text_widget::e_text_case const c_enum_no_init<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@2W4e_text_case@c_text_widget@@B"
// public: static int const c_enum_no_init<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>::k_minimum_value; // "?k_minimum_value@?$c_enum_no_init@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@2HB"
// public: static enum e_font_id const c_enum_no_init<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>::k_maximum_value_plus_one; // "?k_maximum_value_plus_one@?$c_enum_no_init@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@2W4e_font_id@@B"
// public: static int const c_static_wchar_string<2048>::k_buffer_size; // "?k_buffer_size@?$c_static_wchar_string@$0IAA@@@2HB"
// private: static struct s_cui_component_description const c_cui_class_component_description<class c_text_widget>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_text_widget@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_text_widget>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_text_widget@@@@0Vc_cui_object_property_table@@A"

// public: c_text_widget::c_text_widget(void);
// merged_84B9BE00;
// public: virtual c_text_widget::~c_text_widget(void);
// protected: virtual void c_text_widget::do_update(class c_cui_update_context *);
// protected: virtual void c_text_widget::do_render(class c_cui_render_context *) const;
// public: bool c_text_widget::get_wrap_horizontally(void) const;
// public: bool c_text_widget::get_align_bottom_vertically(void) const;
// public: bool c_text_widget::get_allow_markup(void) const;
// public: float c_text_widget::get_pivot_x(void) const;
// public: float c_text_widget::get_pivot_y(void) const;
// public: float c_text_widget::get_angle_z_degrees(void) const;
// public: float c_text_widget::get_scale(void) const;
// bool cui_color_preset_get_named_preset(long, union argb_color *);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_text_widget>::get_instance(void);
// ??$cui_get_scalar_property_by_return_value@Vc_text_widget@@Vc_cui_string_id@@$1?get_text_id@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_text_widget::get_text_id(void) const;
// bool cui_set_scalar_property_by_value<class c_text_widget, class c_cui_string_id, void & (c_text_widget::set_text_id::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_text_widget::set_text_id(class c_cui_string_id);
// bool cui_get_scalar_property_by_return_value<class c_text_widget, wchar_t const *, wchar_t const *& (c_text_widget::get_text::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_text_widget::get_text(void) const;
// bool cui_try_set_scalar_property_by_value<class c_text_widget, wchar_t const *, bool & (c_text_widget::set_text::*)(wchar_t const *)>(void *, long, struct s_cui_property_value const *);
// public: bool c_text_widget::set_text(wchar_t const *);
// bool cui_get_scalar_property_by_return_value<class c_text_widget, char const *, char const *& (c_text_widget::get_ascii_text::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: char const * c_text_widget::get_ascii_text(void) const;
// bool cui_set_scalar_property_by_value<class c_text_widget, char const *, void & (c_text_widget::set_ascii_text::*)(char const *)>(void *, long, struct s_cui_property_value const *);
// public: void c_text_widget::set_ascii_text(char const *);
// ??$cui_get_scalar_property_by_return_value@Vc_text_widget@@V?$c_enum@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_text_case@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver> c_text_widget::get_text_case(void) const;
// public: c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>(enum c_text_widget::e_text_case);
// bool cui_set_scalar_property_by_value<class c_text_widget, class c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>, void & (c_text_widget::set_text_case::*)(class c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_text_widget::set_text_case(class c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>);
// public: enum c_text_widget::e_text_case c_enum_no_init<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>::operator enum c_text_widget::e_text_case(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_text_widget@@V?$c_enum@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@$1?get_font_id@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver> c_text_widget::get_font_id(void) const;
// public: c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>::c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>(enum e_font_id);
// bool cui_set_scalar_property_by_value<class c_text_widget, class c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>, void & (c_text_widget::set_font_id::*)(class c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_text_widget::set_font_id(class c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>);
// public: enum e_font_id c_enum_no_init<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>::operator enum e_font_id(void) const;
// ??$cui_get_scalar_property_by_return_value@Vc_text_widget@@Vc_cui_string_id@@$1?get_color_preset@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_text_widget::get_color_preset(void) const;
// bool cui_set_scalar_property_by_value<class c_text_widget, class c_cui_string_id, void & (c_text_widget::set_color_preset::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_text_widget::set_color_preset(class c_cui_string_id);
// ??$cui_get_scalar_property_by_return_value@Vc_text_widget@@V?$c_enum@W4e_text_justification@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_justification@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver> c_text_widget::get_justification(void) const;
// public: c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>(enum e_text_justification);
// bool cui_set_scalar_property_by_value<class c_text_widget, class c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>, void & (c_text_widget::set_justification::*)(class c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_text_widget::set_justification(class c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>);
// ??$cui_get_scalar_property_by_return_value@Vc_text_widget@@V?$c_enum@W4e_text_drop_shadow_style@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_drop_shadow_style@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver> c_text_widget::get_drop_shadow_style(void) const;
// public: c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>(enum e_text_drop_shadow_style);
// bool cui_set_scalar_property_by_value<class c_text_widget, class c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>, void & (c_text_widget::set_drop_shadow_style::*)(class c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_text_widget::set_drop_shadow_style(class c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_out_pointer<class c_text_widget, union argb_color, void & (c_text_widget::get_drop_shadow_color::*)(union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_text_widget::get_drop_shadow_color(union argb_color *) const;
// bool cui_set_scalar_property_by_const_pointer<class c_text_widget, union argb_color, void & (c_text_widget::set_drop_shadow_color::*)(union argb_color const *)>(void *, long, struct s_cui_property_value const *);
// public: void c_text_widget::set_drop_shadow_color(union argb_color const *);
// bool cui_get_scalar_property_by_return_value<class c_text_widget, bool, bool & (c_text_widget::get_wrap_horizontally::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_text_widget, bool, void & (c_text_widget::set_wrap_horizontally::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_text_widget::set_wrap_horizontally(bool);
// bool cui_get_scalar_property_by_return_value<class c_text_widget, bool, bool & (c_text_widget::get_align_bottom_vertically::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_text_widget, bool, void & (c_text_widget::set_align_bottom_vertically::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_text_widget::set_align_bottom_vertically(bool);
// bool cui_get_scalar_property_by_return_value<class c_text_widget, bool, bool & (c_text_widget::get_allow_markup::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_text_widget, bool, void & (c_text_widget::set_allow_markup::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_text_widget::set_allow_markup(bool);
// bool cui_get_scalar_property_by_return_value<class c_text_widget, float, float & (c_text_widget::get_pivot_x::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_text_widget, float, void & (c_text_widget::set_pivot_x::*)(float)>(void *, long, struct s_cui_property_value const *);
// public: void c_text_widget::set_pivot_x(float);
// bool cui_get_scalar_property_by_return_value<class c_text_widget, float, float & (c_text_widget::get_pivot_y::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_text_widget, float, void & (c_text_widget::set_pivot_y::*)(float)>(void *, long, struct s_cui_property_value const *);
// public: void c_text_widget::set_pivot_y(float);
// bool cui_get_scalar_property_by_return_value<class c_text_widget, float, float & (c_text_widget::get_angle_z_degrees::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_text_widget, float, void & (c_text_widget::set_angle_z_degrees::*)(float)>(void *, long, struct s_cui_property_value const *);
// public: void c_text_widget::set_angle_z_degrees(float);
// bool cui_get_scalar_property_by_return_value<class c_text_widget, float, float & (c_text_widget::get_scale::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_text_widget, float, void & (c_text_widget::set_scale::*)(float)>(void *, long, struct s_cui_property_value const *);
// public: void c_text_widget::set_scale(float);
// public: long c_static_wchar_string<1024>::index_of(wchar_t const *) const;
// public: c_static_wchar_string<2048>::c_static_wchar_string<2048>(void);
// public: wchar_t const * c_static_wchar_string<2048>::get_string(void) const;
// public: wchar_t (& c_static_wchar_string<2048>::get_buffer(void))[2048];
// public: c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>::c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>(void);
// void cui_property_value_set<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver> *);
// void cui_property_value_set<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver> *);
// void cui_property_value_set<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver> *);
// void cui_property_value_set<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver> const &);
// bool cui_property_value_get<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver> *);
// public: long c_static_wchar_string<1024>::next_index_of(wchar_t const *, long) const;
// public: bool c_enum_no_init<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>::in_range(void) const;
// bool cui_property_value_get(struct s_cui_property_value const *, char const **);
// class c_cui_component * cui_component_create<class c_text_widget>(void);
// class c_cui_component * cui_component_clone<class c_text_widget>(class c_cui_component const *);
// public: c_text_widget::c_text_widget(class c_text_widget const &);
// void g_text_case_enum_table::`dynamic atexit destructor'(void);

//public: c_text_widget::c_text_widget(void)
//{
//    mangled_ppc("??0c_text_widget@@QAA@XZ");
//};

//merged_84B9BE00
//{
//    mangled_ppc("merged_84B9BE00");
//};

//public: virtual c_text_widget::~c_text_widget(void)
//{
//    mangled_ppc("??1c_text_widget@@UAA@XZ");
//};

//protected: virtual void c_text_widget::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_text_widget@@MAAXPAVc_cui_update_context@@@Z");
//};

//protected: virtual void c_text_widget::do_render(class c_cui_render_context *) const
//{
//    mangled_ppc("?do_render@c_text_widget@@MBAXPAVc_cui_render_context@@@Z");
//};

//public: bool c_text_widget::get_wrap_horizontally(void) const
//{
//    mangled_ppc("?get_wrap_horizontally@c_text_widget@@QBA_NXZ");
//};

//public: bool c_text_widget::get_align_bottom_vertically(void) const
//{
//    mangled_ppc("?get_align_bottom_vertically@c_text_widget@@QBA_NXZ");
//};

//public: bool c_text_widget::get_allow_markup(void) const
//{
//    mangled_ppc("?get_allow_markup@c_text_widget@@QBA_NXZ");
//};

//public: float c_text_widget::get_pivot_x(void) const
//{
//    mangled_ppc("?get_pivot_x@c_text_widget@@QBAMXZ");
//};

//public: float c_text_widget::get_pivot_y(void) const
//{
//    mangled_ppc("?get_pivot_y@c_text_widget@@QBAMXZ");
//};

//public: float c_text_widget::get_angle_z_degrees(void) const
//{
//    mangled_ppc("?get_angle_z_degrees@c_text_widget@@QBAMXZ");
//};

//public: float c_text_widget::get_scale(void) const
//{
//    mangled_ppc("?get_scale@c_text_widget@@QBAMXZ");
//};

//bool cui_color_preset_get_named_preset(long, union argb_color *)
//{
//    mangled_ppc("?cui_color_preset_get_named_preset@@YA_NJPATargb_color@@@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_text_widget>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_text_widget@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_text_widget@@Vc_cui_string_id@@$1?get_text_id@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_text_widget@@Vc_cui_string_id@@$1?get_text_id@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_text_widget::get_text_id(void) const
//{
//    mangled_ppc("?get_text_id@c_text_widget@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_text_widget, class c_cui_string_id, void & (c_text_widget::set_text_id::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_text_widget@@Vc_cui_string_id@@$1?set_text_id@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::set_text_id(class c_cui_string_id)
//{
//    mangled_ppc("?set_text_id@c_text_widget@@QAAXVc_cui_string_id@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_text_widget, wchar_t const *, wchar_t const *& (c_text_widget::get_text::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_text_widget@@PB_W$1?get_text@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_text_widget::get_text(void) const
//{
//    mangled_ppc("?get_text@c_text_widget@@QBAPB_WXZ");
//};

//bool cui_try_set_scalar_property_by_value<class c_text_widget, wchar_t const *, bool & (c_text_widget::set_text::*)(wchar_t const *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_try_set_scalar_property_by_value@Vc_text_widget@@PB_W$1?set_text@1@QAA_NPB_W@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: bool c_text_widget::set_text(wchar_t const *)
//{
//    mangled_ppc("?set_text@c_text_widget@@QAA_NPB_W@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_text_widget, char const *, char const *& (c_text_widget::get_ascii_text::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_text_widget@@PBD$1?get_ascii_text@1@QBAPBDXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: char const * c_text_widget::get_ascii_text(void) const
//{
//    mangled_ppc("?get_ascii_text@c_text_widget@@QBAPBDXZ");
//};

//bool cui_set_scalar_property_by_value<class c_text_widget, char const *, void & (c_text_widget::set_ascii_text::*)(char const *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_text_widget@@PBD$1?set_ascii_text@1@QAAXPBD@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::set_ascii_text(char const *)
//{
//    mangled_ppc("?set_ascii_text@c_text_widget@@QAAXPBD@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_text_widget@@V?$c_enum@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_text_case@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_text_widget@@V?$c_enum@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_text_case@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver> c_text_widget::get_text_case(void) const
//{
//    mangled_ppc("?get_text_case@c_text_widget@@QBA?AV?$c_enum@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>(enum c_text_widget::e_text_case)
//{
//    mangled_ppc("??0?$c_enum@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_text_case@c_text_widget@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_text_widget, class c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>, void & (c_text_widget::set_text_case::*)(class c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_text_widget@@V?$c_enum@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@$1?set_text_case@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::set_text_case(class c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_text_case@c_text_widget@@QAAXV?$c_enum@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum c_text_widget::e_text_case c_enum_no_init<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>::operator enum c_text_widget::e_text_case(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_text_case@c_text_widget@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_text_widget@@V?$c_enum@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@$1?get_font_id@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_text_widget@@V?$c_enum@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@$1?get_font_id@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver> c_text_widget::get_font_id(void) const
//{
//    mangled_ppc("?get_font_id@c_text_widget@@QBA?AV?$c_enum@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>::c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>(enum e_font_id)
//{
//    mangled_ppc("??0?$c_enum@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@QAA@W4e_font_id@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_text_widget, class c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>, void & (c_text_widget::set_font_id::*)(class c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_text_widget@@V?$c_enum@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@$1?set_font_id@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::set_font_id(class c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_font_id@c_text_widget@@QAAXV?$c_enum@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@@Z");
//};

//public: enum e_font_id c_enum_no_init<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>::operator enum e_font_id(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@QBA?AW4e_font_id@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_text_widget@@Vc_cui_string_id@@$1?get_color_preset@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_text_widget@@Vc_cui_string_id@@$1?get_color_preset@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_text_widget::get_color_preset(void) const
//{
//    mangled_ppc("?get_color_preset@c_text_widget@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_text_widget, class c_cui_string_id, void & (c_text_widget::set_color_preset::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_text_widget@@Vc_cui_string_id@@$1?set_color_preset@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::set_color_preset(class c_cui_string_id)
//{
//    mangled_ppc("?set_color_preset@c_text_widget@@QAAXVc_cui_string_id@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_text_widget@@V?$c_enum@W4e_text_justification@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_justification@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_text_widget@@V?$c_enum@W4e_text_justification@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_justification@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver> c_text_widget::get_justification(void) const
//{
//    mangled_ppc("?get_justification@c_text_widget@@QBA?AV?$c_enum@W4e_text_justification@@D$0A@$02Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>(enum e_text_justification)
//{
//    mangled_ppc("??0?$c_enum@W4e_text_justification@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_text_justification@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_text_widget, class c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>, void & (c_text_widget::set_justification::*)(class c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_text_widget@@V?$c_enum@W4e_text_justification@@D$0A@$02Us_default_enum_string_resolver@@@@$1?set_justification@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::set_justification(class c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_justification@c_text_widget@@QAAXV?$c_enum@W4e_text_justification@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_text_widget@@V?$c_enum@W4e_text_drop_shadow_style@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_drop_shadow_style@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_text_widget@@V?$c_enum@W4e_text_drop_shadow_style@@D$0A@$02Us_default_enum_string_resolver@@@@$1?get_drop_shadow_style@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver> c_text_widget::get_drop_shadow_style(void) const
//{
//    mangled_ppc("?get_drop_shadow_style@c_text_widget@@QBA?AV?$c_enum@W4e_text_drop_shadow_style@@D$0A@$02Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>(enum e_text_drop_shadow_style)
//{
//    mangled_ppc("??0?$c_enum@W4e_text_drop_shadow_style@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@W4e_text_drop_shadow_style@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_text_widget, class c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>, void & (c_text_widget::set_drop_shadow_style::*)(class c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_text_widget@@V?$c_enum@W4e_text_drop_shadow_style@@D$0A@$02Us_default_enum_string_resolver@@@@$1?set_drop_shadow_style@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::set_drop_shadow_style(class c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_drop_shadow_style@c_text_widget@@QAAXV?$c_enum@W4e_text_drop_shadow_style@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_out_pointer<class c_text_widget, union argb_color, void & (c_text_widget::get_drop_shadow_color::*)(union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_out_pointer@Vc_text_widget@@Targb_color@@$1?get_drop_shadow_color@1@QBAXPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::get_drop_shadow_color(union argb_color *) const
//{
//    mangled_ppc("?get_drop_shadow_color@c_text_widget@@QBAXPATargb_color@@@Z");
//};

//bool cui_set_scalar_property_by_const_pointer<class c_text_widget, union argb_color, void & (c_text_widget::set_drop_shadow_color::*)(union argb_color const *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_const_pointer@Vc_text_widget@@Targb_color@@$1?set_drop_shadow_color@1@QAAXPBT2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::set_drop_shadow_color(union argb_color const *)
//{
//    mangled_ppc("?set_drop_shadow_color@c_text_widget@@QAAXPBTargb_color@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_text_widget, bool, bool & (c_text_widget::get_wrap_horizontally::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_text_widget@@_N$1?get_wrap_horizontally@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_text_widget, bool, void & (c_text_widget::set_wrap_horizontally::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_text_widget@@_N$1?set_wrap_horizontally@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::set_wrap_horizontally(bool)
//{
//    mangled_ppc("?set_wrap_horizontally@c_text_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_text_widget, bool, bool & (c_text_widget::get_align_bottom_vertically::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_text_widget@@_N$1?get_align_bottom_vertically@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_text_widget, bool, void & (c_text_widget::set_align_bottom_vertically::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_text_widget@@_N$1?set_align_bottom_vertically@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::set_align_bottom_vertically(bool)
//{
//    mangled_ppc("?set_align_bottom_vertically@c_text_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_text_widget, bool, bool & (c_text_widget::get_allow_markup::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_text_widget@@_N$1?get_allow_markup@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_text_widget, bool, void & (c_text_widget::set_allow_markup::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_text_widget@@_N$1?set_allow_markup@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::set_allow_markup(bool)
//{
//    mangled_ppc("?set_allow_markup@c_text_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_text_widget, float, float & (c_text_widget::get_pivot_x::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_text_widget@@M$1?get_pivot_x@1@QBAMXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_text_widget, float, void & (c_text_widget::set_pivot_x::*)(float)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_text_widget@@M$1?set_pivot_x@1@QAAXM@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::set_pivot_x(float)
//{
//    mangled_ppc("?set_pivot_x@c_text_widget@@QAAXM@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_text_widget, float, float & (c_text_widget::get_pivot_y::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_text_widget@@M$1?get_pivot_y@1@QBAMXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_text_widget, float, void & (c_text_widget::set_pivot_y::*)(float)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_text_widget@@M$1?set_pivot_y@1@QAAXM@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::set_pivot_y(float)
//{
//    mangled_ppc("?set_pivot_y@c_text_widget@@QAAXM@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_text_widget, float, float & (c_text_widget::get_angle_z_degrees::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_text_widget@@M$1?get_angle_z_degrees@1@QBAMXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_text_widget, float, void & (c_text_widget::set_angle_z_degrees::*)(float)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_text_widget@@M$1?set_angle_z_degrees@1@QAAXM@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::set_angle_z_degrees(float)
//{
//    mangled_ppc("?set_angle_z_degrees@c_text_widget@@QAAXM@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_text_widget, float, float & (c_text_widget::get_scale::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_text_widget@@M$1?get_scale@1@QBAMXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_text_widget, float, void & (c_text_widget::set_scale::*)(float)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_text_widget@@M$1?set_scale@1@QAAXM@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_text_widget::set_scale(float)
//{
//    mangled_ppc("?set_scale@c_text_widget@@QAAXM@Z");
//};

//public: long c_static_wchar_string<1024>::index_of(wchar_t const *) const
//{
//    mangled_ppc("?index_of@?$c_static_wchar_string@$0EAA@@@QBAJPB_W@Z");
//};

//public: c_static_wchar_string<2048>::c_static_wchar_string<2048>(void)
//{
//    mangled_ppc("??0?$c_static_wchar_string@$0IAA@@@QAA@XZ");
//};

//public: wchar_t const * c_static_wchar_string<2048>::get_string(void) const
//{
//    mangled_ppc("?get_string@?$c_static_wchar_string@$0IAA@@@QBAPB_WXZ");
//};

//public: wchar_t (& c_static_wchar_string<2048>::get_buffer(void))[2048]
//{
//    mangled_ppc("?get_buffer@?$c_static_wchar_string@$0IAA@@@QAAAAY0IAA@_WXZ");
//};

//public: c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>::c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_text_justification@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_text_drop_shadow_style@@D$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//void cui_property_value_set<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_text_justification@@D$0A@$02Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_text_justification@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_text_justification@@D$0A@$02Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_text_justification@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_text_drop_shadow_style@@D$0A@$02Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_text_drop_shadow_style@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_text_drop_shadow_style@@D$0A@$02Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_text_drop_shadow_style@@D$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: long c_static_wchar_string<1024>::next_index_of(wchar_t const *, long) const
//{
//    mangled_ppc("?next_index_of@?$c_static_wchar_string@$0EAA@@@QBAJPB_WJ@Z");
//};

//public: bool c_enum_no_init<enum e_text_justification, char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_text_justification@@D$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_text_drop_shadow_style, char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_text_drop_shadow_style@@D$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum c_text_widget::e_text_case, char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_text_case@c_text_widget@@D$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_font_id, char, -2, 11, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_font_id@@D$0?1$0L@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//bool cui_property_value_get(struct s_cui_property_value const *, char const **)
//{
//    mangled_ppc("?cui_property_value_get@@YA_NPBUs_cui_property_value@@PAPBD@Z");
//};

//class c_cui_component * cui_component_create<class c_text_widget>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_text_widget@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_text_widget>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_text_widget@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_text_widget::c_text_widget(class c_text_widget const &)
//{
//    mangled_ppc("??0c_text_widget@@QAA@ABV0@@Z");
//};

//void g_text_case_enum_table::`dynamic atexit destructor'(void)
//{
//    mangled_ppc("??__Fg_text_case_enum_table@@YAXXZ");
//};

