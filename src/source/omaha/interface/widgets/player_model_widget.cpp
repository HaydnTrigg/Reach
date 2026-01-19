/* ---------- headers */

#include "omaha\interface\widgets\player_model_widget.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_player_model_widget>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_player_model_widget@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_player_model_widget>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_player_model_widget@@@@0Vc_cui_object_property_table@@A"

// public: c_player_model_widget::c_player_model_widget(void);
// merged_84B427A8;
// public: virtual c_player_model_widget::~c_player_model_widget(void);
// public: void c_player_model_widget::set_alpha_matte_enabled(bool);
// public: bool c_player_model_widget::is_alpha_matte_enabled(void) const;
// protected: virtual void c_player_model_widget::do_update(class c_cui_update_context *);
// protected: virtual void c_player_model_widget::do_render(class c_cui_render_context *) const;
// void set_model_colors(long, union rgb_color const *, union rgb_color const *, union rgb_color const *, union rgb_color const *);
// void set_object_base_change_color_by_index(long, enum e_object_change_color_index, union rgb_color const *);
// void set_model_colors(long, struct s_player_appearance const *, enum e_multiplayer_team);
// public: static void c_player_model_widget::calculate_camera_orientation(struct s_cui_player_model_camera_settings_definition const *, struct s_cui_player_model_control_settings_definition const *, float, float, long, struct s_player_model_camera_state *);
// protected: virtual bool c_player_model_widget::do_handle_input_event(class c_cui_update_context *, class c_cui_input_event *);
// protected: void c_player_model_widget::change_yaw(struct s_cui_player_model_control_settings_definition const *, float, float, float);
// protected: void c_player_model_widget::change_zoom(struct s_cui_player_model_control_settings_definition const *, float, float, float);
// protected: void c_player_model_widget::get_settings(struct s_cui_player_model_camera_settings_definition const **, struct s_cui_player_model_control_settings_definition const **) const;
// public: static void c_player_model_widget::get_settings(struct s_cui_player_model_camera_settings_definition const **, struct s_cui_player_model_control_settings_definition const **, long, long, long, long, long);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_player_model_widget>::get_instance(void);
// ??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_player_model_widget::get_driving_controller_index(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_widget, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_player_model_widget::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_widget::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_player_model_widget, struct s_player_configuration const *, struct s_player_configuration const *& (c_player_model_widget::get_player_configuration::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: struct s_player_configuration const * c_player_model_widget::get_player_configuration(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_widget, struct s_player_configuration const *, void & (c_player_model_widget::set_player_configuration::*)(struct s_player_configuration const *)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_widget::set_player_configuration(struct s_player_configuration const *);
// ??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?get_spartan_biped_name_override@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_player_model_widget::get_spartan_biped_name_override(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_widget, class c_cui_string_id, void & (c_player_model_widget::set_spartan_biped_name_override::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_widget::set_spartan_biped_name_override(class c_cui_string_id);
// ??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?get_elite_biped_name_override@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_player_model_widget::get_elite_biped_name_override(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_widget, class c_cui_string_id, void & (c_player_model_widget::set_elite_biped_name_override::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_widget::set_elite_biped_name_override(class c_cui_string_id);
// ??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?get_initial_view_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_player_model_widget::get_initial_view_name(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_widget, class c_cui_string_id, void & (c_player_model_widget::set_initial_view_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_widget::set_initial_view_name(class c_cui_string_id);
// ??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?get_default_view_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_cui_string_id c_player_model_widget::get_default_view_name(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_widget, class c_cui_string_id, void & (c_player_model_widget::set_default_view_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_widget::set_default_view_name(class c_cui_string_id);
// ??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@$1?get_current_purchase_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver> c_player_model_widget::get_current_purchase_category(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_widget, class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>, void & (c_player_model_widget::set_current_purchase_category::*)(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_widget::set_current_purchase_category(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_player_model_widget, long, long & (c_player_model_widget::get_current_base::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_player_model_widget::get_current_base(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_widget, long, void & (c_player_model_widget::set_current_base::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_widget::set_current_base(long);
// bool cui_get_scalar_property_by_return_value<class c_player_model_widget, long, long & (c_player_model_widget::get_current_piece::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: long c_player_model_widget::get_current_piece(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_widget, long, void & (c_player_model_widget::set_current_piece::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_widget::set_current_piece(long);
// bool cui_get_scalar_property_by_return_value<class c_player_model_widget, bool, bool & (c_player_model_widget::is_alpha_matte_enabled::*)(void)>(void const *, long, struct s_cui_property_value *);
// bool cui_set_scalar_property_by_value<class c_player_model_widget, bool, void & (c_player_model_widget::set_alpha_matte_enabled::*)(bool)>(void *, long, struct s_cui_property_value const *);
// bool cui_get_scalar_property_by_return_value<class c_player_model_widget, bool, bool & (c_player_model_widget::get_use_player_tint_colors::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_player_model_widget::get_use_player_tint_colors(void) const;
// bool cui_set_scalar_property_by_value<class c_player_model_widget, bool, void & (c_player_model_widget::set_use_player_tint_colors::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_widget::set_use_player_tint_colors(bool);
// bool cui_get_scalar_property_by_out_pointer<class c_player_model_widget, union argb_color, void & (c_player_model_widget::get_player_primary_model_tint_color::*)(union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_player_model_widget::get_player_primary_model_tint_color(union argb_color *) const;
// bool cui_set_scalar_property_by_value<class c_player_model_widget, union argb_color, void & (c_player_model_widget::set_player_primary_model_tint_color::*)(union argb_color)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_widget::set_player_primary_model_tint_color(union argb_color);
// bool cui_get_scalar_property_by_out_pointer<class c_player_model_widget, union argb_color, void & (c_player_model_widget::get_player_secondary_model_tint_color::*)(union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_player_model_widget::get_player_secondary_model_tint_color(union argb_color *) const;
// bool cui_set_scalar_property_by_value<class c_player_model_widget, union argb_color, void & (c_player_model_widget::set_player_secondary_model_tint_color::*)(union argb_color)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_widget::set_player_secondary_model_tint_color(union argb_color);
// bool cui_get_scalar_property_by_out_pointer<class c_player_model_widget, union argb_color, void & (c_player_model_widget::get_player_tertiary_model_tint_color::*)(union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_player_model_widget::get_player_tertiary_model_tint_color(union argb_color *) const;
// bool cui_set_scalar_property_by_value<class c_player_model_widget, union argb_color, void & (c_player_model_widget::set_player_tertiary_model_tint_color::*)(union argb_color)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_widget::set_player_tertiary_model_tint_color(union argb_color);
// bool cui_get_scalar_property_by_out_pointer<class c_player_model_widget, union argb_color, void & (c_player_model_widget::get_player_quaternary_model_tint_color::*)(union argb_color *)>(void const *, long, struct s_cui_property_value *);
// public: void c_player_model_widget::get_player_quaternary_model_tint_color(union argb_color *) const;
// bool cui_set_scalar_property_by_value<class c_player_model_widget, union argb_color, void & (c_player_model_widget::set_player_quaternary_model_tint_color::*)(union argb_color)>(void *, long, struct s_cui_property_value const *);
// public: void c_player_model_widget::set_player_quaternary_model_tint_color(union argb_color);
// class c_cui_component * cui_component_create<class c_player_model_widget>(void);
// class c_cui_component * cui_component_clone<class c_player_model_widget>(class c_cui_component const *);
// public: c_player_model_widget::c_player_model_widget(class c_player_model_widget const &);

//public: c_player_model_widget::c_player_model_widget(void)
//{
//    mangled_ppc("??0c_player_model_widget@@QAA@XZ");
//};

//merged_84B427A8
//{
//    mangled_ppc("merged_84B427A8");
//};

//public: virtual c_player_model_widget::~c_player_model_widget(void)
//{
//    mangled_ppc("??1c_player_model_widget@@UAA@XZ");
//};

//public: void c_player_model_widget::set_alpha_matte_enabled(bool)
//{
//    mangled_ppc("?set_alpha_matte_enabled@c_player_model_widget@@QAAX_N@Z");
//};

//public: bool c_player_model_widget::is_alpha_matte_enabled(void) const
//{
//    mangled_ppc("?is_alpha_matte_enabled@c_player_model_widget@@QBA_NXZ");
//};

//protected: virtual void c_player_model_widget::do_update(class c_cui_update_context *)
//{
//    mangled_ppc("?do_update@c_player_model_widget@@MAAXPAVc_cui_update_context@@@Z");
//};

//protected: virtual void c_player_model_widget::do_render(class c_cui_render_context *) const
//{
//    mangled_ppc("?do_render@c_player_model_widget@@MBAXPAVc_cui_render_context@@@Z");
//};

//void set_model_colors(long, union rgb_color const *, union rgb_color const *, union rgb_color const *, union rgb_color const *)
//{
//    mangled_ppc("?set_model_colors@@YAXJPBTrgb_color@@000@Z");
//};

//void set_object_base_change_color_by_index(long, enum e_object_change_color_index, union rgb_color const *)
//{
//    mangled_ppc("?set_object_base_change_color_by_index@@YAXJW4e_object_change_color_index@@PBTrgb_color@@@Z");
//};

//void set_model_colors(long, struct s_player_appearance const *, enum e_multiplayer_team)
//{
//    mangled_ppc("?set_model_colors@@YAXJPBUs_player_appearance@@W4e_multiplayer_team@@@Z");
//};

//public: static void c_player_model_widget::calculate_camera_orientation(struct s_cui_player_model_camera_settings_definition const *, struct s_cui_player_model_control_settings_definition const *, float, float, long, struct s_player_model_camera_state *)
//{
//    mangled_ppc("?calculate_camera_orientation@c_player_model_widget@@SAXPBUs_cui_player_model_camera_settings_definition@@PBUs_cui_player_model_control_settings_definition@@MMJPAUs_player_model_camera_state@@@Z");
//};

//protected: virtual bool c_player_model_widget::do_handle_input_event(class c_cui_update_context *, class c_cui_input_event *)
//{
//    mangled_ppc("?do_handle_input_event@c_player_model_widget@@MAA_NPAVc_cui_update_context@@PAVc_cui_input_event@@@Z");
//};

//protected: void c_player_model_widget::change_yaw(struct s_cui_player_model_control_settings_definition const *, float, float, float)
//{
//    mangled_ppc("?change_yaw@c_player_model_widget@@IAAXPBUs_cui_player_model_control_settings_definition@@MMM@Z");
//};

//protected: void c_player_model_widget::change_zoom(struct s_cui_player_model_control_settings_definition const *, float, float, float)
//{
//    mangled_ppc("?change_zoom@c_player_model_widget@@IAAXPBUs_cui_player_model_control_settings_definition@@MMM@Z");
//};

//protected: void c_player_model_widget::get_settings(struct s_cui_player_model_camera_settings_definition const **, struct s_cui_player_model_control_settings_definition const **) const
//{
//    mangled_ppc("?get_settings@c_player_model_widget@@IBAXPAPBUs_cui_player_model_camera_settings_definition@@PAPBUs_cui_player_model_control_settings_definition@@@Z");
//};

//public: static void c_player_model_widget::get_settings(struct s_cui_player_model_camera_settings_definition const **, struct s_cui_player_model_control_settings_definition const **, long, long, long, long, long)
//{
//    mangled_ppc("?get_settings@c_player_model_widget@@SAXPAPBUs_cui_player_model_camera_settings_definition@@PAPBUs_cui_player_model_control_settings_definition@@JJJJJ@Z");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_player_model_widget>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_player_model_widget@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?get_driving_controller_index@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver> c_player_model_widget::get_driving_controller_index(void) const
//{
//    mangled_ppc("?get_driving_controller_index@c_player_model_widget@@QBA?AV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_widget, class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>, void & (c_player_model_widget::set_driving_controller_index::*)(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_widget@@V?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@$1?set_driving_controller_index@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::set_driving_controller_index(class c_enum<enum e_controller_index, short, -1, 255, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_driving_controller_index@c_player_model_widget@@QAAXV?$c_enum@W4e_controller_index@@F$0?0$0PP@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_widget, struct s_player_configuration const *, struct s_player_configuration const *& (c_player_model_widget::get_player_configuration::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@PBUs_player_configuration@@$1?get_player_configuration@1@QBAPBU2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: struct s_player_configuration const * c_player_model_widget::get_player_configuration(void) const
//{
//    mangled_ppc("?get_player_configuration@c_player_model_widget@@QBAPBUs_player_configuration@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_widget, struct s_player_configuration const *, void & (c_player_model_widget::set_player_configuration::*)(struct s_player_configuration const *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_widget@@PBUs_player_configuration@@$1?set_player_configuration@1@QAAXPBU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::set_player_configuration(struct s_player_configuration const *)
//{
//    mangled_ppc("?set_player_configuration@c_player_model_widget@@QAAXPBUs_player_configuration@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?get_spartan_biped_name_override@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?get_spartan_biped_name_override@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_player_model_widget::get_spartan_biped_name_override(void) const
//{
//    mangled_ppc("?get_spartan_biped_name_override@c_player_model_widget@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_widget, class c_cui_string_id, void & (c_player_model_widget::set_spartan_biped_name_override::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?set_spartan_biped_name_override@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::set_spartan_biped_name_override(class c_cui_string_id)
//{
//    mangled_ppc("?set_spartan_biped_name_override@c_player_model_widget@@QAAXVc_cui_string_id@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?get_elite_biped_name_override@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?get_elite_biped_name_override@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_player_model_widget::get_elite_biped_name_override(void) const
//{
//    mangled_ppc("?get_elite_biped_name_override@c_player_model_widget@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_widget, class c_cui_string_id, void & (c_player_model_widget::set_elite_biped_name_override::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?set_elite_biped_name_override@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::set_elite_biped_name_override(class c_cui_string_id)
//{
//    mangled_ppc("?set_elite_biped_name_override@c_player_model_widget@@QAAXVc_cui_string_id@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?get_initial_view_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?get_initial_view_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_player_model_widget::get_initial_view_name(void) const
//{
//    mangled_ppc("?get_initial_view_name@c_player_model_widget@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_widget, class c_cui_string_id, void & (c_player_model_widget::set_initial_view_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?set_initial_view_name@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::set_initial_view_name(class c_cui_string_id)
//{
//    mangled_ppc("?set_initial_view_name@c_player_model_widget@@QAAXVc_cui_string_id@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?get_default_view_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?get_default_view_name@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_cui_string_id c_player_model_widget::get_default_view_name(void) const
//{
//    mangled_ppc("?get_default_view_name@c_player_model_widget@@QBA?AVc_cui_string_id@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_widget, class c_cui_string_id, void & (c_player_model_widget::set_default_view_name::*)(class c_cui_string_id)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_widget@@Vc_cui_string_id@@$1?set_default_view_name@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::set_default_view_name(class c_cui_string_id)
//{
//    mangled_ppc("?set_default_view_name@c_player_model_widget@@QAAXVc_cui_string_id@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@$1?get_current_purchase_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@$1?get_current_purchase_category@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver> c_player_model_widget::get_current_purchase_category(void) const
//{
//    mangled_ppc("?get_current_purchase_category@c_player_model_widget@@QBA?AV?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@XZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_widget, class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>, void & (c_player_model_widget::set_current_purchase_category::*)(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_widget@@V?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@$1?set_current_purchase_category@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::set_current_purchase_category(class c_enum<enum e_purchase_category, char, -1, 13, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_current_purchase_category@c_player_model_widget@@QAAXV?$c_enum@W4e_purchase_category@@D$0?0$0N@Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_widget, long, long & (c_player_model_widget::get_current_base::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@J$1?get_current_base@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_player_model_widget::get_current_base(void) const
//{
//    mangled_ppc("?get_current_base@c_player_model_widget@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_widget, long, void & (c_player_model_widget::set_current_base::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_widget@@J$1?set_current_base@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::set_current_base(long)
//{
//    mangled_ppc("?set_current_base@c_player_model_widget@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_widget, long, long & (c_player_model_widget::get_current_piece::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@J$1?get_current_piece@1@QBAJXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: long c_player_model_widget::get_current_piece(void) const
//{
//    mangled_ppc("?get_current_piece@c_player_model_widget@@QBAJXZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_widget, long, void & (c_player_model_widget::set_current_piece::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_widget@@J$1?set_current_piece@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::set_current_piece(long)
//{
//    mangled_ppc("?set_current_piece@c_player_model_widget@@QAAXJ@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_widget, bool, bool & (c_player_model_widget::is_alpha_matte_enabled::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@_N$1?is_alpha_matte_enabled@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_widget, bool, void & (c_player_model_widget::set_alpha_matte_enabled::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_widget@@_N$1?set_alpha_matte_enabled@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_player_model_widget, bool, bool & (c_player_model_widget::get_use_player_tint_colors::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_player_model_widget@@_N$1?get_use_player_tint_colors@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_player_model_widget::get_use_player_tint_colors(void) const
//{
//    mangled_ppc("?get_use_player_tint_colors@c_player_model_widget@@QBA_NXZ");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_widget, bool, void & (c_player_model_widget::set_use_player_tint_colors::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_widget@@_N$1?set_use_player_tint_colors@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::set_use_player_tint_colors(bool)
//{
//    mangled_ppc("?set_use_player_tint_colors@c_player_model_widget@@QAAX_N@Z");
//};

//bool cui_get_scalar_property_by_out_pointer<class c_player_model_widget, union argb_color, void & (c_player_model_widget::get_player_primary_model_tint_color::*)(union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_out_pointer@Vc_player_model_widget@@Targb_color@@$1?get_player_primary_model_tint_color@1@QBAXPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::get_player_primary_model_tint_color(union argb_color *) const
//{
//    mangled_ppc("?get_player_primary_model_tint_color@c_player_model_widget@@QBAXPATargb_color@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_widget, union argb_color, void & (c_player_model_widget::set_player_primary_model_tint_color::*)(union argb_color)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_widget@@Targb_color@@$1?set_player_primary_model_tint_color@1@QAAXT2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::set_player_primary_model_tint_color(union argb_color)
//{
//    mangled_ppc("?set_player_primary_model_tint_color@c_player_model_widget@@QAAXTargb_color@@@Z");
//};

//bool cui_get_scalar_property_by_out_pointer<class c_player_model_widget, union argb_color, void & (c_player_model_widget::get_player_secondary_model_tint_color::*)(union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_out_pointer@Vc_player_model_widget@@Targb_color@@$1?get_player_secondary_model_tint_color@1@QBAXPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::get_player_secondary_model_tint_color(union argb_color *) const
//{
//    mangled_ppc("?get_player_secondary_model_tint_color@c_player_model_widget@@QBAXPATargb_color@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_widget, union argb_color, void & (c_player_model_widget::set_player_secondary_model_tint_color::*)(union argb_color)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_widget@@Targb_color@@$1?set_player_secondary_model_tint_color@1@QAAXT2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::set_player_secondary_model_tint_color(union argb_color)
//{
//    mangled_ppc("?set_player_secondary_model_tint_color@c_player_model_widget@@QAAXTargb_color@@@Z");
//};

//bool cui_get_scalar_property_by_out_pointer<class c_player_model_widget, union argb_color, void & (c_player_model_widget::get_player_tertiary_model_tint_color::*)(union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_out_pointer@Vc_player_model_widget@@Targb_color@@$1?get_player_tertiary_model_tint_color@1@QBAXPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::get_player_tertiary_model_tint_color(union argb_color *) const
//{
//    mangled_ppc("?get_player_tertiary_model_tint_color@c_player_model_widget@@QBAXPATargb_color@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_widget, union argb_color, void & (c_player_model_widget::set_player_tertiary_model_tint_color::*)(union argb_color)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_widget@@Targb_color@@$1?set_player_tertiary_model_tint_color@1@QAAXT2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::set_player_tertiary_model_tint_color(union argb_color)
//{
//    mangled_ppc("?set_player_tertiary_model_tint_color@c_player_model_widget@@QAAXTargb_color@@@Z");
//};

//bool cui_get_scalar_property_by_out_pointer<class c_player_model_widget, union argb_color, void & (c_player_model_widget::get_player_quaternary_model_tint_color::*)(union argb_color *)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_out_pointer@Vc_player_model_widget@@Targb_color@@$1?get_player_quaternary_model_tint_color@1@QBAXPAT2@@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::get_player_quaternary_model_tint_color(union argb_color *) const
//{
//    mangled_ppc("?get_player_quaternary_model_tint_color@c_player_model_widget@@QBAXPATargb_color@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_player_model_widget, union argb_color, void & (c_player_model_widget::set_player_quaternary_model_tint_color::*)(union argb_color)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_player_model_widget@@Targb_color@@$1?set_player_quaternary_model_tint_color@1@QAAXT2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_player_model_widget::set_player_quaternary_model_tint_color(union argb_color)
//{
//    mangled_ppc("?set_player_quaternary_model_tint_color@c_player_model_widget@@QAAXTargb_color@@@Z");
//};

//class c_cui_component * cui_component_create<class c_player_model_widget>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_player_model_widget@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_player_model_widget>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_player_model_widget@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//public: c_player_model_widget::c_player_model_widget(class c_player_model_widget const &)
//{
//    mangled_ppc("??0c_player_model_widget@@QAA@ABV0@@Z");
//};

