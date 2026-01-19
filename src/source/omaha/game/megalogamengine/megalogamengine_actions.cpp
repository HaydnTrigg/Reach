/* ---------- headers */

#include "omaha\game\megalogamengine\megalogamengine_actions.h"

/* ---------- constants */

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

/* ---------- private code */

/* ---------- reverse engineering */

// bool g_debug_megalo_tracing; // "?g_debug_megalo_tracing@@3_NA"

// public: c_action::c_action(void);
// public: void c_action::initialize(void);
// public: bool c_action::is_valid(struct s_custom_game_engine_definition const *) const;
// public: struct s_action_set_parameters * c_action::initialize_for_temporary_variable(void);
// public: bool c_action::executable_on_client(void) const;
// public: bool c_action::executable_pregame(void) const;
// public: void c_action::execute(void) const;
// public: void c_action::encode(class c_bitstream *) const;
// public: bool c_action::is_empty(void) const;
// public: void c_action::decode(class c_bitstream *);
// public: void s_team_or_player_target::encode(class c_bitstream *) const;
// public: void s_team_or_player_target::decode(class c_bitstream *);
// public: void s_object_offset::initialize(void);
// public: void s_object_offset::get_offset_relative_to_forward_and_up(union vector3d const *, union vector3d const *, union vector3d *) const;
// public: void s_object_offset::encode(class c_bitstream *) const;
// public: void s_object_offset::decode(class c_bitstream *);
// public: void s_action_set_score_parameters::encode(class c_bitstream *) const;
// public: void s_action_set_score_parameters::decode(class c_bitstream *);
// public: void s_action_create_object_parameters::encode(class c_bitstream *) const;
// public: void s_action_create_object_parameters::decode(class c_bitstream *);
// public: void s_action_delete_object_parameters::encode(class c_bitstream *) const;
// public: void s_action_delete_object_parameters::decode(class c_bitstream *);
// public: void s_action_navpoint_set_visible_parameters::encode(class c_bitstream *) const;
// public: void s_action_navpoint_set_visible_parameters::decode(class c_bitstream *);
// public: void s_action_navpoint_set_icon_parameters::encode(class c_bitstream *) const;
// public: void s_action_navpoint_set_icon_parameters::decode(class c_bitstream *);
// public: void s_action_navpoint_set_priority_parameters::encode(class c_bitstream *) const;
// public: void s_action_navpoint_set_priority_parameters::decode(class c_bitstream *);
// public: void s_action_navpoint_set_timer_parameters::encode(class c_bitstream *) const;
// public: void s_action_navpoint_set_timer_parameters::decode(class c_bitstream *);
// public: void s_action_navpoint_set_visible_range_parameters::encode(class c_bitstream *) const;
// public: void s_action_navpoint_set_visible_range_parameters::decode(class c_bitstream *);
// public: void s_action_set_parameters::encode(class c_bitstream *) const;
// public: void s_action_set_parameters::decode(class c_bitstream *);
// public: void s_action_set_boundary_parameters::encode(class c_bitstream *) const;
// public: void s_action_set_boundary_parameters::decode(class c_bitstream *);
// public: void s_action_apply_player_traits_parameters::encode(class c_bitstream *) const;
// public: void s_action_apply_player_traits_parameters::decode(class c_bitstream *);
// public: void s_action_set_pickup_filter_parameters::encode(class c_bitstream *) const;
// public: void s_action_set_pickup_filter_parameters::decode(class c_bitstream *);
// public: void s_action_set_respawn_filter_parameters::encode(class c_bitstream *) const;
// public: void s_action_set_respawn_filter_parameters::decode(class c_bitstream *);
// public: void s_action_set_fireteam_respawn_filter_parameters::encode(class c_bitstream *) const;
// public: void s_action_set_fireteam_respawn_filter_parameters::decode(class c_bitstream *);
// public: void s_action_set_progress_bar_parameters::encode(class c_bitstream *) const;
// public: void s_action_set_progress_bar_parameters::decode(class c_bitstream *);
// public: void s_action_hud_post_message_parameters::encode(class c_bitstream *) const;
// public: void s_action_hud_post_message_parameters::decode(class c_bitstream *);
// public: void s_action_timer_set_rate_parameters::encode(class c_bitstream *) const;
// public: void s_action_timer_set_rate_parameters::decode(class c_bitstream *);
// public: void s_action_print_variable_parameters::encode(class c_bitstream *) const;
// public: void s_action_print_variable_parameters::decode(class c_bitstream *);
// public: void s_action_get_player_holding_object_parameters::encode(class c_bitstream *) const;
// public: void s_action_get_player_holding_object_parameters::decode(class c_bitstream *);
// public: void s_action_for_each_parameters::encode(class c_bitstream *) const;
// public: void s_action_for_each_parameters::decode(class c_bitstream *);
// public: void s_action_end_round_parameters::encode(class c_bitstream *) const;
// public: void s_action_end_round_parameters::decode(class c_bitstream *);
// public: void s_action_boundary_set_visible_parameters::encode(class c_bitstream *) const;
// public: void s_action_boundary_set_visible_parameters::decode(class c_bitstream *);
// public: void s_action_object_destroy_parameters::encode(class c_bitstream *) const;
// public: void s_action_object_destroy_parameters::decode(class c_bitstream *);
// public: void s_action_object_set_invincibility_parameters::encode(class c_bitstream *) const;
// public: void s_action_object_set_invincibility_parameters::decode(class c_bitstream *);
// public: void s_action_random_parameters::encode(class c_bitstream *) const;
// public: void s_action_random_parameters::decode(class c_bitstream *);
// public: void s_action_break_into_debugger_parameters::encode(class c_bitstream *) const;
// public: void s_action_break_into_debugger_parameters::decode(class c_bitstream *);
// public: void s_action_object_get_orientation_parameters::encode(class c_bitstream *) const;
// public: void s_action_object_get_orientation_parameters::decode(class c_bitstream *);
// public: void s_action_object_get_velocity_parameters::encode(class c_bitstream *) const;
// public: void s_action_object_get_velocity_parameters::decode(class c_bitstream *);
// public: void s_action_player_death_get_killing_player_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_death_get_killing_player_parameters::decode(class c_bitstream *);
// public: void s_action_player_death_get_damage_type_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_death_get_damage_type_parameters::decode(class c_bitstream *);
// public: void s_action_player_death_get_special_type_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_death_get_special_type_parameters::decode(class c_bitstream *);
// public: void s_action_debugging_enable_tracing_parameters::encode(class c_bitstream *) const;
// public: void s_action_debugging_enable_tracing_parameters::decode(class c_bitstream *);
// public: void s_action_object_attach_parameters::encode(class c_bitstream *) const;
// public: void s_action_object_attach_parameters::decode(class c_bitstream *);
// public: void s_action_object_detach_parameters::encode(class c_bitstream *) const;
// public: void s_action_object_detach_parameters::decode(class c_bitstream *);
// public: void s_action_player_get_place_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_get_place_parameters::decode(class c_bitstream *);
// public: void s_action_team_get_place_parameters::encode(class c_bitstream *) const;
// public: void s_action_team_get_place_parameters::decode(class c_bitstream *);
// public: void s_action_player_get_killing_spree_count_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_get_killing_spree_count_parameters::decode(class c_bitstream *);
// public: void s_action_player_adjust_money_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_adjust_money_parameters::decode(class c_bitstream *);
// public: void s_action_player_enable_purchases_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_enable_purchases_parameters::decode(class c_bitstream *);
// public: void s_action_player_get_vehicle_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_get_vehicle_parameters::decode(class c_bitstream *);
// public: void s_action_player_set_vehicle_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_set_vehicle_parameters::decode(class c_bitstream *);
// public: void s_action_player_set_unit_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_set_unit_parameters::decode(class c_bitstream *);
// public: void s_action_timer_reset_parameters::encode(class c_bitstream *) const;
// public: void s_action_timer_reset_parameters::decode(class c_bitstream *);
// public: void s_action_weapon_set_pickup_priority_parameters::encode(class c_bitstream *) const;
// public: void s_action_weapon_set_pickup_priority_parameters::decode(class c_bitstream *);
// public: void s_action_object_bounce_parameters::encode(class c_bitstream *) const;
// public: void s_action_object_bounce_parameters::decode(class c_bitstream *);
// public: void s_action_hud_widget_base::encode(class c_bitstream *) const;
// public: void s_action_hud_widget_base::decode(class c_bitstream *);
// public: void s_action_hud_widget_text_base::encode(class c_bitstream *) const;
// public: void s_action_hud_widget_text_base::decode(class c_bitstream *);
// public: void s_action_hud_widget_set_meter_parameters::encode(class c_bitstream *) const;
// public: void s_action_hud_widget_set_meter_parameters::decode(class c_bitstream *);
// public: void s_action_hud_widget_set_icon_parameters::encode(class c_bitstream *) const;
// public: void s_action_hud_widget_set_icon_parameters::decode(class c_bitstream *);
// public: void s_action_hud_widget_set_visibility_parameters::encode(class c_bitstream *) const;
// public: void s_action_hud_widget_set_visibility_parameters::decode(class c_bitstream *);
// public: void s_action_play_sound_parameters::encode(class c_bitstream *) const;
// public: void s_action_play_sound_parameters::decode(class c_bitstream *);
// public: void s_action_object_set_scale_parameters::encode(class c_bitstream *) const;
// public: void s_action_object_set_scale_parameters::decode(class c_bitstream *);
// public: void s_action_navpoint_set_text_parameters::encode(class c_bitstream *) const;
// public: void s_action_navpoint_set_text_parameters::decode(class c_bitstream *);
// public: void s_action_object_get_vitality_base::encode(class c_bitstream *) const;
// public: void s_action_object_get_vitality_base::decode(class c_bitstream *);
// public: void s_action_player_set_objective_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_set_objective_parameters::decode(class c_bitstream *);
// public: void s_action_player_set_objective_allegiance_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_set_objective_allegiance_parameters::decode(class c_bitstream *);
// public: void s_action_player_set_objective_allegiance_icon_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_set_objective_allegiance_icon_parameters::decode(class c_bitstream *);
// public: void s_action_team_set_coop_spawning_parameters::encode(class c_bitstream *) const;
// public: void s_action_team_set_coop_spawning_parameters::decode(class c_bitstream *);
// public: void s_action_team_set_primary_respawn_object_parameters::encode(class c_bitstream *) const;
// public: void s_action_team_set_primary_respawn_object_parameters::decode(class c_bitstream *);
// public: void s_action_player_set_primary_respawn_object_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_set_primary_respawn_object_parameters::decode(class c_bitstream *);
// public: void s_action_player_get_fireteam_index_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_get_fireteam_index_parameters::decode(class c_bitstream *);
// public: void s_action_player_set_fireteam_index_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_set_fireteam_index_parameters::decode(class c_bitstream *);
// public: void s_action_vitality_adjustment_parameters::encode(class c_bitstream *) const;
// public: void s_action_vitality_adjustment_parameters::decode(class c_bitstream *);
// public: void s_action_object_get_distance_parameters::encode(class c_bitstream *) const;
// public: void s_action_object_get_distance_parameters::decode(class c_bitstream *);
// public: void s_action_player_set_requisition_palette_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_set_requisition_palette_parameters::decode(class c_bitstream *);
// public: void s_action_device_set_power_parameters::encode(class c_bitstream *) const;
// public: void s_action_device_set_power_parameters::decode(class c_bitstream *);
// public: void s_action_device_get_power_parameters::encode(class c_bitstream *) const;
// public: void s_action_device_get_power_parameters::decode(class c_bitstream *);
// public: void s_action_device_set_position_parameters::encode(class c_bitstream *) const;
// public: void s_action_device_set_position_parameters::decode(class c_bitstream *);
// public: void s_action_device_get_position_parameters::encode(class c_bitstream *) const;
// public: void s_action_device_get_position_parameters::decode(class c_bitstream *);
// public: void s_action_adjust_grenades_parameters::encode(class c_bitstream *) const;
// public: void s_action_adjust_grenades_parameters::decode(class c_bitstream *);
// public: void s_action_submit_incident_parameters::encode(class c_bitstream *) const;
// public: void s_action_submit_incident_parameters::decode(class c_bitstream *);
// public: void s_action_submit_incident_with_custom_value_parameters::encode(class c_bitstream *) const;
// public: void s_action_submit_incident_with_custom_value_parameters::decode(class c_bitstream *);
// public: void s_action_set_loadout_palette_parameters::encode(class c_bitstream *) const;
// public: void s_action_set_loadout_palette_parameters::decode(class c_bitstream *);
// public: void s_action_device_set_position_track_parameters::encode(class c_bitstream *) const;
// public: void s_action_device_set_position_track_parameters::decode(class c_bitstream *);
// public: void s_action_device_animate_position_parameters::encode(class c_bitstream *) const;
// public: void s_action_device_animate_position_parameters::decode(class c_bitstream *);
// public: void s_action_device_set_position_immediate_parameters::encode(class c_bitstream *) const;
// public: void s_action_device_set_position_immediate_parameters::decode(class c_bitstream *);
// public: void s_action_saved_film_insert_marker_parameters::encode(class c_bitstream *) const;
// public: void s_action_saved_film_insert_marker_parameters::decode(class c_bitstream *);
// public: void s_action_respawn_zone_enable_parameters::encode(class c_bitstream *) const;
// public: void s_action_respawn_zone_enable_parameters::decode(class c_bitstream *);
// public: void s_action_player_get_weapon_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_get_weapon_parameters::decode(class c_bitstream *);
// public: void s_action_player_get_equipment_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_get_equipment_parameters::decode(class c_bitstream *);
// public: void s_action_object_set_never_garbage_parameters::encode(class c_bitstream *) const;
// public: void s_action_object_set_never_garbage_parameters::decode(class c_bitstream *);
// public: void s_action_player_get_target_object_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_get_target_object_parameters::decode(class c_bitstream *);
// public: void s_action_create_tunnel_parameters::encode(class c_bitstream *) const;
// public: void s_action_create_tunnel_parameters::decode(class c_bitstream *);
// public: void s_action_debug_force_player_view_count_parameters::encode(class c_bitstream *) const;
// public: void s_action_debug_force_player_view_count_parameters::decode(class c_bitstream *);
// public: void s_action_player_pick_up_weapon_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_pick_up_weapon_parameters::decode(class c_bitstream *);
// public: void s_action_player_set_coop_spawning_parameters::encode(class c_bitstream *) const;
// public: void s_action_player_set_coop_spawning_parameters::decode(class c_bitstream *);
// public: void s_action_object_set_orientation_parameters::encode(class c_bitstream *) const;
// public: void s_action_object_set_orientation_parameters::decode(class c_bitstream *);
// public: void s_action_object_face_object_parameters::encode(class c_bitstream *) const;
// public: void s_action_object_face_object_parameters::decode(class c_bitstream *);
// public: void s_action_biped_give_weapon_parameters::encode(class c_bitstream *) const;
// public: void s_action_biped_give_weapon_parameters::decode(class c_bitstream *);
// public: void s_action_biped_drop_weapon_parameters::encode(class c_bitstream *) const;
// public: void s_action_biped_drop_weapon_parameters::decode(class c_bitstream *);
// public: void s_action_set_scenario_interpolator_state_parameters::encode(class c_bitstream *) const;
// public: void s_action_set_scenario_interpolator_state_parameters::decode(class c_bitstream *);
// public: void s_action_get_random_object_parameters::encode(class c_bitstream *) const;
// public: void s_action_get_random_object_parameters::decode(class c_bitstream *);
// public: void s_action_game_grief_record_custom_penalty_parameters::encode(class c_bitstream *) const;
// public: void s_action_game_grief_record_custom_penalty_parameters::decode(class c_bitstream *);
// public: void s_action_boundary_set_player_color_parameters::encode(class c_bitstream *) const;
// public: void s_action_boundary_set_player_color_parameters::decode(class c_bitstream *);
// public: c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>(void);
// public: c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>(enum e_action_type);
// public: enum e_action_type c_enum_no_init<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::operator enum e_action_type(void) const;
// public: bool c_enum_no_init<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::operator==(enum e_action_type) const;
// public: bool c_enum_no_init<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::in_range(void) const;
// public: bool c_enum_no_init<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_action_team_or_player_target) const;
// public: void c_bitstream::write_enum<class c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_enum<class c_enum<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_enum<class c_enum<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_index<16, unsigned char>(char const *, unsigned char);
// public: void c_bitstream::write_flags<class c_flags<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_flags<class c_flags<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_index<95, unsigned char>(char const *, unsigned char);
// public: void c_bitstream::write_index<95, char>(char const *, char);
// public: void c_bitstream::write_enum<class c_enum<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> *);
// public: void c_bitstream::write_index<1000, long>(char const *, long);
// public: long c_bitstream::read_index<1000>(char const *);
// public: void c_bitstream::write_index<255, long>(char const *, long);
// public: void c_bitstream::write_enum<class c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: void c_bitstream::read_enum<class c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> *);
// public: void c_enum_no_init<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: enum e_action_team_or_player_target c_enum_no_init<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_action_team_or_player_target(void) const;
// public: bool c_enum_no_init<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: enum e_math_operation c_enum_no_init<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver>::operator enum e_math_operation(void) const;
// public: bool c_enum_no_init<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: enum e_grenade_type c_enum_no_init<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_grenade_type(void) const;
// public: bool c_enum_no_init<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// public: enum e_biped_give_weapon_mode c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_biped_give_weapon_mode(void) const;
// public: bool c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const;
// public: void c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char);
// long required_encoding_bits_for_enum<class c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver> >(class c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>);
// public: static enum e_action_type c_enum_no_init<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// long required_encoding_bits_for_enum<class c_enum<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: static enum e_action_team_or_player_target c_enum_no_init<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// long required_encoding_bits_for_enum<class c_enum<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver> >(class c_enum<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver>);
// public: static enum e_math_operation c_enum_no_init<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: unsigned char c_flags_no_init<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const;
// public: void c_flags_no_init<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char);
// long required_encoding_bits_for_enum<class c_enum<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> >(class c_enum<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>);
// public: static enum e_grenade_type c_enum_no_init<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// long required_encoding_bits_for_index<1000>(void);
// long required_encoding_bits_for_enum<class c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>);
// public: static enum e_biped_give_weapon_mode c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int);
// public: static unsigned char c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long);
// public: bool c_flags_no_init<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const;
// private: static unsigned char c_flags_no_init<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void);
// private: static unsigned char c_flags_no_init<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_create_object_flags);

//public: c_action::c_action(void)
//{
//    mangled_ppc("??0c_action@@QAA@XZ");
//};

//public: void c_action::initialize(void)
//{
//    mangled_ppc("?initialize@c_action@@QAAXXZ");
//};

//public: bool c_action::is_valid(struct s_custom_game_engine_definition const *) const
//{
//    mangled_ppc("?is_valid@c_action@@QBA_NPBUs_custom_game_engine_definition@@@Z");
//};

//public: struct s_action_set_parameters * c_action::initialize_for_temporary_variable(void)
//{
//    mangled_ppc("?initialize_for_temporary_variable@c_action@@QAAPAUs_action_set_parameters@@XZ");
//};

//public: bool c_action::executable_on_client(void) const
//{
//    mangled_ppc("?executable_on_client@c_action@@QBA_NXZ");
//};

//public: bool c_action::executable_pregame(void) const
//{
//    mangled_ppc("?executable_pregame@c_action@@QBA_NXZ");
//};

//public: void c_action::execute(void) const
//{
//    mangled_ppc("?execute@c_action@@QBAXXZ");
//};

//public: void c_action::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@c_action@@QBAXPAVc_bitstream@@@Z");
//};

//public: bool c_action::is_empty(void) const
//{
//    mangled_ppc("?is_empty@c_action@@QBA_NXZ");
//};

//public: void c_action::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@c_action@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_team_or_player_target::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_team_or_player_target@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_team_or_player_target::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_team_or_player_target@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_object_offset::initialize(void)
//{
//    mangled_ppc("?initialize@s_object_offset@@QAAXXZ");
//};

//public: void s_object_offset::get_offset_relative_to_forward_and_up(union vector3d const *, union vector3d const *, union vector3d *) const
//{
//    mangled_ppc("?get_offset_relative_to_forward_and_up@s_object_offset@@QBAXPBTvector3d@@0PAT2@@Z");
//};

//public: void s_object_offset::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_object_offset@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_object_offset::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_object_offset@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_score_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_set_score_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_score_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_set_score_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_create_object_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_create_object_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_create_object_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_create_object_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_delete_object_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_delete_object_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_delete_object_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_delete_object_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_navpoint_set_visible_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_navpoint_set_visible_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_navpoint_set_visible_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_navpoint_set_visible_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_navpoint_set_icon_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_navpoint_set_icon_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_navpoint_set_icon_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_navpoint_set_icon_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_navpoint_set_priority_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_navpoint_set_priority_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_navpoint_set_priority_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_navpoint_set_priority_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_navpoint_set_timer_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_navpoint_set_timer_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_navpoint_set_timer_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_navpoint_set_timer_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_navpoint_set_visible_range_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_navpoint_set_visible_range_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_navpoint_set_visible_range_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_navpoint_set_visible_range_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_set_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_set_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_boundary_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_set_boundary_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_boundary_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_set_boundary_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_apply_player_traits_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_apply_player_traits_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_apply_player_traits_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_apply_player_traits_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_pickup_filter_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_set_pickup_filter_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_pickup_filter_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_set_pickup_filter_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_respawn_filter_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_set_respawn_filter_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_respawn_filter_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_set_respawn_filter_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_fireteam_respawn_filter_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_set_fireteam_respawn_filter_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_fireteam_respawn_filter_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_set_fireteam_respawn_filter_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_progress_bar_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_set_progress_bar_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_progress_bar_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_set_progress_bar_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_hud_post_message_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_hud_post_message_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_hud_post_message_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_hud_post_message_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_timer_set_rate_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_timer_set_rate_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_timer_set_rate_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_timer_set_rate_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_print_variable_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_print_variable_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_print_variable_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_print_variable_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_get_player_holding_object_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_get_player_holding_object_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_get_player_holding_object_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_get_player_holding_object_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_for_each_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_for_each_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_for_each_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_for_each_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_end_round_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_end_round_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_end_round_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_end_round_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_boundary_set_visible_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_boundary_set_visible_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_boundary_set_visible_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_boundary_set_visible_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_destroy_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_object_destroy_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_destroy_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_object_destroy_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_set_invincibility_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_object_set_invincibility_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_set_invincibility_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_object_set_invincibility_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_random_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_random_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_random_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_random_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_break_into_debugger_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_break_into_debugger_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_break_into_debugger_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_break_into_debugger_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_get_orientation_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_object_get_orientation_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_get_orientation_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_object_get_orientation_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_get_velocity_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_object_get_velocity_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_get_velocity_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_object_get_velocity_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_death_get_killing_player_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_death_get_killing_player_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_death_get_killing_player_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_death_get_killing_player_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_death_get_damage_type_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_death_get_damage_type_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_death_get_damage_type_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_death_get_damage_type_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_death_get_special_type_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_death_get_special_type_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_death_get_special_type_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_death_get_special_type_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_debugging_enable_tracing_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_debugging_enable_tracing_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_debugging_enable_tracing_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_debugging_enable_tracing_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_attach_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_object_attach_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_attach_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_object_attach_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_detach_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_object_detach_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_detach_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_object_detach_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_get_place_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_get_place_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_get_place_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_get_place_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_team_get_place_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_team_get_place_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_team_get_place_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_team_get_place_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_get_killing_spree_count_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_get_killing_spree_count_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_get_killing_spree_count_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_get_killing_spree_count_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_adjust_money_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_adjust_money_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_adjust_money_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_adjust_money_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_enable_purchases_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_enable_purchases_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_enable_purchases_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_enable_purchases_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_get_vehicle_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_get_vehicle_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_get_vehicle_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_get_vehicle_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_vehicle_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_set_vehicle_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_vehicle_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_set_vehicle_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_unit_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_set_unit_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_unit_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_set_unit_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_timer_reset_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_timer_reset_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_timer_reset_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_timer_reset_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_weapon_set_pickup_priority_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_weapon_set_pickup_priority_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_weapon_set_pickup_priority_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_weapon_set_pickup_priority_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_bounce_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_object_bounce_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_bounce_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_object_bounce_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_hud_widget_base::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_hud_widget_base@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_hud_widget_base::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_hud_widget_base@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_hud_widget_text_base::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_hud_widget_text_base@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_hud_widget_text_base::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_hud_widget_text_base@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_hud_widget_set_meter_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_hud_widget_set_meter_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_hud_widget_set_meter_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_hud_widget_set_meter_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_hud_widget_set_icon_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_hud_widget_set_icon_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_hud_widget_set_icon_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_hud_widget_set_icon_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_hud_widget_set_visibility_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_hud_widget_set_visibility_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_hud_widget_set_visibility_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_hud_widget_set_visibility_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_play_sound_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_play_sound_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_play_sound_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_play_sound_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_set_scale_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_object_set_scale_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_set_scale_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_object_set_scale_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_navpoint_set_text_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_navpoint_set_text_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_navpoint_set_text_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_navpoint_set_text_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_get_vitality_base::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_object_get_vitality_base@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_get_vitality_base::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_object_get_vitality_base@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_objective_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_set_objective_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_objective_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_set_objective_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_objective_allegiance_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_set_objective_allegiance_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_objective_allegiance_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_set_objective_allegiance_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_objective_allegiance_icon_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_set_objective_allegiance_icon_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_objective_allegiance_icon_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_set_objective_allegiance_icon_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_team_set_coop_spawning_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_team_set_coop_spawning_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_team_set_coop_spawning_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_team_set_coop_spawning_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_team_set_primary_respawn_object_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_team_set_primary_respawn_object_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_team_set_primary_respawn_object_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_team_set_primary_respawn_object_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_primary_respawn_object_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_set_primary_respawn_object_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_primary_respawn_object_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_set_primary_respawn_object_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_get_fireteam_index_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_get_fireteam_index_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_get_fireteam_index_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_get_fireteam_index_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_fireteam_index_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_set_fireteam_index_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_fireteam_index_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_set_fireteam_index_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_vitality_adjustment_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_vitality_adjustment_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_vitality_adjustment_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_vitality_adjustment_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_get_distance_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_object_get_distance_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_get_distance_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_object_get_distance_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_requisition_palette_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_set_requisition_palette_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_requisition_palette_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_set_requisition_palette_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_device_set_power_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_device_set_power_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_device_set_power_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_device_set_power_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_device_get_power_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_device_get_power_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_device_get_power_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_device_get_power_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_device_set_position_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_device_set_position_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_device_set_position_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_device_set_position_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_device_get_position_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_device_get_position_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_device_get_position_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_device_get_position_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_adjust_grenades_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_adjust_grenades_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_adjust_grenades_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_adjust_grenades_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_submit_incident_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_submit_incident_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_submit_incident_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_submit_incident_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_submit_incident_with_custom_value_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_submit_incident_with_custom_value_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_submit_incident_with_custom_value_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_submit_incident_with_custom_value_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_loadout_palette_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_set_loadout_palette_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_loadout_palette_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_set_loadout_palette_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_device_set_position_track_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_device_set_position_track_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_device_set_position_track_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_device_set_position_track_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_device_animate_position_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_device_animate_position_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_device_animate_position_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_device_animate_position_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_device_set_position_immediate_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_device_set_position_immediate_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_device_set_position_immediate_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_device_set_position_immediate_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_saved_film_insert_marker_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_saved_film_insert_marker_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_saved_film_insert_marker_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_saved_film_insert_marker_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_respawn_zone_enable_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_respawn_zone_enable_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_respawn_zone_enable_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_respawn_zone_enable_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_get_weapon_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_get_weapon_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_get_weapon_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_get_weapon_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_get_equipment_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_get_equipment_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_get_equipment_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_get_equipment_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_set_never_garbage_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_object_set_never_garbage_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_set_never_garbage_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_object_set_never_garbage_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_get_target_object_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_get_target_object_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_get_target_object_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_get_target_object_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_create_tunnel_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_create_tunnel_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_create_tunnel_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_create_tunnel_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_debug_force_player_view_count_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_debug_force_player_view_count_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_debug_force_player_view_count_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_debug_force_player_view_count_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_pick_up_weapon_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_pick_up_weapon_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_pick_up_weapon_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_pick_up_weapon_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_coop_spawning_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_player_set_coop_spawning_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_player_set_coop_spawning_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_player_set_coop_spawning_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_set_orientation_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_object_set_orientation_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_set_orientation_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_object_set_orientation_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_face_object_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_object_face_object_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_object_face_object_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_object_face_object_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_biped_give_weapon_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_biped_give_weapon_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_biped_give_weapon_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_biped_give_weapon_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_biped_drop_weapon_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_biped_drop_weapon_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_biped_drop_weapon_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_biped_drop_weapon_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_scenario_interpolator_state_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_set_scenario_interpolator_state_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_set_scenario_interpolator_state_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_set_scenario_interpolator_state_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_get_random_object_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_get_random_object_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_get_random_object_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_get_random_object_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_game_grief_record_custom_penalty_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_game_grief_record_custom_penalty_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_game_grief_record_custom_penalty_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_game_grief_record_custom_penalty_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: void s_action_boundary_set_player_color_parameters::encode(class c_bitstream *) const
//{
//    mangled_ppc("?encode@s_action_boundary_set_player_color_parameters@@QBAXPAVc_bitstream@@@Z");
//};

//public: void s_action_boundary_set_player_color_parameters::decode(class c_bitstream *)
//{
//    mangled_ppc("?decode@s_action_boundary_set_player_color_parameters@@QAAXPAVc_bitstream@@@Z");
//};

//public: c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>(void)
//{
//    mangled_ppc("??0?$c_enum@W4e_action_type@@E$0A@$0GD@Us_default_enum_string_resolver@@@@QAA@XZ");
//};

//public: c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>(enum e_action_type)
//{
//    mangled_ppc("??0?$c_enum@W4e_action_type@@E$0A@$0GD@Us_default_enum_string_resolver@@@@QAA@W4e_action_type@@@Z");
//};

//public: enum e_action_type c_enum_no_init<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::operator enum e_action_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_action_type@@E$0A@$0GD@Us_default_enum_string_resolver@@@@QBA?AW4e_action_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::operator==(enum e_action_type) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_action_type@@E$0A@$0GD@Us_default_enum_string_resolver@@@@QBA_NW4e_action_type@@@Z");
//};

//public: bool c_enum_no_init<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_action_type@@E$0A@$0GD@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: bool c_enum_no_init<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator==(enum e_action_team_or_player_target) const
//{
//    mangled_ppc("??8?$c_enum_no_init@W4e_action_team_or_player_target@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NW4e_action_team_or_player_target@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_action_type@@E$0A@$0GD@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_action_type@@E$0A@$0GD@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_action_type@@E$0A@$0GD@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_action_type@@E$0A@$0GD@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_action_team_or_player_target@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_action_team_or_player_target@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_action_team_or_player_target@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_action_team_or_player_target@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_math_operation@@E$0A@$0L@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_math_operation@@E$0A@$0L@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_math_operation@@E$0A@$0L@Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_math_operation@@E$0A@$0L@Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_index<16, unsigned char>(char const *, unsigned char)
//{
//    mangled_ppc("??$write_index@$0BA@E@c_bitstream@@QAAXPBDE@Z");
//};

//public: void c_bitstream::write_flags<class c_flags<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_flags@V?$c_flags@W4e_create_object_flags@@E$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_flags@W4e_create_object_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_flags<class c_flags<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver> >(char const *, class c_flags<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_flags@V?$c_flags@W4e_create_object_flags@@E$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_flags@W4e_create_object_flags@@E$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_index<95, unsigned char>(char const *, unsigned char)
//{
//    mangled_ppc("??$write_index@$0FP@E@c_bitstream@@QAAXPBDE@Z");
//};

//public: void c_bitstream::write_index<95, char>(char const *, char)
//{
//    mangled_ppc("??$write_index@$0FP@D@c_bitstream@@QAAXPBDD@Z");
//};

//public: void c_bitstream::write_enum<class c_enum<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum@W4e_grenade_type@@E$0A@$01Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum@W4e_grenade_type@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> >(char const *, class c_enum<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum@W4e_grenade_type@@E$0A@$01Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum@W4e_grenade_type@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::write_index<1000, long>(char const *, long)
//{
//    mangled_ppc("??$write_index@$0DOI@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: long c_bitstream::read_index<1000>(char const *)
//{
//    mangled_ppc("??$read_index@$0DOI@@c_bitstream@@QAAJPBD@Z");
//};

//public: void c_bitstream::write_index<255, long>(char const *, long)
//{
//    mangled_ppc("??$write_index@$0PP@J@c_bitstream@@QAAXPBDJ@Z");
//};

//public: void c_bitstream::write_enum<class c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$write_enum@V?$c_enum_no_init@W4e_biped_give_weapon_mode@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDV?$c_enum_no_init@W4e_biped_give_weapon_mode@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_bitstream::read_enum<class c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(char const *, class c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> *)
//{
//    mangled_ppc("??$read_enum@V?$c_enum_no_init@W4e_biped_give_weapon_mode@@E$0A@$02Us_default_enum_string_resolver@@@@@c_bitstream@@QAAXPBDPAV?$c_enum_no_init@W4e_biped_give_weapon_mode@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: void c_enum_no_init<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_action_type@@E$0A@$0GD@Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: enum e_action_team_or_player_target c_enum_no_init<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_action_team_or_player_target(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_action_team_or_player_target@@E$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_action_team_or_player_target@@XZ");
//};

//public: bool c_enum_no_init<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_action_team_or_player_target@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_action_team_or_player_target@@E$0A@$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: enum e_math_operation c_enum_no_init<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver>::operator enum e_math_operation(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_math_operation@@E$0A@$0L@Us_default_enum_string_resolver@@@@QBA?AW4e_math_operation@@XZ");
//};

//public: bool c_enum_no_init<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_math_operation@@E$0A@$0L@Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_math_operation@@E$0A@$0L@Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: enum e_grenade_type c_enum_no_init<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::operator enum e_grenade_type(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_grenade_type@@E$0A@$01Us_default_enum_string_resolver@@@@QBA?AW4e_grenade_type@@XZ");
//};

//public: bool c_enum_no_init<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_grenade_type@@E$0A@$01Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_grenade_type@@E$0A@$01Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//public: enum e_biped_give_weapon_mode c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::operator enum e_biped_give_weapon_mode(void) const
//{
//    mangled_ppc("??B?$c_enum_no_init@W4e_biped_give_weapon_mode@@E$0A@$02Us_default_enum_string_resolver@@@@QBA?AW4e_biped_give_weapon_mode@@XZ");
//};

//public: bool c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::in_range(void) const
//{
//    mangled_ppc("?in_range@?$c_enum_no_init@W4e_biped_give_weapon_mode@@E$0A@$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//public: void c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::set_raw_value(unsigned char)
//{
//    mangled_ppc("?set_raw_value@?$c_enum_no_init@W4e_biped_give_weapon_mode@@E$0A@$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver> >(class c_enum<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_action_type@@E$0A@$0GD@Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_action_type@@E$0A@$0GD@Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_action_type c_enum_no_init<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_action_type@@E$0A@$0GD@Us_default_enum_string_resolver@@@@SA?AW4e_action_type@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_action_type, unsigned char, 0, 99, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_action_type@@E$0A@$0GD@Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_action_team_or_player_target@@E$0A@$02Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_action_team_or_player_target@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_action_team_or_player_target c_enum_no_init<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_action_team_or_player_target@@E$0A@$02Us_default_enum_string_resolver@@@@SA?AW4e_action_team_or_player_target@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_action_team_or_player_target, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_action_team_or_player_target@@E$0A@$02Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver> >(class c_enum<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_math_operation@@E$0A@$0L@Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_math_operation@@E$0A@$0L@Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_math_operation c_enum_no_init<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_math_operation@@E$0A@$0L@Us_default_enum_string_resolver@@@@SA?AW4e_math_operation@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_math_operation, unsigned char, 0, 11, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_math_operation@@E$0A@$0L@Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: unsigned char c_flags_no_init<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver>::get_unsafe(void) const
//{
//    mangled_ppc("?get_unsafe@?$c_flags_no_init@W4e_create_object_flags@@E$02Us_default_enum_string_resolver@@@@QBAEXZ");
//};

//public: void c_flags_no_init<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver>::set_unsafe(unsigned char)
//{
//    mangled_ppc("?set_unsafe@?$c_flags_no_init@W4e_create_object_flags@@E$02Us_default_enum_string_resolver@@@@QAAXE@Z");
//};

//long required_encoding_bits_for_enum<class c_enum<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver> >(class c_enum<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum@W4e_grenade_type@@E$0A@$01Us_default_enum_string_resolver@@@@@@YAJV?$c_enum@W4e_grenade_type@@E$0A@$01Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_grenade_type c_enum_no_init<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_grenade_type@@E$0A@$01Us_default_enum_string_resolver@@@@SA?AW4e_grenade_type@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_grenade_type, unsigned char, 0, 2, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_grenade_type@@E$0A@$01Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//long required_encoding_bits_for_index<1000>(void)
//{
//    mangled_ppc("??$required_encoding_bits_for_index@$0DOI@@@YAJXZ");
//};

//long required_encoding_bits_for_enum<class c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver> >(class c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>)
//{
//    mangled_ppc("??$required_encoding_bits_for_enum@V?$c_enum_no_init@W4e_biped_give_weapon_mode@@E$0A@$02Us_default_enum_string_resolver@@@@@@YAJV?$c_enum_no_init@W4e_biped_give_weapon_mode@@E$0A@$02Us_default_enum_string_resolver@@@@@Z");
//};

//public: static enum e_biped_give_weapon_mode c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_enum<int>(int)
//{
//    mangled_ppc("??$cast_to_enum@H@?$c_enum_no_init@W4e_biped_give_weapon_mode@@E$0A@$02Us_default_enum_string_resolver@@@@SA?AW4e_biped_give_weapon_mode@@H@Z");
//};

//public: static unsigned char c_enum_no_init<enum e_biped_give_weapon_mode, unsigned char, 0, 3, struct s_default_enum_string_resolver>::cast_to_storage<unsigned long>(unsigned long)
//{
//    mangled_ppc("??$cast_to_storage@K@?$c_enum_no_init@W4e_biped_give_weapon_mode@@E$0A@$02Us_default_enum_string_resolver@@@@SAEK@Z");
//};

//public: bool c_flags_no_init<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver>::valid(void) const
//{
//    mangled_ppc("?valid@?$c_flags_no_init@W4e_create_object_flags@@E$02Us_default_enum_string_resolver@@@@QBA_NXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_mask_with_all_valid_bits_on_size_type(void)
//{
//    mangled_ppc("?make_mask_with_all_valid_bits_on_size_type@?$c_flags_no_init@W4e_create_object_flags@@E$02Us_default_enum_string_resolver@@@@CAEXZ");
//};

//private: static unsigned char c_flags_no_init<enum e_create_object_flags, unsigned char, 3, struct s_default_enum_string_resolver>::make_N_bit_mask_size_type(enum e_create_object_flags)
//{
//    mangled_ppc("?make_N_bit_mask_size_type@?$c_flags_no_init@W4e_create_object_flags@@E$02Us_default_enum_string_resolver@@@@CAEW4e_create_object_flags@@@Z");
//};

