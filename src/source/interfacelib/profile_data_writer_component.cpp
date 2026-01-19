/* ---------- headers */

#include "interfacelib\profile_data_writer_component.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// private: static struct s_cui_component_description const c_cui_class_component_description<class c_profile_data_writer_component>::g_instance; // "?g_instance@?$c_cui_class_component_description@Vc_profile_data_writer_component@@@@0Us_cui_component_description@@B"
// private: static class c_cui_object_property_table c_cui_class_property_table<class c_profile_data_writer_component>::g_instance; // "?g_instance@?$c_cui_class_property_table@Vc_profile_data_writer_component@@@@0Vc_cui_object_property_table@@A"

// public: c_profile_data_writer_component::c_profile_data_writer_component(void);
// merged_84B56530;
// public: virtual c_profile_data_writer_component::~c_profile_data_writer_component(void);
// public: static class c_cui_object_property_table * c_cui_class_property_table<class c_profile_data_writer_component>::get_instance(void);
// class c_cui_component * cui_component_create<class c_profile_data_writer_component>(void);
// class c_cui_component * cui_component_clone<class c_profile_data_writer_component>(class c_cui_component const *);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_controller_look_inverted::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_controller_look_inverted(bool);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_controller_flight_stick_aircraft_controls::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_controller_flight_stick_aircraft_controls(bool);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_look_sensitivity, unsigned char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_controller_look_sensitivity::*)(class c_enum<enum e_look_sensitivity, unsigned char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_controller_look_sensitivity(class c_enum<enum e_look_sensitivity, unsigned char, 0, 10, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_button_presets, unsigned char, 0, 7, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_controller_button_preset::*)(class c_enum<enum e_button_presets, unsigned char, 0, 7, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_controller_button_preset(class c_enum<enum e_button_presets, unsigned char, 0, 7, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_joystick_presets, unsigned char, 0, 4, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_controller_joystick_preset::*)(class c_enum<enum e_joystick_presets, unsigned char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_controller_joystick_preset(class c_enum<enum e_joystick_presets, unsigned char, 0, 4, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_controller_auto_center_look::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_controller_auto_center_look(bool);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_controller_crouch_lock_enabled::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_controller_crouch_lock_enabled(bool);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_controller_southpaw::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_controller_southpaw(bool);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_controller_clench_protection::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_controller_clench_protection(bool);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_camera_panning::*)(class c_enum<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_camera_panning(class c_enum<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_camera_flying_movement::*)(class c_enum<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_camera_flying_movement(class c_enum<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_camera_look_sensitivity::*)(class c_enum<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_camera_look_sensitivity(class c_enum<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_camera_flying_thrust::*)(class c_enum<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_camera_flying_thrust(class c_enum<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// bool cui_get_scalar_property_by_return_value<class c_profile_data_component_base, wchar_t const *, wchar_t const *& (c_profile_data_component_base::get_service_tag_desired::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: wchar_t const * c_profile_data_component_base::get_service_tag_desired(void) const;
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, wchar_t const *, void & (c_profile_data_component_base::set_service_tag_desired::*)(wchar_t const *)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_service_tag_desired(wchar_t const *);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, long, void & (c_profile_data_component_base::set_emblem_foreground_index::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_emblem_foreground_index(long);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, long, void & (c_profile_data_component_base::set_emblem_background_index::*)(long)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_emblem_background_index(long);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_flags_no_init<enum e_emblem_info_flags, unsigned char, 3, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_emblem_flags::*)(class c_flags_no_init<enum e_emblem_info_flags, unsigned char, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_emblem_flags(class c_flags_no_init<enum e_emblem_info_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, union argb_color, void & (c_profile_data_component_base::set_emblem_primary_color::*)(union argb_color)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_emblem_primary_color(union argb_color);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, union argb_color, void & (c_profile_data_component_base::set_emblem_secondary_color::*)(union argb_color)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_emblem_secondary_color(union argb_color);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, union argb_color, void & (c_profile_data_component_base::set_emblem_background_color::*)(union argb_color)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_emblem_background_color(union argb_color);
// bool cui_set_scalar_property_by_const_reference<class c_profile_data_component_base, struct s_emblem_info, void & (c_profile_data_component_base::set_emblem_info::*)(struct s_emblem_info const &)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_emblem_info(struct s_emblem_info const &);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, struct s_player_configuration const *, void & (c_profile_data_component_base::set_player_configuration::*)(struct s_player_configuration const *)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_player_configuration(struct s_player_configuration const *);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_female_voice_enabled::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_female_voice_enabled(bool);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_voice_mute_setting::*)(class c_enum<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_voice_mute_setting(class c_enum<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_voice_output_setting::*)(class c_enum<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_voice_output_setting(class c_enum<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_voice_matchmaking_setting::*)(class c_enum<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_voice_matchmaking_setting(class c_enum<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_guide_voice_muted::*)(bool)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_guide_voice_muted(bool);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_subtitle_setting::*)(class c_enum<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_subtitle_setting(class c_enum<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_display_brightness::*)(class c_enum<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_display_brightness(class c_enum<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver>);
// bool cui_set_array_property_element_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, long & (c_profile_data_component_base::get_custom_button_count::*)(void), void & (c_profile_data_component_base::set_custom_button::*)(long, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_custom_button(long, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_jump::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_custom_button_action_jump(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_switch_grenade::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_custom_button_action_switch_grenade(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_switch_weapon::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_custom_button_action_switch_weapon(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_context_primary::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_custom_button_action_context_primary(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_melee_attack::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_custom_button_action_melee_attack(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_equipment::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_custom_button_action_equipment(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_throw_grenade::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_custom_button_action_throw_grenade(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_fire_primary::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_custom_button_action_fire_primary(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_crouch::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_custom_button_action_crouch(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>);
// bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_scope_zoom::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *);
// public: void c_profile_data_component_base::set_custom_button_action_scope_zoom(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>);
// ??$cui_get_scalar_property_by_return_value@Vc_profile_data_component_base@@V?$c_enum@W4e_button_remapping_failure_reason@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_first_button_remapping_failure_reason@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: class c_enum<enum e_button_remapping_failure_reason, unsigned char, 0, 4, struct s_default_enum_string_resolver> c_profile_data_component_base::get_first_button_remapping_failure_reason(void) const;
// public: c_enum<enum e_button_remapping_failure_reason, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_button_remapping_failure_reason, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_button_remapping_failure_reason);
// bool cui_get_scalar_property_by_return_value<class c_profile_data_component_base, bool, bool & (c_profile_data_component_base::is_button_remapping_valid::*)(void)>(void const *, long, struct s_cui_property_value *);
// public: bool c_profile_data_component_base::is_button_remapping_valid(void) const;
// long cui_object_component_get_property_element_count<class c_profile_data_component_base, long & (c_profile_data_component_base::get_custom_action_count::*)(void)>(void const *);
// public: long c_profile_data_component_base::get_custom_action_count(void) const;
// ??$cui_get_array_property_element_by_return_value@Vc_profile_data_component_base@@V?$c_enum@W4e_button_action@@D$0A@$09Us_default_enum_string_resolver@@@@$1?get_custom_action_count@1@QBAJXZ$1?get_custom_action@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z;
// public: c_profile_data_writer_component::c_profile_data_writer_component(class c_profile_data_writer_component const &);
// public: c_enum<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void);
// bool cui_property_value_get<enum e_look_sensitivity, unsigned char, 0, 10, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_look_sensitivity, unsigned char, 0, 10, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_button_presets, unsigned char, 0, 7, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_button_presets, unsigned char, 0, 7, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_joystick_presets, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_joystick_presets, unsigned char, 0, 4, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver> *);
// bool cui_property_value_get<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver> *);
// void cui_property_value_set<enum e_button_remapping_failure_reason, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_button_remapping_failure_reason, unsigned char, 0, 4, struct s_default_enum_string_resolver> const &);
// public: bool c_enum_no_init<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_button_presets, unsigned char, 0, 7, struct s_default_enum_string_resolver>::in_range(void) const;
// public: enum e_button_remapping_failure_reason c_enum_no_init<enum e_button_remapping_failure_reason, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_button_remapping_failure_reason(void) const;
// public: bool c_enum_no_init<enum e_joystick_presets, unsigned char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_look_sensitivity, unsigned char, 0, 10, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;

//public: c_profile_data_writer_component::c_profile_data_writer_component(void)
//{
//    mangled_ppc("??0c_profile_data_writer_component@@QAA@XZ");
//};

//merged_84B56530
//{
//    mangled_ppc("merged_84B56530");
//};

//public: virtual c_profile_data_writer_component::~c_profile_data_writer_component(void)
//{
//    mangled_ppc("??1c_profile_data_writer_component@@UAA@XZ");
//};

//public: static class c_cui_object_property_table * c_cui_class_property_table<class c_profile_data_writer_component>::get_instance(void)
//{
//    mangled_ppc("?get_instance@?$c_cui_class_property_table@Vc_profile_data_writer_component@@@@SAPAVc_cui_object_property_table@@XZ");
//};

//class c_cui_component * cui_component_create<class c_profile_data_writer_component>(void)
//{
//    mangled_ppc("??$cui_component_create@Vc_profile_data_writer_component@@@@YAPAVc_cui_component@@XZ");
//};

//class c_cui_component * cui_component_clone<class c_profile_data_writer_component>(class c_cui_component const *)
//{
//    mangled_ppc("??$cui_component_clone@Vc_profile_data_writer_component@@@@YAPAVc_cui_component@@PBV0@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_controller_look_inverted::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@_N$1?set_controller_look_inverted@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_controller_look_inverted(bool)
//{
//    mangled_ppc("?set_controller_look_inverted@c_profile_data_component_base@@QAAX_N@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_controller_flight_stick_aircraft_controls::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@_N$1?set_controller_flight_stick_aircraft_controls@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_controller_flight_stick_aircraft_controls(bool)
//{
//    mangled_ppc("?set_controller_flight_stick_aircraft_controls@c_profile_data_component_base@@QAAX_N@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_look_sensitivity, unsigned char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_controller_look_sensitivity::*)(class c_enum<enum e_look_sensitivity, unsigned char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_look_sensitivity@@E$0A@$09Us_default_enum_string_resolver@@@@$1?set_controller_look_sensitivity@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_controller_look_sensitivity(class c_enum<enum e_look_sensitivity, unsigned char, 0, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_controller_look_sensitivity@c_profile_data_component_base@@QAAXV?$c_enum@W4e_look_sensitivity@@E$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_button_presets, unsigned char, 0, 7, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_controller_button_preset::*)(class c_enum<enum e_button_presets, unsigned char, 0, 7, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_button_presets@@E$0A@$06Us_default_enum_string_resolver@@@@$1?set_controller_button_preset@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_controller_button_preset(class c_enum<enum e_button_presets, unsigned char, 0, 7, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_controller_button_preset@c_profile_data_component_base@@QAAXV?$c_enum@W4e_button_presets@@E$0A@$06Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_joystick_presets, unsigned char, 0, 4, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_controller_joystick_preset::*)(class c_enum<enum e_joystick_presets, unsigned char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_joystick_presets@@E$0A@$03Us_default_enum_string_resolver@@@@$1?set_controller_joystick_preset@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_controller_joystick_preset(class c_enum<enum e_joystick_presets, unsigned char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_controller_joystick_preset@c_profile_data_component_base@@QAAXV?$c_enum@W4e_joystick_presets@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_controller_auto_center_look::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@_N$1?set_controller_auto_center_look@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_controller_auto_center_look(bool)
//{
//    mangled_ppc("?set_controller_auto_center_look@c_profile_data_component_base@@QAAX_N@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_controller_crouch_lock_enabled::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@_N$1?set_controller_crouch_lock_enabled@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_controller_crouch_lock_enabled(bool)
//{
//    mangled_ppc("?set_controller_crouch_lock_enabled@c_profile_data_component_base@@QAAX_N@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_controller_southpaw::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@_N$1?set_controller_southpaw@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_controller_southpaw(bool)
//{
//    mangled_ppc("?set_controller_southpaw@c_profile_data_component_base@@QAAX_N@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_controller_clench_protection::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@_N$1?set_controller_clench_protection@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_controller_clench_protection(bool)
//{
//    mangled_ppc("?set_controller_clench_protection@c_profile_data_component_base@@QAAX_N@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_camera_panning::*)(class c_enum<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_camera_panning@@E$0A@$01Us_default_enum_string_resolver@@@@$1?set_camera_panning@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_camera_panning(class c_enum<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_camera_panning@c_profile_data_component_base@@QAAXV?$c_enum@W4e_camera_panning@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_camera_flying_movement::*)(class c_enum<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_camera_flying_movement@@E$0A@$03Us_default_enum_string_resolver@@@@$1?set_camera_flying_movement@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_camera_flying_movement(class c_enum<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_camera_flying_movement@c_profile_data_component_base@@QAAXV?$c_enum@W4e_camera_flying_movement@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_camera_look_sensitivity::*)(class c_enum<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_camera_look_sensitivity@@E$0A@$03Us_default_enum_string_resolver@@@@$1?set_camera_look_sensitivity@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_camera_look_sensitivity(class c_enum<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_camera_look_sensitivity@c_profile_data_component_base@@QAAXV?$c_enum@W4e_camera_look_sensitivity@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_camera_flying_thrust::*)(class c_enum<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_camera_flying_thrust@@E$0A@$02Us_default_enum_string_resolver@@@@$1?set_camera_flying_thrust@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_camera_flying_thrust(class c_enum<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_camera_flying_thrust@c_profile_data_component_base@@QAAXV?$c_enum@W4e_camera_flying_thrust@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_profile_data_component_base, wchar_t const *, wchar_t const *& (c_profile_data_component_base::get_service_tag_desired::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_profile_data_component_base@@PB_W$1?get_service_tag_desired@1@QBAPB_WXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: wchar_t const * c_profile_data_component_base::get_service_tag_desired(void) const
//{
//    mangled_ppc("?get_service_tag_desired@c_profile_data_component_base@@QBAPB_WXZ");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, wchar_t const *, void & (c_profile_data_component_base::set_service_tag_desired::*)(wchar_t const *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@PB_W$1?set_service_tag_desired@1@QAAXPB_W@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_service_tag_desired(wchar_t const *)
//{
//    mangled_ppc("?set_service_tag_desired@c_profile_data_component_base@@QAAXPB_W@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, long, void & (c_profile_data_component_base::set_emblem_foreground_index::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@J$1?set_emblem_foreground_index@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_emblem_foreground_index(long)
//{
//    mangled_ppc("?set_emblem_foreground_index@c_profile_data_component_base@@QAAXJ@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, long, void & (c_profile_data_component_base::set_emblem_background_index::*)(long)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@J$1?set_emblem_background_index@1@QAAXJ@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_emblem_background_index(long)
//{
//    mangled_ppc("?set_emblem_background_index@c_profile_data_component_base@@QAAXJ@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_flags_no_init<enum e_emblem_info_flags, unsigned char, 3, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_emblem_flags::*)(class c_flags_no_init<enum e_emblem_info_flags, unsigned char, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_flags_no_init@W4e_emblem_info_flags@@E$02Us_default_enum_string_resolver@@@@$1?set_emblem_flags@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_emblem_flags(class c_flags_no_init<enum e_emblem_info_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_emblem_flags@c_profile_data_component_base@@QAAXV?$c_flags_no_init@W4e_emblem_info_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, union argb_color, void & (c_profile_data_component_base::set_emblem_primary_color::*)(union argb_color)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@Targb_color@@$1?set_emblem_primary_color@1@QAAXT2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_emblem_primary_color(union argb_color)
//{
//    mangled_ppc("?set_emblem_primary_color@c_profile_data_component_base@@QAAXTargb_color@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, union argb_color, void & (c_profile_data_component_base::set_emblem_secondary_color::*)(union argb_color)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@Targb_color@@$1?set_emblem_secondary_color@1@QAAXT2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_emblem_secondary_color(union argb_color)
//{
//    mangled_ppc("?set_emblem_secondary_color@c_profile_data_component_base@@QAAXTargb_color@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, union argb_color, void & (c_profile_data_component_base::set_emblem_background_color::*)(union argb_color)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@Targb_color@@$1?set_emblem_background_color@1@QAAXT2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_emblem_background_color(union argb_color)
//{
//    mangled_ppc("?set_emblem_background_color@c_profile_data_component_base@@QAAXTargb_color@@@Z");
//};

//bool cui_set_scalar_property_by_const_reference<class c_profile_data_component_base, struct s_emblem_info, void & (c_profile_data_component_base::set_emblem_info::*)(struct s_emblem_info const &)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_const_reference@Vc_profile_data_component_base@@Us_emblem_info@@$1?set_emblem_info@1@QAAXABU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_emblem_info(struct s_emblem_info const &)
//{
//    mangled_ppc("?set_emblem_info@c_profile_data_component_base@@QAAXABUs_emblem_info@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, struct s_player_configuration const *, void & (c_profile_data_component_base::set_player_configuration::*)(struct s_player_configuration const *)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@PBUs_player_configuration@@$1?set_player_configuration@1@QAAXPBU2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_player_configuration(struct s_player_configuration const *)
//{
//    mangled_ppc("?set_player_configuration@c_profile_data_component_base@@QAAXPBUs_player_configuration@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_female_voice_enabled::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@_N$1?set_female_voice_enabled@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_female_voice_enabled(bool)
//{
//    mangled_ppc("?set_female_voice_enabled@c_profile_data_component_base@@QAAX_N@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_voice_mute_setting::*)(class c_enum<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_voice_mute_setting@@E$0A@$01Us_default_enum_string_resolver@@@@$1?set_voice_mute_setting@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_voice_mute_setting(class c_enum<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_voice_mute_setting@c_profile_data_component_base@@QAAXV?$c_enum@W4e_voice_mute_setting@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_voice_output_setting::*)(class c_enum<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_voice_output_setting@@E$0A@$01Us_default_enum_string_resolver@@@@$1?set_voice_output_setting@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_voice_output_setting(class c_enum<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_voice_output_setting@c_profile_data_component_base@@QAAXV?$c_enum@W4e_voice_output_setting@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_voice_matchmaking_setting::*)(class c_enum<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_voice_matchmaking_setting@@E$0A@$01Us_default_enum_string_resolver@@@@$1?set_voice_matchmaking_setting@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_voice_matchmaking_setting(class c_enum<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_voice_matchmaking_setting@c_profile_data_component_base@@QAAXV?$c_enum@W4e_voice_matchmaking_setting@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, bool, void & (c_profile_data_component_base::set_guide_voice_muted::*)(bool)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@_N$1?set_guide_voice_muted@1@QAAX_N@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_guide_voice_muted(bool)
//{
//    mangled_ppc("?set_guide_voice_muted@c_profile_data_component_base@@QAAX_N@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_subtitle_setting::*)(class c_enum<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_subtitle_setting@@E$0A@$02Us_default_enum_string_resolver@@@@$1?set_subtitle_setting@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_subtitle_setting(class c_enum<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_subtitle_setting@c_profile_data_component_base@@QAAXV?$c_enum@W4e_subtitle_setting@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_display_brightness::*)(class c_enum<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_display_brightness@@E$0A@$04Us_default_enum_string_resolver@@@@$1?set_display_brightness@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_display_brightness(class c_enum<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_display_brightness@c_profile_data_component_base@@QAAXV?$c_enum@W4e_display_brightness@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_array_property_element_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, long & (c_profile_data_component_base::get_custom_button_count::*)(void), void & (c_profile_data_component_base::set_custom_button::*)(long, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_array_property_element_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@$1?get_custom_button_count@1@QBAJXZ$1?set_custom_button@1@QAAXJV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_custom_button(long, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_custom_button@c_profile_data_component_base@@QAAXJV?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_jump::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@$1?set_custom_button_action_jump@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_custom_button_action_jump(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_custom_button_action_jump@c_profile_data_component_base@@QAAXV?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_switch_grenade::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@$1?set_custom_button_action_switch_grenade@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_custom_button_action_switch_grenade(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_custom_button_action_switch_grenade@c_profile_data_component_base@@QAAXV?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_switch_weapon::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@$1?set_custom_button_action_switch_weapon@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_custom_button_action_switch_weapon(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_custom_button_action_switch_weapon@c_profile_data_component_base@@QAAXV?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_context_primary::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@$1?set_custom_button_action_context_primary@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_custom_button_action_context_primary(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_custom_button_action_context_primary@c_profile_data_component_base@@QAAXV?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_melee_attack::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@$1?set_custom_button_action_melee_attack@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_custom_button_action_melee_attack(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_custom_button_action_melee_attack@c_profile_data_component_base@@QAAXV?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_equipment::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@$1?set_custom_button_action_equipment@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_custom_button_action_equipment(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_custom_button_action_equipment@c_profile_data_component_base@@QAAXV?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_throw_grenade::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@$1?set_custom_button_action_throw_grenade@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_custom_button_action_throw_grenade(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_custom_button_action_throw_grenade@c_profile_data_component_base@@QAAXV?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_fire_primary::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@$1?set_custom_button_action_fire_primary@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_custom_button_action_fire_primary(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_custom_button_action_fire_primary@c_profile_data_component_base@@QAAXV?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_crouch::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@$1?set_custom_button_action_crouch@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_custom_button_action_crouch(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_custom_button_action_crouch@c_profile_data_component_base@@QAAXV?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_set_scalar_property_by_value<class c_profile_data_component_base, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>, void & (c_profile_data_component_base::set_custom_button_action_scope_zoom::*)(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)>(void *, long, struct s_cui_property_value const *)
//{
//    mangled_ppc("??$cui_set_scalar_property_by_value@Vc_profile_data_component_base@@V?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@$1?set_custom_button_action_scope_zoom@1@QAAXV2@@Z@@YA_NPAXJPBUs_cui_property_value@@@Z");
//};

//public: void c_profile_data_component_base::set_custom_button_action_scope_zoom(class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("?set_custom_button_action_scope_zoom@c_profile_data_component_base@@QAAXV?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//??$cui_get_scalar_property_by_return_value@Vc_profile_data_component_base@@V?$c_enum@W4e_button_remapping_failure_reason@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_first_button_remapping_failure_reason@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_profile_data_component_base@@V?$c_enum@W4e_button_remapping_failure_reason@@E$0A@$03Us_default_enum_string_resolver@@@@$1?get_first_button_remapping_failure_reason@1@QBA?AV2@XZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: class c_enum<enum e_button_remapping_failure_reason, unsigned char, 0, 4, struct s_default_enum_string_resolver> c_profile_data_component_base::get_first_button_remapping_failure_reason(void) const
//{
//    mangled_ppc("?get_first_button_remapping_failure_reason@c_profile_data_component_base@@QBA?AV?$c_enum@W4e_button_remapping_failure_reason@@E$0A@$03Us_default_enum_string_resolver@@@@XZ");
//};

//public: c_enum<enum e_button_remapping_failure_reason, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_button_remapping_failure_reason, unsigned char, 0, 4, struct s_default_enum_string_resolver>(enum e_button_remapping_failure_reason)
//{
//    mangled_ppc("??0?$c_enum@W4e_button_remapping_failure_reason@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@W4e_button_remapping_failure_reason@@@Z");
//};

//bool cui_get_scalar_property_by_return_value<class c_profile_data_component_base, bool, bool & (c_profile_data_component_base::is_button_remapping_valid::*)(void)>(void const *, long, struct s_cui_property_value *)
//{
//    mangled_ppc("??$cui_get_scalar_property_by_return_value@Vc_profile_data_component_base@@_N$1?is_button_remapping_valid@1@QBA_NXZ@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: bool c_profile_data_component_base::is_button_remapping_valid(void) const
//{
//    mangled_ppc("?is_button_remapping_valid@c_profile_data_component_base@@QBA_NXZ");
//};

//long cui_object_component_get_property_element_count<class c_profile_data_component_base, long & (c_profile_data_component_base::get_custom_action_count::*)(void)>(void const *)
//{
//    mangled_ppc("??$cui_object_component_get_property_element_count@Vc_profile_data_component_base@@$1?get_custom_action_count@1@QBAJXZ@@YAJPBX@Z");
//};

//public: long c_profile_data_component_base::get_custom_action_count(void) const
//{
//    mangled_ppc("?get_custom_action_count@c_profile_data_component_base@@QBAJXZ");
//};

//??$cui_get_array_property_element_by_return_value@Vc_profile_data_component_base@@V?$c_enum@W4e_button_action@@D$0A@$09Us_default_enum_string_resolver@@@@$1?get_custom_action_count@1@QBAJXZ$1?get_custom_action@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z
//{
//    mangled_ppc("??$cui_get_array_property_element_by_return_value@Vc_profile_data_component_base@@V?$c_enum@W4e_button_action@@D$0A@$09Us_default_enum_string_resolver@@@@$1?get_custom_action_count@1@QBAJXZ$1?get_custom_action@1@QBA?AV2@J@Z@@YA_NPBXJPAUs_cui_property_value@@@Z");
//};

//public: c_profile_data_writer_component::c_profile_data_writer_component(class c_profile_data_writer_component const &)
//{
//    mangled_ppc("??0c_profile_data_writer_component@@QAA@ABV0@@Z");
//};

//public: c_enum<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_camera_flying_movement@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_camera_flying_thrust@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver>::c_enum<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_camera_look_sensitivity@@E$0A@$03Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_camera_panning@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_voice_matchmaking_setting@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_voice_mute_setting@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>::c_enum<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_voice_output_setting@@E$0A@$01Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver>::c_enum<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_display_brightness@@E$0A@$04Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver>::c_enum<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_subtitle_setting@@E$0A@$02Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//bool cui_property_value_get<enum e_look_sensitivity, unsigned char, 0, 10, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_look_sensitivity, unsigned char, 0, 10, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_look_sensitivity@@E$0A@$09Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_look_sensitivity@@E$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_button_presets, unsigned char, 0, 7, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_button_presets, unsigned char, 0, 7, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_button_presets@@E$0A@$06Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_button_presets@@E$0A@$06Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_joystick_presets, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_joystick_presets, unsigned char, 0, 4, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_joystick_presets@@E$0A@$03Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_joystick_presets@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_camera_panning@@E$0A@$01Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_camera_panning@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_camera_flying_movement@@E$0A@$03Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_camera_flying_movement@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_camera_look_sensitivity@@E$0A@$03Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_camera_look_sensitivity@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_camera_flying_thrust@@E$0A@$02Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_camera_flying_thrust@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_voice_mute_setting@@E$0A@$01Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_voice_mute_setting@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_voice_output_setting@@E$0A@$01Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_voice_output_setting@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_voice_matchmaking_setting@@E$0A@$01Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_voice_matchmaking_setting@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_subtitle_setting@@E$0A@$02Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_subtitle_setting@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_display_brightness@@E$0A@$04Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_display_brightness@@E$0A@$04Us_default_enum_string_resolver@@@@@Z");
//};

//bool cui_property_value_get<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>(struct s_cui_property_value const *, class c_enum<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$cui_property_value_get@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@YA_NPBUs_cui_property_value@@PAV?$c_enum@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@@Z");
//};

//void cui_property_value_set<enum e_button_remapping_failure_reason, unsigned char, 0, 4, struct s_default_enum_string_resolver>(struct s_cui_property_value *, class c_enum<enum e_button_remapping_failure_reason, unsigned char, 0, 4, struct s_default_enum_string_resolver> const &)
//{
//    mangled_ppc("??$cui_property_value_set@W4e_button_remapping_failure_reason@@E$0A@$03Us_default_enum_string_resolver@@@@YAXPAUs_cui_property_value@@ABV?$c_enum@W4e_button_remapping_failure_reason@@E$0A@$03Us_default_enum_string_resolver@@@@@Z");
//};

//public: bool c_enum_no_init<enum e_remappable_button, char, 0, 10, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_remappable_button@@D$0A@$09Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_button_presets, unsigned char, 0, 7, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_button_presets@@E$0A@$06Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: enum e_button_remapping_failure_reason c_enum_no_init<enum e_button_remapping_failure_reason, unsigned char, 0, 4, struct s_default_enum_string_resolver>::operator enum e_button_remapping_failure_reason(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_button_remapping_failure_reason@@E$0A@$03Us_default_enum_string_resolver@@@@QBA?AW4e_button_remapping_failure_reason@@XZ");
//};

//public: bool c_enum_no_init<enum e_joystick_presets, unsigned char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_joystick_presets@@E$0A@$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_look_sensitivity, unsigned char, 0, 10, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_look_sensitivity@@E$0A@$09Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_camera_flying_movement, unsigned char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_camera_flying_movement@@E$0A@$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_camera_flying_thrust, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_camera_flying_thrust@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_camera_look_sensitivity, unsigned char, 0, 4, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_camera_look_sensitivity@@E$0A@$03Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_camera_panning, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_camera_panning@@E$0A@$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_voice_matchmaking_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_voice_matchmaking_setting@@E$0A@$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_voice_mute_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_voice_mute_setting@@E$0A@$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_voice_output_setting, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_voice_output_setting@@E$0A@$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_display_brightness, unsigned char, 0, 5, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_display_brightness@@E$0A@$04Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_subtitle_setting, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_subtitle_setting@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

